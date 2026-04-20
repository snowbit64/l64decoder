-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/RidgeMarkerSetStateEvent.lua")
RidgeMarker = {SEND_NUM_BITS = 3, MAX_NUM_RIDGEMARKERS = 2 ^ RidgeMarker.SEND_NUM_BITS}
function RidgeMarker.initSpecialization()
  local v3 = v3:getText("configuration_ridgeMarker")
  v0:addConfigurationType("ridgeMarker", v3, "ridgeMarker", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  v0:addWorkAreaType("ridgemarker", false)
  Vehicle.xmlSchema:setXMLSpecializationType("RidgeMarker")
  RidgeMarker.registerRidgeMarkerXMLPaths(Vehicle.xmlSchema, "vehicle.ridgeMarker")
  RidgeMarker.registerRidgeMarkerXMLPaths(Vehicle.xmlSchema, "vehicle.ridgeMarker.ridgeMarkerConfigurations.ridgeMarkerConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.ridgeMarker.ridgeMarkerConfigurations.ridgeMarkerConfiguration(?)")
  RidgeMarker.registerRidgeMarkerAreaXMLPaths(Vehicle.xmlSchema, WorkArea.WORK_AREA_XML_KEY)
  RidgeMarker.registerRidgeMarkerAreaXMLPaths(Vehicle.xmlSchema, WorkArea.WORK_AREA_XML_CONFIG_KEY)
  Vehicle.xmlSchema:register(XMLValueType.STRING, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#ridgeMarkerAnim", "Ridge marker animation")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#ridgeMarkerAnimTimeMax", "Animation max. time for activation", 0.99)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).ridgeMarker#state", "Ridge marker state")
end
function RidgeMarker:registerRidgeMarkerXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#inputButton", "Input action name", "IMPLEMENT_EXTRA4")
  self:register(XMLValueType.STRING, v1 .. ".marker(?)#animName", "Animation name")
  self:register(XMLValueType.FLOAT, v1 .. ".marker(?)#minWorkLimit", "Min. work limit", 0.99)
  self:register(XMLValueType.FLOAT, v1 .. ".marker(?)#maxWorkLimit", "Max. work limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".marker(?)#liftedAnimTime", "Lifted animation time")
  self:register(XMLValueType.INT, v1 .. ".marker(?)#workAreaIndex", "Work area index")
  self:register(XMLValueType.FLOAT, v1 .. "#foldMinLimit", "Fold min. limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#foldMaxLimit", "Fold max. limit", 1)
  self:register(XMLValueType.INT, v1 .. "#foldDisableDirection", "Fold disable direction")
  self:register(XMLValueType.BOOL, v1 .. "#onlyActiveWhenLowered", "Only active while lowered", true)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#directionNode", "Direction node")
end
function RidgeMarker:registerRidgeMarkerAreaXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".ridgeMarkerArea#node", "Around this node the ridge marker areas are generated")
  self:register(XMLValueType.FLOAT, v1 .. ".ridgeMarkerArea#size", "Width and length of area and test area", 0.25)
  self:register(XMLValueType.FLOAT, v1 .. ".ridgeMarkerArea#testAreaOffset", "Offset of test area in positive z direction", 0.2)
end
function RidgeMarker.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(WorkArea, specializations)
  end
  return v1
end
function RidgeMarker.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadRidgeMarker", RidgeMarker.loadRidgeMarker)
  SpecializationUtil.registerFunction(vehicleType, "setRidgeMarkerState", RidgeMarker.setRidgeMarkerState)
  SpecializationUtil.registerFunction(vehicleType, "canFoldRidgeMarker", RidgeMarker.canFoldRidgeMarker)
  SpecializationUtil.registerFunction(vehicleType, "processRidgeMarkerArea", RidgeMarker.processRidgeMarkerArea)
end
function RidgeMarker.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", RidgeMarker.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", RidgeMarker.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSpeedRotatingPartFromXML", RidgeMarker.loadSpeedRotatingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSpeedRotatingPartActive", RidgeMarker.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", RidgeMarker.getCanBeSelected)
end
function RidgeMarker.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", RidgeMarker)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", RidgeMarker)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", RidgeMarker)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", RidgeMarker)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", RidgeMarker)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", RidgeMarker)
  SpecializationUtil.registerEventListener(vehicleType, "onSetLowered", RidgeMarker)
  SpecializationUtil.registerEventListener(vehicleType, "onFoldStateChanged", RidgeMarker)
  SpecializationUtil.registerEventListener(vehicleType, "onAIImplementStart", RidgeMarker)
end
function RidgeMarker:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ridgeMarkers", "vehicle.ridgeMarker")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ridgeMarkers.ridgeMarker", "vehicle.ridgeMarker.marker")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ridgeMarker.ridgeMarker", "vehicle.ridgeMarker.marker")
  local configurationId = Utils.getNoNil(self.configurations.ridgeMarker, 1)
  local v4 = string.format("vehicle.ridgeMarker.ridgeMarkerConfigurations.ridgeMarkerConfiguration(%d)", configurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.ridgeMarker.ridgeMarkerConfigurations.ridgeMarkerConfiguration", configurationId, self.components, self)
  local v5 = v5:hasProperty(v4)
  if not v5 then
  end
  v5 = v5:getValue(v4 .. "#inputButton")
  if v5 ~= nil then
    v2.ridgeMarkerInputButton = InputAction[v5]
  end
  local v6 = Utils.getNoNil(v2.ridgeMarkerInputButton, InputAction.IMPLEMENT_EXTRA4)
  v2.ridgeMarkerInputButton = v6
  v2.ridgeMarkers = {}
  v2.workAreaToRidgeMarker = {}
  while true do
    v7 = string.format("%s.marker(%d)", v4, v6)
    v8 = v8:hasProperty(v7)
    if not v8 then
      break
    end
    v8 = table.getn(v2.ridgeMarkers)
    if RidgeMarker.MAX_NUM_RIDGEMARKERS - 1 <= v8 then
      Logging.xmlError(self.xmlFile, "Too many ridgeMarker states. Only %d states are supported!", RidgeMarker.MAX_NUM_RIDGEMARKERS - 1)
      break
    end
    v9 = self:loadRidgeMarker(self.xmlFile, v7, {})
    if v9 then
      table.insert(v2.ridgeMarkers, {})
      v2.workAreaToRidgeMarker[{}.workAreaIndex] = {}
    end
  end
  v2.numRigdeMarkers = #v2.ridgeMarkers
  v7 = v7:getValue(v4 .. "#foldMinLimit", 0)
  v2.ridgeMarkerMinFoldTime = v7
  v7 = v7:getValue(v4 .. "#foldMaxLimit", 1)
  v2.ridgeMarkerMaxFoldTime = v7
  v7 = v7:getValue(v4 .. "#foldDisableDirection")
  v2.foldDisableDirection = v7
  v7 = v7:getValue(v4 .. "#onlyActiveWhenLowered", true)
  v2.onlyActiveWhenLowered = v7
  v2.ridgeMarkerState = 0
  v7 = v7:getValue(v4 .. "#directionNode", nil, self.components, self.i3dMappings)
  v2.directionNode = v7
  if not self.isClient then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", RidgeMarker)
  end
end
function RidgeMarker:onPostLoad(savegame)
  if 0 < self.spec_ridgeMarker.numRigdeMarkers and savegame ~= nil then
    local v3 = v3:getValue(savegame.key .. ".ridgeMarker#state")
    if v3 ~= nil then
      self:setRidgeMarkerState(v3, true)
      if v3 ~= 0 then
        AnimatedVehicle.updateAnimationByName(self, self.spec_ridgeMarker.ridgeMarkers[v3].animName, 9999999, true)
      end
    end
  end
end
function RidgeMarker:saveToXMLFile(xmlFile, key, usedModNames)
  if 0 < self.spec_ridgeMarker.numRigdeMarkers then
    xmlFile:setValue(key .. "#state", self.spec_ridgeMarker.ridgeMarkerState)
  end
end
function RidgeMarker:onReadStream(streamId, connection)
  if 0 < self.spec_ridgeMarker.numRigdeMarkers then
    local state = streamReadUIntN(streamId, RidgeMarker.SEND_NUM_BITS)
    self:setRidgeMarkerState(state, true)
    if state ~= 0 then
      AnimatedVehicle.updateAnimationByName(self, self.spec_ridgeMarker.ridgeMarkers[state].animName, 9999999, true)
    end
  end
end
function RidgeMarker:onWriteStream(streamId, connection)
  if 0 < self.spec_ridgeMarker.numRigdeMarkers then
    streamWriteUIntN(streamId, self.spec_ridgeMarker.ridgeMarkerState, RidgeMarker.SEND_NUM_BITS)
  end
end
function RidgeMarker.onUpdateTick(v0, v1, v2, v3, v4)
  RidgeMarker.updateActionEvents(v0)
end
function RidgeMarker:loadRidgeMarker(xmlFile, key, ridgeMarker)
  local v4 = xmlFile:getValue(key .. "#animName")
  ridgeMarker.animName = v4
  v4 = xmlFile:getValue(key .. "#minWorkLimit", 0.99)
  ridgeMarker.minWorkLimit = v4
  v4 = xmlFile:getValue(key .. "#maxWorkLimit", 1)
  ridgeMarker.maxWorkLimit = v4
  v4 = xmlFile:getValue(key .. "#liftedAnimTime")
  ridgeMarker.liftedAnimTime = v4
  v4 = xmlFile:getValue(key .. "#workAreaIndex")
  ridgeMarker.workAreaIndex = v4
  if ridgeMarker.workAreaIndex == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'workAreaIndex' for ridgeMarker '%s'!", key)
    return false
  end
  return true
end
function RidgeMarker:setRidgeMarkerState(state, noEventSend)
  if self.spec_ridgeMarker.ridgeMarkerState ~= state then
    RidgeMarkerSetStateEvent.sendEvent(self, state, noEventSend)
    if self.spec_ridgeMarker.ridgeMarkerState ~= 0 then
      local v4 = self:getAnimationTime(self.spec_ridgeMarker.ridgeMarkers[self.spec_ridgeMarker.ridgeMarkerState].animName)
      self:playAnimation(self.spec_ridgeMarker.ridgeMarkers[self.spec_ridgeMarker.ridgeMarkerState].animName, -1, v4, true)
    end
    v3.ridgeMarkerState = state
    if v3.ridgeMarkerState ~= 0 then
      if v3.ridgeMarkers[v3.ridgeMarkerState].liftedAnimTime ~= nil then
        v4 = self:getIsLowered(true)
        if not v4 then
          self:setAnimationStopTime(v3.ridgeMarkers[v3.ridgeMarkerState].animName, v3.ridgeMarkers[v3.ridgeMarkerState].liftedAnimTime)
        end
      end
      v4 = self:getAnimationTime(v3.ridgeMarkers[v3.ridgeMarkerState].animName)
      self:playAnimation(v3.ridgeMarkers[v3.ridgeMarkerState].animName, 1, v4, true)
    end
  end
end
function RidgeMarker:canFoldRidgeMarker(state)
  if self.getFoldAnimTime ~= nil then
    local foldAnimTime = self:getFoldAnimTime()
    if foldAnimTime >= self.spec_ridgeMarker.ridgeMarkerMinFoldTime then
      -- if v0.spec_ridgeMarker.ridgeMarkerMaxFoldTime >= v3 then goto L19 end
    end
    return false
  end
  if state ~= 0 and not self.spec_foldable.moveToMiddle and v2.foldDisableDirection ~= nil then
    if v2.foldDisableDirection ~= self.spec_foldable.foldMoveDirection then
      -- cmp-jump LOP_JUMPXEQKN R4 aux=0x80000005 -> L42
    end
    return false
  end
  return true
end
function RidgeMarker:processRidgeMarkerArea(workArea, dt)
  local v5, v6, v7 = v5:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  local v10 = getWorldTranslation(workArea.testNode)
  local v8 = getDensityAtWorldPos(...)
  v10 = bitShiftRight(v8, v6)
  local v9 = bitAND(v10, 2 ^ v7 - 1)
  if v9 ~= FieldGroundType.NONE then
    local v10, v11, v12 = getWorldTranslation(workArea.start)
    local v13, v14, v15 = getWorldTranslation(workArea.width)
    local v16, v17, v18 = getWorldTranslation(workArea.height)
    local v24 = math.floor(v10 * g_currentMission.terrainDetailMapSize / g_currentMission.terrainSize + 0.5)
    v24 = math.floor(v12 * g_currentMission.terrainDetailMapSize / g_currentMission.terrainSize + 0.5)
    if not self.spec_ridgeMarker.directionNode then
    end
    local v24, v25, v26 = v24(v25, 0, 0, 1)
    local v28 = MathUtil.getYRotationFromDirection(v24, v26)
    local v29 = v29:getGroundAngleMaxValue()
    local v27 = FSDensityMapUtil.convertToDensityMapAngle(...)
    if v9 == FieldGroundType.PLOWED then
      FSDensityMapUtil.updateCultivatorArea(v10, v12, v13, v15, v16, v18, false, true, v27, nil, nil, true)
    else
      FSDensityMapUtil.updatePlowArea(v10, v12, v13, v15, v16, v18, false, true, v27, false, true)
    end
    FSDensityMapUtil.eraseTireTrack(v10, v12, v13, v15, v16, v18)
  end
  return 0, 0
end
function RidgeMarker:loadWorkAreaFromXML(superFunc, workArea, xmlFile, key)
  local ridgeMarkerNode = xmlFile:getValue(key .. ".ridgeMarkerArea#node", nil, self.components, self.i3dMappings)
  local v7 = xmlFile:getValue(key .. ".ridgeMarkerArea#size", 0.25)
  v7 = xmlFile:getValue(key .. ".ridgeMarkerArea#testAreaOffset", 0.2)
  if ridgeMarkerNode ~= nil then
    local v8 = createTransformGroup("ridgeMarkerAreaStart")
    workArea.start = v8
    link(ridgeMarkerNode, workArea.start)
    setTranslation(workArea.start, v7 * 0.5, 0, v7 * 0.5)
    v8 = createTransformGroup("ridgeMarkerAreaWidth")
    workArea.width = v8
    link(ridgeMarkerNode, workArea.width)
    setTranslation(workArea.width, -(v7 * 0.5), 0, v7 * 0.5)
    v8 = createTransformGroup("ridgeMarkerAreaHeight")
    workArea.height = v8
    link(ridgeMarkerNode, workArea.height)
    setTranslation(workArea.height, v7 * 0.5, 0, -(v7 * 0.5))
    local v9 = createTransformGroup("ridgeMarkerTestNode")
    workArea.testNode = v9
    link(ridgeMarkerNode, workArea.testNode)
    setTranslation(workArea.testNode, 0, 0, v7 * 0.5 + v7 + 2 * v7 * 0.5)
  end
  v8 = superFunc(self, workArea, xmlFile, key)
  if not v8 then
    return false
  end
  if workArea["type"] == WorkAreaType.RIDGEMARKER then
    XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. ".testArea#startNode", key .. ".ridgeMarkerArea#node")
    XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. ".testArea#widthNode", key .. ".ridgeMarkerArea#node")
    XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. ".testArea#heightNode", key .. ".ridgeMarkerArea#node")
  end
  if ridgeMarkerNode ~= nil then
    -- if v2["type"] ~= WorkAreaType.DEFAULT then goto L185 end
    workArea["type"] = WorkAreaType.RIDGEMARKER
  elseif workArea["type"] == WorkAreaType.RIDGEMARKER then
    Logging.xmlWarning(self.xmlFile, "Missing ridge marker node for ridge marker area '%s'", key)
  end
  return true
end
function RidgeMarker.loadSpeedRotatingPartFromXML(v0, superFunc, workArea, xmlFile, key)
  local ridgeMarkerNode = superFunc(v0, workArea, xmlFile, key)
  if not ridgeMarkerNode then
    return false
  end
  ridgeMarkerNode = xmlFile:getValue(key .. "#ridgeMarkerAnim")
  workArea.ridgeMarkerAnim = ridgeMarkerNode
  ridgeMarkerNode = xmlFile:getValue(key .. "#ridgeMarkerAnimTimeMax", 0.99)
  workArea.ridgeMarkerAnimTimeMax = ridgeMarkerNode
  return true
end
function RidgeMarker:getIsSpeedRotatingPartActive(superFunc, speedRotatingPart)
  if speedRotatingPart.ridgeMarkerAnim ~= nil then
    local xmlFile = self:getAnimationTime(speedRotatingPart.ridgeMarkerAnim)
    if xmlFile < speedRotatingPart.ridgeMarkerAnimTimeMax then
      return false
    end
  end
  xmlFile = superFunc(self, speedRotatingPart)
  return xmlFile
end
function RidgeMarker.getCanBeSelected(v0, superFunc)
  return true
end
function RidgeMarker:getIsWorkAreaActive(superFunc, workArea)
  if workArea["type"] == WorkAreaType.RIDGEMARKER and self.spec_ridgeMarker.workAreaToRidgeMarker[workArea.index] ~= nil then
    local ridgeMarkerNode = self:getAnimationTime(self.spec_ridgeMarker.workAreaToRidgeMarker[workArea.index].animName)
    if self.spec_ridgeMarker.workAreaToRidgeMarker[workArea.index].maxWorkLimit >= ridgeMarkerNode then
      -- if v5 >= v0.spec_ridgeMarker.workAreaToRidgeMarker[v2.index].minWorkLimit then goto L30 end
    end
    return false
    if xmlFile.onlyActiveWhenLowered then
      local v6 = self:getIsLowered(false)
      if not v6 then
        return false
      end
    end
  end
  return superFunc(self, workArea)
end
function RidgeMarker:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_ridgeMarker.actionEvents)
    if isActiveForInputIgnoreSelection and 0 < self.spec_ridgeMarker.numRigdeMarkers then
      local key, ridgeMarkerNode = self:addPoweredActionEvent(self.spec_ridgeMarker.actionEvents, self.spec_ridgeMarker.ridgeMarkerInputButton, self, RidgeMarker.actionEventToggleRidgeMarkers, false, true, false, true, nil)
      v6:setActionEventTextPriority(ridgeMarkerNode, GS_PRIO_NORMAL)
      local v9 = v9:getText("action_toggleRidgeMarker")
      v6:setActionEventText(...)
    end
  end
end
function RidgeMarker:onSetLowered(lowered)
  if lowered then
    for v6, v7 in pairs(self.spec_ridgeMarker.ridgeMarkers) do
      if not (v7.liftedAnimTime ~= nil) then
        continue
      end
      local v8 = self:getAnimationTime(v7.animName)
      if not (v8 == v7.liftedAnimTime) then
        continue
      end
      self:playAnimation(v7.animName, 1, v8, true)
    end
    return
  end
  for v6, v7 in pairs(workArea.ridgeMarkers) do
    if not (v7.liftedAnimTime ~= nil) then
      continue
    end
    v8 = self:getAnimationTime(v7.animName)
    if not (v7.liftedAnimTime < v8) then
      continue
    end
    self:setAnimationStopTime(v7.animName, v7.liftedAnimTime)
    self:playAnimation(v7.animName, -1, v8, true)
  end
end
function RidgeMarker:onFoldStateChanged(direction, moveToMiddle)
  if not moveToMiddle and 0 < direction then
    self:setRidgeMarkerState(0, true)
  end
end
function RidgeMarker:onAIImplementStart()
  self:setRidgeMarkerState(0, true)
end
function RidgeMarker:actionEventToggleRidgeMarkers(actionName, inputValue, callbackState, isAnalog)
  local v7 = self:canFoldRidgeMarker((self.spec_ridgeMarker.ridgeMarkerState + 1) % (self.spec_ridgeMarker.numRigdeMarkers + 1))
  if v7 then
    self:setRidgeMarkerState((self.spec_ridgeMarker.ridgeMarkerState + 1) % (self.spec_ridgeMarker.numRigdeMarkers + 1))
  end
end
function RidgeMarker:updateActionEvents()
  if self.spec_ridgeMarker.actionEvents[self.spec_ridgeMarker.ridgeMarkerInputButton] ~= nil then
    if 0 < self.spec_ridgeMarker.numRigdeMarkers then
      local ridgeMarkerNode = self:canFoldRidgeMarker((self.spec_ridgeMarker.ridgeMarkerState + 1) % (self.spec_ridgeMarker.numRigdeMarkers + 1))
      if ridgeMarkerNode then
      end
    end
    key:setActionEventActive(workArea.actionEventId, xmlFile)
  end
end
