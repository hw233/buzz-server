#
# Autogenerated by Thrift Compiler (0.9.0)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TException, TApplicationException
import ccevent.ttypes


from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol, TProtocol
try:
  from thrift.protocol import fastbinary
except:
  fastbinary = None



class EventNpcCreate:
  """
  Attributes:
   - id_
   - reborn_
   - reborn_secs_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'id_', None, None, ), # 1
    (2, TType.BOOL, 'reborn_', None, None, ), # 2
    (3, TType.I32, 'reborn_secs_', None, None, ), # 3
  )

  def __init__(self, id_=None, reborn_=None, reborn_secs_=None,):
    self.id_ = id_
    self.reborn_ = reborn_
    self.reborn_secs_ = reborn_secs_

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.I64:
          self.id_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.BOOL:
          self.reborn_ = iprot.readBool();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.I32:
          self.reborn_secs_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('EventNpcCreate')
    if self.id_ is not None:
      oprot.writeFieldBegin('id_', TType.I64, 1)
      oprot.writeI64(self.id_)
      oprot.writeFieldEnd()
    if self.reborn_ is not None:
      oprot.writeFieldBegin('reborn_', TType.BOOL, 2)
      oprot.writeBool(self.reborn_)
      oprot.writeFieldEnd()
    if self.reborn_secs_ is not None:
      oprot.writeFieldBegin('reborn_secs_', TType.I32, 3)
      oprot.writeI32(self.reborn_secs_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.id_ is None:
      raise TProtocol.TProtocolException(message='Required field id_ is unset!')
    if self.reborn_ is None:
      raise TProtocol.TProtocolException(message='Required field reborn_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventNpcDestory:
  """
  Attributes:
   - id_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'id_', None, None, ), # 1
  )

  def __init__(self, id_=None,):
    self.id_ = id_

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.I64:
          self.id_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('EventNpcDestory')
    if self.id_ is not None:
      oprot.writeFieldBegin('id_', TType.I64, 1)
      oprot.writeI64(self.id_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.id_ is None:
      raise TProtocol.TProtocolException(message='Required field id_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)