#
# Autogenerated by Thrift Compiler (0.9.0)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TException, TApplicationException

from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol, TProtocol
try:
  from thrift.protocol import fastbinary
except:
  fastbinary = None


class TaskCondition:
  MIN = 0
  KILL_MOB = 1
  kill_COLLECT = 2
  PICK = 3
  TALK = 4
  USE_ITEM = 5
  COLLECT_ITEM = 6
  WAITE_TIME = 7
  EQUIP_STRENGHT = 8
  EQUIP_REFINE = 9
  DIVINE_GEM = 10
  SPIRIT_FEED = 11
  EQUIP_INLAY = 12
  SOUL_FEED = 13
  EQUIP_SOUL = 14
  ROLE_LV = 15
  PASS_PLAYING = 16
  PROTECT_TASK = 17
  ANSWER_TASK = 18
  SPORTS_TASK_1 = 19
  SPORTS_TASK_2 = 20
  SOUL_APPEAR = 21
  EQUIPMENT = 22
  CONSTELLATION_UP = 23
  SUMMON_NPC = 24
  GET_RESOURCE = 25
  SPEND_RESOURCE = 26
  ROB = 27
  WATERING = 28
  KILL_ACTOR = 29
  KILL_MOB_LEVEL = 30
  KILL_MOB_TYPE = 31
  FINISH_TASK_TYPE = 32
  GET_VIP_PRIVILEGE = 33
  TRANSPORT = 34
  MAX = 35

  _VALUES_TO_NAMES = {
    0: "MIN",
    1: "KILL_MOB",
    2: "kill_COLLECT",
    3: "PICK",
    4: "TALK",
    5: "USE_ITEM",
    6: "COLLECT_ITEM",
    7: "WAITE_TIME",
    8: "EQUIP_STRENGHT",
    9: "EQUIP_REFINE",
    10: "DIVINE_GEM",
    11: "SPIRIT_FEED",
    12: "EQUIP_INLAY",
    13: "SOUL_FEED",
    14: "EQUIP_SOUL",
    15: "ROLE_LV",
    16: "PASS_PLAYING",
    17: "PROTECT_TASK",
    18: "ANSWER_TASK",
    19: "SPORTS_TASK_1",
    20: "SPORTS_TASK_2",
    21: "SOUL_APPEAR",
    22: "EQUIPMENT",
    23: "CONSTELLATION_UP",
    24: "SUMMON_NPC",
    25: "GET_RESOURCE",
    26: "SPEND_RESOURCE",
    27: "ROB",
    28: "WATERING",
    29: "KILL_ACTOR",
    30: "KILL_MOB_LEVEL",
    31: "KILL_MOB_TYPE",
    32: "FINISH_TASK_TYPE",
    33: "GET_VIP_PRIVILEGE",
    34: "TRANSPORT",
    35: "MAX",
  }

  _NAMES_TO_VALUES = {
    "MIN": 0,
    "KILL_MOB": 1,
    "kill_COLLECT": 2,
    "PICK": 3,
    "TALK": 4,
    "USE_ITEM": 5,
    "COLLECT_ITEM": 6,
    "WAITE_TIME": 7,
    "EQUIP_STRENGHT": 8,
    "EQUIP_REFINE": 9,
    "DIVINE_GEM": 10,
    "SPIRIT_FEED": 11,
    "EQUIP_INLAY": 12,
    "SOUL_FEED": 13,
    "EQUIP_SOUL": 14,
    "ROLE_LV": 15,
    "PASS_PLAYING": 16,
    "PROTECT_TASK": 17,
    "ANSWER_TASK": 18,
    "SPORTS_TASK_1": 19,
    "SPORTS_TASK_2": 20,
    "SOUL_APPEAR": 21,
    "EQUIPMENT": 22,
    "CONSTELLATION_UP": 23,
    "SUMMON_NPC": 24,
    "GET_RESOURCE": 25,
    "SPEND_RESOURCE": 26,
    "ROB": 27,
    "WATERING": 28,
    "KILL_ACTOR": 29,
    "KILL_MOB_LEVEL": 30,
    "KILL_MOB_TYPE": 31,
    "FINISH_TASK_TYPE": 32,
    "GET_VIP_PRIVILEGE": 33,
    "TRANSPORT": 34,
    "MAX": 35,
  }

class TaskCircleRefulshType:
  INVALID = 0
  REFULSH_ROUND = 1
  REFULSH_TASK_CONDITION = 2
  REFULSH_CIRCLE = 3
  REQUEST_FINISH_ROUND = 4
  REQUEST_FINISH_CIRCLE = 5
  REQUEST_OPEN_ROUND = 6

  _VALUES_TO_NAMES = {
    0: "INVALID",
    1: "REFULSH_ROUND",
    2: "REFULSH_TASK_CONDITION",
    3: "REFULSH_CIRCLE",
    4: "REQUEST_FINISH_ROUND",
    5: "REQUEST_FINISH_CIRCLE",
    6: "REQUEST_OPEN_ROUND",
  }

  _NAMES_TO_VALUES = {
    "INVALID": 0,
    "REFULSH_ROUND": 1,
    "REFULSH_TASK_CONDITION": 2,
    "REFULSH_CIRCLE": 3,
    "REQUEST_FINISH_ROUND": 4,
    "REQUEST_FINISH_CIRCLE": 5,
    "REQUEST_OPEN_ROUND": 6,
  }

class TaskType:
  INVALID = 0
  TASK_MAIN = 1
  TASK_CIRCLE = 2
  TASK_RISK = 3
  TASK_TRIP = 4
  TASK_DAILY = 5
  TASK_TRANSPORT = 6

  _VALUES_TO_NAMES = {
    0: "INVALID",
    1: "TASK_MAIN",
    2: "TASK_CIRCLE",
    3: "TASK_RISK",
    4: "TASK_TRIP",
    5: "TASK_DAILY",
    6: "TASK_TRANSPORT",
  }

  _NAMES_TO_VALUES = {
    "INVALID": 0,
    "TASK_MAIN": 1,
    "TASK_CIRCLE": 2,
    "TASK_RISK": 3,
    "TASK_TRIP": 4,
    "TASK_DAILY": 5,
    "TASK_TRANSPORT": 6,
  }

class TaskCircleRoundState:
  INVALID = 0
  ACTIVE = 1
  FINISH = 2
  PICKED_AWARD = 3

  _VALUES_TO_NAMES = {
    0: "INVALID",
    1: "ACTIVE",
    2: "FINISH",
    3: "PICKED_AWARD",
  }

  _NAMES_TO_VALUES = {
    "INVALID": 0,
    "ACTIVE": 1,
    "FINISH": 2,
    "PICKED_AWARD": 3,
  }

class TaskTripOptType:
  INVALID = 0
  REQUEST_FINISH = 1
  REQUEST_GIVE_UP = 2
  SPENT_FINISH = 3

  _VALUES_TO_NAMES = {
    0: "INVALID",
    1: "REQUEST_FINISH",
    2: "REQUEST_GIVE_UP",
    3: "SPENT_FINISH",
  }

  _NAMES_TO_VALUES = {
    "INVALID": 0,
    "REQUEST_FINISH": 1,
    "REQUEST_GIVE_UP": 2,
    "SPENT_FINISH": 3,
  }

class RobTaskType:
  SUCCESS = 0
  SUCCESS_AND_FAILED = 1

  _VALUES_TO_NAMES = {
    0: "SUCCESS",
    1: "SUCCESS_AND_FAILED",
  }

  _NAMES_TO_VALUES = {
    "SUCCESS": 0,
    "SUCCESS_AND_FAILED": 1,
  }

class WateringTaskType:
  SELF = 0
  OTHER = 1
  SELF_AND_OTHER = 2

  _VALUES_TO_NAMES = {
    0: "SELF",
    1: "OTHER",
    2: "SELF_AND_OTHER",
  }

  _NAMES_TO_VALUES = {
    "SELF": 0,
    "OTHER": 1,
    "SELF_AND_OTHER": 2,
  }

class TaskTransportStatus:
  MIN = 0
  IDOL = 1
  TRANSPORT = 2
  FAILURE = 3
  MAX = 4

  _VALUES_TO_NAMES = {
    0: "MIN",
    1: "IDOL",
    2: "TRANSPORT",
    3: "FAILURE",
    4: "MAX",
  }

  _NAMES_TO_VALUES = {
    "MIN": 0,
    "IDOL": 1,
    "TRANSPORT": 2,
    "FAILURE": 3,
    "MAX": 4,
  }
