-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateRun = {}
local PlayerStateRun_mt = Class(PlayerStateRun, PlayerStateBase)
function PlayerStateRun.new(player, stateMachine)
  return PlayerStateBase.new(player, stateMachine, u0)
end
function PlayerStateRun:isAvailable()
  return self:canRun()
end
function PlayerStateRun:update(dt)
  if self.player.inputInformation.runAxis ~= 0 then
    local v3 = math.abs(self.player.inputInformation.moveForward)
    if 0.01 >= v3 then
      v3 = math.abs(self.player.inputInformation.moveRight)
      if 0.01 >= v3 then
      end
    end
  end
  v3 = self:canRun()
  if v3 ~= false then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L48
  end
  self:deactivate()
end
function PlayerStateRun:canRun()
  return self.player.baseInformation.isOnGround
end
