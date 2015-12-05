/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef game_chat_protocol_TYPES_H
#define game_chat_protocol_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "chat_types.h"
#include "session_game_protocol_types.h"


namespace session { namespace protocol {

typedef struct _MessageChatRequest__isset {
  _MessageChatRequest__isset() : target_name_(false) {}
  bool target_name_;
} _MessageChatRequest__isset;

class MessageChatRequest {
 public:

  static const char* ascii_fingerprint; // = "A78EA985455C10F579EE2F62E554F11A";
  static const uint8_t binary_fingerprint[16]; // = {0xA7,0x8E,0xA9,0x85,0x45,0x5C,0x10,0xF5,0x79,0xEE,0x2F,0x62,0xE5,0x54,0xF1,0x1A};

  MessageChatRequest() : actor_id_(0), channel_(( ::entity::ChatChannelType::type)0), message_(), target_name_() {
  }

  virtual ~MessageChatRequest() throw() {}

  int64_t actor_id_;
   ::entity::ChatChannelType::type channel_;
  std::string message_;
  std::string target_name_;

  _MessageChatRequest__isset __isset;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_channel_(const  ::entity::ChatChannelType::type val) {
    channel_ = val;
  }

  void __set_message_(const std::string& val) {
    message_ = val;
  }

  void __set_target_name_(const std::string& val) {
    target_name_ = val;
    __isset.target_name_ = true;
  }

  bool operator == (const MessageChatRequest & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (!(channel_ == rhs.channel_))
      return false;
    if (!(message_ == rhs.message_))
      return false;
    if (__isset.target_name_ != rhs.__isset.target_name_)
      return false;
    else if (__isset.target_name_ && !(target_name_ == rhs.target_name_))
      return false;
    return true;
  }
  bool operator != (const MessageChatRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageChatRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageChatRequest &a, MessageChatRequest &b);

}} // namespace

#endif
