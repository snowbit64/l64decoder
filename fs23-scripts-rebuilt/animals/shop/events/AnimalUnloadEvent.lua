-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalUnloadEvent = {UNLOAD_SUCCESS = 0, UNLOAD_ERROR_NO_PERMISSION = 1, UNLOAD_ERROR_INVALID_CLUSTER = 2, UNLOAD_ERROR_NOT_ENOUGH_ANIMALS = 3, UNLOAD_ERROR_DOES_NOT_SUPPORT_UNLOADING = 4, UNLOAD_ERROR_TRAILER_DOES_NOT_EXIST = 5, UNLOAD_ERROR_NO_SPACE = 6, UNLOAD_ERROR_COULD_NOT_BE_LOADED = 7, UNLOAD_ERROR_RIDEABLE_LIMIT_REACHED = 8, SEND_NUM_BITS = 4}
local AnimalUnloadEvent_mt = Class(AnimalUnloadEvent, Event)
InitStaticEventClass(AnimalUnloadEvent, "AnimalUnloadEvent", EventIds.EVENT_ANIMAL_UNLOAD)
function AnimalUnloadEvent.emptyNew()
  return Event.new(u0)
end
function AnimalUnloadEvent.new(trailer, clusterId)
  local v2 = AnimalUnloadEvent.emptyNew()
  v2.trailer = trailer
  v2.clusterId = clusterId
  return v2
end
function AnimalUnloadEvent.newServerToClient(errorCode)
  local v1 = AnimalUnloadEvent.emptyNew()
  v1.errorCode = errorCode
  return v1
end
function AnimalUnloadEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.trailer = v3
    v3 = streamReadInt32(streamId)
    self.clusterId = v3
  else
    v3 = streamReadUIntN(streamId, AnimalUnloadEvent.SEND_NUM_BITS)
    self.errorCode = v3
  end
  self:run(connection)
end
function AnimalUnloadEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.trailer)
    streamWriteInt32(streamId, self.clusterId)
    return
  end
  streamWriteUIntN(streamId, self.errorCode, AnimalUnloadEvent.SEND_NUM_BITS)
end
function AnimalUnloadEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = AnimalUnloadEvent.validate(self.trailer, self.clusterId)
    if v2 ~= nil then
      local v5 = AnimalUnloadEvent.newServerToClient(v2)
      connection:sendEvent(...)
      return
    end
    local v3 = v3:getClusterById(self.clusterId)
    local v4 = v3:getRidableFilename()
    v5 = StoreItemUtil.getSizeValues(v4, "vehicle", 0, {})
    local v7 = v7:getAnimalUnloadPlaces()
    local v6, v7, v8, v9, v10, v11 = PlacementUtil.getPlace(v7, v5, {}, true, true, true)
    if v6 == nil then
      local v14 = AnimalUnloadEvent.newServerToClient(AnimalUnloadEvent.UNLOAD_ERROR_NO_SPACE)
      connection:sendEvent(...)
      return
    end
    local v13 = v13:getOwnerFarmId()
    VehicleLoadingUtil.loadVehicle(v4, {x = v6, z = v8, yRot = v9.rotY}, true, 0, Vehicle.PROPERTY_STATE_OWNED, v13, nil, nil, self.onLoadedRideable, self, {cluster = v3, connection = connection, trailer = self.trailer})
    return
  end
  v2:publish(AnimalUnloadEvent, self.errorCode)
end
function AnimalUnloadEvent.onLoadedRideable(v0, v1, v2, v3)
  if v1 == nil then
    local v9 = AnimalUnloadEvent.newServerToClient(AnimalUnloadEvent.UNLOAD_ERROR_COULD_NOT_BE_LOADED)
    v3.connection:sendEvent(...)
    return
  end
  if v2 ~= VehicleLoadingUtil.VEHICLE_LOAD_OK then
    v1:delete()
    v9 = AnimalUnloadEvent.newServerToClient(AnimalUnloadEvent.UNLOAD_ERROR_COULD_NOT_BE_LOADED)
    v5:sendEvent(...)
    return
  end
  local v7 = v4:clone()
  v7:changeNumAnimals(1)
  v1:setCluster(v7)
  local v8 = v6:getClusterSystem()
  v4:changeNumAnimals(-1)
  v8:updateNow()
  local v11 = AnimalUnloadEvent.newServerToClient(AnimalUnloadEvent.UNLOAD_SUCCESS)
  v5:sendEvent(...)
end
function AnimalUnloadEvent:validate(v1)
  if self == nil then
    return AnimalUnloadEvent.UNLOAD_ERROR_TRAILER_DOES_NOT_EXIST
  end
  local v2 = self:getClusterById(v1)
  if v2 == nil then
    return AnimalUnloadEvent.UNLOAD_ERROR_INVALID_CLUSTER
  end
  local v3 = v2:getNumAnimals()
  if v3 == 0 then
    return AnimalUnloadEvent.UNLOAD_ERROR_NOT_ENOUGH_ANIMALS
  end
  v3 = v2:getRidableFilename()
  if v3 == nil then
    return AnimalUnloadEvent.UNLOAD_ERROR_DOES_NOT_SUPPORT_UNLOADING
  end
  local v4 = self:getOwnerFarmId()
  local v5 = v5:getCanAddRideable(v4)
  if not v5 then
    return AnimalUnloadEvent.UNLOAD_ERROR_RIDEABLE_LIMIT_REACHED
  end
  return nil
end
