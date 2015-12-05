/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef session_social_event_TYPES_H
#define session_social_event_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "gender_types.h"
#include "vocation_types.h"
#include "session_event_types.h"


namespace session { namespace server { namespace event {

typedef struct _EventSocialContactsInfoUpdate__isset {
  _EventSocialContactsInfoUpdate__isset() : online_(false), level_(false), gender_(false), vocation_(false), map_(false), last_logout_time_(false), signature_(false) {}
  bool online_;
  bool level_;
  bool gender_;
  bool vocation_;
  bool map_;
  bool last_logout_time_;
  bool signature_;
} _EventSocialContactsInfoUpdate__isset;

class EventSocialContactsInfoUpdate {
 public:

  static const char* ascii_fingerprint; // = "3FFB72D93EBB335FA197A8C5C0C9D973";
  static const uint8_t binary_fingerprint[16]; // = {0x3F,0xFB,0x72,0xD9,0x3E,0xBB,0x33,0x5F,0xA1,0x97,0xA8,0xC5,0xC0,0xC9,0xD9,0x73};

  EventSocialContactsInfoUpdate() : actor_id_(0), online_(0), level_(0), gender_(( ::entity::GenderType::type)0), vocation_(( ::entity::VocationType::type)0), map_(0), last_logout_time_(), signature_() {
  }

  virtual ~EventSocialContactsInfoUpdate() throw() {}

  int64_t actor_id_;
  bool online_;
  int32_t level_;
   ::entity::GenderType::type gender_;
   ::entity::VocationType::type vocation_;
  int16_t map_;
  std::string last_logout_time_;
  std::string signature_;

  _EventSocialContactsInfoUpdate__isset __isset;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_online_(const bool val) {
    online_ = val;
    __isset.online_ = true;
  }

  void __set_level_(const int32_t val) {
    level_ = val;
    __isset.level_ = true;
  }

  void __set_gender_(const  ::entity::GenderType::type val) {
    gender_ = val;
    __isset.gender_ = true;
  }

  void __set_vocation_(const  ::entity::VocationType::type val) {
    vocation_ = val;
    __isset.vocation_ = true;
  }

  void __set_map_(const int16_t val) {
    map_ = val;
    __isset.map_ = true;
  }

  void __set_last_logout_time_(const std::string& val) {
    last_logout_time_ = val;
    __isset.last_logout_time_ = true;
  }

  void __set_signature_(const std::string& val) {
    signature_ = val;
    __isset.signature_ = true;
  }

  bool operator == (const EventSocialContactsInfoUpdate & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (__isset.online_ != rhs.__isset.online_)
      return false;
    else if (__isset.online_ && !(online_ == rhs.online_))
      return false;
    if (__isset.level_ != rhs.__isset.level_)
      return false;
    else if (__isset.level_ && !(level_ == rhs.level_))
      return false;
    if (__isset.gender_ != rhs.__isset.gender_)
      return false;
    else if (__isset.gender_ && !(gender_ == rhs.gender_))
      return false;
    if (__isset.vocation_ != rhs.__isset.vocation_)
      return false;
    else if (__isset.vocation_ && !(vocation_ == rhs.vocation_))
      return false;
    if (__isset.map_ != rhs.__isset.map_)
      return false;
    else if (__isset.map_ && !(map_ == rhs.map_))
      return false;
    if (__isset.last_logout_time_ != rhs.__isset.last_logout_time_)
      return false;
    else if (__isset.last_logout_time_ && !(last_logout_time_ == rhs.last_logout_time_))
      return false;
    if (__isset.signature_ != rhs.__isset.signature_)
      return false;
    else if (__isset.signature_ && !(signature_ == rhs.signature_))
      return false;
    return true;
  }
  bool operator != (const EventSocialContactsInfoUpdate &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventSocialContactsInfoUpdate & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(EventSocialContactsInfoUpdate &a, EventSocialContactsInfoUpdate &b);

typedef struct _EventSocialEnemyInfoUpdate__isset {
  _EventSocialEnemyInfoUpdate__isset() : online_(false), level_(false), gender_(false), vocation_(false), map_(false) {}
  bool online_;
  bool level_;
  bool gender_;
  bool vocation_;
  bool map_;
} _EventSocialEnemyInfoUpdate__isset;

class EventSocialEnemyInfoUpdate {
 public:

  static const char* ascii_fingerprint; // = "6E3CD7CBF006E236C2B836156F7CF038";
  static const uint8_t binary_fingerprint[16]; // = {0x6E,0x3C,0xD7,0xCB,0xF0,0x06,0xE2,0x36,0xC2,0xB8,0x36,0x15,0x6F,0x7C,0xF0,0x38};

  EventSocialEnemyInfoUpdate() : actor_id_(0), online_(0), level_(0), gender_(( ::entity::GenderType::type)0), vocation_(( ::entity::VocationType::type)0), map_(0) {
  }

  virtual ~EventSocialEnemyInfoUpdate() throw() {}

  int64_t actor_id_;
  bool online_;
  int32_t level_;
   ::entity::GenderType::type gender_;
   ::entity::VocationType::type vocation_;
  int16_t map_;

  _EventSocialEnemyInfoUpdate__isset __isset;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_online_(const bool val) {
    online_ = val;
    __isset.online_ = true;
  }

  void __set_level_(const int32_t val) {
    level_ = val;
    __isset.level_ = true;
  }

  void __set_gender_(const  ::entity::GenderType::type val) {
    gender_ = val;
    __isset.gender_ = true;
  }

  void __set_vocation_(const  ::entity::VocationType::type val) {
    vocation_ = val;
    __isset.vocation_ = true;
  }

  void __set_map_(const int16_t val) {
    map_ = val;
    __isset.map_ = true;
  }

  bool operator == (const EventSocialEnemyInfoUpdate & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (__isset.online_ != rhs.__isset.online_)
      return false;
    else if (__isset.online_ && !(online_ == rhs.online_))
      return false;
    if (__isset.level_ != rhs.__isset.level_)
      return false;
    else if (__isset.level_ && !(level_ == rhs.level_))
      return false;
    if (__isset.gender_ != rhs.__isset.gender_)
      return false;
    else if (__isset.gender_ && !(gender_ == rhs.gender_))
      return false;
    if (__isset.vocation_ != rhs.__isset.vocation_)
      return false;
    else if (__isset.vocation_ && !(vocation_ == rhs.vocation_))
      return false;
    if (__isset.map_ != rhs.__isset.map_)
      return false;
    else if (__isset.map_ && !(map_ == rhs.map_))
      return false;
    return true;
  }
  bool operator != (const EventSocialEnemyInfoUpdate &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventSocialEnemyInfoUpdate & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(EventSocialEnemyInfoUpdate &a, EventSocialEnemyInfoUpdate &b);

typedef struct _EventHomelandFriendInfoUpdate__isset {
  _EventHomelandFriendInfoUpdate__isset() : can_visit_(false), tree_can_water_(false), tree_can_steal_(false) {}
  bool can_visit_;
  bool tree_can_water_;
  bool tree_can_steal_;
} _EventHomelandFriendInfoUpdate__isset;

class EventHomelandFriendInfoUpdate {
 public:

  static const char* ascii_fingerprint; // = "3B51D028A8CD2EC4A658BAE7819188D3";
  static const uint8_t binary_fingerprint[16]; // = {0x3B,0x51,0xD0,0x28,0xA8,0xCD,0x2E,0xC4,0xA6,0x58,0xBA,0xE7,0x81,0x91,0x88,0xD3};

  EventHomelandFriendInfoUpdate() : actor_id_(0), can_visit_(0), tree_can_water_(0), tree_can_steal_(0) {
  }

  virtual ~EventHomelandFriendInfoUpdate() throw() {}

  int64_t actor_id_;
  bool can_visit_;
  bool tree_can_water_;
  bool tree_can_steal_;

  _EventHomelandFriendInfoUpdate__isset __isset;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_can_visit_(const bool val) {
    can_visit_ = val;
    __isset.can_visit_ = true;
  }

  void __set_tree_can_water_(const bool val) {
    tree_can_water_ = val;
    __isset.tree_can_water_ = true;
  }

  void __set_tree_can_steal_(const bool val) {
    tree_can_steal_ = val;
    __isset.tree_can_steal_ = true;
  }

  bool operator == (const EventHomelandFriendInfoUpdate & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (__isset.can_visit_ != rhs.__isset.can_visit_)
      return false;
    else if (__isset.can_visit_ && !(can_visit_ == rhs.can_visit_))
      return false;
    if (__isset.tree_can_water_ != rhs.__isset.tree_can_water_)
      return false;
    else if (__isset.tree_can_water_ && !(tree_can_water_ == rhs.tree_can_water_))
      return false;
    if (__isset.tree_can_steal_ != rhs.__isset.tree_can_steal_)
      return false;
    else if (__isset.tree_can_steal_ && !(tree_can_steal_ == rhs.tree_can_steal_))
      return false;
    return true;
  }
  bool operator != (const EventHomelandFriendInfoUpdate &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventHomelandFriendInfoUpdate & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(EventHomelandFriendInfoUpdate &a, EventHomelandFriendInfoUpdate &b);

typedef struct _EventHomelandInvaderInfoUpdate__isset {
  _EventHomelandInvaderInfoUpdate__isset() : level_(false), can_visit_(false), can_strike_back_(false) {}
  bool level_;
  bool can_visit_;
  bool can_strike_back_;
} _EventHomelandInvaderInfoUpdate__isset;

class EventHomelandInvaderInfoUpdate {
 public:

  static const char* ascii_fingerprint; // = "A32764E5B9F7FF55C0C2C35F26922597";
  static const uint8_t binary_fingerprint[16]; // = {0xA3,0x27,0x64,0xE5,0xB9,0xF7,0xFF,0x55,0xC0,0xC2,0xC3,0x5F,0x26,0x92,0x25,0x97};

  EventHomelandInvaderInfoUpdate() : actor_id_(0), level_(0), can_visit_(0), can_strike_back_(0) {
  }

  virtual ~EventHomelandInvaderInfoUpdate() throw() {}

  int64_t actor_id_;
  int32_t level_;
  bool can_visit_;
  bool can_strike_back_;

  _EventHomelandInvaderInfoUpdate__isset __isset;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_level_(const int32_t val) {
    level_ = val;
    __isset.level_ = true;
  }

  void __set_can_visit_(const bool val) {
    can_visit_ = val;
    __isset.can_visit_ = true;
  }

  void __set_can_strike_back_(const bool val) {
    can_strike_back_ = val;
    __isset.can_strike_back_ = true;
  }

  bool operator == (const EventHomelandInvaderInfoUpdate & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (__isset.level_ != rhs.__isset.level_)
      return false;
    else if (__isset.level_ && !(level_ == rhs.level_))
      return false;
    if (__isset.can_visit_ != rhs.__isset.can_visit_)
      return false;
    else if (__isset.can_visit_ && !(can_visit_ == rhs.can_visit_))
      return false;
    if (__isset.can_strike_back_ != rhs.__isset.can_strike_back_)
      return false;
    else if (__isset.can_strike_back_ && !(can_strike_back_ == rhs.can_strike_back_))
      return false;
    return true;
  }
  bool operator != (const EventHomelandInvaderInfoUpdate &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventHomelandInvaderInfoUpdate & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(EventHomelandInvaderInfoUpdate &a, EventHomelandInvaderInfoUpdate &b);

}}} // namespace

#endif
