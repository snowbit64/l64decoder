-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RequestFarmlandStatisticsEvent = {}
local RequestFarmlandStatisticsEvent_mt = Class(RequestFarmlandStatisticsEvent, Event)
InitEventClass(RequestFarmlandStatisticsEvent, "RequestFarmlandStatisticsEvent")
function RequestFarmlandStatisticsEvent.emptyNew(v0)
  return Event.new(u0)
end
function RequestFarmlandStatisticsEvent.new(farmlandId)
  local v1 = v1:emptyNew()
  v1.farmlandId = farmlandId
  return v1
end
function RequestFarmlandStatisticsEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, 8)
  self.farmlandId = v3
  self:run(connection)
end
function RequestFarmlandStatisticsEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmlandId, 8)
end
function RequestFarmlandStatisticsEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v4 = FarmlandStatisticsEvent.new(self.farmlandId)
    v2:broadcastEvent(v4, false, nil, nil, true, {connection})
  end
end
