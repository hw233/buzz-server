/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "gateway_shop_protocol_types.h"

#include <algorithm>

namespace gateway { namespace protocol {

const char* ShopUnit::ascii_fingerprint = "422C35A5D98C69C9CDE50568C7E3028F";
const uint8_t ShopUnit::binary_fingerprint[16] = {0x42,0x2C,0x35,0xA5,0xD9,0x8C,0x69,0xC9,0xCD,0xE5,0x05,0x68,0xC7,0xE3,0x02,0x8F};

uint32_t ShopUnit::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_template_id_ = false;
  bool isset_location_ = false;

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
          xfer += iprot->readI32(this->template_id_);
          isset_template_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->location_);
          isset_location_ = true;
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

  if (!isset_template_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_location_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ShopUnit::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ShopUnit");

  xfer += oprot->writeFieldBegin("template_id_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->template_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("location_", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->location_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ShopUnit &a, ShopUnit &b) {
  using ::std::swap;
  swap(a.template_id_, b.template_id_);
  swap(a.location_, b.location_);
}

const char* MessageShopBuybackInitialize::ascii_fingerprint = "9318BC0B43626CCFB1B99D7168F0337A";
const uint8_t MessageShopBuybackInitialize::binary_fingerprint[16] = {0x93,0x18,0xBC,0x0B,0x43,0x62,0x6C,0xCF,0xB1,0xB9,0x9D,0x71,0x68,0xF0,0x33,0x7A};

uint32_t MessageShopBuybackInitialize::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_buybacks_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->buybacks_.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->buybacks_.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->buybacks_[_i4].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_buybacks_ = true;
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

  if (!isset_buybacks_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageShopBuybackInitialize::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageShopBuybackInitialize");

  xfer += oprot->writeFieldBegin("buybacks_", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->buybacks_.size()));
    std::vector<ShopUnit> ::const_iterator _iter5;
    for (_iter5 = this->buybacks_.begin(); _iter5 != this->buybacks_.end(); ++_iter5)
    {
      xfer += (*_iter5).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageShopBuybackInitialize &a, MessageShopBuybackInitialize &b) {
  using ::std::swap;
  swap(a.buybacks_, b.buybacks_);
}

const char* MessageShopBuyRequest::ascii_fingerprint = "989D1F1AE8D148D5E2119FFEC4BBBEE3";
const uint8_t MessageShopBuyRequest::binary_fingerprint[16] = {0x98,0x9D,0x1F,0x1A,0xE8,0xD1,0x48,0xD5,0xE2,0x11,0x9F,0xFE,0xC4,0xBB,0xBE,0xE3};

uint32_t MessageShopBuyRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_template_id_ = false;
  bool isset_num_ = false;

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
          xfer += iprot->readI32(this->template_id_);
          isset_template_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->num_);
          isset_num_ = true;
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

  if (!isset_template_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_num_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageShopBuyRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageShopBuyRequest");

  xfer += oprot->writeFieldBegin("template_id_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->template_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("num_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->num_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageShopBuyRequest &a, MessageShopBuyRequest &b) {
  using ::std::swap;
  swap(a.template_id_, b.template_id_);
  swap(a.num_, b.num_);
}

const char* MessageShopBuyResponse::ascii_fingerprint = "E86CACEB22240450EDCBEFC3A83970E4";
const uint8_t MessageShopBuyResponse::binary_fingerprint[16] = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

uint32_t MessageShopBuyResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_template_id_ = false;

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
          xfer += iprot->readI32(this->template_id_);
          isset_template_id_ = true;
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

  if (!isset_template_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageShopBuyResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageShopBuyResponse");

  xfer += oprot->writeFieldBegin("template_id_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->template_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageShopBuyResponse &a, MessageShopBuyResponse &b) {
  using ::std::swap;
  swap(a.template_id_, b.template_id_);
}

const char* MessageShopBuybackRequest::ascii_fingerprint = "565787C31CF2D774B532CB755189BF39";
const uint8_t MessageShopBuybackRequest::binary_fingerprint[16] = {0x56,0x57,0x87,0xC3,0x1C,0xF2,0xD7,0x74,0xB5,0x32,0xCB,0x75,0x51,0x89,0xBF,0x39};

uint32_t MessageShopBuybackRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_location_ = false;

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
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_location_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageShopBuybackRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageShopBuybackRequest");

  xfer += oprot->writeFieldBegin("location_", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->location_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageShopBuybackRequest &a, MessageShopBuybackRequest &b) {
  using ::std::swap;
  swap(a.location_, b.location_);
}

const char* MessageShopBuybackResponse::ascii_fingerprint = "5892306F7B861249AE8E27C8ED619593";
const uint8_t MessageShopBuybackResponse::binary_fingerprint[16] = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

uint32_t MessageShopBuybackResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->result_);
          isset_result_ = true;
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

uint32_t MessageShopBuybackResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageShopBuybackResponse");

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->result_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageShopBuybackResponse &a, MessageShopBuybackResponse &b) {
  using ::std::swap;
  swap(a.result_, b.result_);
}

const char* MessageShopSellRequest::ascii_fingerprint = "565787C31CF2D774B532CB755189BF39";
const uint8_t MessageShopSellRequest::binary_fingerprint[16] = {0x56,0x57,0x87,0xC3,0x1C,0xF2,0xD7,0x74,0xB5,0x32,0xCB,0x75,0x51,0x89,0xBF,0x39};

uint32_t MessageShopSellRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_location_ = false;

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
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_location_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageShopSellRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageShopSellRequest");

  xfer += oprot->writeFieldBegin("location_", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->location_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageShopSellRequest &a, MessageShopSellRequest &b) {
  using ::std::swap;
  swap(a.location_, b.location_);
}

const char* MessageShopSellResponse::ascii_fingerprint = "5892306F7B861249AE8E27C8ED619593";
const uint8_t MessageShopSellResponse::binary_fingerprint[16] = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

uint32_t MessageShopSellResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->result_);
          isset_result_ = true;
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

uint32_t MessageShopSellResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageShopSellResponse");

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->result_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageShopSellResponse &a, MessageShopSellResponse &b) {
  using ::std::swap;
  swap(a.result_, b.result_);
}

}} // namespace
