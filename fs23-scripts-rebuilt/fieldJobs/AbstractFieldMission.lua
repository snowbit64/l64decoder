-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AbstractFieldMission = {}
local AbstractFieldMission_mt = Class(AbstractFieldMission, AbstractMission)
InitStaticObjectClass(AbstractFieldMission, "AbstractFieldMission", ObjectIds.MISSION_FIELD)
AbstractFieldMission.REWARD_PER_HA = 800
AbstractFieldMission.VEHICLE_USE_COST = 200
AbstractFieldMission.REIMBURSEMENT_FACTOR = 0.95
AbstractFieldMission.FIELD_SIZE_MEDIUM = 1.5
AbstractFieldMission.FIELD_SIZE_LARGE = 5
function AbstractFieldMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.workAreaTypes = {}
  v3.vehicles = {}
  v3.moneyMultiplier = 1
  v3.isInMissionMap = false
  v3.fieldPercentageDone = 0
  v3.mission = g_currentMission
  local v4 = v4:getMaxValue(FieldDensityMap.SPRAY_LEVEL)
  v3.sprayLevelMaxValue = v4
  v4 = v4:getMaxValue(FieldDensityMap.PLOW_LEVEL)
  v3.plowLevelMaxValue = v4
  v4 = v4:getMaxValue(FieldDensityMap.LIME_LEVEL)
  v3.limeLevelMaxValue = v4
  return v3
end
function AbstractFieldMission:delete()
  if self.isInMissionMap then
    v1:removeMissionFromMissionMap(self)
  end
  if self.field ~= nil then
    v1:setMissionActive(false)
  end
  self:destroyMapMarker()
  self:removeAccess()
  v1:unsubscribeAll(self)
  local v2 = v2:superClass()
  v2.delete(self)
  self.mission = nil
end
function AbstractFieldMission:saveToXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  v4.saveToXMLFile(self, xmlFile, key)
  local fieldKey = string.format("%s.field", key)
  setXMLInt(xmlFile, fieldKey .. "#id", self.field.fieldId)
  setXMLFloat(xmlFile, fieldKey .. "#sprayFactor", self.sprayFactor)
  setXMLBool(xmlFile, fieldKey .. "#spraySet", self.fieldSpraySet)
  setXMLFloat(xmlFile, fieldKey .. "#plowFactor", self.fieldPlowFactor)
  setXMLInt(xmlFile, fieldKey .. "#state", self.fieldState)
  setXMLInt(xmlFile, fieldKey .. "#vehicleGroup", self.vehicleGroupIdentifier)
  if self.vehicleUseCost ~= nil then
    setXMLFloat(xmlFile, fieldKey .. "#vehicleUseCost", self.vehicleUseCost)
  end
  if self.spawnedVehicles ~= nil then
    setXMLBool(xmlFile, fieldKey .. "#spawnedVehicles", self.spawnedVehicles)
  end
  if self.growthState ~= nil then
    setXMLInt(xmlFile, fieldKey .. "#growthState", self.growthState)
  end
  setXMLFloat(xmlFile, fieldKey .. "#limeFactor", self.limeFactor)
  setXMLFloat(xmlFile, fieldKey .. "#weedFactor", self.weedFactor)
  setXMLFloat(xmlFile, fieldKey .. "#stubbleFactor", self.stubbleFactor)
  if self.weedState ~= nil then
    setXMLInt(xmlFile, fieldKey .. "#weedState", self.weedState)
  end
  if self.field.fruitType ~= nil and self.field.fruitType ~= 0 then
    v4 = v4:getFruitTypeNameByIndex(self.field.fruitType)
    setXMLString(xmlFile, fieldKey .. "#fruitTypeName", v4)
  end
end
function AbstractFieldMission:loadFromXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  local v3 = v4.loadFromXMLFile(self, xmlFile, key)
  if not v3 then
    return false
  end
  v4 = getXMLInt(xmlFile, key .. ".field(0)" .. "#id")
  local v5 = v5:getFieldByIndex(v4)
  self.field = v5
  if self.field == nil then
    Logging.xmlWarning(xmlFile, "Mission '%s' field '%s' is not available.", key, v4)
    return false
  end
  v5 = getXMLFloat(xmlFile, v3 .. "#sprayFactor")
  self.sprayFactor = v5
  v5 = getXMLBool(xmlFile, v3 .. "#spraySet")
  self.fieldSpraySet = v5
  v5 = getXMLFloat(xmlFile, v3 .. "#plowFactor")
  self.fieldPlowFactor = v5
  v5 = getXMLInt(xmlFile, v3 .. "#state")
  self.fieldState = v5
  v5 = getXMLInt(xmlFile, v3 .. "#growthState")
  self.growthState = v5
  v5 = getXMLFloat(xmlFile, v3 .. "#limeFactor")
  self.limeFactor = v5
  v5 = getXMLFloat(xmlFile, v3 .. "#weedFactor")
  self.weedFactor = v5
  local v6 = getXMLFloat(xmlFile, v3 .. "#stubbleFactor")
  self.stubbleFactor = v6 or 1
  v6 = getXMLFloat(xmlFile, v3 .. "#rollerFactor")
  self.rollerFactor = v6 or 1
  v5 = getXMLInt(xmlFile, v3 .. "#weedState")
  self.weedState = v5
  v5 = getXMLInt(xmlFile, v3 .. "#vehicleGroup")
  self.vehicleGroupIdentifier = v5
  v5 = getXMLFloat(xmlFile, v3 .. "#vehicleUseCost")
  self.vehicleUseCost = v5
  v6 = getXMLBool(xmlFile, v3 .. "#spawnedVehicles")
  v5 = Utils.getNoNil(v6, false)
  self.spawnedVehicles = v5
  v5 = self:getVehicleGroupFromIdentifier(self.vehicleGroupIdentifier)
  self.vehiclesToLoad = v5
  v5 = getXMLString(xmlFile, v3 .. "#fruitTypeName")
  if v5 ~= nil and self.status == AbstractMission.STATUS_RUNNING then
    v6 = v6:getFruitTypeByName(v5)
    self.field.fruitType = v6.index
  end
  if self.status == AbstractMission.STATUS_RUNNING then
    self.field.currentMission = self
    self:addToMissionMap()
    v6:subscribe(MessageType.VEHICLE_RESET, self.onVehicleReset, self)
    self.needsFieldHotspotActivation = self.isClient
  end
  return true
end
function AbstractFieldMission:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  streamWriteInt32(streamId, self.field.fieldId)
  streamWriteFloat32(streamId, self.vehicleUseCost)
  streamWriteInt32(streamId, self.vehicleGroupIdentifier)
  streamWriteBool(streamId, self.spawnedVehicles or false)
end
function AbstractFieldMission:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local fieldId = streamReadInt32(streamId)
  v4 = v4:getFieldByIndex(fieldId)
  self.field = v4
  v4 = streamReadFloat32(streamId)
  self.vehicleUseCost = v4
  v4 = streamReadInt32(streamId)
  self.vehicleGroupIdentifier = v4
  v4 = self:getVehicleGroupFromIdentifier(self.vehicleGroupIdentifier)
  self.vehiclesToLoad = v4
  v4 = streamReadBool(streamId)
  self.spawnedVehicles = v4
  if self.status == AbstractMission.STATUS_RUNNING then
    self:addToMissionMap()
  end
end
function AbstractFieldMission:init(field, sprayFactor, fieldSpraySet, fieldPlowFactor, fieldState, growthState, limeFactor, weedFactor, weedState, stubbleFactor, rollerFactor)
  local v13 = v13:superClass()
  local v12 = v13.init(self)
  if not v12 then
    return false
  end
  self.field = field
  self.sprayFactor = sprayFactor
  self.fieldSpraySet = fieldSpraySet
  self.fieldPlowFactor = fieldPlowFactor
  self.fieldState = fieldState
  self.growthState = growthState
  self.limeFactor = limeFactor
  self.weedFactor = weedFactor
  self.weedState = weedState
  self.stubbleFactor = stubbleFactor
  self.rollerFactor = rollerFactor
  v12, v13 = self:getVehicleGroup()
  self.vehiclesToLoad = v12
  self.vehicleGroupIdentifier = v13
  if self.vehicleGroupIdentifier ~= nil then
    v12 = self:calculateVehicleUseCost()
    self.vehicleUseCost = v12
  end
  v12 = self:calculateReward()
  self.reward = v12
  return true
end
function AbstractFieldMission:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.needsFieldHotspotActivation then
    if g_currentMission.player.farmId == self.farmId then
      v2:setMissionActive(true)
    end
    self.needsFieldHotspotActivation = false
  end
  if self.vehicleIndexToLoadNext ~= nil and self.lastVehicleIndexToLoad == self.vehicleIndexToLoadNext then
    if self.vehicleLoadWaitFrameCounter == nil then
      self.vehicleIndexToLoadNext = self.vehicleIndexToLoadNext + 1
      v3 = table.getn(self.vehiclesToLoad)
      -- if v0.vehicleIndexToLoadNext > v3 then goto L80 end
      local v2 = self:loadNextVehicle()
      -- if v2 then goto L80 end
      Logging.error("Failed to load all vehicles: no space at spawn point")
      self.vehicleIndexToLoadNext = nil
      return
    end
    self.vehicleLoadWaitFrameCounter = self.vehicleLoadWaitFrameCounter - 1
    if self.vehicleLoadWaitFrameCounter == 0 then
      self.vehicleLoadWaitFrameCounter = nil
    end
  end
end
function AbstractFieldMission:start(spawnVehicles)
  local v3 = v3:superClass()
  local v2 = v3.start(self, spawnVehicles)
  if not v2 then
    return false
  end
  if self.isServer then
    if spawnVehicles and self.vehiclesToLoad ~= nil then
      self.spawnedVehicles = true
      self.lastVehicleIndexToLoad = 0
      self.vehicleIndexToLoadNext = 0
    end
    self.field.currentMission = self
    self:resetField()
  end
  self:addToMissionMap()
  if self.isClient and g_currentMission.player.farmId == self.farmId then
    v2:setMissionActive(true)
  end
  v2:subscribe(MessageType.VEHICLE_RESET, self.onVehicleReset, self)
  return true
end
function AbstractFieldMission:started()
  if self.isClient then
    self:addToMissionMap()
    if g_currentMission.player.farmId == self.farmId then
      v1:setMissionActive(true)
    end
  end
end
function AbstractFieldMission:finish(success)
  local v3 = v3:superClass()
  v3.finish(self, success)
  self.success = success
  self:destroyMapMarker()
  local v2 = v2:getIsServer()
  if v2 then
    if success then
      v3 = v3:getFarmById(self.farmId)
      v2:updateFieldJobsDone(self.field.farmland.npcIndex)
      v2 = v2:getNPCByIndex(self.field.farmland.npcIndex)
      v2.finishedMissions = v2.finishedMissions + 1
    else
      self:resetField()
    end
  end
  if not success then
    self:removeAccess()
  end
  v2 = v2:getFarmId()
  if v2 == self.farmId then
    if success then
      local v6 = v6:getText("fieldJob_finishedField")
      local v5 = string.format(v6, self.field.fieldId)
      v2:addIngameNotification(...)
      return
    end
    v6 = v6:getText("fieldJob_failedField")
    v5 = string.format(v6, self.field.fieldId)
    v2:addIngameNotification(...)
  end
end
function AbstractFieldMission:dismiss()
  if 0 < #self.vehicles then
    local v3 = self:calculateReimbursement()
    self.reward = self.reward - self.vehicleUseCost + v3
  end
  if self.success then
    self:removeAccess()
    self:completeField()
  end
  self.field.currentMission = nil
  local v2 = v2:superClass()
  v2.dismiss(self)
end
function AbstractFieldMission:removeAccess()
  if self.isInMissionMap then
    v1:removeMissionFromMissionMap(self)
    self.isInMissionMap = false
  end
  if self.isServer then
    for v4, v5 in ipairs(self.vehicles) do
      v6:removeVehicle(v5)
    end
    self.vehicles = {}
  end
end
function AbstractFieldMission:hasLeasableVehicles()
  if self.vehiclesToLoad == nil then
  end
  return true
end
function AbstractFieldMission.hasField(v0)
  return true
end
function AbstractFieldMission:resetField()
  local v4 = table.getn(self.field.maxFieldStatusPartitions)
  -- TODO: structure LOP_FORNPREP (pc 10, target 51)
  v4:setFieldPartitionStatus(self.field, self.field.maxFieldStatusPartitions, 1, self.field.fruitType, self.fieldState, self.growthState, self.sprayFactor * self.sprayLevelMaxValue, self.fieldSpraySet, self.fieldPlowFactor * self.plowLevelMaxValue, self.weedState, self.limeFactor * self.limeLevelMaxValue)
  -- TODO: structure LOP_FORNLOOP (pc 50, target 11)
end
function AbstractFieldMission.completeField(v0)
end
function AbstractFieldMission:showCompletionNotification()
  local v2 = v2:getText("fieldJob_fieldCompletionNotification")
  local v1 = string.format(v2, self.field.fieldId, self.completion * 100)
  v2:addIngameNotification(FSBaseMission.INGAME_NOTIFICATION_INFO, v1)
end
function AbstractFieldMission:getCompletion()
  local fieldCompletion = self:getFieldCompletion()
  return fieldCompletion / AbstractMission.SUCCESS_FACTOR
end
function AbstractFieldMission:getFieldCompletion()
  self.fieldPercentageDone = 0
  if self.currentFieldJobPartitionIndex == nil then
    self.currentFieldJobPartitionIndex = 1
    local v1 = table.getn(self.field.getFieldStatusPartitions)
    -- TODO: structure LOP_FORNPREP (pc 20, target 105)
    self.field.getFieldStatusPartitions[1].percentage = 0
    -- TODO: structure LOP_FORNLOOP (pc 29, target 21)
  else
    if self.field.getFieldStatusPartitions[self.currentFieldJobPartitionIndex] ~= nil then
      local v2, v3 = self:partitionCompletion(self.field.getFieldStatusPartitions[self.currentFieldJobPartitionIndex].x0, self.field.getFieldStatusPartitions[self.currentFieldJobPartitionIndex].z0, self.field.getFieldStatusPartitions[self.currentFieldJobPartitionIndex].widthX, self.field.getFieldStatusPartitions[self.currentFieldJobPartitionIndex].widthZ, self.field.getFieldStatusPartitions[self.currentFieldJobPartitionIndex].heightX, self.field.getFieldStatusPartitions[self.currentFieldJobPartitionIndex].heightZ)
      if v2 == nil then
        return 0
      end
      v1.percentage = v2 / v3
    else
      v2:deleteMission(self)
    end
    v3 = table.getn(self.field.getFieldStatusPartitions)
    -- TODO: structure LOP_FORNPREP (pc 80, target 90)
    -- TODO: structure LOP_FORNLOOP (pc 89, target 81)
    self.fieldPercentageDone = (0 + self.field.getFieldStatusPartitions[1].percentage) / v3
    self.currentFieldJobPartitionIndex = self.currentFieldJobPartitionIndex + 1
    if v3 < self.currentFieldJobPartitionIndex then
      self.currentFieldJobPartitionIndex = 1
    end
  end
  return self.fieldPercentageDone
end
function AbstractFieldMission:getFieldSize()
  if AbstractFieldMission.FIELD_SIZE_LARGE < self.field.fieldArea then
    return "large"
  end
  if AbstractFieldMission.FIELD_SIZE_MEDIUM < self.field.fieldArea then
  end
  return v1
end
function AbstractFieldMission:getVehicleGroup()
  local v4 = self:getFieldSize()
  local v5 = self:getVehicleVariant()
  return v1:getRandomVehicleGroup(...)
end
function AbstractFieldMission.getVehicleVariant(v0)
  return nil
end
function AbstractFieldMission:getVehicleGroupFromIdentifier(identifier)
  local v5 = self:getFieldSize()
  return v2:getVehicleGroupFromIdentifier(self["type"].name, v5, identifier)
end
function AbstractFieldMission:onVehicleReset(oldVehicle, newVehicle)
  if oldVehicle.activeMissionId == self.activeMissionId then
    newVehicle.activeMissionId = self.activeMissionId
    table.removeElement(self.vehicles, oldVehicle)
    table.insert(self.vehicles, newVehicle)
  end
end
function AbstractFieldMission:calculateReward()
  if self.field.fruitType ~= nil then
    local v2 = v2:getFruitTypeByIndex(self.field.fruitType)
    if v2 ~= nil then
    end
  end
  return v1 * self.rewardPerHa * self.field.fieldArea + self.reimbursementPerHa * self.field.fieldArea
end
function AbstractFieldMission:getReward()
  if self.reimbursementPerDifficulty then
  end
  return v3 * v1 + v2
end
function AbstractFieldMission:calculateVehicleUseCost()
  return AbstractFieldMission.VEHICLE_USE_COST * self.field.fieldArea * (0.7 + 0.3 * g_currentMission.missionInfo.economicDifficulty)
end
function AbstractFieldMission:addToMissionMap()
  self.isInMissionMap = true
  v1:addMissionToMissionMap(self)
end
function AbstractFieldMission:loadNextVehicle()
  local v3 = v3:getItemByXMLFilename(self.vehiclesToLoad[self.vehicleIndexToLoadNext].filename)
  if v3 == nil then
    Logging.error("Trying to load invalid store item '%s' for mission.", self.vehiclesToLoad[self.vehicleIndexToLoadNext].filename)
    return false
  end
  local v4 = StoreItemUtil.getSizeValues(v3.xmlFilename, "vehicle", v3.rotation, v1.configurations)
  local v7, v8, v9, v10, v11, v12 = PlacementUtil.getPlace(g_currentMission.storeSpawnPlaces, v4, g_currentMission.usedStorePlaces)
  if v7 == nil then
    return false
  end
  local v13 = MathUtil.getYRotationFromDirection(v10.dirPerpX, v10.dirPerpZ)
  VehicleLoadingUtil.loadVehicle(v2, {x = v7, z = v9, yOffset = 0, yRot = v13 + v3.rotation}, true, 0, Vehicle.PROPERTY_STATE_MISSION, self.farmId, v1.configurations, nil, self.loadNextVehicleCallback, self, {self.vehicleIndexToLoadNext})
  PlacementUtil.markPlaceUsed(v6, v10, v11)
  return true
end
function AbstractFieldMission:loadNextVehicleCallback(vehicle, vehicleLoadState, arguments)
  if vehicle ~= nil then
    self.lastVehicleIndexToLoad = arguments[1]
    self.vehicleLoadWaitFrameCounter = 2
    vehicle.activeMissionId = self.activeMissionId
    local v8 = math.random()
    vehicle:addWearAmount(v8 * 0.3 + 0.1)
    local v10 = math.random()
    vehicle:setOperatingTime(3600000 * (v10 * 40 + 30))
    table.insert(self.vehicles, vehicle)
  end
end
function AbstractFieldMission:getMaxCutLiters()
  local v1 = v1:getFruitTypeByIndex(self.field.fruitType)
  if v1 == nil then
    local v4 = v4:getName()
    Logging.devWarning(...)
    return 0
  end
  local v2 = v2:getHarvestScaleMultiplier(self.fruitType, self.sprayFactor, self.fieldPlowFactor, self.limeFactor, self.weedFactor, self.stubbleFactor, self.rollerFactor)
  if v1.hasWindrow then
    local v5 = math.min(v1.literPerSqm, v1.windrowLiterPerSqm)
  end
  return v4 * v3 * 10000
end
function AbstractFieldMission:isSpawnSpaceAvailable()
  for v8, v9 in ipairs(self.vehiclesToLoad) do
    local v10 = v10:getItemByXMLFilename(v9.filename)
    local v11 = StoreItemUtil.getSizeValues(v9.filename, "vehicle", v10.rotation, v9.configurations)
    local v12, v13, v14, v15, v16, v17 = PlacementUtil.getPlace(v2, v11, v3)
    if v12 == nil then
      break
    end
    PlacementUtil.markPlaceUsed(v3, v15, v16)
    table.insert(v4, v15)
  end
  for v8, v9 in ipairs(v4) do
    PlacementUtil.unmarkPlaceUsed(v3, v9)
  end
  return v1
end
function AbstractFieldMission:calculateReimbursement()
  for v5, v6 in pairs(self.vehicles) do
    if not (v6.spec_fillUnit ~= nil) then
      continue
    end
    local v8 = v6:getFillUnits()
    for v10, v11 in pairs(...) do
      local v12 = v6:getFillUnitFillType(v10)
      if not (v12 ~= nil) then
        continue
      end
      if not (v12 ~= FillType.DIESEL) then
        continue
      end
      if not (v12 ~= FillType.DEF) then
        continue
      end
      if not (v12 ~= FillType.AIR) then
        continue
      end
      local v13 = v13:getFruitTypeIndexByFillTypeIndex(v12)
      if not (v13 == nil) then
        continue
      end
      v13 = v6:getFillUnitFillLevel(v10)
      local v14 = v14:getFillTypeByIndex(v12)
    end
  end
  return v1 * AbstractFieldMission.REIMBURSEMENT_FACTOR
end
function AbstractFieldMission:getNPC()
  return v1:getNPC()
end
function AbstractFieldMission:createMapMarkerAtSellingStation(sellingStation)
  if sellingStation.owningPlaceable.rootNode == nil then
    return nil
  end
  local v2, v3, v4 = getWorldTranslation(sellingStation.owningPlaceable.rootNode)
  if sellingStation.mapHotspot ~= nil then
    local v6, v7 = sellingStation.mapHotspot:getWorldPosition()
  end
  v6 = MissionHotspot.new()
  v6:setWorldPosition(v2, v4)
  v7:addMapHotspot(v6)
  self.mapHotspot = v6
  return v6
end
function AbstractFieldMission:destroyMapMarker()
  if self.mapHotspot ~= nil then
    v1:removeMapHotspot(self.mapHotspot)
    v1:delete()
    self.mapHotspot = nil
  end
end
function AbstractFieldMission:hasMapMarker()
  if self.mapHotspot == nil then
  end
  return true
end
function AbstractFieldMission.canRunOnField(field)
  return false
end
