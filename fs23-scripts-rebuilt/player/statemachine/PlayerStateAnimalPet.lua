-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateAnimalPet = {}
local PlayerStateAnimalPet_mt = Class(PlayerStateAnimalPet, PlayerStateBase)
function PlayerStateAnimalPet.new(player, stateMachine)
  local v2 = PlayerStateBase.new(player, stateMachine, u0)
  v2.dog = nil
  return v2
end
function PlayerStateAnimalPet:isAvailable()
  self.dog = nil
  if self.player.isClient and self.player.isEntered then
    local v1 = v1:getIsGuiVisible()
    if not v1 then
      if self.player.baseInformation.currentHandtool == nil then
      end
      local v2 = v2:getDoghouse(self.player.farmId)
      if v2 == nil then
        return false
      end
      local v3 = v2:getDog()
      if v3 == nil then
        return false
      end
      local v4, v5, v6 = getWorldTranslation(self.player.rootNode)
      if v5 - self.player.model.capsuleTotalHeight * 0.5 - self.player.waterY >= 0 then
      end
      if v3.playersInRange[self.player.rootNode] == nil then
      end
      if v1 and not v8 and true then
        self.dog = v3
        return true
      end
    end
  end
  return false
end
function PlayerStateAnimalPet:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  if self.dog ~= nil then
    v1:pet()
  end
  self:deactivate()
end
function PlayerStateAnimalPet:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  self.dog = nil
end
