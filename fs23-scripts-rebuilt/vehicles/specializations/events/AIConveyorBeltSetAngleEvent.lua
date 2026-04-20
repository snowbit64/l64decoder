-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIConveyorBeltSetAngleEvent = {}
local AIConveyorBeltSetAngleEvent_mt = Class(AIConveyorBeltSetAngleEvent, Event)
InitStaticEventClass(AIConveyorBeltSetAngleEvent, "AIConveyorBeltSetAngleEvent", EventIds.EVENT_AIVEHICLE_SET_CONVEYORBELT_ANGLE)
function AIConveyorBeltSetAngleEvent.emptyNew()
  return Event.new(u0)
end
function AIConveyorBeltSetAngleEvent.new(vehicle, currentAngle)
  local v2 = AIConveyorBeltSetAngleEvent.emptyNew()
  v2.currentAngle = currentAngle
  v2.vehicle = vehicle
  return v2
end
function AIConveyorBeltSetAngleEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadInt8(streamId)
  self.currentAngle = v3
  self:run(connection)
end
function AIConveyorBeltSetAngleEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteInt8(streamId, self.currentAngle)
end
function AIConveyorBeltSetAngleEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setAIConveyorBeltAngle(self.currentAngle, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = AIConveyorBeltSetAngleEvent.new(self.vehicle, self.currentAngle)
    v2:broadcastEvent(v4, nil, connection, self.vehicle)
  end
end
