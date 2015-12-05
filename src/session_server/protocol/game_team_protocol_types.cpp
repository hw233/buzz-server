/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "game_team_protocol_types.h"

#include <algorithm>

namespace session { namespace protocol {

int _kTeamMemberAttrTypeValues[] = {
  TeamMemberAttrType::HP,
  TeamMemberAttrType::MAX_HP,
  TeamMemberAttrType::MP,
  TeamMemberAttrType::MAX_MP,
  TeamMemberAttrType::LOCATION_X,
  TeamMemberAttrType::LOCATION_Y
};
const char* _kTeamMemberAttrTypeNames[] = {
  "HP",
  "MAX_HP",
  "MP",
  "MAX_MP",
  "LOCATION_X",
  "LOCATION_Y"
};
const std::map<int, const char*> _TeamMemberAttrType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(6, _kTeamMemberAttrTypeValues, _kTeamMemberAttrTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* MessageTeamSynchronize::ascii_fingerprint = "F33135321253DAEB67B0E79E416CA831";
const uint8_t MessageTeamSynchronize::binary_fingerprint[16] = {0xF3,0x31,0x35,0x32,0x12,0x53,0xDA,0xEB,0x67,0xB0,0xE7,0x9E,0x41,0x6C,0xA8,0x31};

uint32_t MessageTeamSynchronize::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_ = false;
  bool isset_team_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->team_);
          isset_team_ = true;
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

  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_team_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageTeamSynchronize::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageTeamSynchronize");

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("team_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->team_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageTeamSynchronize &a, MessageTeamSynchronize &b) {
  using ::std::swap;
  swap(a.actor_, b.actor_);
  swap(a.team_, b.team_);
}

const char* MessageTeamBuffSynchronize::ascii_fingerprint = "AFAFBCDB9822F9D1AA4E44188E720B47";
const uint8_t MessageTeamBuffSynchronize::binary_fingerprint[16] = {0xAF,0xAF,0xBC,0xDB,0x98,0x22,0xF9,0xD1,0xAA,0x4E,0x44,0x18,0x8E,0x72,0x0B,0x47};

uint32_t MessageTeamBuffSynchronize::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_ = false;
  bool isset_buff_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->buff_);
          isset_buff_ = true;
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

  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_buff_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageTeamBuffSynchronize::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageTeamBuffSynchronize");

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("buff_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->buff_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageTeamBuffSynchronize &a, MessageTeamBuffSynchronize &b) {
  using ::std::swap;
  swap(a.actor_, b.actor_);
  swap(a.buff_, b.buff_);
}

const char* TeamMemberAttrFields::ascii_fingerprint = "46A703A33337BED2F62F386FC66B2A5F";
const uint8_t TeamMemberAttrFields::binary_fingerprint[16] = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

uint32_t TeamMemberAttrFields::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
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
          this->type_ = (TeamMemberAttrType::type)ecast0;
          isset_type_ = true;
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

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_value_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TeamMemberAttrFields::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TeamMemberAttrFields");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->value_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TeamMemberAttrFields &a, TeamMemberAttrFields &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.value_, b.value_);
}

const char* MessageTeamMemberAttrSynchronize::ascii_fingerprint = "1F07B36C66C0A1F13A211C23364AC1AF";
const uint8_t MessageTeamMemberAttrSynchronize::binary_fingerprint[16] = {0x1F,0x07,0xB3,0x6C,0x66,0xC0,0xA1,0xF1,0x3A,0x21,0x1C,0x23,0x36,0x4A,0xC1,0xAF};

uint32_t MessageTeamMemberAttrSynchronize::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_ = false;
  bool isset_attrs_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->attrs_.clear();
            uint32_t _size1;
            ::apache::thrift::protocol::TType _etype4;
            xfer += iprot->readListBegin(_etype4, _size1);
            this->attrs_.resize(_size1);
            uint32_t _i5;
            for (_i5 = 0; _i5 < _size1; ++_i5)
            {
              xfer += this->attrs_[_i5].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_attrs_ = true;
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

  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_attrs_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageTeamMemberAttrSynchronize::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageTeamMemberAttrSynchronize");

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("attrs_", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->attrs_.size()));
    std::vector<TeamMemberAttrFields> ::const_iterator _iter6;
    for (_iter6 = this->attrs_.begin(); _iter6 != this->attrs_.end(); ++_iter6)
    {
      xfer += (*_iter6).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageTeamMemberAttrSynchronize &a, MessageTeamMemberAttrSynchronize &b) {
  using ::std::swap;
  swap(a.actor_, b.actor_);
  swap(a.attrs_, b.attrs_);
}

}} // namespace
