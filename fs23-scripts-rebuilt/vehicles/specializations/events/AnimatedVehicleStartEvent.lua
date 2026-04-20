-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimatedVehicleStartEvent = {}
local AnimatedVehicleStartEvent_mt = Class(AnimatedVehicleStartEvent, Event)
InitStaticEventClass(AnimatedVehicleStartEvent, "AnimatedVehicleStartEvent", EventIds.EVENT_ANIMATED_VEHICLE_START)
function AnimatedVehicleStartEvent.emptyNew()
  return Event.new(u0)
end
function AnimatedVehicleStartEvent.new(object, name, speed, animTime)
  local v4 = AnimatedVehicleStartEvent.emptyNew()
  v4.name = name
  v4.speed = speed
  v4.animTime = animTime
  v4.object = object
  return v4
end
function AnimatedVehicleStartEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadString(streamId)
  self.name = v3
  v3 = streamReadFloat32(streamId)
  self.speed = v3
  v3 = streamReadFloat32(streamId)
  self.animTime = v3
  self:run(connection)
end
function AnimatedVehicleStartEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteString(streamId, self.name)
  streamWriteFloat32(streamId, self.speed)
  streamWriteFloat32(streamId, self.animTime)
end
function AnimatedVehicleStartEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:playAnimation(self.name, self.speed, self.animTime, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = AnimatedVehicleStartEvent.new(self.object, self.name, self.speed, self.animTime)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
