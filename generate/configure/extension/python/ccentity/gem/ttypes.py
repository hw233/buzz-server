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


class GemLocationType:
  MIN = 0
  GEM_STORAGE = 0
  GEM_EQUIP = 1
  MAX = 2

  _VALUES_TO_NAMES = {
    0: "MIN",
    0: "GEM_STORAGE",
    1: "GEM_EQUIP",
    2: "MAX",
  }

  _NAMES_TO_VALUES = {
    "MIN": 0,
    "GEM_STORAGE": 0,
    "GEM_EQUIP": 1,
    "MAX": 2,
  }

