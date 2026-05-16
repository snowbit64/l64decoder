-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Roller = {AI_REQUIRED_GROUND_TYPES = {FieldGroundType.STUBBLE_TILLAGE, FieldGroundType.CULTIVATED, FieldGroundType.SEEDBED, FieldGroundType.PLOWED, FieldGroundType.SOWN, FieldGroundType.DIRECT_SOWN, FieldGroundType.PLANTED, FieldGroundType.RIDGE, FieldGroundType.CULTIVATED}, AI_REQUIRED_GROUND_TYPES_GRASS = {FieldGroundType.GRASS, FieldGroundType.GRASS_CUT}}
function Roller.initSpecialization()
  local v3 = v3:getText("configuration_design")
  v0:addConfigurationType("roller", v3, "roller", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  v0:addWorkAreaType("roller", false)
  Vehicle.xmlSchema:setXMLSpecializationType("Roller")
  Roller.registerRollerXMLPaths(Vehicle.xmlSchema, "vehicle.roller")
  Roller.registerRollerXMLPaths(Vehicle.xmlSchema, "vehicle.roller.rollerConfigurations.rollerConfiguration(?).roller")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.roller.rollerConfigurations.rollerConfiguration(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Roller:registerRollerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".directionNode#node", "Roller direction node")
  self:register(XMLValueType.BOOL, v1 .. "#onlyActiveWhenLowered", "Only active when lowered", true)
  self:register(XMLValueType.BOOL, v1 .. "#isSoilRoller", "If roller is for soil", true)
  self:register(XMLValueType.BOOL, v1 .. "#isGrassRoller", "If roller is for grassland", false)
  self:register(XMLValueType.BOOL, v1 .. "#usingAIRequirements", "Tool using roller ai requirements", true)
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "work")
end
function Roller.prerequisitesPresent(specializations)
  return SpecializationUtil.hasSpecialization(WorkArea, specializations)
end
function Roller.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processRollerArea", Roller.processRollerArea)
  SpecializationUtil.registerFunction(vehicleType, "updateRollerAIRequirements", Roller.updateRollerAIRequirements)
end
function Roller.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Roller.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoGroundManipulation", Roller.getDoGroundManipulation)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Roller.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Roller.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", Roller.getIsWorkAreaActive)
end
function Roller.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Roller)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Roller)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", Roller)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Roller)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Roller)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Roller)
end
function Roller:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.rollerSound", "vehicle.roller.sounds.work")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.onlyActiveWhenLowered#value", "vehicle.roller#onlyActiveWhenLowered")
  local rollerConfigurationId = Utils.getNoNil(self.configurations.roller, 1)
  local configKey = string.format("vehicle.roller.rollerConfigurations.rollerConfiguration(%d).roller", rollerConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.roller.rollerConfigurations.rollerConfiguration", rollerConfigurationId, self.components, self)
  local v5 = v5:hasProperty(configKey)
  if not v5 then
  end
  v5 = v5:getValue(configKey .. ".directionNode#node", self.components[1].node, self.components, self.i3dMappings)
  v2.directionNode = v5
  if self.isClient then
    v2.samples = {}
    v2.isWorkSamplePlaying = false
    local v6 = v6:loadSampleFromXML(self.xmlFile, configKey .. ".sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.work = v6
  end
  v5 = v5:getValue(configKey .. "#isSoilRoller")
  v2.isSoilRoller = v5
  v5 = v5:getValue(configKey .. "#isGrassRoller")
  v2.isGrassRoller = v5
  if v2.isSoilRoller == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L136
    v2.isSoilRoller = true
    v2.isGrassRoller = false
  else
    if v2.isGrassRoller == nil then
      v2.isGrassRoller = false
    end
    if v2.isSoilRoller == nil then
      v2.isSoilRoller = false
    end
  end
  v2.grassFruitTypes = {FruitType.GRASS, FruitType.MEADOW}
  v5 = v5:getValue(configKey .. "#usingAIRequirements", true)
  v2.usingAIRequirements = v5
  v5 = v5:getValue(configKey .. "#onlyActiveWhenLowered", true)
  v2.onlyActiveWhenLowered = v5
  v2.startActivationTimeout = 2000
  v2.startActivationTime = 0
  v2.isWorking = false
  v2.angle = 0
  self:updateRollerAIRequirements()
  v5 = self:getNextDirtyFlag()
  v2.dirtyFlag = v5
end
function Roller:onDelete()
  v2:deleteSamples(self.spec_roller.samples)
end
function Roller:processRollerArea(workArea, dt)
  local v4, v5, v6 = getWorldTranslation(workArea.start)
  local v7, v8, v9 = getWorldTranslation(workArea.width)
  local v10, v11, v12 = getWorldTranslation(workArea.height)
  if self.spec_roller.isGrassRoller then
    local v14, v15 = FSDensityMapUtil.updateGrassRollerArea(v4, v6, v7, v9, v10, v12, not self.spec_roller.isSoilRoller)
  end
  if v3.isSoilRoller then
    v14, v15 = FSDensityMapUtil.updateRollerArea(v4, v6, v7, v9, v10, v12, v3.angle)
  end
  FSDensityMapUtil.eraseTireTrack(v4, v6, v7, v9, v10, v12)
  v15 = self:getLastSpeed()
  if 0.5 >= v15 then
  end
  v3.isWorking = true
  return v13
end
function Roller:updateRollerAIRequirements()
  if self.clearAITerrainDetailRequiredRange ~= nil then
    if not self.spec_roller.usingAIRequirements then
      return
    end
    local v3 = SpecializationUtil.hasSpecialization(SowingMachine, self.specializations)
    if v3 then
      v3 = self:getUseSowingMachineAIRequirements()
      if v3 then
      end
    end
    self:clearAIFruitRequirements()
    self:clearAIFruitProhibitions()
    self:clearAITerrainDetailRequiredRange()
    if not v2 then
      if v1.isGrassRoller and not v1.isSoilRoller then
        self:addAIGroundTypeRequirements(Roller.AI_REQUIRED_GROUND_TYPES_GRASS)
        -- TODO: structure LOP_FORNPREP (pc 52, target 75)
        local v6 = v6:getFruitTypeByIndex(v1.grassFruitTypes[1])
        if v6.terrainDataPlaneId ~= nil then
          self:addAIFruitRequirement(v6.index, 2, v6.cutState + 1)
        end
        -- TODO: structure LOP_FORNLOOP (pc 74, target 53)
      end
      if v1.isSoilRoller then
        self:addAIGroundTypeRequirements(Roller.AI_REQUIRED_GROUND_TYPES)
        local v4 = v4:getFruitTypes()
        for v6, v7 in pairs(...) do
          if not (v7.terrainDataPlaneId ~= nil) then
            continue
          end
          if v1.isGrassRoller and not (v6 ~= FruitType.GRASS) then
            continue
          end
          self:addAIFruitProhibitions(v7.index, 2, 15)
        end
        if v1.isGrassRoller then
          self:addAIGroundTypeRequirements(Roller.AI_REQUIRED_GROUND_TYPES_GRASS)
          -- TODO: structure LOP_FORNPREP (pc 129, target 150)
          v6 = v6:getFruitTypeByIndex(v1.grassFruitTypes[1])
          if v6.terrainDataPlaneId ~= nil then
            self:addAIFruitProhibitions(v6.index, 1, 1)
          end
          -- TODO: structure LOP_FORNLOOP (pc 149, target 130)
        end
      end
    end
  end
end
function Roller:doCheckSpeedLimit(superFunc)
  local v3 = superFunc(self)
  if not v3 then
  end
  return v3
end
function Roller:getDoGroundManipulation(superFunc)
  local v3 = superFunc(self)
  if v3 then
  end
  return v3
end
function Roller:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_roller.isWorking then
    local v4 = self:getWorkDirtMultiplier()
  end
  return multiplier
end
function Roller:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_roller.isWorking then
    local v4 = self:getWorkWearMultiplier()
  end
  return multiplier
end
function Roller:getIsWorkAreaActive(superFunc, workArea)
  if workArea["type"] == WorkAreaType.ROLLER then
    if g_currentMission.time < self.spec_roller.startActivationTime then
      return false
    end
    if v3.onlyActiveWhenLowered then
      local v4 = self:getIsLowered()
      if not v4 then
        return false
      end
    end
  end
  return superFunc(self, workArea)
end
function Roller:onStartWorkAreaProcessing(dt)
  local v3, v4, v5 = localDirectionToWorld(self.spec_roller.directionNode, 0, 0, 1)
  local v7 = MathUtil.getYRotationFromDirection(v3, v5)
  local v8 = v8:getGroundAngleMaxValue()
  local v6 = FSDensityMapUtil.convertToDensityMapAngle(...)
  self.spec_roller.angle = v6
  self.spec_roller.isWorking = false
end
function Roller:onEndWorkAreaProcessing(dt, hasProcessed)
  if self.isClient then
    if self.spec_roller.isWorking then
      -- if v0.spec_roller.isWorkSamplePlaying then goto L39 end
      v4:playSample(self.spec_roller.samples.work)
      self.spec_roller.isWorkSamplePlaying = true
      return
    end
    if v3.isWorkSamplePlaying then
      v4:stopSample(v3.samples.work)
      v3.isWorkSamplePlaying = false
    end
  end
end
function Roller:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  self.spec_roller.startActivationTime = g_currentMission.time + self.spec_roller.startActivationTimeout
end
function Roller:onDeactivate()
  v2:stopSample(self.spec_roller.samples.work)
  self.spec_roller.isWorkSamplePlaying = false
end
function Roller.getDefaultSpeedLimit()
  return 15
end
