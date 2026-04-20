-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Weather = {DEBUG_ENABLED = false, TEMPERATURE_STABLE_CHANGE = 2, SEND_BITS_NUM_OBJECTS = 8, SEND_BITS_OBJECT_INDEX = 5, SEND_BITS_OBJECT_VARIATION_INDEX = 4, SEND_BITS_WIND_INDEX = 4, SEND_BITS_TEMPERATURE = 6, SEND_BITS_DURATION = 6, SEND_BITS_STARTTIME = 11, CHANGE_DURATION = 1800000, MIN_WEATHER_DURATION = 1}
local Weather_mt = Class(Weather)
function Weather.new(owner, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.owner = owner
  v2.isRainAllowed = false
  v2.typeToWeatherObject = {}
  v2.weatherObjects = {}
  v2.weightedWeatherObjects = {}
  v2.forecastItems = {}
  local v3 = CloudUpdater.new()
  v2.cloudUpdater = v3
  v3 = TemperatureUpdater.new()
  v2.temperatureUpdater = v3
  v3 = FogUpdater.new()
  v2.fogUpdater = v3
  v3 = getCloudQuality()
  if v3 == 0 then
    v3 = SkyBoxUpdater.new()
    v2.skyBoxUpdater = v3
  end
  v3 = WindUpdater.new()
  v2.windUpdater = v3
  v3:addWindChangedListener(v2.cloudUpdater)
  v3 = WeatherForecast.new(v2)
  v2.forecast = v3
  v2.timeSinceLastRain = 9999999
  v2.snowHeight = 0
  v2.fog = {height = 200, minMieScale = 1, maxMieScale = 100, rainMieScale = 100, startHour = 4, endHour = 10, fadeOut = 4, fadeIn = 2, nightFactor = 0, dayFactor = 0}
  v3 = Graph.new(24, 0.58, 0.5, 0.4, 0.4, 0, 40, true, "°", Graph.STYLE_LINES)
  v2.temperatureDebugGraph = v3
  v3:setColor(1, 0, 0, 1)
  v3:setBackgroundColor(0, 0, 0, 0.6)
  v3:setHorizontalLine(5, true, 1, 1, 1, 0.4)
  v3:setVerticalLine(6, true, 1, 1, 1, 0.3)
  v3 = createImageOverlay("data/shared/graph_pixel.png")
  v2.temperatureDebugOverlayCurrent = v3
  setOverlayColor(v2.temperatureDebugOverlayCurrent, 0, 1, 0, 1)
  addConsoleCommand("gsWeatherDebug", "Toggles weather debug", "consoleCommandWeatherToggleDebug", v2)
  if not g_currentMission.missionDynamicInfo.isMultiplayer then
    v3 = v3:getIsServer()
    if v3 then
      addConsoleCommand("gsWeatherReload", "Reloads weather data", "consoleCommandWeatherReloadData", v2)
      addConsoleCommand("gsWeatherSet", "Sets a weather object by type", "consoleCommandWeatherSet", v2)
      addConsoleCommand("gsWeatherAdd", "Adds a weather object by type", "consoleCommandWeatherAdd", v2)
      addConsoleCommand("gsWeatherSetFog", "Sets fog height, mieScale and duration", "consoleCommandWeatherSetFog", v2)
      addConsoleCommand("gsWeatherSetDebugWind", "Sets wind data", "consoleCommandWeatherSetDebugWind", v2)
      addConsoleCommand("gsWeatherSetClouds", "Sets cloud data", "consoleCommandWeatherSetClouds", v2)
      addConsoleCommand("gsWeatherToggleRandomWindWaving", "Toggles waving of random wind", "consoleCommandWeatherToggleRandomWindWaving", v2)
    end
  end
  return v2
end
function Weather:load(xmlFile, key)
  self.forecastItems = {}
  self.weatherObjects = {}
  self.weightedWeatherObjects = {}
  self:loadCloudPresets(xmlFile, key .. ".weather.cloudPresets", {})
  self.envMapCloudProbes = {}
  xmlFile:iterate(key .. ".weather.envMap.cloudProbe", function(self, xmlFile)
    local key = key:getString(xmlFile .. "#presetId")
    if key == nil then
      Logging.xmlWarning(u0, "Missing clouds presetId for '%s'", xmlFile)
      return false
    end
    local v3 = string.upper(key)
    if u1[v3] == nil then
      Logging.xmlWarning(u0, "Clouds presetId '%s' is not defined for '%s'", v3, xmlFile)
      return false
    end
    if #u2.envMapCloudProbes == 3 then
      Logging.xmlWarning(u0, "Only 3 different envmap types are supported for '%s'", key, xmlFile)
      return false
    end
    v3 = table.copy(u1[key], math.huge)
    table.insert(u2.envMapCloudProbes, v3)
  end)
  if #self.envMapCloudProbes == 0 then
    Logging.xmlWarning(xmlFile, "No env map cloud probes defined. Adding first cloud preset")
    local v4, v5 = next({})
    local v6 = table.copy(v5, math.huge)
    table.insert(self.envMapCloudProbes, v6)
  end
  for v7, v8 in pairs(v3) do
    if not (self.envMapCloudProbes[v8.envMapCloudProbeIndex] == nil) then
      continue
    end
    Logging.xmlWarning(xmlFile, "Invalid envMapCloudProbeIndex for cloud preset '%s'. Using 1 instead", v8.id)
    v8.envMapCloudProbeIndex = 1
  end
  -- TODO: structure LOP_FORNPREP (pc 98, target 128)
  self.weatherObjects[0] = {}
  self.weightedWeatherObjects[0] = {}
  self.typeToWeatherObject[0] = {}
  local v11 = string.format("%s.weather.season(%d)", key, 0)
  v8 = self:loadWeatherObjects(xmlFile, v11, 2 ^ Weather.SEND_BITS_OBJECT_INDEX - 1, v3)
  -- TODO: structure LOP_FORNLOOP (pc 127, target 99)
  if not self.firstWeatherType and not WeatherType.SUN and not WeatherType.CLOUDY then
  end
  self.firstWeatherType = v5
  v6 = xmlFile:getFloat(key .. ".weather.fog#height", self.fog.height)
  self.fog.height = v6
  if self.fog.height < 200 then
    self.fog.height = 200
    Logging.xmlWarning(xmlFile, "Fog height may not be smaller than 200 for '%s'!", key .. ".weather.fog#height")
  end
  v6 = xmlFile:getFloat(key .. ".weather.fog#minMieScale", self.fog.minMieScale)
  self.fog.minMieScale = v6
  if self.fog.minMieScale < 1 then
    self.fog.minMieScale = 1
    Logging.xmlWarning(xmlFile, "Fog minMieScale may not be smaller than 1 for '%s'!", key .. ".weather.fog#minMieScale")
  end
  v6 = xmlFile:getFloat(key .. ".weather.fog#maxMieScale", self.fog.maxMieScale)
  self.fog.maxMieScale = v6
  if self.fog.maxMieScale < 1 then
    self.fog.maxMieScale = 1
    Logging.xmlWarning(xmlFile, "Fog maxMieScale may not be smaller than 1 for '%s'!", key .. ".weather.fog#maxMieScale")
  end
  if self.fog.maxMieScale < self.fog.minMieScale then
    self.fog.minMieScale = self.fog.maxMieScale
    self.fog.maxMieScale = self.fog.minMieScale
    Logging.xmlWarning(xmlFile, "Fog maxMieScale has to be greater than minMieScale for '%s'!", key .. ".weather.fog#maxMieScale")
  end
  v6 = xmlFile:getFloat(key .. ".weather.fog#startHour", self.fog.startHour)
  self.fog.startHour = v6
  v6 = xmlFile:getFloat(key .. ".weather.fog#endHour", self.fog.endHour)
  self.fog.endHour = v6
  v6 = xmlFile:getFloat(key .. ".weather.fog#fadeIn", self.fog.fadeIn)
  self.fog.fadeIn = v6
  v6 = xmlFile:getFloat(key .. ".weather.fog#fadeOut", self.fog.fadeOut)
  self.fog.fadeOut = v6
  v6 = xmlFile:getFloat(key .. ".weather.fog#rainMieScale", self.fog.rainMieScale)
  self.fog.rainMieScale = v6
  v5:setHeight(self.fog.height)
  v5:setTargetValues(self.fog.minMieScale, 0)
  if self.skyBoxUpdater ~= nil then
    v5 = v5:load(xmlFile, key .. ".skyBox")
    if not v5 then
      v5:delete()
      self.skyBoxUpdater = nil
    end
  end
  if g_server ~= nil then
    self:addStartWeather()
    self:fillWeatherForecast()
    self:init()
  end
  v5:load()
  v5:setDayLength(self.owner.dayLength)
  v7 = g_currentMission.ambientSoundSystem:registerModifier("sun", nil)
  v7 = g_currentMission.ambientSoundSystem:registerModifier("rain", nil)
  v7 = g_currentMission.ambientSoundSystem:registerModifier("cloudy", nil)
  v7 = g_currentMission.ambientSoundSystem:registerModifier("snow", nil)
  self.ambientSoundModifiers = {setIsSun = v7, setIsRain = v7, setIsCloudy = v7, setIsSnow = v7}
  v7:unsubscribeAll(self)
  v7:subscribe(MessageType.HOUR_CHANGED, self.onHourChanged, self)
  v7:subscribe(MessageType.TIMESCALE_CHANGED, self.onTimeScaleChanged, self)
  v7:subscribe(MessageType.PERIOD_LENGTH_CHANGED, self.onPeriodLengthChanged, self)
end
function Weather.loadCloudPresets(v0, v1, v2, v3)
  v1:iterate(v2 .. ".cloudPreset", function(v0, v1)
    local v2 = v2:getString(v1 .. "#id")
    if v2 == nil then
      Logging.xmlWarning(u0, "Missing cloud preset id for '%s'", v1)
      return
    end
    local v3 = string.upper(v2)
    if u1[v3] ~= nil then
      Logging.xmlWarning(u0, "Cloud preset id '%s' already exists for '%s'", v3, v1)
      return
    end
    local v4 = v4:getInt(v1 .. ".cloudType#type")
    v4 = v4:getInt(v1 .. ".cloudType#cloudBaseShapeTiling", 2500)
    v4 = v4:getInt(v1 .. ".cloudType#cloudErosionTiling", 2500)
    v4 = v4:getFloat(v1 .. ".cloudType#precipitation")
    v4 = v4:getFloat(v1 .. ".scatteringLightSourceDamping#damping")
    v4 = v4:getFloat(v1 .. ".globalCoverage.combinedNoise#edge0")
    v4 = v4:getFloat(v1 .. ".globalCoverage.combinedNoise#edge1")
    v4 = v4:getFloat(v1 .. ".globalCoverage.noise0#weight")
    v4 = v4:getFloat(v1 .. ".globalCoverage.noise0#edge0")
    v4 = v4:getFloat(v1 .. ".globalCoverage.noise0#edge1")
    v4 = v4:getFloat(v1 .. ".globalCoverage.noise1#weight")
    v4 = v4:getFloat(v1 .. ".globalCoverage.noise1#edge0")
    v4 = v4:getFloat(v1 .. ".globalCoverage.noise1#edge1")
    v4 = v4:getFloat(v1 .. ".globalCoverage.noise2#weight")
    v4 = v4:getFloat(v1 .. ".globalCoverage.noise2#edge0")
    v4 = v4:getFloat(v1 .. ".globalCoverage.noise2#edge1")
    v4 = v4:getFloat(v1 .. ".globalCoverage.erosionWeight#weight")
    v4 = v4:getFloat(v1 .. ".cirrusCoverage#weight")
    local v5 = v5:getInt(v1 .. "#envMapCloudProbeIndex")
    u1[v2] = {id = v2, ["type"] = v4, cloudBaseShapeTiling = v4, cloudErosionTiling = v4, precipitation = v4, lightDamping = v4, combinedNoiseEdge0 = v4, combinedNoiseEdge1 = v4, noise0Weight = v4, noise0Edge0 = v4, noise0Edge1 = v4, noise1Weight = v4, noise1Edge0 = v4, noise1Edge1 = v4, noise2Weight = v4, noise2Edge0 = v4, noise2Edge1 = v4, erosionWeight = v4, cirrusCoverage = v4, envMapCloudProbeIndex = v5 or 1}
  end)
end
function Weather:loadWeatherObjects(xmlFile, key, maxObjects, cloudPresets)
  local seasonName = xmlFile:getString(key .. "#name")
  if seasonName == nil then
    Logging.warning("No season name given in '%s'", key)
  end
  local v6 = Environment.getSeasonFromString(seasonName)
  xmlFile:iterate(key .. ".object", function(self, xmlFile)
    if u1 < #u0 then
      Logging.warning("Weather object limit (%d) reached at '%s'", u1, xmlFile)
      return false
    end
    local key = key:getString(xmlFile .. "#typeName")
    local maxObjects = maxObjects:getWeatherTypeByName(key)
    if maxObjects ~= nil then
      if not u3.isRainAllowed then
        -- if v3.index == WeatherType.RAIN then goto L173 end
        -- if v3.index == WeatherType.SNOW then goto L173 end
      end
      if u4[maxObjects.index] == nil then
        local cloudPresets = cloudPresets:getString(xmlFile .. "#class")
        local seasonName = ClassUtil.getClassObject(cloudPresets)
        if seasonName ~= nil then
          local v6 = seasonName:isa(WeatherObject)
          if v6 then
            v6 = seasonName.new(maxObjects, u3.cloudUpdater, u3.temperatureUpdater, u3.windUpdater)
            local v7 = v6:load(u2, xmlFile, u5)
            -- if not v7 then goto L173 end
            v7 = v7:getBool(xmlFile .. "#isFirstWeather")
            if v7 then
              u3.firstWeatherType = maxObjects
            end
            table.insert(u0, v6)
            v6.index = #u0
            v6.season = u6
            u4[maxObjects.index] = v6
            -- TODO: structure LOP_FORNPREP (pc 122, target 132)
            table.insert(u7, v6.index)
            -- TODO: structure LOP_FORNLOOP (pc 131, target 123)
            u8 = u8 + 1
            -- goto L173  (LOP_JUMP +37)
          end
          local v9 = tostring(cloudPresets)
          Logging.xmlWarning(u2, "Given class '%s' is not a WeatherObject in '%s'", v9, xmlFile)
          -- goto L173  (LOP_JUMP +26)
        end
        v9 = tostring(cloudPresets)
        Logging.xmlWarning(u2, "Class '%s' not found in '%s'", v9, xmlFile)
        -- goto L173  (LOP_JUMP +15)
      end
      Logging.xmlWarning(u2, "WeatherObject for type '%s' already defined in '%s'", key, xmlFile)
    else
      Logging.xmlWarning(u2, "Invalid weather type '%s' in '%s'", key, xmlFile)
    end
    return true
  end)
  return 0
end
function Weather:delete()
  removeConsoleCommand("gsWeatherSet")
  removeConsoleCommand("gsWeatherAdd")
  removeConsoleCommand("gsWeatherDebug")
  removeConsoleCommand("gsWeatherSetWindState")
  removeConsoleCommand("gsWeatherSetFog")
  removeConsoleCommand("gsWeatherReload")
  removeConsoleCommand("gsWeatherSetDebugWind")
  removeConsoleCommand("gsWeatherSetClouds")
  removeConsoleCommand("gsWeatherToggleRandomWindWaving")
  delete(self.temperatureDebugOverlayCurrent)
  v1:delete()
  v1:removeWindChangedListener(self.cloudUpdater)
  -- TODO: structure LOP_FORNPREP (pc 56, target 70)
  for v7 = 1, #self.weatherObjects[0] do
    v8:delete()
    -- TODO: structure LOP_FORNLOOP (pc 68, target 64)
  end
  self.weatherObjects = {}
  if self.skyBoxUpdater ~= nil then
    v1:delete()
  end
  v1:delete()
  v1:unsubscribeAll(self)
end
function Weather:saveToXMLFile(xmlFile, key)
  for v6, v7 in ipairs(self.forecastItems) do
    local v8 = string.format("%s.forecast.instance(%d)", key, v6 - 1)
    if v6 == 1 then
      if self.forecastItems[2] ~= nil then
      end
      if self.owner.currentMonotonicDay < v10.startDay then
        local v16 = math.max(0, v10.startDay - self.owner.currentMonotonicDay + 1 - 1)
      else
      end
      setXMLFloat(xmlFile, v8 .. "#durationLeft", v9 / 3600000)
    end
    local v9 = self:getWeatherObjectByIndex(v7.season, v7.objectIndex)
    setXMLString(xmlFile, v8 .. "#typeName", v9.weatherType.name)
    setXMLInt(xmlFile, v8 .. "#variationIndex", v7.variationIndex)
    setXMLFloat(xmlFile, v8 .. "#duration", v7.duration / 3600000)
    setXMLInt(xmlFile, v8 .. "#season", v7.season)
  end
  v3:saveToXMLFile(xmlFile, key .. ".fog")
  setXMLFloat(xmlFile, key .. ".fog#nightFactor", self.fog.nightFactor)
  setXMLFloat(xmlFile, key .. ".fog#dayFactor", self.fog.dayFactor)
  setXMLFloat(xmlFile, key .. ".snow#height", self.snowHeight)
  v6 = MathUtil.msToMinutes(self.timeSinceLastRain)
  setXMLInt(...)
end
function Weather:loadFromXMLFile(xmlFile, key)
  local v4 = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
  v4:deactivate(1)
  self.forecastItems = {}
  while true do
    v8 = string.format("%s.forecast.instance(%d)", key, v5)
    v9 = hasXMLProperty(xmlFile, v8)
    if not v9 then
      break
    end
    v9 = getXMLString(xmlFile, v8 .. "#typeName")
    v11 = getXMLInt(xmlFile, v8 .. "#season")
    v10 = Utils.getNoNil(v11, Environment.SEASON.SUMMER)
    v11 = v11:getWeatherTypeByName(v9)
    if v11 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L162
      v14 = getXMLInt(xmlFile, v8 .. "#variationIndex")
      v15 = self.typeToWeatherObject[v10][v11.index]:getVariationByIndex(v14)
      if v15 ~= nil then
        v20 = getXMLFloat(xmlFile, v8 .. "#duration")
        v17 = math.max(v15.minHours, v20 or 1)
        v17 = getXMLFloat(xmlFile, v8 .. "#durationLeft")
        if v17 ~= nil and v7 - v17 * 3600000 - v17 * 60 * 60 * 1000 < 0 then
        end
        v18 = WeatherInstance.createInstance(v13, v14, v6, v7, v16, v10)
        self:addWeatherForecast(v18)
        v19, v20 = v19:getDayAndDayTime(v7 + v16, v6)
        -- goto L170  (LOP_JUMP +17)
      end
      v18 = tostring(v14)
      Logging.warning(...)
    else
      v14 = tostring(v9)
      Logging.warning(...)
    end
  end
  v8:loadFromXMLFile(xmlFile, key .. ".fog")
  v10 = getXMLFloat(xmlFile, key .. ".fog#nightFactor")
  v9 = Utils.getNoNil(v10, 0)
  self.fog.nightFactor = v9
  v10 = getXMLFloat(xmlFile, key .. ".fog#dayFactor")
  v9 = Utils.getNoNil(v10, 0)
  self.fog.dayFactor = v9
  v10 = getXMLInt(xmlFile, key .. "#timeSinceLastRain")
  v9 = Utils.getNoNil(v10, 0)
  v8 = MathUtil.minutesToMs(...)
  if not v8 then
  end
  self.timeSinceLastRain = v8
  v9 = getXMLFloat(xmlFile, key .. ".snow#height")
  v8 = Utils.getNoNil(v9, self.snowHeight)
  self.snowHeight = v8
  self:fillWeatherForecast()
  v10 = v10:getEffectiveTimeScale()
  v8:setTimeScale(...)
  self:init()
end
function Weather:update(dt)
  local v3 = v3:getEffectiveTimeScale()
  if 2 <= #self.forecastItems then
    local v5 = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
    if self.forecastItems[2].startDay >= self.owner.currentMonotonicDay then
      -- if v0.owner.currentMonotonicDay ~= v0.forecastItems[2].startDay then goto L148 end
      -- if v0.forecastItems[2].startDayTime >= v0.owner.dayTime then goto L148 end
    end
    v5:deactivate(Weather.CHANGE_DURATION)
    local v7 = self:getWeatherObjectByIndex(v3.season, v3.objectIndex)
    v7:activate(v3.variationIndex, Weather.CHANGE_DURATION)
    if v7.setWindValues ~= nil then
      local v8, v9, v10, v11 = v8:getCurrentValues()
      v7:setWindValues(v8, v9, v10, v11)
    end
    if v7.weatherType.index ~= WeatherType.RAIN then
      -- if v7.weatherType.index ~= WeatherType.SNOW then goto L115 end
    end
    v11 = MathUtil.hoursToMs(0.5)
    self:toggleFog(true, v11, self.fog.rainMieScale)
    -- goto L131  (LOP_JUMP +16)
    if v7.weatherType.index == WeatherType.SUN then
      v11 = MathUtil.hoursToMs(0.5)
      self:toggleFog(...)
    end
    self:onWeatherChanged(v7)
    table.remove(self.forecastItems, 1)
    if g_server ~= nil then
      self:fillWeatherForecast()
    end
    if v5.weatherType.index ~= WeatherType.RAIN and v5.weatherType.index ~= WeatherType.SNOW then
      v9 = v9:getEffectiveTimeScale()
      self.timeSinceLastRain = self.timeSinceLastRain + dt * v9
      -- goto L187  (LOP_JUMP +11)
    end
    self.timeSinceLastRain = 0
  elseif g_server ~= nil then
    self:fillWeatherForecast()
  end
  -- TODO: structure LOP_FORNPREP (pc 190, target 205)
  for v9 = 1, #self.weatherObjects[0] do
    v10:update(v2)
    -- TODO: structure LOP_FORNLOOP (pc 203, target 198)
  end
  v3:update(v2)
  v3:update(v2)
  v3:update(v2)
  v3:update(v2)
  if self.skyBoxUpdater ~= nil then
    v7 = self:getRainFallScale()
    v8 = self:getTimeUntilRain()
    v3:update(...)
  end
  v3 = v3:getTemperatureAtTime(self.owner.dayTime)
  v5 = v5:getEffectiveTimeScale()
  if not g_currentMission.missionInfo.isSnowEnabled then
    local v6 = math.max(self.snowHeight - 0.005 * dt / 1000 * v5 / 100, 0)
    self.snowHeight = v6
  else
    v6 = self:getIsRaining()
    if v6 then
      -- if v3 >= 3 then goto L323 end
      v9 = math.max(0, v3)
      local v13 = self:getRainFallScale()
      v7 = MathUtil.clamp(self.snowHeight + 0.0003 * dt / 1000 * v5 / 100 * v13 * (1 - v9 / 4), 0, 0.5)
      self.snowHeight = v7
    elseif 5 <= v3 then
      self.snowHeight = 0
      v6:removeAll()
    else
      if 2 < v3 and 0 < self.snowHeight then
        v7 = self:getIsRaining()
        if v7 then
        else
        end
        v7 = MathUtil.clamp(self.snowHeight - v3 * 0.001 * dt / 1000 * v5 / 100 * v6, 0, 0.5)
        self.snowHeight = v7
        if self.snowHeight == 0 then
          v7:removeAll()
        end
      end
    end
  end
  v6:setSnowHeight(self.snowHeight)
  v6 = self:getRainFallScale(true)
  v8 = self:getRainFallScale(false)
  if 0 >= v6 then
  end
  v8(true)
  if 0 >= v7 then
  end
  v8(true)
end
function Weather:draw()
  if Weather.DEBUG_ENABLED then
    local v2, v3 = v2:getCurrentValues(self.owner.dayTime)
    local v4 = v4:getTemperatureAtTime(self.owner.dayTime)
    table.insert({}, {name = "TEMPERATURE", value = ""})
    local v8 = string.format("%.2f°", v4)
    table.insert({}, {name = "current", value = v8})
    v8 = string.format("%.2f°", v2)
    table.insert({}, {name = "currentMin", value = v8})
    v8 = string.format("%.2f°", v3)
    table.insert({}, {name = "currentMax", value = v8})
    table.insert({}, {name = "", value = ""})
    table.insert({}, {name = "SNOW", value = ""})
    v8 = string.format("%.5f", self.snowHeight)
    table.insert({}, {name = "height", value = v8})
    table.insert({}, {name = "", value = ""})
    local v5, v6, v7, v8 = v5:getCurrentValues()
    table.insert({}, {name = "WIND", value = ""})
    local v12 = string.format("%.3f", v5)
    table.insert({}, {name = "dirX", value = v12})
    v12 = string.format("%.3f", v6)
    table.insert({}, {name = "dirZ", value = v12})
    v12 = MathUtil.mpsToKmh(v7)
    table.insert({}, {name = "velocity", value = v12})
    table.insert({}, {name = "cirrusSpeedFactor", value = v8})
    table.insert({}, {name = "", value = ""})
    table.insert({}, {name = "RAIN", value = ""})
    local v14 = self:getTimeSinceLastRain()
    v12 = string.format(...)
    table.insert({}, {name = "timeSince", value = v12})
    v14 = self:getRainFallScale()
    v12 = string.format(...)
    table.insert({}, {name = "rainFallScale", value = v12})
    table.insert({}, {name = "", value = "", columnOffset = 0.12})
    local v9 = v9:getCurrentValues()
    local v10 = v10:getHeight()
    table.insert({}, {name = "FOG", value = ""})
    v14 = string.format("%.1f", v10)
    table.insert({}, {name = "height", value = v14})
    v14 = string.format("%.3f", v9)
    table.insert({}, {name = "mieScale", value = v14})
    v14 = string.format("%.2f", self.fog.nightFactor)
    table.insert({}, {name = "nightFactor", value = v14})
    v14 = string.format("%.2f", self.fog.dayFactor)
    table.insert({}, {name = "dayFactor", value = v14})
    table.insert({}, {name = "", value = ""})
    local v11 = v11:getCurrentValues()
    table.insert({}, {name = "Clouds", value = ""})
    local v15 = string.format("%.2f", v11["type"])
    table.insert({}, {name = "Type", value = v15})
    v15 = string.format("%.3f", v11.precipitation)
    table.insert({}, {name = "Precipitation", value = v15})
    v15 = string.format("%.3f", v11.cloudBaseShapeTiling)
    table.insert({}, {name = "CloudBaseShapeTiling", value = v15})
    v15 = string.format("%.3f", v11.cloudErosionTiling)
    table.insert({}, {name = "CloudErosionTiling", value = v15})
    v15 = string.format("%.3f", v11.combinedNoiseEdge0)
    table.insert({}, {name = "CombinedNoiseEdge0", value = v15})
    v15 = string.format("%.3f", v11.combinedNoiseEdge1)
    table.insert({}, {name = "CombinedNoiseEdge1", value = v15})
    v15 = string.format("%.3f", v11.noise0Weight)
    table.insert({}, {name = "Noise0Weight", value = v15})
    v15 = string.format("%.3f", v11.noise0Edge0)
    table.insert({}, {name = "Noise0Edge0", value = v15})
    v15 = string.format("%.3f", v11.noise0Edge1)
    table.insert({}, {name = "Noise0Edge1", value = v15})
    v15 = string.format("%.3f", v11.noise1Weight)
    table.insert({}, {name = "Noise1Weight", value = v15})
    v15 = string.format("%.3f", v11.noise1Edge0)
    table.insert({}, {name = "Noise1Edge0", value = v15})
    v15 = string.format("%.3f", v11.noise1Edge1)
    table.insert({}, {name = "Noise1Edge1", value = v15})
    v15 = string.format("%.3f", v11.noise2Weight)
    table.insert({}, {name = "Noise2Weight", value = v15})
    v15 = string.format("%.3f", v11.noise2Edge0)
    table.insert({}, {name = "Noise2Edge0", value = v15})
    v15 = string.format("%.3f", v11.noise2Edge1)
    table.insert({}, {name = "Noise2Edge1", value = v15})
    v15 = string.format("%.3f", v11.erosionWeight)
    table.insert({}, {name = "ErosionWeight", value = v15})
    v15 = string.format("%.3f", v11.cirrusCoverage)
    table.insert({}, {name = "CirrusCoverage", value = v15})
    v15 = string.format("%.3f", v11.lightDamping)
    table.insert({}, {name = "LightDamping", value = v15})
    v15 = string.format("%d", v11.envMapCloudProbeIndex)
    table.insert({}, {name = "EnvMapIndex", value = v15})
    table.insert({}, {name = "", value = ""})
    if self.skyBoxUpdater ~= nil then
      v12:addDebugValues({})
    end
    table.insert(dt, {name = "", value = "", columnOffset = 0.12})
    for v15, v16 in ipairs(self.forecastItems) do
      local v18 = string.format("Var %d | Active | Duration %d | Season %d", v16.variationIndex, v16.duration / 3600000, v16.season)
      if 1 < v15 then
        if v16.startDay - self.owner.currentMonotonicDay == 0 then
          local v19 = string.format("Var %d | In %d minutes | Duration %d | Season %d", v16.variationIndex, (v16.startDayTime - self.owner.dayTime) / 60000, v16.duration / 3600000, v16.season)
        else
          v19 = string.format("Var %d | In %d days | Duration %d | Season %d", v16.variationIndex, v16.startDay - self.owner.currentMonotonicDay, v16.duration / 3600000, v16.season)
        end
      end
      v19 = self:getWeatherObjectByIndex(v16.season, v16.objectIndex)
      table.insert(dt, {name = v19.weatherType.name, value = v18})
    end
    DebugUtil.renderTable(0.61, 0.46, 0.011, dt)
    -- TODO: structure LOP_FORNPREP (pc 914, target 929)
    v16 = v16:getTemperatureAtTime(1 * 60 * 60 * 1000)
    self.temperatureDebugGraph:setValue(1, v16)
    -- TODO: structure LOP_FORNLOOP (pc 928, target 915)
    self.temperatureDebugGraph:draw()
    renderOverlay(self.temperatureDebugOverlayCurrent, self.temperatureDebugGraph.left + self.owner.dayTime / self.owner.dayLength * self.temperatureDebugGraph.width, self.temperatureDebugGraph.bottom, 1 / g_screenWidth, self.temperatureDebugGraph.height)
  end
end
function Weather:sendInitialState(connection)
  local v4 = WeatherStateEvent.new(self.snowHeight, self.timeSinceLastRain)
  connection:sendEvent(...)
end
function Weather:setInitialState(snowHeight, timeSinceLastRain)
  self.snowHeight = snowHeight
  self.timeSinceLastRain = timeSinceLastRain
  v3:setSnowHeight(self.snowHeight)
end
function Weather:setIsRainAllowed(isRainAllowed)
  self.isRainAllowed = isRainAllowed
end
function Weather:init()
  local v2 = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
  v2:activate(self.forecastItems[1].variationIndex, 0)
  if v2.setWindValues ~= nil then
    local v3, v4, v5, v6 = v3:getCurrentValues()
    v2:setWindValues(v3, v4, v5, v6)
  end
  self:onWeatherChanged(v2)
  v3:setSnowHeight(self.snowHeight)
end
function Weather:onWeatherChanged(weatherObject)
  v2:onWeatherChanged(weatherObject)
  if self.ambientSoundModifiers ~= nil then
    if weatherObject.weatherType.index ~= WeatherType.SUN then
    end
    v4(true)
    if v2 ~= WeatherType.CLOUDY then
    end
    v4(true)
  end
end
function Weather:rebuild()
  local dt = dt:getIsServer()
  if dt then
    dt = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
    dt:deactivate(1)
    dt:update(9999999)
    self.forecastItems = {}
    self:addStartWeather()
    self:fillWeatherForecast(true)
    local v4 = FogStateEvent.new(self.fogUpdater.targetMieScale, self.fogUpdater.lastMieScale, self.fogUpdater.alpha, self.fogUpdater.duration, self.fog.nightFactor, self.fog.dayFactor)
    v2:broadcastEvent(...)
  end
end
function Weather:getRandomWeatherObjectVariation(season, firstWeather)
  if self.typeToWeatherObject[season][self.firstWeatherType] ~= nil then
    -- if v2 then goto L25 end
  end
  local v6 = math.random(1, #self.weightedWeatherObjects[season])
  local v4 = self.weatherObjects[season][self.weightedWeatherObjects[season][v6]]:getRandomVariationIndex()
  return self.weatherObjects[season][self.weightedWeatherObjects[season][v6]].index, v4
end
function Weather:getWeatherObjectByIndex(season, index)
  return self.weatherObjects[season][index]
end
function Weather:getForecastInstanceVariation(instance)
  return v2:getVariationByIndex(instance.variationIndex)
end
function Weather:addStartWeather()
  local v3, v4 = v3:getDayAndDayTime(self.owner.dayTime, self.owner.currentMonotonicDay)
  local v5 = v5:getVisualSeasonAtDay(self.owner.currentMonotonicDay)
  local v6 = self:createRandomWeatherInstance(v5, v3, v4, true)
  self:addWeatherForecast(v6)
end
function Weather:fillWeatherForecast(isRebuild)
  while true do
    if v3 ~= nil and not (v3.startDay < self.owner.currentMonotonicDay + 9) then
      break
    end
    if not (#self.forecastItems < v4) then
      break
    end
    if v3 ~= nil then
    end
    v7, v8 = v7:getDayAndDayTime(v6, v5)
    v9 = v9:getVisualSeasonAtDay(v7)
    v10 = self:createRandomWeatherInstance(v9, v7, v8, false)
    self:addWeatherForecast(v10)
    table.insert(v2, v10)
  end
  if 0 < #v2 then
    v7 = WeatherAddObjectEvent.new(v2, isRebuild or false)
    v5:broadcastEvent(...)
  end
end
function Weather:createRandomWeatherInstance(season, startDay, startDayTime, firstWeather)
  local v5, v6 = self:getRandomWeatherObjectVariation(season, firstWeather)
  local v7 = self:getWeatherObjectByIndex(season, v5)
  local v8 = v7:getVariationByIndex(v6)
  local v11 = math.random(v8.minHours, v8.maxHours)
  local v10 = math.max(v11, 1)
  local v9 = MathUtil.hoursToMs(...)
  v10 = v10:getVisualSeasonAtDay(startDay + 1)
  if season == v10 then
  end
  if true then
    if 86400000 < startDayTime + v9 then
    end
    if 0 < 86400000 - startDayTime - v9 and 86400000 - startDayTime - v9 < 3600000 then
    end
  end
  return WeatherInstance.createInstance(v5, v6, startDay, startDayTime, v9, season)
end
function Weather:addWeatherForecast(weatherInstance)
  table.insert(self.forecastItems, weatherInstance)
end
function Weather:getIsReady()
  if 0 >= #self.forecastItems then
  end
  return true
end
function Weather:onTimeScaleChanged()
  local v3 = v3:getEffectiveTimeScale()
  dt:setTimeScale(...)
end
function Weather:toggleFog(active, duration, mieScale)
  if active then
    local scale = MathUtil.clamp((self.fog.nightFactor + self.fog.dayFactor) / 2, 0, 1)
    if not mieScale then
      local v5 = MathUtil.lerp(self.fog.minMieScale, self.fog.maxMieScale, scale)
    end
    v5:setTargetValues(v5, duration)
    return
  end
  scale:setTargetValues(self.fog.minMieScale, duration)
end
function Weather:getForecast()
  return self.forecast
end
function Weather:getRainFallScale(ignoreSnow)
  local v3 = Utils.getNoNil(ignoreSnow, false)
  -- TODO: structure LOP_FORNPREP (pc 10, target 45)
  for v9 = 1, #self.weatherObjects[0] do
    if v6[v9].getRainFallScale ~= nil then
      if ignoreSnow then
        -- if v6[v9].weatherType.index == WeatherType.SNOW then goto L43 end
      end
      local v13 = v13:getRainFallScale(ignoreSnow)
      local v11 = math.max(...)
    end
    -- TODO: structure LOP_FORNLOOP (pc 43, target 18)
  end
  return v2
end
function Weather:getCloudEnvMapInfo()
  return self.cloudUpdater.lastClouds.envMapCloudProbeIndex, self.cloudUpdater.targetClouds.envMapCloudProbeIndex, self.cloudUpdater.alpha
end
function Weather:getTimeUntilRain()
  -- TODO: structure LOP_FORNPREP (pc 5, target 57)
  local v5 = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
  if self.forecastItems[1].startDay == self.owner.currentMonotonicDay then
    if v5.weatherType.index ~= WeatherType.RAIN then
      -- if v5.weatherType.index ~= WeatherType.SNOW then goto L56 end
    end
    if self.owner.dayTime < v4.startDayTime then
      return v4.startDayTime - self.owner.dayTime
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 56, target 6)
  return math.huge
end
function Weather:getTimeSinceLastRain()
  return MathUtil.msToMinutes(self.timeSinceLastRain)
end
function Weather:getGroundWetness()
  local timeSinceLastRain = self:getTimeSinceLastRain()
  if 30 <= timeSinceLastRain then
    return 0
  end
  local v2 = self:getIsRaining()
  if v2 then
    v2 = self:getRainFallScale()
    return v2
  end
  return (30 - timeSinceLastRain) / 30 * 0.6
end
function Weather:getIsRaining()
  local v2 = self:getRainFallScale()
  if 0.05 >= v2 then
  end
  return true
end
function Weather:getWeatherTypeAtTime(day, dayTime)
  if g_client ~= nil and #self.forecastItems == 0 then
    return WeatherType.SUN
  end
  for v7, v8 in ipairs(self.forecastItems) do
    if v8.startDay >= day then
      if not (v8.startDay == day) then
        break
      end
      if not (v8.startDayTime < dayTime) then
        break
      end
    end
    continue
    break
  end
  v4 = self:getWeatherObjectByIndex(v3.season, v3.objectIndex)
  return v4.weatherType.index
end
function Weather:getCurrentMinMaxTemperatures()
  return dt:getCurrentValues()
end
function Weather:getCurrentTemperature()
  return dt:getTemperatureAtTime(self.owner.dayTime)
end
function Weather:getCurrentTemperatureTrend()
  local currentVariation = self:getForecastInstanceVariation(self.forecastItems[1])
  local nextVariation = self:getForecastInstanceVariation(self.forecastItems[2])
  local v7 = math.abs((currentVariation.minTemperature + currentVariation.maxTemperature) * 0.5 - (nextVariation.minTemperature + nextVariation.maxTemperature) * 0.5)
  if Weather.TEMPERATURE_STABLE_CHANGE < v7 then
    v7 = MathUtil.sign((currentVariation.minTemperature + currentVariation.maxTemperature) * 0.5 - (nextVariation.minTemperature + nextVariation.maxTemperature) * 0.5)
  end
  return v6
end
function Weather:getCurrentWeatherType()
  local v2 = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
  return v2.weatherType.index
end
function Weather:getNextWeatherType(beforeDay, beforeTime)
  if beforeDay >= self.forecastItems[2].startDay then
    -- if v0.forecastItems[2].startDay ~= v1 then goto L18 end
    -- if v2 >= v0.forecastItems[2].startDayTime then goto L18 end
  end
  local v4 = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
  return v4.weatherType.index
end
function Weather:onHourChanged()
  if self.timeSinceLastRain ~= 0 then
    if self.owner.currentHour == self.fog.startHour then
      local v6 = MathUtil.hoursToMs(self.fog.fadeIn)
      self:toggleFog(...)
    elseif self.owner.currentHour == self.fog.endHour then
      v6 = MathUtil.hoursToMs(self.fog.fadeOut)
      self:toggleFog(...)
    end
  end
  if 0 < #self.forecastItems then
    local v4 = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
    if v4.weatherType.index == WeatherType.SUN then
    elseif v4.weatherType.index == WeatherType.CLOUDY then
    else
      if v4.weatherType.index == WeatherType.RAIN then
      end
    end
    if dt == 0 then
      v2.nightFactor = v5
      return
    end
    if dt == 15 then
      v2.dayFactor = v5
    end
  end
end
function Weather:onPeriodLengthChanged()
  self:rebuild()
end
function Weather:consoleCommandWeatherSet(typeName, variationIndex)
  local v4 = tonumber(variationIndex)
  if self.forecastItems[1] ~= nil then
    local v6 = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
  end
  self.forecastItems = {}
  v6 = v6:getWeatherTypeByName(typeName)
  if v6 ~= nil and self.typeToWeatherObject[v3.currentSeason][v6.index] ~= nil then
    if not variationIndex then
      local v10 = self.typeToWeatherObject[v3.currentSeason][v6.index]:getRandomVariationIndex()
    end
    local v8 = v7:getVariationByIndex(v10)
    if v8 == nil then
      local v11 = v7:getRandomVariationIndex()
      local v9 = v7:getVariationByIndex(...)
    end
    v10 = math.random(v8.minHours, v8.maxHours)
    v9 = MathUtil.hoursToMs(...)
    if self.forecastItems[2] == nil and self.forecastItems[1] == nil then
    end
    if v11 ~= nil then
    end
    local v14, v15 = v14:getDayAndDayTime(v13 + v9, v12)
    v14 = WeatherInstance.createInstance(v7.index, v8.index, v14, v15, v9, v3.currentSeason)
    table.insert(self.forecastItems, v10, v14)
    self:fillWeatherForecast()
    if v5 ~= nil then
      v5:deactivate(1)
      v5:update(9999999)
    end
    self:init()
    local v17 = typeName:upper()
    v15 = string.format(...)
    return v15
  end
  for v11, v12 in pairs(self.typeToWeatherObject[v3.currentSeason]) do
    local v16 = v16:getWeatherTypeByIndex(v11)
    table.insert(v7, v16.name)
  end
  v11 = table.concat(v7, ", ")
  v8 = string.format(...)
  return v8
end
function Weather:consoleCommandWeatherAdd(typeName)
  local v3 = v3:getWeatherTypeByName(typeName)
  if v3 ~= nil and self.typeToWeatherObject[g_currentMission.environment.currentSeason][v3.index] ~= nil then
    local v7 = self.typeToWeatherObject[g_currentMission.environment.currentSeason][v3.index]:getRandomVariationIndex()
    local v5 = self.typeToWeatherObject[g_currentMission.environment.currentSeason][v3.index]:getVariationByIndex(...)
    v7 = math.random(v5.minHours, v5.maxHours)
    local v6 = MathUtil.hoursToMs(...)
    if self.forecastItems[2] == nil and self.forecastItems[1] == nil then
    end
    if v8 ~= nil then
    end
    local v11, v12 = v11:getDayAndDayTime(v10 + v6, v9)
    v11 = WeatherInstance.createInstance(v4.index, v5.index, v11, v12, v6, v2.currentSeason)
    table.insert(self.forecastItems, v7, v11)
    -- TODO: structure LOP_FORNPREP (pc 116, target 138)
    local v20, v21 = v20:getDayAndDayTime(v12 + v6, v11)
    self.forecastItems[v7 + 1].startDay = v20
    self.forecastItems[v7 + 1].startDayTime = v21
    -- TODO: structure LOP_FORNLOOP (pc 137, target 117)
    return string.format("Added state %s. Starts in %d minutes...", typeName, (v11.startDayTime - self.owner.dayTime) / 60000 + (v11 - self.owner.currentMonotonicDay) * 24 * 60)
  end
  for v8, v9 in pairs(self.typeToWeatherObject[v2.currentSeason]) do
    local v13 = v13:getWeatherTypeByIndex(v8)
    table.insert(v4, v13.name)
  end
  v8 = table.concat(v4, ", ")
  v5 = string.format(...)
  return v5
end
function Weather:consoleCommandWeatherSetFog(height, mieScale, transitionDurationMinutes)
  local v4 = tonumber(height)
  v4 = tonumber(mieScale)
  v4 = tonumber(transitionDurationMinutes)
  if v4 ~= nil then
    if self.backupFogHeight == nil then
      local v5 = v5:getHeight()
      self.backupFogHeight = v5
    end
    v5:setHeight(height)
  elseif self.backupFogHeight ~= nil then
    v5:setHeight(self.backupFogHeight)
    self.backupFogHeight = nil
  end
  v5:setForcedTargetValues(mieScale, v4)
  if mieScale ~= nil then
    v5 = string.format("Updated fog mieScale=%d duration=%dmin\n%s", mieScale, transitionDurationMinutes, "Usage: 'gsWeatherSetFog fogPlaneHeight mieScale transitionDurationMinutes'. Use 'gsWeatherSetFog' without any arguments to reset.")
    return v5
  end
  v5 = string.format("Reset fog")
  return v5
end
function Weather.consoleCommandWeatherToggleDebug(v0)
  Weather.DEBUG_ENABLED = not Weather.DEBUG_ENABLED
  if Weather.DEBUG_ENABLED then
    height:addDrawable(v0)
  else
    height:removeDrawable(v0)
  end
  local transitionDurationMinutes = tostring(Weather.DEBUG_ENABLED)
  return "Weather Debug Enabled: " .. transitionDurationMinutes
end
function Weather:consoleCommandWeatherReloadData()
  local xmlFile = XMLFile.load("weather", self.owner.xmlFilename)
  local currentWeatherObject = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
  currentWeatherObject:deactivate(1)
  currentWeatherObject:update(9999999)
  for v6, v7 in ipairs(self.weatherObjects) do
    for v11, v12 in ipairs(v7) do
      v12:delete()
    end
  end
  self.weatherObjects = {}
  self:load(xmlFile, "environment")
  xmlFile:delete()
  return "Reloaded weather data"
end
function Weather:consoleCommandWeatherSetDebugWind(xDir, zDir, speed, cirrusSpeedFactor, duration)
  if g_client ~= nil then
    local v6 = tonumber(speed)
    v6 = tonumber(xDir)
    v6 = tonumber(zDir)
    v6 = tonumber(cirrusSpeedFactor)
    v6 = tonumber(duration)
    if 0 < (v6 or 1) then
      v6:setTargetValues(v6 or 1, v6 or 1, v6 or 1, v6 or 1, v6 or 1)
    end
    return "Set debug wind speed " .. speed .. ". Command: gsWeatherSetDebugWind <xDir> <zDir> <speed> <cirrusSpeedFactor> <duration>"
  end
end
function Weather:consoleCommandWeatherSetClouds(typeFrom, typeTo, cloudDensityScale, cirrusCloudDensityScale)
  local v5 = tonumber(typeFrom)
  v5 = tonumber(typeTo)
  v5 = tonumber(cloudDensityScale)
  v5 = tonumber(cirrusCloudDensityScale)
  if v5 ~= nil and v5 ~= nil then
    local v6 = self:getWeatherObjectByIndex(self.forecastItems[1].season, self.forecastItems[1].objectIndex)
    v6.variations[self.forecastItems[1].variationIndex].clouds.cloudTypeFrom = v5
    v6.variations[self.forecastItems[1].variationIndex].clouds.cloudTypeTo = v5
    if not v5 then
    end
    v9.cloudCoverage = v10
    if not cirrusCloudDensityScale then
    end
    v9.cirrusCloudDensityScale = v10
    v6:activate(v7, 0.0001)
    if v6.setWindValues ~= nil then
      local v9, v10, v11, v12 = v9:getCurrentValues()
      v6:setWindValues(v9, v10, v11, v12)
    end
    return "Set cloud settings..."
  end
  return "Invalid usage. Command: gsWeatherSetClouds <typeFrom> <typeTo> <cloudDensityScale> <cirrusCloudDensityScale>"
end
function Weather:consoleCommandWeatherToggleRandomWindWaving()
  self.windUpdater.randomWindWaving = not self.windUpdater.randomWindWaving
  if self.windUpdater.randomWindWaving then
  else
  end
  return mieScale .. transitionDurationMinutes
end
