/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef protocol_TYPES_H
#define protocol_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace test { namespace chat { namespace protocol {

struct MessageType {
  enum type {
    MESSAGE_LOGIN_REQUEST = 0,
    MESSAGE_LOGIN_RESPONSE = 1,
    MESSAGE_LOGIN_BROADCAST = 2,
    MESSAGE_LOGOUT_REQUEST = 3,
    MESSAGE_LOGOUT_RESPONSE = 4,
    MESSAGE_LOGOUT_BROADCAST = 5,
    MESSAGE_CHAT = 6,
    MESSAGE_ERROR = 7
  };
};

extern const std::map<int, const char*> _MessageType_VALUES_TO_NAMES;

struct ChatType {
  enum type {
    CHAT_PRIVATE = 0,
    CHAT_BROADCAST = 1
  };
};

extern const std::map<int, const char*> _ChatType_VALUES_TO_NAMES;

typedef struct _Message__isset {
  _Message__isset() : message_(false) {}
  bool message_;
} _Message__isset;

class Message {
 public:

  static const char* ascii_fingerprint; // = "24652790C81ECE22B629CB60A19F1E93";
  static const uint8_t binary_fingerprint[16]; // = {0x24,0x65,0x27,0x90,0xC8,0x1E,0xCE,0x22,0xB6,0x29,0xCB,0x60,0xA1,0x9F,0x1E,0x93};

  Message() : type_((MessageType::type)0), message_() {
  }

  virtual ~Message() throw() {}

  MessageType::type type_;
  std::string message_;

  _Message__isset __isset;

  void __set_type_(const MessageType::type val) {
    type_ = val;
  }

  void __set_message_(const std::string& val) {
    message_ = val;
    __isset.message_ = true;
  }

  bool operator == (const Message & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (__isset.message_ != rhs.__isset.message_)
      return false;
    else if (__isset.message_ && !(message_ == rhs.message_))
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

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageLoginRequest() : name_() {
  }

  virtual ~MessageLoginRequest() throw() {}

  std::string name_;

  void __set_name_(const std::string& val) {
    name_ = val;
  }

  bool operator == (const MessageLoginRequest & rhs) const
  {
    if (!(name_ == rhs.name_))
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

  MessageLoginResponse() : success_(0) {
  }

  virtual ~MessageLoginResponse() throw() {}

  bool success_;

  void __set_success_(const bool val) {
    success_ = val;
  }

  bool operator == (const MessageLoginResponse & rhs) const
  {
    if (!(success_ == rhs.success_))
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


class MessageLoginBroadcast {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageLoginBroadcast() : name_() {
  }

  virtual ~MessageLoginBroadcast() throw() {}

  std::string name_;

  void __set_name_(const std::string& val) {
    name_ = val;
  }

  bool operator == (const MessageLoginBroadcast & rhs) const
  {
    if (!(name_ == rhs.name_))
      return false;
    return true;
  }
  bool operator != (const MessageLoginBroadcast &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageLoginBroadcast & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageLoginBroadcast &a, MessageLoginBroadcast &b);


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

  MessageLogoutResponse() : success_(0) {
  }

  virtual ~MessageLogoutResponse() throw() {}

  bool success_;

  void __set_success_(const bool val) {
    success_ = val;
  }

  bool operator == (const MessageLogoutResponse & rhs) const
  {
    if (!(success_ == rhs.success_))
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


class MessageLogoutBroadcast {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageLogoutBroadcast() : name_() {
  }

  virtual ~MessageLogoutBroadcast() throw() {}

  std::string name_;

  void __set_name_(const std::string& val) {
    name_ = val;
  }

  bool operator == (const MessageLogoutBroadcast & rhs) const
  {
    if (!(name_ == rhs.name_))
      return false;
    return true;
  }
  bool operator != (const MessageLogoutBroadcast &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageLogoutBroadcast & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageLogoutBroadcast &a, MessageLogoutBroadcast &b);

typedef struct _MessageChat__isset {
  _MessageChat__isset() : to_(false) {}
  bool to_;
} _MessageChat__isset;

class MessageChat {
 public:

  static const char* ascii_fingerprint; // = "EBEEF4EAB67BBBF80F2CBE2135601C83";
  static const uint8_t binary_fingerprint[16]; // = {0xEB,0xEE,0xF4,0xEA,0xB6,0x7B,0xBB,0xF8,0x0F,0x2C,0xBE,0x21,0x35,0x60,0x1C,0x83};

  MessageChat() : type_((ChatType::type)0), from_(), to_(), contect_() {
  }

  virtual ~MessageChat() throw() {}

  ChatType::type type_;
  std::string from_;
  std::string to_;
  std::string contect_;

  _MessageChat__isset __isset;

  void __set_type_(const ChatType::type val) {
    type_ = val;
  }

  void __set_from_(const std::string& val) {
    from_ = val;
  }

  void __set_to_(const std::string& val) {
    to_ = val;
    __isset.to_ = true;
  }

  void __set_contect_(const std::string& val) {
    contect_ = val;
  }

  bool operator == (const MessageChat & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(from_ == rhs.from_))
      return false;
    if (__isset.to_ != rhs.__isset.to_)
      return false;
    else if (__isset.to_ && !(to_ == rhs.to_))
      return false;
    if (!(contect_ == rhs.contect_))
      return false;
    return true;
  }
  bool operator != (const MessageChat &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageChat & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageChat &a, MessageChat &b);


class MessageError {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageError() : contect_() {
  }

  virtual ~MessageError() throw() {}

  std::string contect_;

  void __set_contect_(const std::string& val) {
    contect_ = val;
  }

  bool operator == (const MessageError & rhs) const
  {
    if (!(contect_ == rhs.contect_))
      return false;
    return true;
  }
  bool operator != (const MessageError &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageError & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageError &a, MessageError &b);

}}} // namespace

#endif
