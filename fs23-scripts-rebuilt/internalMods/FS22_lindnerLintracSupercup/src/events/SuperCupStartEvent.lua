-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCupStartEvent = {}
local SuperCupStartEvent_mt = Class(SuperCupStartEvent, Event)
InitEventClass(SuperCupStartEvent, "SuperCupStartEvent")
function SuperCupStartEvent.emptyNew()
  return Event.new(u0)
end
function SuperCupStartEvent.new(object, playerUserId)
  local v2 = SuperCupStartEvent.emptyNew()
  v2.object = object
  v2.playerUserId = playerUserId
  return v2
end
function SuperCupStartEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteInt8(streamId, self.playerUserId)
end
function SuperCupStartEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadInt8(streamId)
  self.playerUserId = v3
  self:run(connection)
end
function SuperCupStartEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:onStartSuperCup(self.playerUserId)
  end
end
