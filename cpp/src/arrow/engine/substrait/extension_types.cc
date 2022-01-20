// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#include "arrow/engine/substrait/extension_types.h"

#include <unordered_map>
#include <unordered_set>

#include "arrow/engine/simple_extension_type_internal.h"
#include "arrow/util/hash_util.h"
#include "arrow/util/hashing.h"
#include "arrow/util/string_view.h"

namespace arrow {
namespace engine {
namespace {

constexpr util::string_view kUuidExtensionName = "uuid";
struct UuidExtensionParams {};
std::shared_ptr<DataType> UuidGetStorage(const UuidExtensionParams&) {
  return fixed_size_binary(16);
}
static auto kUuidExtensionParamsProperties = internal::MakeProperties();

using UuidType = SimpleExtensionType<kUuidExtensionName, UuidExtensionParams,
                                     decltype(kUuidExtensionParamsProperties),
                                     &kUuidExtensionParamsProperties, UuidGetStorage>;

constexpr util::string_view kFixedCharExtensionName = "fixed_char";
struct FixedCharExtensionParams {
  int32_t length;
};
std::shared_ptr<DataType> FixedCharGetStorage(const FixedCharExtensionParams& params) {
  return fixed_size_binary(params.length);
}
static auto kFixedCharExtensionParamsProperties = internal::MakeProperties(
    internal::DataMember("length", &FixedCharExtensionParams::length));

using FixedCharType =
    SimpleExtensionType<kFixedCharExtensionName, FixedCharExtensionParams,
                        decltype(kFixedCharExtensionParamsProperties),
                        &kFixedCharExtensionParamsProperties, FixedCharGetStorage>;

constexpr util::string_view kVarCharExtensionName = "varchar";
struct VarCharExtensionParams {
  int32_t length;
};
std::shared_ptr<DataType> VarCharGetStorage(const VarCharExtensionParams&) {
  return utf8();
}
static auto kVarCharExtensionParamsProperties = internal::MakeProperties(
    internal::DataMember("length", &VarCharExtensionParams::length));

using VarCharType =
    SimpleExtensionType<kVarCharExtensionName, VarCharExtensionParams,
                        decltype(kVarCharExtensionParamsProperties),
                        &kVarCharExtensionParamsProperties, VarCharGetStorage>;

constexpr util::string_view kIntervalYearExtensionName = "interval_year";
struct IntervalYearExtensionParams {};
std::shared_ptr<DataType> IntervalYearGetStorage(const IntervalYearExtensionParams&) {
  return fixed_size_list(int32(), 2);
}
static auto kIntervalYearExtensionParamsProperties = internal::MakeProperties();

using IntervalYearType =
    SimpleExtensionType<kIntervalYearExtensionName, IntervalYearExtensionParams,
                        decltype(kIntervalYearExtensionParamsProperties),
                        &kIntervalYearExtensionParamsProperties, IntervalYearGetStorage>;

constexpr util::string_view kIntervalDayExtensionName = "interval_day";
struct IntervalDayExtensionParams {};
std::shared_ptr<DataType> IntervalDayGetStorage(const IntervalDayExtensionParams&) {
  return fixed_size_list(int32(), 2);
}
static auto kIntervalDayExtensionParamsProperties = internal::MakeProperties();

using IntervalDayType =
    SimpleExtensionType<kIntervalDayExtensionName, IntervalDayExtensionParams,
                        decltype(kIntervalDayExtensionParamsProperties),
                        &kIntervalDayExtensionParamsProperties, IntervalDayGetStorage>;

}  // namespace

std::shared_ptr<DataType> uuid() { return UuidType::Make({}); }

std::shared_ptr<DataType> fixed_char(int32_t length) {
  return FixedCharType::Make({length});
}

std::shared_ptr<DataType> varchar(int32_t length) { return VarCharType::Make({length}); }

std::shared_ptr<DataType> interval_year() { return IntervalYearType::Make({}); }

std::shared_ptr<DataType> interval_day() { return IntervalDayType::Make({}); }

bool UnwrapUuid(const DataType& t) {
  if (UuidType::GetIf(t)) {
    return true;
  }
  return false;
}

util::optional<int32_t> UnwrapFixedChar(const DataType& t) {
  if (auto params = FixedCharType::GetIf(t)) {
    return params->length;
  }
  return util::nullopt;
}

util::optional<int32_t> UnwrapVarChar(const DataType& t) {
  if (auto params = VarCharType::GetIf(t)) {
    return params->length;
  }
  return util::nullopt;
}

bool UnwrapIntervalYear(const DataType& t) {
  if (IntervalYearType::GetIf(t)) {
    return true;
  }
  return false;
}

bool UnwrapIntervalDay(const DataType& t) {
  if (IntervalDayType::GetIf(t)) {
    return true;
  }
  return false;
}

namespace {

struct TypePtrHashEq {
  template <typename Ptr>
  size_t operator()(const Ptr& type) const {
    return type->Hash();
  }

  template <typename Ptr>
  bool operator()(const Ptr& l, const Ptr& r) const {
    return *l == *r;
  }
};

struct IdHashEq {
  using Id = ExtensionSet::Id;

  size_t operator()(Id id) const {
    constexpr ::arrow::internal::StringViewHash hash = {};
    auto out = hash(id.uri);
    ::arrow::internal::hash_combine(out, hash(id.name));
    return out;
  }

  bool operator()(Id l, Id r) const { return l.uri == r.uri && l.name == r.name; }
};

}  // namespace

struct ExtensionSet::Impl {
  void AddUri(util::string_view uri, ExtensionSet* self) {
    if (uris_.find(uri) != uris_.end()) return;

    self->uris_.push_back(uri);
    uris_.insert(self->uris_.back());  // lookup helper's keys should reference memory
                                       // owned by this ExtensionSet
  }

  Status CheckHasUri(util::string_view uri) {
    if (uris_.find(uri) != uris_.end()) return Status::OK();

    return Status::Invalid(
        "Uri ", uri,
        " was referenced by an extension but was not declared in the ExtensionSet.");
  }

  uint32_t EncodeType(Id id, const std::shared_ptr<DataType>& type, bool is_variation,
                      ExtensionSet* self) {
    // note: at this point we're guaranteed to have an Id which points to memory owned by
    // the set's registry.
    AddUri(id.uri, self);
    auto it_success = types_.emplace(id, static_cast<uint32_t>(types_.size()));

    if (it_success.second) {
      DCHECK_EQ(self->type_ids_.size(), self->types_.size());
      self->type_ids_.push_back(id);
      self->types_.push_back(type);
      self->type_is_variation_.push_back(is_variation);
    }

    return it_success.first->second;
  }

  uint32_t EncodeFunction(Id id, util::string_view function_name, ExtensionSet* self) {
    // note: at this point we're guaranteed to have an Id which points to memory owned by
    // the set's registry.
    AddUri(id.uri, self);
    auto it_success = functions_.emplace(id, static_cast<uint32_t>(functions_.size()));

    if (it_success.second) {
      DCHECK_EQ(self->function_ids_.size(), self->function_names_.size());
      self->function_ids_.push_back(id);
      self->function_names_.push_back(function_name);
    }

    return it_success.first->second;
  }

  std::unordered_set<util::string_view, ::arrow::internal::StringViewHash> uris_;
  std::unordered_map<Id, uint32_t, IdHashEq, IdHashEq> types_, functions_;
};

ExtensionSet::ExtensionSet(ExtensionIdRegistry* registry)
    : registry_(registry), impl_(new Impl(), [](Impl* impl) { delete impl; }) {}

Result<ExtensionSet> ExtensionSet::Make(std::vector<util::string_view> uris,
                                        std::vector<Id> type_ids,
                                        std::vector<bool> type_is_variation,
                                        std::vector<Id> function_ids,
                                        ExtensionIdRegistry* registry) {
  ExtensionSet set;
  set.registry_ = registry;

  // TODO(bkietz) move this into the registry as registry->OwnUris(&uris) or so
  std::unordered_set<util::string_view, ::arrow::internal::StringViewHash>
      uris_owned_by_registry;
  for (util::string_view uri : registry->Uris()) {
    uris_owned_by_registry.insert(uri);
  }

  for (auto& uri : uris) {
    if (uri.empty()) continue;
    auto it = uris_owned_by_registry.find(uri);
    if (it == uris_owned_by_registry.end()) {
      return Status::KeyError("Uri '", uri, "' not found in registry");
    }
    uri = *it;  // Ensure uris point into the registry's memory
    set.impl_->AddUri(*it, &set);
  }

  if (type_ids.size() != type_is_variation.size()) {
    return Status::Invalid("Received ", type_ids.size(), " type ids but a ",
                           type_is_variation.size(), "-long is_variation vector");
  }

  set.types_.resize(type_ids.size());

  for (size_t i = 0; i < type_ids.size(); ++i) {
    if (type_ids[i].empty()) continue;
    RETURN_NOT_OK(set.impl_->CheckHasUri(type_ids[i].uri));

    if (auto rec = registry->GetType(type_ids[i], type_is_variation[i])) {
      set.types_[i] = rec->type;
      type_ids[i] = rec->id;  // use Id which references memory owned by the registry
      continue;
    }
    return Status::Invalid("Type", (type_is_variation[i] ? " variation" : ""), " ",
                           type_ids[i].uri, "#", type_ids[i].name, " not found");
  }

  set.function_names_.resize(function_ids.size());

  for (size_t i = 0; i < function_ids.size(); ++i) {
    if (function_ids[i].empty()) continue;
    RETURN_NOT_OK(set.impl_->CheckHasUri(function_ids[i].uri));

    if (auto rec = registry->GetFunction(function_ids[i])) {
      set.function_names_[i] = rec->function_name;
      function_ids[i] = rec->id;  // use Id which references memory owned by the registry
      continue;
    }
    return Status::Invalid("Function ", function_ids[i].uri, "#", type_ids[i].name,
                           " not found");
  }

  set.function_ids_ = std::move(function_ids);
  set.type_ids_ = std::move(type_ids);
  set.type_is_variation_ = std::move(type_is_variation);
  set.uris_ = std::move(uris);

  return std::move(set);
}

Result<uint32_t> ExtensionSet::EncodeType(const DataType& type) {
  if (auto rec = registry_->GetType(type)) {
    return impl_->EncodeType(rec->id, rec->type, rec->is_variation, this);
  }
  return Status::KeyError("type ", type.ToString(), " not found in the registry");
}

Result<uint32_t> ExtensionSet::EncodeFunction(util::string_view function_name) {
  if (auto rec = registry_->GetFunction(function_name)) {
    return impl_->EncodeFunction(rec->id, rec->function_name, this);
  }
  return Status::KeyError("function ", function_name, " not found in the registry");
}

template <typename KeyToIndex, typename Key>
const int* GetIndex(const KeyToIndex& key_to_index, const Key& key) {
  auto it = key_to_index.find(key);
  if (it == key_to_index.end()) return nullptr;
  return &it->second;
}

ExtensionIdRegistry* default_extension_id_registry() {
  static struct Impl : ExtensionIdRegistry {
    Impl() {
      struct TypeName {
        std::shared_ptr<DataType> type;
        util::string_view name;
      };

      for (TypeName e : {
               TypeName{uint8(), "u8"},
               TypeName{uint16(), "u16"},
               TypeName{uint32(), "u32"},
               TypeName{uint64(), "u64"},
           }) {
        DCHECK_OK(RegisterType({kArrowExtTypesUri, e.name}, std::move(e.type),
                               /*is_variation=*/true));
      }

      for (TypeName e : {
               TypeName{null(), "null"},
           }) {
        DCHECK_OK(RegisterType({kArrowExtTypesUri, e.name}, std::move(e.type),
                               /*is_variation=*/false));
      }

      for (util::string_view name : {
               "add",
           }) {
        DCHECK_OK(RegisterFunction({kArrowExtTypesUri, name}, name.to_string()));
      }
    }

    std::vector<util::string_view> Uris() const override {
      return {uris_.begin(), uris_.end()};
    }

    util::optional<TypeRecord> GetType(const DataType& type) const override {
      if (auto index = GetIndex(type_to_index_, &type)) {
        return TypeRecord{ids_[*index], types_[*index], type_is_variation_[*index]};
      }
      return {};
    }

    util::optional<TypeRecord> GetType(Id id, bool is_variation) const override {
      if (auto index =
              GetIndex(is_variation ? variation_id_to_index_ : id_to_index_, id)) {
        return TypeRecord{ids_[*index], types_[*index], type_is_variation_[*index]};
      }
      return {};
    }

    Status RegisterType(Id id, std::shared_ptr<DataType> type,
                        bool is_variation) override {
      DCHECK_EQ(ids_.size(), types_.size());
      DCHECK_EQ(ids_.size(), type_is_variation_.size());

      Id copied_id{*uris_.emplace(id.uri.to_string()).first,
                   *names_.emplace(id.name.to_string()).first};

      size_t index = ids_.size();

      auto* id_to_index = is_variation ? &variation_id_to_index_ : &id_to_index_;
      auto it_success = id_to_index->emplace(copied_id, index);

      if (!it_success.second) {
        return Status::Invalid("Type id was already registered");
      }

      if (!type_to_index_.emplace(type.get(), index).second) {
        id_to_index->erase(it_success.first);
        return Status::Invalid("Type was already registered");
      }

      ids_.push_back(copied_id);
      types_.push_back(std::move(type));
      type_is_variation_.push_back(is_variation);
      return Status::OK();
    }

    util::optional<FunctionRecord> GetFunction(
        util::string_view arrow_function_name) const override {
      if (auto index = GetIndex(function_name_to_index_, arrow_function_name)) {
        return FunctionRecord{function_ids_[*index], *function_name_ptrs_[*index]};
      }
      return {};
    }

    util::optional<FunctionRecord> GetFunction(Id id) const override {
      if (auto index = GetIndex(function_id_to_index_, id)) {
        return FunctionRecord{function_ids_[*index], *function_name_ptrs_[*index]};
      }
      return {};
    }

    Status RegisterFunction(Id id, std::string arrow_function_name) override {
      DCHECK_EQ(function_ids_.size(), function_name_ptrs_.size());

      Id copied_id{*uris_.emplace(id.uri.to_string()).first,
                   *names_.emplace(id.name.to_string()).first};

      const std::string& copied_function_name{
          *function_names_.emplace(std::move(arrow_function_name)).first};

      size_t index = function_ids_.size();

      auto it_success = function_id_to_index_.emplace(copied_id, index);

      if (!it_success.second) {
        return Status::Invalid("Function id was already registered");
      }

      if (!function_name_to_index_.emplace(copied_function_name, index).second) {
        function_id_to_index_.erase(it_success.first);
        return Status::Invalid("Function name was already registered");
      }

      function_name_ptrs_.push_back(&copied_function_name);
      function_ids_.push_back(copied_id);
      return Status::OK();
    }

    // owning storage of uris, names, (arrow::)function_names, types
    //    note that storing strings like this is safe since references into an
    //    unordered_set are not invalidated on insertion
    std::unordered_set<std::string> uris_, names_, function_names_;
    DataTypeVector types_;
    std::vector<bool> type_is_variation_;

    // non-owning lookup helpers
    std::vector<Id> ids_, function_ids_;
    std::unordered_map<Id, int, IdHashEq, IdHashEq> id_to_index_, variation_id_to_index_;
    std::unordered_map<const DataType*, int, TypePtrHashEq, TypePtrHashEq> type_to_index_;

    std::vector<const std::string*> function_name_ptrs_;
    std::unordered_map<Id, int, IdHashEq, IdHashEq> function_id_to_index_;
    std::unordered_map<util::string_view, int, ::arrow::internal::StringViewHash>
        function_name_to_index_;
  } impl_;

  return &impl_;
}

}  // namespace engine
}  // namespace arrow
