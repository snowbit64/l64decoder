-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCupStopEvent = {}
local SuperCupStopEvent_mt = Class(SuperCupStopEvent, Event)
InitEventClass(SuperCupStopEvent, "SuperCupStopEvent")
function SuperCupStopEvent.emptyNew()
  return Event.new(u0)
end
function SuperCupStopEvent.new(object, playerUserId)
  local v2 = SuperCupStopEvent.emptyNew()
  v2.object = object
  v2.playerUserId = playerUserId
  return v2
end
function SuperCupStopEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteInt8(streamId, self.playerUserId)
end
function SuperCupStopEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadInt8(streamId)
  self.playerUserId = v3
  self:run(connection)
end
function SuperCupStopEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:onStopSuperCup(self.playerUserId)
  end
end
