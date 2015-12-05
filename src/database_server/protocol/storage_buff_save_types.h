/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_buff_save_TYPES_H
#define storage_buff_save_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "storage_buff_login_types.h"


namespace database { namespace protocol {

typedef struct _StorageBuffSaveRequest__isset {
  _StorageBuffSaveRequest__isset() : fields_(false) {}
  bool fields_;
} _StorageBuffSaveRequest__isset;

class StorageBuffSaveRequest {
 public:

  static const char* ascii_fingerprint; // = "FD4A68C7CD5AA08499AC02085B1D2CAF";
  static const uint8_t binary_fingerprint[16]; // = {0xFD,0x4A,0x68,0xC7,0xCD,0x5A,0xA0,0x84,0x99,0xAC,0x02,0x08,0x5B,0x1D,0x2C,0xAF};

  StorageBuffSaveRequest() : id_(0) {
  }

  virtual ~StorageBuffSaveRequest() throw() {}

  int64_t id_;
  std::vector< ::database::protocol::StorageBuffField>  fields_;

  _StorageBuffSaveRequest__isset __isset;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_fields_(const std::vector< ::database::protocol::StorageBuffField> & val) {
    fields_ = val;
    __isset.fields_ = true;
  }

  bool operator == (const StorageBuffSaveRequest & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (__isset.fields_ != rhs.__isset.fields_)
      return false;
    else if (__isset.fields_ && !(fields_ == rhs.fields_))
      return false;
    return true;
  }
  bool operator != (const StorageBuffSaveRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageBuffSaveRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageBuffSaveRequest &a, StorageBuffSaveRequest &b);


class StorageBuffSaveResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  StorageBuffSaveResponse() : result_(0) {
  }

  virtual ~StorageBuffSaveResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const StorageBuffSaveResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const StorageBuffSaveResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageBuffSaveResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageBuffSaveResponse &a, StorageBuffSaveResponse &b);

}} // namespace

#endif
