/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef chat_TYPES_H
#define chat_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace entity {

struct ChatChannelType {
  enum type {
    MIN = 0,
    WORLD = 0,
    SCENE = 1,
    GUILD = 2,
    TEAM = 3,
    WHISPER = 4,
    WORLD_VIP = 5,
    SYSTEM = 6,
    MAX = 7
  };
};

extern const std::map<int, const char*> _ChatChannelType_VALUES_TO_NAMES;

} // namespace

#endif