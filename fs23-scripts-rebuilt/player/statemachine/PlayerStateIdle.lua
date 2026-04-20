-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateIdle = {}
local PlayerStateIdle_mt = Class(PlayerStateIdle, PlayerStateBase)
function PlayerStateIdle.new(player, stateMachine)
  return PlayerStateBase.new(player, stateMachine, u0)
end
function PlayerStateIdle.isAvailable(v0)
  return true
end
function PlayerStateIdle:update(dt)
  local v3 = math.abs(self.player.inputInformation.moveForward)
  if 0.01 >= v3 then
    v3 = math.abs(self.player.inputInformation.moveRight)
    if 0.01 >= v3 then
    end
  end
  if not v2 then
    -- if v0.player.baseInformation.isOnGround then goto L40 end
  end
  self:deactivate()
end
