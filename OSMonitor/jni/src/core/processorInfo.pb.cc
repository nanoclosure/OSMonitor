// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "processorInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace eolwral {
namespace osmonitor {
namespace core {

namespace {

const ::google::protobuf::Descriptor* processorInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  processorInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_processorInfo_2eproto() {
  protobuf_AddDesc_processorInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "processorInfo.proto");
  GOOGLE_CHECK(file != NULL);
  processorInfo_descriptor_ = file->message_type(0);
  static const int processorInfo_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, maxfrequency_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, minfrequency_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, maxscaling_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, minscaling_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, currentscaling_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, grovernors_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, offline_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, avaiablegovernors_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, avaiablefrequeucy_),
  };
  processorInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      processorInfo_descriptor_,
      processorInfo::default_instance_,
      processorInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(processorInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(processorInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_processorInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    processorInfo_descriptor_, &processorInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_processorInfo_2eproto() {
  delete processorInfo::default_instance_;
  delete processorInfo_reflection_;
}

void protobuf_AddDesc_processorInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023processorInfo.proto\022\032com.eolwral.osmon"
    "itor.core\"\346\001\n\rprocessorInfo\022\024\n\014maxFreque"
    "ncy\030\001 \002(\021\022\024\n\014minFrequency\030\002 \002(\021\022\022\n\nmaxSc"
    "aling\030\003 \002(\021\022\022\n\nminScaling\030\004 \002(\021\022\026\n\016curre"
    "ntScaling\030\005 \002(\021\022\022\n\ngrovernors\030\006 \002(\t\022\016\n\006n"
    "umber\030\007 \002(\r\022\017\n\007offLine\030\010 \002(\010\022\031\n\021avaiable"
    "Governors\030\t \002(\t\022\031\n\021avaiableFrequeucy\030\n \002"
    "(\t", 282);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "processorInfo.proto", &protobuf_RegisterTypes);
  processorInfo::default_instance_ = new processorInfo();
  processorInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_processorInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_processorInfo_2eproto {
  StaticDescriptorInitializer_processorInfo_2eproto() {
    protobuf_AddDesc_processorInfo_2eproto();
  }
} static_descriptor_initializer_processorInfo_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int processorInfo::kMaxFrequencyFieldNumber;
const int processorInfo::kMinFrequencyFieldNumber;
const int processorInfo::kMaxScalingFieldNumber;
const int processorInfo::kMinScalingFieldNumber;
const int processorInfo::kCurrentScalingFieldNumber;
const int processorInfo::kGrovernorsFieldNumber;
const int processorInfo::kNumberFieldNumber;
const int processorInfo::kOffLineFieldNumber;
const int processorInfo::kAvaiableGovernorsFieldNumber;
const int processorInfo::kAvaiableFrequeucyFieldNumber;
#endif  // !_MSC_VER

processorInfo::processorInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void processorInfo::InitAsDefaultInstance() {
}

processorInfo::processorInfo(const processorInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void processorInfo::SharedCtor() {
  _cached_size_ = 0;
  maxfrequency_ = 0;
  minfrequency_ = 0;
  maxscaling_ = 0;
  minscaling_ = 0;
  currentscaling_ = 0;
  grovernors_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  number_ = 0u;
  offline_ = false;
  avaiablegovernors_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  avaiablefrequeucy_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

processorInfo::~processorInfo() {
  SharedDtor();
}

void processorInfo::SharedDtor() {
  if (grovernors_ != &::google::protobuf::internal::kEmptyString) {
    delete grovernors_;
  }
  if (avaiablegovernors_ != &::google::protobuf::internal::kEmptyString) {
    delete avaiablegovernors_;
  }
  if (avaiablefrequeucy_ != &::google::protobuf::internal::kEmptyString) {
    delete avaiablefrequeucy_;
  }
  if (this != default_instance_) {
  }
}

void processorInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* processorInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return processorInfo_descriptor_;
}

const processorInfo& processorInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_processorInfo_2eproto();  return *default_instance_;
}

processorInfo* processorInfo::default_instance_ = NULL;

processorInfo* processorInfo::New() const {
  return new processorInfo;
}

void processorInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    maxfrequency_ = 0;
    minfrequency_ = 0;
    maxscaling_ = 0;
    minscaling_ = 0;
    currentscaling_ = 0;
    if (has_grovernors()) {
      if (grovernors_ != &::google::protobuf::internal::kEmptyString) {
        grovernors_->clear();
      }
    }
    number_ = 0u;
    offline_ = false;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (has_avaiablegovernors()) {
      if (avaiablegovernors_ != &::google::protobuf::internal::kEmptyString) {
        avaiablegovernors_->clear();
      }
    }
    if (has_avaiablefrequeucy()) {
      if (avaiablefrequeucy_ != &::google::protobuf::internal::kEmptyString) {
        avaiablefrequeucy_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool processorInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required sint32 maxFrequency = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &maxfrequency_)));
          set_has_maxfrequency();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_minFrequency;
        break;
      }
      
      // required sint32 minFrequency = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_minFrequency:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &minfrequency_)));
          set_has_minfrequency();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_maxScaling;
        break;
      }
      
      // required sint32 maxScaling = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_maxScaling:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &maxscaling_)));
          set_has_maxscaling();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_minScaling;
        break;
      }
      
      // required sint32 minScaling = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_minScaling:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &minscaling_)));
          set_has_minscaling();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_currentScaling;
        break;
      }
      
      // required sint32 currentScaling = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_currentScaling:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &currentscaling_)));
          set_has_currentscaling();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_grovernors;
        break;
      }
      
      // required string grovernors = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_grovernors:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_grovernors()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->grovernors().data(), this->grovernors().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_number;
        break;
      }
      
      // required uint32 number = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_number:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &number_)));
          set_has_number();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_offLine;
        break;
      }
      
      // required bool offLine = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_offLine:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &offline_)));
          set_has_offline();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(74)) goto parse_avaiableGovernors;
        break;
      }
      
      // required string avaiableGovernors = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_avaiableGovernors:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_avaiablegovernors()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->avaiablegovernors().data(), this->avaiablegovernors().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(82)) goto parse_avaiableFrequeucy;
        break;
      }
      
      // required string avaiableFrequeucy = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_avaiableFrequeucy:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_avaiablefrequeucy()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->avaiablefrequeucy().data(), this->avaiablefrequeucy().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void processorInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required sint32 maxFrequency = 1;
  if (has_maxfrequency()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(1, this->maxfrequency(), output);
  }
  
  // required sint32 minFrequency = 2;
  if (has_minfrequency()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(2, this->minfrequency(), output);
  }
  
  // required sint32 maxScaling = 3;
  if (has_maxscaling()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(3, this->maxscaling(), output);
  }
  
  // required sint32 minScaling = 4;
  if (has_minscaling()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(4, this->minscaling(), output);
  }
  
  // required sint32 currentScaling = 5;
  if (has_currentscaling()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(5, this->currentscaling(), output);
  }
  
  // required string grovernors = 6;
  if (has_grovernors()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->grovernors().data(), this->grovernors().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->grovernors(), output);
  }
  
  // required uint32 number = 7;
  if (has_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->number(), output);
  }
  
  // required bool offLine = 8;
  if (has_offline()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->offline(), output);
  }
  
  // required string avaiableGovernors = 9;
  if (has_avaiablegovernors()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->avaiablegovernors().data(), this->avaiablegovernors().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      9, this->avaiablegovernors(), output);
  }
  
  // required string avaiableFrequeucy = 10;
  if (has_avaiablefrequeucy()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->avaiablefrequeucy().data(), this->avaiablefrequeucy().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      10, this->avaiablefrequeucy(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* processorInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required sint32 maxFrequency = 1;
  if (has_maxfrequency()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(1, this->maxfrequency(), target);
  }
  
  // required sint32 minFrequency = 2;
  if (has_minfrequency()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(2, this->minfrequency(), target);
  }
  
  // required sint32 maxScaling = 3;
  if (has_maxscaling()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(3, this->maxscaling(), target);
  }
  
  // required sint32 minScaling = 4;
  if (has_minscaling()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(4, this->minscaling(), target);
  }
  
  // required sint32 currentScaling = 5;
  if (has_currentscaling()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(5, this->currentscaling(), target);
  }
  
  // required string grovernors = 6;
  if (has_grovernors()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->grovernors().data(), this->grovernors().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->grovernors(), target);
  }
  
  // required uint32 number = 7;
  if (has_number()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->number(), target);
  }
  
  // required bool offLine = 8;
  if (has_offline()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->offline(), target);
  }
  
  // required string avaiableGovernors = 9;
  if (has_avaiablegovernors()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->avaiablegovernors().data(), this->avaiablegovernors().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->avaiablegovernors(), target);
  }
  
  // required string avaiableFrequeucy = 10;
  if (has_avaiablefrequeucy()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->avaiablefrequeucy().data(), this->avaiablefrequeucy().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->avaiablefrequeucy(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int processorInfo::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required sint32 maxFrequency = 1;
    if (has_maxfrequency()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->maxfrequency());
    }
    
    // required sint32 minFrequency = 2;
    if (has_minfrequency()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->minfrequency());
    }
    
    // required sint32 maxScaling = 3;
    if (has_maxscaling()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->maxscaling());
    }
    
    // required sint32 minScaling = 4;
    if (has_minscaling()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->minscaling());
    }
    
    // required sint32 currentScaling = 5;
    if (has_currentscaling()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->currentscaling());
    }
    
    // required string grovernors = 6;
    if (has_grovernors()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->grovernors());
    }
    
    // required uint32 number = 7;
    if (has_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->number());
    }
    
    // required bool offLine = 8;
    if (has_offline()) {
      total_size += 1 + 1;
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required string avaiableGovernors = 9;
    if (has_avaiablegovernors()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->avaiablegovernors());
    }
    
    // required string avaiableFrequeucy = 10;
    if (has_avaiablefrequeucy()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->avaiablefrequeucy());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void processorInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const processorInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const processorInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void processorInfo::MergeFrom(const processorInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_maxfrequency()) {
      set_maxfrequency(from.maxfrequency());
    }
    if (from.has_minfrequency()) {
      set_minfrequency(from.minfrequency());
    }
    if (from.has_maxscaling()) {
      set_maxscaling(from.maxscaling());
    }
    if (from.has_minscaling()) {
      set_minscaling(from.minscaling());
    }
    if (from.has_currentscaling()) {
      set_currentscaling(from.currentscaling());
    }
    if (from.has_grovernors()) {
      set_grovernors(from.grovernors());
    }
    if (from.has_number()) {
      set_number(from.number());
    }
    if (from.has_offline()) {
      set_offline(from.offline());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_avaiablegovernors()) {
      set_avaiablegovernors(from.avaiablegovernors());
    }
    if (from.has_avaiablefrequeucy()) {
      set_avaiablefrequeucy(from.avaiablefrequeucy());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void processorInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void processorInfo::CopyFrom(const processorInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool processorInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x000003ff) != 0x000003ff) return false;
  
  return true;
}

void processorInfo::Swap(processorInfo* other) {
  if (other != this) {
    std::swap(maxfrequency_, other->maxfrequency_);
    std::swap(minfrequency_, other->minfrequency_);
    std::swap(maxscaling_, other->maxscaling_);
    std::swap(minscaling_, other->minscaling_);
    std::swap(currentscaling_, other->currentscaling_);
    std::swap(grovernors_, other->grovernors_);
    std::swap(number_, other->number_);
    std::swap(offline_, other->offline_);
    std::swap(avaiablegovernors_, other->avaiablegovernors_);
    std::swap(avaiablefrequeucy_, other->avaiablefrequeucy_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata processorInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = processorInfo_descriptor_;
  metadata.reflection = processorInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace osmonitor
}  // namespace eolwral
}  // namespace com

// @@protoc_insertion_point(global_scope)
