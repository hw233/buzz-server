/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef gateway_scene_protocol_TYPES_H
#define gateway_scene_protocol_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "actor_types.h"
#include "entity_types.h"
#include "task_types.h"
#include "gateway_protocol_types.h"


namespace gateway { namespace protocol {

struct DayNightStatus {
  enum type {
    STATUS_MORNING = 0,
    STATUS_DAYTIME = 1,
    STATUS_EVENING = 2,
    STATUS_NIGHT = 3
  };
};

extern const std::map<int, const char*> _DayNightStatus_VALUES_TO_NAMES;

struct SceneJumpType {
  enum type {
    WORLD_JUMP = 0,
    TASK_ACCEPT_JUMP = 1,
    TASK_FINISH_JUMP = 2,
    TASK_CONDITION_JIMP = 3
  };
};

extern const std::map<int, const char*> _SceneJumpType_VALUES_TO_NAMES;


class MessageSceneRequestJump {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageSceneRequestJump() : npc_id_() {
  }

  virtual ~MessageSceneRequestJump() throw() {}

  std::string npc_id_;

  void __set_npc_id_(const std::string& val) {
    npc_id_ = val;
  }

  bool operator == (const MessageSceneRequestJump & rhs) const
  {
    if (!(npc_id_ == rhs.npc_id_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneRequestJump &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneRequestJump & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneRequestJump &a, MessageSceneRequestJump &b);


class MessageSceneActorJump {
 public:

  static const char* ascii_fingerprint; // = "6435B39C87AB0E30F30BEDEFD7328C0D";
  static const uint8_t binary_fingerprint[16]; // = {0x64,0x35,0xB3,0x9C,0x87,0xAB,0x0E,0x30,0xF3,0x0B,0xED,0xEF,0xD7,0x32,0x8C,0x0D};

  MessageSceneActorJump() : map_(0), x_(0), y_(0) {
  }

  virtual ~MessageSceneActorJump() throw() {}

  int32_t map_;
  int32_t x_;
  int32_t y_;

  void __set_map_(const int32_t val) {
    map_ = val;
  }

  void __set_x_(const int32_t val) {
    x_ = val;
  }

  void __set_y_(const int32_t val) {
    y_ = val;
  }

  bool operator == (const MessageSceneActorJump & rhs) const
  {
    if (!(map_ == rhs.map_))
      return false;
    if (!(x_ == rhs.x_))
      return false;
    if (!(y_ == rhs.y_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneActorJump &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneActorJump & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneActorJump &a, MessageSceneActorJump &b);

typedef struct _MessageSceneActorChooseReviveModeRequest__isset {
  _MessageSceneActorChooseReviveModeRequest__isset() : buy_(false) {}
  bool buy_;
} _MessageSceneActorChooseReviveModeRequest__isset;

class MessageSceneActorChooseReviveModeRequest {
 public:

  static const char* ascii_fingerprint; // = "8C455969B34A367674B08F5889CDE92A";
  static const uint8_t binary_fingerprint[16]; // = {0x8C,0x45,0x59,0x69,0xB3,0x4A,0x36,0x76,0x74,0xB0,0x8F,0x58,0x89,0xCD,0xE9,0x2A};

  MessageSceneActorChooseReviveModeRequest() : revive_type_(( ::entity::ReviveType::type)0), buy_(0) {
  }

  virtual ~MessageSceneActorChooseReviveModeRequest() throw() {}

   ::entity::ReviveType::type revive_type_;
  bool buy_;

  _MessageSceneActorChooseReviveModeRequest__isset __isset;

  void __set_revive_type_(const  ::entity::ReviveType::type val) {
    revive_type_ = val;
  }

  void __set_buy_(const bool val) {
    buy_ = val;
    __isset.buy_ = true;
  }

  bool operator == (const MessageSceneActorChooseReviveModeRequest & rhs) const
  {
    if (!(revive_type_ == rhs.revive_type_))
      return false;
    if (__isset.buy_ != rhs.__isset.buy_)
      return false;
    else if (__isset.buy_ && !(buy_ == rhs.buy_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneActorChooseReviveModeRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneActorChooseReviveModeRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneActorChooseReviveModeRequest &a, MessageSceneActorChooseReviveModeRequest &b);


class MessageSceneActorChooseReviveModeResponse {
 public:

  static const char* ascii_fingerprint; // = "8BBB3D0C3B370CB38F2D1340BB79F0AA";
  static const uint8_t binary_fingerprint[16]; // = {0x8B,0xBB,0x3D,0x0C,0x3B,0x37,0x0C,0xB3,0x8F,0x2D,0x13,0x40,0xBB,0x79,0xF0,0xAA};

  MessageSceneActorChooseReviveModeResponse() : revive_type_(( ::entity::ReviveType::type)0) {
  }

  virtual ~MessageSceneActorChooseReviveModeResponse() throw() {}

   ::entity::ReviveType::type revive_type_;

  void __set_revive_type_(const  ::entity::ReviveType::type val) {
    revive_type_ = val;
  }

  bool operator == (const MessageSceneActorChooseReviveModeResponse & rhs) const
  {
    if (!(revive_type_ == rhs.revive_type_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneActorChooseReviveModeResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneActorChooseReviveModeResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneActorChooseReviveModeResponse &a, MessageSceneActorChooseReviveModeResponse &b);


class MessageSceneDayNightChange {
 public:

  static const char* ascii_fingerprint; // = "8BBB3D0C3B370CB38F2D1340BB79F0AA";
  static const uint8_t binary_fingerprint[16]; // = {0x8B,0xBB,0x3D,0x0C,0x3B,0x37,0x0C,0xB3,0x8F,0x2D,0x13,0x40,0xBB,0x79,0xF0,0xAA};

  MessageSceneDayNightChange() : status_((DayNightStatus::type)0) {
  }

  virtual ~MessageSceneDayNightChange() throw() {}

  DayNightStatus::type status_;

  void __set_status_(const DayNightStatus::type val) {
    status_ = val;
  }

  bool operator == (const MessageSceneDayNightChange & rhs) const
  {
    if (!(status_ == rhs.status_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneDayNightChange &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneDayNightChange & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneDayNightChange &a, MessageSceneDayNightChange &b);

typedef struct _MessageSceneRoleKilled__isset {
  _MessageSceneRoleKilled__isset() : attacker_name_(false), template_id_(false) {}
  bool attacker_name_;
  bool template_id_;
} _MessageSceneRoleKilled__isset;

class MessageSceneRoleKilled {
 public:

  static const char* ascii_fingerprint; // = "A9D81652B1BC32D78787F329F4D92DD7";
  static const uint8_t binary_fingerprint[16]; // = {0xA9,0xD8,0x16,0x52,0xB1,0xBC,0x32,0xD7,0x87,0x87,0xF3,0x29,0xF4,0xD9,0x2D,0xD7};

  MessageSceneRoleKilled() : attacker_type_(( ::entity::EntityType::type)0), attacker_id_(), attacker_name_(), template_id_(0) {
  }

  virtual ~MessageSceneRoleKilled() throw() {}

   ::entity::EntityType::type attacker_type_;
  std::string attacker_id_;
  std::string attacker_name_;
  int32_t template_id_;

  _MessageSceneRoleKilled__isset __isset;

  void __set_attacker_type_(const  ::entity::EntityType::type val) {
    attacker_type_ = val;
  }

  void __set_attacker_id_(const std::string& val) {
    attacker_id_ = val;
  }

  void __set_attacker_name_(const std::string& val) {
    attacker_name_ = val;
    __isset.attacker_name_ = true;
  }

  void __set_template_id_(const int32_t val) {
    template_id_ = val;
    __isset.template_id_ = true;
  }

  bool operator == (const MessageSceneRoleKilled & rhs) const
  {
    if (!(attacker_type_ == rhs.attacker_type_))
      return false;
    if (!(attacker_id_ == rhs.attacker_id_))
      return false;
    if (__isset.attacker_name_ != rhs.__isset.attacker_name_)
      return false;
    else if (__isset.attacker_name_ && !(attacker_name_ == rhs.attacker_name_))
      return false;
    if (__isset.template_id_ != rhs.__isset.template_id_)
      return false;
    else if (__isset.template_id_ && !(template_id_ == rhs.template_id_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneRoleKilled &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneRoleKilled & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneRoleKilled &a, MessageSceneRoleKilled &b);


class MessageSceneGather {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageSceneGather() : npc_() {
  }

  virtual ~MessageSceneGather() throw() {}

  std::string npc_;

  void __set_npc_(const std::string& val) {
    npc_ = val;
  }

  bool operator == (const MessageSceneGather & rhs) const
  {
    if (!(npc_ == rhs.npc_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneGather &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneGather & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneGather &a, MessageSceneGather &b);


class MessageSceneGatherResponse {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageSceneGatherResponse() : npc_template_() {
  }

  virtual ~MessageSceneGatherResponse() throw() {}

  std::string npc_template_;

  void __set_npc_template_(const std::string& val) {
    npc_template_ = val;
  }

  bool operator == (const MessageSceneGatherResponse & rhs) const
  {
    if (!(npc_template_ == rhs.npc_template_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneGatherResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneGatherResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneGatherResponse &a, MessageSceneGatherResponse &b);


class MessageScenePickUpRequest {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageScenePickUpRequest() : item_() {
  }

  virtual ~MessageScenePickUpRequest() throw() {}

  std::string item_;

  void __set_item_(const std::string& val) {
    item_ = val;
  }

  bool operator == (const MessageScenePickUpRequest & rhs) const
  {
    if (!(item_ == rhs.item_))
      return false;
    return true;
  }
  bool operator != (const MessageScenePickUpRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageScenePickUpRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageScenePickUpRequest &a, MessageScenePickUpRequest &b);


class MessageScenePickUpResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  MessageScenePickUpResponse() : result_(0) {
  }

  virtual ~MessageScenePickUpResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const MessageScenePickUpResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessageScenePickUpResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageScenePickUpResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageScenePickUpResponse &a, MessageScenePickUpResponse &b);

typedef struct _MessageSceneJumpRequest__isset {
  _MessageSceneJumpRequest__isset() : id_(false), task_type_(false), condition_pos_(false) {}
  bool id_;
  bool task_type_;
  bool condition_pos_;
} _MessageSceneJumpRequest__isset;

class MessageSceneJumpRequest {
 public:

  static const char* ascii_fingerprint; // = "5822FF4926681C091B916BE22F2B516B";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x22,0xFF,0x49,0x26,0x68,0x1C,0x09,0x1B,0x91,0x6B,0xE2,0x2F,0x2B,0x51,0x6B};

  MessageSceneJumpRequest() : type_((SceneJumpType::type)0), id_(0), task_type_(( ::entity::TaskType::type)0), condition_pos_(0) {
  }

  virtual ~MessageSceneJumpRequest() throw() {}

  SceneJumpType::type type_;
  int32_t id_;
   ::entity::TaskType::type task_type_;
  int32_t condition_pos_;

  _MessageSceneJumpRequest__isset __isset;

  void __set_type_(const SceneJumpType::type val) {
    type_ = val;
  }

  void __set_id_(const int32_t val) {
    id_ = val;
    __isset.id_ = true;
  }

  void __set_task_type_(const  ::entity::TaskType::type val) {
    task_type_ = val;
    __isset.task_type_ = true;
  }

  void __set_condition_pos_(const int32_t val) {
    condition_pos_ = val;
    __isset.condition_pos_ = true;
  }

  bool operator == (const MessageSceneJumpRequest & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (__isset.id_ != rhs.__isset.id_)
      return false;
    else if (__isset.id_ && !(id_ == rhs.id_))
      return false;
    if (__isset.task_type_ != rhs.__isset.task_type_)
      return false;
    else if (__isset.task_type_ && !(task_type_ == rhs.task_type_))
      return false;
    if (__isset.condition_pos_ != rhs.__isset.condition_pos_)
      return false;
    else if (__isset.condition_pos_ && !(condition_pos_ == rhs.condition_pos_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneJumpRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneJumpRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneJumpRequest &a, MessageSceneJumpRequest &b);


class MessageSceneJumpRsponse {
 public:

  static const char* ascii_fingerprint; // = "88440F45A63E63607868B983E4E50558";
  static const uint8_t binary_fingerprint[16]; // = {0x88,0x44,0x0F,0x45,0xA6,0x3E,0x63,0x60,0x78,0x68,0xB9,0x83,0xE4,0xE5,0x05,0x58};

  MessageSceneJumpRsponse() : result_(0), num_(0) {
  }

  virtual ~MessageSceneJumpRsponse() throw() {}

  bool result_;
  int32_t num_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  void __set_num_(const int32_t val) {
    num_ = val;
  }

  bool operator == (const MessageSceneJumpRsponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    if (!(num_ == rhs.num_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneJumpRsponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneJumpRsponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneJumpRsponse &a, MessageSceneJumpRsponse &b);


class SceneBossField {
 public:

  static const char* ascii_fingerprint; // = "7E2C98E75504E1229F703BD18FE1300F";
  static const uint8_t binary_fingerprint[16]; // = {0x7E,0x2C,0x98,0xE7,0x55,0x04,0xE1,0x22,0x9F,0x70,0x3B,0xD1,0x8F,0xE1,0x30,0x0F};

  SceneBossField() : template_id_(0), killer_(), boss_live_(0) {
  }

  virtual ~SceneBossField() throw() {}

  int32_t template_id_;
  std::string killer_;
  bool boss_live_;

  void __set_template_id_(const int32_t val) {
    template_id_ = val;
  }

  void __set_killer_(const std::string& val) {
    killer_ = val;
  }

  void __set_boss_live_(const bool val) {
    boss_live_ = val;
  }

  bool operator == (const SceneBossField & rhs) const
  {
    if (!(template_id_ == rhs.template_id_))
      return false;
    if (!(killer_ == rhs.killer_))
      return false;
    if (!(boss_live_ == rhs.boss_live_))
      return false;
    return true;
  }
  bool operator != (const SceneBossField &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SceneBossField & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(SceneBossField &a, SceneBossField &b);


class MessageSceneWorldBossInitialize {
 public:

  static const char* ascii_fingerprint; // = "906087919CFED014DF628D256BDEFA0B";
  static const uint8_t binary_fingerprint[16]; // = {0x90,0x60,0x87,0x91,0x9C,0xFE,0xD0,0x14,0xDF,0x62,0x8D,0x25,0x6B,0xDE,0xFA,0x0B};

  MessageSceneWorldBossInitialize() {
  }

  virtual ~MessageSceneWorldBossInitialize() throw() {}

  std::vector<SceneBossField>  fields_;

  void __set_fields_(const std::vector<SceneBossField> & val) {
    fields_ = val;
  }

  bool operator == (const MessageSceneWorldBossInitialize & rhs) const
  {
    if (!(fields_ == rhs.fields_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneWorldBossInitialize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneWorldBossInitialize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneWorldBossInitialize &a, MessageSceneWorldBossInitialize &b);


class MessageSceneBossKilled {
 public:

  static const char* ascii_fingerprint; // = "3F5FC93B338687BC7235B1AB103F47B3";
  static const uint8_t binary_fingerprint[16]; // = {0x3F,0x5F,0xC9,0x3B,0x33,0x86,0x87,0xBC,0x72,0x35,0xB1,0xAB,0x10,0x3F,0x47,0xB3};

  MessageSceneBossKilled() : template_id_(0), killer_() {
  }

  virtual ~MessageSceneBossKilled() throw() {}

  int32_t template_id_;
  std::string killer_;

  void __set_template_id_(const int32_t val) {
    template_id_ = val;
  }

  void __set_killer_(const std::string& val) {
    killer_ = val;
  }

  bool operator == (const MessageSceneBossKilled & rhs) const
  {
    if (!(template_id_ == rhs.template_id_))
      return false;
    if (!(killer_ == rhs.killer_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneBossKilled &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneBossKilled & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneBossKilled &a, MessageSceneBossKilled &b);


class MessageSceneSummonWorldBoss {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  MessageSceneSummonWorldBoss() : template_id_(0) {
  }

  virtual ~MessageSceneSummonWorldBoss() throw() {}

  int32_t template_id_;

  void __set_template_id_(const int32_t val) {
    template_id_ = val;
  }

  bool operator == (const MessageSceneSummonWorldBoss & rhs) const
  {
    if (!(template_id_ == rhs.template_id_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneSummonWorldBoss &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneSummonWorldBoss & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneSummonWorldBoss &a, MessageSceneSummonWorldBoss &b);


class MessageSceneZazenRequest {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  MessageSceneZazenRequest() {
  }

  virtual ~MessageSceneZazenRequest() throw() {}


  bool operator == (const MessageSceneZazenRequest & /* rhs */) const
  {
    return true;
  }
  bool operator != (const MessageSceneZazenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneZazenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneZazenRequest &a, MessageSceneZazenRequest &b);


class MessageSceneZazenResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  MessageSceneZazenResponse() : result_(0) {
  }

  virtual ~MessageSceneZazenResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const MessageSceneZazenResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneZazenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneZazenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneZazenResponse &a, MessageSceneZazenResponse &b);


class MessageSceneCancelZazenRequest {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  MessageSceneCancelZazenRequest() {
  }

  virtual ~MessageSceneCancelZazenRequest() throw() {}


  bool operator == (const MessageSceneCancelZazenRequest & /* rhs */) const
  {
    return true;
  }
  bool operator != (const MessageSceneCancelZazenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneCancelZazenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneCancelZazenRequest &a, MessageSceneCancelZazenRequest &b);


class MessageSceneCancelZazenResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  MessageSceneCancelZazenResponse() : result_(0) {
  }

  virtual ~MessageSceneCancelZazenResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const MessageSceneCancelZazenResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneCancelZazenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneCancelZazenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneCancelZazenResponse &a, MessageSceneCancelZazenResponse &b);


class MessageSceneZazenIncomeNotice {
 public:

  static const char* ascii_fingerprint; // = "989D1F1AE8D148D5E2119FFEC4BBBEE3";
  static const uint8_t binary_fingerprint[16]; // = {0x98,0x9D,0x1F,0x1A,0xE8,0xD1,0x48,0xD5,0xE2,0x11,0x9F,0xFE,0xC4,0xBB,0xBE,0xE3};

  MessageSceneZazenIncomeNotice() : exp_(0), nimbus_(0) {
  }

  virtual ~MessageSceneZazenIncomeNotice() throw() {}

  int32_t exp_;
  int32_t nimbus_;

  void __set_exp_(const int32_t val) {
    exp_ = val;
  }

  void __set_nimbus_(const int32_t val) {
    nimbus_ = val;
  }

  bool operator == (const MessageSceneZazenIncomeNotice & rhs) const
  {
    if (!(exp_ == rhs.exp_))
      return false;
    if (!(nimbus_ == rhs.nimbus_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneZazenIncomeNotice &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneZazenIncomeNotice & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneZazenIncomeNotice &a, MessageSceneZazenIncomeNotice &b);


class MessageSceneConsecutiveKillNotice {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  MessageSceneConsecutiveKillNotice() : kill_num_(0) {
  }

  virtual ~MessageSceneConsecutiveKillNotice() throw() {}

  int32_t kill_num_;

  void __set_kill_num_(const int32_t val) {
    kill_num_ = val;
  }

  bool operator == (const MessageSceneConsecutiveKillNotice & rhs) const
  {
    if (!(kill_num_ == rhs.kill_num_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneConsecutiveKillNotice &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneConsecutiveKillNotice & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneConsecutiveKillNotice &a, MessageSceneConsecutiveKillNotice &b);


class MessageSceneBranchSynchronize {
 public:

  static const char* ascii_fingerprint; // = "565787C31CF2D774B532CB755189BF39";
  static const uint8_t binary_fingerprint[16]; // = {0x56,0x57,0x87,0xC3,0x1C,0xF2,0xD7,0x74,0xB5,0x32,0xCB,0x75,0x51,0x89,0xBF,0x39};

  MessageSceneBranchSynchronize() : current_branch_(0) {
  }

  virtual ~MessageSceneBranchSynchronize() throw() {}

  int16_t current_branch_;

  void __set_current_branch_(const int16_t val) {
    current_branch_ = val;
  }

  bool operator == (const MessageSceneBranchSynchronize & rhs) const
  {
    if (!(current_branch_ == rhs.current_branch_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneBranchSynchronize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneBranchSynchronize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneBranchSynchronize &a, MessageSceneBranchSynchronize &b);


class MessageSceneBranchStatusRequest {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  MessageSceneBranchStatusRequest() {
  }

  virtual ~MessageSceneBranchStatusRequest() throw() {}


  bool operator == (const MessageSceneBranchStatusRequest & /* rhs */) const
  {
    return true;
  }
  bool operator != (const MessageSceneBranchStatusRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneBranchStatusRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneBranchStatusRequest &a, MessageSceneBranchStatusRequest &b);


class MessageSceneBranchStatusResponse {
 public:

  static const char* ascii_fingerprint; // = "A803C54EAD95E24D90C5E66FB98EA72B";
  static const uint8_t binary_fingerprint[16]; // = {0xA8,0x03,0xC5,0x4E,0xAD,0x95,0xE2,0x4D,0x90,0xC5,0xE6,0x6F,0xB9,0x8E,0xA7,0x2B};

  MessageSceneBranchStatusResponse() {
  }

  virtual ~MessageSceneBranchStatusResponse() throw() {}

  std::vector<int32_t>  actor_number_;

  void __set_actor_number_(const std::vector<int32_t> & val) {
    actor_number_ = val;
  }

  bool operator == (const MessageSceneBranchStatusResponse & rhs) const
  {
    if (!(actor_number_ == rhs.actor_number_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneBranchStatusResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneBranchStatusResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneBranchStatusResponse &a, MessageSceneBranchStatusResponse &b);


class MessageSceneBranchSwitchRequest {
 public:

  static const char* ascii_fingerprint; // = "565787C31CF2D774B532CB755189BF39";
  static const uint8_t binary_fingerprint[16]; // = {0x56,0x57,0x87,0xC3,0x1C,0xF2,0xD7,0x74,0xB5,0x32,0xCB,0x75,0x51,0x89,0xBF,0x39};

  MessageSceneBranchSwitchRequest() : branch_id_(0) {
  }

  virtual ~MessageSceneBranchSwitchRequest() throw() {}

  int16_t branch_id_;

  void __set_branch_id_(const int16_t val) {
    branch_id_ = val;
  }

  bool operator == (const MessageSceneBranchSwitchRequest & rhs) const
  {
    if (!(branch_id_ == rhs.branch_id_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneBranchSwitchRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneBranchSwitchRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneBranchSwitchRequest &a, MessageSceneBranchSwitchRequest &b);


class MessageSceneBranchSwitchResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  MessageSceneBranchSwitchResponse() : success_(0) {
  }

  virtual ~MessageSceneBranchSwitchResponse() throw() {}

  bool success_;

  void __set_success_(const bool val) {
    success_ = val;
  }

  bool operator == (const MessageSceneBranchSwitchResponse & rhs) const
  {
    if (!(success_ == rhs.success_))
      return false;
    return true;
  }
  bool operator != (const MessageSceneBranchSwitchResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageSceneBranchSwitchResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageSceneBranchSwitchResponse &a, MessageSceneBranchSwitchResponse &b);

}} // namespace

#endif
