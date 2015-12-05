/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "homeland_types.h"

#include <algorithm>

namespace entity {

int _kHomelandTreeStageTypeValues[] = {
  HomelandTreeStageType::MIN,
  HomelandTreeStageType::WATERING,
  HomelandTreeStageType::GROWING,
  HomelandTreeStageType::HARVEST,
  HomelandTreeStageType::MAX
};
const char* _kHomelandTreeStageTypeNames[] = {
  "MIN",
  "WATERING",
  "GROWING",
  "HARVEST",
  "MAX"
};
const std::map<int, const char*> _HomelandTreeStageType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kHomelandTreeStageTypeValues, _kHomelandTreeStageTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kHomelandEventTypeValues[] = {
  HomelandEventType::MIN,
  HomelandEventType::HOMELAND_VISIT,
  HomelandEventType::CHURCH_PRAY,
  HomelandEventType::TREE_ASSIST_WATER,
  HomelandEventType::TREE_ASSIST_WATERED,
  HomelandEventType::TREE_STEAL,
  HomelandEventType::TREE_STOLEN,
  HomelandEventType::STRONGHOLD_SUPPORT,
  HomelandEventType::STRONGHOLD_SUPPORTED,
  HomelandEventType::BATTLE_DEFENCE_SUCCESS,
  HomelandEventType::BATTLE_DEFENCE_FAILED,
  HomelandEventType::BATTLE_ATTACK_SUCCESS,
  HomelandEventType::BATTLE_ATTACK_FAILED,
  HomelandEventType::MAX
};
const char* _kHomelandEventTypeNames[] = {
  "MIN",
  "HOMELAND_VISIT",
  "CHURCH_PRAY",
  "TREE_ASSIST_WATER",
  "TREE_ASSIST_WATERED",
  "TREE_STEAL",
  "TREE_STOLEN",
  "STRONGHOLD_SUPPORT",
  "STRONGHOLD_SUPPORTED",
  "BATTLE_DEFENCE_SUCCESS",
  "BATTLE_DEFENCE_FAILED",
  "BATTLE_ATTACK_SUCCESS",
  "BATTLE_ATTACK_FAILED",
  "MAX"
};
const std::map<int, const char*> _HomelandEventType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(14, _kHomelandEventTypeValues, _kHomelandEventTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kHomelandBattleSideTypeValues[] = {
  HomelandBattleSideType::MIN,
  HomelandBattleSideType::ATTACK,
  HomelandBattleSideType::DEFENCE,
  HomelandBattleSideType::MAX
};
const char* _kHomelandBattleSideTypeNames[] = {
  "MIN",
  "ATTACK",
  "DEFENCE",
  "MAX"
};
const std::map<int, const char*> _HomelandBattleSideType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kHomelandBattleSideTypeValues, _kHomelandBattleSideTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kHomelandBattleUnitTypeValues[] = {
  HomelandBattleUnitType::MIN,
  HomelandBattleUnitType::SOUL,
  HomelandBattleUnitType::ACTOR,
  HomelandBattleUnitType::TOWER,
  HomelandBattleUnitType::MAX
};
const char* _kHomelandBattleUnitTypeNames[] = {
  "MIN",
  "SOUL",
  "ACTOR",
  "TOWER",
  "MAX"
};
const std::map<int, const char*> _HomelandBattleUnitType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kHomelandBattleUnitTypeValues, _kHomelandBattleUnitTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kHomelandBattleActionTypeValues[] = {
  HomelandBattleActionType::MIN,
  HomelandBattleActionType::ATTACK,
  HomelandBattleActionType::SPECIAL_SKILL_AXE,
  HomelandBattleActionType::SPECIAL_SKILL_SHOOT,
  HomelandBattleActionType::SPECIAL_SKILL_MAGIC,
  HomelandBattleActionType::AOE_ACTOR,
  HomelandBattleActionType::AOE_TOWER,
  HomelandBattleActionType::MAX
};
const char* _kHomelandBattleActionTypeNames[] = {
  "MIN",
  "ATTACK",
  "SPECIAL_SKILL_AXE",
  "SPECIAL_SKILL_SHOOT",
  "SPECIAL_SKILL_MAGIC",
  "AOE_ACTOR",
  "AOE_TOWER",
  "MAX"
};
const std::map<int, const char*> _HomelandBattleActionType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(8, _kHomelandBattleActionTypeValues, _kHomelandBattleActionTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kHomelandBattleStateChangeTypeValues[] = {
  HomelandBattleStateChangeType::MIN,
  HomelandBattleStateChangeType::HURT,
  HomelandBattleStateChangeType::DODGE,
  HomelandBattleStateChangeType::CRIT,
  HomelandBattleStateChangeType::DEAD,
  HomelandBattleStateChangeType::MAX
};
const char* _kHomelandBattleStateChangeTypeNames[] = {
  "MIN",
  "HURT",
  "DODGE",
  "CRIT",
  "DEAD",
  "MAX"
};
const std::map<int, const char*> _HomelandBattleStateChangeType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(6, _kHomelandBattleStateChangeTypeValues, _kHomelandBattleStateChangeTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kHomelandBattleResultTypeValues[] = {
  HomelandBattleResultType::MIN,
  HomelandBattleResultType::LOSE,
  HomelandBattleResultType::TINY_WIN,
  HomelandBattleResultType::GREAT_WIN,
  HomelandBattleResultType::PERFECT_WIN,
  HomelandBattleResultType::MAX
};
const char* _kHomelandBattleResultTypeNames[] = {
  "MIN",
  "LOSE",
  "TINY_WIN",
  "GREAT_WIN",
  "PERFECT_WIN",
  "MAX"
};
const std::map<int, const char*> _HomelandBattleResultType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(6, _kHomelandBattleResultTypeValues, _kHomelandBattleResultTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

} // namespace
