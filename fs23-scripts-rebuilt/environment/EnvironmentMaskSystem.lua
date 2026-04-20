-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EnvironmentMaskSystem = {VISIBILITY_CONDITION_FLAGS_XML_PATH = "shared/visibilityConditionFlags.xml"}
local EnvironmentMaskSystem_mt = Class(EnvironmentMaskSystem)
function EnvironmentMaskSystem.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(xmlFile, v4)
  v2.mission = mission
  v2.weatherMaskModifiers = {}
  v2.weatherFlagNameToModifier = {}
  v2.viewerSpatialityMaskModifiers = {}
  v2.viewerSpatialityFlagNameToModifier = {}
  v2.isDebugViewActive = false
  v2.minuteOfDay = 0
  v2.dayOfYear = 1
  v2.weatherMask = 0
  v2.viewerSpatialityMask = 0
  local xmlFile = XMLFile.load("visibilityConditionFlagsXml", EnvironmentMaskSystem.VISIBILITY_CONDITION_FLAGS_XML_PATH)
  xmlFile:iterate("visibilityConditionFlags.weatherFlags.flag", function(mission, customMt)
    local v4 = v4:getString(customMt .. "#name")
    local v5 = v5:getInt(customMt .. "#bit")
    v2:registerWeatherMaskModifier(...)
  end)
  local v4 = v2:getWeatherModifierUpdateFuncFromFlagName("SUN")
  v2.setWeatherSun = v4
  v4 = v2:getWeatherModifierUpdateFuncFromFlagName("RAIN")
  v2.setWeatherRain = v4
  v4 = v2:getWeatherModifierUpdateFuncFromFlagName("HAIL")
  v2.setWeatherHail = v4
  v4 = v2:getWeatherModifierUpdateFuncFromFlagName("SNOW")
  v2.setWeatherSnow = v4
  v4 = v2:getWeatherModifierUpdateFuncFromFlagName("CLOUDY")
  v2.setWeatherCloudy = v4
  v4 = v2:getWeatherModifierUpdateFuncFromFlagName("DAY")
  v2.setIsDay = v4
  v4 = v2:getWeatherModifierUpdateFuncFromFlagName("NIGHT")
  v2.setIsNight = v4
  v4 = v2:getWeatherModifierUpdateFuncFromFlagName("SPRING")
  v2.setIsSpring = v4
  v4 = v2:getWeatherModifierUpdateFuncFromFlagName("SUMMER")
  v2.setIsSummer = v4
  v4 = v2:getWeatherModifierUpdateFuncFromFlagName("AUTUMN")
  v2.setIsAutumn = v4
  v4 = v2:getWeatherModifierUpdateFuncFromFlagName("WINTER")
  v2.setIsWinter = v4
  xmlFile:iterate("visibilityConditionFlags.viewerSpatialityFlags.flag", function(mission, customMt)
    local v4 = v4:getString(customMt .. "#name")
    local v5 = v5:getInt(customMt .. "#bit")
    v2:registerViewerSpatialityMaskModifier(...)
  end)
  v4 = v2:getViewerSpatialityModifierUpdateFuncFromFlagName("INTERIOR")
  v2.setIsInterior = v4
  v4 = v2:getViewerSpatialityModifierUpdateFuncFromFlagName("EXTERIOR")
  v2.setIsExterior = v4
  v4 = v2:getViewerSpatialityModifierUpdateFuncFromFlagName("IN_VEHICLE")
  v2.setInVehicle = v4
  v4 = v2:getViewerSpatialityModifierUpdateFuncFromFlagName("OUT_VEHICLE")
  v2.setOutVehicle = v4
  xmlFile:delete()
  addConsoleCommand("gsEnvironmentMaskSystemToggleDebugView", "Toggles the environment mask system debug view", "consoleCommandToggleDebugView", v2)
  return v2
end
function EnvironmentMaskSystem.delete(v0)
  removeConsoleCommand("gsEnvironmentMaskSystemToggleDebugView")
end
function EnvironmentMaskSystem:update(dt)
  setEnvironmentSettings(self.minuteOfDay + 1, self.dayOfYear, self.weatherMask, self.viewerSpatialityMask)
end
function EnvironmentMaskSystem:draw()
  if self.isDebugViewActive then
    setTextColor(1, 1, 1, 1)
    setTextBold(true)
    setTextAlignment(RenderText.ALIGN_CENTER)
    local v4 = getCorrectTextSize(0.014)
    renderText(0.4, 0.82, v4, "Environment State")
    v4 = getCorrectTextSize(0.014)
    renderText(0.6, 0.82, v4, "Weather Mask:")
    v4 = getCorrectTextSize(0.014)
    renderText(0.7, 0.82, v4, "Viewer Spatiality Mask:")
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_LEFT)
    local textSize = getCorrectTextSize(0.012)
    local textOffset = getCorrectTextSize(0.001)
    for v7, v8 in ipairs(self.weatherMaskModifiers) do
      local v10 = bitAND(self.weatherMask, v8.bitflag)
      if v10 == 0 then
      end
      setTextAlignment(RenderText.ALIGN_RIGHT)
      renderText(0.6, v1, textSize, v8.name .. ":  ")
      setTextAlignment(RenderText.ALIGN_LEFT)
      local v14 = tostring(true)
      renderText(...)
    end
    for v7, v8 in ipairs(self.viewerSpatialityMaskModifiers) do
      v10 = bitAND(self.viewerSpatialityMask, v8.bitflag)
      if v10 == 0 then
      end
      setTextAlignment(RenderText.ALIGN_RIGHT)
      renderText(0.7, v1, textSize, v8.name .. ":  ")
      setTextAlignment(RenderText.ALIGN_LEFT)
      v14 = tostring(true)
      renderText(...)
    end
    setTextAlignment(RenderText.ALIGN_RIGHT)
    renderText(0.4, 0.8 - (textSize + textOffset) * 0, textSize, "MinuteOfDay:  ")
    renderText(0.4, 0.8 - (textSize + textOffset) * 1, textSize, "DayOfYear:  ")
    renderText(0.4, 0.8 - (textSize + textOffset) * 2, textSize, "WeatherMask:  ")
    renderText(0.4, 0.8 - (textSize + textOffset) * 3, textSize, "ViewerSpatialityMask:  ")
    setTextAlignment(RenderText.ALIGN_LEFT)
    v8 = tostring(self.minuteOfDay)
    renderText(...)
    v8 = tostring(self.dayOfYear)
    renderText(...)
    v8 = tostring(self.weatherMask)
    renderText(...)
    v8 = tostring(self.viewerSpatialityMask)
    renderText(...)
  end
end
function EnvironmentMaskSystem:setDayTime(dayTime)
  local v2 = math.floor(dayTime / 1000 / 60)
  self.minuteOfDay = v2
end
function EnvironmentMaskSystem:setDayOfYear(dayOfYear, season)
  local v3 = MathUtil.clamp(dayOfYear, 0, 365)
  self.dayOfYear = v3
  if season ~= Environment.SEASON.SPRING then
  end
  v3(true)
  if season ~= Environment.SEASON.SUMMER then
  end
  v3(true)
  if season ~= Environment.SEASON.AUTUMN then
  end
  v3(true)
  if season ~= Environment.SEASON.WINTER then
  end
  v3(true)
end
function EnvironmentMaskSystem:setWeather(weatherType)
  if weatherType.index ~= WeatherType.SUN then
  end
  v2(true)
  if weatherType.index ~= WeatherType.RAIN then
  end
  v2(true)
  if weatherType.index ~= WeatherType.HAIL then
  end
  v2(true)
  if weatherType.index ~= WeatherType.SNOW then
  end
  v2(true)
  if weatherType.index ~= WeatherType.CLOUDY then
  end
  v2(true)
end
function EnvironmentMaskSystem:setIsSunOn(isSunOn)
  self.setIsDay(isSunOn)
  self.setIsNight(not isSunOn)
end
function EnvironmentMaskSystem:setIsInVehicle(isInVehicle)
  self.setInVehicle(isInVehicle)
  self.setOutVehicle(not isInVehicle)
end
function EnvironmentMaskSystem:registerWeatherMaskModifier(modifierName, bit)
  local v3 = string.upper(modifierName)
  for v8, v9 in ipairs(self.weatherMaskModifiers) do
    if v9.name == v3 then
      Logging.error("Weather mask modifier name '%s' already used", modifierName)
      return false
    end
    if not (v9.bitflag == v4) then
      continue
    end
    Logging.error("Weather mask modifier '%s' bit '%d' already used for modifier '%s'", modifierName, bit, v9.name)
    return false
  end
  table.insert(self.weatherMaskModifiers, {name = v3, bitflag = v4, updateFunc = function(self)
    if self then
      local bit = bitOR(u0.weatherMask, u1.bitflag)
      u0.weatherMask = bit
      return
    end
    local v4 = bitNOT(u1.bitflag)
    bit = bitAND(...)
    u0.weatherMask = bit
  end})
  self.weatherFlagNameToModifier[{name = v3, bitflag = v4, updateFunc = function(self)
    if self then
      local bit = bitOR(u0.weatherMask, u1.bitflag)
      u0.weatherMask = bit
      return
    end
    local v4 = bitNOT(u1.bitflag)
    bit = bitAND(...)
    u0.weatherMask = bit
  end}.name] = {name = v3, bitflag = v4, updateFunc = function(self)
    if self then
      local bit = bitOR(u0.weatherMask, u1.bitflag)
      u0.weatherMask = bit
      return
    end
    local v4 = bitNOT(u1.bitflag)
    bit = bitAND(...)
    u0.weatherMask = bit
  end}
  return {name = v3, bitflag = v4, updateFunc = function(self)
    if self then
      local bit = bitOR(u0.weatherMask, u1.bitflag)
      u0.weatherMask = bit
      return
    end
    local v4 = bitNOT(u1.bitflag)
    bit = bitAND(...)
    u0.weatherMask = bit
  end}.updateFunc
end
function EnvironmentMaskSystem:registerViewerSpatialityMaskModifier(modifierName, bit)
  local v3 = string.upper(modifierName)
  for v8, v9 in ipairs(self.viewerSpatialityMaskModifiers) do
    if v9.name == v3 then
      Logging.error("Given viewer spatiality mask modifier name '%s' already used", modifierName)
      return false
    end
    if not (v9.bitflag == v4) then
      continue
    end
    Logging.error("Viewer spatiality mask modifier '%s' bit '%d' already used for modifier '%s'", modifierName, bit, v9.name)
    return false
  end
  table.insert(self.viewerSpatialityMaskModifiers, {name = v3, bitflag = v4, updateFunc = function(self)
    if self then
      local bit = bitOR(u0.viewerSpatialityMask, u1.bitflag)
      u0.viewerSpatialityMask = bit
      return
    end
    local v4 = bitNOT(u1.bitflag)
    bit = bitAND(...)
    u0.viewerSpatialityMask = bit
  end})
  self.viewerSpatialityFlagNameToModifier[{name = v3, bitflag = v4, updateFunc = function(self)
    if self then
      local bit = bitOR(u0.viewerSpatialityMask, u1.bitflag)
      u0.viewerSpatialityMask = bit
      return
    end
    local v4 = bitNOT(u1.bitflag)
    bit = bitAND(...)
    u0.viewerSpatialityMask = bit
  end}.name] = {name = v3, bitflag = v4, updateFunc = function(self)
    if self then
      local bit = bitOR(u0.viewerSpatialityMask, u1.bitflag)
      u0.viewerSpatialityMask = bit
      return
    end
    local v4 = bitNOT(u1.bitflag)
    bit = bitAND(...)
    u0.viewerSpatialityMask = bit
  end}
  return {name = v3, bitflag = v4, updateFunc = function(self)
    if self then
      local bit = bitOR(u0.viewerSpatialityMask, u1.bitflag)
      u0.viewerSpatialityMask = bit
      return
    end
    local v4 = bitNOT(u1.bitflag)
    bit = bitAND(...)
    u0.viewerSpatialityMask = bit
  end}.updateFunc
end
function EnvironmentMaskSystem:getWeatherModifierUpdateFuncFromFlagName(flagName)
  if self.weatherFlagNameToModifier[flagName] ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L16
  end
  Logging.error("No weather modifier registered for '%s'. Using empty update function", flagName)
  return function()
  end
  return v2.updateFunc
end
function EnvironmentMaskSystem:getViewerSpatialityModifierUpdateFuncFromFlagName(flagName)
  if self.viewerSpatialityFlagNameToModifier[flagName] ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L16
  end
  Logging.error("No viewer spatiality modifier registered for '%s'. Using empty update function", flagName)
  return function()
  end
  return v2.updateFunc
end
function EnvironmentMaskSystem:getWeatherMaskFromFlagNames(flagNames)
  if flagNames ~= nil and flagNames ~= "" then
    local v5 = flagNames:upper()
    local v4 = string.split(v5, " ")
    for v6, v7 in pairs(...) do
      if self.weatherFlagNameToModifier[v7] ~= nil then
        local v9 = bitOR(v2, self.weatherFlagNameToModifier[v7].bitflag)
      else
        local v12 = table.concatKeys(self.weatherFlagNameToModifier, " ")
        Logging.error(...)
      end
    end
    return v2
  end
  return nil
end
function EnvironmentMaskSystem:consoleCommandToggleDebugView()
  self.isDebugViewActive = not self.isDebugViewActive
  if self.isDebugViewActive then
    v1:addDrawable(self)
    return
  end
  v1:removeDrawable(self)
end
