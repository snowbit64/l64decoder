-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GamePauseRequestEvent = {}
local GamePauseRequestEvent_mt = Class(GamePauseRequestEvent, Event)
InitStaticEventClass(GamePauseRequestEvent, "GamePauseRequestEvent", EventIds.EVENT_GAME_PAUSE_REQUEST)
function GamePauseRequestEvent.emptyNew()
  return Event.new(u0)
end
function GamePauseRequestEvent.new(pause)
  local v1 = GamePauseRequestEvent.emptyNew()
  v1.pause = pause
  return v1
end
function GamePauseRequestEvent:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  self.pause = v3
  self:run(connection)
end
function GamePauseRequestEvent:writeStream(streamId, connection)
  streamWriteBool(streamId, self.pause)
end
function GamePauseRequestEvent:run(connection)
  v2:setManualPause(self.pause)
end
