-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetCruiseControlSpeedEvent = {}
local SetCruiseControlSpeedEvent_mt = Class(SetCruiseControlSpeedEvent, Event)
InitStaticEventClass(SetCruiseControlSpeedEvent, "SetCruiseControlSpeedEvent", EventIds.EVENT_CRUISECONTROL_SET_SPEED)
function SetCruiseControlSpeedEvent.emptyNew()
  return Event.new(u0)
end
function SetCruiseControlSpeedEvent.new(vehicle, speed, speedReverse)
  local v3 = SetCruiseControlSpeedEvent.emptyNew()
  v3.speed = speed
  v3.speedReverse = speedReverse
  v3.vehicle = vehicle
  return v3
end
function SetCruiseControlSpeedEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadUInt8(streamId)
  self.speed = v3
  v3 = streamReadUInt8(streamId)
  self.speedReverse = v3
  self:run(connection)
end
function SetCruiseControlSpeedEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteUInt8(streamId, self.speed)
  streamWriteUInt8(streamId, self.speedReverse)
end
function SetCruiseControlSpeedEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.vehicle)
  end
  if self.vehicle ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setCruiseControlMaxSpeed(self.speed, self.speedReverse)
    end
  end
end
