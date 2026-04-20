-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FogStateEvent = {SEND_BITS_FOG_STATE = 6, SEND_BITS_FOG_FACTOR = 3, SEND_BITS_FOG_DURATION = 4}
local FogStateEvent_mt = Class(FogStateEvent, Event)
InitStaticEventClass(FogStateEvent, "FogStateEvent", EventIds.EVENT_FOG_STATE_EVENT)
function FogStateEvent.emptyNew()
  return Event.new(u0)
end
function FogStateEvent.new(targetValue, lastMieScale, alpha, duration, nightFactor, dayFactor)
  local v6 = FogStateEvent.emptyNew()
  v6.targetValue = targetValue
  v6.lastMieScale = lastMieScale
  v6.alpha = alpha
  v6.duration = duration
  v6.nightFactor = nightFactor
  v6.dayFactor = dayFactor
  return v6
end
function FogStateEvent:readStream(streamId, connection)
  local v5 = streamReadUIntN(streamId, FogStateEvent.SEND_BITS_FOG_STATE)
  local v9 = math.pow(2, FogStateEvent.SEND_BITS_FOG_STATE)
  self.targetValue = v5 * 1 / (v9 - 1) * 200
  v5 = streamReadUIntN(streamId, FogStateEvent.SEND_BITS_FOG_STATE)
  v9 = math.pow(2, FogStateEvent.SEND_BITS_FOG_STATE)
  self.lastMieScale = v5 * 1 / (v9 - 1) * 200
  local v4 = streamReadUIntN(streamId, FogStateEvent.SEND_BITS_FOG_STATE)
  local v8 = math.pow(2, FogStateEvent.SEND_BITS_FOG_STATE)
  self.alpha = v4 * 1 / (v8 - 1)
  local v3 = streamReadUIntN(streamId, FogStateEvent.SEND_BITS_FOG_DURATION)
  self.duration = v3
  v4 = streamReadUIntN(streamId, FogStateEvent.SEND_BITS_FOG_FACTOR)
  self.nightFactor = v4 * 0.25
  v4 = streamReadUIntN(streamId, FogStateEvent.SEND_BITS_FOG_FACTOR)
  self.dayFactor = v4 * 0.25
  self:run(connection)
end
function FogStateEvent:writeStream(streamId, connection)
  local v10 = math.pow(2, FogStateEvent.SEND_BITS_FOG_STATE)
  streamWriteUIntN(streamId, self.targetValue / 200 / 1 / (v10 - 1), FogStateEvent.SEND_BITS_FOG_STATE)
  v10 = math.pow(2, FogStateEvent.SEND_BITS_FOG_STATE)
  streamWriteUIntN(streamId, self.lastMieScale / 200 / 1 / (v10 - 1), FogStateEvent.SEND_BITS_FOG_STATE)
  v10 = math.pow(2, FogStateEvent.SEND_BITS_FOG_STATE)
  streamWriteUIntN(streamId, self.alpha / 1 / (v10 - 1), FogStateEvent.SEND_BITS_FOG_STATE)
  local v5 = MathUtil.msToHours(self.duration)
  streamWriteUIntN(streamId, v5, FogStateEvent.SEND_BITS_FOG_DURATION)
  streamWriteUIntN(streamId, self.nightFactor / 0.25, FogStateEvent.SEND_BITS_FOG_FACTOR)
  streamWriteUIntN(streamId, self.dayFactor / 0.25, FogStateEvent.SEND_BITS_FOG_FACTOR)
end
function FogStateEvent:run(connection)
  local v5 = MathUtil.hoursToMs(self.duration)
  v2:setTargetValues(...)
  g_currentMission.environment.weather.fogUpdater.lastMieScale = self.lastMieScale
  g_currentMission.environment.weather.fogUpdater.alpha = self.alpha - 0.001
  g_currentMission.environment.weather.nightFactor = self.nightFactor
  g_currentMission.environment.weather.dayFactor = self.dayFactor
end
