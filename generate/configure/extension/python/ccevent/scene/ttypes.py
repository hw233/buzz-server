#
# Autogenerated by Thrift Compiler (0.9.0)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TException, TApplicationException
import ccentity.entity.ttypes
import ccevent.ttypes


from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol, TProtocol
try:
  from thrift.protocol import fastbinary
except:
  fastbinary = None



class EventSceneBroadcastCreateRole:
  """
  Attributes:
   - type_
   - id_
   - actors_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I32, 'type_', None, None, ), # 1
    (2, TType.I64, 'id_', None, None, ), # 2
    (3, TType.LIST, 'actors_', (TType.I64,None), None, ), # 3
  )

  def __init__(self, type_=None, id_=None, actors_=None,):
    self.type_ = type_
    self.id_ = id_
    self.actors_ = actors_

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
        if ftype == TType.I32:
          self.type_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.id_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.LIST:
          self.actors_ = []
          (_etype3, _size0) = iprot.readListBegin()
          for _i4 in xrange(_size0):
            _elem5 = iprot.readI64();
            self.actors_.append(_elem5)
          iprot.readListEnd()
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
    oprot.writeStructBegin('EventSceneBroadcastCreateRole')
    if self.type_ is not None:
      oprot.writeFieldBegin('type_', TType.I32, 1)
      oprot.writeI32(self.type_)
      oprot.writeFieldEnd()
    if self.id_ is not None:
      oprot.writeFieldBegin('id_', TType.I64, 2)
      oprot.writeI64(self.id_)
      oprot.writeFieldEnd()
    if self.actors_ is not None:
      oprot.writeFieldBegin('actors_', TType.LIST, 3)
      oprot.writeListBegin(TType.I64, len(self.actors_))
      for iter6 in self.actors_:
        oprot.writeI64(iter6)
      oprot.writeListEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.type_ is None:
      raise TProtocol.TProtocolException(message='Required field type_ is unset!')
    if self.id_ is None:
      raise TProtocol.TProtocolException(message='Required field id_ is unset!')
    if self.actors_ is None:
      raise TProtocol.TProtocolException(message='Required field actors_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class SceneRolePair:
  """
  Attributes:
   - type_
   - id_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I32, 'type_', None, None, ), # 1
    (2, TType.I64, 'id_', None, None, ), # 2
  )

  def __init__(self, type_=None, id_=None,):
    self.type_ = type_
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
        if ftype == TType.I32:
          self.type_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 2:
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
    oprot.writeStructBegin('SceneRolePair')
    if self.type_ is not None:
      oprot.writeFieldBegin('type_', TType.I32, 1)
      oprot.writeI32(self.type_)
      oprot.writeFieldEnd()
    if self.id_ is not None:
      oprot.writeFieldBegin('id_', TType.I64, 2)
      oprot.writeI64(self.id_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.type_ is None:
      raise TProtocol.TProtocolException(message='Required field type_ is unset!')
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

class EventSceneCreateAoiRoles:
  """
  Attributes:
   - roles_
   - actor_
  """

  thrift_spec = (
    None, # 0
    (1, TType.LIST, 'roles_', (TType.STRUCT,(SceneRolePair, SceneRolePair.thrift_spec)), None, ), # 1
    (2, TType.I64, 'actor_', None, None, ), # 2
  )

  def __init__(self, roles_=None, actor_=None,):
    self.roles_ = roles_
    self.actor_ = actor_

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
        if ftype == TType.LIST:
          self.roles_ = []
          (_etype10, _size7) = iprot.readListBegin()
          for _i11 in xrange(_size7):
            _elem12 = SceneRolePair()
            _elem12.read(iprot)
            self.roles_.append(_elem12)
          iprot.readListEnd()
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.actor_ = iprot.readI64();
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
    oprot.writeStructBegin('EventSceneCreateAoiRoles')
    if self.roles_ is not None:
      oprot.writeFieldBegin('roles_', TType.LIST, 1)
      oprot.writeListBegin(TType.STRUCT, len(self.roles_))
      for iter13 in self.roles_:
        iter13.write(oprot)
      oprot.writeListEnd()
      oprot.writeFieldEnd()
    if self.actor_ is not None:
      oprot.writeFieldBegin('actor_', TType.I64, 2)
      oprot.writeI64(self.actor_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.roles_ is None:
      raise TProtocol.TProtocolException(message='Required field roles_ is unset!')
    if self.actor_ is None:
      raise TProtocol.TProtocolException(message='Required field actor_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventSceneRoleComing:
  """
  Attributes:
   - type_
   - id_
   - roles_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I32, 'type_', None, None, ), # 1
    (2, TType.I64, 'id_', None, None, ), # 2
    (3, TType.LIST, 'roles_', (TType.STRUCT,(SceneRolePair, SceneRolePair.thrift_spec)), None, ), # 3
  )

  def __init__(self, type_=None, id_=None, roles_=None,):
    self.type_ = type_
    self.id_ = id_
    self.roles_ = roles_

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
        if ftype == TType.I32:
          self.type_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.id_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.LIST:
          self.roles_ = []
          (_etype17, _size14) = iprot.readListBegin()
          for _i18 in xrange(_size14):
            _elem19 = SceneRolePair()
            _elem19.read(iprot)
            self.roles_.append(_elem19)
          iprot.readListEnd()
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
    oprot.writeStructBegin('EventSceneRoleComing')
    if self.type_ is not None:
      oprot.writeFieldBegin('type_', TType.I32, 1)
      oprot.writeI32(self.type_)
      oprot.writeFieldEnd()
    if self.id_ is not None:
      oprot.writeFieldBegin('id_', TType.I64, 2)
      oprot.writeI64(self.id_)
      oprot.writeFieldEnd()
    if self.roles_ is not None:
      oprot.writeFieldBegin('roles_', TType.LIST, 3)
      oprot.writeListBegin(TType.STRUCT, len(self.roles_))
      for iter20 in self.roles_:
        iter20.write(oprot)
      oprot.writeListEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.type_ is None:
      raise TProtocol.TProtocolException(message='Required field type_ is unset!')
    if self.id_ is None:
      raise TProtocol.TProtocolException(message='Required field id_ is unset!')
    if self.roles_ is None:
      raise TProtocol.TProtocolException(message='Required field roles_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventSceneRoleLeaving:
  """
  Attributes:
   - type_
   - id_
   - roles_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I32, 'type_', None, None, ), # 1
    (2, TType.I64, 'id_', None, None, ), # 2
    (3, TType.LIST, 'roles_', (TType.STRUCT,(SceneRolePair, SceneRolePair.thrift_spec)), None, ), # 3
  )

  def __init__(self, type_=None, id_=None, roles_=None,):
    self.type_ = type_
    self.id_ = id_
    self.roles_ = roles_

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
        if ftype == TType.I32:
          self.type_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.id_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.LIST:
          self.roles_ = []
          (_etype24, _size21) = iprot.readListBegin()
          for _i25 in xrange(_size21):
            _elem26 = SceneRolePair()
            _elem26.read(iprot)
            self.roles_.append(_elem26)
          iprot.readListEnd()
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
    oprot.writeStructBegin('EventSceneRoleLeaving')
    if self.type_ is not None:
      oprot.writeFieldBegin('type_', TType.I32, 1)
      oprot.writeI32(self.type_)
      oprot.writeFieldEnd()
    if self.id_ is not None:
      oprot.writeFieldBegin('id_', TType.I64, 2)
      oprot.writeI64(self.id_)
      oprot.writeFieldEnd()
    if self.roles_ is not None:
      oprot.writeFieldBegin('roles_', TType.LIST, 3)
      oprot.writeListBegin(TType.STRUCT, len(self.roles_))
      for iter27 in self.roles_:
        iter27.write(oprot)
      oprot.writeListEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.type_ is None:
      raise TProtocol.TProtocolException(message='Required field type_ is unset!')
    if self.id_ is None:
      raise TProtocol.TProtocolException(message='Required field id_ is unset!')
    if self.roles_ is None:
      raise TProtocol.TProtocolException(message='Required field roles_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventSceneRoleChangeLocation:
  """
  Attributes:
   - type_
   - id_
   - src_scene_
   - src_x_
   - src_y_
   - dest_scene_
   - dest_x_
   - dest_y_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I32, 'type_', None, None, ), # 1
    (2, TType.I64, 'id_', None, None, ), # 2
    (3, TType.I64, 'src_scene_', None, None, ), # 3
    (4, TType.I32, 'src_x_', None, None, ), # 4
    (5, TType.I32, 'src_y_', None, None, ), # 5
    (6, TType.I64, 'dest_scene_', None, None, ), # 6
    (7, TType.I32, 'dest_x_', None, None, ), # 7
    (8, TType.I32, 'dest_y_', None, None, ), # 8
  )

  def __init__(self, type_=None, id_=None, src_scene_=None, src_x_=None, src_y_=None, dest_scene_=None, dest_x_=None, dest_y_=None,):
    self.type_ = type_
    self.id_ = id_
    self.src_scene_ = src_scene_
    self.src_x_ = src_x_
    self.src_y_ = src_y_
    self.dest_scene_ = dest_scene_
    self.dest_x_ = dest_x_
    self.dest_y_ = dest_y_

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
        if ftype == TType.I32:
          self.type_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.id_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.I64:
          self.src_scene_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.I32:
          self.src_x_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 5:
        if ftype == TType.I32:
          self.src_y_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 6:
        if ftype == TType.I64:
          self.dest_scene_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 7:
        if ftype == TType.I32:
          self.dest_x_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 8:
        if ftype == TType.I32:
          self.dest_y_ = iprot.readI32();
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
    oprot.writeStructBegin('EventSceneRoleChangeLocation')
    if self.type_ is not None:
      oprot.writeFieldBegin('type_', TType.I32, 1)
      oprot.writeI32(self.type_)
      oprot.writeFieldEnd()
    if self.id_ is not None:
      oprot.writeFieldBegin('id_', TType.I64, 2)
      oprot.writeI64(self.id_)
      oprot.writeFieldEnd()
    if self.src_scene_ is not None:
      oprot.writeFieldBegin('src_scene_', TType.I64, 3)
      oprot.writeI64(self.src_scene_)
      oprot.writeFieldEnd()
    if self.src_x_ is not None:
      oprot.writeFieldBegin('src_x_', TType.I32, 4)
      oprot.writeI32(self.src_x_)
      oprot.writeFieldEnd()
    if self.src_y_ is not None:
      oprot.writeFieldBegin('src_y_', TType.I32, 5)
      oprot.writeI32(self.src_y_)
      oprot.writeFieldEnd()
    if self.dest_scene_ is not None:
      oprot.writeFieldBegin('dest_scene_', TType.I64, 6)
      oprot.writeI64(self.dest_scene_)
      oprot.writeFieldEnd()
    if self.dest_x_ is not None:
      oprot.writeFieldBegin('dest_x_', TType.I32, 7)
      oprot.writeI32(self.dest_x_)
      oprot.writeFieldEnd()
    if self.dest_y_ is not None:
      oprot.writeFieldBegin('dest_y_', TType.I32, 8)
      oprot.writeI32(self.dest_y_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.type_ is None:
      raise TProtocol.TProtocolException(message='Required field type_ is unset!')
    if self.id_ is None:
      raise TProtocol.TProtocolException(message='Required field id_ is unset!')
    if self.src_scene_ is None:
      raise TProtocol.TProtocolException(message='Required field src_scene_ is unset!')
    if self.src_x_ is None:
      raise TProtocol.TProtocolException(message='Required field src_x_ is unset!')
    if self.src_y_ is None:
      raise TProtocol.TProtocolException(message='Required field src_y_ is unset!')
    if self.dest_scene_ is None:
      raise TProtocol.TProtocolException(message='Required field dest_scene_ is unset!')
    if self.dest_x_ is None:
      raise TProtocol.TProtocolException(message='Required field dest_x_ is unset!')
    if self.dest_y_ is None:
      raise TProtocol.TProtocolException(message='Required field dest_y_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventSceneJumpMap:
  """
  Attributes:
   - type_
   - id_
   - src_scene_
   - dest_scene_
   - dest_x_
   - dest_y_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I32, 'type_', None, None, ), # 1
    (2, TType.I64, 'id_', None, None, ), # 2
    (3, TType.I64, 'src_scene_', None, None, ), # 3
    (4, TType.I64, 'dest_scene_', None, None, ), # 4
    (5, TType.I32, 'dest_x_', None, None, ), # 5
    (6, TType.I32, 'dest_y_', None, None, ), # 6
  )

  def __init__(self, type_=None, id_=None, src_scene_=None, dest_scene_=None, dest_x_=None, dest_y_=None,):
    self.type_ = type_
    self.id_ = id_
    self.src_scene_ = src_scene_
    self.dest_scene_ = dest_scene_
    self.dest_x_ = dest_x_
    self.dest_y_ = dest_y_

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
        if ftype == TType.I32:
          self.type_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.id_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.I64:
          self.src_scene_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.I64:
          self.dest_scene_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 5:
        if ftype == TType.I32:
          self.dest_x_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 6:
        if ftype == TType.I32:
          self.dest_y_ = iprot.readI32();
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
    oprot.writeStructBegin('EventSceneJumpMap')
    if self.type_ is not None:
      oprot.writeFieldBegin('type_', TType.I32, 1)
      oprot.writeI32(self.type_)
      oprot.writeFieldEnd()
    if self.id_ is not None:
      oprot.writeFieldBegin('id_', TType.I64, 2)
      oprot.writeI64(self.id_)
      oprot.writeFieldEnd()
    if self.src_scene_ is not None:
      oprot.writeFieldBegin('src_scene_', TType.I64, 3)
      oprot.writeI64(self.src_scene_)
      oprot.writeFieldEnd()
    if self.dest_scene_ is not None:
      oprot.writeFieldBegin('dest_scene_', TType.I64, 4)
      oprot.writeI64(self.dest_scene_)
      oprot.writeFieldEnd()
    if self.dest_x_ is not None:
      oprot.writeFieldBegin('dest_x_', TType.I32, 5)
      oprot.writeI32(self.dest_x_)
      oprot.writeFieldEnd()
    if self.dest_y_ is not None:
      oprot.writeFieldBegin('dest_y_', TType.I32, 6)
      oprot.writeI32(self.dest_y_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.type_ is None:
      raise TProtocol.TProtocolException(message='Required field type_ is unset!')
    if self.id_ is None:
      raise TProtocol.TProtocolException(message='Required field id_ is unset!')
    if self.src_scene_ is None:
      raise TProtocol.TProtocolException(message='Required field src_scene_ is unset!')
    if self.dest_scene_ is None:
      raise TProtocol.TProtocolException(message='Required field dest_scene_ is unset!')
    if self.dest_x_ is None:
      raise TProtocol.TProtocolException(message='Required field dest_x_ is unset!')
    if self.dest_y_ is None:
      raise TProtocol.TProtocolException(message='Required field dest_y_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class EventSceneGather:
  """
  Attributes:
   - npc_template_id_
   - id_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I64, 'npc_template_id_', None, None, ), # 1
    (2, TType.I64, 'id_', None, None, ), # 2
  )

  def __init__(self, npc_template_id_=None, id_=None,):
    self.npc_template_id_ = npc_template_id_
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
          self.npc_template_id_ = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 2:
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
    oprot.writeStructBegin('EventSceneGather')
    if self.npc_template_id_ is not None:
      oprot.writeFieldBegin('npc_template_id_', TType.I64, 1)
      oprot.writeI64(self.npc_template_id_)
      oprot.writeFieldEnd()
    if self.id_ is not None:
      oprot.writeFieldBegin('id_', TType.I64, 2)
      oprot.writeI64(self.id_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.npc_template_id_ is None:
      raise TProtocol.TProtocolException(message='Required field npc_template_id_ is unset!')
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
