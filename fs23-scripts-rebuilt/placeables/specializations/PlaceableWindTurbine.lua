-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableWindTurbine = {}
function PlaceableWindTurbine.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(PlaceableIncomePerHour, v0)
end
function PlaceableWindTurbine.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "updateHeadRotation", PlaceableWindTurbine.updateHeadRotation)
  SpecializationUtil.registerFunction(placeableType, "updateRotorRotSpeed", PlaceableWindTurbine.updateRotorRotSpeed)
  SpecializationUtil.registerFunction(placeableType, "setWindValues", PlaceableWindTurbine.setWindValues)
  SpecializationUtil.registerFunction(placeableType, "getWindTurbineLoad", PlaceableWindTurbine.getWindTurbineLoad)
end
function PlaceableWindTurbine.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getIncomePerHourFactor", PlaceableWindTurbine.getIncomePerHourFactor)
end
function PlaceableWindTurbine.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableWindTurbine)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableWindTurbine)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableWindTurbine)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableWindTurbine)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableWindTurbine)
end
function PlaceableWindTurbine:registerXMLPaths(v1)
  self:setXMLSpecializationType("WindTurbine")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".windTurbine#headNode", "Head node")
  self:register(XMLValueType.BOOL, v1 .. ".windTurbine#headAdjustToWind", "Adjust head node to current wind direction")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".windTurbine#rotationNode", "Rotor rotation node, rotated on z-axis")
  self:register(XMLValueType.FLOAT, v1 .. ".windTurbine#optimalWindSpeed", "Wind speed in m/s at which rotor reaches max rpm")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".windTurbine.sounds", "idle")
  AnimationManager.registerAnimationNodesXMLPaths(self, v1 .. ".windTurbine.animationNodes")
  self:setXMLSpecializationType()
end
function PlaceableWindTurbine:registerSavegameXMLPaths(v1)
  self:setXMLSpecializationType("WindTurbine")
  self:register(XMLValueType.ANGLE, v1 .. "#headRotation", "Current head rotation")
  self:setXMLSpecializationType()
end
function PlaceableWindTurbine:onLoad(savegame)
  local v3 = v3:getValue("placeable.windTurbine#headNode", nil, self.components, self.i3dMappings)
  if v3 ~= nil then
    self.spec_windTurbine.headNode = v3
    local v4 = v4:getValue("placeable.windTurbine#headAdjustToWind", false)
    self.spec_windTurbine.headAdjustToWind = v4
    self.spec_windTurbine.headRotation = 0
  end
  v4 = v4:getValue("placeable.windTurbine#optimalWindSpeed", 15)
  v2.rotorOptimalWindSpeed = v4
  v2.rotSpeedFactor = 1
  if self.isClient then
    v2.samples = {}
    local v5 = v5:loadSampleFromXML(self.xmlFile, "placeable.windTurbine.sounds", "idle", self.baseDirectory, self.components, 1, AudioGroup.ENVIRONMENT, self.i3dMappings, self)
    v2.samples.idle = v5
    v4 = v4:loadAnimations(self.xmlFile, "placeable.windTurbine.animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v4
    for v7, v8 in ipairs(v2.animationNodes) do
      v8.speedFunc = function()
        return u0.rotSpeedFactor
      end
    end
  end
end
function PlaceableWindTurbine:onDelete()
  v1:removeWindChangedListener(self)
  v2:deleteSamples(self.spec_windTurbine.samples)
  v2:deleteAnimations(self.spec_windTurbine.animationNodes)
end
function PlaceableWindTurbine:onFinalizePlacement()
  g_currentMission.environment.weather.windUpdater:addWindChangedListener(self)
  local v3, v4, v5 = g_currentMission.environment.weather.windUpdater:getCurrentValues()
  if self.spec_windTurbine.headNode ~= nil then
    local v6 = MathUtil.getYRotationFromDirection(v3, v4)
    self.spec_windTurbine.headRotation = v6
    if not self.spec_windTurbine.headAdjustToWind then
      local v11 = math.random()
      self.spec_windTurbine.headRotation = 0.7 + v11 * 2 * 0.2 - 0.2
    end
    self:updateHeadRotation()
  end
  self:updateRotorRotSpeed(v5)
  v6:startAnimations(v1.animationNodes)
end
function PlaceableWindTurbine:onReadStream(streamId, connection)
  if self.spec_windTurbine.headNode ~= nil then
    local v4 = NetworkUtil.readCompressedAngle(streamId)
    self.spec_windTurbine.headRotation = v4
  end
end
function PlaceableWindTurbine:onWriteStream(streamId, connection)
  if self.spec_windTurbine.headNode ~= nil then
    NetworkUtil.writeCompressedAngle(streamId, self.spec_windTurbine.headRotation)
  end
end
function PlaceableWindTurbine:loadFromXMLFile(xmlFile, key)
  if self.spec_windTurbine.headNode ~= nil then
    local v4 = xmlFile:getValue(key .. "#headRotation")
    self.spec_windTurbine.headRotation = v4
    self:updateHeadRotation()
  end
end
function PlaceableWindTurbine:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_windTurbine.headNode ~= nil then
    xmlFile:setValue(key .. "#headRotation", self.spec_windTurbine.headRotation)
  end
end
function PlaceableWindTurbine:updateHeadRotation()
  if self.spec_windTurbine.headNode ~= nil then
    setWorldRotation(self.spec_windTurbine.headNode, 0, self.spec_windTurbine.headRotation, 0)
  end
end
function PlaceableWindTurbine:updateRotorRotSpeed(windVelocity)
  local v3 = MathUtil.clamp(windVelocity / self.spec_windTurbine.rotorOptimalWindSpeed, 0, 1)
  self.spec_windTurbine.rotSpeedFactor = v3
  if self.isClient then
    if 0 < self.spec_windTurbine.rotSpeedFactor then
      v3 = v3:getIsSamplePlaying(self.spec_windTurbine.samples.idle)
      -- if v3 then goto L60 end
      v3:playSample(self.spec_windTurbine.samples.idle, 0)
      return
    end
    v3 = v3:getIsSamplePlaying(v2.samples.idle)
    if v3 then
      v3:stopSample(v2.samples.idle)
    end
  end
end
function PlaceableWindTurbine:setWindValues(windDirX, windDirZ, windVelocity, cirrusCloudSpeedFactor)
  if self.spec_windTurbine.headAdjustToWind and self.spec_windTurbine.headNode ~= nil then
    local v6 = MathUtil.getYRotationFromDirection(windDirX, windDirZ)
    self.spec_windTurbine.headRotation = v6
    self:updateHeadRotation()
  end
  self:updateRotorRotSpeed(windVelocity)
end
function PlaceableWindTurbine:getWindTurbineLoad()
  return self.spec_windTurbine.rotSpeedFactor
end
v0:registerModifierType("WIND_TURBINE_LOAD", PlaceableWindTurbine.getWindTurbineLoad)
function PlaceableWindTurbine:getIncomePerHourFactor(superFunc)
  local factor = superFunc(self)
  return factor * self.spec_windTurbine.rotSpeedFactor
end
