//
// Summary: buzz source code.
//
// Author: LuXuefeng.
// Email: lxf@gmail.com.
// Last modify: 2013-10-10 18:54:44.
// File name: strength_equip_condition.h
//
// Description:
//
#ifndef __GAME__SERVER__TASK__STRENGTH_EQUIP__CONDITION__H
#define __GAME__SERVER__TASK__STRENGTH_EQUIP__CONDITION__H

#include "core/base/types.h"
#include "game_server/server/event/game_event_types.h"
#include "game_server/server/extension/task/condition.h"

namespace game {

namespace server {

namespace task {

class StrengthEquipCondition : public Condition {
 public:
  StrengthEquipCondition();
  virtual ~StrengthEquipCondition();

  virtual bool Initialize(Task *task, core::uint32 param1, core::uint32 param2,
      core::uint32 value = 0);
  virtual void Finalize();

  virtual bool ExportConditionVar(core::uint32 &var, core::uint32 &value);

  virtual entity::TaskCondition::type GetType() const {
    return entity::TaskCondition::EQUIP_STRENGHT;
  }

  virtual bool CheckCondition();
  virtual void Synchronize();

  virtual void OnEvent(event::EventType::type type,
      const void *data, size_t size);

 private:
  void OnEventStrengthEquip(const void *data, size_t size);
 
  // 道具ID
  core::int32 template_id_;
  // 需要数目
  core::int32 require_num_;
  // 当前数目
  core::uint32 count_;
};

}  // namespace task

}  // namespace server

}  // namespace game

#endif  // __GAME__SERVER__TASK__STRENGTH_EQUIP__CONDITION__H

