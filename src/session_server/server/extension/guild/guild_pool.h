#ifndef __SESSION__SERVER__GUILD__GUILD__POOL__H
#define __SESSION__SERVER__GUILD__GUILD__POOL__H

#include "global/pool_template.h"
#include "global/singleton_factory.h"
#include "session_server/server/extension/guild/guild.h"

namespace session {

namespace server {

namespace guild {

class GuildPool : public global::SingletonFactory<GuildPool> {
  friend class global::SingletonFactory<GuildPool>;

 public:
  bool Initialize(size_t initial_number, size_t extend_number);
  void Finalize();

  Guild *Allocate();
  void Deallocate(Guild *guild);

 private:
  GuildPool() {}
  ~GuildPool() {}

  global::PoolTemplate<Guild> guilds_;
};

}  // namespace guild

}  // namespace server

}  // namespace session

#endif  // __SESSION__SERVER__GUILD__GUILD__POOL__H

