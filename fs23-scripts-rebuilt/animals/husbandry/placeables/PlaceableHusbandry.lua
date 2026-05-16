-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHusbandry = {}
function PlaceableHusbandry.prerequisitesPresent(v0)
  return true
end
function PlaceableHusbandry.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onHusbandryFillLevelChanged")
end
function PlaceableHusbandry.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "onAddedStorageToLoadingStation", PlaceableHusbandry.onAddedStorageToLoadingStation)
  SpecializationUtil.registerFunction(placeableType, "onRemovedStorageFromLoadingStation", PlaceableHusbandry.onRemovedStorageFromLoadingStation)
  SpecializationUtil.registerFunction(placeableType, "onAddedStorageToUnloadingStation", PlaceableHusbandry.onAddedStorageToUnloadingStation)
  SpecializationUtil.registerFunction(placeableType, "onRemovedStorageFromUnloadingStation", PlaceableHusbandry.onRemovedStorageFromUnloadingStation)
  SpecializationUtil.registerFunction(placeableType, "updateFeeding", PlaceableHusbandry.updateFeeding)
  SpecializationUtil.registerFunction(placeableType, "updateProduction", PlaceableHusbandry.updateProduction)
  SpecializationUtil.registerFunction(placeableType, "updateOutput", PlaceableHusbandry.updateOutput)
  SpecializationUtil.registerFunction(placeableType, "getGlobalProductionFactor", PlaceableHusbandry.getGlobalProductionFactor)
  SpecializationUtil.registerFunction(placeableType, "getConditionInfos", PlaceableHusbandry.getConditionInfos)
  SpecializationUtil.registerFunction(placeableType, "getFoodInfos", PlaceableHusbandry.getFoodInfos)
  SpecializationUtil.registerFunction(placeableType, "getAnimalInfos", PlaceableHusbandry.getAnimalInfos)
  SpecializationUtil.registerFunction(placeableType, "getAnimalDescription", PlaceableHusbandry.getAnimalDescription)
  SpecializationUtil.registerFunction(placeableType, "getHusbandryCapacity", PlaceableHusbandry.getHusbandryCapacity)
  SpecializationUtil.registerFunction(placeableType, "getHusbandryFreeCapacity", PlaceableHusbandry.getHusbandryFreeCapacity)
  SpecializationUtil.registerFunction(placeableType, "addHusbandryFillLevelFromTool", PlaceableHusbandry.addHusbandryFillLevelFromTool)
  SpecializationUtil.registerFunction(placeableType, "removeHusbandryFillLevel", PlaceableHusbandry.removeHusbandryFillLevel)
  SpecializationUtil.registerFunction(placeableType, "getHusbandryFillLevel", PlaceableHusbandry.getHusbandryFillLevel)
  SpecializationUtil.registerFunction(placeableType, "getHusbandryIsFillTypeSupported", PlaceableHusbandry.getHusbandryIsFillTypeSupported)
end
function PlaceableHusbandry.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "setOwnerFarmId", PlaceableHusbandry.setOwnerFarmId)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "collectPickObjects", PlaceableHusbandry.collectPickObjects)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getCanBePlacedAt", PlaceableHusbandry.getCanBePlacedAt)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "canBuy", PlaceableHusbandry.canBuy)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getNeedHourChanged", PlaceableHusbandry.getNeedHourChanged)
end
function PlaceableHusbandry.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHusbandry)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHusbandry)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableHusbandry)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableHusbandry)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableHusbandry)
  SpecializationUtil.registerEventListener(placeableType, "onReadUpdateStream", PlaceableHusbandry)
  SpecializationUtil.registerEventListener(placeableType, "onWriteUpdateStream", PlaceableHusbandry)
  SpecializationUtil.registerEventListener(placeableType, "onHourChanged", PlaceableHusbandry)
  SpecializationUtil.registerEventListener(placeableType, "onBuy", PlaceableHusbandry)
end
function PlaceableHusbandry:registerXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.STRING, v1 .. ".husbandry#saveId", "Save id")
  self:register(XMLValueType.BOOL, v1 .. ".husbandry#hasStatistics", "Has statistics", false)
  self:register(XMLValueType.FLOAT, v1 .. ".husbandry.production#threshold", "Threshold for production increase", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. ".husbandry.production#increasePerHour", "Production increase if production factor bigger then threshold", 0.1)
  self:register(XMLValueType.FLOAT, v1 .. ".husbandry.production#decreasePerHour", "Production increase if production factor less then threshold", 0.2)
  UnloadingStation.registerXMLPaths(self, v1 .. ".husbandry.unloadingStation")
  Storage.registerXMLPaths(self, v1 .. ".husbandry.storage")
  LoadingStation.registerXMLPaths(self, v1 .. ".husbandry.loadingStation")
  self:setXMLSpecializationType()
end
function PlaceableHusbandry:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.STRING, v1 .. ".module(?)#name", "Name of module")
  self:register(XMLValueType.FLOAT, v1 .. "#globalProductionFactor", "Global production factor")
  Storage.registerSavegameXMLPaths(self, v1 .. ".storage")
  self:setXMLSpecializationType()
end
function PlaceableHusbandry:onLoad(savegame)
  self.spec_husbandry.fillLevelChangedListener = {}
  self.spec_husbandry.targetStorages = {}
  self.spec_husbandry.hideFromPricesMenu = true
  self.spec_husbandry.globalProductionFactor = 0
  local v4 = self:getNextDirtyFlag()
  self.spec_husbandry.husbandryDirtyFlag = v4
  v4 = self.xmlFile:hasProperty("placeable.husbandry.unloadingStation")
  if v4 then
    v4 = UnloadingStation.new(self.isServer, self.isClient)
    self.spec_husbandry.unloadingStation = v4
    v4 = v4:load(self.components, self.xmlFile, "placeable.husbandry.unloadingStation", self.customEnvironment, self.i3dMappings, self.components[1].node)
    if v4 then
      self.spec_husbandry.unloadingStation.owningPlaceable = self
      self.spec_husbandry.unloadingStation.hasStoragePerFarm = false
    else
      v4:delete()
      Logging.xmlError(self.xmlFile, "Failed to load unloading station")
      self:setLoadingState(Placeable.LOADING_STATE_ERROR)
      return
    end
  end
  v4 = v3:hasProperty("placeable.husbandry.storage")
  if v4 then
    v4 = Storage.new(self.isServer, self.isClient)
    v2.storage = v4
    v4 = v4:load(self.components, v3, "placeable.husbandry.storage", self.i3dMappings)
    if not v4 then
      v4:delete()
      Logging.xmlError(v3, "Failed to load storage")
      self:setLoadingState(Placeable.LOADING_STATE_ERROR)
      return
    end
  end
  v4 = v3:hasProperty("placeable.husbandry.loadingStation")
  if v4 then
    v4 = LoadingStation.new(self.isServer, self.isClient)
    v2.loadingStation = v4
    v4 = v4:load(self.components, v3, "placeable.husbandry.loadingStation", self.customEnvironment, self.i3dMappings, self.components[1].node)
    if v4 then
      v2.loadingStation.owningPlaceable = self
      v2.loadingStation.hasStoragePerFarm = false
    else
      v4:delete()
      Logging.xmlError(v3, "Failed to load loading station")
      self:setLoadingState(Placeable.LOADING_STATE_ERROR)
      return
    end
  end
  v2.fillLevelChangedCallback = function(self, savegame)
    SpecializationUtil.raiseEvent(u0, "onHusbandryFillLevelChanged", self, savegame)
  end
  local v6 = v3:getValue("placeable.husbandry.production#threshold", 0.5)
  local v5 = math.abs(...)
  v4 = MathUtil.clamp(v5, 0.01, 0.99)
  v2.productionThreshold = v4
  v5 = v3:getValue("placeable.husbandry.production#increasePerHour", 0.1)
  v4 = math.abs(...)
  v2.productionChangePerHourIncrease = v4
  v5 = v3:getValue("placeable.husbandry.production#decreasePerHour", 0.2)
  v4 = math.abs(...)
  v2.productionChangePerHourDecrease = v4
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
end
function PlaceableHusbandry:onDelete()
  if self.spec_husbandry.unloadingStation ~= nil then
    g_currentMission.storageSystem:removeStorageFromUnloadingStations(self.spec_husbandry.storage, {self.spec_husbandry.unloadingStation})
    g_currentMission.storageSystem:removeUnloadingStation(self.spec_husbandry.unloadingStation, self)
    v3:delete()
    self.spec_husbandry.unloadingStation = nil
  end
  if v1.loadingStation ~= nil then
    local v3 = v3:getIsFillTypeSupported(FillType.LIQUIDMANURE)
    if v3 then
      v3:removeLiquidManureLoadingStation(v1.loadingStation)
    end
    v2:removeStorageFromLoadingStations(v1.storage, {v1.loadingStation})
    v2:removeLoadingStation(v1.loadingStation, self)
    v3:delete()
    v1.loadingStation = nil
  end
  if v1.storage ~= nil then
    v2:removeStorage(v1.storage)
    v3:delete()
    v1.storage = nil
  end
  v3:unsubscribe(MessageType.STORAGE_ADDED_TO_LOADING_STATION, self)
  v3:unsubscribe(MessageType.STORAGE_REMVOED_FROM_LOADING_STATION, self)
  v3:unsubscribe(MessageType.STORAGE_ADDED_TO_UNLOADING_STATION, self)
  v3:unsubscribe(MessageType.STORAGE_REMVOED_FROM_UNLOADING_STATION, self)
  v3:removePlaceable(self)
end
function PlaceableHusbandry:onFinalizePlacement()
  v2:subscribe(MessageType.STORAGE_ADDED_TO_LOADING_STATION, self.onAddedStorageToLoadingStation, self)
  v2:subscribe(MessageType.STORAGE_REMOVED_FROM_LOADING_STATION, self.onRemovedStorageFromLoadingStation, self)
  v2:subscribe(MessageType.STORAGE_ADDED_TO_UNLOADING_STATION, self.onAddedStorageToUnloadingStation, self)
  v2:subscribe(MessageType.STORAGE_REMOVED_FROM_UNLOADING_STATION, self.onRemovedStorageFromUnloadingStation, self)
  local farmId = self:getOwnerFarmId()
  if farmId == AccessHandler.EVERYONE then
  end
  if v5 ~= nil then
    v5:setOwnerFarmId(v7, true)
    v5:register(true)
    v4:addLoadingStation(v5, self)
    local v8 = v5:getIsFillTypeSupported(FillType.LIQUIDMANURE)
    if v8 then
      v8:addLiquidManureLoadingStation(v5)
    end
  end
  if v3 ~= nil then
    v3:setOwnerFarmId(v7, true)
    v3:register(true)
    v4:addUnloadingStation(v3, self)
  end
  if v2 ~= nil then
    v2:setOwnerFarmId(v7, true)
    v2:register(true)
    v4:addStorage(v2)
    if v3 ~= nil then
      v4:addStorageToUnloadingStation(v2, v3)
    end
    if v5 ~= nil then
      v4:addStorageToLoadingStation(v2, v5)
    end
  end
  v8:addPlaceable(self)
end
function PlaceableHusbandry:onReadStream(streamId, connection)
  if self.spec_husbandry.unloadingStation ~= nil then
    local v4 = NetworkUtil.readNodeObjectId(streamId)
    v5:readStream(streamId, connection)
    v5:finishRegisterObject(self.spec_husbandry.unloadingStation, v4)
  end
  if v3.loadingStation ~= nil then
    v4 = NetworkUtil.readNodeObjectId(streamId)
    v5:readStream(streamId, connection)
    v5:finishRegisterObject(v3.loadingStation, v4)
  end
  if v3.storage ~= nil then
    v4 = NetworkUtil.readNodeObjectId(streamId)
    v5:readStream(streamId, connection)
    v5:finishRegisterObject(v3.storage, v4)
  end
  local v5 = streamReadUInt8(streamId)
  v3.globalProductionFactor = v5 / 255
end
function PlaceableHusbandry:onWriteStream(streamId, connection)
  if self.spec_husbandry.unloadingStation ~= nil then
    local v6 = NetworkUtil.getObjectId(self.spec_husbandry.unloadingStation)
    NetworkUtil.writeNodeObjectId(...)
    v4:writeStream(streamId, connection)
    v4:registerObjectInStream(connection, self.spec_husbandry.unloadingStation)
  end
  if v3.loadingStation ~= nil then
    v6 = NetworkUtil.getObjectId(v3.loadingStation)
    NetworkUtil.writeNodeObjectId(...)
    v4:writeStream(streamId, connection)
    v4:registerObjectInStream(connection, v3.loadingStation)
  end
  if v3.storage ~= nil then
    v6 = NetworkUtil.getObjectId(v3.storage)
    NetworkUtil.writeNodeObjectId(...)
    v4:writeStream(streamId, connection)
    v4:registerObjectInStream(connection, v3.storage)
  end
  v6 = MathUtil.round(v3.globalProductionFactor * 255)
  streamWriteUInt8(...)
end
function PlaceableHusbandry:onReadUpdateStream(streamId, connection)
  local v5 = streamReadUInt8(streamId)
  self.spec_husbandry.globalProductionFactor = v5 / 100
end
function PlaceableHusbandry:onWriteUpdateStream(streamId, connection)
  local v6 = MathUtil.round(self.spec_husbandry.globalProductionFactor * 100)
  streamWriteUInt8(...)
end
function PlaceableHusbandry:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_husbandry.storage ~= nil then
    v5:saveToXMLFile(xmlFile, key .. ".storage", usedModNames)
  end
  xmlFile:setValue(key .. "#globalProductionFactor", v4.globalProductionFactor)
end
function PlaceableHusbandry:loadFromXMLFile(xmlFile, key)
  if self.spec_husbandry.storage ~= nil then
    v4:loadFromXMLFile(xmlFile, key .. ".storage")
  end
  local v4 = xmlFile:getValue(key .. "#globalProductionFactor", v3.globalProductionFactor)
  v3.globalProductionFactor = v4
end
function PlaceableHusbandry:setOwnerFarmId(superFunc, farmId, noEventSend)
  superFunc(self, farmId, noEventSend)
  if farmId == AccessHandler.EVERYONE then
  end
  if v4.storage ~= nil then
    v6:setOwnerFarmId(v5, true)
  end
  if v4.loadingStation ~= nil then
    v6:setOwnerFarmId(v5, true)
  end
  if v4.unloadingStation ~= nil then
    v6:setOwnerFarmId(v5, true)
  end
end
function PlaceableHusbandry:collectPickObjects(superFunc, node, target)
  if self.spec_husbandry.unloadingStation ~= nil then
    for v8, v9 in ipairs(self.spec_husbandry.unloadingStation.unloadTriggers) do
      if not (node == v9.exactFillRootNode) then
        continue
      end
      return
    end
  end
  if v4.loadingStation ~= nil then
    for v8, v9 in ipairs(v4.loadingStation.loadTriggers) do
      if not (node == v9.triggerNode) then
        continue
      end
      return
    end
  end
  superFunc(self, node, target)
end
function PlaceableHusbandry.getCanBePlacedAt(v0, v1, v2, v3, v4, v5)
  local v6 = v6:getLimitReached()
  if v6 then
    local v7 = v7:getText("warning_tooManyHusbandries")
    return false
  end
  v6 = v1(v0, v2, v3, v4)
  return v6
end
function PlaceableHusbandry.canBuy(v0, v1)
  local v2 = v2:getLimitReached()
  if v2 then
    local v3 = v3:getText("warning_tooManyHusbandries")
    return false
  end
  v2 = v1(v0)
  return v2
end
function PlaceableHusbandry:onHourChanged(currentHour)
  if self.isServer then
    local foodFactor = self:updateFeeding()
    local productionFactor = self:updateProduction(foodFactor)
    if self.spec_husbandry.productionThreshold < productionFactor then
    else
    end
    local v8 = MathUtil.clamp(v2.globalProductionFactor + v6 * v5, 0, 1)
    v2.globalProductionFactor = v8
    self:updateOutput(foodFactor, productionFactor, v2.globalProductionFactor)
    self:raiseDirtyFlags(v2.dirtyFlag)
  end
end
function PlaceableHusbandry:onBuy()
  if self.spec_husbandry.unloadingStation ~= nil then
    local v8 = self:getOwnerFarmId()
    local v5 = g_currentMission.storageSystem:getStorageExtensionsInRange(...)
    for v9, v10 in ipairs(v5) do
      if v2.targetStorages[v10] == nil then
        v3:addStorageToUnloadingStation(v10, v2)
      end
      if not (v4 ~= nil) then
        continue
      end
      if not (v4.sourceStorages[v10] == nil) then
        continue
      end
      v3:addStorageToLoadingStation(v10, v4)
    end
  end
end
function PlaceableHusbandry.getNeedHourChanged(v0, v1)
  return true
end
function PlaceableHusbandry.updateFeeding(v0)
  return 1
end
function PlaceableHusbandry.updateProduction(v0, v1)
  return v1
end
function PlaceableHusbandry.updateOutput(v0, v1, v2, v3)
end
function PlaceableHusbandry:getGlobalProductionFactor()
  return self.spec_husbandry.globalProductionFactor
end
function PlaceableHusbandry.getConditionInfos(v0)
  return {}
end
function PlaceableHusbandry.getFoodInfos(v0)
  return {}
end
function PlaceableHusbandry.getAnimalInfos(v0)
  return {}
end
function PlaceableHusbandry.getAnimalDescription(v0, v1)
  return ""
end
function PlaceableHusbandry:getHusbandryCapacity(fillTypeIndex, farmId)
  if self.spec_husbandry.unloadingStation == nil then
    return 0
  end
  if not farmId then
    local v7 = self:getOwnerFarmId()
  end
  return v4:getCapacity(v6, v7)
end
function PlaceableHusbandry:getHusbandryFreeCapacity(fillTypeIndex, farmId)
  if self.spec_husbandry.unloadingStation == nil then
    return 0
  end
  if not farmId then
    local v7 = self:getOwnerFarmId()
  end
  return v4:getFreeCapacity(v6, v7)
end
function PlaceableHusbandry:addHusbandryFillLevelFromTool(farmId, deltaFillLevel, fillTypeIndex, fillPositionData, toolType, extraAttributes)
  if self.spec_husbandry.unloadingStation == nil then
    return 0
  end
  if not farmId then
    local v10 = self:getOwnerFarmId()
  end
  return v8:addFillLevelFromTool(v10, deltaFillLevel, fillTypeIndex, fillPositionData, toolType, extraAttributes)
end
function PlaceableHusbandry:removeHusbandryFillLevel(farmId, deltaFillLevel, fillTypeIndex)
  if self.spec_husbandry.loadingStation == nil then
    return deltaFillLevel
  end
  if not farmId then
    local v9 = self:getOwnerFarmId()
  end
  return v5:removeFillLevel(v7, v8, v9)
end
function PlaceableHusbandry:getHusbandryFillLevel(fillTypeIndex, farmId)
  if self.spec_husbandry.unloadingStation == nil then
    return 0
  end
  if not farmId then
    local v7 = self:getOwnerFarmId()
  end
  return v4:getFillLevel(v6, v7)
end
function PlaceableHusbandry:getHusbandryIsFillTypeSupported(fillTypeIndex)
  if self.spec_husbandry.unloadingStation == nil then
    return false
  end
  return v3:getIsFillTypeSupported(fillTypeIndex)
end
function PlaceableHusbandry:onAddedStorageToLoadingStation(storage, loadingStation)
  if self.spec_husbandry.loadingStation ~= nil and self.spec_husbandry.loadingStation == loadingStation then
    storage:addFillLevelChangedListeners(self.spec_husbandry.fillLevelChangedCallback)
  end
end
function PlaceableHusbandry:onRemovedStorageFromLoadingStation(storage, loadingStation)
  if self.spec_husbandry.loadingStation ~= nil and self.spec_husbandry.loadingStation == loadingStation then
    storage:removeFillLevelChangedListeners(self.spec_husbandry.fillLevelChangedCallback)
  end
end
function PlaceableHusbandry:onAddedStorageToUnloadingStation(storage, unloadingStation)
  if self.spec_husbandry.unloadingStation ~= nil and self.spec_husbandry.unloadingStation == unloadingStation then
    storage:addFillLevelChangedListeners(self.spec_husbandry.fillLevelChangedCallback)
  end
end
function PlaceableHusbandry:onRemovedStorageFromUnloadingStation(storage, unloadingStation)
  if self.spec_husbandry.unloadingStation ~= nil and self.spec_husbandry.unloadingStation == unloadingStation then
    storage:removeFillLevelChangedListeners(self.spec_husbandry.fillLevelChangedCallback)
  end
end
