-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Windrower = {}
function Windrower.initSpecialization()
  v0:addWorkAreaType("windrower", false)
  Vehicle.xmlSchema:setXMLSpecializationType("Windrower")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.windrower.effects.effect(?)")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.windrower.effects.effect(?).sounds", "work")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.windrower.effects.effect(?)#workAreaIndex", "Work area index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.windrower.effects.effect(?)#dropAreaIndex", "Drop area index (if defined the effect is only active if this drop area is set on workArea)")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.windrower.animationNodes")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.windrower.sounds", "work")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.windrower#limitToLineHeight", "Limit pickup to work area line height", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.windrower#fillTypeCategories", "Fill type categories")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.windrower#fillTypes", "List of supported fill types")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_KEY .. ".windrower#particleSystemIndex", "Particle system index")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_KEY .. ".windrower#dropWindrowWorkAreaIndex", "Drop work area index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".windrower#particleSystemIndex", "Particle system index")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".windrower#dropWindrowWorkAreaIndex", "Drop work area index", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Windrower.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(WorkArea, v0)
end
function Windrower.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processWindrowerArea", Windrower.processWindrowerArea)
  SpecializationUtil.registerFunction(vehicleType, "processDropArea", Windrower.processDropArea)
end
function Windrower.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Windrower.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", Windrower.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Windrower.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Windrower.getWearMultiplier)
end
function Windrower.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Windrower)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Windrower)
end
function Windrower:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.animation", "vehicle.windrowers.windrower")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.windrowerParticleSystems", "vehicle.windrower.effects")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode#type", "vehicle.windrower.animationNodes.animationNode", "windrower")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.windrowerSound", "vehicle.windrower.sounds.work")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.windrower.rakes.rake", "vehicle.windrower.animationNodes.animationNode with type 'RotationAnimationSpikes'")
  if self.isClient then
    local v3 = v3:loadAnimations(self.xmlFile, "vehicle.windrower.animationNodes", self.components, self, self.i3dMappings)
    self.spec_windrower.animationNodes = v3
    self.spec_windrower.effects = {}
    self.spec_windrower.workAreaToEffects = {}
    while true do
      v4 = string.format("vehicle.windrower.effects.effect(%d)", v3)
      v5 = v5:hasProperty(v4)
      if not v5 then
        break
      end
      v5 = v5:loadEffect(self.xmlFile, v4, self.components, self, self.i3dMappings)
      if v5 ~= nil then
        v7 = v7:getValue(v4 .. "#workAreaIndex", 1)
        v7 = v7:getValue(v4 .. "#dropAreaIndex")
        v8 = v8:loadSampleFromXML(self.xmlFile, v4 .. ".sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
        {effects = v5, workAreaIndex = v7, dropAreaIndex = v7, activeTime = -1, activeTimeDuration = 250, isActive = false, isActiveSent = false, samples = {}}.samples.work = v8
        table.insert(v2.effects, {effects = v5, workAreaIndex = v7, dropAreaIndex = v7, activeTime = -1, activeTimeDuration = 250, isActive = false, isActiveSent = false, samples = {}})
        -- TODO: structure LOP_FORNPREP (pc 169, target 182)
        if v5[1].setWorkAreaIndex ~= nil then
          v10:setWorkAreaIndex({effects = v5, workAreaIndex = v7, dropAreaIndex = v7, activeTime = -1, activeTimeDuration = 250, isActive = false, isActiveSent = false, samples = {}}.workAreaIndex)
        end
        -- TODO: structure LOP_FORNLOOP (pc 181, target 170)
      end
    end
    v2.samples = {}
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.windrower.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.work = v5
  end
  v2.isWorking = false
  v3 = v3:getValue("vehicle.windrower#limitToLineHeight", false)
  v2.limitToLineHeight = v3
  v2.stoneLastState = 0
  v3 = v3:getWearMultiplierByType("WINDROWER")
  v2.stoneWearMultiplierData = v3
  v3 = v3:getFillTypesFromXML(self.xmlFile, "vehicle.windrower#fillTypeCategories", "vehicle.windrower#fillTypes", true)
  v2.supportedFillTypes = v3
  v3 = self:getNextDirtyFlag()
  v2.fillTypesDirtyFlag = v3
  v3 = self:getNextDirtyFlag()
  v2.effectDirtyFlag = v3
  if self.addAIDensityHeightTypeRequirement ~= nil then
    for v6, v7 in ipairs(v2.supportedFillTypes) do
      self:addAIDensityHeightTypeRequirement(v7)
    end
  end
end
function Windrower:onPostLoad(savegame)
  -- TODO: structure LOP_FORNPREP (pc 7, target 66)
  local v7 = self:getWorkAreaByIndex(self.spec_windrower.effects[#self.spec_windrower.effects].workAreaIndex)
  if v7 ~= nil then
    self.spec_windrower.effects[#self.spec_windrower.effects].windrowerWorkAreaFillTypeIndex = v7.windrowerWorkAreaIndex
    if self.spec_windrower.workAreaToEffects[v7.index] == nil then
      self.spec_windrower.workAreaToEffects[v7.index] = {}
    end
    table.insert(v2.workAreaToEffects[v7.index], v6)
  else
    Logging.xmlWarning(self.xmlFile, "Invalid workAreaIndex '%d' for effect 'vehicle.windrower.effects.effect(%d)'!", self.spec_windrower.effects[#self.spec_windrower.effects].workAreaIndex, #self.spec_windrower.effects)
    table.insert(self.spec_windrower.effects, #self.spec_windrower.effects)
  end
  -- TODO: structure LOP_FORNLOOP (pc 65, target 8)
end
function Windrower:onDelete()
  v2:deleteSamples(self.spec_windrower.samples)
  v2:deleteAnimations(self.spec_windrower.animationNodes)
  if self.spec_windrower.effects ~= nil then
    for v5, v6 in ipairs(self.spec_windrower.effects) do
      v7:deleteEffects(v6.effects)
      v7:deleteSamples(v6.samples)
    end
  end
end
function Windrower:onReadStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_windrower.windrowerWorkAreaFillTypes) do
    local fillType = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
    v3.windrowerWorkAreaFillTypes[v7] = fillType
  end
  for v7, v8 in ipairs(v3.effects) do
    fillType = streamReadBool(streamId)
    if fillType then
      v10:setFillType(v8.effects, v3.windrowerWorkAreaFillTypes[v8.windrowerWorkAreaFillTypeIndex])
      v10:startEffects(v8.effects)
      local v10 = v10:getIsSamplePlaying(v8.samples.work)
      if not not v10 then
        continue
      end
      v10:playSample(v8.samples.work)
    else
      fillType:stopEffects(v8.effects)
      fillType:stopSample(v8.samples.work)
    end
  end
end
function Windrower:onWriteStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_windrower.windrowerWorkAreaFillTypes) do
    streamWriteUIntN(streamId, v8, FillTypeManager.SEND_NUM_BITS)
  end
  for v7, v8 in ipairs(v3.effects) do
    streamWriteBool(streamId, v8.isActiveSent)
  end
end
function Windrower:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      for v8, v9 in ipairs(self.spec_windrower.windrowerWorkAreaFillTypes) do
        local fillType = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
        v4.windrowerWorkAreaFillTypes[v8] = fillType
      end
    end
    v5 = streamReadBool(streamId)
    if v5 then
      for v8, v9 in ipairs(v4.effects) do
        fillType = streamReadBool(streamId)
        if fillType then
          v11:setFillType(v9.effects, v4.windrowerWorkAreaFillTypes[v9.windrowerWorkAreaFillTypeIndex])
          v11:startEffects(v9.effects)
          local v11 = v11:getIsSamplePlaying(v9.samples.work)
          if not not v11 then
            continue
          end
          v11:playSample(v9.samples.work)
        else
          fillType:stopEffects(v9.effects)
          fillType:stopSample(v9.samples.work)
        end
      end
    end
  end
end
function Windrower:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_windrower.fillTypesDirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      for v8, v9 in ipairs(v4.windrowerWorkAreaFillTypes) do
        streamWriteUIntN(streamId, v9, FillTypeManager.SEND_NUM_BITS)
      end
    end
    v8 = bitAND(dirtyMask, v4.effectDirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    if v5 then
      for v8, v9 in ipairs(v4.effects) do
        streamWriteBool(streamId, v9.isActiveSent)
      end
    end
  end
end
function Windrower:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    for v9, v10 in ipairs(self.spec_windrower.effects) do
      if not v10.isActive then
        continue
      end
      if not (v10.activeTime < g_currentMission.time) then
        continue
      end
      v10.isActive = false
      if v10.isActiveSent then
        v10.isActiveSent = false
        self:raiseDirtyFlags(v5.effectDirtyFlag)
      end
      v11:stopEffects(v10.effects)
      v11:stopSample(v10.samples.work)
    end
  end
end
function Windrower:onTurnedOn()
  if self.isClient then
    v2:playSample(self.spec_windrower.samples.work)
    v2:startAnimations(self.spec_windrower.animationNodes)
  end
end
function Windrower:onTurnedOff()
  v2:stopSamples(self.spec_windrower.samples)
  for v5, v6 in ipairs(self.spec_windrower.effects) do
    v7:stopEffects(v6.effects)
    v7:stopSample(v6.samples.work)
  end
  v2:stopAnimations(v1.animationNodes)
end
function Windrower:doCheckSpeedLimit(superFunc)
  if self.getIsTurnedOn ~= nil then
    local v3 = self:getIsTurnedOn()
  end
  v3 = superFunc(self)
  if not v3 then
    local v4 = self:getIsImplementChainLowered()
  end
  return v3
end
function Windrower.getDefaultSpeedLimit()
  return 15
end
function Windrower:loadWorkAreaFromXML(superFunc, workArea, xmlFile, key)
  local retValue = superFunc(self, workArea, xmlFile, key)
  if workArea["type"] == WorkAreaType.DEFAULT then
    workArea["type"] = WorkAreaType.WINDROWER
  end
  if workArea["type"] == WorkAreaType.WINDROWER then
    local v6 = xmlFile:getValue(key .. ".windrower#particleSystemIndex")
    workArea.particleSystemIndex = v6
    v6 = xmlFile:getValue(key .. ".windrower#dropWindrowWorkAreaIndex", 1)
    workArea.dropWindrowWorkAreaIndex = v6
    workArea.lastValidPickupFillType = FillType.UNKNOWN
    workArea.lastPickupLiters = 0
    workArea.lastDroppedLiters = 0
    workArea.litersToDrop = 0
    if self.spec_windrower.windrowerWorkAreaFillTypes == nil then
      self.spec_windrower.windrowerWorkAreaFillTypes = {}
    end
    table.insert(v6.windrowerWorkAreaFillTypes, FillType.UNKNOWN)
    workArea.windrowerWorkAreaIndex = #v6.windrowerWorkAreaFillTypes
  end
  return retValue
end
function Windrower:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_windrower.isWorking then
    local v6 = self:getWorkDirtMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function Windrower:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_windrower.isWorking then
    if self.spec_windrower.stoneLastState ~= 0 and self.spec_windrower.stoneWearMultiplierData ~= nil then
    end
    local v8 = self:getWorkWearMultiplier()
    local v9 = self:getLastSpeed()
  end
  return multiplier
end
function Windrower:onStartWorkAreaProcessing(dt, workAreas)
  for v7, v8 in pairs(workAreas) do
    v8.lastValidPickupFillType = FillType.UNKNOWN
    v8.lastPickupLiters = 0
    v8.lastDroppedLiters = 0
  end
  v3.isWorking = false
end
function Windrower:onEndWorkAreaProcessing(dt, workAreas)
  if self.isClient and self.getIsTurnedOn == nil then
    if self.spec_windrower.isWorking then
      local v4 = v4:getIsSamplePlaying(self.spec_windrower.samples.work)
      -- if v4 then goto L51 end
      v4:playSample(self.spec_windrower.samples.work)
      return
    end
    v4 = v4:getIsSamplePlaying(v3.samples.work)
    if v4 then
      v4:stopSample(v3.samples.work)
    end
  end
end
function Windrower:processWindrowerArea(workArea, dt)
  local v6 = self:getLastSpeed()
  if 0.5 >= v6 then
  end
  v3.isWorking = true
  local v5, v6, v7 = getWorldTranslation(workArea.start)
  local v8, v9, v10 = getWorldTranslation(workArea.width)
  local v11, v12, v13 = getWorldTranslation(workArea.height)
  if v3.isWorking then
    local v14 = FSDensityMapUtil.getStoneArea(v5, v7, v8, v10, v11, v13)
    v3.stoneLastState = v14
  else
    v3.stoneLastState = 0
  end
  local v14, v15, v16, v17, v18, v19, v20 = DensityMapHeightUtil.getLineByAreaDimensions(v5, v6, v7, v8, v9, v10, v11, v12, v13)
  if workArea.lastPickupLiters == 0 then
    if workArea.lastValidPickupFillType ~= FillType.UNKNOWN then
      local v24 = v24:getMinValidLiterValue(workArea.lastValidPickupFillType)
      -- if v1.litersToDrop >= v24 then goto L118 end
    end
    for v26, v27 in ipairs(v3.supportedFillTypes) do
      local v28 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, v27, v14, v15, v16, v17, v18, v19, v20, nil, nil, v3.limitToLineHeight, nil)
      if not (0 < -v28) then
        continue
      end
      -- goto L199  (LOP_JUMP +84)
    end
  else
    v23 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, workArea.lastValidPickupFillType, v14, v15, v16, v17, v18, v19, v20, nil, nil, false, nil)
    if workArea.lastValidPickupFillType == FillType.GRASS_WINDROW then
      v23 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, FillType.DRYGRASS_WINDROW, v14, v15, v16, v17, v18, v19, v20, nil, nil, false, nil)
    elseif workArea.lastValidPickupFillType == FillType.DRYGRASS_WINDROW then
      v23 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, FillType.GRASS_WINDROW, v14, v15, v16, v17, v18, v19, v20, nil, nil, false, nil)
    end
    if 0 < v21 then
    end
  end
  if v22 ~= FillType.UNKNOWN then
    workArea.lastValidPickupFillType = v22
    self:setTestAreaRequirements(nil, v22, nil)
  end
  workArea.lastPickupLiters = v21
  workArea.litersToDrop = workArea.litersToDrop + v21
  v23 = MathUtil.vector3Length(v14 - v17, v15 - v18, v16 - v19)
  if 0 < workArea.lastPickupLiters and v4.workAreas[workArea.dropWindrowWorkAreaIndex] ~= nil then
    v27 = self:processDropArea(v4.workAreas[workArea.dropWindrowWorkAreaIndex], workArea.lastPickupLiters, workArea.lastValidPickupFillType)
    workArea.lastDroppedLiters = v27
    workArea.litersToDrop = workArea.litersToDrop - v27
    if self.isServer then
      v28 = self:getLastSpeed(true)
      if 0.5 < v28 and 0 < v27 then
        if v3.windrowerWorkAreaFillTypes[workArea.windrowerWorkAreaIndex] ~= workArea.lastValidPickupFillType then
          v3.windrowerWorkAreaFillTypes[workArea.windrowerWorkAreaIndex] = workArea.lastValidPickupFillType
          self:raiseDirtyFlags(v3.fillTypesDirtyFlag)
        end
        if v3.workAreaToEffects[workArea.index] ~= nil then
          for v33, v34 in ipairs(v3.workAreaToEffects[workArea.index]) do
            if v34.dropAreaIndex ~= nil and not (v34.dropAreaIndex == workArea.dropWindrowWorkAreaIndex) then
              continue
            end
            v34.activeTime = g_currentMission.time + v34.activeTimeDuration
            if not v34.isActiveSent then
              v34.isActiveSent = true
              self:raiseDirtyFlags(v3.effectDirtyFlag)
            end
            if v28 then
              v35:setFillType(v34.effects, v26)
            end
            if not v34.isActive then
              v35:setFillType(v34.effects, v26)
              v35:startEffects(v34.effects)
              v35:playSample(v34.samples.work)
            end
            v34.isActive = true
          end
        end
      end
    end
  end
  return workArea.lastDroppedLiters, v24
end
function Windrower.processDropArea(v0, workArea, dt, v3)
  local v4, v5, v6, v7, v8, v9, v10 = DensityMapHeightUtil.getLineByArea(workArea.start, workArea.width, workArea.height)
  local v11, v12 = DensityMapHeightUtil.tipToGroundAroundLine(v0, dt, v3, v4, v5, v6, v7, v8, v9, v10, nil, workArea.lineOffset, false, nil, false)
  workArea.lineOffset = v12
  return v11
end
