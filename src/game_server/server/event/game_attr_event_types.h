/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef game_attr_event_TYPES_H
#define game_attr_event_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace game { namespace server { namespace event {


class EventAttrSpiritFeed {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  EventAttrSpiritFeed() : actor_id_(0) {
  }

  virtual ~EventAttrSpiritFeed() throw() {}

  int32_t actor_id_;

  void __set_actor_id_(const int32_t val) {
    actor_id_ = val;
  }

  bool operator == (const EventAttrSpiritFeed & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    return true;
  }
  bool operator != (const EventAttrSpiritFeed &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventAttrSpiritFeed & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(EventAttrSpiritFeed &a, EventAttrSpiritFeed &b);


class EventAttrConstellationUpgrade {
 public:

  static const char* ascii_fingerprint; // = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
  static const uint8_t binary_fingerprint[16]; // = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

  EventAttrConstellationUpgrade() : actor_id_(0) {
  }

  virtual ~EventAttrConstellationUpgrade() throw() {}

  int64_t actor_id_;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  bool operator == (const EventAttrConstellationUpgrade & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    return true;
  }
  bool operator != (const EventAttrConstellationUpgrade &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventAttrConstellationUpgrade & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(EventAttrConstellationUpgrade &a, EventAttrConstellationUpgrade &b);


class EventAttrSpiritUpgrade {
 public:

  static const char* ascii_fingerprint; // = "9C4E30169AD9E0914633984FE5C16314";
  static const uint8_t binary_fingerprint[16]; // = {0x9C,0x4E,0x30,0x16,0x9A,0xD9,0xE0,0x91,0x46,0x33,0x98,0x4F,0xE5,0xC1,0x63,0x14};

  EventAttrSpiritUpgrade() : actor_id_(0), old_level_(0), new_level_(0) {
  }

  virtual ~EventAttrSpiritUpgrade() throw() {}

  int64_t actor_id_;
  int32_t old_level_;
  int32_t new_level_;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_old_level_(const int32_t val) {
    old_level_ = val;
  }

  void __set_new_level_(const int32_t val) {
    new_level_ = val;
  }

  bool operator == (const EventAttrSpiritUpgrade & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (!(old_level_ == rhs.old_level_))
      return false;
    if (!(new_level_ == rhs.new_level_))
      return false;
    return true;
  }
  bool operator != (const EventAttrSpiritUpgrade &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventAttrSpiritUpgrade & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(EventAttrSpiritUpgrade &a, EventAttrSpiritUpgrade &b);


class EventAttrSwordUpgrade {
 public:

  static const char* ascii_fingerprint; // = "9C4E30169AD9E0914633984FE5C16314";
  static const uint8_t binary_fingerprint[16]; // = {0x9C,0x4E,0x30,0x16,0x9A,0xD9,0xE0,0x91,0x46,0x33,0x98,0x4F,0xE5,0xC1,0x63,0x14};

  EventAttrSwordUpgrade() : actor_id_(0), old_step_(0), new_step_(0) {
  }

  virtual ~EventAttrSwordUpgrade() throw() {}

  int64_t actor_id_;
  int32_t old_step_;
  int32_t new_step_;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_old_step_(const int32_t val) {
    old_step_ = val;
  }

  void __set_new_step_(const int32_t val) {
    new_step_ = val;
  }

  bool operator == (const EventAttrSwordUpgrade & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (!(old_step_ == rhs.old_step_))
      return false;
    if (!(new_step_ == rhs.new_step_))
      return false;
    return true;
  }
  bool operator != (const EventAttrSwordUpgrade &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventAttrSwordUpgrade & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(EventAttrSwordUpgrade &a, EventAttrSwordUpgrade &b);


class EventAttrNobleUpgrade {
 public:

  static const char* ascii_fingerprint; // = "9C4E30169AD9E0914633984FE5C16314";
  static const uint8_t binary_fingerprint[16]; // = {0x9C,0x4E,0x30,0x16,0x9A,0xD9,0xE0,0x91,0x46,0x33,0x98,0x4F,0xE5,0xC1,0x63,0x14};

  EventAttrNobleUpgrade() : actor_id_(0), old_level_(0), new_level_(0) {
  }

  virtual ~EventAttrNobleUpgrade() throw() {}

  int64_t actor_id_;
  int32_t old_level_;
  int32_t new_level_;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_old_level_(const int32_t val) {
    old_level_ = val;
  }

  void __set_new_level_(const int32_t val) {
    new_level_ = val;
  }

  bool operator == (const EventAttrNobleUpgrade & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (!(old_level_ == rhs.old_level_))
      return false;
    if (!(new_level_ == rhs.new_level_))
      return false;
    return true;
  }
  bool operator != (const EventAttrNobleUpgrade &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventAttrNobleUpgrade & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(EventAttrNobleUpgrade &a, EventAttrNobleUpgrade &b);

}}} // namespace

#endif
