-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateBase = {}
local PlayerStateBase_mt = Class(PlayerStateBase)
function PlayerStateBase.new(player, stateMachine, custom_mt)
  if custom_mt == nil then
  end
  local v3 = setmetatable({}, custom_mt)
  v3.isActive = false
  v3.isInDebugMode = false
  v3.player = player
  v3.stateMachine = stateMachine
  return v3
end
function PlayerStateBase.delete(v0)
end
function PlayerStateBase.load(v0)
end
function PlayerStateBase:activate()
  self.isActive = true
end
function PlayerStateBase:deactivate()
  self.isActive = false
end
function PlayerStateBase:toggleDebugMode()
  if self.isInDebugMode then
    self.isInDebugMode = false
    return
  end
  self.isInDebugMode = true
end
function PlayerStateBase:inDebugMode()
  return self.isInDebugMode
end
function PlayerStateBase.debugDraw(v0, v1)
end
function PlayerStateBase:getStateMachine()
  return self.stateMachine
end
function PlayerStateBase.update(v0, v1)
end
function PlayerStateBase.updateTick(v0, v1)
end
