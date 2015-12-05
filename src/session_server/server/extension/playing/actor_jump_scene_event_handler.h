//
// Summary: buzz source code.
//
// Author: Tony.
// Email: tonyjobmails@gmail.com.
// Last modify: 2014-05-30 00:59:45.
// File name: actor_jump_scene_event_handler.h
//
// Description:
// Define class ActorJumpSceneEventHandler.
//

#ifndef __SESSION__SERVER__PLAYING__ACTOR__JUMP__SCENE__EVENT__HANDLER__H
#define __SESSION__SERVER__PLAYING__ACTOR__JUMP__SCENE__EVENT__HANDLER__H

#include <stddef.h>

#include "core/base/noncopyable.h"
#include "core/base/types.h"
#include "coresh/communicator.h"

namespace session {

namespace server {

namespace playing {

class ActorJumpSceneEventHandler : public core::Noncopyable {
 public:
  ActorJumpSceneEventHandler();
  ~ActorJumpSceneEventHandler();

  bool Initialize();
  void Finalize();

 private:
  void OnEvent(core::uint64 channel, core::uint8 channel_type,
      const void *message, size_t size);

  coresh::Communicator::Connection connection_;
};

}  // namespace playing

}  // namespace server

}  // namespace session

#endif  // __SESSION__SERVER__PLAYING__ACTOR__JUMP__SCENE__EVENT__HANDLER__H

