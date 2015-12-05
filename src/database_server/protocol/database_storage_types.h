/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef database_storage_TYPES_H
#define database_storage_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace database { namespace protocol {

struct StorageType {
  enum type {
    STORAGE_START = 0,
    STORAGE_TEST_ECHO = 0,
    STORAGE_TEST_SUM = 1,
    STORAGE_CHECK_SESSION = 2,
    STORAGE_ACTOR_ONLINE = 3,
    STORAGE_ACTOR_LOGOUT_CENTER = 4,
    STORAGE_WORLD_DATA_SAVE = 5,
    STORAGE_ACTOR_LOGIN = 6,
    STORAGE_ACTOR_SAVE = 7,
    STORAGE_COOLING_LOGIN = 8,
    STORAGE_COOLING_SAVE = 9,
    STORAGE_SKILL_LOGIN = 10,
    STORAGE_SKILL_SAVE = 11,
    STORAGE_BUFF_LOGIN = 12,
    STORAGE_BUFF_SAVE = 13,
    STORAGE_ITEM_ACTOR_LOGIN = 14,
    STORAGE_ITEM_ACTOR_SAVE = 15,
    STORAGE_ITEM_LOGIN = 16,
    STORAGE_ITEM_SAVE = 17,
    STORAGE_GEM_LOGIN = 18,
    STORAGE_GEM_SAVE = 19,
    STORAGE_SOUL_LOGIN = 20,
    STORAGE_SOUL_SAVE = 21,
    STORAGE_SOUL_ACTOR_LOGIN = 22,
    STORAGE_SOUL_ACTOR_SAVE = 23,
    STORAGE_TASK_LOGIN = 24,
    STORAGE_TASK_SAVE = 25,
    STORAGE_TASK_ACTOR_LOGIN = 26,
    STORAGE_TASK_ACTOR_SAVE = 27,
    STORAGE_ATTR_ACTOR_LOGIN = 28,
    STORAGE_ATTR_ACTOR_SAVE = 29,
    STORAGE_SPIRIT_FACADE_LOGIN = 30,
    STORAGE_SPIRIT_FACADE_SAVE = 31,
    STORAGE_MAIL_LOGIN = 32,
    STORAGE_MAIL_ADD = 33,
    STORAGE_MAIL_DEL = 34,
    STORAGE_MAIL_PICK_AFFIX = 35,
    STORAGE_MAIL_READ = 36,
    STORAGE_MAIL_AFFIX_STATE = 37,
    STORAGE_SOCIAL_ACTOR_LOGIN = 38,
    STORAGE_SOCIAL_ACTOR_SAVE = 39,
    STORAGE_GUILD_DEL = 40,
    STORAGE_GUILD_SAVE = 41,
    STORAGE_GUILD_ACTOR_LOGIN = 42,
    STORAGE_GUILD_ACTOR_SAVE = 43,
    STORAGE_PLAYING_ACTOR_LOGIN = 44,
    STORAGE_PLAYING_ACTOR_SAVE = 45,
    STORAGE_AUCTION_ACTOR_LOGIN = 46,
    STORAGE_AUCTION_ACTOR_SAVE = 47,
    STORAGE_AUCTION_TRANSACTION_DEL = 48,
    STORAGE_AUCTION_TRANSACTION_SAVE = 49,
    STORAGE_ACHIEVE_LOGIN = 50,
    STORAGE_ACHIEVE_SAVE = 51,
    STORAGE_WELFARE_LOAD = 52,
    STORAGE_WELFARE_SAVE = 53,
    STORAGE_MAX = 54
  };
};

extern const std::map<int, const char*> _StorageType_VALUES_TO_NAMES;


class StorageTestEchoRequest {
 public:

  static const char* ascii_fingerprint; // = "3F5FC93B338687BC7235B1AB103F47B3";
  static const uint8_t binary_fingerprint[16]; // = {0x3F,0x5F,0xC9,0x3B,0x33,0x86,0x87,0xBC,0x72,0x35,0xB1,0xAB,0x10,0x3F,0x47,0xB3};

  StorageTestEchoRequest() : argu1_(0), argu2_() {
  }

  virtual ~StorageTestEchoRequest() throw() {}

  int32_t argu1_;
  std::string argu2_;

  void __set_argu1_(const int32_t val) {
    argu1_ = val;
  }

  void __set_argu2_(const std::string& val) {
    argu2_ = val;
  }

  bool operator == (const StorageTestEchoRequest & rhs) const
  {
    if (!(argu1_ == rhs.argu1_))
      return false;
    if (!(argu2_ == rhs.argu2_))
      return false;
    return true;
  }
  bool operator != (const StorageTestEchoRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageTestEchoRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageTestEchoRequest &a, StorageTestEchoRequest &b);


class StorageTestEchoResponse {
 public:

  static const char* ascii_fingerprint; // = "3F5FC93B338687BC7235B1AB103F47B3";
  static const uint8_t binary_fingerprint[16]; // = {0x3F,0x5F,0xC9,0x3B,0x33,0x86,0x87,0xBC,0x72,0x35,0xB1,0xAB,0x10,0x3F,0x47,0xB3};

  StorageTestEchoResponse() : retvalue1_(0), retvalue2_() {
  }

  virtual ~StorageTestEchoResponse() throw() {}

  int32_t retvalue1_;
  std::string retvalue2_;

  void __set_retvalue1_(const int32_t val) {
    retvalue1_ = val;
  }

  void __set_retvalue2_(const std::string& val) {
    retvalue2_ = val;
  }

  bool operator == (const StorageTestEchoResponse & rhs) const
  {
    if (!(retvalue1_ == rhs.retvalue1_))
      return false;
    if (!(retvalue2_ == rhs.retvalue2_))
      return false;
    return true;
  }
  bool operator != (const StorageTestEchoResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageTestEchoResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageTestEchoResponse &a, StorageTestEchoResponse &b);


class StorageTestSumRequest {
 public:

  static const char* ascii_fingerprint; // = "989D1F1AE8D148D5E2119FFEC4BBBEE3";
  static const uint8_t binary_fingerprint[16]; // = {0x98,0x9D,0x1F,0x1A,0xE8,0xD1,0x48,0xD5,0xE2,0x11,0x9F,0xFE,0xC4,0xBB,0xBE,0xE3};

  StorageTestSumRequest() : argu1_(0), argu2_(0) {
  }

  virtual ~StorageTestSumRequest() throw() {}

  int32_t argu1_;
  int32_t argu2_;

  void __set_argu1_(const int32_t val) {
    argu1_ = val;
  }

  void __set_argu2_(const int32_t val) {
    argu2_ = val;
  }

  bool operator == (const StorageTestSumRequest & rhs) const
  {
    if (!(argu1_ == rhs.argu1_))
      return false;
    if (!(argu2_ == rhs.argu2_))
      return false;
    return true;
  }
  bool operator != (const StorageTestSumRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageTestSumRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageTestSumRequest &a, StorageTestSumRequest &b);


class StorageTestSumResponse {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  StorageTestSumResponse() : sum_(0) {
  }

  virtual ~StorageTestSumResponse() throw() {}

  int32_t sum_;

  void __set_sum_(const int32_t val) {
    sum_ = val;
  }

  bool operator == (const StorageTestSumResponse & rhs) const
  {
    if (!(sum_ == rhs.sum_))
      return false;
    return true;
  }
  bool operator != (const StorageTestSumResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageTestSumResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageTestSumResponse &a, StorageTestSumResponse &b);

}} // namespace

#endif
