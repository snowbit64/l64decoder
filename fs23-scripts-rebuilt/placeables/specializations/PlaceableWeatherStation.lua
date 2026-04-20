-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableWeatherStation = {}
function PlaceableWeatherStation.prerequisitesPresent(v0)
  return true
end
function PlaceableWeatherStation.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", PlaceableWeatherStation)
  SpecializationUtil.registerEventListener(v0, "onDelete", PlaceableWeatherStation)
  SpecializationUtil.registerEventListener(v0, "onFinalizePlacement", PlaceableWeatherStation)
end
function PlaceableWeatherStation:registerXMLPaths(v1)
  self:setXMLSpecializationType("WeatherStation")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".weatherStation.sounds", "idle")
  self:setXMLSpecializationType()
end
function PlaceableWeatherStation:onLoad(v1)
  if self.isClient then
    local v3 = v3:loadSampleFromXML(self.xmlFile, "placeable.weatherStation.sounds", "idle", self.baseDirectory, self.components, 0, AudioGroup.ENVIRONMENT, self.i3dMappings, nil)
    self.spec_weatherStation.sample = v3
  end
end
function PlaceableWeatherStation:onDelete()
  v1:removeWeatherStation(self)
  if self.isClient and self.spec_weatherStation.sample ~= nil then
    v2:deleteSample(self.spec_weatherStation.sample)
  end
end
function PlaceableWeatherStation:onFinalizePlacement()
  v1:addWeatherStation(self)
  if self.isClient and self.spec_weatherStation.sample ~= nil then
    v2:playSample(self.spec_weatherStation.sample)
  end
end
