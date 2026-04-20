-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerStateAnimalInteract = {}
local PlayerStateAnimalInteract_mt = Class(PlayerStateAnimalInteract, PlayerStateBase)
function PlayerStateAnimalInteract.new(player, stateMachine)
  local v2 = PlayerStateBase.new(player, stateMachine, u0)
  v2.dog = nil
  v2.husbandry = nil
  v2.cluster = nil
  v2.castDistance = 1.5
  v2.interactText = ""
  return v2
end
function PlayerStateAnimalInteract:isAvailable()
  self.dog = nil
  if self.player.isClient and self.player.isEntered then
    local v1 = v1:getIsGuiVisible()
    if not v1 then
      if self.player.baseInformation.currentHandtool == nil then
      end
      local v2 = v2:getDoghouse(self.player.farmId)
      if v1 and v2 ~= nil then
        local v3 = v2:getDog()
        if v3 ~= nil and v3.playersInRange[self.player.rootNode] ~= nil then
          self.dog = v3
          if v3.entityFollow == self.player.rootNode then
            local v4 = v4:getText("action_interactAnimalStopFollow")
            self.interactText = v4
          else
            v4 = v4:getText("action_interactAnimalFollow")
            self.interactText = v4
          end
          return true
        end
      end
    end
  end
  self:detectAnimal()
  if self.husbandry ~= nil then
    v2 = v2:getText("action_interactAnimalClean")
    v3 = v3:getName()
    v1 = string.format(...)
    self.interactText = v1
    return true
  end
  self.interactText = ""
  return false
end
function PlayerStateAnimalInteract:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  if self.dog ~= nil then
    if self.dog.entityFollow == self.player.rootNode then
      v1:goToSpawn()
    else
      v1:followEntity(self.player)
    end
    self:deactivate()
    return
  end
  if self.husbandry ~= nil and self.cluster ~= nil then
    local v1 = v1:getServerConnection()
    local v3 = AnimalCleanEvent.new(self.husbandry, self.cluster.id)
    v1:sendEvent(...)
    v1:playSample(self.player.model.soundInformation.samples.horseBrush)
    self:deactivate()
  end
end
function PlayerStateAnimalInteract:deactivate()
  local v2 = v2:superClass()
  v2.deactivate(self)
  self.dog = nil
  self.husbandry = nil
  self.cluster = nil
end
function PlayerStateAnimalInteract:detectAnimal()
  local v2, v3, v4 = localToWorld(self.player.cameraNode, 0, 0, 0)
  local v5, v6, v7 = localDirectionToWorld(self.player.cameraNode, 0, 0, -1)
  self.husbandry = nil
  self.cluster = nil
  raycastClosest(v2, v3, v4, v5, v6, v7, "animalRaycastCallback", self.castDistance, self, CollisionFlag.ANIMAL)
end
function PlayerStateAnimalInteract:update(dt)
  self:detectAnimal()
end
function PlayerStateAnimalInteract:animalRaycastCallback(hitObjectId, x, y, z, distance)
  local v6, v7 = getAnimalFromCollisionNode(hitObjectId)
  if v6 ~= nil and v6 ~= 0 then
    local v8 = v8:getClusterHusbandyById(v6)
    if v8 ~= nil then
      local v9 = v8:getPlaceable()
      local v10 = v8:getClusterByAnimalId(v7)
      if v10 ~= nil then
        local v11 = v11:canFarmAccess(self.player.farmId, v9)
        if v11 and v10.changeDirt ~= nil and v10.getName ~= nil then
          v11 = v10:getDirtFactor()
          if 0 < v11 then
            self.husbandry = v9
            self.cluster = v10
            return true
          end
        end
      end
    end
  end
  return false
end
function PlayerStateAnimalInteract:getCanClean()
  if Platform.gameplay.needHorseCleaning and self.husbandry ~= nil and self.cluster == nil then
  end
  return v1
end
