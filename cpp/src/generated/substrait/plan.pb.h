// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: plan.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_plan_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_plan_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3016000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3016000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "relations.pb.h"
#include "extensions.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_plan_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_plan_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_plan_2eproto;
namespace io {
namespace substrait {
class Plan;
struct PlanDefaultTypeInternal;
extern PlanDefaultTypeInternal _Plan_default_instance_;
class PlanRel;
struct PlanRelDefaultTypeInternal;
extern PlanRelDefaultTypeInternal _PlanRel_default_instance_;
}  // namespace substrait
}  // namespace io
PROTOBUF_NAMESPACE_OPEN
template<> ::io::substrait::Plan* Arena::CreateMaybeMessage<::io::substrait::Plan>(Arena*);
template<> ::io::substrait::PlanRel* Arena::CreateMaybeMessage<::io::substrait::PlanRel>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace io {
namespace substrait {

// ===================================================================

class PlanRel PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:io.substrait.PlanRel) */ {
 public:
  inline PlanRel() : PlanRel(nullptr) {}
  ~PlanRel() override;
  explicit constexpr PlanRel(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PlanRel(const PlanRel& from);
  PlanRel(PlanRel&& from) noexcept
    : PlanRel() {
    *this = ::std::move(from);
  }

  inline PlanRel& operator=(const PlanRel& from) {
    CopyFrom(from);
    return *this;
  }
  inline PlanRel& operator=(PlanRel&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PlanRel& default_instance() {
    return *internal_default_instance();
  }
  enum RelTypeCase {
    kRel = 1,
    kRoot = 2,
    RELTYPE_NOT_SET = 0,
  };

  static inline const PlanRel* internal_default_instance() {
    return reinterpret_cast<const PlanRel*>(
               &_PlanRel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PlanRel& a, PlanRel& b) {
    a.Swap(&b);
  }
  inline void Swap(PlanRel* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PlanRel* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PlanRel* New() const final {
    return CreateMaybeMessage<PlanRel>(nullptr);
  }

  PlanRel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PlanRel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PlanRel& from);
  void MergeFrom(const PlanRel& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PlanRel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "io.substrait.PlanRel";
  }
  protected:
  explicit PlanRel(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRelFieldNumber = 1,
    kRootFieldNumber = 2,
  };
  // .io.substrait.Rel rel = 1;
  bool has_rel() const;
  private:
  bool _internal_has_rel() const;
  public:
  void clear_rel();
  const ::io::substrait::Rel& rel() const;
  ::io::substrait::Rel* release_rel();
  ::io::substrait::Rel* mutable_rel();
  void set_allocated_rel(::io::substrait::Rel* rel);
  private:
  const ::io::substrait::Rel& _internal_rel() const;
  ::io::substrait::Rel* _internal_mutable_rel();
  public:
  void unsafe_arena_set_allocated_rel(
      ::io::substrait::Rel* rel);
  ::io::substrait::Rel* unsafe_arena_release_rel();

  // .io.substrait.RelRoot root = 2;
  bool has_root() const;
  private:
  bool _internal_has_root() const;
  public:
  void clear_root();
  const ::io::substrait::RelRoot& root() const;
  ::io::substrait::RelRoot* release_root();
  ::io::substrait::RelRoot* mutable_root();
  void set_allocated_root(::io::substrait::RelRoot* root);
  private:
  const ::io::substrait::RelRoot& _internal_root() const;
  ::io::substrait::RelRoot* _internal_mutable_root();
  public:
  void unsafe_arena_set_allocated_root(
      ::io::substrait::RelRoot* root);
  ::io::substrait::RelRoot* unsafe_arena_release_root();

  void clear_RelType();
  RelTypeCase RelType_case() const;
  // @@protoc_insertion_point(class_scope:io.substrait.PlanRel)
 private:
  class _Internal;
  void set_has_rel();
  void set_has_root();

  inline bool has_RelType() const;
  inline void clear_has_RelType();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  union RelTypeUnion {
    constexpr RelTypeUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::io::substrait::Rel* rel_;
    ::io::substrait::RelRoot* root_;
  } RelType_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_plan_2eproto;
};
// -------------------------------------------------------------------

class Plan PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:io.substrait.Plan) */ {
 public:
  inline Plan() : Plan(nullptr) {}
  ~Plan() override;
  explicit constexpr Plan(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Plan(const Plan& from);
  Plan(Plan&& from) noexcept
    : Plan() {
    *this = ::std::move(from);
  }

  inline Plan& operator=(const Plan& from) {
    CopyFrom(from);
    return *this;
  }
  inline Plan& operator=(Plan&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Plan& default_instance() {
    return *internal_default_instance();
  }
  static inline const Plan* internal_default_instance() {
    return reinterpret_cast<const Plan*>(
               &_Plan_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Plan& a, Plan& b) {
    a.Swap(&b);
  }
  inline void Swap(Plan* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Plan* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Plan* New() const final {
    return CreateMaybeMessage<Plan>(nullptr);
  }

  Plan* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Plan>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Plan& from);
  void MergeFrom(const Plan& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Plan* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "io.substrait.Plan";
  }
  protected:
  explicit Plan(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kExtensionUrisFieldNumber = 1,
    kExtensionsFieldNumber = 2,
    kRelationsFieldNumber = 3,
    kExpectedTypeUrlsFieldNumber = 5,
    kAdvancedExtensionsFieldNumber = 4,
  };
  // repeated .io.substrait.extensions.SimpleExtensionURI extension_uris = 1;
  int extension_uris_size() const;
  private:
  int _internal_extension_uris_size() const;
  public:
  void clear_extension_uris();
  ::io::substrait::extensions::SimpleExtensionURI* mutable_extension_uris(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::extensions::SimpleExtensionURI >*
      mutable_extension_uris();
  private:
  const ::io::substrait::extensions::SimpleExtensionURI& _internal_extension_uris(int index) const;
  ::io::substrait::extensions::SimpleExtensionURI* _internal_add_extension_uris();
  public:
  const ::io::substrait::extensions::SimpleExtensionURI& extension_uris(int index) const;
  ::io::substrait::extensions::SimpleExtensionURI* add_extension_uris();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::extensions::SimpleExtensionURI >&
      extension_uris() const;

  // repeated .io.substrait.extensions.SimpleExtensionDeclaration extensions = 2;
  int extensions_size() const;
  private:
  int _internal_extensions_size() const;
  public:
  void clear_extensions();
  ::io::substrait::extensions::SimpleExtensionDeclaration* mutable_extensions(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::extensions::SimpleExtensionDeclaration >*
      mutable_extensions();
  private:
  const ::io::substrait::extensions::SimpleExtensionDeclaration& _internal_extensions(int index) const;
  ::io::substrait::extensions::SimpleExtensionDeclaration* _internal_add_extensions();
  public:
  const ::io::substrait::extensions::SimpleExtensionDeclaration& extensions(int index) const;
  ::io::substrait::extensions::SimpleExtensionDeclaration* add_extensions();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::extensions::SimpleExtensionDeclaration >&
      extensions() const;

  // repeated .io.substrait.PlanRel relations = 3;
  int relations_size() const;
  private:
  int _internal_relations_size() const;
  public:
  void clear_relations();
  ::io::substrait::PlanRel* mutable_relations(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::PlanRel >*
      mutable_relations();
  private:
  const ::io::substrait::PlanRel& _internal_relations(int index) const;
  ::io::substrait::PlanRel* _internal_add_relations();
  public:
  const ::io::substrait::PlanRel& relations(int index) const;
  ::io::substrait::PlanRel* add_relations();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::PlanRel >&
      relations() const;

  // repeated string expected_type_urls = 5;
  int expected_type_urls_size() const;
  private:
  int _internal_expected_type_urls_size() const;
  public:
  void clear_expected_type_urls();
  const std::string& expected_type_urls(int index) const;
  std::string* mutable_expected_type_urls(int index);
  void set_expected_type_urls(int index, const std::string& value);
  void set_expected_type_urls(int index, std::string&& value);
  void set_expected_type_urls(int index, const char* value);
  void set_expected_type_urls(int index, const char* value, size_t size);
  std::string* add_expected_type_urls();
  void add_expected_type_urls(const std::string& value);
  void add_expected_type_urls(std::string&& value);
  void add_expected_type_urls(const char* value);
  void add_expected_type_urls(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& expected_type_urls() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_expected_type_urls();
  private:
  const std::string& _internal_expected_type_urls(int index) const;
  std::string* _internal_add_expected_type_urls();
  public:

  // .io.substrait.extensions.AdvancedExtension advanced_extensions = 4;
  bool has_advanced_extensions() const;
  private:
  bool _internal_has_advanced_extensions() const;
  public:
  void clear_advanced_extensions();
  const ::io::substrait::extensions::AdvancedExtension& advanced_extensions() const;
  ::io::substrait::extensions::AdvancedExtension* release_advanced_extensions();
  ::io::substrait::extensions::AdvancedExtension* mutable_advanced_extensions();
  void set_allocated_advanced_extensions(::io::substrait::extensions::AdvancedExtension* advanced_extensions);
  private:
  const ::io::substrait::extensions::AdvancedExtension& _internal_advanced_extensions() const;
  ::io::substrait::extensions::AdvancedExtension* _internal_mutable_advanced_extensions();
  public:
  void unsafe_arena_set_allocated_advanced_extensions(
      ::io::substrait::extensions::AdvancedExtension* advanced_extensions);
  ::io::substrait::extensions::AdvancedExtension* unsafe_arena_release_advanced_extensions();

  // @@protoc_insertion_point(class_scope:io.substrait.Plan)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::extensions::SimpleExtensionURI > extension_uris_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::extensions::SimpleExtensionDeclaration > extensions_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::PlanRel > relations_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> expected_type_urls_;
  ::io::substrait::extensions::AdvancedExtension* advanced_extensions_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_plan_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PlanRel

// .io.substrait.Rel rel = 1;
inline bool PlanRel::_internal_has_rel() const {
  return RelType_case() == kRel;
}
inline bool PlanRel::has_rel() const {
  return _internal_has_rel();
}
inline void PlanRel::set_has_rel() {
  _oneof_case_[0] = kRel;
}
inline ::io::substrait::Rel* PlanRel::release_rel() {
  // @@protoc_insertion_point(field_release:io.substrait.PlanRel.rel)
  if (_internal_has_rel()) {
    clear_has_RelType();
      ::io::substrait::Rel* temp = RelType_.rel_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    RelType_.rel_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::io::substrait::Rel& PlanRel::_internal_rel() const {
  return _internal_has_rel()
      ? *RelType_.rel_
      : reinterpret_cast< ::io::substrait::Rel&>(::io::substrait::_Rel_default_instance_);
}
inline const ::io::substrait::Rel& PlanRel::rel() const {
  // @@protoc_insertion_point(field_get:io.substrait.PlanRel.rel)
  return _internal_rel();
}
inline ::io::substrait::Rel* PlanRel::unsafe_arena_release_rel() {
  // @@protoc_insertion_point(field_unsafe_arena_release:io.substrait.PlanRel.rel)
  if (_internal_has_rel()) {
    clear_has_RelType();
    ::io::substrait::Rel* temp = RelType_.rel_;
    RelType_.rel_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void PlanRel::unsafe_arena_set_allocated_rel(::io::substrait::Rel* rel) {
  clear_RelType();
  if (rel) {
    set_has_rel();
    RelType_.rel_ = rel;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:io.substrait.PlanRel.rel)
}
inline ::io::substrait::Rel* PlanRel::_internal_mutable_rel() {
  if (!_internal_has_rel()) {
    clear_RelType();
    set_has_rel();
    RelType_.rel_ = CreateMaybeMessage< ::io::substrait::Rel >(GetArena());
  }
  return RelType_.rel_;
}
inline ::io::substrait::Rel* PlanRel::mutable_rel() {
  // @@protoc_insertion_point(field_mutable:io.substrait.PlanRel.rel)
  return _internal_mutable_rel();
}

// .io.substrait.RelRoot root = 2;
inline bool PlanRel::_internal_has_root() const {
  return RelType_case() == kRoot;
}
inline bool PlanRel::has_root() const {
  return _internal_has_root();
}
inline void PlanRel::set_has_root() {
  _oneof_case_[0] = kRoot;
}
inline ::io::substrait::RelRoot* PlanRel::release_root() {
  // @@protoc_insertion_point(field_release:io.substrait.PlanRel.root)
  if (_internal_has_root()) {
    clear_has_RelType();
      ::io::substrait::RelRoot* temp = RelType_.root_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    RelType_.root_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::io::substrait::RelRoot& PlanRel::_internal_root() const {
  return _internal_has_root()
      ? *RelType_.root_
      : reinterpret_cast< ::io::substrait::RelRoot&>(::io::substrait::_RelRoot_default_instance_);
}
inline const ::io::substrait::RelRoot& PlanRel::root() const {
  // @@protoc_insertion_point(field_get:io.substrait.PlanRel.root)
  return _internal_root();
}
inline ::io::substrait::RelRoot* PlanRel::unsafe_arena_release_root() {
  // @@protoc_insertion_point(field_unsafe_arena_release:io.substrait.PlanRel.root)
  if (_internal_has_root()) {
    clear_has_RelType();
    ::io::substrait::RelRoot* temp = RelType_.root_;
    RelType_.root_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void PlanRel::unsafe_arena_set_allocated_root(::io::substrait::RelRoot* root) {
  clear_RelType();
  if (root) {
    set_has_root();
    RelType_.root_ = root;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:io.substrait.PlanRel.root)
}
inline ::io::substrait::RelRoot* PlanRel::_internal_mutable_root() {
  if (!_internal_has_root()) {
    clear_RelType();
    set_has_root();
    RelType_.root_ = CreateMaybeMessage< ::io::substrait::RelRoot >(GetArena());
  }
  return RelType_.root_;
}
inline ::io::substrait::RelRoot* PlanRel::mutable_root() {
  // @@protoc_insertion_point(field_mutable:io.substrait.PlanRel.root)
  return _internal_mutable_root();
}

inline bool PlanRel::has_RelType() const {
  return RelType_case() != RELTYPE_NOT_SET;
}
inline void PlanRel::clear_has_RelType() {
  _oneof_case_[0] = RELTYPE_NOT_SET;
}
inline PlanRel::RelTypeCase PlanRel::RelType_case() const {
  return PlanRel::RelTypeCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// Plan

// repeated .io.substrait.extensions.SimpleExtensionURI extension_uris = 1;
inline int Plan::_internal_extension_uris_size() const {
  return extension_uris_.size();
}
inline int Plan::extension_uris_size() const {
  return _internal_extension_uris_size();
}
inline ::io::substrait::extensions::SimpleExtensionURI* Plan::mutable_extension_uris(int index) {
  // @@protoc_insertion_point(field_mutable:io.substrait.Plan.extension_uris)
  return extension_uris_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::extensions::SimpleExtensionURI >*
Plan::mutable_extension_uris() {
  // @@protoc_insertion_point(field_mutable_list:io.substrait.Plan.extension_uris)
  return &extension_uris_;
}
inline const ::io::substrait::extensions::SimpleExtensionURI& Plan::_internal_extension_uris(int index) const {
  return extension_uris_.Get(index);
}
inline const ::io::substrait::extensions::SimpleExtensionURI& Plan::extension_uris(int index) const {
  // @@protoc_insertion_point(field_get:io.substrait.Plan.extension_uris)
  return _internal_extension_uris(index);
}
inline ::io::substrait::extensions::SimpleExtensionURI* Plan::_internal_add_extension_uris() {
  return extension_uris_.Add();
}
inline ::io::substrait::extensions::SimpleExtensionURI* Plan::add_extension_uris() {
  // @@protoc_insertion_point(field_add:io.substrait.Plan.extension_uris)
  return _internal_add_extension_uris();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::extensions::SimpleExtensionURI >&
Plan::extension_uris() const {
  // @@protoc_insertion_point(field_list:io.substrait.Plan.extension_uris)
  return extension_uris_;
}

// repeated .io.substrait.extensions.SimpleExtensionDeclaration extensions = 2;
inline int Plan::_internal_extensions_size() const {
  return extensions_.size();
}
inline int Plan::extensions_size() const {
  return _internal_extensions_size();
}
inline ::io::substrait::extensions::SimpleExtensionDeclaration* Plan::mutable_extensions(int index) {
  // @@protoc_insertion_point(field_mutable:io.substrait.Plan.extensions)
  return extensions_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::extensions::SimpleExtensionDeclaration >*
Plan::mutable_extensions() {
  // @@protoc_insertion_point(field_mutable_list:io.substrait.Plan.extensions)
  return &extensions_;
}
inline const ::io::substrait::extensions::SimpleExtensionDeclaration& Plan::_internal_extensions(int index) const {
  return extensions_.Get(index);
}
inline const ::io::substrait::extensions::SimpleExtensionDeclaration& Plan::extensions(int index) const {
  // @@protoc_insertion_point(field_get:io.substrait.Plan.extensions)
  return _internal_extensions(index);
}
inline ::io::substrait::extensions::SimpleExtensionDeclaration* Plan::_internal_add_extensions() {
  return extensions_.Add();
}
inline ::io::substrait::extensions::SimpleExtensionDeclaration* Plan::add_extensions() {
  // @@protoc_insertion_point(field_add:io.substrait.Plan.extensions)
  return _internal_add_extensions();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::extensions::SimpleExtensionDeclaration >&
Plan::extensions() const {
  // @@protoc_insertion_point(field_list:io.substrait.Plan.extensions)
  return extensions_;
}

// repeated .io.substrait.PlanRel relations = 3;
inline int Plan::_internal_relations_size() const {
  return relations_.size();
}
inline int Plan::relations_size() const {
  return _internal_relations_size();
}
inline void Plan::clear_relations() {
  relations_.Clear();
}
inline ::io::substrait::PlanRel* Plan::mutable_relations(int index) {
  // @@protoc_insertion_point(field_mutable:io.substrait.Plan.relations)
  return relations_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::PlanRel >*
Plan::mutable_relations() {
  // @@protoc_insertion_point(field_mutable_list:io.substrait.Plan.relations)
  return &relations_;
}
inline const ::io::substrait::PlanRel& Plan::_internal_relations(int index) const {
  return relations_.Get(index);
}
inline const ::io::substrait::PlanRel& Plan::relations(int index) const {
  // @@protoc_insertion_point(field_get:io.substrait.Plan.relations)
  return _internal_relations(index);
}
inline ::io::substrait::PlanRel* Plan::_internal_add_relations() {
  return relations_.Add();
}
inline ::io::substrait::PlanRel* Plan::add_relations() {
  // @@protoc_insertion_point(field_add:io.substrait.Plan.relations)
  return _internal_add_relations();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::io::substrait::PlanRel >&
Plan::relations() const {
  // @@protoc_insertion_point(field_list:io.substrait.Plan.relations)
  return relations_;
}

// .io.substrait.extensions.AdvancedExtension advanced_extensions = 4;
inline bool Plan::_internal_has_advanced_extensions() const {
  return this != internal_default_instance() && advanced_extensions_ != nullptr;
}
inline bool Plan::has_advanced_extensions() const {
  return _internal_has_advanced_extensions();
}
inline const ::io::substrait::extensions::AdvancedExtension& Plan::_internal_advanced_extensions() const {
  const ::io::substrait::extensions::AdvancedExtension* p = advanced_extensions_;
  return p != nullptr ? *p : reinterpret_cast<const ::io::substrait::extensions::AdvancedExtension&>(
      ::io::substrait::extensions::_AdvancedExtension_default_instance_);
}
inline const ::io::substrait::extensions::AdvancedExtension& Plan::advanced_extensions() const {
  // @@protoc_insertion_point(field_get:io.substrait.Plan.advanced_extensions)
  return _internal_advanced_extensions();
}
inline void Plan::unsafe_arena_set_allocated_advanced_extensions(
    ::io::substrait::extensions::AdvancedExtension* advanced_extensions) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(advanced_extensions_);
  }
  advanced_extensions_ = advanced_extensions;
  if (advanced_extensions) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:io.substrait.Plan.advanced_extensions)
}
inline ::io::substrait::extensions::AdvancedExtension* Plan::release_advanced_extensions() {
  
  ::io::substrait::extensions::AdvancedExtension* temp = advanced_extensions_;
  advanced_extensions_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::io::substrait::extensions::AdvancedExtension* Plan::unsafe_arena_release_advanced_extensions() {
  // @@protoc_insertion_point(field_release:io.substrait.Plan.advanced_extensions)
  
  ::io::substrait::extensions::AdvancedExtension* temp = advanced_extensions_;
  advanced_extensions_ = nullptr;
  return temp;
}
inline ::io::substrait::extensions::AdvancedExtension* Plan::_internal_mutable_advanced_extensions() {
  
  if (advanced_extensions_ == nullptr) {
    auto* p = CreateMaybeMessage<::io::substrait::extensions::AdvancedExtension>(GetArena());
    advanced_extensions_ = p;
  }
  return advanced_extensions_;
}
inline ::io::substrait::extensions::AdvancedExtension* Plan::mutable_advanced_extensions() {
  // @@protoc_insertion_point(field_mutable:io.substrait.Plan.advanced_extensions)
  return _internal_mutable_advanced_extensions();
}
inline void Plan::set_allocated_advanced_extensions(::io::substrait::extensions::AdvancedExtension* advanced_extensions) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(advanced_extensions_);
  }
  if (advanced_extensions) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(advanced_extensions)->GetArena();
    if (message_arena != submessage_arena) {
      advanced_extensions = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, advanced_extensions, submessage_arena);
    }
    
  } else {
    
  }
  advanced_extensions_ = advanced_extensions;
  // @@protoc_insertion_point(field_set_allocated:io.substrait.Plan.advanced_extensions)
}

// repeated string expected_type_urls = 5;
inline int Plan::_internal_expected_type_urls_size() const {
  return expected_type_urls_.size();
}
inline int Plan::expected_type_urls_size() const {
  return _internal_expected_type_urls_size();
}
inline void Plan::clear_expected_type_urls() {
  expected_type_urls_.Clear();
}
inline std::string* Plan::add_expected_type_urls() {
  // @@protoc_insertion_point(field_add_mutable:io.substrait.Plan.expected_type_urls)
  return _internal_add_expected_type_urls();
}
inline const std::string& Plan::_internal_expected_type_urls(int index) const {
  return expected_type_urls_.Get(index);
}
inline const std::string& Plan::expected_type_urls(int index) const {
  // @@protoc_insertion_point(field_get:io.substrait.Plan.expected_type_urls)
  return _internal_expected_type_urls(index);
}
inline std::string* Plan::mutable_expected_type_urls(int index) {
  // @@protoc_insertion_point(field_mutable:io.substrait.Plan.expected_type_urls)
  return expected_type_urls_.Mutable(index);
}
inline void Plan::set_expected_type_urls(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:io.substrait.Plan.expected_type_urls)
  expected_type_urls_.Mutable(index)->assign(value);
}
inline void Plan::set_expected_type_urls(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:io.substrait.Plan.expected_type_urls)
  expected_type_urls_.Mutable(index)->assign(std::move(value));
}
inline void Plan::set_expected_type_urls(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  expected_type_urls_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:io.substrait.Plan.expected_type_urls)
}
inline void Plan::set_expected_type_urls(int index, const char* value, size_t size) {
  expected_type_urls_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:io.substrait.Plan.expected_type_urls)
}
inline std::string* Plan::_internal_add_expected_type_urls() {
  return expected_type_urls_.Add();
}
inline void Plan::add_expected_type_urls(const std::string& value) {
  expected_type_urls_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:io.substrait.Plan.expected_type_urls)
}
inline void Plan::add_expected_type_urls(std::string&& value) {
  expected_type_urls_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:io.substrait.Plan.expected_type_urls)
}
inline void Plan::add_expected_type_urls(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  expected_type_urls_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:io.substrait.Plan.expected_type_urls)
}
inline void Plan::add_expected_type_urls(const char* value, size_t size) {
  expected_type_urls_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:io.substrait.Plan.expected_type_urls)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Plan::expected_type_urls() const {
  // @@protoc_insertion_point(field_list:io.substrait.Plan.expected_type_urls)
  return expected_type_urls_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Plan::mutable_expected_type_urls() {
  // @@protoc_insertion_point(field_mutable_list:io.substrait.Plan.expected_type_urls)
  return &expected_type_urls_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace substrait
}  // namespace io

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_plan_2eproto
