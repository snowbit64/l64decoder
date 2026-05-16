source("dataS/scripts/events/VehicleRemoveEvent.lua")
source("dataS/scripts/events/OnCreateLoadedObjectEvent.lua")

BaseMission = {}
local BaseMission_mt = Class(BaseMission)

BaseMission.STATE_INTRO = 0
BaseMission.STATE_READY = 1
BaseMission.STATE_RUNNING = 2
BaseMission.STATE_FINISHED = 3
BaseMission.STATE_FAILED = 5
BaseMission.STATE_CONTINUED = 6

BaseMission.INPUT_CONTEXT_VEHICLE = "VEHICLE"
BaseMission.INPUT_CONTEXT_PAUSE = "PAUSE"
BaseMission.INPUT_CONTEXT_SYNCHRONIZING = "MP_SYNC"

function BaseMission.new(baseDirectory, customMt, missionCollaborators)
	local self = setmetatable({}, customMt or BaseMission_mt)
	self.baseDirectory = baseDirectory
	self.server = g_server
	self.client = g_client

	if missionCollaborators ~= nil then
		self.messageCenter = missionCollaborators.messageCenter
		self.savegameController = missionCollaborators.savegameController
		self.inputManager = missionCollaborators.inputManager
		self.inputDisplayManager = missionCollaborators.inputDisplayManager
		self.achievementManager = missionCollaborators.achievementManager
		self.modManager = missionCollaborators.modManager
		self.fillTypeManager = missionCollaborators.fillTypeManager
		self.fruitTypeManager = missionCollaborators.fruitTypeManager
		self.guiSoundPlayer = missionCollaborators.guiSoundPlayer
	else
		self.messageCenter = g_messageCenter
	end

	self.hud = nil
	self.placeableSystem = PlaceableSystem.new(self)
	self.itemSystem = ItemSystem.new(self)
	self.onCreateObjectSystem = OnCreateObjectSystem.new(self)
	self.beehiveSystem = BeehiveSystem.new(self)

	self.cancelLoading = false
	self.vertexBufferMemoryUsage = 0
	self.indexBufferMemoryUsage = 0
	self.textureMemoryUsage = 0
	self.waitForDLCVerification = false
	self.waitForCorruptDlcs = false
	self.finishedFirstUpdate = false
	self.waterY = -200
	self.isInsideBuilding = false
	self.players = {}
	self.connectionsToPlayer = {}
	self.updateables = {}
	self.nonUpdateables = {}
	self.drawables = {}
	self.triggerMarkers = {}
	self.triggerMarkersAreVisible = true
	self.helpTriggers = {}
	self.helpTriggersAreVisible = true
	self.dynamicallyLoadedObjects = {}
	self.isPlayerFrozen = false
	self.environment = nil
	self.state = BaseMission.STATE_INTRO
	self.isRunning = false
	self.isLoaded = false
	self.numLoadingTasks = 0
	self.isMissionStarted = false
	self.controlledVehicle = nil
	self.controlledVehicles = {}
	self.controlPlayer = true
	self.isToggleVehicleAllowed = true
	self.vehicles = {}
	self.enterables = {}
	self.interactiveVehicles = {}
	self.attachables = {}
	self.inputAttacherJoints = {}
	self.ownedItems = {}
	self.leasedVehicles = {}
	self.vehiclesToDelete = {}
	self.loadSpawnPlaces = {}
	self.storeSpawnPlaces = {}
	self.restrictedZones = {}
	self.usedLoadPlaces = {}
	self.usedStorePlaces = {}
	self.vehiclesToSpawn = {}
	self.vehiclesToSpawnDirty = false
	self.vehiclesToSpawnLoading = false
	self.nodeToObject = {}
	self.maps = {}
	self.surfaceSounds = {}
	self.cuttingSounds = {}
	self.preSimulateTime = 4000
	self.snapAIDirection = true

	self.maxNumHirables = Platform.gameplay.maxNumHirables
	self.time = 0
	self.activatableObjectsSystem = ActivatableObjectsSystem.new(self)
	self.pauseListeners = {}
	self.paused = false
	self.pressStartPaused = false
	self.manualPaused = false
	self.suspendPaused = false
	self.lastNonPauseGameState = GameState.PLAY
	self.isLoadingMap = false
	self.numLoadingMaps = 0
	self.loadingMapBaseDirectory = ""
	self.objectsToClassName = {}
	self.vehiclesToAttach = {}
	self.lastInteractionTime = -1
	self.navigationMarker = NavigationMarker.new()
	self.isExitingGame = false

	return self
end

function BaseMission:initialize()
	self:subscribeSettingsChangeMessages()
	self:subscribeGuiOpenCloseMessages()
	self.messageCenter:subscribe(MessageType.GAME_STATE_CHANGED, self.onGameStateChange, self)
	self.hud = self:createHUD()
	self.placementManager = PlacementManager.new()
	self.benchmark = Benchmark.new()
end

function BaseMission:createHUD()
	local class = Platform.isMobile and MobileHUD or HUD
	local hud = class.new(g_server ~= nil, g_client ~= nil, GS_IS_CONSOLE_VERSION, self.messageCenter, g_i18n, self.inputManager or g_inputBinding, self.inputDisplayManager or g_inputDisplayManager, self.modManager or g_modManager, self.fillTypeManager or g_fillTypeManager, self.fruitTypeManager or g_fruitTypeManager, self.guiSoundPlayer or g_gui.guiSoundPlayer, self, g_farmManager, g_farmlandManager)
	return hud
end

function BaseMission:delete()
	self.messageCenter:unsubscribeAll(self)
	PlatformNodeRemover.reset()
	self.isExitingGame = true
	self.isRunning = false
	self:setMapTargetHotspot(nil)

	if BaseMission.MAP_TARGET_MARKER ~= nil then
		delete(BaseMission.MAP_TARGET_MARKER)
		BaseMission.MAP_TARGET_MARKER = nil
	end

	if self:getIsClient() and not self.controlPlayer and self.controlledVehicle ~= nil then
		self:onLeaveVehicle()
	end

	for k, v in pairs(self.nonUpdateables) do
		v:delete()
		self.nonUpdateables[k] = nil
	end

	if g_server ~= nil then
		g_server:delete()
		g_server = nil
	end

	if g_client ~= nil then
		g_client:delete()
		g_client = nil
	end

	setCamera(g_defaultCamera)

	if self.hud ~= nil then
		self.messageCenter:unsubscribeAll(self.hud)
		self.hud:setEnvironment(nil)
		self.hud:delete()
		self.hud = nil
	end

	if self.placementManager ~= nil then
		self.placementManager:delete()
	end

	if self.benchmark ~= nil then
		self.benchmark:delete()
	end

	if self.player ~= nil then
		self.player:delete()
	end

	if self.trafficSystem ~= nil then
		self.trafficSystem:setEnabled(false)
		self.trafficSystem:reset()
	end

	if self.pedestrianSystem ~= nil then
		self.pedestrianSystem:delete()
		self.pedestrianSystem = nil
	end

	g_jobManager:cancelAllJobs()

	for _, v in pairs(self.vehicles) do
		v:delete()
	end
	self.vehicles = {}
	self.leasedVehicles = {}
	self.ownedItems = {}

	for _, v in ipairs(self.vehiclesToDelete) do
		if not v.isDeleted then
			v:delete()
		end
	end

	self.placeableSystem:delete()
	self.itemSystem:delete()
	self.onCreateObjectSystem:delete()
	self.beehiveSystem:delete()

	for _, v in pairs(self.dynamicallyLoadedObjects) do
		delete(v)
	end

	if self.environment ~= nil then
		self.environment:setEnvironment(nil)
		self.environment:delete()
		self.environment = nil
	end

	for k, v in pairs(self.updateables) do
		v:delete()
		self.updateables[k] = nil
	end

	for _, v in pairs(g_modEventListeners) do
		if v.deleteMap ~= nil then
			v:deleteMap()
		end
	end

	for _, v in pairs(self.maps) do
		delete(v)
	end

	for _, v in pairs(self.surfaceSounds) do
		g_soundManager:deleteSample(v.sample)
	end
	self.surfaceSounds = {}

	for _, v in pairs(self.cuttingSounds) do
		g_soundManager:deleteSample(v)
	end
	self.cuttingSounds = {}

	self:unregisterActionEvents()

	removeConsoleCommand("gsCameraFovSet")
	removeConsoleCommand("gsRender360Screenshot")
	removeConsoleCommand("gsVehicleRemoveAll")
	removeConsoleCommand("gsItemRemoveAll")
	removeConsoleCommand("gsShaderParamsSet")

	g_currentMission = nil
	g_client = nil
end

function BaseMission:load()
	self:startLoadingTask()
	self.controlPlayer = true
	self.controlledVehicle = nil

	addConsoleCommand("gsCameraFovSet", "Sets camera field of view angle", "consoleCommandSetFOV", self)

	if self:getIsServer() and g_addTestCommands then
		addConsoleCommand("gsRender360Screenshot", "Renders 360 screenshots from current camera position", "consoleCommandRender360Screenshot", self)
		addConsoleCommand("gsVehicleRemoveAll", "Removes all vehicles from current mission", "consoleCommandVehicleRemoveAll", self)
		addConsoleCommand("gsItemRemoveAll", "Removes all items from current mission", "consoleCommandItemRemoveAll", self)
		addConsoleCommand("gsShaderParamsSet", "Sets shader parameters for given nodeName and shader parameter name", "consoleCommandSetShaderParameter", self)
	end

	self:finishLoadingTask()
end

function BaseMission:startLoadingTask()
	self.numLoadingTasks = self.numLoadingTasks + 1
	if self.numLoadingTasks == 1 then
		setStreamLowPriorityI3DFiles(false)
		if self.missionDynamicInfo.isMultiplayer then
			netSetIsEventProcessingEnabled(false)
		end
	end
end

function BaseMission:finishLoadingTask()
	self.numLoadingTasks = self.numLoadingTasks - 1
	if self.numLoadingTasks <= 0 then
		if not self.isLoaded then
			self:onFinishedLoading()
		end
		setStreamLowPriorityI3DFiles(true)
		if self.missionDynamicInfo.isMultiplayer then
			netSetIsEventProcessingEnabled(true)
		end
	end
end

function BaseMission:onFinishedLoading()
	self.isLoaded = true
	g_currentMission = self
	g_client = self.client
end

function BaseMission:canStartMission()
	if self:getIsServer() then
		return true
	end

	for _, vehicle in pairs(self.vehicles) do
		if not vehicle:getIsSynchronized() then
			return false
		end
	end

	if self.player == nil then
		return false
	end

	return true
end

function BaseMission:onStartMission()
	self:fadeScreen(-1, 1500, nil)
	self.isMissionStarted = true

	self:setShowTriggerMarker(g_gameSettings:getValue("showTriggerMarker"))
	self:setShowHelpTrigger(g_gameSettings:getValue("showHelpTrigger"))

	if self:getIsClient() then
		g_inputBinding:setContext(Player.INPUT_CONTEXT_NAME, true, true)
		self:registerActionEvents()
		self:registerPauseActionEvents()
	end

	if Profiler.IS_INITIALIZED then
		g_profiler:abort()
	end
end

function BaseMission:onObjectCreated(object)
	if object:isa(Player) then
		self.players[object.rootNode] = object
		if object.isOwner then
			self.player = object
			g_localPlayer:setPlayer(object)
		end
		if self:getIsServer() then
			self.connectionsToPlayer[object.networkInformation.creatorConnection] = object
		end
		self.messageCenter:publish(MessageType.PLAYER_CREATED, object)
		return
	end

	if object:isa(Vehicle) or object:isa(RailroadVehicle) then
		self:addVehicle(object)
		return
	end

	if object:isa(Farm) then
		g_farmManager:onFarmObjectCreated(object)
	end
end

function BaseMission:onObjectDeleted(object)
	if object:isa(Player) then
		if self.player == object then
			self.player = nil
		end
		self.players[object.rootNode] = nil
		if self:getIsServer() then
			self.connectionsToPlayer[object.networkInformation.creatorConnection] = nil
		end
		return
	end

	if object:isa(Vehicle) or object:isa(RailroadVehicle) then
		if object.isAddedToMission then
			self:removeVehicle(object, false)
		end
		return
	end

	if object:isa(Farm) then
		g_farmManager:onFarmObjectDeleted(object)
	end
end

function BaseMission:loadMap(filename, addPhysics, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
	if addPhysics == nil then
		addPhysics = true
	end

	local modName, baseDirectory = Utils.getModNameAndBaseDirectory(filename)
	if self.numLoadingMaps == 0 then
		self.loadingMapModName = modName
		self.loadingMapBaseDirectory = baseDirectory
		resetModOnCreateFunctions()

		for mod, isLoaded in pairs(g_modIsLoaded) do
			if isLoaded and g_modManager:isModMap(mod) then
				_G[mod].g_onCreateUtil.activateOnCreateFunctions()
			end
		end

		if modName ~= nil then
			_G[modName].g_onCreateUtil.activateOnCreateFunctions()
		end
		self.isLoadingMap = true
	elseif self.loadingMapBaseDirectory ~= baseDirectory then
		print("Warning: Asynchronous map loading from different mods. onCreate functions will not work correctly")
	end

	self.numLoadingMaps = self.numLoadingMaps + 1
	if asyncCallbackFunction ~= nil then
		g_i3DManager:loadI3DFileAsync(filename, true, addPhysics, self.loadMapFinished, self, {
			filename = filename,
			asyncCallbackFunction = asyncCallbackFunction,
			asyncCallbackObject = asyncCallbackObject,
			asyncCallbackArguments = asyncCallbackArguments
		})
	else
		Logging.error("Loading the map in sync is not allowed anymore! Please call loadMap with a async callback.")
		printCallstack()
	end
end

function BaseMission:loadMapFinished(node, failedReason, arguments)
	g_messageCenter:publish(MessageType.LOADING_TARGET_HIT, MPLoadingScreen.LOAD_TARGETS.MAP)

	if node ~= 0 then
		self:findDynamicObjects(node)
		PlatformNodeRemover.removeNodes()
	end

	if Profiler.IS_INITIALIZED then
		Profiler.setMapRootNode(node)
	end

	self.numLoadingMaps = self.numLoadingMaps - 1
	if self.numLoadingMaps == 0 then
		self.isLoadingMap = false
		resetModOnCreateFunctions()
		self.loadingMapModName = nil
		self.loadingMapBaseDirectory = ""
	end

	if node ~= 0 and not self.cancelLoading then
		table.insert(self.maps, node)
		link(getRootNode(), node)
	end

	for _, v in pairs(g_modEventListeners) do
		if v.loadMap ~= nil then
			v:loadMap(arguments.filename)
		end
	end

	if not self.cancelLoading then
		self:setShowFieldInfo(g_gameSettings:getValue("showFieldInfo"))
	end

	if arguments.asyncCallbackFunction ~= nil then
		arguments.asyncCallbackFunction(arguments.asyncCallbackObject, node, failedReason, arguments.asyncCallbackArguments)
	end
end

function BaseMission:findDynamicObjects(node)
	local numChildren = getNumOfChildren(node)
	for i = 0, numChildren - 1 do
		local child = getChildAt(node, i)
		if getRigidBodyType(child) == RigidBodyType.DYNAMIC then
			local isShape = getHasClassId(child, ClassIds.SHAPE)
			local mpCreatePhysicsObject = Utils.getNoNil(getUserAttribute(child, "mpCreatePhysicsObject"), false)
			local mpRemoveRigidBody = Utils.getNoNil(getUserAttribute(child, "mpRemoveRigidBody"), true)

			if mpCreatePhysicsObject then
				local physicsObject = PhysicsObject.new(self:getIsServer(), self:getIsClient())
				g_currentMission:addNodeObject(child, physicsObject)
				physicsObject:loadOnCreate(child)
				physicsObject:register(true)
			elseif mpRemoveRigidBody then
				setRigidBodyType(child, RigidBodyType.NONE)
			end
		else
			self:findDynamicObjects(child)
		end
	end
end

function BaseMission:loadMapSounds(xmlFilename, baseDirectory)
	if not self:getIsClient() then
		return
	end

	local xmlFile = loadXMLFile("mapSoundXML", xmlFilename)
	if xmlFile == 0 then
		return
	end

	self.surfaceSounds = {}
	local i = 0
	while true do
		local key = string.format("sound.surface.material(%d)", i)
		if not hasXMLProperty(xmlFile, key) then
			break
		end

		local entry = {}
		entry.type = Utils.getNoNil(getXMLString(xmlFile, key .. "#type"), "wheel")
		entry.materialId = getXMLInt(xmlFile, key .. "#materialId")
		entry.name = getXMLString(xmlFile, key .. "#name")
		local loopCount = getXMLInt(xmlFile, key .. "#loopCount") or 0
		entry.sample = g_soundManager:loadSampleFromXML(xmlFile, "sound.surface", string.format("material(%d)", i), baseDirectory, getRootNode(), loopCount, AudioGroup.ENVIRONMENT, nil, nil)

		if entry.sample ~= nil then
			table.insert(self.surfaceSounds, entry)
		end
		i = i + 1
	end

	self.cuttingSounds = {}
	i = 0
	while true do
		local key = string.format("sound.cutting.sample(%d)", i)
		if not hasXMLProperty(xmlFile, key) then
			break
		end

		local name = getXMLString(xmlFile, key .. "#name")
		local sample = g_soundManager:loadSampleFromXML(xmlFile, "sound.cutting", string.format("sample(%d)", i), baseDirectory, getRootNode(), 1, AudioGroup.ENVIRONMENT, nil, nil)

		if name ~= nil then
			self.cuttingSounds[name] = sample
		else
			print("Warning: a cutting sound does not have a name")
		end
		i = i + 1
	end

	delete(xmlFile)
end

function BaseMission:setLastInteractionTime(timeDelta)
	self.lastInteractionTime = g_time
end

function BaseMission:subscribeSettingsChangeMessages()
	g_messageCenter:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.MONEY_UNIT], self.setMoneyUnit, self)
	g_messageCenter:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_MILES], self.setUseMiles, self)
	g_messageCenter:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_ACRE], self.setUseAcre, self)
	g_messageCenter:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_FAHRENHEIT], self.setUseFahrenheit, self)
	g_messageCenter:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.SHOW_TRIGGER_MARKER], self.setShowTriggerMarker, self)
	g_messageCenter:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.SHOW_HELP_TRIGGER], self.setShowHelpTrigger, self)
	g_messageCenter:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.SHOW_FIELD_INFO], self.setShowFieldInfo, self)
end

function BaseMission:subscribeGuiOpenCloseMessages()
	g_messageCenter:subscribe(MessageType.GUI_BEFORE_OPEN, self.onBeforeMenuOpen, self)
	g_messageCenter:subscribe(MessageType.GUI_AFTER_CLOSE, self.onAfterMenuClose, self)
end

function BaseMission:onBeforeMenuOpen()
	if self.hud ~= nil then
		self.hud:onMenuVisibilityChange(g_gui:getIsOverlayGuiVisible())
	end
end

function BaseMission:onAfterMenuClose()
	if self.hud ~= nil then
		self.hud:onMenuVisibilityChange(false, false)
	end
end

function BaseMission:onGameStateChange(newGameState, oldGameState)
	if newGameState ~= GameState.PAUSED then
		self.lastNonPauseGameState = newGameState
	end
end

function BaseMission:registerActionEvents()
	local _, eventId = g_inputBinding:registerActionEvent(InputAction.PAUSE, self, self.onPause, false, true, false, true)
	g_inputBinding:setActionEventTextVisibility(eventId, false)

	_, eventId = g_inputBinding:registerActionEvent(InputAction.TOGGLE_HELP_TEXT, self, self.onToggleHelpText, false, true, false, true)
	g_inputBinding:setActionEventTextVisibility(eventId, false)

	_, eventId = g_inputBinding:registerActionEvent(InputAction.SWITCH_VEHICLE, self, self.onSwitchVehicle, false, true, false, true, 1)
	g_inputBinding:setActionEventTextVisibility(eventId, false)

	_, eventId = g_inputBinding:registerActionEvent(InputAction.SWITCH_VEHICLE_BACK, self, self.onSwitchVehicle, false, true, false, true, -1)
	g_inputBinding:setActionEventTextVisibility(eventId, false)

	self.activatableObjectsSystem:registerInput()
end

function BaseMission:unregisterActionEvents()
	g_inputBinding:removeActionEventsByTarget(self)
	g_inputBinding:beginActionEventsModification(BaseMission.INPUT_CONTEXT_PAUSE)
	g_inputBinding:removeActionEventsByTarget(self)
	g_inputBinding:endActionEventsModification()
end

function BaseMission:registerPauseActionEvents()
	g_inputBinding:beginActionEventsModification(BaseMission.INPUT_CONTEXT_PAUSE)
	if GS_IS_CONSOLE_VERSION then
		local _, eventId = g_inputBinding:registerActionEvent(InputAction.MENU_ACCEPT, self, self.onConsoleAcceptPause, false, true, false, true)
		g_inputBinding:setActionEventTextVisibility(eventId, false)
	end

	local _, eventId = g_inputBinding:registerActionEvent(InputAction.PAUSE, self, self.onPause, false, true, false, true)
	g_inputBinding:setActionEventTextVisibility(eventId, true)
	g_inputBinding:setActionEventText(eventId, g_i18n:getText("ui_unpause"))
	g_inputBinding:endActionEventsModification()
end

function BaseMission:onPause()
	if self.gameStarted then
		self:setManualPause(not self.manualPaused)
	end
end

function BaseMission:onConsoleAcceptPause()
	if self.gameStarted and self.manualPaused and GS_IS_CONSOLE_VERSION then
		self:setManualPause(false)
	end
end

function BaseMission:onToggleHelpText()
	local showHelp = g_gameSettings:getValue(GameSettings.SETTING.SHOW_HELP_MENU)
	g_gameSettings:setValue(GameSettings.SETTING.SHOW_HELP_MENU, not showHelp)
end

function BaseMission:onSwitchVehicle(_, _, directionValue)
	if not self.isPlayerFrozen and self.isRunning then
		self:toggleVehicle(directionValue)
	end
end
