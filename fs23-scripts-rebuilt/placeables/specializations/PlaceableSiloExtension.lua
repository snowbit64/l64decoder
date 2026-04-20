-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableSiloExtension = {PRICE_SELL_FACTOR = 0.6}
function PlaceableSiloExtension.prerequisitesPresent(v0)
  return true
end
function PlaceableSiloExtension.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "setOwnerFarmId", PlaceableSiloExtension.setOwnerFarmId)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getCanBePlacedAt", PlaceableSiloExtension.getCanBePlacedAt)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "canBeSold", PlaceableSiloExtension.canBeSold)
end
function PlaceableSiloExtension.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableSiloExtension)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableSiloExtension)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableSiloExtension)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableSiloExtension)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableSiloExtension)
  SpecializationUtil.registerEventListener(placeableType, "onSell", PlaceableSiloExtension)
end
function PlaceableSiloExtension:registerXMLPaths(v1)
  self:setXMLSpecializationType("SiloExtension")
  self:register(XMLValueType.BOOL, v1 .. ".siloExtension.storage#foreignSilo", "Shows as foreign silo in the menu", false)
  self:register(XMLValueType.L10N_STRING, v1 .. ".siloExtension#nearSiloWarning", "Warning that is shown if extension is not placed near another silo")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".siloExtension.storage#node", "Storage node")
  Storage.registerXMLPaths(self, v1 .. ".siloExtension.storage")
  self:setXMLSpecializationType()
end
function PlaceableSiloExtension:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("SiloExtension")
  Storage.registerSavegameXMLPaths(self, v1)
  self:setXMLSpecializationType()
end
function PlaceableSiloExtension.initSpecialization()
  v0:addSpecType("siloExtensionVolume", "shopListAttributeIconCapacity", PlaceableSiloExtension.loadSpecValueVolume, PlaceableSiloExtension.getSpecValueVolume, "placeable")
end
function PlaceableSiloExtension:onLoad(savegame)
  local v4 = self.xmlFile:getValue("placeable.siloExtension.storage" .. "#foreignSilo", false)
  self.spec_siloExtension.foreignSilo = v4
  v4 = self.xmlFile:hasProperty("placeable.siloExtension.storage")
  if v4 then
    v4 = Storage.new(self.isServer, self.isClient)
    self.spec_siloExtension.storage = v4
    v4:load(self.components, self.xmlFile, "placeable.siloExtension.storage", self.i3dMappings)
    self.spec_siloExtension.storage.foreignSilo = self.spec_siloExtension.foreignSilo
  else
    Logging.xmlWarning(self.xmlFile, "Missing 'storage' for siloExtension!")
  end
  v4 = v3:getValue("placeable.siloExtension#nearSiloWarning", "warning_siloExtensionNotNearSilo", self.customEnvironment)
  v2.nearSiloWarning = v4
end
function PlaceableSiloExtension:onDelete()
  if self.spec_siloExtension.storage ~= nil then
    local v3 = g_currentMission.storageSystem:hasStorage(self.spec_siloExtension.storage)
    if v3 then
      g_currentMission.storageSystem:removeStorageFromUnloadingStations(self.spec_siloExtension.storage, self.spec_siloExtension.storage.unloadingStations)
      g_currentMission.storageSystem:removeStorageFromLoadingStations(self.spec_siloExtension.storage, self.spec_siloExtension.storage.loadingStations)
      g_currentMission.storageSystem:removeStorage(self.spec_siloExtension.storage)
    end
    v3:delete()
  end
end
function PlaceableSiloExtension:onFinalizePlacement()
  if self.spec_siloExtension.storage ~= nil then
    local v3 = self:getOwnerFarmId()
    local v4 = g_currentMission.storageSystem:getExtendableUnloadingStationsInRange(self.spec_siloExtension.storage, v3)
    local v5 = g_currentMission.storageSystem:getExtendableLoadingStationsInRange(self.spec_siloExtension.storage, v3)
    local v8 = self:getOwnerFarmId()
    v6:setOwnerFarmId(v8, true)
    g_currentMission.storageSystem:addStorage(self.spec_siloExtension.storage)
    v6:register(true)
    g_currentMission.storageSystem:addStorageToUnloadingStations(self.spec_siloExtension.storage, v4)
    g_currentMission.storageSystem:addStorageToLoadingStations(self.spec_siloExtension.storage, v5)
  end
end
function PlaceableSiloExtension:onReadStream(streamId, connection)
  if self.spec_siloExtension.storage ~= nil then
    local storageId = NetworkUtil.readNodeObjectId(streamId)
    v5:readStream(streamId, connection)
    v5:finishRegisterObject(self.spec_siloExtension.storage, storageId)
  end
end
function PlaceableSiloExtension:onWriteStream(streamId, connection)
  if self.spec_siloExtension.storage ~= nil then
    local v6 = NetworkUtil.getObjectId(self.spec_siloExtension.storage)
    NetworkUtil.writeNodeObjectId(...)
    v4:writeStream(streamId, connection)
    v4:registerObjectInStream(connection, self.spec_siloExtension.storage)
  end
end
function PlaceableSiloExtension:getCanBePlacedAt(superFunc, x, y, z, farmId)
  local v6, v7 = superFunc(self, x, y, z, farmId)
  if not v6 then
    return false, v7
  end
  if self.spec_siloExtension.storage == nil then
    return false
  end
  v8.lastFoundUnloadingStations = nil
  v8.lastFoundLoadingStations = nil
  local v10 = g_currentMission.storageSystem:getExtendableUnloadingStationsInRange(v8.storage, farmId, x, y, z)
  v8.lastFoundUnloadingStations = v10
  v10 = g_currentMission.storageSystem:getExtendableLoadingStationsInRange(v8.storage, farmId, x, y, z)
  v8.lastFoundLoadingStations = v10
  if #v8.lastFoundUnloadingStations == 0 and #v8.lastFoundLoadingStations == 0 then
    return false, v8.nearSiloWarning
  end
  return true
end
function PlaceableSiloExtension:canBeSold(superFunc)
  if self.spec_siloExtension.storage == nil then
    return true, nil
  end
  local v6 = v6:getText("info_siloExtensionNotEmpty")
  v2.totalFillTypeSellPrice = 0
  for v8, v9 in pairs(v2.storage.fillLevels) do
    if not (0 < v9) then
      continue
    end
    local v12 = v12:getUnloadingStations()
    for v14, v15 in pairs(...) do
      if not (v15.owningPlaceable ~= nil) then
        continue
      end
      if not v15.isSellingPoint then
        continue
      end
      if not v15.acceptedFillTypes[v8] then
        continue
      end
      local v16 = v15:getEffectiveFillTypePrice(v8)
      if not (0 < v16) then
        continue
      end
      local v17 = math.min(v10, v16)
    end
    if v10 == math.huge then
    end
    v12 = v12:getFillTypeByIndex(v8)
    v17 = v17:getFluid(v9)
    local v18 = v18:getText("unit_literShort")
    local v19 = v19:getText("ui_sellValue")
    local v20 = v20:formatMoney(v9 * v10 * PlaceableSiloExtension.PRICE_SELL_FACTOR, 0, true, true)
    v13 = string.format(...)
    v2.totalFillTypeSellPrice = v2.totalFillTypeSellPrice + v9 * v10 * PlaceableSiloExtension.PRICE_SELL_FACTOR
  end
  if 0 < v4 then
    return true, v3
  end
  return true, nil
end
function PlaceableSiloExtension:loadFromXMLFile(xmlFile, key)
  if self.spec_siloExtension.storage ~= nil then
    v4:loadFromXMLFile(xmlFile, key)
  end
end
function PlaceableSiloExtension:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_siloExtension.storage ~= nil then
    v5:saveToXMLFile(xmlFile, key, usedModNames)
  end
end
function PlaceableSiloExtension:setOwnerFarmId(superFunc, farmId, noEventSend)
  superFunc(self, farmId, noEventSend)
  if self.isServer and self.spec_siloExtension.storage ~= nil then
    v5:setOwnerFarmId(farmId, true)
  end
end
function PlaceableSiloExtension:onSell()
  if self.isServer and 0 < self.spec_siloExtension.totalFillTypeSellPrice then
    local v5 = self:getOwnerFarmId()
    v2:addMoney(self.spec_siloExtension.totalFillTypeSellPrice, v5, MoneyType.HARVEST_INCOME, true, true)
  end
end
function PlaceableSiloExtension:loadSpecValueVolume(v1, v2)
  return self:getValue("placeable.siloExtension.storage#capacity")
end
function PlaceableSiloExtension:getSpecValueVolume(v1)
  if self.specs.siloExtensionVolume == nil then
    return nil
  end
  return v2:formatVolume(self.specs.siloExtensionVolume)
end
