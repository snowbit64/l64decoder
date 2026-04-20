-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleDetachEvent = {}
local VehicleDetachEvent_mt = Class(VehicleDetachEvent, Event)
InitStaticEventClass(VehicleDetachEvent, "VehicleDetachEvent", EventIds.EVENT_VEHICLE_DETACH)
function VehicleDetachEvent.emptyNew()
  return Event.new(u0)
end
function VehicleDetachEvent.new(vehicle, implement)
  local v2 = VehicleDetachEvent.emptyNew()
  v2.implement = implement
  v2.vehicle = vehicle
  return v2
end
function VehicleDetachEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = NetworkUtil.readNodeObject(streamId)
  self.implement = v3
  if self.vehicle ~= nil then
    v3 = v3:getIsSynchronized()
    if v3 then
      v3 = connection:getIsServer()
      if v3 then
        v3:detachImplementByObject(self.implement, true)
        return
      end
      v3:detachImplementByObject(self.implement)
    end
  end
end
function VehicleDetachEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  NetworkUtil.writeNodeObject(streamId, self.implement)
end
function VehicleDetachEvent.run(v0, v1)
end
