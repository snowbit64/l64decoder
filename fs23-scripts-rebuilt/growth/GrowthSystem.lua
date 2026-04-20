-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GrowthSystem = {}
local GrowthSystem_mt = Class(GrowthSystem)
GrowthSystem.MAX_MS_PER_FRAME = 0.5
GrowthSystem.MAX_MS_PER_FRAME_SLEEPING = 1.5
GrowthSystem.MODE = {SEASONAL = 1, DAILY = 2, DISABLED = 3}
function GrowthSystem.new(mission, isServer, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.mission = mission
  v3.isServer = isServer
  v3.fieldCropsUpdaters = {}
  v3.fieldCropsUpdatersCellSize = 16
  v3.growthQueue = {}
  v3.currentGrowthPeriod = nil
  v4:subscribe(MessageType.SLEEPING, v3.onSleepChanged, v3)
  return v3
end
function GrowthSystem:delete()
  v1:unsubscribeAll(self)
  for v4, v5 in pairs(self.fieldCropsUpdaters) do
    if not (v5.updater ~= nil) then
      continue
    end
    delete(v5.updater)
    v5.updater = nil
  end
  if self.weedUpdater ~= nil then
    delete(self.weedUpdater)
    self.weedUpdater = nil
  end
  if self.stoneUpdater ~= nil then
    delete(self.stoneUpdater)
    self.stoneUpdater = nil
  end
  if g_addTestCommands then
    removeConsoleCommand("gsGrowNow")
  end
end
function GrowthSystem:loadMapData(mapXmlFile, missionInfo, baseDirectory)
  self.missionInfo = missionInfo
  self.environment = self.mission.environment
  local v5 = getXMLString(mapXmlFile, "map.growth#filename")
  local v4 = Utils.getFilename(v5, baseDirectory)
  v5 = XMLFile.load("growth", v4)
  if not v5 then
    Logging.fatal("Could not load '%s' from '%s'", v4, mapXmlFile)
  end
  self:loadGrowthData(v5, "growth")
  v5:delete()
  if g_addTestCommands then
    addConsoleCommand("gsGrowNow", "Force growth on foliage", "consoleCommandGrowNow", self)
  end
  v6:subscribe(MessageType.PERIOD_CHANGED, self.onPeriodChanged, self)
end
function GrowthSystem:loadFromXMLFile(xmlFilename)
  if xmlFilename ~= nil then
    local xmlFile = XMLFile.load("environment", xmlFilename)
    local v3 = xmlFile:getInt("environment.growth#currentPeriod")
    self.currentGrowthPeriod = v3
    xmlFile:iterate("environment.growth.queue.period", function(self, xmlFilename)
      local xmlFile = xmlFile:getInt(xmlFilename)
      table.insert(u1.growthQueue, xmlFile)
    end)
    xmlFile:delete()
  end
  if self.currentGrowthPeriod ~= nil then
    self:setMonthEngineState(self.currentGrowthPeriod)
    self.numEngineStepsActive = 0
    for v5, v6 in pairs(self.fieldCropsUpdaters) do
      local v7 = setApplyCropsGrowthFinishedCallback(v6.updater, "onEngineStepFinished", self)
      if not v7 then
        continue
      end
      self.numEngineStepsActive = self.numEngineStepsActive + 1
      local v9 = self:getMaxUpdateTime()
      setApplyCropsGrowthMaxTimePerFrame(...)
    end
    if self.weedUpdater ~= nil and self.missionInfo.weedsEnabled then
      xmlFile = setDensityMapUpdaterApplyFinishedCallback(self.weedUpdater, "onEngineStepFinished", self)
      if xmlFile then
        self.numEngineStepsActive = self.numEngineStepsActive + 1
        v4 = self:getMaxUpdateTime()
        setDensityMapUpdaterApplyMaxTimePerFrame(...)
      end
    end
    if self.stoneUpdater ~= nil and self.missionInfo.stonesEnabled then
      xmlFile = setDensityMapUpdaterApplyFinishedCallback(self.stoneUpdater, "onEngineStepFinished", self)
      if xmlFile then
        self.numEngineStepsActive = self.numEngineStepsActive + 1
        v4 = self:getMaxUpdateTime()
        setDensityMapUpdaterApplyMaxTimePerFrame(...)
      end
    end
    if self.numEngineStepsActive == 0 then
      self.currentGrowthPeriod = nil
    end
  end
  self:setGrowthEnabled(true)
end
function GrowthSystem:saveToXMLFile(file, key)
  local xmlFile = XMLFile.wrap(file)
  if self.currentGrowthPeriod ~= nil then
    xmlFile:setInt("environment.growth#currentPeriod", self.currentGrowthPeriod)
  end
  xmlFile:setSortedTable("environment.growth.queue.period", self.growthQueue, function(self, file)
    key:setInt(self, file)
  end)
  xmlFile:delete()
end
function GrowthSystem:saveState(directory)
  for v5, v6 in pairs(self.fieldCropsUpdaters) do
    saveCropsGrowthStateToFile(v6.updater, directory .. "/" .. v5 .. "_growthState.xml")
  end
  if self.weedUpdater ~= nil then
    saveDensityMapUpdaterStateToFile(self.weedUpdater, directory .. "/weed_growthState.xml")
  end
  if self.stoneUpdater ~= nil then
    saveDensityMapUpdaterStateToFile(self.stoneUpdater, directory .. "/stone_growthState.xml")
  end
end
function GrowthSystem:onTerrainLoad(terrainRootNode)
  if not self.isServer then
    return
  end
  local v3, v4, v5 = v3:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v6, v7, v8 = v6:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
  local v10 = self.mission.weedSystem:getMapHasWeed()
  if v10 then
    local v10, v11, v12, v13, v14 = self.mission.weedSystem:getDensityMapData()
    local v15 = createDensityMapUpdater(self.mission.weedSystem.name, v10, v11, v12, v13, v14, 0, 0, 0, 0, 0)
    self.weedUpdater = v15
    setDensityMapUpdaterMask(self.weedUpdater, v3, v4, v5)
  end
  v11 = self.mission.stoneSystem:getMapHasStones()
  if v11 then
    v11, v12, v13 = self.mission.stoneSystem:getDensityMapData()
    v14, v15 = self.mission.stoneSystem:getMinMaxValues()
    local v16 = createDensityMapUpdater(self.mission.stoneSystem.name, v11, v12, v13, v14, v15, 0, 0, 0, 0, 0)
    self.stoneUpdater = v16
  end
  for v14, v15 in pairs(self.fieldCropsUpdaters) do
    v16 = FieldCropsUpdaterConstructor.new(self.fieldCropsUpdatersCellSize)
    for v20, v21 in pairs(v15.ids) do
      local v22 = v22:getFruitTypeByName(v20)
      local v23 = v23:getFieldGroundValue(v22.groundTypeChangeType)
      local groundTypeChangeMask = bitNOT(0)
      if 0 < #v22.groundTypeChangeMaskTypes then
        for v28, v29 in ipairs(v22.groundTypeChangeMaskTypes) do
          local v32 = bitShiftLeft(1, v29)
          local v30 = bitOR(...)
        end
      end
      v16:addCropType(v21, v22.numGrowthStates, 0, v22.resetsSpray, v22.groundTypeChangeGrowthState, v23, groundTypeChangeMask)
    end
    v16:setGroundTerrainDetail(v6, v7, v8, v4, v5)
    v17 = v16:finalize("CropsUpdater")
    v15.updater = v17
  end
  self:setGrowthEnabled(false)
  if self.missionInfo.isValid and self.missionInfo.densityMapRevision == g_densityMapRevision then
    for v15, v16 in pairs(self.fieldCropsUpdaters) do
      loadCropsGrowthStateFromFile(v16.updater, v11 .. "/" .. v15 .. "_growthState.xml")
    end
    if self.weedUpdater ~= nil then
      loadDensityMapUpdaterStateFromFile(self.weedUpdater, v11 .. "/weed_growthState.xml")
    end
    if self.stoneUpdater ~= nil then
      loadDensityMapUpdaterStateFromFile(self.stoneUpdater, v11 .. "/stone_growthState.xml")
    end
  end
end
function GrowthSystem:setFruitLayer(mapName, fruitType, layerName, id)
  if self.fieldCropsUpdaters[mapName] == nil then
    self.fieldCropsUpdaters[mapName] = {ids = {}}
  end
  self.fieldCropsUpdaters[mapName].ids[fruitType.layerName] = id
end
function GrowthSystem.getMaxUpdateTime(v0)
  if g_sleepManager.isSleeping then
    return GrowthSystem.MAX_MS_PER_FRAME_SLEEPING
  end
  return GrowthSystem.MAX_MS_PER_FRAME
end
function GrowthSystem:loadGrowthData(xmlFile, root)
  self.seasonalFruitData = {}
  self.nonSeasonalFruitData = {}
  if Platform.gameplay.supportSeasonalGrowth then
    xmlFile:iterate(root .. ".seasonal.fruit", function(self, xmlFile)
      local root = root:getString(xmlFile .. "#name")
      if root == nil then
        Logging.error("Fruit name is missing at %s", xmlFile)
        return
      end
      local v3 = v3:getFruitTypeByName(root)
      if v3 == nil then
        Logging.error("Fruit with name '%s' does not exist at %s", root, xmlFile)
        return
      end
      local v7 = v7:getString(xmlFile .. "#initialState")
      local v4 = v4:parseRange(...)
      u1.seasonalFruitData[v3.index] = {initialState = v4}
      v6:iterate(xmlFile .. ".period", function(self, xmlFile)
        local root = root:getInt(xmlFile .. "#index")
        if root ~= nil and root >= 1 then
          -- if 12 >= v2 then goto L22 end
        end
        Logging.xmlError(u0, "Invalid period for '%s'", xmlFile)
        return
        local v4 = v4:getBool(xmlFile .. "#plantingAllowed", false)
        u1[root] = {plantingAllowed = v4, growthMapping = {}}
        -- TODO: structure LOP_FORNPREP (pc 44, target 49)
        {plantingAllowed = v4, growthMapping = {}}.growthMapping[1] = 1
        -- TODO: structure LOP_FORNLOOP (pc 48, target 45)
        {plantingAllowed = v4, growthMapping = {}}.growthMapping[u2.cutState] = u2.cutState
        v4:iterate(xmlFile .. ".update", function(self, xmlFile)
          local v5 = v5:getString(xmlFile .. "#range")
          local root = root:parseRange(...)
          if root == nil then
            Logging.xmlError(u2, "Update action of fruit growth definition is missing range", xmlFile)
            return
          end
          local v3 = v3:getInt(xmlFile .. "#add")
          if v3 ~= nil then
            -- TODO: structure LOP_FORNPREP (pc 33, target 64)
            u3.growthMapping[root[1]] = root[1] + v3
            -- TODO: structure LOP_FORNLOOP (pc 39, target 34)
            return
          end
          local v7 = v7:getString(xmlFile .. "#set")
          local v4 = v4:parseStateValue(...)
          if v4 ~= nil then
            -- TODO: structure LOP_FORNPREP (pc 58, target 64)
            u3.growthMapping[root[1]] = v4
            -- TODO: structure LOP_FORNLOOP (pc 63, target 59)
          end
        end)
      end)
      -- TODO: structure LOP_FORNPREP (pc 72, target 122)
      if u1.seasonalFruitData[v3.index][1].plantingAllowed then
        -- TODO: structure LOP_FORNPREP (pc 81, target 121)
        if v3.minHarvestingGrowthState <= 1 then
          -- if 1 > v3.maxHarvestingGrowthState then goto L99 end
          u1.seasonalFruitData[v3.index][(1 + 0 - 1) % 12 + 1].harvestPossible = true
        elseif v3.minPreparingGrowthState <= 1 then
          -- if 1 > v3.maxPreparingGrowthState then goto L112 end
          u1.seasonalFruitData[v3.index][(1 + 0 - 1) % 12 + 1].harvestPossible = true
        else
          -- if 1 == v3.witheredState then goto L121 end
        end
        -- TODO: structure LOP_FORNLOOP (pc 120, target 82)
      end
      -- TODO: structure LOP_FORNLOOP (pc 121, target 73)
    end)
  end
  xmlFile:iterate(root .. ".nonSeasonal.fruit", function(self, xmlFile)
    local root = root:getString(xmlFile .. "#name")
    if root == nil then
      Logging.xmlError(u0, "Fruit name is missing at %s", xmlFile)
      return
    end
    local v3 = v3:getFruitTypeByName(root)
    if v3 == nil then
      Logging.xmlError(u0, "Fruit with name '%s' does not exist at %s", root, xmlFile)
      return
    end
    -- TODO: structure LOP_FORNPREP (pc 41, target 46)
    {growthMapping = {}}.growthMapping[1] = 1
    -- TODO: structure LOP_FORNLOOP (pc 45, target 42)
    v5:iterate(xmlFile .. ".update", function(self, xmlFile)
      local v5 = v5:getString(xmlFile .. "#range")
      local root = root:parseRange(...)
      if root == nil then
        Logging.xmlError(u2, "Update action of fruit growth definition is missing range", xmlFile)
        return
      end
      local v3 = v3:getInt(xmlFile .. "#add")
      if v3 ~= nil then
        -- TODO: structure LOP_FORNPREP (pc 33, target 64)
        u3.growthMapping[root[1]] = root[1] + v3
        -- TODO: structure LOP_FORNLOOP (pc 39, target 34)
        return
      end
      local v7 = v7:getString(xmlFile .. "#set")
      local v4 = v4:parseStateValue(...)
      if v4 ~= nil then
        -- TODO: structure LOP_FORNPREP (pc 58, target 64)
        u3.growthMapping[root[1]] = v4
        -- TODO: structure LOP_FORNLOOP (pc 63, target 59)
      end
    end)
    u1.nonSeasonalFruitData[v3.index] = {growthMapping = {}}
  end)
end
function GrowthSystem:parseRange(fruitDesc, str)
  if str == nil then
    return nil
  end
  local items = str:split("-")
  if #items ~= 0 then
    -- if 2 >= #v5 then goto L19 end
  end
  return nil
  local v6 = self:parseStateValue(fruitDesc, items[1])
  if #items == 2 then
    v6 = self:parseStateValue(fruitDesc, items[2])
  else
  end
  return {v3, v4}
end
function GrowthSystem.parseStateValue(v0, xmlFile, root)
  if root == nil then
    return nil
  end
  local v3 = root:lower()
  if v3 == "max" then
    return xmlFile.numGrowthStates
  end
  if root == "cut" then
    return xmlFile.cutState + 1
  end
  if root == "withered" then
    return xmlFile.witheredState
  end
  v3 = tonumber(root)
  if v3 == nil then
    return nil
  end
  return math.floor(v3)
end
function GrowthSystem.update(v0, xmlFile)
end
function GrowthSystem:onPeriodChanged()
  if self.environment.currentPeriod - 1 == 0 then
  end
  self:triggerGrowth(xmlFile)
end
function GrowthSystem:onSleepChanged(isSleeping)
  if self.isServer then
    for v5, v6 in pairs(self.fieldCropsUpdaters) do
      local v9 = self:getMaxUpdateTime()
      setApplyCropsGrowthMaxTimePerFrame(...)
    end
    if self.weedUpdater ~= nil and self.missionInfo.weedsEnabled then
      v4 = self:getMaxUpdateTime()
      setDensityMapUpdaterApplyMaxTimePerFrame(...)
    end
    if self.stoneUpdater ~= nil and self.missionInfo.stonesEnabled then
      v4 = self:getMaxUpdateTime()
      setDensityMapUpdaterApplyMaxTimePerFrame(...)
    end
  end
end
function GrowthSystem:setMonthEngineState(period)
  for v5, v6 in pairs(self.fieldCropsUpdaters) do
    for v10, v11 in pairs(v6.ids) do
      local v12 = v12:getFruitTypeByName(v10)
      if self.missionInfo.growthMode == GrowthSystem.MODE.SEASONAL then
        if not (self.seasonalFruitData[v12.index] ~= nil) then
          continue
        end
        -- TODO: structure LOP_FORNPREP (pc 48, target 122)
        setCropsGrowthNextState(v6.updater, v11, 1, self.seasonalFruitData[v12.index][period].growthMapping[1])
        -- TODO: structure LOP_FORNLOOP (pc 57, target 49)
      else
        if not (self.missionInfo.growthMode == GrowthSystem.MODE.DAILY) then
          continue
        end
        if self.nonSeasonalFruitData[v12.index] == nil then
          -- TODO: structure LOP_FORNPREP (pc 83, target 93)
          setCropsGrowthNextState(v6.updater, v11, 1, 1 + 1)
          -- TODO: structure LOP_FORNLOOP (pc 92, target 84)
          if not v12.regrows then
            continue
          end
          setCropsGrowthNextState(v6.updater, v11, v12.cutState, v12.firstRegrowthState)
        else
          -- TODO: structure LOP_FORNPREP (pc 112, target 122)
          setCropsGrowthNextState(v6.updater, v11, 1, self.nonSeasonalFruitData[v12.index].growthMapping[1])
          -- TODO: structure LOP_FORNLOOP (pc 121, target 113)
        end
      end
    end
  end
  if self.weedUpdater ~= nil then
    v3 = v3:getGrowthMapping()
    for v5, v6 in pairs(...) do
      setDensityMapUpdaterNextValue(self.weedUpdater, 0, v5, v6)
    end
  end
  if self.stoneUpdater ~= nil then
    v3 = v3:getGrowthMapping()
    for v5, v6 in ipairs(...) do
      if not (v6.period == period) then
        continue
      end
      setDensityMapUpdaterNextValue(self.stoneUpdater, 0, v6.from, v6.to)
    end
  end
end
function GrowthSystem:triggerGrowth(period)
  if self.currentGrowthPeriod ~= nil then
    self.growthQueue[#self.growthQueue + 1] = period
    return
  end
  self:startEngineGrowth(period)
end
function GrowthSystem:startEngineGrowth(period)
  Logging.devInfo("GrowthSystem:startEngineGrowth %d - Pending growth tasks %d", period, #self.growthQueue)
  self:setMonthEngineState(period)
  self.currentGrowthPeriod = period
  self.numEngineStepsActive = 0
  if self.missionInfo.growthMode == GrowthSystem.MODE.DISABLED then
    self:onEngineGrowthFinished()
    return
  end
  for v5, v6 in pairs(self.fieldCropsUpdaters) do
    self.numEngineStepsActive = self.numEngineStepsActive + 1
    local v11 = self:getMaxUpdateTime()
    applyCropsGrowth(...)
  end
  if self.weedUpdater ~= nil and self.missionInfo.weedsEnabled then
    self.numEngineStepsActive = self.numEngineStepsActive + 1
    v6 = self:getMaxUpdateTime()
    applyDensityMapUpdater(...)
  end
  if self.stoneUpdater ~= nil and self.missionInfo.stonesEnabled then
    self.numEngineStepsActive = self.numEngineStepsActive + 1
    v6 = self:getMaxUpdateTime()
    applyDensityMapUpdater(...)
  end
  self:performScriptBasedGrowth(period)
end
function GrowthSystem:onEngineGrowthFinished()
  self.currentGrowthPeriod = nil
  if 0 < #self.growthQueue then
    table.remove(self.growthQueue, 1)
    self:startEngineGrowth(self.growthQueue[1])
  end
  root:publish(MessageType.FINISHED_GROWTH_PERIOD, xmlFile)
end
function GrowthSystem:onEngineStepFinished()
  self.numEngineStepsActive = self.numEngineStepsActive - 1
  if self.numEngineStepsActive == 0 then
    self:onEngineGrowthFinished()
  end
end
function GrowthSystem.performScriptBasedGrowth(v0, xmlFile)
end
function GrowthSystem:setGrowthMode(mode, noEventSend)
  if self.missionInfo.growthMode ~= mode then
    self.missionInfo.growthMode = mode
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'growthMode': %d", mode)
  end
end
function GrowthSystem:getGrowthMode()
  return self.missionInfo.growthMode
end
function GrowthSystem:setGrowthMask(map, firstChannel, numChannels)
  for v7, v8 in pairs(self.fieldCropsUpdaters) do
    if not (v8.updater ~= nil) then
      continue
    end
    setCropsGrowthMask(v8.updater, map, firstChannel, numChannels)
  end
  if self.weedUpdater ~= nil then
    setDensityMapUpdaterMask(self.weedUpdater, map, firstChannel, numChannels)
  end
end
function GrowthSystem:resetGrowthMask()
  self:setGrowthMask(0, 0, 0)
end
function GrowthSystem.setIgnoreDensityChanges(v0, xmlFile)
end
function GrowthSystem.setIsGamePaused(v0, xmlFile)
end
function GrowthSystem:setGrowthEnabled(isEnabled)
  self.growthEnabled = isEnabled
  for v5, v6 in pairs(self.fieldCropsUpdaters) do
    if not (v6.updater ~= nil) then
      continue
    end
    setCropsEnableGrowth(v6.updater, isEnabled)
  end
  if self.weedUpdater ~= nil then
    setDensityMapUpdaterEnabled(self.weedUpdater, isEnabled)
  end
end
function GrowthSystem.onWeedGrowthChanged(v0)
end
function GrowthSystem:canFruitBePlanted(fruitIndex, period)
  if self.missionInfo.growthMode ~= GrowthSystem.MODE.SEASONAL then
    return true
  end
  if period == nil then
  end
  if self.seasonalFruitData[fruitIndex] == nil then
    return false
  end
  return v3[period].plantingAllowed
end
function GrowthSystem:canFruitBeHarvested(fruitIndex, period)
  if self.missionInfo.growthMode ~= GrowthSystem.MODE.SEASONAL then
    return true
  end
  if self.seasonalFruitData[fruitIndex] == nil then
    return false
  end
  return v3[period].harvestPossible
end
function GrowthSystem:getRandomInitialState(fruitIndex)
  if self.missionInfo.growthMode == GrowthSystem.MODE.SEASONAL then
    if self.seasonalFruitData[fruitIndex] == nil then
      return nil
    end
    if self.seasonalFruitData[fruitIndex].initialState == nil then
      return nil
    end
    if root[2] == 0 then
      return nil
    end
    return math.random(root[1], root[2])
  end
  local root = root:getFruitTypeByIndex(fruitIndex)
  v3 = math.random(1, root.numGrowthStates)
  return v3
end
function GrowthSystem:consoleCommandGrowNow(period)
  local root = tonumber(period)
  if root ~= nil then
    self:triggerGrowth(root)
    return "Triggered growth"
  end
  return "Error: No period given. " .. "Usage: gsGrowNow period(1..12)"
end
