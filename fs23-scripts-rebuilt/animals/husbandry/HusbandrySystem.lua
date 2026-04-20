-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HusbandrySystem = {GAME_LIMIT = 10}
local HusbandrySystem_mt = Class(HusbandrySystem)
function HusbandrySystem.new(isServer, mission, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.isServer = isServer
  v3.mission = mission
  v3.manureHeaps = {}
  v3.placeables = {}
  v3.clusterHusbandries = {}
  v3.rideables = {}
  v3.maxNumRidables = 4
  v3.husbandrys = {}
  v3.livestockTrailers = {}
  return v3
end
function HusbandrySystem.delete(v0)
end
function HusbandrySystem:addPlaceable(placeable)
  local success = table.addElement(self.placeables, placeable)
  if success then
    v3:publish(MessageType.HUSBANDRY_SYSTEM_ADDED_PLACEABLE)
  end
  return success
end
function HusbandrySystem:removePlaceable(placeable)
  local success = table.removeElement(self.placeables, placeable)
  if success and success then
    v3:publish(MessageType.HUSBANDRY_SYSTEM_REMOVED_PLACEABLE)
  end
  return success
end
function HusbandrySystem:addClusterHusbandry(clusterHusbandry)
  return table.addElement(self.clusterHusbandries, clusterHusbandry)
end
function HusbandrySystem:removeClusterHusbandry(clusterHusbandry)
  return table.removeElement(self.clusterHusbandries, clusterHusbandry)
end
function HusbandrySystem:getPlaceablesByFarm(farmId, animalType)
  if not farmId then
  end
  for v7, v8 in ipairs(self.placeables) do
    local v9 = v8:getOwnerFarmId()
    if not (farmId == v9) then
      continue
    end
    if animalType ~= nil then
      v9 = v8:getAnimalTypeIndex()
      if not (v9 == animalType) then
        continue
      end
    end
    table.insert(v3, v8)
  end
  return v3
end
function HusbandrySystem:getClusterHusbandyById(husbandryId)
  for v5, v6 in ipairs(self.clusterHusbandries) do
    local v7 = v6:getHusbandryId()
    if not (v7 == husbandryId) then
      continue
    end
    return v6
  end
  return nil
end
function HusbandrySystem:getLimitReached()
  if HusbandrySystem.GAME_LIMIT > #self.placeables then
  end
  return true
end
function HusbandrySystem:addManureHeap(manureHeap)
  return table.addElement(self.manureHeaps, manureHeap)
end
function HusbandrySystem:removeManureHeap(manureHeap)
  return table.removeElement(self.manureHeaps, manureHeap)
end
function HusbandrySystem:addRideable(rideable)
  table.addElement(self.rideables, rideable)
end
function HusbandrySystem:removeRideable(rideable)
  table.removeElement(self.rideables, rideable)
end
function HusbandrySystem:getNumRideablesPerFarm(farmId)
  for v6, v7 in ipairs(self.rideables) do
    local v8 = v7:getOwnerFarmId()
    if not (v8 == farmId) then
      continue
    end
  end
  return v2
end
function HusbandrySystem:getCanAddRideable(farmId)
  local numRidables = self:getNumRideablesPerFarm(farmId)
  if numRidables >= self.maxNumRidables then
  end
  return true
end
function HusbandrySystem:getHusbandryInRideableRange(rideable)
  local farmId = rideable:getOwnerFarmId()
  local cluster = rideable:getCluster()
  local v7 = cluster:getSubTypeIndex()
  local v5 = g_currentMission.animalSystem:getTypeIndexBySubTypeIndex(...)
  local v8, v9, v10 = getWorldTranslation(rideable.rootNode)
  for v14, v15 in ipairs(self.placeables) do
    local v16 = v15:getOwnerFarmId()
    if not (v16 == farmId) then
      continue
    end
    v16 = v15:getIsInAnimalDeliveryArea(v8, v10)
    if not v16 then
      continue
    end
    v16 = v15:getAnimalTypeIndex()
    if not (v16 == v5) then
      continue
    end
    v16 = v15:getNumOfFreeAnimalSlots()
    if not (0 < v16) then
      continue
    end
  end
  return v7, v6
end
function HusbandrySystem:addLivestockTrailer(trailer)
  table.addElement(self.livestockTrailers, trailer)
end
function HusbandrySystem:removeLivestockTrailer(trailer)
  table.removeElement(self.livestockTrailers, trailer)
end
function HusbandrySystem:getNumOfFreeAnimalSlots(farmId, subTypeIndex)
  local v6 = g_currentMission.animalSystem:getTypeIndexBySubTypeIndex(subTypeIndex)
  for v10, v11 in ipairs(self.placeables) do
    local v12 = v11:getOwnerFarmId()
    if not (v12 == farmId) then
      continue
    end
    v12 = v11:getAnimalTypeIndex()
    if not (v12 == v6) then
      continue
    end
    v12 = v11:getMaxNumOfAnimals()
    v12 = v11:getNumOfAnimals()
  end
  for v10, v11 in ipairs(self.livestockTrailers) do
    v12 = v11:getOwnerFarmId()
    if not (v12 == farmId) then
      continue
    end
    v12 = v11:getCurrentAnimalType()
    if not (v12 ~= nil) then
      continue
    end
    if not (v12.typeIndex == v6) then
      continue
    end
    local v13 = v11:getNumOfAnimals()
  end
  for v10, v11 in ipairs(self.rideables) do
    v12 = v11:getOwnerFarmId()
    if not (v12 == farmId) then
      continue
    end
    v12 = v11:getCluster()
    if not (v12 ~= nil) then
      continue
    end
    v13 = v12:getSubTypeIndex()
    local v14 = v5:getTypeIndexBySubTypeIndex(v13)
    if not (v14 == v6) then
      continue
    end
  end
  return v4 - v3
end
