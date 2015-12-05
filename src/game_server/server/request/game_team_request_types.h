/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef game_team_request_TYPES_H
#define game_team_request_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "game_request_types.h"


namespace game { namespace server { namespace request {


class RequestTeamGetActorTeam {
 public:

  static const char* ascii_fingerprint; // = "F33135321253DAEB67B0E79E416CA831";
  static const uint8_t binary_fingerprint[16]; // = {0xF3,0x31,0x35,0x32,0x12,0x53,0xDA,0xEB,0x67,0xB0,0xE7,0x9E,0x41,0x6C,0xA8,0x31};

  RequestTeamGetActorTeam() : actor_id_(0), team_id_(0) {
  }

  virtual ~RequestTeamGetActorTeam() throw() {}

  int64_t actor_id_;
  int64_t team_id_;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_team_id_(const int64_t val) {
    team_id_ = val;
  }

  bool operator == (const RequestTeamGetActorTeam & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (!(team_id_ == rhs.team_id_))
      return false;
    return true;
  }
  bool operator != (const RequestTeamGetActorTeam &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestTeamGetActorTeam & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestTeamGetActorTeam &a, RequestTeamGetActorTeam &b);

}}} // namespace

#endif
