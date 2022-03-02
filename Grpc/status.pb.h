// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: status.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_status_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_status_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
#include "code.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_status_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_status_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_status_2eproto;
namespace google {
namespace rpc {
class Status;
class StatusDefaultTypeInternal;
extern StatusDefaultTypeInternal _Status_default_instance_;
}  // namespace rpc
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::rpc::Status* Arena::CreateMaybeMessage<::google::rpc::Status>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace rpc {

// ===================================================================

class Status PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.rpc.Status) */ {
 public:
  inline Status() : Status(nullptr) {};
  virtual ~Status();

  Status(const Status& from);
  Status(Status&& from) noexcept
    : Status() {
    *this = ::std::move(from);
  }

  inline Status& operator=(const Status& from) {
    CopyFrom(from);
    return *this;
  }
  inline Status& operator=(Status&& from) noexcept {
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
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Status* internal_default_instance() {
    return reinterpret_cast<const Status*>(
               &_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Status& a, Status& b) {
    a.Swap(&b);
  }
  inline void Swap(Status* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Status* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Status* New() const final {
    return CreateMaybeMessage<Status>(nullptr);
  }

  Status* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Status>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Status& from);
  void MergeFrom(const Status& from);
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
  void InternalSwap(Status* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.rpc.Status";
  }
  protected:
  explicit Status(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_status_2eproto);
    return ::descriptor_table_status_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 2,
    kDetailsFieldNumber = 3,
    kCodeFieldNumber = 1,
  };
  // string message = 2;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_message();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_message(
      std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // .google.protobuf.Any details = 3;
  bool has_details() const;
  private:
  bool _internal_has_details() const;
  public:
  void clear_details();
  const PROTOBUF_NAMESPACE_ID::Any& details() const;
  PROTOBUF_NAMESPACE_ID::Any* release_details();
  PROTOBUF_NAMESPACE_ID::Any* mutable_details();
  void set_allocated_details(PROTOBUF_NAMESPACE_ID::Any* details);
  private:
  const PROTOBUF_NAMESPACE_ID::Any& _internal_details() const;
  PROTOBUF_NAMESPACE_ID::Any* _internal_mutable_details();
  public:
  void unsafe_arena_set_allocated_details(
      PROTOBUF_NAMESPACE_ID::Any* details);
  PROTOBUF_NAMESPACE_ID::Any* unsafe_arena_release_details();

  // .google.rpc.Code code = 1;
  void clear_code();
  ::google::rpc::Code code() const;
  void set_code(::google::rpc::Code value);
  private:
  ::google::rpc::Code _internal_code() const;
  void _internal_set_code(::google::rpc::Code value);
  public:

  // @@protoc_insertion_point(class_scope:google.rpc.Status)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  PROTOBUF_NAMESPACE_ID::Any* details_;
  int code_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_status_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Status

// .google.rpc.Code code = 1;
inline void Status::clear_code() {
  code_ = 0;
}
inline ::google::rpc::Code Status::_internal_code() const {
  return static_cast< ::google::rpc::Code >(code_);
}
inline ::google::rpc::Code Status::code() const {
  // @@protoc_insertion_point(field_get:google.rpc.Status.code)
  return _internal_code();
}
inline void Status::_internal_set_code(::google::rpc::Code value) {
  
  code_ = value;
}
inline void Status::set_code(::google::rpc::Code value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:google.rpc.Status.code)
}

// string message = 2;
inline void Status::clear_message() {
  message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Status::message() const {
  // @@protoc_insertion_point(field_get:google.rpc.Status.message)
  return _internal_message();
}
inline void Status::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:google.rpc.Status.message)
}
inline std::string* Status::mutable_message() {
  // @@protoc_insertion_point(field_mutable:google.rpc.Status.message)
  return _internal_mutable_message();
}
inline const std::string& Status::_internal_message() const {
  return message_.Get();
}
inline void Status::_internal_set_message(const std::string& value) {
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Status::set_message(std::string&& value) {
  
  message_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.rpc.Status.message)
}
inline void Status::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:google.rpc.Status.message)
}
inline void Status::set_message(const char* value,
    size_t size) {
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.rpc.Status.message)
}
inline std::string* Status::_internal_mutable_message() {
  
  return message_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Status::release_message() {
  // @@protoc_insertion_point(field_release:google.rpc.Status.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Status::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.rpc.Status.message)
}
inline std::string* Status::unsafe_arena_release_message() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.rpc.Status.message)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return message_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Status::unsafe_arena_set_allocated_message(
    std::string* message) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (message != nullptr) {
    
  } else {
    
  }
  message_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      message, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.rpc.Status.message)
}

// .google.protobuf.Any details = 3;
inline bool Status::_internal_has_details() const {
  return this != internal_default_instance() && details_ != nullptr;
}
inline bool Status::has_details() const {
  return _internal_has_details();
}
inline const PROTOBUF_NAMESPACE_ID::Any& Status::_internal_details() const {
  const PROTOBUF_NAMESPACE_ID::Any* p = details_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Any*>(
      &PROTOBUF_NAMESPACE_ID::_Any_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Any& Status::details() const {
  // @@protoc_insertion_point(field_get:google.rpc.Status.details)
  return _internal_details();
}
inline void Status::unsafe_arena_set_allocated_details(
    PROTOBUF_NAMESPACE_ID::Any* details) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(details_);
  }
  details_ = details;
  if (details) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.rpc.Status.details)
}
inline PROTOBUF_NAMESPACE_ID::Any* Status::release_details() {
  auto temp = unsafe_arena_release_details();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any* Status::unsafe_arena_release_details() {
  // @@protoc_insertion_point(field_release:google.rpc.Status.details)
  
  PROTOBUF_NAMESPACE_ID::Any* temp = details_;
  details_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any* Status::_internal_mutable_details() {
  
  if (details_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Any>(GetArena());
    details_ = p;
  }
  return details_;
}
inline PROTOBUF_NAMESPACE_ID::Any* Status::mutable_details() {
  // @@protoc_insertion_point(field_mutable:google.rpc.Status.details)
  return _internal_mutable_details();
}
inline void Status::set_allocated_details(PROTOBUF_NAMESPACE_ID::Any* details) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(details_);
  }
  if (details) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(details)->GetArena();
    if (message_arena != submessage_arena) {
      details = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, details, submessage_arena);
    }
    
  } else {
    
  }
  details_ = details;
  // @@protoc_insertion_point(field_set_allocated:google.rpc.Status.details)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace rpc
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_status_2eproto