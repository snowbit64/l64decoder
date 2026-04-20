-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableSystem = {}
local PlaceableSystem_mt = Class(PlaceableSystem)
function PlaceableSystem.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.mission = mission
  v2.placeables = {}
  v2.savegameIdToPlaceable = {}
  v2.weatherStations = {}
  v2.farmhouses = {}
  v2.bunkerSilos = {}
  v2.version = 1
  v2.isReloadRunning = false
  local v3 = v3:getIsServer()
  if v3 and g_addTestCommands then
    addConsoleCommand("gsPlaceablesDeleteAll", "Deletes all placeables", "consoleCommandDeleteAllPlaceables", v2)
    addConsoleCommand("gsPlaceablesReloadAll", "Reloads all placeables", "consoleCommandReloadAllPlaceables", v2)
    addConsoleCommand("gsPlaceablesLoadAll", "Loads all placeables", "consoleCommandLoadAllPlaceables", v2)
    addConsoleCommand("gsPlaceablesShowTestAreas", "Show test areas of all placeables", "consoleCommandPlaceableTestAreas", v2)
  end
  return v2
end
function PlaceableSystem:delete()
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  self.placeables[#self.placeables]:delete()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  self.mission = nil
  self.placeables = {}
  self.savegameIdToPlaceable = {}
  self.weatherStations = {}
  self.farmhouses = {}
  self.bunkerSilos = {}
  removeConsoleCommand("gsPlaceablesDeleteAll")
  removeConsoleCommand("gsPlaceablesReloadAll")
  removeConsoleCommand("gsPlaceablesLoadAll")
  removeConsoleCommand("gsPlaceablesShowTestAreas")
end
function PlaceableSystem:deleteAll()
  -- TODO: structure LOP_FORNPREP (pc 8, target 16)
  self.placeables[#self.placeables]:delete()
  -- TODO: structure LOP_FORNLOOP (pc 15, target 9)
  return #self.placeables
end
function PlaceableSystem:addPlaceable(placeable)
  if placeable ~= nil then
    local v2 = placeable:isa(Placeable)
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L14
  end
  Logging.error("Given object is not a placeable")
  return
  table.addElement(self.placeables, placeable)
end
function PlaceableSystem:removePlaceable(placeable)
  if placeable.currentSavegameId ~= nil then
    self.savegameIdToPlaceable[placeable.currentSavegameId] = nil
  end
  table.removeElement(self.placeables, placeable)
end
function PlaceableSystem:getPlaceableBySavegameId(savegameId)
  return self.savegameIdToPlaceable[savegameId]
end
function PlaceableSystem:addWeatherStation(weatherStation)
  table.addElement(self.weatherStations, weatherStation)
end
function PlaceableSystem:removeWeatherStation(weatherStation)
  table.removeElement(self.weatherStations, weatherStation)
end
function PlaceableSystem:addBunkerSilo(bunkerSilo)
  table.addElement(self.bunkerSilos, bunkerSilo)
end
function PlaceableSystem:removeBunkerSilo(bunkerSilo)
  table.removeElement(self.bunkerSilos, bunkerSilo)
end
function PlaceableSystem:getBunkerSilos()
  return self.bunkerSilos
end
function PlaceableSystem:getHasWeatherStation(farmId)
  for v5, v6 in ipairs(self.weatherStations) do
    if farmId ~= nil then
      local v7 = v6:getOwnerFarmId()
      if not (v7 == farmId) then
        continue
      end
    end
    return true
  end
  return false
end
function PlaceableSystem:addFarmhouse(farmhouse)
  table.addElement(self.farmhouses, farmhouse)
end
function PlaceableSystem:removeFarmhouse(farmhouse)
  table.removeElement(self.farmhouses, farmhouse)
end
function PlaceableSystem:getFarmhouse(farmId)
  for v5, v6 in ipairs(self.farmhouses) do
    if farmId ~= nil then
      local v7 = v6:getOwnerFarmId()
      if not (v7 == farmId) then
        continue
      end
    end
    return v6
  end
  return nil
end
function PlaceableSystem:save(xmlFilename, usedModNames)
  local xmlFile = XMLFile.create("placeablesXML", xmlFilename, "placeables", Placeable.xmlSchemaSavegame)
  if xmlFile ~= nil then
    self:saveToXML(xmlFile, usedModNames)
    xmlFile:delete()
  end
end
function PlaceableSystem:setSaveIds()
  for v5, v6 in ipairs(self.placeables) do
    local v7 = v6:getNeedsSaving()
    if not v7 then
      continue
    end
    v6.currentSavegameId = v1
  end
end
function PlaceableSystem:saveToXML(xmlFile, usedModNames)
  if xmlFile ~= nil then
    xmlFile:setValue("placeables#version", self.version)
    for v7, v8 in ipairs(self.placeables) do
      local v9 = v8:getNeedsSaving()
      if not v9 then
        continue
      end
      self:savePlaceableToXML(v8, xmlFile, v3, v7, usedModNames)
    end
    xmlFile:save()
  end
end
function PlaceableSystem.savePlaceableToXML(v0, v1, v2, v3, v4, v5)
  local v6 = string.format("placeables.placeable(%d)", v3)
  if v1.customEnvironment ~= nil then
    if v5 ~= nil then
      v5[v1.customEnvironment] = v1.customEnvironment
    end
    v2:setValue(v6 .. "#modName", v7)
  end
  local v12 = NetworkUtil.convertToNetworkFilename(v1.configFileName)
  local v11 = HTMLUtil.encodeToHTML(...)
  v2:setValue(...)
  v1:saveToXMLFile(v2, v6, v5)
end
function PlaceableSystem:load(xmlFilename, defaultXMLFilename, missionInfo, missionDynamicInfo, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  local xmlFile = XMLFile.load("placeablesXML", xmlFilename, Placeable.xmlSchemaSavegame)
  local v9 = xmlFile:getValue("placeables#version", 1)
  self.version = v9
  if xmlFilename ~= defaultXMLFilename then
  end
  v9.missionInfo = missionInfo
  v9.missionDynamicInfo = missionDynamicInfo
  v9.placeablesById = {}
  v9.index = 0
  v9.asyncCallbackFunction = asyncCallbackFunction
  v9.asyncCallbackObject = asyncCallbackObject
  v9.asyncCallbackArguments = asyncCallbackArguments
  local v10 = self:loadNextPlaceableFromXML(v9)
  if not v10 then
    self:loadFinished(v9)
  end
end
function PlaceableSystem:loadNextPlaceableFromXML(loadingData)
  if g_currentMission.cancelLoading then
    return false
  end
  local v5 = loadingData.xmlFile:getValue("placeables#loadAnyFarmInSingleplayer", false)
  while true do
    loadingData.index = loadingData.index + 1
    v7 = string.format("placeables.placeable(%d)", loadingData.index)
    v8 = v2:hasProperty(v7)
    if not v8 then
      return false
    end
    if loadingData.upgradeOnly then
      v9 = v2:getValue(v7 .. "#sinceVersion")
      if v9 ~= nil and self.version > v9 then
      end
    end
    if not v8 then
      continue
    end
    v9 = self:loadPlaceableFromXML(v2, v7, v3, v4, v5, self.loadNextPlaceableFromXMLFinished, self, loadingData)
    if not v9 then
      continue
    end
    return true
  end
end
function PlaceableSystem:loadNextPlaceableFromXMLFinished(placeable, loadingState, loadingData)
  if g_currentMission.cancelLoading then
    self:loadFinished(loadingData)
    return
  end
  if placeable ~= nil then
    if loadingState == Placeable.LOADING_STATE_ERROR then
      Logging.warning("Corrupt savegame, placeable '%s' could not be loaded", placeable.configFileName)
      v4:removePlaceable(placeable)
      placeable:delete()
    else
      if placeable.currentSavegameId ~= nil then
        self.savegameIdToPlaceable[placeable.currentSavegameId] = placeable
      end
      placeable:register()
    end
  end
  local v4 = self:loadNextPlaceableFromXML(loadingData)
  if not v4 then
    self:loadFinished(loadingData)
  end
end
function PlaceableSystem:loadFinished(loadingData)
  if loadingData.defaultXMLFilename ~= nil then
    v2:delete()
    local v2 = XMLFile.load("placeablesXML", loadingData.defaultXMLFilename, Placeable.xmlSchemaSavegame)
    loadingData.xmlFile = v2
    loadingData.defaultXMLFilename = nil
    loadingData.upgradeOnly = true
    loadingData.index = 0
    local v3 = v3:getValue("placeables#version", 1)
    self.version = v3
    if self.version <= self.version then
      v3 = self:loadFinished(loadingData)
      return v3
    end
    v3 = self:loadNextPlaceableFromXML(loadingData)
    -- if v3 then goto L65 end
    self:loadFinished(loadingData)
    return
  end
  v2:addTask(function()
    self:delete()
    if u0.asyncCallbackFunction ~= nil then
      u0.asyncCallbackFunction(u0.asyncCallbackObject, u0.asyncCallbackArguments)
    end
  end)
end
function PlaceableSystem.loadPlaceableFromXML(v0, v1, v2, v3, v4, v5, v6, v7, v8)
  local v9 = v1:getValue(v2 .. "#filename")
  local v10 = v1:getValue(v2 .. "#defaultFarmProperty", false)
  local v11 = v1:getValue(v2 .. "#farmId")
  if v10 and v3.isCompetitiveMultiplayer then
    local v13 = v13:getFarmById(v11)
    if v13 == nil then
    end
  end
  if v10 and v3.loadDefaultFarm and not v4.isMultiplayer and v11 ~= FarmManager.SINGLEPLAYER_FARM_ID then
  end
  if not v3.isValid and not not v10 and not v13 then
  end
  if GameUtil ~= nil then
  end
  if v14 then
    local v15 = NetworkUtil.convertFromNetworkFilename(v9)
    if v13 and v5 and v11 ~= FarmManager.SINGLEPLAYER_FARM_ID then
    end
    local v16, v17, v18 = v1:getValue(v2 .. "#position")
    local v19, v20, v21 = v1:getValue(v2 .. "#rotation")
    PlaceableUtil.loadPlaceable(v9, {x = v16, y = v17, z = v18}, {x = v19, y = v20, z = v21}, v11, v15, v6, v7, v8)
    return true
  end
  Logging.xmlInfo(v1, "Placeable '%s' is not allowed to be loaded", v9)
end
function PlaceableSystem:consoleCommandDeleteAllPlaceables(includePreplaced)
  -- TODO: structure LOP_FORNPREP (pc 6, target 20)
  local v7 = self.placeables[#self.placeables]:isMapBound()
  if v7 then
    -- if not v1 then goto L19 end
  end
  v6:delete()
  -- TODO: structure LOP_FORNLOOP (pc 19, target 7)
  if includePreplaced then
    return string.format("Deleted all %i placeables! Included preplaced ones!", v2 + 1)
  end
  v3 = string.format("Deleted %i placeables! Excluded preplaced ones.\n%s", v2, "Usage: gsPlaceablesDeleteAll [includePreplaced]")
  return v3
end
function PlaceableSystem:consoleCommandReloadAllPlaceables()
  if self.isReloadRunning then
    return "Cannot start reloading. Another reloading is currently running"
  end
  local v1 = v1:getIsServer()
  if v1 and not g_currentMission.missionDynamicInfo.isMultiplayer then
    v1:clearEntireSharedI3DFileCache(false)
    for v5, v6 in ipairs(self.placeables) do
      table.insert(v1, v6)
    end
    self:setSaveIds()
    if 0 < #v1 then
      self.isReloadRunning = true
      Logging.info("Start reloading placeables...")
      for v6, v7 in ipairs(v1) do
        local v9 = XMLFile.create("placeableXMLFile", "", "placeables", Placeable.xmlSchemaSavegame)
        self:savePlaceableToXML(v7, v9, 0, 1, {})
        self:loadPlaceableFromXML(v9, "placeables.placeable(0)", g_currentMission.missionInfo, g_currentMission.missionDynamicInfo, false, v2, nil, {placeable = v7, xmlFile = v9})
      end
      return
    end
    Logging.info("No placeables found")
  end
end
function PlaceableSystem:consoleCommandLoadAllPlaceables()
  if self.isLoadAllRunning then
    return "Cannot start loading all placeables. Another loading is currently running"
  end
  local v1 = v1:getIsServer()
  if v1 and not g_currentMission.missionDynamicInfo.isMultiplayer then
    v1:clearEntireSharedI3DFileCache(false)
    local v3 = v3:getItems()
    for v5, v6 in ipairs(...) do
      if not (v6.brush ~= nil) then
        continue
      end
      if not (v6.brush["type"] ~= "") then
        continue
      end
      if v6.brush["type"] == "fence" then
        if v6.brush.parameters[1] ~= nil then
          table.insert(v1, v6.brush.parameters[1])
          continue
        end
        Logging.error("No fence singleton filename found for '%s'", v6.xmlFilename)
      else
        table.insert(v1, v6.xmlFilename)
      end
    end
    if 0 < #v1 then
      self.isLoadAllRunning = true
      Logging.info("Start loading all placeables...")
      v2 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, 0, 0, 0)
      PlaceableUtil.loadPlaceable(v1[1], {x = 0, y = v2, z = 0}, {x = 0, y = 0, z = 0}, AccessHandler.EVERYONE, nil, function(self, v1, v2, v3)
        if v2 == Placeable.LOADING_STATE_ERROR then
          Logging.error("Could not load placeable '%s'", u0[1])
        else
          Logging.info("Loaded placeable '%s'", v1.configFileName)
          v1:finalizePlacement()
        end
        if v1 ~= nil then
          v1:delete()
        end
        table.remove(u0, 1)
        if #u0 == 0 then
          Logging.info("Finished loading placeables")
          u1.isLoadAllRunning = false
          return
        end
        PlaceableUtil.loadPlaceable(u0[1], u2, u3, AccessHandler.EVERYONE, nil, u4, nil, {})
      end, nil, {})
      return
    end
    Logging.info("No placeables found")
  end
end
function PlaceableSystem:consoleCommandPlaceableTestAreas()
  self.isTestAreaRenderingActive = not self.isTestAreaRenderingActive
  for v4, v5 in ipairs(self.placeables) do
    if not (v5.spec_placement ~= nil) then
      continue
    end
    for v10, v11 in ipairs(v5.spec_placement.testAreas) do
      if self.isTestAreaRenderingActive then
        v12:createWithStartEnd(v11.startNode, v11.endNode)
        local v15 = getName(v11.startNode)
        v12:createWithNode(v11.startNode, v15, false, nil)
        v15 = getName(v11.endNode)
        v12:createWithNode(v11.endNode, v15, false, nil)
        v12:createWithStartEnd(v11.startNode, v11.endNode)
        v12:addPermanentElement(v11.debugTestBox)
        v12:addPermanentElement(v11.debugStartNode)
        v12:addPermanentElement(v11.debugEndNode)
        v12:addPermanentElement(v11.debugArea)
      else
        v12:removePermanentElement(v11.debugTestBox)
        v12:removePermanentElement(v11.debugStartNode)
        v12:removePermanentElement(v11.debugEndNode)
        v12:removePermanentElement(v11.debugArea)
      end
    end
  end
end
