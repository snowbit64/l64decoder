-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateWalk = {}
local PlayerStateWalk_mt = Class(PlayerStateWalk, PlayerStateBase)
function PlayerStateWalk.new(player, stateMachine)
  return PlayerStateBase.new(player, stateMachine, u0)
end
function PlayerStateWalk:isAvailable()
  return self:canWalk()
end
function PlayerStateWalk:update(dt)
  local v3 = math.abs(self.player.inputInformation.moveForward)
  if 0.01 >= v3 then
    v3 = math.abs(self.player.inputInformation.moveRight)
    if 0.01 >= v3 then
    end
  end
  v3 = self:canWalk()
  if v3 then
    -- if v2 then goto L37 end
  end
  self:deactivate()
end
function PlayerStateWalk:canWalk()
  if self.player.inputInformation.runAxis == 0 then
  end
  if self.player.baseInformation.isOnGround then
  end
  return v2
end
