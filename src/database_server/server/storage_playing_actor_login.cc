//
// Summary: buzz source code.
//
// Author: Tony.
// Email: tonyjobmails@gmail.com.
// Last modify: 2013-09-25 10:03:53.
// File name: storage_playing_actor_login.cc
//
// Description:
// Define class StoragePlayingActorLogin.
//

#include "database_server/server/storage_playing_actor_login.h"

#include <boost/bind.hpp>
#include <mysql++/mysql++.h>

#include "global/logging.h"
#include "database_server/protocol/storage_playing_actor_login_constants.h"
#include "database_server/server/async_request_loop.h"

namespace database {

namespace server {

StoragePlayingActorLogin::StoragePlayingActorLogin() {}
StoragePlayingActorLogin::~StoragePlayingActorLogin() {}

bool StoragePlayingActorLogin::Initialize(AsyncRequestLoop *async_request_loop) {
  if(async_request_loop == NULL) {
    LOG_ERROR("Initialize StoragePlayingActorLogin failed, param invlid.");
    return false;
  }

  this->async_request_loop_ = async_request_loop;

  // Set request handler.
  this->async_request_loop_->SetMessageHandler(protocol::StorageType::STORAGE_PLAYING_ACTOR_LOGIN,
      boost::bind(&StoragePlayingActorLogin::Request, this, _1));

  return true;
}

void StoragePlayingActorLogin::Request(const protocol::AsyncRequestMessage &message) {
  // Get session.
  MysqlSessionPtr session = this->async_request_loop_->GetMysqlSession(message.channel_);
  if (session.get() == NULL) {
    LOG_ERROR("Get mysql session failed.");
    this->ResponseFailed(protocol::ResponseType::ERROR_UNKNOWN, message);
    return;
  }

  // Check connection status.
  if (session->CheckConnectStatus() == false) {
    LOG_ERROR("Mysql session connection error.");
    this->ResponseFailed(protocol::ResponseType::ERROR_UNKNOWN, message);
    return;
  }

  // Reset and get query.
  session->ResetQuery();
  mysqlpp::Query *query = session->GetQuery();
  if (NULL == query) {
    LOG_ERROR("Get mysql query failed");
    this->ResponseFailed(protocol::ResponseType::ERROR_DISCONNECTED, message);
    return;
  }

  // Deserialize.
  protocol::StoragePlayingActorLoginRequest request;
  if(this->async_request_loop_->GetPacket()->Deserialize(request,
        message.message_.data(), message.message_.size()) == false) {
    LOG_ERROR("Deserialize message StoragePlayingActorLoginRequest failed.");
    this->ResponseFailed(protocol::ResponseType::ERROR_UNKNOWN, message);
    return;
  }

  // Execute procedure.
  *query << "CALL " << session->GetProcedure(protocol::StorageType::STORAGE_PLAYING_ACTOR_LOGIN)
    << "(" << request.actor_id_ << ")";

  LOG_DEBUG("Call procedure = [%s]", query->str().c_str());

  const mysqlpp::StoreQueryResult *result = session->Store();
  if (NULL == result) {
    LOG_ERROR("Store query result failed.");
    this->ResponseFailed(protocol::ResponseType::ERROR_UNKNOWN, message);
    return;
  }

  // Check any errors.
  if (query->errnum() > 0) {
    LOG_ERROR("Procedure[%s] execute failed, error=[%s].",
              query->str().c_str(), query->error());
    if (session->PingConnected() == true) {
      LOG_ERROR("Ping mysql is ok, but error=[%s].", query->error());
      this->ResponseFailed(protocol::ResponseType::ERROR_UNKNOWN, message);
      return;
    } else {
      // Disconnect and reconnect.
      session->Disconnect();
      DatabaseServerSingleton::GetInstance().GetAsyncRequestService().Reconnect(session);
      this->ResponseFailed(protocol::ResponseType::ERROR_DISCONNECTED, message);
      return;
    }
  }  

  // Response.
  protocol::StoragePlayingActorLoginResponse response;
  response.__set_result_(protocol::PlayingActorLoginResult::SUCCESS);

  if (result->num_rows() == 0) {
    // default all zeros
  } else if (result->num_rows() >= 1) {
    // set values
    for (size_t pos = 0; pos < protocol::PlayingActorField::MAX; ++pos) {
      int index = result->field_num(protocol::g_storage_playing_actor_login_constants.kPlayingActorFieldStr[pos]); 
      if (-1 == index) {
        LOG_ERROR("Get result [%s] failed.",
                  protocol::g_storage_playing_actor_login_constants.kPlayingActorFieldStr[pos].c_str());
        this->ResponseFailed(protocol::ResponseType::ERROR_UNKNOWN, message);
        return;
      }

      switch (pos) {
        case protocol::PlayingActorField::RECORDS:
          response.field_.__set_records_((*result)[0][pos].data());
          break;
        case protocol::PlayingActorField::RESULTS:
          response.field_.__set_results_((*result)[0][pos].data());
          break;
        case protocol::PlayingActorField::AUTO_PLAYING:
          response.field_.__set_auto_playing_(atoi((*result)[0][pos].data()));
          break;
        case protocol::PlayingActorField::AUTO_PLAYING_GROUP:
          response.field_.__set_auto_playing_group_(atoi((*result)[0][pos].data()));
          break;
        case protocol::PlayingActorField::AUTO_FINISH_TIME:
          response.field_.__set_auto_finish_time_(atol((*result)[0][pos].data()));
          break;
        case protocol::PlayingActorField::MAZE_AP:
          response.field_.__set_maze_ap_(atoi((*result)[0][pos].data()));
          break;
        case protocol::PlayingActorField::MAZE_LAST_AP_RECOVER_TIME:
          response.field_.__set_maze_last_ap_recover_time_(atol((*result)[0][pos].data()));
          break;
        case protocol::PlayingActorField::MAZE_FLOOR:
          response.field_.__set_maze_floor_(atoi((*result)[0][pos].data()));
          break;
        case protocol::PlayingActorField::MAZE_EXPLORED_AREA:
          response.field_.__set_maze_explored_area_((*result)[0][pos].data());
          break;
        case protocol::PlayingActorField::MAZE_RECENT_POSITION:
          response.field_.__set_maze_recent_position_((*result)[0][pos].data());
          break;
        case protocol::PlayingActorField::MAZE_GIFT_NUMBER:
          response.field_.__set_maze_gift_number_(atoi((*result)[0][pos].data()));
          break;
        default:
          break;
      }
    }
  }

  this->OnResponse(response, protocol::ResponseType::SUCCESS, message);
}

void StoragePlayingActorLogin::ResponseFailed(protocol::ResponseType::type result,
    const protocol::AsyncRequestMessage &request) {
  this->OnResponse(protocol::StoragePlayingActorLoginResponse(), result, request);
}

void StoragePlayingActorLogin::OnResponse(const protocol::StoragePlayingActorLoginResponse &response,
    protocol::ResponseType::type result, const protocol::AsyncRequestMessage &request) {
  this->async_request_loop_->SendResponse(response, result, request);
}

}  // namespace server

}  // namespace database

