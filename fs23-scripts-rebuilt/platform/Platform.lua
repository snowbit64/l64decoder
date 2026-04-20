-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Platform = {}
function Platform.init()
  local v1 = getPlatformId()
  Platform.id = v1
  Platform.gameplay = {}
  Platform.ingameMap = {}
  Platform.ui = {}
  Platform.blockedKeyboardCombos = {}
  Platform.lockedInputActionNames = {}
  Platform.playerInfo = {}
  Platform.Default.apply(Platform)
  if GS_PLATFORM_XBOX then
    Platform.Console.apply(Platform)
    Platform.Xbox.apply(Platform)
    return
  end
  if GS_PLATFORM_PLAYSTATION then
    Platform.Console.apply(v0)
    Platform.Playstation.apply(v0)
    return
  end
  if GS_PLATFORM_GGP then
    Platform.Stadia.apply(v0)
    return
  end
  if GS_PLATFORM_SWITCH then
    Platform.Mobile.apply(v0)
    Platform.Switch.apply(v0)
    return
  end
  if GS_PLATFORM_ID == PlatformId.IOS then
    Platform.Mobile.apply(v0)
    Platform.IOS.apply(v0)
    -- if not GS_IS_NETFLIX_VERSION then goto L172 end
    Platform.applyNetflix()
    return
  end
  if GS_PLATFORM_ID == PlatformId.ANDROID then
    Platform.Mobile.apply(v0)
    Platform.Android.apply(v0)
    if GS_IS_NETFLIX_VERSION then
      Platform.applyNetflix()
    end
  end
end
Platform.Default = {}
function Platform.Default:apply()
  print("Platform: loading defaults")
  self.isPC = GS_PLATFORM_PC
  self.isSteam = GS_IS_STEAM_VERSION
  self.hasMainMenuNotifications = not g_isServerStreamingVersion
  self.showVideoGIANTS = true
  self.showVideoFS = true
  self.showStartupScreen = true
  self.showGamerTagInMainScreen = false
  self.canChangeGamerTag = true
  self.showRentServerWebButton = true
  self.hasFriendInvitation = false
  self.hasFriendFilter = false
  self.hasNativeProfiles = false
  self.hasNetworkSettings = true
  self.hasExtraContent = true
  self.hasWardrobe = true
  self.hasMapSelection = true
  self.autoStartAfterLoad = false
  self.hasContruction = true
  self.hasIngameMenuGameFrame = false
  self.hasAnimalTradingDialog = false
  self.hasTourDialog = false
  self.hasDifficulty = true
  self.hasAdjustableFrameLimit = true
  self.frameLimits = {30, 60, 90, 120, 144, 240}
  self.defaultFrameLimit = 60
  self.guiPrefixes = {}
  self.gameLogos = {en = "dataS/menu/main_logo_en.png"}
  self.supportsMods = true
  self.allowsScriptMods = true
  self.allowsModDirectoryOverride = self.isPC
  self.hasSlotLimitation = true
  self.supportsCustomInternetRadios = self.isPC
  self.hasLimitedModSpace = false
  self.supportsPushToTalk = true
  self.hasTextChat = true
  self.hasAudioChat = false
  self.hasPlayer = true
  self.allowPlayerPickUp = true
  self.supportsPedestrians = true
  self.supportsFoliageBending = true
  self.canQuitApplication = true
  self.supportsMultiplayer = true
  self.hasMainScreenLanguageSelection = false
  self.hasCloudSyncSetting = false
  self.hasCloudSync = false
  self.hasGrassFilterEnabledByDefault = false
  self.supportsSavegameDebugUpload = false
  self.hasEsports = true
  self.gameRatingEnabled = false
  self.gameRatingURL = "lp/fs23-rating.php"
  self.hasHints = false
  self.safeFrameOffsetX = 25
  self.safeFrameOffsetY = 25
  self.safeFrameMajorOffsetX = 25
  self.safeFrameMajorOffsetY = 25
  self.minFovY = 45
  self.maxFovY = 120
  self.forcedUIResolution = nil
  self.usesFixedExposure = false
  self.verifyMultiplayerAvailabilityInMenu = Platform.Default.verifyMultiplayerAvailabilityInMenu
  self.ui.drawHudOnDialog = false
  self.preShaderContentFiles = nil
  self.gameplay.hasLoans = true
  self.gameplay.hasVehicleSales = true
  self.gameplay.defaultTimeScale = 5
  self.gameplay.timeScaleSettings = {0.5, 1, 2, 3, 5, 6, 10, 15, 30, 60, 120, 240, 360}
  self.gameplay.timeScaleDevSettings = {2000, 12000, 60000}
  self.gameplay.canSellFromMenu = false
  self.gameplay.sprayLevelMaxValue = 2
  self.gameplay.harvestScaleRation = {0.45, 0.15, 0.15, 0.2, 0.025, 0.025}
  self.gameplay.useSprayDiffuseMaps = true
  self.gameplay.useMultipleSprayLevels = true
  self.gameplay.usePlowCounter = true
  self.gameplay.useLimeCounter = true
  self.gameplay.useStubbleShred = true
  self.gameplay.useRolling = true
  self.gameplay.ingameMapFruitsPerPage = 15
  self.gameplay.supportsWithering = true
  self.gameplay.maxNumHirables = math.huge
  self.gameplay.canVisitPOI = true
  self.gameplay.supportSeasonalGrowth = true
  self.gameplay.supportSnow = true
  self.gameplay.autoActivateTrigger = false
  self.gameplay.canCreateFields = true
  self.gameplay.treeCutFarmlandRestrictions = true
  self.gameplay.hasDynamicPallets = true
  self.gameplay.hasVehicleConfigs = true
  self.gameplay.hasWeeder = true
  self.gameplay.automaticDischarge = false
  self.gameplay.automaticFilling = false
  self.gameplay.automaticAttach = false
  self.gameplay.automaticBaleDrop = false
  self.gameplay.automaticLights = false
  self.gameplay.automaticPipeUnfolding = false
  self.gameplay.automaticVehicleControl = false
  self.gameplay.keepFoldingWhileDetached = false
  self.gameplay.foldAfterAIFinished = false
  self.gameplay.lightsProfile = nil
  self.gameplay.useWorldCameraInside = true
  self.gameplay.useWorldCameraOutside = true
  self.gameplay.hasShadowFocusBox = true
  self.gameplay.hasVehicleCharacterIdleAnimations = true
  self.gameplay.allowVehicleCharacterIKDirtyUpdate = true
  self.gameplay.hasDetachedPowerTakeOffs = true
  self.gameplay.hasTMRMixing = true
  self.gameplay.dischargeSpeedFactor = 1
  self.gameplay.maxCameraZoomFactor = 1
  self.gameplay.dirtDurationScale = 1
  self.gameplay.hasVehicleDamage = true
  self.gameplay.allowSuspensionNodes = true
  self.gameplay.allowTestAreas = true
  self.gameplay.allowAutomaticHeaderTilt = true
  self.gameplay.hasBaleFermentation = true
  self.gameplay.steeringBackSpeedSettings = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
  self.gameplay.disabledShopSpecValues = {}
  self.gameplay.wheelSink = true
  self.gameplay.wheelDensityHeightSmooth = true
  self.gameplay.wheelVisualPressure = true
  self.gameplay.wheelVisualPressureUpdateThreshold = 0.0003
  self.gameplay.wheelTireTracks = true
  self.gameplay.defaultFruitDestruction = true
  self.gameplay.defaultGyroscopeSteering = false
  self.gameplay.defaultCameraTilt = false
  self.gameplay.needHorseCleaning = true
  self.gameplay.canRenameHorses = true
  self.ingameMap.canZoom = true
  self.ingameMap.needsSolidBackground = true
  self.ingameMap.sortsSpatially = false
  self.ingameMap.zoomDefault = 2
  self.ingameMap.zoomSpeedFactor = 0.1
  self.ingameMap.dragStartDistance = 2
  self.ingameMap.taggedHotspotsArePersistent = true
  self.ingameMap.resetZoomOnOpen = true
  self.playerInfo.showVehicleInfo = true
  self.playerInfo.showPlaceableInfo = true
  self.playerInfo.showNPCNames = true
  self.playerInfo.fieldInfoDistance = {5, 5}
end
function Platform.Default.verifyMultiplayerAvailabilityInMenu()
  local v0 = getMultiplayerAvailability()
  if v0 == MultiplayerAvailability.NOT_AVAILABLE then
    v0:disconnectFromMasterServer()
    v0:changeScreen(nil, MainScreen)
  end
  v0 = getNetworkError()
  if v0 then
    v0:disconnectFromMasterServer()
    ConnectionFailedDialog.showMasterServerConnectionFailedReason(MasterServerConnection.FAILED_CONNECTION_LOST, "MainScreen")
  end
end
Platform.Console = {}
function Platform.Console:apply()
  print("Platform: loading console")
  self.isConsole = true
  self.allowsScriptMods = false
  self.allowsModDirectoryOverride = false
  self.hasSlotLimitation = true
  self.canChangeGamerTag = false
  self.hasLimitedModSpace = true
  self.showRentServerWebButton = false
  self.hasFriendInvitation = true
  self.hasFriendFilter = true
  self.hasNativeProfiles = true
  self.hasNetworkSettings = false
  self.hasAdjustableFrameLimit = false
  self.supportsPushToTalk = false
  self.supportsSavegameDebugUpload = true
  self.hasTextChat = false
  self.hasAudioChat = true
  self.canQuitApplication = false
  self.hasNativeStore = true
  self.requiresConnectedGamepad = true
  self.safeFrameOffsetX = 40
  self.safeFrameOffsetY = 40
  self.safeFrameMajorOffsetX = 96
  self.safeFrameMajorOffsetY = 54
  self.forcedUIResolution = 1080
  self.gameplay.maxNumHirables = 6
  self.maxFovY = 90
  local v2 = Files.new("data/shaders/")
  for v5, v6 in ipairs(v2.files) do
    addReplacedCustomShader(v6.filename, "data/shaders/" .. v6.filename)
  end
end
Platform.Xbox = {}
function Platform.Xbox:apply()
  print("Platform: loading Xbox")
  self.isXbox = true
  self.needsSignIn = true
  self.showGamerTagInMainScreen = true
  table.insert(self.guiPrefixes, "xbox_")
end
Platform.Playstation = {}
function Platform.Playstation:apply()
  print("Platform: loading Playstation")
  self.isPlaystation = true
  local v1 = getGameTerritory()
  self.territory = v1
  if self.territory == "" then
    self.territory = nil
  end
  v1 = getPlatformXOSwap()
  self.xoSwap = v1
  table.insert(self.guiPrefixes, "ps_")
  if self.xoSwap then
    table.insert(self.guiPrefixes, "ps_xoSwap_")
  end
  if self.territory ~= nil then
    table.insert(self.guiPrefixes, "ps_" .. self.territory .. "_")
    if self.xoSwap then
      table.insert(self.guiPrefixes, "ps_xoSwap_" .. self.territory .. "_")
    end
  end
end
Platform.Mobile = {}
function Platform.Mobile:apply()
  print("Platform: loading mobile")
  self.isMobile = true
  self.frameLimits = {30}
  self.defaultFrameLimit = 30
  self.showStartupScreen = false
  self.hasMainScreenLanguageSelection = true
  self.hasCloudSyncSetting = true
  self.hasCloudSync = true
  self.hasGrassFilterEnabledByDefault = true
  self.supportsSavegameDebugUpload = true
  self.hasTouchInput = true
  self.supportsMods = false
  self.allowsScriptMods = self.supportsMods
  self.supportsPedestrians = false
  self.supportsFoliageBending = false
  self.hasExtraContent = false
  self.hasWardrobe = false
  self.hasMapSelection = true
  self.autoStartAfterLoad = true
  self.hasContruction = false
  self.hasIngameMenuGameFrame = true
  self.hasAnimalTradingDialog = true
  self.hasTourDialog = true
  self.hasDifficulty = false
  self.hasTouchSliders = true
  self.canQuitApplication = false
  self.supportsMultiplayer = false
  self.hasEsports = false
  self.hasHints = true
  self.hasPlayer = true
  self.allowPlayerPickUp = false
  self.safeFrameOffsetX = 50
  self.safeFrameOffsetY = 50
  self.forcedUIResolution = 1080
  self.gameLogos = {en = "dataS/menu/main_logo_mobile_en.png", de = "dataS/menu/main_logo_mobile_de.png"}
  self.usesFixedExposure = true
  self.preShaderContentFiles = {"data/preShaderContent/map_part1.i3d", "data/preShaderContent/map_part2.i3d", "data/preShaderContent/map_part3.i3d", "data/preShaderContent/map_part4.i3d", "data/preShaderContent/map_part5.i3d", "data/preShaderContent/vehicle_part1.i3d", "data/preShaderContent/vehicle_part2.i3d", "data/preShaderContent/vehicle_part3.i3d", "data/preShaderContent/vehicle_part4.i3d", "data/preShaderContent/vehicle_part5.i3d"}
  self.gameplay.defaultTimeScale = 60
  self.gameplay.timeScaleSettings = {1, 2, 5, 10, 30, 45, 60, 90}
  self.gameplay.hasShortNights = true
  self.gameplay.hasLoans = false
  self.gameplay.hasVehicleSales = false
  self.gameplay.canSellFromMenu = true
  self.gameplay.sprayLevelMaxValue = 1
  self.gameplay.harvestScaleRation = {0.6, 0.2, 0, 0.2, 0, 0}
  self.gameplay.useSprayDiffuseMaps = false
  self.gameplay.useMultipleSprayLevels = false
  self.gameplay.usePlowCounter = true
  self.gameplay.defaultPlowingRequiredEnabled = true
  self.gameplay.useLimeCounter = false
  self.gameplay.useStubbleShred = false
  self.gameplay.useRolling = false
  self.gameplay.ingameMapFruitsPerPage = math.huge
  self.gameplay.supportsWithering = false
  self.gameplay.maxNumHirables = 6
  self.gameplay.canVisitPOI = false
  self.gameplay.supportSeasonalGrowth = false
  self.gameplay.supportSnow = false
  self.gameplay.automaticDischarge = true
  self.gameplay.automaticFilling = false
  self.gameplay.automaticAttach = true
  self.gameplay.automaticBaleDrop = true
  self.gameplay.automaticLights = true
  self.gameplay.automaticPipeUnfolding = true
  self.gameplay.automaticVehicleControl = true
  self.gameplay.keepFoldingWhileDetached = true
  self.gameplay.foldAfterAIFinished = true
  self.gameplay.lightsProfile = GS_PROFILE_LOW
  self.gameplay.useWorldCameraInside = false
  self.gameplay.useWorldCameraOutside = true
  self.gameplay.hasShadowFocusBox = false
  self.gameplay.hasVehicleCharacterIdleAnimations = false
  self.gameplay.allowVehicleCharacterIKDirtyUpdate = false
  self.gameplay.hasDetachedPowerTakeOffs = false
  self.gameplay.hasTMRMixing = false
  self.gameplay.dischargeSpeedFactor = 2
  self.gameplay.maxCameraZoomFactor = 0.6
  self.gameplay.dirtDurationScale = 2
  self.gameplay.hasVehicleDamage = false
  self.gameplay.allowSuspensionNodes = false
  self.gameplay.allowTestAreas = false
  self.gameplay.allowAutomaticHeaderTilt = false
  self.gameplay.hasBaleFermentation = false
  self.gameplay.steeringBackSpeedSettings = {5, 7.5, 10}
  self.gameplay.canCreateFields = false
  self.gameplay.treeCutFarmlandRestrictions = false
  self.gameplay.hasDynamicPallets = false
  self.gameplay.hasVehicleConfigs = false
  self.gameplay.hasWeeder = false
  self.gameplay.needHorseCleaning = false
  self.gameplay.canRenameHorses = false
  self.gameplay.disabledShopSpecValues = {balerBaleSizeRound = true, balerBaleSizeSquare = true, baleWrapperBaleSizeRound = true, baleWrapperBaleSizeSquare = true, baleLoaderBaleSizeRound = true, baleLoaderBaleSizeSquare = true, transmission = true, woodHarvesterMaxTreeSize = true}
  self.ui.drawHudOnDialog = true
  self.gameplay.wheelSink = false
  self.gameplay.wheelDensityHeightSmooth = false
  self.gameplay.wheelVisualPressure = true
  self.gameplay.wheelVisualPressureUpdateThreshold = 0.0025
  self.gameplay.wheelTireTracks = false
  self.gameplay.defaultFruitDestruction = false
  self.ingameMap.canZoom = true
  self.ingameMap.needsSolidBackground = false
  self.ingameMap.sortsSpatially = true
  self.ingameMap.zoomDefault = 1
  self.ingameMap.zoomSpeedFactor = 0.07
  self.ingameMap.dragStartDistance = 3
  self.ingameMap.taggedHotspotsArePersistent = false
  self.ingameMap.resetZoomOnOpen = false
  self.playerInfo.showVehicleInfo = false
  self.playerInfo.showPlaceableInfo = false
  self.playerInfo.showNPCNames = false
  self.playerInfo.fieldInfoDistance = {1, 1}
end
Platform.Switch = {}
function Platform.Switch:apply()
  print("Platform: loading Switch")
  self.isSwitch = true
  self.showStartupScreen = true
  self.showVideoFS = false
  self.hasTouchSliders = false
  self.hasCloudSyncSetting = false
  self.hasCloudSync = false
  self.preShaderContentFiles = nil
  table.insert(self.guiPrefixes, "switch_")
  self.gameLogos = {en = "dataS/menu/main_logo_switch_en.png", de = "dataS/menu/main_logo_switch_de.png"}
  self.gameplay.defaultGyroscopeSteering = false
  self.gameplay.defaultCameraTilt = false
end
Platform.Stadia = {}
function Platform.Stadia:apply()
  print("Platform: loading Stadia")
  self.isStadia = true
  self.supportsMods = false
  self.showGamerTagInMainScreen = true
  self.showRentServerWebButton = false
  self.hasFriendInvitation = true
  self.hasNativeProfiles = true
  self.hasNetworkSettings = false
  self.hasAdjustableFrameLimit = false
  self.maxFovY = 90
  table.insert(self.blockedKeyboardCombos, {"KEY_lshift", "KEY_tab"})
  table.insert(self.blockedKeyboardCombos, {"KEY_f8"})
  table.insert(self.blockedKeyboardCombos, {"KEY_f12"})
  table.insert(self.blockedKeyboardCombos, {"KEY_esc"})
  table.insert(self.blockedKeyboardCombos, {"BUTTON_10"})
  table.insert(self.lockedInputActionNames, "TAKE_SCREENSHOT")
  table.insert(self.lockedInputActionNames, "PUSH_TO_TALK")
  table.insert(self.lockedInputActionNames, "TOGGLE_MAP")
  table.insert(self.lockedInputActionNames, "TOGGLE_STORE")
  table.insert(self.guiPrefixes, "stadia_")
end
Platform.IOS = {}
function Platform.IOS:apply()
  print("Platform: loading iOS")
  self.isIOS = true
  self.hasInAppPurchases = true
  self.gameRatingEnabled = true
  self.showGamerTagInMainScreen = false
end
Platform.Android = {}
function Platform.Android:apply()
  print("Platform: loading Android")
  self.isAndroid = true
  self.hasInAppPurchases = true
  self.gameRatingEnabled = true
  self.showGamerTagInMainScreen = false
end
function Platform.applyNetflix()
  Platform.gameRatingEnabled = true
  Platform.gameRatingURL = "lp/fs23Netflix-rating.php"
  Platform.hasInAppPurchases = false
  Platform.isNetflix = true
  Platform.hasCloudSyncSetting = false
  Platform.hasCloudSync = false
  Platform.hasMainMenuNotifications = false
  Platform.gameLogos = {en = "dataS/menu/main_logo_netflix_en.png", de = "dataS/menu/main_logo_netflix_de.png"}
end
Platform.init()
