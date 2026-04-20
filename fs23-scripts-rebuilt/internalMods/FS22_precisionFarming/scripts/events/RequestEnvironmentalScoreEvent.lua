-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RequestEnvironmentalScoreEvent = {}
local RequestEnvironmentalScoreEvent_mt = Class(RequestEnvironmentalScoreEvent, Event)
InitEventClass(RequestEnvironmentalScoreEvent, "RequestEnvironmentalScoreEvent")
function RequestEnvironmentalScoreEvent.emptyNew(v0)
  return Event.new(u0)
end
function RequestEnvironmentalScoreEvent.new(farmId)
  local v1 = v1:emptyNew()
  v1.farmId = farmId
  return v1
end
function RequestEnvironmentalScoreEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  self:run(connection)
end
function RequestEnvironmentalScoreEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function RequestEnvironmentalScoreEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v4 = EnvironmentalScoreEvent.new(self.farmId)
    v2:broadcastEvent(v4, false, nil, nil, true, {connection})
  end
end
