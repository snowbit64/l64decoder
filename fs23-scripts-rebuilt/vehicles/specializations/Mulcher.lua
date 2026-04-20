-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Mulcher = {AI_REQUIRED_GROUND_TYPES = {FieldGroundType.SOWN, FieldGroundType.DIRECT_SOWN, FieldGroundType.PLANTED, FieldGroundType.RIDGE, FieldGroundType.HARVEST_READY, FieldGroundType.HARVEST_READY_OTHER, FieldGroundType.GRASS, FieldGroundType.GRASS_CUT}}
function Mulcher.initSpecialization()
  AIFieldWorker.registerCustomDriveStrategy(function(self)
    local v1 = SpecializationUtil.hasSpecialization(Mulcher, self.specializations)
    if v1 then
      v1 = self:getAIIsVineyardTool()
    end
    return v1, false
  end, AIDriveStrategyVineyardGroundTool)
  v0:addWorkAreaType("mulcher", true)
  Vehicle.xmlSchema:setXMLSpecializationType("Mulcher")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.mulcher.effects.effect(?)")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.mulcher.effects.effect(?)#workAreaIndex", "Work area index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.mulcher.effects.effect(?)#activeDirection", "If vehicle is driving into this direction the effect will be activated (0 = any direction)", 0)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.mulcher.sounds", "work")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Mulcher.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(GroundReference, v0)
  end
  return v1
end
function Mulcher.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processMulcherArea", Mulcher.processMulcherArea)
end
function Mulcher.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Mulcher.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoGroundManipulation", Mulcher.getDoGroundManipulation)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Mulcher.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Mulcher.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIImplementUseVineSegment", Mulcher.getAIImplementUseVineSegment)
end
function Mulcher.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Mulcher)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Mulcher)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Mulcher)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Mulcher)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Mulcher)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Mulcher)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Mulcher)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Mulcher)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Mulcher)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Mulcher)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Mulcher)
end
function Mulcher:onLoad(savegame)
  local v2 = self:getGroundReferenceNodeFromIndex(1)
  if v2 == nil then
    print("Warning: No ground reference nodes in  " .. self.configFileName)
  end
  if self.isClient then
    self.spec_mulcher.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.mulcher.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_mulcher.samples.work = v4
    self.spec_mulcher.isWorkSamplePlaying = false
  end
  v2.effects = {}
  v2.workAreaToEffects = {}
  while true do
    v4 = string.format("vehicle.mulcher.effects.effect(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v5 = v5:loadEffect(self.xmlFile, v4, self.components, self, self.i3dMappings)
    if v5 ~= nil then
      v7 = v7:getValue(v4 .. "#workAreaIndex", 1)
      v7 = v7:getValue(v4 .. "#activeDirection", 0)
      table.insert(v2.effects, {effects = v5, workAreaIndex = v7, activeDirection = v7, activeTime = -1, activeTimeDuration = 250, isActive = false, isActiveSent = false})
    end
  end
  v2.effectFillType = FillType.WHEAT
  if self.addAIGroundTypeRequirements ~= nil then
    self:addAIGroundTypeRequirements(Mulcher.AI_REQUIRED_GROUND_TYPES)
    self:clearAIFruitRequirements()
    v5 = v5:getFruitTypes()
    for v7, v8 in ipairs(...) do
      if not v8.destruction.canBeDestroyed then
        continue
      end
      if v8.cutState < v8.mulcher.state then
        self:addAIFruitRequirement(v8.index, 2, v8.mulcher.state - 1)
      else
        self:addAIFruitRequirement(v8.index, 2, 15)
      end
    end
    if g_currentMission.weedSystem ~= nil then
      v5 = g_currentMission.weedSystem:getMulcherReplacements()
      if v5.custom ~= nil then
        for v9, v10 in ipairs(v5.custom) do
          if not (v10.fruitType.terrainDataPlaneId ~= nil) then
            continue
          end
          for v15, v16 in pairs(v10.replacements) do
            self:addAIFruitRequirement(v11.index, v15, v15)
          end
        end
      end
    end
  end
  v2.isWorking = false
  v2.lastWorkTime = -math.huge
  v2.stoneLastState = 0
  v4 = v4:getWearMultiplierByType("MULCHER")
  v2.stoneWearMultiplierData = v4
  v4 = self:getNextDirtyFlag()
  v2.effectDirtyFlag = v4
  if self.isClient then
    -- cmp-jump LOP_JUMPXEQKN R4 aux=0x80000057 -> L272
  end
  SpecializationUtil.removeEventListener(self, "onUpdateTick", Mulcher)
end
function Mulcher:onPostLoad(savegame)
  -- TODO: structure LOP_FORNPREP (pc 7, target 60)
  local v7 = self:getWorkAreaByIndex(self.spec_mulcher.effects[#self.spec_mulcher.effects].workAreaIndex)
  if v7 ~= nil then
    if self.spec_mulcher.workAreaToEffects[v7.index] == nil then
      self.spec_mulcher.workAreaToEffects[v7.index] = {}
    end
    table.insert(v2.workAreaToEffects[v7.index], v6)
  else
    Logging.xmlWarning(self.xmlFile, "Invalid workAreaIndex '%d' for effect 'vehicle.mulcher.effects.effect(%d)'!", self.spec_mulcher.effects[#self.spec_mulcher.effects].workAreaIndex, #self.spec_mulcher.effects)
    table.remove(self.spec_mulcher.effects, #self.spec_mulcher.effects)
  end
  -- TODO: structure LOP_FORNLOOP (pc 59, target 8)
end
function Mulcher:onDelete()
  v2:deleteSamples(self.spec_mulcher.samples)
  if self.spec_mulcher.effects ~= nil then
    for v5, v6 in ipairs(self.spec_mulcher.effects) do
      v7:deleteEffects(v6.effects)
    end
  end
end
function Mulcher:onReadStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_mulcher.effects) do
    local v9 = streamReadBool(streamId)
    if v9 then
      v9:setFillType(v8.effects, v3.effectFillType)
      v9:startEffects(v8.effects)
    else
      v9:stopEffects(v8.effects)
    end
  end
end
function Mulcher:onWriteStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_mulcher.effects) do
    streamWriteBool(streamId, v8.isActive)
  end
end
function Mulcher:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      for v8, v9 in ipairs(self.spec_mulcher.effects) do
        local v10 = streamReadBool(streamId)
        if v10 then
          v10:setFillType(v9.effects, v4.effectFillType)
          v10:startEffects(v9.effects)
        else
          v10:stopEffects(v9.effects)
        end
      end
    end
  end
end
function Mulcher:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_mulcher.effectDirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      for v8, v9 in ipairs(v4.effects) do
        streamWriteBool(streamId, v9.isActive)
      end
    end
  end
end
function Mulcher:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    for v9, v10 in ipairs(self.spec_mulcher.effects) do
      if not v10.isActive then
        continue
      end
      if not (v10.activeTime < g_currentMission.time) then
        continue
      end
      v10.isActive = false
      self:raiseDirtyFlags(v5.effectDirtyFlag)
      v11:stopEffects(v10.effects)
    end
  end
end
function Mulcher:processMulcherArea(workArea, dt)
  local v4, v5, v6 = getWorldTranslation(workArea.start)
  local v7, v8, v9 = getWorldTranslation(workArea.width)
  local v10, v11, v12 = getWorldTranslation(workArea.height)
  local v13, v14 = FSDensityMapUtil.updateMulcherArea(v4, v6, v7, v9, v10, v12)
  if 0 < v13 then
    local v15 = self:getLastSpeed()
    if 0.5 < v15 then
      if self.spec_mulcher.workAreaToEffects[workArea.index] ~= nil then
        for v19, v20 in ipairs(self.spec_mulcher.workAreaToEffects[workArea.index]) do
          if v20.activeDirection ~= 0 and not (self.movingDirection == v20.activeDirection) then
            continue
          end
          v20.activeTime = g_currentMission.time + v20.activeTimeDuration
          if not not v20.isActive then
            continue
          end
          v21:setFillType(v20.effects, v3.effectFillType)
          v21:startEffects(v20.effects)
          v20.isActive = true
          self:raiseDirtyFlags(v3.effectDirtyFlag)
        end
      end
      v3.lastWorkTime = g_time
    end
  end
  FSDensityMapUtil.eraseTireTrack(v4, v6, v7, v9, v10, v12)
  if g_time - v3.lastWorkTime >= 500 then
  end
  v3.isWorking = true
  if v3.isWorking then
    v15 = FSDensityMapUtil.getStoneArea(v4, v6, v7, v9, v10, v12)
    v3.stoneLastState = v15
    return v13, v14
  end
  v3.stoneLastState = 0
  return v13, v14
end
function Mulcher:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    v2 = self:getIsImplementChainLowered()
  end
  return v2
end
function Mulcher:getDoGroundManipulation(superFunc)
  if not self.spec_mulcher.isWorking then
    return false
  end
  return superFunc(self)
end
function Mulcher:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_mulcher.isWorking then
    local v6 = self:getWorkDirtMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function Mulcher:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_mulcher.isWorking then
    if self.spec_mulcher.stoneLastState ~= 0 and self.spec_mulcher.stoneWearMultiplierData ~= nil then
    end
    local v8 = self:getWorkWearMultiplier()
    local v9 = self:getLastSpeed()
  end
  return multiplier
end
function Mulcher.getAIImplementUseVineSegment(v0, v1, v2, v3, v4)
  local v5, v6, v7, v8, v9, v10 = v2:getSegmentSideArea(v3, v4)
  local v11, v12 = AIVehicleUtil.getAIAreaOfVehicle(v0, v5, v6, v7, v8, v9, v10)
  if 0 < v12 then
    if 0.01 >= v11 / v12 then
    end
    return true
  end
  return false
end
function Mulcher.loadWorkAreaFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if v2["type"] == WorkAreaType.DEFAULT then
    v2["type"] = WorkAreaType.MULCHER
  end
  return v5
end
function Mulcher:onDeactivate()
  if self.isClient then
    v2:stopSamples(self.spec_mulcher.samples)
    self.spec_mulcher.isWorkSamplePlaying = false
  end
  for v5, v6 in ipairs(v1.effects) do
    v7:stopEffects(v6.effects)
  end
end
function Mulcher:onStartWorkAreaProcessing(dt)
  self.spec_mulcher.isWorking = false
end
function Mulcher:onEndWorkAreaProcessing(dt)
  if self.isClient then
    if self.spec_mulcher.isWorking then
      -- if v0.spec_mulcher.isWorkSamplePlaying then goto L39 end
      v3:playSample(self.spec_mulcher.samples.work)
      self.spec_mulcher.isWorkSamplePlaying = true
      return
    end
    if v2.isWorkSamplePlaying then
      v3:stopSample(v2.samples.work)
      v2.isWorkSamplePlaying = false
    end
  end
end
function Mulcher.getDefaultSpeedLimit()
  return 15
end
