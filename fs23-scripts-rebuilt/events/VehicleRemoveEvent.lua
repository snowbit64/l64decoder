-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleRemoveEvent = {}
local VehicleRemoveEvent_mt = Class(VehicleRemoveEvent, Event)
InitStaticEventClass(VehicleRemoveEvent, "VehicleRemoveEvent", EventIds.EVENT_VEHICLE_REMOVE)
function VehicleRemoveEvent.emptyNew()
  return Event.new(u0)
end
function VehicleRemoveEvent.new(vehicle)
  local v1 = VehicleRemoveEvent.emptyNew()
  v1.vehicle = vehicle
  if g_server ~= nil then
  end
  assert(true, "Client->Server event")
  return v1
end
function VehicleRemoveEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  self:run(connection)
end
function VehicleRemoveEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
end
function VehicleRemoveEvent:run(connection)
  v2:removeVehicle(self.vehicle)
end
