/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "server_type_types.h"

#include <algorithm>

namespace global { namespace protocol {

int _kServerTypeValues[] = {
  ServerType::DATABASE_SERVER,
  ServerType::GAME_SERVER,
  ServerType::GATEWAY_SERVER,
  ServerType::SCHEDULE_SERVER,
  ServerType::SESSION_SERVER,
  ServerType::MAX
};
const char* _kServerTypeNames[] = {
  "DATABASE_SERVER",
  "GAME_SERVER",
  "GATEWAY_SERVER",
  "SCHEDULE_SERVER",
  "SESSION_SERVER",
  "MAX"
};
const std::map<int, const char*> _ServerType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(6, _kServerTypeValues, _kServerTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* ServerSignature::ascii_fingerprint = "990D2908C4D11DEF66B1A0269299ED14";
const uint8_t ServerSignature::binary_fingerprint[16] = {0x99,0x0D,0x29,0x08,0xC4,0xD1,0x1D,0xEF,0x66,0xB1,0xA0,0x26,0x92,0x99,0xED,0x14};

uint32_t ServerSignature::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_host_ = false;
  bool isset_port_ = false;

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
          this->type_ = (ServerType::type)ecast0;
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
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->host_);
          isset_host_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->port_);
          isset_port_ = true;
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
  if (!isset_host_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_port_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ServerSignature::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ServerSignature");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("host_", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->host_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("port_", ::apache::thrift::protocol::T_I16, 4);
  xfer += oprot->writeI16(this->port_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ServerSignature &a, ServerSignature &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.host_, b.host_);
  swap(a.port_, b.port_);
}

}} // namespace
