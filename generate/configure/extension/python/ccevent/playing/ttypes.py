#
# Autogenerated by Thrift Compiler (0.9.0)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TException, TApplicationException
import ccevent.ttypes
import ccentity.playing.ttypes


from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol, TProtocol
try:
  from thrift.protocol import fastbinary
except:
  fastbinary = None



class EventPlayingCreate:
  """
  Attributes:
   - playing_
   - template_
   - scene_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'playing_', None, None, ), # 1
    (2, TType.I32, 'template_', None, None, ), # 2
    (3, TType.I64, 'scene_', None, None, ), # 3
  )

  def __init__(self, playing_=None, template_=None, scene_=None,):
    self.playing_ = playing_
    self.template_ = template_
    self.scene_ = scene_

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
          self.playing_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.I64:
          self.scene_ = iprot.readI64();
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
    oprot.writeStructBegin('EventPlayingCreate')
    if self.playing_ is not None:
      oprot.writeFieldBegin('playing_', TType.I64, 1)
      oprot.writeI64(self.playing_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 2)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    if self.scene_ is not None:
      oprot.writeFieldBegin('scene_', TType.I64, 3)
      oprot.writeI64(self.scene_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.playing_ is None:
      raise TProtocol.TProtocolException(message='Required field playing_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    if self.scene_ is None:
      raise TProtocol.TProtocolException(message='Required field scene_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventPlayingDestory:
  """
  Attributes:
   - playing_
   - template_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'playing_', None, None, ), # 1
    (2, TType.I32, 'template_', None, None, ), # 2
  )

  def __init__(self, playing_=None, template_=None,):
    self.playing_ = playing_
    self.template_ = template_

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
          self.playing_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
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
    oprot.writeStructBegin('EventPlayingDestory')
    if self.playing_ is not None:
      oprot.writeFieldBegin('playing_', TType.I64, 1)
      oprot.writeI64(self.playing_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 2)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.playing_ is None:
      raise TProtocol.TProtocolException(message='Required field playing_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventPlayingActorEnter:
  """
  Attributes:
   - actor_
   - playing_
   - template_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'actor_', None, None, ), # 1
    (2, TType.I64, 'playing_', None, None, ), # 2
    (3, TType.I32, 'template_', None, None, ), # 3
  )

  def __init__(self, actor_=None, playing_=None, template_=None,):
    self.actor_ = actor_
    self.playing_ = playing_
    self.template_ = template_

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
          self.actor_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.playing_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
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
    oprot.writeStructBegin('EventPlayingActorEnter')
    if self.actor_ is not None:
      oprot.writeFieldBegin('actor_', TType.I64, 1)
      oprot.writeI64(self.actor_)
      oprot.writeFieldEnd()
    if self.playing_ is not None:
      oprot.writeFieldBegin('playing_', TType.I64, 2)
      oprot.writeI64(self.playing_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 3)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.actor_ is None:
      raise TProtocol.TProtocolException(message='Required field actor_ is unset!')
    if self.playing_ is None:
      raise TProtocol.TProtocolException(message='Required field playing_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventPlayingActorLeave:
  """
  Attributes:
   - actor_
   - playing_
   - template_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'actor_', None, None, ), # 1
    (2, TType.I64, 'playing_', None, None, ), # 2
    (3, TType.I32, 'template_', None, None, ), # 3
  )

  def __init__(self, actor_=None, playing_=None, template_=None,):
    self.actor_ = actor_
    self.playing_ = playing_
    self.template_ = template_

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
          self.actor_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.playing_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
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
    oprot.writeStructBegin('EventPlayingActorLeave')
    if self.actor_ is not None:
      oprot.writeFieldBegin('actor_', TType.I64, 1)
      oprot.writeI64(self.actor_)
      oprot.writeFieldEnd()
    if self.playing_ is not None:
      oprot.writeFieldBegin('playing_', TType.I64, 2)
      oprot.writeI64(self.playing_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 3)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.actor_ is None:
      raise TProtocol.TProtocolException(message='Required field actor_ is unset!')
    if self.playing_ is None:
      raise TProtocol.TProtocolException(message='Required field playing_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventPlayingActorRequestFinish:
  """
  Attributes:
   - actor_
   - playing_
   - template_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'actor_', None, None, ), # 1
    (2, TType.I64, 'playing_', None, None, ), # 2
    (3, TType.I32, 'template_', None, None, ), # 3
  )

  def __init__(self, actor_=None, playing_=None, template_=None,):
    self.actor_ = actor_
    self.playing_ = playing_
    self.template_ = template_

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
          self.actor_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.playing_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
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
    oprot.writeStructBegin('EventPlayingActorRequestFinish')
    if self.actor_ is not None:
      oprot.writeFieldBegin('actor_', TType.I64, 1)
      oprot.writeI64(self.actor_)
      oprot.writeFieldEnd()
    if self.playing_ is not None:
      oprot.writeFieldBegin('playing_', TType.I64, 2)
      oprot.writeI64(self.playing_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 3)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.actor_ is None:
      raise TProtocol.TProtocolException(message='Required field actor_ is unset!')
    if self.playing_ is None:
      raise TProtocol.TProtocolException(message='Required field playing_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventPlayingActorRequestComplete:
  """
  Attributes:
   - actor_
   - playing_
   - template_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'actor_', None, None, ), # 1
    (2, TType.I64, 'playing_', None, None, ), # 2
    (3, TType.I32, 'template_', None, None, ), # 3
  )

  def __init__(self, actor_=None, playing_=None, template_=None,):
    self.actor_ = actor_
    self.playing_ = playing_
    self.template_ = template_

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
          self.actor_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.playing_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
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
    oprot.writeStructBegin('EventPlayingActorRequestComplete')
    if self.actor_ is not None:
      oprot.writeFieldBegin('actor_', TType.I64, 1)
      oprot.writeI64(self.actor_)
      oprot.writeFieldEnd()
    if self.playing_ is not None:
      oprot.writeFieldBegin('playing_', TType.I64, 2)
      oprot.writeI64(self.playing_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 3)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.actor_ is None:
      raise TProtocol.TProtocolException(message='Required field actor_ is unset!')
    if self.playing_ is None:
      raise TProtocol.TProtocolException(message='Required field playing_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventPlayingRequestUpdateRecord:
  """
  Attributes:
   - actor_
   - template_
   - result_
   - record_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'actor_', None, None, ), # 1
    (2, TType.I32, 'template_', None, None, ), # 2
    (3, TType.STRUCT, 'result_', (ccentity.playing.ttypes.PlayingResultField, ccentity.playing.ttypes.PlayingResultField.thrift_spec), None, ), # 3
    (4, TType.STRUCT, 'record_', (ccentity.playing.ttypes.PlayingRecordField, ccentity.playing.ttypes.PlayingRecordField.thrift_spec), None, ), # 4
  )

  def __init__(self, actor_=None, template_=None, result_=None, record_=None,):
    self.actor_ = actor_
    self.template_ = template_
    self.result_ = result_
    self.record_ = record_

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
          self.actor_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.STRUCT:
          self.result_ = ccentity.playing.ttypes.PlayingResultField()
          self.result_.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.STRUCT:
          self.record_ = ccentity.playing.ttypes.PlayingRecordField()
          self.record_.read(iprot)
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
    oprot.writeStructBegin('EventPlayingRequestUpdateRecord')
    if self.actor_ is not None:
      oprot.writeFieldBegin('actor_', TType.I64, 1)
      oprot.writeI64(self.actor_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 2)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    if self.result_ is not None:
      oprot.writeFieldBegin('result_', TType.STRUCT, 3)
      self.result_.write(oprot)
      oprot.writeFieldEnd()
    if self.record_ is not None:
      oprot.writeFieldBegin('record_', TType.STRUCT, 4)
      self.record_.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.actor_ is None:
      raise TProtocol.TProtocolException(message='Required field actor_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    if self.result_ is None:
      raise TProtocol.TProtocolException(message='Required field result_ is unset!')
    if self.record_ is None:
      raise TProtocol.TProtocolException(message='Required field record_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventPlayingRequestAutoFinish:
  """
  Attributes:
   - actor_
   - template_
   - record_
   - result_
   - finish_count_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'actor_', None, None, ), # 1
    (2, TType.I32, 'template_', None, None, ), # 2
    (3, TType.STRUCT, 'record_', (ccentity.playing.ttypes.PlayingRecordField, ccentity.playing.ttypes.PlayingRecordField.thrift_spec), None, ), # 3
    (4, TType.STRUCT, 'result_', (ccentity.playing.ttypes.PlayingResultField, ccentity.playing.ttypes.PlayingResultField.thrift_spec), None, ), # 4
    (5, TType.I32, 'finish_count_', None, None, ), # 5
  )

  def __init__(self, actor_=None, template_=None, record_=None, result_=None, finish_count_=None,):
    self.actor_ = actor_
    self.template_ = template_
    self.record_ = record_
    self.result_ = result_
    self.finish_count_ = finish_count_

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
          self.actor_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.STRUCT:
          self.record_ = ccentity.playing.ttypes.PlayingRecordField()
          self.record_.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.STRUCT:
          self.result_ = ccentity.playing.ttypes.PlayingResultField()
          self.result_.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 5:
        if ftype == TType.I32:
          self.finish_count_ = iprot.readI32();
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
    oprot.writeStructBegin('EventPlayingRequestAutoFinish')
    if self.actor_ is not None:
      oprot.writeFieldBegin('actor_', TType.I64, 1)
      oprot.writeI64(self.actor_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 2)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    if self.record_ is not None:
      oprot.writeFieldBegin('record_', TType.STRUCT, 3)
      self.record_.write(oprot)
      oprot.writeFieldEnd()
    if self.result_ is not None:
      oprot.writeFieldBegin('result_', TType.STRUCT, 4)
      self.result_.write(oprot)
      oprot.writeFieldEnd()
    if self.finish_count_ is not None:
      oprot.writeFieldBegin('finish_count_', TType.I32, 5)
      oprot.writeI32(self.finish_count_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.actor_ is None:
      raise TProtocol.TProtocolException(message='Required field actor_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    if self.record_ is None:
      raise TProtocol.TProtocolException(message='Required field record_ is unset!')
    if self.result_ is None:
      raise TProtocol.TProtocolException(message='Required field result_ is unset!')
    if self.finish_count_ is None:
      raise TProtocol.TProtocolException(message='Required field finish_count_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventPlayingRequestAddAward:
  """
  Attributes:
   - actor_
   - template_
   - score_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'actor_', None, None, ), # 1
    (2, TType.I32, 'template_', None, None, ), # 2
    (3, TType.I32, 'score_', None, None, ), # 3
  )

  def __init__(self, actor_=None, template_=None, score_=None,):
    self.actor_ = actor_
    self.template_ = template_
    self.score_ = score_

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
          self.actor_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.I32:
          self.score_ = iprot.readI32();
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
    oprot.writeStructBegin('EventPlayingRequestAddAward')
    if self.actor_ is not None:
      oprot.writeFieldBegin('actor_', TType.I64, 1)
      oprot.writeI64(self.actor_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 2)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    if self.score_ is not None:
      oprot.writeFieldBegin('score_', TType.I32, 3)
      oprot.writeI32(self.score_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.actor_ is None:
      raise TProtocol.TProtocolException(message='Required field actor_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    if self.score_ is None:
      raise TProtocol.TProtocolException(message='Required field score_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventPlayingActorFinish:
  """
  Attributes:
   - actor_
   - template_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'actor_', None, None, ), # 1
    (2, TType.I32, 'template_', None, None, ), # 2
  )

  def __init__(self, actor_=None, template_=None,):
    self.actor_ = actor_
    self.template_ = template_

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
          self.actor_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
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
    oprot.writeStructBegin('EventPlayingActorFinish')
    if self.actor_ is not None:
      oprot.writeFieldBegin('actor_', TType.I64, 1)
      oprot.writeI64(self.actor_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 2)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.actor_ is None:
      raise TProtocol.TProtocolException(message='Required field actor_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventPlayingActorRequestAward:
  """
  Attributes:
   - actor_
   - template_
   - result_
   - record_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'actor_', None, None, ), # 1
    (2, TType.I32, 'template_', None, None, ), # 2
    (3, TType.STRUCT, 'result_', (ccentity.playing.ttypes.PlayingResultField, ccentity.playing.ttypes.PlayingResultField.thrift_spec), None, ), # 3
    (4, TType.STRUCT, 'record_', (ccentity.playing.ttypes.PlayingRecordField, ccentity.playing.ttypes.PlayingRecordField.thrift_spec), None, ), # 4
  )

  def __init__(self, actor_=None, template_=None, result_=None, record_=None,):
    self.actor_ = actor_
    self.template_ = template_
    self.result_ = result_
    self.record_ = record_

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
          self.actor_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I32:
          self.template_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.STRUCT:
          self.result_ = ccentity.playing.ttypes.PlayingResultField()
          self.result_.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.STRUCT:
          self.record_ = ccentity.playing.ttypes.PlayingRecordField()
          self.record_.read(iprot)
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
    oprot.writeStructBegin('EventPlayingActorRequestAward')
    if self.actor_ is not None:
      oprot.writeFieldBegin('actor_', TType.I64, 1)
      oprot.writeI64(self.actor_)
      oprot.writeFieldEnd()
    if self.template_ is not None:
      oprot.writeFieldBegin('template_', TType.I32, 2)
      oprot.writeI32(self.template_)
      oprot.writeFieldEnd()
    if self.result_ is not None:
      oprot.writeFieldBegin('result_', TType.STRUCT, 3)
      self.result_.write(oprot)
      oprot.writeFieldEnd()
    if self.record_ is not None:
      oprot.writeFieldBegin('record_', TType.STRUCT, 4)
      self.record_.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.actor_ is None:
      raise TProtocol.TProtocolException(message='Required field actor_ is unset!')
    if self.template_ is None:
      raise TProtocol.TProtocolException(message='Required field template_ is unset!')
    if self.result_ is None:
      raise TProtocol.TProtocolException(message='Required field result_ is unset!')
    if self.record_ is None:
      raise TProtocol.TProtocolException(message='Required field record_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)