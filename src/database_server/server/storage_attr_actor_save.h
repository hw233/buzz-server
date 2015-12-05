#ifndef __DATABASE__SERVER__STORAGE__ATTR__ACTOR__SAVE__H
#define __DATABASE__SERVER__STORAGE__ATTR__ACTOR__SAVE__H

#include "core/base/noncopyable.h"
#include "database_server/protocol/async_request_types.h"
#include "database_server/protocol/database_protocol_types.h"
#include "database_server/protocol/storage_attr_actor_save_types.h"

namespace database {

namespace server {

class AsyncRequestLoop;

class StorageAttrActorSave : public core::Noncopyable {
 public:
  StorageAttrActorSave();
  ~StorageAttrActorSave();

  bool Initialize(AsyncRequestLoop *async_request_loop);

 private:
  void Request(const protocol::AsyncRequestMessage &message);

  void ResponseFailed(protocol::ResponseType::type result, 
      const protocol::AsyncRequestMessage &request);

  void OnResponse(const protocol::StorageAttrActorSaveResponse &response,
      protocol::ResponseType::type result, const protocol::AsyncRequestMessage &request);

  AsyncRequestLoop *async_request_loop_;
};

}  // namespace server

}  // namespace database

#endif  // __DATABASE__SERVER__STORAGE__ATTR__ACTOR__SAVE__H

