-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FSBaseMission = {USER_STATE_LOADING = 1, USER_STATE_SYNCHRONIZING = 2, USER_STATE_CONNECTED = 3, USER_STATE_INGAME = 4, CONNECTION_LOST_DEFAULT = 0, CONNECTION_LOST_KICKED = 1, CONNECTION_LOST_BANNED = 2, LIMITED_OBJECT_TYPE_BALE = 1, INGAME_NOTIFICATION_OK = {0.0976, 0.624, 0, 1}, INGAME_NOTIFICATION_INFO = {1, 1, 1, 1}, INGAME_NOTIFICATION_GREATDEMAND = {1, 1, 1, 1}, INGAME_NOTIFICATION_CRITICAL = {0.9301, 0.2874, 0.013, 1}, RECORDING_DEVICE_CHECK_INTERVAL = 2500}
local l_engineStateTimer = math.random(900000, 1200000)
if getEngineState ~= nil then
  local v2 = getEngineState()
  getEngineState = nil
end
source("dataS/scripts/events/SavegameSettingsEvent.lua")
source("dataS/scripts/events/BaseMissionFinishedLoadingEvent.lua")
source("dataS/scripts/events/BaseMissionReadyEvent.lua")
source("dataS/scripts/events/SetSplitShapesEvent.lua")
source("dataS/scripts/events/UpdateSplitShapesEvent.lua")
source("dataS/scripts/events/ConnectionRequestEvent.lua")
source("dataS/scripts/events/ConnectionRequestAnswerEvent.lua")
source("dataS/scripts/events/ChangeLoanEvent.lua")
source("dataS/scripts/events/GamePauseEvent.lua")
source("dataS/scripts/events/GamePauseRequestEvent.lua")
source("dataS/scripts/events/PlayerPermissionsEvent.lua")
source("dataS/scripts/events/FinanceStatsEvent.lua")
local FSBaseMission_mt = Class(FSBaseMission, BaseMission)
function FSBaseMission.new(v0, v1)
  local v3 = v3:superClass()
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v3:setClient(g_client)
  v3:setServer(g_server)
  v3:setClient(g_client)
  v3:setServer(g_server)
  v2.trainSystems = {}
  v2.objectsToCallOnMapFinished = {}
  v2:registerToLoadOnMapFinished(g_inGameMenu)
  v2:registerToLoadOnMapFinished(g_shopMenu)
  v2.mapDensityMapRevision = 1
  v2.mapTerrainTextureRevision = 1
  v2.mapTerrainLodTextureRevision = 1
  v2.mapSplitShapesRevision = 1
  v2.mapTipCollisionRevision = 1
  v2.mapPlacementCollisionRevision = 1
  v2.mapNavigationCollisionRevision = 1
  v2.densityMapSyncer = nil
  v3 = FieldGroundSystem.new()
  v2.fieldGroundSystem = v3
  v3 = StoneSystem.new()
  v2.stoneSystem = v3
  v3 = WeedSystem.new()
  v2.weedSystem = v3
  v2.sendMoneyUserIndex = 1
  v2.playerStartIsAbsolute = false
  v2.playersToAccept = {}
  v2.playersLoading = {}
  v2.doSaveGameState = SavegameController.SAVE_STATE_NONE
  v2.currentDeviceHasNoSpace = false
  v2.dediEmptyPaused = false
  v2.userSigninPaused = false
  v2.isSynchronizingWithPlayers = false
  v2.playersSynchronizing = {}
  local v4 = v2:getIsServer()
  v3 = UserManager.new(...)
  v2.userManager = v3
  v4 = v2:getIsServer()
  v3 = PlayerInfoStorage.new(v4, v2.userManager)
  v2.playerInfoStorage = v3
  v4 = v2:getIsServer()
  v3 = AISystem.new(v4, v2)
  v2.aiSystem = v3
  v4 = v2:getIsServer()
  v3 = AIJobTypeManager.new(...)
  v2.aiJobTypeManager = v3
  v3 = AIMessageManager.new()
  v2.aiMessageManager = v3
  v4 = v2:getIsServer()
  v3 = AnimalSystem.new(v4, v2)
  v2.animalSystem = v3
  v3 = AnimalFoodSystem.new(v2)
  v2.animalFoodSystem = v3
  v3 = AnimalNameSystem.new(v2)
  v2.animalNameSystem = v3
  v4 = v2:getIsServer()
  v3 = HusbandrySystem.new(v4, v2)
  v2.husbandrySystem = v3
  v3 = WildlifeSpawner.new()
  v2.wildlifeSpawner = v3
  v4 = v2:getIsServer()
  v3 = VineSystem.new(v4, v2)
  v2.vineSystem = v3
  v3 = VehicleSaleSystem.new(v2)
  v2.vehicleSaleSystem = v3
  v4 = v2:getIsServer()
  v3 = CollectiblesSystem.new(...)
  v2.collectiblesSystem = v3
  v3 = GuidedTour.new(v2)
  v2.guidedTour = v3
  local v5 = v2:getIsServer()
  v3 = IndoorMask.new(...)
  v2.indoorMask = v3
  v5 = v2:getIsServer()
  v3 = SnowSystem.new(...)
  v2.snowSystem = v3
  v5 = v2:getIsServer()
  v3 = GrowthSystem.new(...)
  v2.growthSystem = v3
  v3 = FoliageSystem.new()
  v2.foliageSystem = v3
  v5 = v2:getIsServer()
  v3 = SlotSystem.new(...)
  v2.slotSystem = v3
  v3 = EconomyManager.new()
  v2.economyManager = v3
  v2.playerUserId = -1
  v3 = v3:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
  v2.playerNickname = v3
  v2.blockedIps = {}
  v2.clientUserId = nil
  v2.terrainSize = 1
  v2.terrainDetailMapSize = 1
  v2.fruitMapSize = 1
  v2.dynamicFoliageLayers = {}
  v2.terrainDetailId = 0
  v2.mapsSplitShapeFileIds = {}
  v2.isMasterUser = false
  v2.connectionWasClosed = false
  v2.connectionWasAccepted = false
  v2.checkRecordingDeviceTimer = 0
  v2.lastRecordingDeviceState = not Platform.isStadia
  v2.lastConstructionScreenOpenTime = -1
  v2.cameraPaths = {}
  v2.cameraPathIsPlaying = false
  v2.cullingWorldXZOffset = 0
  v2.cullingWorldMinY = -100
  v2.cullingWorldMaxY = 500
  v2.cullingClipDistanceThreshold1 = 150
  v2.cullingClipDistanceThreshold2 = 400
  v2.densityMapPercentageFraction = 0.7
  v2.splitShapesPercentageFraction = 0.2
  v2.restPercentageFraction = 1 - v2.densityMapPercentageFraction - v2.splitShapesPercentageFraction
  v2.doghouses = {}
  v2.tireTrackSystem = nil
  v2.placeables = {}
  v2.placeablesToDelete = {}
  v2.placeablesDeleteTestTime = 0
  v2.liquidManureLoadingStations = {}
  v2.manureLoadingStations = {}
  v2.limitedObjects = {[FSBaseMission.LIMITED_OBJECT_TYPE_BALE] = {objects = {}, maxNumObjects = 200}}
  v2.vehicleChangeListeners = {}
  v2.masterUsers = {}
  v2.connectedToDedicatedServer = false
  if g_dedicatedServer ~= nil then
    v2.gameStatsInterval = g_dedicatedServer.gameStatsInterval
  else
    v2.gameStatsInterval = 60000
  end
  v2.gameStatsTime = 0
  v2.wasNetworkError = false
  v3 = AmbientSoundSystem.new(v2, g_soundPlayer)
  v2.ambientSoundSystem = v3
  v3 = EnvironmentAreaSystem.new(v2)
  v2.environmentAreaSystem = v3
  v3 = ReverbSystem.new(v2)
  v2.reverbSystem = v3
  v2.eventRadioToggle = ""
  v2.radioEvents = {}
  v2.moneyChanges = {}
  v3 = IntroductionHelpSystem.new()
  v2.introductionHelpSystem = v3
  v3 = v2:getIsServer()
  if v3 then
    v3 = StartParams.getIsSet("debugCameraClone")
    if v3 then
      v3 = DebugCameraClone.new(true, true)
      v2.debugCameraClone = v3
      v3:register(false)
    end
  end
  return v2
end
function FSBaseMission:initialize()
  local v2 = v2:superClass()
  v2.initialize(self)
  v1:initialize()
  MoneyType.reset()
  self.foliageBendingSystem = nil
  if Platform.supportsFoliageBending then
    local v1 = FoliageBendingSystem.new()
    self.foliageBendingSystem = v1
  end
  v1 = AccessHandler.new()
  self.accessHandler = v1
  v1 = StorageSystem.new(self.accessHandler)
  self.storageSystem = v1
  self:subscribeMessages()
  local v3 = v3:getIngameMap()
  v1:setInGameMap(...)
  v1:setHUD(self.hud)
  v2 = self:getIsServer()
  v1 = ProductionChainManager.new(...)
  self.productionChainManager = v1
end
function FSBaseMission:delete()
  self.isExitingGame = true
  v1:reset()
  self:pauseRadio()
  if self.missionDynamicInfo ~= nil and self.missionDynamicInfo.isMultiplayer then
    voiceChatCleanup()
  end
  if self.receivingDensityMapEvent ~= nil then
    v1:delete()
    self.receivingDensityMapEvent = nil
  end
  if self.receivingSplitShapesEvent ~= nil then
    v1:delete()
    self.receivingSplitShapesEvent = nil
  end
  if self.densityMapSyncer ~= nil then
    v1:delete()
  end
  destroyLowResCollisionHandler()
  if self.accessHandler ~= nil then
    v1:delete()
  end
  if self.storageSystem ~= nil then
    v1:delete()
  end
  if self.playerInfoStorage ~= nil then
    v1:delete()
  end
  if self.debugCameraClone ~= nil then
    v1:delete()
  end
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  if self.wildlifeSpawner ~= nil then
    v1:delete()
  end
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  local v2 = v2:superClass()
  v2.delete(self)
  if AIFieldWorker ~= nil then
    AIFieldWorker.deleteCollisionBox()
  end
  v1:reset()
  for v4 in pairs(self.placeablesToDelete) do
    v4:delete()
  end
  self.placeablesToDelete = {}
  FSDensityMapUtil.clearCache()
  DensityMapHeightUtil.clearCache()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  v1:unloadMapData()
  if self.productionChainManager ~= nil then
    v1:unloadMapData()
  end
  if self.tireTrackSystem ~= nil then
    v1:delete()
  end
  if self.foliageBendingSystem ~= nil then
    v1:delete()
  end
  if self.economyManager ~= nil then
    v1:delete()
    self.economyManager = nil
  end
  if g_soundPlayer ~= nil then
    v1:removeEventListener(self)
    if not GS_IS_CONSOLE_VERSION and not GS_IS_MOBILE_VERSION then
      v1:setStreamingAccessOwner(nil)
    end
  end
  removeConsoleCommand("gsExportVehicleSets")
  removeConsoleCommand("gsMoneyAdd")
  removeConsoleCommand("gsStoreItemsExport")
  removeConsoleCommand("gsGreatDemandStart")
  removeConsoleCommand("gsFillUnitAdd")
  removeConsoleCommand("gsLivestockTrailerAdd")
  removeConsoleCommand("gsVehicleFuelSet")
  removeConsoleCommand("gsVehicleOperatingTimeSet")
  removeConsoleCommand("gsPalletAdd")
  removeConsoleCommand("gsTipCollisionsShow")
  removeConsoleCommand("gsPlacementCollisionsShow")
  removeConsoleCommand("gsTipCollisionsUpdate")
  removeConsoleCommand("gsVehicleShowDistance")
  removeConsoleCommand("gsVehicleReload")
  removeConsoleCommand("gsTeleport")
  removeConsoleCommand("gsSaveDediXMLStatsFile")
  removeConsoleCommand("gsSaveGame")
  removeConsoleCommand("gsVehicleLoadAll")
  removeConsoleCommand("gsTreeAdd")
  removeConsoleCommand("gsVehicleAddWear")
  removeConsoleCommand("gsVehicleAddDamage")
  removeConsoleCommand("gsVehicleAddDirt")
  removeConsoleCommand("gsVehicleTemperatureSet")
  removeConsoleCommand("gsActivateCameraPath")
  for v4, v5 in pairs(self.cameraPaths) do
    v5:delete()
  end
  if self.missionSuccessSound ~= nil then
    delete(self.missionSuccessSound)
  end
  v1:setClient(nil)
  v1:setServer(nil)
  v1:setInGameMap(nil)
  v1:setHUD(nil)
  v1:setPlayerFarm(nil)
  v1:setPlayerFarm(nil)
  v1:delete()
end
function FSBaseMission:load()
  self:startLoadingTask()
  if g_addCheatCommands then
    addConsoleCommand("gsVehicleShowDistance", "Shows the distance between vehicle and cam", "consoleCommandShowVehicleDistance", self)
  end
  local v1 = self:getIsServer()
  if v1 then
    if not self.missionDynamicInfo.isMultiplayer then
      addConsoleCommand("gsVehicleReload", "Reloads currently entered vehicle or vehicles within a range when second radius parameter is given", "consoleCommandReloadVehicle", self)
    end
    if g_addCheatCommands then
      addConsoleCommand("gsTipCollisionsShow", "Shows the collisions for tipping on the ground", "consoleCommandShowTipCollisions", self)
      addConsoleCommand("gsPlacementCollisionsShow", "Shows the collisions for placement and terraforming", "consoleCommandShowPlacementCollisions", self)
      addConsoleCommand("gsPalletAdd", "Adds a pallet", "consoleCommandAddPallet", self)
      addConsoleCommand("gsVehicleFuelSet", "Sets the vehicle fuel level", "consoleCommandSetFuel", self)
      addConsoleCommand("gsVehicleTemperatureSet", "Sets the vehicle motor temperature", "consoleCommandSetMotorTemperature", self)
      addConsoleCommand("gsFillUnitAdd", "Changes a fillUnit with given filllevel and filltype", "consoleCommandFillUnitAdd", self)
      addConsoleCommand("gsVehicleOperatingTimeSet", "Sets the vehicle operating time", "consoleCommandSetOperatingTime", self)
      addConsoleCommand("gsVehicleAddDirt", "Adds a given amount to current dirt amount", "consoleCommandAddDirtAmount", self)
      addConsoleCommand("gsVehicleAddWear", "Adds a given amount to current wear amount", "consoleCommandAddWearAmount", self)
      addConsoleCommand("gsVehicleAddDamage", "Adds a given amount to current damage amount", "consoleCommandAddDamageAmount", self)
      addConsoleCommand("gsVehicleLoadAll", "Load all vehicles", "consoleCommandLoadAllVehicles", self)
      addConsoleCommand("gsTreeAdd", "Load a tree", "consoleCommandLoadTree", self)
      addConsoleCommand("gsTeleport", "Teleports to given field or x/z-position", "consoleCommandTeleport", self)
    end
    if g_addTestCommands then
      addConsoleCommand("gsExportVehicleSets", "Exports vehicle sets", "consoleCommandExportVehicleSets", self)
      addConsoleCommand("gsStoreItemsExport", "Exports storeItem data", "consoleCommandExportStoreItems", self)
      addConsoleCommand("gsGreatDemandStart", "Starts a great demand", "consoleStartGreatDemand", self)
      addConsoleCommand("gsTipCollisionsUpdate", "Updates the collisions for tipping on the ground around the current camera", "consoleCommandUpdateTipCollisions", self)
      addConsoleCommand("gsSaveDediXMLStatsFile", "Saves dedi XML stats file", "consoleCommandSaveDediXMLStatsFile", self)
      addConsoleCommand("gsSaveGame", "Saves the current savegame", "consoleCommandSaveGame", self)
    end
  end
  if g_isDevelopmentVersion then
    addConsoleCommand("gsActivateCameraPath", "Activate camera path", "consoleActivateCameraPath", self)
  end
  v1:init(self)
  local v2 = v2:superClass()
  v2.load(self)
  v1:setTerrainSize(self.terrainSize)
  v1 = createSample("missionSuccessSound")
  self.missionSuccessSound = v1
  loadSample(self.missionSuccessSound, "data/sounds/ui/uiSuccess.wav", false)
  local v3 = unpack(Platform.gameplay.harvestScaleRation)
  self:setHarvestScaleRatio(...)
  self:finishLoadingTask()
end
function FSBaseMission:setHarvestScaleRatio(sprayRatio, plowRatio, limeRatio, weedRatio, stubbleRatio, rollerRatio)
  self.harvestSprayScaleRatio = sprayRatio
  self.harvestPlowScaleRatio = plowRatio
  self.harvestLimeScaleRatio = limeRatio
  self.harvestWeedScaleRatio = weedRatio
  self.harvestStubbleScaleRatio = stubbleRatio
  self.harvestRollerRatio = rollerRatio
end
function FSBaseMission:getHarvestScaleMultiplier(fruitTypeIndex, sprayFactor, plowFactor, limeFactor, weedFactor, stubbleFactor, rollerFactor, beeYieldBonusPercentage)
  return 1 + self.harvestSprayScaleRatio * sprayFactor + self.harvestPlowScaleRatio * plowFactor + self.harvestLimeScaleRatio * limeFactor + self.harvestWeedScaleRatio * weedFactor + self.harvestStubbleScaleRatio * stubbleFactor + self.harvestRollerRatio * rollerFactor + (beeYieldBonusPercentage or 0)
end
function FSBaseMission:onStartMission()
  local v2 = v2:superClass()
  v2.onStartMission(self)
  v1:setAllowedTimePerFrame(nil)
  if g_client ~= nil then
    local v1 = self:getIsServer()
    if v1 then
      v2 = v2:getUserByConnection(g_server.clientConnections[NetworkNode.LOCAL_STREAM_ID])
      local v5 = v2:getId()
      local v3 = v3:getFarmByUserId(...)
      if v3 ~= nil then
      end
      local v10 = v2:getId()
      self:createPlayer(...)
      v2:setState(FSBaseMission.USER_STATE_INGAME)
    else
      v1 = v1:getServerConnection()
      v3 = ClientStartMissionEvent.new()
      v1:sendEvent(...)
    end
    if g_dedicatedServer == nil then
      v1 = v1:getSpawnPoint(self.player.farmId)
      v2 = self:getIsServer()
      if v2 and not self.missionInfo.isValid then
      end
      if v1 ~= nil then
        local v2, v3, v4 = getWorldTranslation(v1)
        local v5, v6, v7 = localDirectionToWorld(v1, 0, 0, -1)
        local v8 = MathUtil.getYRotationFromDirection(v5, v7)
        local v12 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v2, 0, v4)
        local v9 = math.max(v3, v12 + 0.2)
        v9:moveTo(v2, v9, v4, true, false)
        v9:setRotation(0, v8)
      else
        v2:moveTo(self.playerStartX, self.playerStartY, self.playerStartZ, self.playerStartIsAbsolute, false)
        v2:setRotation(self.playerRotX, self.playerRotY)
      end
      if AutoLoadParams.enable == true then
        v5 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, AutoLoadParams.x, 0, AutoLoadParams.z)
        v5:moveTo(AutoLoadParams.x, v5 + 0.2, AutoLoadParams.z, true, false)
      end
      v2:onEnter(true)
      v2:setIsControllingPlayer(true)
      if Platform.hasAdjustableFrameLimit then
        v4 = v4:getValue(SettingsModel.SETTING.FRAME_LIMIT)
        setFramerateLimiter(...)
      end
    end
    v1 = v1:getValue("radioVehicleOnly")
    if not v1 then
      self:playRadio()
    end
    v3 = v3:getValue(GameSettings.SETTING.VOLUME_RADIO)
    self:setRadioVolume(...)
    v3 = v3:getValue(GameSettings.SETTING.VOLUME_VEHICLE)
    self:setVehicleVolume(...)
    v3 = v3:getValue(GameSettings.SETTING.VOLUME_ENVIRONMENT)
    self:setEnvironmentVolume(...)
    v3 = v3:getValue(GameSettings.SETTING.VOLUME_GUI)
    self:setGUIVolume(...)
  end
  if self.missionInfo ~= nil then
    Logging.info("Savegame Setting 'dirtInterval': %d", self.missionInfo.dirtInterval)
    Logging.info("Savegame Setting 'snowEnabled': %s", self.missionInfo.isSnowEnabled)
    Logging.info("Savegame Setting 'growthMode': %d", self.missionInfo.growthMode)
    Logging.info("Savegame Setting 'fuelUsage': %d", self.missionInfo.fuelUsage)
    Logging.info("Savegame Setting 'plowingRequiredEnabled': %s", self.missionInfo.plowingRequiredEnabled)
    Logging.info("Savegame Setting 'weedsEnabled': %s", self.missionInfo.weedsEnabled)
    Logging.info("Savegame Setting 'limeRequired': %s", self.missionInfo.limeRequired)
    Logging.info("Savegame Setting 'stonesEnabled': %s", self.missionInfo.stonesEnabled)
    Logging.info("Savegame Setting 'economicDifficulty': %s", self.missionInfo.economicDifficulty)
    Logging.info("Savegame Setting 'fixedSeasonalVisuals': %s", self.missionInfo.fixedSeasonalVisuals)
    Logging.info("Savegame Setting 'plannedDaysPerPeriod': %s", self.missionInfo.plannedDaysPerPeriod)
    v1 = self:getIsServer()
    if v1 and self.missionInfo.saveDate ~= nil then
      v2 = getDate("%Y-%m-%d")
      v3, v4, v5 = self.missionInfo.saveDate:match("(%d%d%d%d)-(%d%d)-(%d%d)")
      v6, v7, v8 = v2:match("(%d%d%d%d)-(%d%d)-(%d%d)")
      v9 = tonumber(v3)
      v9 = tonumber(v4)
      v9 = tonumber(v6)
      v9 = tonumber(v7)
      if v9 ~= nil and v9 ~= nil and v9 ~= nil and v9 ~= nil then
        if v9 >= v9 then
          -- if v9 > v9 then goto L439 end
        end
        if v7 < v4 then
        end
        v10:tryUnlock("LoadedOldSavegame", v7 - v4 + (v6 - v3) * 12)
      end
    end
    v1:loadHelpElementsFromXML()
    v1:loadShownElements()
  end
  self:updateGameStatsXML()
  if self.helpIconsBase ~= nil then
    v3 = v3:getValue("showHelpIcons")
    v1:showHelpIcons(...)
  end
  self:notifyPlayerFarmChanged(self.player)
  if self.missionDynamicInfo.isMultiplayer and g_dedicatedServer == nil then
    v2 = self:getIsServer()
    voiceChatAddLocalUser(...)
  end
  v1:updateSlotUsage()
end
function FSBaseMission:createPlayer(connection, isOwner, farmId, userId)
  if g_server == nil then
  end
  local v5 = v5(true, true)
  v5.farmId = farmId
  v5.userId = userId
  v5:load(connection, isOwner)
  v5:updateHandTools()
  v5:register(false)
  if g_server ~= nil then
    local v6 = v6:getUniqueUserIdByUserId(userId)
    local v8 = v8:hasPlayerWithUniqueUserId(v6)
    if v8 then
      v8 = v8:getPlayerStyle(userId)
    else
      v8 = PlayerStyle.defaultStyle()
      v8:addNewPlayer(v6, v8)
    end
    v5:setStyleAsync(v7, nil, false)
  end
  return v5
end
function FSBaseMission.getClientPosition(v0)
  local v2 = getCamera()
  return getWorldTranslation(...)
end
function FSBaseMission.getClientGuiVisibility(v0)
  return v1:getIsGuiVisible()
end
function FSBaseMission:setLoadingScreen(loadingScreen)
  self.loadingScreen = loadingScreen
end
function FSBaseMission.onConnectionOpened(v0, v1)
end
function FSBaseMission:onConnectionAccepted(connection)
  self.connectionWasAccepted = true
  if self.loadingScreen ~= nil then
    v2:onWaitingForAccept()
  end
  local v2 = v2:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
  local v3 = v3:getServerConnection()
  local v6 = v6:getValue("mpLanguage")
  local v8 = getUniqueUserId()
  local v9 = getUserId()
  local v10 = getPlatformId()
  local v5 = ConnectionRequestEvent.new(v6, self.missionDynamicInfo.password, v8, v9, v10, v2, self.missionDynamicInfo.platformSessionId)
  v3:sendEvent(v5, nil, true)
end
function FSBaseMission:onConnectionRequest(connection, languageIndex, password, uniqueUserId, platformUserId, platformId, playerName, platformSessionId)
  if connection.streamId ~= NetworkNode.LOCAL_STREAM_ID then
    local v9 = v9:getNumberOfUsers()
    if g_dedicatedServer ~= nil then
    end
    if self.missionDynamicInfo.capacity <= v9 + #self.playersToAccept then
      local v12 = ConnectionRequestAnswerEvent.new(ConnectionRequestAnswerEvent.ANSWER_FULL)
      connection:sendEvent(v12, nil, true)
      v10:closeConnection(connection)
      return
    end
    local v10 = getIsUserBlocked(uniqueUserId, platformUserId, platformId)
    if v10 then
      v12 = ConnectionRequestAnswerEvent.new(ConnectionRequestAnswerEvent.ANSWER_ALWAYS_DENIED)
      connection:sendEvent(v12, nil, true)
      v10:closeConnection(connection)
      return
    end
    local v11 = v11:getUserByUniqueId(uniqueUserId)
    if v11 == nil then
    end
    if not true then
      for v14, v15 in ipairs(self.playersToAccept) do
        if not (v15.uniqueUserId == uniqueUserId) then
          continue
        end
        break
      end
    end
    if v10 then
      v13 = ConnectionRequestAnswerEvent.new(ConnectionRequestAnswerEvent.ALREADY_IN_USE)
      connection:sendEvent(v13, nil, true)
      v11:closeConnection(connection)
      return
    end
    v11 = v11:getCanConnect(uniqueUserId, platformId)
    if not v11 then
      v13 = ConnectionRequestAnswerEvent.new(ConnectionRequestAnswerEvent.SLOT_LIMIT_REACHED)
      connection:sendEvent(v13, nil, true)
      v11:closeConnection(connection)
      return
    end
    if self.missionDynamicInfo.password == password then
      table.insert(self.playersToAccept, {connection = connection, playerName = playerName, language = languageIndex, platformUserId = platformUserId, platformId = platformId, uniqueUserId = uniqueUserId, platformSessionId = platformSessionId})
      return
    end
    v13 = ConnectionRequestAnswerEvent.new(ConnectionRequestAnswerEvent.ANSWER_WRONG_PASSWORD)
    connection:sendEvent(v13, nil, true)
    v11:closeConnection(connection)
    return
    return
  end
  v9 = v9:getNextUserId()
  if v9 ~= 1 then
  end
  assert(true)
  self.playerUserId = 1
  v10 = User.new()
  v10:setId(v9)
  v10:setConnection(connection)
  v10:setUniqueUserId(uniqueUserId)
  v10:setPlatformUserId(platformUserId)
  v10:setPlatformId(platformId)
  v10:setIsMasterUser(true)
  v10:setLanguageIndex(languageIndex)
  v10:setConnectedTime(self.time)
  v10:setState(FSBaseMission.USER_STATE_CONNECTED)
  v10:setNickname(playerName)
  self.playerNickname = playerName
  v11 = v11:hasPlayerWithUniqueUserId(uniqueUserId)
  v12:addUser(v10)
  v12:addMasterUserByConnection(connection)
  self:sendNumPlayersToMasterServer(1)
  if g_dedicatedServer == nil then
  end
  v14 = v14(v15, v16, v17, v18, true, self.playerUserId, playerName, v11)
  connection:sendEvent(v14, nil, true)
  v12:updateSlotLimit()
end
function FSBaseMission:canPlayerChangeNickname(player, toNickname)
  local v3 = toNickname:len()
  if v3 < 3 then
    return false
  end
  v3 = toNickname:trim()
  local v4 = filterText(v3, true, true)
  if v3 ~= v4 then
    return false
  end
  local v6 = v6:getUserByNickname(toNickname, true)
  while v6 ~= nil do
    if not (v6.id ~= player.userId) then
      break
    end
    local v8 = v8:getUserByNickname(toNickname .. " (" .. v7 .. ")", true)
  end
  return true, v5
end
function FSBaseMission:setPlayerNickname(player, nickname, userId, noEventSend)
  local v6 = self:getIsServer()
  if v6 then
    local v6, v7 = self:canPlayerChangeNickname(player, nickname)
    -- if not v6 then goto L121 end
    v6 = v6:getUserByUserId(player.userId)
    v6:setNickname(v7)
    if self.player == player then
      self.playerNickname = v7
    end
    v7:publish(MessageType.PLAYER_NICKNAME_CHANGED, player)
    v7 = v7:getFarmByUserId(player.userId)
    if v7 ~= nil then
      v7:updateLastNickname(player.userId, v6)
    end
    if noEventSend ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R4 aux=0x80000000 -> L121
    end
    local v10 = PlayerSetNicknameEvent.new(player, nickname, player.userId)
    v8:broadcastEvent(v10, false, nil, player)
    return
  end
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R4 aux=0x80000000 -> L93
  end
  v6 = v6:getServerConnection()
  local v8 = PlayerSetNicknameEvent.new(player, nickname, player.userId)
  v6:sendEvent(...)
  return
  if noEventSend == true then
    v6 = v6:getUserByUserId(userId)
    if v6 ~= nil then
      v6:setNickname(nickname)
    end
    if self.player == player then
      self.playerNickname = nickname
    end
    v7:publish(MessageType.PLAYER_NICKNAME_CHANGED, player)
  end
end
function FSBaseMission:onConnectionDenyAccept(connection, isDenied, isAlwaysDenied)
  -- TODO: structure LOP_FORNPREP (pc 6, target 23)
  if self.playersToAccept[1].connection == connection then
    table.remove(self.playersToAccept, 1)
  else
    -- TODO: structure LOP_FORNLOOP (pc 22, target 7)
  end
  if v4 == nil then
    return
  end
  if isAlwaysDenied then
    setIsUserBlocked(v4.uniqueUserId, v4.platformUserId, v4.platformId, true, v4.playerName)
  elseif isDenied then
  else
    local v14 = v14:hasPlayerWithUniqueUserId(v4.uniqueUserId)
    local v16 = v16:getUserByNickname(v4.playerName, true)
    while v16 ~= nil do
      local v17 = v17:getUserByNickname(v5 .. " (" .. v15 .. ")", true)
    end
    local v22 = math.random()
    local v19 = math.floor(v22 * 300 + 400)
    local v18 = User.new()
    local v20 = v20:getNextUserId()
    v18:setId(...)
    v18:setNickname(v14)
    v18:setConnection(connection)
    v18:setUniqueUserId(v10)
    v18:setPlatformUserId(v11)
    v18:setPlatformId(v12)
    v18:setPlatformSessionId(v13)
    v18:setLanguageIndex(v9)
    v18:setConnectedTime(self.time)
    v18:setState(FSBaseMission.USER_STATE_LOADING)
    v18:setFinanceUpdateSendTime(self.time + v19)
    v18:addUser(v18)
    v20 = v20:getNumberOfUsers()
    self:sendNumPlayersToMasterServer(...)
    v20 = v20:getAllPlatformSessionIds()
    self:sendPlatformSessionIdsToMasterServer(...)
    voiceChatAddConnection(connection.streamId, v4.uniqueUserId, v4.platformUserId, v4.platformId)
    self.playersLoading[connection] = {connection = connection, user = v18}
    v18:updateSlotLimit()
  end
  local v9 = v9:getFarmForUniqueUserId(v4.uniqueUserId)
  if v6 ~= nil then
    local v10 = v6:getId()
    -- if v10 then goto L225 end
  end
  if g_dedicatedServer == nil then
  end
  local v13 = v13(v14, v15, v16, v17, true, v10, v5, v7)
  connection:sendEvent(v13, nil, true)
  if v8 == ConnectionRequestAnswerEvent.ANSWER_OK then
    v16 = v6:getId()
    self:createPlayer(...)
    return
  end
  v11:closeConnection(connection)
end
function FSBaseMission:onConnectionRequestAnswer(connection, answer, difficulty, economicDifficulty, timeScale, connectedToDedicatedServer, clientUserId, playerName, knownPlayer)
  if answer == ConnectionRequestAnswerEvent.ANSWER_OK then
    self.missionInfo.difficulty = difficulty
    self.missionInfo.economicDifficulty = economicDifficulty
    self.missionInfo.timeScale = timeScale
    self.connectedToDedicatedServer = connectedToDedicatedServer
    self:onConnectionRequestAccepted(connection, knownPlayer)
    self.playerUserId = clientUserId
    self.playerNickname = playerName
    return
  end
  self.connectionWasClosed = true
  local v10 = v10:getText("ui_serverDeniedAccess")
  if answer == ConnectionRequestAnswerEvent.ANSWER_WRONG_PASSWORD then
    local v11 = v11:getText("ui_wrongPassword")
  elseif answer == ConnectionRequestAnswerEvent.ANSWER_ALWAYS_DENIED then
    v11 = v11:getText("ui_banned")
  else
    if answer == ConnectionRequestAnswerEvent.ANSWER_FULL then
      v11 = v11:getText("ui_gameFull")
    elseif answer == ConnectionRequestAnswerEvent.ALREADY_IN_USE then
      v11 = v11:getText("ui_connectionLostKeyInUse")
    else
      if answer == ConnectionRequestAnswerEvent.SLOT_LIMIT_REACHED then
        v11 = v11:getText("ui_serverDeniedSlotLimitReached")
      elseif answer == ConnectionRequestAnswerEvent.MATCH_IN_PROGRESS then
        v11 = v11:getText("ui_serverDeniedMatchInProgress")
      end
    end
  end
  InfoDialog.show(v10, self.onConnectionRequestAnswerOk, self)
end
function FSBaseMission.onConnectionRequestAnswerOk(v0)
  OnInGameMenuMenu()
  if masterServerConnectFront ~= nil then
    connection:initJoinGameScreen()
    connection:showGui("ConnectToMasterServerScreen")
    if 0 <= g_masterServerConnection.lastBackServerIndex then
      connection:connectToBack(g_masterServerConnection.lastBackServerIndex)
      return
    end
    connection:connectToFront()
  end
end
function FSBaseMission:onConnectionRequestAccepted(connection, knownPlayer)
  if self.loadingScreen ~= nil then
    difficulty:loadWithConnection(connection, knownPlayer)
  end
end
function FSBaseMission:onConnectionRequestAcceptedLoad(connection)
  self.loadingConnection = connection
  simulatePhysics(false)
  self:load()
end
function FSBaseMission:onFinishedLoading()
  local answer = answer:superClass()
  answer.onFinishedLoading(self)
  answer = self:getIsServer()
  if not answer then
    setCamera(g_defaultCamera)
    local answer, difficulty, economicDifficulty = self:getClientPosition()
    if self.loadingScreen ~= nil then
      timeScale:onWaitingForDynamicData()
    end
    self.pressStartPaused = true
    self:pauseGame()
    local v11 = getViewDistanceCoeff()
    local clientUserId = BaseMissionFinishedLoadingEvent.new(...)
    connection:sendEvent(clientUserId, nil, true)
    return
  end
  self.pressStartPaused = true
  self:pauseGame()
  if self.loadingScreen ~= nil then
    answer:onFinishedReceivingDynamicData()
  end
end
function FSBaseMission:getAllowsGuiDisplay()
  if self.isSynchronizingWithPlayers and self.player ~= nil then
    return false
  end
  local connection = connection:getIsSleeping()
  if connection then
    return false
  end
  return true
end
function FSBaseMission:onConnectionFinishedLoading(connection, x, y, z, viewDistanceCoeff)
  local playerName = connection:getIsLocal()
  assert(not playerName, "No local connection allowed in BaseMission:onConnectionFinishedLoading")
  if self.playersSynchronizing[connection] == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L27
  end
  connectedToDedicatedServer:closeConnection(connection)
  return
  self.playersLoading[connection] = nil
  local knownPlayer = self.playersLoading[connection].user:getPlatformId()
  addSplitShapeConnection(...)
  if self.densityMapSyncer ~= nil then
    clientUserId:addConnection(connection.streamId)
  end
  addTerrainUpdateConnection(self.terrainRootNode, connection.streamId)
  connection:setIsReadyForEvents(true)
  connectedToDedicatedServer:setState(FSBaseMission.USER_STATE_SYNCHRONIZING)
  self.playersSynchronizing[connection] = {connection = connection, user = connectedToDedicatedServer}
  if g_dedicatedServer ~= nil then
    playerName:raiseFramerate()
    self.dediEmptyPaused = false
  end
  self.isSynchronizingWithPlayers = true
  self:pauseGame()
  local v10 = connectedToDedicatedServer:getUniqueUserId()
  local v11 = connectedToDedicatedServer:getId()
  playerName:playerJoinedGame(v10, v11, connectedToDedicatedServer, connection)
  playerName:sendEventIds(connection)
  playerName:sendObjectClassIds(connection)
  v10 = OnCreateLoadedObjectEvent.new()
  connection:sendEvent(...)
  playerName:sendObjects(connection, x, y, z, viewDistanceCoeff)
  v10 = SavegameSettingsEvent.new()
  connection:sendEvent(...)
  v10 = SlotSystemUpdateEvent.new(self.slotSystem.slotLimit)
  connection:sendEvent(...)
  v10 = connectedToDedicatedServer:getUniqueUserId()
  playerName = playerName:getFarmForUniqueUserId(...)
  self:sendInitialClientState(connection, connectedToDedicatedServer, playerName)
  if self.loadingScreen ~= nil then
    knownPlayer:setDynamicDataPercentage(self.restPercentageFraction)
  end
  local v12 = v12:getUsers()
  v11 = UserEvent.new(v12, {}, self.missionDynamicInfo.capacity, true)
  knownPlayer:broadcastEvent(...)
  knownPlayer = SetSplitShapesEvent.new()
  clientUserId.splitShapesEvent = knownPlayer
  connection:sendEvent(knownPlayer, false)
end
function FSBaseMission:sendInitialClientState(connection, user, farm)
  local connectedToDedicatedServer = EnvironmentTimeEvent.new(self.environment.currentMonotonicDay, self.environment.currentDay, self.environment.dayTime, self.environment.daysPerPeriod)
  connection:sendEvent(...)
  self.environment.weather:sendInitialState(connection)
  local clientUserId = WeatherAddObjectEvent.new(self.environment.weather.forecastItems, true)
  connection:sendEvent(...)
  clientUserId = FogStateEvent.new(self.environment.weather.fogUpdater.targetMieScale, self.environment.weather.fogUpdater.lastMieScale, self.environment.weather.fogUpdater.alpha, self.environment.weather.fogUpdater.duration, self.environment.weather.fog.nightFactor, self.environment.weather.fog.dayFactor)
  connection:sendEvent(...)
  clientUserId = FarmsInitialStateEvent.new(farm.farmId)
  connection:sendEvent(...)
  if farm.farmId ~= 0 then
    clientUserId = ChangeLoanEvent.new(farm.loan, farm.farmId)
    connection:sendEvent(...)
    -- TODO: structure LOP_FORNPREP (pc 94, target 105)
    local v10 = FinanceStatsEvent.new(0, farm.farmId)
    connection:sendEvent(...)
    -- TODO: structure LOP_FORNLOOP (pc 104, target 95)
    user:setFinancesVersionCounter(farm.stats.financesVersionCounter)
  end
  clientUserId = FarmlandInitialStateEvent.new()
  connection:sendEvent(...)
  clientUserId = GreatDemandsEvent.new(self.economyManager.greatDemands)
  connection:sendEvent(...)
  clientUserId = PricingHistoryInitialEvent.new()
  connection:sendEvent(...)
  timeScale:sendAllToClient(connection)
  timeScale:onClientJoined(connection)
  timeScale:onClientJoined(connection)
end
function FSBaseMission:onSplitShapesProgress(connection, percentage)
  if percentage < 1 then
    local difficulty = self:getIsServer()
    -- if v3 then goto L52 end
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L52
    difficulty:setDynamicDataPercentage(percentage * self.splitShapesPercentageFraction + self.restPercentageFraction)
    return
  end
  difficulty = self:getIsServer()
  if difficulty and self.playersSynchronizing[connection] ~= nil then
    if self.playersSynchronizing[connection].splitShapesEvent ~= nil then
      economicDifficulty:delete()
      self.playersSynchronizing[connection].splitShapesEvent = nil
    end
    local connectedToDedicatedServer = BaseMissionReadyEvent.new()
    connection:sendEvent(connectedToDedicatedServer, nil, true)
  end
end
function FSBaseMission:onFinishedReceivingDynamicData(connection)
  if self.loadingScreen ~= nil then
    answer:onFinishedReceivingDynamicData()
    local economicDifficulty = BaseMissionReadyEvent.new()
    connection:sendEvent(economicDifficulty, nil, true)
  end
end
function FSBaseMission:onConnectionReady(connection)
  if self.playersSynchronizing[connection] == nil then
    difficulty:closeConnection(connection)
    return
  end
  if answer.densityMapEvent ~= nil then
    difficulty:delete()
    answer.densityMapEvent = nil
  end
  if answer.splitShapesEvent ~= nil then
    difficulty:delete()
    answer.splitShapesEvent = nil
  end
  connection:setIsReadyForObjects(true)
  answer.user:setState(FSBaseMission.USER_STATE_CONNECTED)
  self.playersSynchronizing[connection] = nil
  local economicDifficulty = next(self.playersSynchronizing)
  if economicDifficulty == nil then
    self.isSynchronizingWithPlayers = false
    self:tryUnpauseGame()
    self:showPauseDisplay(self.paused)
  end
end
function FSBaseMission:onConnectionClosed(connection)
  local answer = self:getIsServer()
  if not answer then
    if self.receivingDensityMapEvent ~= nil then
      answer:delete()
      self.receivingDensityMapEvent = nil
    end
    if self.receivingSplitShapesEvent ~= nil then
      answer:delete()
      self.receivingSplitShapesEvent = nil
    end
    self:pauseGame()
    -- if v0.connectionWasClosed then goto L359 end
    self.isSynchronizingWithPlayers = false
    self.connectionWasClosed = true
    setPresenceMode(PresenceModes.PRESENCE_IDLE)
    if self.cleanServerShutDown ~= nil then
      -- if v0.cleanServerShutDown then goto L122 end
    end
    answer = answer:getText("ui_failedToConnectToGame")
    if self.connectionWasAccepted then
      if self.connectionLostState == FSBaseMission.CONNECTION_LOST_KICKED then
        local difficulty = difficulty:getText("ui_connectionLostKicked")
      elseif self.connectionLostState == FSBaseMission.CONNECTION_LOST_BANNED then
        difficulty = difficulty:getText("ui_connectionLostBanned")
      else
        difficulty = difficulty:getText("ui_connectionLost")
      end
    end
    difficulty = difficulty:getIsGuiVisible()
    if difficulty and g_gui.currentGuiName == "ChatDialog" then
      difficulty:showGui("")
    end
    InfoDialog.show(answer, OnInGameMenuMenu)
    self.cleanServerShutDown = false
    self.connectionLostState = nil
    return
  end
  removeSplitShapeConnection(connection.streamId)
  if self.densityMapSyncer ~= nil then
    answer:removeConnection(connection.streamId)
  end
  removeTerrainUpdateConnection(self.terrainRootNode, connection.streamId)
  -- TODO: structure LOP_FORNPREP (pc 157, target 173)
  if self.playersToAccept[1].connection == connection then
    table.remove(self.playersToAccept, 1)
  else
    -- TODO: structure LOP_FORNLOOP (pc 172, target 158)
  end
  self.playersLoading[connection] = nil
  answer = answer:getUserByConnection(connection)
  if answer ~= nil then
    local timeScale = answer:getId()
    difficulty:playerQuitGame(...)
  end
  if self.wildlifeSpawner ~= nil then
    difficulty:onConnectionClosed()
  end
  for connectedToDedicatedServer, clientUserId in pairs(self.vehicles) do
    if not (clientUserId.owner == connection) then
      continue
    end
    local playerName = playerName:getServerConnection()
    local v10 = VehicleLeaveEvent.new(clientUserId)
    playerName:sendEvent(...)
  end
  difficulty:removeUserByConnection(connection)
  voiceChatRemoveConnection(connection.streamId)
  if self.playersSynchronizing[connection] ~= nil then
    if self.playersSynchronizing[connection].densityMapEvent ~= nil then
      economicDifficulty:delete()
    end
    if difficulty.splitShapesEvent ~= nil then
      economicDifficulty:delete()
    end
    self.playersSynchronizing[connection] = nil
    economicDifficulty = next(self.playersSynchronizing)
    if economicDifficulty == nil then
      self.isSynchronizingWithPlayers = false
      self:tryUnpauseGame()
      self:showPauseDisplay(self.paused)
    end
  end
  if self.connectionsToPlayer[connection] ~= nil then
    self.connectionsToPlayer[connection]:delete()
    self.connectionsToPlayer[connection] = nil
  end
  economicDifficulty = economicDifficulty:getNumberOfUsers()
  self:sendNumPlayersToMasterServer(economicDifficulty)
  clientUserId = clientUserId:getAllPlatformSessionIds()
  self:sendPlatformSessionIdsToMasterServer(...)
  clientUserId = UserEvent.new({}, {answer}, self.missionDynamicInfo.capacity, false)
  timeScale:broadcastEvent(...)
  timeScale:updateSlotLimit()
  if economicDifficulty == 1 and g_dedicatedServer ~= nil then
    timeScale:lowerFramerate()
    if g_dedicatedServer.pauseGameIfEmpty then
      self.dediEmptyPaused = true
      self:pauseGame()
    end
  end
end
function FSBaseMission:cancelPlayersSynchronizing()
  for economicDifficulty, timeScale in pairs(self.playersSynchronizing) do
    connectedToDedicatedServer:closeConnection(economicDifficulty)
  end
end
function FSBaseMission:onConnectionsUpdateTick(dt)
  local answer = self:getIsServer()
  if answer then
    if 0 < #g_server.clients then
      prepareSplitShapesServerWriteUpdateStream(dt)
      answer = startWriteSplitShapesServerEvents()
      if answer then
        for timeScale, connectedToDedicatedServer in pairs(g_server.clientConnections) do
          if not (timeScale ~= NetworkNode.LOCAL_STREAM_ID) then
            continue
          end
          local knownPlayer = UpdateSplitShapesEvent.new()
          connectedToDedicatedServer:sendEvent(...)
        end
        finishWriteSplitShapesServerEvents()
      end
    end
    self.sendMoneyUserIndex = self.sendMoneyUserIndex + 2
    difficulty = difficulty:getNumberOfUsers()
    if difficulty < self.sendMoneyUserIndex then
      self.sendMoneyUserIndex = 1
    end
  end
end
function FSBaseMission:onConnectionWriteUpdateStream(connection, maxPacketSize, networkDebug)
  local economicDifficulty = connection:getIsServer()
  if not economicDifficulty then
    local clientUserId, playerName, knownPlayer = clientUserId:getClientPosition(connection.streamId)
    local v10 = v10:getClientClipDistCoeff(connection.streamId)
    local v11 = streamGetWriteOffset(connection.streamId)
    if networkDebug then
      streamWriteInt32(connection.streamId, 0)
    end
    writeSplitShapesServerUpdateToStream(connection.streamId, connection.streamId, clientUserId, playerName, knownPlayer, v10, economicDifficulty)
    local v12 = streamGetWriteOffset(connection.streamId)
    local v14 = math.max(economicDifficulty - v12 - v11, 0)
    v15:addPacketSize(connection, NetworkNode.PACKET_SPLITSHAPES, (v12 - v11) / 8)
    if networkDebug then
      streamSetWriteOffset(connection.streamId, v11)
      streamWriteInt32(connection.streamId, v12 - v11 + 32)
      streamSetWriteOffset(connection.streamId, v12)
    end
    if self.densityMapSyncer ~= nil then
      local v15 = v15:writeUpdateStream(connection, timeScale + v14, clientUserId, playerName, knownPlayer, v10, networkDebug)
      local v16 = math.max(timeScale + v14 - v15, 0)
    end
    v15 = streamGetWriteOffset(connection.streamId)
    if networkDebug then
      streamWriteInt32(connection.streamId, 0)
    end
    writeTerrainUpdateStream(self.terrainRootNode, connection.streamId, connection.streamId, connectedToDedicatedServer + v14, clientUserId, playerName, knownPlayer)
    v16 = streamGetWriteOffset(connection.streamId)
    v18:addPacketSize(connection, NetworkNode.PACKET_TERRAIN_DEFORM, (v16 - v15) / 8)
    if networkDebug then
      streamSetWriteOffset(connection.streamId, v15)
      streamWriteInt32(connection.streamId, v16 - v15 + 32)
      streamSetWriteOffset(connection.streamId, v16)
    end
    local v18 = streamGetWriteOffset(connection.streamId)
    if networkDebug then
      streamWriteInt32(connection.streamId, 0)
    end
    voiceChatWriteServerUpdateToStream(connection.streamId, connection.streamId, connection.lastSeqSent)
    local v19 = streamGetWriteOffset(connection.streamId)
    v21:addPacketSize(connection, NetworkNode.PACKET_VOICE_CHAT, (v19 - v18) / 8)
    if networkDebug then
      streamSetWriteOffset(connection.streamId, v18)
      streamWriteInt32(connection.streamId, v19 - v18 + 32)
      streamSetWriteOffset(connection.streamId, v19)
    end
  end
end
function FSBaseMission:onConnectionReadUpdateStream(connection, networkDebug)
  local difficulty = connection:getIsServer()
  if difficulty then
    if networkDebug then
      local timeScale = streamGetReadOffset(connection.streamId)
      timeScale = streamReadInt32(connection.streamId)
    end
    readSplitShapesServerUpdateFromStream(connection.streamId, g_clientInterpDelay, g_packetPhysicsNetworkTime, g_client.tickDuration)
    if networkDebug then
      timeScale:checkObjectUpdateDebugReadSize(connection.streamId, economicDifficulty, difficulty, "splitshape")
    end
    if self.densityMapSyncer ~= nil then
      timeScale:readUpdateStream(connection, networkDebug)
    end
    if networkDebug then
      timeScale = streamGetReadOffset(connection.streamId)
      timeScale = streamReadInt32(connection.streamId)
    end
    readTerrainUpdateStream(self.terrainRootNode, connection.streamId)
    if networkDebug then
      timeScale:checkObjectUpdateDebugReadSize(connection.streamId, economicDifficulty, difficulty, "terrainmods")
    end
    if networkDebug then
      timeScale = streamGetReadOffset(connection.streamId)
      timeScale = streamReadInt32(connection.streamId)
    end
    voiceChatReadServerUpdateFromStream(connection.streamId, g_clientInterpDelay, connection.lastSeqSent)
    if networkDebug then
      timeScale:checkObjectUpdateDebugReadSize(connection.streamId, economicDifficulty, difficulty, "voicechat")
    end
  end
end
function FSBaseMission.onFinishedClientsWriteUpdateStream(v0)
end
function FSBaseMission.onConnectionPacketSent(v0, connection, answer)
  voiceChatNotifyPacketSent(answer)
end
function FSBaseMission:onConnectionPacketLost(connection, packetId)
  voiceChatNotifyPacketLost(packetId)
  local difficulty = connection:getIsServer()
  if not difficulty and self.densityMapSyncer ~= nil then
    difficulty:onPacketLost(connection, packetId)
  end
end
function FSBaseMission:onShutdownEvent(connection)
  local answer = self:getIsServer()
  if not answer then
    answer:closeAllDialogs()
    self.cleanServerShutDown = true
    setPresenceMode(PresenceModes.PRESENCE_IDLE)
    local difficulty = difficulty:getText("ui_serverWasShutdown")
    InfoDialog.show(difficulty, self.onShutdownEventOk, self)
    return
  end
  answer = answer:getUserByConnection(connection)
  difficulty:removeUserByConnection(connection)
  voiceChatRemoveConnection(connection.streamId)
  local timeScale = timeScale:getNumberOfUsers()
  self:sendNumPlayersToMasterServer(...)
  timeScale = timeScale:getAllPlatformSessionIds()
  self:sendPlatformSessionIdsToMasterServer(...)
  timeScale = UserEvent.new({}, {answer}, self.missionDynamicInfo.capacity, false)
  difficulty:broadcastEvent(...)
end
function FSBaseMission.onShutdownEventOk(v0)
  OnInGameMenuMenu()
end
function FSBaseMission.onMasterServerConnectionReady(v0)
end
function FSBaseMission:onMasterServerConnectionFailed(reason)
  if self.isMissionStarted then
    answer:showGui("InGameMenu")
    answer:setMasterServerConnectionFailed(reason)
    return
  end
  OnInGameMenuMenu(false, true)
end
function FSBaseMission.getServerUserId(v0)
  return 1
end
function FSBaseMission:getFarmId(connection)
  local answer = self:getIsServer()
  if answer then
    if self.player ~= nil and connection == nil then
      return self.player.farmId
    end
    if connection == nil then
      return nil
    end
    answer = self:getPlayerByConnection(connection)
    if answer == nil then
      return nil
    end
    return answer.farmId
  end
  if self.player == nil then
    return 0
  end
  return self.player.farmId
end
function FSBaseMission:farmStats(farmId)
  if farmId == nil then
  end
  local answer = answer:getFarmById(farmId)
  if answer == nil then
    print("Error: Farm not found for stats")
    return FarmStats.new()
  end
  return answer.stats
end
function FSBaseMission:getPlayerByConnection(connection)
  return self.connectionsToPlayer[connection]
end
function FSBaseMission:kickUser(user)
  local difficulty = self:getIsServer()
  assert(...)
  local connection = user:getConnection()
  local timeScale = KickBanNotificationEvent.new(true)
  connection:sendEvent(...)
  difficulty:closeConnection(connection)
end
function FSBaseMission:banUser(user)
  user:block()
  local answer = self:getIsServer()
  if answer then
    answer = user:getConnection()
    local timeScale = KickBanNotificationEvent.new(false)
    answer:sendEvent(...)
    difficulty:closeConnection(answer)
  end
end
function FSBaseMission:onObjectCreated(object)
  local difficulty = difficulty:superClass()
  difficulty.onObjectCreated(self, object)
  local answer = answer:getIsCountableObject(object)
  if answer then
    answer:updateSlotUsage()
  end
end
function FSBaseMission:onObjectDeleted(object)
  local difficulty = difficulty:superClass()
  difficulty.onObjectDeleted(self, object)
  local answer = answer:getIsCountableObject(object)
  if answer then
    answer:updateSlotUsage()
  end
end
function FSBaseMission:addVehicle(vehicle)
  local difficulty = difficulty:superClass()
  difficulty.addVehicle(self, vehicle)
  for timeScale, connectedToDedicatedServer in ipairs(self.vehicleChangeListeners) do
    connectedToDedicatedServer:onVehiclesChanged(vehicle, true, false)
  end
end
function FSBaseMission:removeVehicle(vehicle, callDelete)
  local economicDifficulty = economicDifficulty:superClass()
  economicDifficulty.removeVehicle(self, vehicle, callDelete)
  for connectedToDedicatedServer, clientUserId in ipairs(self.vehicleChangeListeners) do
    clientUserId:onVehiclesChanged(vehicle, false, self.isExitingGame)
  end
end
function FSBaseMission:addVehicleChangeListener(listener)
  if listener ~= nil then
    table.addElement(self.vehicleChangeListeners, listener)
  end
end
function FSBaseMission:removeVehicleChangeListener(listener)
  if listener ~= nil then
    table.removeElement(self.vehicleChangeListeners, listener)
  end
end
function FSBaseMission:addOwnedItem(item)
  local difficulty = difficulty:superClass()
  difficulty.addOwnedItem(self, item)
  if self.player ~= nil then
    -- if v0.player.farmId then goto L21 end
  end
  difficulty:setOwnedFarmItems(self.ownedItems, AccessHandler.EVERYONE)
end
function FSBaseMission:removeOwnedItem(item)
  local difficulty = difficulty:superClass()
  difficulty.removeOwnedItem(self, item)
  if self.player ~= nil then
    -- if v0.player.farmId then goto L21 end
  end
  difficulty:setOwnedFarmItems(self.ownedItems, AccessHandler.EVERYONE)
end
function FSBaseMission:addLeasedItem(item)
  local difficulty = difficulty:superClass()
  difficulty.addLeasedItem(self, item)
  if self.player ~= nil then
    -- if v0.player.farmId then goto L21 end
  end
  difficulty:setLeasedFarmItems(self.leasedVehicles, AccessHandler.EVERYONE)
end
function FSBaseMission:removeLeasedItem(item)
  local difficulty = difficulty:superClass()
  difficulty.removeLeasedItem(self, item)
  if self.player ~= nil then
    -- if v0.player.farmId then goto L21 end
  end
  difficulty:setLeasedFarmItems(self.leasedVehicles, AccessHandler.EVERYONE)
end
function FSBaseMission:loadMap(filename, addPhysics, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  if self.missionInfo.mapsSplitShapeFileIds ~= nil then
    local clientUserId = Utils.getNoNil(self.missionInfo.mapsSplitShapeFileIds[#self.mapsSplitShapeFileIds + 1], -1)
  end
  setSplitShapesLoadingFileId(connectedToDedicatedServer)
  clientUserId = setSplitShapesNextFileId()
  table.insert(self.mapsSplitShapeFileIds, clientUserId)
  local knownPlayer = knownPlayer:superClass()
  knownPlayer.loadMap(self, filename, addPhysics, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
end
function FSBaseMission:registerToLoadOnMapFinished(object)
  table.insert(self.objectsToCallOnMapFinished, object)
end
function FSBaseMission:loadMapFinished(node, failedReason, arguments, callAsyncCallback)
  local startedRepeat = startFrameRepeatMode()
  local clientUserId = clientUserId:superClass()
  clientUserId.loadMapFinished(self, node, failedReason, arguments, false)
  if self.trafficSystem ~= nil and self.trafficSystem.trafficSystemId ~= nil and self.pedestrianSystem ~= nil and self.pedestrianSystem.pedestrianSystemId ~= nil then
    setPedestrianSystemTrafficSystem(self.pedestrianSystem.pedestrianSystemId, self.trafficSystem.trafficSystemId)
  end
  if node ~= 0 then
    local numChildren = getNumOfChildren(node)
    -- TODO: structure LOP_FORNPREP (pc 63, target 79)
    local v14 = getChildAt(node, 0)
    local v15 = getHasClassId(v14, ClassIds.TERRAIN_TRANSFORM_GROUP)
    if v15 then
    else
      -- TODO: structure LOP_FORNLOOP (pc 78, target 64)
    end
    if knownPlayer ~= 0 then
      self:initTerrain(knownPlayer, arguments.filename)
    end
  end
  if self.trafficSystem ~= nil and self.trafficSystem.trafficSystemId ~= nil and self.aiSystem ~= nil and self.aiSystem.navigationMap ~= nil then
    setTrafficSystemVehicleNavigationMap(self.trafficSystem.trafficSystemId, self.aiSystem.navigationMap)
    setVehicleNavigationMapTrafficSystem(self.aiSystem.navigationMap, self.trafficSystem.trafficSystemId)
  end
  if callAsyncCallback ~= nil then
    -- if not v4 then goto L139 end
  end
  if connectedToDedicatedServer ~= nil then
    connectedToDedicatedServer(clientUserId, node, playerName)
  end
  if startedRepeat then
    endFrameRepeatMode()
  end
  if not self.cancelLoading then
    for v12, v13 in pairs(self.objectsToCallOnMapFinished) do
      v13:onLoadMapFinished()
    end
    knownPlayer:setManureTriggers(self.manureLoadingStations, self.liquidManureLoadingStations)
    v11 = v11:getUsers()
    knownPlayer:setConnectedUsers(...)
    v11 = v11:getUsers()
    knownPlayer:setConnectedUsers(...)
  end
  self.objectsToCallOnMapFinished = {}
end
function FSBaseMission:initTerrain(terrainId, filename)
  self.terrainRootNode = terrainId
  local terrainColMask = getCollisionMask(self.terrainRootNode)
  local connectedToDedicatedServer = CollisionFlag.getHasFlagSet(terrainId, CollisionFlag.TERRAIN)
  if not connectedToDedicatedServer then
    connectedToDedicatedServer = bitOR(terrainColMask, CollisionFlag.TERRAIN)
    local playerName = CollisionFlag.getBit(CollisionFlag.TERRAIN)
    local knownPlayer = getName(terrainId)
    Logging.warning(...)
  end
  connectedToDedicatedServer = CollisionFlag.getHasFlagSet(terrainId, CollisionFlag.AI_BLOCKING)
  if connectedToDedicatedServer then
    playerName = bitNOT(CollisionFlag.AI_BLOCKING)
    connectedToDedicatedServer = bitAND(...)
    playerName = getName(terrainId)
    knownPlayer = CollisionFlag.getBit(CollisionFlag.AI_BLOCKING)
    Logging.warning(...)
  end
  if terrainColMask ~= timeScale then
    setCollisionMask(self.terrainRootNode, timeScale)
  end
  connectedToDedicatedServer = getTerrainSize(self.terrainRootNode)
  self.terrainSize = connectedToDedicatedServer
  connectedToDedicatedServer:setTerrainSize(self.terrainSize)
  createLowResCollisionHandler(64, 64, 1, 1048543, 4, 1048543, 5)
  setLowResCollisionHandlerTerrainRootNode(g_currentMission.terrainRootNode)
  local connectedToDedicatedServer, clientUserId, playerName = getWorldTranslation(self.terrainRootNode)
  knownPlayer = math.abs(connectedToDedicatedServer)
  if 0.1 >= knownPlayer then
    knownPlayer = math.abs(playerName)
    if 0.1 >= knownPlayer then
      -- if v7 >= 0 then goto L134 end
    end
  end
  print("Warning: the terrain node needs to be a x=0 and z=0 and y >= 0")
  knownPlayer = NetworkUtil.createWorldPositionCompressionParams(self.terrainSize, 0.5 * self.terrainSize, 0.02)
  self.areaCompressionParams = knownPlayer
  knownPlayer = NetworkUtil.createWorldPositionCompressionParams(100, 50, 0.02)
  self.areaRelativeCompressionParams = knownPlayer
  knownPlayer = NetworkUtil.createWorldPositionCompressionParams(self.terrainSize + 500, 0.5 * (self.terrainSize + 500), 0.005)
  self.vehicleXZPosCompressionParams = knownPlayer
  knownPlayer = NetworkUtil.createWorldPositionCompressionParams(1500, 0, 0.005)
  self.vehicleYPosCompressionParams = knownPlayer
  knownPlayer = NetworkUtil.createWorldPositionCompressionParams(self.terrainSize + 500, 0.5 * (self.terrainSize + 500), 0.0001)
  self.vehicleXZPosHighPrecisionCompressionParams = knownPlayer
  knownPlayer = NetworkUtil.createWorldPositionCompressionParams(1500, 0, 0.0001)
  self.vehicleYPosHighPrecisionCompressionParams = knownPlayer
  setSplitShapesWorldCompressionParams(self.terrainSize, 0.5 * self.terrainSize, 0.005, 1700, 200, 0.005, self.terrainSize, 0.5 * self.terrainSize, 0.005)
  setAudioCullingWorldProperties(-(0.5 * self.terrainSize + self.cullingWorldXZOffset), self.cullingWorldMinY, -(0.5 * self.terrainSize + self.cullingWorldXZOffset), 0.5 * self.terrainSize + self.cullingWorldXZOffset, self.cullingWorldMaxY, 0.5 * self.terrainSize + self.cullingWorldXZOffset, 16, self.cullingClipDistanceThreshold1, self.cullingClipDistanceThreshold2)
  setLightCullingWorldProperties(-(0.5 * self.terrainSize + self.cullingWorldXZOffset), self.cullingWorldMinY, -(0.5 * self.terrainSize + self.cullingWorldXZOffset), 0.5 * self.terrainSize + self.cullingWorldXZOffset, self.cullingWorldMaxY, 0.5 * self.terrainSize + self.cullingWorldXZOffset, 16, self.cullingClipDistanceThreshold1, self.cullingClipDistanceThreshold2)
  if GS_PLATFORM_PLAYSTATION then
    setShapeCullingWorldProperties(-(0.5 * self.terrainSize + self.cullingWorldXZOffset), self.cullingWorldMinY, -(0.5 * self.terrainSize + self.cullingWorldXZOffset), 0.5 * self.terrainSize + self.cullingWorldXZOffset, self.cullingWorldMaxY, 0.5 * self.terrainSize + self.cullingWorldXZOffset, 16, self.cullingClipDistanceThreshold1, self.cullingClipDistanceThreshold2)
  else
    setShapeCullingWorldProperties(-(0.5 * self.terrainSize + self.cullingWorldXZOffset), self.cullingWorldMinY, -(0.5 * self.terrainSize + self.cullingWorldXZOffset), 0.5 * self.terrainSize + self.cullingWorldXZOffset, self.cullingWorldMaxY, 0.5 * self.terrainSize + self.cullingWorldXZOffset, 64, self.cullingClipDistanceThreshold1, self.cullingClipDistanceThreshold2)
  end
  local foliageViewCoeff = getFoliageViewDistanceCoeff()
  local v15, v16 = getTerrainLodBlendDynamicDistances(self.terrainRootNode)
  setTerrainLodBlendDynamicDistances(self.terrainRootNode, v15 * foliageViewCoeff, v16 * foliageViewCoeff)
  if self.foliageBendingSystem then
    v17:setTerrainTransformGroup(self.terrainRootNode)
  end
  local v17 = getTerrainDataPlaneByName(self.terrainRootNode, "terrainDetail")
  self.terrainDetailId = v17
  if self.terrainDetailId ~= 0 then
    v17 = getDensityMapSize(self.terrainDetailId)
    self.terrainDetailMapSize = v17
  end
  v17:initTerrain(self, self.terrainRootNode, self.terrainDetailId)
  v17:initTerrain(self, self.terrainRootNode, self.terrainDetailId)
  v17:initTerrain(self, self.terrainRootNode, self.terrainDetailId)
  v17:initTerrain(self.terrainSize, self.terrainDetailMapSize)
  v17:initTerrain(self, self.terrainRootNode, self.terrainDetailId)
  if difficulty then
    v17 = DensityMapSyncer.new(self.terrainRootNode, 32)
    self.densityMapSyncer = v17
    for v20, v21 in pairs(self.dynamicFoliageLayers) do
      v22:addDensityMap(v21)
    end
    v17:addDensityMapSyncer(self.densityMapSyncer)
    v17:addDensityMapSyncer(self.densityMapSyncer)
    v17:addDensityMapSyncer(self.densityMapSyncer)
    v17:addDensityMapSyncer(self.densityMapSyncer)
  end
  v19 = v19:getFruitTypes()
  for v21, v22 in ipairs(...) do
    local v24 = getTerrainDataPlaneByName(self.terrainRootNode, v22.layerName)
    if v24 ~= nil and v24 ~= 0 then
      v22.terrainDataPlaneId = v24
      local v25 = getFoliageTransformGroupIdByFoliageName(self.terrainRootNode, v22.layerName)
      v22.foliageTransformGroupId = v25
      local v27 = getDensityMapSize(v24)
      v25 = math.max(...)
      self.fruitMapSize = v25
      v25 = self:getIsServer()
      if v25 and v22.isGrowing then
        v25 = getDensityMapFilename(v24)
        local v26 = Utils.getFilenameInfo(v25)
        v26:setFruitLayer(v26, v22, v22.layerName, v24)
      end
      if difficulty then
        v25:addDensityMap(v24)
      end
    end
    if v22.preparingOutputName ~= nil then
      v25 = getTerrainDataPlaneByName(self.terrainRootNode, v22.preparingOutputName)
      if v25 ~= nil and v25 ~= 0 then
        v22.terrainDataPlaneIdPreparing = v25
        if difficulty then
          v26:addDensityMap(v25)
        end
      end
    end
    if not v23 then
      continue
    end
    table.insert(v17, v22)
  end
  v18:setMissionFruitTypes(v17)
  v18:onTerrainLoad(self.terrainRootNode)
  if self.terrainDetailId ~= 0 then
    v18 = FieldCropsQuery.new(self.terrainDetailId)
    self.fieldCropsQuery = v18
  end
  v18 = getTerrainDataPlaneByName(self.terrainRootNode, "terrainDetailHeight")
  self.terrainDetailHeightId = v18
  v18 = getTerrainDetailByName(self.terrainRootNode, "terrainDetailHeight")
  self.terrainDetailHeightTGId = v18
  self.terrainDetailHeightMapSize = self.fruitMapSize
  if self.terrainDetailHeightId ~= 0 then
    v18 = getDensityMapSize(self.terrainDetailHeightId)
    self.terrainDetailHeightMapSize = v18
    v18:loadFromXMLFile(self.missionInfo.densityMapHeightXMLLoad)
    v18 = getInfoLayerFromTerrain(self.terrainRootNode, "tipCollisionGenerated")
    v19 = getInfoLayerFromTerrain(self.terrainRootNode, "placementCollisionGenerated")
    v22 = self:getIsServer()
    v20:initialize(v22, v18, v19)
    v20 = v20:getTerrainDetailHeightUpdater()
    if v20 ~= nil and difficulty then
      v21:addDensityMap(g_currentMission.terrainDetailHeightId)
    end
  end
  v18:onTerrainLoad(self.terrainRootNode)
  v18:onTerrainLoad(self.terrainRootNode)
  v18:onTerrainLoad(self.terrainRootNode, filename)
  v18:initTerrain(self.terrainRootNode)
  DensityMapHeightUtil.initTerrain(self, self.terrainDetailId, self.terrainDetailHeightId)
  FieldUtil.initTerrain(self.terrainDetailId)
  v18:hitLoadingTarget(MPLoadingScreen.LOAD_TARGETS.TERRAIN)
end
function FSBaseMission:addTrainSystem(trainSystem)
  self.trainSystems[trainSystem] = trainSystem
end
function FSBaseMission:removeTrainSystem(trainSystem)
  self.trainSystems[trainSystem] = nil
end
function FSBaseMission:setTrainSystemTabbable(isTabbable)
  for timeScale, connectedToDedicatedServer in pairs(self.trainSystems) do
    timeScale:setIsTrainTabbable(isTabbable)
  end
end
function FSBaseMission.addLimitedObject(v0, connection, answer)
end
function FSBaseMission.removeLimitedObject(v0, connection, answer)
end
function FSBaseMission.getCanAddLimitedObject(v0, connection)
  return true
end
function FSBaseMission:mouseEvent(posX, posY, isDown, isUp, button)
  local clientUserId = clientUserId:superClass()
  clientUserId.mouseEvent(self, posX, posY, isDown, isUp, button)
  connectedToDedicatedServer:mouseEvent(posX, posY, isDown, isUp, button)
end
function FSBaseMission:updatePauseInputContext()
  local difficulty = g_inputBinding:getContextName()
  if difficulty ~= BaseMission.INPUT_CONTEXT_PAUSE then
    difficulty = g_inputBinding:getContextName()
    if difficulty ~= BaseMission.INPUT_CONTEXT_SYNCHRONIZING then
    end
  end
  if self.gameStarted and self.paused then
    local economicDifficulty = economicDifficulty:getIsGuiVisible()
    if not not economicDifficulty then
    end
  end
  if self.gameStarted then
  end
  if not self.isSynchronizingWithPlayers then
    local timeScale = connection:getContextName()
    if timeScale == BaseMission.INPUT_CONTEXT_SYNCHRONIZING then
      connection:revertContext()
    end
  end
  if difficulty then
    -- if v2 then goto L66 end
    timeScale:closeAllDialogs()
    connection:setContext(BaseMission.INPUT_CONTEXT_PAUSE)
  elseif economicDifficulty and answer then
    connection:revertContext()
  end
  if difficulty and self.isSynchronizingWithPlayers then
    timeScale = connection:getContextName()
    if timeScale ~= BaseMission.INPUT_CONTEXT_SYNCHRONIZING then
      connection:setContext(BaseMission.INPUT_CONTEXT_SYNCHRONIZING, true)
    end
  end
end
function FSBaseMission:update(dt)
  local difficulty = difficulty:superClass()
  difficulty.update(self, dt)
  if not u0 and self.isRunning then
    local timeScale = timeScale:getFarmById(self.player.farmId)
    local economicDifficulty = economicDifficulty:getTotalValue("playTime")
    difficulty = Utils.getNoNil(economicDifficulty, 0)
    if 4 < difficulty / 60 then
      u1 = u1 - dt
      if u1 < 0 then
        difficulty = difficulty:getIsGuiVisible()
        if not difficulty then
          economicDifficulty = economicDifficulty:getText("dialog_getFullVersion")
          InfoDialog.show(economicDifficulty, u2)
          difficulty = math.random(1200000, 1800000)
          u1 = difficulty
        end
      end
    end
  end
  answer:updateMessageAndIcon(dt)
  answer:updateMap(dt)
  answer:update(dt)
  answer:update(dt)
  answer:update(dt)
  answer:update(dt)
  answer:update(dt)
  answer:update(dt)
  answer:update(dt)
  answer:update(dt)
  if self.economyManager ~= nil then
    answer:update(dt)
  end
  answer:update(dt)
  if self.wildlifeSpawner ~= nil then
    answer:update(dt)
  end
  self:updatePauseInputContext()
  if not self.isRunning and g_dedicatedServer == nil then
    if self.paused and not self.isSynchronizingWithPlayers then
      local answer = answer:getIsGuiVisible()
      if not answer and GS_PLATFORM_PLAYSTATION then
        setPresenceMode(PresenceModes.PRESENCE_IDLE)
        self.presenceMode = PresenceModes.PRESENCE_IDLE
      end
    end
    self:updateSaving()
    return
  end
  if 0 < #self.playersToAccept then
    if self.missionDynamicInfo.autoAccept then
      self:onConnectionDenyAccept(self.playersToAccept[1].connection, false, false)
    else
      answer = self:getCanAcceptPlayers()
      if answer then
        local knownPlayer = getIsSplitShapeConnectionWithinLimits(self.playersToAccept[1].platformId)
        DenyAcceptDialog.show(...)
      end
    end
  end
  answer:update(dt)
  answer:update(dt)
  answer:update(dt)
  answer:update(dt)
  answer = self:getIsServer()
  if answer then
    difficulty = difficulty:getUsers()
    for timeScale, connectedToDedicatedServer in ipairs(...) do
      if not (1 < timeScale) then
        continue
      end
      knownPlayer = connectedToDedicatedServer:getId()
      local clientUserId = clientUserId:getFarmByUserId(...)
      local playerName = connectedToDedicatedServer:getState()
      if not (playerName == FSBaseMission.USER_STATE_INGAME) then
        continue
      end
      playerName = connectedToDedicatedServer:getFinanceUpdateSendTime()
      if not (playerName < self.time) then
        continue
      end
      local v15 = math.random()
      local v12 = math.floor(v15 * 300 + 5000)
      connectedToDedicatedServer:setFinanceUpdateSendTime(self.time + v12)
      knownPlayer = connectedToDedicatedServer:getFinancesVersionCounter()
      if not (clientUserId.stats.financesVersionCounter ~= knownPlayer) then
        continue
      end
      connectedToDedicatedServer:setFinancesVersionCounter(clientUserId.stats.financesVersionCounter)
      playerName = connectedToDedicatedServer:getConnection()
      local v10 = FinanceStatsEvent.new(0, clientUserId.farmId)
      playerName:sendEvent(...)
    end
    if g_dedicatedServer ~= nil and self.gameStatsTime <= self.time then
      self:updateGameStatsXML()
    end
    connectedToDedicatedServer = self:getEffectiveTimeScale()
    answer:updateTrees(dt, dt * connectedToDedicatedServer)
  end
  for timeScale in pairs(self.placeablesToDelete) do
    timeScale:delete()
    self.placeablesToDelete[timeScale] = nil
  end
  answer = self:getIsClient()
  if answer then
    answer = answer:getIsGuiVisible()
    if not answer then
      if g_soundPlayer ~= nil then
        if self.controlledVehicle ~= nil then
          -- if v0.controlledVehicle.supportsRadio then goto L415 end
        end
        difficulty = difficulty:getValue(GameSettings.SETTING.RADIO_VEHICLE_ONLY)
        difficulty:setActionEventActive(self.eventRadioToggle, not difficulty)
      end
      answer:updateVehicleName(dt)
    end
    self:updateSaving()
    self:checkRecordingDeviceState(dt)
  end
  difficulty = difficulty:isa(FSCareerMissionInfo)
  if difficulty then
    if self.missionDynamicInfo.isMultiplayer then
      difficulty = self:getIsServer()
      if difficulty then
        timeScale = timeScale:getUsers()
        for clientUserId, playerName in ipairs(...) do
          knownPlayer = playerName:getConnection()
          v10 = playerName:getState()
          if not (v10 == FSBaseMission.USER_STATE_INGAME) then
            continue
          end
          if not (knownPlayer ~= nil) then
            continue
          end
          if not (self.connectionsToPlayer[knownPlayer] ~= nil) then
            continue
          end
        end
        if 1 < difficulty then
          -- goto L503  (LOP_JUMP +11)
        end
        -- goto L503  (LOP_JUMP +8)
      end
      -- goto L503  (LOP_JUMP +5)
    end
  else
  end
  if self.wasNetworkError and GS_PLATFORM_PLAYSTATION then
  end
  if self.presenceMode ~= PresenceModes.PRESENCE_MULTIPLAYER then
    -- if v0.presenceMode ~= PresenceModes.PRESENCE_MULTIPLAYER_CROSSPLAY then goto L534 end
  end
  if answer ~= self.presenceMode then
    setPresenceMode(answer)
    self.presenceMode = answer
  elseif self.presenceMode ~= answer then
    difficulty = difficulty:getIsGuiVisible()
    if difficulty then
      difficulty = self:getIsServer()
      -- if not v3 then goto L554 end
    end
    setPresenceMode(answer)
    self.presenceMode = answer
  end
  if GS_PLATFORM_PLAYSTATION and self.missionDynamicInfo.isMultiplayer then
    difficulty = getNetworkError()
    if difficulty then
      -- if v0.wasNetworkError then goto L599 end
      economicDifficulty = string.gsub(difficulty, "Network", "dialog_network")
      self.wasNetworkError = true
      timeScale = timeScale:getText(economicDifficulty)
      ConnectionFailedDialog.show(timeScale, g_connectionFailedDialog.onOkCallback, g_connectionFailedDialog, {g_gui.currentGuiName})
    elseif not difficulty and self.wasNetworkError then
      self.wasNetworkError = false
    end
    economicDifficulty = getMultiplayerAvailability()
    if economicDifficulty == MultiplayerAvailability.NOT_AVAILABLE then
      OnInGameMenuMenu()
    end
  end
  if self.isExitingGame then
    OnInGameMenuMenu()
  end
  if Platform.gameRatingEnabled then
    self:testForGameRating()
  end
  if self.debugVehiclesToBeLoaded ~= nil then
    self:consoleCommandLoadAllVehiclesNext()
  end
end
function FSBaseMission:checkRecordingDeviceState(dt)
  if self.missionDynamicInfo.isMultiplayer and Platform.isStadia then
    self.checkRecordingDeviceTimer = self.checkRecordingDeviceTimer + dt
    if FSBaseMission.RECORDING_DEVICE_CHECK_INTERVAL <= self.checkRecordingDeviceTimer then
      self.checkRecordingDeviceTimer = 0
      local hasDevice = VoiceChatUtil.getHasRecordingDevice()
      if hasDevice ~= self.lastRecordingDeviceState then
        self.lastRecordingDeviceState = hasDevice
        if hasDevice then
          local connectedToDedicatedServer = connectedToDedicatedServer:getText("ui_microphoneDetected")
          self:addIngameNotification(...)
          return
        end
        connectedToDedicatedServer = connectedToDedicatedServer:getText("ui_microphoneRemoved")
        self:addIngameNotification(...)
      end
    end
  end
end
function FSBaseMission.testForGameRating(v0)
  local dt = dt:getIsGuiVisible()
  if dt then
    return
  end
  dt = dt:getIsHelpVisible()
  if dt then
    return
  end
  dt = dt:getIsRunning()
  if dt then
    return
  end
  local answer = g_lifetimeStats:getTotalRuntime()
  if g_lifetimeStats.gameRateMessagesShown < 4 and g_lifetimeStats.gameRateMessagesShown * 3 + 1 > answer then
  end
  if economicDifficulty then
    dt.gameRateMessagesShown = difficulty + 1
    dt:save()
    GameRateDialog.show()
  end
end
function FSBaseMission:updateSaving()
  if self.doSaveGameState ~= SavegameController.SAVE_STATE_NONE then
    if self.doSaveGameState == SavegameController.SAVE_STATE_VALIDATE_LIST then
      local answer = answer:isStorageDeviceUnavailable()
      if answer then
        self.doSaveGameState = SavegameController.SAVE_STATE_VALIDATE_LIST_DIALOG_WAIT
        if g_dedicatedServer == nil then
          g_inGameMenu:notifyValidateSavegameList(self.currentDeviceHasNoSpace, self.onYesNoSavegameSelectDevice, self)
          return
        end
        Logging.error("The device no space to save the game.")
        return
      end
      self.doSaveGameState = SavegameController.SAVE_STATE_OVERWRITE_DIALOG
      return
    end
    if self.doSaveGameState == SavegameController.SAVE_STATE_OVERWRITE_DIALOG then
      local answer, difficulty = saveGetInfoById(self.missionInfo.savegameIndex)
      if answer ~= "" then
        self.doSaveGameState = SavegameController.SAVE_STATE_OVERWRITE_DIALOG_WAIT
        if g_dedicatedServer == nil then
          dt:notifyOverwriteSavegame(self.onYesNoSavegameOverwrite, self)
          return
        end
        self:onYesNoSavegameOverwrite(true)
        return
      end
      self.doSaveGameState = SavegameController.SAVE_STATE_NOP_WRITE
      return
    end
    if self.doSaveGameState == SavegameController.SAVE_STATE_NOP_WRITE then
      self.doSaveGameState = SavegameController.SAVE_STATE_WRITE
      return
    end
    if self.doSaveGameState == SavegameController.SAVE_STATE_WRITE then
      if g_dedicatedServer == nil then
        dt:notifyStartSaving()
      end
      self.doSaveGameState = SavegameController.SAVE_STATE_WRITE_WAIT
      difficulty = getTimeSec()
      self.savingMinEndTime = difficulty + SavegameController.SAVING_DURATION
      self:saveSavegame(self.doSaveGameBlocking)
      return
    end
    if self.doSaveGameState == SavegameController.SAVE_STATE_WRITE_WAIT then
      answer = answer:getIsSaving()
      if not answer then
        answer = answer:getSavingErrorCode()
        if answer ~= Savegame.ERROR_OK then
          if answer == Savegame.ERROR_SAVE_NO_SPACE and not GS_PLATFORM_PLAYSTATION then
            self.currentDeviceHasNoSpace = true
            -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L202
            dt:notifySaveFailedNoSpace(self.onYesNoSavegameSelectDevice, self)
            return
          end
          self.doSaveGameState = SavegameController.SAVE_STATE_NONE
          self.savingMinEndTime = 0
          difficulty:resetStorageDeviceSelection()
          -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L202
          dt:notifySavegameNotSaved()
          return
        end
        self.doSaveGameState = SavegameController.SAVE_STATE_NONE
        if g_dedicatedServer == nil then
          dt:notifySaveComplete()
        end
      end
    end
    return
  end
end
function FSBaseMission:onYesNoSavegameSelectDevice(yes)
  if yes then
    self.doSaveGameState = SavegameController.SAVE_STATE_VALIDATE_LIST_WAIT
    answer:resetStorageDeviceSelection()
    answer:updateSavegames()
    return
  end
  self.doSaveGameState = SavegameController.SAVE_STATE_NONE
  self.savingMinEndTime = 0
  answer:notifySavegameNotSaved()
end
function FSBaseMission:onSaveGameUpdateComplete(errorCode)
  if self.doSaveGameState == SavegameController.SAVE_STATE_VALIDATE_LIST_WAIT then
    if errorCode ~= Savegame.ERROR_OK then
      -- if v1 ~= Savegame.ERROR_DATA_CORRUPT then goto L22 end
    end
    self.currentDeviceHasNoSpace = false
    self.doSaveGameState = SavegameController.SAVE_STATE_OVERWRITE_DIALOG
    return
    self.doSaveGameState = SavegameController.SAVE_STATE_NONE
    answer:resetStorageDeviceSelection()
    answer:notifySavegameNotSaved(errorCode)
  end
end
function FSBaseMission:onYesNoSavegameOverwrite(yes)
  if yes then
    self.doSaveGameState = InGameMenu.SAVE_STATE_NOP_WRITE
    return
  end
  self.doSaveGameState = InGameMenu.SAVE_STATE_NONE
  self.savingMinEndTime = 0
  answer:notifySavegameNotSaved()
end
function FSBaseMission:getSynchronizingPercentage()
  for connectedToDedicatedServer, clientUserId in pairs(self.playersSynchronizing) do
    if clientUserId.densityMapEvent ~= nil then
    end
    if clientUserId.splitShapesEvent ~= nil then
    end
  end
  if 0 < answer then
  end
  difficulty = math.floor(dt * 100)
  return difficulty
end
function FSBaseMission:showPauseDisplay(enableDisplay)
  if enableDisplay then
    local difficulty = difficulty:getText("ui_gamePaused")
    if GS_IS_CONSOLE_VERSION then
      difficulty = self:getIsServer()
      if difficulty then
        if Platform.xoSwap then
          local timeScale = timeScale:getText("ui_continueGame_ps_xo")
        else
          timeScale = timeScale:getText("ui_continueGame")
        end
      end
    end
  end
  if self.hud ~= nil then
    difficulty:onPauseGameChange(enableDisplay, answer)
  end
end
function FSBaseMission:draw()
  dt:draw()
  if self.paused then
    if self.isSynchronizingWithPlayers then
      local answer = self:getIsServer()
      if answer then
        local economicDifficulty = self:getSynchronizingPercentage()
        answer = string.format(...)
      end
      local timeScale = timeScale:getText("ui_synchronizingWithOtherPlayers")
      difficulty:onPauseGameChange(nil, timeScale .. dt)
    end
    local dt = dt:getIsGuiVisible()
    if dt then
      answer = answer:getIsOverlayGuiVisible()
    end
    if dt then
      -- if not v0.isSynchronizingWithPlayers then goto L66 end
    end
    if not self.isMissionStarted then
    end
    answer:drawGamePaused(economicDifficulty)
  end
  if not self.paused and self.introductionHelpSystem ~= nil then
    dt:draw()
  end
  answer = answer:getIsMenuVisible()
  if not answer then
    answer = answer:getIsDialogVisible()
    if answer and not Platform.ui.drawHudOnDialog then
    end
  end
  if self.isRunning then
    if not dt then
      answer = answer:getIsOverlayGuiVisible()
      -- if not v2 then goto L138 end
    end
    answer = answer:getIsFading()
    if not answer then
      answer = answer:getIsVisible()
      if answer then
        answer:drawBaseHUD()
        answer:drawVehicleName()
      end
      answer = answer:getIsRunning()
      if answer then
        answer:draw()
      end
    end
  end
  local difficulty = difficulty:superClass()
  difficulty.draw(self)
  answer = answer:getIsFading()
  if not answer then
    answer:drawInGameMessageAndIcon()
  end
end
function FSBaseMission:addMoneyChange(amount, farmId, moneyType, forceShow)
  local timeScale = self:getIsServer()
  if timeScale then
    if self.moneyChanges[moneyType.id] == nil then
      self.moneyChanges[moneyType.id] = {}
    end
    if self.moneyChanges[moneyType.id][farmId] == nil then
      self.moneyChanges[moneyType.id][farmId] = 0
    end
    timeScale[farmId] = timeScale[farmId] + amount
    local connectedToDedicatedServer = self:getFarmId()
    if connectedToDedicatedServer == farmId then
      connectedToDedicatedServer:addMoneyChange(moneyType, amount)
    end
    -- if not v4 then goto L57 end
    self:broadcastNotifications(moneyType, farmId)
    return
  end
  Logging.error("addMoneyChange() called on client")
  printCallstack()
end
function FSBaseMission:showMoneyChange(moneyType, text, allFarms, farmId)
  local timeScale = self:getIsServer()
  if timeScale then
    if allFarms then
      local connectedToDedicatedServer = connectedToDedicatedServer:getFarms()
      for playerName, knownPlayer in ipairs(...) do
        self:broadcastNotifications(moneyType, knownPlayer.farmId, text)
      end
      return
    end
    if not farmId then
      playerName = playerName:getFarmId()
    end
    self:broadcastNotifications(clientUserId, playerName, text)
    return
  end
  timeScale = timeScale:getServerConnection()
  clientUserId = RequestMoneyChangeEvent.new(moneyType)
  timeScale:sendEvent(...)
end
function FSBaseMission.broadcastNotifications(v0, dt, answer, difficulty)
  if dt == nil then
    printCallstack()
  end
  if g_currentMission.moneyChanges[dt.id] and g_currentMission.moneyChanges[dt.id][answer] then
    local playerName = MoneyChangeEvent.new(g_currentMission.moneyChanges[dt.id][answer], dt, answer, difficulty)
    connectedToDedicatedServer:broadcastEventToFarm(playerName, answer, false)
    local connectedToDedicatedServer = connectedToDedicatedServer:getFarmId()
    if answer == connectedToDedicatedServer then
      if difficulty ~= nil then
        connectedToDedicatedServer = connectedToDedicatedServer:getText(difficulty)
      end
      connectedToDedicatedServer:showMoneyChange(dt, difficulty)
    end
    economicDifficulty[answer] = nil
  end
end
function FSBaseMission:showAttachContext(attachableVehicle)
  local economicDifficulty = self:getVehicleName(attachableVehicle)
  answer:showAttachContext(...)
end
function FSBaseMission:showTipContext(fillTypeIndex)
  local answer = answer:getFillTypeByIndex(fillTypeIndex)
  difficulty:showTipContext(answer.title)
end
function FSBaseMission:showFuelContext(fuelingVehicle)
  local economicDifficulty = self:getVehicleName(fuelingVehicle)
  answer:showFuelContext(...)
end
function FSBaseMission:showFillDogBowlContext(dogName)
  answer:showFillDogBowlContext(dogName)
end
function FSBaseMission:addIngameNotification(notificationType, text)
  difficulty:addSideNotification(notificationType, text)
end
function FSBaseMission.getIsAutoSaveSupported(v0)
  return true
end
function FSBaseMission:doPauseGame()
  local answer = answer:superClass()
  answer.doPauseGame(self)
  dt:setIsGamePaused(true)
  dt:setIsGamePaused(true)
  if self.growthSystem ~= nil then
    dt:setIsGamePaused(true)
  end
end
function FSBaseMission:canUnpauseGame()
  local answer = answer:superClass()
  local dt = answer.canUnpauseGame(self)
  if dt and not self.isSynchronizingWithPlayers and not self.dediEmptyPaused then
  end
  return dt
end
function FSBaseMission:doUnpauseGame()
  local answer = answer:superClass()
  answer.doUnpauseGame(self)
  dt:setIsGamePaused(false)
  dt:setIsGamePaused(false)
  dt:setIsGamePaused(false)
  if g_dedicatedServer ~= nil then
    dt:raiseFramerate()
  end
end
function FSBaseMission.getCanAcceptPlayers(v0)
  local answer = answer:getIsDialogVisible()
  return not answer
end
function FSBaseMission:drawMissionCompleted()
  dt:drawMissionCompleted()
end
function FSBaseMission:drawMissionFailed()
  dt:drawMissionFailed()
end
function FSBaseMission:onEndMissionCallback()
  if self.state ~= BaseMission.STATE_FINISHED then
    -- if v0.state ~= BaseMission.STATE_FAILED then goto L15 end
  end
  self.isExitingGame = true
end
function FSBaseMission:setMissionInfo(missionInfo, missionDynamicInfo)
  resetSplitShapes()
  Logging.info("resetSplitShapes()")
  local timeScale = self:getIsServer()
  setUseKinematicSplitShapes(not timeScale)
  if missionInfo.isValid then
    local economicDifficulty = missionInfo:getIsDensityMapValid(self)
    if economicDifficulty then
    else
      Logging.warning("density map is not valid, ignoring density map from savegame")
    end
    if not GS_IS_MOBILE_VERSION then
      economicDifficulty = missionInfo:getIsTerrainLodTextureValid(self)
      if economicDifficulty then
        economicDifficulty = missionInfo:getIsTerrainLodTextureValid(self)
        if economicDifficulty and g_densityMapHeightManager ~= nil then
          economicDifficulty = economicDifficulty:checkTypeMappings()
          if economicDifficulty then
          end
        end
      end
    end
    setTerrainLoadDirectory(missionInfo.savegameDirectory, difficulty)
  else
    setTerrainLoadDirectory("", TerrainLoadFlags.GAME_DEFAULT)
  end
  local difficulty = missionInfo:getAreSplitShapesValid(self)
  if difficulty then
    economicDifficulty = fileExists(missionInfo.savegameDirectory .. "/splitShapes.gmss")
    -- if not v4 then goto L121 end
    economicDifficulty = loadSplitShapesFromFile(missionInfo.savegameDirectory .. "/splitShapes.gmss")
    -- if v4 then goto L121 end
    Logging.error("Unable to load split shapes from '%s'", missionInfo.savegameDirectory .. "/splitShapes.gmss")
  elseif missionInfo.isValid then
    Logging.warning("splitshapes are not valid, ignoring splitshapes from savegame")
  end
  economicDifficulty = economicDifficulty:superClass()
  economicDifficulty.setMissionInfo(self, missionInfo, missionDynamicInfo)
  if g_soundPlayer ~= nil then
    difficulty:addEventListener(self)
    if not GS_IS_CONSOLE_VERSION and not GS_IS_MOBILE_VERSION then
      difficulty:setStreamingAccessOwner(self)
    end
  end
  self:updateMaxNumHirables()
  timeScale = timeScale:getValue("ingameMapState")
  difficulty:setIngameMapSize(...)
end
function FSBaseMission:updateMaxNumHirables()
  if self.missionDynamicInfo.isMultiplayer then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L45
    local timeScale = timeScale:getNumOfHelpers()
    local difficulty = math.min(...)
    local missionInfo = math.max(...)
    self.maxNumHirables = missionInfo
    return
  end
  difficulty = difficulty:getNumOfHelpers()
  missionInfo = math.min(...)
  self.maxNumHirables = missionInfo
end
function FSBaseMission:addLiquidManureLoadingStation(loadingStation)
  local success = table.addElement(self.liquidManureLoadingStations, loadingStation)
  if not success then
    print("Error: Liquid manure loading station already added")
  end
end
function FSBaseMission:removeLiquidManureLoadingStation(loadingStation)
  table.removeElement(self.liquidManureLoadingStations, loadingStation)
end
function FSBaseMission:addManureLoadingStation(loadingStation)
  local success = table.addElement(self.manureLoadingStations, loadingStation)
  if not success then
    print("Error: Manure loading station already added")
  end
end
function FSBaseMission:removeManureLoadingStation(loadingStation)
  table.removeElement(self.manureLoadingStations, loadingStation)
end
function FSBaseMission:addMoney(amount, farmId, moneyType, addChange, forceShowChange)
  local connectedToDedicatedServer = self:getIsServer()
  if connectedToDedicatedServer then
    if farmId == 0 then
      print("Error: Can't change money of spectator farm")
      printCallstack()
      return
    end
    connectedToDedicatedServer = connectedToDedicatedServer:getFarmById(farmId)
    if connectedToDedicatedServer == nil then
      return
    end
    connectedToDedicatedServer:changeBalance(amount, moneyType)
    -- if not v4 then goto L44 end
    self:addMoneyChange(amount, farmId, moneyType, forceShowChange)
    return
  end
  print("Error: FSBaseMission:addMoney is only allowed on a server")
  printCallstack()
end
function FSBaseMission:addPurchasedMoney(amount)
  local missionDynamicInfo = self:getIsServer()
  if missionDynamicInfo then
    missionDynamicInfo = missionDynamicInfo:getFarmById(FarmManager.SINGLEPLAYER_FARM_ID)
    if missionDynamicInfo == nil then
      return
    end
    missionDynamicInfo:addPurchasedCoins(amount)
    return
  end
  print("Error: FSBaseMission:addPurchasedMoney is only allowed on a server")
  printCallstack()
end
function FSBaseMission:getMoney(farmId)
  if farmId == nil and self.player == nil then
    -- if FarmManager.SINGLEPLAYER_FARM_ID then goto L13 end
  end
  local missionDynamicInfo = missionDynamicInfo:getFarmById(farmId)
  if missionDynamicInfo == nil then
    return 0
  end
  self.cacheFarm = missionDynamicInfo
  return missionDynamicInfo.money
end
function FSBaseMission:setPlayerPermission(userId, permission, allow)
  local economicDifficulty = self:getIsServer()
  if economicDifficulty then
    economicDifficulty = economicDifficulty:getFarmByUserId(userId)
    economicDifficulty.userIdToPlayer[userId].permissions[permission] = allow
  end
end
function FSBaseMission:setPlayerPermissions(userId, permissions)
  local difficulty = self:getIsServer()
  if difficulty then
    difficulty = difficulty:getFarmByUserId(userId)
    for playerName, knownPlayer in ipairs(Farm.PERMISSIONS) do
      if not (permissions[knownPlayer] ~= nil) then
        continue
      end
      economicDifficulty.permissions[knownPlayer] = permissions[knownPlayer]
    end
  end
end
function FSBaseMission:getHasPlayerPermission(permission, connection, farmId, checkClient)
  if checkClient ~= nil then
    -- if v4 then goto L40 end
  end
  local timeScale = self:getIsServer()
  if timeScale then
    if connection ~= nil then
      timeScale = connection:getIsLocal()
      if not timeScale then
        timeScale = connection:getIsServer()
        if not timeScale then
          timeScale = timeScale:getIsConnectionMasterUser(connection)
          -- if not v5 then goto L32 end
        end
      end
    end
    return true
  elseif self.isMasterUser then
    return true
  end
  if connection ~= nil then
    timeScale = connection:getIsServer()
    if timeScale then
      return true
    end
  end
  if connection ~= nil then
    local connectedToDedicatedServer = connectedToDedicatedServer:getUserByConnection(connection)
  else
    connectedToDedicatedServer = connectedToDedicatedServer:getUserByUserId(self.playerUserId)
  end
  local playerName = timeScale:getId()
  connectedToDedicatedServer = connectedToDedicatedServer:getFarmByUserId(...)
  local knownPlayer = timeScale:getId()
  if farmId ~= nil and connectedToDedicatedServer.farmId ~= farmId then
    return false
  end
  if clientUserId == nil then
    return false
  end
  if not clientUserId.isFarmManager then
    playerName = Utils.getNoNil(clientUserId.permissions[permission], false)
  end
  return playerName
end
function FSBaseMission:getTerrainDetailPixelsToSqm()
  return self.terrainSize / self.terrainDetailMapSize * self.terrainSize / self.terrainDetailMapSize
end
function FSBaseMission:getFruitPixelsToSqm()
  return self.terrainSize / self.fruitMapSize * self.terrainSize / self.fruitMapSize
end
function FSBaseMission:getIngameMap()
  return permission:getIngameMap()
end
function FSBaseMission:sendNumPlayersToMasterServer(numPlayers)
  if self.missionDynamicInfo.isMultiplayer then
    if g_dedicatedServer ~= nil then
    end
    masterServerSetServerNumPlayers(numPlayers)
  end
end
function FSBaseMission:sendPlatformSessionIdsToMasterServer(platformSessionIds)
  if self.missionDynamicInfo.isMultiplayer then
    masterServerSetServerPlatformSessionIds(platformSessionIds)
  end
end
function FSBaseMission:setTimeScale(timeScale, noEventSend)
  if timeScale ~= self.missionInfo.timeScale then
    self.missionInfo.timeScale = timeScale
    farmId:publish(MessageType.TIMESCALE_CHANGED)
    SavegameSettingsEvent.sendEvent(noEventSend)
    if g_server ~= nil then
      EnvironmentTimeEvent.broadcastEvent()
    end
  end
end
function FSBaseMission:setTimeScaleMultiplier(timeScaleMultiplier)
  if timeScaleMultiplier ~= self.missionInfo.timeScaleMultiplier then
    self.missionInfo.timeScaleMultiplier = timeScaleMultiplier
    connection:publish(MessageType.TIMESCALE_CHANGED)
  end
end
function FSBaseMission:getEffectiveTimeScale()
  return permission:getEffectiveTimeScale()
end
function FSBaseMission:setEconomicDifficulty(economicDifficulty, noEventSend)
  if economicDifficulty ~= self.missionInfo.economicDifficulty then
    self.missionInfo.economicDifficulty = economicDifficulty
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'economicDifficulty': %s", economicDifficulty)
  end
end
function FSBaseMission:setSnowEnabled(isEnabled, noEventSend)
  if isEnabled ~= self.missionInfo.isSnowEnabled then
    self.missionInfo.isSnowEnabled = isEnabled
    SavegameSettingsEvent.sendEvent(noEventSend)
    if not isEnabled then
      farmId:removeAll()
    end
    Logging.info("Savegame Setting 'snowEnabled': %s", isEnabled)
  end
end
function FSBaseMission:setSavegameName(name, noEventSend)
  if name ~= self.missionInfo.savegameName then
    self.missionInfo.savegameName = name
    SavegameSettingsEvent.sendEvent(noEventSend)
  end
end
function FSBaseMission:startSaveCurrentGame(hiddenUI, blocking)
  self.currentDeviceHasNoSpace = false
  if g_dedicatedServer ~= nil then
    self:saveSavegame(blocking)
  else
    self.doSaveGameState = InGameMenu.SAVE_STATE_WRITE
    self.doSaveGameBlocking = blocking
    farmId:startSavingGameDisplay()
  end
  farmId:saveToXMLFile(g_savegameXML)
end
function FSBaseMission:saveSavegame(blocking)
  local connection = connection:getIsSleeping()
  if not connection then
    if not GS_IS_CONSOLE_VERSION then
      -- if not GS_IS_MOBILE_VERSION then goto L18 end
    end
    self.isSaving = true
    self:pauseGame()
    connection:saveSavegame(self.missionInfo, blocking)
  end
end
function FSBaseMission:setGrowthMode(mode, noEventSend)
  farmId:setGrowthMode(mode, noEventSend)
  farmId:onGrowthModeChanged()
end
function FSBaseMission:setFixedSeasonalVisuals(period, noEventSend)
  if period ~= self.missionInfo.fixedSeasonalVisuals then
    farmId:setFixedPeriod(period)
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'fixedSeasonalVisuals': %s", period)
  end
end
function FSBaseMission:setPlannedDaysPerPeriod(days, noEventSend)
  local farmId = MathUtil.clamp(days, 1, Environment.MAX_DAYS_PER_PERIOD)
  if farmId ~= self.missionInfo.plannedDaysPerPeriod then
    farmId:setPlannedDaysPerPeriod(farmId)
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'plannedDaysPerPeriod': %s", farmId)
  end
end
function FSBaseMission:setFruitDestructionEnabled(isEnabled, noEventSend)
  if isEnabled ~= self.missionInfo.fruitDestruction then
    self.missionInfo.fruitDestruction = isEnabled
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'fruitDesctructionEnabled': %s", isEnabled)
  end
end
function FSBaseMission:setPlowingRequiredEnabled(isEnabled, noEventSend)
  if isEnabled ~= self.missionInfo.plowingRequiredEnabled then
    self.missionInfo.plowingRequiredEnabled = isEnabled
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'plowingRequiredEnabled': %s", isEnabled)
    farmId:onSoilSettingChanged()
  end
end
function FSBaseMission:setStonesEnabled(isEnabled, noEventSend)
  if isEnabled ~= self.missionInfo.stonesEnabled then
    self.missionInfo.stonesEnabled = isEnabled
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'stonesEnabled': %s", isEnabled)
    farmId:onSoilSettingChanged()
  end
end
function FSBaseMission:setLimeRequired(isEnabled, noEventSend)
  if isEnabled ~= self.missionInfo.limeRequired then
    self.missionInfo.limeRequired = isEnabled
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'limeRequired': %s", isEnabled)
    farmId:onSoilSettingChanged()
  end
end
function FSBaseMission:setWeedsEnabled(isEnabled, noEventSend)
  if isEnabled ~= self.missionInfo.weedsEnabled then
    self.missionInfo.weedsEnabled = isEnabled
    farmId:onWeedGrowthChanged()
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'weedsEnabled': %s", isEnabled)
    farmId:onSoilSettingChanged()
  end
end
function FSBaseMission:setStopAndGoBraking(isEnabled, noEventSend)
  if isEnabled ~= self.missionInfo.stopAndGoBraking then
    self.missionInfo.stopAndGoBraking = isEnabled
    SavegameSettingsEvent.sendEvent(noEventSend)
  end
end
function FSBaseMission:setTrailerFillLimit(isEnabled, noEventSend)
  if isEnabled ~= self.missionInfo.trailerFillLimit then
    self.missionInfo.trailerFillLimit = isEnabled
    SavegameSettingsEvent.sendEvent(noEventSend)
  end
end
function FSBaseMission.setAutoSaveInterval(v0, permission, connection)
  local farmId = farmId:getInterval()
  if permission ~= farmId then
    farmId:setInterval(permission)
    SavegameSettingsEvent.sendEvent(connection)
  end
end
function FSBaseMission:setTrafficEnabled(isEnabled, noEventSend)
  if isEnabled ~= self.missionInfo.trafficEnabled then
    self.missionInfo.trafficEnabled = isEnabled
    SavegameSettingsEvent.sendEvent(noEventSend)
    if self.trafficSystem ~= nil then
      farmId:setEnabled(self.missionInfo.trafficEnabled)
      if not self.missionInfo.trafficEnabled then
        farmId:reset()
      end
    end
  end
end
function FSBaseMission:setDirtInterval(dirtInterval, noEventSend)
  if dirtInterval ~= self.missionInfo.dirtInterval then
    self.missionInfo.dirtInterval = dirtInterval
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'dirtInterval': %d", dirtInterval)
  end
end
function FSBaseMission:setFuelUsage(fuelUsage, noEventSend)
  if fuelUsage ~= self.missionInfo.fuelUsage then
    self.missionInfo.fuelUsage = fuelUsage
    SavegameSettingsEvent.sendEvent(noEventSend)
    Logging.info("Savegame Setting 'fuelUsage': %d", fuelUsage)
  end
end
function FSBaseMission:setHelperBuyFuel(helperBuyFuel, noEventSend)
  if helperBuyFuel ~= self.missionInfo.helperBuyFuel then
    self.missionInfo.helperBuyFuel = helperBuyFuel
    SavegameSettingsEvent.sendEvent(noEventSend)
  end
end
function FSBaseMission:setHelperBuySeeds(helperBuySeeds, noEventSend)
  if helperBuySeeds ~= self.missionInfo.helperBuySeeds then
    self.missionInfo.helperBuySeeds = helperBuySeeds
    SavegameSettingsEvent.sendEvent(noEventSend)
  end
end
function FSBaseMission:setHelperBuyFertilizer(helperBuyFertilizer, noEventSend)
  if helperBuyFertilizer ~= self.missionInfo.helperBuyFertilizer then
    self.missionInfo.helperBuyFertilizer = helperBuyFertilizer
    SavegameSettingsEvent.sendEvent(noEventSend)
  end
end
function FSBaseMission:setHelperSlurrySource(helperSlurrySource, noEventSend)
  if helperSlurrySource ~= self.missionInfo.helperSlurrySource then
    self.missionInfo.helperSlurrySource = helperSlurrySource
    SavegameSettingsEvent.sendEvent(noEventSend)
  end
end
function FSBaseMission:setHelperManureSource(helperManureSource, noEventSend)
  if helperManureSource ~= self.missionInfo.helperManureSource then
    self.missionInfo.helperManureSource = helperManureSource
    SavegameSettingsEvent.sendEvent(noEventSend)
  end
end
function FSBaseMission:setAutomaticMotorStartEnabled(isEnabled, noEventSend)
  if isEnabled ~= self.missionInfo.automaticMotorStartEnabled then
    self.missionInfo.automaticMotorStartEnabled = isEnabled
    SavegameSettingsEvent.sendEvent(noEventSend)
  end
end
function FSBaseMission.addKnownSplitShape(v0, permission)
end
function FSBaseMission.removeKnownSplitShape(v0, permission)
end
function FSBaseMission:getDoghouse(farmId)
  for timeScale, connectedToDedicatedServer in pairs(self.doghouses) do
    local clientUserId = connectedToDedicatedServer:getOwnerFarmId()
    if not (clientUserId == farmId) then
      continue
    end
    return connectedToDedicatedServer
  end
  return nil
end
function FSBaseMission.onDayChanged(v0)
end
function FSBaseMission:onHourChanged()
  local permission = self:getIsServer()
  if permission then
    self:showMoneyChange(MoneyType.AI, nil, true)
  end
end
function FSBaseMission.onMinuteChanged(v0)
end
function FSBaseMission:onLeaveVehicle(playerTargetPosX, playerTargetPosY, playerTargetPosZ, isAbsolute, isRootNode)
  local clientUserId = clientUserId:superClass()
  clientUserId.onLeaveVehicle(self, playerTargetPosX, playerTargetPosY, playerTargetPosZ, isAbsolute, isRootNode)
  local connectedToDedicatedServer = connectedToDedicatedServer:getValue("radioVehicleOnly")
  if connectedToDedicatedServer then
    self:pauseRadio()
  end
end
function FSBaseMission:pauseRadio()
  if g_soundPlayer ~= nil then
    self:setRadioActionEventsState(false)
    if self.hud ~= nil then
      permission:hideTopNotification()
    end
    permission:pause()
  end
end
function FSBaseMission:playRadio()
  if g_soundPlayer ~= nil then
    local permission = permission:getValue(GameSettings.SETTING.RADIO_IS_ACTIVE)
    if permission then
      permission = permission:play()
      self:setRadioActionEventsState(permission)
    end
  end
end
function FSBaseMission.getIsRadioPlaying(v0)
  if g_soundPlayer ~= nil then
    return permission:getIsPlaying()
  end
  return false
end
function FSBaseMission:onSoundPlayerChange(channelName, itemName, isOnlineStream, iconFilename)
  if not GS_IS_MOBILE_VERSION then
    if isOnlineStream then
      local clientUserId = clientUserId:getText("ui_radioRating")
    end
    local knownPlayer = string.upper(channelName)
    local v10 = string.upper(itemName)
    self:addGameNotification(knownPlayer, v10, timeScale, connectedToDedicatedServer, 4000, self.radioNotification, iconFilename)
  end
  timeScale:publish(MessageType.RADIO_CHANNEL_CHANGE, channelName, itemName, isOnlineStream)
end
function FSBaseMission:onSoundPlayerStreamAccess()
  local permission = permission:getValue("isSoundPlayerStreamAccessAllowed")
  if permission then
    self:onStreamAccessAllowed(true)
    return
  end
  local playerName = playerName:getText("ui_radioRating")
  local clientUserId = clientUserId:getText("ui_continueQuestion")
  YesNoDialog.show(self.onStreamAccessAllowed, self, playerName .. "\n\n" .. clientUserId)
end
function FSBaseMission.onStreamAccessAllowed(v0, permission)
  if g_soundPlayer ~= nil then
    if permission then
      connection:setValue("isSoundPlayerStreamAccessAllowed", true, true)
    end
    connection:setStreamAccessAllowed(permission)
  end
end
function FSBaseMission.setRadioVolume(v0, permission)
  local timeScale = MathUtil.clamp(permission, 0, 1)
  connection:setValue(...)
  timeScale = timeScale:getValue(GameSettings.SETTING.VOLUME_RADIO)
  connection:setAudioGroupVolumeFactor(...)
end
function FSBaseMission.setVehicleVolume(v0, permission)
  local timeScale = MathUtil.clamp(permission, 0, 1)
  connection:setValue(...)
  timeScale = timeScale:getValue(GameSettings.SETTING.VOLUME_VEHICLE)
  connection:setAudioGroupVolumeFactor(...)
end
function FSBaseMission.setEnvironmentVolume(v0, permission)
  local timeScale = MathUtil.clamp(permission, 0, 1)
  connection:setValue(...)
  timeScale = timeScale:getValue(GameSettings.SETTING.VOLUME_ENVIRONMENT)
  connection:setAudioGroupVolumeFactor(...)
end
function FSBaseMission.setGUIVolume(v0, permission)
  local timeScale = MathUtil.clamp(permission, 0, 1)
  connection:setValue(...)
  timeScale = timeScale:getValue(GameSettings.SETTING.VOLUME_GUI)
  connection:setAudioGroupVolumeFactor(...)
end
function FSBaseMission.getVehicleName(v0, permission)
  local connection = permission:getFullName()
  return utf8ToUpper(connection)
end
function FSBaseMission:onEnterVehicle(vehicle, playerStyle, farmId, userId)
  local connectedToDedicatedServer = connectedToDedicatedServer:superClass()
  connectedToDedicatedServer.onEnterVehicle(self, vehicle, playerStyle, farmId, userId)
  if g_soundPlayer ~= nil then
    local timeScale = self:getIsRadioPlaying()
    if not timeScale then
      -- if not v1.supportsRadio then goto L42 end
      self:playRadio()
    elseif not vehicle.supportsRadio then
      timeScale = timeScale:getValue(GameSettings.SETTING.RADIO_VEHICLE_ONLY)
      if timeScale then
        self:pauseRadio()
      end
    end
  end
  timeScale = self:getVehicleName(vehicle)
  self.currentVehicleName = timeScale
  timeScale:showVehicleName(self.currentVehicleName)
end
function FSBaseMission:setMoneyUnit(unit)
  local farmId = farmId:superClass()
  farmId.setMoneyUnit(self, unit)
  playerStyle:setMoneyUnit(unit)
end
function FSBaseMission.teleportVehicle(v0, vehicle, playerStyle, farmId, userId)
  function(self)
    local vehicle, playerStyle, farmId = getWorldTranslation(self.rootNode)
    local userId, timeScale, connectedToDedicatedServer = getWorldRotation(self.rootNode)
    local clientUserId, playerName, knownPlayer = worldToLocal(u0.rootNode, vehicle, playerStyle, farmId)
    local v10, v11, v12 = worldRotationToLocal(u0.rootNode, userId, timeScale, connectedToDedicatedServer)
    table.insert(u1, {vehicle = self, offset = {clientUserId, playerName, knownPlayer}, rotationOffset = {v10, v11, v12}})
    if self.getAttachedImplements ~= nil then
      local v14 = self:getAttachedImplements()
      for v18, v19 in ipairs(v14) do
        local v20 = v20:getIsAdditionalAttachment()
        if not not v20 then
          continue
        end
        u2(v19.object)
        table.insert(u3, v19.object)
        local v23 = v23:getActiveInputAttacherJointDescIndex()
        table.insert(u4, {vehicle = self, object = v19.object, jointDescIndex = v19.jointDescIndex, inputAttacherJointDescIndex = v23})
      end
    end
  end(vehicle)
  for v12, v13 in ipairs({}) do
    local v14 = v13:getAttacherVehicle()
    if not (v14 ~= nil) then
      continue
    end
    v14:detachImplementByObject(v13)
  end
  for v12, v13 in pairs(connectedToDedicatedServer) do
    v14:removeFromPhysics()
  end
  for v12, v13 in pairs(connectedToDedicatedServer) do
    if 1 < v12 then
      local v22 = unpack(v13.offset)
      local v20, v21, v22 = localToWorld(...)
      v22 = unpack(v13.rotationOffset)
      v20, v21, v22 = localRotationToWorld(...)
    end
    v20 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v14, 300, v15)
    v21:setAbsolutePosition(v14, v20 + 0.5, v15, v17, v18, v19)
  end
  for v12, v13 in pairs(connectedToDedicatedServer) do
    v14:addToPhysics()
  end
  for v12, v13 in pairs(timeScale) do
    v14:attachImplement(v13.object, v13.inputAttacherJointDescIndex, v13.jointDescIndex, true)
  end
end
function FSBaseMission:consoleCommandCheatMoney(amount)
  local farmId = Utils.getNoNil(amount, 10000000)
  local playerStyle = tonumber(...)
  farmId = self:getIsServer()
  if not farmId then
    -- if not v0.isMasterUser then goto L53 end
  end
  farmId = self:getIsServer()
  if farmId then
    self:addMoney(amount, playerStyle, MoneyType.OTHER, true, true)
  else
    farmId = farmId:getServerConnection()
    local timeScale = CheatMoneyEvent.new(amount, playerStyle)
    farmId:sendEvent(...)
  end
  farmId = string.format("Added money %d. Use 'gsMoneyAdd <amount>' to add or remove a custom amount", amount)
  return farmId
  return "gsMoneyAdd is only available for server and/or admins"
end
function FSBaseMission.consoleCommandExportStoreItems(v0)
  local userId = getUserProfileAppPath()
  local playerStyle = playerStyle:getSpecTypes()
  local farmId = io.open(userId .. "storeItems.csv", "w")
  if farmId ~= nil then
    for playerName, knownPlayer in pairs(playerStyle) do
    end
    farmId:write(userId .. "\n")
    timeScale = timeScale:getItems()
    for knownPlayer, v10 in pairs(timeScale) do
      local v11 = v11:getBrandByIndex(v10.brandIndex)
      if v10.brush ~= nil then
      end
      local v15 = string.format("%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;", v10.xmlFilename, v10.categoryName, v11.name, v11.title, v10.name, v10.price, v10.lifetime, v10.dailyUpkeep, v10.showInStore, v12, v13, v14)
      StoreItemUtil.loadSpecsFromXML(v10)
      for v19, v20 in pairs(playerStyle) do
        if v20.species == v10.species then
          local v22 = v20.getValueFunc(v10, nil)
        end
        if v21 ~= nil then
          v22 = type(v21)
          -- cmp-jump LOP_JUMPXEQKS R22 aux=0x8000002c -> L134
        end
        if v20.name == "placeableSlots" then
          v22 = string.gsub("", " %$SLOTS%$", "")
        end
        local v26 = tostring(v21)
        local v25 = string.trim(...)
      end
      farmId:write(v15 .. "\n")
    end
    printf("Exported %i store items to '%s'", #timeScale, vehicle)
    farmId:close()
    return
  end
  printf("Error: Unable to create csv file '%s'", vehicle)
end
function FSBaseMission:consoleCommandExportVehicleSets()
  for timeScale, connectedToDedicatedServer in ipairs(self.vehicles) do
    local clientUserId = connectedToDedicatedServer:getRootVehicle()
    if not (clientUserId ~= nil) then
      continue
    end
    vehicle[clientUserId] = clientUserId
  end
  setFileLogPrefixTimestamp(false)
  for connectedToDedicatedServer, clientUserId in pairs(vehicle) do
    local xmlFile = loadXMLFileFromMemory("vehicleSets", "<vehicleSets></vehicleSets>")
    local knownPlayer = string.format("vehicleSets.vehicleSet(%d)", 0)
    local v10 = clientUserId:getChildVehicles()
    -- TODO: structure LOP_FORNPREP (pc 45, target 62)
    local v17 = string.format("%s.vehicle(%d)", knownPlayer, 0)
    playerStyle(xmlFile, v17, v10[#v10], clientUserId)
    {}[v10[#v10]] = 0 + 1
    -- TODO: structure LOP_FORNLOOP (pc 61, target 46)
    -- TODO: structure LOP_FORNPREP (pc 66, target 129)
    if v10[#v10].getAttacherVehicle ~= nil then
      local v19 = v10[#v10]:getAttacherVehicle()
    end
    if v18 ~= nil then
      v19 = string.format("%s.attach(%d)", knownPlayer, v13)
      local v22 = v18:getImplementByObject(v17)
      local v23 = v17:getActiveInputAttacherJointDescIndex()
      setXMLInt(xmlFile, v19 .. "#element0", v12[v18])
      setXMLInt(xmlFile, v19 .. "#element1", v12[v17])
      setXMLInt(xmlFile, v19 .. "#attacherJointIndex", v22.jointDescIndex)
      setXMLInt(xmlFile, v19 .. "#inputAttacherJointIndex", v23)
    end
    -- TODO: structure LOP_FORNLOOP (pc 128, target 67)
    local xmlString = saveXMLFileToMemory(xmlFile)
    print(xmlString)
    delete(xmlFile)
  end
  setFileLogPrefixTimestamp(g_logFilePrefixTimestamp)
end
function FSBaseMission:consoleStartGreatDemand()
  for userId, timeScale in pairs(self.economyManager.greatDemands) do
    connectedToDedicatedServer:stopGreatDemand(timeScale)
  end
  for userId, timeScale in pairs(self.economyManager.greatDemands) do
    timeScale:setUpRandomDemand(true, self.economyManager.greatDemands, self)
    timeScale.demandStart.day = g_currentMission.environment.currentDay
    timeScale.demandStart.hour = g_currentMission.environment.currentHour + 1
  end
  return "Great demand starts in the next hour..."
end
function FSBaseMission:consoleCommandReloadVehicle(resetVehicle, radius)
  if g_gui.currentGuiName ~= "ShopMenu" then
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000004 -> L10
  end
  return "Error: Reload not supported while in shop!"
  if self.isReloadingVehicles then
    return "Error: Reloading of vehicles already in progress!"
  end
  local farmId = self:getIsServer()
  if farmId and not self.missionDynamicInfo.isMultiplayer then
    self.isReloadingVehicles = true
    if self.controlledVehicle == nil then
      -- if not v0.controlPlayer then goto L216 end
    end
    farmId = Utils.stringToBoolean(resetVehicle)
    farmId = tonumber(radius)
    if self.controlledVehicle ~= nil then
      local connectedToDedicatedServer, clientUserId, playerName = getWorldTranslation(self.controlledVehicle.rootNode)
    elseif self.controlPlayer then
      connectedToDedicatedServer, clientUserId, playerName = getWorldTranslation(self.player.rootNode)
    end
    connectedToDedicatedServer:reloadSoundTemplates()
    if self.controlledVehicle ~= nil then
      function(self, resetVehicle)
        if self.isVehicleSaved then
          self:removeFromPhysics()
          self.isReconfigurating = true
          table.insert(resetVehicle, self)
          u0[self] = true
          -- cmp-jump LOP_JUMPXEQKNIL R0 aux=0x0 -> L46
          -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L46
          local radius = self:getAttachedImplements()
          for connectedToDedicatedServer, clientUserId in pairs(radius) do
            u1(clientUserId.object, resetVehicle)
          end
          return
        end
        radius:removeVehicle(self)
      end(self.controlledVehicle, {})
    end
    if radius ~= 0 then
      for v13, v14 in pairs(self.vehicles) do
        if not (v14 ~= self.controlledVehicle) then
          continue
        end
        local v15, v16, v17 = getWorldTranslation(v14.rootNode)
        local v18 = MathUtil.vector3Length(v15 - farmId, v16 - userId, v17 - timeScale)
        if not (v18 < radius) then
          continue
        end
        if not (clientUserId[v14.rootVehicle] == nil) then
          continue
        end
        knownPlayer(v14.rootVehicle, connectedToDedicatedServer)
      end
    end
    if #connectedToDedicatedServer == 0 then
      return "Warning: No vehicle reloaded. Enter a vehicle first or use the command with the radius parameter given, e.g. 'gsVehicleReload false 25'\n" .. "Usage: gsVehicleReload [resetVehicle] [radius]"
    end
    simulatePhysics(false)
    v10 = XMLFile.create("vehicleXMLFile", "", "vehicles", Vehicle.xmlSchemaSavegame)
    VehicleLoadingUtil.setSaveIds(connectedToDedicatedServer)
    v11 = VehicleLoadingUtil.saveVehiclesToSavegameXML(v10, "vehicles", connectedToDedicatedServer, playerName)
    v13:clearEntireSharedI3DFileCache(false)
    while true do
      v18 = string.format("vehicles.vehicle(%d)", v17 - 1)
      v19 = v10:hasProperty(v18)
      if not v19 then
        break
      end
      VehicleLoadingUtil.loadVehicleFromSavegameXML(v10, v18, resetVehicle, true, nil, resetVehicle, v16, nil, {})
    end
    return
    return
  end
end
function FSBaseMission:consoleCommandLoadTree(length, treeType, growthState, delimb)
  if self.controlPlayer then
    -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L87
    -- if not v0.player.isControlled then goto L87 end
    -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L87
    -- cmp-jump LOP_JUMPXEQKN R11 aux=0x4 -> L87
    local v11, v12, v13 = getWorldTranslation(self.player.rootNode)
    v11 = math.sin(self.player.rotY)
    v11 = math.cos(self.player.rotY)
  elseif self.controlledVehicle ~= nil then
    v11, v12, v13 = getWorldTranslation(self.controlledVehicle.rootNode)
    v11, v12, v13 = localDirectionToWorld(self.controlledVehicle.rootNode, 0, 0, 1)
  end
  if Platform.isMobile then
    v11 = tonumber(length)
    if v11 == nil then
      return "No amount given. (gsTreeAdd amount)"
    end
    local v18 = MathUtil.getYRotationFromDirection(playerName, v10)
    local v21 = self:getFarmId()
    WoodHarvesterLight.spawnLogs(...)
    return "Spawned log(s)"
  end
  v11 = tonumber(length)
  local v15 = table.concatKeys(g_treePlantManager.nameToTreeType, " ")
  if v11 == nil then
    return "No length given. " .. "gsTreeAdd length [type (available: " .. v15 .. ")] [growthState] [delimb true/false]"
  end
  if treeType == nil then
  end
  v12 = v12:getTreeTypeDescFromName(treeType)
  if v12 == nil then
    return "Invalid tree type. " .. v11
  end
  local v14 = tonumber(growthState)
  v15 = table.getn(v12.treeFilenames)
  v13 = Utils.getNoNil(...)
  v13 = v13:lower()
  if v13 ~= "true" then
  end
  v13:loadTreeTrunk(v12, timeScale, connectedToDedicatedServer, clientUserId, playerName, knownPlayer, v10, length, growthState, true)
  return "Loaded tree"
end
function FSBaseMission:consoleCommandTeleport(fieldIdOrX, zPos, useWorldCoords)
  local radioEventsActive = tonumber(fieldIdOrX)
  radioEventsActive = tonumber(zPos)
  radioEventsActive = Utils.stringToBoolean(useWorldCoords)
  if radioEventsActive == nil then
    return "Error: Invalid field or x-position\n" .. "Usage: gsTeleport xPos|field [zPos] [useWorldCoords]\n  if zPos is not given first parameter is used as field id.\n  set useWorldCoords to true if given coordinates are in 3D/world (0 0 = map center) instead of minimap (0 0 = map corner) space."
  end
  if zPos == nil then
    local connectedToDedicatedServer = connectedToDedicatedServer:getFieldByIndex(fieldIdOrX)
    if connectedToDedicatedServer ~= nil then
      -- goto L70  (LOP_JUMP +32)
    end
    return string.format("Error: Invalid field id '%s'\n%s", fieldIdOrX, "Usage: gsTeleport xPos|field [zPos] [useWorldCoords]\n  if zPos is not given first parameter is used as field id.\n  set useWorldCoords to true if given coordinates are in 3D/world (0 0 = map center) instead of minimap (0 0 = map corner) space.")
  elseif not useWorldCoords then
    local playerName = MathUtil.clamp(fieldIdOrX, 0, self.terrainSize)
    playerName = MathUtil.clamp(zPos, 0, self.terrainSize)
  else
  end
  if self.controlledVehicle == nil then
    connectedToDedicatedServer:moveTo(radioEventsActive, 0.5, timeScale, false, false)
  else
    self.isTeleporting = true
    connectedToDedicatedServer, clientUserId, playerName = getWorldRotation(self.controlledVehicle.rootNode)
    self:teleportVehicle(self.controlledVehicle, radioEventsActive, timeScale, clientUserId)
    self.isTeleporting = false
  end
  connectedToDedicatedServer = string.format("Teleported to world coordinates x=%d z=%d", radioEventsActive, timeScale)
  return connectedToDedicatedServer
end
function FSBaseMission:consoleCommandAddDirtAmount(amount)
  local zPos = self:getIsServer()
  if zPos then
    local useWorldCoords = tonumber(amount)
    zPos = Utils.getNoNil(useWorldCoords, 0)
    if self.controlledVehicle ~= nil then
      for timeScale, connectedToDedicatedServer in pairs(self.vehicles) do
        local clientUserId = connectedToDedicatedServer:getIsActive()
        if not clientUserId then
          continue
        end
        if not (connectedToDedicatedServer.addDirtAmount ~= nil) then
          continue
        end
        connectedToDedicatedServer:addDirtAmount(amount)
      end
      zPos = string.format("Added dirt to vehicles (Amount: %.2f)", amount)
      return zPos
    end
    return "Error: Enter a vehicle first!"
  end
  return "Error: Not available on clients"
end
function FSBaseMission:consoleCommandAddWearAmount(amount)
  local zPos = self:getIsServer()
  if zPos then
    local useWorldCoords = tonumber(amount)
    zPos = Utils.getNoNil(useWorldCoords, 0)
    if self.controlledVehicle ~= nil then
      for timeScale, connectedToDedicatedServer in pairs(self.vehicles) do
        local clientUserId = connectedToDedicatedServer:getIsActive()
        if not clientUserId then
          continue
        end
        if not (connectedToDedicatedServer.addWearAmount ~= nil) then
          continue
        end
        connectedToDedicatedServer:addWearAmount(amount)
      end
      zPos = string.format("Added wear to vehicles (Amount: %.2f)", amount)
      return zPos
    end
    return "Error: Enter a vehicle first!"
  end
  return "Error: Not available on clients"
end
function FSBaseMission:consoleCommandAddDamageAmount(amount)
  local zPos = self:getIsServer()
  if zPos then
    local useWorldCoords = tonumber(amount)
    zPos = Utils.getNoNil(useWorldCoords, 0)
    if self.controlledVehicle ~= nil then
      for timeScale, connectedToDedicatedServer in pairs(self.vehicles) do
        local clientUserId = connectedToDedicatedServer:getIsActive()
        if not clientUserId then
          continue
        end
        if not (connectedToDedicatedServer.addDamageAmount ~= nil) then
          continue
        end
        connectedToDedicatedServer:addDamageAmount(amount)
      end
      zPos = string.format("Added damage to vehicles (Amount: %.2f)", amount)
      return zPos
    end
    return "Error: Enter a vehicle first!"
  end
  return "Error: Not available on clients"
end
function FSBaseMission:consoleCommandLoadAllVehicles(loadConfigs, modsOnly, palletsOnly, verbose)
  local timeScale = self:getIsServer()
  if not timeScale and self.missionDynamicInfo.isMultiplayer then
    return "Error: Command not allowed in multiplayer"
  end
  if self.debugVehiclesToBeLoaded ~= nil then
    return "Error: Loading task is currently running!"
  end
  timeScale = string.lower(loadConfigs or "false")
  if timeScale ~= "true" then
  end
  timeScale = string.lower(modsOnly or "false")
  if timeScale ~= "true" then
  end
  timeScale = string.lower(palletsOnly or "false")
  if timeScale ~= "true" then
  end
  timeScale = string.lower(verbose or "false")
  if timeScale ~= "true" then
  end
  self.debugVehiclesToBeLoaded = {}
  self.debugVehiclesToBeLoadedStartTime = g_time
  I3DManager.VERBOSE_LOADING = true
  if not palletsOnly then
    local clientUserId = clientUserId:getItems()
    for knownPlayer, v10 in pairs(...) do
      local v11 = StoreItemUtil.getIsVehicle(v10)
      if not v11 then
        continue
      end
      if modsOnly and not v10.isMod then
        continue
      end
      table.insert(self.debugVehiclesToBeLoaded, {storeItem = v10, configurations = {}})
      if not loadConfigs then
        continue
      end
      if v10.configurations ~= nil then
        for v14, v15 in pairs(v10.configurations) do
          if not (1 < #v15) then
            continue
          end
          -- TODO: structure LOP_FORNPREP (pc 117, target 129)
          if v10.configurationSets[1].configurations[v14] ~= nil then
          else
            -- TODO: structure LOP_FORNLOOP (pc 128, target 118)
          end
          if not not v16 then
            continue
          end
          for v20, v21 in ipairs(v15) do
            {}[v14] = v20
            table.insert(self.debugVehiclesToBeLoaded, {storeItem = v10, configurations = {}})
          end
        end
      end
      -- TODO: structure LOP_FORNPREP (pc 159, target 187)
      for v19, v20 in pairs(v10.configurationSets[1].configurations) do
        v15[v19] = v20
      end
      table.insert(self.debugVehiclesToBeLoaded, {storeItem = v10, configurations = v15})
      -- TODO: structure LOP_FORNLOOP (pc 186, target 160)
    end
  else
    clientUserId = clientUserId:getFillTypes()
    for knownPlayer, v10 in pairs(...) do
      if not (v10.palletFilename ~= nil) then
        continue
      end
      v11 = v11:getItemByXMLFilename(v10.palletFilename)
      table.insert(self.debugVehiclesToBeLoaded, {storeItem = v11, configurations = {}})
    end
  end
  if modsOnly then
  else
  end
  if loadConfigs then
    playerName = string.format("Loading %i %svehicles with all configs...", timeScale, connectedToDedicatedServer)
    clientUserId = print(...)
    return clientUserId
  end
  playerName = string.format("Loading %i %svehicles (add first param 'true' to include configs, add second param 'true' to only load mods, add third param 'true' to only load pallets, add fourth param 'verbose' to print i3d loading messages)...", timeScale, connectedToDedicatedServer)
  clientUserId = print(...)
  return clientUserId
end
function FSBaseMission:consoleCommandLoadAllVehiclesNext()
  if self.debugVehiclesToBeLoaded == nil then
    return
  end
  if self.debugVehiclesLoadingCount ~= nil and 0 < self.debugVehiclesLoadingCount then
    return
  end
  if self.debugVehiclesLoaded ~= nil then
    for radioEventsActive, timeScale in pairs(self.debugVehiclesLoaded) do
      if not not timeScale.isDeleted then
        continue
      end
      connectedToDedicatedServer:removeVehicle(timeScale)
    end
    self.debugVehiclesLoaded = nil
  end
  fieldIdOrX = table.remove(self.debugVehiclesToBeLoaded, 1)
  if fieldIdOrX == nil then
    radioEventsActive = string.format("Successfully loaded and removed all vehicles in %.1f seconds!", (g_time - self.debugVehiclesToBeLoadedStartTime) / 1000)
    print(...)
    self.debugVehiclesToBeLoaded = nil
    self.debugVehiclesLoadingCount = nil
    self.debugVehiclesLoaded = nil
    I3DManager.VERBOSE_LOADING = true
    return
  end
  log(#self.debugVehiclesToBeLoaded, fieldIdOrX.storeItem.xmlFilename)
  if fieldIdOrX.storeItem.bundleInfo ~= nil then
    for clientUserId, playerName in pairs(fieldIdOrX.storeItem.bundleInfo.bundleItems) do
      table.insert(useWorldCoords, {xmlFilename = playerName.xmlFilename})
    end
  else
    table.insert({}, {xmlFilename = fieldIdOrX.storeItem.xmlFilename})
  end
  self.debugVehiclesLoadingCount = #useWorldCoords
  self.debugVehiclesLoaded = {}
  for playerName, knownPlayer in pairs(useWorldCoords) do
    VehicleLoadingUtil.loadVehicle(knownPlayer.xmlFilename, {x = 0, z = 0, yOffset = 0}, true, 0, Vehicle.PROPERTY_STATE_OWNED, AccessHandler.EVERYONE, fieldIdOrX.configurations, nil, radioEventsActive, nil)
  end
end
function FSBaseMission:consoleCommandFillUnitAdd(fillUnitIndex, fillTypeName, amount)
  if self.controlledVehicle ~= nil and self.controlledVehicle.getSelectedObject ~= nil then
    local timeScale = timeScale:getSelectedObject()
    if timeScale ~= nil and timeScale.vehicle.addFillUnitFillLevel ~= nil then
    end
  end
  if radioEventsActive == nil and self.controlledVehicle ~= nil and self.controlledVehicle.addFillUnitFillLevel ~= nil then
  end
  if radioEventsActive == nil and self.player ~= nil and self.player.isControlled and self.player.lastFoundAnyObject ~= nil and g_currentMission.nodeToObject[self.player.lastFoundAnyObject] ~= nil then
    local connectedToDedicatedServer = g_currentMission.nodeToObject[self.player.lastFoundAnyObject]:isa(Vehicle)
    if connectedToDedicatedServer and g_currentMission.nodeToObject[self.player.lastFoundAnyObject].addFillUnitFillLevel ~= nil then
    end
  end
  timeScale = self:getFarmId()
  if radioEventsActive ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L89
  end
  return "'Error: could not find a fillable vehicle!"
  if fillUnitIndex ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L100
  end
  return "Error: Missing parameters.\n" .. "Usage: 'gsFillUnitAdd <fillUnitIndex> <fillTypeName> [amount]'"
  local clientUserId = self:getIsServer()
  if not clientUserId then
    return "Error: 'gsFillUnitAdd' can only be called on server side!"
  end
  clientUserId = tonumber(fillUnitIndex)
  clientUserId = clientUserId:getFillTypeIndexByName(fillTypeName)
  local playerName = tonumber(amount)
  if clientUserId == nil then
    return "Error: Missing fillUnitIndex!\n" .. "Usage: 'gsFillUnitAdd <fillUnitIndex> <fillTypeName> [amount]'"
  end
  playerName = radioEventsActive:getFillUnitExists(fillUnitIndex)
  if not playerName then
    local v11 = radioEventsActive:getName()
    local v12 = connectedToDedicatedServer()
    playerName = string.format("Error: FillUnit '%d' in '%s' does not exist!\n%s", fillUnitIndex, v11, v12)
    return playerName
  end
  if clientUserId == nil then
    v11 = connectedToDedicatedServer()
    playerName = string.format("Error: Unknown fillType '%s'!\n%s", fillTypeName, v11)
    return playerName
  end
  playerName = radioEventsActive:getFillUnitCapacity(fillUnitIndex)
  if playerName == 0 then
    v11 = radioEventsActive:getName()
    return string.format(...)
  end
  knownPlayer = radioEventsActive:getFillUnitSupportsFillType(fillUnitIndex, clientUserId)
  if not knownPlayer then
    local v13 = radioEventsActive:getName()
    local v15 = connectedToDedicatedServer()
    return string.format("Error: fillUnit '%d' in '%s' does not support fillType '%s'\n%s", fillUnitIndex, v13, fillTypeName, v15)
  end
  if (amount or playerName) == 0 then
  end
  radioEventsActive:addFillUnitFillLevel(timeScale, fillUnitIndex, amount, clientUserId, ToolType.UNDEFINED)
  v10 = radioEventsActive:getFillUnitFillLevel(fillUnitIndex)
  v11 = radioEventsActive:getFillUnitFillType(fillUnitIndex)
  v12 = v12:getFillTypeNameByIndex(v11)
  v11 = Utils.getNoNil(v12, "unknown")
  v11 = string.format("new fillLevel: %.1f, fillType: %d (%s)", v10, v11, v11)
  return v11
end
function FSBaseMission:consoleCommandSetFuel(fuelLevel)
  local zPos = self:getIsServer()
  if zPos then
    if fuelLevel == nil then
      return "No fuellevel given! Usage: gsVehicleFuelSet <fuelLevel>"
    end
    local useWorldCoords = tonumber(fuelLevel)
    zPos = Utils.getNoNil(useWorldCoords, 10000000000)
    if self.controlledVehicle ~= nil then
      if self.controlledVehicle.getConsumerFillUnitIndex ~= nil then
        useWorldCoords = self.controlledVehicle:getConsumerFillUnitIndex(FillType.DIESEL)
        if not useWorldCoords then
          useWorldCoords = self.controlledVehicle:getConsumerFillUnitIndex(FillType.ELECTRICCHARGE)
          if not useWorldCoords then
            useWorldCoords = self.controlledVehicle:getConsumerFillUnitIndex(FillType.METHANE)
          end
        end
        if useWorldCoords ~= nil then
          local radioEventsActive = zPos:getFillUnitFillLevel(useWorldCoords)
          local playerName = self:getFarmId()
          local v11 = zPos:getFillUnitFirstSupportedFillType(useWorldCoords)
          zPos:addFillUnitFillLevel(playerName, useWorldCoords, fuelLevel - radioEventsActive, v11, ToolType.UNDEFINED, nil)
          return "Added fuel"
        end
        return "No Fuel filltype supported!"
      end
      return "Vehicle has no consumer"
    end
    return "Enter a vehicle first!"
  end
  return "Not available on clients"
end
function FSBaseMission:consoleCommandSetMotorTemperature(temperature)
  local zPos = self:getIsServer()
  if zPos then
    if temperature == nil then
      return "No temperature given! Usage: gsVehicleTemperatureSet <temperature>"
    end
    local useWorldCoords = tonumber(temperature)
    zPos = Utils.getNoNil(useWorldCoords, 0)
    if self.controlledVehicle ~= nil then
      if self.controlledVehicle.spec_motorized ~= nil then
        local timeScale = MathUtil.clamp(zPos, self.controlledVehicle.spec_motorized.motorTemperature.valueMin, self.controlledVehicle.spec_motorized.motorTemperature.valueMax)
        self.controlledVehicle.spec_motorized.motorTemperature.value = timeScale
        return "Set motor temperature to " .. self.controlledVehicle.spec_motorized.motorTemperature.value
      end
      return "Vehicle has no motor"
    end
    return "Enter a vehicle first!"
  end
  return "Not available on clients"
end
function FSBaseMission:consoleCommandSetOperatingTime(operatingTime)
  local zPos = self:getIsServer()
  if zPos then
    if operatingTime == nil then
      return "No operatingTime given! Usage: gsVehicleOperatingTimeSet <operatingTime (h)>"
    end
    local useWorldCoords = tonumber(operatingTime)
    zPos = Utils.getNoNil(useWorldCoords, 0)
    if self.controlledVehicle ~= nil then
      if self.controlledVehicle.setOperatingTime ~= nil then
        zPos:setOperatingTime(zPos * 1000 * 60 * 60)
        zPos = string.format("Set operating time to %.1f", zPos * 1000 * 60 * 60)
        return zPos
      end
      return "Vehicle has no operating time"
    end
    return "Enter a vehicle first!"
  end
  return "Not available on clients"
end
function FSBaseMission.consoleCommandShowVehicleDistance(v0, fieldIdOrX)
  local zPos = Utils.getNoNil(fieldIdOrX, not g_showVehicleDistance)
  g_showVehicleDistance = zPos
end
function FSBaseMission.consoleCommandShowTipCollisions(v0, fieldIdOrX)
  local zPos = Utils.getNoNil(fieldIdOrX, not g_showTipCollisions)
  g_showTipCollisions = zPos
  if g_showTipCollisions then
    zPos = StartParams.getIsSet("scriptDebug")
    if not zPos then
      return "Error: Game must be started with '-scriptDebug' parameter"
    end
  end
  local radioEventsActive = tostring(g_showTipCollisions)
  return "showTipCollisions=" .. radioEventsActive
end
function FSBaseMission.consoleCommandShowPlacementCollisions(v0, fieldIdOrX)
  local zPos = Utils.getNoNil(fieldIdOrX, not g_showPlacementCollisions)
  g_showPlacementCollisions = zPos
  if g_showPlacementCollisions then
    zPos = StartParams.getIsSet("scriptDebug")
    if not zPos then
      return "Error: Game must be started with '-scriptDebug' parameter"
    end
  end
  local radioEventsActive = tostring(g_showPlacementCollisions)
  if g_showPlacementCollisions then
    return "showPlacementCollisions=" .. radioEventsActive .. "\nEnable debug view (F5) to render collision information"
  end
  return zPos
end
function FSBaseMission.consoleCommandUpdateTipCollisions(v0, fieldIdOrX)
  local useWorldCoords = getCamera(0)
  local zPos, useWorldCoords, radioEventsActive = getWorldTranslation(...)
  local clientUserId = tonumber(fieldIdOrX)
  local timeScale = MathUtil.clamp(clientUserId or 20, 2, 1000)
  connectedToDedicatedServer:updateCollisionMap(zPos - timeScale / 2, radioEventsActive - timeScale / 2, zPos + timeScale / 2, radioEventsActive + timeScale / 2)
  return string.format("Updated tipCollision in a %ix%i area around the camera. Add a number as a parameter to update a custom area", timeScale, timeScale)
end
function FSBaseMission:consoleCommandAddPallet(palletFillTypeName, amount, worldX, worldZ)
  local clientUserId = clientUserId:getFillTypes()
  for knownPlayer, v10 in pairs(...) do
    if not (v10.palletFilename ~= nil) then
      continue
    end
    timeScale[v10.name] = v10.palletFilename
  end
  if palletFillTypeName == nil then
    return "Error: no fillType given"
  end
  connectedToDedicatedServer = palletFillTypeName:lower()
  if connectedToDedicatedServer == "all" then
    local connectedToDedicatedServer, clientUserId, playerName, knownPlayer, v10, v11 = DebugUtil.getVehicleOrPlayerPosAndDir()
    local v13 = v13:getFillTypes()
    for v15, v16 in pairs(...) do
      if not (v16.palletFilename ~= nil) then
        continue
      end
      self:consoleCommandAddPallet(v16.name, amount, connectedToDedicatedServer + knownPlayer * 3, playerName + v11 * 3)
    end
    return
  end
  connectedToDedicatedServer = string.upper(palletFillTypeName)
  connectedToDedicatedServer = connectedToDedicatedServer:getFillTypeIndexByName(connectedToDedicatedServer)
  if connectedToDedicatedServer == nil then
    v10 = table.concatKeys(timeScale, ", ")
    clientUserId = string.format(...)
    return clientUserId
  end
  if timeScale[palletFillTypeName] == nil then
    playerName = string.format("Error: no pallet for given fillType '%s'", palletFillTypeName)
    return playerName
  end
  playerName, knownPlayer, v10, v11, v12, v13 = DebugUtil.getVehicleOrPlayerPosAndDir()
  if worldX ~= nil then
    v14 = tonumber(worldX)
  end
  if worldZ ~= nil then
    v14 = tonumber(worldZ)
  end
  if Platform.gameplay.hasDynamicPallets then
  end
  local v16, v17, v18, v19, v20 = RaycastUtil.raycastClosest(playerName, knownPlayer + 25, v10, 0, -1, 0, 40, CollisionFlag.STATIC_WORLD + CollisionFlag.TERRAIN + CollisionFlag.TERRAIN_DELTA + CollisionFlag.DYNAMIC_OBJECT + CollisionFlag.VEHICLE)
  if v16 ~= nil then
  else
    local v21 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, playerName, knownPlayer, v10)
  end
  local v23 = v23:getFarmId()
  if v23 ~= FarmManager.SPECTATOR_FARM_ID then
    -- if v23 then goto L187 end
  end
  VehicleLoadingUtil.loadVehicle(clientUserId, v21, true, 0, Vehicle.PROPERTY_STATE_OWNED, 1, nil, nil, v22, nil)
end
function FSBaseMission:consoleActivateCameraPath(cameraPathIndex)
  local zPos = tonumber(cameraPathIndex)
  if zPos ~= nil and zPos >= 1 then
    zPos = table.getn(self.cameraPaths)
    -- if v2 >= v2 then goto L19 end
  end
  return "Invalid argument. Argument: cameraPathIndex"
  if self.currentCameraPath ~= nil then
    zPos:deactivate()
  end
  self.cameraPathIsPlaying = false
  self.currentCameraPath = self.cameraPaths[cameraPathIndex]
  function self.currentCameraPath.finishedCallback()
    print("camera path finished")
    self:deactivate()
  end
  useWorldCoords:activate()
  useWorldCoords:addUpdateable(self.currentCameraPath)
  return "Camera path activated"
end
function FSBaseMission:consoleCommandSaveDediXMLStatsFile()
  self:updateGameStatsXML()
end
function FSBaseMission:consoleCommandSaveGame()
  self:saveSavegame()
end
function FSBaseMission:updateFoundHelpIcons()
  if self.helpIconsBase ~= nil then
    local radioEventsActive = string.len(self.missionInfo.foundHelpIcons)
    -- TODO: structure LOP_FORNPREP (pc 15, target 35)
    radioEventsActive = string.sub(self.missionInfo.foundHelpIcons, 1, 1)
    if radioEventsActive == "1" then
      radioEventsActive:deleteHelpIcon(1)
    end
    -- TODO: structure LOP_FORNLOOP (pc 34, target 16)
  end
end
function FSBaseMission:removeAllHelpIcons()
  if self.helpIconsBase ~= nil then
    local radioEventsActive = string.len(self.missionInfo.foundHelpIcons)
    -- TODO: structure LOP_FORNPREP (pc 15, target 23)
    radioEventsActive:deleteHelpIcon(1)
    -- TODO: structure LOP_FORNLOOP (pc 22, target 16)
  end
end
function FSBaseMission.playerOwnsAllFields(v0)
  local zPos = zPos:getFarmlands()
  for radioEventsActive, timeScale in pairs(...) do
    local connectedToDedicatedServer = connectedToDedicatedServer:getServerConnection()
    local playerName = FarmlandStateEvent.new(radioEventsActive, 1, 0)
    connectedToDedicatedServer:sendEvent(...)
  end
end
function FSBaseMission:addPlaceableToDelete(placeable)
  placeable.markedForDeletion = true
  self.placeablesToDelete[placeable] = placeable
end
function FSBaseMission:removePlaceableToDelete(placeable)
  self.placeablesToDelete[placeable] = nil
end
function FSBaseMission:broadcastEventToMasterUser(event, ignoreConnection)
  local radioEventsActive = radioEventsActive:getMasterUsers()
  for connectedToDedicatedServer, clientUserId in pairs(...) do
    local playerName = clientUserId:getConnection()
    if not (playerName ~= ignoreConnection) then
      continue
    end
    playerName:sendEvent(event)
  end
  event:delete()
end
function FSBaseMission:broadcastMissionDynamicInfo(connection)
  local useWorldCoords = self:getIsServer()
  assert(useWorldCoords, "broadcastMissionDynamicInfo call is only allowed on Server")
  local radioEventsActive = MissionDynamicInfoEvent.new()
  self:broadcastEventToMasterUser(radioEventsActive, connection)
end
function FSBaseMission:updateMissionDynamicInfo(serverName, capacity, password, autoAccept, allowOnlyFriends, allowCrossPlay)
  if serverName ~= "" and g_dedicatedServer == nil then
    self.missionDynamicInfo.serverName = serverName
  end
  if g_dedicatedServer == nil then
    self.missionDynamicInfo.capacity = capacity
  end
  self.missionDynamicInfo.password = password
  if not autoAccept and g_dedicatedServer == nil then
  end
  clientUserId.autoAccept = playerName
  self.missionDynamicInfo.allowOnlyFriends = allowOnlyFriends
  self.missionDynamicInfo.allowCrossPlay = allowCrossPlay
  self:updateMaxNumHirables()
  if g_dedicatedServer ~= nil then
    self:updateDedicatedServerXML()
  end
end
function FSBaseMission:updateMasterServerInfo(connection)
  local zPos = self:getIsServer()
  if zPos then
    zPos = zPos:getNumberOfUsers()
    if g_dedicatedServer ~= nil then
    end
    masterServerSetServerInfo(g_currentMission.missionDynamicInfo.serverName, g_currentMission.missionDynamicInfo.password, g_currentMission.missionDynamicInfo.capacity, zPos, g_currentMission.missionDynamicInfo.allowOnlyFriends)
    self:broadcastMissionDynamicInfo(connection)
  end
end
function FSBaseMission:updateDedicatedServerXML()
  if g_dedicatedServer ~= nil then
    zPos:updateServerInfo(self.missionDynamicInfo.serverName, self.missionDynamicInfo.password, self.missionDynamicInfo.capacity)
  end
end
function FSBaseMission:updateGameStatsXML()
  if g_dedicatedServer ~= nil then
    local zPos = createXMLFile("serverStatsFile", g_dedicatedServer.gameStatsPath, "Server")
    if zPos ~= nil and zPos ~= 0 then
      local timeScale = timeScale:getMapById(self.missionInfo.mapId)
      if timeScale ~= nil then
      end
      if self.environment ~= nil then
      end
      local clientUserId = Utils.getNoNil(self.terrainSize, 2048)
      local playerName = playerName:getNumberOfUsers()
      if g_dedicatedServer ~= nil then
      end
      setXMLString(zPos, "Server" .. "#game", g_gameTitle)
      setXMLString(zPos, "Server" .. "#version", g_gameVersionDisplay .. g_gameVersionDisplayExtra)
      local v13 = HTMLUtil.encodeToHTML(useWorldCoords)
      setXMLString(...)
      v13 = HTMLUtil.encodeToHTML(radioEventsActive)
      setXMLString(...)
      setXMLInt(zPos, "Server" .. "#dayTime", connectedToDedicatedServer)
      v13 = NetworkUtil.convertToNetworkFilename(self.mapImageFilename)
      setXMLString(...)
      setXMLInt(zPos, "Server" .. "#mapSize", clientUserId)
      setXMLInt(zPos, "Server" .. ".Slots#capacity", self.missionDynamicInfo.capacity or 0)
      setXMLInt(zPos, "Server" .. ".Slots#numUsed", playerName)
      local v12 = v12:getUsers()
      for v14, v15 in ipairs(...) do
        local v17 = v15:getConnection()
        if v17 ~= nil then
        end
        local v18 = v15:getId()
        local v19 = self:getServerUserId()
        if v18 == v19 and not (g_dedicatedServer == nil) then
          continue
        end
        v18 = string.format("%s.Slots.Player(%d)", "Server", v10)
        local v22 = v15:getConnectedTime()
        setXMLBool(zPos, v18 .. "#isUsed", true)
        local v23 = v15:getIsMasterUser()
        setXMLBool(...)
        setXMLInt(zPos, v18 .. "#uptime", (self.time - v22) / 60000)
        if v16 ~= nil and v16.isControlled and v16.rootNode ~= nil and v16.rootNode ~= 0 then
          local v20, v21, v22 = getWorldTranslation(v16.rootNode)
          setXMLFloat(zPos, v18 .. "#x", v20)
          setXMLFloat(zPos, v18 .. "#y", v21)
          setXMLFloat(zPos, v18 .. "#z", v22)
        end
        local v24 = v15:getNickname()
        v23 = HTMLUtil.encodeToHTML(v24, true)
        setXMLString(...)
      end
      -- TODO: structure LOP_FORNPREP (pc 282, target 298)
      v14 = string.format("%s.Slots.Player(%d)", "Server", playerName + 1)
      setXMLBool(zPos, v14 .. "#isUsed", false)
      -- TODO: structure LOP_FORNLOOP (pc 297, target 283)
      for v14, v15 in pairs(self.vehicles) do
        local v16 = string.format("%s.Vehicles.Vehicle(%d)", "Server", v10)
        v17 = v15:saveStatsToXMLFile(zPos, v16)
        if not v17 then
          continue
        end
      end
      for v14, v15 in pairs(self.missionDynamicInfo.mods) do
        v16 = string.format("%s.Mods.Mod(%d)", "Server", v10)
        v20 = HTMLUtil.encodeToHTML(v15.modName)
        setXMLString(...)
        v20 = HTMLUtil.encodeToHTML(v15.author)
        setXMLString(...)
        v20 = HTMLUtil.encodeToHTML(v15.version)
        setXMLString(...)
        v20 = HTMLUtil.encodeToHTML(v15.title, true)
        setXMLString(...)
        if v15.fileHash ~= nil then
          v20 = HTMLUtil.encodeToHTML(v15.fileHash)
          setXMLString(...)
        end
      end
      v12 = v12:getFarmlands()
      for v14, v15 in pairs(...) do
        v16 = string.format("%s.Farmlands.Farmland(%d)", "Server", v10)
        v20 = tostring(v15.name)
        setXMLString(...)
        setXMLInt(zPos, v16 .. "#id", v15.id)
        v20 = v20:getFarmlandOwner(v15.id)
        setXMLInt(...)
        setXMLFloat(zPos, v16 .. "#area", v15.areaInHa)
        setXMLInt(zPos, v16 .. "#area", v15.price)
        setXMLFloat(zPos, v16 .. "#x", v15.xWorldPos)
        setXMLFloat(zPos, v16 .. "#z", v15.zWorldPos)
      end
      v12 = v12:getFields()
      for v14, v15 in pairs(...) do
        v16 = string.format("%s.Fields.Field(%d)", "Server", v10)
        v20 = tostring(v15.fieldId)
        setXMLString(...)
        setXMLFloat(zPos, v16 .. "#x", v15.posX)
        setXMLFloat(zPos, v16 .. "#z", v15.posZ)
        setXMLBool(zPos, v16 .. "#isOwned", not v15.isAIActive)
      end
      saveXMLFile(zPos)
      delete(zPos)
    end
  end
  self.gameStatsTime = self.time + self.gameStatsInterval
end
function FSBaseMission:setVisibilityOfGUIComponents(state)
  zPos:setIsVisible(state)
end
function FSBaseMission:setConnectionLostState(state)
  self.connectionLostState = state
end
function FSBaseMission:addMapHotspot(hotspot)
  return zPos:addMapHotspot(hotspot)
end
function FSBaseMission:removeMapHotspot(hotspot)
  zPos:removeMapHotspot(hotspot)
end
function FSBaseMission:isInGameMessageActive()
  return fieldIdOrX:isInGameMessageActive()
end
function FSBaseMission:registerActionEvents()
  local zPos = zPos:superClass()
  zPos.registerActionEvents(self)
  local useWorldCoords, radioEventsActive = useWorldCoords:registerActionEvent(InputAction.MENU, self, self.onToggleMenu, false, true, false, true)
  useWorldCoords:setActionEventTextVisibility(radioEventsActive, false)
  useWorldCoords, radioEventsActive = useWorldCoords:registerActionEvent(InputAction.TOGGLE_STORE, self, self.onToggleStore, false, true, false, true)
  useWorldCoords:setActionEventTextVisibility(radioEventsActive, false)
  useWorldCoords, radioEventsActive = useWorldCoords:registerActionEvent(InputAction.TOGGLE_MAP, self, self.onToggleMap, false, true, false, true)
  useWorldCoords:setActionEventTextVisibility(radioEventsActive, false)
  useWorldCoords, radioEventsActive = useWorldCoords:registerActionEvent(InputAction.TOGGLE_HELP, self, self.onToggleHelp, false, true, false, true)
  useWorldCoords:setActionEventTextVisibility(radioEventsActive, false)
  if Platform.hasWardrobe then
    useWorldCoords, radioEventsActive = useWorldCoords:registerActionEvent(InputAction.TOGGLE_CHARACTER_CREATION, self, self.onToggleCharacterCreation, false, true, false, true)
    useWorldCoords:setActionEventTextVisibility(radioEventsActive, false)
  end
  useWorldCoords, radioEventsActive = useWorldCoords:registerActionEvent(InputAction.TOGGLE_CONSTRUCTION, self, self.onToggleConstructionScreen, false, true, false, true)
  useWorldCoords:setActionEventTextVisibility(radioEventsActive, false)
  if g_soundPlayer ~= nil then
    useWorldCoords, radioEventsActive = useWorldCoords:registerActionEvent(InputAction.RADIO_TOGGLE, self, self.onToggleRadio, false, true, false, false)
    useWorldCoords:setActionEventTextVisibility(radioEventsActive, GS_IS_CONSOLE_VERSION)
    self.eventRadioToggle = radioEventsActive
    useWorldCoords = self:getIsRadioPlaying()
    local timeScale, connectedToDedicatedServer = timeScale:registerActionEvent(InputAction.RADIO_PREVIOUS_CHANNEL, g_soundPlayer, g_soundPlayer.previousChannel, false, true, false, useWorldCoords)
    timeScale:setActionEventTextVisibility(connectedToDedicatedServer, GS_IS_CONSOLE_VERSION)
    table.insert({}, connectedToDedicatedServer)
    timeScale, connectedToDedicatedServer = timeScale:registerActionEvent(InputAction.RADIO_NEXT_CHANNEL, g_soundPlayer, g_soundPlayer.nextChannel, false, true, false, useWorldCoords)
    timeScale:setActionEventTextVisibility(connectedToDedicatedServer, GS_IS_CONSOLE_VERSION)
    table.insert({}, connectedToDedicatedServer)
    timeScale, connectedToDedicatedServer = timeScale:registerActionEvent(InputAction.RADIO_NEXT_ITEM, g_soundPlayer, g_soundPlayer.nextItem, false, true, false, useWorldCoords)
    timeScale:setActionEventTextVisibility(connectedToDedicatedServer, false)
    table.insert({}, connectedToDedicatedServer)
    timeScale, connectedToDedicatedServer = timeScale:registerActionEvent(InputAction.RADIO_PREVIOUS_ITEM, g_soundPlayer, g_soundPlayer.previousItem, false, true, false, useWorldCoords)
    timeScale:setActionEventTextVisibility(connectedToDedicatedServer, false)
    table.insert({}, connectedToDedicatedServer)
    self.radioEvents = {}
  end
  useWorldCoords, radioEventsActive = useWorldCoords:registerActionEvent(InputAction.INCREASE_TIMESCALE, self, self.onChangeTimescale, false, true, false, true, 1)
  useWorldCoords:setActionEventTextVisibility(radioEventsActive, false)
  useWorldCoords, radioEventsActive = useWorldCoords:registerActionEvent(InputAction.DECREASE_TIMESCALE, self, self.onChangeTimescale, false, true, false, true, -1)
  useWorldCoords:setActionEventTextVisibility(radioEventsActive, false)
  if self.missionDynamicInfo.isMultiplayer then
    useWorldCoords:registerActionEvent(InputAction.CHAT, self, self.toggleChat, false, true, false, true)
  end
end
function FSBaseMission:registerPauseActionEvents()
  local zPos = zPos:superClass()
  zPos.registerPauseActionEvents(self)
  fieldIdOrX:beginActionEventsModification(BaseMission.INPUT_CONTEXT_PAUSE)
  local fieldIdOrX, zPos = fieldIdOrX:registerActionEvent(InputAction.MENU, self, self.onToggleMenu, false, true, false, true)
  useWorldCoords:setActionEventTextVisibility(zPos, true)
  useWorldCoords:endActionEventsModification()
end
function FSBaseMission:onToggleHelp()
  local fieldIdOrX = fieldIdOrX:getIsSleeping()
  if fieldIdOrX then
    return
  end
  fieldIdOrX = fieldIdOrX:getCanAccessHudButton("gameInfoDisplay_help")
  if not fieldIdOrX then
    return
  end
  if not self.isSynchronizingWithPlayers then
    local zPos = getCamera()
    local fieldIdOrX, zPos, useWorldCoords = getWorldTranslation(...)
    g_inGameMenu.pageHelpLine.closeMenuOneshot = true
    g_inGameMenu.blockNextPageNextEvent = true
    radioEventsActive:openContextBasedHelp(fieldIdOrX, zPos, useWorldCoords)
  end
end
function FSBaseMission:onToggleMenu()
  local fieldIdOrX = fieldIdOrX:getIsSleeping()
  if fieldIdOrX then
    return
  end
  fieldIdOrX = fieldIdOrX:getCanAccessHudButton("gameInfoDisplay_menu")
  if not fieldIdOrX then
    return
  end
  if self.isSynchronizingWithPlayers then
    return
  end
  fieldIdOrX:changeScreen(nil, InGameMenu)
  if GS_IS_MOBILE_VERSION then
    fieldIdOrX:goToPage(g_inGameMenu.pageMain)
  end
end
function FSBaseMission:onToggleMap()
  if not self.isSynchronizingWithPlayers then
    local fieldIdOrX = fieldIdOrX:getIsRunning()
    if fieldIdOrX then
      local radioEventsActive = radioEventsActive:getText("tour_text_feature_deactivated")
      fieldIdOrX:showInfoDialog({text = radioEventsActive})
      return
    end
    if Platform.isMobile then
      g_inGameMenu.showMap = true
    end
    fieldIdOrX:changeScreen(nil, InGameMenu)
    if Platform.isMobile then
      fieldIdOrX:goToPage(g_inGameMenu.pageMapMobile)
      return
    end
    fieldIdOrX:goToPage(g_inGameMenu.pageMapOverview)
  end
end
function FSBaseMission:onToggleStore()
  if not self.isSynchronizingWithPlayers then
    local fieldIdOrX = fieldIdOrX:isa(FSCareerMissionInfo)
    if not fieldIdOrX then
      local zPos = zPos:getText("dialog_shopOnlyWorksInCareer")
      InfoDialog.show(...)
      return
    end
    fieldIdOrX = fieldIdOrX:getIsRunning()
    if fieldIdOrX then
      local radioEventsActive = radioEventsActive:getText("tour_text_feature_deactivated")
      fieldIdOrX:showInfoDialog({text = radioEventsActive})
      return
    end
    if not self.isPlayerFrozen and self.player.farmId ~= FarmManager.SPECTATOR_FARM_ID then
      fieldIdOrX:changeScreen(nil, ShopMenu)
    end
  end
end
function FSBaseMission:onToggleCharacterCreation()
  if not self.isSynchronizingWithPlayers then
    fieldIdOrX:changeScreen(nil, WardrobeScreen)
  end
end
function FSBaseMission:onToggleConstructionScreen()
  if not self.isSynchronizingWithPlayers and self.player.farmId ~= FarmManager.SPECTATOR_FARM_ID then
    fieldIdOrX:changeScreen(nil, ConstructionScreen)
  end
end
function FSBaseMission:toggleChat(isActive)
  if not self.isSynchronizingWithPlayers then
    if isActive ~= nil then
      -- if not v1 then goto L14 end
    end
    zPos:showGui("ChatDialog")
    -- goto L15  (LOP_JUMP +1)
    zPos:setChatWindowVisible(false)
  end
end
function FSBaseMission.onToggleRadio(v0)
  local fieldIdOrX = fieldIdOrX:getValue(GameSettings.SETTING.RADIO_IS_ACTIVE)
  zPos:setValue(GameSettings.SETTING.RADIO_IS_ACTIVE, not fieldIdOrX)
end
function FSBaseMission:onChangeTimescale(_, _, indexStep)
  local radioEventsActive = self:getIsServer()
  if not radioEventsActive then
    -- if not v0.isMasterUser then goto L36 end
  end
  radioEventsActive = radioEventsActive:getIsSleeping()
  if not radioEventsActive then
    radioEventsActive = radioEventsActive:getBlocksTimeChange()
    if not radioEventsActive then
      radioEventsActive = Utils.getTimeScaleIndex(self.missionInfo.timeScale)
      local timeScale = Utils.getTimeScaleFromIndex(radioEventsActive + indexStep)
      if timeScale ~= nil then
        self:setTimeScale(timeScale)
      end
    end
  end
end
function FSBaseMission:onShowHelpIconsChanged(isVisible)
  if self.helpIconsBase ~= nil then
    zPos:showHelpIcons(isVisible)
  end
end
function FSBaseMission:onRadioVehicleOnlyChanged(isVehicleOnly)
  local zPos = zPos:getValue(GameSettings.SETTING.RADIO_IS_ACTIVE)
  if not not isVehicleOnly and isVehicleOnly and self.controlledVehicle ~= nil then
  end
  if zPos then
    if useWorldCoords then
      local radioEventsActive = self:getIsRadioPlaying()
      -- if v4 then goto L33 end
      self:playRadio()
      return
    end
    self:pauseRadio()
  end
end
function FSBaseMission:onRadioIsActiveChanged(isActive)
  if not isActive then
    self:pauseRadio()
    return
  end
  local zPos = zPos:getValue(GameSettings.SETTING.RADIO_VEHICLE_ONLY)
  if zPos then
    -- if not v2 then goto L26 end
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L26
    -- if not v0.controlledVehicle.supportsRadio then goto L26 end
  end
  self:playRadio()
end
function FSBaseMission:setRadioActionEventsState(isActive)
  for timeScale, connectedToDedicatedServer in pairs(self.radioEvents) do
    clientUserId:setActionEventActive(connectedToDedicatedServer, isActive)
  end
end
function FSBaseMission:subscribeMessages()
  fieldIdOrX:subscribe(SaveEvent, self.startSaveCurrentGame, self)
  fieldIdOrX:subscribe(MessageType.PLAYER_FARM_CHANGED, self.notifyPlayerFarmChanged, self)
  fieldIdOrX:subscribe(MessageType.USER_ADDED, self.onUserAdded, self)
  fieldIdOrX:subscribe(MessageType.USER_REMOVED, self.onUserRemoved, self)
  fieldIdOrX:subscribe(MessageType.MASTERUSER_ADDED, self.onMasterUserAdded, self)
  fieldIdOrX:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.IS_TRAIN_TABBABLE], self.setTrainSystemTabbable, self)
  fieldIdOrX:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.SHOW_HELP_ICONS], self.onShowHelpIconsChanged, self)
  fieldIdOrX:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.RADIO_VEHICLE_ONLY], self.onRadioVehicleOnlyChanged, self)
  fieldIdOrX:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.RADIO_IS_ACTIVE], self.onRadioIsActiveChanged, self)
  fieldIdOrX:subscribe(MessageType.APP_SUSPENDED, self.onAppSuspended, self)
  fieldIdOrX:subscribe(MessageType.APP_RESUMED, self.onAppResumed, self)
  fieldIdOrX:subscribe(MessageType.WINDOW_SIZE_CHANGED, self.onWindowSizeChanged, self)
  fieldIdOrX:subscribe(MessageType.MISSION_TOUR_STARTED, self.onGuidedTourStarted, self)
  fieldIdOrX:subscribe(MessageType.MISSION_TOUR_FINISHED, self.onGuidedTourFinished, self)
end
function FSBaseMission:onWindowSizeChanged()
  if not self.isLoaded then
    return
  end
  if GS_IS_MOBILE_VERSION then
    local fieldIdOrX = fieldIdOrX:getIsSaving()
    if not fieldIdOrX then
      self:saveSavegame(true)
    end
  end
end
function FSBaseMission:onAppSuspended()
  if not self.isLoaded then
    return
  end
  if GS_IS_MOBILE_VERSION then
    local fieldIdOrX = fieldIdOrX:getIsSaving()
    if not fieldIdOrX then
      self:saveSavegame(true)
    end
  end
end
function FSBaseMission.onAppResumed(v0)
  local fieldIdOrX = fieldIdOrX:getIsGuiVisible()
  if not fieldIdOrX then
    fieldIdOrX:resetTime()
    fieldIdOrX = fieldIdOrX:getIsSleeping()
    if not fieldIdOrX then
      fieldIdOrX:changeScreen(nil, InGameMenu)
      if GS_IS_MOBILE_VERSION then
        fieldIdOrX:goToPage(g_inGameMenu.pageMain)
      end
    end
  end
end
function FSBaseMission:getCanShowHelpTriggers()
  if self.guidedTour ~= nil and self.guidedTour.isRunning then
    return false
  end
  local zPos = zPos:superClass()
  return zPos.getCanShowHelpTriggers(self)
end
function FSBaseMission:onGuidedTourStarted()
  self:updateHelpTriggerVisibility()
end
function FSBaseMission:onGuidedTourFinished()
  self:updateHelpTriggerVisibility()
end
function FSBaseMission:notifyPlayerFarmChanged(player)
  if player == self.player then
    local zPos = self:getIsClient()
    if zPos and self.controlledVehicle ~= nil then
      self:onLeaveVehicle()
    end
    zPos = zPos:getFarmById(self.player.farmId)
    useWorldCoords:setPlayerFarm(zPos)
    useWorldCoords:setPlayerFarm(zPos)
    useWorldCoords:setOwnedFarmItems(self.ownedItems, self.player.farmId)
    useWorldCoords:setLeasedFarmItems(self.leasedVehicles, self.player.farmId)
    local connectedToDedicatedServer = zPos:getBalance()
    useWorldCoords:onMoneyChanged(...)
    connectedToDedicatedServer = zPos:getBalance()
    useWorldCoords:onMoneyChanged(...)
  end
end
function FSBaseMission:onUserAdded(user)
  self:updateMaxNumHirables()
  local zPos = user:getId()
  if zPos == self.playerUserId then
    zPos:setCurrentUserId(self.playerUserId)
    zPos:setCurrentUserId(self.playerUserId)
  end
  zPos = user:getId()
  local useWorldCoords = useWorldCoords:getServerUserId()
  if zPos ~= useWorldCoords then
    zPos = user:getId()
    if zPos ~= self.playerUserId then
      local connectedToDedicatedServer = user:getNickname()
      print(connectedToDedicatedServer .. " joined the game")
      local radioEventsActive = user:getNickname()
      local timeScale = timeScale:getText("ui_serverUserJoin")
      zPos:addChatMessage(radioEventsActive, timeScale, FarmManager.SPECTATOR_FARM_ID)
    end
  end
  self:updateGameStatsXML()
  radioEventsActive = radioEventsActive:getUsers()
  zPos:setConnectedUsers(...)
  radioEventsActive = radioEventsActive:getUsers()
  zPos:setConnectedUsers(...)
  zPos:setUserBlockDataDirty()
end
function FSBaseMission:onUserRemoved(user)
  self:updateMaxNumHirables()
  local zPos = user:getId()
  local useWorldCoords = useWorldCoords:getServerUserId()
  if zPos ~= useWorldCoords then
    zPos = user:getId()
    if zPos ~= self.playerUserId then
      local connectedToDedicatedServer = user:getNickname()
      print(connectedToDedicatedServer .. " left the game")
      local radioEventsActive = user:getNickname()
      local timeScale = timeScale:getText("ui_serverUserLeave")
      zPos:addChatMessage(radioEventsActive, timeScale, FarmManager.SPECTATOR_FARM_ID)
    end
  end
  self:updateGameStatsXML()
  radioEventsActive = radioEventsActive:getUsers()
  zPos:setConnectedUsers(...)
  radioEventsActive = radioEventsActive:getUsers()
  zPos:setConnectedUsers(...)
end
function FSBaseMission:onMasterUserAdded(user)
  local zPos = user:getId()
  if zPos == self.playerUserId then
    self.isMasterUser = true
    if g_addCheatCommands then
      addConsoleCommand("gsMoneyAdd", "Add a lot of money", "consoleCommandCheatMoney", self)
    end
  end
  zPos = self:getIsServer()
  if zPos then
    local radioEventsActive = UserDataEvent.new({user})
    zPos:broadcastEvent(...)
  end
end
function FSBaseMission:broadcastEventToFarm(event, farmId, sendLocal, ignoreConnection, ghostObject, force)
  for v11, v12 in pairs(g_server.clientConnections) do
    if not (self.connectionsToPlayer[v12] ~= nil) then
      continue
    end
    if not (self.connectionsToPlayer[v12].farmId == farmId) then
      continue
    end
    clientUserId[v11] = v12
  end
  playerName:broadcastEvent(event, sendLocal, ignoreConnection, ghostObject, force, clientUserId)
end
function FSBaseMission.getDefaultServerName(v0)
  local zPos = zPos:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
  if g_languageShort == "pl" then
    local timeScale = timeScale:getText("ui_serverNameGame")
    return zPos .. " - " .. timeScale
  end
  local useWorldCoords = zPos:endsWith("s")
  if useWorldCoords then
    timeScale = timeScale:getText("ui_serverNameGame")
    return zPos .. "' " .. timeScale
  end
  useWorldCoords = zPos:endsWith("'")
  if useWorldCoords then
    timeScale = timeScale:getText("ui_serverNameGame")
    return zPos .. "s " .. timeScale
  end
  timeScale = timeScale:getText("ui_serverNameGame")
  return zPos .. "'s " .. timeScale
end
function FSBaseMission.setLastCreatedLicensePlate(v0, fieldIdOrX)
  if fieldIdOrX.placementIndex ~= LicensePlateManager.PLATE_POSITION.NONE then
    local useWorldCoords = table.copy(fieldIdOrX.characters)
    g_gameSettings.lastCreatedLicensePlate = {variation = fieldIdOrX.variation, colorIndex = fieldIdOrX.colorIndex, placementIndex = fieldIdOrX.placementIndex, characters = useWorldCoords, xmlFilename = g_licensePlateManager.xmlFilename}
    useWorldCoords:saveToXMLFile(g_savegameXML)
  end
end
function FSBaseMission.getLastCreatedLicensePlate(v0)
  if g_gameSettings.lastCreatedLicensePlate == nil then
    return nil
  end
  if fieldIdOrX.xmlFilename ~= g_licensePlateManager.xmlFilename then
    return nil
  end
  if fieldIdOrX.characters ~= nil then
    local useWorldCoords = table.copy(fieldIdOrX.characters)
    return {variation = fieldIdOrX.variation, colorIndex = fieldIdOrX.colorIndex, placementIndex = fieldIdOrX.placementIndex, characters = useWorldCoords}
  end
  return nil
end
