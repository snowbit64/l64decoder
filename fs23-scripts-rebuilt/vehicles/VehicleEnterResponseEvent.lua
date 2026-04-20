-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleEnterResponseEvent = {}
local VehicleEnterResponseEvent_mt = Class(VehicleEnterResponseEvent, Event)
InitStaticEventClass(VehicleEnterResponseEvent, "VehicleEnterResponseEvent", EventIds.EVENT_VEHICLE_ENTER_RESPONSE)
function VehicleEnterResponseEvent.emptyNew()
  return Event.new(u0)
end
function VehicleEnterResponseEvent.new(id, isOwner, playerStyle, farmId, userId)
  local v5 = VehicleEnterResponseEvent.emptyNew()
  v5.id = id
  v5.isOwner = isOwner
  v5.playerStyle = playerStyle
  v5.farmId = farmId
  v5.userId = userId
  return v5
end
function VehicleEnterResponseEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObjectId(streamId)
  self.id = v3
  v3 = streamReadBool(streamId)
  self.isOwner = v3
  if self.playerStyle == nil then
    v3 = PlayerStyle.new()
    self.playerStyle = v3
  end
  v3:readStream(streamId, connection)
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  v3 = streamReadInt32(streamId)
  self.userId = v3
  self:run(connection)
end
function VehicleEnterResponseEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObjectId(streamId, self.id)
  streamWriteBool(streamId, self.isOwner)
  v3:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  streamWriteInt32(streamId, self.userId)
end
function VehicleEnterResponseEvent:run(connection)
  local object = NetworkUtil.getObject(self.id)
  if object ~= nil then
    local v3 = object:getIsSynchronized()
    if v3 then
      if self.isOwner then
        v3:onEnterVehicle(object, self.playerStyle, self.farmId, self.userId)
        return
      end
      if object.spec_enterable ~= nil and not object.spec_enterable.isEntered then
        object:enterVehicle(false, self.playerStyle, self.farmId, self.userId)
      end
    end
  end
end
