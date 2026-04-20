-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleBrokenEvent = {}
local VehicleBrokenEvent_mt = Class(VehicleBrokenEvent, Event)
InitStaticEventClass(VehicleBrokenEvent, "VehicleBrokenEvent", EventIds.EVENT_VEHICLE_BROKEN)
function VehicleBrokenEvent.emptyNew()
  return Event.new(u0)
end
function VehicleBrokenEvent.new(object)
  local v1 = VehicleBrokenEvent.emptyNew()
  v1.object = object
  return v1
end
function VehicleBrokenEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  self:run(connection)
end
function VehicleBrokenEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
end
function VehicleBrokenEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setBroken()
    end
  end
end
