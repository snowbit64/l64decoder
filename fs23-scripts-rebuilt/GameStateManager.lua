-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GameStateManager = {}
local GameStateManager_mt = Class(GameStateManager)
function GameStateManager.new(customMt)
  if not customMt then
  end
  v2(v3, v4)
  v1.gameStateChangeListeners = {}
  v1.gameState = GameState.STARTING
  return v1
end
function GameStateManager.getGameStateIndexByName(v0, v1)
  if v1 ~= nil then
    local v2 = v1:upper()
    return GameState[v2]
  end
  return nil
end
function GameStateManager:setGameState(newState)
  if newState ~= nil and self.gameState ~= newState then
    v2:publish(MessageType.GAME_STATE_CHANGED, newState, self.gameState)
    self.gameState = newState
  end
end
function GameStateManager:getGameState()
  return self.gameState
end
local v1 = GameStateManager.new()
g_gameStateManager = v1
