-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WeatherAddObjectEvent = {}
local WeatherInitEvent_mt = Class(WeatherAddObjectEvent, Event)
InitStaticEventClass(WeatherAddObjectEvent, "WeatherAddObjectEvent", EventIds.EVENT_WEATHER_ADD_OBJECT)
function WeatherAddObjectEvent.emptyNew()
  return Event.new(u0, NetworkNode.CHANNEL_SECONDARY)
end
function WeatherAddObjectEvent.new(instances, isInitialSync)
  local v2 = WeatherAddObjectEvent.emptyNew()
  v2.instances = instances
  v2.isInitialSync = isInitialSync
  return v2
end
function WeatherAddObjectEvent:readStream(streamId, connection)
  self.instances = {}
  local v3 = streamReadBool(streamId)
  self.isInitialSync = v3
  v3 = streamReadUIntN(streamId, Weather.SEND_BITS_NUM_OBJECTS)
  -- TODO: structure LOP_FORNPREP (pc 19, target 79)
  local v8 = streamReadUIntN(streamId, Weather.SEND_BITS_OBJECT_INDEX)
  local v9 = streamReadUIntN(streamId, Weather.SEND_BITS_OBJECT_VARIATION_INDEX)
  v9 = streamReadInt32(streamId)
  local v12 = streamReadUIntN(streamId, Weather.SEND_BITS_STARTTIME)
  local v15 = streamReadUIntN(streamId, Weather.SEND_BITS_DURATION)
  v12 = streamReadUIntN(streamId, 2)
  local v13 = WeatherInstance.createInstance(v8 + 1, v9 + 1, v9, v12 * 60 * 1000, (v15 + 1) * 60 * 60 * 1000, v12)
  table.insert(self.instances, v13)
  -- TODO: structure LOP_FORNLOOP (pc 78, target 20)
  self:run(connection)
end
function WeatherAddObjectEvent:writeStream(streamId, connection)
  streamWriteBool(streamId, self.isInitialSync)
  streamWriteUIntN(streamId, #self.instances, Weather.SEND_BITS_NUM_OBJECTS)
  for v6, v7 in ipairs(self.instances) do
    streamWriteUIntN(streamId, v7.objectIndex - 1, Weather.SEND_BITS_OBJECT_INDEX)
    streamWriteUIntN(streamId, v7.variationIndex - 1, Weather.SEND_BITS_OBJECT_VARIATION_INDEX)
    streamWriteInt32(streamId, v7.startDay)
    streamWriteUIntN(streamId, v7.startDayTime / 60000, Weather.SEND_BITS_STARTTIME)
    streamWriteUIntN(streamId, v7.duration / 3600000 - 1, Weather.SEND_BITS_DURATION)
    streamWriteUIntN(streamId, v7.season, 2)
  end
end
function WeatherAddObjectEvent:run(connection)
  if self.isInitialSync then
    g_currentMission.environment.weather.forecastItems = {}
  end
  for v5, v6 in ipairs(self.instances) do
    v7:addWeatherForecast(v6)
  end
  if self.isInitialSync then
    v2:init()
  end
end
