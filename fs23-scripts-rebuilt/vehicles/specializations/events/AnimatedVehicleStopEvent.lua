-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimatedVehicleStopEvent = {}
local AnimatedVehicleStopEvent_mt = Class(AnimatedVehicleStopEvent, Event)
InitStaticEventClass(AnimatedVehicleStopEvent, "AnimatedVehicleStopEvent", EventIds.EVENT_ANIMATED_VEHICLE_STOP)
function AnimatedVehicleStopEvent.emptyNew()
  return Event.new(u0)
end
function AnimatedVehicleStopEvent.new(object, name)
  local v2 = AnimatedVehicleStopEvent.emptyNew()
  v2.name = name
  v2.object = object
  return v2
end
function AnimatedVehicleStopEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadString(streamId)
  self.name = v3
  self:run(connection)
end
function AnimatedVehicleStopEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteString(streamId, self.name)
end
function AnimatedVehicleStopEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:stopAnimation(self.name, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = AnimatedVehicleStopEvent.new(self.object, self.name)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
