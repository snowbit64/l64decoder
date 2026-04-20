-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalClusterHusbandry = {}
local AnimalClusterHusbandry_mt = Class(AnimalClusterHusbandry)
function AnimalClusterHusbandry.new(placeable, animalTypeName, maxVisualAnimals, customMt)
  if not customMt then
  end
  local v4 = v4(v5, v6)
  v4.placeable = placeable
  v4.husbandry = nil
  v4.navigationNode = nil
  v4.maxVisualAnimals = maxVisualAnimals
  v4.animalTypeName = animalTypeName
  v4.animalSystem = g_currentMission.animalSystem
  v4.animalIdToCluster = {}
  v4.animalIdToVisualAnimalIndex = {}
  v4.totalNumAnimalsPerVisualAnimalIndex = {}
  return v4
end
function AnimalClusterHusbandry:delete()
  if self.husbandry ~= nil then
    for v4, v5 in pairs(self.animalIdToCluster) do
      removeHusbandryAnimal(self.husbandry, v4)
    end
    v1:removeIndoorStateChangedListener(self)
    delete(self.husbandry)
    self.husbandry = nil
  end
end
function AnimalClusterHusbandry:update(dt)
  if self.husbandry ~= nil then
    setAnimalDaytime(self.husbandry, g_currentMission.environment.dayTime)
    if self.visualUpdatePending then
      local v2 = isHusbandryReady(self.husbandry)
      if v2 then
        self:updateVisuals()
        self.visualUpdatePending = false
      end
    end
  end
end
function AnimalClusterHusbandry:getNeedsUpdate()
  return self.visualUpdatePending
end
function AnimalClusterHusbandry:create(xmlFilename, navigationNode, raycastDistance, collisionMask)
  self.navigationNode = navigationNode
  local v6 = createAnimalHusbandry(self.animalTypeName, navigationNode, xmlFilename, raycastDistance, CollisionMask.ANIMAL_POSITIONING, collisionMask, AudioGroup.ENVIRONMENT)
  if v6 ~= 0 then
    self.husbandry = v6
    self.visualUpdatePending = true
    v7:addIndoorStateChangedListener(self)
    local v10 = v10:getIsIndoor()
    setAnimalUseOutdoorAudioSetup(self.husbandry, not v10)
    return self.husbandry
  end
  return nil
end
function AnimalClusterHusbandry:getPlaceable()
  return self.placeable
end
function AnimalClusterHusbandry:updateVisuals()
  if self.husbandry ~= nil then
    local v1 = isHusbandryReady(self.husbandry)
    -- if v1 then goto L14 end
  end
  self.visualUpdatePending = true
  return
  if not self.nextUpdateClusters then
  end
  self.totalNumAnimalsPerVisualAnimalIndex = {}
  for v12, v13 in ipairs(v1) do
    local v14 = v13:getNumAnimals()
    if not (0 < v14) then
      continue
    end
    local v15 = v13:getSubTypeIndex()
    local v16 = v13:getAge()
    local v17 = v17:getVisualAnimalIndexByAge(v15, v16)
    v3[v13] = v17
    if v7[v17] == nil then
      table.insert(v6, {visualAnimalIndex = v17, numAnimals = 0, clusters = {}, minClusterId = math.huge})
      v7[v17] = #v6
    end
    v6[v18].numAnimals = v6[v18].numAnimals + v14
    local v20 = math.min(v13.id, v6[v18].minClusterId)
    v6[v18].minClusterId = v20
    table.insert(v6[v18].clusters, v13)
    self.totalNumAnimalsPerVisualAnimalIndex[v17] = (self.totalNumAnimalsPerVisualAnimalIndex[v17] or 0) + v14
  end
  table.sort(v6, function(self, v1)
    if self.numAnimals == v1.numAnimals then
      if self.minClusterId >= v1.minClusterId then
      end
      return true
    end
    if v1.numAnimals >= self.numAnimals then
    end
    return true
  end)
  for v12, v13 in ipairs(v6) do
    table.sort(v13.clusters, AnimalClusterHusbandry.sortClusters)
  end
  v9 = math.min(#v6, self.maxVisualAnimals)
  for v14, v15 in ipairs(v6) do
    if 0 < v9 then
    end
    if 0 < v10 then
      local v19 = math.ceil(self.totalNumAnimalsPerVisualAnimalIndex[v15.visualAnimalIndex] / v8 * v10)
      local v18 = math.min(v19, v10, v15.numAnimals - 1)
    end
    while true do
      if not (0 < v16) then
        break
      end
      if #v15.clusters < v17 then
      end
      if v2[v15.clusters[v17]] == nil then
        v2[v15.clusters[v17]] = 0
      end
      if v2[v18] < v18.numAnimals then
        v2[v18] = v2[v18] + 1
      end
    end
    if not (v9 == 0) then
      continue
    end
    if not (v10 ~= 0) then
      break
    end
  end
  for v14, v15 in pairs(self.animalIdToCluster) do
    if not (v2[v15] ~= nil) then
      continue
    end
    if self.animalIdToVisualAnimalIndex[v14] ~= v3[v15] then
      setAnimalSubType(self.husbandry, v14, v3[v15] - 1)
    end
    v2[v15] = v2[v15] - 1
    if v2[v15] <= 0 then
      v2[v15] = nil
    end
    v4[v14] = v15
    v5[v14] = v17
    self.animalIdToCluster[v14] = nil
    self.animalIdToVisualAnimalIndex[v14] = nil
  end
  for v14, v15 in pairs(v2) do
    -- TODO: structure LOP_FORNPREP (pc 275, target 308)
    for v24, v25 in pairs(self.animalIdToVisualAnimalIndex) do
      if not (v20 == v25) then
        continue
      end
      self.animalIdToCluster[v24] = nil
      v4[v24] = v14
      v5[v24] = v25
      v2[v14] = v2[v14] - 1
      if v2[v14] <= 0 then
        v2[v14] = nil
        break
      end
      break
    end
    if not v19 then
      continue
    end
    -- TODO: structure LOP_FORNLOOP (pc 307, target 276)
  end
  for v14, v15 in pairs(self.animalIdToCluster) do
    removeHusbandryAnimal(self.husbandry, v14)
  end
  for v14, v15 in pairs(v2) do
    -- TODO: structure LOP_FORNPREP (pc 332, target 380)
    v20 = addHusbandryAnimal(self.husbandry, v3[v14] - 1)
    v21 = v14:getSubTypeIndex()
    v22 = v14:getAge()
    v23 = v23:getVisualByAge(v21, v22)
    if 1 < #v23.visualAnimal.variations then
      local v26 = math.random(1, #v23.visualAnimal.variations)
      setAnimalTextureTile(self.husbandry, v20, v23.visualAnimal.variations[v26].tileUIndex, v23.visualAnimal.variations[v26].tileVIndex)
    end
    v4[v20] = v14
    v5[v20] = v19
    -- TODO: structure LOP_FORNLOOP (pc 379, target 333)
  end
  for v14, v15 in pairs(v4) do
    if v15.getDirtFactor ~= nil and Platform.gameplay.needHorseCleaning then
      v17 = v15:getDirtFactor()
    end
    v17 = getAnimalRootNode(self.husbandry, v14)
    I3DUtil.setShaderParameterRec(v17, "RDT", nil, v16, nil, nil)
    v18, v19, v20, v21 = getAnimalShaderParameter(self.husbandry, v14, "atlasInvSizeAndOffsetUV")
    I3DUtil.setShaderParameterRec(v17, "atlasInvSizeAndOffsetUV", v18, v19, v20, v21)
  end
  self.animalIdToCluster = v4
  self.animalIdToVisualAnimalIndex = v5
  self.nextUpdateClusters = nil
end
function AnimalClusterHusbandry:setClusters(clusters)
  self.nextUpdateClusters = clusters
  self.visualUpdatePending = true
end
function AnimalClusterHusbandry:getHusbandryId()
  return self.husbandry
end
function AnimalClusterHusbandry:getAnimalPosition(clusterId)
  for v5, v6 in pairs(self.animalIdToCluster) do
    if not (v6.id == clusterId) then
      continue
    end
    local v7, v8, v9 = getAnimalPosition(self.husbandry, v5)
    local v10, v11, v12 = getAnimalRotation(self.husbandry, v5)
    return v7, v8, v9, v10, v11, v12
  end
  return nil
end
function AnimalClusterHusbandry:getClusterByAnimalId(animalId)
  return self.animalIdToCluster[animalId]
end
function AnimalClusterHusbandry:onIndoorStateChanged(isIndoor)
  local v5 = v5:getIsIndoor()
  setAnimalUseOutdoorAudioSetup(self.husbandry, not v5)
end
function AnimalClusterHusbandry:sortClusters(v1)
  local v2 = self:getNumAnimals()
  local v3 = v1:getNumAnimals()
  if v2 == v3 then
    if self.id >= v1.id then
    end
    return true
  end
  local v5 = self:getNumAnimals()
  local v6 = v1:getNumAnimals()
  if v6 >= v5 then
  end
  return true
end
