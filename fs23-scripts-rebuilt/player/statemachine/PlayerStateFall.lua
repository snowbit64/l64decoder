-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateFall = {}
local PlayerStateFall_mt = Class(PlayerStateFall, PlayerStateBase)
function PlayerStateFall.new(player, stateMachine)
  return PlayerStateBase.new(player, stateMachine, u0)
end
function PlayerStateFall:isAvailable()
  if not self.player.baseInformation.isOnGround and not self.player.baseInformation.isInWater and self.player.motionInformation.currentSpeedY < self.player.motionInformation.minimumFallingSpeed then
    return true
  end
  return false
end
function PlayerStateFall:update(dt)
  if not self.player.baseInformation.isOnGround then
    -- if not v0.player.baseInformation.isInWater then goto L17 end
  end
  self:deactivate()
end
