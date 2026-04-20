-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AdditionalFieldBuyInfoEvent = {}
local AdditionalFieldBuyInfoEvent_mt = Class(AdditionalFieldBuyInfoEvent, Event)
InitEventClass(AdditionalFieldBuyInfoEvent, "AdditionalFieldBuyInfoEvent")
function AdditionalFieldBuyInfoEvent.emptyNew(v0)
  return Event.new(u0)
end
function AdditionalFieldBuyInfoEvent.new(farmlandId)
  local v1 = v1:emptyNew()
  v1.farmlandId = farmlandId
  return v1
end
function AdditionalFieldBuyInfoEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, g_farmlandManager.numberOfBits)
  self.farmlandId = v3
  if g_precisionFarming ~= nil and g_precisionFarming.additionalFieldBuyInfo ~= nil then
    v4:readInfoFromStream(self.farmlandId, streamId, connection)
  end
end
function AdditionalFieldBuyInfoEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmlandId, g_farmlandManager.numberOfBits)
  if g_precisionFarming ~= nil and g_precisionFarming.additionalFieldBuyInfo ~= nil then
    v4:writeInfoToStream(self.farmlandId, streamId, connection)
  end
end
