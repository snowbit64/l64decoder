-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleEnterRequestEvent = {}
local VehicleEnterRequestEvent_mt = Class(VehicleEnterRequestEvent, Event)
InitStaticEventClass(VehicleEnterRequestEvent, "VehicleEnterRequestEvent", EventIds.EVENT_VEHICLE_ENTER_REQUEST)
function VehicleEnterRequestEvent.emptyNew()
  return Event.new(u0)
end
function VehicleEnterRequestEvent.new(object, playerStyle, farmId)
  local v3 = VehicleEnterRequestEvent.emptyNew()
  v3.object = object
  local v4 = NetworkUtil.getObjectId(v3.object)
  v3.objectId = v4
  v3.farmId = farmId
  v3.playerStyle = playerStyle
  return v3
end
function VehicleEnterRequestEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObjectId(streamId)
  self.objectId = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  if self.playerStyle == nil then
    v3 = PlayerStyle.new()
    self.playerStyle = v3
  end
  v3:readStream(streamId, connection)
  v3 = NetworkUtil.getObject(self.objectId)
  self.object = v3
  self:run(connection)
end
function VehicleEnterRequestEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObjectId(streamId, self.objectId)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  v3:writeStream(streamId, connection)
end
function VehicleEnterRequestEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 and self.object.spec_enterable ~= nil and self.object.spec_enterable.isControlled == false then
      v3:setOwner(connection)
      self.object.controllerFarmId = self.farmId
      local v3 = v3:getUserIdByConnection(connection)
      self.object.controllerUserId = v3
      local v6 = VehicleEnterResponseEvent.new(self.objectId, false, self.playerStyle, self.farmId, v3)
      v4:broadcastEvent(v6, true, connection, self.object, false, nil, true)
      v6 = VehicleEnterResponseEvent.new(self.objectId, true, self.playerStyle, self.farmId, v3)
      connection:sendEvent(...)
    end
  end
end
