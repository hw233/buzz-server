/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_cooling_save_TYPES_H
#define storage_cooling_save_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "storage_cooling_login_types.h"


namespace database { namespace protocol {

typedef struct _StorageCoolingSaveRequest__isset {
  _StorageCoolingSaveRequest__isset() : fields_(false) {}
  bool fields_;
} _StorageCoolingSaveRequest__isset;

class StorageCoolingSaveRequest {
 public:

  static const char* ascii_fingerprint; // = "DC7567B95347202FEFA4A064FCAC60B7";
  static const uint8_t binary_fingerprint[16]; // = {0xDC,0x75,0x67,0xB9,0x53,0x47,0x20,0x2F,0xEF,0xA4,0xA0,0x64,0xFC,0xAC,0x60,0xB7};

  StorageCoolingSaveRequest() : id_(0) {
  }

  virtual ~StorageCoolingSaveRequest() throw() {}

  int64_t id_;
  std::vector< ::database::protocol::StorageCoolingField>  fields_;

  _StorageCoolingSaveRequest__isset __isset;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_fields_(const std::vector< ::database::protocol::StorageCoolingField> & val) {
    fields_ = val;
    __isset.fields_ = true;
  }

  bool operator == (const StorageCoolingSaveRequest & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (__isset.fields_ != rhs.__isset.fields_)
      return false;
    else if (__isset.fields_ && !(fields_ == rhs.fields_))
      return false;
    return true;
  }
  bool operator != (const StorageCoolingSaveRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageCoolingSaveRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageCoolingSaveRequest &a, StorageCoolingSaveRequest &b);


class StorageCoolingSaveResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  StorageCoolingSaveResponse() : result_(0) {
  }

  virtual ~StorageCoolingSaveResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const StorageCoolingSaveResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const StorageCoolingSaveResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageCoolingSaveResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageCoolingSaveResponse &a, StorageCoolingSaveResponse &b);

}} // namespace

#endif
