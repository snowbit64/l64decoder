-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Weeder = {}
function Weeder.initSpecialization()
  v0:addWorkAreaType("weeder", true)
  Vehicle.xmlSchema:setXMLSpecializationType("Weeder")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.weeder.sounds", "work")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.weeder#isHoe", "Is hoe weeder", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.weeder#isGrasslandWeeder", "Is a grassland weeder (grass fertilizer state + grass grwoth reset)", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, WorkParticles.PARTICLE_MAPPING_XML_PATH .. "#adjustColor", "Adjust color", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Weeder.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(AttacherJoints, v0)
  end
  return v1
end
function Weeder.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processWeederArea", Weeder.processWeederArea)
  SpecializationUtil.registerFunction(vehicleType, "updateWeederAIRequirements", Weeder.updateWeederAIRequirements)
end
function Weeder.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Weeder.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Weeder.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Weeder.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", Weeder.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", Weeder.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadGroundParticleMapping", Weeder.loadGroundParticleMapping)
end
function Weeder.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Weeder)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Weeder)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Weeder)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Weeder)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", Weeder)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Weeder)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Weeder)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", Weeder)
end
function Weeder:onLoad(savegame)
  if self.isClient then
    self.spec_weeder.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.weeder.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_weeder.samples.work = v4
    self.spec_weeder.isWorkSamplePlaying = false
  end
  v2.startActivationTimeout = 2000
  v2.startActivationTime = 0
  local v3 = v3:getValue("vehicle.weeder#isHoe", false)
  v2.isHoeWeeder = v3
  v3 = v3:getValue("vehicle.weeder#isGrasslandWeeder", false)
  v2.isGrasslandWeeder = v3
  v2.workAreaParameters = {lastArea = 0, lastStatsArea = 0}
  v2.isWorking = false
  v2.stoneLastState = 0
  v3 = v3:getWearMultiplierByType("WEEDER")
  v2.stoneWearMultiplierData = v3
  self:updateWeederAIRequirements()
end
function Weeder:onDelete()
  v2:deleteSamples(self.spec_weeder.samples)
end
function Weeder:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_weeder.isWorking and self.spec_weeder.colorParticleSystems ~= nil then
    for v9, v10 in ipairs(self.spec_weeder.colorParticleSystems) do
      local v11, v12, v13 = getWorldTranslation(v10.node)
      local v14, v15 = FSDensityMapUtil.getFieldDataAtWorldPosition(v11, v12, v13)
      if v14 then
        local v19, v20, v21, v22 = v19:getFieldGroundTyreTrackColor(v15)
        v10.lastColor[1] = v19
        v10.lastColor[2] = v20
        v10.lastColor[3] = v21
      else
        local v19, v20, v21, v22, v23 = getTerrainAttributesAtWorldPos(g_currentMission.terrainRootNode, v11, v12, v13, true, true, true, true, false)
        v10.lastColor[1] = v19
        v10.lastColor[2] = v20
        v10.lastColor[3] = v21
      end
      if v10.targetColor == nil then
        v10.targetColor = {v10.lastColor[1], v10.lastColor[2], v10.lastColor[3]}
        v10.currentColor = {v10.lastColor[1], v10.lastColor[2], v10.lastColor[3]}
        v10.alpha = 1
      end
      if v10.alpha ~= 1 then
        local v16 = math.min(v10.alpha + dt / 1000, 1)
        v10.alpha = v16
        local v17 = MathUtil.vector3ArrayLerp(v10.lastColor, v10.targetColor, v10.alpha)
        v10.currentColor = {}
        if v10.alpha == 1 then
          v10.lastColor = {v10.currentColor[1], v10.currentColor[2], v10.currentColor[3]}
        end
      end
      if v10.alpha == 1 and v10.lastColor[1] ~= v10.targetColor[1] and v10.lastColor[2] ~= v10.targetColor[2] and v10.lastColor[3] ~= v10.targetColor[3] then
        v10.alpha = 0
        v10.targetColor = {v10.lastColor[1], v10.lastColor[2], v10.lastColor[3]}
      end
      setShaderParameter(v10.particleSystem.shape, "psColor", v10.currentColor[1], v10.currentColor[2], v10.currentColor[3], 1, false)
    end
  end
end
function Weeder:processWeederArea(workArea, dt)
  local v4, v5, v6 = getWorldTranslation(workArea.start)
  local v7, v8, v9 = getWorldTranslation(workArea.width)
  local v10, v11, v12 = getWorldTranslation(workArea.height)
  local v13 = FSDensityMapUtil.updateWeederArea(v4, v6, v7, v9, v10, v12, self.spec_weeder.isHoeWeeder)
  if self.spec_weeder.isGrasslandWeeder then
    local v14 = FSDensityMapUtil.updateGrassRollerArea(v4, v6, v7, v9, v10, v12, false)
    local v15 = math.max(v13, v14)
  end
  v3.workAreaParameters.lastArea = v3.workAreaParameters.lastArea + v13
  v3.workAreaParameters.lastStatsArea = v3.workAreaParameters.lastStatsArea + v13
  v15 = self:getLastSpeed()
  if 0.5 >= v15 then
  end
  v3.isWorking = true
  if v3.isWorking then
    v14 = FSDensityMapUtil.getStoneArea(v4, v6, v7, v9, v10, v12)
    v3.stoneLastState = v14
  else
    v3.stoneLastState = 0
  end
  return v13, v13
end
function Weeder:updateWeederAIRequirements()
  if self.addAITerrainDetailRequiredRange ~= nil then
    local v3 = v3:getChildVehicles()
    -- TODO: structure LOP_FORNPREP (pc 15, target 32)
    local v7 = SpecializationUtil.hasSpecialization(SowingMachine, v3[1].specializations)
    if v7 then
      v7 = v7:getUseSowingMachineAIRequirements()
      if v7 then
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 31, target 16)
    self:clearAIFruitRequirements()
    if not v2 then
      if g_currentMission.weedSystem ~= nil then
        local v5, v6, v7 = g_currentMission.weedSystem:getDensityMapData()
        local v8 = g_currentMission.weedSystem:getWeederReplacements(v1.isHoeWeeder)
        if v8.weed ~= nil then
          for v14, v15 in pairs(v8.weed.replacements) do
            if v9 == -1 then
            elseif v14 ~= v10 + 1 then
              self:addAIFruitRequirement(nil, v9, v10, v5, v6, v7)
            end
          end
          if v9 ~= -1 then
            self:addAIFruitRequirement(nil, v9, v10, v5, v6, v7)
          end
        end
      end
      if v1.isGrasslandWeeder then
        v5 = v5:getFruitTypeByIndex(FruitType.GRASS)
        if v5.terrainDataPlaneId ~= nil then
          self:addAIFruitRequirement(v5.index, 2, v5.cutState + 1)
        end
      end
    end
  end
end
function Weeder.loadWorkAreaFromXML(v0, v1, v2, v3, v4)
  if v2["type"] == WorkAreaType.DEFAULT then
    v2["type"] = WorkAreaType.WEEDER
  end
  return v1(v0, v2, v3, v4)
end
function Weeder:getIsWorkAreaActive(superFunc, workArea)
  if workArea["type"] == WorkAreaType.WEEDER then
    if workArea.requiresGroundContact and workArea.groundReferenceNode ~= nil and true then
      local v4 = self:getIsGroundReferenceNodeActive(workArea.groundReferenceNode)
    end
    if v3 and workArea.disableBackwards and v3 and 0 >= self.movingDirection then
    end
    return v3
  end
  return superFunc(self, workArea)
end
function Weeder:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    v2 = self:getIsImplementChainLowered()
  end
  return v2
end
function Weeder:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_weeder.isWorking then
    local v6 = self:getWorkDirtMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function Weeder:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_weeder.isWorking then
    if self.spec_weeder.stoneLastState ~= 0 and self.spec_weeder.stoneWearMultiplierData ~= nil then
    end
    local v8 = self:getWorkWearMultiplier()
    local v9 = self:getLastSpeed()
  end
  return multiplier
end
function Weeder:loadGroundParticleMapping(superFunc, xmlFile, key, mapping, index, i3dNode)
  local v7 = superFunc(self, xmlFile, key, mapping, index, i3dNode)
  if not v7 then
    return false
  end
  v7 = xmlFile:getValue(key .. "#adjustColor", false)
  mapping.adjustColor = v7
  if mapping.adjustColor then
    if self.spec_weeder.colorParticleSystems == nil then
      self.spec_weeder.colorParticleSystems = {}
    end
    mapping.lastColor = {}
    table.insert(v7.colorParticleSystems, mapping)
  end
  return true
end
function Weeder:onStartWorkAreaProcessing(dt)
  self.spec_weeder.isWorking = false
  self.spec_weeder.workAreaParameters.lastArea = 0
  self.spec_weeder.workAreaParameters.lastStatsArea = 0
end
function Weeder:onEndWorkAreaProcessing(dt, hasProcessed)
  if self.isServer and 0 < self.spec_weeder.workAreaParameters.lastStatsArea then
    self:updateLastWorkedArea(self.spec_weeder.workAreaParameters.lastStatsArea)
  end
  if self.isClient then
    if v3.isWorking then
      -- if v3.isWorkSamplePlaying then goto L56 end
      v4:playSample(v3.samples.work)
      v3.isWorkSamplePlaying = true
      return
    end
    if v3.isWorkSamplePlaying then
      v4:stopSample(v3.samples.work)
      v3.isWorkSamplePlaying = false
    end
  end
end
function Weeder:onStateChange(state, data)
  if state ~= Vehicle.STATE_CHANGE_ATTACH then
    -- if v1 ~= Vehicle.STATE_CHANGE_DETACH then goto L11 end
  end
  self:updateWeederAIRequirements()
end
function Weeder:onDeactivate()
  if self.isClient then
    v2:stopSamples(self.spec_weeder.samples)
    self.spec_weeder.isWorkSamplePlaying = false
  end
end
function Weeder:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  self.spec_weeder.startActivationTime = g_currentMission.time + self.spec_weeder.startActivationTimeout
end
function Weeder.getDefaultSpeedLimit()
  return 15
end
