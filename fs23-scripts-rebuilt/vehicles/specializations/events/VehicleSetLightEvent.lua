-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSetLightEvent = {}
local VehicleSetLightEvent_mt = Class(VehicleSetLightEvent, Event)
InitStaticEventClass(VehicleSetLightEvent, "VehicleSetLightEvent", EventIds.EVENT_VEHICLE_SET_LIGHT)
function VehicleSetLightEvent.emptyNew()
  return Event.new(u0)
end
function VehicleSetLightEvent.new(object, lightsTypesMask, numBits)
  local v3 = VehicleSetLightEvent.emptyNew()
  v3.object = object
  v3.lightsTypesMask = lightsTypesMask
  v3.numBits = numBits
  return v3
end
function VehicleSetLightEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUIntN(streamId, 5)
  self.numBits = v3
  v3 = streamReadUIntN(streamId, self.numBits)
  self.lightsTypesMask = v3
  self:run(connection)
end
function VehicleSetLightEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self.numBits, 5)
  streamWriteUIntN(streamId, self.lightsTypesMask, self.numBits)
end
function VehicleSetLightEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setLightsTypesMask(self.lightsTypesMask, true, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = VehicleSetLightEvent.new(self.object, self.lightsTypesMask, self.numBits)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
