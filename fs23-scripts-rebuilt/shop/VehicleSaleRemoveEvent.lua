-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSaleRemoveEvent = {}
local VehicleSaleRemoveEvent_mt = Class(VehicleSaleRemoveEvent, Event)
InitStaticEventClass(VehicleSaleRemoveEvent, "VehicleSaleRemoveEvent", EventIds.EVENT_VEHICLE_SALE_REMOVE)
function VehicleSaleRemoveEvent.emptyNew()
  return Event.new(u0)
end
function VehicleSaleRemoveEvent.new(saleItemId)
  local v1 = VehicleSaleRemoveEvent.emptyNew()
  v1.saleItemId = saleItemId
  return v1
end
function VehicleSaleRemoveEvent:readStream(streamId, connection)
  local v3 = streamReadUInt8(streamId)
  self.saleItemId = v3
  self:run(connection)
end
function VehicleSaleRemoveEvent:writeStream(streamId, connection)
  streamWriteUInt8(streamId, self.saleItemId)
end
function VehicleSaleRemoveEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    v2:removeSaleWithId(self.saleItemId, true)
  end
end
