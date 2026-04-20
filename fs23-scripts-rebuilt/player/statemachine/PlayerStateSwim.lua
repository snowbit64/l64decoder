-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateSwim = {}
local PlayerStateSwim_mt = Class(PlayerStateSwim, PlayerStateBase)
function PlayerStateSwim.new(player, stateMachine)
  return PlayerStateBase.new(player, stateMachine, u0)
end
function PlayerStateSwim:isAvailable()
  if self.player.baseInformation.isInWater then
    return true
  end
  return false
end
function PlayerStateSwim:update(dt)
  if not self.player.baseInformation.isInWater then
    self:deactivate()
  end
end
