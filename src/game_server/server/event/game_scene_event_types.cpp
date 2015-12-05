/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "game_scene_event_types.h"

#include <algorithm>

namespace game { namespace server { namespace event {

const char* EventSceneBroadcastCreateRole::ascii_fingerprint = "504072AAD822AA6071017C57066A9473";
const uint8_t EventSceneBroadcastCreateRole::binary_fingerprint[16] = {0x50,0x40,0x72,0xAA,0xD8,0x22,0xAA,0x60,0x71,0x01,0x7C,0x57,0x06,0x6A,0x94,0x73};

uint32_t EventSceneBroadcastCreateRole::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_actors_ = false;

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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->actors_.clear();
            uint32_t _size1;
            ::apache::thrift::protocol::TType _etype4;
            xfer += iprot->readListBegin(_etype4, _size1);
            this->actors_.resize(_size1);
            uint32_t _i5;
            for (_i5 = 0; _i5 < _size1; ++_i5)
            {
              xfer += iprot->readI64(this->actors_[_i5]);
            }
            xfer += iprot->readListEnd();
          }
          isset_actors_ = true;
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
  if (!isset_actors_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSceneBroadcastCreateRole::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSceneBroadcastCreateRole");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("actors_", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->actors_.size()));
    std::vector<int64_t> ::const_iterator _iter6;
    for (_iter6 = this->actors_.begin(); _iter6 != this->actors_.end(); ++_iter6)
    {
      xfer += oprot->writeI64((*_iter6));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSceneBroadcastCreateRole &a, EventSceneBroadcastCreateRole &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.actors_, b.actors_);
}

const char* SceneRolePair::ascii_fingerprint = "6E7DD25E88B43484CFC93FCB15DCA1AF";
const uint8_t SceneRolePair::binary_fingerprint[16] = {0x6E,0x7D,0xD2,0x5E,0x88,0xB4,0x34,0x84,0xCF,0xC9,0x3F,0xCB,0x15,0xDC,0xA1,0xAF};

uint32_t SceneRolePair::read(::apache::thrift::protocol::TProtocol* iprot) {

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

uint32_t SceneRolePair::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("SceneRolePair");

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

void swap(SceneRolePair &a, SceneRolePair &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
}

const char* EventSceneCreateAoiRoles::ascii_fingerprint = "DDCB5019D2C21D870720D6E9535D85EA";
const uint8_t EventSceneCreateAoiRoles::binary_fingerprint[16] = {0xDD,0xCB,0x50,0x19,0xD2,0xC2,0x1D,0x87,0x07,0x20,0xD6,0xE9,0x53,0x5D,0x85,0xEA};

uint32_t EventSceneCreateAoiRoles::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_roles_ = false;
  bool isset_actor_ = false;

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
            this->roles_.clear();
            uint32_t _size8;
            ::apache::thrift::protocol::TType _etype11;
            xfer += iprot->readListBegin(_etype11, _size8);
            this->roles_.resize(_size8);
            uint32_t _i12;
            for (_i12 = 0; _i12 < _size8; ++_i12)
            {
              xfer += this->roles_[_i12].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_roles_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
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

  if (!isset_roles_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSceneCreateAoiRoles::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSceneCreateAoiRoles");

  xfer += oprot->writeFieldBegin("roles_", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->roles_.size()));
    std::vector<SceneRolePair> ::const_iterator _iter13;
    for (_iter13 = this->roles_.begin(); _iter13 != this->roles_.end(); ++_iter13)
    {
      xfer += (*_iter13).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSceneCreateAoiRoles &a, EventSceneCreateAoiRoles &b) {
  using ::std::swap;
  swap(a.roles_, b.roles_);
  swap(a.actor_, b.actor_);
}

const char* EventSceneRoleComing::ascii_fingerprint = "79B9F4DDD97C8B0F24FC57177DEF0AE2";
const uint8_t EventSceneRoleComing::binary_fingerprint[16] = {0x79,0xB9,0xF4,0xDD,0xD9,0x7C,0x8B,0x0F,0x24,0xFC,0x57,0x17,0x7D,0xEF,0x0A,0xE2};

uint32_t EventSceneRoleComing::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_roles_ = false;

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
          int32_t ecast14;
          xfer += iprot->readI32(ecast14);
          this->type_ = ( ::entity::EntityType::type)ecast14;
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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->roles_.clear();
            uint32_t _size15;
            ::apache::thrift::protocol::TType _etype18;
            xfer += iprot->readListBegin(_etype18, _size15);
            this->roles_.resize(_size15);
            uint32_t _i19;
            for (_i19 = 0; _i19 < _size15; ++_i19)
            {
              xfer += this->roles_[_i19].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_roles_ = true;
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
  if (!isset_roles_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSceneRoleComing::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSceneRoleComing");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("roles_", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->roles_.size()));
    std::vector<SceneRolePair> ::const_iterator _iter20;
    for (_iter20 = this->roles_.begin(); _iter20 != this->roles_.end(); ++_iter20)
    {
      xfer += (*_iter20).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSceneRoleComing &a, EventSceneRoleComing &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.roles_, b.roles_);
}

const char* EventSceneRoleLeaving::ascii_fingerprint = "79B9F4DDD97C8B0F24FC57177DEF0AE2";
const uint8_t EventSceneRoleLeaving::binary_fingerprint[16] = {0x79,0xB9,0xF4,0xDD,0xD9,0x7C,0x8B,0x0F,0x24,0xFC,0x57,0x17,0x7D,0xEF,0x0A,0xE2};

uint32_t EventSceneRoleLeaving::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_roles_ = false;

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
          int32_t ecast21;
          xfer += iprot->readI32(ecast21);
          this->type_ = ( ::entity::EntityType::type)ecast21;
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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->roles_.clear();
            uint32_t _size22;
            ::apache::thrift::protocol::TType _etype25;
            xfer += iprot->readListBegin(_etype25, _size22);
            this->roles_.resize(_size22);
            uint32_t _i26;
            for (_i26 = 0; _i26 < _size22; ++_i26)
            {
              xfer += this->roles_[_i26].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_roles_ = true;
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
  if (!isset_roles_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSceneRoleLeaving::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSceneRoleLeaving");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("roles_", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->roles_.size()));
    std::vector<SceneRolePair> ::const_iterator _iter27;
    for (_iter27 = this->roles_.begin(); _iter27 != this->roles_.end(); ++_iter27)
    {
      xfer += (*_iter27).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSceneRoleLeaving &a, EventSceneRoleLeaving &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.roles_, b.roles_);
}

const char* EventSceneRoleChangeLocation::ascii_fingerprint = "7039E9DA216F6674F49D39AC0E7480DE";
const uint8_t EventSceneRoleChangeLocation::binary_fingerprint[16] = {0x70,0x39,0xE9,0xDA,0x21,0x6F,0x66,0x74,0xF4,0x9D,0x39,0xAC,0x0E,0x74,0x80,0xDE};

uint32_t EventSceneRoleChangeLocation::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_src_scene_ = false;
  bool isset_src_x_ = false;
  bool isset_src_y_ = false;
  bool isset_dest_scene_ = false;
  bool isset_dest_x_ = false;
  bool isset_dest_y_ = false;

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
          int32_t ecast28;
          xfer += iprot->readI32(ecast28);
          this->type_ = ( ::entity::EntityType::type)ecast28;
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
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->src_scene_);
          isset_src_scene_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->src_x_);
          isset_src_x_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->src_y_);
          isset_src_y_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->dest_scene_);
          isset_dest_scene_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->dest_x_);
          isset_dest_x_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->dest_y_);
          isset_dest_y_ = true;
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
  if (!isset_src_scene_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_src_x_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_src_y_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_dest_scene_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_dest_x_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_dest_y_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSceneRoleChangeLocation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSceneRoleChangeLocation");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("src_scene_", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->src_scene_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("src_x_", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->src_x_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("src_y_", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->src_y_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dest_scene_", ::apache::thrift::protocol::T_I64, 6);
  xfer += oprot->writeI64(this->dest_scene_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dest_x_", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->dest_x_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dest_y_", ::apache::thrift::protocol::T_I32, 8);
  xfer += oprot->writeI32(this->dest_y_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSceneRoleChangeLocation &a, EventSceneRoleChangeLocation &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.src_scene_, b.src_scene_);
  swap(a.src_x_, b.src_x_);
  swap(a.src_y_, b.src_y_);
  swap(a.dest_scene_, b.dest_scene_);
  swap(a.dest_x_, b.dest_x_);
  swap(a.dest_y_, b.dest_y_);
}

const char* EventSceneJumpMap::ascii_fingerprint = "8DE584F4CE5BDFCF32B8129BDA46B7DF";
const uint8_t EventSceneJumpMap::binary_fingerprint[16] = {0x8D,0xE5,0x84,0xF4,0xCE,0x5B,0xDF,0xCF,0x32,0xB8,0x12,0x9B,0xDA,0x46,0xB7,0xDF};

uint32_t EventSceneJumpMap::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_src_scene_ = false;
  bool isset_dest_scene_ = false;
  bool isset_dest_x_ = false;
  bool isset_dest_y_ = false;

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
          int32_t ecast29;
          xfer += iprot->readI32(ecast29);
          this->type_ = ( ::entity::EntityType::type)ecast29;
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
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->src_scene_);
          isset_src_scene_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->dest_scene_);
          isset_dest_scene_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->dest_x_);
          isset_dest_x_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->dest_y_);
          isset_dest_y_ = true;
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
  if (!isset_src_scene_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_dest_scene_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_dest_x_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_dest_y_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSceneJumpMap::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSceneJumpMap");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("src_scene_", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->src_scene_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dest_scene_", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->dest_scene_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dest_x_", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->dest_x_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dest_y_", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->dest_y_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSceneJumpMap &a, EventSceneJumpMap &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.src_scene_, b.src_scene_);
  swap(a.dest_scene_, b.dest_scene_);
  swap(a.dest_x_, b.dest_x_);
  swap(a.dest_y_, b.dest_y_);
}

const char* EventSceneGather::ascii_fingerprint = "F33135321253DAEB67B0E79E416CA831";
const uint8_t EventSceneGather::binary_fingerprint[16] = {0xF3,0x31,0x35,0x32,0x12,0x53,0xDA,0xEB,0x67,0xB0,0xE7,0x9E,0x41,0x6C,0xA8,0x31};

uint32_t EventSceneGather::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_npc_template_id_ = false;
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
          xfer += iprot->readI64(this->npc_template_id_);
          isset_npc_template_id_ = true;
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

  if (!isset_npc_template_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSceneGather::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSceneGather");

  xfer += oprot->writeFieldBegin("npc_template_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->npc_template_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSceneGather &a, EventSceneGather &b) {
  using ::std::swap;
  swap(a.npc_template_id_, b.npc_template_id_);
  swap(a.id_, b.id_);
}

}}} // namespace