/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "storage_item_login_types.h"

#include <algorithm>

namespace database { namespace protocol {

int _kItemFieldValues[] = {
  ItemField::LOCATION,
  ItemField::VOCATION,
  ItemField::TEMPLATE_ID,
  ItemField::NUMBER,
  ItemField::BIND,
  ItemField::INTENSIFY_LEVEL,
  ItemField::MAX_INTENSIFY_LEVEL,
  ItemField::RANDOM_ATTR1,
  ItemField::RANDOM_ATTR_VALUE1,
  ItemField::RANDOM_ATTR2,
  ItemField::RANDOM_ATTR_VALUE2,
  ItemField::RANDOM_ATTR3,
  ItemField::RANDOM_ATTR_VALUE3,
  ItemField::RANDOM_ATTR4,
  ItemField::RANDOM_ATTR_VALUE4,
  ItemField::RANDOM_ATTR5,
  ItemField::RANDOM_ATTR_VALUE5,
  ItemField::RANDOM_ATTR6,
  ItemField::RANDOM_ATTR_VALUE6,
  ItemField::FIRST_USE_TIME,
  ItemField::UPGRADE_LUCKY,
  ItemField::MAX
};
const char* _kItemFieldNames[] = {
  "LOCATION",
  "VOCATION",
  "TEMPLATE_ID",
  "NUMBER",
  "BIND",
  "INTENSIFY_LEVEL",
  "MAX_INTENSIFY_LEVEL",
  "RANDOM_ATTR1",
  "RANDOM_ATTR_VALUE1",
  "RANDOM_ATTR2",
  "RANDOM_ATTR_VALUE2",
  "RANDOM_ATTR3",
  "RANDOM_ATTR_VALUE3",
  "RANDOM_ATTR4",
  "RANDOM_ATTR_VALUE4",
  "RANDOM_ATTR5",
  "RANDOM_ATTR_VALUE5",
  "RANDOM_ATTR6",
  "RANDOM_ATTR_VALUE6",
  "FIRST_USE_TIME",
  "UPGRADE_LUCKY",
  "MAX"
};
const std::map<int, const char*> _ItemField_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(22, _kItemFieldValues, _kItemFieldNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kItemLoginResultValues[] = {
  ItemLoginResult::SUCCESS,
  ItemLoginResult::ERROR_UNKNOWN
};
const char* _kItemLoginResultNames[] = {
  "SUCCESS",
  "ERROR_UNKNOWN"
};
const std::map<int, const char*> _ItemLoginResult_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kItemLoginResultValues, _kItemLoginResultNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* StorageItemField::ascii_fingerprint = "4C382C23D352A6394F9EF66C9C675982";
const uint8_t StorageItemField::binary_fingerprint[16] = {0x4C,0x38,0x2C,0x23,0xD3,0x52,0xA6,0x39,0x4F,0x9E,0xF6,0x6C,0x9C,0x67,0x59,0x82};

uint32_t StorageItemField::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_location_ = false;
  bool isset_vocation_ = false;
  bool isset_template_id_ = false;
  bool isset_number_ = false;
  bool isset_bind_ = false;
  bool isset_intensify_level_ = false;
  bool isset_max_intensify_level_ = false;
  bool isset_random_attr1_ = false;
  bool isset_random_attr_value1_ = false;
  bool isset_random_attr2_ = false;
  bool isset_random_attr_value2_ = false;
  bool isset_random_attr3_ = false;
  bool isset_random_attr_value3_ = false;
  bool isset_random_attr4_ = false;
  bool isset_random_attr_value4_ = false;
  bool isset_random_attr5_ = false;
  bool isset_random_attr_value5_ = false;
  bool isset_random_attr6_ = false;
  bool isset_random_attr_value6_ = false;
  bool isset_first_use_time_ = false;
  bool isset_upgrade_lucky_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->location_);
          isset_location_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->vocation_);
          isset_vocation_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->template_id_);
          isset_template_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->number_);
          isset_number_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->bind_);
          isset_bind_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->intensify_level_);
          isset_intensify_level_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->max_intensify_level_);
          isset_max_intensify_level_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->random_attr1_);
          isset_random_attr1_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->random_attr_value1_);
          isset_random_attr_value1_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->random_attr2_);
          isset_random_attr2_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->random_attr_value2_);
          isset_random_attr_value2_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->random_attr3_);
          isset_random_attr3_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 13:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->random_attr_value3_);
          isset_random_attr_value3_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 14:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->random_attr4_);
          isset_random_attr4_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 15:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->random_attr_value4_);
          isset_random_attr_value4_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 16:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->random_attr5_);
          isset_random_attr5_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 17:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->random_attr_value5_);
          isset_random_attr_value5_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 18:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->random_attr6_);
          isset_random_attr6_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 19:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->random_attr_value6_);
          isset_random_attr_value6_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->first_use_time_);
          isset_first_use_time_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 21:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->upgrade_lucky_);
          isset_upgrade_lucky_ = true;
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

  if (!isset_location_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_vocation_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_template_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_number_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_bind_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_intensify_level_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_max_intensify_level_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr1_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr_value1_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr2_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr_value2_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr3_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr_value3_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr4_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr_value4_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr5_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr_value5_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr6_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_random_attr_value6_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_first_use_time_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_upgrade_lucky_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageItemField::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageItemField");

  xfer += oprot->writeFieldBegin("location_", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->location_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vocation_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->vocation_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("template_id_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->template_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("number_", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->number_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("bind_", ::apache::thrift::protocol::T_BYTE, 5);
  xfer += oprot->writeByte(this->bind_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("intensify_level_", ::apache::thrift::protocol::T_BYTE, 6);
  xfer += oprot->writeByte(this->intensify_level_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("max_intensify_level_", ::apache::thrift::protocol::T_BYTE, 7);
  xfer += oprot->writeByte(this->max_intensify_level_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr1_", ::apache::thrift::protocol::T_BYTE, 8);
  xfer += oprot->writeByte(this->random_attr1_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr_value1_", ::apache::thrift::protocol::T_I32, 9);
  xfer += oprot->writeI32(this->random_attr_value1_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr2_", ::apache::thrift::protocol::T_BYTE, 10);
  xfer += oprot->writeByte(this->random_attr2_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr_value2_", ::apache::thrift::protocol::T_I32, 11);
  xfer += oprot->writeI32(this->random_attr_value2_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr3_", ::apache::thrift::protocol::T_BYTE, 12);
  xfer += oprot->writeByte(this->random_attr3_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr_value3_", ::apache::thrift::protocol::T_I32, 13);
  xfer += oprot->writeI32(this->random_attr_value3_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr4_", ::apache::thrift::protocol::T_BYTE, 14);
  xfer += oprot->writeByte(this->random_attr4_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr_value4_", ::apache::thrift::protocol::T_I32, 15);
  xfer += oprot->writeI32(this->random_attr_value4_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr5_", ::apache::thrift::protocol::T_BYTE, 16);
  xfer += oprot->writeByte(this->random_attr5_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr_value5_", ::apache::thrift::protocol::T_I32, 17);
  xfer += oprot->writeI32(this->random_attr_value5_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr6_", ::apache::thrift::protocol::T_BYTE, 18);
  xfer += oprot->writeByte(this->random_attr6_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("random_attr_value6_", ::apache::thrift::protocol::T_I32, 19);
  xfer += oprot->writeI32(this->random_attr_value6_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("first_use_time_", ::apache::thrift::protocol::T_I64, 20);
  xfer += oprot->writeI64(this->first_use_time_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("upgrade_lucky_", ::apache::thrift::protocol::T_I32, 21);
  xfer += oprot->writeI32(this->upgrade_lucky_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageItemField &a, StorageItemField &b) {
  using ::std::swap;
  swap(a.location_, b.location_);
  swap(a.vocation_, b.vocation_);
  swap(a.template_id_, b.template_id_);
  swap(a.number_, b.number_);
  swap(a.bind_, b.bind_);
  swap(a.intensify_level_, b.intensify_level_);
  swap(a.max_intensify_level_, b.max_intensify_level_);
  swap(a.random_attr1_, b.random_attr1_);
  swap(a.random_attr_value1_, b.random_attr_value1_);
  swap(a.random_attr2_, b.random_attr2_);
  swap(a.random_attr_value2_, b.random_attr_value2_);
  swap(a.random_attr3_, b.random_attr3_);
  swap(a.random_attr_value3_, b.random_attr_value3_);
  swap(a.random_attr4_, b.random_attr4_);
  swap(a.random_attr_value4_, b.random_attr_value4_);
  swap(a.random_attr5_, b.random_attr5_);
  swap(a.random_attr_value5_, b.random_attr_value5_);
  swap(a.random_attr6_, b.random_attr6_);
  swap(a.random_attr_value6_, b.random_attr_value6_);
  swap(a.first_use_time_, b.first_use_time_);
  swap(a.upgrade_lucky_, b.upgrade_lucky_);
}

const char* StorageItemLoginRequest::ascii_fingerprint = "DDB540D232DEE4BB76F25D4DAA0FC261";
const uint8_t StorageItemLoginRequest::binary_fingerprint[16] = {0xDD,0xB5,0x40,0xD2,0x32,0xDE,0xE4,0xBB,0x76,0xF2,0x5D,0x4D,0xAA,0x0F,0xC2,0x61};

uint32_t StorageItemLoginRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_id_ = false;
  bool isset_contain_type_ = false;

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
          xfer += iprot->readI64(this->actor_id_);
          isset_actor_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->contain_type_);
          isset_contain_type_ = true;
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

  if (!isset_actor_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_contain_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageItemLoginRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageItemLoginRequest");

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("contain_type_", ::apache::thrift::protocol::T_BYTE, 2);
  xfer += oprot->writeByte(this->contain_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageItemLoginRequest &a, StorageItemLoginRequest &b) {
  using ::std::swap;
  swap(a.actor_id_, b.actor_id_);
  swap(a.contain_type_, b.contain_type_);
}

const char* StorageItemLoginResponse::ascii_fingerprint = "BB9FCA77782560E13445F26D69E29AEF";
const uint8_t StorageItemLoginResponse::binary_fingerprint[16] = {0xBB,0x9F,0xCA,0x77,0x78,0x25,0x60,0xE1,0x34,0x45,0xF2,0x6D,0x69,0xE2,0x9A,0xEF};

uint32_t StorageItemLoginResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          this->result_ = (ItemLoginResult::type)ecast0;
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

uint32_t StorageItemLoginResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageItemLoginResponse");

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->result_);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.fields_) {
    xfer += oprot->writeFieldBegin("fields_", ::apache::thrift::protocol::T_LIST, 2);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->fields_.size()));
      std::vector<StorageItemField> ::const_iterator _iter6;
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

void swap(StorageItemLoginResponse &a, StorageItemLoginResponse &b) {
  using ::std::swap;
  swap(a.result_, b.result_);
  swap(a.fields_, b.fields_);
  swap(a.__isset, b.__isset);
}

}} // namespace
