-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CropSensor = {MOD_NAME = g_currentModName, SPEC_NAME = g_currentModName .. ".cropSensor", MAX_UPDATES_PER_FRAME = 1, MIN_SENSOR_RADIUS = 5, PATTERN_OCTAGON = {{0.33, 0, -1, -0.33, 0, -1, -0.33, 0, -0.33}, {1, 0, 0.33, 1, 0, -0.33, 0.33, 0, -0.33}, {-0.33, 0, 1, 0.33, 0, 1, 0.33, 0, 0.33}, {-1, 0, -0.33, -1, 0, 0.33, -0.33, 0, 0.33}, {-0.33, 0, 1, -0.33, 0, -0.33, 0.33, 0, 0.33}, {1, 0, 0.33, -0.33, 0, 0.33, 0.33, 0, -0.33}}, PATTERN_CORNER_LEFT = {{0, 0, 0, -0.15, 0, 0.33, 1, 0, 0}, {0.33, 0, 0.33, 0, 0, 0.66, 0.85, 0, 0.33}, {-0.15, 0, 0.33, -0.15, 0, 0.66, 0.33, 0, 0.33}}, PATTERN_CORNER_RIGHT = {{0, 0, 0, 0.15, 0, 0.33, -1, 0, 0}, {-0.33, 0, 0.33, 0, 0, 0.66, -0.85, 0, 0.33}, {0.15, 0, 0.33, 0.15, 0, 0.66, -0.33, 0, 0.33}}}
function CropSensor.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, v0)
end
function CropSensor.initSpecialization()
  local v3 = v3:getText("configuration_cropSensor")
  v0:addConfigurationType("cropSensor", v3, "cropSensor", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("CropSensor")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cropSensor.sensorNode(?)#node", "Sensor Node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cropSensor.sensorNode(?)#lightNode", "Real light source node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.cropSensor.sensorNode(?)#staticLight", "Static light shape")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cropSensor.sensorNode(?)#radius", "Sensor radius", 18)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.cropSensor.sensorNode(?)#requiresDaylight", "Sensor requires daylight to work", false)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.cropSensor.sensorNode(?)#pattern", "Sensor pattern (OCTAGON | ?)", "OCTAGON")
  CropSensor.registerSensorLinkNodePaths(Vehicle.xmlSchema, "vehicle.cropSensor.cropSensorConfigurations.cropSensorConfiguration(?).sensorLinkNode(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function CropSensor:registerSensorLinkNodePaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Sensor Node")
  self:register(XMLValueType.STRING, v1 .. "#type", "Type of node to link (SENSOR_LEFT | SENSOR_RIGHT | SENSOR_TOP)", "SENSOR_LEFT")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "#translation", "Translation offset", "0 0 0")
  self:register(XMLValueType.VECTOR_ROT, v1 .. "#rotation", "Rotation offset", "0 0 0")
  self:register(XMLValueType.BOOL, v1 .. ".rotationNode(?)#autoRotate", "Rotation will be automatically adjusted to the vehicle orientation")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".rotationNode(?)#rotation", "Rotation of rotation node", "0 0 0")
end
function CropSensor.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setCropSensorActive", CropSensor.setCropSensorActive)
  SpecializationUtil.registerFunction(vehicleType, "updateCropSensorWorkingWidth", CropSensor.updateCropSensorWorkingWidth)
  SpecializationUtil.registerFunction(vehicleType, "updateSensorRadius", CropSensor.updateSensorRadius)
  SpecializationUtil.registerFunction(vehicleType, "updateSensorNode", CropSensor.updateSensorNode)
  SpecializationUtil.registerFunction(vehicleType, "linkCropSensor", CropSensor.linkCropSensor)
end
function CropSensor.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", CropSensor.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getUseTurnedOnSchema", CropSensor.getUseTurnedOnSchema)
end
function CropSensor.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", CropSensor)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", CropSensor)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", CropSensor)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", CropSensor)
  SpecializationUtil.registerEventListener(vehicleType, "onRootVehicleChanged", CropSensor)
end
function CropSensor:onLoad(savegame)
  self.spec_cropSensor = self["spec_" .. CropSensor.SPEC_NAME]
  self.spec_cropSensor.sensorNodes = {}
  v3:iterate("vehicle.cropSensor" .. ".sensorNode", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    if {node = v3}.node ~= nil then
      v3 = v3:getValue(savegame .. "#radius", 20)
      v3 = v3:getValue(savegame .. "#requiresDaylight", false)
      v3 = v3:getValue(savegame .. "#pattern", "OCTAGON")
      local v8 = v3:upper()
      if CropSensor["PATTERN_" .. v8] == nil then
        Logging.xmlWarning(u0.xmlFile, "Wrong pattern '%s' ground in '%s'", v3, savegame)
      end
      local v5 = v5:getValue(savegame .. "#lightNode", nil, u0.components, u0.i3dMappings)
      v2.lightNode = v5
      if v2.lightNode ~= nil then
        setVisibility(v2.lightNode, false)
      end
      v5 = v5:getValue(savegame .. "#staticLight", nil, u0.components, u0.i3dMappings)
      v2.staticLight = v5
      if v2.staticLight ~= nil then
        setShaderParameter(v2.staticLight, "lightControl", 0, 0, 0, 0, false)
      end
      if not v4 then
      end
      v2.pattern = v5
      v2.index = 1
      table.insert(u1.sensorNodes, v2)
    end
  end)
  if 0 >= #self.spec_cropSensor.sensorNodes then
  end
  v2.isStandaloneSensor = true
  v2.inputActionToggle = InputAction.PRECISIONFARMING_TOGGLE_CROP_SENSOR
  if self.configurations.cropSensor ~= nil then
    local v4 = string.format("vehicle.cropSensor.cropSensorConfigurations.cropSensorConfiguration(%d)", self.configurations.cropSensor - 1)
    v2.sensorLinkNodeData = {linkNodes = {}}
    v5:iterate(v4 .. ".sensorLinkNode", function(self, savegame)
      local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      if {node = v3}.node ~= nil then
        v3 = v3:getValue(savegame .. "#type", "SENSOR_LEFT")
        v3 = v3:upper()
        v3 = v3:getValue(savegame .. "#translation", "0 0 0", true)
        v3 = v3:getValue(savegame .. "#rotation", "0 0 0", true)
        v3:iterate(savegame .. ".rotationNode", function(self, savegame)
          local v3 = v3:getValue(savegame .. "#autoRotate")
          v3 = v3:getValue(savegame .. "#rotation", nil, true)
          table.insert(u1.rotationNodes, {autoRotate = v3, rotation = v3})
        end)
        table.insert(u1.sensorLinkNodeData.linkNodes, {node = v3, typeName = v3, translation = v3, rotation = v3, rotationNodes = {}})
      end
    end)
    if 0 < #v2.sensorLinkNodeData.linkNodes then
      self:linkCropSensor(v2.sensorLinkNodeData)
    end
    if 1 < v3 and g_precisionFarming ~= nil then
      local v5 = v5:getCropSensorLinkageData(self.configFileName)
      if v5 ~= nil then
        self:linkCropSensor(v5)
      end
    end
  end
  if 0 >= #v2.sensorNodes then
  end
  v2.isAvailable = true
  v2.isActive = false
  v2.workingWidth = 0
  if v2.isAvailable then
    v2.texts = {}
    v5 = v5:getText("action_toggleCropSensorPos", self.customEnvironment)
    v2.texts.toggleCropSensorPos = v5
    v5 = v5:getText("action_toggleCropSensorNeg", self.customEnvironment)
    v2.texts.toggleCropSensorNeg = v5
    v5 = v5:getText("warning_sensorRequiresDaylight", self.customEnvironment)
    v2.texts.warningSensorDaylight = v5
    if g_precisionFarming ~= nil then
      v2.soilMap = g_precisionFarming.soilMap
      v2.coverMap = g_precisionFarming.coverMap
      v2.nitrogenMap = g_precisionFarming.nitrogenMap
      v2.farmlandStatistics = g_precisionFarming.farmlandStatistics
    end
  end
end
function CropSensor:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer and self.spec_cropSensor.isAvailable and self.spec_cropSensor.isActive then
    -- TODO: structure LOP_FORNPREP (pc 16, target 40)
    if self.spec_cropSensor.sensorNodes[1].requiresDaylight then
      -- if not g_currentMission.environment.isSunOn then goto L39 end
    end
    local v10 = self:updateSensorNode(v9.node, v9.radius, v9.pattern, v9.index)
    v9.index = v10
    -- TODO: structure LOP_FORNLOOP (pc 39, target 17)
  end
end
function CropSensor:onDraw()
  if self.isClient then
    local v1 = self:getIsAIActive()
    if not v1 and self.spec_cropSensor.isAvailable and self.spec_cropSensor.isActive then
      -- TODO: structure LOP_FORNPREP (pc 20, target 41)
      if self.spec_cropSensor.sensorNodes[1].requiresDaylight and not g_currentMission.environment.isSunOn then
        v6:showBlinkingWarning(self.spec_cropSensor.texts.warningSensorDaylight, 1000)
      end
      -- TODO: structure LOP_FORNLOOP (pc 40, target 21)
    end
  end
end
function CropSensor:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient and self.spec_cropSensor.isAvailable then
    self:clearActionEventsTable(self.spec_cropSensor.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4, v5 = self:addActionEvent(self.spec_cropSensor.actionEvents, self.spec_cropSensor.inputActionToggle, self, CropSensor.actionEventToggle, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
      CropSensor.updateActionEventTexts(self)
    end
  end
end
function CropSensor:onRootVehicleChanged(rootVehicle)
  if self.isServer and self.spec_cropSensor.isAvailable then
    if rootVehicle.actionController ~= nil then
      if self.spec_cropSensor.controlledAction ~= nil then
        v4:updateParent(rootVehicle.actionController)
        return
      end
      local v4 = v3:registerAction("cropSensorTurnOn", nil, 1)
      v2.controlledAction = v4
      v4:setCallback(self, CropSensor.actionControllerToggleEvent)
      v4:setFinishedFunctions(self, function()
        return u0.isActive
      end, true, false)
      v4:setIsSaved(true)
      v4:addAIEventListener(self, "onAIFieldWorkerStart", 1)
      v4:addAIEventListener(self, "onAIFieldWorkerEnd", -1)
      v4:addAIEventListener(self, "onAIImplementStart", 1)
      v4:addAIEventListener(self, "onAIImplementEnd", -1)
      return
    end
    if v2.controlledAction ~= nil then
      v4:remove()
    end
  end
end
function CropSensor:actionEventToggle(actionName, inputValue, callbackState, isAnalog)
  self:setCropSensorActive()
end
function CropSensor:updateActionEventTexts()
  if self.spec_cropSensor.actionEvents[self.spec_cropSensor.inputActionToggle] ~= nil then
    if self.spec_cropSensor.isActive then
      -- if v0.spec_cropSensor.texts.toggleCropSensorNeg then goto L25 end
    end
    v3:setActionEventText(v5, v1.texts.toggleCropSensorPos)
  end
end
function CropSensor:actionControllerToggleEvent(direction)
  if 0 > direction then
  end
  self:setCropSensorActive(true)
  return true
end
function CropSensor:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 and self.spec_cropSensor ~= nil and self.spec_cropSensor.isStandaloneSensor then
  end
  return v2
end
function CropSensor:getUseTurnedOnSchema(superFunc)
  local v2 = superFunc(self)
  if not v2 and self.spec_cropSensor ~= nil and self.spec_cropSensor.isStandaloneSensor then
  end
  return v2
end
function CropSensor:setCropSensorActive(state, noEventSend)
  if state == nil then
  end
  if state ~= v3.isActive then
    if self.isClient then
      -- TODO: structure LOP_FORNPREP (pc 19, target 52)
      if v3.sensorNodes[1].lightNode ~= nil then
        setVisibility(v3.sensorNodes[1].lightNode, state)
      end
      if v7.staticLight ~= nil then
        if state then
        else
        end
        v8(v9, v10, v11, 0, 0, 0, false)
      end
      -- TODO: structure LOP_FORNLOOP (pc 51, target 20)
    end
    if state then
      self:updateCropSensorWorkingWidth()
    end
    v3.isActive = state
    CropSensor.updateActionEventTexts(self)
    CropSensorStateEvent.sendEvent(self, state, noEventSend)
  end
end
function CropSensor:updateCropSensorWorkingWidth()
  local v2 = CropSensor.getMaxWorkingWidth(self)
  self.spec_cropSensor.workingWidth = v2
  -- TODO: structure LOP_FORNPREP (pc 15, target 26)
  self:updateSensorRadius(self.spec_cropSensor.sensorNodes[1], self.spec_cropSensor.workingWidth)
  -- TODO: structure LOP_FORNLOOP (pc 25, target 16)
end
function CropSensor:updateSensorRadius(sensorNode, workingWidth)
  if 0 < workingWidth then
    local v3, v4, v5 = localToLocal(sensorNode.node, self.rootNode, 0, 0, 0)
    local v9 = math.abs(v3)
    local v6 = math.max(workingWidth * 1.1 / 2 - v9, CropSensor.MIN_SENSOR_RADIUS)
    sensorNode.radius = v6
    return
  end
  sensorNode.radius = sensorNode.origRadius
end
function CropSensor:updateSensorNode(sensorNode, radius, pattern, index)
  if #pattern < index then
  end
  local v9 = math.min(index + CropSensor.MAX_UPDATES_PER_FRAME - 1, #pattern)
  -- TODO: structure LOP_FORNPREP (pc 21, target 66)
  local v10, v11, v12 = localToWorld(sensorNode, pattern[index][1] * radius, pattern[index][2] * radius, pattern[index][3] * radius)
  local v13, v14, v15 = localToWorld(sensorNode, pattern[index][4] * radius, pattern[index][5] * radius, pattern[index][6] * radius)
  local v16, v17, v18 = localToWorld(sensorNode, pattern[index][7] * radius, pattern[index][8] * radius, pattern[index][9] * radius)
  v19:updateCropSensorArea(v10, v12, v13, v15, v16, v18)
  -- TODO: structure LOP_FORNLOOP (pc 65, target 22)
  return index + 1
end
function CropSensor:linkCropSensor(linkData)
  -- TODO: structure LOP_FORNPREP (pc 5, target 204)
  if linkData.linkNodes[1].node == nil and linkData.linkNodes[1].nodeName ~= nil and self.i3dMappings[linkData.linkNodes[1].nodeName] ~= nil then
  end
  if v6 ~= nil then
    local v7 = v7:getClonedCropSensorNode(v5.typeName)
    if v7 ~= nil then
      link(v6, v7.node)
      setTranslation(v7.node, v5.translation[1], v5.translation[2], v5.translation[3])
      setRotation(v7.node, v5.rotation[1], v5.rotation[2], v5.rotation[3])
      -- TODO: structure LOP_FORNPREP (pc 81, target 154)
      if v5.rotationNodes[1] ~= nil then
        if v7.rotationNodes[1].autoRotate and v5.rotationNodes[1].autoRotate ~= false and v5.rotationNodes[1].rotation == nil then
          -- goto L128  (LOP_JUMP +21)
        end
        -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x0 -> L128
        setRotation(v11.node, v13.rotation[1], v13.rotation[2], v13.rotation[3])
      else
      end
      if v12 then
        local v14 = self:getParentComponent(v7.node)
        local v15 = getParent(v11.node)
        local v13, v14, v15 = localRotationToLocal(v14, v15, 0, 0, 0)
        setRotation(v11.node, v13, v14, v15)
      end
      -- TODO: structure LOP_FORNLOOP (pc 153, target 82)
      if v7.measurementNode ~= nil then
        if v5.typeName == "SENSOR_LEFT" then
          -- if CropSensor.PATTERN_CORNER_LEFT then goto L184 end
        end
        v8.pattern = CropSensor.PATTERN_CORNER_RIGHT
        v8.requiresDaylight = v7.requiresDaylight
        v8.index = 1
        table.insert(self.spec_cropSensor.sensorNodes, v8)
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 203, target 6)
end
function CropSensor:getMaxWorkingWidth()
  -- TODO: structure LOP_FORNPREP (pc 8, target 154)
  local v7 = SpecializationUtil.hasSpecialization(ExtendedSprayer, self.rootVehicle.childVehicles[1].specializations)
  if v7 then
    if self.rootVehicle.childVehicles[1].getWorkAreaByIndex ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 29, target 93)
      if self.rootVehicle.childVehicles[1].spec_workArea.workAreas[1].start ~= nil and self.rootVehicle.childVehicles[1].spec_workArea.workAreas[1].width ~= nil then
        local v12 = calcDistanceFrom(self.rootVehicle.childVehicles[1].spec_workArea.workAreas[1].start, self.rootVehicle.childVehicles[1].spec_workArea.workAreas[1].width)
        local v13 = math.max(0, v12)
        local v13, v14, v15 = localToLocal(self.rootVehicle.childVehicles[1].spec_workArea.workAreas[1].start, self.rootNode, 0, 0, 0)
        local v16, v17, v18 = localToLocal(self.rootVehicle.childVehicles[1].spec_workArea.workAreas[1].width, self.rootNode, 0, 0, 0)
        local v22 = math.abs(v13)
        local v23 = math.abs(v16)
        local v19 = math.max(v13, v22 * 2, v23 * 2)
      end
      -- TODO: structure LOP_FORNLOOP (pc 92, target 30)
    end
    if v6.getAIMarkers ~= nil then
      local v7, v8, v9, v10 = v6:getAIMarkers()
      if v7 ~= nil and v8 ~= nil then
        local v11 = calcDistanceFrom(v7, v8)
        v12 = math.max(v2, v11)
        v12, v13, v14 = localToLocal(v7, self.rootNode, 0, 0, 0)
        v15, v16, v17 = localToLocal(v8, self.rootNode, 0, 0, 0)
        local v21 = math.abs(v12)
        v22 = math.abs(v15)
        v18 = math.max(v12, v21 * 2, v22 * 2)
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 153, target 9)
  return v2
end
