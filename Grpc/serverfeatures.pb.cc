// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: serverfeatures.proto

#include "serverfeatures.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_serverfeatures_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SupportedMethod_serverfeatures_2eproto;
namespace event_store {
namespace client {
namespace server_features {
class SupportedMethodsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SupportedMethods> _instance;
} _SupportedMethods_default_instance_;
class SupportedMethodDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SupportedMethod> _instance;
} _SupportedMethod_default_instance_;
}  // namespace server_features
}  // namespace client
}  // namespace event_store
static void InitDefaultsscc_info_SupportedMethod_serverfeatures_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::event_store::client::server_features::_SupportedMethod_default_instance_;
    new (ptr) ::event_store::client::server_features::SupportedMethod();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::event_store::client::server_features::SupportedMethod::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SupportedMethod_serverfeatures_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SupportedMethod_serverfeatures_2eproto}, {}};

static void InitDefaultsscc_info_SupportedMethods_serverfeatures_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::event_store::client::server_features::_SupportedMethods_default_instance_;
    new (ptr) ::event_store::client::server_features::SupportedMethods();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::event_store::client::server_features::SupportedMethods::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SupportedMethods_serverfeatures_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_SupportedMethods_serverfeatures_2eproto}, {
      &scc_info_SupportedMethod_serverfeatures_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_serverfeatures_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_serverfeatures_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_serverfeatures_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_serverfeatures_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::event_store::client::server_features::SupportedMethods, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::event_store::client::server_features::SupportedMethods, methods_),
  PROTOBUF_FIELD_OFFSET(::event_store::client::server_features::SupportedMethods, event_store_server_version_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::event_store::client::server_features::SupportedMethod, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::event_store::client::server_features::SupportedMethod, method_name_),
  PROTOBUF_FIELD_OFFSET(::event_store::client::server_features::SupportedMethod, service_name_),
  PROTOBUF_FIELD_OFFSET(::event_store::client::server_features::SupportedMethod, features_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::event_store::client::server_features::SupportedMethods)},
  { 7, -1, sizeof(::event_store::client::server_features::SupportedMethod)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::event_store::client::server_features::_SupportedMethods_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::event_store::client::server_features::_SupportedMethod_default_instance_),
};

const char descriptor_table_protodef_serverfeatures_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024serverfeatures.proto\022\"event_store.clie"
  "nt.server_features\032\014shared.proto\"|\n\020Supp"
  "ortedMethods\022D\n\007methods\030\001 \003(\01323.event_st"
  "ore.client.server_features.SupportedMeth"
  "od\022\"\n\032event_store_server_version\030\002 \001(\t\"N"
  "\n\017SupportedMethod\022\023\n\013method_name\030\001 \001(\t\022\024"
  "\n\014service_name\030\002 \001(\t\022\020\n\010features\030\003 \003(\t2x"
  "\n\016ServerFeatures\022f\n\023GetSupportedMethods\022"
  "\031.event_store.client.Empty\0324.event_store"
  ".client.server_features.SupportedMethods"
  "B.\n,com.eventstore.dbclient.proto.server"
  "featuresb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_serverfeatures_2eproto_deps[1] = {
  &::descriptor_table_shared_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_serverfeatures_2eproto_sccs[2] = {
  &scc_info_SupportedMethod_serverfeatures_2eproto.base,
  &scc_info_SupportedMethods_serverfeatures_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_serverfeatures_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_serverfeatures_2eproto = {
  false, false, descriptor_table_protodef_serverfeatures_2eproto, "serverfeatures.proto", 456,
  &descriptor_table_serverfeatures_2eproto_once, descriptor_table_serverfeatures_2eproto_sccs, descriptor_table_serverfeatures_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_serverfeatures_2eproto::offsets,
  file_level_metadata_serverfeatures_2eproto, 2, file_level_enum_descriptors_serverfeatures_2eproto, file_level_service_descriptors_serverfeatures_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_serverfeatures_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_serverfeatures_2eproto)), true);
namespace event_store {
namespace client {
namespace server_features {

// ===================================================================

void SupportedMethods::InitAsDefaultInstance() {
}
class SupportedMethods::_Internal {
 public:
};

SupportedMethods::SupportedMethods(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  methods_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:event_store.client.server_features.SupportedMethods)
}
SupportedMethods::SupportedMethods(const SupportedMethods& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      methods_(from.methods_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  event_store_server_version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_event_store_server_version().empty()) {
    event_store_server_version_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_event_store_server_version(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:event_store.client.server_features.SupportedMethods)
}

void SupportedMethods::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SupportedMethods_serverfeatures_2eproto.base);
  event_store_server_version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

SupportedMethods::~SupportedMethods() {
  // @@protoc_insertion_point(destructor:event_store.client.server_features.SupportedMethods)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SupportedMethods::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  event_store_server_version_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SupportedMethods::ArenaDtor(void* object) {
  SupportedMethods* _this = reinterpret_cast< SupportedMethods* >(object);
  (void)_this;
}
void SupportedMethods::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SupportedMethods::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SupportedMethods& SupportedMethods::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SupportedMethods_serverfeatures_2eproto.base);
  return *internal_default_instance();
}


void SupportedMethods::Clear() {
// @@protoc_insertion_point(message_clear_start:event_store.client.server_features.SupportedMethods)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  methods_.Clear();
  event_store_server_version_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SupportedMethods::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .event_store.client.server_features.SupportedMethod methods = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_methods(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // string event_store_server_version = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_event_store_server_version();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "event_store.client.server_features.SupportedMethods.event_store_server_version"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
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

::PROTOBUF_NAMESPACE_ID::uint8* SupportedMethods::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:event_store.client.server_features.SupportedMethods)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .event_store.client.server_features.SupportedMethod methods = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_methods_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_methods(i), target, stream);
  }

  // string event_store_server_version = 2;
  if (this->event_store_server_version().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_event_store_server_version().data(), static_cast<int>(this->_internal_event_store_server_version().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "event_store.client.server_features.SupportedMethods.event_store_server_version");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_event_store_server_version(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:event_store.client.server_features.SupportedMethods)
  return target;
}

size_t SupportedMethods::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:event_store.client.server_features.SupportedMethods)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .event_store.client.server_features.SupportedMethod methods = 1;
  total_size += 1UL * this->_internal_methods_size();
  for (const auto& msg : this->methods_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string event_store_server_version = 2;
  if (this->event_store_server_version().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_event_store_server_version());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SupportedMethods::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:event_store.client.server_features.SupportedMethods)
  GOOGLE_DCHECK_NE(&from, this);
  const SupportedMethods* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SupportedMethods>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:event_store.client.server_features.SupportedMethods)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:event_store.client.server_features.SupportedMethods)
    MergeFrom(*source);
  }
}

void SupportedMethods::MergeFrom(const SupportedMethods& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:event_store.client.server_features.SupportedMethods)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  methods_.MergeFrom(from.methods_);
  if (from.event_store_server_version().size() > 0) {
    _internal_set_event_store_server_version(from._internal_event_store_server_version());
  }
}

void SupportedMethods::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:event_store.client.server_features.SupportedMethods)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SupportedMethods::CopyFrom(const SupportedMethods& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:event_store.client.server_features.SupportedMethods)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SupportedMethods::IsInitialized() const {
  return true;
}

void SupportedMethods::InternalSwap(SupportedMethods* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  methods_.InternalSwap(&other->methods_);
  event_store_server_version_.Swap(&other->event_store_server_version_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata SupportedMethods::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void SupportedMethod::InitAsDefaultInstance() {
}
class SupportedMethod::_Internal {
 public:
};

SupportedMethod::SupportedMethod(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  features_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:event_store.client.server_features.SupportedMethod)
}
SupportedMethod::SupportedMethod(const SupportedMethod& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      features_(from.features_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  method_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_method_name().empty()) {
    method_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_method_name(),
      GetArena());
  }
  service_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_service_name().empty()) {
    service_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_service_name(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:event_store.client.server_features.SupportedMethod)
}

void SupportedMethod::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SupportedMethod_serverfeatures_2eproto.base);
  method_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  service_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

SupportedMethod::~SupportedMethod() {
  // @@protoc_insertion_point(destructor:event_store.client.server_features.SupportedMethod)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SupportedMethod::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  method_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  service_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SupportedMethod::ArenaDtor(void* object) {
  SupportedMethod* _this = reinterpret_cast< SupportedMethod* >(object);
  (void)_this;
}
void SupportedMethod::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SupportedMethod::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SupportedMethod& SupportedMethod::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SupportedMethod_serverfeatures_2eproto.base);
  return *internal_default_instance();
}


void SupportedMethod::Clear() {
// @@protoc_insertion_point(message_clear_start:event_store.client.server_features.SupportedMethod)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  features_.Clear();
  method_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  service_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SupportedMethod::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string method_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_method_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "event_store.client.server_features.SupportedMethod.method_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string service_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_service_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "event_store.client.server_features.SupportedMethod.service_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string features = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_features();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "event_store.client.server_features.SupportedMethod.features"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
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

::PROTOBUF_NAMESPACE_ID::uint8* SupportedMethod::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:event_store.client.server_features.SupportedMethod)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string method_name = 1;
  if (this->method_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_method_name().data(), static_cast<int>(this->_internal_method_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "event_store.client.server_features.SupportedMethod.method_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_method_name(), target);
  }

  // string service_name = 2;
  if (this->service_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_service_name().data(), static_cast<int>(this->_internal_service_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "event_store.client.server_features.SupportedMethod.service_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_service_name(), target);
  }

  // repeated string features = 3;
  for (int i = 0, n = this->_internal_features_size(); i < n; i++) {
    const auto& s = this->_internal_features(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "event_store.client.server_features.SupportedMethod.features");
    target = stream->WriteString(3, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:event_store.client.server_features.SupportedMethod)
  return target;
}

size_t SupportedMethod::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:event_store.client.server_features.SupportedMethod)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string features = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(features_.size());
  for (int i = 0, n = features_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      features_.Get(i));
  }

  // string method_name = 1;
  if (this->method_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_method_name());
  }

  // string service_name = 2;
  if (this->service_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_service_name());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SupportedMethod::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:event_store.client.server_features.SupportedMethod)
  GOOGLE_DCHECK_NE(&from, this);
  const SupportedMethod* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SupportedMethod>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:event_store.client.server_features.SupportedMethod)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:event_store.client.server_features.SupportedMethod)
    MergeFrom(*source);
  }
}

void SupportedMethod::MergeFrom(const SupportedMethod& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:event_store.client.server_features.SupportedMethod)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  features_.MergeFrom(from.features_);
  if (from.method_name().size() > 0) {
    _internal_set_method_name(from._internal_method_name());
  }
  if (from.service_name().size() > 0) {
    _internal_set_service_name(from._internal_service_name());
  }
}

void SupportedMethod::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:event_store.client.server_features.SupportedMethod)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SupportedMethod::CopyFrom(const SupportedMethod& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:event_store.client.server_features.SupportedMethod)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SupportedMethod::IsInitialized() const {
  return true;
}

void SupportedMethod::InternalSwap(SupportedMethod* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  features_.InternalSwap(&other->features_);
  method_name_.Swap(&other->method_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  service_name_.Swap(&other->service_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata SupportedMethod::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace server_features
}  // namespace client
}  // namespace event_store
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::event_store::client::server_features::SupportedMethods* Arena::CreateMaybeMessage< ::event_store::client::server_features::SupportedMethods >(Arena* arena) {
  return Arena::CreateMessageInternal< ::event_store::client::server_features::SupportedMethods >(arena);
}
template<> PROTOBUF_NOINLINE ::event_store::client::server_features::SupportedMethod* Arena::CreateMaybeMessage< ::event_store::client::server_features::SupportedMethod >(Arena* arena) {
  return Arena::CreateMessageInternal< ::event_store::client::server_features::SupportedMethod >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
