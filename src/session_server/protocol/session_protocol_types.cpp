/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "session_protocol_types.h"

#include <algorithm>

namespace session { namespace protocol {

int _kMessageTypeValues[] = {
  MessageType::MESSAGE_MIN,
  MessageType::MESSAGE_LOGIN_REQUEST,
  MessageType::MESSAGE_LOGIN_RESPONSE,
  MessageType::MESSAGE_LOGOUT_REQUEST,
  MessageType::MESSAGE_LOGOUT_RESPONSE,
  MessageType::MESSAGE_USER_MESSAGE_FORWARD,
  MessageType::MESSAGE_USER_MESSAGE_BROADCAST,
  MessageType::MESSAGE_USER_MESSAGE_MULTICAST,
  MessageType::MESSAGE_GAME_SERVER,
  MessageType::MESSAGE_GATEWAY_SERVER,
  MessageType::MESSAGE_MAX
};
const char* _kMessageTypeNames[] = {
  "MESSAGE_MIN",
  "MESSAGE_LOGIN_REQUEST",
  "MESSAGE_LOGIN_RESPONSE",
  "MESSAGE_LOGOUT_REQUEST",
  "MESSAGE_LOGOUT_RESPONSE",
  "MESSAGE_USER_MESSAGE_FORWARD",
  "MESSAGE_USER_MESSAGE_BROADCAST",
  "MESSAGE_USER_MESSAGE_MULTICAST",
  "MESSAGE_GAME_SERVER",
  "MESSAGE_GATEWAY_SERVER",
  "MESSAGE_MAX"
};
const std::map<int, const char*> _MessageType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(11, _kMessageTypeValues, _kMessageTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

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

const char* MessageLoginResponse::ascii_fingerprint = "5892306F7B861249AE8E27C8ED619593";
const uint8_t MessageLoginResponse::binary_fingerprint[16] = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

uint32_t MessageLoginResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_logined_ = false;

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
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_logined_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageLoginResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageLoginResponse");

  xfer += oprot->writeFieldBegin("logined_", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->logined_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageLoginResponse &a, MessageLoginResponse &b) {
  using ::std::swap;
  swap(a.logined_, b.logined_);
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

const char* MessageUserMessageForward::ascii_fingerprint = "86D97BA61768267A7CE47610E95DE354";
const uint8_t MessageUserMessageForward::binary_fingerprint[16] = {0x86,0xD9,0x7B,0xA6,0x17,0x68,0x26,0x7A,0x7C,0xE4,0x76,0x10,0xE9,0x5D,0xE3,0x54};

uint32_t MessageUserMessageForward::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_message_ = false;
  bool isset_type_ = false;
  bool isset_actor_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->message_);
          isset_message_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->type_);
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
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

  if (!isset_message_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageUserMessageForward::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageUserMessageForward");

  xfer += oprot->writeFieldBegin("message_", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeBinary(this->message_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageUserMessageForward &a, MessageUserMessageForward &b) {
  using ::std::swap;
  swap(a.message_, b.message_);
  swap(a.type_, b.type_);
  swap(a.actor_, b.actor_);
}

const char* MessageUserMessageBroadcast::ascii_fingerprint = "EEBC915CE44901401D881E6091423036";
const uint8_t MessageUserMessageBroadcast::binary_fingerprint[16] = {0xEE,0xBC,0x91,0x5C,0xE4,0x49,0x01,0x40,0x1D,0x88,0x1E,0x60,0x91,0x42,0x30,0x36};

uint32_t MessageUserMessageBroadcast::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_message_ = false;
  bool isset_type_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->message_);
          isset_message_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->type_);
          isset_type_ = true;
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

  if (!isset_message_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageUserMessageBroadcast::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageUserMessageBroadcast");

  xfer += oprot->writeFieldBegin("message_", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeBinary(this->message_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageUserMessageBroadcast &a, MessageUserMessageBroadcast &b) {
  using ::std::swap;
  swap(a.message_, b.message_);
  swap(a.type_, b.type_);
}

const char* MessageUserMessageMulticast::ascii_fingerprint = "30C610D48FF3416086E863574849F8C5";
const uint8_t MessageUserMessageMulticast::binary_fingerprint[16] = {0x30,0xC6,0x10,0xD4,0x8F,0xF3,0x41,0x60,0x86,0xE8,0x63,0x57,0x48,0x49,0xF8,0xC5};

uint32_t MessageUserMessageMulticast::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_message_ = false;
  bool isset_type_ = false;
  bool isset_actors_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->message_);
          isset_message_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->type_);
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->actors_.clear();
            uint32_t _size1;
            ::apache::thrift::protocol::TType _etype4;
            xfer += iprot->readListBegin(_etype4, _size1);
            this->actors_.resize(_size1);
            uint32_t _i5;
            for (_i5 = 0; _i5 < _size1; ++_i5)
            {
              xfer += iprot->readI64(this->actors_[_i5]);
            }
            xfer += iprot->readListEnd();
          }
          isset_actors_ = true;
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

  if (!isset_message_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_actors_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageUserMessageMulticast::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageUserMessageMulticast");

  xfer += oprot->writeFieldBegin("message_", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeBinary(this->message_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("actors_", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->actors_.size()));
    std::vector<int64_t> ::const_iterator _iter6;
    for (_iter6 = this->actors_.begin(); _iter6 != this->actors_.end(); ++_iter6)
    {
      xfer += oprot->writeI64((*_iter6));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageUserMessageMulticast &a, MessageUserMessageMulticast &b) {
  using ::std::swap;
  swap(a.message_, b.message_);
  swap(a.type_, b.type_);
  swap(a.actors_, b.actors_);
}

const char* MessageGameServer::ascii_fingerprint = "3F5FC93B338687BC7235B1AB103F47B3";
const uint8_t MessageGameServer::binary_fingerprint[16] = {0x3F,0x5F,0xC9,0x3B,0x33,0x86,0x87,0xBC,0x72,0x35,0xB1,0xAB,0x10,0x3F,0x47,0xB3};

uint32_t MessageGameServer::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readI32(this->type_);
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

uint32_t MessageGameServer::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageGameServer");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message_", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->message_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageGameServer &a, MessageGameServer &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.message_, b.message_);
}

const char* MessageGatewayServer::ascii_fingerprint = "3F5FC93B338687BC7235B1AB103F47B3";
const uint8_t MessageGatewayServer::binary_fingerprint[16] = {0x3F,0x5F,0xC9,0x3B,0x33,0x86,0x87,0xBC,0x72,0x35,0xB1,0xAB,0x10,0x3F,0x47,0xB3};

uint32_t MessageGatewayServer::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readI32(this->type_);
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

uint32_t MessageGatewayServer::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageGatewayServer");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message_", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->message_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageGatewayServer &a, MessageGatewayServer &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.message_, b.message_);
}

}} // namespace
