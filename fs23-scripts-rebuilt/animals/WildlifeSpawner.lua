-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WildlifeSpawner = {}
local WildlifeSpawner_mt = Class(WildlifeSpawner)
WildlifeSpawner.DEBUGSHOWIDSTATES = {NONE = 1, ALL = 2, SINGLE = 3, MAX = 3}
WildlifeSpawner.RULE = {REQUIRED = 1, NOT_ALLOWED = 2, DONT_CARE = 3}
function WildlifeSpawner.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.isEnabled = true
  v1.collisionDetectionMask = 4096
  v1.maxCost = 0
  v1.checkTimeInterval = 0
  v1.nextCheckTime = 0
  v1.areas = {}
  v1.areasOfInterest = {}
  v1.totalCost = 0
  v1.treeCount = 0
  v1.playerNode = nil
  v1.avoidDistance = 20
  v1.debugAnimalList = {}
  v1.debugShow = false
  v1.debugShowId = WildlifeSpawner.DEBUGSHOWIDSTATES.NONE
  v1.debugShowSteering = false
  v1.debugShowAnimation = false
  addConsoleCommand("gsWildlifeToggle", "Toggle wildlife on map", "consoleCommandToggleEnabled", v1)
  addConsoleCommand("gsWildlifeDebug", "Toggle shows/hide all wildlife debug information.", "consoleCommandToggleShowWildlife", v1)
  addConsoleCommand("gsWildlifeDebugId", "Toggle shows/hide all wildlife animal id.", "consoleCommandToggleShowWildlifeId", v1)
  addConsoleCommand("gsWildlifeDebugSteering", "Toggle shows/hide animal steering information.", "consoleCommandToggleShowWildlifeSteering", v1)
  addConsoleCommand("gsWildlifeDebugAnimation", "Toggle shows/hide animal animation information.", "consoleCommandToggleShowWildlifeAnimation", v1)
  addConsoleCommand("gsWildlifeDebugAnimalAdd", "Adds an animal to a debug list.", "consoleCommandAddWildlifeAnimalToDebug", v1)
  addConsoleCommand("gsWildlifeDebugAnimalRemove", "Removes an animal to a debug list.", "consoleCommandRemoveWildlifeAnimalToDebug", v1)
  return v1
end
function WildlifeSpawner:delete()
  self:removeAllAnimals()
  for v4, v5 in pairs(self.areas) do
    for v9, v10 in pairs(v5.species) do
      if not (v10.lightWildlife ~= nil) then
        continue
      end
      v11:delete()
    end
  end
  self.areas = {}
  removeConsoleCommand("gsWildlifeToggle")
  removeConsoleCommand("gsWildlifeDebug")
  removeConsoleCommand("gsWildlifeDebugId")
  removeConsoleCommand("gsWildlifeDebugSteering")
  removeConsoleCommand("gsWildlifeDebugAnimation")
  removeConsoleCommand("gsWildlifeDebugAnimalAdd")
  removeConsoleCommand("gsWildlifeDebugAnimalRemove")
end
function WildlifeSpawner:onConnectionClosed()
  self:removeAllAnimals()
end
function WildlifeSpawner:removeAllAnimals()
  for v4, v5 in pairs(self.areas) do
    for v9, v10 in pairs(v5.species) do
      -- TODO: structure LOP_FORNPREP (pc 17, target 58)
      if v10.classType == "companionAnimal" then
        -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x0 -> L51
        delete(v10.spawned[#v10.spawned].spawnId)
        v10.spawned[#v10.spawned].spawnId = nil
      elseif v10.classType == "lightWildlife" and v10.lightWildlife ~= nil then
        v14:removeAllAnimals()
      end
      table.remove(v10.spawned, v13)
      -- TODO: structure LOP_FORNLOOP (pc 57, target 18)
    end
  end
  self.totalCost = 0
end
function WildlifeSpawner:loadMapData(xmlFile)
  local v2 = getXMLString(xmlFile, "map.wildlife#filename")
  if v2 ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000003 -> L16
  end
  Logging.xmlInfo(xmlFile, "No wildlife config file defined")
  return false
  local v3 = Utils.getFilename(v2, g_currentMission.baseDirectory)
  v3 = loadXMLFile("wildlife", v3)
  if v3 ~= 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L40
  end
  Logging.xmlError(xmlFile, "Could not load wildlife config file '%s'", v2)
  return false
  local v5 = getXMLInt(v3, "wildlifeSpawner#maxCost")
  local v4 = Utils.getNoNil(v5, 0)
  self.maxCost = v4
  local v6 = getXMLFloat(v3, "wildlifeSpawner#checkTimeInterval")
  v5 = Utils.getNoNil(v6, 1)
  self.checkTimeInterval = v5 * 1000
  v5 = getXMLFloat(v3, "wildlifeSpawner#maxAreaOfInterest")
  v4 = Utils.getNoNil(v5, 1)
  self.maxAreaOfInterest = v4
  v6 = getXMLFloat(v3, "wildlifeSpawner#areaOfInterestliveTime")
  v5 = Utils.getNoNil(v6, 1)
  self.areaOfInterestliveTime = v5 * 1000
  while true do
    v5 = string.format("wildlifeSpawner.area(%d)", v4)
    v6 = hasXMLProperty(v3, v5)
    if not v6 then
      break
    end
    v8 = getXMLFloat(v3, v5 .. "#areaSpawnRadius")
    v7 = Utils.getNoNil(v8, 1)
    v8 = getXMLFloat(v3, v5 .. "#areaMaxRadius")
    v7 = Utils.getNoNil(v8, 1)
    v8 = getXMLFloat(v3, v5 .. "#spawnCircleRadius")
    v7 = Utils.getNoNil(v8, 1)
    while true do
      v8 = string.format("%s.species(%d)", v5, v7)
      v9 = hasXMLProperty(v3, v8)
      if not v9 then
        break
      end
      v9 = getXMLString(v3, v8 .. "#classType")
      if v9 ~= nil then
        v11 = string.lower(v9)
        if v11 == "companionanimal" then
        else
          v11 = string.lower(v9)
          if v11 == "lightwildlife" then
          end
        end
      end
      if v10 ~= nil then
        v12 = getXMLString(v3, v8 .. "#name")
        v12 = getXMLString(v3, v8 .. "#config")
        v12 = getXMLFloat(v3, v8 .. ".cost")
        v12 = getXMLInt(v3, v8 .. ".minCount")
        v12 = getXMLInt(v3, v8 .. ".maxCount")
        v12 = getXMLInt(v3, v8 .. ".spawnCount")
        v12 = getXMLInt(v3, v8 .. ".groupSpawnRadius")
        if v10 == "lightWildlife" and {classType = v10, name = v12, configFilename = v12, cost = v12, minCount = v12, maxCount = v12, currentCount = 0, spawnCount = v12, groupSpawnRadius = v12, spawned = {}, lightWildlife = nil}.name == "crow" then
          v12 = CrowsWildlife.new()
          v15 = getXMLString(v3, v8 .. "#config")
          v14 = Utils.getNoNil(v15, "")
          v12:load(...)
        end
        v11.spawnRules = {}
        while true do
          v13 = string.format("%s.spawnRules.rule(%d)", v8, v12)
          v14 = hasXMLProperty(v3, v13)
          if not v14 then
            break
          end
          v15 = getXMLInt(v3, v13 .. "#hourFrom")
          v15 = getXMLInt(v3, v13 .. "#hourTo")
          v17 = getXMLString(v3, v13 .. "#onField")
          v15 = self:parseSpawnRule(...)
          v17 = getXMLString(v3, v13 .. "#hasTrees")
          v15 = self:parseSpawnRule(...)
          v17 = getXMLString(v3, v13 .. "#inWater")
          v15 = self:parseSpawnRule(...)
          table.insert(v11.spawnRules, {hourFrom = v15, hourTo = v15, onField = v15, hasTrees = v15, inWater = v15})
        end
        table.insert(v6.species, v11)
      end
    end
    table.insert(self.areas, v6)
  end
  delete(v3)
  return true
end
function WildlifeSpawner.parseSpawnRule(v0, v1)
  local v2 = string.lower(v1)
  if v2 == "required" then
    return WildlifeSpawner.RULE.REQUIRED
  end
  v2 = string.lower(v1)
  if v2 == "notallowed" then
    return WildlifeSpawner.RULE.NOT_ALLOWED
  end
  v2 = string.lower(v1)
  if v2 == "dontcare" then
    return WildlifeSpawner.RULE.DONT_CARE
  end
  return WildlifeSpawner.RULE.DONT_CARE
end
function WildlifeSpawner:update(dt)
  self:updateAreaOfInterest(dt)
  if self.isEnabled then
    self.nextCheckTime = self.nextCheckTime - dt
    if self.nextCheckTime < 0 then
      self.nextCheckTime = self.checkTimeInterval
      self:updateSpawner()
    end
    self:removeFarAwayAnimals()
    self.playerNode = nil
    if g_currentMission.controlPlayer then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L42
      self.playerNode = g_currentMission.player.rootNode
    elseif g_currentMission.controlledVehicle ~= nil then
      self.playerNode = g_currentMission.controlledVehicle.rootNode
    end
    for v5, v6 in pairs(self.areas) do
      for v10, v11 in pairs(v6.species) do
        if v11.classType == "companionAnimal" then
          for v15, v16 in pairs(v11.spawned) do
            if not (v16.spawnId ~= nil) then
              continue
            end
            setCompanionDaytime(v16.spawnId, g_currentMission.environment.dayTime)
            if not (v16.avoidNode ~= self.playerNode) then
              continue
            end
            setCompanionAvoidPlayer(v16.spawnId, self.playerNode, self.avoidDistance)
            v16.avoidNode = self.playerNode
          end
        else
          if not (v11.classType == "lightWildlife") then
            continue
          end
          v12:update(dt)
        end
      end
    end
    if self.debugShow then
      self:debugDraw()
    end
  end
end
function WildlifeSpawner:removeFarAwayAnimals()
  local dt, v2, v3, v4 = self:getPlayerCenter()
  if dt then
    for v8, v9 in pairs(self.areas) do
      for v13, v14 in pairs(v9.species) do
        if v14.classType == "companionAnimal" then
          -- TODO: structure LOP_FORNPREP (pc 25, target 132)
          if v14.spawned[#v14.spawned].spawnId ~= nil then
            local v19, v20 = getCompanionClosestDistance(v14.spawned[#v14.spawned].spawnId, v2, v3, v4)
            if v9.areaMaxRadius < v19 then
              delete(v14.spawned[#v14.spawned].spawnId)
              v14.spawned[#v14.spawned].spawnId = nil
              v14.currentCount = v14.currentCount - v14.spawned[#v14.spawned].count
              self.totalCost = self.totalCost - v14.cost * v14.spawned[#v14.spawned].count
              table.remove(v14.spawned, #v14.spawned)
            end
          end
          -- TODO: structure LOP_FORNLOOP (pc 76, target 26)
        else
          if not (v14.classType == "lightWildlife") then
            continue
          end
          if not (v14.lightWildlife ~= nil) then
            continue
          end
          local v15 = v15:removeFarAwayAnimals(v9.areaMaxRadius, v2, v3, v4)
          if not (0 < v15) then
            continue
          end
          v14.currentCount = v14.currentCount - v15
          self.totalCost = self.totalCost - v14.cost * v15
          -- TODO: structure LOP_FORNPREP (pc 117, target 132)
          v19 = v19:countSpawned()
          if v19 == 0 then
            table.remove(v14.spawned, #v14.spawned)
          end
          -- TODO: structure LOP_FORNLOOP (pc 131, target 118)
        end
      end
    end
  end
end
function WildlifeSpawner:getPlayerCenter()
  if self.playerNode ~= nil then
    local dt = entityExists(self.playerNode)
    if dt then
      local dt, v2, v3 = getWorldTranslation(self.playerNode)
      return true, dt, v2, v3
    end
  end
  return false, 0, 0, 0
end
function WildlifeSpawner:updateSpawner()
  local dt, v2, v3, v4 = self:getPlayerCenter()
  if dt then
    self:checkAreas(v2, v3, v4)
  end
end
function WildlifeSpawner:trySpawnAtArea(species, spawnCircleRadius, testX, testY, testZ, isInWater)
  for v10, v11 in pairs(species) do
    local v12 = self:checkArea(testX, testY, testZ, v11.spawnRules, spawnCircleRadius, isInWater)
    if not v12 then
      continue
    end
    local v14 = math.random()
    local v15 = math.random()
    v15 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, testX + v14 * spawnCircleRadius, 0, testZ + v15 * spawnCircleRadius)
    v15 = self:spawnAnimals(v11, testX + v14 * spawnCircleRadius, v15 + 0.5, testZ + v15 * spawnCircleRadius)
    if not v15 then
      continue
    end
    return true
  end
  return false
end
function WildlifeSpawner:checkAreas(x, y, z)
  local v7 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x, 0, z)
  v7 = self:getIsInWater(x, v7 + 0.5, z)
  for v11, v12 in pairs(self.areas) do
    for v17, v18 in pairs(self.areasOfInterest) do
      if not ((v4 - v18.positionX) * (v4 - v18.positionX) + (v5 - v18.positionZ) * (v5 - v18.positionZ) < v12.areaSpawnRadius * v12.areaSpawnRadius) then
        continue
      end
      local v20 = self:trySpawnAtArea(v12.species, v18.radius, v4, v6, v5, v7)
      if not not v20 then
        break
      end
    end
    if not not v13 then
      continue
    end
    v15 = math.random(0, 360)
    v14 = math.rad(...)
    v18 = math.cos(v14)
    v18 = math.sin(v14)
    v18 = math.cos(v14)
    v18 = math.sin(v14)
    v15 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x + v12.areaSpawnRadius * v18 - v12.areaSpawnRadius * v18, 0, z + v12.areaSpawnRadius * v18 + v12.areaSpawnRadius * v18)
    self:trySpawnAtArea(v12.species, v12.spawnCircleRadius, x + v12.areaSpawnRadius * v18 - v12.areaSpawnRadius * v18, v15 + 0.5, z + v12.areaSpawnRadius * v18 + v12.areaSpawnRadius * v18, v7)
  end
end
function WildlifeSpawner:checkArea(x, y, z, rules, radius, isInWater)
  local currentHour = math.floor(g_currentMission.environment.dayTime / 3600000)
  for v14, v15 in pairs(rules) do
    if v15.hourFrom > currentHour and not (currentHour <= v15.hourTo) then
      continue
    end
    if v15.onField ~= WildlifeSpawner.RULE.DONT_CARE then
      if v9 == nil then
        local v17, v18 = FSDensityMapUtil.getFieldDataAtWorldPosition(x, y, z)
      end
      if v15.onField == WildlifeSpawner.RULE.REQUIRED then
        -- if v9 then goto L68 end
      end
      if v15.onField == WildlifeSpawner.RULE.NOT_ALLOWED then
      end
    end
    if v16 and v15.hasTrees ~= WildlifeSpawner.RULE.DONT_CARE then
      if v10 == nil then
        v17 = self:countTrees(x, y, z, radius)
        if 3 >= v17 then
        end
      end
      if v15.hasTrees == WildlifeSpawner.RULE.REQUIRED then
        -- if v10 then goto L118 end
      end
      if v15.hasTrees == WildlifeSpawner.RULE.NOT_ALLOWED then
      end
    end
    if v16 and v15.inWater ~= WildlifeSpawner.RULE.DONT_CARE then
      if v15.inWater == WildlifeSpawner.RULE.REQUIRED then
        -- if v6 then goto L154 end
      end
      if v15.inWater == WildlifeSpawner.RULE.NOT_ALLOWED then
      end
    end
    if not v16 then
      continue
    end
    return true
  end
  return v7
end
function WildlifeSpawner:countTrees(x, y, z, radius)
  self.treeCount = 0
  overlapSphere(x, y, z, radius, "treeCountTestCallback", self, CollisionFlag.TREE, false, true, false)
  return self.treeCount
end
function WildlifeSpawner:treeCountTestCallback(transformId)
  if transformId ~= 0 then
    local v2 = getHasClassId(transformId, ClassIds.SHAPE)
    if v2 then
      v2 = getParent(transformId)
      if v2 ~= nil then
        local v3 = getSplitType(transformId)
        if v3 ~= 0 then
          self.treeCount = self.treeCount + 1
        end
      end
    end
  end
  return true
end
function WildlifeSpawner.getIsInWater(v0, dt, v2, v3)
  local v5 = v5:getWaterYAtWorldPosition(dt, v2, v3)
  if v2 >= (v5 or -2000) then
  end
  return true
end
function WildlifeSpawner:countAnimalsTobeSpawned(species)
  local remainingAnimal = math.floor((self.maxCost - self.totalCost) / species.cost)
  if remainingAnimal < species.minCount then
    return 0
  end
  local v6 = math.random(1, species.maxCount - species.minCount)
  return math.min(remainingAnimal, species.minCount + v6)
end
function WildlifeSpawner:spawnAnimals(species, spawnPosX, spawnPosY, spawnPosZ)
  local xmlFilename = Utils.getFilename(species.configFilename, g_currentMission.loadingMapBaseDirectory)
  if species.name ~= nil and xmlFilename ~= nil and g_currentMission.terrainRootNode ~= nil then
    -- if v1.maxCount > v1.currentCount then goto L25 end
  end
  return false
  local nbAnimals = self:countAnimalsTobeSpawned(species)
  if nbAnimals == 0 then
    return false
  end
  if species.classType == "companionAnimal" then
    local v16 = v16:getIsServer()
    local v17 = v17:getIsClient()
    local v8 = createAnimalCompanionManager(species.name, xmlFilename, "wildlifeAnimal", spawnPosX, spawnPosY, spawnPosZ, g_currentMission.terrainRootNode, v16, v17, nbAnimals, AudioGroup.ENVIRONMENT)
    setCompanionAvoidPlayer(v8, self.playerNode, self.avoidDistance)
    setCompanionCollisionMask(v8, CollisionFlag.TERRAIN + CollisionFlag.STATIC_WORLD, CollisionFlag.STATIC_OBJECTS + CollisionFlag.DYNAMIC_OBJECT + CollisionFlag.VEHICLE, CollisionFlag.WATER)
  elseif species.classType == "lightWildlife" then
    v8 = v8:createAnimals(species.name, spawnPosX, spawnPosY, spawnPosZ, nbAnimals)
  end
  if v7 ~= nil and v7 ~= 0 then
    table.insert(species.spawned, {spawnId = v7, posX = spawnPosX, posY = spawnPosY, posZ = spawnPosZ, count = nbAnimals, avoidNode = self.playerNode})
    species.currentCount = species.currentCount + nbAnimals
    self.totalCost = self.totalCost + species.cost * nbAnimals
    return true
  end
  return false
end
function WildlifeSpawner:debugDraw()
  local xmlFilename = string.format("Wildlife Info\nCost(%d / %d)", self.totalCost, self.maxCost)
  renderText(...)
  local species, spawnPosX, spawnPosY, spawnPosZ = self:getPlayerCenter()
  if species then
    for v8, v9 in pairs(self.areas) do
      for v13, v14 in pairs(v9.species) do
        for v18, v19 in pairs(v14.spawned) do
          if not (v19.spawnId ~= nil) then
            continue
          end
          if v14.classType == "companionAnimal" then
            local v21, v22 = getCompanionClosestDistance(v19.spawnId, spawnPosX, spawnPosY, spawnPosZ)
          elseif v14.classType == "lightWildlife" then
            v21 = v21:getClosestDistance(spawnPosX, spawnPosY, spawnPosZ)
            v21 = math.sqrt(v21)
          end
          v21 = string.format("[%s][%d]\n- nearest player distance (%.3f)", v14.name, v19.spawnId, v20)
          local v27 = getCorrectTextSize(0.012)
          Utils.renderTextAtWorldPosition(v19.posX, v19.posY + 0.12, v19.posZ, v21, v27, 0)
          DebugUtil.drawDebugCubeAtWorldPos(v19.posX, v19.posY, v19.posZ, 1, 0, 0, 0, 1, 0, 0.05, 0.05, 0.05, 1, 1, 0)
          DebugUtil.drawDebugCircle(v19.posX, v19.posY, v19.posZ, v14.groupSpawnRadius, 10, {1, 1, 0})
        end
      end
    end
  end
  for v8, v9 in pairs(self.areas) do
    for v13, v14 in pairs(v9.species) do
      if not (v14.classType == "companionAnimal") then
        continue
      end
      for v18, v19 in pairs(v14.spawned) do
        -- TODO: structure LOP_FORNPREP (pc 173, target 220)
        local v23 = self:isInDebugList(v19.spawnId, 0)
        if self.debugShowId == WildlifeSpawner.DEBUGSHOWIDSTATES.SINGLE then
          -- if v23 then goto L204 end
        end
        if self.debugShowId ~= WildlifeSpawner.DEBUGSHOWIDSTATES.ALL then
        end
        if v23 then
        end
        if v23 then
        end
        v25(v26, v27, v28, v29, v30)
        -- TODO: structure LOP_FORNLOOP (pc 219, target 174)
      end
    end
  end
end
function WildlifeSpawner:updateAreaOfInterest(dt)
  for xmlFilename, nbAnimals in pairs(self.areasOfInterest) do
    nbAnimals.timeToLive = nbAnimals.timeToLive - dt
    if not (nbAnimals.timeToLive <= 0) then
      continue
    end
    table.remove(self.areasOfInterest, xmlFilename)
  end
end
function WildlifeSpawner:addAreaOfInterest(liveTime, posX, posZ, radius)
  if #self.areasOfInterest <= self.maxAreaOfInterest then
    table.insert(self.areasOfInterest, {liveTime = liveTime, positionX = posX, positionZ = posZ, radius = radius, timeToLive = self.areaOfInterestliveTime})
  end
end
function WildlifeSpawner:animalExists(spawnId, animalId)
  for nbAnimals, v7 in pairs(self.areas) do
    for v11, v12 in pairs(v7.species) do
      if not (v12.classType == "companionAnimal") then
        continue
      end
      for v16, v17 in pairs(v12.spawned) do
        if not (v17.spawnId == spawnId) then
          continue
        end
        if not (animalId < v17.count) then
          continue
        end
        return true
      end
    end
  end
  return false
end
function WildlifeSpawner:isInDebugList(spawnId, animalId)
  for nbAnimals, v7 in pairs(self.debugAnimalList) do
    if not (v7.spawnId == spawnId) then
      continue
    end
    if not (v7.animalId == animalId) then
      continue
    end
    return true
  end
  return false
end
function WildlifeSpawner:consoleCommandAddWildlifeAnimalToDebug(spawnId, animalId)
  local spawnPosZ = tonumber(spawnId)
  if spawnPosZ == nil then
  end
  spawnPosZ = tonumber(animalId)
  if spawnPosZ == nil then
  end
  if spawnPosY then
    spawnPosZ = self:animalExists(spawnId, animalId)
    if spawnPosZ then
      table.insert(self.debugAnimalList, {spawnId = spawnId, animalId = animalId})
      spawnPosZ = string.format("-- added [spawn(%d)][animal(%d)] to debug list.", spawnId, animalId)
      return spawnPosZ
    end
  end
  spawnPosZ = string.format("-- gsWildlifeAddAnimalToDebug [spawnId][animalId]")
  return spawnPosZ
end
function WildlifeSpawner:consoleCommandRemoveWildlifeAnimalToDebug(spawnId, animalId)
  local spawnPosZ = tonumber(spawnId)
  if spawnPosZ == nil then
  end
  spawnPosZ = tonumber(animalId)
  if spawnPosZ == nil then
  end
  if spawnPosY then
    for v7, v8 in pairs(self.debugAnimalList) do
      if not (v8.spawnId == spawnId) then
        continue
      end
      if not (v8.animalId == animalId) then
        continue
      end
      table.remove(self.debugAnimalList, v7)
      return string.format("-- removed [spawn(%d)][animal(%d)] from debug list.", spawnId, animalId)
    end
  end
  spawnPosZ = string.format("-- gsWildlifeRemoveAnimalToDebug [spawnId][animalId]")
  return spawnPosZ
end
function WildlifeSpawner:consoleCommandToggleShowWildlife()
  self.debugShow = not self.debugShow
  local spawnPosY = tostring(self.debugShow)
  return string.format(...)
end
function WildlifeSpawner:consoleCommandToggleShowWildlifeId()
  self.debugShowId = self.debugShowId + 1
  if WildlifeSpawner.DEBUGSHOWIDSTATES.MAX < self.debugShowId then
    self.debugShowId = WildlifeSpawner.DEBUGSHOWIDSTATES.NONE
  end
  if self.debugShowId == WildlifeSpawner.DEBUGSHOWIDSTATES.NONE then
  elseif self.debugShowId == WildlifeSpawner.DEBUGSHOWIDSTATES.SINGLE then
  else
    if self.debugShowId == WildlifeSpawner.DEBUGSHOWIDSTATES.ALL then
    end
  end
  return string.format("-- show Wildlife Id = %s", species)
end
function WildlifeSpawner:consoleCommandToggleShowWildlifeSteering()
  self.debugShowSteering = not self.debugShowSteering
  local spawnPosY = tostring(self.debugShowSteering)
  return string.format(...)
end
function WildlifeSpawner:consoleCommandToggleShowWildlifeAnimation()
  self.debugShowAnimation = not self.debugShowAnimation
  local spawnPosY = tostring(self.debugShowAnimation)
  return string.format(...)
end
function WildlifeSpawner:consoleCommandToggleEnabled(state)
  if state ~= nil then
    local spawnPosX = Utils.stringToBoolean(state)
  end
  spawnPosX = Utils.getNoNil(state, not self.isEnabled)
  self.isEnabled = spawnPosX
  if not self.isEnabled then
    self:removeAllAnimals()
    print("removed all wildlife animals")
  end
  spawnPosX = string.format("Wildlife isEnabled=%s", self.isEnabled)
  return spawnPosX
end
