-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Environment = {}
local Environment_mt = Class(Environment)
Environment.SEASONS_IN_YEAR = 4
Environment.PERIODS_IN_YEAR = 12
{}[0] = 60
Environment.JULIAN_DAYS_NORTH = {152, 244, 335}
{}[0] = 244
Environment.JULIAN_DAYS_SOUTH = {335, 60, 152}
Environment.DAYTIME_TO_HOURS_MULT = 0.000000011574074074074074
Environment.INITIAL_DAY = 6
Environment.MAX_DAYS_PER_PERIOD = 28
Environment.SEASON = {SPRING = 0, SUMMER = 1, AUTUMN = 2, WINTER = 3}
Environment.PERIOD = {EARLY_SPRING = 1, MID_SPRING = 2, LATE_SPRING = 3, EARLY_SUMMER = 4, MID_SUMMER = 5, LATE_SUMMER = 6, EARLY_AUTUMN = 7, MID_AUTUMN = 8, LATE_AUTUMN = 9, EARLY_WINTER = 10, MID_WINTER = 11, LATE_WINTER = 12}
{}[Environment.PERIOD.EARLY_SPRING] = 80
{}[Environment.PERIOD.MID_SPRING] = 110
{}[Environment.PERIOD.LATE_SPRING] = 140
{}[Environment.PERIOD.EARLY_SUMMER] = 170
{}[Environment.PERIOD.MID_SUMMER] = 200
{}[Environment.PERIOD.LATE_SUMMER] = 230
{}[Environment.PERIOD.EARLY_AUTUMN] = 260
{}[Environment.PERIOD.MID_AUTUMN] = 290
{}[Environment.PERIOD.LATE_AUTUMN] = 320
{}[Environment.PERIOD.EARLY_WINTER] = 350
{}[Environment.PERIOD.MID_WINTER] = 20
{}[Environment.PERIOD.LATE_WINTER] = 50
Environment.PERIOD_DAY_MAPPING = {}
function Environment.onCreateSunLight(v0, v1)
  if g_currentMission.environment.baseLighting.sunLightId == nil then
    g_currentMission.environment.baseLighting.sunLightId = v1
    local v4 = getLightColor(v1)
    g_currentMission.environment.baseLighting.sunColor = {}
    return
  end
  local v2 = I3DUtil.getNodePath(g_currentMission.environment.lighting.sunLightId)
  local v3 = getChildIndex(g_currentMission.environment.lighting.sunLightId)
  v4 = I3DUtil.getNodePath(v1)
  local v5 = getChildIndex(v1)
  Logging.error("Environment:onCreateSunLight(): Sun light source was already registered '%s'(child %d). Please remove '%s' (child %d)", v2, v3, v4, v5)
end
function Environment.onCreateWater(v0, v1)
  local v3 = getUserAttribute(v1, "useShapeObjectMask")
  local v2 = Utils.getNoNil(v3, false)
  if not v2 then
    local v5 = getObjectMask(v1)
    local v4 = bitAND(v5, 4294967167)
    setObjectMask(...)
  end
  v2 = Utils.getPerformanceClassId()
  if v2 > GS_PROFILE_MEDIUM and not GS_IS_CONSOLE_VERSION then
    -- if not GS_PLATFORM_GGP then goto L42 end
  end
  setReflectionMapScaling(v1, 0, true)
  return
  if v2 <= GS_PROFILE_HIGH then
    setReflectionMapObjectMasks(v1, 512, 33554432, true)
    return
  end
  setReflectionMapObjectMasks(v1, 256, 16777216, true)
end
function Environment.new(mission)
  local v1 = setmetatable({}, u0)
  local v2 = v2:loadI3DFile("data/sky/sky.i3d", true, false)
  v1.skyNode = v2
  if v1.skyNode ~= nil then
    local v3 = getRootNode()
    link(v3, v1.skyNode)
  end
  v1.mission = mission
  v2 = Daylight.new(v1)
  v1.daylight = v2
  v2 = Lighting.new(v1)
  v1.lighting = v2
  v1.baseLighting = v1.lighting
  v2 = Weather.new(v1)
  v1.weather = v2
  v2 = EnvironmentMaskSystem.new(v1.mission)
  v1.environmentMaskSystem = v2
  v1.timeUpdateInterval = 60000
  v1.timeUpdateTime = 0
  v1.isSunOn = true
  v1.debugSeasonalShaderParameter = false
  v2 = v2:getIsServer()
  if v2 then
    addConsoleCommand("gsTimeSet", "Sets the day time in hours", "consoleCommandSetDayTime", v1)
    addConsoleCommand("gsEnvironmentReload", "Reloads environment", "consoleCommandReloadEnvironment", v1)
    if g_addCheatCommands then
      addConsoleCommand("gsTakeEnvProbes", "Takes env. probes from current camera position", "consoleCommandTakeEnvProbes", v1)
    end
  end
  addConsoleCommand("gsSetFixedExposureSettings", "Sets fixed exposure settings", "consoleCommandSetFixedExposureSettings", v1)
  addConsoleCommand("gsEnvironmentAutoExposureToggle", "Toggles auto exposure", "consoleCommandToggleAutoExposure", v1)
  addConsoleCommand("gsEnvironmentSeasonalShaderSet", "Sets the seasonal shader to a forced value", "consoleCommandSetSeasonalShader", v1)
  addConsoleCommand("gsEnvironmentSeasonalShaderDebug", "Shows the current seasonal shader parameter", "consoleCommandSeasonalShaderDebug", v1)
  addConsoleCommand("gsEnvironmentFixedVisualsSet", "Sets the visual seasons to a fixed period", "consoleCommandSetFixedVisuals", v1)
  local v4 = v1.mission.ambientSoundSystem:registerModifier("night", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("preSunrise", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("sunrise", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("postSunrise", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("morning", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("preNoon", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("noon", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("postNoon", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("afternoon", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("preSunset", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("sunset", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("postSunset", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("spring", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("summer", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("autumn", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("winter", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("inVehicle", nil)
  v4 = v1.mission.ambientSoundSystem:registerModifier("outVehicle", nil)
  v1.ambientSoundModifiers = {setIsNight = v4, setIsPreSunrise = v4, setIsSunrise = v4, setIsPostSunrise = v4, setIsMorning = v4, setIsPreNoon = v4, setIsNoon = v4, setIsPostNoon = v4, setIsAfternoon = v4, setIsPreSunset = v4, setIsSunset = v4, setIsPostSunset = v4, setIsSpring = v4, setIsSummer = v4, setIsAutumn = v4, setIsWinter = v4, setInVehicle = v4, setOutVehicle = v4}
  return v1
end
function Environment:load(filename)
  self.xmlFilename = filename
  local xmlFile = XMLFile.load("Environment", filename)
  if xmlFile == nil then
    Logging.fatal("Could not load environment '%s'", filename)
  end
  self.currentDay = 1
  self.currentMonotonicDay = 1
  self.currentDayInPeriod = 1
  self.currentYear = 1
  self.currentDayInSeason = 1
  self.currentVisualDayInSeason = 1
  self.currentSeason = Environment.SEASON.SPRING
  self.currentPeriod = Environment.PERIOD.EARLY_SPRING
  self.daysPerPeriod = 1
  self.timeAdjustment = 1 / self.daysPerPeriod
  self.plannedDaysPerPeriod = 1
  self.currentVisualSeason = Environment.SEASON.SPRING
  self.currentVisualPeriod = Environment.PERIOD.EARLY_SPRING
  self.visualPeriodLocked = false
  self.dayLength = 86400000
  self.realHourLength = 3600000
  self.realHourTimer = self.realHourLength
  self.timeRanges = {}
  local v5 = self:addTimeRange(20, 5, self.ambientSoundModifiers.setIsNight)
  self.timeRanges.night = v5
  v5 = self:addTimeRange(5, 6, self.ambientSoundModifiers.setIsPreSunrise)
  self.timeRanges.preSunrise = v5
  v5 = self:addTimeRange(6, 7, self.ambientSoundModifiers.setIsSunrise)
  self.timeRanges.sunrise = v5
  v5 = self:addTimeRange(7, 8, self.ambientSoundModifiers.setIsPostSunrise)
  self.timeRanges.postSunrise = v5
  v5 = self:addTimeRange(8, 11, self.ambientSoundModifiers.setIsMorning)
  self.timeRanges.morning = v5
  v5 = self:addTimeRange(11, 12, self.ambientSoundModifiers.setIsPreNoon)
  self.timeRanges.preNoon = v5
  v5 = self:addTimeRange(12, 13, self.ambientSoundModifiers.setIsNoon)
  self.timeRanges.noon = v5
  v5 = self:addTimeRange(13, 14, self.ambientSoundModifiers.setIsPostNoon)
  self.timeRanges.postNoon = v5
  v5 = self:addTimeRange(14, 17, self.ambientSoundModifiers.setIsAfternoon)
  self.timeRanges.afternoon = v5
  v5 = self:addTimeRange(17, 18, self.ambientSoundModifiers.setIsPreSunset)
  self.timeRanges.preSunset = v5
  v5 = self:addTimeRange(18, 19, self.ambientSoundModifiers.setIsSunset)
  self.timeRanges.sunset = v5
  v5 = self:addTimeRange(19, 20, self.ambientSoundModifiers.setIsPostSunset)
  self.timeRanges.postSunset = v5
  v4:load(xmlFile, "environment")
  self:updateJulianDay()
  local v4 = xmlFile:getFloat("environment" .. "startHour", 8)
  if v4 ~= nil then
  end
  self:setEnvironmentTime(Environment.INITIAL_DAY, Environment.INITIAL_DAY, v5, self.daysPerPeriod, false)
  local v6 = xmlFile:getBool("environment" .. "#dayNightCycle", true)
  self.dayNightCycle = v6
  v6:load(xmlFile, "environment" .. ".lighting")
  v6:setIsRainAllowed(true)
  v6:load(xmlFile, "environment")
  if self.currentVisualSeason ~= Environment.SEASON.SPRING then
  end
  v6(true)
  if self.currentVisualSeason ~= Environment.SEASON.SUMMER then
  end
  v6(true)
  if self.currentVisualSeason ~= Environment.SEASON.AUTUMN then
  end
  v6(true)
  if self.currentVisualSeason ~= Environment.SEASON.WINTER then
  end
  v6(true)
  v6:setDayOfYear(Environment.PERIOD_DAY_MAPPING[self.currentVisualPeriod], self.currentVisualSeason)
  v6:setIsSunOn(self.isSunOn)
  v6 = xmlFile:getFloat("environment" .. "#nightTimeScale", 2)
  self.nightTimeScale = v6
  v6 = xmlFile:getVector("environment" .. ".dirtColors#default", {0.2, 0.14, 0.08}, 3)
  self.dirtColorDefault = v6
  v6 = xmlFile:getVector("environment" .. ".dirtColors#snow", {0.95, 0.95, 0.95}, 3)
  self.dirtColorSnow = v6
  v6 = xmlFile:getBool("environment" .. "#depthOfField", true)
  self.depthOfField = v6
  v6:setEnvironmentDoFEnabled(self.depthOfField)
  xmlFile:delete()
  v6:unsubscribeAll(self)
  v6:subscribe(MessageType.OWN_PLAYER_ENTERED, self.onPlayerEntered, self)
  v6:subscribe(MessageType.OWN_PLAYER_LEFT, self.onPlayerLeft, self)
  return self
end
function Environment:delete()
  delete(self.skyNode)
  self:resetSceneParameters()
  v1:delete()
  self.environmentMaskSystem = nil
  v1:delete()
  self.weather = nil
  v1:delete()
  self.baseLighting = nil
  v1:delete()
  self.daylight = nil
  v1:unsubscribeAll(self)
  removeConsoleCommand("gsTimeSet")
  removeConsoleCommand("gsEnvironmentReload")
  removeConsoleCommand("gsSetFixedExposureSettings")
  removeConsoleCommand("gsEnvironmentAutoExposureToggle")
  removeConsoleCommand("gsEnvironmentSeasonalShaderSet")
  removeConsoleCommand("gsEnvironmentSeasonalShaderDebug")
  removeConsoleCommand("gsEnvironmentFixedVisualsSet")
  removeConsoleCommand("gsTakeEnvProbes")
end
function Environment:saveToXMLFile(xmlFile, key)
  setXMLFloat(xmlFile, key .. ".dayTime", self.dayTime / 60000)
  setXMLInt(xmlFile, key .. ".currentDay", self.currentDay)
  setXMLInt(xmlFile, key .. ".currentMonotonicDay", self.currentMonotonicDay)
  setXMLInt(xmlFile, key .. ".realHourTimer", self.realHourTimer)
  setXMLInt(xmlFile, key .. ".daysPerPeriod", self.daysPerPeriod)
  v3:saveToXMLFile(xmlFile, key .. ".daylight")
  v3:saveToXMLFile(xmlFile, key .. ".weather")
end
function Environment:loadFromXMLFile(xmlFile, key)
  local v4 = getXMLFloat(xmlFile, key .. ".dayTime")
  local v3 = Utils.getNoNil(v4, 400)
  local v5 = getXMLInt(xmlFile, key .. ".currentDay")
  v4 = Utils.getNoNil(v5, self.currentDay)
  local v6 = getXMLInt(xmlFile, key .. ".currentMonotonicDay")
  v5 = Utils.getNoNil(v6, v4)
  local v7 = getXMLInt(xmlFile, key .. ".daysPerPeriod")
  v6 = Utils.getNoNil(v7, self.daysPerPeriod)
  self.daysPerPeriod = v6
  self.timeAdjustment = 1 / self.daysPerPeriod
  self.plannedDaysPerPeriod = self.mission.missionInfo.plannedDaysPerPeriod
  if self.mission.missionInfo.fixedSeasonalVisuals ~= nil then
    self.currentVisualPeriod = self.mission.missionInfo.fixedSeasonalVisuals
    v7 = math.floor((self.mission.missionInfo.fixedSeasonalVisuals - 1) / 3)
    self.currentVisualSeason = v7
    self.visualPeriodLocked = true
  end
  self:setEnvironmentTime(v5, v4, v3 * 1000 * 60, self.daysPerPeriod, false)
  local v8 = getXMLInt(xmlFile, key .. ".realHourTimer")
  v7 = Utils.getNoNil(v8, 3600000)
  self.realHourTimer = v7
  v7:loadFromXMLFile(xmlFile, key .. ".daylight")
  v7:loadFromXMLFile(xmlFile, key .. ".weather")
end
function Environment:update(dt)
  if self.envMapGeneration ~= nil then
    if self.envMapGeneration.tasks[1] ~= nil then
      if self.envMapGeneration.tasks[1].dayTime ~= nil then
        local v3 = math.floor(self.envMapGeneration.tasks[1].dayTime * 1000 * 60 * 60)
        self:setEnvironmentTime(self.currentDay, self.currentDay, v3, self.daysPerPeriod, false)
        v5:update(0, true)
      end
      if v2.cloudData ~= nil then
        v3:setTargetClouds(v2.cloudData, 0)
        v3:setWindValues(v2.windDirX, v2.windDirZ, v2.windVelocity, v2.cirrusCloudSpeedFactor)
        v3:update(10000)
        if self.weather.skyBoxUpdater ~= nil then
          if 0.5 < v2.cloudData.precipitation then
          end
          v5:update(10000, self.dayTime, v3, v4)
        end
      end
      if v2.setDefaultValues then
        setSharedShaderParameter(Shader.PARAM_SHARED_SEASON, 0)
        v3:setDaylightTimes(7, 19, 6, 20)
        self.baseLighting.envMapRenderingMode = true
        v3:update(0, true)
        self.baseLighting.envMapRenderingMode = false
      end
      if v2.filename ~= nil then
        renderEnvProbe(v2.renderResolution, v2.outputResolution, v2.ssaoQuality, v2.cloudQuality, v2.numIterations, v2.filename)
      end
      table.remove(self.envMapGeneration.tasks, 1)
      return
    end
    self.weather.cloudUpdater.lastClouds = self.envMapGeneration.currentData.lastClouds
    self.weather.cloudUpdater.targetClouds = self.envMapGeneration.currentData.targetClouds
    self.weather.cloudUpdater.alpha = self.envMapGeneration.currentData.alpha
    self.weather.cloudUpdater.duration = self.envMapGeneration.currentData.duration
    self.weather.cloudUpdater.windDirX = self.envMapGeneration.currentData.windDirX
    self.weather.cloudUpdater.windDirZ = self.envMapGeneration.currentData.windDirZ
    self.weather.cloudUpdater.windVelocity = self.envMapGeneration.currentData.windVelocity
    self.weather.cloudUpdater.cirrusCloudSpeedFactor = self.envMapGeneration.currentData.cirrusCloudSpeedFactor
    self.weather.cloudUpdater.isDirty = true
    v5:setGrowthMode(self.envMapGeneration.currentData.growthMode, true)
    self:setEnvironmentTime(self.envMapGeneration.currentData.currentMonotonicDay + 12 * self.daysPerPeriod, self.envMapGeneration.currentData.currentDay + 12 * self.daysPerPeriod, self.envMapGeneration.currentData.dayTime, self.daysPerPeriod, false)
    self.envMapGeneration = nil
    print("Finished environment map generation")
  end
  v2:update(dt)
  v2:update(dt)
  local v5 = v5:getEffectiveTimeScale()
  self.dayTime = self.dayTime + dt * v5
  self:updateTimeValues(false)
  self.realHourTimer = self.realHourTimer - dt
  if self.realHourTimer <= 0 then
    v2:publish(MessageType.REALHOUR_CHANGED)
    self.realHourTimer = self.realHourLength
  end
  if self.lighting ~= nil then
    local v2, v3, v4 = v2:getCloudEnvMapInfo()
    v5:setCloudEnvMapInfo(v2, v3, v4)
    local v7 = v7:getDaylightTimes()
    v5:setDaylightTimes(...)
    v5:update(dt)
  end
  self:updateSceneParameters()
  if self.debugSeasonalShaderParameter then
    local v8 = self:getSeasonShaderValue()
    local v6 = string.format(...)
    renderText(...)
    if g_currentMission.snowSystem ~= nil then
      v8 = v8:getSnowShaderValue()
      v6 = string.format(...)
      renderText(...)
    end
  end
  if g_server ~= nil then
    self.timeUpdateTime = self.timeUpdateTime + dt
    if self.timeUpdateInterval < self.timeUpdateTime then
      EnvironmentTimeEvent.broadcastEvent()
      self.timeUpdateTime = 0
    end
    if Platform.gameplay.hasShortNights then
      v2 = v2:getIsSleeping()
      if not v2 then
        if self.daylight.logicalNightStartMinutes > self.dayTime / 60000 and self.dayTime / 60000 >= self.daylight.logicalNightEndMinutes then
        end
        if v3 ~= self.lastNightState then
          if v3 then
            -- if v0.nightTimeScale then goto L434 end
          end
          v4:setTimeScaleMultiplier(1)
        end
        self.lastNightState = v3
      end
    end
  end
end
function Environment:updateTimeValues(initialState)
  local v3 = math.floor(self.dayTime / 3600000 + 0.0001)
  local v4 = math.floor((self.dayTime / 3600000 + 0.0001 - v3) * 60)
  v5:setDayTime(self.dayTime)
  if v4 ~= self.currentMinute then
    while true do
      if not (v4 ~= self.currentMinute) then
        break
      end
      self.currentMinute = self.currentMinute + 1
      if 60 <= self.currentMinute then
        self.currentMinute = 0
      end
      self:updateAmbientSoundModifiers()
      if not not initialState then
        continue
      end
      v11:publish(MessageType.MINUTE_CHANGED, self.currentMinute)
      v11:onMinuteChanged(self.currentMinute)
    end
  end
  if v3 ~= self.currentHour then
    self.currentHour = v3
    if self.currentHour == 24 then
      self.currentHour = 0
    end
  end
  if 86400000 < self.dayTime then
    self.dayTime = self.dayTime - 86400000
    self.currentDay = self.currentDay + 1
    self.currentMonotonicDay = self.currentMonotonicDay + 1
  end
  if not v6 then
    -- if not v1 then goto L282 end
  end
  self.currentDayInPeriod = (self.currentDay - 1) % self.daysPerPeriod + 1
  local v11 = math.ceil(((self.currentDay - 1) % self.daysPerPeriod * Environment.PERIODS_IN_YEAR + 1) / self.daysPerPeriod)
  if v11 ~= self.currentPeriod then
    self.currentPeriod = v11
    if not self.visualPeriodLocked then
      self.currentVisualPeriod = self.currentPeriod
    end
  end
  local v13 = math.floor((self.currentDay - 1) / self.daysPerPeriod * 3)
  local v12 = math.fmod(v13, Environment.SEASONS_IN_YEAR)
  if v12 ~= self.currentSeason then
    self.currentSeason = v12
    if not self.visualPeriodLocked then
      self.currentVisualSeason = v12
    end
    if self.daysPerPeriod ~= self.plannedDaysPerPeriod then
      self.daysPerPeriod = self.plannedDaysPerPeriod
      self.timeAdjustment = 1 / self.daysPerPeriod
      local v15 = math.floor((self.currentDay - 1) / self.daysPerPeriod * self.daysPerPeriod)
      self.currentDay = v15 + 1
      self.currentDayInPeriod = (self.currentDay - 1) % self.daysPerPeriod + 1
    end
  end
  local v14 = math.fmod(self.currentDay - 1, self.daysPerPeriod * 3)
  self.currentDayInSeason = v14 + 1
  if self.visualPeriodLocked then
    v13 = math.floor((self.currentVisualPeriod - 1) % 1.5 * self.daysPerPeriod + 1)
    self.currentVisualDayInSeason = v13
  else
    self.currentVisualDayInSeason = self.currentDayInSeason
  end
  v14 = math.floor((self.currentDay - 1) / self.daysPerPeriod * Environment.PERIODS_IN_YEAR)
  if v14 + 1 ~= self.currentYear then
    self.currentYear = v14 + 1
  end
  if not v6 then
    -- if not v1 then goto L287 end
  end
  self:updateJulianDay()
  if v5 and not initialState then
    v11:publish(MessageType.HOUR_CHANGED, self.currentHour)
    v11:onHourChanged()
  end
  if v6 and not initialState then
    v11:publish(MessageType.DAY_CHANGED, self.currentDay)
    v11:onDayChanged()
    if v10 then
      v11:publish(MessageType.PERIOD_LENGTH_CHANGED, self.daysPerPeriod, self.timeAdjustment)
    end
    if v7 then
      v11:publish(MessageType.PERIOD_CHANGED, self.currentPeriod)
      if self.currentVisualPeriod ~= Environment.PERIOD.EARLY_SPRING and self.currentVisualPeriod ~= Environment.PERIOD.MID_SPRING and self.currentVisualPeriod ~= Environment.PERIOD.LATE_SPRING then
      end
      v14(v15)
      if v13 ~= v12.EARLY_SUMMER and v13 ~= v12.MID_SUMMER and v13 ~= v12.LATE_SUMMER then
      end
      v14(v15)
      if v13 ~= v12.EARLY_AUTUMN and v13 ~= v12.MID_AUTUMN and v13 ~= v12.LATE_AUTUMN then
      end
      v14(v15)
      if v13 ~= v12.EARLY_WINTER and v13 ~= v12.MID_WINTER and v13 ~= v12.LATE_WINTER then
      end
      v14(v15)
      v14:setDayOfYear(Environment.PERIOD_DAY_MAPPING[v13], self.currentVisualSeason)
    end
    if v8 then
      v11:publish(MessageType.SEASON_CHANGED, self.currentSeason)
    end
    if v9 then
      v11:publish(MessageType.YEAR_CHANGED, self.currentYear)
    end
  end
end
function Environment.addTimeRange(v0, v1, v2, v3)
  return {from = v1, to = v2, func = v3}
end
function Environment:updateAmbientSoundModifiers()
  local v2 = v2:getHardcodedFromTime(self.dayTime / 3600000)
  for v6, v7 in pairs(self.timeRanges) do
    if v7.from < v7.to then
      if v7.from <= v2 and v2 >= v7.to then
      end
      v8(v9)
    else
      if v7.from > v2 and v2 >= v7.to then
      end
      v8(v9)
    end
  end
end
function Environment:updateSceneParameters()
  if self.dayNightCycle and self.lighting.sunLightId ~= nil then
    if self.daylight.logicalNightStartMinutes > self.dayTime / 60000 and self.dayTime / 60000 >= self.daylight.logicalNightEndMinutes then
    end
    if self.isSunOn ~= not v3 then
      self.isSunOn = not v3
      v3:setIsSunOn(not v3)
      v3:publish(MessageType.WEATHER_CHANGED)
    end
  end
  if self.forcedSeasonShaderValue == nil then
    local v3 = self:getSeasonShaderValue()
    setSharedShaderParameter(...)
  end
end
function Environment:onWeatherChanged(weatherObject)
  v2:setWeather(weatherObject.weatherType)
end
function Environment.resetSceneParameters(v0)
  setSharedShaderParameter(Shader.PARAM_SHARED_SEASON, 0)
end
function Environment:getSeasonShaderValue()
  if self.visualPeriodLocked then
    return (self.currentVisualSeason - 1) % 4 + 0.5
  end
  return (self.currentSeason - 1) % 4 + (self.currentDay - 1) % 3 * self.daysPerPeriod / 3 * self.daysPerPeriod + (self.dayTime * Environment.DAYTIME_TO_HOURS_MULT + 0.0001) / 3 * self.daysPerPeriod
end
function Environment:setCustomLighting(lighting)
  if self.lighting ~= nil then
    v2:reset()
  end
  if not lighting then
  end
  self.lighting = v2
  self.lighting.sunLightId = self.baseLighting.sunLightId
  local v4 = v4:getDaylightTimes()
  v2:setDaylightTimes(...)
  v2:update(1, true)
end
function Environment:setSunVisibility(isVisible)
  if isVisible then
    local v2, v3, v4 = unpack(self.baseLighting.sunColor)
    setLightColor(self.baseLighting.sunLightId, v2, v3, v4)
    return
  end
  setLightColor(self.baseLighting.sunLightId, 0, 0, 0)
end
function Environment:getDayAndDayTime(dayTime, dayOffset)
  local v3, v4 = math.modf(dayTime / self.dayLength)
  return dayOffset + v3, v4 * self.dayLength
end
function Environment:getDaysPerSeason()
  return self.daysPerPeriod * 3
end
function Environment:getSeasonAtDay(day)
  local v5 = math.floor((self.currentDay + day - self.currentMonotonicDay - 1) / self.daysPerPeriod * 3)
  return math.fmod(v5, Environment.SEASONS_IN_YEAR)
end
function Environment:getVisualSeasonAtDay(day)
  if self.visualPeriodLocked then
    return self.currentVisualSeason
  end
  return self:getSeasonAtDay(day)
end
function Environment:setEnvironmentTime(currentMonotonicDay, currentDay, dayTime, daysPerPeriod, isDelta)
  self.currentDay = currentDay
  self.currentMonotonicDay = currentMonotonicDay
  self.dayTime = dayTime
  self.daysPerPeriod = daysPerPeriod
  if not isDelta then
    while true do
      if not (86400000 < self.dayTime) then
        break
      end
      self.dayTime = self.dayTime - 86400000
      self.currentDay = self.currentDay + 1
      self.currentMonotonicDay = self.currentMonotonicDay + 1
    end
    local v7 = math.floor(self.dayTime / 3600000 + 0.0001)
    self.currentHour = v7
    v7 = math.floor((self.dayTime / 3600000 + 0.0001 - self.currentHour) * 60)
    self.currentMinute = v7
  end
  self:updateTimeValues(true)
end
function Environment:getEnvironmentTime()
  return self.currentHour + self.currentMinute / 100
end
function Environment:onPlayerEntered()
  v1:setIsInVehicle(false)
  self.ambientSoundModifiers.setInVehicle(false)
  self.ambientSoundModifiers.setOutVehicle(true)
end
function Environment:onPlayerLeft()
  v1:setIsInVehicle(true)
  self.ambientSoundModifiers.setInVehicle(true)
  self.ambientSoundModifiers.setOutVehicle(false)
end
function Environment:getJulianDay()
  if self.daylight.latitude < 0 then
  end
  local v4 = math.floor(v1[self.currentVisualSeason] + self.currentVisualDayInSeason / 3 * self.daysPerPeriod * 91)
  return math.fmod(v4, 365)
end
function Environment:updateJulianDay()
  if self.daylight ~= nil then
    local v3 = self:getJulianDay()
    v1:setJulianDay(...)
  end
end
function Environment:getSeasonFromString()
  local v1 = self:lower()
  if v1 == "spring" then
    return Environment.SEASON.SPRING
  end
  if self == "autumn" then
    return Environment.SEASON.AUTUMN
  end
  if self == "winter" then
    return Environment.SEASON.WINTER
  end
  return Environment.SEASON.SUMMER
end
function Environment:getPeriodAndAlphaIntoPeriod()
  return self.currentPeriod, (self.currentDayInPeriod - 1 + self.dayTime * Environment.DAYTIME_TO_HOURS_MULT) / self.daysPerPeriod
end
function Environment:getDirtColors()
  return self.dirtColorDefault, self.dirtColorSnow
end
function Environment:getPeriodFromDay(day)
  return math.ceil(((self.currentDay + day - self.currentMonotonicDay - 1) % self.daysPerPeriod * Environment.PERIODS_IN_YEAR + 1) / self.daysPerPeriod)
end
function Environment:getDayInPeriodFromDay(day)
  return (self.currentDay + day - self.currentMonotonicDay - 1) % self.daysPerPeriod + 1
end
function Environment:setFixedPeriod(period)
  if period == nil and self.visualPeriodLocked == true then
    self.visualPeriodLocked = false
    self.currentVisualPeriod = self.currentPeriod
    self.currentVisualSeason = self.currentSeason
    local v3 = math.fmod(self.currentDay - 1, self.daysPerPeriod * 3)
    self.currentDayInSeason = v3 + 1
    self.currentVisualDayInSeason = self.currentDayInSeason
    self.mission.missionInfo.fixedSeasonalVisuals = nil
    self:updateJulianDay()
    v2:rebuild()
    return
  end
  if period ~= nil then
    if self.visualPeriodLocked ~= false then
      -- if v0.currentVisualPeriod == v1 then goto L123 end
    end
    local v2 = MathUtil.clamp(period, 1, 12)
    self.visualPeriodLocked = true
    self.currentVisualPeriod = v2
    v2 = math.floor((v2 - 1) / 3)
    self.currentVisualSeason = v2
    v3 = math.fmod(self.currentDay - 1, self.daysPerPeriod * 3)
    self.currentDayInSeason = v3 + 1
    v2 = math.floor((self.currentVisualPeriod - 1) % 1.5 * self.daysPerPeriod + 1)
    self.currentVisualDayInSeason = v2
    self.mission.missionInfo.fixedSeasonalVisuals = v2
    self:updateJulianDay()
    v2:rebuild()
  end
end
function Environment:setPlannedDaysPerPeriod(numDays)
  local v2 = MathUtil.clamp(numDays, 1, Environment.MAX_DAYS_PER_PERIOD)
  self.plannedDaysPerPeriod = v2
  self.mission.missionInfo.plannedDaysPerPeriod = self.plannedDaysPerPeriod
end
function Environment:consoleCommandSetDayTime(dayTime, skipDayOnly)
  local v3 = v3:getIsServer()
  if v3 then
    v3 = tonumber(dayTime)
    if v3 ~= nil then
      v3 = math.floor(v3 * 1000 * 60 * 60)
      if v3 < self.dayTime then
        if skipDayOnly then
        else
        end
      end
      self:setEnvironmentTime(v5, v4, v3, self.daysPerPeriod, false)
      v6:update(1, true)
      EnvironmentTimeEvent.broadcastEvent()
      return "DayTime = " .. dayTime .. ", Day = " .. v4 .. "[" .. v5 .. "]"
    end
    return "Error: Invalid arguments. Arguments: dayTime[h] skipDayOnly[true|false]"
  end
  return "Error: Server only command"
end
function Environment:consoleCommandSetFixedVisuals(period)
  if period == nil then
    self:setFixedPeriod(nil)
    return
  end
  local v4 = tonumber(period)
  self:setFixedPeriod(...)
end
function Environment:consoleCommandReloadEnvironment()
  v4:unsubscribeAll(self)
  self:load(self.xmlFilename)
  self.lighting.colorGradingFileCurve = self.lighting.colorGradingFileCurve
  self.lighting.envMapBasePath = self.lighting.envMapBasePath
  self.lighting.envMapTimes = self.lighting.envMapTimes
  setColorGradingSettings("data/maps/default_colorGrading.xml", "data/maps/default_colorGrading.xml", 1)
  v4:update(1, true)
  return "reloaded environment"
end
function Environment:consoleCommandSetFixedExposureSettings(keyValue, minExposure, maxExposure)
  local v4 = tonumber(keyValue)
  v4 = tonumber(minExposure)
  v4 = tonumber(maxExposure)
  if v4 ~= nil then
    if v4 ~= nil then
      if v4 == nil then
      end
      local v6 = math.pow(2, maxExposure)
      local v7 = math.pow(2, minExposure)
      v7 = string.format("Enabled fixed exposure settings (key %.2f exposure [%.2f %.2f] [%.4f %.4f])", keyValue, minExposure, maxExposure, keyValue / v6, keyValue / v7)
      -- goto L61  (LOP_JUMP +11)
    end
    local v5 = string.format("Enabled fixed exposure key %.2f", keyValue)
  else
  end
  v5:setFixedExposureSettings(keyValue, minExposure, maxExposure)
  if self.lighting == self.baseLighting then
    v5:updateExposureSettings()
  end
  return v4
end
function Environment:consoleCommandToggleAutoExposure(reset)
  if self.setExposureRange_backup ~= nil then
    setExposureRange = self.setExposureRange_backup
    self.setExposureRange_backup = nil
    return "Reenabled auto exposure"
  end
  self.setExposureRange_backup = setExposureRange
  function setExposureRange()
  end
  local v2 = Utils.stringToBoolean(reset)
  if v2 then
    resetAutoExposure()
    local v4 = getExposureRange()
    v2 = string.format(...)
    return v2
  end
  v4 = getExposureRange()
  v2 = string.format(...)
  return v2
end
function Environment:consoleCommandSetSeasonalShader(val)
  if val ~= nil then
    local v2 = tonumber(val)
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L16
  end
  self.forcedSeasonShaderValue = nil
  self:updateSceneParameters()
  return "Reset the value to match the environment"
  v2 = tonumber(val)
  local v3 = math.max(v2, 0)
  v2 = math.min(v3, 4)
  self.forcedSeasonShaderValue = v2
  setSharedShaderParameter(Shader.PARAM_SHARED_SEASON, v2)
  local v4 = tostring(v2)
  return "Set shader parameter to " .. v4
end
function Environment:consoleCommandSeasonalShaderDebug()
  self.debugSeasonalShaderParameter = not self.debugSeasonalShaderParameter
end
function Environment:consoleCommandTakeEnvProbes(numIterations, mobile, outputDirectory)
  local v4 = tonumber(numIterations)
  if v4 == nil then
    return "Arguments: numIterations (required), mobile(optional, default: false), outputDirectory (optional, default: [map xml-path])"
  end
  if mobile == nil then
  end
  if mobile then
  end
  if self.baseLighting.envMapBasePath ~= nil then
  else
  end
  if outputDirectory ~= nil then
  end
  local v9 = v6:len()
  local v7 = v6:sub(...)
  if v7 ~= "/" then
  end
  createFolder(v6)
  print("Writing env maps to " .. v6)
  if 0 < #v5 then
    self.envMapGeneration = {tasks = {}}
    for v10, v11 in ipairs(self.weather.envMapCloudProbes) do
      table.insert(self.envMapGeneration.tasks, {cloudData = v11, setDefaultValues = true, windDirX = 0, windDirZ = 1, windVelocity = 0, cirrusCloudSpeedFactor = 0})
      table.insert(self.envMapGeneration.tasks, {})
      table.insert(self.envMapGeneration.tasks, {})
      table.insert(self.envMapGeneration.tasks, {})
      table.insert(self.envMapGeneration.tasks, {})
      table.insert(self.envMapGeneration.tasks, {})
      table.insert(self.envMapGeneration.tasks, {})
      for v16, v17 in ipairs(v5) do
        if mobile then
        else
        end
        local v21 = Lighting.getEnvMapBaseFilename(v17, v10)
        v18.filename = v6 .. v21
        table.insert(self.envMapGeneration.tasks, v18)
      end
    end
    v9 = table.copy(self.weather.cloudUpdater.lastClouds, math.huge)
    v9 = table.copy(self.weather.cloudUpdater.targetClouds, math.huge)
    v9 = v9:getGrowthMode()
    self.envMapGeneration.currentData = {lastClouds = v9, targetClouds = v9, alpha = self.weather.cloudUpdater.alpha, duration = self.weather.cloudUpdater.duration, windDirX = self.weather.cloudUpdater.windDirX, windDirZ = self.weather.cloudUpdater.windDirZ, windVelocity = self.weather.cloudUpdater.windVelocity, cirrusCloudSpeedFactor = self.weather.cloudUpdater.cirrusCloudSpeedFactor, growthMode = v9, dayTime = self.dayTime, currentMonotonicDay = self.currentMonotonicDay, currentDay = self.currentDay}
    v9:setGrowthMode(GrowthSystem.MODE.DISABLED, true)
    return "Starting env map generation"
  end
  return "Error: no envMapTimes defined in Lighting"
end
