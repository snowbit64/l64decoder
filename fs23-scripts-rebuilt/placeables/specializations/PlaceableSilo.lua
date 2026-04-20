-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableSilo = {PRICE_SELL_FACTOR = 0.7, REFILL_PRICE_FACTOR = 1.1, INFO_TRIGGER_NUM_DISPLAYED_FILLTYPES = 6}
function PlaceableSilo.prerequisitesPresent(v0)
  return true
end
function PlaceableSilo.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "collectPickObjects", PlaceableSilo.collectPickObjects)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "setOwnerFarmId", PlaceableSilo.setOwnerFarmId)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "canBeSold", PlaceableSilo.canBeSold)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableSilo.updateInfo)
end
function PlaceableSilo.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "setAmount", PlaceableSilo.setAmount)
  SpecializationUtil.registerFunction(placeableType, "refillAmount", PlaceableSilo.refillAmount)
  SpecializationUtil.registerFunction(placeableType, "getFillLevels", PlaceableSilo.getFillLevels)
  SpecializationUtil.registerFunction(placeableType, "onPlayerActionTriggerCallback", PlaceableSilo.onPlayerActionTriggerCallback)
end
function PlaceableSilo.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableSilo)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableSilo)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableSilo)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableSilo)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableSilo)
  SpecializationUtil.registerEventListener(placeableType, "onSell", PlaceableSilo)
end
function PlaceableSilo:registerXMLPaths(v1)
  self:setXMLSpecializationType("Silo")
  self:register(XMLValueType.STRING, v1 .. ".silo#sellWarningText", "Sell warning text")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".silo#playerActionTrigger", "Trigger for player interaction")
  self:register(XMLValueType.BOOL, v1 .. ".silo.storages#perFarm", "Silo is per farm", false)
  self:register(XMLValueType.BOOL, v1 .. ".silo.storages#foreignSilo", "Shows as foreign silo in the menu", false)
  UnloadingStation.registerXMLPaths(self, v1 .. ".silo.unloadingStation")
  LoadingStation.registerXMLPaths(self, v1 .. ".silo.loadingStation")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".silo.storages.storage(?)#node", "Storage node")
  Storage.registerXMLPaths(self, v1 .. ".silo.storages.storage(?)")
  self:setXMLSpecializationType()
end
function PlaceableSilo:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Silo")
  self:register(XMLValueType.INT, v1 .. ".storage(?)#index", "Storage index")
  Storage.registerSavegameXMLPaths(self, v1 .. ".storage(?)")
  self:setXMLSpecializationType()
end
function PlaceableSilo.initSpecialization()
  v0:addSpecType("siloVolume", "shopListAttributeIconCapacity", PlaceableSilo.loadSpecValueVolume, PlaceableSilo.getSpecValueVolume, "placeable")
end
function PlaceableSilo:onLoad(savegame)
  local v4 = self.xmlFile:getValue("placeable.silo#playerActionTrigger", nil, self.components, self.i3dMappings)
  self.spec_silo.playerActionTrigger = v4
  if self.spec_silo.playerActionTrigger ~= nil then
    v4 = PlaceableSiloActivatable.new(self)
    self.spec_silo.activatable = v4
  end
  v4 = v3:getValue("placeable.silo.storages#perFarm", false)
  v2.storagePerFarm = v4
  v4 = v3:getValue("placeable.silo.storages#foreignSilo", v2.storagePerFarm)
  v2.foreignSilo = v4
  v4 = UnloadingStation.new(self.isServer, self.isClient)
  v2.unloadingStation = v4
  v4:load(self.components, v3, "placeable.silo.unloadingStation", self.customEnvironment, self.i3dMappings, self.components[1].node)
  v2.unloadingStation.owningPlaceable = self
  v2.unloadingStation.hasStoragePerFarm = v2.storagePerFarm
  v4 = LoadingStation.new(self.isServer, self.isClient)
  v2.loadingStation = v4
  v4:load(self.components, v3, "placeable.silo.loadingStation", self.customEnvironment, self.i3dMappings, self.components[1].node)
  v2.loadingStation.owningPlaceable = self
  v2.loadingStation.hasStoragePerFarm = v2.storagePerFarm
  v2.fillTypesAndLevelsAuxiliary = {}
  v2.fillTypeToFillTypeStorageTable = {}
  v2.infoTriggerFillTypesAndLevels = {}
  if v2.storagePerFarm then
    -- if FarmManager.MAX_NUM_FARMS then goto L135 end
  end
  if not g_currentMission.missionDynamicInfo.isMultiplayer then
  end
  v2.storages = {}
  while true do
    v6 = string.format("placeable.silo.storages.storage(%d)", v5)
    v7 = v3:hasProperty(v6)
    if not v7 then
      break
    end
    -- TODO: structure LOP_FORNPREP (pc 157, target 190)
    v10 = Storage.new(self.isServer, self.isClient)
    v11 = v10:load(self.components, v3, v6, self.i3dMappings)
    if v11 then
      v10.ownerFarmId = 1
      v10.foreignSilo = v2.foreignSilo
      table.insert(v2.storages, v10)
    end
    -- TODO: structure LOP_FORNLOOP (pc 189, target 158)
  end
  local v8 = v3:getValue("placeable.silo#sellWarningText", "$l10n_info_siloExtensionNotEmpty")
  v6 = v6:convertText(...)
  v2.sellWarningText = v6
end
function PlaceableSilo:onDelete()
  if self.spec_silo.storages ~= nil then
    for v6, v7 in ipairs(self.spec_silo.storages) do
      if v1.unloadingStation ~= nil then
        v2:removeStorageFromUnloadingStations(v7, {v1.unloadingStation})
      end
      if v1.loadingStation ~= nil then
        v2:removeStorageFromLoadingStations(v7, {v1.loadingStation})
      end
      v7:removeFillLevelChangedListeners(v1.storageFilLLevelChangedCallback)
      v2:removeStorage(v7)
    end
    for v6, v7 in ipairs(v1.storages) do
      v7:delete()
    end
  end
  if v1.unloadingStation ~= nil then
    v2:removeUnloadingStation(v1.unloadingStation, self)
    v3:delete()
  end
  if v1.loadingStation ~= nil then
    v3 = v3:getIsFillTypeSupported(FillType.LIQUIDMANURE)
    if v3 then
      v3:removeLiquidManureLoadingStation(v1.loadingStation)
    end
    v2:removeLoadingStation(v1.loadingStation, self)
    v3:delete()
  end
  v3:removeActivatable(v1.activatable)
  if v1.playerActionTrigger ~= nil then
    removeTrigger(v1.playerActionTrigger)
  end
end
function PlaceableSilo:onFinalizePlacement()
  v3:register(true)
  g_currentMission.storageSystem:addUnloadingStation(self.spec_silo.unloadingStation, self)
  if self.spec_silo.loadingStation ~= nil then
    v3:register(true)
    g_currentMission.storageSystem:addLoadingStation(self.spec_silo.loadingStation, self)
    local v3 = v3:getIsFillTypeSupported(FillType.LIQUIDMANURE)
    if v3 then
      v3:addLiquidManureLoadingStation(self.spec_silo.loadingStation)
    end
  end
  for v6, v7 in ipairs(v1.storages) do
    if not v1.storagePerFarm then
      local v10 = self:getOwnerFarmId()
      v7:setOwnerFarmId(v10, true)
    end
    v2:addStorage(v7)
    v7:register(true)
    v2:addStorageToUnloadingStation(v7, v1.unloadingStation)
    v2:addStorageToLoadingStation(v7, v1.loadingStation)
  end
  v6 = self:getOwnerFarmId()
  v3 = v2:getStorageExtensionsInRange(...)
  if v3 ~= nil then
    for v7, v8 in ipairs(v3) do
      if not (v1.unloadingStation.targetStorages[v8] == nil) then
        continue
      end
      v2:addStorageToUnloadingStation(v8, v1.unloadingStation)
    end
  end
  v7 = self:getOwnerFarmId()
  v4 = v2:getStorageExtensionsInRange(...)
  if v4 ~= nil then
    for v7, v8 in ipairs(v4) do
      if not (v1.loadingStation.sourceStorages[v8] == nil) then
        continue
      end
      v2:addStorageToLoadingStation(v8, v1.loadingStation)
    end
  end
  if not v1.storagePerFarm then
    for v8, v9 in pairs(g_currentMission.placeables) do
      v10 = v9:getOwnerFarmId()
      local v11 = self:getOwnerFarmId()
      if not (v10 == v11) then
        continue
      end
      if not (v9.spec_silo ~= nil) then
        continue
      end
    end
    if v4 == 1 and g_currentMission.missionInfo.difficulty == 1 and g_currentMission.missionInfo.startSiloAmounts ~= nil then
      v5 = v5:getIsLoadedFromSavegame()
      if not v5 and not g_currentMission.missionInfo.hasLoadedFirstFilledSilo then
        g_currentMission.missionInfo.hasLoadedFirstFilledSilo = true
        for v8, v9 in pairs(g_currentMission.missionInfo.startSiloAmounts) do
          v10 = v10:getFillTypeIndexByName(v8)
          self:setAmount(v10, v9)
        end
      end
    end
  end
  if v1.playerActionTrigger ~= nil then
    addTrigger(v1.playerActionTrigger, "onPlayerActionTriggerCallback", self)
  end
end
function PlaceableSilo:onReadStream(streamId, connection)
  local v4 = NetworkUtil.readNodeObjectId(streamId)
  v5:readStream(streamId, connection)
  v5:finishRegisterObject(self.spec_silo.unloadingStation, v4)
  local v5 = NetworkUtil.readNodeObjectId(streamId)
  v6:readStream(streamId, connection)
  v6:finishRegisterObject(self.spec_silo.loadingStation, v5)
  for v9, v10 in ipairs(self.spec_silo.storages) do
    local v11 = NetworkUtil.readNodeObjectId(streamId)
    v10:readStream(streamId, connection)
    v12:finishRegisterObject(v10, v11)
  end
end
function PlaceableSilo:onWriteStream(streamId, connection)
  local v6 = NetworkUtil.getObjectId(self.spec_silo.unloadingStation)
  NetworkUtil.writeNodeObjectId(...)
  v4:writeStream(streamId, connection)
  v4:registerObjectInStream(connection, self.spec_silo.unloadingStation)
  v6 = NetworkUtil.getObjectId(self.spec_silo.loadingStation)
  NetworkUtil.writeNodeObjectId(...)
  v4:writeStream(streamId, connection)
  v4:registerObjectInStream(connection, self.spec_silo.loadingStation)
  for v7, v8 in ipairs(self.spec_silo.storages) do
    local v11 = NetworkUtil.getObjectId(v8)
    NetworkUtil.writeNodeObjectId(...)
    v8:writeStream(streamId, connection)
    v9:registerObjectInStream(connection, v8)
  end
end
function PlaceableSilo:collectPickObjects(superFunc, node)
  for v8, v9 in ipairs(self.spec_silo.unloadingStation.unloadTriggers) do
    if not (node == v9.exactFillRootNode) then
      continue
    end
    break
  end
  if not v4 then
    for v8, v9 in ipairs(v3.loadingStation.loadTriggers) do
      if not (node == v9.triggerNode) then
        continue
      end
      break
    end
  end
  if not v4 then
    superFunc(self, node)
  end
end
function PlaceableSilo:canBeSold(superFunc)
  if self.spec_silo.storagePerFarm then
    return false, nil
  end
  v2.totalFillTypeSellPrice = 0
  for v8, v9 in pairs(v2.storages[1].fillLevels) do
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
    v17 = v17:formatVolume(v9)
    local v18 = v18:getText("ui_sellValue")
    local v19 = v19:formatMoney(v9 * v10 * PlaceableSilo.PRICE_SELL_FACTOR, 0, true, true)
    v13 = string.format(...)
    v2.totalFillTypeSellPrice = v2.totalFillTypeSellPrice + v9 * v10 * PlaceableSilo.PRICE_SELL_FACTOR
  end
  if 0 < v4 then
    return true, v3
  end
  return true, nil
end
function PlaceableSilo:loadFromXMLFile(xmlFile, key)
  xmlFile:iterate(key .. ".storage", function(self, xmlFile)
    local key = key:getValue(xmlFile .. "#index")
    if key ~= nil and u1.storages[key] ~= nil then
      local v3 = v3:loadFromXMLFile(u0, xmlFile)
      if not v3 then
        return false
      end
    end
  end)
end
function PlaceableSilo:saveToXMLFile(xmlFile, key, usedModNames)
  for v8, v9 in ipairs(self.spec_silo.storages) do
    local v10 = string.format("%s.storage(%d)", key, v8 - 1)
    xmlFile:setValue(v10 .. "#index", v8)
    v9:saveToXMLFile(xmlFile, v10, usedModNames)
  end
end
function PlaceableSilo:setOwnerFarmId(superFunc, farmId, noEventSend)
  superFunc(self, farmId, noEventSend)
  if self.isServer and not self.spec_silo.storagePerFarm and self.spec_silo.storages ~= nil then
    for v8, v9 in ipairs(self.spec_silo.storages) do
      v9:setOwnerFarmId(farmId, true)
    end
  end
end
function PlaceableSilo:setAmount(fillType, amount)
  for v7, v8 in ipairs(self.spec_silo.storages) do
    local v9 = v8:getFreeCapacity(fillType)
    if 0 < v9 then
      local v10 = math.min(amount, v9)
      v8:setFillLevel(v10, fillType)
    end
    if not (amount > 0.001) then
      break
    end
  end
end
function PlaceableSilo:refillAmount(fillTypeIndex, amount, price)
  if fillTypeIndex ~= nil and amount ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L7
  end
  return
  if not self.isServer then
    local v4 = v4:getServerConnection()
    local v6 = PlaceableSiloRefillEvent.new(self, fillTypeIndex, amount, price)
    v4:sendEvent(...)
    return
  end
  for v8, v9 in ipairs(self.spec_silo.storages) do
    local v10 = v9:getFreeCapacity(fillTypeIndex)
    if 0 < v10 then
      local v11 = math.min(amount, v10)
      local v12 = v9:getFillLevel(fillTypeIndex)
      v9:setFillLevel(v12 + v11, fillTypeIndex)
    end
    if not (amount > 0.001) then
      break
    end
  end
  if self.isServer then
    v8 = self:getOwnerFarmId()
    v5:addMoney(-price, v8, MoneyType.BOUGHT_MATERIALS, true)
  end
  v5:showMoneyChange(MoneyType.BOUGHT_MATERIALS)
end
function PlaceableSilo:getFillLevels()
  for v6, v7 in ipairs(self.spec_silo.storages) do
    local v9 = v7:getFillLevels()
    for v11, v12 in pairs(...) do
      if self.fillTypes ~= nil and not self.fillTypes[v11] then
        continue
      end
      v2[v11] = v12
    end
  end
  return v2
end
function PlaceableSilo:onSell()
  if self.isServer and 0 < self.spec_silo.totalFillTypeSellPrice then
    local v5 = self:getOwnerFarmId()
    v2:addMoney(self.spec_silo.totalFillTypeSellPrice, v5, MoneyType.HARVEST_INCOME, true, true)
  end
end
function PlaceableSilo:onPlayerActionTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  local v7 = self:getOwnerFarmId()
  local v8 = v8:getFarmId()
  if v7 == v8 and g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
    if onEnter then
      v7:addActivatable(self.spec_silo.activatable)
      return
    end
    v7:removeActivatable(v6.activatable)
  end
end
function PlaceableSilo:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  local v4 = v4:getFarmId()
  local v6 = v6:getAllFillLevels(v4)
  for v8, v9 in pairs(...) do
    v3.fillTypesAndLevelsAuxiliary[v8] = (v3.fillTypesAndLevelsAuxiliary[v8] or 0) + v9
  end
  table.clear(v3.infoTriggerFillTypesAndLevels)
  for v8, v9 in pairs(v3.fillTypesAndLevelsAuxiliary) do
    if not (0.1 < v9) then
      continue
    end
    if not v3.fillTypeToFillTypeStorageTable[v8] then
    end
    v10[v8] = v11
    v3.fillTypeToFillTypeStorageTable[v8].fillLevel = v9
    table.insert(v3.infoTriggerFillTypesAndLevels, v3.fillTypeToFillTypeStorageTable[v8])
  end
  table.clear(v3.fillTypesAndLevelsAuxiliary)
  table.sort(v3.infoTriggerFillTypesAndLevels, function(self, superFunc)
    if superFunc.fillLevel >= self.fillLevel then
    end
    return true
  end)
  v5 = math.min(#v3.infoTriggerFillTypesAndLevels, PlaceableSilo.INFO_TRIGGER_NUM_DISPLAYED_FILLTYPES)
  if 0 < v5 then
    -- TODO: structure LOP_FORNPREP (pc 103, target 153)
    local v13 = v13:getFillTypeTitleByIndex(v3.infoTriggerFillTypesAndLevels[1].fillType)
    v13 = v13:formatVolume(v3.infoTriggerFillTypesAndLevels[1].fillLevel, 0)
    table.insert(infoTable, {title = v13, text = v13})
    -- TODO: structure LOP_FORNLOOP (pc 133, target 104)
    return
  end
  v9 = v9:getText("infohud_siloEmpty")
  table.insert(infoTable, {title = v9, text = ""})
end
function PlaceableSilo:loadSpecValueVolume(v1, v2)
  return self:getValue("placeable.silo.storages.storage(0)#capacity")
end
function PlaceableSilo:getSpecValueVolume(v1)
  if self.specs.siloVolume == nil then
    return nil
  end
  return v2:formatVolume(self.specs.siloVolume)
end
PlaceableSiloActivatable = {}
local PlaceableSiloActivatable_mt = Class(PlaceableSiloActivatable)
function PlaceableSiloActivatable.new(placeable)
  local v1 = setmetatable({}, u0)
  v1.placeable = placeable
  local v2 = v2:getText("action_refillSilo")
  v1.activateText = v2
  return v1
end
function PlaceableSiloActivatable:run()
  for v5, v6 in pairs(self.placeable.spec_silo.storages) do
    local v8 = v6:getFillLevels()
    for v10, v11 in pairs(...) do
      if v1[v10] == nil then
        v1[v10] = 0
      end
      local v14 = v6:getFreeCapacity(v10)
      v1[v10] = v1[v10] + v14
    end
  end
  RefillDialog.show(self.placeable.refillAmount, self.placeable, v1, PlaceableSilo.REFILL_PRICE_FACTOR)
end
PlaceableSiloRefillEvent = {}
local PlaceableSiloRefillEvent_mt = Class(PlaceableSiloRefillEvent, Event)
InitStaticEventClass(PlaceableSiloRefillEvent, "PlaceableSiloRefillEvent", EventIds.EVENT_SILO_REFILL)
function PlaceableSiloRefillEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableSiloRefillEvent.new(placeable, fillTypeIndex, amount, price)
  local v4 = PlaceableSiloRefillEvent.emptyNew()
  v4.placeable = placeable
  v4.fillTypeIndex = fillTypeIndex
  v4.amount = amount
  v4.price = price
  return v4
end
function PlaceableSiloRefillEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.placeable)
  streamWriteInt32(streamId, self.amount)
  streamWriteInt32(streamId, self.price)
  streamWriteUIntN(streamId, self.fillTypeIndex, FillTypeManager.SEND_NUM_BITS)
end
function PlaceableSiloRefillEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.placeable = v3
  v3 = streamReadInt32(streamId)
  self.amount = v3
  v3 = streamReadInt32(streamId)
  self.price = v3
  v3 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  self.fillTypeIndex = v3
  self:run(connection)
end
function PlaceableSiloRefillEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:refillAmount(self.fillTypeIndex, self.amount, self.price)
  end
end
