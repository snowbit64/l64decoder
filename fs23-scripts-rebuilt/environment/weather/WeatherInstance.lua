-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WeatherInstance = {}
local WeatherInstance_mt = Class(WeatherInstance)
WeatherInstance.HOURTIME = 3600000
WeatherInstance.MINUTETIME = 60000
function WeatherInstance.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.objectIndex = nil
  v1.variationIndex = nil
  v1.startDay = 0
  v1.startDayTime = 0
  v1.duration = 0
  v1.season = 0
  return v1
end
function WeatherInstance.createInstance(objectIndex, variationIndex, startDay, startDayTime, duration, season)
  local v6 = math.floor(startDayTime / WeatherInstance.MINUTETIME)
  v6 = WeatherInstance.new()
  v6.objectIndex = objectIndex
  v6.variationIndex = variationIndex
  v6.startDay = startDay
  v6.startDayTime = v6 * WeatherInstance.MINUTETIME
  v6.duration = duration
  v6.season = season
  return v6
end
