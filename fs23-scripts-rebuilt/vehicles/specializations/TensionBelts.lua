-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/TensionBeltsEvent.lua")
source("dataS/scripts/vehicles/specializations/events/TensionBeltsRefreshEvent.lua")
TensionBelts = {debugRendering = false, NUM_SEND_BITS = 5}
function TensionBelts.prerequisitesPresent(v0)
  return true
end
function TensionBelts.initSpecialization()
  local v3 = v3:getText("configuration_tensionBelts")
  v0:addConfigurationType("tensionBelts", v3, "tensionBelts", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("TensionBelts")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#totalInteractionRadius", "Total interaction radius", 6)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#interactionRadius", "Interaction radius", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#interactionBaseNode", "Interaction base node", "Vehicle root node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#activationTrigger", "Activation trigger")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#tensionBeltType", "Supports tension belts", "basic")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#width", "Belt width", "Used from belt definitions")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#ratchetPosition", "Ratchet position")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#useHooks", "Use hooks", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#maxEdgeLength", "Max. edge length", 0.1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#geometryBias", "Geometry bias", 0.01)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#defaultOffsetSide", "Default offset side", 0.1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#defaultOffset", "Default offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#defaultHeight", "Default height", 5)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#allowFoldingWhileFasten", "Folding is allowed while tension belts are fasten", true)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#linkNode", "Link node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#rootNode", "Root node", "Root component")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. "#jointNode", "Joint node", "rootNode")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".tensionBelt(?)#startNode", "Start node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".tensionBelt(?)#endNode", "End node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".tensionBelt(?)#offsetLeft", "Offset left")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".tensionBelt(?)#offsetRight", "Offset right")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".tensionBelt(?)#offset", "Offset")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".tensionBelt(?)#height", "Height")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".tensionBelt(?)#linkNode", "Custom link node for visual tension belts")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".tensionBelt(?)#jointNode", "Custom joint node for to mount the objects to")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".tensionBelt(?).intersectionNode(?)#node", "Intersection node")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".tensionBelt(?)")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".sounds", "toggleBelt")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".sounds", "addBelt")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(?).tensionBelts" .. ".sounds", "removeBelt")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).tensionBelts.belt(?)#isActive", "Belt is active", false)
end
function TensionBelts.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "createTensionBelt", TensionBelts.createTensionBelt)
  SpecializationUtil.registerFunction(vehicleType, "removeTensionBelt", TensionBelts.removeTensionBelt)
  SpecializationUtil.registerFunction(vehicleType, "setTensionBeltsActive", TensionBelts.setTensionBeltsActive)
  SpecializationUtil.registerFunction(vehicleType, "setAllTensionBeltsActive", TensionBelts.setAllTensionBeltsActive)
  SpecializationUtil.registerFunction(vehicleType, "objectOverlapCallback", TensionBelts.objectOverlapCallback)
  SpecializationUtil.registerFunction(vehicleType, "getObjectToMount", TensionBelts.getObjectToMount)
  SpecializationUtil.registerFunction(vehicleType, "getObjectsToUnmount", TensionBelts.getObjectsToUnmount)
  SpecializationUtil.registerFunction(vehicleType, "updateFastenState", TensionBelts.updateFastenState)
  SpecializationUtil.registerFunction(vehicleType, "refreshTensionBelts", TensionBelts.refreshTensionBelts)
  SpecializationUtil.registerFunction(vehicleType, "freeTensionBeltObject", TensionBelts.freeTensionBeltObject)
  SpecializationUtil.registerFunction(vehicleType, "lockTensionBeltObject", TensionBelts.lockTensionBeltObject)
  SpecializationUtil.registerFunction(vehicleType, "getIsPlayerInTensionBeltsRange", TensionBelts.getIsPlayerInTensionBeltsRange)
  SpecializationUtil.registerFunction(vehicleType, "getIsDynamicallyMountedNode", TensionBelts.getIsDynamicallyMountedNode)
  SpecializationUtil.registerFunction(vehicleType, "tensionBeltActivationTriggerCallback", TensionBelts.tensionBeltActivationTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "onTensionBeltTreeShapeCut", TensionBelts.onTensionBeltTreeShapeCut)
end
function TensionBelts.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsReadyForAutomatedTrainTravel", TensionBelts.getIsReadyForAutomatedTrainTravel)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", TensionBelts.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", TensionBelts.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillLevelInformation", TensionBelts.getFillLevelInformation)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAdditionalComponentMass", TensionBelts.getAdditionalComponentMass)
end
function TensionBelts.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", TensionBelts)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", TensionBelts)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", TensionBelts)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDelete", TensionBelts)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", TensionBelts)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", TensionBelts)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", TensionBelts)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", TensionBelts)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", TensionBelts)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", TensionBelts)
end
function TensionBelts:onLoad(savegame)
  local tensionBeltConfigurationId = Utils.getNoNil(self.configurations.tensionBelts, 1)
  local configKey = string.format("vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration(%d).tensionBelts", tensionBeltConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.tensionBelts.tensionBeltsConfigurations.tensionBeltsConfiguration", tensionBeltConfigurationId, self.components, self)
  self.spec_tensionBelts.hasTensionBelts = true
  local v5 = v5:hasProperty(configKey)
  if not v5 then
    self.spec_tensionBelts.hasTensionBelts = false
    SpecializationUtil.removeEventListener(self, "onPostLoad", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onDelete", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onPreDelete", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onReadStream", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onWriteStream", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onUpdate", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onUpdateTick", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onDraw", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", TensionBelts)
    return
  end
  v2.belts = {}
  v2.tensionBelts = {}
  v2.singleBelts = {}
  v2.sortedBelts = {}
  v5 = TensionBeltsActivatable.new(self)
  v2.activatable = v5
  v5 = v5:getValue(configKey .. "#totalInteractionRadius", 6)
  v2.totalInteractionRadius = v5
  v5 = v5:getValue(configKey .. "#interactionRadius", 1)
  v2.interactionRadius = v5
  v5 = v5:getValue(configKey .. "#interactionBaseNode", self.rootNode, self.components, self.i3dMappings)
  v2.interactionBaseNode = v5
  v5 = v5:getValue(configKey .. "#activationTrigger", nil, self.components, self.i3dMappings)
  v2.activationTrigger = v5
  if v2.activationTrigger ~= nil then
    v5 = CollisionFlag.getHasFlagSet(v2.activationTrigger, CollisionFlag.TRIGGER_PLAYER)
    if not v5 then
      local v8 = CollisionFlag.getBit(CollisionFlag.TRIGGER_PLAYER)
      Logging.xmlError(...)
    else
      addTrigger(v2.activationTrigger, "tensionBeltActivationTriggerCallback", self)
    end
  end
  v5 = v5:getValue(configKey .. "#allowFoldingWhileFasten", true)
  v2.allowFoldingWhileFasten = v5
  v2.isPlayerInTrigger = false
  v2.checkSizeOffsets = {0, 2.5, 1.5}
  v2.numObjectsIntensionBeltRange = 0
  v5 = v5:getValue(configKey .. "#tensionBeltType", "basic")
  local v6 = v6:getBeltData(v5)
  if v6 ~= nil then
    local v7 = v7:getValue(configKey .. "#width")
    v2.width = v7
    v7 = v7:getValue(configKey .. "#ratchetPosition")
    v2.ratchetPosition = v7
    v7 = v7:getValue(configKey .. "#useHooks", true)
    v2.useHooks = v7
    v7 = v7:getValue(configKey .. "#maxEdgeLength", 0.1)
    v2.maxEdgeLength = v7
    v7 = v7:getValue(configKey .. "#geometryBias", 0.01)
    v2.geometryBias = v7
    v7 = v7:getValue(configKey .. "#defaultOffsetSide", 0.1)
    v2.defaultOffsetSide = v7
    v7 = v7:getValue(configKey .. "#defaultOffset", 0)
    v2.defaultOffset = v7
    v7 = v7:getValue(configKey .. "#defaultHeight", 5)
    v2.defaultHeight = v7
    v2.beltData = v6
    v7 = v7:getValue(configKey .. "#linkNode", nil, self.components, self.i3dMappings)
    v2.linkNode = v7
    v7 = v7:getValue(configKey .. "#rootNode", self.components[1].node, self.components, self.i3dMappings)
    v2.rootNode = v7
    v7 = v7:getValue(configKey .. "#jointNode", v2.rootNode, self.components, self.i3dMappings)
    v2.jointNode = v7
    v2.checkTimerDuration = 500
    v2.checkTimer = v2.checkTimerDuration
    if v2.linkNode == nil then
      Logging.xmlError(self.xmlFile, "No tension belts link node given at %s%s", configKey, "#linkNode")
      self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
      return
    end
    v7 = getRigidBodyType(v2.jointNode)
    if v7 ~= RigidBodyType.DYNAMIC then
      v7 = getRigidBodyType(v2.jointNode)
      if v7 ~= RigidBodyType.KINEMATIC then
        local v15 = getName(v2.jointNode)
        v15 = getName(self.components[1].node)
        Logging.xmlError(self.xmlFile, "Given jointNode '" .. v15 .. "' has invalid rigidBodyType. Have to be 'Dynamic' or 'Kinematic'! Using '" .. v15 .. "' instead!")
        v2.jointNode = self.components[1].node
      end
    end
    v7 = getRigidBodyType(v2.jointNode)
    if v7 ~= RigidBodyType.DYNAMIC then
    end
    v2.isDynamic = true
    local v8, v9, v10 = localToLocal(v2.linkNode, v2.jointNode, 0, 0, 0)
    local v11, v12, v13 = localRotationToLocal(v2.linkNode, v2.jointNode, 0, 0, 0)
    v2.linkNodePosition = {v8, v9, v10}
    v2.linkNodeRotation = {v11, v12, v13}
    local v14 = self:getParentComponent(v2.jointNode)
    v2.jointComponent = v14
    while true do
      v15 = string.format(configKey .. ".tensionBelt(%d)", v14)
      v16 = v16:hasProperty(v15)
      if not v16 then
        break
      end
      if #v2.sortedBelts == 2 ^ TensionBelts.NUM_SEND_BITS then
        Logging.xmlWarning(self.xmlFile, "Max number of tension belts is " .. 2 ^ TensionBelts.NUM_SEND_BITS .. "!")
        break
      end
      v16 = v16:getValue(v15 .. "#startNode", nil, self.components, self.i3dMappings)
      v17 = v17:getValue(v15 .. "#endNode", nil, self.components, self.i3dMappings)
      if v16 ~= nil and v17 ~= nil then
        v18, v19, v20 = getTranslation(v17)
        v21 = math.abs(v18)
        if v21 < 0.0001 then
          v21 = math.abs(v19)
          -- if v21 >= 0.0001 then goto L796 end
          if v2.linkNode == nil then
            v21 = getParent(v16)
            v2.linkNode = v21
          end
          if v2.startNode == nil then
            v2.startNode = v16
          end
          v2.endNode = v17
          v21 = v21:getValue(v15 .. "#offsetLeft")
          v22 = v22:getValue(v15 .. "#offsetRight")
          v23 = v23:getValue(v15 .. "#offset")
          v24 = v24:getValue(v15 .. "#height")
          while true do
            v27 = string.format(v15 .. ".intersectionNode(%d)", v26)
            v28 = v28:hasProperty(v27)
            if not v28 then
              break
            end
            v28 = v28:getValue(v27 .. "#node", nil, self.components, self.i3dMappings)
            if v28 ~= nil then
              table.insert(v25, v28)
            end
          end
          v27 = v27:getValue(v15 .. "#linkNode", nil, self.components, self.i3dMappings)
          v28 = v28:getValue(v15 .. "#jointNode", nil, self.components, self.i3dMappings)
          ObjectChangeUtil.loadObjectChangeFromXML(self.xmlFile, v15, {}, self.components, self)
          ObjectChangeUtil.setObjectChanges({}, false, self, self.setMovingToolDirty)
          v2.singleBelts[{id = v14 + 1, startNode = v16, endNode = v17, offsetLeft = v21, offsetRight = v22, offset = v23, height = v24, mesh = nil, intersectionNodes = v25, changeObjects = {}, linkNode = v27, jointNode = v28, dummy = nil, objectsToMount = nil}] = {id = v14 + 1, startNode = v16, endNode = v17, offsetLeft = v21, offsetRight = v22, offset = v23, height = v24, mesh = nil, intersectionNodes = v25, changeObjects = {}, linkNode = v27, jointNode = v28, dummy = nil, objectsToMount = nil}
          table.insert(v2.sortedBelts, {id = v14 + 1, startNode = v16, endNode = v17, offsetLeft = v21, offsetRight = v22, offset = v23, height = v24, mesh = nil, intersectionNodes = v25, changeObjects = {}, linkNode = v27, jointNode = v28, dummy = nil, objectsToMount = nil})
        else
          Logging.xmlWarning(self.xmlFile, "x and y position of endNode need to be 0 for tension belt '" .. v15 .. "'")
        end
      end
    end
    for v22, v23 in pairs(v2.singleBelts) do
      local v24, v25, v26 = localToLocal(v23.startNode, v2.interactionBaseNode, 0, 0, 0)
      local v27, v28, v29 = localToLocal(v23.endNode, v2.interactionBaseNode, 0, 0, 0)
      local v30 = math.min(v15, v24, v27)
      v30 = math.min(v16, v26, v29)
      v30 = math.max(v17, v24, v27)
      v30 = math.max(v18, v26, v29)
    end
    v2.interactionBasePointX = (v17 + v15) / 2
    v2.interactionBasePointZ = (v18 + v16) / 2
    for v22, v23 in pairs(v2.singleBelts) do
      v24, v25, v26 = localToLocal(v23.startNode, v2.interactionBaseNode, 0, 0, 0)
      v28 = MathUtil.vector2Length(v2.interactionBasePointX - v24, v2.interactionBasePointZ - v26)
      v29 = MathUtil.vector2Length(v2.interactionBasePointX - v24, v2.interactionBasePointZ - v26)
      v29 = math.max(v2.totalInteractionRadius, v28 + 1, v29 + 1)
      v2.totalInteractionRadius = v29
    end
  else
    Logging.xmlWarning(self.xmlFile, "No belt data found for tension belt type %s", v5)
  end
  if 0 >= #v2.sortedBelts then
  end
  v2.hasTensionBelts = true
  v2.checkBoxes = {}
  v2.objectsToJoint = {}
  v2.isPlayerInRange = false
  v2.currentBelt = nil
  v2.areBeltsFasten = false
  v2.fastedAllBeltsIndex = -1
  v2.fastedAllBeltsState = true
  if self.isClient then
    v2.samples = {}
    v8 = v8:loadSampleFromXML(self.xmlFile, configKey .. ".sounds", "toggleBelt", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.toggleBelt = v8
    v8 = v8:loadSampleFromXML(self.xmlFile, configKey .. ".sounds", "addBelt", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.addBelt = v8
    v8 = v8:loadSampleFromXML(self.xmlFile, configKey .. ".sounds", "removeBelt", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.removeBelt = v8
  end
  v2.texts = {}
  v8 = v8:getText("warning_foldingNotWhileTensionBeltsFasten")
  v2.texts.warningFoldingTensionBelts = v8
  if not v2.hasTensionBelts then
    SpecializationUtil.removeEventListener(self, "onPostLoad", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onDelete", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onPreDelete", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onReadStream", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onWriteStream", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onUpdate", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onUpdateTick", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onDraw", TensionBelts)
    SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", TensionBelts)
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L1159
    removeTrigger(v2.activationTrigger)
    v2.activationTrigger = nil
    return
  end
  v7:subscribe(MessageType.TREE_SHAPE_CUT, self.onTensionBeltTreeShapeCut, self)
end
function TensionBelts:onPostLoad(savegame)
  if savegame ~= nil then
    self.spec_tensionBelts.beltsToLoad = {}
    while true do
      v4 = string.format("%s.tensionBelts.belt(%d)", savegame.key, v3)
      v5 = v5:hasProperty(v4)
      if not v5 then
        break
      end
      v5 = v5:getValue(v4 .. "#isActive")
      if v5 then
        table.insert(v2.beltsToLoad, v3 + 1)
      end
    end
  end
end
function TensionBelts:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_tensionBelts.hasTensionBelts then
    for v8, v9 in ipairs(self.spec_tensionBelts.sortedBelts) do
      local v10 = string.format("%s.belt(%d)", key, v8 - 1)
      if v9.mesh == nil then
      end
      xmlFile:setValue(v13, true)
    end
  end
end
function TensionBelts:onPreDelete()
  if self.spec_tensionBelts.sortedBelts ~= nil then
    for v4, v5 in pairs(self.spec_tensionBelts.sortedBelts) do
      local v6, v7 = self:getObjectToMount(v5)
      for v11, v12 in pairs(v6) do
        I3DUtil.wakeUpObject(v11)
      end
    end
  end
end
function TensionBelts:onDelete()
  self.spec_tensionBelts.isPlayerInRange = false
  v2:removeActivatable(self.spec_tensionBelts.activatable)
  self:setTensionBeltsActive(false, nil, true, false)
  if self.spec_tensionBelts.activationTrigger ~= nil then
    removeTrigger(self.spec_tensionBelts.activationTrigger)
    self.spec_tensionBelts.activationTrigger = nil
  end
  v2:deleteSamples(v1.samples)
end
function TensionBelts:onReadStream(streamId, connection)
  if self.spec_tensionBelts.tensionBelts ~= nil then
    self.spec_tensionBelts.beltsToLoad = {}
    for v7, v8 in ipairs(self.spec_tensionBelts.sortedBelts) do
      local beltActive = streamReadBool(streamId)
      if not beltActive then
        continue
      end
      table.insert(v3.beltsToLoad, v7)
    end
  end
end
function TensionBelts:onWriteStream(streamId, connection)
  if self.spec_tensionBelts.tensionBelts ~= nil then
    for v7, v8 in ipairs(self.spec_tensionBelts.sortedBelts) do
      if v8.mesh == nil then
      end
      v9(v10, true)
    end
  end
end
function TensionBelts:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_tensionBelts.beltsToLoad ~= nil then
    if 0 < #self.spec_tensionBelts.beltsToLoad then
      if not self.isServer then
      end
      self:setTensionBeltsActive(true, v5.sortedBelts[v6].id, v7, false)
      table.remove(v5.beltsToLoad, #v5.beltsToLoad)
    else
      self.spec_tensionBelts.beltsToLoad = nil
    end
  end
  if self.isServer and v5.isDynamic then
    local v6, v7, v8 = localToLocal(v5.linkNode, v5.jointNode, 0, 0, 0)
    local v9, v10, v11 = localRotationToLocal(v5.linkNode, v5.jointNode, 0, 0, 0)
    local v13 = math.abs(v6 - v5.linkNodePosition[1])
    if 0.001 >= v13 then
      v13 = math.abs(v7 - v5.linkNodePosition[2])
      if 0.001 >= v13 then
        v13 = math.abs(v8 - v5.linkNodePosition[3])
        if 0.001 >= v13 then
          v13 = math.abs(v9 - v5.linkNodeRotation[1])
          if 0.001 >= v13 then
            v13 = math.abs(v10 - v5.linkNodeRotation[2])
            if 0.001 >= v13 then
              v13 = math.abs(v11 - v5.linkNodeRotation[3])
              -- if 0.001 >= v13 then goto L140 end
            end
          end
        end
      end
    end
    if true then
      v5.linkNodePosition[1] = v6
      v5.linkNodePosition[2] = v7
      v5.linkNodePosition[3] = v8
      v5.linkNodeRotation[1] = v9
      v5.linkNodeRotation[2] = v10
      v5.linkNodeRotation[3] = v11
      for v16, v17 in pairs(v5.objectsToJoint) do
        setJointFrame(v17.jointIndex, 0, v17.jointTransform)
      end
    end
  end
  if self.isClient and 0 < v5.fastedAllBeltsIndex then
    if v5.sortedBelts[v5.fastedAllBeltsIndex] ~= nil then
      self:setTensionBeltsActive(v5.fastedAllBeltsState, v5.sortedBelts[v5.fastedAllBeltsIndex].id, false)
    end
    v5.fastedAllBeltsIndex = v5.fastedAllBeltsIndex + 1
    if #v5.sortedBelts < v5.fastedAllBeltsIndex then
      v5.fastedAllBeltsIndex = -1
    end
  end
  if TensionBelts.debugRendering then
    for v9, v10 in pairs(v5.belts) do
      DebugUtil.drawDebugNode(v9)
      v14 = getNumOfChildren(v9)
      -- TODO: structure LOP_FORNPREP (pc 235, target 245)
      v15 = getChildAt(v9, 0)
      DebugUtil.drawDebugNode(...)
      -- TODO: structure LOP_FORNLOOP (pc 244, target 236)
    end
    if v5.checkBoxes ~= nil then
      for v9, v10 in pairs(v5.checkBoxes) do
        drawDebugLine(v10.points[1][1], v10.points[1][2], v10.points[1][3], v10.color[1], v10.color[2], v10.color[3], v10.points[2][1], v10.points[2][2], v10.points[2][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[2][1], v10.points[2][2], v10.points[2][3], v10.color[1], v10.color[2], v10.color[3], v10.points[3][1], v10.points[3][2], v10.points[3][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[3][1], v10.points[3][2], v10.points[3][3], v10.color[1], v10.color[2], v10.color[3], v10.points[4][1], v10.points[4][2], v10.points[4][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[4][1], v10.points[4][2], v10.points[4][3], v10.color[1], v10.color[2], v10.color[3], v10.points[1][1], v10.points[1][2], v10.points[1][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[5][1], v10.points[5][2], v10.points[5][3], v10.color[1], v10.color[2], v10.color[3], v10.points[6][1], v10.points[6][2], v10.points[6][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[6][1], v10.points[6][2], v10.points[6][3], v10.color[1], v10.color[2], v10.color[3], v10.points[7][1], v10.points[7][2], v10.points[7][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[7][1], v10.points[7][2], v10.points[7][3], v10.color[1], v10.color[2], v10.color[3], v10.points[8][1], v10.points[8][2], v10.points[8][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[8][1], v10.points[8][2], v10.points[8][3], v10.color[1], v10.color[2], v10.color[3], v10.points[5][1], v10.points[5][2], v10.points[5][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[1][1], v10.points[1][2], v10.points[1][3], v10.color[1], v10.color[2], v10.color[3], v10.points[5][1], v10.points[5][2], v10.points[5][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[4][1], v10.points[4][2], v10.points[4][3], v10.color[1], v10.color[2], v10.color[3], v10.points[8][1], v10.points[8][2], v10.points[8][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[2][1], v10.points[2][2], v10.points[2][3], v10.color[1], v10.color[2], v10.color[3], v10.points[6][1], v10.points[6][2], v10.points[6][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugLine(v10.points[3][1], v10.points[3][2], v10.points[3][3], v10.color[1], v10.color[2], v10.color[3], v10.points[7][1], v10.points[7][2], v10.points[7][3], v10.color[1], v10.color[2], v10.color[3])
        drawDebugPoint(v10.points[9][1], v10.points[9][2], v10.points[9][3], 1, 1, 1, 1)
      end
    end
    v6, v7, v8 = localToWorld(v5.interactionBaseNode, v5.interactionBasePointX, 0, v5.interactionBasePointZ)
    drawDebugPoint(v6, v7, v8, 0, 0, 1, 1, 1, 1, 1)
    -- TODO: structure LOP_FORNPREP (pc 554, target 696)
    local v18 = math.rad(0)
    v17 = math.cos(...)
    local v20 = math.rad(0)
    local v19 = math.sin(...)
    local v12, v13, v14 = localToWorld(v5.interactionBaseNode, v5.interactionBasePointX + v17 * v5.totalInteractionRadius, 0, v5.interactionBasePointZ + v19 * v5.totalInteractionRadius)
    drawDebugPoint(v12, v13, v14, 1, 1, 1, 1)
    for v18, v19 in pairs(v5.singleBelts) do
      local v24 = math.rad(v11)
      local v23 = math.cos(...)
      local v26 = math.rad(v11)
      local v25 = math.sin(...)
      local v20, v21, v22 = localToWorld(v19.startNode, v23 * v5.interactionRadius, 0, v25 * v5.interactionRadius)
      drawDebugPoint(v20, v21, v22, 0, 1, 0, 1)
      v24 = math.rad(v11)
      v23 = math.cos(...)
      v26 = math.rad(v11)
      v25 = math.sin(...)
      v20, v21, v22 = localToWorld(v19.endNode, v23 * v5.interactionRadius, 0, v25 * v5.interactionRadius)
      drawDebugPoint(v20, v21, v22, 1, 0, 0, 1)
    end
    -- TODO: structure LOP_FORNLOOP (pc 695, target 555)
  end
  if not v5.isPlayerInTrigger then
    -- if not v5.isPlayerInRange then goto L705 end
  end
  self:raiseActive()
  v8, v9 = self:getIsPlayerInTensionBeltsRange()
  v5.isPlayerInRange = v8
  if v5.isPlayerInRange then
    if v9 ~= v5.currentBelt then
      if v5.currentBelt ~= nil and v5.currentBelt.dummy ~= nil then
        delete(v5.currentBelt.dummy)
        v5.currentBelt.dummy = nil
      end
      v5.currentBelt = v6
      if v5.currentBelt ~= nil and v5.currentBelt.mesh == nil then
        v8, v9 = self:getObjectToMount(v5.currentBelt)
        self:createTensionBelt(v5.currentBelt, true, v8)
      end
    end
    v8:addActivatable(v5.activatable)
    v8:updateActivateText()
    return
  end
  if v7 then
    v8:removeActivatable(v5.activatable)
    if v5.currentBelt ~= nil and v5.currentBelt.dummy ~= nil then
      delete(v5.currentBelt.dummy)
      v5.currentBelt.dummy = nil
      v5.currentBelt = nil
    end
  end
end
function TensionBelts:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if not self.spec_tensionBelts.hasTensionBelts then
    return
  end
  if self.isServer and v5.tensionBelts ~= nil then
    v5.checkTimer = v5.checkTimer - dt
    if v5.checkTimer < 0 then
      for v10, v11 in pairs(v5.objectsToJoint) do
        local v12 = entityExists(v10)
        if not not v12 then
          continue
        end
        v5.objectsToJoint[v10] = nil
        break
      end
      if v6 then
        self:refreshTensionBelts()
      end
      v5.checkTimer = v5.checkTimerDuration
    end
  end
end
function TensionBelts:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if not self.spec_tensionBelts.hasTensionBelts then
    return
  end
  if isActiveForInputIgnoreSelection and isSelected then
    if v4.areBeltsFasten then
      local v7 = v7:getText("action_unfastenTensionBelts")
      v5:addHelpButtonText(v7, InputBinding.TOGGLE_TENSION_BELTS, nil, GS_PRIO_NORMAL)
      return
    end
    v7 = v7:getText("action_fastenTensionBelts")
    v5:addHelpButtonText(v7, InputBinding.TOGGLE_TENSION_BELTS, nil, GS_PRIO_NORMAL)
  end
end
function TensionBelts:refreshTensionBelts()
  if self.isServer and g_server ~= nil then
    local v3 = TensionBeltsRefreshEvent.new(self)
    v1:broadcastEvent(v3, nil, nil, self)
  end
  for v4, v5 in pairs(self.spec_tensionBelts.sortedBelts) do
    if not (v5.mesh ~= nil) then
      continue
    end
    self:removeTensionBelt(v5)
    local v6, v7 = self:getObjectToMount(v5)
    self:createTensionBelt(v5, false, v6)
  end
end
function TensionBelts:freeTensionBeltObject(objectId, objectsToJointTable, isDynamic, object)
  local v5 = entityExists(objectId)
  if v5 then
    if objectsToJointTable[objectId].jointIndex ~= nil then
      -- if not v0.isServer then goto L116 end
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L116
      removeJoint(objectsToJointTable[objectId].jointIndex)
      delete(objectsToJointTable[objectId].jointTransform)
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L116
      if object.setReducedComponentMass ~= nil then
        object:setReducedComponentMass(false)
        self:setMassDirty()
      end
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L116
      object:setCanBeSold(true)
    else
      if objectsToJointTable[objectId] ~= nil then
      end
      if v6 ~= nil then
        local v7 = entityExists(v6)
        -- if v7 then goto L64 end
        delete(objectId)
      else
        if v6 == nil then
          v7 = getRootNode()
        end
        local v7, v8, v9 = getWorldTranslation(objectId)
        local v10, v11, v12 = getWorldRotation(objectId)
        if object ~= nil then
          -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L88
          object:unmountKinematic()
        elseif self.isServer then
          link(v6, objectId)
          setWorldTranslation(objectId, v7, v8, v9)
          setWorldRotation(objectId, v10, v11, v12)
          setRigidBodyType(objectId, RigidBodyType.DYNAMIC)
        end
      end
    end
    local v6 = getSplitType(objectId)
    if v6 ~= 0 then
      setUserAttribute(objectId, "isTensionBeltMounted", "Boolean", false)
    end
  end
  objectsToJointTable[objectId] = nil
end
function TensionBelts:lockTensionBeltObject(objectId, objectsToJointTable, isDynamic, jointNode, object)
  if objectsToJointTable[objectId] == nil then
    if isDynamic then
      -- if not v0.isServer then goto L50 end
    elseif object ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L46
      if object.getSupportsMountKinematic ~= nil then
        local v10 = object:getSupportsMountKinematic()
        if not v10 then
        end
      end
      if object.rootVehicle ~= nil and 1 < #object.rootVehicle.childVehicles then
      end
      if constr then
        -- goto L50  (LOP_JUMP +6)
      end
    else
      if self.isServer then
      end
    end
    if v6 then
      local constr = JointConstructor.new()
      constr:setActors(jointNode, objectId)
      v10 = createTransformGroup("tensionBeltJoint")
      link(jointNode, v10)
      local v13 = getCenterOfMass(objectId)
      local v11, v12, v13 = localToWorld(...)
      setWorldTranslation(v10, v11, v12, v13)
      constr:setJointTransforms(v10, v10)
      constr:setEnableCollision(true)
      constr:setRotationLimit(0, 0, 0)
      constr:setRotationLimit(1, 0, 0)
      constr:setRotationLimit(2, 0, 0)
      constr:setRotationLimitSpring(1000, 10, 1000, 10, 1000, 10)
      constr:setTranslationLimitSpring(1000, 10, 1000, 10, 1000, 10)
      local v14 = constr:finalize()
      if object ~= nil then
        if object.setReducedComponentMass ~= nil then
          object:setReducedComponentMass(true)
          self:setMassDirty()
        end
        if object.setCanBeSold ~= nil then
          object:setCanBeSold(false)
        end
      end
      objectsToJointTable[objectId] = {jointIndex = v14, jointTransform = v10, object = object}
    elseif v7 then
      constr = getParent(objectId)
      v10, v11, v12 = localToLocal(objectId, jointNode, 0, 0, 0)
      local v13, v14, v15 = localRotationToLocal(objectId, jointNode, 0, 0, 0)
      object:mountKinematic(self, jointNode, v10, v11, v12, v13, v14, v15)
      objectsToJointTable[objectId] = {parent = constr, object = object}
    else
      if v8 then
        constr = getParent(objectId)
        v10, v11, v12 = localToLocal(objectId, jointNode, 0, 0, 0)
        v13, v14, v15 = localRotationToLocal(objectId, jointNode, 0, 0, 0)
        setRigidBodyType(objectId, RigidBodyType.KINEMATIC)
        link(jointNode, objectId)
        setTranslation(objectId, v10, v11, v12)
        setRotation(objectId, v13, v14, v15)
        objectsToJointTable[objectId] = {parent = constr, object = object}
      end
    end
    constr = getSplitType(objectId)
    if constr ~= 0 then
      setUserAttribute(objectId, "isTensionBeltMounted", "Boolean", true)
      constr:publish(MessageType.TREE_SHAPE_MOUNTED, objectId, self)
    end
  end
end
function TensionBelts:setTensionBeltsActive(isActive, beltId, noEventSend, playSound)
  if self.spec_tensionBelts.tensionBelts ~= nil then
    TensionBeltsEvent.sendEvent(self, isActive, beltId, noEventSend)
    if beltId ~= nil then
    end
    if isActive then
      local v7, v8 = self:getObjectToMount(v6)
      if v6 == nil then
        for v12, v13 in pairs(object.singleBelts) do
          if not (v13.mesh == nil) then
            continue
          end
          self:createTensionBelt(v13, false, v7, playSound)
        end
      elseif v6.mesh == nil then
        self:createTensionBelt(v6, false, v7, playSound)
      end
      for v12, v13 in pairs(v7) do
        if not v6.jointNode then
        end
        self:lockTensionBeltObject(v16, v17, v18, v19, v13.object)
        if not (v13.object ~= nil) then
          continue
        end
        v13.object.tensionMountObject = self
      end
    else
      if v6 == nil then
        for v10, v11 in pairs(object.singleBelts) do
          self:removeTensionBelt(v11, playSound)
        end
      else
        self:removeTensionBelt(v6, playSound)
      end
      v7, v8 = self:getObjectsToUnmount(v6)
      for v12, v13 in pairs(v7) do
        self:freeTensionBeltObject(v12, object.objectsToJoint, object.isDynamic, v13.object)
        if not (v13.object ~= nil) then
          continue
        end
        v13.object.tensionMountObject = nil
      end
    end
    if v6 ~= nil then
      ObjectChangeUtil.setObjectChanges(v6.changeObjects, isActive, self, self.setMovingToolDirty)
    end
    self:updateFastenState()
  end
end
function TensionBelts:setAllTensionBeltsActive(isActive, noEventSend)
  if self.spec_tensionBelts.hasTensionBelts then
    local playSound = Utils.getNoNil(isActive, not self.spec_tensionBelts.areBeltsFasten)
    for v7, v8 in pairs(self.spec_tensionBelts.sortedBelts) do
      self:setTensionBeltsActive(isActive, v8.id, noEventSend)
    end
  end
end
function TensionBelts:updateFastenState()
  for v6, v7 in pairs(self.spec_tensionBelts.singleBelts) do
    if not (v7.mesh == nil) then
      continue
    end
    break
  end
  isActive.areBeltsFasten = not beltId
end
function TensionBelts:createTensionBelt(belt, isDummy, objects, playSound)
  local tensionBelt = TensionBeltGeometryConstructor.new()
  if not self.spec_tensionBelts.width then
  end
  tensionBelt:setWidth(v7.width)
  tensionBelt:setMaxEdgeLength(object.maxEdgeLength)
  if isDummy then
    tensionBelt:setMaterial(v7.dummyMaterial.materialId)
    tensionBelt:setUVscale(v7.dummyMaterial.uvScale)
  else
    tensionBelt:setMaterial(v7.material.materialId)
    tensionBelt:setUVscale(v7.material.uvScale)
  end
  if object.ratchetPosition ~= nil and v7.ratchet ~= nil then
    tensionBelt:addAttachment(0, object.ratchetPosition, v7.ratchet.sizeRatio * v8)
  end
  if object.useHooks and v7.hook ~= nil then
    tensionBelt:addAttachment(0, 0, v7.hook.sizeRatio * v8)
    if not v7.hook2 then
    end
    tensionBelt:addAttachment(v11, v12, v15.sizeRatio * v8)
  end
  tensionBelt:setFixedPoints(belt.startNode, belt.endNode)
  tensionBelt:setGeometryBias(object.geometryBias)
  if not belt.linkNode then
  end
  tensionBelt:setLinkNode(v11)
  for v12, v13 in pairs(belt.intersectionNodes) do
    local v14, v15, v16 = getWorldTranslation(v13)
    local v17, v18, v19 = localDirectionToWorld(v13, 1, 0, 0)
    tensionBelt:addIntersectionPoint(v14, v15, v16, v17, v18, v19)
  end
  for v12, v13 in pairs(objects) do
    for v17, v18 in pairs(v13.visuals) do
      v19 = getSplitType(v18)
      if v19 ~= 0 then
        tensionBelt:addShape(v18, -100, 100, -100, 100)
      else
        tensionBelt:addShape(v18, 0, 10, 0, 10)
      end
    end
  end
  constr, v10, v11 = tensionBelt:finalize()
  if constr ~= 0 then
    if isDummy then
      belt.dummy = constr
      return constr
    end
    if object.ratchetPosition ~= nil and v7.ratchet ~= nil then
      v13 = getNumOfChildren(constr)
      if 0 < v13 then
        v13 = clone(v7.ratchet.node, false, false, false)
        v15 = getChildAt(constr, 0)
        link(v15, v13)
        setScale(v13, v8, v8, v8)
      end
    end
    if object.useHooks and v7.hook ~= nil then
      v13 = getNumOfChildren(constr)
      if v12 + 1 < v13 then
        v13 = clone(v7.hook.node, false, false, false)
        v15 = getChildAt(constr, v12)
        link(v15, v13)
        setScale(v13, v8, v8, v8)
        if not v7.hook2 then
        end
        v15 = clone(v14.node, false, false, false)
        v17 = getChildAt(constr, v12 + 1)
        link(v17, v15)
        setRotation(v15, 0, math.pi, 0)
        setTranslation(v15, 0, 0, v14.sizeRatio * v8)
        setScale(v15, v8, v8, v8)
        setShaderParameter(constr, "beltClipOffsets", 0, v7.hook.sizeRatio * v8, v11 - v14.sizeRatio * v8, v11, false)
      end
    end
    belt.mesh = constr
    object.belts[constr] = constr
    if belt.dummy ~= nil then
      delete(belt.dummy)
      belt.dummy = nil
    end
    if playSound ~= false and self.isClient then
      v13:playSample(object.samples.toggleBelt)
      v13:playSample(object.samples.addBelt)
    end
    return constr
  end
  return nil
end
function TensionBelts:removeTensionBelt(belt, playSound)
  if belt.mesh ~= nil then
    self.spec_tensionBelts.belts[belt.mesh] = nil
    delete(belt.mesh)
    belt.mesh = nil
    if self.spec_tensionBelts.currentBelt == belt then
      self.spec_tensionBelts.currentBelt = nil
    end
    if belt.dummy == nil and playSound ~= false and self.isClient then
      playSound:playSample(noEventSend.samples.toggleBelt)
      playSound:playSample(noEventSend.samples.removeBelt)
    end
  end
end
function TensionBelts:getObjectToMount(belt)
  if belt ~= nil then
    if belt.offsetLeft == nil and self.spec_tensionBelts.sortedBelts[belt.id - 1] ~= nil and self.spec_tensionBelts.sortedBelts[belt.id - 1].mesh ~= nil then
      local constr, v10, v11 = localToLocal(belt.startNode, self.spec_tensionBelts.sortedBelts[belt.id - 1].startNode, 0, 0, 0)
      local v12 = math.abs(constr)
    end
    if v6 == nil and beltId.sortedBelts[belt.id + 1] ~= nil and beltId.sortedBelts[belt.id + 1].mesh ~= nil then
      constr, v10, v11 = localToLocal(noEventSend, beltId.sortedBelts[belt.id + 1].startNode, 0, 0, 0)
      v12 = math.abs(constr)
    end
  end
  if object == nil then
  end
  if v6 == nil then
  end
  if v7 == nil then
  end
  if v8 == nil then
  end
  local v11, v12, v13 = localToLocal(playSound, noEventSend, 0, 0, 0)
  local v18, v19, v20 = localToWorld(noEventSend, (object - v6) * 0.5, v8 * 0.5, v13 * 0.5)
  if TensionBelts.debugRendering then
    local v22 = math.random(0, 1)
    local v23 = math.random(0, 1)
    local v24 = math.random(0, 1)
    local v25, v26, v27 = localToWorld(noEventSend, (object - v6) * 0.5 - (object + v6) * 0.5, v8 * 0.5 - v8 * 0.5, v13 * 0.5 - v13 * 0.5 - 2 * v7)
    local v28, v29, v30 = localToWorld(noEventSend, (object - v6) * 0.5 + (object + v6) * 0.5, v8 * 0.5 - v8 * 0.5, v13 * 0.5 - v13 * 0.5 - 2 * v7)
    local v31, v32, v33 = localToWorld(noEventSend, (object - v6) * 0.5 - (object + v6) * 0.5, v8 * 0.5 - v8 * 0.5, v13 * 0.5 + v13 * 0.5 - 2 * v7)
    local v34, v35, v36 = localToWorld(noEventSend, (object - v6) * 0.5 + (object + v6) * 0.5, v8 * 0.5 - v8 * 0.5, v13 * 0.5 + v13 * 0.5 - 2 * v7)
    local v37, v38, v39 = localToWorld(noEventSend, (object - v6) * 0.5 - (object + v6) * 0.5, v8 * 0.5 + v8 * 0.5, v13 * 0.5 - v13 * 0.5 - 2 * v7)
    local v40, v41, v42 = localToWorld(noEventSend, (object - v6) * 0.5 + (object + v6) * 0.5, v8 * 0.5 + v8 * 0.5, v13 * 0.5 - v13 * 0.5 - 2 * v7)
    local v43, v44, v45 = localToWorld(noEventSend, (object - v6) * 0.5 - (object + v6) * 0.5, v8 * 0.5 + v8 * 0.5, v13 * 0.5 + v13 * 0.5 - 2 * v7)
    local v46, v47, v48 = localToWorld(noEventSend, (object - v6) * 0.5 + (object + v6) * 0.5, v8 * 0.5 + v8 * 0.5, v13 * 0.5 + v13 * 0.5 - 2 * v7)
    table.insert({points = {}, color = {v22, v23, v24}}.points, {v25, v26, v27})
    table.insert({points = {}, color = {v22, v23, v24}}.points, {v28, v29, v30})
    table.insert({points = {}, color = {v22, v23, v24}}.points, {v34, v35, v36})
    table.insert({points = {}, color = {v22, v23, v24}}.points, {v31, v32, v33})
    table.insert({points = {}, color = {v22, v23, v24}}.points, {v37, v38, v39})
    table.insert({points = {}, color = {v22, v23, v24}}.points, {v40, v41, v42})
    table.insert({points = {}, color = {v22, v23, v24}}.points, {v46, v47, v48})
    table.insert({points = {}, color = {v22, v23, v24}}.points, {v43, v44, v45})
    table.insert({points = {}, color = {v22, v23, v24}}.points, {v18, v19, v20})
    beltId.checkBoxes[noEventSend] = {points = {}, color = {v22, v23, v24}}
  end
  local v21, v22, v23 = getWorldRotation(noEventSend)
  beltId.objectsInTensionBeltRange = {}
  beltId.numObjectsIntensionBeltRange = 0
  overlapBox(v18, v19, v20, v21, v22, v23, constr, v10, v14, "objectOverlapCallback", self, CollisionMask.TRIGGER_DYNAMIC_MOUNT, true, false, true)
  return beltId.objectsInTensionBeltRange, beltId.numObjectsIntensionBeltRange
end
function TensionBelts:getObjectsToUnmount(belt)
  for v8, constr in pairs(self.spec_tensionBelts.objectsToJoint) do
    noEventSend[v8] = {objectId = v8, object = constr.object}
  end
  for v8, constr in pairs(beltId.singleBelts) do
    if not (constr.mesh ~= nil) then
      continue
    end
    if not (constr ~= belt) then
      continue
    end
    local v10, v11 = self:getObjectToMount(constr)
    for v15, v16 in pairs(v10) do
      if not (noEventSend[v16.physics] ~= nil) then
        continue
      end
      noEventSend[v16.physics] = nil
    end
  end
  return noEventSend, playSound
end
function TensionBelts:objectOverlapCallback(transformId)
  if transformId ~= 0 then
    local beltId = getHasClassId(transformId, ClassIds.SHAPE)
    if beltId then
      local noEventSend = noEventSend:getNodeObject(transformId)
      if noEventSend ~= nil then
        -- if v3 == v0 then goto L72 end
        -- if v3.rootVehicle == v0.rootVehicle then goto L72 end
        -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L113
        local playSound = noEventSend:getSupportsTensionBelts()
        -- if not v4 then goto L113 end
        -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L113
        -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L113
        playSound = noEventSend:getTensionBeltNodeId()
        -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L113
        local object = noEventSend:getMeshNodes()
        -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L113
        self.spec_tensionBelts.objectsInTensionBeltRange[playSound] = {physics = playSound, visuals = object, object = noEventSend}
        self.spec_tensionBelts.numObjectsIntensionBeltRange = self.spec_tensionBelts.numObjectsIntensionBeltRange + 1
      else
        playSound = getSplitType(transformId)
        if playSound ~= 0 then
          playSound = getRigidBodyType(transformId)
          if playSound ~= RigidBodyType.DYNAMIC then
            -- if v4 ~= RigidBodyType.KINEMATIC then goto L113 end
          end
          if beltId.objectsInTensionBeltRange[transformId] == nil then
            beltId.objectsInTensionBeltRange[transformId] = {physics = transformId, visuals = {transformId}}
            beltId.numObjectsIntensionBeltRange = beltId.numObjectsIntensionBeltRange + 1
          end
        end
      end
    end
  end
  return true
end
function TensionBelts:getIsPlayerInTensionBeltsRange()
  if g_currentMission.player == nil then
    return false, nil
  end
  local isActive = isActive:canPlayerAccess(self)
  if not isActive then
    return false, nil
  end
  if self.spec_tensionBelts.beltData ~= nil then
    local beltId, noEventSend, playSound = getWorldTranslation(g_currentMission.player.rootNode)
    local object, v6, v7 = localToWorld(self.spec_tensionBelts.interactionBaseNode, self.spec_tensionBelts.interactionBasePointX, 0, self.spec_tensionBelts.interactionBasePointZ)
    local v10 = MathUtil.vector3Length(beltId - object, noEventSend - v6, playSound - v7)
    if v10 < self.spec_tensionBelts.totalInteractionRadius then
      if self.spec_tensionBelts.tensionBelts ~= nil then
        for v13, v14 in pairs(self.spec_tensionBelts.singleBelts) do
          local v15, v16, v17 = getWorldTranslation(v14.startNode)
          local v18, v19, v20 = getWorldTranslation(v14.endNode)
          local v21 = MathUtil.vector2Length(beltId - v15, playSound - v17)
          local v22 = MathUtil.vector2Length(beltId - v18, playSound - v20)
          if v21 < constr then
            -- if v21 < v1.interactionRadius then goto L93 end
          end
          if not (v22 < constr) then
            continue
          end
          if not (v22 < isActive.interactionRadius) then
            continue
          end
          local v23 = math.min(v21, v22)
        end
      end
      if constr < isActive.interactionRadius then
        return true, v8
      end
    end
  end
  return false, nil
end
function TensionBelts:getIsDynamicallyMountedNode(node)
  if self.spec_tensionBelts.objectsToJoint ~= nil then
    for v6, v7 in pairs(self.spec_tensionBelts.objectsToJoint) do
      if not (v6 == node) then
        continue
      end
      return true
    end
  end
  return false
end
function TensionBelts:getIsReadyForAutomatedTrainTravel(superFunc)
  if self.spec_tensionBelts.hasTensionBelts and 0 < self.spec_tensionBelts.numObjectsIntensionBeltRange then
    return false
  end
  return superFunc(self)
end
function TensionBelts.getCanBeSelected(TensionBeltsActivatable_mt, isActive)
  return true
end
function TensionBelts:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  if not self.spec_tensionBelts.allowFoldingWhileFasten and direction >= 0 and self.spec_tensionBelts.areBeltsFasten then
    return false, self.spec_tensionBelts.texts.warningFoldingTensionBelts
  end
  return superFunc(self, direction, onAiTurnOn)
end
function TensionBelts:getFillLevelInformation(superFunc, display)
  superFunc(self, display)
  if self.spec_tensionBelts.hasTensionBelts then
    for v7, v8 in pairs(self.spec_tensionBelts.objectsToJoint) do
      if not (v8.object ~= nil) then
        continue
      end
      if v8.object.getFillLevelInformation ~= nil then
        v8.object:getFillLevelInformation(display)
      else
        if not (v8.object.getFillLevel ~= nil) then
          continue
        end
        if not (v8.object.getFillType ~= nil) then
          continue
        end
        local v10 = v8.object:getFillType()
        local v11 = v8.object:getFillLevel()
        if v8.object.getCapacity ~= nil then
          local v13 = v8.object:getCapacity()
        end
        display:addFillLevel(v10, v11, v12)
      end
    end
  end
end
function TensionBelts:getAdditionalComponentMass(superFunc, component)
  local additionalMass = superFunc(self, component)
  if self.spec_tensionBelts.hasTensionBelts and self.spec_tensionBelts.jointComponent == component.node then
    for v8, constr in pairs(self.spec_tensionBelts.objectsToJoint) do
      if not (constr.object ~= nil) then
        continue
      end
      if not (constr.object.getAllowComponentMassReduction ~= nil) then
        continue
      end
      local v11 = constr.object:getAllowComponentMassReduction()
      if not v11 then
        continue
      end
      local v13 = constr.object:getDefaultMass()
      v11 = math.max(v13 - 0.1, 0)
    end
  end
  return additionalMass
end
function TensionBelts:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient and self.spec_tensionBelts.hasTensionBelts then
    self:clearActionEventsTable(self.spec_tensionBelts.actionEvents)
    if isActiveForInputIgnoreSelection then
      local playSound, object = self:addActionEvent(self.spec_tensionBelts.actionEvents, InputAction.TOGGLE_TENSION_BELTS, self, TensionBelts.actionEventToggleTensionBelts, false, true, false, true, nil)
      v6:setActionEventTextPriority(object, GS_PRIO_NORMAL)
    end
  end
end
function TensionBelts:tensionBeltActivationTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if self.isClient and self.spec_tensionBelts.hasTensionBelts then
    if not onEnter then
      -- if not v4 then goto L29 end
    end
    if g_currentMission.player ~= nil and otherActorId == g_currentMission.player.rootNode then
      if onEnter then
        self:raiseActive()
        v7.isPlayerInTrigger = true
        return
      end
      v7.isPlayerInTrigger = false
    end
  end
end
function TensionBelts:onTensionBeltTreeShapeCut(oldShape, shape)
  if self.isServer then
    for v7, v8 in pairs(self.spec_tensionBelts.objectsToJoint) do
      if not (v7 == oldShape) then
        continue
      end
      self:setAllTensionBeltsActive(false)
    end
  end
end
TensionBeltsActivatable = {}
local TensionBeltsActivatable_mt = Class(TensionBeltsActivatable)
function TensionBeltsActivatable:new()
  setmetatable({}, u0)
  local beltId = beltId:getText("action_fastenTensionBelt")
  return {object = self, spec = self.spec_tensionBelts, activateText = beltId}
end
function TensionBeltsActivatable:getIsActivatable()
  return self.spec.isPlayerInRange
end
function TensionBeltsActivatable:getDistance(posX, posY, posZ)
  if self.spec.currentBelt ~= nil then
    return 0
  end
  return math.huge
end
function TensionBeltsActivatable:run()
  if self.spec.currentBelt ~= nil then
    if self.spec.currentBelt.mesh ~= nil then
      isActive:setTensionBeltsActive(false, self.spec.currentBelt.id, false)
    else
      isActive:setTensionBeltsActive(true, self.spec.currentBelt.id, false)
    end
  end
  self:updateActivateText()
end
function TensionBeltsActivatable:updateActivateText()
  if self.spec.currentBelt ~= nil and self.spec.currentBelt.mesh ~= nil then
    local isActive = isActive:getText("action_unfastenTensionBelt")
    self.activateText = isActive
    return
  end
  isActive = isActive:getText("action_fastenTensionBelt")
  self.activateText = isActive
end
function TensionBelts:actionEventToggleTensionBelts(actionName, inputValue, callbackState, isAnalog)
  self.spec_tensionBelts.fastedAllBeltsIndex = 1
  self.spec_tensionBelts.fastedAllBeltsState = not self.spec_tensionBelts.areBeltsFasten
end
function TensionBelts.consoleCommandToggleTensionBeltDebugRendering(unusedSelf)
  TensionBelts.debugRendering = not TensionBelts.debugRendering
  local noEventSend = tostring(TensionBelts.debugRendering)
  return "TensionBeltsDebugRendering = " .. noEventSend
end
addConsoleCommand("gsTensionBeltDebug", "Toggles the debug tension belt rendering of the vehicle", "TensionBelts.consoleCommandToggleTensionBeltDebugRendering", nil)
