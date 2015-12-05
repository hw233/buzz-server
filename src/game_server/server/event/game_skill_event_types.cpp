/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "game_skill_event_types.h"

#include <algorithm>

namespace game { namespace server { namespace event {

const char* EventUseSkill::ascii_fingerprint = "AE3264C565469D137B90361664AF682F";
const uint8_t EventUseSkill::binary_fingerprint[16] = {0xAE,0x32,0x64,0xC5,0x65,0x46,0x9D,0x13,0x7B,0x90,0x36,0x16,0x64,0xAF,0x68,0x2F};

uint32_t EventUseSkill::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_skill_id_ = false;
  bool isset_skill_group_ = false;
  bool isset_skill_type_ = false;

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
          this->type_ = ( ::entity::EntityType::type)ecast0;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->skill_id_);
          isset_skill_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->skill_group_);
          isset_skill_group_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->skill_type_);
          isset_skill_type_ = true;
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

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_skill_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_skill_group_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_skill_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventUseSkill::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventUseSkill");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("skill_id_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->skill_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("skill_group_", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->skill_group_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("skill_type_", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->skill_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventUseSkill &a, EventUseSkill &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.skill_id_, b.skill_id_);
  swap(a.skill_group_, b.skill_group_);
  swap(a.skill_type_, b.skill_type_);
}

const char* EventAttackedSkill::ascii_fingerprint = "FB4B1E9839AE4E3C2E1AD1C1ECC313EC";
const uint8_t EventAttackedSkill::binary_fingerprint[16] = {0xFB,0x4B,0x1E,0x98,0x39,0xAE,0x4E,0x3C,0x2E,0x1A,0xD1,0xC1,0xEC,0xC3,0x13,0xEC};

uint32_t EventAttackedSkill::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_skill_id_ = false;
  bool isset_friend_type_ = false;

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
          this->type_ = ( ::entity::EntityType::type)ecast1;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->skill_id_);
          isset_skill_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->friend_type_);
          isset_friend_type_ = true;
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

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_skill_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_friend_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventAttackedSkill::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventAttackedSkill");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("skill_id_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->skill_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("friend_type_", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->friend_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventAttackedSkill &a, EventAttackedSkill &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.skill_id_, b.skill_id_);
  swap(a.friend_type_, b.friend_type_);
}

const char* EventUseAppearSkill::ascii_fingerprint = "6E7DD25E88B43484CFC93FCB15DCA1AF";
const uint8_t EventUseAppearSkill::binary_fingerprint[16] = {0x6E,0x7D,0xD2,0x5E,0x88,0xB4,0x34,0x84,0xCF,0xC9,0x3F,0xCB,0x15,0xDC,0xA1,0xAF};

uint32_t EventUseAppearSkill::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;

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
          int32_t ecast2;
          xfer += iprot->readI32(ecast2);
          this->type_ = ( ::entity::EntityType::type)ecast2;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id_);
          isset_id_ = true;
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

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventUseAppearSkill::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventUseAppearSkill");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventUseAppearSkill &a, EventUseAppearSkill &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
}

const char* EventSkillAttackHit::ascii_fingerprint = "BFFB283CDC32F240F6AB6100A1DF304B";
const uint8_t EventSkillAttackHit::binary_fingerprint[16] = {0xBF,0xFB,0x28,0x3C,0xDC,0x32,0xF2,0x40,0xF6,0xAB,0x61,0x00,0xA1,0xDF,0x30,0x4B};

uint32_t EventSkillAttackHit::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_dest_type_ = false;
  bool isset_dest_id_ = false;
  bool isset_hit_type_ = false;
  bool isset_hurt_type_ = false;
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
          int32_t ecast3;
          xfer += iprot->readI32(ecast3);
          this->type_ = ( ::entity::EntityType::type)ecast3;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast4;
          xfer += iprot->readI32(ecast4);
          this->dest_type_ = ( ::entity::EntityType::type)ecast4;
          isset_dest_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->dest_id_);
          isset_dest_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast5;
          xfer += iprot->readI32(ecast5);
          this->hit_type_ = ( ::entity::SkillHitType::type)ecast5;
          isset_hit_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast6;
          xfer += iprot->readI32(ecast6);
          this->hurt_type_ = ( ::entity::SkillHurtType::type)ecast6;
          isset_hurt_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
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

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_dest_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_dest_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_hit_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_hurt_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_value_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSkillAttackHit::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSkillAttackHit");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dest_type_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->dest_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dest_id_", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->dest_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hit_type_", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32((int32_t)this->hit_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hurt_type_", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32((int32_t)this->hurt_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value_", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->value_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSkillAttackHit &a, EventSkillAttackHit &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.dest_type_, b.dest_type_);
  swap(a.dest_id_, b.dest_id_);
  swap(a.hit_type_, b.hit_type_);
  swap(a.hurt_type_, b.hurt_type_);
  swap(a.value_, b.value_);
}

const char* EventSkillAttackedHit::ascii_fingerprint = "BFFB283CDC32F240F6AB6100A1DF304B";
const uint8_t EventSkillAttackedHit::binary_fingerprint[16] = {0xBF,0xFB,0x28,0x3C,0xDC,0x32,0xF2,0x40,0xF6,0xAB,0x61,0x00,0xA1,0xDF,0x30,0x4B};

uint32_t EventSkillAttackedHit::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_src_type_ = false;
  bool isset_src_id_ = false;
  bool isset_hit_type_ = false;
  bool isset_hurt_type_ = false;
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
          int32_t ecast7;
          xfer += iprot->readI32(ecast7);
          this->type_ = ( ::entity::EntityType::type)ecast7;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast8;
          xfer += iprot->readI32(ecast8);
          this->src_type_ = ( ::entity::EntityType::type)ecast8;
          isset_src_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->src_id_);
          isset_src_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast9;
          xfer += iprot->readI32(ecast9);
          this->hit_type_ = ( ::entity::SkillHitType::type)ecast9;
          isset_hit_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast10;
          xfer += iprot->readI32(ecast10);
          this->hurt_type_ = ( ::entity::SkillHurtType::type)ecast10;
          isset_hurt_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
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

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_src_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_src_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_hit_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_hurt_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_value_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSkillAttackedHit::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSkillAttackedHit");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("src_type_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->src_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("src_id_", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->src_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hit_type_", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32((int32_t)this->hit_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hurt_type_", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32((int32_t)this->hurt_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value_", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->value_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSkillAttackedHit &a, EventSkillAttackedHit &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.src_type_, b.src_type_);
  swap(a.src_id_, b.src_id_);
  swap(a.hit_type_, b.hit_type_);
  swap(a.hurt_type_, b.hurt_type_);
  swap(a.value_, b.value_);
}

}}} // namespace
