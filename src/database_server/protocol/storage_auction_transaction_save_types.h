/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_auction_transaction_save_TYPES_H
#define storage_auction_transaction_save_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace database { namespace protocol {

struct AuctionTransactionField {
  enum type {
    ID = 0,
    ITEM_TEMPLATE_ID = 1,
    ITEM_NUMBER = 2,
    ITEM_EXTRA_INFO = 3,
    AUCTION_TIME_ID = 4,
    START_BID_TIME = 5,
    END_BID_TIME = 6,
    OWNER = 7,
    BUYER = 8,
    START_BID_PRICE = 9,
    LAST_BID_PRICE = 10,
    BUYOUT_PRICE = 11,
    FINISHED = 12,
    MONEY_WITHDRAWN = 13,
    ITEM_WITHDRAWN = 14,
    MAX = 15
  };
};

extern const std::map<int, const char*> _AuctionTransactionField_VALUES_TO_NAMES;


class StorageAuctionTransactionField {
 public:

  static const char* ascii_fingerprint; // = "32E24769DE84CA1D9CB08F503808B4DF";
  static const uint8_t binary_fingerprint[16]; // = {0x32,0xE2,0x47,0x69,0xDE,0x84,0xCA,0x1D,0x9C,0xB0,0x8F,0x50,0x38,0x08,0xB4,0xDF};

  StorageAuctionTransactionField() : id_(), item_template_id_(0), item_number_(0), item_extra_info_(), auction_time_id_(0), start_bid_time_(0), end_bid_time_(0), owner_(0), buyer_(0), start_bid_price_(0), last_bid_price_(0), buyout_price_(0), finished_(0), money_withdrawn_(0), item_withdrawn_(0) {
  }

  virtual ~StorageAuctionTransactionField() throw() {}

  std::string id_;
  int32_t item_template_id_;
  int32_t item_number_;
  std::string item_extra_info_;
  int32_t auction_time_id_;
  int64_t start_bid_time_;
  int64_t end_bid_time_;
  int64_t owner_;
  int64_t buyer_;
  int32_t start_bid_price_;
  int32_t last_bid_price_;
  int32_t buyout_price_;
  bool finished_;
  bool money_withdrawn_;
  bool item_withdrawn_;

  void __set_id_(const std::string& val) {
    id_ = val;
  }

  void __set_item_template_id_(const int32_t val) {
    item_template_id_ = val;
  }

  void __set_item_number_(const int32_t val) {
    item_number_ = val;
  }

  void __set_item_extra_info_(const std::string& val) {
    item_extra_info_ = val;
  }

  void __set_auction_time_id_(const int32_t val) {
    auction_time_id_ = val;
  }

  void __set_start_bid_time_(const int64_t val) {
    start_bid_time_ = val;
  }

  void __set_end_bid_time_(const int64_t val) {
    end_bid_time_ = val;
  }

  void __set_owner_(const int64_t val) {
    owner_ = val;
  }

  void __set_buyer_(const int64_t val) {
    buyer_ = val;
  }

  void __set_start_bid_price_(const int32_t val) {
    start_bid_price_ = val;
  }

  void __set_last_bid_price_(const int32_t val) {
    last_bid_price_ = val;
  }

  void __set_buyout_price_(const int32_t val) {
    buyout_price_ = val;
  }

  void __set_finished_(const bool val) {
    finished_ = val;
  }

  void __set_money_withdrawn_(const bool val) {
    money_withdrawn_ = val;
  }

  void __set_item_withdrawn_(const bool val) {
    item_withdrawn_ = val;
  }

  bool operator == (const StorageAuctionTransactionField & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (!(item_template_id_ == rhs.item_template_id_))
      return false;
    if (!(item_number_ == rhs.item_number_))
      return false;
    if (!(item_extra_info_ == rhs.item_extra_info_))
      return false;
    if (!(auction_time_id_ == rhs.auction_time_id_))
      return false;
    if (!(start_bid_time_ == rhs.start_bid_time_))
      return false;
    if (!(end_bid_time_ == rhs.end_bid_time_))
      return false;
    if (!(owner_ == rhs.owner_))
      return false;
    if (!(buyer_ == rhs.buyer_))
      return false;
    if (!(start_bid_price_ == rhs.start_bid_price_))
      return false;
    if (!(last_bid_price_ == rhs.last_bid_price_))
      return false;
    if (!(buyout_price_ == rhs.buyout_price_))
      return false;
    if (!(finished_ == rhs.finished_))
      return false;
    if (!(money_withdrawn_ == rhs.money_withdrawn_))
      return false;
    if (!(item_withdrawn_ == rhs.item_withdrawn_))
      return false;
    return true;
  }
  bool operator != (const StorageAuctionTransactionField &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageAuctionTransactionField & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageAuctionTransactionField &a, StorageAuctionTransactionField &b);


class StorageAuctionTransactionSaveRequest {
 public:

  static const char* ascii_fingerprint; // = "E3B73E99BB74A2B6EBA048018276B672";
  static const uint8_t binary_fingerprint[16]; // = {0xE3,0xB7,0x3E,0x99,0xBB,0x74,0xA2,0xB6,0xEB,0xA0,0x48,0x01,0x82,0x76,0xB6,0x72};

  StorageAuctionTransactionSaveRequest() {
  }

  virtual ~StorageAuctionTransactionSaveRequest() throw() {}

  StorageAuctionTransactionField field_;

  void __set_field_(const StorageAuctionTransactionField& val) {
    field_ = val;
  }

  bool operator == (const StorageAuctionTransactionSaveRequest & rhs) const
  {
    if (!(field_ == rhs.field_))
      return false;
    return true;
  }
  bool operator != (const StorageAuctionTransactionSaveRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageAuctionTransactionSaveRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageAuctionTransactionSaveRequest &a, StorageAuctionTransactionSaveRequest &b);


class StorageAuctionTransactionSaveResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  StorageAuctionTransactionSaveResponse() : result_(0) {
  }

  virtual ~StorageAuctionTransactionSaveResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const StorageAuctionTransactionSaveResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const StorageAuctionTransactionSaveResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageAuctionTransactionSaveResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageAuctionTransactionSaveResponse &a, StorageAuctionTransactionSaveResponse &b);

}} // namespace

#endif