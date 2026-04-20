-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalLoadEvent = {LOAD_SUCCESS = 0, LOAD_ERROR_NO_PERMISSION = 1, LOAD_ERROR_RIDEABLE_DOES_NOT_EXIST = 2, LOAD_ERROR_TRAILER_DOES_NOT_EXIST = 3, LOAD_ERROR_INVALID_CLUSTER = 4, LOAD_ERROR_NOT_ENOUGH_ANIMALS = 5, LOAD_ERROR_ANIMAL_NOT_SUPPORTED = 6, LOAD_ERROR_NOT_ENOUGH_SPACE = 7}
local AnimalLoadEvent_mt = Class(AnimalLoadEvent, Event)
InitStaticEventClass(AnimalLoadEvent, "AnimalLoadEvent", EventIds.EVENT_ANIMAL_LOAD)
function AnimalLoadEvent.emptyNew()
  return Event.new(u0)
end
function AnimalLoadEvent.new(trailer, rideable)
  local v2 = AnimalLoadEvent.emptyNew()
  v2.trailer = trailer
  v2.rideable = rideable
  return v2
end
function AnimalLoadEvent.newServerToClient(errorCode)
  local v1 = AnimalLoadEvent.emptyNew()
  v1.errorCode = errorCode
  return v1
end
function AnimalLoadEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.trailer = v3
    v3 = NetworkUtil.readNodeObject(streamId)
    self.rideable = v3
  else
    v3 = streamReadUIntN(streamId, 3)
    self.errorCode = v3
  end
  self:run(connection)
end
function AnimalLoadEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.trailer)
    NetworkUtil.writeNodeObject(streamId, self.rideable)
    return
  end
  streamWriteUIntN(streamId, self.errorCode, 3)
end
function AnimalLoadEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getUniqueUserIdByConnection(connection)
    local v3 = v3:getFarmForUniqueUserId(v2)
    local v5 = AnimalLoadEvent.validate(self.trailer, self.rideable, v3.farmId)
    if v5 ~= nil then
      local v8 = AnimalLoadEvent.newServerToClient(v5)
      connection:sendEvent(...)
      return
    end
    local v6 = v6:getCluster()
    v7:addCluster(v6)
    v7:removeVehicle(self.rideable)
    local v9 = AnimalLoadEvent.newServerToClient(AnimalLoadEvent.LOAD_SUCCESS)
    connection:sendEvent(...)
    return
  end
  v2:publish(AnimalLoadEvent, self.errorCode)
end
function AnimalLoadEvent:validate(v1, v2)
  if self == nil then
    return AnimalLoadEvent.LOAD_ERROR_TRAILER_DOES_NOT_EXIST
  end
  if v1 == nil then
    return AnimalLoadEvent.LOAD_ERROR_RIDEABLE_DOES_NOT_EXIST
  end
  local v3 = v3:canFarmAccess(v2, self)
  if not v3 then
    return AnimalLoadEvent.LOAD_ERROR_NO_PERMISSION
  end
  v3 = v3:canFarmAccess(v2, v1)
  if not v3 then
    return AnimalLoadEvent.LOAD_ERROR_NO_PERMISSION
  end
  v3 = v1:getCluster()
  if v3 == nil then
    return AnimalLoadEvent.LOAD_ERROR_INVALID_CLUSTER
  end
  local v4 = v3:getNumAnimals()
  if v4 == 0 then
    return AnimalLoadEvent.LOAD_ERROR_NOT_ENOUGH_ANIMALS
  end
  local v6 = v3:getSubTypeIndex()
  v4 = self:getSupportsAnimalSubType(...)
  if not v4 then
    return AnimalLoadEvent.LOAD_ERROR_ANIMAL_NOT_SUPPORTED
  end
  v6 = v3:getSubTypeIndex()
  v4 = self:getNumOfFreeAnimalSlots(...)
  if v4 == 0 then
    return AnimalLoadEvent.LOAD_ERROR_NOT_ENOUGH_SPACE
  end
  return nil
end
