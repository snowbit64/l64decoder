-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GamePauseEvent = {}
local GamePauseEvent_mt = Class(GamePauseEvent, Event)
InitStaticEventClass(GamePauseEvent, "GamePauseEvent", EventIds.EVENT_GAME_PAUSE)
function GamePauseEvent.emptyNew()
  return Event.new(u0)
end
function GamePauseEvent.new(pause, manualPaused, isSynchronizing)
  local v3 = GamePauseEvent.emptyNew()
  v3.pause = pause
  v3.manualPaused = manualPaused
  v3.isSynchronizing = isSynchronizing
  return v3
end
function GamePauseEvent:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  self.pause = v3
  v3 = streamReadBool(streamId)
  self.manualPaused = v3
  v3 = streamReadBool(streamId)
  self.isSynchronizing = v3
  self:run(connection)
end
function GamePauseEvent:writeStream(streamId, connection)
  streamWriteBool(streamId, self.pause)
  streamWriteBool(streamId, self.manualPaused)
  streamWriteBool(streamId, self.isSynchronizing)
end
function GamePauseEvent:run(connection)
  g_currentMission.manualPaused = self.manualPaused
  g_currentMission.isSynchronizingWithPlayers = self.isSynchronizing
  if self.pause then
    v2:pauseGame()
    return
  end
  v2:doUnpauseGame()
end
function GamePauseEvent.sendEvent()
  local v0 = v0:getIsServer()
  if v0 then
    local v2 = GamePauseEvent.new(g_currentMission.paused, g_currentMission.manualPaused, g_currentMission.isSynchronizingWithPlayers)
    v0:broadcastEvent(v2, false)
  end
end
