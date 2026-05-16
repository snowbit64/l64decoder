-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HarvestMission = {REWARD_PER_HA_WIDE = 1500, REWARD_PER_HA_SMALL = 4800, FAILURE_COST_FACTOR = 0.1, FAILURE_COST_OF_TOTAL = 0.95, SUCCESS_FACTOR = 0.93}
local HarvestMission_mt = Class(HarvestMission, AbstractFieldMission)
InitStaticObjectClass(HarvestMission, "HarvestMission", ObjectIds.MISSION_HARVEST)
function HarvestMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  {}[WorkAreaType.CUTTER] = true
  {}[WorkAreaType.COMBINECHOPPER] = true
  {}[WorkAreaType.COMBINESWATH] = true
  {}[WorkAreaType.FRUITPREPARER] = true
  v3.workAreaTypes = {}
  v3.reimbursementPerHa = 0
  v3.lastSellChange = -1
  v3.sellPointId = nil
  return v3
end
function HarvestMission:delete()
  if self.sellPoint ~= nil then
    self.sellPoint.missions[self] = nil
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function HarvestMission:saveToXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  v4.saveToXMLFile(self, xmlFile, key)
  local harvestKey = string.format("%s.harvest", key)
  if self.sellPoint.owningPlaceable == nil then
    if self.sellPoint.getName then
      local v5 = v5:getName()
      -- if v5 then goto L34 end
    end
    Logging.xmlWarning(xmlFile, "Unable to retrieve placeable of sellPoint '%s' for saving harvest mission '%s' ", "unknown", key)
    return
  end
  v5 = v5:getPlaceableUnloadingStationIndex(v4, self.sellPoint)
  if v5 == nil then
    if self.sellPoint.getName then
      local v6 = v6:getName()
      -- if v6 then goto L71 end
    end
    if v4.getName then
      v6 = v4:getName()
      -- if v6 then goto L71 end
    end
    Logging.xmlWarning(xmlFile, "Unable to retrieve unloading station index of sellPoint '%s' for saving harvest mission '%s' ", "unknown", key)
    return
  end
  setXMLInt(xmlFile, harvestKey .. "#sellPointPlaceableId", v4.currentSavegameId)
  setXMLInt(xmlFile, harvestKey .. "#unloadingStationIndex", v5)
  setXMLFloat(xmlFile, harvestKey .. "#expectedLiters", self.expectedLiters)
  setXMLFloat(xmlFile, harvestKey .. "#depositedLiters", self.depositedLiters)
end
function HarvestMission:loadFromXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  local v3 = v4.loadFromXMLFile(self, xmlFile, key)
  if not v3 then
    return false
  end
  v4 = getXMLInt(xmlFile, key .. ".harvest(0)" .. "#sellPointPlaceableId")
  local v5 = getXMLInt(xmlFile, key .. ".harvest(0)" .. "#unloadingStationIndex")
  if v4 == nil then
    Logging.xmlError(xmlFile, "no sellPointPlaceable id given at '%s'", key .. ".harvest(0)")
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
    Logging.xmlError(xmlFile, "unable to retrieve unloadingStation %d for placeable %s at '%s'", v5, v6.configFileName, v3)
    return false
  end
  self.sellPoint = v7
  self.sellPoint.missions[self] = self
  local v8 = getXMLFloat(xmlFile, v3 .. "#expectedLiters")
  self.expectedLiters = v8
  v8 = getXMLFloat(xmlFile, v3 .. "#depositedLiters")
  self.depositedLiters = v8
  v8 = v8:getFruitTypeByIndex(self.field.fruitType)
  if not v8 then
    local v12 = v12:getName()
    Logging.xmlWarning(xmlFile, "Field '%s' for harvest mission '%s' has no fruit type. Ignoring mission", v12, key)
    return false
  end
  self.fillType = v8.fillType.index
  self:updateRewardPerHa()
  if self.status == AbstractMission.STATUS_RUNNING then
    self:createModifiers()
  end
  return true
end
function HarvestMission:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.sellPoint)
  streamWriteUIntN(streamId, self.fillType, FillTypeManager.SEND_NUM_BITS)
end
function HarvestMission:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = NetworkUtil.readNodeObjectId(streamId)
  self.sellPointId = v3
  v3 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  self.fillType = v3
  self:updateRewardPerHa()
end
function HarvestMission:init(field, ...)
  local v2 = v2:getFruitTypeByIndex(field.fruitType)
  self.fillType = v2.fillType.index
  self:updateRewardPerHa()
  local v4 = v4:superClass()
  local v3 = v4.init(...)
  if not v3 then
    return false
  end
  self.depositedLiters = 0
  v3 = self:getMaxCutLiters()
  self.expectedLiters = v3
  v3 = self:getHighestSellPointPrice()
  self.sellPoint = v3
  if self.sellPoint == nil then
    return false
  end
  return true
end
function HarvestMission:start(...)
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
  self:createModifiers()
  return true
end
function HarvestMission:finish(success)
  local v3 = v3:superClass()
  v3.finish(self, success)
  self.sellPoint.missions[self] = nil
end
function HarvestMission:calculateStealingCost()
  if not self.success and self.isServer then
    local v1 = v1:getFruitTypeByIndex(self.field.fruitType)
    local v2 = v2:getHarvestScaleMultiplier(self.fruitType, self.sprayFactor, self.fieldPlowFactor, self.limeFactor, self.weedFactor, self.stubbleFactor, self.rollerFactor)
    local v6 = self:getFruitInVehicles()
    if (v1.literPerSqm * self.fieldPercentageDone * self.field.fieldArea * v2 * 10000 - v6) * HarvestMission.FAILURE_COST_FACTOR < v1.literPerSqm * self.fieldPercentageDone * self.field.fieldArea * v2 * 10000 - v6 - self.depositedLiters then
      local v7, v8 = self:getHighestSellPointPrice()
      return (v1.literPerSqm * self.fieldPercentageDone * self.field.fieldArea * v2 * 10000 - v6 - self.depositedLiters) * HarvestMission.FAILURE_COST_OF_TOTAL * v8
    end
  end
  return 0
end
function HarvestMission:getFruitInVehicles()
  for v5, v6 in pairs(self.vehicles) do
    if not (v6.spec_fillUnit ~= nil) then
      continue
    end
    local v8 = v6:getFillUnits()
    for v10, v11 in pairs(...) do
      local v12 = v6:getFillUnitFillType(v10)
      if not (v12 == self.fillType) then
        continue
      end
      local v13 = v6:getFillUnitFillLevel(v10)
    end
  end
  return v1
end
function HarvestMission:getHighestSellPointPrice()
  local v4 = v4:getUnloadingStations()
  for v6, v7 in pairs(...) do
    if not (v7.owningPlaceable ~= nil) then
      continue
    end
    if not v7.isSellingPoint then
      continue
    end
    if not v7.allowMissions then
      continue
    end
    if not v7.acceptedFillTypes[self.fillType] then
      continue
    end
    local v8 = v7:getEffectiveFillTypePrice(self.fillType)
    if not (v1 < v8) then
      continue
    end
  end
  return v2, v1
end
function HarvestMission:completeField()
  local v1 = v1:getFruitTypeByIndex(self.field.fruitType)
  local v5 = table.getn(self.field.maxFieldStatusPartitions)
  -- TODO: structure LOP_FORNPREP (pc 19, target 45)
  v5:setFieldPartitionStatus(self.field, self.field.maxFieldStatusPartitions, 1, self.field.fruitType, FieldManager.FIELDSTATE_HARVESTED, v1.cutState, 0, false, self.fieldPlowFactor)
  -- TODO: structure LOP_FORNLOOP (pc 44, target 20)
end
function HarvestMission:fillSold(fillDelta)
  local v2 = math.min(self.depositedLiters + fillDelta, self.expectedLiters)
  self.depositedLiters = v2
  if self.expectedLiters * AbstractMission.SUCCESS_FACTOR <= self.depositedLiters then
    self.sellPoint.missions[self] = nil
  end
  self.lastSellChange = 30
end
function HarvestMission:tryToResolveSellPoint()
  if self.sellPointId == nil then
    return
  end
  local v1 = NetworkUtil.getObject(self.sellPointId)
  self.sellPoint = v1
  if self.sellPoint ~= nil then
    self.sellPointId = nil
  end
end
function HarvestMission:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.sellPointId ~= nil then
    self:tryToResolveSellPoint()
  end
  if g_currentMission.player.farmId == self.farmId and self.sellPoint ~= nil then
    local v2 = self:hasMapMarker()
    if not v2 and self.status == AbstractMission.STATUS_RUNNING then
      self:createMapMarkerAtSellingStation(self.sellPoint)
    end
  end
  if 0 < self.lastSellChange then
    self.lastSellChange = self.lastSellChange - 1
    if self.lastSellChange == 0 then
      v3 = math.floor(self.depositedLiters / self.expectedLiters * AbstractMission.SUCCESS_FACTOR * 100)
      local v8 = v8:getText("fieldJob_progress_transporting_forField")
      local v7 = string.format(v8, v3, self.field.fieldId)
      v4:addIngameNotification(...)
    end
  end
end
function HarvestMission:getVehicleVariant()
  if self.field.fruitType ~= FruitType.SUNFLOWER then
    -- if v0.field.fruitType ~= FruitType.MAIZE then goto L14 end
  end
  return "MAIZE"
  if v1 == FruitType.SUGARBEET then
    return "SUGARBEET"
  end
  if v1 == FruitType.POTATO then
    return "POTATO"
  end
  if v1 == FruitType.COTTON then
    return "COTTON"
  end
  if v1 == FruitType.SUGARCANE then
    return "SUGARCANE"
  end
  return "GRAIN"
end
function HarvestMission:updateRewardPerHa()
  if self.fillType ~= FillType.SUGARCANE and self.fillType ~= FillType.POTATO then
    -- if v0.fillType ~= FillType.SUGARBEET then goto L25 end
  end
  self.rewardPerHa = HarvestMission.REWARD_PER_HA_SMALL
  return
  self.rewardPerHa = HarvestMission.REWARD_PER_HA_WIDE
end
function HarvestMission:canRunOnField(v1, v2, v3, v4, v5, v6, v7)
  local v9 = FieldUtil.getMaxHarvestState(self, self.fruitType)
  if v9 == nil then
    return false
  end
  if v8 == FruitType.COTTON and self.fieldArea < 0.4 then
    return false
  end
  return true, FieldManager.FIELDSTATE_GROWING, v9
end
function HarvestMission:getData()
  if self.sellPointId ~= nil then
    self:tryToResolveSellPoint()
  end
  if self.sellPoint ~= nil then
    local v2 = v2:getName()
  end
  local v4 = v4:getText("fieldJob_number")
  local v3 = string.format(v4, self.field.fieldId)
  v3 = v3:getText("fieldJob_jobType_harvesting")
  v3 = v3:getText("fieldJob_desc_action_harvesting")
  v4 = v4:getText("fieldJob_desc_harvesting")
  local v6 = v6:getFillTypeByIndex(self.fillType)
  v3 = string.format(v4, v6.title, self.field.fieldId, v1)
  return {location = v3, jobType = v3, action = v3, description = v3}
end
function HarvestMission:getCompletion()
  local sellCompletion = math.min(self.depositedLiters / self.expectedLiters / HarvestMission.SUCCESS_FACTOR, 1)
  local fieldCompletion = self:getFieldCompletion()
  local harvestCompletion = math.min(fieldCompletion / AbstractMission.SUCCESS_FACTOR, 1)
  return math.min(1, 0.8 * harvestCompletion + 0.2 * sellCompletion)
end
function HarvestMission:getExtraProgressText()
  if 0.1 <= self.completion then
    if self.sellPointId ~= nil then
      self:tryToResolveSellPoint()
    end
    if self.sellPoint ~= nil then
      local v2 = v2:getName()
    end
    local v3 = v3:getText("fieldJob_progress_harvesting_nextUnloadDesc")
    local v5 = v5:getFillTypeByIndex(self.fillType)
    v2 = string.format(v3, v5.title, v1)
    return v2
  end
  return ""
end
function HarvestMission:createModifiers()
  local v1 = v1:getFruitTypeByIndex(self.field.fruitType)
  if v1 ~= nil and v1.terrainDataPlaneId ~= nil then
    local v2 = DensityMapModifier.new(v1.terrainDataPlaneId, v1.startStateChannel, v1.numStateChannels, self.mission.terrainRootNode)
    self.completionModifier = v2
    v2 = DensityMapFilter.new(self.completionModifier)
    self.completionFilter = v2
    v2:setValueCompareParams(DensityValueCompareType.EQUAL, v1.cutState)
  end
end
function HarvestMission:partitionCompletion(x, z, widthX, widthZ, heightX, heightZ)
  v7:setParallelogramWorldCoords(x, z, widthX, widthZ, heightX, heightZ, DensityCoordType.POINT_VECTOR_VECTOR)
  local v7, v8, v9 = v7:executeGet(self.completionFilter)
  return v8, v9
end
function HarvestMission.validate(v0, v1)
  if v1 ~= FieldManager.FIELDEVENT_HARVESTED and v1 ~= FieldManager.FIELDEVENT_WITHERED and v1 == FieldManager.FIELDEVENT_CULTIVATED then
  end
  return v2
end
v1:registerMissionType(HarvestMission, "harvest")
