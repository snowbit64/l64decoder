-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FruitPreparer = {}
function FruitPreparer.initSpecialization()
  v0:addWorkAreaType("fruitPreparer", false)
  Vehicle.xmlSchema:setXMLSpecializationType("FruitPreparer")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.fruitPreparer#fruitType", "Fruit type")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.fruitPreparer#aiUsePreparedState", "AI uses prepared state instead of unprepared state", "true if vehicle has also the Cutter specialization")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_KEY .. ".fruitPreparer#dropWorkAreaIndex", "Drop area index")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".fruitPreparer#dropWorkAreaIndex", "Drop area index")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.fruitPreparer.animationNodes")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.fruitPreparer.sounds", "work")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, RandomlyMovingParts.RANDOMLY_MOVING_PART_XML_KEY .. "#moveOnlyIfPreparerCut", "Move only if fruit preparer cuts something", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function FruitPreparer.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
  end
  return v1
end
function FruitPreparer.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processFruitPreparerArea", FruitPreparer.processFruitPreparerArea)
end
function FruitPreparer.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", FruitPreparer.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoGroundManipulation", FruitPreparer.getDoGroundManipulation)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", FruitPreparer.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowCutterAIFruitRequirements", FruitPreparer.getAllowCutterAIFruitRequirements)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", FruitPreparer.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", FruitPreparer.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadRandomlyMovingPartFromXML", FruitPreparer.loadRandomlyMovingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsRandomlyMovingPartActive", FruitPreparer.getIsRandomlyMovingPartActive)
end
function FruitPreparer.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", FruitPreparer)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", FruitPreparer)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", FruitPreparer)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", FruitPreparer)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", FruitPreparer)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", FruitPreparer)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", FruitPreparer)
end
function FruitPreparer:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnOnAnimation#name", "vehicle.turnOnVehicle.turnedAnimation#name")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnOnAnimation#speed", "vehicle.turnOnVehicle.turnedAnimation#turnOnSpeedScale")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.fruitPreparer#useReelStateToTurnOn")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.fruitPreparer#onlyActiveWhenLowered")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.vehicle.fruitPreparerSound", "vehicle.fruitPreparer.sounds.work")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode", "vehicle.fruitPreparer.animationNodes.animationNode", "fruitPreparer")
  if self.isClient then
    self.spec_fruitPreparer.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.fruitPreparer.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_fruitPreparer.samples.work = v4
    local v3 = v3:loadAnimations(self.xmlFile, "vehicle.fruitPreparer.animationNodes", self.components, self, self.i3dMappings)
    self.spec_fruitPreparer.animationNodes = v3
  end
  v2.fruitType = FruitType.UNKNOWN
  v3 = v3:getValue("vehicle.fruitPreparer#fruitType")
  if v3 ~= nil then
    v4 = v4:getFruitTypeByName(v3)
    if v4 ~= nil then
      v2.fruitType = v4.index
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L162
      self:setAIFruitRequirements(v4.index, v4.minPreparingGrowthState, v4.maxPreparingGrowthState)
      if self.spec_cutter == nil then
      end
      local v5 = v5:getValue(v7, true)
      -- if not v5 then goto L162 end
      self:addAIFruitRequirement(v4.index, v4.preparedGrowthState, v4.preparedGrowthState)
      -- goto L162  (LOP_JUMP +14)
    end
    Logging.xmlWarning(self.xmlFile, "Unable to find fruitType '%s' in fruitPreparer", v3)
  else
    Logging.xmlWarning(self.xmlFile, "Missing fruitType in fruitPreparer")
  end
  v2.isWorking = false
  v2.lastWorkTime = -math.huge
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
end
function FruitPreparer:onDelete()
  v2:deleteSamples(self.spec_fruitPreparer.samples)
  v2:deleteAnimations(self.spec_fruitPreparer.animationNodes)
end
function FruitPreparer:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    self.spec_fruitPreparer.isWorking = v5
  end
end
function FruitPreparer:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    streamWriteBool(streamId, self.spec_fruitPreparer.isWorking)
  end
end
function FruitPreparer:onTurnedOn()
  if self.isClient then
    v2:playSample(self.spec_fruitPreparer.samples.work)
    v2:startAnimations(self.spec_fruitPreparer.animationNodes)
  end
end
function FruitPreparer:onTurnedOff()
  if self.isClient then
    v2:stopSamples(self.spec_fruitPreparer.samples)
    v2:stopAnimations(self.spec_fruitPreparer.animationNodes)
  end
end
function FruitPreparer:loadWorkAreaFromXML(superFunc, workArea, xmlFile, key)
  local retValue = superFunc(self, workArea, xmlFile, key)
  if workArea["type"] == WorkAreaType.FRUITPREPARER then
    XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#dropStartIndex", key .. ".fruitPreparer#dropWorkAreaIndex")
    XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#dropWidthIndex", key .. ".fruitPreparer#dropWorkAreaIndex")
    XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#dropHeightIndex", key .. ".fruitPreparer#dropWorkAreaIndex")
    local v6 = xmlFile:getValue(key .. ".fruitPreparer#dropWorkAreaIndex")
    workArea.dropWorkAreaIndex = v6
  end
  return retValue
end
function FruitPreparer:getDoGroundManipulation(superFunc)
  local v3 = superFunc(self)
  if v3 then
  end
  return v3
end
function FruitPreparer:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    v2 = self:getIsTurnedOn()
    if v2 and self.getIsImplementChainLowered ~= nil then
      v2 = self:getIsImplementChainLowered()
    end
  end
  return v2
end
function FruitPreparer.getAllowCutterAIFruitRequirements(v0, v1)
  return false
end
function FruitPreparer:getDirtMultiplier(superFunc)
  if self.spec_fruitPreparer.isWorking then
    local v4 = superFunc(self)
    local v7 = self:getWorkDirtMultiplier()
    local v8 = self:getLastSpeed()
    return v4 + v7 * v8 / self.speedLimit
  end
  return superFunc(self)
end
function FruitPreparer:getWearMultiplier(superFunc)
  if self.spec_fruitPreparer.isWorking then
    local v4 = superFunc(self)
    local v7 = self:getWorkWearMultiplier()
    local v8 = self:getLastSpeed()
    return v4 + v7 * v8 / self.speedLimit
  end
  return superFunc(self)
end
function FruitPreparer.loadRandomlyMovingPartFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  local v6 = v3:getValue(v4 .. "#moveOnlyIfPreparerCut", false)
  v2.moveOnlyIfPreparerCut = v6
  return v5
end
function FruitPreparer:getIsRandomlyMovingPartActive(superFunc, part)
  local retValue = superFunc(self, part)
  if part.moveOnlyIfPreparerCut and retValue then
  end
  return retValue
end
function FruitPreparer.getDefaultSpeedLimit()
  return 15
end
function FruitPreparer:onEndWorkAreaProcessing(dt)
  if self.isServer then
    if g_time - self.spec_fruitPreparer.lastWorkTime >= 500 then
    end
    if true ~= v2.isWorking then
      self:raiseDirtyFlags(v2.dirtyFlag)
      v2.isWorking = true
    end
  end
end
function FruitPreparer:processFruitPreparerArea(workArea)
  local v4, v5, v6 = getWorldTranslation(workArea.start)
  local v7, v8, v9 = getWorldTranslation(workArea.width)
  local v10, v11, v12 = getWorldTranslation(workArea.height)
  if workArea.dropWorkAreaIndex ~= nil and self.spec_workArea.workAreas[workArea.dropWorkAreaIndex] ~= nil then
    local v20, v21, v22 = getWorldTranslation(self.spec_workArea.workAreas[workArea.dropWorkAreaIndex].start)
    v20, v21, v22 = getWorldTranslation(self.spec_workArea.workAreas[workArea.dropWorkAreaIndex].width)
    v20, v21, v22 = getWorldTranslation(self.spec_workArea.workAreas[workArea.dropWorkAreaIndex].height)
  end
  local v19 = FSDensityMapUtil.updateFruitPreparerArea(v2.fruitType, v4, v6, v7, v9, v10, v12, v13, v14, v15, v16, v17, v18)
  if 0 < v19 then
    v2.lastWorkTime = g_time
  end
  return 0, v19
end
