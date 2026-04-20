-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateAnimalRide = {}
local PlayerStateAnimalRide_mt = Class(PlayerStateAnimalRide, PlayerStateBase)
PlayerStateAnimalRide.INPUT_CONTEXT_EMPTY = "ANIMAL_LOAD_EMPTY"
function PlayerStateAnimalRide.new(player, stateMachine)
  local v2 = PlayerStateBase.new(player, stateMachine, u0)
  v2.placeable = nil
  v2.cluster = nil
  v2.castDistance = 1.5
  v2.timeFadeToBlack = 250
  return v2
end
function PlayerStateAnimalRide:isAvailable()
  local v1, v2, v3 = localToWorld(self.player.cameraNode, 0, 0, 0)
  local v4, v5, v6 = localDirectionToWorld(self.player.cameraNode, 0, 0, -1)
  self.placeable = nil
  self.cluster = nil
  raycastClosest(v1, v2, v3, v4, v5, v6, "animalRaycastCallback", self.castDistance, self, CollisionFlag.ANIMAL)
  if self.placeable ~= nil then
    return true
  end
  return false
end
function PlayerStateAnimalRide:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  if self.placeable ~= nil then
    local v1 = v1:getAnimalCanBeRidden(self.cluster.id)
    if v1 then
      v1:fadeScreen(1, self.timeFadeToBlack, self.endFadeToBlack, self, {self.placeable, self.cluster, self.player})
      v1:setContext(PlayerStateAnimalRide.INPUT_CONTEXT_EMPTY, true, false)
    else
      local v4 = v4:getText("shop_messageAnimalRideableLimitReached")
      v1:addIngameNotification(...)
    end
  end
  self:deactivate()
end
function PlayerStateAnimalRide.endFadeToBlack(v0, v1)
  v1[1]:startRiding(v1[2].id, v1[3])
end
function PlayerStateAnimalRide:animalRaycastCallback(hitObjectId, x, y, z, distance)
  local v6, v7 = getAnimalFromCollisionNode(hitObjectId)
  if v6 ~= nil and v6 ~= 0 then
    local v8 = v8:getClusterHusbandyById(v6)
    if v8 ~= nil then
      local v9 = v8:getPlaceable()
      local v10 = v8:getClusterByAnimalId(v7)
      if v10 ~= nil then
        local v11 = v11:canFarmAccess(self.player.farmId, v9)
        if v11 then
          v11 = v9:getAnimalSupportsRiding(v10.id)
          if v11 then
            self.placeable = v9
            self.cluster = v10
            return true
          end
        end
      end
    end
  end
  return false
end
function PlayerStateAnimalRide:getRideableName()
  if self.placeable ~= nil and self.cluster.getName ~= nil then
    local v2 = v2:getName()
  end
  return v1
end
