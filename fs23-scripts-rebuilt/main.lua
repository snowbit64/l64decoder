-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/std.lua")
source("dataS/scripts/StartParams.lua")
source("dataS/scripts/shared/string.lua")
source("dataS/scripts/testing.lua")
source("dataS/scripts/events.lua")
source("dataS/scripts/menu.lua")
if setIs3DGraphicsRenderingEnabled == nil then
  function setIs3DGraphicsRenderingEnabled()
  end
else
  local v1 = getUserProfileAppPath()
  local v0 = string.contains(v1, "2023")
  if not v0 then
    printWarning("Warning: 'setIs3DGraphicsRenderingEnabled' now available, remove stub")
  end
end
if setIs3DAudioRenderingEnabled == nil then
  function setIs3DAudioRenderingEnabled()
  end
else
  v1 = getUserProfileAppPath()
  v0 = string.contains(v1, "2023")
  if not v0 then
    printWarning("Warning: 'setIs3DAudioRenderingEnabled' now available, remove stub")
  end
end
if getSafeFrameInsets == nil then
  function getSafeFrameInsets()
    return 0, 0, 0, 0
  end
end
if textureFileExists == nil then
  function textureFileExists(v0)
    local v1 = fileExists(v0)
    if v1 then
      return true
    end
    v1 = string.gsub(v0, ".dds", ".ast")
    v1 = fileExists(v1)
    if v1 then
      return true
    end
    return false
  end
end
AutoLoadParams = {enable = false, x = 0, y = 0, z = 0}
debug = nil
GS_PROFILE_LOW = 1
GS_PROFILE_MEDIUM = 2
GS_PROFILE_HIGH = 3
GS_PROFILE_VERY_HIGH = 4
g_gameVersion = 17
g_gameVersionNotification = "1.7.0.0"
g_gameVersionDisplay = "1.7.0.0"
g_gameVersionDisplayExtra = ""
g_isDevelopmentConsoleScriptModTesting = false
g_minModDescVersion = 60
g_maxModDescVersion = 75
g_language = 0
g_languageShort = "en"
g_languageSuffix = "_en"
g_showSafeFrame = false
g_flightModeEnabled = false
g_noHudModeEnabled = false
g_woodCuttingMarkerEnabled = true
g_isDevelopmentVersion = false
g_isServerStreamingVersion = false
g_addTestCommands = false
g_addCheatCommands = false
g_showDevelopmentWarnings = false
g_appIsSuspended = false
g_networkDebug = false
g_networkDebugPrints = false
g_gameRevision = "000"
g_buildName = ""
g_buildTypeParam = ""
g_showDeeplinkingFailedMessage = false
g_isSignedIn = false
g_settingsLanguageGUI = 0
g_availableLanguageNamesTable = {}
g_availableLanguagesTable = {}
g_fovYDefault = 1.0471975511965976
g_fovYMin = 0.7853981633974483
g_fovYMax = 1.5707963267948966
g_uiDebugEnabled = false
g_uiFocusDebugEnabled = false
g_logFilePrefixTimestamp = true
g_vehicleColors = {{name = "$l10n_ui_colorWhite", brandColor = "SHARED_WHITE2"}, {name = "$l10n_ui_colorBeige", brandColor = "SHARED_BEIGE"}, {name = "$l10n_ui_colorSilver", brandColor = "SHARED_SILVER"}, {name = "$l10n_ui_colorGreyLight", brandColor = "SHARED_GREYLIGHT"}, {name = "$l10n_ui_colorGrey", brandColor = "SHARED_GREY"}, {name = "$l10n_ui_colorGreyDark", brandColor = "SHARED_GREYDARK"}, {name = "$l10n_ui_colorBlackOnyx", brandColor = "SHARED_BLACKONYX"}, {name = "$l10n_ui_colorBlackJet", brandColor = "SHARED_BLACKJET"}, {name = "John Deere", brandColor = "JOHNDEERE_YELLOW1"}, {name = "JCB", brandColor = "JCB_YELLOW1"}, {name = "Challenger", brandColor = "CHALLENGER_YELLOW1"}, {name = "Schouten", brandColor = "SCHOUTEN_ORANGE1"}, {name = "Fendt", brandColor = "FENDT_RED1"}, {name = "Case IH", brandColor = "CASEIH_RED1"}, {name = "Massey Ferguson", brandColor = "MASSEYFERGUSON_RED"}, {name = "Hardi", brandColor = "HARDI_RED"}, {name = "$l10n_ui_colorAzul", brandColor = "NEWHOLLAND_BLUE2"}, {name = "Rabe", brandColor = "RABE_BLUE1"}, {name = "Lemken", brandColor = "LEMKEN_BLUE1"}, {name = "New Holland", brandColor = "NEWHOLLAND_BLUE1"}, {name = "Boeckmann", brandColor = "BOECKMANN_BLUE1"}, {name = "Goldhofer", brandColor = "GOLDHOFER_BLUE"}, {name = "$l10n_ui_colorBlueNavy", brandColor = "SHARED_BLUENAVY"}, {name = "$l10n_ui_colorPurple", brandColor = "LIZARD_PURPLE1"}, {name = "Valtra", brandColor = "VALTRA_GREEN2"}, {name = "Deutz Fahr", brandColor = "DEUTZ_GREEN4"}, {name = "John Deere", brandColor = "JOHNDEERE_GREEN1"}, {name = "Fendt Nature Green", brandColor = "FENDT_NEWGREEN1"}, {name = "Fendt Classic", brandColor = "FENDT_OLDGREEN1"}, {name = "Kotte", brandColor = "KOTTE_GREEN2"}, {name = "Claas", brandColor = "CLAAS_GREEN1"}, {name = "$l10n_ui_colorGreenOlive", brandColor = "LIZARD_OLIVE1"}, {name = "$l10n_ui_colorBeige", brandColor = "LIZARD_ECRU1"}, {name = "$l10n_ui_colorBrown", brandColor = "SHARED_BROWN"}, {name = "$l10n_ui_colorRedCrimson", brandColor = "SHARED_REDCRIMSON"}, {name = "$l10n_ui_colorPink", brandColor = "LIZARD_PINK1"}}
g_densityMapRevision = 4
g_terrainTextureRevision = 1
g_terrainLodTextureRevision = 2
g_splitShapesRevision = 2
g_tipCollisionRevision = 2
g_placementCollisionRevision = 2
g_navigationCollisionRevision = 2
g_menuMusic = nil
g_menuMusicIsPlayingStarted = false
g_clientInterpDelay = 100
g_clientInterpDelayMin = 60
g_clientInterpDelayMax = 150
g_clientInterpDelayBufferOffset = 30
g_clientInterpDelayBufferScale = 0.5
g_clientInterpDelayBufferMin = 45
g_clientInterpDelayBufferMax = 60
g_clientInterpDelayAdjustDown = 0.002
g_clientInterpDelayAdjustUp = 0.08
g_time = 0
g_currentDt = 16.666666666666668
g_updateLoopIndex = 0
g_physicsTimeLooped = 0
g_physicsDt = 16.666666666666668
g_physicsDtUnclamped = 16.666666666666668
g_physicsDtNonInterpolated = 16.666666666666668
g_physicsDtLastValidNonInterpolated = 16.666666666666668
g_packetPhysicsNetworkTime = 0
v1 = netGetTime()
g_networkTime = v1
g_physicsNetworkTime = g_networkTime
g_analogStickHTolerance = 0.45
g_analogStickVTolerance = 0.45
g_referenceScreenWidth = 1920
g_referenceScreenHeight = 1080
g_maxUploadRate = 30.72
g_maxUploadRatePerClient = 393.216
g_drawGuiHelper = false
g_guiHelperSteps = 0.1
g_lastMousePosX = 0
g_lastMousePosY = 0
g_screenWidth = 800
g_screenHeight = 600
g_screenAspectRatio = g_screenWidth / g_screenHeight
g_presentedScreenAspectRatio = g_screenAspectRatio
g_darkControllerOverlay = nil
g_aspectScaleX = 1
g_aspectScaleX = 1
g_dedicatedServer = nil
g_joinServerMaxCapacity = 16
g_serverMaxClientCapacity = 16
g_serverMinCapacity = 2
g_nextModRecommendationTime = 0
g_maxNumLoadingBarSteps = 35
g_curNumLoadingBarStep = 0
g_updateDownloadFinished = false
g_updateDownloadFinishedDialogShown = false
g_skipStartupScreen = false
function initPlatform()
  local v1 = StartParams.getIsSet("platform")
  if v1 then
    local v4 = StartParams.getValue("platform")
    local v2 = string.trim(v4 or "")
    v1 = string.upper(...)
    if PlatformId[v1] ~= nil then
    elseif v1 == "NETFLIX" then
      GS_IS_NETFLIX_VERSION = true
    else
      local v3 = string.format("Error: Invalid platform '%s'", v1)
      log(...)
    end
  end
  if v0 ~= nil then
    function getPlatformId()
      return u0
    end
  end
  v1 = getPlatformId()
  GS_PLATFORM_ID = v1
  if v1 ~= PlatformId.WIN and v1 ~= PlatformId.MAC then
  end
  GS_PLATFORM_PC = v2
  if v1 ~= PlatformId.XBOX_ONE and v1 ~= PlatformId.XBOX_SERIES then
  end
  GS_PLATFORM_XBOX = v2
  if v1 ~= PlatformId.PS4 and v1 ~= PlatformId.PS5 then
  end
  GS_PLATFORM_PLAYSTATION = v2
  if v1 ~= PlatformId.GGP then
  end
  GS_PLATFORM_GGP = true
  if v1 ~= PlatformId.SWITCH then
  end
  GS_PLATFORM_SWITCH = true
  if v1 ~= PlatformId.ANDROID and v1 ~= PlatformId.IOS then
  end
  GS_PLATFORM_PHONE = v2
  if not GS_PLATFORM_XBOX then
  end
  GS_IS_CONSOLE_VERSION = v2
  if not GS_PLATFORM_PHONE then
  end
  GS_IS_MOBILE_VERSION = v2
end
function init(args)
  StartParams.init(args)
  initPlatform()
  source("dataS/scripts/game.lua")
  local v1 = initTesting()
  if v1 then
    return
  end
  v1 = XMLFile.load("SettingsFile", "dataS/settings.xml")
  local v2 = v1:getString("settings#developmentLevel", "release")
  v2 = v2:lower()
  local v3 = v1:getString("settings#buildName", g_buildName)
  g_buildName = v3
  v3 = v1:getString("settings#buildTypeParam", g_buildTypeParam)
  g_buildTypeParam = v3
  v3 = v1:getString("settings#revision", g_gameRevision)
  g_gameRevision = v3
  local v5 = getGameRevisionExtraText()
  g_gameRevision = g_gameRevision .. v5
  g_isDevelopmentVersion = false
  if v2 == "internal" then
    print("INTERNAL VERSION")
    g_addTestCommands = true
  elseif v2 == "development" then
    print("DEVELOPMENT VERSION")
    g_isDevelopmentVersion = true
    g_addTestCommands = true
    enableDevelopmentControls()
  end
  if g_isDevelopmentVersion then
    g_networkDebug = true
    local v6 = getUniqueUserId()
    local v4 = string.format(...)
    print(...)
  end
  if not g_addTestCommands then
    v3 = StartParams.getIsSet("cheats")
    -- if not v3 then goto L116 end
  end
  g_addCheatCommands = true
  if not g_addTestCommands then
    v3 = StartParams.getIsSet("devWarnings")
    -- if not v3 then goto L127 end
  end
  g_showDevelopmentWarnings = true
  if g_isDevelopmentVersion then
    v3 = StartParams.getIsSet("consoleSimulator")
    if v3 then
      ConsoleSimulator.init()
      ImeSimulator.init()
    end
    v3 = StartParams.getIsSet("stadiaSimulator")
    if v3 then
      StadiaSimulator.init()
      ImeSimulator.init()
    end
    v3 = StartParams.getIsSet("imeSimulator")
    if v3 then
      ImeSimulator.init()
    end
    v3 = StartParams.getIsSet("iapSimulator")
    if v3 then
      IAPSimulator.init()
    end
    v3 = StartParams.getIsSet("mobileSimulator")
    if v3 then
      MobileSimulator.init()
    end
    Profiler.init()
  end
  if GS_IS_CONSOLE_VERSION then
  else
  end
  g_serverMaxCapacity = v3
  AudioGroup.loadGroups()
  v3:init()
  updateLoadingBarProgress()
  v3 = MessageCenter.new()
  g_messageCenter = v3
  updateLoadingBarProgress()
  v3 = SoundMixer.new()
  g_soundMixer = v3
  v3:loadFromXML("dataS/soundMixer.xml")
  updateLoadingBarProgress()
  v3 = AutoSaveManager.new()
  g_autoSaveManager = v3
  updateLoadingBarProgress()
  v3 = KioskMode.new()
  v4 = v3:load()
  if v4 then
    g_kioskMode = v3
  end
  v4 = LifetimeStats.new()
  g_lifetimeStats = v4
  v4:load()
  v4 = StartParams.getIsSet("server")
  v5 = StartParams.getValue("autoStartSavegameId")
  v6 = StartParams.getValue("autoLoadURI")
  local v7 = StartParams.getValue("devStartServer")
  local v8 = StartParams.getValue("devStartClient")
  if g_isDevelopmentVersion then
    local v9 = StartParams.getValue("uniqueUserId")
    -- if v9 then goto L276 end
  end
  if Platform.isPlaystation then
    g_screenWidth = 1920
    g_screenHeight = 1080
  else
    local v11 = getScreenMode()
    local v10, v11 = getScreenModeInfo(...)
    g_screenWidth = v10
    g_screenHeight = v11
  end
  g_baseUIFilename = "dataS/menu/hud/ui_elements.png"
  g_baseUIPostfix = ""
  g_iconsUIFilename = "dataS/menu/hud/ui_icons.png"
  g_baseHUDFilename = "dataS/menu/hud/hud_elements.png"
  g_controlHUDFilename = "dataS/menu/hud/hud_elements2.png"
  if g_isDevelopmentVersion then
    v11 = string.format(" Loading UI-textures: '%s' '%s' '%s'", g_baseUIFilename, g_baseHUDFilename, g_iconsUIFilename)
    print(...)
  end
  g_screenAspectRatio = g_screenWidth / g_screenHeight
  v10 = getScreenAspectRatio()
  g_presentedScreenAspectRatio = v10
  updateAspectRatio(g_presentedScreenAspectRatio)
  v10 = GuiUtils.getUVs({10, 1010, 4, 4})
  g_colorBgUVs = v10
  local v12, v13 = getNormalizedScreenValues(Platform.safeFrameOffsetX, Platform.safeFrameOffsetY)
  g_safeFrameOffsetX = v12
  g_safeFrameOffsetY = v13
  local v14, v15 = getNormalizedScreenValues(Platform.safeFrameMajorOffsetX, Platform.safeFrameMajorOffsetY)
  g_safeFrameMajorOffsetX = v14
  g_safeFrameMajorOffsetY = v15
  registerProfileFile("gameSettings.xml")
  registerProfileFile("extraContent.xml")
  v14 = GameSettings.new(nil, g_messageCenter)
  g_gameSettings = v14
  loadUserSettings(g_gameSettings)
  updateLoadingBarProgress()
  loadLanguageSettings(v1)
  for v18, v19 in ipairs(g_availableLanguagesTable) do
    local v22 = getLanguageCode(v19)
  end
  v1:delete()
  g_gameTitle = "Farming Simulator 22"
  if GS_IS_MOBILE_VERSION then
    g_gameTitle = "Farming Simulator 23"
  end
  if Platform.isPlaystation then
  elseif Platform.isXbox then
  else
    if Platform.isSwitch then
    elseif Platform.isAndroid then
    else
      if Platform.isIOS then
      end
    end
  end
  if g_isDevelopmentVersion then
    local v24 = getEngineRevision()
  elseif g_addTestCommands then
  end
  if I3DManager.loadingDelay ~= nil then
  end
  setCaption(v15)
  addNotificationFilter(GS_PRODUCT_ID, g_gameVersionNotification)
  updateLoadingBarProgress()
  if g_buildTypeParam ~= "" then
  end
  if GS_IS_STEAM_VERSION then
  end
  if GS_IS_EPIC_VERSION then
  end
  if GS_IS_MSSTORE_VERSION then
  end
  if GS_IS_MAC_APP_STORE_VERSION then
  end
  if v4 then
  end
  print(g_gameTitle .. v16)
  print("  Version: " .. g_gameVersionDisplay .. g_gameVersionDisplayExtra .. " " .. g_buildName)
  print("  " .. v14)
  print("  Language: " .. g_languageShort)
  local v20 = getDate("%Y-%m-%d %H:%M:%S")
  print("  Time: " .. v20)
  print("  ModDesc Version: " .. g_maxModDescVersion)
  if Platform.isPC then
    v20 = getUserProfileAppPath()
    g_screenshotsDirectory = v20 .. "screenshots/"
    createFolder(v20 .. "screenshots/")
    local v21 = getUserProfileAppPath()
    g_modSettingsDirectory = v21 .. "modSettings/"
    createFolder(v21 .. "modSettings/")
  end
  v17 = AdsSystem.new()
  g_adsSystem = v17
  v17 = getModInstallPath()
  v18 = getModDownloadPath()
  updateLoadingBarProgress()
  if Platform.allowsModDirectoryOverride then
    v21 = getXMLBool(g_savegameXML, "gameSettings.modsDirectoryOverride#active")
    v20 = Utils.getNoNil(v21, false)
    if v20 then
      v20 = getXMLString(g_savegameXML, "gameSettings.modsDirectoryOverride#directory")
      if v20 ~= nil and v20 ~= "" then
        v20 = v20:gsub("\\", "/")
        v20 = v20:sub(1, 2)
        if v20 == "//" then
          v21 = v20:sub(3)
        end
        v22 = v17:len()
        local v23 = v17:len()
        v20 = v17:sub(...)
        if v20 ~= "/" then
        end
      end
    end
  end
  updateLoadingBarProgress()
  if v17 then
    print("  Mod Directory: " .. v17)
    createFolder(v17)
  end
  if v18 then
    createFolder(v18)
  end
  g_modsDirectory = v17
  if g_addTestCommands then
    print("  Testing Commands: Enabled")
  elseif g_addCheatCommands then
    print("  Cheats: Enabled")
  end
  updateLoadingBarProgress()
  v19 = I18N.new()
  g_i18n = v19
  v19:load()
  if Platform.hasExtraContent then
    v19 = ExtraContentSystem.new()
    g_extraContentSystem = v19
    v19:loadFromXML("dataS/extraContent.xml")
    v19:loadFromProfile()
  end
  updateLoadingBarProgress()
  v22 = v22:getValue("maxNumMirrors")
  v20 = math.max(v22 + 1, 3)
  setMaxNumOfReflectionPlanes(...)
  v20 = getTime()
  math.randomseed(...)
  math.random()
  math.random()
  math.random()
  updateLoadingBarProgress()
  v19:load()
  addSplitShapesShaderParameterOverwrite("windSnowLeafScale", 0, 0, 0, 80)
  v19 = XMLFile.load("MapsXML", "dataS/maps.xml")
  v19:iterate("maps.map", function(args, v1)
    v2:loadMapFromXML(u0, v1, "", nil, true, true, false)
  end)
  v19:delete()
  updateLoadingBarProgress()
  v20:load("dataS/character/humans/player/playerModels.xml")
  updateLoadingBarProgress()
  registerHandTool("chainsaw", Chainsaw)
  registerHandTool("highPressureWasherLance", HighPressureWasherLance)
  v20 = AnimationCache.new()
  g_animCache = v20
  v20:load(AnimationCache.CHARACTER, "dataS/character/humans/player/animations.i3d")
  updateLoadingBarProgress()
  v20:load(AnimationCache.VEHICLE_CHARACTER, "dataS/character/humans/player/vehicleCharacterAnimations.i3d")
  if Platform.supportsPedestrians then
    v20:load(AnimationCache.PEDESTRIAN, "dataS/character/humans/npc/animations.i3d")
  end
  v20 = AchievementManager.new(nil, g_messageCenter)
  g_achievementManager = v20
  v20:load()
  updateLoadingBarProgress()
  if g_modsDirectory then
    initModDownloadManager(g_modsDirectory, v18, g_minModDescVersion, g_maxModDescVersion, g_isDevelopmentVersion)
  end
  startUpdatePendingMods()
  updateLoadingBarProgress()
  loadDlcs()
  updateLoadingBarProgress()
  v20 = startFrameRepeatMode()
  while true do
    v21 = isModUpdateRunning()
    if not v21 then
      break
    end
    usleep(16000)
  end
  if v20 then
    endFrameRepeatMode()
  end
  if Platform.supportsMods then
    loadInternalMods()
    loadMods()
  end
  if not Platform.isConsole then
    local v25 = getAppBasePath()
    local v26 = getUserProfileAppPath()
    copyFile(v25 .. "VERSION", v26 .. "VERSION", true)
  end
  updateLoadingBarProgress()
  v21 = InputBinding.new(g_modManager, g_messageCenter, GS_IS_CONSOLE_VERSION)
  g_inputBinding = v21
  v21:load()
  if g_kioskMode ~= nil then
    v21:loadInputBindings()
  end
  v21 = InputDisplayManager.new(g_messageCenter, g_inputBinding, g_modManager, GS_IS_CONSOLE_VERSION)
  g_inputDisplayManager = v21
  v21:load()
  if Platform.isMobile then
    v21 = TouchHandler.new()
    g_touchHandler = v21
  end
  updateLoadingBarProgress()
  simulatePhysics(false)
  if v4 then
    v21 = DedicatedServer.new()
    g_dedicatedServer = v21
    v26 = getUserProfileAppPath()
    v21:load(v26 .. "dedicated_server/dedicatedServerConfig.xml")
    v26 = getUserProfileAppPath()
    v21:setGameStatsPath(v26 .. "dedicated_server/gameStats.xml")
  end
  updateLoadingBarProgress()
  v21 = ConnectionManager.new()
  g_connectionManager = v21
  v21 = MasterServerConnection.new()
  g_masterServerConnection = v21
  v21 = Gui.new()
  g_gui = v21
  v21:loadProfiles("dataS/guiProfiles.xml")
  v21 = StartMissionInfo.new()
  g_startMissionInfo = v21
  v21 = SavegameController.new()
  g_savegameController = v21
  v21 = InAppPurchaseController.new()
  g_inAppPurchaseController = v21
  v21 = ShopController.new()
  g_shopController = v21
  v21 = ModHubController.new()
  g_modHubController = v21
  v21 = SettingsModel.new()
  g_settingsModel = v21
  updateLoadingBarProgress()
  AchievementsScreen.register()
  if Platform.isMobile then
    MobileSettingsScreen.register()
  end
  v21 = AnimalScreen.register()
  g_animalScreen = v21
  v21 = CareerScreen.register()
  g_careerScreen = v21
  if Platform.hasContruction then
    ConstructionScreen.register()
  end
  v21 = CreateGameScreen.register()
  g_createGameScreen = v21
  updateLoadingBarProgress()
  CreditsScreen.register()
  v21 = ConnectToMasterServerScreen.register()
  g_connectToMasterServerScreen = v21
  DifficultyScreen.register()
  if Platform.needsSignIn then
    v21 = GamepadSigninScreen.register()
    g_gamepadSigninScreen = v21
  end
  if GS_IS_NETFLIX_VERSION then
    v21 = NetflixSigninScreen.register()
    g_netflixSigninScreen = v21
  end
  v21 = JoinGameScreen.register()
  g_joinGameScreen = v21
  v21 = MainScreen.register()
  g_mainScreen = v21
  updateLoadingBarProgress()
  MapSelectionScreen.register()
  if Platform.supportsMods then
    v21 = ModHubScreen.register()
    g_modHubScreen = v21
  end
  v21 = ModSelectionScreen.register()
  g_modSelectionScreen = v21
  v21 = MPLoadingScreen.register()
  g_mpLoadingScreen = v21
  v21 = MultiplayerScreen.register()
  g_multiplayerScreen = v21
  if Platform.hasEsports then
    v21 = EsportsScreen.register()
    g_esportsScreen = v21
  end
  ScenariosScreen.register()
  v21 = ServerDetailScreen.register()
  g_serverDetailScreen = v21
  updateLoadingBarProgress()
  v21 = SettingsScreen.register()
  g_settingsScreen = v21
  updateLoadingBarProgress()
  v21 = ShopConfigScreen.register()
  g_shopConfigScreen = v21
  v21 = ShopMenu.register()
  g_shopMenu = v21
  updateLoadingBarProgress()
  if Platform.showStartupScreen and g_skipStartupScreen == false then
    v21 = StartupScreen.register()
    g_startupScreen = v21
  end
  if Platform.hasWardrobe then
    v21 = WardrobeScreen.register()
    g_wardrobeScreen = v21
  end
  v21 = WorkshopScreen.register()
  g_workshopScreen = v21
  updateLoadingBarProgress()
  v21 = InGameMenu.register()
  g_inGameMenu = v21
  updateLoadingBarProgress()
  AnimalDialog.register()
  if Platform.hasAnimalTradingDialog then
    AnimalTradingDialog.register()
  end
  ChatDialog.register()
  ColorPickerDialog.register()
  v21 = ConnectionFailedDialog.register()
  g_connectionFailedDialog = v21
  DenyAcceptDialog.register()
  EditFarmDialog.register()
  updateLoadingBarProgress()
  GameRateDialog.register()
  InfoDialog.register()
  LeaseYesNoDialog.register()
  LicensePlateDialog.register()
  MessageDialog.register()
  updateLoadingBarProgress()
  ModHubScreenshotDialog.register()
  OptionDialog.register()
  PasswordDialog.register()
  PlaceableInfoDialog.register()
  RefillDialog.register()
  updateLoadingBarProgress()
  SavegameConflictDialog.register()
  SavegameUploadDialog.register()
  SavegameUploadProgressDialog.register()
  SellItemDialog.register()
  ServerSettingsDialog.register()
  SiloDialog.register()
  ObjectStorageDialog.register()
  SleepDialog.register()
  updateLoadingBarProgress()
  TextInputDialog.register()
  if Platform.hasTourDialog then
    TourDialog.register()
  end
  TransferMoneyDialog.register()
  UnBanDialog.register()
  if Platform.supportsMods then
    VoteDialog.register()
  end
  YesNoDialog.register()
  updateLoadingBarProgress()
  if g_kioskMode ~= nil then
    v21:initializedGUIClasses()
  end
  updateLoadingBarProgress()
  v21 = createStreamedSample("menuMusic", true)
  g_menuMusic = v21
  loadStreamedSample(g_menuMusic, "data/music/menu.ogg")
  setStreamedSampleGroup(g_menuMusic, AudioGroup.MENU_MUSIC)
  setStreamedSampleVolume(g_menuMusic, 1)
  v22:addVolumeChangedListener(AudioGroup.MENU_MUSIC, function(args, v1, v2)
    if g_menuMusicIsPlayingStarted then
      if 0 < v2 then
        resumeStreamedSample(g_menuMusic)
        return
      end
      pauseStreamedSample(g_menuMusic)
    end
  end, nil)
  if Platform.preShaderContentFiles ~= nil then
    g_preShaderContents = {}
    for v25, v26 in ipairs(Platform.preShaderContentFiles) do
      local v27 = v27:loadI3DFile(v26, false, false)
      table.insert(g_preShaderContents, {step = 0, node = v27})
    end
    g_preShaderContentStepIndex = 1
    if #g_preShaderContents == 0 then
      g_preShaderContents = nil
    end
  end
  updateLoadingBarProgress(true)
  if g_kioskMode ~= nil then
    v22:init()
  end
  if Platform.showStartupScreen then
    -- cmp-jump LOP_JUMPXEQKB R22 aux=0x80000000 -> L1556
    v22:showGui("StartupScreen")
  else
    v22:showGui("MainScreen")
  end
  v22:setShowMouseCursor(true)
  v22 = getCamera()
  g_defaultCamera = v22
  if g_dedicatedServer == nil then
    v25 = getAppBasePath()
    v26 = getAppBasePath()
    v27 = getAppBasePath()
    if Platform.supportsCustomInternetRadios then
      local v29 = getUserProfileAppPath()
      createFolder(v29 .. "music/")
      copyFile(v26 .. "profileTemplate/streamingInternetRadios.xml", v29 .. "music/" .. "streamingInternetRadios.xml", false)
      copyFile(v27 .. "profileTemplate/ReadmeMusic.txt", v29 .. "music/" .. "ReadmeMusic.txt", false)
    end
    local v28 = getAppBasePath()
    v27 = SoundPlayer.new(v28, "https://www.farming-simulator.com/feed/fs2022-radio-station-feed.xml", v26, v22, v25, g_languageShort, AudioGroup.RADIO)
    g_soundPlayer = v27
  end
  v22:init(args)
  if RestartManager.restarting then
    v22:showGui("MainScreen")
    v22:handleRestart()
  end
  SystemConsoleCommands.init()
  if g_dedicatedServer ~= nil then
    v22:start()
  end
  if v7 ~= nil then
    startDevServer(v7, v9)
  end
  if v8 ~= nil then
    startDevClient(v8, v9)
  end
  if v5 ~= nil then
    autoStartLocalSavegame(v5)
  elseif v6 ~= nil then
    autoLoadByURI(v6)
    return
  end
  if GS_PLATFORM_PC then
    registerGlobalActionEvents(g_inputBinding)
  elseif GS_IS_CONSOLE_VERSION and g_isDevelopmentVersion then
    v22, v23 = v22:registerActionEvent(InputAction.CONSOLE_DEBUG_TOGGLE_FPS, InputBinding.NO_EVENT_TARGET, toggleShowFPS, false, true, false, true)
    if v22 then
      v24:setActionEventTextVisibility(v23, false)
    end
    v24, v25 = v24:registerActionEvent(InputAction.CONSOLE_DEBUG_TOGGLE_STATS, InputBinding.NO_EVENT_TARGET, toggleStatsOverlay, false, true, false, true)
    if v24 then
      v24:setActionEventTextVisibility(v25, false)
    end
  end
  if Platform.supportsMods then
    postInitMods()
  end
  g_logFilePrefixTimestamp = true
  setFileLogPrefixTimestamp(g_logFilePrefixTimestamp)
  v22 = StartParams.getIsSet("invitePlatformServerId")
  if v22 then
    v22 = StartParams.getValue("invitePlatformServerId")
    g_invitePlatformServerId = v22
    v22 = StartParams.getValue("inviteRequestUserName")
    v23 = base64Decode(v22)
    g_inviteRequestUserName = v23
    g_handleInviteRequest = true
  end
  if Platform.needsSignIn then
    v22 = StartParams.getIsSet("autoSignIn")
    if v22 then
      v22 = StartParams.getIsSet("restart")
      if v22 and g_gui.currentGuiName ~= "GamepadSigninScreen" then
        g_autoSignIn = true
      end
    end
  end
  if Platform.hasAdjustableFrameLimit then
    setFramerateLimiter(true, Platform.defaultFrameLimit)
  end
  Profiler.startProfiler()
  return true
end
function update(dt)
  if Platform.isMobile then
    checkInsets()
  end
  if g_preShaderContents ~= nil then
    g_preShaderContents[g_preShaderContentStepIndex].step = g_preShaderContents[g_preShaderContentStepIndex].step + 1
    if g_preShaderContents[g_preShaderContentStepIndex].step == 0 then
      local v4 = getRootNode()
      link(v4, g_preShaderContents[g_preShaderContentStepIndex].node)
      v4 = getCamera()
      setTranslation(v4, 0, 0, 5)
      Logging.devInfo("PreShaderContent (%d/%d): render default", g_preShaderContentStepIndex, #g_preShaderContents)
    elseif g_preShaderContents[g_preShaderContentStepIndex].step == 1 then
      v4 = getCamera()
      local v10 = getViewDistanceCoeff()
      setTranslation(v4, 0, 0, 30 * v10 + 2)
      Logging.devInfo("PreShaderContent (%d/%d): render blended", g_preShaderContentStepIndex, #g_preShaderContents)
    else
      if g_preShaderContents[g_preShaderContentStepIndex].step == 2 then
        Logging.devInfo("PreShaderContent (%d/%d): compiling done", g_preShaderContentStepIndex, #g_preShaderContents)
        g_preShaderContentStepIndex = g_preShaderContentStepIndex + 1
      end
    end
    if #g_preShaderContents < g_preShaderContentStepIndex then
      Logging.devInfo("PreShaderContent: finished shader compilation")
      for v6, v7 in ipairs(g_preShaderContents) do
        delete(v7.node)
      end
      g_preShaderContents = nil
      v4 = getCamera()
      setTranslation(v4, 0, 0, 0)
    end
  end
  if g_autoSignIn then
    g_autoSignIn = nil
    v1:signIn()
  end
  if g_handleInviteRequest then
    g_invitePlatformServerId = nil
    g_inviteRequestUserName = nil
    g_handleInviteRequest = nil
    acceptedGameInvite(g_invitePlatformServerId, g_inviteRequestUserName)
  end
  g_time = g_time + dt
  g_currentDt = dt
  local v1 = getPhysicsDt()
  g_physicsDt = v1
  v1 = getPhysicsDtUnclamped()
  g_physicsDtUnclamped = v1
  v1 = getPhysicsDtNonInterpolated()
  g_physicsDtNonInterpolated = v1
  if 0 < g_physicsDtNonInterpolated then
    g_physicsDtLastValidNonInterpolated = g_physicsDtNonInterpolated
  end
  v1 = netGetTime()
  g_networkTime = v1
  g_physicsNetworkTime = g_physicsNetworkTime + g_physicsDtUnclamped
  g_physicsTimeLooped = (g_physicsTimeLooped + g_physicsDt * 10) % 65535
  g_updateLoopIndex = g_updateLoopIndex + 1
  if 1073741824 < g_updateLoopIndex then
    g_updateLoopIndex = 0
  end
  v1 = math.max(g_physicsDt, 0.001)
  g_physicsDt = v1
  v1 = math.max(g_physicsDtUnclamped, 0.001)
  g_physicsDtUnclamped = v1
  if g_currentTest ~= nil then
    g_currentTest.update(dt)
    return
  end
  v1:update(dt)
  v1:update(dt)
  v1:update(dt)
  v1:update(dt)
  v1:update()
  v1:update(dt)
  v1:update(dt)
  Profiler.update(dt)
  if g_nextModRecommendationTime < g_time and g_currentMission == nil and g_dedicatedServer == nil and g_modHubController ~= nil then
    v1:updateRecommendationSystem()
    g_nextModRecommendationTime = g_time + 1800000
  end
  v1:update(dt)
  if g_currentMission ~= nil and g_currentMission.isLoaded and g_gui.currentGuiName ~= "GamepadSigninScreen" then
    v1:preUpdate(dt)
  end
  if Platform.hasFriendInvitation and g_showDeeplinkingFailedMessage == true and g_gui.currentGuiName ~= "GamepadSigninScreen" then
    g_showDeeplinkingFailedMessage = false
    if GS_PLATFORM_XBOX then
      v1 = PlatformPrivilegeUtil.checkMultiplayer(onShowDeepLinkingErrorMsg, nil, nil, 30000)
      -- if not v1 then goto L388 end
      onShowDeepLinkingErrorMsg()
    else
      onShowDeepLinkingErrorMsg()
    end
  end
  if GS_PLATFORM_GGP then
    v1 = getIsKeyboardAvailable()
    if v1 then
      v1 = v1:getValue(GameSettings.SETTING.INPUT_HELP_MODE)
      -- if v1 == GS_INPUT_HELP_MODE_AUTO then goto L416 end
      v1:setValue(GameSettings.SETTING.INPUT_HELP_MODE, GS_INPUT_HELP_MODE_AUTO)
    else
      v1 = getIsKeyboardAvailable()
      if not v1 then
        v1 = v1:getValue(GameSettings.SETTING.INPUT_HELP_MODE)
        if v1 ~= GS_INPUT_HELP_MODE_GAMEPAD then
          v1:setValue(GameSettings.SETTING.INPUT_HELP_MODE, GS_INPUT_HELP_MODE_GAMEPAD)
        end
      end
    end
  end
  if g_currentMission ~= nil then
    v1 = v1:getAllowsGuiDisplay()
    -- if not v1 then goto L456 end
  end
  v1:update(dt)
  if g_currentMission ~= nil and g_currentMission.isLoaded and g_gui.currentGuiName ~= "GamepadSigninScreen" then
    v1:update(dt)
  end
  if g_soundPlayer ~= nil then
    v1:update(dt)
  end
  if g_gui.currentGuiName == "MainScreen" then
    v1:update(dt)
  end
  v1:update(dt)
  if g_kioskMode ~= nil then
    v1:update(dt)
  end
  Input.updateFrameEnd()
  if GS_PLATFORM_PC and g_dedicatedServer == nil then
    v1 = getIsUpdateDownloadFinished()
    if v1 then
      g_updateDownloadFinished = true
    end
    if g_updateDownloadFinished and not g_updateDownloadFinishedDialogShown then
      if g_gui.currentGuiName ~= "MainScreen" then
        -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L561
        -- if not g_currentMission.gameStarted then goto L561 end
      end
      g_updateDownloadFinishedDialogShown = true
      local v2 = v2:getText("ui_updateDownloadFinishedText")
      InfoDialog.show(...)
    end
  end
  if g_pendingRestartData ~= nil then
    performRestart()
  end
end
function draw()
  if g_currentTest ~= nil then
    g_currentTest.draw()
    return
  end
  dt:draw()
  if g_currentMission ~= nil then
    local dt = dt:getAllowsGuiDisplay()
    -- if not v0 then goto L28 end
  end
  dt:draw()
  if g_currentMission ~= nil and g_currentMission.isLoaded and g_gui.currentGuiName ~= "GamepadSigninScreen" then
    dt:draw()
  end
  if g_inputBinding ~= nil then
    dt:draw()
  end
  if g_kioskMode ~= nil then
    dt:draw()
  end
  if g_isDevelopmentConsoleScriptModTesting then
    local textSize = getCorrectTextSize(0.05)
    renderText(0.2, 0.85, textSize, "CONSOLE SCRIPTS. DEVELOPMENT USE ONLY")
  end
  if g_showSafeFrame then
    if g_safeFrameOverlay == nil then
      dt = createImageOverlay("data/shared/graph_pixel.png")
      g_safeFrameOverlay = dt
      setOverlayColor(g_safeFrameOverlay, 1, 0, 0, 0.4)
    end
    renderOverlay(g_safeFrameOverlay, g_safeFrameOffsetX, 0, 1 - 2 * g_safeFrameOffsetX, g_safeFrameOffsetY)
    renderOverlay(g_safeFrameOverlay, g_safeFrameOffsetX, 1 - g_safeFrameOffsetY, 1 - 2 * g_safeFrameOffsetX, g_safeFrameOffsetY)
    renderOverlay(g_safeFrameOverlay, 0, 0, g_safeFrameOffsetX, 1)
    renderOverlay(g_safeFrameOverlay, 1 - g_safeFrameOffsetX, 0, g_safeFrameOffsetX, 1)
    if g_safeFrameMajorOverlay == nil then
      dt = createImageOverlay("data/shared/graph_pixel.png")
      g_safeFrameMajorOverlay = dt
      setOverlayColor(g_safeFrameMajorOverlay, 1, 0, 0, 0.4)
    end
    renderOverlay(g_safeFrameMajorOverlay, g_safeFrameMajorOffsetX, 0, 1 - 2 * g_safeFrameMajorOffsetX, g_safeFrameMajorOffsetY)
    renderOverlay(g_safeFrameMajorOverlay, g_safeFrameMajorOffsetX, 1 - g_safeFrameMajorOffsetY, 1 - 2 * g_safeFrameMajorOffsetX, g_safeFrameMajorOffsetY)
    renderOverlay(g_safeFrameMajorOverlay, 0, 0, g_safeFrameMajorOffsetX, 1)
    renderOverlay(g_safeFrameMajorOverlay, 1 - g_safeFrameMajorOffsetX, 0, g_safeFrameMajorOffsetX, 1)
  end
  if g_drawGuiHelper then
    if g_guiHelperOverlay == nil then
      dt = createImageOverlay("data/shared/graph_pixel.png")
      g_guiHelperOverlay = dt
    end
    if g_guiHelperOverlay ~= 0 then
      setTextColor(1, 1, 1, 1)
      local v1 = getScreenMode()
      dt, v1 = getScreenModeInfo(...)
      -- TODO: structure LOP_FORNPREP (pc 269, target 291)
      renderOverlay(g_guiHelperOverlay, g_guiHelperSteps, 0, 1 / dt, 1)
      renderOverlay(g_guiHelperOverlay, 0, g_guiHelperSteps, 1, 1 / v1)
      -- TODO: structure LOP_FORNLOOP (pc 290, target 270)
      -- TODO: structure LOP_FORNPREP (pc 294, target 322)
      local v8 = getCorrectTextSize(0.02)
      local v9 = tostring(0.05)
      renderText(...)
      v8 = getCorrectTextSize(0.02)
      v9 = tostring(0.05)
      renderText(...)
      -- TODO: structure LOP_FORNLOOP (pc 321, target 295)
      setTextAlignment(RenderText.ALIGN_RIGHT)
      setTextColor(0, 0, 0, 0.9)
      local v5 = getCorrectTextSize(0.025)
      local v6 = string.format("%1.4f", g_lastMousePosY)
      renderText(...)
      setTextColor(1, 1, 1, 1)
      v5 = getCorrectTextSize(0.025)
      v6 = string.format("%1.4f", g_lastMousePosY)
      renderText(...)
      setTextAlignment(RenderText.ALIGN_CENTER)
      setTextColor(0, 0, 0, 0.9)
      v5 = getCorrectTextSize(0.025)
      v6 = string.format("%1.4f", g_lastMousePosX)
      renderText(...)
      setTextColor(1, 1, 1, 1)
      v5 = getCorrectTextSize(0.025)
      v6 = string.format("%1.4f", g_lastMousePosX)
      renderText(...)
      setTextAlignment(RenderText.ALIGN_LEFT)
      renderOverlay(g_guiHelperOverlay, g_lastMousePosX - 5 / dt, g_lastMousePosY, 2 * 5 / dt, 1 / v1)
      renderOverlay(g_guiHelperOverlay, g_lastMousePosX, g_lastMousePosY - 5 / dt, 1 / dt, 2 * 5 / dt)
    end
  end
  if Platform.requiresConnectedGamepad then
    dt = getNumOfGamepads()
    if dt == 0 and g_gui.currentGuiName ~= "StartupScreen" and g_gui.currentGuiName ~= "GamepadSigninScreen" then
      if Platform.isXbox then
        requestGamepadSignin(Input.BUTTON_2, true, false)
      end
      setTextBold(true)
      setTextAlignment(RenderText.ALIGN_CENTER)
      setTextColor(0, 0, 0, 1)
      dt = getCorrectTextSize(0.05)
      v1 = v1:getText("ui_pleaseReconnectController")
      renderText(0.497, 0.6053333333333333, dt, v1)
      renderText(0.5, 0.6053333333333333, dt, v1)
      renderText(0.503, 0.6053333333333333, dt, v1)
      renderText(0.497, 0.6, dt, v1)
      renderText(0.503, 0.6, dt, v1)
      renderText(0.497, 0.5946666666666667, dt, v1)
      renderText(0.5, 0.5946666666666667, dt, v1)
      renderText(0.503, 0.5946666666666667, dt, v1)
      setTextColor(1, 1, 1, 1)
      renderText(0.5, 0.6, dt, v1)
      setTextBold(false)
      setTextColor(1, 1, 1, 1)
      setTextAlignment(RenderText.ALIGN_LEFT)
      if g_darkControllerOverlay == nil then
        local v2 = createImageOverlay("dataS/menu/blank.png")
        g_darkControllerOverlay = v2
        setOverlayColor(g_darkControllerOverlay, 1, 1, 1, 0.3)
      else
        renderOverlay(g_darkControllerOverlay, 0, 0, 1, 1)
      end
    end
  end
  if g_showRawInput then
    setOverlayColor(GuiElement.debugOverlay, 0, 0, 0, 0.9)
    renderOverlay(GuiElement.debugOverlay, 0, 0, 1, 1)
    setTextAlignment(RenderText.ALIGN_LEFT)
    dt = getNumOfGamepads()
    -- TODO: structure LOP_FORNPREP (pc 677, target 832)
    -- TODO: structure LOP_FORNPREP (pc 684, target 695)
    v9 = getHasGamepadButton(Input.BUTTON_1 + 0, 0)
    if v9 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 694, target 685)
    -- TODO: structure LOP_FORNPREP (pc 701, target 710)
    local v10 = getHasGamepadAxis(0, v4)
    if v10 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 709, target 702)
    local v7 = getGamepadVersionId(v4)
    if v7 < 65535 then
      v9 = string.format("Version: %04X ", v7)
    end
    local v16 = getGamepadName(v4)
    local v17 = getGamepadProductId(v4)
    local v18 = getGamepadVendorId(v4)
    local v13 = string.format("Index: %d Name: %s PID: %04X VID: %04X %s#Buttons: %d #Axes: %d", v4, v16, v17, v18, v8, v5, v6)
    renderText(...)
    -- TODO: structure LOP_FORNPREP (pc 756, target 792)
    local v12 = getHasGamepadAxis(0, v4)
    if v12 then
      v12 = getGamepadAxisPhysicalName(0, v4)
      local v21 = getGamepadAxisLabel(0, v4)
      local v22 = getInputAxis(0, v4)
      v17 = string.format(...)
      renderText(...)
    end
    -- TODO: structure LOP_FORNLOOP (pc 791, target 757)
    -- TODO: structure LOP_FORNPREP (pc 797, target 830)
    v12 = getInputButton(0, v4)
    if 0 < v12 then
      v12 = getGamepadButtonPhysicalName(0, v4)
      v21 = getGamepadButtonLabel(0, v4)
      v17 = string.format(...)
      renderText(...)
    end
    -- TODO: structure LOP_FORNLOOP (pc 829, target 798)
    -- TODO: structure LOP_FORNLOOP (pc 831, target 678)
    if dt == 0 then
      renderText(0.025, v1 - 0.016, 0.025, "No gamepads found")
    end
  end
  dt:draw()
end
function postAnimationUpdate(dt)
  for v4, v5 in pairs(g_postAnimationUpdateCallbacks) do
    v5.callbackFunc(v5.callbackTarget, dt, v5.callbackArguments)
  end
end
function cleanUp()
  if g_safeFrameOverlay ~= nil then
    delete(g_safeFrameOverlay)
  end
  if g_safeFrameMajorOverlay ~= nil then
    delete(g_safeFrameMajorOverlay)
  end
  if g_guiHelperOverlay ~= nil then
    delete(g_guiHelperOverlay)
  end
  if GuiElement.debugOverlay ~= nil then
    delete(GuiElement.debugOverlay)
  end
  deleteDrawingOverlays()
  dt:disconnectFromMasterServer()
  dt:shutdownAll()
  dt:removePortMapping()
  dt:delete()
  dt:delete()
  dt:delete()
  dt:delete()
  dt:delete()
  dt:delete()
  dt:delete()
  dt:delete()
  delete(g_menuMusic)
  delete(g_savegameXML)
  Profiler.delete()
  dt:save()
  if g_soundPlayer ~= nil then
    dt:delete()
    g_soundPlayer = nil
  end
  if g_soundMixer ~= nil then
    dt:delete()
    g_soundMixer = nil
  end
  dt:delete()
  dt:clearEntireSharedI3DFileCache(g_isDevelopmentVersion)
  dt:delete()
  if g_isDevelopmentVersion then
    setFileLogPrefixTimestamp(false)
    printActiveEntities()
    setFileLogPrefixTimestamp(g_logFilePrefixTimestamp)
  end
  dt:delete()
  SystemConsoleCommands.delete()
end
function doExit()
  cleanUp()
  print("Application quit")
  requestExit()
end
function doRestart(restartProcess, args)
  if g_invitePlatformServerId ~= nil then
    local userName = base64Encode(g_inviteRequestUserName)
  end
  if Platform.needsSignIn and g_isSignedIn then
    userName = getStartMode()
    if userName ~= RestartManager.START_SCREEN_GAMEPAD_SIGNIN then
    end
  end
  g_pendingRestartData = {restartProcess = restartProcess, args = args}
end
function checkInsets()
  local dt, v1, v2, v3 = getSafeFrameInsets()
  if g_insetLeft == nil then
    g_insetLeft = dt
    g_insetRight = v1
    g_insetTop = v2
    g_insetBottom = v3
  end
  if dt == g_insetLeft and v1 == g_insetRight and v2 == g_insetTop then
    -- if v3 == g_insetBottom then goto L46 end
  end
  g_insetLeft = dt
  g_insetRight = v1
  g_insetTop = v2
  g_insetBottom = v3
  v4:publish(MessageType.INSETS_CHANGED)
end
function performRestart()
  if g_pendingRestartData == nil then
    return
  end
  cleanUp()
  if not g_pendingRestartData.restartProcess then
  end
  print("Application restart " .. v1)
  restartApplication(dt.restartProcess, dt.args)
end
function loadLanguageSettings(xmlFile)
  local numLanguages = getNumOfLanguages()
  -- TODO: structure LOP_FORNPREP (pc 8, target 15)
  local v6 = getLanguageCode(0)
  {}[v6] = 0
  -- TODO: structure LOP_FORNLOOP (pc 14, target 9)
  local v3 = getLanguage()
  self:iterate("settings.languages.language", function(self, numLanguages)
    local v2 = v2:getString(numLanguages .. "#code")
    local v3 = v3:getString(numLanguages .. "#short")
    local v4 = v4:getString(numLanguages .. "#suffix")
    if u1[v2] ~= nil then
      if u1[v2] ~= u2 then
        -- if u3 then goto L38 end
      end
      u3 = true
      g_language = v5
      g_languageShort = v3
      g_languageSuffix = v4
      local v6 = getIsLanguageEnabled(v5)
      if v6 then
        u4[v5] = true
      end
    end
  end)
  g_availableLanguagesTable = {}
  g_availableLanguageNamesTable = {}
  -- TODO: structure LOP_FORNPREP (pc 42, target 93)
  if not {}[0] then
    -- if 0 ~= g_language then goto L92 end
  end
  table.insert(g_availableLanguagesTable, v8)
  if getLanguageNativeName ~= nil then
    local v11 = getLanguageNativeName(v8)
    table.insert(...)
  else
    v11 = getLanguageName(v8)
    table.insert(...)
  end
  if v8 == g_language then
    g_settingsLanguageGUI = #g_availableLanguagesTable - 1
  end
  -- TODO: structure LOP_FORNLOOP (pc 92, target 43)
  if GS_IS_CONSOLE_VERSION then
    local v9 = getSystemLanguage()
    v6:setValue(...)
  end
end
function loadUserSettings(gameSettings, settingsModel)
  local v2 = getUserName()
  v2 = v2:trim()
  if v2 ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000003 -> L11
  end
  self:setValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME, "Player")
  local v6 = getMasterVolume()
  self:setValue(...)
  v6 = getGamepadVibrationEnabled()
  self:setValue(...)
  if g_savegameXML ~= nil then
    delete(g_savegameXML)
  end
  v6 = getAppBasePath()
  local v7 = getUserProfileAppPath()
  g_savegamePath = v7 .. "gameSettings.xml"
  copyFile(v6 .. "profileTemplate/gameSettingsTemplate.xml", g_savegamePath, false)
  local v4 = loadXMLFile("savegameXML", g_savegamePath)
  g_savegameXML = v4
  syncProfileFiles()
  v4 = getXMLInt(g_savegameXML, "gameSettings#revision")
  local v5 = loadXMLFile("GameSettingsTemplate", v6 .. "profileTemplate/gameSettingsTemplate.xml")
  v6 = getXMLInt(v5, "gameSettings#revision")
  delete(v5)
  if v4 ~= nil then
    -- if v4 == v6 then goto L117 end
  end
  copyFile(v3, g_savegamePath, true)
  delete(g_savegameXML)
  v7 = loadXMLFile("savegameXML", g_savegamePath)
  g_savegameXML = v7
  if settingsModel ~= nil then
    settingsModel:refresh()
  end
  self:loadFromXML(g_savegameXML)
  local v10 = v10:getValue(GameSettings.SETTING.VOLUME_RADIO)
  v7:setAudioGroupVolumeFactor(...)
  v10 = v10:getValue(GameSettings.SETTING.VOLUME_VEHICLE)
  v7:setAudioGroupVolumeFactor(...)
  v10 = v10:getValue(GameSettings.SETTING.VOLUME_MUSIC)
  v7:setAudioGroupVolumeFactor(...)
  v10 = v10:getValue(GameSettings.SETTING.VOLUME_ENVIRONMENT)
  v7:setAudioGroupVolumeFactor(...)
  v10 = v10:getValue(GameSettings.SETTING.VOLUME_GUI)
  v7:setAudioGroupVolumeFactor(...)
  local v9 = v9:getValue(GameSettings.SETTING.VOLUME_MASTER)
  v7:setMasterVolume(...)
  local v8 = v8:getValue(GameSettings.SETTING.VOLUME_VOICE)
  VoiceChatUtil.setOutputVolume(...)
  v8 = v8:getValue(GameSettings.SETTING.VOLUME_VOICE_INPUT)
  VoiceChatUtil.setInputVolume(...)
  v8 = v8:getValue(GameSettings.SETTING.VOICE_MODE)
  VoiceChatUtil.setInputMode(...)
  if Platform.hasCloudSyncSetting then
    v8 = v8:getValue(GameSettings.SETTING.CLOUD_SYNC_ALLOW_METERED_CONNECTION)
    setCloudAllowMeteredConnection(...)
  end
  v7:reload()
  if g_extraContentSystem ~= nil then
    v7:reset()
    v7:loadFromProfile()
  end
end
function registerGlobalActionEvents(inputManager)
  local v2, v3 = self:registerActionEvent(InputAction.TAKE_SCREENSHOT, InputBinding.NO_EVENT_TARGET, function()
    if g_screenshotsDirectory ~= nil then
      local v5 = getDate("%Y_%m_%d_%H_%M_%S")
      print("Saving screenshot: " .. g_screenshotsDirectory .. "fsScreen_" .. v5 .. ".png")
      saveScreenshot(g_screenshotsDirectory .. "fsScreen_" .. v5 .. ".png")
      return
    end
    print("Unable to find screenshot directory!")
  end, false, true, false, true)
  if v2 then
    self:setActionEventTextVisibility(v3, false)
  end
  local v6, v7 = self:registerActionEvent(InputAction.PUSH_TO_TALK, InputBinding.NO_EVENT_TARGET, function(self, v1, v2)
    if v2 ~= 1 then
    end
    v3(true)
  end, true, true, false, true)
  self:setActionEventTextVisibility(v7, false)
  if g_addTestCommands and Platform.isPC then
    v6:registerInputActionEvent()
  end
end
function updateAspectRatio(aspect)
  if g_referenceScreenWidth / g_referenceScreenHeight < aspect then
    g_aspectScaleX = g_referenceScreenWidth / g_referenceScreenHeight / aspect
    g_aspectScaleY = 1
    return
  end
  g_aspectScaleX = 1
  g_aspectScaleY = aspect / v1
end
g_postAnimationUpdateCallbacks = {}
function addPostAnimationCallback(callbackFunc, callbackTarget, callbackArguments)
  table.insert(g_postAnimationUpdateCallbacks, {callbackFunc = callbackFunc, callbackTarget = callbackTarget, callbackArguments = callbackArguments})
  return {callbackFunc = callbackFunc, callbackTarget = callbackTarget, callbackArguments = callbackArguments}
end
function removePostAnimationCallback(callbackDataToRemove)
  for v4, v5 in pairs(g_postAnimationUpdateCallbacks) do
    if not (v5 == callbackDataToRemove) then
      continue
    end
    table.remove(g_postAnimationUpdateCallbacks, v4)
  end
end
function updateLoadingBarProgress(isLast)
  g_curNumLoadingBarStep = g_curNumLoadingBarStep + 1
  if isLast then
    -- if g_curNumLoadingBarStep / g_maxNumLoadingBarSteps < 1 then goto L17 end
  end
  if 1 < v1 then
    print("Invalid g_maxNumLoadingBarSteps. Last step number is " .. g_curNumLoadingBarStep)
  end
  updateLoadingBar(v1)
end
function onShowDeepLinkingErrorMsg()
  g_deepLinkingInfo = nil
  local v1 = v1:getText("ui_failedToConnectToGame")
  ConnectionFailedDialog.show(v1, OnInGameMenuMenu)
  g_showDeeplinkingFailedMessage = false
end
function startDevServer(savegameId, uniqueUserId)
  local v2 = StartParams.getIsSet("restart")
  if v2 then
    print("Skipping server auto start due to restart")
    return
  end
  local v7 = tostring(savegameId)
  print("Start developer mp server (Savegame-Id: " .. v7 .. ")")
  v2:onMultiplayerClick()
  v2:onClickCreateGame()
  local v4 = tonumber(savegameId)
  v2 = v2:getSavegame(...)
  if v2 ~= SavegameController.NO_SAVEGAME then
    -- if v2.isValid then goto L52 end
  end
  print("    Savegame not found! Please select savegame manually!")
  return
  v4 = tonumber(savegameId)
  g_careerScreen.savegameList.selectedIndex = v4
  v3:onStartAction()
  if g_gui.currentGuiName == "ModSelectionScreen" then
    v3:onClickOk()
  end
  local v6 = getUserName()
  g_autoDevMP = {serverName = "InternalTest_" .. v6}
  v3:setText(g_autoDevMP.serverName)
  g_createGameScreen.autoAccept = true
  v3:onClickOk()
end
function startDevClient(dt, v1)
  local v2 = StartParams.getIsSet("restart")
  if v2 then
    print("Skipping client auto join due to restart")
    return
  end
  print("Start developer mp client")
  v2:onMultiplayerClick()
  if dt ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R0 aux=0x8000000a -> L28
  end
  local v3 = getUserName()
  g_autoDevMP = {serverName = "InternalTest_" .. v3}
  v2:onContinue()
end
function autoStartLocalSavegame(savegameId)
  local v6 = tostring(savegameId)
  print("Auto start local savegame (Id: " .. v6 .. ")")
  v1:setIsMultiplayer(false)
  v1:showGui("CareerScreen")
  local v3 = tonumber(savegameId)
  v1:setSelectedIndex(v3, true)
  v3 = tonumber(savegameId)
  local v1 = v1:getSavegame(...)
  if v1 ~= SavegameController.NO_SAVEGAME then
    -- if v1.isValid then goto L56 end
  end
  print("    Savegame not found! Please select savegame manually!")
  return
  g_careerScreen.currentSavegame = v1
  v2:onStartAction()
  if g_gui.currentGuiName == "ModSelectionScreen" then
    v2:onClickOk()
  end
end
function autoLoadByURI(dt)
  local v1 = string.split(dt, ":")
  local v2 = string.split(v1[2], "&")
  for v7, v8 in ipairs(v2) do
    local v9 = string.split(v8, "=")
    v3[v9[1]] = v9[2]
  end
  if v3.map == nil then
    log("URI Parameter \"map\" not set! Cannot auto load from URI.")
    return
  end
  AutoLoadParams.enable = true
  v8 = tonumber(v3.x)
  AutoLoadParams.x = v8
  v8 = tonumber(v3.z)
  AutoLoadParams.z = v8
  v7:setIsMultiplayer(false)
  v7:showGui("CareerScreen")
  MapSelectionScreen.selectMapByNameAndFile(MapSelectionScreen, v3.map, "default")
  v7:setSelectedIndex(1, true)
  v7 = v7:getSavegame(1)
  g_careerScreen.currentSavegame = v7
  g_startMissionInfo.canStart = true
  v8:changeScreen(nil, CareerScreen)
  MapSelectionScreen.onClickOk(MapSelectionScreen)
end
function connectToServer(platformServerId)
  local v1 = storeHaveDlcsChanged()
  if not v1 then
    v1 = haveModsChanged()
    if not v1 then
      -- if not g_forceNeedsDlcsAndModsReload then goto L17 end
    end
  end
  g_forceNeedsDlcsAndModsReload = false
  reloadDlcsAndMods()
  v1 = storeAreDlcsCorrupted()
  if v1 then
    local v2 = v2:getText("ui_dlcsCorruptRedownload")
    InfoDialog.show(v2, g_mainScreen.onDlcCorruptClick, g_mainScreen)
    return
  end
  g_deepLinkingInfo = {platformServerId = platformServerId}
  v1:disconnectFromMasterServer()
  v1:shutdownAll()
  v1:changeScreen(nil, CareerScreen)
  v1:onMultiplayerClick()
  v1:onClickJoinGame()
end
