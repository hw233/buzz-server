/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "session_system_event_types.h"

#include <algorithm>

namespace session { namespace server { namespace event {

const char* EventSystemServerLogin::ascii_fingerprint = "46A703A33337BED2F62F386FC66B2A5F";
const uint8_t EventSystemServerLogin::binary_fingerprint[16] = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

uint32_t EventSystemServerLogin::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->type_ = ( ::global::protocol::ServerType::type)ecast0;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSystemServerLogin::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSystemServerLogin");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSystemServerLogin &a, EventSystemServerLogin &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
}

const char* EventSystemServerLogout::ascii_fingerprint = "46A703A33337BED2F62F386FC66B2A5F";
const uint8_t EventSystemServerLogout::binary_fingerprint[16] = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

uint32_t EventSystemServerLogout::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->type_ = ( ::global::protocol::ServerType::type)ecast1;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSystemServerLogout::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSystemServerLogout");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSystemServerLogout &a, EventSystemServerLogout &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
}

const char* EventSystemDatabaseServerLogined::ascii_fingerprint = "E86CACEB22240450EDCBEFC3A83970E4";
const uint8_t EventSystemDatabaseServerLogined::binary_fingerprint[16] = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

uint32_t EventSystemDatabaseServerLogined::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSystemDatabaseServerLogined::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSystemDatabaseServerLogined");

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSystemDatabaseServerLogined &a, EventSystemDatabaseServerLogined &b) {
  using ::std::swap;
  swap(a.id_, b.id_);
}

}}} // namespace
