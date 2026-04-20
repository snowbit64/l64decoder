-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ResetYieldMapEvent = {}
local ResetYieldMapEvent_mt = Class(ResetYieldMapEvent, Event)
InitEventClass(ResetYieldMapEvent, "ResetYieldMapEvent")
function ResetYieldMapEvent.emptyNew(v0)
  return Event.new(u0)
end
function ResetYieldMapEvent.new(farmlandId)
  local v1 = v1:emptyNew()
  v1.farmlandId = farmlandId
  return v1
end
function ResetYieldMapEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, 8)
  self.farmlandId = v3
  self:run(connection)
end
function ResetYieldMapEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmlandId, 8)
end
function ResetYieldMapEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 and g_precisionFarming ~= nil and g_precisionFarming.yieldMap ~= nil then
    v2:resetFarmlandYieldArea(self.farmlandId)
    v2:updatePrecisionFarmingOverlays()
  end
end
