/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef entity_TYPES_H
#define entity_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace entity {

struct EntityType {
  enum type {
    TYPE_ACTOR = 0,
    TYPE_NPC = 1,
    TYPE_SCENE_ITEM = 2,
    TYPE_MAX = 3
  };
};

extern const std::map<int, const char*> _EntityType_VALUES_TO_NAMES;

struct EntityClientFields {
  enum type {
    CLIENT_BEGIN = 0,
    CLIENT_END = 1
  };
};

extern const std::map<int, const char*> _EntityClientFields_VALUES_TO_NAMES;

struct EntityServerFields {
  enum type {
    SERVER_BEGIN = 0,
    SERVER_END = 1
  };
};

extern const std::map<int, const char*> _EntityServerFields_VALUES_TO_NAMES;


class EntityClientField {
 public:

  static const char* ascii_fingerprint; // = "46A703A33337BED2F62F386FC66B2A5F";
  static const uint8_t binary_fingerprint[16]; // = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

  EntityClientField() : field_((EntityClientFields::type)0), value_(0) {
  }

  virtual ~EntityClientField() throw() {}

  EntityClientFields::type field_;
  int32_t value_;

  void __set_field_(const EntityClientFields::type val) {
    field_ = val;
  }

  void __set_value_(const int32_t val) {
    value_ = val;
  }

  bool operator == (const EntityClientField & rhs) const
  {
    if (!(field_ == rhs.field_))
      return false;
    if (!(value_ == rhs.value_))
      return false;
    return true;
  }
  bool operator != (const EntityClientField &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EntityClientField & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(EntityClientField &a, EntityClientField &b);

} // namespace

#endif