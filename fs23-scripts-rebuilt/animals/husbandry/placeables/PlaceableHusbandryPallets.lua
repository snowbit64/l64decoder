-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHusbandryPallets = {}
function PlaceableHusbandryPallets.prerequisitesPresent(v0)
  return true
end
function PlaceableHusbandryPallets.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "onPalletTriggerCallback", PlaceableHusbandryPallets.onPalletTriggerCallback)
  SpecializationUtil.registerFunction(placeableType, "getAllPalletsCallback", PlaceableHusbandryPallets.getAllPalletsCallback)
  SpecializationUtil.registerFunction(placeableType, "updatePallets", PlaceableHusbandryPallets.updatePallets)
  SpecializationUtil.registerFunction(placeableType, "getPalletCallback", PlaceableHusbandryPallets.getPalletCallback)
  SpecializationUtil.registerFunction(placeableType, "showSpawnerBlockedWarning", PlaceableHusbandryPallets.showSpawnerBlockedWarning)
  SpecializationUtil.registerFunction(placeableType, "showPalletBlockedWarning", PlaceableHusbandryPallets.showPalletBlockedWarning)
  SpecializationUtil.registerFunction(placeableType, "updatePalletInfo", PlaceableHusbandryPallets.updatePalletInfo)
end
function PlaceableHusbandryPallets.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getConditionInfos", PlaceableHusbandryPallets.getConditionInfos)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateOutput", PlaceableHusbandryPallets.updateOutput)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableHusbandryPallets.updateInfo)
end
function PlaceableHusbandryPallets.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHusbandryPallets)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHusbandryPallets)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableHusbandryPallets)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableHusbandryPallets)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableHusbandryPallets)
  SpecializationUtil.registerEventListener(placeableType, "onReadUpdateStream", PlaceableHusbandryPallets)
  SpecializationUtil.registerEventListener(placeableType, "onWriteUpdateStream", PlaceableHusbandryPallets)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryAnimalsUpdate", PlaceableHusbandryPallets)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryAnimalsCreated", PlaceableHusbandryPallets)
end
function PlaceableHusbandryPallets:registerXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.pallets" .. ".palletTrigger(?)#node", "A pallet trigger")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.pallets" .. "#fillType", "Pallet fill type")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.pallets" .. "#unitText", "Pallet fill type unit")
  self:register(XMLValueType.INT, v1 .. ".husbandry.pallets" .. "#maxNumPallets", "Maximum number of pallets")
  PalletSpawner.registerXMLPaths(self, v1 .. ".husbandry.pallets")
  self:setXMLSpecializationType()
end
function PlaceableHusbandryPallets:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.FLOAT, v1 .. "#pendingLiters", "Pending liters")
  self:register(XMLValueType.FLOAT, v1 .. "#fillLevel", "Fill Level")
  self:setXMLSpecializationType()
end
function PlaceableHusbandryPallets:onLoad(savegame)
  local v3 = PalletSpawner.new(self.baseDirectory)
  self.spec_husbandryPallets.palletSpawner = v3
  v3:load(self.components, self.xmlFile, "placeable.husbandry.pallets", self.customEnvironment, self.i3dMappings)
  v3 = v3:getValue("placeable.husbandry.pallets#fillType")
  local v4 = v4:getFillTypeIndexByName(v3)
  if v4 == nil then
    Logging.xmlError(self.xmlFile, "Pallet filltype '%s' not defined", v3)
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  v2.fillTypeIndex = v4
  v2.fillUnitIndex = 1
  local v8 = v8:getValue("placeable.husbandry.pallets#unitText")
  local v5 = v5:convertText(v8 or "$l10n_unit_literShort", self.customEnvironment)
  v2.fillTypeUnit = v5
  v5 = v5:getValue("placeable.husbandry.pallets#maxNumPallets", 1)
  v2.maxNumPallets = v5
  if self.isServer then
    v2.palletTriggers = {}
    v5:iterate("placeable.husbandry.pallets.palletTrigger", function(self, savegame)
      local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      if v2 ~= nil then
        table.insert(u1.palletTriggers, {node = v2, added = false})
      end
    end)
  end
  v2.isPalletInfoUpdateRunning = false
  v2.animalTypeName = nil
  v2.currentPallet = nil
  v2.pendingLiters = 0
  v2.fillLevel = 0
  v2.fillLevelSent = 0
  v2.capacity = 0
  v2.capacitySent = 0
  v2.litersPerHour = 0
  v2.fillType = nil
  v2.pallets = {}
  v2.spawnPending = false
  v2.palletLimitReached = false
  local v6 = v6:getText("infohud_tooManyPallets")
  v2.infoHudTooManyPallets = {title = v6, accentuate = true}
  v5 = self:getNextDirtyFlag()
  v2.dirtyFlag = v5
end
function PlaceableHusbandryPallets:onDelete()
  if self.isServer and self.spec_husbandryPallets.palletTriggers ~= nil then
    for v5, v6 in ipairs(self.spec_husbandryPallets.palletTriggers) do
      if not v6.added then
        continue
      end
      removeTrigger(v6.node)
    end
  end
end
function PlaceableHusbandryPallets:onFinalizePlacement()
  if self.isServer then
    for v5, v6 in ipairs(self.spec_husbandryPallets.palletTriggers) do
      addTrigger(v6.node, "onPalletTriggerCallback", self)
      v6.added = true
    end
  end
end
function PlaceableHusbandryPallets:onReadStream(streamId, connection)
  local v4 = streamReadFloat32(streamId)
  self.spec_husbandryPallets.fillLevel = v4
  v4 = streamReadFloat32(streamId)
  self.spec_husbandryPallets.capacity = v4
  v4 = streamReadBool(streamId)
  self.spec_husbandryPallets.palletLimitReached = v4
end
function PlaceableHusbandryPallets:onWriteStream(streamId, connection)
  streamWriteFloat32(streamId, self.spec_husbandryPallets.fillLevelSent)
  streamWriteFloat32(streamId, self.spec_husbandryPallets.capacitySent)
  streamWriteBool(streamId, self.spec_husbandryPallets.palletLimitReached)
end
function PlaceableHusbandryPallets:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      local v5 = streamReadFloat32(streamId)
      self.spec_husbandryPallets.fillLevel = v5
      v5 = streamReadFloat32(streamId)
      self.spec_husbandryPallets.capacity = v5
      v5 = streamReadBool(streamId)
      self.spec_husbandryPallets.palletLimitReached = v5
    end
  end
end
function PlaceableHusbandryPallets:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_husbandryPallets.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      streamWriteFloat32(streamId, v4.fillLevelSent)
      streamWriteFloat32(streamId, v4.capacitySent)
      streamWriteBool(streamId, v4.palletLimitReached)
    end
  end
end
function PlaceableHusbandryPallets:loadFromXMLFile(xmlFile, key)
  local v4 = xmlFile:getValue(key .. "#pendingLiters", self.spec_husbandryPallets.pendingLiters)
  self.pendingLiters = v4
  self:updatePalletInfo()
end
function PlaceableHusbandryPallets:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#pendingLiters", self.spec_husbandryPallets.pendingLiters)
end
function PlaceableHusbandryPallets:onHusbandryAnimalsCreated(husbandry)
  if husbandry ~= nil then
    local animalTypeIndex = self:getAnimalTypeIndex()
    local v3 = v3:getTypeByIndex(animalTypeIndex)
    if v3 ~= nil then
      local v7 = tostring(v3.name)
      v7 = v7:lower()
      local v6 = v6:getText("ui_statisticView_" .. v7, self.customEnvironment)
      self.spec_husbandryPallets.animalTypeName = v6
    end
  end
end
function PlaceableHusbandryPallets:onHusbandryAnimalsUpdate(clusters)
  self.spec_husbandryPallets.litersPerHour = 0
  for v6, v7 in ipairs(clusters) do
    local v8 = v8:getSubTypeByIndex(v7.subTypeIndex)
    if not (v8 ~= nil) then
      continue
    end
    if not (v8.output.pallets ~= nil) then
      continue
    end
    local v10 = v7:getAge()
    local v11 = v8.output.pallets:get(v10)
    local v13 = v7:getNumAnimals()
    v2.litersPerHour = v2.litersPerHour + v11 * v13 / 24
  end
end
function PlaceableHusbandryPallets:onPalletTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if onLeave then
    local v7 = v7:getNodeObject(otherId)
    if v7 ~= nil then
      if v7 == self.spec_husbandryPallets.currentPallet then
        self.spec_husbandryPallets.currentPallet = nil
      end
      v6.pallets[v7] = nil
      self:updatePalletInfo()
    end
  end
end
function PlaceableHusbandryPallets:updatePalletInfo()
  if self.isServer and not self.spec_husbandryPallets.isPalletInfoUpdateRunning then
    self.spec_husbandryPallets.isPalletInfoUpdateRunning = true
    v2:getAllPallets(self.spec_husbandryPallets.fillTypeIndex, self.getAllPalletsCallback, self)
  end
end
function PlaceableHusbandryPallets:getAllPalletsCallback(pallets)
  self.spec_husbandryPallets.isPalletInfoUpdateRunning = false
  for v9, v10 in pairs(pallets) do
    local v11 = v10:getFillUnitCapacity(v2.fillUnitIndex)
    local v12 = math.max(v5, v11)
    v12 = v10:getFillUnitFillLevel(v2.fillUnitIndex)
  end
  if #pallets < v2.maxNumPallets then
  end
  v2.fillLevel = v3
  v2.capacity = v4
  v6 = math.abs(v3 - v2.fillLevelSent)
  if 1 >= v6 then
    v6 = math.abs(v4 - v2.capacitySent)
    -- if 1 >= v6 then goto L76 end
  end
  v2.fillLevelSent = v3
  v2.capacitySent = v4
  self:raiseDirtyFlags(v2.dirtyFlag)
end
function PlaceableHusbandryPallets:updatePallets()
  if self.isServer and not self.spec_husbandryPallets.spawnPending and 5 < self.spec_husbandryPallets.pendingLiters then
    self.spec_husbandryPallets.spawnPending = true
    local v4 = self:getOwnerFarmId()
    v2:getOrSpawnPallet(v4, self.spec_husbandryPallets.fillTypeIndex, self.getPalletCallback, self)
  end
end
function PlaceableHusbandryPallets:getPalletCallback(pallet, result, fillTypeIndex)
  self.spec_husbandryPallets.spawnPending = false
  self.spec_husbandryPallets.currentPallet = pallet
  if pallet ~= nil then
    if self.spec_husbandryPallets.palletLimitReached then
      self.spec_husbandryPallets.palletLimitReached = false
      self:raiseDirtyFlags(self.spec_husbandryPallets.dirtyFlag)
    end
    if result == PalletSpawner.RESULT_SUCCESS then
      pallet:emptyAllFillUnits(true)
    end
    v4.pallets[pallet] = true
    local v7 = self:getOwnerFarmId()
    local v5 = pallet:addFillUnitFillLevel(v7, v4.fillUnitIndex, v4.pendingLiters, fillTypeIndex, ToolType.UNDEFINED)
    local v6 = math.max(v4.pendingLiters - v5, 0)
    v4.pendingLiters = v6
    -- if 5 >= v4.pendingLiters then goto L88 end
    self:updatePallets()
  elseif result == PalletSpawner.RESULT_NO_SPACE then
    self:showSpawnerBlockedWarning()
  else
    if result == PalletSpawner.PALLET_LIMITED_REACHED and not self.spec_husbandryPallets.palletLimitReached then
      self.spec_husbandryPallets.palletLimitReached = true
      self:raiseDirtyFlags(self.spec_husbandryPallets.dirtyFlag)
    end
  end
  self:updatePalletInfo()
end
function PlaceableHusbandryPallets:showSpawnerBlockedWarning()
  if not self.spec_husbandryPallets.showedWarning then
    if self.isServer then
      local v4 = AnimalHusbandryNoMorePalletSpaceEvent.new(self)
      local v5 = self:getOwnerFarmId()
      result:broadcastEventToFarm(v4, v5, false)
    end
    self:showPalletBlockedWarning()
    pallet.showedWarning = true
  end
end
function PlaceableHusbandryPallets:showPalletBlockedWarning()
  if self.isClient then
    local result = result:getFarmId()
    local fillTypeIndex = self:getOwnerFarmId()
    if result == fillTypeIndex then
      result = result:getFillTypeByIndex(self.spec_husbandryPallets.fillTypeIndex)
      if result ~= nil and self.spec_husbandryPallets.animalTypeName ~= nil then
        local v4 = v4:getText("ingameNotification_palletSpawnerBlocked")
        fillTypeIndex = string.format(v4, result.title, self.spec_husbandryPallets.animalTypeName)
        v4:addIngameNotification(FSBaseMission.INGAME_NOTIFICATION_CRITICAL, fillTypeIndex)
      end
    end
  end
end
function PlaceableHusbandryPallets:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  if self.spec_husbandryPallets.palletLimitReached then
    table.insert(infoTable, self.spec_husbandryPallets.infoHudTooManyPallets)
  end
end
function PlaceableHusbandryPallets:getConditionInfos(superFunc)
  local infos = superFunc(self)
  local v5 = v5:getFillTypeByIndex(self.spec_husbandryPallets.fillTypeIndex)
  if 0 < self.spec_husbandryPallets.capacity then
  end
  local v7 = MathUtil.clamp(v6, 0, 1)
  v4.ratio = v7
  v4.invertedBar = true
  v4.customUnitText = fillTypeIndex.fillTypeUnit
  table.insert(infos, v4)
  return infos
end
function PlaceableHusbandryPallets:updateOutput(superFunc, foodFactor, productionFactor, globalProductionFactor)
  superFunc(self, foodFactor, productionFactor, globalProductionFactor)
  self.spec_husbandryPallets.showedWarning = false
  if self.isServer and 0 < self.spec_husbandryPallets.litersPerHour then
    self.spec_husbandryPallets.pendingLiters = self.spec_husbandryPallets.pendingLiters + productionFactor * globalProductionFactor * self.spec_husbandryPallets.litersPerHour * g_currentMission.environment.timeAdjustment
    self:updatePallets()
  end
end
