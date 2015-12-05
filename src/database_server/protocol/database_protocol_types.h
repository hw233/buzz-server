/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef database_protocol_TYPES_H
#define database_protocol_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "server_type_types.h"
#include "database_storage_types.h"


namespace database { namespace protocol {

struct MessageType {
  enum type {
    MESSAGE_MIN = 0,
    MESSAGE_LOGIN_REQUEST = 0,
    MESSAGE_LOGIN_RESPONSE = 1,
    MESSAGE_LOGOUT_REQUEST = 2,
    MESSAGE_LOGOUT_RESPONSE = 3,
    MESSAGE_STORAGE_REQUEST = 4,
    MESSAGE_STORAGE_RESPONSE = 5,
    MESSAGE_MAX = 6
  };
};

extern const std::map<int, const char*> _MessageType_VALUES_TO_NAMES;

struct ResponseType {
  enum type {
    SUCCESS = 0,
    ERROR_MESSAGE = 1,
    ERROR_DISCONNECTED = 2,
    ERROR_UNKNOWN = 3,
    MAX = 4
  };
};

extern const std::map<int, const char*> _ResponseType_VALUES_TO_NAMES;


class Message {
 public:

  static const char* ascii_fingerprint; // = "19B5240589E680301A7E32DF3971EFBE";
  static const uint8_t binary_fingerprint[16]; // = {0x19,0xB5,0x24,0x05,0x89,0xE6,0x80,0x30,0x1A,0x7E,0x32,0xDF,0x39,0x71,0xEF,0xBE};

  Message() : type_((MessageType::type)0), message_() {
  }

  virtual ~Message() throw() {}

  MessageType::type type_;
  std::string message_;

  void __set_type_(const MessageType::type val) {
    type_ = val;
  }

  void __set_message_(const std::string& val) {
    message_ = val;
  }

  bool operator == (const Message & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(message_ == rhs.message_))
      return false;
    return true;
  }
  bool operator != (const Message &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Message & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Message &a, Message &b);


class MessageLoginRequest {
 public:

  static const char* ascii_fingerprint; // = "C0F29BB444E710C0575C3986968CD840";
  static const uint8_t binary_fingerprint[16]; // = {0xC0,0xF2,0x9B,0xB4,0x44,0xE7,0x10,0xC0,0x57,0x5C,0x39,0x86,0x96,0x8C,0xD8,0x40};

  MessageLoginRequest() {
  }

  virtual ~MessageLoginRequest() throw() {}

   ::global::protocol::ServerSignature signature_;

  void __set_signature_(const  ::global::protocol::ServerSignature& val) {
    signature_ = val;
  }

  bool operator == (const MessageLoginRequest & rhs) const
  {
    if (!(signature_ == rhs.signature_))
      return false;
    return true;
  }
  bool operator != (const MessageLoginRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageLoginRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageLoginRequest &a, MessageLoginRequest &b);


class MessageLoginResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  MessageLoginResponse() : logined_(0) {
  }

  virtual ~MessageLoginResponse() throw() {}

  bool logined_;

  void __set_logined_(const bool val) {
    logined_ = val;
  }

  bool operator == (const MessageLoginResponse & rhs) const
  {
    if (!(logined_ == rhs.logined_))
      return false;
    return true;
  }
  bool operator != (const MessageLoginResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageLoginResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageLoginResponse &a, MessageLoginResponse &b);


class MessageLogoutRequest {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  MessageLogoutRequest() {
  }

  virtual ~MessageLogoutRequest() throw() {}


  bool operator == (const MessageLogoutRequest & /* rhs */) const
  {
    return true;
  }
  bool operator != (const MessageLogoutRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageLogoutRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageLogoutRequest &a, MessageLogoutRequest &b);


class MessageLogoutResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  MessageLogoutResponse() : logouted_(0) {
  }

  virtual ~MessageLogoutResponse() throw() {}

  bool logouted_;

  void __set_logouted_(const bool val) {
    logouted_ = val;
  }

  bool operator == (const MessageLogoutResponse & rhs) const
  {
    if (!(logouted_ == rhs.logouted_))
      return false;
    return true;
  }
  bool operator != (const MessageLogoutResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageLogoutResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageLogoutResponse &a, MessageLogoutResponse &b);


class MessageStorageRequest {
 public:

  static const char* ascii_fingerprint; // = "48B8A063FCB7F1271DA5476832739EBE";
  static const uint8_t binary_fingerprint[16]; // = {0x48,0xB8,0xA0,0x63,0xFC,0xB7,0xF1,0x27,0x1D,0xA5,0x47,0x68,0x32,0x73,0x9E,0xBE};

  MessageStorageRequest() : type_(( ::database::protocol::StorageType::type)0), message_(), channel_(0) {
  }

  virtual ~MessageStorageRequest() throw() {}

   ::database::protocol::StorageType::type type_;
  std::string message_;
  int64_t channel_;

  void __set_type_(const  ::database::protocol::StorageType::type val) {
    type_ = val;
  }

  void __set_message_(const std::string& val) {
    message_ = val;
  }

  void __set_channel_(const int64_t val) {
    channel_ = val;
  }

  bool operator == (const MessageStorageRequest & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(message_ == rhs.message_))
      return false;
    if (!(channel_ == rhs.channel_))
      return false;
    return true;
  }
  bool operator != (const MessageStorageRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageStorageRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageStorageRequest &a, MessageStorageRequest &b);


class MessageStorageResponse {
 public:

  static const char* ascii_fingerprint; // = "81922AF91D25954C1BA7F48693E53FFB";
  static const uint8_t binary_fingerprint[16]; // = {0x81,0x92,0x2A,0xF9,0x1D,0x25,0x95,0x4C,0x1B,0xA7,0xF4,0x86,0x93,0xE5,0x3F,0xFB};

  MessageStorageResponse() : result_((ResponseType::type)0), response_() {
  }

  virtual ~MessageStorageResponse() throw() {}

  MessageStorageRequest request_;
  ResponseType::type result_;
  std::string response_;

  void __set_request_(const MessageStorageRequest& val) {
    request_ = val;
  }

  void __set_result_(const ResponseType::type val) {
    result_ = val;
  }

  void __set_response_(const std::string& val) {
    response_ = val;
  }

  bool operator == (const MessageStorageResponse & rhs) const
  {
    if (!(request_ == rhs.request_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    if (!(response_ == rhs.response_))
      return false;
    return true;
  }
  bool operator != (const MessageStorageResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageStorageResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageStorageResponse &a, MessageStorageResponse &b);

}} // namespace

#endif
