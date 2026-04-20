-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WeatherStateEvent = {}
local WeatherInitEvent_mt = Class(WeatherStateEvent, Event)
InitStaticEventClass(WeatherStateEvent, "WeatherStateEvent", EventIds.EVENT_WEATHER_STATE)
function WeatherStateEvent.emptyNew()
  return Event.new(u0, NetworkNode.CHANNEL_SECONDARY)
end
function WeatherStateEvent.new(snowHeight, timeSinceLastRain)
  local v2 = WeatherStateEvent.emptyNew()
  v2.snowHeight = snowHeight
  v2.timeSinceLastRain = timeSinceLastRain
  return v2
end
function WeatherStateEvent:readStream(streamId, connection)
  local v3 = streamReadFloat32(streamId)
  self.snowHeight = v3
  v3 = streamReadFloat32(streamId)
  self.timeSinceLastRain = v3
  self:run(connection)
end
function WeatherStateEvent:writeStream(streamId, connection)
  streamWriteFloat32(streamId, self.snowHeight)
  streamWriteFloat32(streamId, self.timeSinceLastRain)
end
function WeatherStateEvent:run(connection)
  v2:setInitialState(self.snowHeight, self.timeSinceLastRain)
end
