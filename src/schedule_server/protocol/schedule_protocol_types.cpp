/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "schedule_protocol_types.h"

#include <algorithm>

namespace schedule { namespace protocol {

int _kMessageTypeValues[] = {
  MessageType::MESSAGE_MIN,
  MessageType::MESSAGE_LOGIN_REQUEST,
  MessageType::MESSAGE_LOGIN_RESPONSE,
  MessageType::MESSAGE_LOGIN_BROADCAST,
  MessageType::MESSAGE_LOGOUT_REQUEST,
  MessageType::MESSAGE_LOGOUT_RESPONSE,
  MessageType::MESSAGE_LOGOUT_BROADCAST,
  MessageType::MESSAGE_GATEWAY_USER_NUMBER_UPLOAD,
  MessageType::MESSAGE_GATEWAY_USER_NUMBER_BROADCAST,
  MessageType::MESSAGE_MAX
};
const char* _kMessageTypeNames[] = {
  "MESSAGE_MIN",
  "MESSAGE_LOGIN_REQUEST",
  "MESSAGE_LOGIN_RESPONSE",
  "MESSAGE_LOGIN_BROADCAST",
  "MESSAGE_LOGOUT_REQUEST",
  "MESSAGE_LOGOUT_RESPONSE",
  "MESSAGE_LOGOUT_BROADCAST",
  "MESSAGE_GATEWAY_USER_NUMBER_UPLOAD",
  "MESSAGE_GATEWAY_USER_NUMBER_BROADCAST",
  "MESSAGE_MAX"
};
const std::map<int, const char*> _MessageType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(10, _kMessageTypeValues, _kMessageTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* Message::ascii_fingerprint = "19B5240589E680301A7E32DF3971EFBE";
const uint8_t Message::binary_fingerprint[16] = {0x19,0xB5,0x24,0x05,0x89,0xE6,0x80,0x30,0x1A,0x7E,0x32,0xDF,0x39,0x71,0xEF,0xBE};

uint32_t Message::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_message_ = false;

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
          this->type_ = (MessageType::type)ecast0;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->message_);
          isset_message_ = true;
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
  if (!isset_message_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Message::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Message");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message_", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->message_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Message &a, Message &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.message_, b.message_);
}

const char* MessageLoginRequest::ascii_fingerprint = "C0F29BB444E710C0575C3986968CD840";
const uint8_t MessageLoginRequest::binary_fingerprint[16] = {0xC0,0xF2,0x9B,0xB4,0x44,0xE7,0x10,0xC0,0x57,0x5C,0x39,0x86,0x96,0x8C,0xD8,0x40};

uint32_t MessageLoginRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_signature_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->signature_.read(iprot);
          isset_signature_ = true;
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

  if (!isset_signature_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageLoginRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageLoginRequest");

  xfer += oprot->writeFieldBegin("signature_", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->signature_.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageLoginRequest &a, MessageLoginRequest &b) {
  using ::std::swap;
  swap(a.signature_, b.signature_);
}

const char* MessageLoginResponse::ascii_fingerprint = "D4885E071DE3DB4B501FB77D4BDF25CA";
const uint8_t MessageLoginResponse::binary_fingerprint[16] = {0xD4,0x88,0x5E,0x07,0x1D,0xE3,0xDB,0x4B,0x50,0x1F,0xB7,0x7D,0x4B,0xDF,0x25,0xCA};

uint32_t MessageLoginResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_logined_ = false;
  bool isset_servers_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->logined_);
          isset_logined_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->servers_.clear();
            uint32_t _size1;
            ::apache::thrift::protocol::TType _etype4;
            xfer += iprot->readListBegin(_etype4, _size1);
            this->servers_.resize(_size1);
            uint32_t _i5;
            for (_i5 = 0; _i5 < _size1; ++_i5)
            {
              xfer += this->servers_[_i5].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_servers_ = true;
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

  if (!isset_logined_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_servers_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageLoginResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageLoginResponse");

  xfer += oprot->writeFieldBegin("logined_", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->logined_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("servers_", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->servers_.size()));
    std::vector< ::global::protocol::ServerSignature> ::const_iterator _iter6;
    for (_iter6 = this->servers_.begin(); _iter6 != this->servers_.end(); ++_iter6)
    {
      xfer += (*_iter6).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageLoginResponse &a, MessageLoginResponse &b) {
  using ::std::swap;
  swap(a.logined_, b.logined_);
  swap(a.servers_, b.servers_);
}

const char* MessageLoginBroadcast::ascii_fingerprint = "C0F29BB444E710C0575C3986968CD840";
const uint8_t MessageLoginBroadcast::binary_fingerprint[16] = {0xC0,0xF2,0x9B,0xB4,0x44,0xE7,0x10,0xC0,0x57,0x5C,0x39,0x86,0x96,0x8C,0xD8,0x40};

uint32_t MessageLoginBroadcast::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_signature_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->signature_.read(iprot);
          isset_signature_ = true;
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

  if (!isset_signature_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageLoginBroadcast::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageLoginBroadcast");

  xfer += oprot->writeFieldBegin("signature_", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->signature_.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageLoginBroadcast &a, MessageLoginBroadcast &b) {
  using ::std::swap;
  swap(a.signature_, b.signature_);
}

const char* MessageLogoutRequest::ascii_fingerprint = "99914B932BD37A50B983C5E7C90AE93B";
const uint8_t MessageLogoutRequest::binary_fingerprint[16] = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

uint32_t MessageLogoutRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t MessageLogoutRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageLogoutRequest");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageLogoutRequest &a, MessageLogoutRequest &b) {
  using ::std::swap;
  (void) a;
  (void) b;
}

const char* MessageLogoutResponse::ascii_fingerprint = "5892306F7B861249AE8E27C8ED619593";
const uint8_t MessageLogoutResponse::binary_fingerprint[16] = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

uint32_t MessageLogoutResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_logouted_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->logouted_);
          isset_logouted_ = true;
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

  if (!isset_logouted_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageLogoutResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageLogoutResponse");

  xfer += oprot->writeFieldBegin("logouted_", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->logouted_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageLogoutResponse &a, MessageLogoutResponse &b) {
  using ::std::swap;
  swap(a.logouted_, b.logouted_);
}

const char* MessageLogoutBroadcast::ascii_fingerprint = "46A703A33337BED2F62F386FC66B2A5F";
const uint8_t MessageLogoutBroadcast::binary_fingerprint[16] = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

uint32_t MessageLogoutBroadcast::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          int32_t ecast7;
          xfer += iprot->readI32(ecast7);
          this->type_ = ( ::global::protocol::ServerType::type)ecast7;
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

uint32_t MessageLogoutBroadcast::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageLogoutBroadcast");

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

void swap(MessageLogoutBroadcast &a, MessageLogoutBroadcast &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
}

const char* MessageGatewayUserNumberUpload::ascii_fingerprint = "E86CACEB22240450EDCBEFC3A83970E4";
const uint8_t MessageGatewayUserNumberUpload::binary_fingerprint[16] = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

uint32_t MessageGatewayUserNumberUpload::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_number_ = false;

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
          xfer += iprot->readI32(this->number_);
          isset_number_ = true;
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

  if (!isset_number_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageGatewayUserNumberUpload::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageGatewayUserNumberUpload");

  xfer += oprot->writeFieldBegin("number_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->number_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageGatewayUserNumberUpload &a, MessageGatewayUserNumberUpload &b) {
  using ::std::swap;
  swap(a.number_, b.number_);
}

const char* MessageGatewayUserNumberBroadcast::ascii_fingerprint = "989D1F1AE8D148D5E2119FFEC4BBBEE3";
const uint8_t MessageGatewayUserNumberBroadcast::binary_fingerprint[16] = {0x98,0x9D,0x1F,0x1A,0xE8,0xD1,0x48,0xD5,0xE2,0x11,0x9F,0xFE,0xC4,0xBB,0xBE,0xE3};

uint32_t MessageGatewayUserNumberBroadcast::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_server_id_ = false;
  bool isset_number_ = false;

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
          xfer += iprot->readI32(this->server_id_);
          isset_server_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->number_);
          isset_number_ = true;
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

  if (!isset_server_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_number_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageGatewayUserNumberBroadcast::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageGatewayUserNumberBroadcast");

  xfer += oprot->writeFieldBegin("server_id_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->server_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("number_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->number_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageGatewayUserNumberBroadcast &a, MessageGatewayUserNumberBroadcast &b) {
  using ::std::swap;
  swap(a.server_id_, b.server_id_);
  swap(a.number_, b.number_);
}

}} // namespace
