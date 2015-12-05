/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "actor_types.h"

#include <algorithm>

namespace entity {

int _kActorAoiFieldsValues[] = {
  ActorAoiFields::AOI_BEGIN,
  ActorAoiFields::GENDER,
  ActorAoiFields::APPEARANCE,
  ActorAoiFields::BROWN_NAME,
  ActorAoiFields::CURRENT_SWORD,
  ActorAoiFields::CURRENT_SPIRIT_FACADE,
  ActorAoiFields::VIP,
  ActorAoiFields::AOI_END
};
const char* _kActorAoiFieldsNames[] = {
  "AOI_BEGIN",
  "GENDER",
  "APPEARANCE",
  "BROWN_NAME",
  "CURRENT_SWORD",
  "CURRENT_SPIRIT_FACADE",
  "VIP",
  "AOI_END"
};
const std::map<int, const char*> _ActorAoiFields_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(8, _kActorAoiFieldsValues, _kActorAoiFieldsNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kActorClientFieldsValues[] = {
  ActorClientFields::CLIENT_BEGIN,
  ActorClientFields::CURRENT_EXP,
  ActorClientFields::NIMBUS,
  ActorClientFields::GOLD,
  ActorClientFields::FREEDOM_DOLLARS,
  ActorClientFields::RESTRICT_DOLLARS,
  ActorClientFields::HONOUR,
  ActorClientFields::WAR_SOUL,
  ActorClientFields::GEM_SHARD,
  ActorClientFields::PACKET_CAPACITY,
  ActorClientFields::STORAGE_CAPACITY,
  ActorClientFields::PK_MODE,
  ActorClientFields::FCM_TYPE,
  ActorClientFields::FCM_STATUS,
  ActorClientFields::JUSTICE,
  ActorClientFields::MIRACLE_INTEGRAL,
  ActorClientFields::LEGEND_INTEGRAL,
  ActorClientFields::ARENA_INTEGRAL,
  ActorClientFields::CLIENT_END
};
const char* _kActorClientFieldsNames[] = {
  "CLIENT_BEGIN",
  "CURRENT_EXP",
  "NIMBUS",
  "GOLD",
  "FREEDOM_DOLLARS",
  "RESTRICT_DOLLARS",
  "HONOUR",
  "WAR_SOUL",
  "GEM_SHARD",
  "PACKET_CAPACITY",
  "STORAGE_CAPACITY",
  "PK_MODE",
  "FCM_TYPE",
  "FCM_STATUS",
  "JUSTICE",
  "MIRACLE_INTEGRAL",
  "LEGEND_INTEGRAL",
  "ARENA_INTEGRAL",
  "CLIENT_END"
};
const std::map<int, const char*> _ActorClientFields_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(19, _kActorClientFieldsValues, _kActorClientFieldsNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kActorServerFieldsValues[] = {
  ActorServerFields::SERVER_BEGIN,
  ActorServerFields::KILL_MOB_AND_ZAZEN_EXP_ADD_PERCENT,
  ActorServerFields::KILL_MOB_AND_ZAZEN_NIMBUS_ADD_PERCENT,
  ActorServerFields::SERVER_END
};
const char* _kActorServerFieldsNames[] = {
  "SERVER_BEGIN",
  "KILL_MOB_AND_ZAZEN_EXP_ADD_PERCENT",
  "KILL_MOB_AND_ZAZEN_NIMBUS_ADD_PERCENT",
  "SERVER_END"
};
const std::map<int, const char*> _ActorServerFields_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kActorServerFieldsValues, _kActorServerFieldsNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kActorPKModeTypeValues[] = {
  ActorPKModeType::PEACE,
  ActorPKModeType::ATTACK,
  ActorPKModeType::BATTLE
};
const char* _kActorPKModeTypeNames[] = {
  "PEACE",
  "ATTACK",
  "BATTLE"
};
const std::map<int, const char*> _ActorPKModeType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kActorPKModeTypeValues, _kActorPKModeTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kActorPKChooseTypeValues[] = {
  ActorPKChooseType::SELF_DEFENSE,
  ActorPKChooseType::NOT_ATTACK_TEAMMATE,
  ActorPKChooseType::NOT_ATTACK_SAME_GUILD,
  ActorPKChooseType::NOT_ATTACK_NO_BROWN_ACTOR
};
const char* _kActorPKChooseTypeNames[] = {
  "SELF_DEFENSE",
  "NOT_ATTACK_TEAMMATE",
  "NOT_ATTACK_SAME_GUILD",
  "NOT_ATTACK_NO_BROWN_ACTOR"
};
const std::map<int, const char*> _ActorPKChooseType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kActorPKChooseTypeValues, _kActorPKChooseTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kReviveTypeValues[] = {
  ReviveType::SPAWN_POINT,
  ReviveType::STAY
};
const char* _kReviveTypeNames[] = {
  "SPAWN_POINT",
  "STAY"
};
const std::map<int, const char*> _ReviveType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kReviveTypeValues, _kReviveTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kFcmTypeValues[] = {
  FcmType::UNKNOWN,
  FcmType::MINOR,
  FcmType::ADULT
};
const char* _kFcmTypeNames[] = {
  "UNKNOWN",
  "MINOR",
  "ADULT"
};
const std::map<int, const char*> _FcmType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kFcmTypeValues, _kFcmTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kFcmStatusTypeValues[] = {
  FcmStatusType::NORMAL,
  FcmStatusType::HALF_INCOME,
  FcmStatusType::ZERO_INCOME
};
const char* _kFcmStatusTypeNames[] = {
  "NORMAL",
  "HALF_INCOME",
  "ZERO_INCOME"
};
const std::map<int, const char*> _FcmStatusType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kFcmStatusTypeValues, _kFcmStatusTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* ActorAoiField::ascii_fingerprint = "46A703A33337BED2F62F386FC66B2A5F";
const uint8_t ActorAoiField::binary_fingerprint[16] = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

uint32_t ActorAoiField::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_field_ = false;
  bool isset_value_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->field_ = (ActorAoiFields::type)ecast0;
          isset_field_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->value_);
          isset_value_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_field_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_value_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ActorAoiField::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ActorAoiField");

  xfer += oprot->writeFieldBegin("field_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->field_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->value_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ActorAoiField &a, ActorAoiField &b) {
  using ::std::swap;
  swap(a.field_, b.field_);
  swap(a.value_, b.value_);
}

const char* ActorClientField::ascii_fingerprint = "46A703A33337BED2F62F386FC66B2A5F";
const uint8_t ActorClientField::binary_fingerprint[16] = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

uint32_t ActorClientField::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_field_ = false;
  bool isset_value_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->field_ = (ActorClientFields::type)ecast1;
          isset_field_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->value_);
          isset_value_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_field_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_value_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ActorClientField::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ActorClientField");

  xfer += oprot->writeFieldBegin("field_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->field_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->value_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ActorClientField &a, ActorClientField &b) {
  using ::std::swap;
  swap(a.field_, b.field_);
  swap(a.value_, b.value_);
}

} // namespace
