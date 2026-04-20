-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateUseLight = {}
local PlayerStateUseLight_mt = Class(PlayerStateUseLight, PlayerStateBase)
function PlayerStateUseLight.new(player, stateMachine)
  return PlayerStateBase.new(player, stateMachine, u0)
end
function PlayerStateUseLight:isAvailable()
  local v1 = v1:getHasTorch()
  if v1 then
    v1 = v1:isInGameMessageActive()
    if not v1 then
      return true
    end
  end
  return false
end
function PlayerStateUseLight:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  v1:setLightIsActive(not self.player.isTorchActive)
  self:deactivate()
end
