-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/MowerToggleWindrowDropEvent.lua")
Mower = {}
function Mower.initSpecialization()
  v0:addWorkAreaType("mower", false)
  Vehicle.xmlSchema:setXMLSpecializationType("Mower")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.mower.animationNodes")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.mower.dropEffects.dropEffect(?)")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.mower.dropEffects.dropEffect(?)#dropAreaIndex", "Drop area index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.mower.dropEffects.dropEffect(?)#workAreaIndex", "Work area index", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.mower#fruitTypeConverter", "Fruit type converter name")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.mower#fillUnitIndex", "Fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.mower#pickupFillScale", "Pickup fill scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.mower.toggleWindrowDrop#enableText", "Enable windrow drop text")
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.mower.toggleWindrowDrop#disableText", "Disable windrow drop text")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.mower.toggleWindrowDrop#animationName", "Windrow drop animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.mower.toggleWindrowDrop#animationEnableSpeed", "Animation enable speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.mower.toggleWindrowDrop#animationDisableSpeed", "Animation disable speed", "inversed 'animationEnableSpeed'")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.mower.toggleWindrowDrop#startEnabled", "Start windrow drop enabled", false)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.mower.sounds", "cut(?)")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, WorkArea.WORK_AREA_XML_KEY .. ".mower#dropWindrow", "Drop windrow", true)
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_KEY .. ".mower#dropAreaIndex", "Drop area index", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".mower#dropWindrow", "Drop windrow", true)
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".mower#dropAreaIndex", "Drop area index", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Mower.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
  end
  return v1
end
function Mower.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processMowerArea", Mower.processMowerArea)
  SpecializationUtil.registerFunction(vehicleType, "processDropArea", Mower.processDropArea)
  SpecializationUtil.registerFunction(vehicleType, "getDropArea", Mower.getDropArea)
  SpecializationUtil.registerFunction(vehicleType, "setDropEffectEnabled", Mower.setDropEffectEnabled)
  SpecializationUtil.registerFunction(vehicleType, "setCutSoundEnabled", Mower.setCutSoundEnabled)
  SpecializationUtil.registerFunction(vehicleType, "setUseMowerWindrowDropAreas", Mower.setUseMowerWindrowDropAreas)
end
function Mower.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", Mower.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Mower.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Mower.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Mower.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Mower.getWearMultiplier)
end
function Mower.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Mower)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Mower)
end
function Mower:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mowerEffects.mowerEffect", "vehicle.mower.dropEffects.dropEffect")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mowerEffects.mowerEffect#mowerCutArea", "vehicle.mower.dropEffects.dropEffect#dropAreaIndex")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode#type", "vehicle.mower.turnOnNodes.turnOnNode", "mower")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mowerStartSound", "vehicle.turnOnVehicle.sounds.start")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mowerStopSound", "vehicle.turnOnVehicle.sounds.stop")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mowerSound", "vehicle.turnOnVehicle.sounds.work")
  if self.isClient then
    local v3 = v3:loadAnimations(self.xmlFile, "vehicle.mower.animationNodes", self.components, self, self.i3dMappings)
    self.spec_mower.animationNodes = v3
    self.spec_mower.samples = {}
    local v4 = v4:loadSamplesFromXML(self.xmlFile, "vehicle.mower.sounds", "cut", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_mower.samples.cut = v4
  end
  v2.dropEffects = {}
  v3:iterate("vehicle.mower.dropEffects.dropEffect", function(self, savegame)
    local v2 = v2:loadEffect(u0.xmlFile, savegame, u0.components, u0, u0.i3dMappings)
    if v2 ~= nil then
      local v4 = v4:getValue(savegame .. "#dropAreaIndex", 1)
      v4 = v4:getValue(savegame .. "#workAreaIndex", 1)
      v4 = v4:getWorkAreaByIndex({effects = v2, dropAreaIndex = v4, workAreaIndex = v4}.dropAreaIndex)
      if v4 ~= nil then
        v4 = v4:getWorkAreaByIndex({effects = v2, dropAreaIndex = v4, workAreaIndex = v4}.workAreaIndex)
        if v4 ~= nil then
          table.insert(u1.dropEffects, {effects = v2, dropAreaIndex = v4, workAreaIndex = v4, activeTime = -1, activeTimeDuration = 750, isActive = false, isActiveSent = false})
          return
        end
        Logging.xmlWarning(u0.xmlFile, "Invalid workAreaIndex '%s' in '%s'", v3.workAreaIndex, savegame)
        return
      end
      Logging.xmlWarning(u0.xmlFile, "Invalid dropAreaIndex '%s' in '%s'", v3.dropAreaIndex, savegame)
    end
  end)
  if v2.dropAreas == nil then
    v2.dropAreas = {}
  end
  v2.fruitTypeConverters = {}
  v3 = v3:getValue("vehicle.mower#fruitTypeConverter")
  if v3 ~= nil then
    v4 = v4:getConverterDataByName(v3)
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L151
    for v8, v9 in pairs(v4) do
      v2.fruitTypeConverters[v8] = v9
    end
  else
    v5 = string.format("Warning: Missing fruit type converter in '%s'", self.configFileName)
    print(...)
  end
  v4 = v4:getValue("vehicle.mower#fillUnitIndex")
  v2.fillUnitIndex = v4
  v4 = v4:getValue("vehicle.mower#pickupFillScale", 1)
  v2.pickupFillScale = v4
  v4 = v4:getValue("vehicle.mower.toggleWindrowDrop#enableText", nil, self.customEnvironment, false)
  v2.toggleWindrowDropEnableText = v4
  v4 = v4:getValue("vehicle.mower.toggleWindrowDrop#disableText", nil, self.customEnvironment, false)
  v2.toggleWindrowDropDisableText = v4
  v4 = v4:getValue("vehicle.mower.toggleWindrowDrop#animationName")
  v2.toggleWindrowDropAnimation = v4
  v4 = v4:getValue("vehicle.mower.toggleWindrowDrop#animationEnableSpeed", 1)
  v2.enableWindrowDropAnimationSpeed = v4
  v4 = v4:getValue("vehicle.mower.toggleWindrowDrop#animationDisableSpeed", -v2.enableWindrowDropAnimationSpeed)
  v2.disableWindrowDropAnimationSpeed = v4
  v4 = v4:getValue("vehicle.mower.toggleWindrowDrop#startEnabled", false)
  v2.useWindrowDropAreas = v4
  v2.workAreaParameters = {lastChangedArea = 0, lastStatsArea = 0, lastTotalArea = 0, lastUsedAreas = 0, lastUsedAreasSum = 0, lastUsedAreasPct = 0, lastUsedAreasTime = 0, lastCutTime = -math.huge, lastInputFruitType = FruitType.UNKNOWN, lastInputGrowthState = 0}
  v2.isWorking = false
  v2.isCutting = false
  v2.lastDropTime = -math.huge
  v2.stoneLastState = 0
  v4 = v4:getWearMultiplierByType("MOWER")
  v2.stoneWearMultiplierData = v4
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
  if self.addAITerrainDetailRequiredRange ~= nil then
    v5, v6, v7 = v5:getDensityMapData(FieldDensityMap.GROUND_TYPE)
    v8 = v8:getFieldGroundValue(FieldGroundType.SOWN)
    v9 = v9:getFieldGroundValue(FieldGroundType.GRASS)
    self:addAITerrainDetailRequiredRange(v9, v9, v6, v7)
    self:addAITerrainDetailRequiredRange(v8, v8, v6, v7)
  end
  if self.addAIFruitRequirement ~= nil then
    for v7, v8 in pairs(v2.fruitTypeConverters) do
      v9 = v9:getFruitTypeByIndex(v7)
      self:addAIFruitRequirement(v9.index, v9.minHarvestingGrowthState, v9.maxHarvestingGrowthState)
    end
  end
end
function Mower:onPostLoad(savegame)
  local v3 = self:getTypedWorkAreas(WorkAreaType.MOWER)
  self.spec_mower.workAreas = v3
  -- TODO: structure LOP_FORNPREP (pc 14, target 45)
  self.spec_mower.workAreas[1].dropEffects = {}
  for v10, v11 in pairs(self.spec_mower.dropEffects) do
    if not (v11.workAreaIndex == v6.index) then
      continue
    end
    table.insert(v6.dropEffects, v11)
  end
  -- TODO: structure LOP_FORNLOOP (pc 44, target 15)
end
function Mower:onDelete()
  if self.isClient then
    v2:deleteAnimations(self.spec_mower.animationNodes)
    v2:deleteSamples(self.spec_mower.samples.cut)
  end
  if v1.dropEffects ~= nil then
    for v5, v6 in pairs(v1.dropEffects) do
      v7:deleteEffects(v6.effects)
    end
  end
end
function Mower:onReadStream(streamId, connection)
  if self.spec_mower.toggleWindrowDropEnableText ~= nil and self.spec_mower.toggleWindrowDropDisableText ~= nil then
    local useMowerWindrowDropAreas = streamReadBool(streamId)
    self:setUseMowerWindrowDropAreas(useMowerWindrowDropAreas, true)
  end
end
function Mower:onWriteStream(streamId, connection)
  if self.spec_mower.toggleWindrowDropEnableText ~= nil and self.spec_mower.toggleWindrowDropDisableText ~= nil then
    streamWriteBool(streamId, self.spec_mower.useWindrowDropAreas)
  end
end
function Mower:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    if 0 < #self.spec_mower.dropEffects then
      local v5 = streamReadBool(streamId)
      -- if not v5 then goto L49 end
      for v8, v9 in ipairs(self.spec_mower.dropEffects) do
        local v10 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
        v9.fillType = v10
        local v13 = streamReadBool(streamId)
        self:setDropEffectEnabled(...)
      end
      return
    end
    v7 = streamReadBool(streamId)
    self:setCutSoundEnabled(...)
  end
end
function Mower:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    if 0 < #self.spec_mower.dropEffects then
      local v8 = bitAND(dirtyMask, self.spec_mower.dirtyFlag)
      if v8 == 0 then
      end
      local v5 = v5(v6, true)
      -- if not v5 then goto L59 end
      for v8, v9 in ipairs(v4.dropEffects) do
        if not v9.fillType then
        end
        v10(v11, v12, FillTypeManager.SEND_NUM_BITS)
        streamWriteBool(streamId, v9.isActiveSent)
      end
      return
    end
    streamWriteBool(streamId, v4.isCutting)
  end
end
function Mower:processMowerArea(workArea, dt)
  local v4, v5, v6 = getWorldTranslation(workArea.start)
  local v7, v8, v9 = getWorldTranslation(workArea.width)
  local v10, v11, v12 = getWorldTranslation(workArea.height)
  local v13 = self:getLastSpeed()
  if 1 < v13 then
    self.spec_mower.isWorking = true
    v13 = FSDensityMapUtil.getStoneArea(v4, v6, v7, v9, v10, v12)
    self.spec_mower.stoneLastState = v13
  else
    self.spec_mower.stoneLastState = 0
  end
  v13 = self:getIsAIActive()
  for v17, v18 in pairs(v3.fruitTypeConverters) do
    local v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29 = FSDensityMapUtil.updateMowerArea(v17, v4, v6, v7, v9, v10, v12, v13)
    if not (0 < v19) then
      continue
    end
    local v30 = v30:getHarvestScaleMultiplier(v17, v21, v22, v23, v24, v25, v26)
    local v31 = v31:getFruitPixelsToSqm()
    local v34 = v34:getFillTypeLiterPerSqm(v18.fillTypeIndex, 1)
    workArea.lastPickupLiters = v19 * v30 * v31 * v34
    workArea.pickedUpLiters = v19 * v30 * v31 * v34
    v34 = self:getDropArea(workArea)
    if v34 ~= nil then
      v34.litersToDrop = v34.litersToDrop + v19 * v30 * v31 * v34
      v34.fillType = v18.fillTypeIndex
      v34.workAreaIndex = workArea.index
      if v34.fillType == FillType.GRASS_WINDROW then
        local v35, v36, v37, v38, v39, v40, v41 = DensityMapHeightUtil.getLineByArea(workArea.start, workArea.width, workArea.height, true)
        local v43, v44 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, FillType.DRYGRASS_WINDROW, v35, v36, v37, v38, v39, v40, v41, nil, workArea.lineOffset or 0, false, nil, false)
        workArea.lineOffset = v44
        v34.litersToDrop = v34.litersToDrop - v43
      end
      v35 = math.min(v34.litersToDrop, 1000)
      v34.litersToDrop = v35
    elseif v3.fillUnitIndex ~= nil and self.isServer then
      v37 = self:getOwnerFarmId()
      self:addFillUnitFillLevel(v37, v3.fillUnitIndex, v19 * v30 * v31 * v34, v18.fillTypeIndex, ToolType.UNDEFINED)
    end
    v3.workAreaParameters.lastInputFruitType = v17
    v3.workAreaParameters.lastInputGrowthState = v28
    v3.workAreaParameters.lastCutTime = g_time
    v3.workAreaParameters.lastChangedArea = v3.workAreaParameters.lastChangedArea + v19
    v3.workAreaParameters.lastStatsArea = v3.workAreaParameters.lastStatsArea + v19
    v3.workAreaParameters.lastTotalArea = v3.workAreaParameters.lastTotalArea + v20
    v3.workAreaParameters.lastUsedAreas = v3.workAreaParameters.lastUsedAreas + 1
  end
  v3.workAreaParameters.lastUsedAreasSum = v3.workAreaParameters.lastUsedAreasSum + 1
  return v3.workAreaParameters.lastChangedArea, v3.workAreaParameters.lastTotalArea
end
function Mower:processDropArea(dropArea, dt)
  local v4 = v4:getMinValidLiterValue(dropArea.fillType)
  if v4 < dropArea.litersToDrop then
    local v5, v6, v7 = getWorldTranslation(dropArea.start)
    local v8, v9, v10 = getWorldTranslation(dropArea.width)
    local v11, v12, v13 = getWorldTranslation(dropArea.height)
    local v14 = math.random()
    local v17 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v5 + v14 * (v11 - v5), 0, v7 + v14 * (v13 - v7))
    local v18 = math.random()
    local v20 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v8 + v18 * (v11 - v5), 0, v10 + v18 * (v13 - v7))
    local v21, v22 = DensityMapHeightUtil.tipToGroundAroundLine(self, dropArea.litersToDrop, dropArea.fillType, v5 + v14 * (v11 - v5), v17, v7 + v14 * (v13 - v7), v8 + v18 * (v11 - v5), v20, v10 + v18 * (v13 - v7), 0, nil, dropArea.dropLineOffset, false, nil, false)
    dropArea.litersToDrop = dropArea.litersToDrop - v21
    dropArea.dropLineOffset = v22
    if v21 ~= 0 then
      self.spec_mower.lastDropTime = g_time
    end
  end
end
function Mower:getDropArea(workArea)
  if workArea.dropWindrow then
    if workArea.dropAreaIndex ~= nil then
      if self.spec_workArea.workAreas[workArea.dropAreaIndex] == nil then
        local v10 = tostring(workArea.dropAreaIndex)
        v10 = tostring(self.configFileName)
        print("Warning: Invalid dropAreaIndex '" .. v10 .. "' in '" .. v10 .. "'!")
        workArea.dropAreaIndex = nil
      end
      if dt["type"] ~= WorkAreaType.AUXILIARY then
        Logging.xmlWarning(self.xmlFile, "Invalid dropAreaIndex '%s'. Drop area type needs to be 'AUXILIARY'!", workArea.dropAreaIndex)
        workArea.dropAreaIndex = nil
      end
    end
    return dt
  end
  return nil
end
function Mower:setDropEffectEnabled(dropEffect, isActive)
  dropEffect.isActive = isActive
  if self.isClient then
    if isActive then
      v3:setFillType(dropEffect.effects, dropEffect.fillType)
      v3:startEffects(dropEffect.effects)
      return
    end
    v3:stopEffects(dropEffect.effects)
  end
end
function Mower:setCutSoundEnabled(isActive)
  if self.isClient then
    if isActive then
      -- TODO: structure LOP_FORNPREP (pc 13, target 67)
      local v6 = v6:getIsSamplePlaying(self.spec_mower.samples.cut[1])
      if not v6 then
        v6:playSample(self.spec_mower.samples.cut[1])
      end
      -- TODO: structure LOP_FORNLOOP (pc 35, target 14)
      return
    end
    -- TODO: structure LOP_FORNPREP (pc 44, target 67)
    v6 = v6:getIsSamplePlaying(dt.samples.cut[1])
    if v6 then
      v6:stopSample(dt.samples.cut[1])
    end
    -- TODO: structure LOP_FORNLOOP (pc 66, target 45)
  end
end
function Mower:setUseMowerWindrowDropAreas(useMowerWindrowDropAreas, noEventSend)
  if useMowerWindrowDropAreas ~= self.spec_mower.useWindrowDropAreas then
    MowerToggleWindrowDropEvent.sendEvent(self, useMowerWindrowDropAreas, noEventSend)
    self.spec_mower.useWindrowDropAreas = useMowerWindrowDropAreas
    if self.spec_mower.toggleWindrowDropAnimation ~= nil and self.playAnimation ~= nil then
      if not useMowerWindrowDropAreas then
      end
      self:playAnimation(v3.toggleWindrowDropAnimation, v4, nil, true)
    end
  end
end
function Mower:loadWorkAreaFromXML(superFunc, workArea, xmlFile, key)
  local retValue = superFunc(self, workArea, xmlFile, key)
  if workArea["type"] == WorkAreaType.DEFAULT then
    workArea["type"] = WorkAreaType.MOWER
  end
  if workArea["type"] == WorkAreaType.MOWER then
    local v6 = xmlFile:getValue(key .. ".mower#dropWindrow", true)
    workArea.dropWindrow = v6
    v6 = xmlFile:getValue(key .. ".mower#dropAreaIndex", 1)
    workArea.dropAreaIndex = v6
    workArea.lastPickupLiters = 0
    workArea.pickedUpLiters = 0
  end
  if workArea["type"] == WorkAreaType.AUXILIARY then
    workArea.litersToDrop = 0
    if self.spec_mower.dropAreas == nil then
      self.spec_mower.dropAreas = {}
    end
    table.insert(self.spec_mower.dropAreas, workArea)
  end
  return retValue
end
function Mower:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_mower.actionEvents)
    if isActiveForInputIgnoreSelection and self.spec_mower.toggleWindrowDropEnableText ~= nil and self.spec_mower.toggleWindrowDropDisableText ~= nil then
      local v4, v5 = self:addActionEvent(self.spec_mower.actionEvents, InputAction.IMPLEMENT_EXTRA3, self, Mower.actionEventToggleDrop, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_LOW)
      Mower.updateActionEventToggleDrop(self)
    end
  end
end
function Mower:doCheckSpeedLimit(superFunc)
  local dt = superFunc(self)
  if not dt then
    dt = self:getIsTurnedOn()
    if dt and self.getIsLowered ~= nil then
      dt = self:getIsLowered()
    end
  end
  return dt
end
function Mower.getCanBeSelected(v0, workArea)
  return true
end
function Mower:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_mower.isWorking then
    local v6 = self:getWorkDirtMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function Mower:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_mower.isWorking then
    if self.spec_mower.stoneLastState ~= 0 and self.spec_mower.stoneWearMultiplierData ~= nil then
    end
    local v8 = self:getWorkWearMultiplier()
    local v9 = self:getLastSpeed()
  end
  return multiplier
end
function Mower:onTurnedOn()
  if self.isClient then
    dt:startAnimations(self.spec_mower.animationNodes)
  end
end
function Mower:onTurnedOff()
  if self.isClient then
    for v5, v6 in pairs(self.spec_mower.dropEffects) do
      self:setDropEffectEnabled(v6, false)
    end
    dt:stopAnimations(workArea.animationNodes)
  end
end
function Mower:onStartWorkAreaProcessing(dt)
  if self.isServer then
    for v6, v7 in pairs(self.spec_mower.dropEffects) do
      if v7.isActive ~= v7.isActiveSent then
        v7.isActiveSent = v7.isActive
        self:setDropEffectEnabled(v7, v7.isActiveSent)
        self:raiseDirtyFlags(dt.dirtyFlag)
      end
      v7.isActive = false
    end
  end
  v3 = self:getTypedWorkAreas(WorkAreaType.MOWER)
  -- TODO: structure LOP_FORNPREP (pc 45, target 51)
  v3[1].pickedUpLiters = 0
  -- TODO: structure LOP_FORNLOOP (pc 50, target 46)
  dt.workAreaParameters.lastChangedArea = 0
  dt.workAreaParameters.lastStatsArea = 0
  dt.workAreaParameters.lastTotalArea = 0
  dt.isWorking = false
end
function Mower:onEndWorkAreaProcessing(dt, hasProcessed)
  for v7, v8 in ipairs(self.spec_mower.dropAreas) do
    self:processDropArea(v8, dt)
  end
  -- TODO: structure LOP_FORNPREP (pc 20, target 96)
  for v10 = 1, #v3.workAreas[1].dropEffects do
    local v12 = self:getDropArea(v7)
    if v7.dropEffects[v10].dropAreaIndex == v12.index then
      if 0 < v7.pickedUpLiters then
        if v7.dropEffects[v10].fillType ~= v12.fillType then
          v7.dropEffects[v10].fillType = v12.fillType
          v13:setFillType(v7.dropEffects[v10].effects, v7.dropEffects[v10].fillType)
        end
        v11.activeTime = v11.activeTimeDuration
        v11.isActive = true
      else
        local v13 = math.max(v7.dropEffects[v10].activeTime - dt, 0)
        v7.dropEffects[v10].activeTime = v13
        if 0 < v7.dropEffects[v10].activeTime then
          v7.dropEffects[v10].isActive = true
        end
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 94, target 30)
  end
  if self.isServer then
    if 0 < v3.workAreaParameters.lastStatsArea then
      v7 = v7:getFruitPixelsToSqm()
      v5 = MathUtil.areaToHa(...)
      v8 = self:getLastTouchedFarmlandFarmId()
      v6:updateFarmStats(v8, "threshedHectares", v5)
      self:updateLastWorkedArea(v3.workAreaParameters.lastStatsArea)
    end
    if g_time - v3.lastDropTime >= 500 then
    end
    if v3.isCutting ~= true then
      v3.isCutting = true
      self:raiseDirtyFlags(v3.dirtyFlag)
      self:setCutSoundEnabled(v3.isCutting)
    end
  end
  v3.workAreaParameters.lastUsedAreasTime = v3.workAreaParameters.lastUsedAreasTime + dt
  if 500 < v3.workAreaParameters.lastUsedAreasTime then
    v7 = math.max(v3.workAreaParameters.lastUsedAreasSum, 0.01)
    v3.workAreaParameters.lastUsedAreasPct = v3.workAreaParameters.lastUsedAreas / v7
    v3.workAreaParameters.lastUsedAreas = 0
    v3.workAreaParameters.lastUsedAreasSum = 0
    v3.workAreaParameters.lastUsedAreasTime = 0
  end
end
function Mower:getMowerLoadPercentage()
  if self.spec_mower ~= nil then
    return self.spec_mower.workAreaParameters.lastUsedAreasPct
  end
  return 0
end
v0:registerModifierType("MOWER_LOAD", Mower.getMowerLoadPercentage)
function Mower.getDefaultSpeedLimit()
  return 20
end
function Mower:actionEventToggleDrop(actionName, inputValue, callbackState, isAnalog)
  self:setUseMowerWindrowDropAreas(not self.spec_mower.useWindrowDropAreas)
end
function Mower:updateActionEventToggleDrop()
  if self.spec_mower.actionEvents[InputAction.IMPLEMENT_EXTRA3] ~= nil then
    local v3 = string.format(self.spec_mower.toggleWindrowDropDisableText, self.typeDesc)
    if not self.spec_mower.useWindrowDropAreas then
      local v4 = string.format(self.spec_mower.toggleWindrowDropEnableText, self.typeDesc)
    end
    v4:setActionEventText(dt.actionEventId, v3)
  end
end
