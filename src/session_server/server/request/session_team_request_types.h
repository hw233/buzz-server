/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef session_team_request_TYPES_H
#define session_team_request_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "session_request_types.h"


namespace session { namespace server { namespace request {


class RequestTeamGetMembers {
 public:

  static const char* ascii_fingerprint; // = "FFDB960728899B83C6E03C13717DBF56";
  static const uint8_t binary_fingerprint[16]; // = {0xFF,0xDB,0x96,0x07,0x28,0x89,0x9B,0x83,0xC6,0xE0,0x3C,0x13,0x71,0x7D,0xBF,0x56};

  RequestTeamGetMembers() : actor_(0), team_(0), captain_(0) {
  }

  virtual ~RequestTeamGetMembers() throw() {}

  int64_t actor_;
  int64_t team_;
  int64_t captain_;
  std::vector<int64_t>  members_;

  void __set_actor_(const int64_t val) {
    actor_ = val;
  }

  void __set_team_(const int64_t val) {
    team_ = val;
  }

  void __set_captain_(const int64_t val) {
    captain_ = val;
  }

  void __set_members_(const std::vector<int64_t> & val) {
    members_ = val;
  }

  bool operator == (const RequestTeamGetMembers & rhs) const
  {
    if (!(actor_ == rhs.actor_))
      return false;
    if (!(team_ == rhs.team_))
      return false;
    if (!(captain_ == rhs.captain_))
      return false;
    if (!(members_ == rhs.members_))
      return false;
    return true;
  }
  bool operator != (const RequestTeamGetMembers &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestTeamGetMembers & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestTeamGetMembers &a, RequestTeamGetMembers &b);


class RequestTeamActorQuit {
 public:

  static const char* ascii_fingerprint; // = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
  static const uint8_t binary_fingerprint[16]; // = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

  RequestTeamActorQuit() : actor_(0) {
  }

  virtual ~RequestTeamActorQuit() throw() {}

  int64_t actor_;

  void __set_actor_(const int64_t val) {
    actor_ = val;
  }

  bool operator == (const RequestTeamActorQuit & rhs) const
  {
    if (!(actor_ == rhs.actor_))
      return false;
    return true;
  }
  bool operator != (const RequestTeamActorQuit &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestTeamActorQuit & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestTeamActorQuit &a, RequestTeamActorQuit &b);


class RequestTeamCreate {
 public:

  static const char* ascii_fingerprint; // = "A0B9FCD0E5AB4E9F7C4184F21F77EA70";
  static const uint8_t binary_fingerprint[16]; // = {0xA0,0xB9,0xFC,0xD0,0xE5,0xAB,0x4E,0x9F,0x7C,0x41,0x84,0xF2,0x1F,0x77,0xEA,0x70};

  RequestTeamCreate() : captain_(0), team_(0) {
  }

  virtual ~RequestTeamCreate() throw() {}

  int64_t captain_;
  std::vector<int64_t>  members_;
  int64_t team_;

  void __set_captain_(const int64_t val) {
    captain_ = val;
  }

  void __set_members_(const std::vector<int64_t> & val) {
    members_ = val;
  }

  void __set_team_(const int64_t val) {
    team_ = val;
  }

  bool operator == (const RequestTeamCreate & rhs) const
  {
    if (!(captain_ == rhs.captain_))
      return false;
    if (!(members_ == rhs.members_))
      return false;
    if (!(team_ == rhs.team_))
      return false;
    return true;
  }
  bool operator != (const RequestTeamCreate &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestTeamCreate & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestTeamCreate &a, RequestTeamCreate &b);

}}} // namespace

#endif
