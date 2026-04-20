-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EnvironmentalScoreEvent = {}
local EnvironmentalScoreEvent_mt = Class(EnvironmentalScoreEvent, Event)
InitEventClass(EnvironmentalScoreEvent, "EnvironmentalScoreEvent")
function EnvironmentalScoreEvent.emptyNew(v0)
  return Event.new(u0)
end
function EnvironmentalScoreEvent.new(farmId)
  local v1 = v1:emptyNew()
  v1.farmId = farmId
  return v1
end
function EnvironmentalScoreEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  if g_precisionFarming ~= nil and g_precisionFarming.environmentalScore ~= nil then
    v4:readStream(streamId, connection, self.farmId)
  end
end
function EnvironmentalScoreEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  if g_precisionFarming ~= nil and g_precisionFarming.environmentalScore ~= nil then
    v4:writeStream(streamId, connection, self.farmId)
  end
end
