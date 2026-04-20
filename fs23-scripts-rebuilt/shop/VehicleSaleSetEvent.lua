-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSaleSetEvent = {}
local VehicleSaleSetEvent_mt = Class(VehicleSaleSetEvent, Event)
InitStaticEventClass(VehicleSaleSetEvent, "VehicleSaleSetEvent", EventIds.EVENT_VEHICLE_SALE_SET)
function VehicleSaleSetEvent.emptyNew()
  return Event.new(u0)
end
function VehicleSaleSetEvent.new(vehicle, saleItem)
  local v2 = VehicleSaleSetEvent.emptyNew()
  v2.vehicle = vehicle
  v2.saleItem = saleItem
  return v2
end
function VehicleSaleSetEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  local v5 = streamReadUInt8(streamId)
  v3 = v3:getSaleById(...)
  self.saleItem = v3
  self:run(connection)
end
function VehicleSaleSetEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteUInt8(streamId, self.saleItem.id)
end
function VehicleSaleSetEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    v2:setVehicleState(self.vehicle, self.saleItem, true)
  end
end
