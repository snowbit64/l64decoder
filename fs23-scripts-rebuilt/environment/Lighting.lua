-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Lighting = {}
local Lighting_mt = Class(Lighting)
function Lighting.new(environment, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.environment = environment
  v2.updateInterval = 10000
  v2.lastUpdateDayTime = 0
  v2.cloudEnvMapIndex1 = 1
  v2.cloudEnvMapIndex2 = 1
  v2.cloudEnvMapBlendAlpha = 0
  v2.dayStart = 6.55
  v2.dayEnd = 18.1
  v2.nightEnd = 5
  v2.nightStart = 19.81
  return v2
end
function Lighting:delete()
  self.environment = nil
end
function Lighting:load(xmlFile, baseKey)
  local v4 = xmlFile:getFloat(baseKey .. ".sunRotation#heightAngleLimitRotation", 60)
  local v3 = math.rad(...)
  self.heightAngleLimitRotation = v3
  v4 = xmlFile:getFloat(baseKey .. ".sunRotation#heightAngleLimitRotationStart", 56)
  v3 = math.rad(...)
  self.heightAngleLimitRotationStart = v3
  v4 = xmlFile:getFloat(baseKey .. ".sunRotation#heightAngleLimitRotationEnd", 80)
  v3 = math.rad(...)
  self.heightAngleLimitRotationEnd = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".sunRotation", true)
  self.sunRotationCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".moonBrightnessScale")
  self.moonBrightnessScaleCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".moonSizeScale")
  self.moonSizeScaleCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".sunIsPrimary")
  self.sunIsPrimaryCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".sunBrightnessScale")
  self.sunBrightnessScaleCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".sunSizeScale")
  self.sunSizeScaleCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".asymmetryFactor")
  self.asymmetryFactorCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".primaryExtraterrestrialColor")
  self.primaryExtraterrestrialColorCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".secondaryExtraterrestrialColor")
  self.secondaryExtraterrestrialColorCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".primaryDynamicLightingScale")
  self.primaryDynamicLightingScaleCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".lightScatteringRotation", true)
  self.lightScatteringRotationCurveData = v3
  v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".autoExposure")
  self.autoExposureCurveData = v3
  if Platform.usesFixedExposure then
    v3 = self:loadCurveDataFromXML(xmlFile, baseKey .. ".fixedExposure")
    self.fixedExposureCurveData = v3
  end
  v3 = xmlFile:getString(baseKey .. ".colorGrading.day#filename")
  if v3 ~= nil then
    v4 = Utils.getFilename(v3, g_currentMission.baseDirectory)
    self.colorGradingDay = v4
  end
  v4 = xmlFile:getString(baseKey .. ".colorGrading.night#filename")
  if v4 ~= nil then
    local v5 = Utils.getFilename(v4, g_currentMission.baseDirectory)
    self.colorGradingNight = v5
  else
    self.colorGradingNight = self.colorGradingDay
  end
  local v6 = xmlFile:getFloat(baseKey .. ".bloom#magnitude")
  self.bloomMagnitude = v6 or 0.5
  v6 = xmlFile:getFloat(baseKey .. ".bloom#threshold")
  self.bloomThreshold = v6 or 2
  setBloomMagnitude(self.bloomMagnitude)
  setBloomMaskThreshold(self.bloomThreshold)
  if g_currentMission.xmlFile ~= nil then
    v5 = xmlFile:getString(baseKey .. ".envMap#basePath")
    self.envMapBasePath = v5
    if self.envMapBasePath ~= nil then
      v5 = Utils.getFilename(self.envMapBasePath, g_currentMission.baseDirectory)
      self.envMapBasePath = v5
    end
    self.envMapTimes = {}
    xmlFile:iterate(baseKey .. ".envMap.timeProbe", function(self, xmlFile)
      local baseKey = baseKey:getFloat(xmlFile .. "#timeHours")
      if baseKey ~= nil then
        table.insert(u1.envMapTimes, baseKey)
      end
    end)
    table.sort(self.envMapTimes)
    self.envMapRenderingMode = false
  end
  local v7 = xmlFile:getVector(baseKey .. ".envAlbedoGroundColors.spring#value", {0, 0, 0}, 3)
  {}[Environment.SEASON.SPRING] = v7
  v7 = xmlFile:getVector(baseKey .. ".envAlbedoGroundColors.summer#value", {0, 0, 0}, 3)
  {}[Environment.SEASON.SUMMER] = v7
  v7 = xmlFile:getVector(baseKey .. ".envAlbedoGroundColors.autumn#value", {0, 0, 0}, 3)
  {}[Environment.SEASON.AUTUMN] = v7
  v7 = xmlFile:getVector(baseKey .. ".envAlbedoGroundColors.winter#value", {0, 0, 0}, 3)
  {}[Environment.SEASON.WINTER] = v7
  v6 = xmlFile:getVector(baseKey .. ".envAlbedoGroundColors.snow#value", {0, 0, 0}, 3)
  self.albedoGroundColors = {snow = v6}
  self.lastUpdateDayTime = 0
  return true
end
function Lighting.loadCurveDataFromXML(v0, v1, v2, v3)
  v1:iterate(v2 .. ".key", function(v0, v1)
    local v2 = v2:getFloat(v1 .. "#time")
    local v4 = v4:getString(v1 .. "#value")
    local v3 = string.split(v4, " ")
    for v7, v8 in ipairs(v3) do
      local v9 = tonumber(v8)
      if u1 then
        local v10 = math.rad(v9)
      end
      v3[v7] = v9
    end
    table.insert(u2, {v2, v3})
  end)
  return {}
end
function Lighting:setEnvironment(environment)
  self.environment = environment
end
function Lighting.reset(v0)
  resetAutoExposure()
end
function Lighting:setCloudEnvMapInfo(cloudEnvMapIndex1, cloudEnvMapIndex2, alpha)
  self.cloudEnvMapIndex1 = cloudEnvMapIndex1
  self.cloudEnvMapIndex2 = cloudEnvMapIndex2
  self.cloudEnvMapBlendAlpha = alpha
end
function Lighting:update(dt, force)
  if force then
    setBloomMagnitude(self.bloomMagnitude)
    setBloomMaskThreshold(self.bloomThreshold)
  end
  if not force and not g_sleepManager.isSleeping then
    local v4 = math.abs(self.environment.dayTime - self.lastUpdateDayTime)
    -- if v0.updateInterval >= v4 then goto L69 end
  end
  self:updateSunLocation(v3, v3 / 60000)
  local v8 = self:getHardcodedFromTime(v3 / 60000 / 60)
  self:updateEnvMap(v8 * 60, force)
  self:updateEnvAlbedo()
  self:updateAtmosphere(v3 / 60000)
  local v5, v6, v7 = v5:get(v3 / 60000)
  setColorGradingSettings(v5, v6, v7)
  self:updateExposureSettings()
  self.lastUpdateDayTime = v3
end
function Lighting:updateSunHeight()
  local v2 = v2:getSunHeightAngle()
  self.sunHeightAngle = v2
  local v2, v3, v4 = mathEulerRotateVector(self.sunHeightAngle, 0, self.heightAngleLimitRotation, 0, 0, 1)
  self.sunHeightLimit = v3
  v2, v3, v4 = mathEulerRotateVector(self.sunHeightAngle, 0, self.heightAngleLimitRotationStart, 0, 0, 1)
  self.sunHeightLimitStart = v3
  v2, v3, v4 = mathEulerRotateVector(self.sunHeightAngle, 0, self.heightAngleLimitRotationEnd, 0, 0, 1)
  self.sunHeightLimitEnd = v3
end
function Lighting:updateSunLocation(dayTime, dayMinutes)
  local v3 = v3:get(dayMinutes)
  local v4, v5, v6 = mathEulerRotateVector(self.sunHeightAngle, 0, v3, 0, 0, 1)
  if v5 < self.sunHeightLimitStart then
    if v5 <= self.sunHeightLimitEnd then
    else
    end
    local v7 = math.sqrt((1 - v5 * v5) / (v4 * v4 + v6 * v6))
  end
  setDirection(self.sunLightId, v4, v5, v6, 0, 1, 0)
  if dayMinutes < 360 then
  elseif dayMinutes < 1080 then
  else
  end
  if dayMinutes < 480 then
  elseif 960 < dayMinutes then
  end
  local v10 = v10:getFruitTypes()
  for v12, v13 in ipairs(...) do
    if not v13.alignsToSun then
      continue
    end
    if not (v13.terrainDataPlaneId ~= nil) then
      continue
    end
    setFoliageShaderParameter(v13.terrainDataPlaneId, "plantRotate", v7, v8, 0, 0)
  end
end
function Lighting:updateEnvMap(dayMinutes, force)
  if self.envMapBasePath ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000002 -> L10
  end
  return
  local v8 = Lighting.getEnvMapBaseFilename(self.envMapTimes[1], 1)
  if 1 < #self.envMapTimes then
    for v14, v15 in ipairs(self.envMapTimes) do
      if not (v9 < v15) then
        continue
      end
      break
    end
    if v10 - 1 <= 0 then
    end
    v14 = MathUtil.timeLerp(self.envMapTimes[v11], self.envMapTimes[v10], v9)
    local v19 = Lighting.getEnvMapBaseFilename(self.envMapTimes[v11], self.cloudEnvMapIndex1)
    v19 = Lighting.getEnvMapBaseFilename(self.envMapTimes[v11], self.cloudEnvMapIndex2)
    v19 = Lighting.getEnvMapBaseFilename(self.envMapTimes[v10], self.cloudEnvMapIndex1)
    v19 = Lighting.getEnvMapBaseFilename(self.envMapTimes[v10], self.cloudEnvMapIndex2)
  end
  if self.envMapRenderingMode then
    setEnvMap(v3, v4, v5, v6, 0, 0, 0, 0, true, false)
    return
  end
  setEnvMap(v3, v4, v5, v6, v9, v10, v11, v12, force or false, false)
end
function Lighting:updateEnvAlbedo()
  if SnowSystem.MIN_LAYER_HEIGHT <= self.environment.weather.snowHeight then
    local dayTime, dayMinutes, v3 = unpack(self.albedoGroundColors.snow)
    setEnvAlbedoGroundColor(dayTime, dayMinutes, v3)
    return
  end
  dayTime, dayMinutes, v3 = unpack(self.albedoGroundColors[self.environment.currentVisualSeason])
  setEnvAlbedoGroundColor(dayTime, dayMinutes, v3)
end
function Lighting:updateAtmosphere(dayMinutes)
  local dayMinutes, v3 = dayMinutes:get(dayMinutes)
  local v4, v5, v6 = mathEulerRotateVector(self.sunHeightAngle, 0, dayMinutes, 0, 0, 1)
  setLightScatteringDirection(self.sunLightId, v4, v5, v6)
  local v7, v8, v9 = mathEulerRotateVector(self.sunHeightAngle, 0, v3, 0, 0, 1)
  local v10, v11, v12 = v10:get(dayMinutes)
  setAtmosphereSecondaryLightSource(v7, v8, v9, v10, v11, v12)
  local v13 = v13:get(dayMinutes)
  setAtmosphereCornettAsymetryFactor(v13)
  local v14 = v14:get(dayMinutes)
  setSunSizeScale(v14)
  local v15 = v15:get(dayMinutes)
  setMoonSizeScale(v15)
  local v17 = v17:get(dayMinutes)
  if 0.5 >= v17 then
  end
  setSunIsPrimary(true)
  v17 = v17:get(dayMinutes)
  local v18 = v18:get(dayMinutes)
  if self.envMapRenderingMode then
    if true then
    else
    end
  end
  setSunBrightnessScale(v18)
  setMoonBrightnessScale(v17)
  local v19, v20, v21 = v19:get(dayMinutes)
  local v22 = v22:get(dayMinutes)
  setLightColor(self.sunLightId, v19 * v22, v20 * v22, v21 * v22)
  setLightScatteringColor(self.sunLightId, v19, v20, v21)
end
function Lighting:updateExposureSettings()
  if Platform.usesFixedExposure then
    if self.fixedKeyValue ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L29
    end
    local v5 = v5:get(dayTime)
    -- goto L73  (LOP_JUMP +44)
  elseif self.fixedKeyValue == nil then
    local v5, v6, v7 = v5:get(self.environment.dayTime / 60000)
  else
    if self.fixedMinExposure == nil then
      local v6, v7, v8 = v6:get(self.environment.dayTime / 60000)
    else
    end
  end
  setExposureRange(v4, dayMinutes, v3)
end
function Lighting:updateCurves()
  local dayTime = self:createCurve(linearInterpolator2, self.lightScatteringRotationCurveData)
  self.lightScatteringRotCurve = dayTime
  dayTime = self:createCurve(linearInterpolator1, self.asymmetryFactorCurveData)
  self.asymmetryFactorCurve = dayTime
  dayTime = self:createCurve(linearInterpolator1, self.sunBrightnessScaleCurveData)
  self.sunBrightnessScaleCurve = dayTime
  dayTime = self:createCurve(linearInterpolator1, self.sunSizeScaleCurveData)
  self.sunSizeScaleCurve = dayTime
  dayTime = self:createCurve(linearInterpolator1, self.moonBrightnessScaleCurveData)
  self.moonBrightnessScaleCurve = dayTime
  dayTime = self:createCurve(linearInterpolator1, self.moonSizeScaleCurveData)
  self.moonSizeScaleCurve = dayTime
  dayTime = self:createCurve(linearInterpolator1, self.sunIsPrimaryCurveData)
  self.sunIsPrimaryCurve = dayTime
  dayTime = self:createCurve(linearInterpolator1, self.primaryDynamicLightingScaleCurveData)
  self.primaryDynamicLightingScale = dayTime
  dayTime = self:createCurve(linearInterpolator3, self.primaryExtraterrestrialColorCurveData)
  self.primaryExtraterrestrialColor = dayTime
  dayTime = self:createCurve(linearInterpolator3, self.secondaryExtraterrestrialColorCurveData)
  self.secondaryExtraterrestrialColor = dayTime
  dayTime = self:createCurve(linearInterpolator3, self.autoExposureCurveData)
  self.autoExposureCurve = dayTime
  if Platform.usesFixedExposure then
    dayTime = self:createCurve(linearInterpolator1, self.fixedExposureCurveData)
    self.fixedExposureCurve = dayTime
  end
  dayTime = self:getColorGradingFileCurve()
  self.colorGradingFileCurve = dayTime
  self:updateSunHeight()
  dayTime = self:createCurve(linearInterpolator1, self.sunRotationCurveData)
  self.sunRotCurve = dayTime
end
function Lighting:createCurve(interpolator, data)
  local curve = AnimCurve.new(interpolator)
  -- TODO: structure LOP_FORNPREP (pc 7, target 29)
  local v13 = self:getTimeFromHardcoded(data[1][1])
  local v11 = unpack(data[1][2])
  curve:addKeyframe({time = v13 * 60})
  -- TODO: structure LOP_FORNLOOP (pc 28, target 8)
  return curve
end
function Lighting:getTimeFromHardcoded(hardcoded)
  if hardcoded < 6 then
    return self.nightEnd * hardcoded / 6
  end
  if 6 <= hardcoded and hardcoded < 7 then
    return (dayMinutes - v5) * (hardcoded - 6) + v5
  end
  if 7 <= hardcoded and hardcoded < 19 then
    return (v3 - dayMinutes) * (hardcoded - 7) / 12 + dayMinutes
  end
  if 19 <= hardcoded and hardcoded < 20 then
    return (v4 - v3) * (hardcoded - 19) + v3
  end
  if 20 <= hardcoded and hardcoded <= 24 then
    return (24 - v4) * (hardcoded - 20) / 4 + v4
  end
end
function Lighting:getHardcodedFromTime(time)
  if time < self.nightEnd then
    return 6 * time / self.nightEnd
  end
  if v5 <= time and time < dayMinutes then
    return 1 * (time - v5) / (dayMinutes - v5) + 6
  end
  if dayMinutes <= time and time < v3 then
    return 12 * (time - dayMinutes) / (v3 - dayMinutes) + 7
  end
  if v3 <= time and time < v4 then
    return 1 * (time - v3) / (v4 - v3) + 19
  end
  return 4 * (time - v4) / (24 - v4) + 20
end
function Lighting:getColorGradingFileCurve()
  local curve = AnimCurve.new(Lighting.fileInterpolator)
  local v6 = self:getTimeFromHardcoded(0)
  curve:addKeyframe({time = v6 * 60, file = self.colorGradingNight})
  v6 = self:getTimeFromHardcoded(5)
  curve:addKeyframe({time = v6 * 60, file = self.colorGradingNight})
  v6 = self:getTimeFromHardcoded(6)
  curve:addKeyframe({time = v6 * 60, file = self.colorGradingDay})
  v6 = self:getTimeFromHardcoded(20)
  curve:addKeyframe({time = v6 * 60, file = self.colorGradingDay})
  v6 = self:getTimeFromHardcoded(22)
  curve:addKeyframe({time = v6 * 60, file = self.colorGradingNight})
  v6 = self:getTimeFromHardcoded(24)
  curve:addKeyframe({time = v6 * 60, file = self.colorGradingNight})
  return curve
end
function Lighting:setDaylightTimes(dayStart, dayEnd, nightEnd, nightStart)
  if self.dayStart ~= dayStart and self.dayEnd ~= dayEnd and self.nightEnd ~= nightEnd and self.nightStart ~= nightStart then
    self.dayStart = dayStart
    self.dayEnd = dayEnd
    self.nightEnd = nightEnd
    self.nightStart = nightStart
    self:updateCurves()
  end
end
function Lighting:setFixedExposureSettings(keyValue, minExposure, maxExposure)
  if maxExposure == nil then
  end
  self.fixedKeyValue = keyValue
  self.fixedMinExposure = minExposure
  self.fixedMaxExposure = maxExposure
end
function Lighting.getEnvMapBaseFilename(dayTimeHours, cloudSetup)
  local dayMinutes, v3 = math.modf(dayTimeHours)
  local v4, v5 = math.modf(v3 * 60)
  local v6 = math.floor(v5 * 60)
  v6 = string.format("%d_%d_%d_C%d", dayMinutes, v4, v6, cloudSetup)
  return v6
end
function Lighting:fileInterpolator(dayTime, dayMinutes)
  return self.file, dayTime.file, dayMinutes
end
