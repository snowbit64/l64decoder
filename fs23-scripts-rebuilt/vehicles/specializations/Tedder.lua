-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Tedder = {}
function Tedder.initSpecialization()
  v0:addWorkAreaType("tedder", false)
  Vehicle.xmlSchema:setXMLSpecializationType("Tedder")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.tedder#fillTypeConverter", "Fill type converter name")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.tedder.effects.effect(?)")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.tedder.effects.effect(?)#workAreaIndex", "Work area index", 1)
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.tedder.animationNodes")
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_KEY .. ".tedder#dropWindrowWorkAreaIndex", "Drop work area index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, WorkArea.WORK_AREA_XML_CONFIG_KEY .. ".tedder#dropWindrowWorkAreaIndex", "Drop work area index", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Tedder.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
  end
  return v1
end
function Tedder.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "preprocessTedderArea", Tedder.preprocessTedderArea)
  SpecializationUtil.registerFunction(vehicleType, "processTedderArea", Tedder.processTedderArea)
  SpecializationUtil.registerFunction(vehicleType, "processDropArea", Tedder.processDropArea)
end
function Tedder.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Tedder.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Tedder.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", Tedder.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Tedder.doCheckSpeedLimit)
end
function Tedder.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", Tedder)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", Tedder)
end
function Tedder:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode#type", "vehicle.tedder.animationNodes.animationNode", "tedder")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.tedder.sounds", "vehicle.turnOnVehicle.sounds.work")
  self.spec_tedder.fillTypeConverters = {}
  self.spec_tedder.fillTypeConvertersReverse = {}
  local v3 = v3:getValue("vehicle.tedder#fillTypeConverter")
  if v3 ~= nil then
    local v4 = v4:getConverterDataByName(v3)
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L86
    for v8, v9 in pairs(v4) do
      v2.fillTypeConverters[v8] = v9
      if v2.fillTypeConvertersReverse[v9.targetFillTypeIndex] == nil then
        v2.fillTypeConvertersReverse[v9.targetFillTypeIndex] = {}
      end
      table.insert(v2.fillTypeConvertersReverse[v9.targetFillTypeIndex], v8)
    end
  else
    v5 = string.format("Warning: Missing fill type converter in '%s'", self.configFileName)
    print(...)
  end
  if self.isClient then
    v4 = v4:loadAnimations(self.xmlFile, "vehicle.tedder.animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v4
    v2.effects = {}
    v2.workAreaToEffects = {}
    while true do
      v5 = string.format("vehicle.tedder.effects.effect(%d)", v4)
      v6 = v6:hasProperty(v5)
      if not v6 then
        break
      end
      v6 = v6:loadEffect(self.xmlFile, v5, self.components, self, self.i3dMappings)
      if v6 ~= nil then
        v8 = v8:getValue(v5 .. "#workAreaIndex", 1)
        table.insert(v2.effects, {effects = v6, workAreaIndex = v8, activeTime = -1, activeTimeDuration = 250, isActive = false, isActiveSent = false})
      end
    end
  end
  v2.lastDroppedLiters = 0
  v2.stoneLastState = 0
  v4 = v4:getWearMultiplierByType("TEDDER")
  v2.stoneWearMultiplierData = v4
  v4 = self:getNextDirtyFlag()
  v2.fillTypesDirtyFlag = v4
  v4 = self:getNextDirtyFlag()
  v2.effectDirtyFlag = v4
  if self.addAIDensityHeightTypeRequirement ~= nil then
    self:addAIDensityHeightTypeRequirement(FillType.GRASS_WINDROW)
  end
end
function Tedder:onPostLoad(savegame)
  -- TODO: structure LOP_FORNPREP (pc 7, target 66)
  local v7 = self:getWorkAreaByIndex(self.spec_tedder.effects[#self.spec_tedder.effects].workAreaIndex)
  if v7 ~= nil then
    self.spec_tedder.effects[#self.spec_tedder.effects].tedderWorkAreaFillTypeIndex = v7.tedderWorkAreaIndex
    if self.spec_tedder.workAreaToEffects[v7.index] == nil then
      self.spec_tedder.workAreaToEffects[v7.index] = {}
    end
    table.insert(v2.workAreaToEffects[v7.index], v6)
  else
    Logging.xmlWarning(self.xmlFile, "Invalid workAreaIndex '%d' for effect 'vehicle.tedder.effects.effect(%d)'!", self.spec_tedder.effects[#self.spec_tedder.effects].workAreaIndex, #self.spec_tedder.effects)
    table.insert(self.spec_tedder.effects, #self.spec_tedder.effects)
  end
  -- TODO: structure LOP_FORNLOOP (pc 65, target 8)
  if not self.isServer then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", Tedder)
  end
end
function Tedder:onDelete()
  if self.spec_tedder.effects ~= nil then
    for v5, v6 in ipairs(self.spec_tedder.effects) do
      v7:deleteEffects(v6.effects)
    end
  end
  v2:deleteAnimations(v1.animationNodes)
end
function Tedder:onReadStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_tedder.tedderWorkAreaFillTypes) do
    local fillType = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
    v3.tedderWorkAreaFillTypes[v7] = fillType
  end
  for v7, v8 in ipairs(v3.effects) do
    fillType = streamReadBool(streamId)
    if fillType then
      v10:setFillType(v8.effects, v3.tedderWorkAreaFillTypes[v8.tedderWorkAreaFillTypeIndex])
      v10:startEffects(v8.effects)
    else
      fillType:stopEffects(v8.effects)
    end
  end
end
function Tedder:onWriteStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_tedder.tedderWorkAreaFillTypes) do
    streamWriteUIntN(streamId, v8, FillTypeManager.SEND_NUM_BITS)
  end
  for v7, v8 in ipairs(v3.effects) do
    streamWriteBool(streamId, v8.isActiveSent)
  end
end
function Tedder:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      for v8, v9 in ipairs(self.spec_tedder.tedderWorkAreaFillTypes) do
        local fillType = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
        v4.tedderWorkAreaFillTypes[v8] = fillType
      end
    end
    v5 = streamReadBool(streamId)
    if v5 then
      for v8, v9 in ipairs(v4.effects) do
        fillType = streamReadBool(streamId)
        if fillType then
          v11:setFillType(v9.effects, v4.tedderWorkAreaFillTypes[v9.tedderWorkAreaFillTypeIndex])
          v11:startEffects(v9.effects)
        else
          fillType:stopEffects(v9.effects)
        end
      end
    end
  end
end
function Tedder:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_tedder.fillTypesDirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      for v8, v9 in ipairs(v4.tedderWorkAreaFillTypes) do
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
function Tedder:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    for v9, v10 in ipairs(self.spec_tedder.effects) do
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
    end
  end
end
function Tedder:loadWorkAreaFromXML(superFunc, workArea, xmlFile, key)
  local retValue = superFunc(self, workArea, xmlFile, key)
  if workArea["type"] == WorkAreaType.DEFAULT then
    workArea["type"] = WorkAreaType.TEDDER
  end
  if workArea["type"] == WorkAreaType.TEDDER then
    local v6 = xmlFile:getValue(key .. ".tedder#dropWindrowWorkAreaIndex", 1)
    workArea.dropWindrowWorkAreaIndex = v6
    workArea.litersToDrop = 0
    workArea.lastPickupLiters = 0
    workArea.lastDropFillType = FillType.UNKNOWN
    workArea.lastDroppedLiters = 0
    workArea.tedderParticlesActive = false
    workArea.tedderParticlesActiveSent = false
    if self.spec_tedder.tedderWorkAreaFillTypes == nil then
      self.spec_tedder.tedderWorkAreaFillTypes = {}
    end
    table.insert(v6.tedderWorkAreaFillTypes, FruitType.UNKNOWN)
    workArea.tedderWorkAreaIndex = #v6.tedderWorkAreaFillTypes
  end
  return retValue
end
function Tedder:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_tedder.isWorking then
    local v6 = self:getWorkDirtMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function Tedder:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_tedder.isWorking then
    if self.spec_tedder.stoneLastState ~= 0 and self.spec_tedder.stoneWearMultiplierData ~= nil then
    end
    local v8 = self:getWorkWearMultiplier()
    local v9 = self:getLastSpeed()
  end
  return multiplier
end
function Tedder:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    v2 = self:getIsTurnedOn()
    if v2 then
      v2 = self:getIsImplementChainLowered()
    end
  end
  return v2
end
function Tedder.preprocessTedderArea(v0, v1)
  v1.lastPickupLiters = 0
  v1.lastDroppedLiters = 0
end
function Tedder:processTedderArea(workArea, dt)
  local v5, v6, v7 = getWorldTranslation(workArea.start)
  local v8, v9, v10 = getWorldTranslation(workArea.width)
  local v11, v12, v13 = getWorldTranslation(workArea.height)
  local v14, v15, v16, v17, v18, v19, v20 = DensityMapHeightUtil.getLineByAreaDimensions(v5, v6, v7, v8, v9, v10, v11, v12, v13, true)
  for v24, v25 in pairs(self.spec_tedder.fillTypeConvertersReverse) do
    for v30, v31 in ipairs(v25) do
      local v32 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, v31, v14, v15, v16, v17, v18, v19, v20, nil, nil, false, nil)
    end
    if v26 == 0 and workArea.lastDropFillType ~= FillType.UNKNOWN then
    end
    workArea.lastPickupLiters = -v26
    workArea.litersToDrop = workArea.litersToDrop + workArea.lastPickupLiters
    if not (v4.workAreas[workArea.dropWindrowWorkAreaIndex] ~= nil) then
      continue
    end
    if not (0 < workArea.litersToDrop) then
      continue
    end
    v28 = self:processDropArea(v4.workAreas[workArea.dropWindrowWorkAreaIndex], v24, workArea.litersToDrop)
    workArea.lastDropFillType = v24
    workArea.lastDroppedLiters = v28
    v3.lastDroppedLiters = v3.lastDroppedLiters + v28
    workArea.litersToDrop = workArea.litersToDrop - v28
    if not self.isServer then
      continue
    end
    v29 = self:getLastSpeed(true)
    if not (0 < v28) then
      continue
    end
    if not (0.5 < v29) then
      continue
    end
    if v3.tedderWorkAreaFillTypes[workArea.tedderWorkAreaIndex] ~= v24 then
      v3.tedderWorkAreaFillTypes[workArea.tedderWorkAreaIndex] = v24
      self:raiseDirtyFlags(v3.fillTypesDirtyFlag)
    end
    if not (v3.workAreaToEffects[workArea.index] ~= nil) then
      continue
    end
    for v35, v36 in ipairs(v3.workAreaToEffects[workArea.index]) do
      v36.activeTime = g_currentMission.time + v36.activeTimeDuration
      if not v36.isActiveSent then
        v36.isActiveSent = true
        self:raiseDirtyFlags(v3.effectDirtyFlag)
      end
      if v30 then
        v37:setFillType(v36.effects, v24)
      end
      if not v36.isActive then
        v37:setFillType(v36.effects, v24)
        v37:startEffects(v36.effects)
      end
      local v42 = self:getSpeedLimit()
      local v40 = math.max(v29 / v42, 0.6)
      v37:setDensity(...)
      v36.isActive = true
    end
  end
  v21 = self:getLastSpeed()
  if 0.5 < v21 then
    v21 = FSDensityMapUtil.getStoneArea(v5, v7, v8, v10, v11, v13)
    v3.stoneLastState = v21
  else
    v3.stoneLastState = 0
  end
  v21 = MathUtil.vector3Length(v14 - v17, v15 - v18, v16 - v19)
  return v21 * self.lastMovedDistance, v21 * self.lastMovedDistance
end
function Tedder.processDropArea(v0, v1, v2, v3)
  local v4, v5, v6, v7, v8, v9, v10 = DensityMapHeightUtil.getLineByArea(v1.start, v1.width, v1.height, true)
  local v11, v12 = DensityMapHeightUtil.tipToGroundAroundLine(v0, v3, v2, v4, v5, v6, v7, v8, v9, v10, nil, v1.lineOffset, false, nil, false)
  v1.lineOffset = v12
  return v11
end
function Tedder:onStartWorkAreaProcessing(dt)
  self.spec_tedder.lastDroppedLiters = 0
end
function Tedder:onEndWorkAreaProcessing(dt, hasProcessed)
  if 0 >= self.spec_tedder.lastDroppedLiters then
  end
  v3.isWorking = true
end
function Tedder:onTurnedOn()
  if self.isClient then
    v2:startAnimations(self.spec_tedder.animationNodes)
  end
end
function Tedder:onTurnedOff()
  if self.isClient then
    v2:stopAnimations(self.spec_tedder.animationNodes)
    for v5, v6 in ipairs(self.spec_tedder.effects) do
      v7:stopEffects(v6.effects)
    end
  end
end
function Tedder:onDeactivate()
  if self.isClient then
    for v5, v6 in ipairs(self.spec_tedder.effects) do
      v7:stopEffects(v6.effects)
    end
  end
end
function Tedder.getDefaultSpeedLimit()
  return 15
end
