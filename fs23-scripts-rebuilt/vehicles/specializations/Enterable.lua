-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Enterable = {ADDITIONAL_CHARACTER_XML_KEY = "vehicle.enterable.additionalCharacter"}
source("dataS/scripts/vehicles/specializations/events/VehiclePlayerStyleChangedEvent.lua")
function Enterable.prerequisitesPresent(specializations)
  return true
end
function Enterable.initSpecialization()
  Vehicle.registerStateChange("ENTER_VEHICLE")
  Vehicle.registerStateChange("LEAVE_VEHICLE")
  Vehicle.xmlSchema:setXMLSpecializationType("Enterable")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.enterable#isTabbable", "Vehicle is tabbable", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.enterable#canBeEnteredFromMenu", "Vehicle can be entered from menu", "same as #isTabbable")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.enterable.forceSelectionOnEnter", "Vehicle is selected on entering", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.enterable.enterReferenceNode#node", "Enter reference node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.enterable.enterReferenceNode#interactionRadius", "Interaction radius", 6)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.enterable.exitPoint#node", "Exit point")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.enterable.nicknameRenderNode#node", "Nickname rendering node", "root node")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.enterable.nicknameRenderNode#offset", "Nickname rendering offset")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.enterable.reverb#referenceNode", "Reference node for reverb calculations", "center of vehicle +2m Y")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.enterable.enterAnimation#name", "Enter animation name")
  VehicleCharacter.registerCharacterXMLPaths(Vehicle.xmlSchema, "vehicle.enterable.characterNode")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.enterable.additionalCharacter#node", "Additional character node")
  VehicleCharacter.registerCharacterXMLPaths(Vehicle.xmlSchema, "vehicle.enterable.additionalCharacter")
  VehicleCamera.registerCameraXMLPaths(Vehicle.xmlSchema, "vehicle.enterable.cameras.camera(?)")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.enterable.characterTargetNodeModifier(?)#node", "Target node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.enterable.characterTargetNodeModifier(?)#poseId", "Modifier pose id")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.enterable.characterTargetNodeModifier(?).state(?)#node", "State node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.enterable.characterTargetNodeModifier(?).state(?)#referenceNode", "State is activated if this node moves or rotates")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.enterable.characterTargetNodeModifier(?).state(?)#directionReferenceNode", "State node is align to this node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.enterable.characterTargetNodeModifier(?).state(?)#poseId", "Pose id")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.enterable.characterTargetNodeModifier(?)#transitionTime", "Time between state changes", 0.1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.enterable.characterTargetNodeModifier(?)#transitionIdleDelay", "State is changed after this delay", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.enterable.mirrors.mirror(?)#node", "Mirror node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.enterable.mirrors.mirror(?)#prio", "Priority", 2)
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.enterable.dashboards", "time | timeHours | timeMinutes | operatingTime | outsideTemperature")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.enterable.sounds", "rain(?)")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dashboard.GROUP_XML_KEY .. "#isEntered", "Is entered")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. "#updateCharacterTargetModifier", "Update character target modifier state", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Cylindered.MOVING_PART_XML_KEY .. "#updateCharacterTargetModifier", "Update character target modifier state", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
  VehicleCamera.registerCameraSavegameXMLPaths(Vehicle.xmlSchemaSavegame, "vehicles.vehicle(?).enterable.camera(?)")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).enterable#activeCameraIndex", "Index of active camera", 1)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).enterable#isTabbable", "Is tabbable", true)
end
function Enterable.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onEnterVehicle")
  SpecializationUtil.registerEvent(vehicleType, "onLeaveVehicle")
  SpecializationUtil.registerEvent(vehicleType, "onCameraChanged")
  SpecializationUtil.registerEvent(vehicleType, "onVehicleCharacterChanged")
end
function Enterable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "enterVehicle", Enterable.enterVehicle)
  SpecializationUtil.registerFunction(vehicleType, "doLeaveVehicle", Enterable.doLeaveVehicle)
  SpecializationUtil.registerFunction(vehicleType, "leaveVehicle", Enterable.leaveVehicle)
  SpecializationUtil.registerFunction(vehicleType, "setActiveCameraIndex", Enterable.setActiveCameraIndex)
  SpecializationUtil.registerFunction(vehicleType, "addToolCameras", Enterable.addToolCameras)
  SpecializationUtil.registerFunction(vehicleType, "removeToolCameras", Enterable.removeToolCameras)
  SpecializationUtil.registerFunction(vehicleType, "getExitNode", Enterable.getExitNode)
  SpecializationUtil.registerFunction(vehicleType, "getUserPlayerStyle", Enterable.getUserPlayerStyle)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentPlayerStyle", Enterable.getCurrentPlayerStyle)
  SpecializationUtil.registerFunction(vehicleType, "setVehicleCharacter", Enterable.setVehicleCharacter)
  SpecializationUtil.registerFunction(vehicleType, "vehicleCharacterLoaded", Enterable.vehicleCharacterLoaded)
  SpecializationUtil.registerFunction(vehicleType, "onPlayerStyleChanged", Enterable.onPlayerStyleChanged)
  SpecializationUtil.registerFunction(vehicleType, "setRandomVehicleCharacter", Enterable.setRandomVehicleCharacter)
  SpecializationUtil.registerFunction(vehicleType, "restoreVehicleCharacter", Enterable.restoreVehicleCharacter)
  SpecializationUtil.registerFunction(vehicleType, "deleteVehicleCharacter", Enterable.deleteVehicleCharacter)
  SpecializationUtil.registerFunction(vehicleType, "getFormattedOperatingTime", Enterable.getFormattedOperatingTime)
  SpecializationUtil.registerFunction(vehicleType, "loadCharacterTargetNodeModifier", Enterable.loadCharacterTargetNodeModifier)
  SpecializationUtil.registerFunction(vehicleType, "updateCharacterTargetNodeModifier", Enterable.updateCharacterTargetNodeModifier)
  SpecializationUtil.registerFunction(vehicleType, "setCharacterTargetNodeStateDirty", Enterable.setCharacterTargetNodeStateDirty)
  SpecializationUtil.registerFunction(vehicleType, "resetCharacterTargetNodeStateDefaults", Enterable.resetCharacterTargetNodeStateDefaults)
  SpecializationUtil.registerFunction(vehicleType, "setMirrorVisible", Enterable.setMirrorVisible)
  SpecializationUtil.registerFunction(vehicleType, "getIsTabbable", Enterable.getIsTabbable)
  SpecializationUtil.registerFunction(vehicleType, "setIsTabbable", Enterable.setIsTabbable)
  SpecializationUtil.registerFunction(vehicleType, "getIsEnterable", Enterable.getIsEnterable)
  SpecializationUtil.registerFunction(vehicleType, "getIsEnterableFromMenu", Enterable.getIsEnterableFromMenu)
  SpecializationUtil.registerFunction(vehicleType, "getIsEntered", Enterable.getIsEntered)
  SpecializationUtil.registerFunction(vehicleType, "getIsControlled", Enterable.getIsControlled)
  SpecializationUtil.registerFunction(vehicleType, "getControllerName", Enterable.getControllerName)
  SpecializationUtil.registerFunction(vehicleType, "getActiveCamera", Enterable.getActiveCamera)
  SpecializationUtil.registerFunction(vehicleType, "getVehicleCharacter", Enterable.getVehicleCharacter)
  SpecializationUtil.registerFunction(vehicleType, "getAllowCharacterVisibilityUpdate", Enterable.getAllowCharacterVisibilityUpdate)
  SpecializationUtil.registerFunction(vehicleType, "getDisableVehicleCharacterOnLeave", Enterable.getDisableVehicleCharacterOnLeave)
  SpecializationUtil.registerFunction(vehicleType, "loadCamerasFromXML", Enterable.loadCamerasFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadAdditionalCharacterFromXML", Enterable.loadAdditionalCharacterFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsAdditionalCharacterActive", Enterable.getIsAdditionalCharacterActive)
  SpecializationUtil.registerFunction(vehicleType, "getCanLeave", Enterable.getCanLeave)
  SpecializationUtil.registerFunction(vehicleType, "getCanLeaveVehicle", Enterable.getCanLeaveVehicle)
  SpecializationUtil.registerFunction(vehicleType, "getCanLeaveRideable", Enterable.getCanLeaveRideable)
  SpecializationUtil.registerFunction(vehicleType, "getIsLeavingAllowed", Enterable.getIsLeavingAllowed)
end
function Enterable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsActive", Enterable.getIsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsActiveForInput", Enterable.getIsActiveForInput)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDistanceToNode", Enterable.getDistanceToNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getInteractionHelp", Enterable.getInteractionHelp)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "interact", Enterable.interact)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleSelectable", Enterable.getCanToggleSelectable)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleAttach", Enterable.getCanToggleAttach)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getActiveFarm", Enterable.getActiveFarm)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDashboardGroupFromXML", Enterable.loadDashboardGroupFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDashboardGroupActive", Enterable.getIsDashboardGroupActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "mountDynamic", Enterable.mountDynamic)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsInUse", Enterable.getIsInUse)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadExtraDependentParts", Enterable.loadExtraDependentParts)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateExtraDependentParts", Enterable.updateExtraDependentParts)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMapHotspotVisible", Enterable.getIsMapHotspotVisible)
end
function Enterable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onPreLoad", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onPostUpdate", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onDrawUIInfo", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onSetBroken", Enterable)
  SpecializationUtil.registerEventListener(vehicleType, "onLoadFinished", Enterable)
end
function Enterable.onPreLoad(v0, v1)
  Vehicle.registerInteractionFlag("Enterable")
end
function Enterable:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mirrors.mirror(0)#index", "vehicle.enterable.mirrors.mirror(0)#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.enterReferenceNode", "vehicle.enterable.enterReferenceNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.enterReferenceNode#index", "vehicle.enterable.enterReferenceNode#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.enterable.enterReferenceNode#index", "vehicle.enterable.enterReferenceNode#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.exitPoint", "vehicle.enterable.exitPoint")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.exitPoint#index", "vehicle.enterable.exitPoint#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.enterable.exitPoint#index", "vehicle.enterable.exitPoint#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.characterNode", "vehicle.enterable.characterNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.characterNode#index", "vehicle.enterable.characterNode#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.enterable.characterNode#index", "vehicle.enterable.characterNode#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.nicknameRenderNode", "vehicle.enterable.nicknameRenderNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.enterAnimation", "vehicle.enterable.enterAnimation")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cameras.camera1", "vehicle.enterable.cameras.camera")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.enterable.cameras.camera1", "vehicle.enterable.cameras.camera")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.indoorHud.time", "vehicle.enterable.dashboards.dashboard with valueType 'time'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.indoorHud.operatingTime", "vehicle.enterable.dashboards.dashboard with valueType 'operatingTime'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.enterable.nicknameRenderNode#index", "vehicle.enterable.nicknameRenderNode#node")
  local v3 = v3:getValue("vehicle.enterable#isTabbable", true)
  self.spec_enterable.isTabbable = v3
  v3 = v3:getValue("vehicle.enterable#canBeEnteredFromMenu", self.spec_enterable.isTabbable)
  self.spec_enterable.canBeEnteredFromMenu = v3
  self.spec_enterable.isEntered = false
  self.spec_enterable.isControlled = false
  self.spec_enterable.playerStyle = nil
  self.spec_enterable.canUseEnter = true
  self.spec_enterable.controllerFarmId = 0
  self.spec_enterable.controllerUserId = 0
  self.spec_enterable.disableCharacterOnLeave = true
  v3 = v3:getValue("vehicle.enterable.forceSelectionOnEnter", false)
  self.spec_enterable.forceSelectionOnEnter = v3
  v3 = v3:getValue("vehicle.enterable.enterReferenceNode#node", nil, self.components, self.i3dMappings)
  self.spec_enterable.enterReferenceNode = v3
  v3 = v3:getValue("vehicle.enterable.exitPoint#node", nil, self.components, self.i3dMappings)
  self.spec_enterable.exitPoint = v3
  v3 = v3:getValue("vehicle.enterable.enterReferenceNode#interactionRadius", 6)
  self.spec_enterable.interactionRadius = v3
  v3 = VehicleCharacter.new(self)
  self.spec_enterable.vehicleCharacter = v3
  if self.spec_enterable.vehicleCharacter ~= nil then
    v3 = v3:load(self.xmlFile, "vehicle.enterable.characterNode", self.i3dMappings)
    if not v3 then
      self.spec_enterable.vehicleCharacter = nil
    end
  end
  self:loadAdditionalCharacterFromXML(self.xmlFile)
  v2.nicknameRendering = {}
  local v4 = v4:getValue("vehicle.enterable.nicknameRenderNode#node", nil, self.components, self.i3dMappings)
  v2.nicknameRendering.node = v4
  v4 = v4:getValue("vehicle.enterable.nicknameRenderNode#offset", nil, true)
  v2.nicknameRendering.offset = v4
  if v2.nicknameRendering.node == nil then
    if v2.vehicleCharacter ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L307
      v2.nicknameRendering.node = v2.vehicleCharacter.characterDistanceRefNode
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L316
      v2.nicknameRendering.offset = {0, 1.5, 0}
    else
      v2.nicknameRendering.node = self.components[1].node
    end
  end
  if v2.nicknameRendering.offset == nil then
    v2.nicknameRendering.offset = {0, 4, 0}
  end
  v3 = v3:getValue("vehicle.enterable.enterAnimation#name")
  v2.enterAnimation = v3
  if v2.enterAnimation ~= nil then
    v3 = self:getAnimationExists(v2.enterAnimation)
    if not v3 then
      Logging.xmlWarning(self.xmlFile, "Unable to find enter animation '%s'", v2.enterAnimation)
    end
  end
  self:loadCamerasFromXML(self.xmlFile, savegame)
  if v2.numCameras == 0 then
    Logging.xmlError(self.xmlFile, "No cameras defined!")
    self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
    return
  end
  v2.characterTargetNodeReferenceToState = {}
  v2.characterTargetNodeModifiers = {}
  while true do
    v4 = string.format("vehicle.enterable.characterTargetNodeModifier(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadCharacterTargetNodeModifier({}, self.xmlFile, v4)
    if v6 then
      table.insert(v2.characterTargetNodeModifiers, {})
    end
  end
  if g_isDevelopmentVersion then
    I3DUtil.getNodesByShaderParam(self.rootNode, "reflectionScale", {})
  end
  v2.mirrors = {}
  v6 = v6:getValue("maxNumMirrors")
  if 0 >= v6 then
  end
  while true do
    v6 = string.format("vehicle.enterable.mirrors.mirror(%d)", v3)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = v7:getValue(v6 .. "#node", nil, self.components, self.i3dMappings)
    if v7 ~= nil then
      v8 = v8:getValue(v6 .. "#prio", 2)
      setReflectionMapObjectMasks(v7, 32896, 2147483648, true)
      v9 = getObjectMask(v7)
      if v9 == 0 then
        setObjectMask(v7, 16711807)
      end
      if v5 then
        v12 = getParent(v7)
        table.insert(v2.mirrors, {node = v7, prio = v8, cosAngle = 1, parentNode = v12})
      else
        setVisibility(v7, false)
      end
      v4[v7] = nil
    end
  end
  for v9, v10 in pairs(v4) do
    local v14 = getName(v9)
    Logging.xmlError(...)
  end
  self:setMirrorVisible(v2.cameras[v2.camIndex].useMirror)
  if self.loadDashboardsFromXML ~= nil then
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.enterable.dashboards", {valueTypeToLoad = "time", valueObject = g_currentMission.environment, valueFunc = "getEnvironmentTime"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.enterable.dashboards", {valueTypeToLoad = "timeHours", valueObject = g_currentMission.environment, valueFunc = function(self)
      local savegame = self:getEnvironmentTime()
      local v3 = math.floor(savegame)
      return v3 + savegame % 1 * 100 / 60
    end})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.enterable.dashboards", {valueTypeToLoad = "timeMinutes", valueObject = g_currentMission.environment, valueFunc = function(self)
      local v3 = self:getEnvironmentTime()
      return v3 % 1 * 100
    end})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.enterable.dashboards", {valueTypeToLoad = "operatingTime", valueObject = self, valueFunc = "getFormattedOperatingTime"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.enterable.dashboards", {valueTypeToLoad = "outsideTemperature", valueObject = g_currentMission.environment.weather, valueFunc = "getCurrentTemperature"})
  end
  v2.lastIsRaining = false
  v2.weatherObject = g_currentMission.environment.weather
  if self.isClient then
    v6 = v6:loadSamplesFromXML(self.xmlFile, "vehicle.enterable.sounds", "rain", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.rainSamples = v6
  end
  v6 = v6:getValue("vehicle.enterable.reverb#referenceNode", nil, self.components, self.i3dMappings)
  v2.reverbReferenceNode = v6
  if v2.reverbReferenceNode == nil then
    v6 = createTransformGroup("ReverebRefNode")
    v2.reverbReferenceNode = v6
    link(self.rootNode, v2.reverbReferenceNode)
    setTranslation(v2.reverbReferenceNode, 0, 2, 0)
  end
  v6 = self:getNextDirtyFlag()
  v2.dirtyFlag = v6
  v6 = PlayerHotspot.new()
  v2.playerHotspot = v6
  v6:setVehicle(self)
  v6:addInteractiveVehicle(self)
  v6:addEnterableVehicle(self)
end
function Enterable:onPostLoad(savegame)
  -- TODO: structure LOP_FORNPREP (pc 7, target 16)
  self.spec_enterable.cameras[1]:onPostLoad(savegame)
  -- TODO: structure LOP_FORNLOOP (pc 15, target 8)
  if savegame ~= nil and not savegame.resetVehicles then
    local v5 = v5:getValue(savegame.key .. ".enterable#isTabbable", self.spec_enterable.isTabbable)
    self:setIsTabbable(...)
    local v3 = v3:getValue(savegame.key .. ".enterable#activeCameraIndex", 1)
    self.spec_enterable.camIndex = v3
  end
end
function Enterable:onLoadFinished(savegame)
  if self.spec_enterable.isControlled then
    local v5 = self:getActiveFarm()
    v3:setOwnerFarmId(...)
    v3:addMapHotspot(self.spec_enterable.playerHotspot)
  end
end
function Enterable:onDelete()
  if self.spec_enterable.vehicleCharacter ~= nil then
    v2:delete()
    self.spec_enterable.vehicleCharacter = nil
  end
  if v1.cameras ~= nil then
    for v5, v6 in ipairs(v1.cameras) do
      v6:delete()
    end
  end
  if v1.playerHotspot ~= nil then
    v2:removeMapHotspot(v1.playerHotspot)
    v2:delete()
    v1.playerHotspot = nil
  end
  v2:deleteSamples(v1.rainSamples)
  v1.weatherObject = nil
  g_currentMission.controlledVehicles[self] = nil
  v2:removeEnterableVehicle(self)
  v2:removeInteractiveVehicle(self)
end
function Enterable:onReadStream(streamId, connection)
  local isControlled = streamReadBool(streamId)
  self.spec_enterable.isTabbable = isControlled
  isControlled = streamReadBool(streamId)
  if isControlled then
    local playerStyle = PlayerStyle.new()
    playerStyle:readStream(streamId, connection)
    local farmId = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    local userId = streamReadInt32(streamId)
    self:enterVehicle(false, playerStyle, farmId, userId)
  end
end
function Enterable:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_enterable.isTabbable)
  local v4 = streamWriteBool(streamId, self.spec_enterable.isControlled)
  if v4 then
    v4:writeStream(streamId, connection)
    streamWriteUIntN(streamId, self.spec_enterable.controllerFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    streamWriteInt32(streamId, self.spec_enterable.controllerUserId)
  end
end
function Enterable:saveToXMLFile(xmlFile, key, usedModNames)
  -- TODO: structure LOP_FORNPREP (pc 7, target 23)
  local v11 = string.format("%s.camera(%d)", key, 1 - 1)
  v8:saveToXMLFile(xmlFile, v11, usedModNames)
  -- TODO: structure LOP_FORNLOOP (pc 22, target 8)
  xmlFile:setValue(key .. "#activeCameraIndex", self.spec_enterable.camIndex)
  xmlFile:setValue(key .. "#isTabbable", self.spec_enterable.isTabbable)
end
function Enterable:saveStatsToXMLFile(xmlFile, key)
  if self.spec_enterable.isControlled then
    local name = self:getControllerName()
    if name ~= nil then
      local v8 = HTMLUtil.encodeToHTML(name)
      setXMLString(...)
    end
  end
  return nil
end
function Enterable:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v5 = self:getIsControlled()
  if v5 then
    if self.isClient then
      for v9, v10 in ipairs(self.spec_enterable.characterTargetNodeModifiers) do
        self:updateCharacterTargetNodeModifier(dt, v10)
      end
      if v5.vehicleCharacter ~= nil then
        v6:update(dt)
      end
      v6 = self:getIsAdditionalCharacterActive()
      if v6 ~= v5.additionalCharacterActive then
        v5.additionalCharacterActive = not v5.additionalCharacterActive
        v6 = self:getVehicleCharacter()
        if v6 ~= nil then
          if v5.additionalCharacterActive then
          end
          v6:setIKChainTargets(v8)
          v6.characterNode = v7
          if v6.playerModel.rootNode ~= nil then
            link(v7, v6.playerModel.rootNode)
          end
        end
      end
      if v5.rainSamples ~= nil and 0 < #v5.rainSamples then
        v7 = v7:getRainFallScale()
        if 0 >= v7 then
        end
        if true ~= v5.lastIsRaining then
          if true then
            v7:playSamples(v5.rainSamples)
          else
            v7:stopSamples(v5.rainSamples)
          end
          v5.lastIsRaining = v6
        end
      end
      v6, v7, v8 = getWorldTranslation(self.rootNode)
      v9:setPosition(v6, v7, v8)
    end
    v5:raiseActive()
  end
end
function Enterable:onPostUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    if self.spec_enterable.isEntered and self.spec_enterable.vehicleCharacter ~= nil and self.spec_enterable.vehicleCharacter.characterSpineNode ~= nil and self.spec_enterable.vehicleCharacter.characterSpineSpeedDepended then
      v6:setSpineDirty(self.lastSpeedAcceleration)
    end
    if self.finishedFirstUpdate then
      local v6 = self:getIsEntered()
      if v6 then
        v6:update(dt)
      end
      v6 = self:getAllowCharacterVisibilityUpdate()
      if v6 and v5.vehicleCharacter ~= nil then
        v6:updateVisibility()
      end
    end
    v6 = self:getIsControlled()
    if v6 and v5.activeCamera ~= nil and v5.activeCamera.useMirror then
      self:setMirrorVisible(true)
    end
  end
end
function Enterable:onDrawUIInfo()
  local v3 = v3:getIsGuiVisible()
  if not v3 and not g_noHudModeEnabled then
    local v2 = v2:getValue(GameSettings.SETTING.SHOW_MULTIPLAYER_NAMES)
  end
  if not v1.isEntered and self.isClient then
    v3 = self:getIsActive()
    if v3 and v1.isControlled and v2 then
      local v3, v4, v5 = getWorldTranslation(v1.nicknameRendering.node)
      local v7 = getCamera()
      local v6, v7, v8 = getWorldTranslation(...)
      local v9 = MathUtil.vector3LengthSq(v3 - v6, v4 - v7, v5 - v8)
      if v9 <= 10000 then
        local v14 = self:getControllerName()
        local v15 = getCorrectTextSize(0.02)
        Utils.renderTextAtWorldPosition(v3 + v1.nicknameRendering.offset[1], v4 + v1.nicknameRendering.offset[2], v5 + v1.nicknameRendering.offset[3], v14, v15, 0)
      end
    end
  end
end
function Enterable:loadCamerasFromXML(xmlFile, savegame)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, "vehicle.cameras.camera(0)#index", "vehicle.enterable.cameras.camera(0)#node")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, "vehicle.cameras.camera(0).raycastNode(0)#index", "vehicle.enterable.cameras.camera(0).raycastNode(0)#node")
  self.spec_enterable.cameras = {}
  while true do
    v5 = string.format("vehicle.enterable.cameras.camera(%d)", v4)
    v6 = xmlFile:hasProperty(v5)
    if not v6 then
      break
    end
    v6 = VehicleCamera.new(self)
    v7 = v6:loadFromXML(xmlFile, v5, savegame, v4)
    if v7 then
      table.insert(v3.cameras, v6)
    end
  end
  v3.numCameras = #v3.cameras
  v3.camIndex = 1
end
function Enterable:loadAdditionalCharacterFromXML(xmlFile)
  local v3 = xmlFile:getValue("vehicle.enterable.additionalCharacter#node", nil, self.components, self.i3dMappings)
  self.spec_enterable.additionalCharacterNode = v3
  self.spec_enterable.additionalCharacterTargets = {}
  IKUtil.loadIKChainTargets(xmlFile, "vehicle.enterable.additionalCharacter", self.components, self.spec_enterable.additionalCharacterTargets, self.i3dMappings)
  self.spec_enterable.additionalCharacterActive = false
  if self.spec_enterable.vehicleCharacter ~= nil then
    self.spec_enterable.defaultCharacterNode = self.spec_enterable.vehicleCharacter.characterNode
    v3 = v3:getIKChainTargets()
    self.spec_enterable.defaultCharacterTargets = v3
  end
end
function Enterable.getIsAdditionalCharacterActive(v0)
  return false
end
function Enterable:loadCharacterTargetNodeModifier(entry, xmlFile, xmlKey)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlKey .. "#index", xmlKey .. "#node")
  local v4 = xmlFile:getValue(xmlKey .. "#node", nil, self.components, self.i3dMappings)
  entry.node = v4
  if entry.node ~= nil then
    v4 = getParent(entry.node)
    entry.parent = v4
    local v5 = getTranslation(entry.node)
    entry.translationOffset = {}
    v5 = getRotation(entry.node)
    entry.rotationOffset = {}
    v4 = xmlFile:getValue(xmlKey .. "#poseId")
    entry.poseId = v4
    entry.states = {}
    while true do
      v5 = string.format("%s.state(%d)", xmlKey, v4)
      v6 = xmlFile:hasProperty(v5)
      if not v6 then
        break
      end
      XMLUtil.checkDeprecatedXMLElements(xmlFile, v5 .. "#index", v5 .. "#node")
      v6 = xmlFile:getValue(v5 .. "#node", nil, self.components, self.i3dMappings)
      if v6 ~= nil then
        v8 = xmlFile:getValue(v5 .. "#referenceNode", nil, self.components, self.i3dMappings)
        v8 = xmlFile:getValue(v5 .. "#directionReferenceNode", nil, self.components, self.i3dMappings)
        v8 = v8:getValue(v5 .. "#poseId")
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L212
        v9 = getRotation({node = v6, referenceNode = v8, directionReferenceNode = v8, poseId = v8}.referenceNode)
        v9 = getTranslation({node = v6, referenceNode = v8, directionReferenceNode = v8, poseId = v8, defaultRotation = {}}.referenceNode)
        if self.spec_enterable.characterTargetNodeReferenceToState[{node = v6, referenceNode = v8, directionReferenceNode = v8, poseId = v8, defaultRotation = {}, defaultTranslation = {}}.referenceNode] == nil then
          self.spec_enterable.characterTargetNodeReferenceToState[{node = v6, referenceNode = v8, directionReferenceNode = v8, poseId = v8, defaultRotation = {}, defaultTranslation = {}}.referenceNode] = {}
        end
        table.insert(v8.characterTargetNodeReferenceToState[v7.referenceNode], v7)
        table.insert(entry.states, v7)
      else
        Logging.xmlWarning(self.xmlFile, "Missing node for state '%s'", v5)
      end
    end
    v6 = v6:getValue(xmlKey .. "#transitionTime", 0.1)
    entry.transitionTime = v6 * 1000
    entry.transitionAlpha = 1
    v6 = v6:getValue(xmlKey .. "#transitionIdleDelay", 0.5)
    entry.transitionIdleDelay = v6 * 1000
    entry.transitionIdleTime = 0
    return true
  end
  return false
end
function Enterable:updateCharacterTargetNodeModifier(dt, modifier)
  for v8, v9 in pairs(modifier.states) do
    if not v9.isActive then
      continue
    end
    if not (v9.directionReferenceNode ~= nil) then
      continue
    end
    local v10, v11, v12 = getWorldTranslation(v9.directionReferenceNode)
    local v13, v14, v15 = getTranslation(v9.node)
    local v17 = getParent(v9.node)
    local v16, v17, v18 = worldToLocal(v17, v10, v11, v12)
    setDirection(v9.node, v16 - v13, v17 - v14, v18 - v15, 0, 1, 0)
  end
  if modifier.transitionAlpha >= 1 then
  end
  if v3 == modifier.parent then
  end
  if not true then
    modifier.transitionIdleTime = modifier.transitionIdleTime + dt
    if modifier.transitionIdleDelay < modifier.transitionIdleTime then
      modifier.transitionIdleTime = 0
    end
  end
  if v6 then
    v7 = getParent(modifier.node)
    if v7 ~= v3 then
      v8 = localToLocal(modifier.node, v3, 0, 0, 0)
      if v3 == modifier.parent then
      end
      modifier.transitionStartPos = v7
      modifier.transitionEndPos = v8
      v9 = math.abs(v8[1] - v7[1])
      if v9 < 0.001 then
        v9 = math.abs(v8[2] - v7[2])
        -- if v9 >= 0.001 then goto L157 end
        v9 = math.abs(v8[3] - v7[3])
        -- if v9 >= 0.001 then goto L157 end
        modifier.transitionAlpha = 1
      else
        modifier.transitionAlpha = 0
      end
      v9, v10, v11 = localRotationToLocal(modifier.node, v3, 0, 0, 0)
      v13 = mathEulerToQuaternion(v9, v10, v11)
      modifier.transitionStartQuat = {}
      modifier.transitionEndQuat = {0, 0, 0, 1}
      if v3 == modifier.parent then
        v14 = unpack(modifier.rotationOffset)
        v13 = mathEulerToQuaternion(...)
        modifier.transitionEndQuat = {}
      end
      link(v3, modifier.node)
      if v4 ~= nil then
        v12 = self:getVehicleCharacter()
        if v12 ~= nil then
          v12:setIKChainPoseByTarget(modifier.node, v4)
        end
      end
    end
  end
  if v5 then
    v7 = math.min(1, modifier.transitionAlpha + dt / modifier.transitionTime)
    modifier.transitionAlpha = v7
    v7, v8, v9 = MathUtil.vector3ArrayLerp(modifier.transitionStartPos, modifier.transitionEndPos, modifier.transitionAlpha)
    setTranslation(modifier.node, v7, v8, v9)
    v10, v11, v12, v13 = MathUtil.slerpQuaternionShortestPath(modifier.transitionStartQuat[1], modifier.transitionStartQuat[2], modifier.transitionStartQuat[3], modifier.transitionStartQuat[4], modifier.transitionEndQuat[1], modifier.transitionEndQuat[2], modifier.transitionEndQuat[3], modifier.transitionEndQuat[4], modifier.transitionAlpha)
    setQuaternion(modifier.node, v10, v11, v12, v13)
  end
end
function Enterable:setCharacterTargetNodeStateDirty(referenceNode, forceActive)
  if self.spec_enterable.characterTargetNodeReferenceToState[referenceNode] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 10, target 93)
    if forceActive ~= true then
    end
    v8.isActive = true
    local v9, v10, v11 = getRotation(v8.referenceNode)
    local v12, v13, v14 = unpack(v8.defaultRotation)
    local v17 = math.abs(v9 - v12)
    local v18 = math.abs(v10 - v13)
    v17 = math.abs(v11 - v14)
    if 0.001 < v17 + v18 + v17 then
      v8.isActive = true
    end
    local v15, v16, v17 = getTranslation(v8.referenceNode)
    v15, v16, v17 = unpack(v8.defaultTranslation)
    v17 = math.abs(v15 - v15)
    v18 = math.abs(v16 - v16)
    v17 = math.abs(v17 - v17)
    if 0.001 < v17 + v18 + v17 then
      v8.isActive = true
    end
    -- TODO: structure LOP_FORNLOOP (pc 92, target 11)
  end
end
function Enterable:resetCharacterTargetNodeStateDefaults(referenceNode)
  if self.spec_enterable.characterTargetNodeReferenceToState[referenceNode] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 10, target 41)
    local v11, v12, v13 = getRotation(self.spec_enterable.characterTargetNodeReferenceToState[referenceNode][1].referenceNode)
    self.spec_enterable.characterTargetNodeReferenceToState[referenceNode][1].defaultRotation[1] = v11
    self.spec_enterable.characterTargetNodeReferenceToState[referenceNode][1].defaultRotation[2] = v12
    self.spec_enterable.characterTargetNodeReferenceToState[referenceNode][1].defaultRotation[3] = v13
    v11, v12, v13 = getTranslation(self.spec_enterable.characterTargetNodeReferenceToState[referenceNode][1].referenceNode)
    self.spec_enterable.characterTargetNodeReferenceToState[referenceNode][1].defaultTranslation[1] = v11
    self.spec_enterable.characterTargetNodeReferenceToState[referenceNode][1].defaultTranslation[2] = v12
    self.spec_enterable.characterTargetNodeReferenceToState[referenceNode][1].defaultTranslation[3] = v13
    -- TODO: structure LOP_FORNLOOP (pc 40, target 11)
  end
end
function Enterable:enterVehicle(isControlling, playerStyle, farmId, userId)
  self:raiseActive()
  self.spec_enterable.isControlled = true
  self.spec_enterable.isEntered = isControlling
  self.spec_enterable.playerStyle = playerStyle
  self.spec_enterable.canUseEnter = false
  self.spec_enterable.controllerFarmId = farmId
  self.spec_enterable.controllerUserId = userId
  g_currentMission.controlledVehicles[self] = self
  if self.spec_enterable.forceSelectionOnEnter and self.rootVehicle ~= self then
    self.rootVehicle:setSelectedImplementByObject(self)
  end
  if v5.isEntered then
    local v6 = v6:getValue("isHeadTrackingEnabled")
    if v6 then
      v6 = isHeadTrackingAvailable()
      if v6 then
        for v9, v10 in pairs(v5.cameras) do
          if not v10.isInside then
            continue
          end
          v5.camIndex = v9
          break
        end
      end
    end
    v6 = v6:getValue("resetCamera")
    if v6 then
      v5.camIndex = 1
    end
    self:setActiveCameraIndex(v5.camIndex)
  end
  if v5.playerHotspot ~= nil then
    v8 = self:getActiveFarm()
    v6:setOwnerFarmId(...)
    v6:addMapHotspot(v5.playerHotspot)
  end
  v6 = self:getIsAIActive()
  if not v6 then
    self:setVehicleCharacter(playerStyle)
    if v5.enterAnimation ~= nil and self.playAnimation ~= nil then
      self:playAnimation(v5.enterAnimation, 1, nil, true)
    end
  end
  v6 = self:getIsActiveForInput(true, true)
  self.isActiveForLocalSound = v6
  SpecializationUtil.raiseEvent(self, "onEnterVehicle", isControlling)
  v6:raiseStateChange(Vehicle.STATE_CHANGE_ENTER_VEHICLE, self, isControlling)
  if self.isClient then
    v6:subscribe(MessageType.INPUT_BINDINGS_CHANGED, self.requestActionEventUpdate, self)
    self:requestActionEventUpdate()
  end
  if self.isServer and not isControlling and g_currentMission.trafficSystem ~= nil and g_currentMission.trafficSystem.trafficSystemId ~= 0 then
    addTrafficSystemPlayer(g_currentMission.trafficSystem.trafficSystemId, self.components[1].node)
  end
  self:activate()
end
function Enterable:getCanLeave()
  return self.spec_enterable.isEntered
end
function Enterable:getCanLeaveVehicle()
  if self.spec_rideable ~= nil then
  end
  if true then
    local v2 = self:getCanLeave()
  end
  return v2
end
function Enterable:getCanLeaveRideable()
  if self.spec_rideable == nil then
  end
  if true then
    local v2 = self:getCanLeave()
  end
  return v2
end
function Enterable.getIsLeavingAllowed(v0)
  local v1 = v1:getIsRunning()
  if v1 then
    v1 = v1:getCanLeaveVehicle(v0)
    if not v1 then
      return false
    end
  end
  return true
end
function Enterable:doLeaveVehicle()
  local v1 = self:getCanLeave()
  if v1 then
    v1 = self:getIsLeavingAllowed()
    if v1 then
      v1:onLeaveVehicle()
    end
  end
end
function Enterable:leaveVehicle()
  v2:removePauseListeners(self)
  if self.spec_enterable.activeCamera ~= nil and self.spec_enterable.isEntered then
    v3:onDeactivate()
    v3:setIsIndoor(false)
    v3:setIsIndoor(false)
    v3:deactivate(Vehicle.INPUT_CONTEXT_NAME)
    v3:reset()
    if self.isClient then
      v3:stopSamples(self.spec_enterable.rainSamples)
      self.spec_enterable.lastIsRaining = false
    end
  end
  if v1.playerHotspot ~= nil then
    v3:removeMapHotspot(v1.playerHotspot)
  end
  v1.isControlled = false
  v1.isEntered = false
  v1.playerIndex = 0
  v1.playerColorIndex = 0
  v1.canUseEnter = true
  v1.controllerFarmId = 0
  v1.controllerUserId = 0
  g_currentMission.controlledVehicles[self] = nil
  v3:setLastInteractionTime(200)
  if v1.vehicleCharacter ~= nil then
    local v3 = self:getDisableVehicleCharacterOnLeave()
    if v3 then
      self:deleteVehicleCharacter()
    end
  end
  if v1.enterAnimation ~= nil and self.playAnimation ~= nil then
    self:playAnimation(v1.enterAnimation, -1, nil, true)
  end
  self:setMirrorVisible(false)
  SpecializationUtil.raiseEvent(self, "onLeaveVehicle", v2)
  v3:raiseStateChange(Vehicle.STATE_CHANGE_LEAVE_VEHICLE, self)
  if self.isClient then
    v3:unsubscribe(MessageType.INPUT_BINDINGS_CHANGED, self)
    self:requestActionEventUpdate()
    if g_touchHandler ~= nil then
      v3:removeGestureListener(self.touchListenerDoubleTab)
    end
  end
  if self.isServer and not v1.isEntered and g_currentMission.trafficSystem ~= nil and g_currentMission.trafficSystem.trafficSystemId ~= 0 then
    removeTrafficSystemPlayer(g_currentMission.trafficSystem.trafficSystemId, self.components[1].node)
  end
  v3 = self:getDeactivateOnLeave()
  if v3 then
    self:deactivate()
  end
end
function Enterable:getIsMapHotspotVisible(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  return not self.spec_enterable.isEntered
end
function Enterable:setActiveCameraIndex(index)
  if self.spec_enterable.activeCamera ~= nil then
    v3:onDeactivate()
  end
  v2.camIndex = index
  if v2.numCameras < v2.camIndex then
    v2.camIndex = 1
  end
  v2.activeCamera = v2.cameras[v2.camIndex]
  v2.cameras[v2.camIndex]:onActivate()
  v4:setIsIndoor(not v2.cameras[v2.camIndex].useOutdoorSounds)
  v4:setIsIndoor(not v2.cameras[v2.camIndex].useOutdoorSounds)
  self:setMirrorVisible(v2.cameras[v2.camIndex].useMirror)
  if v2.cameras[v2.camIndex].isInside then
    v4:setManipulatedParams(nil, 0.6, nil, nil, nil)
  else
    v4:reset()
  end
  v4:setReferenceNode(v3.cameraNode)
  SpecializationUtil.raiseEvent(self, "onCameraChanged", v3, v2.camIndex)
end
function Enterable:addToolCameras(cameras)
  for v6, v7 in pairs(cameras) do
    table.insert(v2.cameras, v7)
  end
  v2.numCameras = #v2.cameras
end
function Enterable:removeToolCameras(cameras)
  -- TODO: structure LOP_FORNPREP (pc 8, target 34)
  for v11, v12 in pairs(cameras) do
    if not (v12 == v7) then
      continue
    end
    table.remove(v2.cameras, v6)
    if not (v6 == v2.camIndex) then
      break
    end
    break
  end
  -- TODO: structure LOP_FORNLOOP (pc 33, target 9)
  v2.numCameras = #v2.cameras
  if v3 then
    if v2.activeCamera ~= nil then
      v4:onDeactivate()
    end
    v2.camIndex = 1
    self:setActiveCameraIndex(v2.camIndex)
  end
end
function Enterable:getExitNode()
  return self.spec_enterable.exitPoint
end
function Enterable:getUserPlayerStyle()
  return self.spec_enterable.playerStyle
end
function Enterable:getCurrentPlayerStyle()
  if self.spec_enterable.vehicleCharacter ~= nil then
    return v2:getPlayerStyle()
  end
end
function Enterable:setVehicleCharacter(playerStyle)
  self:deleteVehicleCharacter()
  if self.spec_enterable.vehicleCharacter ~= nil then
    v3:loadCharacter(playerStyle, self, self.vehicleCharacterLoaded)
  end
end
function Enterable:vehicleCharacterLoaded(success, arguments)
  if success then
    v4:updateVisibility()
    v4:updateIKChains()
  end
  SpecializationUtil.raiseEvent(self, "onVehicleCharacterChanged", v3.vehicleCharacter)
  v4:subscribe(MessageType.PLAYER_STYLE_CHANGED, self.onPlayerStyleChanged, self)
end
function Enterable:onPlayerStyleChanged(style, userId)
  if self.isServer then
    local connection = self:getOwner()
    if connection ~= nil then
      local v4 = v4:getUserIdByConnection(connection)
      if v4 == userId then
        self:setVehicleCharacter(style)
        local v7 = VehiclePlayerStyleChangedEvent.new(self, style)
        v5:broadcastEvent(...)
      end
    end
  end
end
function Enterable:setRandomVehicleCharacter(helper)
  if self.spec_enterable.vehicleCharacter ~= nil then
    if helper ~= nil then
      local v4 = PlayerStyle.newHelper(helper)
    else
      v4 = PlayerStyle.newRandomHelper()
    end
    self:setVehicleCharacter(v3)
  end
end
function Enterable:restoreVehicleCharacter()
  if self.spec_enterable.vehicleCharacter ~= nil then
    local v2 = self:getIsControlled()
    if v2 then
      local v4 = self:getUserPlayerStyle()
      self:setVehicleCharacter(...)
      return
    end
    self:deleteVehicleCharacter()
  end
end
function Enterable:deleteVehicleCharacter()
  if self.spec_enterable.vehicleCharacter ~= nil then
    v2:unloadCharacter()
  end
  v2:unsubscribe(MessageType.PLAYER_STYLE_CHANGED, self)
end
function Enterable:getFormattedOperatingTime()
  local v2 = math.floor(self.operatingTime / 60000 / 60)
  local v3 = math.floor((self.operatingTime / 60000 - v2 * 60) / 6)
  v3 = string.format("%02d", v3 * 10)
  return tonumber(v2 .. "." .. v3)
end
function Enterable:getIsActive(superFunc)
  if not self.spec_enterable.isEntered then
    -- if not v0.spec_enterable.isControlled then goto L10 end
  end
  return true
  return superFunc(self)
end
function Enterable:getIsActiveForInput(superFunc, ignoreSelection, activeForAI)
  local v4 = superFunc(self, ignoreSelection, activeForAI)
  if not v4 then
    return false
  end
  if g_currentMission.isPlayerFrozen then
    return false
  end
  if self.spec_enterable.isEntered then
    -- if v0.spec_enterable.isControlled then goto L50 end
  end
  local v6 = v6:getChildVehicles()
  for v10, v11 in ipairs(v6) do
    if not (v11.spec_enterable ~= nil) then
      continue
    end
    if not (v11 ~= self) then
      continue
    end
    if not v11.spec_enterable.isEntered and not v11.spec_enterable.isControlled then
      continue
    end
  end
  if v5 then
    return false
  end
  return true
end
function Enterable:getDistanceToNode(superFunc, node)
  local superDistance = superFunc(self, node)
  if self.spec_enterable ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L13
  end
  return superDistance
  local v5, v6, v7 = getWorldTranslation(node)
  local v8, v9, v10 = getWorldTranslation(v3.enterReferenceNode)
  local v11 = MathUtil.vector3Length(v5 - v8, v6 - v9, v7 - v10)
  if v11 < v3.interactionRadius and v11 < superDistance then
    self.interactionFlag = Vehicle.INTERACTION_FLAG_ENTERABLE
    return v11
  end
  return superDistance
end
function Enterable:getInteractionHelp(superFunc)
  if self.interactionFlag == Vehicle.INTERACTION_FLAG_ENTERABLE then
    return v2:getText("action_enter")
  end
  v2 = superFunc(self)
  return v2
end
function Enterable:interact(superFunc)
  if self.interactionFlag == Vehicle.INTERACTION_FLAG_ENTERABLE then
    v2:requestToEnterVehicle(self)
    return
  end
  superFunc(self)
end
function Enterable:setMirrorVisible(visible)
  if self.spec_enterable.mirrors ~= nil then
    local v3 = next(self.spec_enterable.mirrors)
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L14
  end
  return
  if visible then
    for v7, v8 in pairs(v2.mirrors) do
      local v9 = getEffectiveVisibility(v8.parentNode)
      if v9 then
        v9 = getIsInCameraFrustum(v8.node, v2.activeCamera.cameraNode, g_presentedScreenAspectRatio)
        -- if not v9 then goto L66 end
        local v9, v10, v11 = localToLocal(v2.activeCamera.cameraNode, v8.node, 0, 0, 0)
        local v12 = MathUtil.vector3Length(v9, v10 * g_screenAspectRatio, v11)
        v8.cosAngle = -v11 / v12
      else
        v8.cosAngle = math.huge
      end
    end
    table.sort(v2.mirrors, function(self, visible)
      if self.prio == visible.prio then
        if visible.cosAngle >= self.cosAngle then
        end
        return true
      end
      if self.prio >= visible.prio then
      end
      return true
    end)
    v4 = v4:getValue("maxNumMirrors")
    for v8, v9 in ipairs(v2.mirrors) do
      v10 = getEffectiveVisibility(v9.parentNode)
      if not v10 then
        continue
      end
      if v9.cosAngle ~= math.huge then
        -- if v3 >= v4 then goto L112 end
        setVisibility(v9.node, true)
      else
        setVisibility(v9.node, false)
      end
    end
    return
  end
  for v6, v7 in pairs(v2.mirrors) do
    setVisibility(v7.node, false)
  end
end
function Enterable:getIsTabbable()
  return self.spec_enterable.isTabbable
end
function Enterable:setIsTabbable(isTabbable)
  if isTabbable == nil then
  end
  self.spec_enterable.isTabbable = isTabbable
end
function Enterable:getIsEnterable()
  if self.spec_enterable.enterReferenceNode ~= nil and self.spec_enterable.exitPoint ~= nil and not self.spec_enterable.isBroken and not self.spec_enterable.isControlled then
    local v2 = v2:canPlayerAccess(self)
  end
  return v2
end
function Enterable:getIsEnterableFromMenu()
  local v1 = self:getIsEnterable()
  if v1 then
  end
  return v1
end
function Enterable:getIsEntered()
  return self.spec_enterable.isEntered
end
function Enterable:getIsControlled()
  return self.spec_enterable.isControlled
end
function Enterable:getControllerName()
  if self.isServer then
    local v4 = self:getOwner()
    local v2 = v2:getUserByConnection(...)
  else
    v2 = v2:getUserByUserId(self.spec_enterable.controllerUserId)
  end
  if v1 == nil then
    return ""
  end
  v2 = v1:getNickname()
  return v2
end
function Enterable:getActiveCamera()
  return self.spec_enterable.activeCamera
end
function Enterable:getVehicleCharacter()
  return self.spec_enterable.vehicleCharacter
end
function Enterable.getAllowCharacterVisibilityUpdate(v0)
  return true
end
function Enterable:getDisableVehicleCharacterOnLeave()
  return self.spec_enterable.disableCharacterOnLeave
end
function Enterable:getCanToggleSelectable(superFunc)
  local v2 = self:getIsEntered()
  if v2 then
    return true
  end
  v2 = superFunc(self)
  return v2
end
function Enterable:getCanToggleAttach(superFunc)
  local v2 = self:getIsEntered()
  if not v2 then
    return false
  end
  v2 = superFunc(self)
  return v2
end
function Enterable:getActiveFarm(superFunc)
  if self.spec_enterable.controllerFarmId ~= 0 then
    return self.spec_enterable.controllerFarmId
  end
  return superFunc(self)
end
function Enterable.loadDashboardGroupFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  v5 = v2:getValue(v3 .. "#isEntered")
  v4.isEntered = v5
  return true
end
function Enterable:getIsDashboardGroupActive(superFunc, group)
  if group.isEntered ~= nil then
    local v4 = self:getIsEntered()
    if group.isEntered ~= v4 then
      return false
    end
  end
  return superFunc(self, group)
end
function Enterable:mountDynamic(superFunc, object, objectActorId, jointNode, mountType, forceAcceleration)
  if self.spec_enterable.isControlled then
    return false
  end
  return superFunc(self, object, objectActorId, jointNode, mountType, forceAcceleration)
end
function Enterable:getIsInUse(superFunc, connection)
  if self.spec_enterable.isControlled then
    local v4 = self:getOwner()
    if v4 ~= connection then
      return true
    end
  end
  v4 = superFunc(self, connection)
  return v4
end
function Enterable.loadExtraDependentParts(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  v5 = v2:getValue(v3 .. "#updateCharacterTargetModifier", false)
  v4.updateCharacterTargetModifier = v5
  return true
end
function Enterable:updateExtraDependentParts(superFunc, part, dt)
  superFunc(self, part, dt)
  if part.updateCharacterTargetModifier then
    self:setCharacterTargetNodeStateDirty(part.node, false)
  end
end
function Enterable:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  local v3 = self:getIsEntered()
  if v3 then
    self:clearActionEventsTable(self.spec_enterable.actionEvents)
    if g_touchHandler ~= nil then
      v4:removeGestureListener(self.touchListenerDoubleTab)
    end
    local v4 = self:getIsActiveForInput(true, true)
    if v4 then
      local v6, v7 = self:addActionEvent(v3.actionEvents, InputAction.ENTER, self, Enterable.actionEventLeave, false, true, false, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_VERY_HIGH)
      v6:setActionEventTextVisibility(v7, false)
      if 1 < v3.numCameras then
        v6, v7 = self:addActionEvent(v3.actionEvents, InputAction.CAMERA_SWITCH, self, Enterable.actionEventCameraSwitch, false, true, false, true, nil)
        v6:setActionEventTextPriority(v7, GS_PRIO_LOW)
        v6:setActionEventTextVisibility(v7, true)
      end
      v6, v7 = self:addActionEvent(v3.actionEvents, InputAction.CAMERA_ZOOM_IN, self, Enterable.actionEventCameraZoomIn, false, true, true, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_LOW)
      v6:setActionEventTextVisibility(v7, false)
      v6, v7 = self:addActionEvent(v3.actionEvents, InputAction.CAMERA_ZOOM_OUT, self, Enterable.actionEventCameraZoomOut, false, true, true, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_LOW)
      v6:setActionEventTextVisibility(v7, false)
      v6, v7 = self:addActionEvent(v3.actionEvents, InputAction.RESET_HEAD_TRACKING, self, Enterable.actionEventResetHeadTracking, false, true, false, true, nil)
      v6:setActionEventTextPriority(v7, GS_PRIO_VERY_LOW)
      v6:setActionEventTextVisibility(v7, false)
      if g_touchHandler ~= nil then
        v6 = v6:registerGestureListener(TouchHandler.GESTURE_DOUBLE_TAP, Enterable.actionEventCameraSwitch, self)
        self.touchListenerDoubleTab = v6
      end
      v6:endActionEventsModification()
      v6:activate(Vehicle.INPUT_CONTEXT_NAME)
      v6:beginActionEventsModification(Vehicle.INPUT_CONTEXT_NAME)
    end
  end
end
function Enterable:onSetBroken()
  if self.spec_enterable.isEntered then
    v2:onLeaveVehicle()
  end
end
function Enterable:actionEventLeave(actionName, inputValue, callbackState, isAnalog)
  self:doLeaveVehicle()
end
function Enterable:actionEventCameraSwitch(actionName, inputValue, callbackState, isAnalog)
  local v5 = v5:getIsGuiVisible()
  if not v5 then
    self:setActiveCameraIndex(self.spec_enterable.camIndex + 1)
  end
end
function Enterable:actionEventCameraZoomIn(actionName, inputValue, callbackState, isAnalog, isMouse)
  if isMouse then
  end
  v8:zoomSmoothly(v7)
end
function Enterable:actionEventCameraZoomOut(actionName, inputValue, callbackState, isAnalog, isMouse)
  if isMouse then
  end
  v8:zoomSmoothly(v7)
end
function Enterable.actionEventResetHeadTracking(v0, v1, v2, v3, v4)
  centerHeadTracking()
end
