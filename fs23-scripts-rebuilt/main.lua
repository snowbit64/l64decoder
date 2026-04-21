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
	local profilePath = getUserProfileAppPath()

	if not string.contains(profilePath, "2023") then
		printWarning("Warning: 'setIs3DGraphicsRenderingEnabled' now available, remove stub")
	end
end

if setIs3DAudioRenderingEnabled == nil then
	function setIs3DAudioRenderingEnabled()
	end
else
	local profilePath = getUserProfileAppPath()

	if not string.contains(profilePath, "2023") then
		printWarning("Warning: 'setIs3DAudioRenderingEnabled' now available, remove stub")
	end
end

if getSafeFrameInsets == nil then
	function getSafeFrameInsets()
		return 0, 0, 0, 0
	end
end

if textureFileExists == nil then
	function textureFileExists(path)
		if fileExists(path) then
			return true
		end

		local astPath = string.gsub(path, ".dds", ".ast")

		if fileExists(astPath) then
			return true
		end

		return false
	end
end

AutoLoadParams = {
	enable = false,
	x = 0,
	y = 0,
	z = 0
}
local debugTool = debug
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
g_fovYDefault = math.rad(60)
g_fovYMin = math.rad(45)
g_fovYMax = math.rad(90)
g_uiDebugEnabled = false
g_uiFocusDebugEnabled = false
g_logFilePrefixTimestamp = true
g_vehicleColors = {
	{
		brandColor = "SHARED_WHITE2",
		name = "$l10n_ui_colorWhite"
	},
	{
		brandColor = "SHARED_BEIGE",
		name = "$l10n_ui_colorBeige"
	},
	{
		brandColor = "SHARED_SILVER",
		name = "$l10n_ui_colorSilver"
	},
	{
		brandColor = "SHARED_GREYLIGHT",
		name = "$l10n_ui_colorGreyLight"
	},
	{
		brandColor = "SHARED_GREY",
		name = "$l10n_ui_colorGrey"
	},
	{
		brandColor = "SHARED_GREYDARK",
		name = "$l10n_ui_colorGreyDark"
	},
	{
		brandColor = "SHARED_BLACKONYX",
		name = "$l10n_ui_colorBlackOnyx"
	},
	{
		brandColor = "SHARED_BLACKJET",
		name = "$l10n_ui_colorBlackJet"
	},
	{
		brandColor = "JOHNDEERE_YELLOW1",
		name = "John Deere"
	},
	{
		brandColor = "JCB_YELLOW1",
		name = "JCB"
	},
	{
		brandColor = "CHALLENGER_YELLOW1",
		name = "Challenger"
	},
	{
		brandColor = "SCHOUTEN_ORANGE1",
		name = "Schouten"
	},
	{
		brandColor = "FENDT_RED1",
		name = "Fendt"
	},
	{
		brandColor = "CASEIH_RED1",
		name = "Case IH"
	},
	{
		brandColor = "MASSEYFERGUSON_RED",
		name = "Massey Ferguson"
	},
	{
		brandColor = "HARDI_RED",
		name = "Hardi"
	},
	{
		brandColor = "NEWHOLLAND_BLUE2",
		name = "$l10n_ui_colorAzul"
	},
	{
		brandColor = "RABE_BLUE1",
		name = "Rabe"
	},
	{
		brandColor = "LEMKEN_BLUE1",
		name = "Lemken"
	},
	{
		brandColor = "NEWHOLLAND_BLUE1",
		name = "New Holland"
	},
	{
		brandColor = "BOECKMANN_BLUE1",
		name = "Boeckmann"
	},
	{
		brandColor = "GOLDHOFER_BLUE",
		name = "Goldhofer"
	},
	{
		brandColor = "SHARED_BLUENAVY",
		name = "$l10n_ui_colorBlueNavy"
	},
	{
		brandColor = "LIZARD_PURPLE1",
		name = "$l10n_ui_colorPurple"
	},
	{
		brandColor = "VALTRA_GREEN2",
		name = "Valtra"
	},
	{
		brandColor = "DEUTZ_GREEN4",
		name = "Deutz Fahr"
	},
	{
		brandColor = "JOHNDEERE_GREEN1",
		name = "John Deere"
	},
	{
		brandColor = "FENDT_NEWGREEN1",
		name = "Fendt Nature Green"
	},
	{
		brandColor = "FENDT_OLDGREEN1",
		name = "Fendt Classic"
	},
	{
		brandColor = "KOTTE_GREEN2",
		name = "Kotte"
	},
	{
		brandColor = "CLAAS_GREEN1",
		name = "Claas"
	},
	{
		brandColor = "LIZARD_OLIVE1",
		name = "$l10n_ui_colorGreenOlive"
	},
	{
		brandColor = "LIZARD_ECRU1",
		name = "$l10n_ui_colorBeige"
	},
	{
		brandColor = "SHARED_BROWN",
		name = "$l10n_ui_colorBrown"
	},
	{
		brandColor = "SHARED_REDCRIMSON",
		name = "$l10n_ui_colorRedCrimson"
	},
	{
		brandColor = "LIZARD_PINK1",
		name = "$l10n_ui_colorPink"
	}
}
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
g_networkTime = netGetTime()
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
	local debugPlatformId = nil

	if StartParams.getIsSet("platform") then
		local debugPlatform = string.trim(StartParams.getValue("platform") or "")

		if PlatformId[debugPlatform] ~= nil then
			debugPlatformId = PlatformId[debugPlatform]
		elseif debugPlatform == "NETFLIX" then
			GS_IS_NETFLIX_VERSION = true
		else
			log(string.format("Error: Invalid platform '%s'", debugPlatform))
		end
	end

	if debugPlatformId ~= nil then
		function getPlatformId()
			return debugPlatformId
		end
	end

	local platformId = getPlatformId()
	GS_PLATFORM_ID = platformId
	GS_PLATFORM_PC = platformId == PlatformId.WIN or platformId == PlatformId.MAC
	GS_PLATFORM_XBOX = platformId == PlatformId.XBOX_ONE or platformId == PlatformId.XBOX_SERIES
	GS_PLATFORM_PLAYSTATION = platformId == PlatformId.PS4 or platformId == PlatformId.PS5
	GS_PLATFORM_GGP = platformId == PlatformId.GGP
	GS_PLATFORM_SWITCH = platformId == PlatformId.SWITCH
	GS_PLATFORM_PHONE = platformId == PlatformId.ANDROID or platformId == PlatformId.IOS
	GS_IS_CONSOLE_VERSION = GS_PLATFORM_XBOX or GS_PLATFORM_PLAYSTATION
	GS_IS_MOBILE_VERSION = GS_PLATFORM_PHONE or GS_PLATFORM_SWITCH
end

function checkInsets()
	local insetLeft, insetRight, insetTop, insetBottom = getSafeFrameInsets()

	if g_insetLeft == nil then
		g_insetLeft = insetLeft
		g_insetRight = insetRight
		g_insetTop = insetTop
		g_insetBottom = insetBottom
	end

	if insetLeft == g_insetLeft and insetRight == g_insetRight and insetTop == g_insetTop and insetBottom == g_insetBottom then
		return
	end

	g_insetLeft = insetLeft
	g_insetRight = insetRight
	g_insetTop = insetTop
	g_insetBottom = insetBottom

	g_messageCenter:publish(MessageType.INSETS_CHANGED)
end

function autoLoadByURI(uri)
	local parts = string.split(uri, ":")
	local pairsList = string.split(parts[2], "&")
	local params = {}

	for _, pair in ipairs(pairsList) do
		local kv = string.split(pair, "=")
		params[kv[1]] = kv[2]
	end

	if params.map == nil then
		log("URI Parameter \"map\" not set! Cannot auto load from URI.")

		return
	end

	AutoLoadParams.enable = true
	AutoLoadParams.x = tonumber(params.x)
	AutoLoadParams.z = tonumber(params.z)

	g_mainScreen:setIsMultiplayer(false)
	g_mainScreen:showGui("CareerScreen")
	MapSelectionScreen.selectMapByNameAndFile(MapSelectionScreen, params.map, "default")
	g_careerScreen:setSelectedIndex(1, true)

	g_careerScreen.currentSavegame = g_careerScreen:getSavegame(1)
	g_startMissionInfo.canStart = true

	g_gui:changeScreen(nil, CareerScreen)
	MapSelectionScreen.onClickOk(MapSelectionScreen)
end

g_postAnimationUpdateCallbacks = {}

function postAnimationUpdate(dt)
	for _, callbackData in pairs(g_postAnimationUpdateCallbacks) do
		callbackData.callbackFunc(callbackData.callbackTarget, dt, callbackData.callbackArguments)
	end
end

function addPostAnimationCallback(callbackFunc, callbackTarget, callbackArguments)
	local callbackData = {
		callbackFunc = callbackFunc,
		callbackTarget = callbackTarget,
		callbackArguments = callbackArguments
	}

	table.insert(g_postAnimationUpdateCallbacks, callbackData)

	return callbackData
end

function removePostAnimationCallback(callbackDataToRemove)
	for i, callbackData in pairs(g_postAnimationUpdateCallbacks) do
		if callbackData == callbackDataToRemove then
			table.remove(g_postAnimationUpdateCallbacks, i)
		end
	end
end

function updateAspectRatio(aspect)
	if g_referenceScreenWidth / g_referenceScreenHeight < aspect then
		g_aspectScaleX = g_referenceScreenWidth / g_referenceScreenHeight / aspect
		g_aspectScaleY = 1

		return
	end

	g_aspectScaleX = 1
	g_aspectScaleY = aspect / (g_referenceScreenWidth / g_referenceScreenHeight)
end

function updateLoadingBarProgress(isLast)
	g_curNumLoadingBarStep = g_curNumLoadingBarStep + 1

	local progress = g_curNumLoadingBarStep / g_maxNumLoadingBarSteps

	if isLast then
		progress = 1
	end

	if 1 < progress then
		print("Invalid g_maxNumLoadingBarSteps. Last step number is " .. g_curNumLoadingBarStep)
	end

	updateLoadingBar(progress)
end

function onShowDeepLinkingErrorMsg()
	g_deepLinkingInfo = nil

	ConnectionFailedDialog.show(g_i18n:getText("ui_failedToConnectToGame"), OnInGameMenuMenu)

	g_showDeeplinkingFailedMessage = false
end

function doExit()
	cleanUp()
	print("Application quit")
	requestExit()
end

function doRestart(restartProcess, args)
	if g_invitePlatformServerId ~= nil then
		args = args .. "-invitePlatformServerId " .. g_invitePlatformServerId .. " -inviteRequestUserName " .. base64Encode(g_inviteRequestUserName)
	end

	if Platform.needsSignIn and g_isSignedIn and getStartMode() ~= RestartManager.START_SCREEN_GAMEPAD_SIGNIN then
		args = args .. " -autoSignIn"
	end

	g_pendingRestartData = {
		restartProcess = restartProcess,
		args = args
	}
end

function performRestart()
	if g_pendingRestartData == nil then
		return
	end

	cleanUp()

	local modeDescription = g_pendingRestartData.restartProcess and "with new process" or "in place"

	print("Application restart " .. modeDescription)
	restartApplication(g_pendingRestartData.restartProcess, g_pendingRestartData.args)
end


