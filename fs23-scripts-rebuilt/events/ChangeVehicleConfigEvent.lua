-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChangeVehicleConfigEvent = {}
local ChangeVehicleConfigEvent_mt = Class(ChangeVehicleConfigEvent, Event)
InitStaticEventClass(ChangeVehicleConfigEvent, "ChangeVehicleConfigEvent", EventIds.EVENT_CHANGE_VEHICLE_CONFIG)
function ChangeVehicleConfigEvent.emptyNew()
  return Event.new(u0)
end
function ChangeVehicleConfigEvent.new(vehicle, price, farmId, configurations, licensePlateData)
  local v5 = ChangeVehicleConfigEvent.emptyNew()
  v5.vehicle = vehicle
  v5.farmId = farmId
  v5.configurations = configurations
  v5.licensePlateData = licensePlateData
  v5.price = price
  return v5
end
function ChangeVehicleConfigEvent.newServerToClient(successful)
  local v1 = ChangeVehicleConfigEvent.emptyNew()
  v1.successful = successful
  return v1
end
function ChangeVehicleConfigEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.vehicle = v3
    v3 = streamReadFloat32(streamId)
    self.price = v3
    v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.farmId = v3
    v3 = streamReadUInt8(streamId)
    self.configurations = {}
    -- TODO: structure LOP_FORNPREP (pc 35, target 57)
    local v9 = streamReadUIntN(streamId, ConfigurationUtil.SEND_NUM_BITS)
    local v7 = v7:getConfigurationNameByIndex(...)
    local v8 = streamReadUIntN(streamId, ConfigurationUtil.SEND_NUM_BITS)
    self.configurations[v7] = v8
    -- TODO: structure LOP_FORNLOOP (pc 56, target 36)
    local v4 = LicensePlateManager.readLicensePlateData(streamId, connection)
    self.licensePlateData = v4
  else
    v3 = streamReadBool(streamId)
    self.successful = v3
  end
  self:run(connection)
end
function ChangeVehicleConfigEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.vehicle)
    streamWriteFloat32(streamId, self.price)
    streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    for v7, v8 in pairs(self.configurations) do
    end
    streamWriteUInt8(streamId, v3)
    for v7, v8 in pairs(self.configurations) do
      local v11 = v11:getConfigurationIndexByName(v7)
      streamWriteUIntN(streamId, v11, ConfigurationUtil.SEND_NUM_BITS)
      streamWriteUIntN(streamId, v8, ConfigurationUtil.SEND_NUM_BITS)
    end
    LicensePlateManager.writeLicensePlateData(streamId, connection, self.licensePlateData)
    return
  end
  streamWriteBool(streamId, self.successful)
end
function ChangeVehicleConfigEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    if self.vehicle ~= nil then
      -- if not v0.vehicle.isVehicleSaved then goto L87 end
      -- if v0.vehicle.isControlled then goto L87 end
      local v4 = v4:getHasPlayerPermission("buyVehicle", connection)
      -- if not v4 then goto L87 end
      for v7, v8 in pairs(self.configurations) do
        ConfigurationUtil.addBoughtConfiguration(v3, v7, v8)
        ConfigurationUtil.setConfiguration(v3, v7, v8)
      end
      v3:setLicensePlatesData(self.licensePlateData)
      v3.isReconfigurating = true
      v6 = VehicleSetIsReconfiguratingEvent.new(v3)
      v4:broadcastEvent(v6, nil, nil, v3)
      v4 = Vehicle.getReloadXML(v3)
      VehicleLoadingUtil.loadVehicleFromSavegameXML(v4, "vehicles.vehicle(0)", false, false, nil, nil, function(self, connection, v2, v3)
        if v2 == VehicleLoadingUtil.VEHICLE_LOAD_OK then
          u0 = true
          v4:addMoney(-u1.price, u1.farmId, MoneyType.SHOP_VEHICLE_BUY, true)
          v4:removeFromPhysics()
          v4:removeVehicle(u2)
        else
          v4:removeVehicle(connection)
          v4:addToPhysics()
        end
        v4:delete()
        local v6 = ChangeVehicleConfigEvent.newServerToClient(u0)
        v4:sendEvent(...)
      end, nil, {})
    else
      v6 = ChangeVehicleConfigEvent.newServerToClient(false)
      connection:sendEvent(...)
    end
    return
  end
  v2:onVehicleChanged(self.successful)
end
