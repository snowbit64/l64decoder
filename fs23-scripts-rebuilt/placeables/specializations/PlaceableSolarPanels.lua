-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableSolarPanels = {}
function PlaceableSolarPanels.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(PlaceableIncomePerHour, v0)
end
function PlaceableSolarPanels.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getIncomePerHourFactor", PlaceableSolarPanels.getIncomePerHourFactor)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getNeedHourChanged", PlaceableSolarPanels.getNeedHourChanged)
end
function PlaceableSolarPanels.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "updateHeadRotation", PlaceableSolarPanels.updateHeadRotation)
end
function PlaceableSolarPanels.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableSolarPanels)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableSolarPanels)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableSolarPanels)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableSolarPanels)
  SpecializationUtil.registerEventListener(placeableType, "onHourChanged", PlaceableSolarPanels)
  SpecializationUtil.registerEventListener(placeableType, "onUpdate", PlaceableSolarPanels)
end
function PlaceableSolarPanels:registerXMLPaths(v1)
  self:setXMLSpecializationType("SolarPanels")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".solarPanels#headNode", "Head Node")
  self:register(XMLValueType.ANGLE, v1 .. ".solarPanels#randomHeadOffsetRange", "Range of random offset", 15)
  self:register(XMLValueType.ANGLE, v1 .. ".solarPanels#rotationSpeed", "Rotation Speed (deg/sec)", 5)
  self:setXMLSpecializationType()
end
function PlaceableSolarPanels:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("SolarPanels")
  self:register(XMLValueType.FLOAT, v1 .. "#headRotationRandom", "Head random rotation")
  self:setXMLSpecializationType()
end
function PlaceableSolarPanels:onLoad(savegame)
  local v4 = self.xmlFile:getValue("placeable.solarPanels#headNode", nil, self.components, self.i3dMappings)
  self.spec_solarPanels.headNode = v4
  v4 = self.xmlFile:getValue("placeable.solarPanels#randomHeadOffsetRange", 15)
  self.spec_solarPanels.randomHeadOffsetRange = v4
  local v5 = self.xmlFile:getValue("placeable.solarPanels#rotationSpeed", 5)
  self.spec_solarPanels.rotationSpeed = v5 / 1000
  if self.spec_solarPanels.headNode ~= nil then
    local v6 = math.random(-1, 1)
    self.spec_solarPanels.headRotationRandom = v6 * self.spec_solarPanels.randomHeadOffsetRange * 0.5
    self.spec_solarPanels.currentRotation = self.spec_solarPanels.headRotationRandom
    self.spec_solarPanels.targetRotation = self.spec_solarPanels.headRotationRandom
  end
end
function PlaceableSolarPanels:onFinalizePlacement()
  self:updateHeadRotation()
end
function PlaceableSolarPanels:loadFromXMLFile(xmlFile, key)
  local v4 = xmlFile:getValue(key .. "#headRotationRandom")
  if v4 == nil then
    self.spec_solarPanels.headRotationRandom = v4
  end
end
function PlaceableSolarPanels:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_solarPanels.headNode ~= nil then
    xmlFile:setValue(key .. "#headRotationRandom", self.spec_solarPanels.headRotationRandom)
  end
end
function PlaceableSolarPanels:onReadStream(streamId, connection)
  if self.spec_solarPanels.headNode ~= nil then
    local v4 = NetworkUtil.readCompressedAngle(streamId)
    self.spec_solarPanels.headRotationRandom = v4
  end
end
function PlaceableSolarPanels:onWriteStream(streamId, connection)
  if self.spec_solarPanels.headNode ~= nil then
    NetworkUtil.writeCompressedAngle(streamId, self.spec_solarPanels.headRotationRandom)
  end
end
function PlaceableSolarPanels:onUpdate(dt)
  if self.spec_solarPanels.targetRotation ~= self.spec_solarPanels.currentRotation then
    if self.spec_solarPanels.targetRotation < self.spec_solarPanels.currentRotation then
    end
    local v5 = v3(v2.currentRotation + v2.rotationSpeed * dt * v4, v2.targetRotation)
    v2.currentRotation = v5
    local v6 = getParent(v2.headNode)
    local v7 = math.sin(v2.currentRotation)
    local v9 = math.cos(v2.currentRotation)
    v5, v6, v7 = worldDirectionToLocal(...)
    setDirection(v2.headNode, v5, 0, v7, 0, 1, 0)
    if v2.targetRotation ~= v2.currentRotation then
      self:raiseActive()
    end
  end
end
function PlaceableSolarPanels:onHourChanged()
  self:updateHeadRotation()
end
function PlaceableSolarPanels:updateHeadRotation()
  if self.spec_solarPanels.headNode ~= nil and g_currentMission ~= nil and g_currentMission.environment ~= nil and g_currentMission.environment.lighting.sunLightId ~= nil then
    local v3, v4, v5 = localDirectionToWorld(g_currentMission.environment.lighting.sunLightId, 0, 0, 1)
    local v6 = math.atan2(v3, v5)
    local v7 = math.abs(v3)
    if 0.3 < v7 then
      self.spec_solarPanels.targetRotation = v6 + self.spec_solarPanels.headRotationRandom
      self:raiseActive()
    end
  end
end
function PlaceableSolarPanels.getIncomePerHourFactor(v0, v1)
  if not g_currentMission.environment.isSunOn then
    return 0
  end
  local v3 = v1(v0)
  if v2.currentSeason == Environment.SEASON.WINTER then
  end
  local v4 = v4:getIsRaining()
  if v4 then
  end
  return v3
end
function PlaceableSolarPanels.getNeedHourChanged(v0, v1)
  return true
end
