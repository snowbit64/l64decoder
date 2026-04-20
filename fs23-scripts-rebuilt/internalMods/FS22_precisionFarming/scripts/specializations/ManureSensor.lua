-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ManureSensor = {MOD_NAME = g_currentModName, SPEC_NAME = g_currentModName .. ".manureSensor", MAX_NITROGEN_OFFSET_PCT = 0.4, CHANGE_TIME = 120000}
function ManureSensor.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Sprayer, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, v0)
  end
  return v1
end
function ManureSensor.initSpecialization()
  local v3 = v3:getText("configuration_manureSensor")
  v0:addConfigurationType("manureSensor", v3, "manureSensor", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("ManureSensor")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.manureSensor.manureSensorConfigurations.manureSensorConfiguration(?).linkNode#node", "Sensor Link Node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.manureSensor.manureSensorConfigurations.manureSensorConfiguration(?).linkNode#type", "Sensor Type (DEFAULT, LARGE, SMALL or STANDALONE)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function ManureSensor.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "linkManureSensor", ManureSensor.linkManureSensor)
  SpecializationUtil.registerFunction(vehicleType, "getManureSensorNitrogenOffset", ManureSensor.getManureSensorNitrogenOffset)
end
function ManureSensor.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCurrentNitrogenLevelOffset", ManureSensor.getCurrentNitrogenLevelOffset)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCurrentNitrogenUsageLevelOffset", ManureSensor.getCurrentNitrogenUsageLevelOffset)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsUsingExactNitrogenAmount", ManureSensor.getIsUsingExactNitrogenAmount)
end
function ManureSensor.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ManureSensor)
end
function ManureSensor:onLoad(savegame)
  self.spec_manureSensor = self["spec_" .. ManureSensor.SPEC_NAME]
  local v3 = math.random()
  self.spec_manureSensor.currentCurveOffset = v3
  self.spec_manureSensor.sensorRequired = false
  v3 = self:getFillUnits()
  -- TODO: structure LOP_FORNPREP (pc 25, target 45)
  if not self.spec_manureSensor.sensorRequired then
    local v7 = self:getFillUnitAllowsFillType(1, FillType.LIQUIDMANURE)
    if not v7 then
      v7 = self:getFillUnitAllowsFillType(1, FillType.DIGESTATE)
    end
  end
  v2.sensorRequired = v7
  -- TODO: structure LOP_FORNLOOP (pc 44, target 26)
  v2.sensorAvailable = false
  if self.configurations.manureSensor ~= nil then
    local v5 = string.format("vehicle.manureSensor.manureSensorConfigurations.manureSensorConfiguration(%d)", self.configurations.manureSensor - 1)
    local v6 = v6:getValue(v5 .. ".linkNode#node", nil, self.components, self.i3dMappings)
    if v6 ~= nil then
      v7 = v7:getValue(v5 .. ".linkNode#type", "DEFAULT")
      {linkNodes = {}}.linkNodes[1] = {linkNode = v6, typeName = v7}
      self:linkManureSensor({linkNodes = {}})
    end
    if 1 < v4 and g_precisionFarming ~= nil then
      v7 = v7:getManureSensorLinkageData(self.configFileName)
      if v7 ~= nil then
        self:linkManureSensor(v7)
      end
    end
  end
end
function ManureSensor:linkManureSensor(linkData)
  -- TODO: structure LOP_FORNPREP (pc 5, target 103)
  if linkData.linkNodes[1].linkNode == nil and linkData.linkNodes[1].nodeName ~= nil and self.i3dMappings[linkData.linkNodes[1].nodeName] ~= nil then
  end
  if v6 ~= nil then
    local v7 = v7:getClonedManureSensorNode(v5.typeName)
    if v7 ~= nil then
      link(v6, v7.node)
      if v5.translation ~= nil then
        setTranslation(v7.node, v5.translation[1], v5.translation[2], v5.translation[3])
      end
      if v5.rotation ~= nil then
        setRotation(v7.node, v5.rotation[1], v5.rotation[2], v5.rotation[3])
      end
      if v5.scale ~= nil then
        setScale(v7.node, v5.scale[1], v5.scale[2], v5.scale[3])
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 102, target 6)
  self.spec_manureSensor.sensorAvailable = true
end
function ManureSensor:getManureSensorNitrogenOffset(lastChangeLevels)
  local v7 = math.sin((g_time % ManureSensor.CHANGE_TIME / ManureSensor.CHANGE_TIME + self.spec_manureSensor.currentCurveOffset) * math.pi * 2)
  local v8 = math.sin((g_time % ManureSensor.CHANGE_TIME / ManureSensor.CHANGE_TIME + self.spec_manureSensor.currentCurveOffset) * math.pi * 10)
  v7 = math.sin((g_time % ManureSensor.CHANGE_TIME / ManureSensor.CHANGE_TIME + self.spec_manureSensor.currentCurveOffset) * math.pi * 20)
  local v6 = MathUtil.sign((v7 * 0.75 + v8 * 0.15 + v7 * 0.15) * lastChangeLevels * ManureSensor.MAX_NITROGEN_OFFSET_PCT)
  v8 = math.abs((v7 * 0.75 + v8 * 0.15 + v7 * 0.15) * lastChangeLevels * ManureSensor.MAX_NITROGEN_OFFSET_PCT)
  v7 = MathUtil.round(...)
  return v7 * v6
end
function ManureSensor:getCurrentNitrogenLevelOffset(superFunc, lastChangeLevels)
  if not self.spec_manureSensor.sensorRequired then
    return superFunc(self)
  end
  if not self.spec_manureSensor.sensorAvailable then
    v3 = self:getManureSensorNitrogenOffset(lastChangeLevels)
    return v3
  end
  return 0
end
function ManureSensor:getCurrentNitrogenUsageLevelOffset(superFunc, lastChangeLevels)
  if not self.spec_manureSensor.sensorRequired then
    return superFunc(self)
  end
  if self.spec_manureSensor.sensorAvailable then
    v3 = self:getManureSensorNitrogenOffset(lastChangeLevels)
    return v3
  end
  return 0
end
function ManureSensor:getIsUsingExactNitrogenAmount(superFunc)
  if not self.spec_manureSensor.sensorRequired then
    return superFunc(self)
  end
  return self.spec_manureSensor.sensorAvailable
end
