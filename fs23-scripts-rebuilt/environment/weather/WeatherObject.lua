-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WeatherObject = {}
local WeatherObject_mt = Class(WeatherObject)
function WeatherObject.new(weatherType, cloudUpdater, temperatureUpdater, windUpdater, customMt)
  if not customMt then
  end
  local v5 = v5(v6, v7)
  v5.weatherType = weatherType
  v5.temperatureUpdater = temperatureUpdater
  v5.cloudUpdater = cloudUpdater
  v5.windUpdater = windUpdater
  v5.variations = {}
  v5.weightedVariations = {}
  return v5
end
function WeatherObject:load(xmlFile, key, cloudPresets)
  local v4 = xmlFile:getInt(key .. "#weight", 1)
  self.weight = v4
  xmlFile:iterate(key .. ".variation", function(self, xmlFile)
    if u1 < #u0.variations then
      Logging.xmlWarning(u2, "Weather object variation limit (%d) readed at '%s'", u1, xmlFile)
      return false
    end
    local cloudPresets = cloudPresets:loadVariation(u2, xmlFile, {}, u3)
    if cloudPresets then
      table.insert(u0.variations, {})
      -- TODO: structure LOP_FORNPREP (pc 46, target 58)
      table.insert(u0.weightedVariations, {index = #u0.variations}.index)
      -- TODO: structure LOP_FORNLOOP (pc 57, target 47)
    end
    return true
  end)
  return true
end
function WeatherObject.loadVariation(v0, v1, v2, v3, v4)
  local v5 = v1:getInt(v2 .. "#weight", 1)
  v3.weight = v5
  local v6 = v1:getInt(v2 .. "#minHours", 5)
  v5 = MathUtil.clamp(v6, 1, 2 ^ Weather.SEND_BITS_DURATION - 1)
  v3.minHours = v5
  if v3.minHours < Weather.MIN_WEATHER_DURATION then
    Logging.xmlWarning(v1, "MinHours needs to be greater than %.1f hours for variation '%s'!", Weather.MIN_WEATHER_DURATION, v2)
    v3.minHours = Weather.MIN_WEATHER_DURATION
  end
  v6 = v1:getInt(v2 .. "#maxHours", 10)
  v5 = MathUtil.clamp(v6, 3, 2 ^ Weather.SEND_BITS_DURATION - 1)
  v3.maxHours = v5
  if v3.maxHours < v3.minHours then
    Logging.xmlWarning(v1, "MaxHours needs to be greater than minHours! for variation '%s'", v2)
    v3.maxHours = v3.minHours
  end
  v5 = v1:getInt(v2 .. "#minTemperature", 15)
  v6 = v1:getInt(v2 .. "#maxTemperature", 25)
  if 2 ^ Weather.SEND_BITS_TEMPERATURE < v5 then
    Logging.xmlWarning(v1, "Min temperature is too high. Maximum is %d for variation '%s'", 2 ^ Weather.SEND_BITS_TEMPERATURE, v2)
  elseif 2 ^ Weather.SEND_BITS_TEMPERATURE < v6 then
    Logging.xmlWarning(v1, "Max temperature is too high. Maximum is %d for variation '%s'", 2 ^ Weather.SEND_BITS_TEMPERATURE, v2)
  end
  if v6 < v5 then
  end
  v3.minTemperature = v5
  v3.maxTemperature = v6
  local v9 = v1:getString(v2 .. ".clouds" .. "#presetId")
  if v9 == nil then
    Logging.xmlWarning(v1, "Missing clouds presetId for '%s'", v2 .. ".clouds")
    return false
  end
  local v10 = string.upper(v9)
  if v4 == nil then
    printCallstack()
  end
  if v4[v9] == nil then
    Logging.xmlWarning(v1, "Clouds presetId '%s' is not defined for '%s'", v9, v8)
    return false
  end
  v10 = table.copy(v4[v9], math.huge)
  v3.clouds = v10
  v10 = WindObject.new()
  local v11 = v10:load(v1, v2 .. ".wind")
  if v11 then
    v3.wind = v10
  else
    v10:delete()
  end
  return true
end
function WeatherObject:getRandomVariationIndex()
  local v3 = math.random(1, #self.weightedVariations)
  return self.weightedVariations[v3]
end
function WeatherObject:getVariationByIndex(index)
  if index == nil then
    return nil
  end
  return self.variations[index]
end
function WeatherObject.delete(v0)
end
function WeatherObject.update(v0, v1)
end
function WeatherObject:activate(variationIndex, duration)
  v6:setTargetClouds(self.variations[variationIndex].clouds, duration)
  if duration ~= 0 then
  end
  v6:setTargetValues(v8, v9, true)
  if v5 ~= nil then
    v6:setTargetValues(v5.windDirectionX, v5.windDirectionZ, v5.windVelocity, v5.cirrusSpeedFactor, duration)
  end
end
function WeatherObject.deactivate(v0, v1)
end
