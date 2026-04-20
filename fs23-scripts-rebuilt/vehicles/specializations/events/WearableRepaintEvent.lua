-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WearableRepaintEvent = {}
local WearableRepaintEvent_mt = Class(WearableRepaintEvent, Event)
InitStaticEventClass(WearableRepaintEvent, "WearableRepaintEvent", EventIds.EVENT_WEARABLE_REPAINT)
function WearableRepaintEvent.emptyNew()
  return Event.new(u0)
end
function WearableRepaintEvent.new(vehicle)
  local v1 = WearableRepaintEvent.emptyNew()
  v1.vehicle = vehicle
  return v1
end
function WearableRepaintEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  self:run(connection)
end
function WearableRepaintEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
end
function WearableRepaintEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L50
    v2 = v2:getIsSynchronized()
    -- if not v2 then goto L50 end
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L50
    v2:repaintVehicle()
    v2:broadcastEvent(self)
    v2:publish(MessageType.VEHICLE_REPAINTED, self.vehicle)
    return
  end
  v2:publish(MessageType.VEHICLE_REPAINTED, self.vehicle)
end
