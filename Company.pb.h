// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Company.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_Company_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_Company_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_Company_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_Company_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_Company_2eproto;
class Company;
struct CompanyDefaultTypeInternal;
extern CompanyDefaultTypeInternal _Company_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Company final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Company) */ {
 public:
  inline Company() : Company(nullptr) {}
  ~Company() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Company(::google::protobuf::internal::ConstantInitialized);

  inline Company(const Company& from)
      : Company(nullptr, from) {}
  Company(Company&& from) noexcept
    : Company() {
    *this = ::std::move(from);
  }

  inline Company& operator=(const Company& from) {
    CopyFrom(from);
    return *this;
  }
  inline Company& operator=(Company&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Company& default_instance() {
    return *internal_default_instance();
  }
  static inline const Company* internal_default_instance() {
    return reinterpret_cast<const Company*>(
               &_Company_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Company& a, Company& b) {
    a.Swap(&b);
  }
  inline void Swap(Company* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Company* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Company* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Company>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Company& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Company& from) {
    Company::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Company* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "Company";
  }
  protected:
  explicit Company(::google::protobuf::Arena* arena);
  Company(::google::protobuf::Arena* arena, const Company& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLegalAddressFieldNumber = 2,
    kNameFieldNumber = 3,
    kTypeOfActivityFieldNumber = 4,
    kYearFieldNumber = 1,
    kForeignEconomicActivityFieldNumber = 5,
  };
  // required string legal_address = 2;
  bool has_legal_address() const;
  void clear_legal_address() ;
  const std::string& legal_address() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_legal_address(Arg_&& arg, Args_... args);
  std::string* mutable_legal_address();
  PROTOBUF_NODISCARD std::string* release_legal_address();
  void set_allocated_legal_address(std::string* value);

  private:
  const std::string& _internal_legal_address() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_legal_address(
      const std::string& value);
  std::string* _internal_mutable_legal_address();

  public:
  // required string name = 3;
  bool has_name() const;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // optional string type_of_activity = 4;
  bool has_type_of_activity() const;
  void clear_type_of_activity() ;
  const std::string& type_of_activity() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_type_of_activity(Arg_&& arg, Args_... args);
  std::string* mutable_type_of_activity();
  PROTOBUF_NODISCARD std::string* release_type_of_activity();
  void set_allocated_type_of_activity(std::string* value);

  private:
  const std::string& _internal_type_of_activity() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_type_of_activity(
      const std::string& value);
  std::string* _internal_mutable_type_of_activity();

  public:
  // required int32 year = 1;
  bool has_year() const;
  void clear_year() ;
  ::int32_t year() const;
  void set_year(::int32_t value);

  private:
  ::int32_t _internal_year() const;
  void _internal_set_year(::int32_t value);

  public:
  // optional bool foreign_economic_activity = 5;
  bool has_foreign_economic_activity() const;
  void clear_foreign_economic_activity() ;
  bool foreign_economic_activity() const;
  void set_foreign_economic_activity(bool value);

  private:
  bool _internal_foreign_economic_activity() const;
  void _internal_set_foreign_economic_activity(bool value);

  public:
  // @@protoc_insertion_point(class_scope:Company)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 5, 0,
      49, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr legal_address_;
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::internal::ArenaStringPtr type_of_activity_;
    ::int32_t year_;
    bool foreign_economic_activity_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Company_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Company

// required int32 year = 1;
inline bool Company::has_year() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Company::clear_year() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.year_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int32_t Company::year() const {
  // @@protoc_insertion_point(field_get:Company.year)
  return _internal_year();
}
inline void Company::set_year(::int32_t value) {
  _internal_set_year(value);
  // @@protoc_insertion_point(field_set:Company.year)
}
inline ::int32_t Company::_internal_year() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.year_;
}
inline void Company::_internal_set_year(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.year_ = value;
}

// required string legal_address = 2;
inline bool Company::has_legal_address() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Company::clear_legal_address() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.legal_address_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Company::legal_address() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Company.legal_address)
  return _internal_legal_address();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Company::set_legal_address(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.legal_address_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Company.legal_address)
}
inline std::string* Company::mutable_legal_address() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_legal_address();
  // @@protoc_insertion_point(field_mutable:Company.legal_address)
  return _s;
}
inline const std::string& Company::_internal_legal_address() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.legal_address_.Get();
}
inline void Company::_internal_set_legal_address(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.legal_address_.Set(value, GetArena());
}
inline std::string* Company::_internal_mutable_legal_address() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.legal_address_.Mutable( GetArena());
}
inline std::string* Company::release_legal_address() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Company.legal_address)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.legal_address_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.legal_address_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Company::set_allocated_legal_address(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.legal_address_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.legal_address_.IsDefault()) {
          _impl_.legal_address_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Company.legal_address)
}

// required string name = 3;
inline bool Company::has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Company::clear_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Company::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Company.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Company::set_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Company.name)
}
inline std::string* Company::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Company.name)
  return _s;
}
inline const std::string& Company::_internal_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.name_.Get();
}
inline void Company::_internal_set_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.name_.Set(value, GetArena());
}
inline std::string* Company::_internal_mutable_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* Company::release_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Company.name)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Company::set_allocated_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Company.name)
}

// optional string type_of_activity = 4;
inline bool Company::has_type_of_activity() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Company::clear_type_of_activity() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.type_of_activity_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Company::type_of_activity() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Company.type_of_activity)
  return _internal_type_of_activity();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Company::set_type_of_activity(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.type_of_activity_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Company.type_of_activity)
}
inline std::string* Company::mutable_type_of_activity() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_type_of_activity();
  // @@protoc_insertion_point(field_mutable:Company.type_of_activity)
  return _s;
}
inline const std::string& Company::_internal_type_of_activity() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.type_of_activity_.Get();
}
inline void Company::_internal_set_type_of_activity(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.type_of_activity_.Set(value, GetArena());
}
inline std::string* Company::_internal_mutable_type_of_activity() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.type_of_activity_.Mutable( GetArena());
}
inline std::string* Company::release_type_of_activity() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Company.type_of_activity)
  if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* released = _impl_.type_of_activity_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.type_of_activity_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Company::set_allocated_type_of_activity(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.type_of_activity_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.type_of_activity_.IsDefault()) {
          _impl_.type_of_activity_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Company.type_of_activity)
}

// optional bool foreign_economic_activity = 5;
inline bool Company::has_foreign_economic_activity() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void Company::clear_foreign_economic_activity() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.foreign_economic_activity_ = false;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline bool Company::foreign_economic_activity() const {
  // @@protoc_insertion_point(field_get:Company.foreign_economic_activity)
  return _internal_foreign_economic_activity();
}
inline void Company::set_foreign_economic_activity(bool value) {
  _internal_set_foreign_economic_activity(value);
  // @@protoc_insertion_point(field_set:Company.foreign_economic_activity)
}
inline bool Company::_internal_foreign_economic_activity() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.foreign_economic_activity_;
}
inline void Company::_internal_set_foreign_economic_activity(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.foreign_economic_activity_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_Company_2eproto_2epb_2eh
