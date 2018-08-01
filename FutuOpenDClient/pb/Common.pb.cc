// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Common.proto

#include "Common.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace Common {
class PacketIDDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PacketID>
      _instance;
} _PacketID_default_instance_;
}  // namespace Common
namespace protobuf_Common_2eproto {
void InitDefaultsPacketIDImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::Common::_PacketID_default_instance_;
    new (ptr) ::Common::PacketID();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Common::PacketID::InitAsDefaultInstance();
}

void InitDefaultsPacketID() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsPacketIDImpl);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Common::PacketID, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Common::PacketID, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Common::PacketID, connid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Common::PacketID, serialno_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::Common::PacketID)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::Common::_PacketID_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Common.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014Common.proto\022\006Common\",\n\010PacketID\022\016\n\006co"
      "nnID\030\001 \002(\004\022\020\n\010serialNo\030\002 \002(\r*w\n\007RetType\022"
      "\023\n\017RetType_Succeed\020\000\022\033\n\016RetType_Failed\020\377"
      "\377\377\377\377\377\377\377\377\001\022\034\n\017RetType_TimeOut\020\234\377\377\377\377\377\377\377\377\001\022"
      "\034\n\017RetType_Unknown\020\360\374\377\377\377\377\377\377\377\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 189);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Common.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Common_2eproto
namespace Common {
const ::google::protobuf::EnumDescriptor* RetType_descriptor() {
  protobuf_Common_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Common_2eproto::file_level_enum_descriptors[0];
}
bool RetType_IsValid(int value) {
  switch (value) {
    case -400:
    case -100:
    case -1:
    case 0:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void PacketID::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PacketID::kConnIDFieldNumber;
const int PacketID::kSerialNoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PacketID::PacketID()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Common_2eproto::InitDefaultsPacketID();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Common.PacketID)
}
PacketID::PacketID(const PacketID& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&connid_, &from.connid_,
    static_cast<size_t>(reinterpret_cast<char*>(&serialno_) -
    reinterpret_cast<char*>(&connid_)) + sizeof(serialno_));
  // @@protoc_insertion_point(copy_constructor:Common.PacketID)
}

void PacketID::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&connid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&serialno_) -
      reinterpret_cast<char*>(&connid_)) + sizeof(serialno_));
}

PacketID::~PacketID() {
  // @@protoc_insertion_point(destructor:Common.PacketID)
  SharedDtor();
}

void PacketID::SharedDtor() {
}

void PacketID::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PacketID::descriptor() {
  ::protobuf_Common_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Common_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PacketID& PacketID::default_instance() {
  ::protobuf_Common_2eproto::InitDefaultsPacketID();
  return *internal_default_instance();
}

PacketID* PacketID::New(::google::protobuf::Arena* arena) const {
  PacketID* n = new PacketID;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PacketID::Clear() {
// @@protoc_insertion_point(message_clear_start:Common.PacketID)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&connid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&serialno_) -
        reinterpret_cast<char*>(&connid_)) + sizeof(serialno_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PacketID::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Common.PacketID)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 connID = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_connid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &connid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 serialNo = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_serialno();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &serialno_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Common.PacketID)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Common.PacketID)
  return false;
#undef DO_
}

void PacketID::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Common.PacketID)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint64 connID = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->connid(), output);
  }

  // required uint32 serialNo = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->serialno(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Common.PacketID)
}

::google::protobuf::uint8* PacketID::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Common.PacketID)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint64 connID = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->connid(), target);
  }

  // required uint32 serialNo = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->serialno(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Common.PacketID)
  return target;
}

size_t PacketID::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Common.PacketID)
  size_t total_size = 0;

  if (has_connid()) {
    // required uint64 connID = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->connid());
  }

  if (has_serialno()) {
    // required uint32 serialNo = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->serialno());
  }

  return total_size;
}
size_t PacketID::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Common.PacketID)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint64 connID = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->connid());

    // required uint32 serialNo = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->serialno());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PacketID::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Common.PacketID)
  GOOGLE_DCHECK_NE(&from, this);
  const PacketID* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PacketID>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Common.PacketID)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Common.PacketID)
    MergeFrom(*source);
  }
}

void PacketID::MergeFrom(const PacketID& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Common.PacketID)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      connid_ = from.connid_;
    }
    if (cached_has_bits & 0x00000002u) {
      serialno_ = from.serialno_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PacketID::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Common.PacketID)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PacketID::CopyFrom(const PacketID& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Common.PacketID)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PacketID::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void PacketID::Swap(PacketID* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PacketID::InternalSwap(PacketID* other) {
  using std::swap;
  swap(connid_, other->connid_);
  swap(serialno_, other->serialno_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PacketID::GetMetadata() const {
  protobuf_Common_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Common_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Common

// @@protoc_insertion_point(global_scope)
