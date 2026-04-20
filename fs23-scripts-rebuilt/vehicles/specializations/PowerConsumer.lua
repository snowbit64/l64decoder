-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PowerConsumer = {}
function PowerConsumer.initSpecialization()
  local v3 = v3:getText("configuration_powerConsumer")
  v0:addConfigurationType("powerConsumer", v3, "powerConsumer", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  v0:addSpecType("neededPower", "shopListAttributeIconPowerReq", PowerConsumer.loadSpecValueNeededPower, PowerConsumer.getSpecValueNeededPower, "vehicle")
  Vehicle.xmlSchema:setXMLSpecializationType("PowerConsumer")
  PowerConsumer.registerPowerConsumerXMLPaths(Vehicle.xmlSchema, "vehicle.powerConsumer")
  PowerConsumer.registerPowerConsumerXMLPaths(Vehicle.xmlSchema, "vehicle.powerConsumer.powerConsumerConfigurations.powerConsumerConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.powerConsumer.powerConsumerConfigurations.powerConsumerConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.storeData.specs.neededPower", "Needed power")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.storeData.specs.neededPower#maxPower", "Max. recommended power")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.powerConsumer.powerConsumerConfigurations.powerConsumerConfiguration(?)#neededPower", "Needed power")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function PowerConsumer:registerPowerConsumerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#forceNode", "Force node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#forceDirNode", "Force node", "Force node")
  self:register(XMLValueType.FLOAT, v1 .. "#forceFactor", "Force factor", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#maxForce", "Max. force (kN)", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#forceDir", "Force direction", 1)
  self:register(XMLValueType.BOOL, v1 .. "#useTurnOnState", "While vehicle is turned on the vehicle consumes the pto power", true)
  self:register(XMLValueType.FLOAT, v1 .. "#turnOnPeakPowerMultiplier", "While turning the tool on a short peak power with this multiplier is consumed", 3)
  self:register(XMLValueType.TIME, v1 .. "#turnOnPeakPowerDuration", "Duration for peak power while turning on (sec)", 2)
  self:register(XMLValueType.L10N_STRING, v1 .. "#turnOnNotAllowedWarning", "Turn on not allowed text", "warning_insufficientPowerOutput")
  self:register(XMLValueType.FLOAT, v1 .. "#neededMaxPtoPower", "Needed max. pto power", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#neededMinPtoPower", "Needed min. pto power", "neededMaxPtoPower")
  self:register(XMLValueType.FLOAT, v1 .. "#ptoRpm", "Pto rpm", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#virtualPowerMultiplicator", "Virtual multiplicator for pto power to increased the motor load without reducing the available power for driving", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".speedLimitModifier(?)#offset", "Speed limit offset to apply")
  self:register(XMLValueType.FLOAT, v1 .. ".speedLimitModifier(?)#minPowerHp", "Min. power in HP of root motor", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".speedLimitModifier(?)#maxPowerHp", "Max. power in HP of root motor", 0)
end
function PowerConsumer.prerequisitesPresent(specializations)
  return true
end
function PowerConsumer.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadPowerSetup", PowerConsumer.loadPowerSetup)
  SpecializationUtil.registerFunction(vehicleType, "getPtoRpm", PowerConsumer.getPtoRpm)
  SpecializationUtil.registerFunction(vehicleType, "getDoConsumePtoPower", PowerConsumer.getDoConsumePtoPower)
  SpecializationUtil.registerFunction(vehicleType, "getPowerMultiplier", PowerConsumer.getPowerMultiplier)
  SpecializationUtil.registerFunction(vehicleType, "getConsumedPtoTorque", PowerConsumer.getConsumedPtoTorque)
  SpecializationUtil.registerFunction(vehicleType, "getConsumingLoad", PowerConsumer.getConsumingLoad)
end
function PowerConsumer.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOn", PowerConsumer.getCanBeTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOnAll", PowerConsumer.getCanBeTurnedOnAll)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getTurnedOnNotAllowedWarning", PowerConsumer.getTurnedOnNotAllowedWarning)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getRawSpeedLimit", PowerConsumer.getRawSpeedLimit)
end
function PowerConsumer.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", PowerConsumer)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", PowerConsumer)
  SpecializationUtil.registerEventListener(vehicleType, "onPostDetach", PowerConsumer)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", PowerConsumer)
end
function PowerConsumer:onLoad(savegame)
  local foldingConfigurationId = Utils.getNoNil(self.configurations.powerConsumer, 1)
  local v4 = string.format("vehicle.powerConsumer.powerConsumerConfigurations.powerConsumerConfiguration(%d)", foldingConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.powerConsumer.powerConsumerConfigurations.powerConsumerConfiguration", foldingConfigurationId, self.components, self)
  local v5 = v5:hasProperty(v4)
  if not v5 then
  end
  v5 = v5:getValue(v4 .. "#forceNode", nil, self.components, self.i3dMappings)
  v2.forceNode = v5
  v5 = v5:getValue(v4 .. "#forceDirNode", v2.forceNode, self.components, self.i3dMappings)
  v2.forceDirNode = v5
  v5 = v5:getValue(v4 .. "#forceFactor", 1)
  v2.forceFactor = v5
  v5 = v5:getValue(v4 .. "#maxForce", 0)
  v2.maxForce = v5
  v5 = v5:getValue(v4 .. "#forceDir", 1)
  v2.forceDir = v5
  v5 = v5:getValue(v4 .. "#useTurnOnState", true)
  v2.useTurnOnState = v5
  local v6 = v6:getValue(v4 .. "#turnOnNotAllowedWarning", "warning_insufficientPowerOutput", self.customEnvironment)
  v5 = string.format(v6, self.typeDesc)
  v2.turnOnNotAllowedWarning = v5
  self:loadPowerSetup(self.xmlFile, v4)
  v2.speedLimitModifier = {}
  v2.sourceMotorPeakPower = math.huge
  v5 = v5:getValue(v4 .. "#turnOnPeakPowerMultiplier", 3)
  v2.turnOnPeakPowerMultiplier = v5
  v5 = v5:getValue(v4 .. "#turnOnPeakPowerDuration", 2.5)
  v2.turnOnPeakPowerDuration = v5
  v2.turnOnPeakPowerTimer = -1
  v5:iterate(v4 .. ".speedLimitModifier", function(self, savegame)
    local foldingConfigurationId = foldingConfigurationId:getValue(savegame .. "#offset")
    if {offset = foldingConfigurationId}.offset ~= nil then
      local v4 = v4:getValue(savegame .. "#minPowerHp", 0)
      v4 = v4:getValue(savegame .. "#maxPowerHp", 0)
      table.insert(u1.speedLimitModifier, {offset = foldingConfigurationId, minPowerKw = v4 * 0.735499, maxPowerKw = v4 * 0.735499})
      return
    end
    Logging.xmlWarning(u0.xmlFile, "Invalid offset found for '%s'", savegame)
  end)
  if #v2.speedLimitModifier == 0 then
    SpecializationUtil.removeEventListener(self, "onPostDetach", PowerConsumer)
  end
end
function PowerConsumer:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isActive then
    if self.spec_powerConsumer.forceNode ~= nil and self.movingDirection == self.spec_powerConsumer.forceDir then
      local multiplier = self:getPowerMultiplier()
      if multiplier ~= 0 then
        local v10 = self:getTotalMass(false)
        local v11 = math.min(self.spec_powerConsumer.forceFactor * self.lastSpeedReal * 1000 * v10 / dt / 1000, self.spec_powerConsumer.maxForce)
        local v9, v10, v11 = localDirectionToWorld(self.spec_powerConsumer.forceDirNode, 0, 0, -v11 * self.movingDirection * multiplier)
        local v12, v13, v14 = getCenterOfMass(self.spec_powerConsumer.forceNode)
        addForce(self.spec_powerConsumer.forceNode, v9, v10, v11, v12, v13, v14, true)
        if VehicleDebug.state ~= VehicleDebug.DEBUG_PHYSICS then
          -- if VehicleDebug.state ~= VehicleDebug.DEBUG_TUNING then goto L104 end
        end
        if self.isActiveForInputIgnoreSelectionIgnoreAI then
          local v15 = string.format("frictionForce=%.2f maxForce=%.2f -> force=%.2f", v7, v5.maxForce, v8)
          local v19 = getCorrectTextSize(0.02)
          renderText(0.7, 0.85, v19, v15)
        end
      end
    end
    if 0 < v5.turnOnPeakPowerTimer then
      v5.turnOnPeakPowerTimer = v5.turnOnPeakPowerTimer - dt
    end
  end
end
function PowerConsumer:loadPowerSetup(xmlFile, baseKey)
  local v7 = string.format("%s#neededMinPtoPower and %s#neededMaxPtoPower", baseKey, baseKey)
  XMLUtil.checkDeprecatedXMLElements(...)
  local v4 = xmlFile:getValue(baseKey .. "#neededMaxPtoPower", 0)
  self.spec_powerConsumer.neededMaxPtoPower = v4
  v4 = xmlFile:getValue(baseKey .. "#neededMinPtoPower", self.spec_powerConsumer.neededMaxPtoPower)
  self.spec_powerConsumer.neededMinPtoPower = v4
  if self.spec_powerConsumer.neededMaxPtoPower < self.spec_powerConsumer.neededMinPtoPower then
    Logging.xmlWarning(self.xmlFile, "'%s#neededMaxPtoPower' is smaller than '%s#neededMinPtoPower'", baseKey, baseKey)
  end
  v4 = xmlFile:getValue(baseKey .. "#ptoRpm", 0)
  v3.ptoRpm = v4
  v4 = xmlFile:getValue(baseKey .. "#virtualPowerMultiplicator", 1)
  v3.virtualPowerMultiplicator = v4
end
function PowerConsumer:getPtoRpm()
  local v1 = self:getDoConsumePtoPower()
  if v1 then
    return self.spec_powerConsumer.ptoRpm
  end
  return 0
end
function PowerConsumer:getDoConsumePtoPower()
  if self.spec_powerConsumer.useTurnOnState and self.getIsTurnedOn ~= nil then
    local v1 = self:getIsTurnedOn()
  end
  return v1
end
function PowerConsumer.getPowerMultiplier(v0)
  return 1
end
function PowerConsumer:getConsumedPtoTorque(expected, ignoreTurnOnPeak)
  local v3 = self:getDoConsumePtoPower()
  if not v3 then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L70
    -- if not v1 then goto L70 end
  end
  if 0.001 < self.spec_powerConsumer.ptoRpm then
    local v5, v6 = self:getConsumingLoad()
    if 0 < v6 then
    else
    end
    local v10 = math.min(v3.turnOnPeakPowerTimer / v3.turnOnPeakPowerDuration, 1)
    local v9 = math.max(v10, 0)
    local v7 = math.max(v9 * v3.turnOnPeakPowerMultiplier, 1)
    if ignoreTurnOnPeak == true then
    end
    return (v3.neededMinPtoPower + v5 * (v3.neededMaxPtoPower - v3.neededMinPtoPower)) / v4 * math.pi / 30, v3.virtualPowerMultiplicator * v7
  end
  return 0, 1
end
function PowerConsumer.getConsumingLoad(v0)
  return 0, 0
end
function PowerConsumer:getCanBeTurnedOn(superFunc)
  if self.rootVehicle ~= nil and self.rootVehicle.getMotor ~= nil then
    local v3 = self.rootVehicle:getMotor()
    local v4, v5 = self:getConsumedPtoTorque(true)
    local v6, v7 = PowerConsumer.getTotalConsumedPtoTorque(self.rootVehicle, self)
    local v8 = v3:getPtoMotorRpmRatio()
    if 0 < (v4 + v6) / v8 then
      local v10 = v3:getPeakTorque()
      if 0.9 * v10 < (v4 + v6) / v8 then
        v8 = self:getIsTurnedOn()
        if not v8 then
          return false, true
        end
      end
    end
  end
  if superFunc ~= nil then
    v3 = superFunc(self)
    return v3
  end
  return true, false
end
function PowerConsumer:getCanBeTurnedOnAll(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  if self.rootVehicle ~= nil and self.rootVehicle.getMotor ~= nil then
    local v3 = self.rootVehicle:getMotor()
    local v4, v5 = PowerConsumer.getTotalConsumedPtoTorque(self.rootVehicle, nil, true)
    local v6 = v3:getPtoMotorRpmRatio()
    if 0 < v4 / v6 then
      local v8 = v3:getPeakTorque()
      if 0.9 * v8 < v4 / v6 then
        v6 = self:getIsTurnedOn()
        if not v6 then
          return false, self.spec_powerConsumer.turnOnNotAllowedWarning
        end
      end
    end
  end
  return true, false
end
function PowerConsumer:getTurnedOnNotAllowedWarning(superFunc)
  local v3, v4 = PowerConsumer.getCanBeTurnedOn(self)
  if v4 then
    return self.spec_powerConsumer.turnOnNotAllowedWarning
  end
  return superFunc(self)
end
function PowerConsumer:getRawSpeedLimit(superFunc)
  local rawSpeedLimit = superFunc(self)
  -- TODO: structure LOP_FORNPREP (pc 10, target 31)
  if self.spec_powerConsumer.speedLimitModifier[#self.spec_powerConsumer.speedLimitModifier].minPowerKw <= self.spec_powerConsumer.sourceMotorPeakPower and self.spec_powerConsumer.sourceMotorPeakPower <= self.spec_powerConsumer.speedLimitModifier[#self.spec_powerConsumer.speedLimitModifier].maxPowerKw then
    return rawSpeedLimit + self.spec_powerConsumer.speedLimitModifier[#self.spec_powerConsumer.speedLimitModifier].offset
  end
  -- TODO: structure LOP_FORNLOOP (pc 30, target 11)
  return rawSpeedLimit
end
function PowerConsumer:onPostDetach()
  self.spec_powerConsumer.sourceMotorPeakPower = math.huge
end
function PowerConsumer:onTurnedOn()
  self.spec_powerConsumer.turnOnPeakPowerTimer = self.spec_powerConsumer.turnOnPeakPowerDuration * 1.5
  if self.rootVehicle ~= nil and self.rootVehicle.getMotor ~= nil then
    local v3 = self.rootVehicle:getMotor()
    self.spec_powerConsumer.sourceMotorPeakPower = v3.peakMotorPower
  end
end
function PowerConsumer:getTotalConsumedPtoTorque(excludeVehicle, expected, ignoreTurnOnPeak)
  if self ~= excludeVehicle and self.getConsumedPtoTorque ~= nil then
    local v6, v7 = self:getConsumedPtoTorque(expected, ignoreTurnOnPeak)
  end
  if self.getAttachedImplements ~= nil then
    v6 = self:getAttachedImplements()
    for v10, v11 in pairs(v6) do
      local v12, v13 = PowerConsumer.getTotalConsumedPtoTorque(v11.object, excludeVehicle, expected, ignoreTurnOnPeak)
      if v4 + v12 == 0 then
      else
      end
    end
  end
  return v4, v5
end
function PowerConsumer:getMaxPtoRpm()
  if self.getPtoRpm ~= nil then
    local v2 = self:getPtoRpm()
  end
  if self.getAttachedImplements ~= nil then
    v2 = self:getAttachedImplements()
    for v6, v7 in pairs(v2) do
      local v10 = PowerConsumer.getMaxPtoRpm(v7.object)
      local v8 = math.max(...)
    end
  end
  return v1
end
function PowerConsumer.consoleSetPowerConsumer(v0, v1, v2, v3, v4, v5, v6)
  if v1 == nil then
    return "No arguments given! Usage: gsPowerConsumerSet <neededMinPtoPower> <neededMaxPtoPower> <forceFactor> <maxForce> <forceDir> <ptoRpm>"
  end
  if g_currentMission ~= nil and g_currentMission.controlledVehicle ~= nil then
    local v8 = v8:getSelectedImplement()
    if v8 ~= nil then
      local v10 = v10:getSelectedImplement()
      if v10.object.spec_powerConsumer ~= nil then
        v8 = v8:getSelectedImplement()
      end
    end
  end
  if v7 ~= nil then
    local v9 = Utils.getNoNil(v1, v7.spec_powerConsumer.neededMinPtoPower)
    v7.spec_powerConsumer.neededMinPtoPower = v9
    v9 = Utils.getNoNil(v2, v7.spec_powerConsumer.neededMaxPtoPower)
    v7.spec_powerConsumer.neededMaxPtoPower = v9
    v9 = Utils.getNoNil(v3, v7.spec_powerConsumer.forceFactor)
    v7.spec_powerConsumer.forceFactor = v9
    v9 = Utils.getNoNil(v4, v7.spec_powerConsumer.maxForce)
    v7.spec_powerConsumer.maxForce = v9
    v9 = Utils.getNoNil(v5, v7.spec_powerConsumer.forceDir)
    v7.spec_powerConsumer.forceDir = v9
    v9 = Utils.getNoNil(v6, v7.spec_powerConsumer.ptoRpm)
    v7.spec_powerConsumer.ptoRpm = v9
    for v11, v12 in pairs(g_currentMission.vehicles) do
      if not (v12.configFileName == v7.configFileName) then
        continue
      end
      v12.spec_powerConsumer.neededMinPtoPower = v7.spec_powerConsumer.neededMinPtoPower
      v12.spec_powerConsumer.neededMaxPtoPower = v7.spec_powerConsumer.neededMaxPtoPower
      v12.spec_powerConsumer.forceFactor = v7.spec_powerConsumer.forceFactor
      v12.spec_powerConsumer.maxForce = v7.spec_powerConsumer.maxForce
      v12.spec_powerConsumer.forceDir = v7.spec_powerConsumer.forceDir
      v12.spec_powerConsumer.ptoRpm = v7.spec_powerConsumer.ptoRpm
    end
    return
  end
  return "No vehicle with powerConsumer specialization selected"
end
addConsoleCommand("gsPowerConsumerSet", "Sets properties of the powerConsumer specialization", "consoleSetPowerConsumer", PowerConsumer)
function PowerConsumer:loadSpecValueNeededPower(v1, v2)
  local v4 = self:getValue("vehicle.storeData.specs.neededPower")
  v4 = self:getValue("vehicle.storeData.specs.neededPower#maxPower")
  while true do
    v5 = string.format("vehicle.powerConsumer.powerConsumerConfigurations.powerConsumerConfiguration(%d)", v4)
    v6 = self:hasProperty(v5)
    if not v6 then
      break
    end
    v8 = self:getValue(v5 .. "#neededPower")
    v3.config[v4 + 1] = v8
  end
  return v3
end
function PowerConsumer:getSpecValueNeededPower(v1, v2, v3, v4, v5)
  if self.specs.neededPower ~= nil then
    for v11, v12 in pairs(self.specs.neededPower.config) do
      local v13 = math.max(v6, v12)
    end
    if v6 == 0 then
      return nil
    end
    if v7 == nil then
      v8, v9 = v8:getPower(v6)
      v11 = v11:getText("shop_neededPowerValue")
      v12 = MathUtil.round(v9)
      v13 = MathUtil.round(v8)
      v10 = string.format(...)
      return v10
    end
    v8, v9 = v8:getPower(v6)
    v10, v11 = v10:getPower(v7)
    v13 = v13:getText("shop_neededPowerValueMinMax")
    local v14 = MathUtil.round(v8)
    local v15 = MathUtil.round(v10)
    v12 = string.format(...)
    return v12
  end
  return nil
end
