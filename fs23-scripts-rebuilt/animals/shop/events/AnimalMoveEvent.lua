-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalMoveEvent = {MOVE_SUCCESS = 0, MOVE_ERROR_NO_PERMISSION = 1, MOVE_ERROR_SOURCE_OBJECT_DOES_NOT_EXIST = 2, MOVE_ERROR_TARGET_OBJECT_DOES_NOT_EXIST = 3, MOVE_ERROR_INVALID_CLUSTER = 4, MOVE_ERROR_ANIMAL_NOT_SUPPORTED = 5, MOVE_ERROR_NOT_ENOUGH_SPACE = 6, MOVE_ERROR_NOT_ENOUGH_ANIMALS = 7, MOVE_ERROR_NOT_ENOUGH_MONEY = 2}
local AnimalMoveEvent_mt = Class(AnimalMoveEvent, Event)
InitStaticEventClass(AnimalMoveEvent, "AnimalMoveEvent", EventIds.EVENT_ANIMAL_MOVE)
function AnimalMoveEvent.emptyNew()
  return Event.new(u0)
end
function AnimalMoveEvent.new(sourceObject, targetObject, clusterId, numAnimals)
  local v4 = AnimalMoveEvent.emptyNew()
  v4.sourceObject = sourceObject
  v4.targetObject = targetObject
  v4.clusterId = clusterId
  v4.numAnimals = numAnimals
  return v4
end
function AnimalMoveEvent.newServerToClient(errorCode)
  local v1 = AnimalMoveEvent.emptyNew()
  v1.errorCode = errorCode
  return v1
end
function AnimalMoveEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.sourceObject = v3
    v3 = NetworkUtil.readNodeObject(streamId)
    self.targetObject = v3
    v3 = streamReadInt32(streamId)
    self.clusterId = v3
    v3 = streamReadUInt8(streamId)
    self.numAnimals = v3
  else
    v3 = streamReadUIntN(streamId, 3)
    self.errorCode = v3
  end
  self:run(connection)
end
function AnimalMoveEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.sourceObject)
    NetworkUtil.writeNodeObject(streamId, self.targetObject)
    streamWriteInt32(streamId, self.clusterId)
    streamWriteUInt8(streamId, self.numAnimals)
    return
  end
  streamWriteUIntN(streamId, self.errorCode, 3)
end
function AnimalMoveEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getUniqueUserIdByConnection(connection)
    local v3 = v3:getFarmForUniqueUserId(v2)
    local v5 = AnimalMoveEvent.validate(self.sourceObject, self.targetObject, self.clusterId, self.numAnimals, v3.farmId)
    if v5 ~= nil then
      local v8 = AnimalMoveEvent.newServerToClient(v5)
      connection:sendEvent(...)
      return
    end
    local v6 = v6:getClusterById(self.clusterId)
    local v7 = v6:clone()
    v7:changeNumAnimals(self.numAnimals)
    v8:addCluster(v7)
    v8 = v8:getClusterSystem()
    v6:changeNumAnimals(-self.numAnimals)
    v8:updateNow()
    local v11 = AnimalMoveEvent.newServerToClient(AnimalMoveEvent.MOVE_SUCCESS)
    connection:sendEvent(...)
    return
  end
  v2:publish(AnimalMoveEvent, self.errorCode)
end
function AnimalMoveEvent:validate(v1, v2, v3, v4)
  if self == nil then
    return AnimalMoveEvent.MOVE_ERROR_SOURCE_OBJECT_DOES_NOT_EXIST
  end
  if v1 == nil then
    return AnimalMoveEvent.MOVE_ERROR_TARGET_OBJECT_DOES_NOT_EXIST
  end
  local v5 = v5:canFarmAccess(v4, self)
  if not v5 then
    return AnimalMoveEvent.MOVE_ERROR_NO_PERMISSION
  end
  v5 = v5:canFarmAccess(v4, v1)
  if not v5 then
    return AnimalMoveEvent.MOVE_ERROR_NO_PERMISSION
  end
  v5 = self:getClusterById(v2)
  if v5 == nil then
    return AnimalMoveEvent.MOVE_ERROR_INVALID_CLUSTER
  end
  local v6 = v5:getNumAnimals()
  if v6 < v3 then
    return AnimalMoveEvent.MOVE_ERROR_NOT_ENOUGH_ANIMALS
  end
  local v8 = v5:getSubTypeIndex()
  v6 = v1:getSupportsAnimalSubType(...)
  if not v6 then
    return AnimalMoveEvent.MOVE_ERROR_ANIMAL_NOT_SUPPORTED
  end
  v8 = v5:getSubTypeIndex()
  v6 = v1:getNumOfFreeAnimalSlots(...)
  if v6 < v3 then
    return AnimalMoveEvent.MOVE_ERROR_NOT_ENOUGH_SPACE
  end
end
