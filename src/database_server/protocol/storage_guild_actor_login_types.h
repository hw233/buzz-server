/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_guild_actor_login_TYPES_H
#define storage_guild_actor_login_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace database { namespace protocol {

struct GuildActorField {
  enum type {
    GUILD_ID = 0,
    GUILD_POSITION = 1,
    CURRENT_CONTRIBUTION_VALUE = 2,
    TOTAL_CONTRIBUTION_VALUE = 3,
    GOLD_CONTRIBUTION = 4,
    FREEDOM_DOLLARS_CONTRIBUTION = 5,
    LIGHT_CRYSTAL_CONTRIBUTION = 6,
    DARK_CRYSTAL_CONTRIBUTION = 7,
    HOLY_CRYSTAL_CONTRIBUTION = 8,
    GUILD_SKILLS = 9,
    GUILD_BUFFS = 10,
    AWARDED_GUILD_PLAYINGS = 11,
    MAX = 12
  };
};

extern const std::map<int, const char*> _GuildActorField_VALUES_TO_NAMES;

struct GuildActorLoginResult {
  enum type {
    SUCCESS = 0,
    NOT_FOUND = 1,
    ERROR_UNKNOWN = 2,
    MAX = 3
  };
};

extern const std::map<int, const char*> _GuildActorLoginResult_VALUES_TO_NAMES;


class StorageGuildActorField {
 public:

  static const char* ascii_fingerprint; // = "7C3C053A9D2290359A0A108EFC16A516";
  static const uint8_t binary_fingerprint[16]; // = {0x7C,0x3C,0x05,0x3A,0x9D,0x22,0x90,0x35,0x9A,0x0A,0x10,0x8E,0xFC,0x16,0xA5,0x16};

  StorageGuildActorField() : guild_id_(0), guild_position_(0), current_contribution_value_(0), total_contribution_value_(0), gold_contribution_(0), freedom_dollars_contribution_(0), light_crystal_contribution_(0), dark_crystal_contribution_(0), holy_crystal_contribution_(0), guild_skills_(), guild_buffs_(), awarded_guild_playings_() {
  }

  virtual ~StorageGuildActorField() throw() {}

  int64_t guild_id_;
  int32_t guild_position_;
  int32_t current_contribution_value_;
  int32_t total_contribution_value_;
  int32_t gold_contribution_;
  int32_t freedom_dollars_contribution_;
  int32_t light_crystal_contribution_;
  int32_t dark_crystal_contribution_;
  int32_t holy_crystal_contribution_;
  std::string guild_skills_;
  std::string guild_buffs_;
  std::string awarded_guild_playings_;

  void __set_guild_id_(const int64_t val) {
    guild_id_ = val;
  }

  void __set_guild_position_(const int32_t val) {
    guild_position_ = val;
  }

  void __set_current_contribution_value_(const int32_t val) {
    current_contribution_value_ = val;
  }

  void __set_total_contribution_value_(const int32_t val) {
    total_contribution_value_ = val;
  }

  void __set_gold_contribution_(const int32_t val) {
    gold_contribution_ = val;
  }

  void __set_freedom_dollars_contribution_(const int32_t val) {
    freedom_dollars_contribution_ = val;
  }

  void __set_light_crystal_contribution_(const int32_t val) {
    light_crystal_contribution_ = val;
  }

  void __set_dark_crystal_contribution_(const int32_t val) {
    dark_crystal_contribution_ = val;
  }

  void __set_holy_crystal_contribution_(const int32_t val) {
    holy_crystal_contribution_ = val;
  }

  void __set_guild_skills_(const std::string& val) {
    guild_skills_ = val;
  }

  void __set_guild_buffs_(const std::string& val) {
    guild_buffs_ = val;
  }

  void __set_awarded_guild_playings_(const std::string& val) {
    awarded_guild_playings_ = val;
  }

  bool operator == (const StorageGuildActorField & rhs) const
  {
    if (!(guild_id_ == rhs.guild_id_))
      return false;
    if (!(guild_position_ == rhs.guild_position_))
      return false;
    if (!(current_contribution_value_ == rhs.current_contribution_value_))
      return false;
    if (!(total_contribution_value_ == rhs.total_contribution_value_))
      return false;
    if (!(gold_contribution_ == rhs.gold_contribution_))
      return false;
    if (!(freedom_dollars_contribution_ == rhs.freedom_dollars_contribution_))
      return false;
    if (!(light_crystal_contribution_ == rhs.light_crystal_contribution_))
      return false;
    if (!(dark_crystal_contribution_ == rhs.dark_crystal_contribution_))
      return false;
    if (!(holy_crystal_contribution_ == rhs.holy_crystal_contribution_))
      return false;
    if (!(guild_skills_ == rhs.guild_skills_))
      return false;
    if (!(guild_buffs_ == rhs.guild_buffs_))
      return false;
    if (!(awarded_guild_playings_ == rhs.awarded_guild_playings_))
      return false;
    return true;
  }
  bool operator != (const StorageGuildActorField &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageGuildActorField & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageGuildActorField &a, StorageGuildActorField &b);


class StorageGuildActorLoginRequest {
 public:

  static const char* ascii_fingerprint; // = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
  static const uint8_t binary_fingerprint[16]; // = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

  StorageGuildActorLoginRequest() : actor_id_(0) {
  }

  virtual ~StorageGuildActorLoginRequest() throw() {}

  int64_t actor_id_;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  bool operator == (const StorageGuildActorLoginRequest & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    return true;
  }
  bool operator != (const StorageGuildActorLoginRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageGuildActorLoginRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageGuildActorLoginRequest &a, StorageGuildActorLoginRequest &b);


class StorageGuildActorLoginResponse {
 public:

  static const char* ascii_fingerprint; // = "63FA5A8A01CAE198368DCEC211F706FC";
  static const uint8_t binary_fingerprint[16]; // = {0x63,0xFA,0x5A,0x8A,0x01,0xCA,0xE1,0x98,0x36,0x8D,0xCE,0xC2,0x11,0xF7,0x06,0xFC};

  StorageGuildActorLoginResponse() : result_((GuildActorLoginResult::type)0) {
  }

  virtual ~StorageGuildActorLoginResponse() throw() {}

  GuildActorLoginResult::type result_;
  StorageGuildActorField field_;

  void __set_result_(const GuildActorLoginResult::type val) {
    result_ = val;
  }

  void __set_field_(const StorageGuildActorField& val) {
    field_ = val;
  }

  bool operator == (const StorageGuildActorLoginResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    if (!(field_ == rhs.field_))
      return false;
    return true;
  }
  bool operator != (const StorageGuildActorLoginResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageGuildActorLoginResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageGuildActorLoginResponse &a, StorageGuildActorLoginResponse &b);

}} // namespace

#endif
