-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuWeatherFrame = {}
local InGameMenuWeatherFrame_mt = Class(InGameMenuWeatherFrame, TabbedMenuFrameElement)
InGameMenuWeatherFrame.CONTROLS = {"forecastHourlyList", "forecastDailyList", "forecastHourlySlider", "nowTemperature", "nowWindSpeed", "nowTemperatureUnit", "nowWeatherIcon", "nowWindDirection", "nowWeatherMonth", CONTAINER = "container"}
InGameMenuWeatherFrame.TEXTURE_SIZE = {512, 512}
function InGameMenuWeatherFrame.register()
  local v0 = InGameMenuWeatherFrame.new()
  v1:loadGui("dataS/gui/InGameMenuWeatherFrame.xml", "WeatherFrame", v0, true)
end
function InGameMenuWeatherFrame.new(i18n, messageCenter)
  if not messageCenter then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuWeatherFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  v2.menuButtonInfo = {{inputAction = InputAction.MENU_BACK}}
  v2.scrollInputDelay = 0
  v2.scrollInputDelayDir = 0
  return v2
end
function InGameMenuWeatherFrame:createFromExistingGui(v1)
  local v2 = InGameMenuWeatherFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuWeatherFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDataSource(self)
end
function InGameMenuWeatherFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  v1:subscribe(MessageType.HOUR_CHANGED, self.onHourChanged, self)
  v1:subscribe(MessageType.DAY_CHANGED, self.onDayChanged, self)
  v1:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_FAHRENHEIT], self.onTemperatureUnitChanged, self)
  if g_currentMission ~= nil then
    self.forecast = g_currentMission.environment.weather.forecast
  end
  self:reloadData()
  self:setSoundSuppressed(true)
  v1:setFocus(self.forecastHourlyList)
  self:setSoundSuppressed(false)
end
function InGameMenuWeatherFrame.onFrameClose(v0)
  v1:unsubscribe(MessageType.HOUR_CHANGED, v0)
  v1:unsubscribe(MessageType.DAY_CHANGED, v0)
  v1:unsubscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_FAHRENHEIT], v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
end
function InGameMenuWeatherFrame:reloadData()
  v1:reloadData()
  v1:reloadData()
  self:updateTodayView()
end
function InGameMenuWeatherFrame:updateTodayView()
  local v1 = v1:getCurrentWeather()
  local v4 = v4:getTemperature(v1.temperature)
  v2:setValue(...)
  v4 = self:meterPerSecondToBeaufort(v1.windSpeed)
  v2:setValue(...)
  v4 = v4:getTemperatureUnit(false)
  v2:setText(...)
  local v6 = GuiUtils.getUVs(InGameMenuWeatherFrame.ICONS[v1.forecastType], InGameMenuWeatherFrame.TEXTURE_SIZE)
  local v5 = unpack(...)
  v2:setImageUVs(...)
  v6 = v6:formatDayInPeriod(g_currentMission.environment.currentDayInPeriod, g_currentMission.environment.currentPeriod, false)
  v4:setText(...)
  if Platform.isMobile then
    v5 = self:getWindDirectionIconProfileByAngle(v1.windDirection)
    self.nowWindDirection:applyProfile(v5)
  else
    local v8 = math.rad(v1.windDirection)
    self.nowWindDirection:setImageRotation(v8 + math.pi)
  end
  v4.overlay.customPivot = {v4.absSize[1] / 2, v4.absSize[2] * 0.343}
end
function InGameMenuWeatherFrame:getNumberOfItemsInSection(list, section)
  if self.forecast == nil then
    return 0
  end
  if list == self.forecastHourlyList then
    local v5 = v5:getFarmId()
    local v3 = v3:getHasWeatherStation(...)
    if v3 then
      return 24
    end
    return 12
  end
  return 7
end
function InGameMenuWeatherFrame:populateCellForItemInSection(list, section, index, cell)
  if list == self.forecastHourlyList then
    local v5 = v5:getHourlyForecast(index - 1)
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L241
    local v6 = math.floor(v5.time / 3600000 + 0.0001)
    local v7 = GuiUtils.getUVs(InGameMenuWeatherFrame.ICONS[v5.forecastType], InGameMenuWeatherFrame.TEXTURE_SIZE)
    local v8 = cell:getAttribute("icon")
    local v11 = unpack(v7)
    v8:setImageUVs(...)
    v8 = cell:getAttribute("time")
    local v10 = string.format("%02d:00", v6)
    v8:setText(...)
    v8 = cell:getAttribute("temperature")
    v8:setValue(v5.temperature)
    v8 = cell:getAttribute("windSpeed")
    v10 = self:meterPerSecondToBeaufort(v5.windSpeed)
    v8:setValue(...)
    if Platform.isMobile then
      v8 = self:getWindDirectionIconProfileByAngle(v5.windDirection)
      local dir = cell:getAttribute("windDirection")
      dir:applyProfile(v8)
      -- goto L241  (LOP_JUMP +144)
    end
    v8 = cell:getAttribute("windDirection")
    v11 = math.rad(v5.windDirection)
    v8:setImageRotation(v11 + math.pi)
  else
    v5 = v5:getDailyForecast(index)
    v6 = GuiUtils.getUVs(InGameMenuWeatherFrame.ICONS[v5.forecastType], InGameMenuWeatherFrame.TEXTURE_SIZE)
    v7 = cell:getAttribute("icon")
    v10 = unpack(v6)
    v7:setImageUVs(...)
    v7 = v7:getPeriodFromDay(v5.day)
    v8 = v8:getDayInPeriodFromDay(v5.day)
    dir = cell:getAttribute("day")
    v11 = v11:formatDayInPeriod(v8, v7, false)
    dir:setText(...)
    dir = cell:getAttribute("highTemperature")
    dir:setValue(v5.highTemperature)
    dir = cell:getAttribute("lowTemperature")
    dir:setValue(v5.lowTemperature)
    dir = cell:getAttribute("windSpeed")
    v11 = self:meterPerSecondToBeaufort(v5.windSpeed)
    dir:setValue(...)
    if Platform.isMobile then
      dir = self:getWindDirectionIconProfileByAngle(v5.windDirection)
      v10 = cell:getAttribute("windDirection")
      v10:applyProfile(dir)
    else
      dir = cell:getAttribute("windDirection")
      local v12 = math.rad(v5.windDirection)
      dir:setImageRotation(v12 + math.pi)
    end
  end
  v5 = cell:getAttribute("windDirection")
  v5.overlay.customPivot = {v5.size[1] * 0.5, v5.size[2] * 0.343}
end
function InGameMenuWeatherFrame.meterPerSecondToBeaufort(v0, v1)
  local v5 = math.ceil(v1, 0)
  local v3 = math.pow(v5 / 0.836, 0.6666666666666666)
  return math.floor(...)
end
function InGameMenuWeatherFrame.getWindDirectionIconProfileByAngle(v0, v1)
  local v2 = MathUtil.snapValue(v1 % 360, 45)
  return InGameMenuWeatherFrame.WIND_DIRECTION_PROFILES[v2]
end
function InGameMenuWeatherFrame:onDayChanged()
  self:reloadData()
end
function InGameMenuWeatherFrame:onHourChanged()
  self:reloadData()
end
function InGameMenuWeatherFrame:inputEvent(action, value, eventUsed)
  if action == InputAction.MENU_AXIS_LEFT_RIGHT and value >= -g_analogStickHTolerance then
  end
  if action == InputAction.MENU_AXIS_LEFT_RIGHT and g_analogStickHTolerance >= value then
  end
  if not v4 then
    -- if not v5 then goto L58 end
  end
  if v4 then
  else
  end
  if v6 == self.scrollInputDelayDir then
    -- if 250 >= g_time - v0.scrollInputDelay then goto L58 end
  end
  self.scrollInputDelayDir = v6
  self.scrollInputDelay = g_time
  local v10 = v10:getValue()
  v7:setValue(v10 + v6)
  return true
end
function InGameMenuWeatherFrame:onTemperatureUnitChanged()
  self:updateTodayView()
end
{}[WeatherForecast.TYPE.CLEAR] = {0, 0, 128, 128}
{}[WeatherForecast.TYPE.CLOUDY] = {256, 0, 128, 128}
{}[WeatherForecast.TYPE.MIXED] = {128, 0, 128, 128}
{}[WeatherForecast.TYPE.RAIN] = {384, 0, 128, 128}
{}[WeatherForecast.TYPE.SNOW] = {0, 128, 128, 128}
{}[WeatherForecast.TYPE.HAIL] = {128, 128, 128, 128}
{}[WeatherForecast.TYPE.FOG] = {384, 128, 128, 128}
{}[WeatherForecast.TYPE.WINDY] = {256, 128, 128, 128}
{}[WeatherForecast.TYPE.THUNDER] = {0, 192, 128, 128}
InGameMenuWeatherFrame.ICONS = {}
{}[0] = "ingameMenuWeatherWindIndicatorIcon"
{nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon45", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon90", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon135", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon180", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon225"}[270] = "ingameMenuWeatherWindIndicatorIcon270"
{nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon45", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon90", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon135", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon180", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon225"}[315] = "ingameMenuWeatherWindIndicatorIcon315"
InGameMenuWeatherFrame.WIND_DIRECTION_PROFILES = {nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon45", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon90", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon135", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon180", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "ingameMenuWeatherWindIndicatorIcon225"}
