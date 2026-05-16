-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EnvironmentTimeEvent = {}
local EnvironmentTimeEvent_mt = Class(EnvironmentTimeEvent, Event)
InitStaticEventClass(EnvironmentTimeEvent, "EnvironmentTimeEvent", EventIds.EVENT_ENVIRONMENT_TIME)
function EnvironmentTimeEvent.emptyNew()
  return Event.new(u0, NetworkNode.CHANNEL_SECONDARY)
end
function EnvironmentTimeEvent.new(newMonotonicDay, currentDay, dayTime, daysPerPeriod)
  local v4 = EnvironmentTimeEvent.emptyNew()
  v4.newMonotonicDay = newMonotonicDay
  v4.currentDay = currentDay
  v4.dayTime = dayTime
  v4.daysPerPeriod = daysPerPeriod
  return v4
end
function EnvironmentTimeEvent:readStream(streamId, connection)
  local v3 = streamReadInt32(streamId, 9)
  self.currentDay = v3
  v3 = streamReadUIntN(streamId, 5)
  self.daysPerPeriod = v3
  v3 = streamReadInt32(streamId)
  self.newMonotonicDay = v3
  v3 = streamReadFloat32(streamId)
  self.dayTime = v3
  if g_currentMission ~= nil and g_currentMission.environment ~= nil then
    v3:setEnvironmentTime(self.newMonotonicDay, self.currentDay, self.dayTime, self.daysPerPeriod, false)
  end
end
function EnvironmentTimeEvent:writeStream(streamId, connection)
  streamWriteInt32(streamId, self.currentDay, 9)
  streamWriteUIntN(streamId, self.daysPerPeriod, 5)
  streamWriteInt32(streamId, self.newMonotonicDay)
  streamWriteFloat32(streamId, self.dayTime)
end
function EnvironmentTimeEvent.run(v0, v1)
  print("The server should not receive a dayTime update")
end
function EnvironmentTimeEvent.broadcastEvent()
  local v1 = EnvironmentTimeEvent.new(g_currentMission.environment.currentMonotonicDay, g_currentMission.environment.currentDay, g_currentMission.environment.dayTime, g_currentMission.environment.daysPerPeriod)
  v2:broadcastEvent(v1)
end
