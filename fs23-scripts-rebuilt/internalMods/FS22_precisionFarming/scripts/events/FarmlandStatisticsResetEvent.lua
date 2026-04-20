-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmlandStatisticsResetEvent = {}
local FarmlandStatisticsResetEvent_mt = Class(FarmlandStatisticsResetEvent, Event)
InitEventClass(FarmlandStatisticsResetEvent, "FarmlandStatisticsResetEvent")
function FarmlandStatisticsResetEvent.emptyNew(v0)
  return Event.new(u0)
end
function FarmlandStatisticsResetEvent.new(farmlandId)
  local v1 = v1:emptyNew()
  v1.farmlandId = farmlandId
  return v1
end
function FarmlandStatisticsResetEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, 8)
  self.farmlandId = v3
  if g_precisionFarming ~= nil and g_precisionFarming.farmlandStatistics ~= nil then
    v4:resetStatistic(self.farmlandId, true)
  end
end
function FarmlandStatisticsResetEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmlandId, 8)
end
