-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStatePickup = {}
local PlayerStatePickup_mt = Class(PlayerStatePickup, PlayerStateBase)
function PlayerStatePickup.new(player, stateMachine)
  return PlayerStateBase.new(player, stateMachine, u0)
end
function PlayerStatePickup:isAvailable()
  if self.player.isClient and self.player.isEntered then
    local v1 = v1:hasHandtoolEquipped()
    if not v1 and not self.player.isCarryingObject and self.player.isObjectInRange then
      if self.player.lastFoundObjectMass <= self.player.maxPickableMass then
        return true
      end
      local v3 = v3:getText("warning_objectTooHeavy")
      v1:addExtraPrintText(...)
    end
  end
  return false
end
function PlayerStatePickup:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  v1:pickUpObject(true)
  self:deactivate()
end
