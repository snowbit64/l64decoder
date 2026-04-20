-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmlandStatisticsEvent = {}
local FarmlandStatisticsEvent_mt = Class(FarmlandStatisticsEvent, Event)
InitEventClass(FarmlandStatisticsEvent, "FarmlandStatisticsEvent")
function FarmlandStatisticsEvent.emptyNew(v0)
  return Event.new(u0)
end
function FarmlandStatisticsEvent.new(farmlandId)
  local v1 = v1:emptyNew()
  v1.farmlandId = farmlandId
  return v1
end
function FarmlandStatisticsEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, 8)
  self.farmlandId = v3
  if g_precisionFarming ~= nil and g_precisionFarming.farmlandStatistics ~= nil then
    v4:readStatisticFromStream(self.farmlandId, streamId, connection)
  end
end
function FarmlandStatisticsEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmlandId, 8)
  if g_precisionFarming ~= nil and g_precisionFarming.farmlandStatistics ~= nil then
    v4:writeStatisticToStream(self.farmlandId, streamId, connection)
  end
end
