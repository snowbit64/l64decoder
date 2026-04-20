-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Cultivator = {AI_REQUIRED_GROUND_TYPES_FLAT = {FieldGroundType.CULTIVATED, FieldGroundType.PLOWED, FieldGroundType.ROLLED_SEEDBED, FieldGroundType.SOWN, FieldGroundType.DIRECT_SOWN, FieldGroundType.PLANTED, FieldGroundType.RIDGE, FieldGroundType.ROLLER_LINES, FieldGroundType.HARVEST_READY, FieldGroundType.HARVEST_READY_OTHER, FieldGroundType.GRASS, FieldGroundType.GRASS_CUT}, AI_REQUIRED_GROUND_TYPES_DEEP = {FieldGroundType.STUBBLE_TILLAGE, FieldGroundType.SEEDBED, FieldGroundType.PLOWED, FieldGroundType.ROLLED_SEEDBED, FieldGroundType.SOWN, FieldGroundType.DIRECT_SOWN, FieldGroundType.PLANTED, FieldGroundType.RIDGE, FieldGroundType.ROLLER_LINES, FieldGroundType.HARVEST_READY, FieldGroundType.HARVEST_READY_OTHER, FieldGroundType.GRASS, FieldGroundType.GRASS_CUT}, AI_OUTPUT_GROUND_TYPES = {FieldGroundType.STUBBLE_TILLAGE, FieldGroundType.CULTIVATED, FieldGroundType.SEEDBED, FieldGroundType.ROLLED_SEEDBED}}
function Cultivator.initSpecialization()
  AIFieldWorker.registerCustomDriveStrategy(function(self)
    local v1 = SpecializationUtil.hasSpecialization(Cultivator, self.specializations)
    if v1 then
      v1 = self:getAIIsVineyardTool()
    end
    return v1, false
  end, AIDriveStrategyVineyardGroundTool)
  v0:addWorkAreaType("cultivator", true)
  Vehicle.xmlSchema:setXMLSpecializationType("Cultivator")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cultivator.directionNode#node", "Direction node")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cultivator.onlyActiveWhenLowered#value", "Only active when lowered", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cultivator#isSubsoiler", "Is subsoiler", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cultivator#useDeepMode", "If true the implement acts like a cultivator. If false it's a discharrow or seedbed combination", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cultivator#isPowerHarrow", "If this is set the cultivator works standalone like a cultivator, but as soon as a sowing machine is attached to it, it's only using the sowing machine", false)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.cultivator.sounds", "work")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Cultivator.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(WorkArea, v0)
end
function Cultivator.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processCultivatorArea", Cultivator.processCultivatorArea)
  SpecializationUtil.registerFunction(vehicleType, "processVineCultivatorArea", Cultivator.processVineCultivatorArea)
  SpecializationUtil.registerFunction(vehicleType, "getCultivatorLimitToField", Cultivator.getCultivatorLimitToField)
  SpecializationUtil.registerFunction(vehicleType, "getUseCultivatorAIRequirements", Cultivator.getUseCultivatorAIRequirements)
  SpecializationUtil.registerFunction(vehicleType, "updateCultivatorAIRequirements", Cultivator.updateCultivatorAIRequirements)
  SpecializationUtil.registerFunction(vehicleType, "updateCultivatorEnabledState", Cultivator.updateCultivatorEnabledState)
  SpecializationUtil.registerFunction(vehicleType, "getIsCultivationEnabled", Cultivator.getIsCultivationEnabled)
end
function Cultivator.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Cultivator.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Cultivator.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Cultivator.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", Cultivator.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", Cultivator.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIImplementUseVineSegment", Cultivator.getAIImplementUseVineSegment)
end
function Cultivator.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Cultivator)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Cultivator)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", Cultivator)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Cultivator)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Cultivator)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Cultivator)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", Cultivator)
end
function Cultivator:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cultivator.directionNode#index", "vehicle.cultivator.directionNode#node")
  local v2 = self:getGroundReferenceNodeFromIndex(1)
  if v2 == nil then
    print("Warning: No ground reference nodes in  " .. self.configFileName)
  end
  if self.isClient then
    self.spec_cultivator.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.cultivator.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_cultivator.samples.work = v4
    self.spec_cultivator.isWorkSamplePlaying = false
  end
  local v3 = v3:getValue("vehicle.cultivator.directionNode#node", self.components[1].node, self.components, self.i3dMappings)
  v2.directionNode = v3
  v3 = v3:getValue("vehicle.cultivator.onlyActiveWhenLowered#value", true)
  v2.onlyActiveWhenLowered = v3
  v3 = v3:getValue("vehicle.cultivator#isSubsoiler", false)
  v2.isSubsoiler = v3
  v3 = v3:getValue("vehicle.cultivator#isPowerHarrow", false)
  v2.isPowerHarrow = v3
  v3 = v3:getValue("vehicle.cultivator#useDeepMode", true)
  v2.useDeepMode = v3
  self:updateCultivatorAIRequirements()
  v2.isEnabled = true
  v2.startActivationTimeout = 2000
  v2.startActivationTime = 0
  v2.hasGroundContact = false
  v2.isWorking = false
  v2.limitToField = true
  v2.workAreaParameters = {}
  v4 = self:getCultivatorLimitToField()
  v2.workAreaParameters.limitToField = v4
  v2.workAreaParameters.angle = 0
  v2.workAreaParameters.lastChangedArea = 0
  v2.workAreaParameters.lastStatsArea = 0
  v2.workAreaParameters.lastTotalArea = 0
end
function Cultivator:onDelete()
  v2:deleteSamples(self.spec_cultivator.samples)
end
function Cultivator:processCultivatorArea(workArea, dt)
  local v6, v7, v8 = getWorldTranslation(workArea.start)
  local v9, v10, v11 = getWorldTranslation(workArea.width)
  local v12, v13, v14 = getWorldTranslation(workArea.height)
  if self.spec_cultivator.isEnabled then
    if self.spec_cultivator.useDeepMode then
      local v16, v17 = FSDensityMapUtil.updateCultivatorArea(v6, v8, v9, v11, v12, v14, not self.spec_cultivator.workAreaParameters.limitToField, self.spec_cultivator.workAreaParameters.limitFruitDestructionToField, self.spec_cultivator.workAreaParameters.angle, nil)
      v16 = FSDensityMapUtil.updateVineCultivatorArea(v6, v8, v9, v11, v12, v14, true)
    else
      v16, v17 = FSDensityMapUtil.updateDiscHarrowArea(v6, v8, v9, v11, v12, v14, not self.spec_cultivator.workAreaParameters.limitToField, self.spec_cultivator.workAreaParameters.limitFruitDestructionToField, self.spec_cultivator.workAreaParameters.angle, nil)
      v16 = FSDensityMapUtil.updateVineCultivatorArea(v6, v8, v9, v11, v12, v14, true)
    end
    v15.lastChangedArea = v15.lastChangedArea + v4
    v15.lastStatsArea = v15.lastStatsArea + v4
    v15.lastTotalArea = v15.lastTotalArea + v5
  end
  if v3.isSubsoiler then
    FSDensityMapUtil.updateSubsoilerArea(v6, v8, v9, v11, v12, v14)
  end
  FSDensityMapUtil.eraseTireTrack(v6, v8, v9, v11, v12, v14)
  v16 = self:getLastSpeed()
  if 0.5 >= v16 then
  end
  v3.isWorking = true
  return v4, v5
end
function Cultivator:processVineCultivatorArea(v1, v2)
  if self.spec_cultivator.isEnabled then
    local v4, v5, v6 = getWorldTranslation(v1.start)
    local v7, v8, v9 = getWorldTranslation(v1.width)
    local v10, v11, v12 = getWorldTranslation(v1.height)
    FSDensityMapUtil.updateVineCultivatorArea(v4, v6, v7, v9, v10, v12, false)
  end
  return 0, 0
end
function Cultivator:getCultivatorLimitToField()
  return self.spec_cultivator.limitToField
end
function Cultivator.getUseCultivatorAIRequirements(v0)
  return true
end
function Cultivator:updateCultivatorAIRequirements()
  local v1 = self:getUseCultivatorAIRequirements()
  if v1 and self.addAITerrainDetailRequiredRange ~= nil then
    local v4 = v4:getChildVehicles()
    -- TODO: structure LOP_FORNPREP (pc 19, target 54)
    local v8 = SpecializationUtil.hasSpecialization(SowingMachine, v4[1].specializations)
    if v8 then
      v8 = v8:getAIRequiresTurnOn()
      if not v8 then
        v8 = v8:getUseSowingMachineAIRequirements()
        -- if not v8 then goto L40 end
      end
    end
    v8 = SpecializationUtil.hasSpecialization(Roller, v4[v7].specializations)
    if v8 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 53, target 20)
    if not v1 then
      if self.spec_cultivator.useDeepMode then
        self:addAIGroundTypeRequirements(Cultivator.AI_REQUIRED_GROUND_TYPES_DEEP, v2, v3)
        -- goto L83  (LOP_JUMP +13)
      end
      self:addAIGroundTypeRequirements(Cultivator.AI_REQUIRED_GROUND_TYPES_FLAT, v2, v3)
    else
      self:clearAITerrainDetailRequiredRange()
    end
    local v5 = self:getAIIsVineyardTool()
    if v5 then
      self:clearAIFruitRequirements()
      local v6 = v6:getFruitTypes()
      for v8, v9 in pairs(...) do
        if not (v9.terrainDataPlaneId ~= nil) then
          continue
        end
        if not (v9.cultivationStates ~= nil) then
          continue
        end
        for v13, v14 in ipairs(v9.cultivationStates) do
          self:addAIFruitRequirement(v9.index, v14, v14)
        end
      end
    end
  end
end
function Cultivator:updateCultivatorEnabledState()
  if self.spec_cultivator.isPowerHarrow then
    local vehicles = self:getChildVehicles()
    -- TODO: structure LOP_FORNPREP (pc 11, target 48)
    local v6 = SpecializationUtil.hasSpecialization(SowingMachine, vehicles[1].specializations)
    if v6 then
      self.spec_cultivator.isEnabled = false
      return
    end
    -- TODO: structure LOP_FORNLOOP (pc 25, target 12)
  else
    vehicles = SpecializationUtil.hasSpecialization(SowingMachine, self.specializations)
    if vehicles then
      vehicles = self:getUseSowingMachineAIRequirements()
      if vehicles and self.spec_sowingMachine.useDirectPlanting then
        self.spec_cultivator.isEnabled = false
        return
      end
    end
  end
  v1.isEnabled = true
end
function Cultivator:getIsCultivationEnabled()
  return self.spec_cultivator.isEnabled
end
function Cultivator:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    v2 = self:getIsImplementChainLowered()
  end
  return v2
end
function Cultivator:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_cultivator.isWorking then
    local v6 = self:getWorkDirtMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function Cultivator:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_cultivator.isWorking then
    local v6 = self:getWorkWearMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function Cultivator.loadWorkAreaFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if v2["type"] == WorkAreaType.DEFAULT then
    v2["type"] = WorkAreaType.CULTIVATOR
  end
  return v5
end
function Cultivator:getIsWorkAreaActive(superFunc, workArea)
  if workArea["type"] == WorkAreaType.CULTIVATOR then
    if g_currentMission.time < self.spec_cultivator.startActivationTime then
      return false
    end
    if v3.onlyActiveWhenLowered and self.getIsLowered ~= nil then
      local v4 = self:getIsLowered(false)
      if not v4 then
        return false
      end
    end
  end
  return superFunc(self, workArea)
end
function Cultivator.getAIImplementUseVineSegment(v0, v1, v2, v3, v4)
  local v5, v6, v7, v8, v9, v10 = v2:getSegmentSideArea(v3, v4)
  local v11, v12 = AIVehicleUtil.getAIAreaOfVehicle(v0, v5, v6, v7, v8, v9, v10)
  if 0 < v12 then
    if 0.01 >= v11 / v12 then
    end
    return true
  end
  return false
end
function Cultivator:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  self.spec_cultivator.startActivationTime = g_currentMission.time + self.spec_cultivator.startActivationTimeout
end
function Cultivator:onDeactivate()
  if self.isClient then
    v2:stopSamples(self.spec_cultivator.samples)
    self.spec_cultivator.isWorkSamplePlaying = false
  end
end
function Cultivator:onStartWorkAreaProcessing(dt)
  self.spec_cultivator.isWorking = false
  local v3 = self:getCultivatorLimitToField()
  local v8 = self:getOwner()
  local v5 = v5:getHasPlayerPermission(...)
  if not v5 then
  end
  local v5, v6, v7 = localDirectionToWorld(v2.directionNode, 0, 0, 1)
  local v9 = MathUtil.getYRotationFromDirection(v5, v7)
  local v10 = v10:getGroundAngleMaxValue()
  v8 = FSDensityMapUtil.convertToDensityMapAngle(...)
  v2.workAreaParameters.limitToField = v3
  v2.workAreaParameters.limitFruitDestructionToField = v4
  v2.workAreaParameters.angle = v8
  v2.workAreaParameters.lastChangedArea = 0
  v2.workAreaParameters.lastStatsArea = 0
  v2.workAreaParameters.lastTotalArea = 0
end
function Cultivator:onEndWorkAreaProcessing(dt)
  if self.isServer then
    local v3 = self:getLastTouchedFarmlandFarmId()
    if 0 < self.spec_cultivator.workAreaParameters.lastStatsArea then
      local v7 = v7:getFruitPixelsToSqm()
      local v5 = MathUtil.areaToHa(...)
      v6:updateFarmStats(v3, "cultivatedHectares", v5)
      self:updateLastWorkedArea(self.spec_cultivator.workAreaParameters.lastStatsArea)
    end
    if v2.isWorking then
      v5:updateFarmStats(v3, "cultivatedTime", dt / 60000)
    end
  end
  if self.isClient then
    if v2.isWorking then
      -- if v2.isWorkSamplePlaying then goto L84 end
      v3:playSample(v2.samples.work)
      v2.isWorkSamplePlaying = true
      return
    end
    if v2.isWorkSamplePlaying then
      v3:stopSample(v2.samples.work)
      v2.isWorkSamplePlaying = false
    end
  end
end
function Cultivator:onStateChange(state, data)
  if state ~= Vehicle.STATE_CHANGE_ATTACH then
    -- if v1 ~= Vehicle.STATE_CHANGE_DETACH then goto L14 end
  end
  self:updateCultivatorAIRequirements()
  self:updateCultivatorEnabledState()
  if self.isServer then
    if state ~= Vehicle.STATE_CHANGE_TURN_ON then
      -- if v1 ~= Vehicle.STATE_CHANGE_TURN_OFF then goto L95 end
    end
    if self.spec_cultivator.isPowerHarrow then
      if data == self and self.getAttachedImplements ~= nil then
        local v5 = self:getAttachedImplements()
        for v7, v8 in pairs(...) do
          if not (v8.object ~= nil) then
            continue
          end
          if state == Vehicle.STATE_CHANGE_TURN_ON then
            v8.object:setIsTurnedOn(true)
          else
            local v10 = v8.object:getIsTurnedOn()
            if not v10 then
              continue
            end
            v8.object:setIsTurnedOn(false)
          end
        end
        return
      end
      if data.getAttacherVehicle ~= nil then
        v4 = data:getAttacherVehicle()
        if v4 ~= nil and v4 == self then
          if state == Vehicle.STATE_CHANGE_TURN_ON then
            self:setIsTurnedOn(true)
            return
          end
          v5 = self:getIsTurnedOn()
          if v5 then
            self:setIsTurnedOn(false)
          end
        end
      end
    end
  end
end
function Cultivator.getDefaultSpeedLimit()
  return 15
end
