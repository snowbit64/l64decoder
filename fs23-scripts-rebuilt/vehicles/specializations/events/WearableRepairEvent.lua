-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WearableRepairEvent = {}
local WearableRepairEvent_mt = Class(WearableRepairEvent, Event)
InitStaticEventClass(WearableRepairEvent, "WearableRepairEvent", EventIds.EVENT_WEARABLE_REPAIR)
function WearableRepairEvent.emptyNew()
  return Event.new(u0)
end
function WearableRepairEvent.new(vehicle, atSellingPoint)
  local v2 = WearableRepairEvent.emptyNew()
  v2.vehicle = vehicle
  v2.atSellingPoint = atSellingPoint
  return v2
end
function WearableRepairEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadBool(streamId)
  self.atSellingPoint = v3
  self:run(connection)
end
function WearableRepairEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteBool(streamId, self.atSellingPoint)
end
function WearableRepairEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L56
    v2 = v2:getIsSynchronized()
    -- if not v2 then goto L56 end
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L56
    v2:repairVehicle(self.atSellingPoint)
    v2:broadcastEvent(self)
    v2:publish(MessageType.VEHICLE_REPAIRED, self.vehicle, self.atSellingPoint)
    return
  end
  v2:publish(MessageType.VEHICLE_REPAIRED, self.vehicle, self.atSellingPoint)
end
