-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCupPenaltyEvent = {}
local SuperCupPenaltyEvent_mt = Class(SuperCupPenaltyEvent, Event)
InitEventClass(SuperCupPenaltyEvent, "SuperCupPenaltyEvent")
function SuperCupPenaltyEvent.emptyNew()
  return Event.new(u0)
end
function SuperCupPenaltyEvent.new(object, count)
  local v2 = SuperCupPenaltyEvent.emptyNew()
  v2.object = object
  v2.count = count
  return v2
end
function SuperCupPenaltyEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadInt32(streamId)
  self.count = v3
  self:run(connection)
end
function SuperCupPenaltyEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteInt32(streamId, self.count)
end
function SuperCupPenaltyEvent:run(connection)
  v2:setLostBallCount(self.count, true)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
end
