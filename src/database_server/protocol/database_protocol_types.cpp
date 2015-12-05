/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "database_protocol_types.h"

#include <algorithm>

namespace database { namespace protocol {

int _kMessageTypeValues[] = {
  MessageType::MESSAGE_MIN,
  MessageType::MESSAGE_LOGIN_REQUEST,
  MessageType::MESSAGE_LOGIN_RESPONSE,
  MessageType::MESSAGE_LOGOUT_REQUEST,
  MessageType::MESSAGE_LOGOUT_RESPONSE,
  MessageType::MESSAGE_STORAGE_REQUEST,
  MessageType::MESSAGE_STORAGE_RESPONSE,
  MessageType::MESSAGE_MAX
};
const char* _kMessageTypeNames[] = {
  "MESSAGE_MIN",
  "MESSAGE_LOGIN_REQUEST",
  "MESSAGE_LOGIN_RESPONSE",
  "MESSAGE_LOGOUT_REQUEST",
  "MESSAGE_LOGOUT_RESPONSE",
  "MESSAGE_STORAGE_REQUEST",
  "MESSAGE_STORAGE_RESPONSE",
  "MESSAGE_MAX"
};
const std::map<int, const char*> _MessageType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(8, _kMessageTypeValues, _kMessageTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kResponseTypeValues[] = {
  ResponseType::SUCCESS,
  ResponseType::ERROR_MESSAGE,
  ResponseType::ERROR_DISCONNECTED,
  ResponseType::ERROR_UNKNOWN,
  ResponseType::MAX
};
const char* _kResponseTypeNames[] = {
  "SUCCESS",
  "ERROR_MESSAGE",
  "ERROR_DISCONNECTED",
  "ERROR_UNKNOWN",
  "MAX"
};
const std::map<int, const char*> _ResponseType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kResponseTypeValues, _kResponseTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

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

const char* MessageStorageRequest::ascii_fingerprint = "48B8A063FCB7F1271DA5476832739EBE";
const uint8_t MessageStorageRequest::binary_fingerprint[16] = {0x48,0xB8,0xA0,0x63,0xFC,0xB7,0xF1,0x27,0x1D,0xA5,0x47,0x68,0x32,0x73,0x9E,0xBE};

uint32_t MessageStorageRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_message_ = false;
  bool isset_channel_ = false;

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
          this->type_ = ( ::database::protocol::StorageType::type)ecast1;
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
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->channel_);
          isset_channel_ = true;
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
  if (!isset_channel_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageStorageRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageStorageRequest");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message_", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->message_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("channel_", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->channel_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageStorageRequest &a, MessageStorageRequest &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.message_, b.message_);
  swap(a.channel_, b.channel_);
}

const char* MessageStorageResponse::ascii_fingerprint = "81922AF91D25954C1BA7F48693E53FFB";
const uint8_t MessageStorageResponse::binary_fingerprint[16] = {0x81,0x92,0x2A,0xF9,0x1D,0x25,0x95,0x4C,0x1B,0xA7,0xF4,0x86,0x93,0xE5,0x3F,0xFB};

uint32_t MessageStorageResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_request_ = false;
  bool isset_result_ = false;
  bool isset_response_ = false;

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
          xfer += this->request_.read(iprot);
          isset_request_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast2;
          xfer += iprot->readI32(ecast2);
          this->result_ = (ResponseType::type)ecast2;
          isset_result_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->response_);
          isset_response_ = true;
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

  if (!isset_request_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_result_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_response_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageStorageResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageStorageResponse");

  xfer += oprot->writeFieldBegin("request_", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->request_.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((int32_t)this->result_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("response_", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeBinary(this->response_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageStorageResponse &a, MessageStorageResponse &b) {
  using ::std::swap;
  swap(a.request_, b.request_);
  swap(a.result_, b.result_);
  swap(a.response_, b.response_);
}

}} // namespace
