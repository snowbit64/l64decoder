-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSaleAddEvent = {}
local VehicleSaleAddEvent_mt = Class(VehicleSaleAddEvent, Event)
InitStaticEventClass(VehicleSaleAddEvent, "VehicleSaleAddEvent", EventIds.EVENT_VEHICLE_SALE_ADD)
function VehicleSaleAddEvent.emptyNew()
  return Event.new(u0, NetworkNode.CHANNEL_SECONDARY)
end
function VehicleSaleAddEvent.new(saleItem)
  local v1 = VehicleSaleAddEvent.emptyNew()
  v1.saleItem = saleItem
  return v1
end
function VehicleSaleAddEvent:readStream(streamId, connection)
  local numConfigurations = streamReadUInt8(streamId)
  local v5 = streamReadString(streamId)
  numConfigurations = NetworkUtil.convertFromNetworkFilename(...)
  numConfigurations = streamReadUInt16(streamId)
  numConfigurations = streamReadInt32(streamId)
  numConfigurations = NetworkUtil.readCompressedPercentages(streamId, 10)
  numConfigurations = NetworkUtil.readCompressedPercentages(streamId, 10)
  numConfigurations = streamReadFloat32(streamId)
  numConfigurations = streamReadUInt8(streamId)
  -- TODO: structure LOP_FORNPREP (pc 60, target 94)
  local v10 = streamReadUIntN(streamId, ConfigurationUtil.SEND_NUM_BITS)
  local v8 = v8:getConfigurationNameByIndex(...)
  local v9 = streamReadUIntN(streamId, ConfigurationUtil.SEND_NUM_BITS)
  if {id = numConfigurations, xmlFilename = numConfigurations, age = numConfigurations, price = numConfigurations, damage = numConfigurations, wear = numConfigurations, operatingTime = numConfigurations, boughtConfigurations = {}}.boughtConfigurations[v8] == nil then
    {id = numConfigurations, xmlFilename = numConfigurations, age = numConfigurations, price = numConfigurations, damage = numConfigurations, wear = numConfigurations, operatingTime = numConfigurations, boughtConfigurations = {}}.boughtConfigurations[v8] = {}
  end
  v3.boughtConfigurations[v8][v9] = true
  -- TODO: structure LOP_FORNLOOP (pc 93, target 61)
  self.saleItem = v3
  self:run(connection)
end
function VehicleSaleAddEvent:writeStream(streamId, connection)
  streamWriteUInt8(streamId, self.saleItem.id)
  local v6 = NetworkUtil.convertToNetworkFilename(self.saleItem.xmlFilename)
  streamWriteString(...)
  streamWriteUInt16(streamId, self.saleItem.age)
  streamWriteInt32(streamId, self.saleItem.price)
  NetworkUtil.writeCompressedPercentages(streamId, self.saleItem.damage, 10)
  NetworkUtil.writeCompressedPercentages(streamId, self.saleItem.wear, 10)
  streamWriteFloat32(streamId, self.saleItem.operatingTime)
  for v8, v9 in pairs(self.saleItem.boughtConfigurations) do
    for v13, v14 in pairs(v9) do
      local v18 = v18:getConfigurationIndexByName(v8)
      table.insert(v4, {nameId = v18, configId = v13})
    end
  end
  streamWriteUInt8(streamId, #v4)
  -- TODO: structure LOP_FORNPREP (pc 91, target 111)
  streamWriteUIntN(streamId, v4[1].nameId, ConfigurationUtil.SEND_NUM_BITS)
  streamWriteUIntN(streamId, v4[1].configId, ConfigurationUtil.SEND_NUM_BITS)
  -- TODO: structure LOP_FORNLOOP (pc 110, target 92)
end
function VehicleSaleAddEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    v2:addSale(self.saleItem, true)
  end
end
