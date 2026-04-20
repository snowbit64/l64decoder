-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StonePicker = {}
function StonePicker.initSpecialization()
  AIFieldWorker.registerCustomDriveStrategy(function(self)
    return SpecializationUtil.hasSpecialization(StonePicker, self.specializations)
  end, AIDriveStrategyStonePicker)
  v0:addWorkAreaType("stonePicker", true)
  Vehicle.xmlSchema:setXMLSpecializationType("StonePicker")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.stonePicker#fillUnitIndex", "Index of fillunit to be used for picked stones")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.stonePicker#loadInfoIndex", "Index of load info to use")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.stonePicker.directionNode#node", "Direction node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.stonePicker.onlyActiveWhenLowered#value", "Only active when lowered", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.stonePicker.needsActivation#value", "Needs activation", true)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.stonePicker.effects")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.stonePicker.soilEffects")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.stonePicker.sounds", "work")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.stonePicker.sounds", "stone")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function StonePicker.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
  end
  return v1
end
function StonePicker.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processStonePickerArea", StonePicker.processStonePickerArea)
  SpecializationUtil.registerFunction(vehicleType, "setStonePickerEffectsState", StonePicker.setStonePickerEffectsState)
end
function StonePicker.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", StonePicker.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoGroundManipulation", StonePicker.getDoGroundManipulation)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", StonePicker.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", StonePicker.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", StonePicker.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", StonePicker.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOn", StonePicker.getCanBeTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getTurnedOnNotAllowedWarning", StonePicker.getTurnedOnNotAllowedWarning)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleTurnedOn", StonePicker.getCanToggleTurnedOn)
end
function StonePicker.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", StonePicker)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", StonePicker)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", StonePicker)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", StonePicker)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", StonePicker)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", StonePicker)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", StonePicker)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", StonePicker)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", StonePicker)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", StonePicker)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", StonePicker)
end
function StonePicker:onLoad(savegame)
  local v2 = self:getGroundReferenceNodeFromIndex(1)
  if v2 == nil then
    print("Warning: No ground reference nodes in  " .. self.configFileName)
  end
  if self.isClient then
    self.spec_stonePicker.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.stonePicker.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_stonePicker.samples.work = v4
    v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.stonePicker.sounds", "stone", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_stonePicker.samples.stone = v4
    self.spec_stonePicker.isWorkSamplePlaying = false
    self.spec_stonePicker.isStoneSamplePlaying = false
    local v3 = v3:loadEffect(self.xmlFile, "vehicle.stonePicker.effects", self.components, self, self.i3dMappings)
    self.spec_stonePicker.effects = v3
    v3 = v3:loadEffect(self.xmlFile, "vehicle.stonePicker.soilEffects", self.components, self, self.i3dMappings)
    self.spec_stonePicker.soilEffects = v3
  end
  v3 = v3:getValue("vehicle.stonePicker#fillUnitIndex", 1)
  v2.fillUnitIndex = v3
  v3 = v3:getValue("vehicle.stonePicker#loadInfoIndex", 1)
  v2.loadInfoIndex = v3
  v3 = v3:getValue("vehicle.stonePicker.directionNode#node", self.components[1].node, self.components, self.i3dMappings)
  v2.directionNode = v3
  v3 = v3:getValue("vehicle.stonePicker.onlyActiveWhenLowered#value", true)
  v2.onlyActiveWhenLowered = v3
  v3 = v3:getValue("vehicle.stonePicker.needsActivation#value", true)
  v2.needsActivation = v3
  v2.startActivationTimeout = 2000
  v2.startActivationTime = 0
  v2.hasGroundContact = false
  v2.isWorking = false
  v2.isEffectActive = false
  v2.effectGrowthState = 1
  v2.isSoilEffectActive = false
  v2.texts = {}
  v4 = v4:getText("warning_toolIsFull")
  v2.texts.warningToolIsFull = v4
  v2.workAreaParameters = {angle = 0, pickedLiters = 0, lastChangedArea = 0, lastChangedAreaTime = -math.huge, lastGrowthState = 1, lastStatsArea = 0, lastTotalArea = 0}
  if self.isServer then
    v3, v4 = v3:getSowableRange()
    self:addAITerrainDetailRequiredRange(v3, v4)
  end
  v3 = self:getNextDirtyFlag()
  v2.dirtyFlag = v3
end
function StonePicker:onDelete()
  v2:deleteSamples(self.spec_stonePicker.samples)
  v2:deleteEffects(self.spec_stonePicker.effects)
  v2:deleteEffects(self.spec_stonePicker.soilEffects)
end
function StonePicker:onReadStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  local growthState = streamReadUIntN(streamId, 2)
  local v5 = streamReadBool(streamId)
  self:setStonePickerEffectsState(v3, growthState, v5)
end
function StonePicker:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_stonePicker.isEffectActive)
  streamWriteUIntN(streamId, self.spec_stonePicker.effectGrowthState, 2)
  streamWriteBool(streamId, self.spec_stonePicker.isSoilEffectActive)
end
function StonePicker:onReadUpdateStream(streamId, timestamp, connection)
  if connection.isServer then
    local v4 = streamReadBool(streamId)
    if v4 then
      v4 = streamReadBool(streamId)
      local growthState = streamReadUIntN(streamId, 2)
      local v6 = streamReadBool(streamId)
      self:setStonePickerEffectsState(v4, growthState, v6)
    end
  end
end
function StonePicker:onWriteUpdateStream(streamId, connection, dirtyMask)
  if not connection.isServer then
    local v8 = bitAND(dirtyMask, self.spec_stonePicker.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      streamWriteBool(streamId, v4.isEffectActive)
      streamWriteUIntN(streamId, v4.effectGrowthState, 2)
      streamWriteBool(streamId, v4.isSoilEffectActive)
    end
  end
end
function StonePicker:processStonePickerArea(workArea, dt)
  if not self.spec_stonePicker.workAreaParameters.isActive then
    return 0, 0
  end
  local v4, v5, v6 = getWorldTranslation(workArea.start)
  local v7, v8, v9 = getWorldTranslation(workArea.width)
  local v10, v11, v12 = getWorldTranslation(workArea.height)
  local v14, v15, v16 = FSDensityMapUtil.updateStonePickerArea(v4, v6, v7, v9, v10, v12, v3.workAreaParameters.angle)
  local v17 = v17:getLitersPerSqm()
  local v19 = v19:getFruitPixelsToSqm()
  v3.workAreaParameters.pickedLiters = v3.workAreaParameters.pickedLiters + v19 * v15 * v17 * v14
  v3.workAreaParameters.lastChangedArea = v3.workAreaParameters.lastChangedArea + v15
  v3.workAreaParameters.lastStatsArea = v3.workAreaParameters.lastStatsArea + v15
  v3.workAreaParameters.lastTotalArea = v3.workAreaParameters.lastTotalArea + v16
  if 0 < v15 then
    v3.workAreaParameters.lastChangedAreaTime = g_time
    local v21 = math.floor(v14 + 0.49)
    local v20 = MathUtil.clamp(v21, 1, 3)
    v3.workAreaParameters.lastGrowthState = v20
  end
  FSDensityMapUtil.eraseTireTrack(v4, v6, v7, v9, v10, v12)
  v21 = self:getLastSpeed()
  if 0.5 >= v21 then
  end
  v3.isWorking = true
  return v15, v16
end
function StonePicker:setStonePickerEffectsState(state, growthState, stateSoil)
  if state == self.spec_stonePicker.isEffectActive and growthState == self.spec_stonePicker.effectGrowthState then
    -- if v3 == v0.spec_stonePicker.isSoilEffectActive then goto L125 end
  end
  v4.isEffectActive = state
  v4.effectGrowthState = growthState
  v4.isSoilEffectActive = stateSoil
  if self.isClient then
    if state then
      v5:setFillType(v4.effects, FillType.STONE, growthState)
      v5:startEffects(v4.effects)
      -- if v4.isStoneSamplePlaying then goto L79 end
      v5:playSample(v4.samples.stone)
      v4.isStoneSamplePlaying = true
    else
      v5:stopEffects(v4.effects)
      if v4.isStoneSamplePlaying then
        v5:stopSample(v4.samples.stone)
        v4.isStoneSamplePlaying = false
      end
    end
    if stateSoil then
      v5:startEffects(v4.soilEffects)
      -- if v4.isWorkSamplePlaying then goto L125 end
      v5:playSample(v4.samples.work)
      v4.isWorkSamplePlaying = true
      return
    end
    v5:stopEffects(v4.soilEffects)
    if v4.isWorkSamplePlaying then
      v5:stopSample(v4.samples.work)
      v4.isWorkSamplePlaying = false
    end
  end
end
function StonePicker:doCheckSpeedLimit(superFunc)
  local v3 = superFunc(self)
  if not v3 then
    v3 = self:getIsImplementChainLowered()
    if v3 and not not self.spec_stonePicker.needsActivation then
      v3 = self:getIsTurnedOn()
    end
  end
  return v3
end
function StonePicker:getDoGroundManipulation(superFunc)
  if not self.spec_stonePicker.isWorking then
    return false
  end
  return superFunc(self)
end
function StonePicker:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if 0 < self.movingDirection and self.spec_stonePicker.isWorking then
    if self.spec_stonePicker.needsActivation then
      local v4 = self:getIsTurnedOn()
      -- if not v4 then goto L31 end
    end
    local v6 = self:getWorkDirtMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function StonePicker:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if 0 < self.movingDirection and self.spec_stonePicker.isWorking then
    if self.spec_stonePicker.needsActivation then
      local v4 = self:getIsTurnedOn()
      -- if not v4 then goto L31 end
    end
    local v6 = self:getWorkWearMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function StonePicker.loadWorkAreaFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if v2["type"] == WorkAreaType.DEFAULT then
    v2["type"] = WorkAreaType.STONEPICKER
  end
  return v5
end
function StonePicker:getIsWorkAreaActive(superFunc, workArea)
  if workArea["type"] == WorkAreaType.STONEPICKER then
    if g_currentMission.time < self.spec_stonePicker.startActivationTime then
      return false
    end
    if v3.onlyActiveWhenLowered and self.getIsLowered ~= nil then
      local v4 = self:getIsLowered(false)
      if not v4 then
        return false
      end
    end
    v4 = self:getFillUnitFreeCapacity(v3.fillUnitIndex)
    if v4 <= 0 then
      local v5 = self:getIsAIActive()
      if not v5 then
        return false
      end
    end
  end
  return superFunc(self, workArea)
end
function StonePicker:getCanBeTurnedOn(superFunc)
  local v3 = self:getFillUnitFreeCapacity(self.spec_stonePicker.fillUnitIndex)
  if v3 <= 0 then
    local v4 = self:getIsAIActive()
    if not v4 then
      return false
    end
  end
  v4 = superFunc(self)
  return v4
end
function StonePicker:getTurnedOnNotAllowedWarning(superFunc)
  local v3 = self:getFillUnitFreeCapacity(self.spec_stonePicker.fillUnitIndex)
  if v3 <= 0 then
    local v4 = self:getIsAIActive()
    if not v4 then
      return self.spec_stonePicker.texts.warningToolIsFull
    end
  end
  v4 = superFunc(self)
  return v4
end
function StonePicker:getCanToggleTurnedOn(superFunc)
  if not self.spec_stonePicker.needsActivation then
    return false
  end
  return superFunc(self)
end
function StonePicker:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillType, toolType, fillPositionData, appliedDelta)
  if self.isServer and self.spec_stonePicker.fillUnitIndex == fillUnitIndex then
    local v8 = self:getFillUnitFreeCapacity(self.spec_stonePicker.fillUnitIndex)
    if v8 <= 0 then
      local v9 = self:getIsTurnedOn()
      if v9 then
        v9 = self:getIsAIActive()
        if not v9 then
          self:setIsTurnedOn(false, false)
        end
      end
    end
  end
end
function StonePicker:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  self.spec_stonePicker.startActivationTime = g_currentMission.time + self.spec_stonePicker.startActivationTimeout
end
function StonePicker:onDeactivate()
  if self.isClient then
    v2:stopSamples(self.spec_stonePicker.samples)
    self.spec_stonePicker.isWorkSamplePlaying = false
  end
end
function StonePicker:onStartWorkAreaProcessing(dt)
  self.spec_stonePicker.isWorking = false
  local v3, v4, v5 = localDirectionToWorld(self.spec_stonePicker.directionNode, 0, 0, 1)
  local v7 = MathUtil.getYRotationFromDirection(v3, v5)
  local v8 = v8:getGroundAngleMaxValue()
  local v6 = FSDensityMapUtil.convertToDensityMapAngle(...)
  if not not self.spec_stonePicker.needsActivation then
    v8 = self:getIsTurnedOn()
  end
  v7.isActive = v8
  v2.workAreaParameters.angle = v6
  v2.workAreaParameters.pickedLiters = 0
  v2.workAreaParameters.lastChangedArea = 0
  v2.workAreaParameters.lastStatsArea = 0
  v2.workAreaParameters.lastTotalArea = 0
end
function StonePicker:onEndWorkAreaProcessing(dt)
  if self.isServer then
    if 0 < self.spec_stonePicker.workAreaParameters.lastStatsArea then
      self:updateLastWorkedArea(self.spec_stonePicker.workAreaParameters.lastStatsArea)
    end
    if g_time - v2.workAreaParameters.lastChangedAreaTime >= 500 then
    end
    if v2.isWorking then
      local v6 = self:getIsOnField()
    end
    if v2.isEffectActive == v5 and v2.effectGrowthState == v2.workAreaParameters.lastGrowthState then
      -- if v6 == v2.isSoilEffectActive then goto L66 end
    end
    self:setStonePickerEffectsState(v5, v2.workAreaParameters.lastGrowthState, v6)
    self:raiseDirtyFlags(v2.dirtyFlag)
  end
  local v4 = self:getFillVolumeLoadInfo(v2.loadInfoIndex)
  local v7 = self:getOwnerFarmId()
  self:addFillUnitFillLevel(v7, v2.fillUnitIndex, v3.pickedLiters, FillType.STONE, ToolType.UNDEFINED, v4)
end
function StonePicker.getDefaultSpeedLimit()
  return 10
end
