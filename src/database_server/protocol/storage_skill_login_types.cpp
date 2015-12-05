/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "storage_skill_login_types.h"

#include <algorithm>

namespace database { namespace protocol {

int _kSkillFieldValues[] = {
  SkillField::SKILL_ID,
  SkillField::CURRENT_LEVEL,
  SkillField::MAX
};
const char* _kSkillFieldNames[] = {
  "SKILL_ID",
  "CURRENT_LEVEL",
  "MAX"
};
const std::map<int, const char*> _SkillField_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kSkillFieldValues, _kSkillFieldNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kSkillLoginResultValues[] = {
  SkillLoginResult::SUCCESS,
  SkillLoginResult::ERROR_UNKNOWN
};
const char* _kSkillLoginResultNames[] = {
  "SUCCESS",
  "ERROR_UNKNOWN"
};
const std::map<int, const char*> _SkillLoginResult_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kSkillLoginResultValues, _kSkillLoginResultNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* StorageSkillField::ascii_fingerprint = "422C35A5D98C69C9CDE50568C7E3028F";
const uint8_t StorageSkillField::binary_fingerprint[16] = {0x42,0x2C,0x35,0xA5,0xD9,0x8C,0x69,0xC9,0xCD,0xE5,0x05,0x68,0xC7,0xE3,0x02,0x8F};

uint32_t StorageSkillField::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_skill_id_ = false;
  bool isset_skill_current_level_ = false;

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
          xfer += iprot->readI32(this->skill_id_);
          isset_skill_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->skill_current_level_);
          isset_skill_current_level_ = true;
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

  if (!isset_skill_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_skill_current_level_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageSkillField::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageSkillField");

  xfer += oprot->writeFieldBegin("skill_id_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->skill_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("skill_current_level_", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->skill_current_level_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageSkillField &a, StorageSkillField &b) {
  using ::std::swap;
  swap(a.skill_id_, b.skill_id_);
  swap(a.skill_current_level_, b.skill_current_level_);
}

const char* StorageSkillLoginRequest::ascii_fingerprint = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
const uint8_t StorageSkillLoginRequest::binary_fingerprint[16] = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

uint32_t StorageSkillLoginRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

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

  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageSkillLoginRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageSkillLoginRequest");

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageSkillLoginRequest &a, StorageSkillLoginRequest &b) {
  using ::std::swap;
  swap(a.id_, b.id_);
}

const char* StorageSkillLoginResponse::ascii_fingerprint = "3809E6B3119A454E67BE3A3FFB392A4D";
const uint8_t StorageSkillLoginResponse::binary_fingerprint[16] = {0x38,0x09,0xE6,0xB3,0x11,0x9A,0x45,0x4E,0x67,0xBE,0x3A,0x3F,0xFB,0x39,0x2A,0x4D};

uint32_t StorageSkillLoginResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_result_ = false;

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
          this->result_ = (SkillLoginResult::type)ecast0;
          isset_result_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->fields_.clear();
            uint32_t _size1;
            ::apache::thrift::protocol::TType _etype4;
            xfer += iprot->readListBegin(_etype4, _size1);
            this->fields_.resize(_size1);
            uint32_t _i5;
            for (_i5 = 0; _i5 < _size1; ++_i5)
            {
              xfer += this->fields_[_i5].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.fields_ = true;
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

  if (!isset_result_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageSkillLoginResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageSkillLoginResponse");

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->result_);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.fields_) {
    xfer += oprot->writeFieldBegin("fields_", ::apache::thrift::protocol::T_LIST, 2);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->fields_.size()));
      std::vector<StorageSkillField> ::const_iterator _iter6;
      for (_iter6 = this->fields_.begin(); _iter6 != this->fields_.end(); ++_iter6)
      {
        xfer += (*_iter6).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageSkillLoginResponse &a, StorageSkillLoginResponse &b) {
  using ::std::swap;
  swap(a.result_, b.result_);
  swap(a.fields_, b.fields_);
  swap(a.__isset, b.__isset);
}

}} // namespace
