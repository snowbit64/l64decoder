-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

print("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA")
g_currentMission = {animalNameSystem = {getRandomName = function(v0)
  local v3 = math.random(1, 123123)
  return "AnimalName" .. v3
end}, animalSystem = {getSubTypeByIndex = function(v0, v1)
  return u0[v1]
end, getAnimalTypeIndexByAge = function(v0, v1, v2)
  for v8, v9 in ipairs(u0[v1].visuals) do
    if not (v9.minAge <= v2) then
      continue
    end
  end
  return v4
end}}
function createAnimalHusbandry(...)
  log(...)
  return 1
end
function addHusbandryAnimal(husbandryId, animalTypeIndex)
  u0 = u0 + 1
  table.insert(u1, {animalId = u0, animalTypeIndex = animalTypeIndex + 1})
  log("Added animal", u0, animalTypeIndex + 1)
  return u0
end
function removeHusbandryAnimal(husbandryId, animalId)
  -- TODO: structure LOP_FORNPREP (pc 4, target 23)
  if u0[1].animalId == animalId then
    table.remove(u0, 1)
    log("remove animal", animalId)
    return
  end
  -- TODO: structure LOP_FORNLOOP (pc 22, target 5)
  printCallstack()
end
TestAnimalCluster = {CURRENT_SELECTION_INDEX = 1}
function TestAnimalCluster.init()
  g_server = {broadcastEvent = function()
  end}
  local v1 = AnimalClusterSystem.new(true, TestAnimalCluster)
  TestAnimalCluster.clusterSystem = v1
  v1:addClustersUpdatedListener(function()
    local v0 = v0:getClusters()
    v1:setClusters(v0)
  end)
  v1 = AnimalClusterHusbandry.new("horse", 12)
  TestAnimalCluster.animalClusterHusbandry = v1
  v1:create("testXML", 1, 1, 255)
end
function TestAnimalCluster.update(v0)
  v2:update(v0)
end
function TestAnimalCluster.draw()
  local v2 = v2:getClusters()
  for v7, v8 in ipairs(v2) do
    table.insert(v3, v8)
    local v12 = v8:getAge()
    local v9 = v9:getAnimalTypeIndexByAge(...)
    for v14, v15 in pairs(v0.animalClusterHusbandry.animalIdToCluster) do
      if not (v8 == v15) then
        continue
      end
      table.insert(v10, v14)
    end
    v11 = table.concat(v10, ", ")
    local v23 = v8:getHash()
    local v16 = string.format("Cluster: %02d  |  Animals: %03d  |  Age: %02d  |  Health: %03d  |  Reproduction: %03d  |  Hash: %s | TypeIndex: %d | AnimalIds: %s", v8.id, v8.numAnimals, v8.age, v8.health, v8.reproduction, v23, v9, v11)
    renderText(...)
  end
  if 0 < #v2 then
    renderText(0.495, 0.8 - (TestAnimalCluster.CURRENT_SELECTION_INDEX - 1) * 0.013, 0.012, ">")
  end
  v8 = string.format("Total Num Animals: %d", v1)
  renderText(...)
  v8 = string.format("Total Num Visible Animals: %d", #u0)
  renderText(...)
  for v7, v8 in ipairs(u0) do
    if v0.animalClusterHusbandry.animalIdToCluster[v8.animalId] ~= nil then
      v11 = string.format("%02d", v0.animalClusterHusbandry.animalIdToCluster[v8.animalId].id)
    end
    v15 = string.format("AnimalId: %02d  |  TypeIndex: %d | Cluster: %s", v8.animalId, v8.animalTypeIndex, v10)
    renderText(...)
  end
  for v8, v9 in pairs(v0.animalClusterHusbandry.totalNumAnimalsPerAnimalTypeIndex) do
    v14 = string.format("TypeIndex: %d | Num: %d", v8, v9)
    renderText(...)
  end
  table.sort(v3, AnimalClusterHusbandry.sortClusters)
  for v8, v9 in ipairs(v3) do
    v13 = v9:getAge()
    local v10 = v10:getAnimalTypeIndexByAge(...)
    local v18 = v9:getNumAnimals()
    v15 = string.format("Cluster: %03d | Num: %d | TypeIndex: %d", v9.id, v18, v10)
    renderText(...)
  end
end
function TestAnimalCluster.mouseEvent(posX, posY, isDown, isUp, button)
end
function TestAnimalCluster.keyEvent(unicode, sym, modifier, isDown)
  if not isDown then
    local v5 = v5:getClusters()
    local v8 = math.min(TestAnimalCluster.CURRENT_SELECTION_INDEX, #v5)
    local v7 = math.max(v8, 1)
    TestAnimalCluster.CURRENT_SELECTION_INDEX = v7
    v8 = bitAND(modifier, Input.MOD_LSHIFT)
    if 0 >= v8 then
    end
    if sym == Input.KEY_m then
      if not true then
        -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000011 -> L74
      end
      v8 = v8:createCluster()
      v8.numAnimals = 1
      local v9 = math.random(1, 3)
      v8.subTypeIndex = v9
      v9:addPendingAddCluster(v8)
      -- goto L278  (LOP_JUMP +204)
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L278
      v6.numAnimals = v6.numAnimals + 1
      v8:setClusters(v5)
    elseif sym == Input.KEY_n then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L278
      v8:addPendingRemoveCluster(v6)
    else
      if sym == Input.KEY_q then
        if true then
          for v11, v12 in ipairs(v5) do
            v12:changeAge(1)
          end
        elseif v6 ~= nil then
          v6:changeAge(1)
        end
        v8:setClusters(v5)
      elseif sym == Input.KEY_w then
        if true then
          for v11, v12 in ipairs(v5) do
            v12:changeHealth(1)
          end
        elseif v6 ~= nil then
          v6:changeHealth(1)
        end
        v8:setClusters(v5)
      else
        if sym == Input.KEY_e then
          if true then
            for v11, v12 in ipairs(v5) do
              v12:changeHealth(-1)
            end
          elseif v6 ~= nil then
            v6:changeHealth(-1)
          end
          v8:setClusters(v5)
        elseif sym == Input.KEY_s then
          if true then
            for v11, v12 in ipairs(v5) do
              v12:changeReproduction(1)
            end
          elseif v6 ~= nil then
            v6:changeReproduction(1)
          end
          v8:setClusters(v5)
        else
          if sym == Input.KEY_d then
            if true then
              for v11, v12 in ipairs(v5) do
                v12:changeReproduction(-1)
              end
            elseif v6 ~= nil then
              v6:changeReproduction(-1)
            end
            v8:setClusters(v5)
          elseif sym == Input.KEY_up then
            TestAnimalCluster.CURRENT_SELECTION_INDEX = TestAnimalCluster.CURRENT_SELECTION_INDEX - 1
          else
            if sym == Input.KEY_down then
              TestAnimalCluster.CURRENT_SELECTION_INDEX = TestAnimalCluster.CURRENT_SELECTION_INDEX + 1
            end
          end
        end
      end
    end
    v10 = math.min(TestAnimalCluster.CURRENT_SELECTION_INDEX, #v5)
    v9 = math.max(v10, 1)
    TestAnimalCluster.CURRENT_SELECTION_INDEX = v9
    v8:setDirty()
  end
end
