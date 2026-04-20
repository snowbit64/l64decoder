-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaleMission = {REWARD_PER_HA_HAY = 3000, REWARD_PER_HA_SILAGE = 3300, SILAGE_VARIANT_CHANCE = 0.5, FILL_SUCCESS_FACTOR = 0.9, REWARD_PER_METER = 5}
local BaleMission_mt = Class(BaleMission, AbstractFieldMission)
InitStaticObjectClass(BaleMission, "BaleMission", ObjectIds.MISSION_BALE)
function BaleMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  {}[WorkAreaType.MOWER] = true
  {}[WorkAreaType.BALER] = true
  {}[WorkAreaType.TEDDER] = true
  {}[WorkAreaType.WINDROWER] = true
  {}[WorkAreaType.AUXILIARY] = true
  v3.workAreaTypes = {}
  v3.reimbursementPerHa = 0
  v3.lastSellChange = -1
  v3.sellPointId = nil
  local v4 = v4:getFruitTypeByIndex(FruitType.GRASS)
  local v5 = DensityMapModifier.new(v4.terrainDataPlaneId, v4.startStateChannel, v4.numStateChannels, v3.mission.terrainRootNode)
  v3.completionModifier = v5
  v5 = DensityMapFilter.new(v3.completionModifier)
  v3.completionFilter = v5
  v5:setValueCompareParams(DensityValueCompareType.EQUAL, v4.cutState)
  return v3
end
function BaleMission:delete()
  if self.sellPoint ~= nil then
    self.sellPoint.missions[self] = nil
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function BaleMission:saveToXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  v4.saveToXMLFile(self, xmlFile, key)
  local baleKey = string.format("%s.bale", key)
  local v5 = v5:getPlaceableUnloadingStationIndex(self.sellPoint.owningPlaceable, self.sellPoint)
  if v5 ~= nil then
    setXMLInt(xmlFile, baleKey .. "#sellPointPlaceableId", self.sellPoint.owningPlaceable.currentSavegameId)
    setXMLInt(xmlFile, baleKey .. "#unloadingStationIndex", v5)
    local v9 = v9:getFillTypeNameByIndex(self.fillType)
    setXMLString(...)
    setXMLFloat(xmlFile, baleKey .. "#depositedLiters", self.depositedLiters)
    return
  end
  Logging.xmlWarning(xmlFile, "Unable to retrieve unloading station index for saving bale mission '%s'", key)
end
function BaleMission:loadFromXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  local v3 = v4.loadFromXMLFile(self, xmlFile, key)
  if not v3 then
    return false
  end
  v4 = getXMLInt(xmlFile, key .. ".bale(0)" .. "#sellPointPlaceableId")
  local v5 = getXMLInt(xmlFile, key .. ".bale(0)" .. "#unloadingStationIndex")
  if v4 == nil then
    Logging.xmlError(xmlFile, "no sellPointPlaceable id given at '%s'", key .. ".bale(0)")
    return false
  end
  if v5 == nil then
    Logging.xmlError(xmlFile, "no unloadting station index given at '%s'", v3)
    return false
  end
  local v6 = v6:getPlaceableBySavegameId(v4)
  if v6 == nil then
    Logging.xmlError(xmlFile, "selling station placeable with id '%d' not available at '%s'", v4, v3)
    return false
  end
  local v7 = v7:getPlaceableUnloadingStation(v6, v5)
  if v7 == nil then
    Logging.xmlError(xmlFile, "Unable to retrieve unloadingStation %d for placeable %s at '%s'", v5, v6.configFileName, v3)
    return false
  end
  self.sellPoint = v7
  self.sellPoint.missions[self] = self
  local v8 = getXMLString(xmlFile, v3 .. "#fillTypeName")
  local v9 = v9:getFillTypeIndexByName(v8)
  self.fillType = v9
  self:updateRewardPerHa()
  v9 = getXMLFloat(xmlFile, v3 .. "#depositedLiters")
  self.depositedLiters = v9
  local v11 = self:getMaxCutLiters()
  v9 = self:roundToWholeBales(...)
  self.expectedLiters = v9
  if self.fillType == FillType.SILAGE then
    self.workAreaTypes[WorkAreaType.TEDDER] = false
  end
  return true
end
function BaleMission:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.sellPoint)
  streamWriteUIntN(streamId, self.fillType, FillTypeManager.SEND_NUM_BITS)
end
function BaleMission:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = NetworkUtil.readNodeObjectId(streamId)
  self.sellPointId = v3
  v3 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  self.fillType = v3
  self:updateRewardPerHa()
end
function BaleMission:init(...)
  local v2 = math.random()
  if v2 < BaleMission.SILAGE_VARIANT_CHANCE then
    self.fillType = FillType.SILAGE
    self.workAreaTypes[WorkAreaType.TEDDER] = false
  else
    self.fillType = FillType.DRYGRASS_WINDROW
  end
  self:updateRewardPerHa()
  v2 = v2:superClass()
  local v1 = v2.init(...)
  if not v1 then
    return false
  end
  self.depositedLiters = 0
  local v3 = self:getMaxCutLiters()
  v1 = self:roundToWholeBales(...)
  self.expectedLiters = v1
  v3 = v3:getUnloadingStations()
  for v5, v6 in pairs(...) do
    if not (v6.owningPlaceable ~= nil) then
      continue
    end
    local v7 = v6:isa(SellingStation)
    if not v7 then
      continue
    end
    if not v6.allowMissions then
      continue
    end
    if not (v6.acceptedFillTypes[self.fillType] == true) then
      continue
    end
    v7 = v6:getEffectiveFillTypePrice(self.fillType)
    if not (v1 < v7) then
      continue
    end
    self.sellPoint = v6
  end
  if self.sellPoint == nil then
    return false
  end
  self:updateRewardPerHa()
  v2 = self:calculateReward()
  self.reward = v2
  return true
end
function BaleMission.getIsAvailable(v0)
  if g_currentMission.environment ~= nil and g_currentMission.environment.currentSeason == Environment.SEASON.WINTER then
    return false
  end
  local v3 = v3:superClass()
  return v3.getIsAvailable(v0)
end
function BaleMission.canRunOnField(field, sprayFactor, fieldSpraySet, fieldPlowFactor, limeFactor, maxWeedState, stubbleFactor, rollerFactor)
  local v9 = v9:getFruitTypeByIndex(FruitType.GRASS)
  local v10 = FieldUtil.getMaxHarvestState(field, FruitType.GRASS)
  if g_currentMission.environment ~= nil and g_currentMission.environment.currentSeason == Environment.SEASON.WINTER then
    return false
  end
  if v10 == v9.maxHarvestingGrowthState then
    return true, FieldManager.FIELDSTATE_GROWING, v10
  end
  return false
end
function BaleMission:start(...)
  local v2 = v2:superClass()
  local v1 = v2.start(...)
  if not v1 then
    return false
  end
  if self.sellPointId ~= nil then
    self:tryToResolveSellPoint()
  end
  if self.sellPoint == nil then
    return false
  end
  self.sellPoint.missions[self] = self
  return true
end
function BaleMission:completeField()
  local v1 = v1:getFruitTypeByIndex(self.field.fruitType)
  local v5 = table.getn(self.field.maxFieldStatusPartitions)
  -- TODO: structure LOP_FORNPREP (pc 19, target 45)
  v5:setFieldPartitionStatus(self.field, self.field.maxFieldStatusPartitions, 1, self.field.fruitType, FieldManager.FIELDSTATE_GROWING, v1.cutState, 0, false, self.fieldPlowFactor)
  -- TODO: structure LOP_FORNLOOP (pc 44, target 20)
end
function BaleMission:fillSold(fillDelta)
  local v2 = math.min(self.depositedLiters + fillDelta, self.expectedLiters)
  self.depositedLiters = v2
  if self.expectedLiters * BaleMission.FILL_SUCCESS_FACTOR <= self.depositedLiters then
    self.sellPoint.missions[self] = nil
  end
  self.lastSellChange = 30
end
function BaleMission:tryToResolveSellPoint()
  if self.sellPointId == nil then
    return
  end
  local v1 = NetworkUtil.getObject(self.sellPointId)
  self.sellPoint = v1
  if self.sellPoint ~= nil then
    self.sellPointId = nil
  end
end
function BaleMission:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.sellPointId ~= nil then
    self:tryToResolveSellPoint()
  end
  if g_currentMission.player.farmId == self.farmId and self.sellPoint ~= nil and self.isClient and self.status == AbstractMission.STATUS_RUNNING then
    local v2 = self:hasMapMarker()
    if not v2 then
      self:createMapMarkerAtSellingStation(self.sellPoint)
    end
  end
  if 0 < self.lastSellChange then
    self.lastSellChange = self.lastSellChange - 1
    if self.lastSellChange == 0 then
      v3 = math.floor(self.depositedLiters / self.expectedLiters * BaleMission.FILL_SUCCESS_FACTOR * 100)
      local v8 = v8:getText("fieldJob_progress_transporting_forField")
      local v7 = string.format(v8, v3, self.field.fieldId)
      v4:addIngameNotification(...)
    end
  end
end
function BaleMission:roundToWholeBales(liters)
  local v2 = v2:getPossibleCapacitiesForFillType(self.fillType)
  -- TODO: structure LOP_FORNPREP (pc 13, target 26)
  local v8 = math.floor(liters * 0.95 / v2[1])
  if v8 < math.huge then
  end
  -- TODO: structure LOP_FORNLOOP (pc 25, target 14)
  return math.max(v3 * v2[v4], liters - 10000)
end
function BaleMission:updateRewardPerHa()
  if self.fillType == FillType.SILAGE then
    self.rewardPerHa = BaleMission.REWARD_PER_HA_SILAGE
    return
  end
  self.rewardPerHa = BaleMission.REWARD_PER_HA_HAY
end
function BaleMission:calculateReward()
  if self.sellPoint ~= nil then
    local distance = calcDistanceFrom(self.field.rootNode, self.sellPoint.rootNode)
  end
  local v4 = self:superClass()
  local v3 = v4.calculateReward(self)
  return v3 + v1
end
function BaleMission:getVehicleVariant()
  if self.fillType == FillType.SILAGE then
    return "SILAGE"
  end
  return "HAY"
end
function BaleMission:getData()
  if self.sellPointId ~= nil then
    self:tryToResolveSellPoint()
  end
  if self.fillType == FillType.SILAGE then
  else
  end
  local v4 = v4:getText("fieldJob_number")
  local v3 = string.format(v4, self.field.fieldId)
  v3 = v3:getText("fieldJob_jobType_baling")
  v3 = v3:getText("fieldJob_desc_action_baling")
  v4 = v4:getText(v1)
  local v6 = v6:getName()
  v3 = string.format(...)
  return {location = v3, jobType = v3, action = v3, description = v3}
end
function BaleMission:getCompletion()
  local v1 = math.min(1, self.depositedLiters / self.expectedLiters * BaleMission.FILL_SUCCESS_FACTOR)
  local fieldCompletion = self:getFieldCompletion()
  local v3 = math.min(1, fieldCompletion / AbstractMission.SUCCESS_FACTOR)
  return math.min(1, 0.2 * v3 + 0.8 * v1)
end
function BaleMission:partitionCompletion(x, z, widthX, widthZ, heightX, heightZ)
  v7:setParallelogramWorldCoords(x, z, widthX, widthZ, heightX, heightZ, DensityCoordType.POINT_VECTOR_VECTOR)
  local v7, v8, v9 = v7:executeGet(self.completionFilter)
  return v8, v9
end
function BaleMission.validate(v0, v1)
  if v1 == FieldManager.FIELDEVENT_HARVESTED then
  end
  return true
end
v1:registerMissionType(BaleMission, "mow_bale", MissionManager.CATEGORY_GRASS_FIELD)
