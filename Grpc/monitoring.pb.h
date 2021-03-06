// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: monitoring.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_monitoring_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_monitoring_2eproto

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_monitoring_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_monitoring_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_monitoring_2eproto;
namespace event_store {
namespace client {
namespace monitoring {
class StatsReq;
class StatsReqDefaultTypeInternal;
extern StatsReqDefaultTypeInternal _StatsReq_default_instance_;
class StatsResp;
class StatsRespDefaultTypeInternal;
extern StatsRespDefaultTypeInternal _StatsResp_default_instance_;
class StatsResp_StatsEntry_DoNotUse;
class StatsResp_StatsEntry_DoNotUseDefaultTypeInternal;
extern StatsResp_StatsEntry_DoNotUseDefaultTypeInternal _StatsResp_StatsEntry_DoNotUse_default_instance_;
}  // namespace monitoring
}  // namespace client
}  // namespace event_store
PROTOBUF_NAMESPACE_OPEN
template<> ::event_store::client::monitoring::StatsReq* Arena::CreateMaybeMessage<::event_store::client::monitoring::StatsReq>(Arena*);
template<> ::event_store::client::monitoring::StatsResp* Arena::CreateMaybeMessage<::event_store::client::monitoring::StatsResp>(Arena*);
template<> ::event_store::client::monitoring::StatsResp_StatsEntry_DoNotUse* Arena::CreateMaybeMessage<::event_store::client::monitoring::StatsResp_StatsEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace event_store {
namespace client {
namespace monitoring {

// ===================================================================

class StatsReq PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:event_store.client.monitoring.StatsReq) */ {
 public:
  inline StatsReq() : StatsReq(nullptr) {};
  virtual ~StatsReq();

  StatsReq(const StatsReq& from);
  StatsReq(StatsReq&& from) noexcept
    : StatsReq() {
    *this = ::std::move(from);
  }

  inline StatsReq& operator=(const StatsReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline StatsReq& operator=(StatsReq&& from) noexcept {
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
  static const StatsReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StatsReq* internal_default_instance() {
    return reinterpret_cast<const StatsReq*>(
               &_StatsReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StatsReq& a, StatsReq& b) {
    a.Swap(&b);
  }
  inline void Swap(StatsReq* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StatsReq* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StatsReq* New() const final {
    return CreateMaybeMessage<StatsReq>(nullptr);
  }

  StatsReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StatsReq>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StatsReq& from);
  void MergeFrom(const StatsReq& from);
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
  void InternalSwap(StatsReq* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "event_store.client.monitoring.StatsReq";
  }
  protected:
  explicit StatsReq(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_monitoring_2eproto);
    return ::descriptor_table_monitoring_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUseMetadataFieldNumber = 1,
    kRefreshTimePeriodInMsFieldNumber = 4,
  };
  // bool use_metadata = 1;
  void clear_use_metadata();
  bool use_metadata() const;
  void set_use_metadata(bool value);
  private:
  bool _internal_use_metadata() const;
  void _internal_set_use_metadata(bool value);
  public:

  // uint64 refresh_time_period_in_ms = 4;
  void clear_refresh_time_period_in_ms();
  ::PROTOBUF_NAMESPACE_ID::uint64 refresh_time_period_in_ms() const;
  void set_refresh_time_period_in_ms(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_refresh_time_period_in_ms() const;
  void _internal_set_refresh_time_period_in_ms(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:event_store.client.monitoring.StatsReq)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool use_metadata_;
  ::PROTOBUF_NAMESPACE_ID::uint64 refresh_time_period_in_ms_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_monitoring_2eproto;
};
// -------------------------------------------------------------------

class StatsResp_StatsEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<StatsResp_StatsEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<StatsResp_StatsEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  StatsResp_StatsEntry_DoNotUse();
  StatsResp_StatsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const StatsResp_StatsEntry_DoNotUse& other);
  static const StatsResp_StatsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const StatsResp_StatsEntry_DoNotUse*>(&_StatsResp_StatsEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "event_store.client.monitoring.StatsResp.StatsEntry.key");
 }
  static bool ValidateValue(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "event_store.client.monitoring.StatsResp.StatsEntry.value");
 }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_monitoring_2eproto);
    return ::descriptor_table_monitoring_2eproto.file_level_metadata[1];
  }

  public:
};

// -------------------------------------------------------------------

class StatsResp PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:event_store.client.monitoring.StatsResp) */ {
 public:
  inline StatsResp() : StatsResp(nullptr) {};
  virtual ~StatsResp();

  StatsResp(const StatsResp& from);
  StatsResp(StatsResp&& from) noexcept
    : StatsResp() {
    *this = ::std::move(from);
  }

  inline StatsResp& operator=(const StatsResp& from) {
    CopyFrom(from);
    return *this;
  }
  inline StatsResp& operator=(StatsResp&& from) noexcept {
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
  static const StatsResp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StatsResp* internal_default_instance() {
    return reinterpret_cast<const StatsResp*>(
               &_StatsResp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(StatsResp& a, StatsResp& b) {
    a.Swap(&b);
  }
  inline void Swap(StatsResp* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StatsResp* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StatsResp* New() const final {
    return CreateMaybeMessage<StatsResp>(nullptr);
  }

  StatsResp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StatsResp>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StatsResp& from);
  void MergeFrom(const StatsResp& from);
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
  void InternalSwap(StatsResp* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "event_store.client.monitoring.StatsResp";
  }
  protected:
  explicit StatsResp(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_monitoring_2eproto);
    return ::descriptor_table_monitoring_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kStatsFieldNumber = 1,
  };
  // map<string, string> stats = 1;
  int stats_size() const;
  private:
  int _internal_stats_size() const;
  public:
  void clear_stats();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      _internal_stats() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      _internal_mutable_stats();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      stats() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      mutable_stats();

  // @@protoc_insertion_point(class_scope:event_store.client.monitoring.StatsResp)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      StatsResp_StatsEntry_DoNotUse,
      std::string, std::string,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      0 > stats_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_monitoring_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StatsReq

// bool use_metadata = 1;
inline void StatsReq::clear_use_metadata() {
  use_metadata_ = false;
}
inline bool StatsReq::_internal_use_metadata() const {
  return use_metadata_;
}
inline bool StatsReq::use_metadata() const {
  // @@protoc_insertion_point(field_get:event_store.client.monitoring.StatsReq.use_metadata)
  return _internal_use_metadata();
}
inline void StatsReq::_internal_set_use_metadata(bool value) {
  
  use_metadata_ = value;
}
inline void StatsReq::set_use_metadata(bool value) {
  _internal_set_use_metadata(value);
  // @@protoc_insertion_point(field_set:event_store.client.monitoring.StatsReq.use_metadata)
}

// uint64 refresh_time_period_in_ms = 4;
inline void StatsReq::clear_refresh_time_period_in_ms() {
  refresh_time_period_in_ms_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StatsReq::_internal_refresh_time_period_in_ms() const {
  return refresh_time_period_in_ms_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StatsReq::refresh_time_period_in_ms() const {
  // @@protoc_insertion_point(field_get:event_store.client.monitoring.StatsReq.refresh_time_period_in_ms)
  return _internal_refresh_time_period_in_ms();
}
inline void StatsReq::_internal_set_refresh_time_period_in_ms(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  refresh_time_period_in_ms_ = value;
}
inline void StatsReq::set_refresh_time_period_in_ms(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_refresh_time_period_in_ms(value);
  // @@protoc_insertion_point(field_set:event_store.client.monitoring.StatsReq.refresh_time_period_in_ms)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// StatsResp

// map<string, string> stats = 1;
inline int StatsResp::_internal_stats_size() const {
  return stats_.size();
}
inline int StatsResp::stats_size() const {
  return _internal_stats_size();
}
inline void StatsResp::clear_stats() {
  stats_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
StatsResp::_internal_stats() const {
  return stats_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
StatsResp::stats() const {
  // @@protoc_insertion_point(field_map:event_store.client.monitoring.StatsResp.stats)
  return _internal_stats();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
StatsResp::_internal_mutable_stats() {
  return stats_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
StatsResp::mutable_stats() {
  // @@protoc_insertion_point(field_mutable_map:event_store.client.monitoring.StatsResp.stats)
  return _internal_mutable_stats();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace monitoring
}  // namespace client
}  // namespace event_store

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_monitoring_2eproto
