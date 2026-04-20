-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateDrop = {}
local PlayerStateDrop_mt = Class(PlayerStateDrop, PlayerStateBase)
function PlayerStateDrop.new(player, stateMachine)
  return PlayerStateBase.new(player, stateMachine, u0)
end
function PlayerStateDrop:isAvailable()
  if self.player.isCarryingObject then
    return true
  end
  return false
end
function PlayerStateDrop:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  v1:pickUpObject(false)
  self:deactivate()
end
