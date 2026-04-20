-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

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
function BaseMission.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2.baseDirectory = v0
  v2.server = g_server
  v2.client = g_client
  v2.hud = nil
  local v3 = PlaceableSystem.new(v2)
  v2.placeableSystem = v3
  v3 = ItemSystem.new(v2)
  v2.itemSystem = v3
  v3 = OnCreateObjectSystem.new(v2)
  v2.onCreateObjectSystem = v3
  v3 = BeehiveSystem.new(v2)
  v2.beehiveSystem = v3
  v2.cancelLoading = false
  v2.vertexBufferMemoryUsage = 0
  v2.indexBufferMemoryUsage = 0
  v2.textureMemoryUsage = 0
  v2.waitForDLCVerification = false
  v2.waitForCorruptDlcs = false
  v2.finishedFirstUpdate = false
  v2.waterY = -200
  v2.isInsideBuilding = false
  v2.players = {}
  v2.connectionsToPlayer = {}
  v2.updateables = {}
  v2.nonUpdateables = {}
  v2.drawables = {}
  v2.triggerMarkers = {}
  v2.triggerMarkersAreVisible = true
  v2.helpTriggers = {}
  v2.helpTriggersAreVisible = true
  v2.dynamicallyLoadedObjects = {}
  v2.isPlayerFrozen = false
  v2.environment = nil
  v2.state = BaseMission.STATE_INTRO
  v2.isRunning = false
  v2.isLoaded = false
  v2.numLoadingTasks = 0
  v2.isMissionStarted = false
  v2.controlledVehicle = nil
  v2.controlledVehicles = {}
  v2.controlPlayer = true
  v2.isToggleVehicleAllowed = true
  v2.vehicles = {}
  v2.enterables = {}
  v2.interactiveVehicles = {}
  v2.attachables = {}
  v2.inputAttacherJoints = {}
  v2.ownedItems = {}
  v2.leasedVehicles = {}
  v2.vehiclesToDelete = {}
  v2.loadSpawnPlaces = {}
  v2.storeSpawnPlaces = {}
  v2.restrictedZones = {}
  v2.usedLoadPlaces = {}
  v2.usedStorePlaces = {}
  v2.vehiclesToSpawn = {}
  v2.vehiclesToSpawnDirty = false
  v2.vehiclesToSpawnLoading = false
  v2.nodeToObject = {}
  v2.maps = {}
  v2.surfaceSounds = {}
  v2.cuttingSounds = {}
  v2.preSimulateTime = 4000
  v2.snapAIDirection = true
  v2.maxNumHirables = Platform.gameplay.maxNumHirables
  v2.time = 0
  v3 = ActivatableObjectsSystem.new(v2)
  v2.activatableObjectsSystem = v3
  v2.pauseListeners = {}
  v2.paused = false
  v2.pressStartPaused = false
  v2.manualPaused = false
  v2.suspendPaused = false
  v2.lastNonPauseGameState = GameState.PLAY
  v2.isLoadingMap = false
  v2.numLoadingMaps = 0
  v2.loadingMapBaseDirectory = ""
  v2.objectsToClassName = {}
  v2.vehiclesToAttach = {}
  v2.lastInteractionTime = -1
  v3 = NavigationMarker.new()
  v2.navigationMarker = v3
  v2.isExitingGame = false
  return v2
end
function BaseMission:initialize()
  self:subscribeSettingsChangeMessages()
  self:subscribeGuiOpenCloseMessages()
  v1:subscribe(MessageType.GAME_STATE_CHANGED, self.onGameStateChange, self)
  local v1 = self:createHUD()
  self.hud = v1
  v1 = PlacementManager.new()
  self.placementManager = v1
  v1 = Benchmark.new()
  self.benchmark = v1
end
function BaseMission.createHUD(v0)
  if Platform.isMobile then
    -- if MobileHUD then goto L8 end
  end
  if g_server == nil then
  end
  if g_client == nil then
  end
  return v2(v3, true, GS_IS_CONSOLE_VERSION, g_messageCenter, g_i18n, g_inputBinding, g_inputDisplayManager, g_modManager, g_fillTypeManager, g_fruitTypeManager, g_gui.guiSoundPlayer, v0, g_farmManager, g_farmlandManager)
end
function BaseMission:delete()
  v1:unsubscribeAll(self)
  PlatformNodeRemover.reset()
  self.isExitingGame = true
  self.isRunning = false
  self:setMapTargetHotspot(nil)
  if BaseMission.MAP_TARGET_MARKER ~= nil then
    delete(BaseMission.MAP_TARGET_MARKER)
    BaseMission.MAP_TARGET_MARKER = nil
  end
  v1:delete()
  local v1 = self:getIsClient()
  if v1 and not self.controlPlayer and self.controlledVehicle ~= nil then
    self:onLeaveVehicle()
  end
  for v4, v5 in pairs(self.nonUpdateables) do
    v5:delete()
    self.nonUpdateables[v4] = nil
  end
  if g_server ~= nil then
    v1:delete()
    g_server = nil
  end
  if g_client ~= nil then
    v1:delete()
    g_client = nil
  end
  setCamera(g_defaultCamera)
  if self.hud ~= nil then
    v1:unsubscribeAll(self.hud)
    v1:setEnvironment(nil)
    v1:delete()
    self.hud = nil
  end
  if self.placementManager ~= nil then
    v1:delete()
  end
  if self.benchmark ~= nil then
    v1:delete()
  end
  if self.player ~= nil then
    v1:delete()
  end
  if self.trafficSystem ~= nil then
    v1:setEnabled(false)
    v1:reset()
  end
  if self.pedestrianSystem ~= nil then
    v1:delete()
    self.pedestrianSystem = nil
  end
  v1:cancelAllJobs()
  for v4, v5 in pairs(self.vehicles) do
    v5:delete()
  end
  self.vehicles = {}
  self.leasedVehicles = {}
  self.ownedItems = {}
  for v4, v5 in ipairs(self.vehiclesToDelete) do
    if not not v5.isDeleted then
      continue
    end
    v5:delete()
  end
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  for v4, v5 in pairs(self.dynamicallyLoadedObjects) do
    delete(v5)
  end
  if self.environment ~= nil then
    v1:setEnvironment(nil)
    v1:delete()
    self.environment = nil
  end
  for v4, v5 in pairs(self.updateables) do
    v5:delete()
    self.updateables[v4] = nil
  end
  -- TODO: structure LOP_FORNPREP (pc 291, target 306)
  if g_modEventListeners[#g_modEventListeners].deleteMap ~= nil then
    v4:deleteMap()
  end
  -- TODO: structure LOP_FORNLOOP (pc 305, target 292)
  for v4, v5 in pairs(self.maps) do
    delete(v5)
  end
  for v4, v5 in pairs(self.surfaceSounds) do
    v6:deleteSample(v5.sample)
  end
  self.surfaceSounds = {}
  for v4, v5 in pairs(self.cuttingSounds) do
    v6:deleteSample(v5)
  end
  self.cuttingSounds = {}
  self:unregisterActionEvents()
  removeConsoleCommand("gsCameraFovSet")
  removeConsoleCommand("gsRender360Screenshot")
  removeConsoleCommand("gsVehicleRemoveAll")
  removeConsoleCommand("gsItemRemoveAll")
  removeConsoleCommand("gsShaderParamsSet")
  v1:clearAllContexts()
  v1:setCurrentMission(nil)
  v1:setClient(nil)
end
function BaseMission:load()
  self:startLoadingTask()
  self.controlPlayer = true
  self.controlledVehicle = nil
  addConsoleCommand("gsCameraFovSet", "Sets camera field of view angle", "consoleCommandSetFOV", self)
  local v1 = self:getIsServer()
  if v1 and g_addTestCommands then
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
  v1:setCurrentMission(self)
  v1:setClient(g_client)
end
function BaseMission:canStartMission()
  local v1 = self:getIsServer()
  if v1 then
    return true
  end
  -- TODO: structure LOP_FORNPREP (pc 11, target 22)
  local v5 = self.vehicles[1]:getIsSynchronized()
  if not v5 then
    return false
  end
  -- TODO: structure LOP_FORNLOOP (pc 21, target 12)
  if self.player == nil then
  end
  return true
end
function BaseMission:onStartMission()
  self:fadeScreen(-1, 1500, nil)
  self.isMissionStarted = true
  local v3 = v3:getValue("showTriggerMarker")
  self:setShowTriggerMarker(...)
  v3 = v3:getValue("showHelpTrigger")
  self:setShowHelpTrigger(...)
  local v1 = self:getIsClient()
  if v1 then
    v2:setContext(Player.INPUT_CONTEXT_NAME, true, true)
    self:registerActionEvents()
    self:registerPauseActionEvents()
  end
  if Profiler.IS_INITIALIZED then
    v1:abort()
  end
end
function BaseMission:onObjectCreated(object)
  local v2 = object:isa(Player)
  if v2 then
    self.players[object.rootNode] = object
    if object.isOwner then
      self.player = object
      v2:setPlayer(object)
      v2:setPlayer(object)
    end
    v2 = self:getIsServer()
    if v2 then
      self.connectionsToPlayer[object.networkInformation.creatorConnection] = object
    end
    v2:publish(MessageType.PLAYER_CREATED, object)
    return
  end
  v2 = object:isa(Vehicle)
  if not v2 then
    v2 = object:isa(RailroadVehicle)
    -- if not v2 then goto L65 end
  end
  self:addVehicle(object)
  return
  v2 = object:isa(Farm)
  if v2 then
    v2:onFarmObjectCreated(object)
  end
end
function BaseMission:onObjectDeleted(object)
  local v2 = object:isa(Player)
  if v2 then
    if self.player == object then
      self.player = nil
    end
    self.players[object.rootNode] = nil
    v2 = self:getIsServer()
    -- if not v2 then goto L65 end
    self.connectionsToPlayer[object.networkInformation.creatorConnection] = nil
    return
  end
  v2 = object:isa(Vehicle)
  if not v2 then
    v2 = object:isa(RailroadVehicle)
    -- if not v2 then goto L53 end
  end
  if object.isAddedToMission then
    self:removeVehicle(object, false)
    return
    v2 = object:isa(Farm)
    if v2 then
      v2:onFarmObjectDeleted(object)
    end
  end
end
function BaseMission:loadMap(filename, addPhysics, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  if addPhysics == nil then
  end
  local v6, v7 = Utils.getModNameAndBaseDirectory(filename)
  if self.numLoadingMaps == 0 then
    self.loadingMapModName = v6
    self.loadingMapBaseDirectory = v7
    resetModOnCreateFunctions()
    for v11, v12 in pairs(g_modIsLoaded) do
      if not v12 then
        continue
      end
      local v13 = v13:isModMap(v11)
      if not not v13 then
        continue
      end
      _G[v11].g_onCreateUtil.activateOnCreateFunctions()
    end
    if v6 ~= nil then
      _G[v6].g_onCreateUtil.activateOnCreateFunctions()
    end
    self.isLoadingMap = true
  elseif self.loadingMapBaseDirectory ~= v7 then
    print("Warning: Asynchronous map loading from different mods. onCreate functions will not work correctly")
  end
  self.numLoadingMaps = self.numLoadingMaps + 1
  if asyncCallbackFunction ~= nil then
    v9:loadI3DFileAsync(filename, true, addPhysics, self.loadMapFinished, self, {filename = filename, asyncCallbackFunction = asyncCallbackFunction, asyncCallbackObject = asyncCallbackObject, asyncCallbackArguments = asyncCallbackArguments})
    return
  end
  Logging.error("Loading the map in sync is not allowed anymore! Please call loadMap with a async callback.")
  printCallstack()
end
function BaseMission:loadMapFinished(node, failedReason, arguments, callAsyncCallback)
  asyncCallbackArguments:hitLoadingTarget(MPLoadingScreen.LOAD_TARGETS.MAP)
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
  if node ~= 0 and not g_currentMission.cancelLoading then
    table.insert(self.maps, node)
    local v10 = getRootNode()
    link(v10, node)
  end
  for v12, v13 in pairs(g_modEventListeners) do
    if not (v13.loadMap ~= nil) then
      continue
    end
    v13:loadMap(asyncCallbackArguments)
  end
  if not self.cancelLoading then
    v11 = v11:getValue("showFieldInfo")
    self:setShowFieldInfo(...)
  end
  if callAsyncCallback ~= nil then
    -- if not v4 then goto L110 end
  end
  if v6 ~= nil then
    v6(v7, node, v8)
  end
end
function BaseMission:findDynamicObjects(node)
  local asyncCallbackArguments = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 7, target 95)
  asyncCallbackArguments = getChildAt(node, 1 - 1)
  local v7 = getRigidBodyType(asyncCallbackArguments)
  if RigidBodyType.DYNAMIC == v7 then
    local v6 = getHasClassId(asyncCallbackArguments, ClassIds.SHAPE)
    if v6 then
      v6 = getSplitType(asyncCallbackArguments)
      -- cmp-jump LOP_JUMPXEQKN R6 aux=0x80000011 -> L94
    end
    -- if not v0.missionDynamicInfo.isMultiplayer then goto L94 end
    v7 = getUserAttribute(asyncCallbackArguments, "mpCreatePhysicsObject")
    v6 = Utils.getNoNil(v7, false)
    local v8 = getUserAttribute(asyncCallbackArguments, "mpRemoveRigidBody")
    v7 = Utils.getNoNil(v8, true)
    if v6 then
      local v9 = self:getIsServer()
      local v10 = self:getIsClient()
      v8 = PhysicsObject.new(...)
      v9:add(v8)
      v8:loadOnCreate(asyncCallbackArguments)
      v8:register(true)
      -- goto L94  (LOP_JUMP +12)
    end
    -- if not v7 then goto L94 end
    setRigidBodyType(asyncCallbackArguments, RigidBodyType.NONE)
  else
    self:findDynamicObjects(asyncCallbackArguments)
  end
  -- TODO: structure LOP_FORNLOOP (pc 94, target 8)
end
function BaseMission:loadMapSounds(xmlFilename, baseDirectory)
  local asyncCallbackFunction = self:getIsClient()
  if not asyncCallbackFunction then
    return
  end
  asyncCallbackFunction = loadXMLFile("mapSoundXML", xmlFilename)
  if asyncCallbackFunction == 0 then
    return
  end
  self.surfaceSounds = {}
  while true do
    asyncCallbackArguments = string.format("sound.surface.material(%d)", asyncCallbackObject)
    v6 = hasXMLProperty(asyncCallbackFunction, asyncCallbackArguments)
    if not v6 then
      break
    end
    v9 = getXMLString(asyncCallbackFunction, asyncCallbackArguments .. "#type")
    v8 = Utils.getNoNil(v9, "wheel")
    if {["type"] = v8}["type"] == "wheel" then
    end
    v8 = getXMLInt(asyncCallbackFunction, asyncCallbackArguments .. "#materialId")
    v6.materialId = v8
    v8 = getXMLString(asyncCallbackFunction, asyncCallbackArguments .. "#name")
    v6.name = v8
    v9 = getXMLInt(asyncCallbackFunction, asyncCallbackArguments .. "#loopCount")
    v13 = string.format("material(%d)", asyncCallbackObject)
    v15 = getRootNode()
    v9 = v9:loadSampleFromXML(asyncCallbackFunction, "sound.surface", v13, baseDirectory, v15, v9 or 0, v7, nil, nil)
    v6.sample = v9
    if v6.sample ~= nil then
      table.insert(self.surfaceSounds, v6)
    end
  end
  self.cuttingSounds = {}
  while true do
    v6 = string.format("sound.cutting.sample(%d)", asyncCallbackArguments)
    v7 = hasXMLProperty(asyncCallbackFunction, v6)
    if not v7 then
      break
    end
    v7 = getXMLString(asyncCallbackFunction, v6 .. "#name")
    v12 = string.format("sample(%d)", asyncCallbackArguments)
    v14 = getRootNode()
    v8 = v8:loadSampleFromXML(asyncCallbackFunction, "sound.cutting", v12, baseDirectory, v14, 1, AudioGroup.ENVIRONMENT, nil, nil)
    if v7 ~= nil then
      self.cuttingSounds[v7] = v8
    else
      print("Warning: a cutting sound does not have a name")
    end
  end
  delete(asyncCallbackFunction)
end
function BaseMission:loadObjectAtPlace(xmlFilename, places, usedPlaces, rotationOffset, ownerFarmId)
  local size = StoreItemUtil.getSizeValues(xmlFilename, "object", rotationOffset)
  local v7, v8, v9, v10, v11, v12 = PlacementUtil.getPlace(places, size, usedPlaces, true, false, true)
  if v7 == nil then
    return nil, true, false
  end
  local v14 = MathUtil.getYRotationFromDirection(v10.dirPerpX, v10.dirPerpZ)
  local xmlFile = loadXMLFile("tempObjectXML", xmlFilename)
  local v17 = getXMLString(xmlFile, "object.className")
  local v16 = Utils.getNoNil(v17, "")
  v17 = getXMLString(xmlFile, "object.filename")
  local v18 = ClassUtil.getClassObject(v16)
  if v18 ~= nil then
    if v17 ~= nil then
      local v20 = self:getIsServer()
      local v21 = self:getIsClient()
      local v19 = v18.new(...)
      v19:setOwnerFarmId(ownerFarmId, true)
      v19 = Utils.getFilename(v17, self.baseDirectory)
      v19 = v19:load(v19, v7, v8, v9, 0, v14 + rotationOffset, 0, xmlFilename)
      if v19 then
        v19:register()
        v19:setFillLevel(v19.capacity, false)
        -- goto L129  (LOP_JUMP +28)
      end
      v13:delete()
      -- goto L129  (LOP_JUMP +23)
    end
    local v24 = tostring(v17)
    print("Warning: File '" .. v24 .. "' not found!")
  else
    v24 = tostring(v16)
    print("Warning: Class '" .. v24 .. "' not found!")
  end
  delete(xmlFile)
  if v13 ~= nil then
    PlacementUtil.markPlaceUsed(usedPlaces, v10, v11)
    return v13, false, false
  end
  return nil, false, false
end
function BaseMission:addOwnedItem(item)
  BaseMission.addItemToList(self.ownedItems, item)
end
function BaseMission:removeOwnedItem(item)
  BaseMission.removeItemFromList(self.ownedItems, item)
end
function BaseMission:getNumOwnedItems(storeItem, farmId)
  return BaseMission.getNumListItems(self.ownedItems, storeItem, farmId)
end
function BaseMission:addLeasedItem(item)
  BaseMission.addItemToList(self.leasedVehicles, item)
end
function BaseMission:removeLeasedItem(item)
  BaseMission.removeItemFromList(self.leasedVehicles, item)
end
function BaseMission:getNumLeasedItems(storeItem, farmId)
  return BaseMission.getNumListItems(self.leasedVehicles, storeItem, farmId)
end
function BaseMission:getNumListItems(filename, addPhysics)
  if filename.bundleInfo == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L59
    if addPhysics == nil then
      return self[filename].numItems
    end
    for v7, v8 in pairs(self[filename].items) do
      local v9 = v8:getOwnerFarmId()
      if not (v9 == addPhysics) then
        continue
      end
    end
    return asyncCallbackFunction
  end
  for v8, v9 in pairs(filename.bundleInfo.bundleItems) do
    local v12 = BaseMission.getNumListItems(self, v9.item, addPhysics)
    local v10 = math.min(...)
  end
  return asyncCallbackObject
end
function BaseMission:addItemToList(filename)
  if self ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L5
  end
  return
  local addPhysics = addPhysics:getItemByXMLFilename(filename.configFileName)
  if addPhysics ~= nil then
    if self[addPhysics] == nil then
      self[addPhysics] = {storeItem = addPhysics, numItems = 0, items = {}}
    end
    if self[addPhysics].items[filename] == nil then
      self[addPhysics].numItems = self[addPhysics].numItems + 1
      self[addPhysics].items[filename] = filename
    end
  end
end
function BaseMission:removeItemFromList(filename)
  if self ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L5
  end
  return
  local addPhysics = addPhysics:getItemByXMLFilename(filename.configFileName)
  if addPhysics ~= nil and self[addPhysics] ~= nil and self[addPhysics].items[filename] ~= nil then
    self[addPhysics].numItems = self[addPhysics].numItems - 1
    self[addPhysics].items[filename] = nil
    if self[addPhysics].numItems == 0 then
      self[addPhysics] = nil
    end
  end
end
function BaseMission:addVehicle(vehicle)
  table.addElement(self.vehicles, vehicle)
  vehicle.isAddedToMission = true
  if vehicle.propertyState == Vehicle.PROPERTY_STATE_OWNED then
    self:addOwnedItem(vehicle)
    return
  end
  if vehicle.propertyState == Vehicle.PROPERTY_STATE_LEASED then
    self:addLeasedItem(vehicle)
  end
end
function BaseMission:removeVehicle(vehicle, callDelete)
  local asyncCallbackFunction = self:getIsClient()
  if asyncCallbackFunction and vehicle == self.controlledVehicle then
    self:onLeaveVehicle()
  end
  if vehicle.propertyState == Vehicle.PROPERTY_STATE_OWNED then
    self:removeOwnedItem(vehicle)
  elseif vehicle.propertyState == Vehicle.PROPERTY_STATE_LEASED then
    self:removeLeasedItem(vehicle)
  end
  table.removeElement(self.vehicles, vehicle)
  vehicle:removeNodeObjectMapping(self.nodeToObject)
  table.removeElement(self.vehiclesToDelete, vehicle)
  vehicle.isAddedToMission = false
  if callDelete ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000001 -> L79
  end
  asyncCallbackFunction = self:getIsServer()
  if asyncCallbackFunction then
    table.addElement(self.vehiclesToDelete, vehicle)
    return
  end
  asyncCallbackFunction = asyncCallbackFunction:getServerConnection()
  local asyncCallbackArguments = VehicleRemoveEvent.new(vehicle)
  asyncCallbackFunction:sendEvent(...)
end
function BaseMission:addVehicleToDelete(vehicle)
  table.addElement(self.vehiclesToDelete, vehicle)
end
function BaseMission:addVehicleToSpawn(xmlFilename, xmlKey)
  table.insert(self.vehiclesToSpawn, {xmlFilename = xmlFilename, xmlKey = xmlKey})
  self.vehiclesToSpawnDirty = true
end
function BaseMission:addUpdateable(updateable, key)
  if updateable.isa ~= nil then
    local asyncCallbackArguments = updateable:isa(Object)
  end
  assert(asyncCallbackObject, "No network objects allowed in addUpdateable")
  if updateable.update == nil then
    Logging.error("Given updateable has no update function")
    printCallstack()
    return
  end
  self.updateables[key or updateable] = updateable
end
function BaseMission:removeUpdateable(updateable)
  self.updateables[updateable] = nil
end
function BaseMission:getHasUpdateable(updateable)
  if self.updateables[updateable] == nil then
  end
  return true
end
function BaseMission:getHasDrawable(drawable)
  if self.drawables[drawable] == nil then
  end
  return true
end
function BaseMission:addDrawable(drawable, key)
  self.drawables[key or drawable] = drawable
end
function BaseMission:removeDrawable(drawable)
  self.drawables[drawable] = nil
end
function BaseMission:addNonUpdateable(nonUpdateable)
  if nonUpdateable.isa ~= nil then
    local asyncCallbackObject = nonUpdateable:isa(Object)
  end
  assert(asyncCallbackFunction, "No network objects allowed in addNonUpdateable")
  self.nonUpdateables[nonUpdateable] = nonUpdateable
end
function BaseMission:removeNonUpdateable(nonUpdateable)
  self.nonUpdateables[nonUpdateable] = nil
end
function BaseMission:addNodeObject(node, object)
  if self.nodeToObject[node] ~= nil then
    local asyncCallbackArguments = getName(node)
    local v6 = tostring(object)
    Logging.error(...)
    printCallstack()
    return
  end
  self.nodeToObject[node] = object
end
function BaseMission:removeNodeObject(node)
  self.nodeToObject[node] = nil
end
function BaseMission:getNodeObject(node)
  return self.nodeToObject[node]
end
function BaseMission:pauseGame()
  if not self.paused then
    self:doPauseGame()
    local vehicle = self:getIsServer()
    if vehicle then
      GamePauseEvent.sendEvent()
    end
  end
end
function BaseMission:tryUnpauseGame()
  local vehicle = self:canUnpauseGame()
  if vehicle then
    self:doUnpauseGame()
    vehicle = self:getIsServer()
    if vehicle then
      GamePauseEvent.sendEvent()
    end
    return true
  end
  return false
end
function BaseMission:canUnpauseGame()
  if self.paused and not self.manualPaused and not self.suspendPaused then
  end
  return vehicle
end
function BaseMission:setManualPause(doPause)
  local callDelete = self:getIsServer()
  if not callDelete then
    -- if not v0.isMasterUser then goto L38 end
  end
  if doPause ~= self.manualPaused then
    self.manualPaused = doPause
    callDelete = self:getIsServer()
    if callDelete then
      if doPause then
        self:pauseGame()
        return
      end
      self:tryUnpauseGame()
      return
    end
    callDelete = callDelete:getServerConnection()
    local asyncCallbackObject = GamePauseRequestEvent.new(doPause)
    callDelete:sendEvent(...)
  end
end
function BaseMission:doPauseGame()
  self.paused = true
  self.isRunning = false
  simulatePhysics(false)
  simulateParticleSystems(false)
  self:resetGameState()
  if self.hud ~= nil then
    local vehicle = vehicle:getValue(GameSettings.SETTING.SHOW_HELP_MENU)
    if not vehicle then
      vehicle:setInputHelpVisible(true)
    end
  end
  for asyncCallbackObject, asyncCallbackArguments in pairs(self.pauseListeners) do
    asyncCallbackArguments(asyncCallbackObject, self.paused)
  end
  vehicle:publish(MessageType.PAUSE, true)
  if self.trafficSystem ~= nil then
    vehicle:setEnabled(false)
  end
  if self.pedestrianSystem ~= nil then
    vehicle:setEnabled(false)
  end
end
function BaseMission:doUnpauseGame()
  self.paused = false
  self.isRunning = true
  simulatePhysics(true)
  simulateParticleSystems(true)
  if self.hud ~= nil then
    local vehicle = vehicle:getValue(GameSettings.SETTING.SHOW_HELP_MENU)
    if not vehicle then
      local asyncCallbackFunction = asyncCallbackFunction:getValue(GameSettings.SETTING.SHOW_HELP_MENU)
      vehicle:setInputHelpVisible(...)
    end
  end
  if self.lastNonPauseGameState == GameState.MENU_INGAME and g_gui.currentGuiName ~= "InGameMenu" then
  end
  callDelete:setGameState(vehicle)
  for asyncCallbackArguments, v6 in pairs(self.pauseListeners) do
    v6(asyncCallbackArguments, self.paused)
  end
  callDelete:publish(MessageType.PAUSE, false)
  if self.trafficSystem ~= nil then
    callDelete:setEnabled(g_currentMission.missionInfo.trafficEnabled)
  end
  if self.pedestrianSystem ~= nil then
    callDelete:setEnabled(true)
  end
end
function BaseMission:addPauseListeners(target, callbackFunc)
  self.pauseListeners[target] = callbackFunc
end
function BaseMission:removePauseListeners(target)
  self.pauseListeners[target] = nil
end
function BaseMission:resetGameState()
  if self.pressStartPaused then
    vehicle:setGameState(GameState.LOADING)
    return
  end
  if self.paused then
    vehicle:setGameState(GameState.PAUSED)
    return
  end
  vehicle:setGameState(GameState.PLAY)
end
function BaseMission:getNextVehicle(vehicle)
  if not self.isToggleVehicleAllowed then
    return nil
  end
  if #self.enterables == 0 then
    return nil
  end
  if not self.controlPlayer then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L44
    -- TODO: structure LOP_FORNPREP (pc 24, target 48)
    if self.controlledVehicle == self.enterables[1] then
      if callDelete < 1 + vehicle then
      end
      -- if v3 >= 1 then goto L48 end
      -- goto L48  (LOP_JUMP +6)
    end
    -- TODO: structure LOP_FORNLOOP (pc 42, target 25)
  elseif vehicle < 0 then
  end
  while true do
    v7 = self.enterables[asyncCallbackFunction]:getIsTabbable()
    if v7 then
      v7 = self.enterables[asyncCallbackFunction]:getIsEnterable()
      -- if not v7 then goto L62 end
    else
      if callDelete < asyncCallbackFunction + vehicle then
      end
      if asyncCallbackFunction < 1 then
      end
    end
    if not not asyncCallbackArguments then
      break
    end
    if not (asyncCallbackFunction ~= asyncCallbackObject) then
      break
    end
  end
  if asyncCallbackArguments then
    return self.enterables[asyncCallbackFunction]
  end
  return nil
end
function BaseMission:toggleVehicle(delta)
  local callDelete = self:getNextVehicle(delta)
  if callDelete ~= nil then
    asyncCallbackFunction:requestToEnterVehicle(callDelete)
  end
end
function BaseMission.getIsClient(v0)
  if g_client == nil then
  end
  return true
end
function BaseMission.getIsServer(v0)
  if g_server == nil then
  end
  return true
end
function BaseMission:mouseEvent(posX, posY, isDown, isUp, button)
  if self.isRunning then
    local v6 = v6:getIsGuiVisible()
    if not v6 then
      if g_server ~= nil then
        v6:mouseEvent(posX, posY, isDown, isUp, button)
      end
      if g_client ~= nil then
        v6:mouseEvent(posX, posY, isDown, isUp, button)
      end
      v6 = self:getIsClient()
      if v6 and self.controlPlayer then
        v6:mouseEvent(posX, posY, isDown, isUp, button)
      end
    end
  end
  for v9, v10 in pairs(g_modEventListeners) do
    if not (v10.mouseEvent ~= nil) then
      continue
    end
    v10:mouseEvent(posX, posY, isDown, isUp, button)
  end
end
function BaseMission:keyEvent(unicode, sym, modifier, isDown)
  if self.isRunning then
    local asyncCallbackArguments = asyncCallbackArguments:getIsGuiVisible()
    if not asyncCallbackArguments then
      asyncCallbackArguments = self:getIsServer()
      if asyncCallbackArguments then
        asyncCallbackArguments:keyEvent(unicode, sym, modifier, isDown)
      end
      asyncCallbackArguments = self:getIsClient()
      if asyncCallbackArguments then
        asyncCallbackArguments:keyEvent(unicode, sym, modifier, isDown)
      end
    end
  end
  for v8, v9 in pairs(g_modEventListeners) do
    if not (v9.keyEvent ~= nil) then
      continue
    end
    v9:keyEvent(unicode, sym, modifier, isDown)
  end
end
function BaseMission:preUpdate(dt)
  if not self.waitForCorruptDlcs then
    if self.waitForDLCVerification then
      local callDelete = verifyDlcs()
      if callDelete then
        callDelete = callDelete:getIsGuiVisible()
        if callDelete and g_gui.currentGuiName == "InfoDialog" then
          callDelete:showGui("")
          self.waitForDLCVerification = false
        end
      end
    end
    callDelete = storeAreDlcsCorrupted()
    if callDelete then
      self.waitForCorruptDlcs = true
      callDelete = callDelete:showGui("InfoDialog")
      local asyncCallbackArguments = asyncCallbackArguments:getText("dialog_dlcsCorruptQuit")
      asyncCallbackFunction:setText(...)
      asyncCallbackArguments = asyncCallbackArguments:getText("button_quit")
      asyncCallbackFunction:setButtonText(...)
      asyncCallbackFunction:setCallbacks(self.dlcProblemOnQuitOk, self, true)
      return
    end
    if not self.waitForDLCVerification then
      callDelete = storeHaveDlcsChanged()
      if callDelete then
        g_forceNeedsDlcsAndModsReload = true
        callDelete = verifyDlcs()
        if not callDelete then
          self.waitForDLCVerification = true
          callDelete = callDelete:showGui("InfoDialog")
          asyncCallbackArguments = asyncCallbackArguments:getText("dialog_reinsertDlcMedia")
          asyncCallbackFunction:setText(...)
          asyncCallbackArguments = asyncCallbackArguments:getText("button_quit")
          asyncCallbackFunction:setButtonText(...)
          asyncCallbackFunction:setCallbacks(self.dlcProblemOnQuitOk, self, true)
          return
        end
        callDelete = checkForNewDlcs()
        if callDelete then
          local asyncCallbackObject = asyncCallbackObject:getText("message_newDlcsRestartTitle")
          asyncCallbackArguments = asyncCallbackArguments:getText("message_newDlcsRestartText")
          callDelete:showInGameMessage(asyncCallbackObject, asyncCallbackArguments, -1)
        end
      end
    end
  end
end
function BaseMission.dlcProblemOnQuitOk(v0)
  OnInGameMenuMenu()
end
function BaseMission:update(dt)
  if not self.waitForDLCVerification then
    -- if not v0.waitForCorruptDlcs then goto L7 end
  end
  return
  local callDelete = self:getIsServer()
  if callDelete then
    callDelete:update(dt, self.isRunning)
  end
  callDelete = self:getIsClient()
  if callDelete then
    callDelete:update(dt, self.isRunning)
  end
  while true do
    callDelete = next(self.vehiclesToDelete)
    if not (callDelete ~= nil) then
      break
    end
    table.remove(self.vehiclesToDelete, #self.vehiclesToDelete)
    self.vehiclesToDelete[#self.vehiclesToDelete]:delete()
  end
  -- TODO: structure LOP_FORNPREP (pc 59, target 96)
  local v6 = NetworkUtil.getObject(self.vehiclesToAttach[#self.vehiclesToAttach].dt)
  local v7 = NetworkUtil.getObject(self.vehiclesToAttach[#self.vehiclesToAttach].callDelete)
  if v6 ~= nil and v7 ~= nil then
    v6:attachImplement(v7, self.vehiclesToAttach[#self.vehiclesToAttach].inputJointIndex, self.vehiclesToAttach[#self.vehiclesToAttach].jointIndex, true, nil, nil, true)
    table.remove(self.vehiclesToAttach, #self.vehiclesToAttach)
  end
  -- TODO: structure LOP_FORNLOOP (pc 95, target 60)
  if self.gameStarted and g_appIsSuspended ~= self.suspendPaused then
    self.suspendPaused = g_appIsSuspended
    if g_appIsSuspended then
      self:pauseGame()
    else
      self:tryUnpauseGame()
    end
  end
  callDelete:update(dt)
  callDelete:update(dt)
  callDelete:update(dt)
  if not self.isRunning then
    return
  end
  if self.vehiclesToSpawnDirty then
    if 0 < #self.vehiclesToSpawn and not self.vehiclesToSpawnLoading then
      local asyncCallbackArguments = XMLFile.load("VehiclesXML", self.vehiclesToSpawn[1].xmlFilename, Vehicle.xmlSchemaSavegame)
      self.vehiclesToSpawnLoading = true
      VehicleLoadingUtil.loadVehicleFromSavegameXML(asyncCallbackArguments, self.vehiclesToSpawn[1].xmlKey, true, false, nil, nil, function(self, dt, callDelete, asyncCallbackFunction)
        if callDelete ~= VehicleLoadingUtil.VEHICLE_LOAD_OK then
          printf("Warning: corrupt vehicles xml '%s', vehicle '%s' could not be loaded", asyncCallbackFunction.xmlFilename, asyncCallbackFunction.key)
        end
        asyncCallbackObject:delete()
        table.remove(u0.vehiclesToSpawn, 1)
        u0.vehiclesToSpawnLoading = false
        u0.vehiclesToSpawnDirty = true
      end, nil, {xmlFilename = self.vehiclesToSpawn[1].xmlFilename, key = self.vehiclesToSpawn[1].xmlKey, xmlFile = asyncCallbackArguments})
    end
    self.vehiclesToSpawnDirty = false
  end
  for asyncCallbackArguments in pairs(self.usedStorePlaces) do
    self.usedStorePlaces[asyncCallbackArguments] = nil
  end
  for asyncCallbackArguments in pairs(self.usedLoadPlaces) do
    self.usedLoadPlaces[asyncCallbackArguments] = nil
  end
  self.time = self.time + dt
  callDelete = self:getIsClient()
  if callDelete then
    callDelete = callDelete:getIsGuiVisible()
    if not callDelete then
      callDelete:updateBlinkingWarning(dt)
      if self.currentMapTargetHotspot ~= nil and not self.disableMapTargetHotspotHiding then
        asyncCallbackFunction = getCamera()
        callDelete, asyncCallbackFunction, asyncCallbackObject = getWorldTranslation(...)
        asyncCallbackArguments, v6 = asyncCallbackArguments:getWorldPosition()
        v7 = MathUtil.vector2Length(callDelete - asyncCallbackArguments, asyncCallbackObject - v6)
        if v7 < 10 then
          self:setMapTargetHotspot(nil)
        end
      end
    end
    callDelete = self:getInteractiveVehicleInRange()
    self.interactiveVehicleInRange = callDelete
  end
  if self.benchmark ~= nil then
    callDelete:update(dt)
  end
  if self.environment ~= nil then
    callDelete:update(dt)
  end
  for asyncCallbackArguments, v6 in pairs(self.updateables) do
    v6:update(dt)
  end
  for asyncCallbackArguments, v6 in pairs(g_modEventListeners) do
    if not (v6.update ~= nil) then
      continue
    end
    v6:update(dt)
  end
  callDelete:update(dt)
  callDelete:update(dt)
  callDelete:update(dt)
  self.finishedFirstUpdate = true
  if g_touchHandler ~= nil then
    callDelete:update(dt)
  end
  if g_inAppPurchaseController ~= nil then
    callDelete = callDelete:getIsAvailable()
    if callDelete then
      callDelete:update(dt)
    end
  end
end
function BaseMission:draw()
  local callDelete = callDelete:getIsFading()
  callDelete:draw()
  local asyncCallbackFunction = asyncCallbackFunction:getIsMenuVisible()
  if not asyncCallbackFunction then
    asyncCallbackFunction = asyncCallbackFunction:getIsDialogVisible()
    if asyncCallbackFunction and not Platform.ui.drawHudOnDialog then
    end
  end
  asyncCallbackFunction = self:getIsClient()
  if asyncCallbackFunction and self.isRunning and callDelete and vehicle then
    asyncCallbackFunction:drawControlledEntityHUD()
    for v6, v7 in pairs(self.enterables) do
      v7:drawUIInfo()
    end
    for v6, v7 in pairs(self.players) do
      v7:drawUIInfo()
    end
    asyncCallbackFunction:draw()
  end
  asyncCallbackObject = asyncCallbackObject:getIsGuiVisible()
  if not asyncCallbackObject and vehicle then
    new2DLayer()
    if not self.isRunning then
      -- if not v0.paused then goto L91 end
    end
    asyncCallbackObject:drawInputHelp()
    if self.isRunning then
      asyncCallbackObject:drawTopNotification()
      asyncCallbackObject:drawBlinkingWarning()
      if g_server ~= nil then
        asyncCallbackObject:draw()
      elseif g_client ~= nil then
        asyncCallbackObject:draw()
      end
      for v7, v8 in pairs(g_modEventListeners) do
        if not (v8.draw ~= nil) then
          continue
        end
        v8:draw()
      end
      for v7, v8 in pairs(self.drawables) do
        v8:draw()
      end
    end
    asyncCallbackObject:render()
  end
  if self.paused and not self.isMissionStarted then
    asyncCallbackObject = asyncCallbackObject:getIsGuiVisible()
    if not asyncCallbackObject then
      asyncCallbackObject:drawGamePaused(true)
    end
  end
  asyncCallbackObject:drawFading()
  if g_touchHandler ~= nil then
    asyncCallbackObject:draw()
  end
end
function BaseMission:setPedestrianSystem(pedestrianSystem)
  if pedestrianSystem ~= nil and self.pedestrianSystem ~= nil then
    Logging.error("BaseMission: Pedestrian system already set")
    return false
  end
  self.pedestrianSystem = pedestrianSystem
  return true
end
function BaseMission:getPedestrianSystem()
  return self.pedestrianSystem
end
function BaseMission:requestToEnterVehicle(vehicle)
  local callDelete = callDelete:getStyle()
  local asyncCallbackFunction = asyncCallbackFunction:canPlayerAccess(vehicle)
  if asyncCallbackFunction and callDelete ~= nil then
    asyncCallbackFunction = asyncCallbackFunction:getServerConnection()
    local v8 = self:getFarmId()
    local asyncCallbackArguments = VehicleEnterRequestEvent.new(...)
    asyncCallbackFunction:sendEvent(...)
  end
end
function BaseMission.enterVehicleWithPlayer(v0, vehicle, callDelete, asyncCallbackFunction)
  if vehicle ~= nil and vehicle.spec_enterable ~= nil and vehicle.spec_enterable.isControlled == false then
    vehicle:setOwner(callDelete.networkInformation.creatorConnection)
    vehicle.controllerFarmId = callDelete.farmId
    local v9 = NetworkUtil.getObjectId(vehicle)
    local v11 = callDelete:getStyle()
    local v8 = VehicleEnterResponseEvent.new(v9, false, v11, callDelete.farmId, asyncCallbackFunction)
    v6:broadcastEvent(v8, true, callDelete.networkInformation.creatorConnection, vehicle, false, nil, true)
    v9 = NetworkUtil.getObjectId(vehicle)
    v11 = callDelete:getStyle()
    v8 = VehicleEnterResponseEvent.new(v9, true, v11, callDelete.farmId, asyncCallbackFunction)
    callDelete.networkInformation.creatorConnection:sendEvent(...)
  end
end
function BaseMission:onEnterVehicle(vehicle, playerStyle, farmId, userId)
  if self.controlPlayer then
    asyncCallbackArguments:onLeave()
  elseif self.controlledVehicle ~= nil then
    local asyncCallbackArguments = asyncCallbackArguments:getServerConnection()
    local v7 = VehicleLeaveEvent.new(self.controlledVehicle)
    asyncCallbackArguments:sendEvent(...)
    asyncCallbackArguments:leaveVehicle()
  end
  asyncCallbackArguments = asyncCallbackArguments:getContextName()
  v6:setContext(Vehicle.INPUT_CONTEXT_NAME, true, false)
  self:registerActionEvents()
  self:registerPauseActionEvents()
  self.controlledVehicle = vehicle
  v6:enterVehicle(true, playerStyle, farmId, userId)
  local v6 = v6:getIsGuiVisible()
  if v6 and asyncCallbackArguments ~= Vehicle.INPUT_CONTEXT_NAME then
    v6:setContext(asyncCallbackArguments, false, false)
  end
  self.controlPlayer = false
  v6:setControlledVehicle(vehicle)
  v6:setIsControllingPlayer(false)
end
function BaseMission:onLeaveVehicle(playerTargetPosX, playerTargetPosY, playerTargetPosZ, isAbsolute, isRootNode)
  if not self.controlPlayer and self.controlledVehicle ~= nil then
    local v6 = v6:getServerConnection()
    local v8 = VehicleLeaveEvent.new(self.controlledVehicle)
    v6:sendEvent(...)
    if self.controlledVehicle.getIsEntered ~= nil then
      v6 = v6:getIsEntered()
      if v6 then
        v6:leaveVehicle()
      end
    end
    g_inputBinding:resetActiveActionBindings()
    local v7 = g_inputBinding:getContextName()
    if v7 ~= BaseMission.INPUT_CONTEXT_VEHICLE then
    end
    local v9 = v9:getIsGuiVisible()
    if v9 then
      v6:beginActionEventsModification(Player.INPUT_CONTEXT_NAME, true)
    else
      v6:setContext(Player.INPUT_CONTEXT_NAME, true, true)
    end
    self:registerActionEvents()
    self.controlPlayer = true
    if playerTargetPosX ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L96
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L96
      v10:moveTo(playerTargetPosX, playerTargetPosY, playerTargetPosZ, isAbsolute, isRootNode)
    else
      v10:moveToExitPoint(self.controlledVehicle)
    end
    v10:onEnter(true)
    v10:onLeaveVehicle()
    self.controlledVehicle = nil
    v10:setIsControllingPlayer(true)
    v10:setControlledVehicle(nil)
    if v9 then
      v6:endActionEventsModification(true)
      v6:setPreviousContext(Gui.INPUT_CONTEXT_MENU, Player.INPUT_CONTEXT_NAME)
    end
    self:registerPauseActionEvents()
  end
end
function BaseMission.getTrailerInTipRange(v0, vehicle, playerStyle)
  Logging.warning("BaseMission.getTrailerInTipRange() is deprecated")
  return false
end
function BaseMission.getIsTrailerInTipRange(v0)
  Logging.warning("BaseMission.getIsTrailerInTipRange() is deprecated")
  return false
end
function BaseMission:addInteractiveVehicle(vehicle)
  self.interactiveVehicles[vehicle] = vehicle
end
function BaseMission:removeInteractiveVehicle(vehicle)
  self.interactiveVehicles[vehicle] = nil
end
function BaseMission:getInteractiveVehicleInRange()
  if self.player ~= nil and not self.player.isCarryingObject then
    for v6, v7 in pairs(self.interactiveVehicles) do
      if not not v7.isBroken then
        continue
      end
      if not not v7.isControlled then
        continue
      end
      local v8 = v7:getDistanceToNode(self.player.rootNode)
      if not (v8 < playerStyle) then
        continue
      end
    end
  end
  return vehicle
end
function BaseMission:addEnterableVehicle(vehicle)
  table.addElement(self.enterables, vehicle)
end
function BaseMission:isEnterableVehicle(vehicle)
  for asyncCallbackArguments, v6 in ipairs(self.enterables) do
    if not (v6 == vehicle) then
      continue
    end
    return true
  end
  return false
end
function BaseMission:removeEnterableVehicle(vehicle)
  table.removeElement(self.enterables, vehicle)
end
function BaseMission:addAttachableVehicle(vehicle)
  table.addElement(self.attachables, vehicle)
end
function BaseMission:removeAttachableVehicle(vehicle)
  table.removeElement(self.attachables, vehicle)
end
function BaseMission.onSunkVehicle(v0, vehicle)
end
function BaseMission:registerInputAttacherJoint(vehicle, inputAttacherJointIndex, inputAttacherJoint)
  local v6 = getWorldTranslation(inputAttacherJoint.node)
  table.addElement(self.inputAttacherJoints, {vehicle = vehicle, jointIndex = inputAttacherJointIndex, inputAttacherJoint = inputAttacherJoint, node = inputAttacherJoint.node, jointType = inputAttacherJoint.jointType, translation = {}})
  return {vehicle = vehicle, jointIndex = inputAttacherJointIndex, inputAttacherJoint = inputAttacherJoint, node = inputAttacherJoint.node, jointType = inputAttacherJoint.jointType, translation = {}}
end
function BaseMission.updateInputAttacherJoint(v0, vehicle)
  local playerStyle, farmId, userId = getWorldTranslation(vehicle.node)
  vehicle.translation[1] = playerStyle
  vehicle.translation[2] = farmId
  vehicle.translation[3] = userId
end
function BaseMission:removeInputAttacherJoint(inputAttacherJointInfo)
  table.removeElement(self.inputAttacherJoints, inputAttacherJointInfo)
end
function BaseMission:setMissionInfo(missionInfo, missionDynamicInfo)
  self.missionInfo = missionInfo
  self.missionDynamicInfo = missionDynamicInfo
  local asyncCallbackArguments = asyncCallbackArguments:getValue(GameSettings.SETTING.MONEY_UNIT)
  self:setMoneyUnit(...)
  asyncCallbackArguments = asyncCallbackArguments:getValue(GameSettings.SETTING.USE_MILES)
  self:setUseMiles(...)
  asyncCallbackArguments = asyncCallbackArguments:getValue(GameSettings.SETTING.USE_FAHRENHEIT)
  self:setUseFahrenheit(...)
  asyncCallbackArguments = asyncCallbackArguments:getValue(GameSettings.SETTING.USE_ACRE)
  self:setUseAcre(...)
  farmId:setMissionInfo(missionInfo)
  farmId:setMissionInfo(missionInfo, missionDynamicInfo, self.baseDirectory)
end
function BaseMission.onCreateTriggerMarker(v0, vehicle)
  playerStyle:addTriggerMarker(vehicle)
end
function BaseMission:addTriggerMarker(id)
  setVisibility(id, self.triggerMarkersAreVisible)
  table.addElement(self.triggerMarkers, id)
end
function BaseMission:removeTriggerMarker(id)
  table.removeElement(self.triggerMarkers, id)
  setVisibility(id, false)
end
function BaseMission:setShowTriggerMarker(areVisible)
  self.triggerMarkersAreVisible = areVisible
  for asyncCallbackArguments, v6 in ipairs(self.triggerMarkers) do
    setVisibility(v6, areVisible)
  end
end
function BaseMission:addHelpTrigger(id)
  setVisibility(id, self.helpTriggersAreVisible)
  table.addElement(self.helpTriggers, id)
end
function BaseMission:removeHelpTrigger(id)
  table.removeElement(self.helpTriggers, id)
end
function BaseMission:setShowHelpTrigger(areVisible)
  self.helpTriggersAreVisible = areVisible
  self:updateHelpTriggerVisibility()
end
function BaseMission:updateHelpTriggerVisibility()
  local visible = self:getCanShowHelpTriggers()
  for asyncCallbackArguments, v6 in ipairs(self.helpTriggers) do
    setVisibility(v6, visible)
    if visible then
      addToPhysics(v6)
    else
      removeFromPhysics(v6)
    end
  end
end
function BaseMission:getCanShowHelpTriggers()
  return self.helpTriggersAreVisible
end
function BaseMission:setShowFieldInfo(isVisible)
  playerStyle:setInfoVisible(isVisible)
end
function BaseMission.addHelpButtonText(v0, vehicle, playerStyle, farmId, userId)
end
function BaseMission.addHelpAxis(v0, vehicle, playerStyle)
end
function BaseMission:addExtraPrintText(text)
  playerStyle:addExtraPrintText(text)
end
function BaseMission:addGameNotification(title, text, info, icon, duration, notification, iconFilename)
  return v8:addTopNotification(title, text, info, icon, duration, notification, iconFilename)
end
function BaseMission:showBlinkingWarning(text, duration, priority)
  userId:showBlinkingWarning(text, duration, priority)
end
function BaseMission.setMoneyUnit(v0, vehicle)
end
function BaseMission.setUseMiles(v0, vehicle)
end
function BaseMission.setUseAcre(v0, vehicle)
end
function BaseMission.setUseFahrenheit(v0, vehicle)
end
function BaseMission:fadeScreen(direction, duration, callbackFunc, callbackTarget, arguments)
  v6:fadeScreen(direction, duration, callbackFunc, callbackTarget, arguments)
end
function BaseMission:setIsInsideBuilding(isInsideBuilding)
  self.isInsideBuilding = isInsideBuilding
  if g_soundManager ~= nil then
    playerStyle:setIsInsideBuilding(isInsideBuilding)
  end
end
function BaseMission:getNumOfItems(storeItem, farmId)
  if self.ownedItems[storeItem] ~= nil then
    if farmId == nil then
    elseif 0 < self.ownedItems[storeItem].numItems then
      for v7, v8 in pairs(self.ownedItems[storeItem].items) do
        local v9 = v8:getOwnerFarmId()
        if not (v9 == farmId) then
          continue
        end
      end
    end
  end
  if self.leasedVehicles[storeItem] ~= nil then
    if farmId == nil then
      return farmId + self.leasedVehicles[storeItem].numItems
    end
    if 0 < self.leasedVehicles[storeItem].numItems then
      for v7, v8 in pairs(self.leasedVehicles[storeItem].items) do
        v9 = v8:getOwnerFarmId()
        if not (v9 == farmId) then
          continue
        end
      end
    end
  end
  return farmId
end
function BaseMission:spawnCollisionTestCallback(transformId)
  if self.nodeToObject[transformId] ~= nil then
    self.spawnCollisionsFound = true
  end
end
function BaseMission:setMapTargetHotspot(mapHotspot)
  if self.currentMapTargetHotspot ~= nil then
    farmId:setBlinking(false)
    farmId:setPersistent(false)
    farmId:updateGreatDemandsPDASpots()
  end
  if mapHotspot ~= nil then
    local farmId, farmId = mapHotspot:getWorldPosition()
    local userId = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, farmId, 0, farmId)
    self:setMapTargetMarker(true, farmId, userId, farmId)
    mapHotspot:setBlinking(true)
    mapHotspot:setPersistent(Platform.ingameMap.taggedHotspotsArePersistent)
  else
    self:setMapTargetMarker(false, 0, 0, 0)
  end
  self.currentMapTargetHotspot = mapHotspot
end
function BaseMission:setMapTargetMarker(isActive, posX, posY, posZ)
  asyncCallbackArguments:setVisibility(isActive)
  asyncCallbackArguments:setWorldPosition(posX, posY + 1.5, posZ)
  if BaseMission.MAP_TARGET_MARKER ~= nil then
    if isActive then
      setTranslation(BaseMission.MAP_TARGET_MARKER, posX, posY, posZ)
    end
    setVisibility(BaseMission.MAP_TARGET_MARKER, isActive)
  end
end
function BaseMission.onCreateMapTargetMarker(v0, storeItem)
  if BaseMission.MAP_TARGET_MARKER == nil then
    BaseMission.MAP_TARGET_MARKER = storeItem
    local farmId = getRootNode()
    link(farmId, storeItem)
    setVisibility(storeItem, false)
  end
end
function BaseMission.onCreateLoadSpawnPlace(v0, storeItem)
  local farmId = PlacementUtil.loadPlaceFromNode(storeItem)
  table.insert(g_currentMission.loadSpawnPlaces, farmId)
end
function BaseMission.onCreateStoreSpawnPlace(v0, storeItem)
  local farmId = PlacementUtil.loadPlaceFromNode(storeItem)
  table.insert(g_currentMission.storeSpawnPlaces, farmId)
end
function BaseMission.onCreateRestrictedZone(v0, storeItem)
  local farmId = PlacementUtil.createRestrictedZone(storeItem)
  table.insert(g_currentMission.restrictedZones, farmId)
end
function BaseMission:getResetPlaces()
  if 0 < #self.loadSpawnPlaces then
    return self.loadSpawnPlaces
  end
  return self.storeSpawnPlaces
end
function BaseMission.consoleCommandRender360Screenshot(v0, storeItem, farmId)
  if farmId ~= nil then
  else
    local v8 = getDate("%Y_%m_%d_%H_%M_%S")
  end
  createFolder(farmId)
  local asyncCallbackArguments = tonumber(storeItem)
  render360Screenshot(farmId .. "fsScreen360", asyncCallbackArguments or 512, "hdr_raw", 1, 0, 0, 0, 0, 5, true, 15, 4)
end
function BaseMission:consoleCommandSetFOV(fovY)
  local farmId = tonumber(fovY)
  if farmId ~= nil then
    if self.controlledVehicle ~= nil then
      local farmId = farmId:getActiveCamera()
    end
    if fovY < 0 then
      if not farmId.fovY then
      end
      farmId.fovYBackup = nil
    else
      if farmId.fovY == nil and farmId.fovYBackup == nil then
        farmId = getFovY(farmId.cameraNode)
        farmId.fovYBackup = farmId
      end
      farmId = math.rad(fovY)
    end
    setFovY(farmId.cameraNode, fovY)
    local v6 = math.deg(fovY)
    local asyncCallbackArguments = tostring(...)
    return "Set camera fov to " .. asyncCallbackArguments
  end
  return "Command needs number argument. gsCameraFovSet fieldOfViewAngle (-1 to reset to default)"
end
function BaseMission:consoleCommandVehicleRemoveAll()
  -- TODO: structure LOP_FORNPREP (pc 6, target 33)
  if self.vehicles[#self.vehicles].isa ~= nil then
    local v6 = self.vehicles[#self.vehicles]:isa(Vehicle)
    if v6 and self.vehicles[#self.vehicles].trainSystem == nil and not self.vehicles[#self.vehicles].isPallet then
      self:removeVehicle(self.vehicles[#self.vehicles])
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 32, target 7)
  return string.format("Deleted %i vehicle(s)! Excluded train and pallets", storeItem)
end
function BaseMission:consoleCommandItemRemoveAll()
  local storeItem = storeItem:deleteAll()
  -- TODO: structure LOP_FORNPREP (pc 10, target 33)
  if self.vehicles[#self.vehicles].isa ~= nil then
    local v6 = self.vehicles[#self.vehicles]:isa(Vehicle)
    if v6 and self.vehicles[#self.vehicles].isPallet then
      self:removeVehicle(self.vehicles[#self.vehicles])
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 32, target 11)
  return string.format("Deleted %i item(s)!", storeItem)
end
function BaseMission.consoleCommandSetShaderParameter(v0, storeItem, farmId, farmId, userId, asyncCallbackArguments, v6, v7)
  if storeItem == nil then
    return "Error: no nodeName given\n" .. "Usage: gsShaderParamsSet nodeName shaderParameterName [x] [y] [z] [w] [shared]\nNodeName is case insensitive"
  end
  if farmId == nil then
    return "Error: no shaderParameterName given\n" .. "Usage: gsShaderParamsSet nodeName shaderParameterName [x] [y] [z] [w] [shared]\nNodeName is case insensitive"
  end
  local v8 = tonumber(farmId)
  v8 = tonumber(userId)
  v8 = tonumber(asyncCallbackArguments)
  v8 = tonumber(v6)
  v8 = Utils.stringToBoolean(v7)
  v8 = storeItem:upper()
  local v13 = getRootNode()
  I3DUtil.interateRecursively(v13, function(v0)
    u0 = u0 + 1
    local storeItem = getName(v0)
    storeItem = storeItem:upper()
    if storeItem == u1 then
      storeItem = getHasClassId(v0, ClassIds.SHAPE)
      if storeItem then
        storeItem = getHasShaderParameter(v0, u2)
        if not storeItem then
          return true
        end
        local storeItem, farmId, farmId, userId = getShaderParameter(v0, u2)
        setShaderParameter(v0, u2, u3 or storeItem, u4 or farmId, u5 or farmId, u6 or userId, u7)
        local v8 = I3DUtil.getNodePath(v0)
        Logging.info("set shader parameter '%s' for node '%s' to x=%.3f y=%.3f z=%.3f w=%.3f shared=%s", u2, v8, u3 or storeItem, u4 or farmId, u5 or farmId, u6 or userId, u7)
        u8 = u8 + 1
      end
    end
  end)
  return string.format("Finished traversal of %d nodes, %d nodes affected", 0, 0)
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
  storeItem:subscribe(MessageType.GUI_BEFORE_OPEN, self.onBeforeMenuOpen, self)
  storeItem:subscribe(MessageType.GUI_AFTER_CLOSE, self.onAfterMenuClose, self)
end
function BaseMission:onBeforeMenuOpen()
  local userId = userId:getIsOverlayGuiVisible()
  storeItem:onMenuVisibilityChange(...)
end
function BaseMission:onAfterMenuClose()
  storeItem:onMenuVisibilityChange(false, false)
end
function BaseMission:onGameStateChange(newGameState, oldGameState)
  if newGameState ~= GameState.PAUSED then
    self.lastNonPauseGameState = newGameState
  end
end
function BaseMission:registerActionEvents()
  local farmId, farmId = g_inputBinding:registerActionEvent(InputAction.PAUSE, self, self.onPause, false, true, false, true)
  g_inputBinding:setActionEventTextVisibility(farmId, false)
  local userId, asyncCallbackArguments = g_inputBinding:registerActionEvent(InputAction.TOGGLE_HELP_TEXT, self, self.onToggleHelpText, false, true, false, true)
  g_inputBinding:setActionEventTextVisibility(asyncCallbackArguments, false)
  userId, asyncCallbackArguments = g_inputBinding:registerActionEvent(InputAction.SWITCH_VEHICLE, self, self.onSwitchVehicle, false, true, false, true, 1)
  g_inputBinding:setActionEventTextVisibility(asyncCallbackArguments, false)
  userId, asyncCallbackArguments = g_inputBinding:registerActionEvent(InputAction.SWITCH_VEHICLE_BACK, self, self.onSwitchVehicle, false, true, false, true, -1)
  g_inputBinding:setActionEventTextVisibility(asyncCallbackArguments, false)
  userId:registerInput()
end
function BaseMission.unregisterActionEvents(v0)
  g_inputBinding:removeActionEventsByTarget(v0)
  g_inputBinding:beginActionEventsModification(BaseMission.INPUT_CONTEXT_PAUSE)
  g_inputBinding:removeActionEventsByTarget(v0)
  g_inputBinding:endActionEventsModification()
end
function BaseMission:registerPauseActionEvents()
  g_inputBinding:beginActionEventsModification(BaseMission.INPUT_CONTEXT_PAUSE)
  if GS_IS_CONSOLE_VERSION then
    local userId, asyncCallbackArguments = g_inputBinding:registerActionEvent(InputAction.MENU_ACCEPT, self, self.onConsoleAcceptPause, false, true, false, true)
    g_inputBinding:setActionEventTextVisibility(asyncCallbackArguments, false)
  end
  userId, asyncCallbackArguments = storeItem:registerActionEvent(InputAction.PAUSE, self, self.onPause, false, true, false, true)
  storeItem:setActionEventTextVisibility(asyncCallbackArguments, true)
  local v7 = v7:getText("ui_unpause")
  storeItem:setActionEventText(...)
  storeItem:endActionEventsModification()
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
function BaseMission.onToggleHelpText(v0)
  local farmId = farmId:getValue(GameSettings.SETTING.SHOW_HELP_MENU)
  farmId:setValue(GameSettings.SETTING.SHOW_HELP_MENU, not farmId)
end
function BaseMission:onSwitchVehicle(_, _, directionValue)
  if not self.isPlayerFrozen and self.isRunning then
    self:toggleVehicle(directionValue)
  end
end
