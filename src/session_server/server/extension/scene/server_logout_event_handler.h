//
// Summary: buzz source code.
//
// Author: Tony.
// Email: tonyjobmails@gmail.com.
// Last modify: 2013-07-29 17:36:43.
// File name: server_logout_event_handler.h
//
// Description:
// Define class ServerLogoutEventHandler.
//

#ifndef __SESSION__SERVER__SCENE__SERVER__LOGOUT__EVENT__HANDLER__H
#define __SESSION__SERVER__SCENE__SERVER__LOGOUT__EVENT__HANDLER__H

#include <stddef.h>

#include "core/base/noncopyable.h"
#include "core/base/types.h"
#include "coresh/communicator.h"

namespace session {

namespace server {

namespace scene {

class ServerLogoutEventHandler : public core::Noncopyable {
 public:
  ServerLogoutEventHandler();
  ~ServerLogoutEventHandler();

  bool Initialize();
  void Finalize();

 private:
  void OnEvent(core::uint64 channel, core::uint8 channel_type,
      const void *message, size_t size);

  coresh::Communicator::Connection connection_;
};

}  // namespace scene

}  // namespace server

}  // namespace session

#endif  // __SESSION__SERVER__SCENE__SERVER__LOGOUT__EVENT__HANDLER__H

