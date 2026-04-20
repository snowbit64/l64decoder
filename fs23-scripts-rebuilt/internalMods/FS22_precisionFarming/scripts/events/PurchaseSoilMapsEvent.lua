-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PurchaseSoilMapsEvent = {}
local PurchaseSoilMapsEvent_mt = Class(PurchaseSoilMapsEvent, Event)
InitEventClass(PurchaseSoilMapsEvent, "PurchaseSoilMapsEvent")
function PurchaseSoilMapsEvent.emptyNew(v0)
  return Event.new(u0)
end
function PurchaseSoilMapsEvent.new(farmlandId)
  local v1 = v1:emptyNew()
  v1.farmlandId = farmlandId
  return v1
end
function PurchaseSoilMapsEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, 8)
  self.farmlandId = v3
  self:run(connection)
end
function PurchaseSoilMapsEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.farmlandId, 8)
end
function PurchaseSoilMapsEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 and g_precisionFarming ~= nil and g_precisionFarming.soilMap ~= nil then
    v2:purchaseSoilMaps(self.farmlandId)
    v2:updatePrecisionFarmingOverlays()
  end
end
