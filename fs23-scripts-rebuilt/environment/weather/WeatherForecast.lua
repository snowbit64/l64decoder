-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WeatherForecast = {TYPE = {CLEAR = 1, CLOUDY = 2, MIXED = 3, WINDY = 4, RAIN = 5, SNOW = 6, HAIL = 7, FOG = 8, THUNDER = 9}, DAY_LENGTH = 86400000, CURVE_TOP_TIME = 0.64788735773, CURVE_BOTTOM_TIME = 0.14788735773, CLOUD_THRESHOLD = 0.5}
local WeatherForecast_mt = Class(WeatherForecast)
function WeatherForecast.new(owner, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.owner = owner
  return v2
end
function WeatherForecast:load()
  {}[WeatherType.SUN] = WeatherForecast.TYPE.CLEAR
  {}[WeatherType.RAIN] = WeatherForecast.TYPE.RAIN
  {}[WeatherType.CLOUDY] = WeatherForecast.TYPE.CLOUDY
  {}[WeatherType.SNOW] = WeatherForecast.TYPE.SNOW
  self.weatherTypeToForecastType = {}
end
function WeatherForecast:delete()
  self.owner = nil
end
function WeatherForecast:getCurrentWeather()
  local v1 = v1:getWeatherTypeAtTime(self.owner.owner.currentMonotonicDay, self.owner.owner.dayTime)
  local v3, v4, v5 = v3:getCurrentValues()
  local v7 = MathUtil.getYRotationFromDirection(v3, v4)
  local v6 = math.deg(...)
  v7 = MathUtil.round(v6 / 45)
  local v8 = v8:getCurrentTemperature()
  return {temperature = v8, windDirection = v7 * 45, windSpeed = v5, forecastType = self.weatherTypeToForecastType[v1]}
end
function WeatherForecast:dataForTime(day, time)
  for v6, v7 in ipairs(self.owner.forecastItems) do
    if v7.startDay == day and v7.startDayTime <= time then
      -- if v2 <= v7.startDayTime + v7.duration then goto L39 end
    end
    if not (v7.startDay < day) then
      continue
    end
    if not (time <= v7.startDayTime + v7.duration - WeatherForecast.DAY_LENGTH) then
      continue
    end
    local v8 = v8:getForecastInstanceVariation(v7)
    return v8, v7
  end
  return nil
end
function WeatherForecast:getHourlyForecast(hoursFromNow)
  if WeatherForecast.DAY_LENGTH < self.owner.owner.dayTime + hoursFromNow * 60 * 60 * 1000 then
  end
  local v4, v5 = self:dataForTime(v3, v2)
  if v4 == nil then
    return nil
  end
  if v2 / WeatherForecast.DAY_LENGTH <= WeatherForecast.CURVE_BOTTOM_TIME then
    -- if WeatherForecast.CURVE_BOTTOM_TIME > (v2 + 3600000) / WeatherForecast.DAY_LENGTH then goto L81 end
    local v11 = self:getTemperatureAtTimeForCurve(WeatherForecast.CURVE_BOTTOM_TIME, v4.minTemperature, v4.maxTemperature)
    local v9 = math.max(...)
  elseif v2 / WeatherForecast.DAY_LENGTH <= WeatherForecast.CURVE_TOP_TIME and WeatherForecast.CURVE_TOP_TIME <= (v2 + 3600000) / WeatherForecast.DAY_LENGTH then
    v11 = self:getTemperatureAtTimeForCurve(WeatherForecast.CURVE_TOP_TIME, v4.minTemperature, v4.maxTemperature)
    v9 = math.max(...)
  end
  v11 = self:getTemperatureAtTimeForCurve(v6, v4.minTemperature, v4.maxTemperature)
  v9 = math.max(...)
  v11 = self:getTemperatureAtTimeForCurve(v7, v4.minTemperature, v4.maxTemperature)
  v9 = math.max(...)
  v9 = v9:getWeatherObjectByIndex(v5.season, v5.objectIndex)
  local v13 = v9:getVariationByIndex(v5.variationIndex)
  if v13.wind ~= nil then
  end
  return {time = v2, day = v3, temperature = v8, windSpeed = v11, windDirection = v12, forecastType = v10}
end
function WeatherForecast:getDailyForecast(daysFromToday)
  local uncertaintyFactor = math.pow(1.025, daysFromToday - 1)
  for v15, v16 in ipairs(self.owner.forecastItems) do
    if v16.startDay ~= v2 then
      if not (v16.startDay == v2 - 1) then
        continue
      end
      if not (WeatherForecast.DAY_LENGTH < v16.startDayTime + v16.duration) then
        continue
      end
    end
    local v17 = v17:getForecastInstanceVariation(v16)
    table.insert(v3, v17)
    if v11 == -1 then
    end
    if v16.startDay == v2 then
    else
    end
    if WeatherForecast.DAY_LENGTH < v16.startDayTime + v16.duration then
      -- if v16.startDay ~= v2 - 1 then goto L118 end
    elseif v16.startDayTime + v16.duration <= WeatherForecast.DAY_LENGTH then
    else
    end
    if (v16.startDayTime + v16.duration * v19) / WeatherForecast.DAY_LENGTH % 1 <= WeatherForecast.CURVE_BOTTOM_TIME and WeatherForecast.CURVE_BOTTOM_TIME <= (v16.startDayTime + v16.duration * v20) / WeatherForecast.DAY_LENGTH then
      local v27 = self:getTemperatureAtTimeForCurve(WeatherForecast.CURVE_BOTTOM_TIME, v17.minTemperature, v17.maxTemperature)
      local v24 = math.min(v4, v27 / v18)
    end
    if v22 <= WeatherForecast.CURVE_TOP_TIME and WeatherForecast.CURVE_TOP_TIME <= v23 then
      v27 = self:getTemperatureAtTimeForCurve(WeatherForecast.CURVE_TOP_TIME, v17.minTemperature, v17.maxTemperature)
      v24 = math.max(v5, v27 * v18)
    end
    v24 = v24:getWeatherObjectByIndex(v16.season, v16.objectIndex)
    if v24.weatherType.index == WeatherType.SUN then
      -- if v6 ~= WeatherForecast.TYPE.CLOUDY then goto L302 end
    elseif v6 < WeatherForecast.TYPE.CLOUDY then
      -- if v24.weatherType.index ~= WeatherType.CLOUDY then goto L281 end
      if v7 then
        -- goto L302  (LOP_JUMP +28)
      end
    else
      if v24.weatherType.index == WeatherType.RAIN then
      elseif v24.weatherType.index == WeatherType.SNOW then
      end
    end
    local v26 = v24:getVariationByIndex(v16.variationIndex)
    if v26.wind ~= nil then
      v27 = math.max(v8, v26.wind.windVelocity * v18)
    end
  end
  v12 = MathUtil.round(v9 / 45)
  return {day = v2, highTemperature = v5, lowTemperature = v4, windSpeed = v8, windDirection = v12 * 45, forecastType = v6}
end
function WeatherForecast.getTemperatureAtTimeForCurve(v0, daysFromToday, v2, v3)
  local uncertaintyFactor = math.sin(2 * math.pi * daysFromToday - 2.5)
  return 0.5 * (v3 - v2) * uncertaintyFactor + v2 + 0.5 * (v3 - v2)
end
