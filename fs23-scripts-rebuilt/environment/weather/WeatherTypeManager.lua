-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WeatherType = nil
WeatherTypeManager = {}
local WeatherTypeManager_mt = Class(WeatherTypeManager, AbstractManager)
function WeatherTypeManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function WeatherTypeManager:initDataStructures()
  self.weatherTypes = {}
  self.nameToIndex = {}
  self.indexToName = {}
  self:loadDefaultTypes()
  WeatherType = self.nameToIndex
end
function WeatherTypeManager:loadDefaultTypes()
  self:addWeatherType("SUN")
  self:addWeatherType("CLOUDY")
  self:addWeatherType("RAIN")
  self:addWeatherType("SNOW")
end
function WeatherTypeManager:addWeatherType(name)
  local v2 = ClassUtil.getIsValidIndexName(name)
  if not v2 then
    local v7 = tostring(name)
    print("Warning: '" .. v7 .. "' is not a valid name for a weather type. Ignoring it!")
    return nil
  end
  v2 = name:upper()
  table.insert(self.weatherTypes, {index = #self.weatherTypes + 1, name = v2})
  self.nameToIndex[v2] = {index = #self.weatherTypes + 1, name = v2}.index
  self.indexToName[{index = #self.weatherTypes + 1, name = v2}.index] = v2
  return {index = #self.weatherTypes + 1, name = v2}
end
function WeatherTypeManager:getWeatherTypes()
  return self.weatherTypes
end
function WeatherTypeManager:getWeatherTypeIndexByName(name)
  if name ~= nil then
    local v2 = ClassUtil.getIsValidIndexName(name)
    if v2 then
      v2 = name:upper()
      return self.nameToIndex[v2]
    end
  end
  return nil
end
function WeatherTypeManager:getWeatherTypeByName(name)
  if name ~= nil then
    local v2 = ClassUtil.getIsValidIndexName(name)
    if v2 then
      v2 = name:upper()
      if self.nameToIndex[v2] ~= nil then
        return self.weatherTypes[self.nameToIndex[v2]]
      end
    end
  end
  return nil
end
function WeatherTypeManager:getWeatherTypeByIndex(index)
  if index ~= nil then
    return self.weatherTypes[index]
  end
  return nil
end
function WeatherTypeManager:getWeatherTypeNameByIndex(index)
  if index ~= nil then
    return self.indexToName[index]
  end
  return nil
end
local v1 = WeatherTypeManager.new()
g_weatherTypeManager = v1
