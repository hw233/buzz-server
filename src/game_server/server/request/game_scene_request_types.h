/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef game_scene_request_TYPES_H
#define game_scene_request_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "direction_types.h"
#include "entity_types.h"
#include "game_request_types.h"


namespace game { namespace server { namespace request {

struct AreaType {
  enum type {
    AREA_CIRCLE = 0,
    AREA_SECTOR_QUARTER = 1,
    AREA_RAY = 2,
    AREA_MAX = 3
  };
};

extern const std::map<int, const char*> _AreaType_VALUES_TO_NAMES;

struct SectorRadianType {
  enum type {
    MIN = 0,
    QUARTER = 0,
    HALF = 1,
    MAX = 2
  };
};

extern const std::map<int, const char*> _SectorRadianType_VALUES_TO_NAMES;

struct SceneEntityType {
  enum type {
    ACTOR = 1,
    NPC = 2
  };
};

extern const std::map<int, const char*> _SceneEntityType_VALUES_TO_NAMES;

struct SelectMaskType {
  enum type {
    SELF = 1,
    NOT_SELF = 2,
    NPC = 16,
    ACTOR = 32,
    ALIVE = 256,
    DEAD = 512,
    CAMP_ENEMY = 4096,
    CAMP_FRIEND = 8192,
    CAMP_NEUTRAL = 16384,
    CAMP_NONE = 32768,
    TEAM = 65536,
    OTHER_TEAM = 131072,
    PK_CHECK = 1048576
  };
};

extern const std::map<int, const char*> _SelectMaskType_VALUES_TO_NAMES;

struct MoveResultType {
  enum type {
    SUCCESS = 0,
    FAILURE_BLOCK = 1,
    FAILURE_ERROR = 2
  };
};

extern const std::map<int, const char*> _MoveResultType_VALUES_TO_NAMES;

struct DayNightStatusType {
  enum type {
    STATUS_MORNING = 0,
    STATUS_DAYTIME = 1,
    STATUS_EVENING = 2,
    STATUS_NIGHT = 3
  };
};

extern const std::map<int, const char*> _DayNightStatusType_VALUES_TO_NAMES;

struct PKCheckResultType {
  enum type {
    SUCCESS = 0,
    ERROR_SAFE_AREA = 1,
    ERROR_PK_MODE = 2,
    ERROR_ROOKIE_PROTECT = 3,
    ERROR_DIE_PROTECT_TIME = 4,
    ERROR_ARGS = 5
  };
};

extern const std::map<int, const char*> _PKCheckResultType_VALUES_TO_NAMES;


class RequestSceneGetAroundActors {
 public:

  static const char* ascii_fingerprint; // = "504072AAD822AA6071017C57066A9473";
  static const uint8_t binary_fingerprint[16]; // = {0x50,0x40,0x72,0xAA,0xD8,0x22,0xAA,0x60,0x71,0x01,0x7C,0x57,0x06,0x6A,0x94,0x73};

  RequestSceneGetAroundActors() : type_(( ::entity::EntityType::type)0), id_(0) {
  }

  virtual ~RequestSceneGetAroundActors() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;
  std::vector<int64_t>  actors_;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_actors_(const std::vector<int64_t> & val) {
    actors_ = val;
  }

  bool operator == (const RequestSceneGetAroundActors & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(actors_ == rhs.actors_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneGetAroundActors &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneGetAroundActors & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneGetAroundActors &a, RequestSceneGetAroundActors &b);

typedef struct _RequestSceneSummonNpc__isset {
  _RequestSceneSummonNpc__isset() : width_(false), heigth_(false) {}
  bool width_;
  bool heigth_;
} _RequestSceneSummonNpc__isset;

class RequestSceneSummonNpc {
 public:

  static const char* ascii_fingerprint; // = "89882B9BE51BBCFB502B89E94304A2A2";
  static const uint8_t binary_fingerprint[16]; // = {0x89,0x88,0x2B,0x9B,0xE5,0x1B,0xBC,0xFB,0x50,0x2B,0x89,0xE9,0x43,0x04,0xA2,0xA2};

  RequestSceneSummonNpc() : scene_(0), template_id_(0), x_(0), y_(0), width_(0), heigth_(0), dir_(( ::entity::DirectionType::type)0), delay_secs_(0), npc_id_(0) {
  }

  virtual ~RequestSceneSummonNpc() throw() {}

  int64_t scene_;
  int32_t template_id_;
  int32_t x_;
  int32_t y_;
  int32_t width_;
  int32_t heigth_;
   ::entity::DirectionType::type dir_;
  int32_t delay_secs_;
  int64_t npc_id_;

  _RequestSceneSummonNpc__isset __isset;

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  void __set_template_id_(const int32_t val) {
    template_id_ = val;
  }

  void __set_x_(const int32_t val) {
    x_ = val;
  }

  void __set_y_(const int32_t val) {
    y_ = val;
  }

  void __set_width_(const int32_t val) {
    width_ = val;
    __isset.width_ = true;
  }

  void __set_heigth_(const int32_t val) {
    heigth_ = val;
    __isset.heigth_ = true;
  }

  void __set_dir_(const  ::entity::DirectionType::type val) {
    dir_ = val;
  }

  void __set_delay_secs_(const int32_t val) {
    delay_secs_ = val;
  }

  void __set_npc_id_(const int64_t val) {
    npc_id_ = val;
  }

  bool operator == (const RequestSceneSummonNpc & rhs) const
  {
    if (!(scene_ == rhs.scene_))
      return false;
    if (!(template_id_ == rhs.template_id_))
      return false;
    if (!(x_ == rhs.x_))
      return false;
    if (!(y_ == rhs.y_))
      return false;
    if (__isset.width_ != rhs.__isset.width_)
      return false;
    else if (__isset.width_ && !(width_ == rhs.width_))
      return false;
    if (__isset.heigth_ != rhs.__isset.heigth_)
      return false;
    else if (__isset.heigth_ && !(heigth_ == rhs.heigth_))
      return false;
    if (!(dir_ == rhs.dir_))
      return false;
    if (!(delay_secs_ == rhs.delay_secs_))
      return false;
    if (!(npc_id_ == rhs.npc_id_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneSummonNpc &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneSummonNpc & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneSummonNpc &a, RequestSceneSummonNpc &b);

typedef struct _RequestSceneClearNpc__isset {
  _RequestSceneClearNpc__isset() : delay_secs_(false) {}
  bool delay_secs_;
} _RequestSceneClearNpc__isset;

class RequestSceneClearNpc {
 public:

  static const char* ascii_fingerprint; // = "6E578DA8AB10EED824A75534350EBAEF";
  static const uint8_t binary_fingerprint[16]; // = {0x6E,0x57,0x8D,0xA8,0xAB,0x10,0xEE,0xD8,0x24,0xA7,0x55,0x34,0x35,0x0E,0xBA,0xEF};

  RequestSceneClearNpc() : id_(0), delay_secs_(0) {
  }

  virtual ~RequestSceneClearNpc() throw() {}

  int64_t id_;
  int32_t delay_secs_;

  _RequestSceneClearNpc__isset __isset;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_delay_secs_(const int32_t val) {
    delay_secs_ = val;
    __isset.delay_secs_ = true;
  }

  bool operator == (const RequestSceneClearNpc & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (__isset.delay_secs_ != rhs.__isset.delay_secs_)
      return false;
    else if (__isset.delay_secs_ && !(delay_secs_ == rhs.delay_secs_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneClearNpc &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneClearNpc & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneClearNpc &a, RequestSceneClearNpc &b);


class CircleAreaCondition {
 public:

  static const char* ascii_fingerprint; // = "A7D440367E85134EBDBAA7BCA01056D0";
  static const uint8_t binary_fingerprint[16]; // = {0xA7,0xD4,0x40,0x36,0x7E,0x85,0x13,0x4E,0xBD,0xBA,0xA7,0xBC,0xA0,0x10,0x56,0xD0};

  CircleAreaCondition() : radius_(0) {
  }

  virtual ~CircleAreaCondition() throw() {}

  int8_t radius_;

  void __set_radius_(const int8_t val) {
    radius_ = val;
  }

  bool operator == (const CircleAreaCondition & rhs) const
  {
    if (!(radius_ == rhs.radius_))
      return false;
    return true;
  }
  bool operator != (const CircleAreaCondition &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CircleAreaCondition & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(CircleAreaCondition &a, CircleAreaCondition &b);


class SectorAreaCondition {
 public:

  static const char* ascii_fingerprint; // = "2091843F2ECF33E852FE40B57EEC9928";
  static const uint8_t binary_fingerprint[16]; // = {0x20,0x91,0x84,0x3F,0x2E,0xCF,0x33,0xE8,0x52,0xFE,0x40,0xB5,0x7E,0xEC,0x99,0x28};

  SectorAreaCondition() : radius_(0), dir_(( ::entity::DirectionType::type)0), radian_((SectorRadianType::type)0) {
  }

  virtual ~SectorAreaCondition() throw() {}

  int8_t radius_;
   ::entity::DirectionType::type dir_;
  SectorRadianType::type radian_;

  void __set_radius_(const int8_t val) {
    radius_ = val;
  }

  void __set_dir_(const  ::entity::DirectionType::type val) {
    dir_ = val;
  }

  void __set_radian_(const SectorRadianType::type val) {
    radian_ = val;
  }

  bool operator == (const SectorAreaCondition & rhs) const
  {
    if (!(radius_ == rhs.radius_))
      return false;
    if (!(dir_ == rhs.dir_))
      return false;
    if (!(radian_ == rhs.radian_))
      return false;
    return true;
  }
  bool operator != (const SectorAreaCondition &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SectorAreaCondition & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(SectorAreaCondition &a, SectorAreaCondition &b);


class RayAreaCondition {
 public:

  static const char* ascii_fingerprint; // = "0ADFD9F821347143D588B15689D01279";
  static const uint8_t binary_fingerprint[16]; // = {0x0A,0xDF,0xD9,0xF8,0x21,0x34,0x71,0x43,0xD5,0x88,0xB1,0x56,0x89,0xD0,0x12,0x79};

  RayAreaCondition() : width_(0), length_(0), direction_(0) {
  }

  virtual ~RayAreaCondition() throw() {}

  int8_t width_;
  int8_t length_;
  int16_t direction_;

  void __set_width_(const int8_t val) {
    width_ = val;
  }

  void __set_length_(const int8_t val) {
    length_ = val;
  }

  void __set_direction_(const int16_t val) {
    direction_ = val;
  }

  bool operator == (const RayAreaCondition & rhs) const
  {
    if (!(width_ == rhs.width_))
      return false;
    if (!(length_ == rhs.length_))
      return false;
    if (!(direction_ == rhs.direction_))
      return false;
    return true;
  }
  bool operator != (const RayAreaCondition &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RayAreaCondition & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RayAreaCondition &a, RayAreaCondition &b);


class AreaRolePair {
 public:

  static const char* ascii_fingerprint; // = "6E7DD25E88B43484CFC93FCB15DCA1AF";
  static const uint8_t binary_fingerprint[16]; // = {0x6E,0x7D,0xD2,0x5E,0x88,0xB4,0x34,0x84,0xCF,0xC9,0x3F,0xCB,0x15,0xDC,0xA1,0xAF};

  AreaRolePair() : type_(( ::entity::EntityType::type)0), id_(0) {
  }

  virtual ~AreaRolePair() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  bool operator == (const AreaRolePair & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    return true;
  }
  bool operator != (const AreaRolePair &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AreaRolePair & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(AreaRolePair &a, AreaRolePair &b);

typedef struct _RequestSceneSelectTargets__isset {
  _RequestSceneSelectTargets__isset() : cond_circle_(false), cond_sector_(false) {}
  bool cond_circle_;
  bool cond_sector_;
} _RequestSceneSelectTargets__isset;

class RequestSceneSelectTargets {
 public:

  static const char* ascii_fingerprint; // = "D16EBA23BC839D68CAEA37C5A69CB5C2";
  static const uint8_t binary_fingerprint[16]; // = {0xD1,0x6E,0xBA,0x23,0xBC,0x83,0x9D,0x68,0xCA,0xEA,0x37,0xC5,0xA6,0x9C,0xB5,0xC2};

  RequestSceneSelectTargets() : type_(( ::entity::EntityType::type)0), id_(0), area_type_((AreaType::type)0), x_(0), y_(0), select_mask_(0), max_count_(0) {
  }

  virtual ~RequestSceneSelectTargets() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;
  AreaType::type area_type_;
  CircleAreaCondition cond_circle_;
  SectorAreaCondition cond_sector_;
  int32_t x_;
  int32_t y_;
  int32_t select_mask_;
  int32_t max_count_;
  std::vector<AreaRolePair>  targets_;

  _RequestSceneSelectTargets__isset __isset;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_area_type_(const AreaType::type val) {
    area_type_ = val;
  }

  void __set_cond_circle_(const CircleAreaCondition& val) {
    cond_circle_ = val;
    __isset.cond_circle_ = true;
  }

  void __set_cond_sector_(const SectorAreaCondition& val) {
    cond_sector_ = val;
    __isset.cond_sector_ = true;
  }

  void __set_x_(const int32_t val) {
    x_ = val;
  }

  void __set_y_(const int32_t val) {
    y_ = val;
  }

  void __set_select_mask_(const int32_t val) {
    select_mask_ = val;
  }

  void __set_max_count_(const int32_t val) {
    max_count_ = val;
  }

  void __set_targets_(const std::vector<AreaRolePair> & val) {
    targets_ = val;
  }

  bool operator == (const RequestSceneSelectTargets & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(area_type_ == rhs.area_type_))
      return false;
    if (__isset.cond_circle_ != rhs.__isset.cond_circle_)
      return false;
    else if (__isset.cond_circle_ && !(cond_circle_ == rhs.cond_circle_))
      return false;
    if (__isset.cond_sector_ != rhs.__isset.cond_sector_)
      return false;
    else if (__isset.cond_sector_ && !(cond_sector_ == rhs.cond_sector_))
      return false;
    if (!(x_ == rhs.x_))
      return false;
    if (!(y_ == rhs.y_))
      return false;
    if (!(select_mask_ == rhs.select_mask_))
      return false;
    if (!(max_count_ == rhs.max_count_))
      return false;
    if (!(targets_ == rhs.targets_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneSelectTargets &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneSelectTargets & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneSelectTargets &a, RequestSceneSelectTargets &b);


class RequestSceneRoleMove {
 public:

  static const char* ascii_fingerprint; // = "B4440F8A270382EF1F173F7EA5D25CE6";
  static const uint8_t binary_fingerprint[16]; // = {0xB4,0x44,0x0F,0x8A,0x27,0x03,0x82,0xEF,0x1F,0x17,0x3F,0x7E,0xA5,0xD2,0x5C,0xE6};

  RequestSceneRoleMove() : type_(( ::entity::EntityType::type)0), id_(0), dir_(( ::entity::DirectionType::type)0), result_((MoveResultType::type)0) {
  }

  virtual ~RequestSceneRoleMove() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;
   ::entity::DirectionType::type dir_;
  MoveResultType::type result_;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_dir_(const  ::entity::DirectionType::type val) {
    dir_ = val;
  }

  void __set_result_(const MoveResultType::type val) {
    result_ = val;
  }

  bool operator == (const RequestSceneRoleMove & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(dir_ == rhs.dir_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneRoleMove &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneRoleMove & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneRoleMove &a, RequestSceneRoleMove &b);

typedef struct _RequestSceneJump__isset {
  _RequestSceneJump__isset() : map_(false), scene_(false) {}
  bool map_;
  bool scene_;
} _RequestSceneJump__isset;

class RequestSceneJump {
 public:

  static const char* ascii_fingerprint; // = "739C8557792AEF4079E839384F3BB223";
  static const uint8_t binary_fingerprint[16]; // = {0x73,0x9C,0x85,0x57,0x79,0x2A,0xEF,0x40,0x79,0xE8,0x39,0x38,0x4F,0x3B,0xB2,0x23};

  RequestSceneJump() : type_(( ::entity::EntityType::type)0), id_(0), map_(0), scene_(0), x_(0), y_(0), result_(0) {
  }

  virtual ~RequestSceneJump() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;
  int32_t map_;
  int64_t scene_;
  int32_t x_;
  int32_t y_;
  bool result_;

  _RequestSceneJump__isset __isset;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_map_(const int32_t val) {
    map_ = val;
    __isset.map_ = true;
  }

  void __set_scene_(const int64_t val) {
    scene_ = val;
    __isset.scene_ = true;
  }

  void __set_x_(const int32_t val) {
    x_ = val;
  }

  void __set_y_(const int32_t val) {
    y_ = val;
  }

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const RequestSceneJump & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (__isset.map_ != rhs.__isset.map_)
      return false;
    else if (__isset.map_ && !(map_ == rhs.map_))
      return false;
    if (__isset.scene_ != rhs.__isset.scene_)
      return false;
    else if (__isset.scene_ && !(scene_ == rhs.scene_))
      return false;
    if (!(x_ == rhs.x_))
      return false;
    if (!(y_ == rhs.y_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneJump &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneJump & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneJump &a, RequestSceneJump &b);


class RequestSceneRelocation {
 public:

  static const char* ascii_fingerprint; // = "9528C069007D1F03D56E8EFB8CB3B337";
  static const uint8_t binary_fingerprint[16]; // = {0x95,0x28,0xC0,0x69,0x00,0x7D,0x1F,0x03,0xD5,0x6E,0x8E,0xFB,0x8C,0xB3,0xB3,0x37};

  RequestSceneRelocation() : type_(( ::entity::EntityType::type)0), id_(0), x_(0), y_(0), result_(0) {
  }

  virtual ~RequestSceneRelocation() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;
  int32_t x_;
  int32_t y_;
  bool result_;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_x_(const int32_t val) {
    x_ = val;
  }

  void __set_y_(const int32_t val) {
    y_ = val;
  }

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const RequestSceneRelocation & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(x_ == rhs.x_))
      return false;
    if (!(y_ == rhs.y_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneRelocation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneRelocation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneRelocation &a, RequestSceneRelocation &b);


class RequestSceneDayNightInfo {
 public:

  static const char* ascii_fingerprint; // = "DF2FE2E4EB425A90BF93B80E73230790";
  static const uint8_t binary_fingerprint[16]; // = {0xDF,0x2F,0xE2,0xE4,0xEB,0x42,0x5A,0x90,0xBF,0x93,0xB8,0x0E,0x73,0x23,0x07,0x90};

  RequestSceneDayNightInfo() : scene_(0), status_((DayNightStatusType::type)0), aoi_coe_(0) {
  }

  virtual ~RequestSceneDayNightInfo() throw() {}

  int64_t scene_;
  DayNightStatusType::type status_;
  int32_t aoi_coe_;

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  void __set_status_(const DayNightStatusType::type val) {
    status_ = val;
  }

  void __set_aoi_coe_(const int32_t val) {
    aoi_coe_ = val;
  }

  bool operator == (const RequestSceneDayNightInfo & rhs) const
  {
    if (!(scene_ == rhs.scene_))
      return false;
    if (!(status_ == rhs.status_))
      return false;
    if (!(aoi_coe_ == rhs.aoi_coe_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneDayNightInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneDayNightInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneDayNightInfo &a, RequestSceneDayNightInfo &b);


class RequestSceneRouter {
 public:

  static const char* ascii_fingerprint; // = "204E4A386F18B2655D6E7A2873E079B4";
  static const uint8_t binary_fingerprint[16]; // = {0x20,0x4E,0x4A,0x38,0x6F,0x18,0xB2,0x65,0x5D,0x6E,0x7A,0x28,0x73,0xE0,0x79,0xB4};

  RequestSceneRouter() : scene_(0), src_x_(0), src_y_(0), dest_x_(0), dest_y_(0), dest_radius_(0), max_path_(0), result_(0) {
  }

  virtual ~RequestSceneRouter() throw() {}

  int64_t scene_;
  int32_t src_x_;
  int32_t src_y_;
  int32_t dest_x_;
  int32_t dest_y_;
  int32_t dest_radius_;
  int16_t max_path_;
  std::vector< ::entity::DirectionType::type>  paths_;
  bool result_;

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  void __set_src_x_(const int32_t val) {
    src_x_ = val;
  }

  void __set_src_y_(const int32_t val) {
    src_y_ = val;
  }

  void __set_dest_x_(const int32_t val) {
    dest_x_ = val;
  }

  void __set_dest_y_(const int32_t val) {
    dest_y_ = val;
  }

  void __set_dest_radius_(const int32_t val) {
    dest_radius_ = val;
  }

  void __set_max_path_(const int16_t val) {
    max_path_ = val;
  }

  void __set_paths_(const std::vector< ::entity::DirectionType::type> & val) {
    paths_ = val;
  }

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const RequestSceneRouter & rhs) const
  {
    if (!(scene_ == rhs.scene_))
      return false;
    if (!(src_x_ == rhs.src_x_))
      return false;
    if (!(src_y_ == rhs.src_y_))
      return false;
    if (!(dest_x_ == rhs.dest_x_))
      return false;
    if (!(dest_y_ == rhs.dest_y_))
      return false;
    if (!(dest_radius_ == rhs.dest_radius_))
      return false;
    if (!(max_path_ == rhs.max_path_))
      return false;
    if (!(paths_ == rhs.paths_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneRouter &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneRouter & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneRouter &a, RequestSceneRouter &b);


class RequestScenePKInfo {
 public:

  static const char* ascii_fingerprint; // = "B67D2D2C67C955C5F4AAA1F43073F646";
  static const uint8_t binary_fingerprint[16]; // = {0xB6,0x7D,0x2D,0x2C,0x67,0xC9,0x55,0xC5,0xF4,0xAA,0xA1,0xF4,0x30,0x73,0xF6,0x46};

  RequestScenePKInfo() : scene_(0), rookie_protect_(0), ban_change_pk_mode_(0), die_protect_(0) {
  }

  virtual ~RequestScenePKInfo() throw() {}

  int64_t scene_;
  bool rookie_protect_;
  bool ban_change_pk_mode_;
  bool die_protect_;

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  void __set_rookie_protect_(const bool val) {
    rookie_protect_ = val;
  }

  void __set_ban_change_pk_mode_(const bool val) {
    ban_change_pk_mode_ = val;
  }

  void __set_die_protect_(const bool val) {
    die_protect_ = val;
  }

  bool operator == (const RequestScenePKInfo & rhs) const
  {
    if (!(scene_ == rhs.scene_))
      return false;
    if (!(rookie_protect_ == rhs.rookie_protect_))
      return false;
    if (!(ban_change_pk_mode_ == rhs.ban_change_pk_mode_))
      return false;
    if (!(die_protect_ == rhs.die_protect_))
      return false;
    return true;
  }
  bool operator != (const RequestScenePKInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestScenePKInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestScenePKInfo &a, RequestScenePKInfo &b);


class RequestSceneIsSafe {
 public:

  static const char* ascii_fingerprint; // = "74790CD6C921812BFE1FB306DD15F078";
  static const uint8_t binary_fingerprint[16]; // = {0x74,0x79,0x0C,0xD6,0xC9,0x21,0x81,0x2B,0xFE,0x1F,0xB3,0x06,0xDD,0x15,0xF0,0x78};

  RequestSceneIsSafe() : scene_(0), x_(0), y_(0), is_safe_(0) {
  }

  virtual ~RequestSceneIsSafe() throw() {}

  int64_t scene_;
  int32_t x_;
  int32_t y_;
  bool is_safe_;

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  void __set_x_(const int32_t val) {
    x_ = val;
  }

  void __set_y_(const int32_t val) {
    y_ = val;
  }

  void __set_is_safe_(const bool val) {
    is_safe_ = val;
  }

  bool operator == (const RequestSceneIsSafe & rhs) const
  {
    if (!(scene_ == rhs.scene_))
      return false;
    if (!(x_ == rhs.x_))
      return false;
    if (!(y_ == rhs.y_))
      return false;
    if (!(is_safe_ == rhs.is_safe_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneIsSafe &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneIsSafe & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneIsSafe &a, RequestSceneIsSafe &b);


class RequestScenePKCheck {
 public:

  static const char* ascii_fingerprint; // = "9F551022D4DF184E86CC5DB9186FAC79";
  static const uint8_t binary_fingerprint[16]; // = {0x9F,0x55,0x10,0x22,0xD4,0xDF,0x18,0x4E,0x86,0xCC,0x5D,0xB9,0x18,0x6F,0xAC,0x79};

  RequestScenePKCheck() : src_id_(0), dest_id_(0), result_((PKCheckResultType::type)0) {
  }

  virtual ~RequestScenePKCheck() throw() {}

  int64_t src_id_;
  int64_t dest_id_;
  PKCheckResultType::type result_;

  void __set_src_id_(const int64_t val) {
    src_id_ = val;
  }

  void __set_dest_id_(const int64_t val) {
    dest_id_ = val;
  }

  void __set_result_(const PKCheckResultType::type val) {
    result_ = val;
  }

  bool operator == (const RequestScenePKCheck & rhs) const
  {
    if (!(src_id_ == rhs.src_id_))
      return false;
    if (!(dest_id_ == rhs.dest_id_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const RequestScenePKCheck &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestScenePKCheck & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestScenePKCheck &a, RequestScenePKCheck &b);


class RequestSceneActorBroadcast {
 public:

  static const char* ascii_fingerprint; // = "A39E716239CAE3EC73607CFCF4132607";
  static const uint8_t binary_fingerprint[16]; // = {0xA3,0x9E,0x71,0x62,0x39,0xCA,0xE3,0xEC,0x73,0x60,0x7C,0xFC,0xF4,0x13,0x26,0x07};

  RequestSceneActorBroadcast() : type_(0), message_(), scene_(0) {
  }

  virtual ~RequestSceneActorBroadcast() throw() {}

  int32_t type_;
  std::string message_;
  int64_t scene_;

  void __set_type_(const int32_t val) {
    type_ = val;
  }

  void __set_message_(const std::string& val) {
    message_ = val;
  }

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  bool operator == (const RequestSceneActorBroadcast & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(message_ == rhs.message_))
      return false;
    if (!(scene_ == rhs.scene_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneActorBroadcast &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneActorBroadcast & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneActorBroadcast &a, RequestSceneActorBroadcast &b);


class RequestSceneCreateMap {
 public:

  static const char* ascii_fingerprint; // = "9C2A05F173B50306037BDE9AE30E1B99";
  static const uint8_t binary_fingerprint[16]; // = {0x9C,0x2A,0x05,0xF1,0x73,0xB5,0x03,0x06,0x03,0x7B,0xDE,0x9A,0xE3,0x0E,0x1B,0x99};

  RequestSceneCreateMap() : map_(0), scene_(0) {
  }

  virtual ~RequestSceneCreateMap() throw() {}

  int32_t map_;
  int64_t scene_;

  void __set_map_(const int32_t val) {
    map_ = val;
  }

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  bool operator == (const RequestSceneCreateMap & rhs) const
  {
    if (!(map_ == rhs.map_))
      return false;
    if (!(scene_ == rhs.scene_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneCreateMap &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneCreateMap & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneCreateMap &a, RequestSceneCreateMap &b);


class RequestSceneDestoryMap {
 public:

  static const char* ascii_fingerprint; // = "25038F937443AC9A2A06CEE5209E41BF";
  static const uint8_t binary_fingerprint[16]; // = {0x25,0x03,0x8F,0x93,0x74,0x43,0xAC,0x9A,0x2A,0x06,0xCE,0xE5,0x20,0x9E,0x41,0xBF};

  RequestSceneDestoryMap() : scene_(0), result_(0) {
  }

  virtual ~RequestSceneDestoryMap() throw() {}

  int64_t scene_;
  bool result_;

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const RequestSceneDestoryMap & rhs) const
  {
    if (!(scene_ == rhs.scene_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneDestoryMap &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneDestoryMap & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneDestoryMap &a, RequestSceneDestoryMap &b);


class RequestSceneClearAllNpc {
 public:

  static const char* ascii_fingerprint; // = "3495A4F4FB8ADC7B81D6DE532D320E88";
  static const uint8_t binary_fingerprint[16]; // = {0x34,0x95,0xA4,0xF4,0xFB,0x8A,0xDC,0x7B,0x81,0xD6,0xDE,0x53,0x2D,0x32,0x0E,0x88};

  RequestSceneClearAllNpc() : scene_(0), delay_secs_(0), force_clear_reborn_(false) {
  }

  virtual ~RequestSceneClearAllNpc() throw() {}

  int64_t scene_;
  int32_t delay_secs_;
  bool force_clear_reborn_;

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  void __set_delay_secs_(const int32_t val) {
    delay_secs_ = val;
  }

  void __set_force_clear_reborn_(const bool val) {
    force_clear_reborn_ = val;
  }

  bool operator == (const RequestSceneClearAllNpc & rhs) const
  {
    if (!(scene_ == rhs.scene_))
      return false;
    if (!(delay_secs_ == rhs.delay_secs_))
      return false;
    if (!(force_clear_reborn_ == rhs.force_clear_reborn_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneClearAllNpc &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneClearAllNpc & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneClearAllNpc &a, RequestSceneClearAllNpc &b);


class RequestSceneRevive {
 public:

  static const char* ascii_fingerprint; // = "25038F937443AC9A2A06CEE5209E41BF";
  static const uint8_t binary_fingerprint[16]; // = {0x25,0x03,0x8F,0x93,0x74,0x43,0xAC,0x9A,0x2A,0x06,0xCE,0xE5,0x20,0x9E,0x41,0xBF};

  RequestSceneRevive() : actor_(0), stay_revive_(0) {
  }

  virtual ~RequestSceneRevive() throw() {}

  int64_t actor_;
  bool stay_revive_;

  void __set_actor_(const int64_t val) {
    actor_ = val;
  }

  void __set_stay_revive_(const bool val) {
    stay_revive_ = val;
  }

  bool operator == (const RequestSceneRevive & rhs) const
  {
    if (!(actor_ == rhs.actor_))
      return false;
    if (!(stay_revive_ == rhs.stay_revive_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneRevive &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneRevive & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneRevive &a, RequestSceneRevive &b);


class RequestSceneForbidDropItem {
 public:

  static const char* ascii_fingerprint; // = "86D67F208E764C02A1D026C912DFFF3D";
  static const uint8_t binary_fingerprint[16]; // = {0x86,0xD6,0x7F,0x20,0x8E,0x76,0x4C,0x02,0xA1,0xD0,0x26,0xC9,0x12,0xDF,0xFF,0x3D};

  RequestSceneForbidDropItem() : forbid_(0) {
  }

  virtual ~RequestSceneForbidDropItem() throw() {}

  std::vector<int64_t>  npcs_;
  bool forbid_;

  void __set_npcs_(const std::vector<int64_t> & val) {
    npcs_ = val;
  }

  void __set_forbid_(const bool val) {
    forbid_ = val;
  }

  bool operator == (const RequestSceneForbidDropItem & rhs) const
  {
    if (!(npcs_ == rhs.npcs_))
      return false;
    if (!(forbid_ == rhs.forbid_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneForbidDropItem &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneForbidDropItem & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneForbidDropItem &a, RequestSceneForbidDropItem &b);


class RequestSceneGetNpcs {
 public:

  static const char* ascii_fingerprint; // = "955BD89722154769CC8FC8E9E0AB6CC2";
  static const uint8_t binary_fingerprint[16]; // = {0x95,0x5B,0xD8,0x97,0x22,0x15,0x47,0x69,0xCC,0x8F,0xC8,0xE9,0xE0,0xAB,0x6C,0xC2};

  RequestSceneGetNpcs() : scene_(0) {
  }

  virtual ~RequestSceneGetNpcs() throw() {}

  int64_t scene_;
  std::vector<int64_t>  npcs_;

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  void __set_npcs_(const std::vector<int64_t> & val) {
    npcs_ = val;
  }

  bool operator == (const RequestSceneGetNpcs & rhs) const
  {
    if (!(scene_ == rhs.scene_))
      return false;
    if (!(npcs_ == rhs.npcs_))
      return false;
    return true;
  }
  bool operator != (const RequestSceneGetNpcs &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSceneGetNpcs & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSceneGetNpcs &a, RequestSceneGetNpcs &b);

}}} // namespace

#endif