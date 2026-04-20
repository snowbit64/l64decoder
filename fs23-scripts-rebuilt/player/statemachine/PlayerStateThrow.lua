-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateThrow = {}
local PlayerStateThrow_mt = Class(PlayerStateThrow, PlayerStateBase)
function PlayerStateThrow.new(player, stateMachine)
  return PlayerStateBase.new(player, stateMachine, u0)
end
function PlayerStateThrow:isAvailable()
  if self.player.isClient and self.player.isEntered then
    local v1 = v1:hasHandtoolEquipped()
    if not v1 then
      if not self.player.isCarryingObject then
        -- if v0.player.isCarryingObject then goto L49 end
        -- if not v0.player.isObjectInRange then goto L49 end
        -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L49
      end
      if self.player.lastFoundObjectMass <= self.player.maxPickableMass then
        return true
      end
    end
  end
  return false
end
function PlayerStateThrow:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  v1:throwObject()
  self:deactivate()
end
