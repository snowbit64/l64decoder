-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Mission00 = {}
local Mission00_mt = Class(Mission00, FSBaseMission)
v1:addCreateSchemaFunction(function()
  local v1 = XMLSchema.new("mission00")
  Mission00.xmlSchema = v1
end)
v1:addInitSchemaFunction(function()
  Mission00.xmlSchema:register(XMLValueType.INT, "map#width", "Width of the world", 2048)
  Mission00.xmlSchema:register(XMLValueType.INT, "map#height", "Height of the world", 2048)
  Mission00.xmlSchema:register(XMLValueType.STRING, "map#imageFilename", "2D map filename")
  Mission00.xmlSchema:register(XMLValueType.VECTOR_3, "map#mapFieldColor", "2D map field color rgb")
  Mission00.xmlSchema:register(XMLValueType.VECTOR_3, "map#mapGrassFieldColor", "2D map grass color rgb")
  Mission00.xmlSchema:register(XMLValueType.FLOAT, "map.culling#xzOffset", "")
  Mission00.xmlSchema:register(XMLValueType.FLOAT, "map.culling#minY", "")
  Mission00.xmlSchema:register(XMLValueType.FLOAT, "map.culling#maxY", "")
  Mission00.xmlSchema:register(XMLValueType.FLOAT, "map.culling#clipDistanceThreshold1", "")
  Mission00.xmlSchema:register(XMLValueType.FLOAT, "map.culling#clipDistanceThreshold2", "")
  Mission00.xmlSchema:register(XMLValueType.INT, "map.densityMap#revision", "")
  Mission00.xmlSchema:register(XMLValueType.INT, "map.terrainTexture#revision", "")
  Mission00.xmlSchema:register(XMLValueType.INT, "map.terrainLodTexture#revision", "")
  Mission00.xmlSchema:register(XMLValueType.INT, "map.splitShapes#revision", "")
  Mission00.xmlSchema:register(XMLValueType.INT, "map.tipCollision#revision", "")
  Mission00.xmlSchema:register(XMLValueType.INT, "map.placementCollision#revision", "")
  Mission00.xmlSchema:register(XMLValueType.INT, "map.navigationCollision#revision", "")
  Mission00.xmlSchema:register(XMLValueType.FLOAT, "map.vertexBufferMemoryUsage", "")
  Mission00.xmlSchema:register(XMLValueType.FLOAT, "map.indexBufferMemoryUsage", "")
  Mission00.xmlSchema:register(XMLValueType.FLOAT, "map.textureMemoryUsage", "")
  Mission00.xmlSchema:register(XMLValueType.STRING, "map.hotspots.placeableHotspot(?)#type", "Placeable hotspot type")
  Mission00.xmlSchema:register(XMLValueType.VECTOR_2, "map.hotspots.placeableHotspot(?)#worldPosition", "Placeable world position")
  Mission00.xmlSchema:register(XMLValueType.VECTOR_3, "map.hotspots.placeableHotspot(?)#teleportWorldPosition", "Placeable teleport world position")
  Mission00.xmlSchema:register(XMLValueType.STRING, "map.hotspots.placeableHotspot(?)#text", "Placeable hotspot text")
end)
function Mission00.new(v0, v1)
  local v3 = v3:superClass()
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2.objectsToCallOnMissionStarted = {}
  if g_dedicatedServer ~= nil then
    v2:setAutoSaveInterval(g_dedicatedServer.autoSaveInterval, true)
  end
  v2.isSaving = false
  g_mission00StartPoint = nil
  v2.gameStarted = false
  v2.loadFinishedListeners = {}
  v2.mapHotspots = {}
  return v2
end
function Mission00:delete()
  if self.xmlFile ~= nil then
    delete(self.xmlFile)
    self.xmlFile = nil
  end
  v1:unloadMapData()
  for v4, v5 in ipairs(self.mapHotspots) do
    self:removeMapHotspot(v5)
    v5:delete()
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function Mission00:setMissionInfo(missionInfo, missionDynamicInfo)
  local v3 = Utils.getFilename(missionInfo.mapXMLFilename, self.baseDirectory)
  local v4 = XMLFile.load("MapXML", v3, Mission00.xmlSchema)
  local v5 = v4:getHandle()
  self.xmlFile = v5
  v5 = v4:getValue("map#width", 2048)
  self.mapWidth = v5
  v5 = v4:getValue("map#height", 2048)
  self.mapHeight = v5
  local v6 = v4:getValue("map#imageFilename")
  v5 = Utils.getFilename(v6, self.baseDirectory)
  self.mapImageFilename = v5
  v5 = v4:getValue("map#mapFieldColor", nil, true)
  self.mapFieldColor = v5
  v5 = v4:getValue("map#mapGrassFieldColor", nil, true)
  self.mapGrassFieldColor = v5
  v5 = v4:getValue("map.culling#xzOffset", self.cullingWorldXZOffset)
  self.cullingWorldXZOffset = v5
  v5 = v4:getValue("map.culling#minY", self.cullingWorldMinY)
  self.cullingWorldMinY = v5
  v5 = v4:getValue("map.culling#maxY", self.cullingWorldMaxY)
  self.cullingWorldMaxY = v5
  v5 = v4:getValue("map.culling#clipDistanceThreshold1", self.cullingClipDistanceThreshold1)
  self.cullingClipDistanceThreshold1 = v5
  v5 = v4:getValue("map.culling#clipDistanceThreshold2", self.cullingClipDistanceThreshold2)
  self.cullingClipDistanceThreshold2 = v5
  v5 = v4:getValue("map.densityMap#revision", 1)
  self.mapDensityMapRevision = v5
  v5 = v4:getValue("map.terrainTexture#revision", 1)
  self.mapTerrainTextureRevision = v5
  v5 = v4:getValue("map.terrainLodTexture#revision", 1)
  self.mapTerrainLodTextureRevision = v5
  v5 = v4:getValue("map.splitShapes#revision", 1)
  self.mapSplitShapesRevision = v5
  v5 = v4:getValue("map.tipCollision#revision", 1)
  self.mapTipCollisionRevision = v5
  v5 = v4:getValue("map.placementCollision#revision", 1)
  self.mapPlacementCollisionRevision = v5
  v5 = v4:getValue("map.navigationCollision#revision", 1)
  self.mapNavigationCollisionRevision = v5
  v5 = v4:getValue("map.vertexBufferMemoryUsage", self.vertexBufferMemoryUsage)
  self.vertexBufferMemoryUsage = v5
  v5 = v4:getValue("map.indexBufferMemoryUsage", self.indexBufferMemoryUsage)
  self.indexBufferMemoryUsage = v5
  v5 = v4:getValue("map.textureMemoryUsage", self.textureMemoryUsage)
  self.textureMemoryUsage = v5
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
    self:hitLoadingTarget(MPLoadingScreen.LOAD_TARGETS.STORE)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    local self = self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
    if not self then
      self:delete()
      u0.wildlifeSpawner = nil
    end
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v5:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory, function()
      self:onMaterialsLoaded(u1, u2)
    end)
  end)
  v5:addTask(function()
    local missionInfo = missionInfo:superClass()
    missionInfo.setMissionInfo(u0, u1, u2)
  end)
end
function Mission00:onMaterialsLoaded(missionInfo, missionDynamicInfo)
  if self.cancelLoading then
    return
  end
  v3:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v3:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v3:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v3:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
  end)
  v3:addTask(function()
    self:loadMapData(u0.xmlFile, u1, u0.baseDirectory)
    self:hitLoadingTarget(MPLoadingScreen.LOAD_TARGETS.DATA)
  end)
end
function Mission00:load()
  self:startLoadingTask()
  self:loadEnvironment(self.xmlFile)
  local mapFilename = getXMLString(self.xmlFile, "map.filename")
  local v2 = Utils.getFilename(mapFilename, self.baseDirectory)
  self:loadMap(v2, true, self.loadMission00Finished, self)
  local v3 = getXMLString(self.xmlFile, "map.sounds#filename")
  v2 = Utils.getNoNil(v3, "$data/maps/map01_sound.xml")
  v3 = Utils.getFilename(v2, self.baseDirectory)
  self.missionInfo.mapSoundXmlFilename = v3
  self:loadMapSounds(v3, self.baseDirectory)
  v3:loadMapData(self.xmlFile, self.missionInfo, self.baseDirectory)
  v3:loadMapData(self.xmlFile, self.missionInfo, self.baseDirectory)
  v3 = MapPerformanceTestUtil.new()
  self.mapPerformanceTestUtil = v3
  v3:setGameInfoPartVisibility(HUD.GAME_INFO_PART.MONEY + HUD.GAME_INFO_PART.TIME + HUD.GAME_INFO_PART.WEATHER)
  v3:loadMapData(self.xmlFile, self.missionInfo, self.baseDirectory)
  v3:loadMapData(self.xmlFile, self.missionInfo, self.baseDirectory)
  v3:loadMapData(self.xmlFile, self.missionInfo, self.baseDirectory)
end
function Mission00:loadMission00Finished(node, arguments)
  if self.cancelLoading then
    return
  end
  v3:addTask(function()
    local node = node:loadAdditionalFiles(u0.xmlFile, function()
      u0.numAdditionalFiles = u0.numAdditionalFiles - 1
      if u0.numAdditionalFiles == 0 then
        self:loadAdditionalFilesFinished()
      end
    end, nil)
    if 0 < node then
      u0.numAdditionalFiles = node
      return
    end
    arguments:loadAdditionalFilesFinished()
  end)
end
function Mission00:loadAdditionalFilesFinished()
  if self.cancelLoading then
    return
  end
  v1:addTask(function()
    self:loadModMaterialHolders()
    self:hitLoadingTarget(MPLoadingScreen.LOAD_TARGETS.ADDITIONAL_FILES)
  end)
  v1:addTask(function()
    self:loadIngameMap(u0.mapImageFilename, u0.mapWidth, u0.mapHeight, u0.mapFieldColor, u0.mapGrassFieldColor)
    self:loadHotspots(u0.xmlFile, u0.missionInfo.customEnvironment)
  end)
  v1:addTask(function()
    u0.showWeatherForecast = true
  end)
  v1:addTask(function()
    self:loadMapData(u0.xmlFile, u0.missionInfo, u0.baseDirectory)
  end)
  v1:addTask(function()
    self:loadMapData(u0.xmlFile)
  end)
  v1:addTask(function()
    self:loadMapData(u0.xmlFile)
  end)
  v1:addTask(function()
    self:loadMapData(u0.xmlFile)
    if u0.missionDynamicInfo.isMultiplayer then
      self:loadCompetitiveMultiplayer(u0.xmlFile)
    end
  end)
  v1:addTask(function()
    self:loadPlaceables(u0.missionInfo.placeablesXMLLoad, u0.missionInfo.defaultPlaceablesXMLFilename)
  end)
  v1:addTask(function()
    self:loadMapData(u0.xmlFile)
  end)
  v1:addTask(function()
    self:loadMapData(u0.xmlFile, u0.missionInfo)
  end)
  v1:addTask(function()
    self:loadMapData(u0.xmlFile, u0.missionInfo, u0.baseDirectory)
  end)
  v1:addTask(function()
    local self = self:getIsServer()
    if self and u0.missionInfo.savegameDirectory ~= nil then
      self = fileExists(u0.missionInfo.savegameDirectory .. "/collectibles.xml")
      if self then
        self:loadFromXMLFile(u0.missionInfo.savegameDirectory .. "/collectibles.xml")
      end
    end
  end)
  v1:addTask(function()
    if g_mission00StartPoint ~= nil then
      local self, v1, v2 = getTranslation(g_mission00StartPoint)
      local v3, v4, v5 = localDirectionToWorld(g_mission00StartPoint, 0, 0, -1)
      u0.playerStartX = self
      u0.playerStartY = v1
      u0.playerStartZ = v2
      u0.playerRotX = 0
      local v7 = MathUtil.getYRotationFromDirection(v3, v5)
      u0.playerRotY = v7
      u0.playerStartIsAbsolute = true
    end
  end)
  v1:addTask(function()
    self:loadFinished()
  end)
  v1:addTask(function()
    if not u0.missionDynamicInfo.isMultiplayer then
      self:updateFoundHelpIcons()
      return
    end
    self:removeAllHelpIcons()
  end)
  v1:addTask(function()
    if u0.xmlFile ~= nil then
      delete(u0.xmlFile)
      u0.xmlFile = nil
    end
  end)
  v1:addTask(function()
    local v1 = v1:superClass()
    v1.load(u0)
    if u0.missionInfo.economyXMLLoad ~= nil then
      self:loadEconomy(u0.missionInfo.economyXMLLoad)
    end
  end)
  local v1 = self:getIsServer()
  if v1 then
    v1:addTask(function()
      self:loadFromXMLFile(u0.missionInfo.farmsXMLLoad)
    end)
    v1:addTask(function()
      self:loadFromXMLFile(u0.missionInfo.farmlandXMLLoad)
    end)
    v1:addTask(function()
      self:loadFromXMLFile(u0.missionInfo.npcXMLLoad)
    end)
    v1:addTask(function()
      self:loadFromXMLFile(u0.missionInfo.vehicleSaleXML)
    end)
    v1:addTask(function()
      if u0.missionInfo.playersXMLLoad ~= nil then
        self:loadFromXMLFile(u0.missionInfo.playersXMLLoad)
      end
    end)
    v1:addTask(function()
      if u0.missionInfo.fieldsXMLLoad ~= nil then
        self:loadFromXMLFile(u0.missionInfo.fieldsXMLLoad)
      end
    end)
    v1:addTask(function()
      self:loadFromXMLFile(u0.missionInfo.environmentXMLLoad)
      if u0.missionInfo.environmentXMLLoad ~= nil then
        self:loadFromXMLFile(u0.missionInfo.environmentXMLLoad)
      end
    end)
    v1:addTask(function()
      if u0.missionInfo.aiSystemXMLLoad ~= nil then
        self:loadFromXMLFile(u0.missionInfo.aiSystemXMLLoad)
      end
    end)
  end
  v1:addTask(function()
    self:loadFromXMLFile(u0.missionInfo.treePlantXMLLoad)
  end)
  v1:addTask(function()
    self:finishLoadingTask()
  end)
end
function Mission00:loadEnvironment(xmlFile)
  local v3 = getXMLString(xmlFile, "map.environment#filename")
  local v2 = Utils.getFilename(v3, self.baseDirectory)
  v3 = Environment.new(self)
  self.environment = v3
  v3:load(v2)
  if self.missionInfo.environmentXMLLoad ~= nil then
    v3 = self:getIsServer()
    if v3 then
      v3 = loadXMLFile("environmentXML", self.missionInfo.environmentXMLLoad)
      v4:loadFromXMLFile(v3, "environment")
      delete(v3)
    end
  end
  v3:setEnvironment(self.environment)
  v3:setEnvironment(self.environment)
end
function Mission00:loadAdditionalFiles(xmlFile, callbackFunc, callbackTarget)
  while true do
    v6 = string.format("map.additionalFiles.additionalFile(%d)", v4)
    v7 = hasXMLProperty(xmlFile, v6)
    if not v7 then
      break
    end
    v7 = getXMLString(xmlFile, v6 .. "#filename")
    if v7 ~= nil then
      v8 = v7:contains(".i3d")
      if v8 then
        v8:addSubtask(function()
          local self = Utils.getFilename(u0, u1.baseDirectory)
          u0 = self
          self:loadI3DFileAsync(u0, true, true, u1.onLoadedMapI3DFiles, u1, {u2, u3})
        end)
      else
        v8 = v7:contains(".xml")
        if v8 then
          v8 = Utils.getFilename(v7, self.baseDirectory)
          v8 = XMLFile.load("additionalFilesXML", v8)
          if v8 ~= nil then
            v8:iterate("additionalFiles.additionalFile", function(self, xmlFile)
              local callbackFunc = callbackFunc:getString(xmlFile .. "#filename")
              if callbackFunc ~= nil then
                local callbackTarget = Utils.getFilename(callbackFunc, u1.baseDirectory)
                callbackTarget:loadI3DFileAsync(callbackTarget, true, true, u1.onLoadedMapI3DFiles, u1, {u2, u3})
                u4 = u4 + 1
              end
            end)
            v8:delete()
          end
        end
      end
    end
  end
  return v5
end
function Mission00:onLoadedMapI3DFiles(node, failedReason, args)
  if node ~= 0 then
    unlink(node)
    table.insert(self.dynamicallyLoadedObjects, node)
  end
  args[1](args[2])
end
function Mission00:loadHotspots(xmlFile, customEnvironment)
  local v3 = XMLFile.wrap(xmlFile, Mission00.xmlSchema)
  while true do
    v4 = string.format("map.hotspots.placeableHotspot(%d)", v3)
    v5 = xmlFile:hasProperty(v4)
    if not v5 then
      break
    end
    v5 = PlaceableHotspot.new()
    v6 = xmlFile:getValue(v4 .. "#text", nil)
    if v6 == nil then
      Logging.xmlWarning(xmlFile, "Missing placeable hotspot name for '%s'", v4)
      break
    end
    v9 = v9:convertText(v6, customEnvironment)
    v5:setName(...)
    v5:createIcon()
    v7 = xmlFile:getValue(v4 .. "#type", "UNLOADING")
    v8 = PlaceableHotspot.getTypeByName(v7)
    if v8 == nil then
      v13 = table.concatKeys(PlaceableHotspot.TYPE, " ")
      Logging.xmlWarning(...)
    end
    v5:setPlaceableType(v8)
    v9, v10 = xmlFile:getValue(v4 .. "#worldPosition", nil)
    if v9 ~= nil then
      v5:setWorldPosition(v9, v10)
    end
    v11, v12, v13 = xmlFile:getValue(v4 .. "#teleportWorldPosition", nil)
    if v11 ~= nil then
      v16 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v11, 0, v13)
      v14 = math.max(...)
      v5:setTeleportWorldPosition(v11, v14, v13)
    end
    self:addMapHotspot(v5)
    table.insert(self.mapHotspots, v5)
  end
  xmlFile:delete()
end
function Mission00:registerObjectToCallOnMissionStart(object)
  table.addElement(self.objectsToCallOnMissionStarted, object)
end
function Mission00:unregisterObjectToCallOnMissionStart(object)
  table.removeElement(self.objectsToCallOnMissionStarted, object)
end
function Mission00:onStartMission()
  local v2 = v2:superClass()
  v2.onStartMission(self)
  v1:setGameState(GameState.PLAY)
  v1:loadMapData()
  v1:restartGreatDemands()
  for v4, v5 in pairs(self.objectsToCallOnMissionStarted) do
    v5:onMissionStarted()
  end
  self.objectsToCallOnMissionStarted = {}
  self.gameStarted = true
end
function Mission00:getIsTourSupported()
  if self.missionInfo.difficulty ~= 1 then
  end
  return v1
end
function Mission00:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = self:getIsServer()
  if v2 then
    v2:update(dt)
    v2 = v2:getIsSaving()
    self.isSaving = v2
    if not GS_IS_CONSOLE_VERSION then
      -- if not GS_IS_MOBILE_VERSION then goto L39 end
    end
    if not self.isSaving then
      self:tryUnpauseGame()
    end
  end
end
function Mission00:doPauseGame()
  local v2 = v2:superClass()
  v2.doPauseGame(self)
  self:showPauseDisplay(true)
end
function Mission00:doUnpauseGame()
  local v2 = v2:superClass()
  v2.doUnpauseGame(self)
  self:showPauseDisplay(false)
end
function Mission00:canUnpauseGame()
  local v2 = v2:superClass()
  local v1 = v2.canUnpauseGame(self)
  if v1 then
  end
  return v1
end
function Mission00:draw()
  local v2 = v2:superClass()
  v2.draw(self)
  if self.missionDynamicInfo.isMultiplayer and self.gameStarted then
    v1:drawCommunicationDisplay()
  end
end
function Mission00:loadVehicles(xmlFilename, resetVehicles)
  if xmlFilename ~= nil then
    local v3 = self:getIsServer()
    -- if not v3 then goto L28 end
    VehicleLoadingUtil.loadVehiclesFromSavegame(xmlFilename, resetVehicles, self.missionInfo, self.missionDynamicInfo, self.loadVehiclesFinish, self, {xmlFilename, resetVehicles})
    return
  end
  self:loadVehiclesFinished()
end
function Mission00:loadVehiclesFinish(arguments, vehiclesById)
  self.savegameIdToVehicle = vehiclesById
  if self.cancelLoading then
    self:finishLoadingTask()
    return
  end
  v3:hitLoadingTarget(MPLoadingScreen.LOAD_TARGETS.VEHICLES)
  self:loadVehiclesFinished()
end
function Mission00.loadVehiclesFinished(v0)
  v1:addSubtask(function()
    v0:publish(MessageType.LOADED_ALL_SAVEGAME_VEHICLES)
    v0:loadItems(u0.missionInfo.itemsXMLLoad)
  end)
end
function Mission00:loadPlaceables(xmlFilename, defaultXMLFilename)
  if xmlFilename ~= nil then
    local v3 = self:getIsServer()
    -- if not v3 then goto L28 end
    self:startLoadingTask()
    v3:load(xmlFilename, defaultXMLFilename, self.missionInfo, self.missionDynamicInfo, self.loadPlaceablesFinished, self, nil)
    return
  end
  self:loadPlaceablesFinished()
end
function Mission00.loadPlaceablesFinished(v0)
  v1:addSubtask(function()
    v0:publish(MessageType.LOADED_ALL_SAVEGAME_PLACEABLES)
    v0:loadVehicles(u0.missionInfo.vehiclesXMLLoad, u0.missionInfo.resetVehicles)
  end)
end
function Mission00:loadItems(xmlFilename, resetItems)
  if xmlFilename ~= nil then
    v3:loadItems(xmlFilename, resetItems, self.missionInfo, self.missionDynamicInfo, self.loadItemsFinished, self, nil)
    return
  end
  self:loadItemsFinished()
end
function Mission00:loadItemsFinished()
  v1:hitLoadingTarget(MPLoadingScreen.LOAD_TARGETS.ITEMS)
  local v1 = self:getIsServer()
  if v1 then
    v1:addTask(function()
      self:loadFromXMLFile(u0.missionInfo.missionsXMLLoad)
    end)
    v1:addTask(function()
      self:mergeObjectsForSingleplayer()
    end)
    v1:addSubtask(function()
      if u0.missionInfo.onCreateObjectsXMLLoad ~= nil then
        self:load(u0.missionInfo.onCreateObjectsXMLLoad)
      end
    end)
    v1:addSubtask(function()
      for v3, v4 in ipairs(u0.loadFinishedListeners) do
        v5:addSubtask(function()
          self:onLoadFinished()
        end)
      end
    end)
    v1:addSubtask(function()
      self:finishLoadingTask()
    end)
  end
end
function Mission00.onCreateStartPoint(v0, v1)
  g_mission00StartPoint = v1
end
function Mission00:addChatMessage(sender, msg, farmId, userId)
  if userId ~= nil then
    local v6 = v6:getUserByUserId(userId, false)
    if v6 ~= nil then
      local v7 = v6:getNickname()
      v7 = v6:getAllowTextCommunication()
    end
  end
  if v5 then
    v6:addChatMessage(msg, sender, farmId)
  end
end
function Mission00:scrollChatMessages(delta)
  v2:scrollChatMessages(delta)
end
function Mission00:loadEconomy(xmlFilename)
  local v2 = self:getIsServer()
  if v2 then
    v2 = loadXMLFile("economyXML", xmlFilename)
    v3:loadFromXMLFile(v2, "economy")
    delete(v2)
  end
end
function Mission00:addLoadFinishedListener(listener)
  table.addElement(self.loadFinishedListeners, listener)
end
function Mission00:removeLoadFinishedListener(listener)
  table.removeElement(self.loadFinishedListeners, listener)
end
function Mission00:loadCompetitiveMultiplayer(xmlFile)
  local v2 = getXMLString(xmlFile, "map.competitiveMultiplayer#filename")
  if v2 ~= nil then
    local v3 = self:getIsServer()
    -- if v3 then goto L12 end
  end
  return
  v3 = Utils.getFilename(v2, self.baseDirectory)
  if not self.missionInfo.isValid then
    v3 = loadXMLFile("CompetitiveXML", v3)
    while true do
      v5 = string.format("competitiveMultiplayer.farms.farm(%d)", v4)
      v6 = hasXMLProperty(v3, v5)
      if not v6 then
        break
      end
      v6 = getXMLInt(v3, v5 .. "#farmId")
      v7 = getXMLString(v3, v5 .. "#name")
      v8 = getXMLInt(v3, v5 .. "#color")
      v9 = v9:createFarm(v7, v8, nil, v6)
      if v9 ~= nil then
        v10 = getXMLFloat(v3, v5 .. "#money")
        if v10 ~= nil then
          v9.money = v10
        end
        v11 = getXMLFloat(v3, v5 .. "#loan")
        if v11 ~= nil then
          v9.loan = v11
        end
      end
    end
    delete(v3)
  end
  self.missionInfo.isCompetitiveMultiplayer = true
end
