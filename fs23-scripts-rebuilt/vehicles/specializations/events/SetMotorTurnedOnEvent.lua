-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetMotorTurnedOnEvent = {}
local SetMotorTurnedOnEvent_mt = Class(SetMotorTurnedOnEvent, Event)
InitStaticEventClass(SetMotorTurnedOnEvent, "SetMotorTurnedOnEvent", EventIds.EVENT_SET_MOTOR_TURNED_ON)
function SetMotorTurnedOnEvent.emptyNew()
  return Event.new(u0)
end
function SetMotorTurnedOnEvent.new(object, turnedOn)
  local v2 = SetMotorTurnedOnEvent.emptyNew()
  v2.object = object
  v2.turnedOn = turnedOn
  return v2
end
function SetMotorTurnedOnEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.turnedOn = v3
  self:run(connection)
end
function SetMotorTurnedOnEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.turnedOn)
end
function SetMotorTurnedOnEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      if self.turnedOn then
        v2:startMotor(true)
      else
        v2:stopMotor(true)
      end
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = SetMotorTurnedOnEvent.new(self.object, self.turnedOn)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
