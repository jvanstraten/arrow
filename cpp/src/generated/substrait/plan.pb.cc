// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: plan.proto

#include "plan.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace io {
namespace substrait {
constexpr PlanRel::PlanRel(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : _oneof_case_{}{}
struct PlanRelDefaultTypeInternal {
  constexpr PlanRelDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PlanRelDefaultTypeInternal() {}
  union {
    PlanRel _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PlanRelDefaultTypeInternal _PlanRel_default_instance_;
constexpr Plan::Plan(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : extension_uris_()
  , extensions_()
  , relations_()
  , expected_type_urls_()
  , advanced_extensions_(nullptr){}
struct PlanDefaultTypeInternal {
  constexpr PlanDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PlanDefaultTypeInternal() {}
  union {
    Plan _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PlanDefaultTypeInternal _Plan_default_instance_;
}  // namespace substrait
}  // namespace io
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_plan_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_plan_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_plan_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_plan_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::io::substrait::PlanRel, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::io::substrait::PlanRel, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  PROTOBUF_FIELD_OFFSET(::io::substrait::PlanRel, RelType_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::io::substrait::Plan, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::io::substrait::Plan, extension_uris_),
  PROTOBUF_FIELD_OFFSET(::io::substrait::Plan, extensions_),
  PROTOBUF_FIELD_OFFSET(::io::substrait::Plan, relations_),
  PROTOBUF_FIELD_OFFSET(::io::substrait::Plan, advanced_extensions_),
  PROTOBUF_FIELD_OFFSET(::io::substrait::Plan, expected_type_urls_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::io::substrait::PlanRel)},
  { 8, -1, sizeof(::io::substrait::Plan)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::io::substrait::_PlanRel_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::io::substrait::_Plan_default_instance_),
};

const char descriptor_table_protodef_plan_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nplan.proto\022\014io.substrait\032\017relations.pr"
  "oto\032\020extensions.proto\"]\n\007PlanRel\022 \n\003rel\030"
  "\001 \001(\0132\021.io.substrait.RelH\000\022%\n\004root\030\002 \001(\013"
  "2\025.io.substrait.RelRootH\000B\t\n\007RelType\"\243\002\n"
  "\004Plan\022C\n\016extension_uris\030\001 \003(\0132+.io.subst"
  "rait.extensions.SimpleExtensionURI\022G\n\nex"
  "tensions\030\002 \003(\01323.io.substrait.extensions"
  ".SimpleExtensionDeclaration\022(\n\trelations"
  "\030\003 \003(\0132\025.io.substrait.PlanRel\022G\n\023advance"
  "d_extensions\030\004 \001(\0132*.io.substrait.extens"
  "ions.AdvancedExtension\022\032\n\022expected_type_"
  "urls\030\005 \003(\tB+\n\022io.substrait.protoP\001\252\002\022Sub"
  "strait.Protobufb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_plan_2eproto_deps[2] = {
  &::descriptor_table_extensions_2eproto,
  &::descriptor_table_relations_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_plan_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_plan_2eproto = {
  false, false, 503, descriptor_table_protodef_plan_2eproto, "plan.proto", 
  &descriptor_table_plan_2eproto_once, descriptor_table_plan_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_plan_2eproto::offsets,
  file_level_metadata_plan_2eproto, file_level_enum_descriptors_plan_2eproto, file_level_service_descriptors_plan_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_plan_2eproto_getter() {
  return &descriptor_table_plan_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_plan_2eproto(&descriptor_table_plan_2eproto);
namespace io {
namespace substrait {

// ===================================================================

class PlanRel::_Internal {
 public:
  static const ::io::substrait::Rel& rel(const PlanRel* msg);
  static const ::io::substrait::RelRoot& root(const PlanRel* msg);
};

const ::io::substrait::Rel&
PlanRel::_Internal::rel(const PlanRel* msg) {
  return *msg->RelType_.rel_;
}
const ::io::substrait::RelRoot&
PlanRel::_Internal::root(const PlanRel* msg) {
  return *msg->RelType_.root_;
}
void PlanRel::set_allocated_rel(::io::substrait::Rel* rel) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  clear_RelType();
  if (rel) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(rel)->GetArena();
    if (message_arena != submessage_arena) {
      rel = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, rel, submessage_arena);
    }
    set_has_rel();
    RelType_.rel_ = rel;
  }
  // @@protoc_insertion_point(field_set_allocated:io.substrait.PlanRel.rel)
}
void PlanRel::clear_rel() {
  if (_internal_has_rel()) {
    if (GetArena() == nullptr) {
      delete RelType_.rel_;
    }
    clear_has_RelType();
  }
}
void PlanRel::set_allocated_root(::io::substrait::RelRoot* root) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  clear_RelType();
  if (root) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(root)->GetArena();
    if (message_arena != submessage_arena) {
      root = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, root, submessage_arena);
    }
    set_has_root();
    RelType_.root_ = root;
  }
  // @@protoc_insertion_point(field_set_allocated:io.substrait.PlanRel.root)
}
void PlanRel::clear_root() {
  if (_internal_has_root()) {
    if (GetArena() == nullptr) {
      delete RelType_.root_;
    }
    clear_has_RelType();
  }
}
PlanRel::PlanRel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:io.substrait.PlanRel)
}
PlanRel::PlanRel(const PlanRel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  clear_has_RelType();
  switch (from.RelType_case()) {
    case kRel: {
      _internal_mutable_rel()->::io::substrait::Rel::MergeFrom(from._internal_rel());
      break;
    }
    case kRoot: {
      _internal_mutable_root()->::io::substrait::RelRoot::MergeFrom(from._internal_root());
      break;
    }
    case RELTYPE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:io.substrait.PlanRel)
}

void PlanRel::SharedCtor() {
clear_has_RelType();
}

PlanRel::~PlanRel() {
  // @@protoc_insertion_point(destructor:io.substrait.PlanRel)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PlanRel::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (has_RelType()) {
    clear_RelType();
  }
}

void PlanRel::ArenaDtor(void* object) {
  PlanRel* _this = reinterpret_cast< PlanRel* >(object);
  (void)_this;
}
void PlanRel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PlanRel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void PlanRel::clear_RelType() {
// @@protoc_insertion_point(one_of_clear_start:io.substrait.PlanRel)
  switch (RelType_case()) {
    case kRel: {
      if (GetArena() == nullptr) {
        delete RelType_.rel_;
      }
      break;
    }
    case kRoot: {
      if (GetArena() == nullptr) {
        delete RelType_.root_;
      }
      break;
    }
    case RELTYPE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = RELTYPE_NOT_SET;
}


void PlanRel::Clear() {
// @@protoc_insertion_point(message_clear_start:io.substrait.PlanRel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_RelType();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PlanRel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .io.substrait.Rel rel = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_rel(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .io.substrait.RelRoot root = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_root(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PlanRel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:io.substrait.PlanRel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .io.substrait.Rel rel = 1;
  if (_internal_has_rel()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::rel(this), target, stream);
  }

  // .io.substrait.RelRoot root = 2;
  if (_internal_has_root()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::root(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:io.substrait.PlanRel)
  return target;
}

size_t PlanRel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:io.substrait.PlanRel)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (RelType_case()) {
    // .io.substrait.Rel rel = 1;
    case kRel: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *RelType_.rel_);
      break;
    }
    // .io.substrait.RelRoot root = 2;
    case kRoot: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *RelType_.root_);
      break;
    }
    case RELTYPE_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PlanRel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:io.substrait.PlanRel)
  GOOGLE_DCHECK_NE(&from, this);
  const PlanRel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PlanRel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:io.substrait.PlanRel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:io.substrait.PlanRel)
    MergeFrom(*source);
  }
}

void PlanRel::MergeFrom(const PlanRel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:io.substrait.PlanRel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.RelType_case()) {
    case kRel: {
      _internal_mutable_rel()->::io::substrait::Rel::MergeFrom(from._internal_rel());
      break;
    }
    case kRoot: {
      _internal_mutable_root()->::io::substrait::RelRoot::MergeFrom(from._internal_root());
      break;
    }
    case RELTYPE_NOT_SET: {
      break;
    }
  }
}

void PlanRel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:io.substrait.PlanRel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PlanRel::CopyFrom(const PlanRel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:io.substrait.PlanRel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlanRel::IsInitialized() const {
  return true;
}

void PlanRel::InternalSwap(PlanRel* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(RelType_, other->RelType_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata PlanRel::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_plan_2eproto_getter, &descriptor_table_plan_2eproto_once,
      file_level_metadata_plan_2eproto[0]);
}

// ===================================================================

class Plan::_Internal {
 public:
  static const ::io::substrait::extensions::AdvancedExtension& advanced_extensions(const Plan* msg);
};

const ::io::substrait::extensions::AdvancedExtension&
Plan::_Internal::advanced_extensions(const Plan* msg) {
  return *msg->advanced_extensions_;
}
void Plan::clear_extension_uris() {
  extension_uris_.Clear();
}
void Plan::clear_extensions() {
  extensions_.Clear();
}
void Plan::clear_advanced_extensions() {
  if (GetArena() == nullptr && advanced_extensions_ != nullptr) {
    delete advanced_extensions_;
  }
  advanced_extensions_ = nullptr;
}
Plan::Plan(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  extension_uris_(arena),
  extensions_(arena),
  relations_(arena),
  expected_type_urls_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:io.substrait.Plan)
}
Plan::Plan(const Plan& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      extension_uris_(from.extension_uris_),
      extensions_(from.extensions_),
      relations_(from.relations_),
      expected_type_urls_(from.expected_type_urls_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_advanced_extensions()) {
    advanced_extensions_ = new ::io::substrait::extensions::AdvancedExtension(*from.advanced_extensions_);
  } else {
    advanced_extensions_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:io.substrait.Plan)
}

void Plan::SharedCtor() {
advanced_extensions_ = nullptr;
}

Plan::~Plan() {
  // @@protoc_insertion_point(destructor:io.substrait.Plan)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Plan::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete advanced_extensions_;
}

void Plan::ArenaDtor(void* object) {
  Plan* _this = reinterpret_cast< Plan* >(object);
  (void)_this;
}
void Plan::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Plan::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Plan::Clear() {
// @@protoc_insertion_point(message_clear_start:io.substrait.Plan)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  extension_uris_.Clear();
  extensions_.Clear();
  relations_.Clear();
  expected_type_urls_.Clear();
  if (GetArena() == nullptr && advanced_extensions_ != nullptr) {
    delete advanced_extensions_;
  }
  advanced_extensions_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Plan::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .io.substrait.extensions.SimpleExtensionURI extension_uris = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_extension_uris(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .io.substrait.extensions.SimpleExtensionDeclaration extensions = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_extensions(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .io.substrait.PlanRel relations = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_relations(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // .io.substrait.extensions.AdvancedExtension advanced_extensions = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_advanced_extensions(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string expected_type_urls = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_expected_type_urls();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "io.substrait.Plan.expected_type_urls"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Plan::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:io.substrait.Plan)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .io.substrait.extensions.SimpleExtensionURI extension_uris = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_extension_uris_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_extension_uris(i), target, stream);
  }

  // repeated .io.substrait.extensions.SimpleExtensionDeclaration extensions = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_extensions_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_extensions(i), target, stream);
  }

  // repeated .io.substrait.PlanRel relations = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_relations_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_relations(i), target, stream);
  }

  // .io.substrait.extensions.AdvancedExtension advanced_extensions = 4;
  if (this->has_advanced_extensions()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::advanced_extensions(this), target, stream);
  }

  // repeated string expected_type_urls = 5;
  for (int i = 0, n = this->_internal_expected_type_urls_size(); i < n; i++) {
    const auto& s = this->_internal_expected_type_urls(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "io.substrait.Plan.expected_type_urls");
    target = stream->WriteString(5, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:io.substrait.Plan)
  return target;
}

size_t Plan::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:io.substrait.Plan)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .io.substrait.extensions.SimpleExtensionURI extension_uris = 1;
  total_size += 1UL * this->_internal_extension_uris_size();
  for (const auto& msg : this->extension_uris_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .io.substrait.extensions.SimpleExtensionDeclaration extensions = 2;
  total_size += 1UL * this->_internal_extensions_size();
  for (const auto& msg : this->extensions_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .io.substrait.PlanRel relations = 3;
  total_size += 1UL * this->_internal_relations_size();
  for (const auto& msg : this->relations_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated string expected_type_urls = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(expected_type_urls_.size());
  for (int i = 0, n = expected_type_urls_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      expected_type_urls_.Get(i));
  }

  // .io.substrait.extensions.AdvancedExtension advanced_extensions = 4;
  if (this->has_advanced_extensions()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *advanced_extensions_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Plan::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:io.substrait.Plan)
  GOOGLE_DCHECK_NE(&from, this);
  const Plan* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Plan>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:io.substrait.Plan)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:io.substrait.Plan)
    MergeFrom(*source);
  }
}

void Plan::MergeFrom(const Plan& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:io.substrait.Plan)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  extension_uris_.MergeFrom(from.extension_uris_);
  extensions_.MergeFrom(from.extensions_);
  relations_.MergeFrom(from.relations_);
  expected_type_urls_.MergeFrom(from.expected_type_urls_);
  if (from.has_advanced_extensions()) {
    _internal_mutable_advanced_extensions()->::io::substrait::extensions::AdvancedExtension::MergeFrom(from._internal_advanced_extensions());
  }
}

void Plan::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:io.substrait.Plan)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Plan::CopyFrom(const Plan& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:io.substrait.Plan)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Plan::IsInitialized() const {
  return true;
}

void Plan::InternalSwap(Plan* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  extension_uris_.InternalSwap(&other->extension_uris_);
  extensions_.InternalSwap(&other->extensions_);
  relations_.InternalSwap(&other->relations_);
  expected_type_urls_.InternalSwap(&other->expected_type_urls_);
  swap(advanced_extensions_, other->advanced_extensions_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Plan::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_plan_2eproto_getter, &descriptor_table_plan_2eproto_once,
      file_level_metadata_plan_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace substrait
}  // namespace io
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::io::substrait::PlanRel* Arena::CreateMaybeMessage< ::io::substrait::PlanRel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::io::substrait::PlanRel >(arena);
}
template<> PROTOBUF_NOINLINE ::io::substrait::Plan* Arena::CreateMaybeMessage< ::io::substrait::Plan >(Arena* arena) {
  return Arena::CreateMessageInternal< ::io::substrait::Plan >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
