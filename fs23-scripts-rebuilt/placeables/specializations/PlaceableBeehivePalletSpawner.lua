-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableBeehivePalletSpawner = {}
function PlaceableBeehivePalletSpawner.prerequisitesPresent(v0)
  return true
end
function PlaceableBeehivePalletSpawner.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "addFillLevel", PlaceableBeehivePalletSpawner.addFillLevel)
  SpecializationUtil.registerFunction(placeableType, "updatePallets", PlaceableBeehivePalletSpawner.updatePallets)
  SpecializationUtil.registerFunction(placeableType, "getPalletCallback", PlaceableBeehivePalletSpawner.getPalletCallback)
end
function PlaceableBeehivePalletSpawner.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "canBuy", PlaceableBeehivePalletSpawner.canBuy)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableBeehivePalletSpawner.updateInfo)
end
function PlaceableBeehivePalletSpawner.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableBeehivePalletSpawner)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableBeehivePalletSpawner)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableBeehivePalletSpawner)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableBeehivePalletSpawner)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableBeehivePalletSpawner)
  SpecializationUtil.registerEventListener(placeableType, "onReadUpdateStream", PlaceableBeehivePalletSpawner)
  SpecializationUtil.registerEventListener(placeableType, "onWriteUpdateStream", PlaceableBeehivePalletSpawner)
end
function PlaceableBeehivePalletSpawner:registerXMLPaths(v1)
  self:setXMLSpecializationType("BeehivePalletSpawner")
  PalletSpawner.registerXMLPaths(self, v1 .. ".beehivePalletSpawner")
  self:setXMLSpecializationType()
end
function PlaceableBeehivePalletSpawner:registerSavegameXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. ".beehivePalletSpawner#pendingLiters", "Pending liters to be spawned")
end
function PlaceableBeehivePalletSpawner:onLoad(savegame)
  local v4 = PalletSpawner.new(self.baseDirectory)
  self.spec_beehivePalletSpawner.palletSpawner = v4
  v4 = v4:load(self.components, self.xmlFile, "placeable.beehivePalletSpawner", self.customEnvironment, self.i3dMappings)
  if not v4 then
    Logging.xmlError(self.xmlFile, "Unable to load pallet spawner %s", "placeable.beehivePalletSpawner")
    self:setLoadingState(Placeable.LOADING_STATE_ERROR)
    return
  end
  v2.pendingLiters = 0
  v2.spawnPending = false
  v2.palletLimitReached = false
  local v5 = v5:getText("infohud_tooManyPallets")
  v2.infoHudTooManyPallets = {title = v5}
  v4 = v4:getFillTypeIndexByName("HONEY")
  v2.fillType = v4
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
end
function PlaceableBeehivePalletSpawner:onDelete()
  if self.spec_beehivePalletSpawner.palletSpawner ~= nil then
    v2:delete()
  end
  v2:removeBeehivePalletSpawner(self)
end
function PlaceableBeehivePalletSpawner.onFinalizePlacement(v0)
  v1:addBeehivePalletSpawner(v0)
end
function PlaceableBeehivePalletSpawner:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    local v4 = streamReadBool(streamId)
    self.spec_beehivePalletSpawner.palletLimitReached = v4
  end
end
function PlaceableBeehivePalletSpawner:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    streamWriteBool(streamId, self.spec_beehivePalletSpawner.palletLimitReached)
  end
end
function PlaceableBeehivePalletSpawner:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    self.spec_beehivePalletSpawner.palletLimitReached = v5
  end
end
function PlaceableBeehivePalletSpawner:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    streamWriteBool(streamId, self.spec_beehivePalletSpawner.palletLimitReached)
  end
end
function PlaceableBeehivePalletSpawner:loadFromXMLFile(xmlFile, key)
  local v4 = xmlFile:getValue(key .. ".beehivePalletSpawner#pendingLiters")
  if not v4 then
  end
  v3.pendingLiters = v4
end
function PlaceableBeehivePalletSpawner:saveToXMLFile(xmlFile, key, usedModNames)
  if 0 < self.spec_beehivePalletSpawner.pendingLiters then
    xmlFile:setValue(key .. ".beehivePalletSpawner#pendingLiters", self.spec_beehivePalletSpawner.pendingLiters)
  end
end
function PlaceableBeehivePalletSpawner:addFillLevel(fillLevel)
  if self.isServer and fillLevel ~= nil then
    self.spec_beehivePalletSpawner.pendingLiters = self.spec_beehivePalletSpawner.pendingLiters + fillLevel
  end
end
function PlaceableBeehivePalletSpawner:updatePallets()
  if self.isServer and not self.spec_beehivePalletSpawner.spawnPending and 10 < self.spec_beehivePalletSpawner.pendingLiters then
    self.spec_beehivePalletSpawner.spawnPending = true
    local v4 = self:getOwnerFarmId()
    v2:getOrSpawnPallet(v4, self.spec_beehivePalletSpawner.fillType, self.getPalletCallback, self)
  end
end
function PlaceableBeehivePalletSpawner:getPalletCallback(pallet, result, fillTypeIndex)
  self.spec_beehivePalletSpawner.spawnPending = false
  if pallet ~= nil then
    if result == PalletSpawner.RESULT_SUCCESS then
      if self.spec_beehivePalletSpawner.palletLimitReached then
        self.spec_beehivePalletSpawner.palletLimitReached = false
        self:raiseDirtyFlags(self.spec_beehivePalletSpawner.dirtyFlag)
      end
      pallet:emptyAllFillUnits(true)
    end
    local v7 = self:getOwnerFarmId()
    local v5 = pallet:addFillUnitFillLevel(v7, 1, v4.pendingLiters, fillTypeIndex, ToolType.UNDEFINED)
    local v6 = math.max(v4.pendingLiters - v5, 0)
    v4.pendingLiters = v6
    return
  end
  if result == PalletSpawner.RESULT_NO_SPACE then
    return
  end
  if result == PalletSpawner.PALLET_LIMITED_REACHED and not v4.palletLimitReached then
    v4.palletLimitReached = true
    self:raiseDirtyFlags(v4.dirtyFlag)
  end
end
function PlaceableBeehivePalletSpawner:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  if self.spec_beehivePalletSpawner.palletLimitReached then
    table.insert(infoTable, self.spec_beehivePalletSpawner.infoHudTooManyPallets)
  end
end
function PlaceableBeehivePalletSpawner.canBuy(v0, v1)
  local v2, v3 = v1(v0)
  if not v2 then
    return false, v3
  end
  local v4 = v4:getFarmBeehivePalletSpawner(g_currentMission.player.farmId)
  if v4 ~= nil then
    local v5 = v5:getText("warning_onlyOneOfThisItemAllowedPerFarm")
    return false
  end
  return true, nil
end
