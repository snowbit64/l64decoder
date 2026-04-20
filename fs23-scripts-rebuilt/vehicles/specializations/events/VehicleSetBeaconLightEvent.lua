-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSetBeaconLightEvent = {}
local VehicleSetBeaconLightEvent_mt = Class(VehicleSetBeaconLightEvent, Event)
InitStaticEventClass(VehicleSetBeaconLightEvent, "VehicleSetBeaconLightEvent", EventIds.EVENT_VEHICLE_SET_BEACON_LIGHT)
function VehicleSetBeaconLightEvent.emptyNew()
  return Event.new(u0)
end
function VehicleSetBeaconLightEvent.new(object, active)
  local v2 = VehicleSetBeaconLightEvent.emptyNew()
  v2.active = active
  v2.object = object
  return v2
end
function VehicleSetBeaconLightEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.active = v3
  self:run(connection)
end
function VehicleSetBeaconLightEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.active)
end
function VehicleSetBeaconLightEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setBeaconLightsVisibility(self.active, true, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = VehicleSetBeaconLightEvent.new(self.object, self.active)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
