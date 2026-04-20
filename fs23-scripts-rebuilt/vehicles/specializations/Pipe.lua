-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SetPipeStateEvent.lua")
source("dataS/scripts/vehicles/specializations/events/SetPipeDischargeToGroundEvent.lua")
Pipe = {}
function Pipe.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Dischargeable, v0)
  end
  return v1
end
function Pipe.initSpecialization()
  local v3 = v3:getText("configuration_pipe")
  v0:addConfigurationType("pipe", v3, "pipe", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("Pipe")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.pipe.animationNodes")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, Cylindered.MOVING_TOOL_XML_KEY .. "#freezingPipeStates", "Freezing pipe states")
  Vehicle.xmlSchema:register(XMLValueType.INT, Cover.COVER_XML_KEY .. "#minPipeState", "Min. pipe state", 0)
  Vehicle.xmlSchema:register(XMLValueType.INT, Cover.COVER_XML_KEY .. "#maxPipeState", "Max. pipe state", "inf.")
  Pipe.registers(Vehicle.xmlSchema, "vehicle.pipe")
  Pipe.registers(Vehicle.xmlSchema, "vehicle.pipe.pipeConfigurations.pipeConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.pipe.pipeConfigurations.pipeConfiguration(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).pipe#state", "Current pipe state")
end
function Pipe:registers(v1)
  self:register(XMLValueType.L10N_STRING, v1 .. "#turnOnStateWarning", "Turn on warning", "warning_firstSetPipeState")
  self:register(XMLValueType.INT, v1 .. "#dischargeNodeIndex", "Discharge node index", 1)
  self:register(XMLValueType.BOOL, v1 .. "#forceDischargeNodeIndex", "Force discharge node selection while changing pipe state. Can be deactivated e.g. if the selection is done by trailer spec etc.", true)
  self:register(XMLValueType.BOOL, v1 .. "#automaticDischarge", "Pipe is automatically starting to discharge as soon as it hits the trailer", true)
  self:register(XMLValueType.BOOL, v1 .. "#toggleableDischargeToGround", "Defines if the discharge to ground can be enabled separatly", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".unloadingTriggers.unloadingTrigger(?)#node", "Unload trigger node")
  self:register(XMLValueType.STRING, v1 .. ".animation#name", "Pipe animation name")
  self:register(XMLValueType.FLOAT, v1 .. ".animation#speedScale", "Pipe animation speed scale", 1)
  self:register(XMLValueType.INT, v1 .. ".states#num", "Number of pipe states", 0)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".pipeNodes.pipeNode(?)#node", "Pipe node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".pipeNodes.pipeNode(?)#subPipeNode", "Sub pipe node (Target rotation is devided between these two nodes depending on the X rotation ratio between #node and #node parent and #subPipeNode and #node parent)")
  self:register(XMLValueType.FLOAT, v1 .. ".pipeNodes.pipeNode(?)#subPipeNodeRatio", "Ratio between usage of this pipe node and sub node [0-1]", "Calculated based on rotation in i3d file")
  self:register(XMLValueType.BOOL, v1 .. ".pipeNodes.pipeNode(?)#autoAimXRotation", "Auto aim X rotation", false)
  self:register(XMLValueType.BOOL, v1 .. ".pipeNodes.pipeNode(?)#autoAimYRotation", "Auto aim Y rotation", false)
  self:register(XMLValueType.BOOL, v1 .. ".pipeNodes.pipeNode(?)#autoAimInvertZ", "Auto aim invert Z axis", false)
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".pipeNodes.pipeNode(?).state(?)#translation", "State translation")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".pipeNodes.pipeNode(?).state(?)#rotation", "State translation")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".pipeNodes.pipeNode(?)#translationSpeeds", "Translation speeds")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".pipeNodes.pipeNode(?)#rotationSpeeds", "Rotation speeds")
  self:register(XMLValueType.STRING, v1 .. ".pipeNodes.pipeNode(?)#minRotationLimits", "Min. rotation limit")
  self:register(XMLValueType.STRING, v1 .. ".pipeNodes.pipeNode(?)#maxRotationLimits", "Max. rotation limit")
  self:register(XMLValueType.INT, v1 .. ".pipeNodes.pipeNode(?)#foldPriority", "Fold priority", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".pipeNodes.pipeNode(?)#bendingRegulation", "Bending angle regulation", 0)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".pipeNodes.pipeNode(?).bendingRegulationNode(?)#node", "Bending regulation node", 0)
  self:register(XMLValueType.INT, v1 .. ".pipeNodes.pipeNode(?).bendingRegulationNode(?)#axis", "Bending regulation axis", 0)
  self:register(XMLValueType.INT, v1 .. ".pipeNodes.pipeNode(?).bendingRegulationNode(?)#direction", "Bending regulation direction", 0)
  self:register(XMLValueType.VECTOR_N, v1 .. ".states#unloading", "Unloading states")
  self:register(XMLValueType.VECTOR_N, v1 .. ".states#autoAiming", "Auto aim states")
  self:register(XMLValueType.VECTOR_N, v1 .. ".states#turnOnAllowed", "Turn on allowed states")
  self:register(XMLValueType.INT, v1 .. ".states.state(?)#stateIndex", "State index")
  self:register(XMLValueType.INT, v1 .. ".states.state(?)#dischargeNodeIndex", "Discharge node index")
  self:register(XMLValueType.FLOAT, v1 .. "#foldMinLimit", "Fold min. limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. "#foldMaxLimit", "Fold max. limit", 1)
  self:register(XMLValueType.INT, v1 .. "#foldMinState", "Fold min. state", 1)
  self:register(XMLValueType.INT, v1 .. "#foldMaxState", "Fold max. state", "Num. of states")
  self:register(XMLValueType.BOOL, v1 .. "#aiFoldedPipeUsesTrailerSpace", "Defines if the folded pipe uses the space of the trailer to discharge", false)
end
function Pipe.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadUnloadingTriggers", Pipe.loadUnloadingTriggers)
  SpecializationUtil.registerFunction(vehicleType, "loadPipeNodes", Pipe.loadPipeNodes)
  SpecializationUtil.registerFunction(vehicleType, "getIsPipeStateChangeAllowed", Pipe.getIsPipeStateChangeAllowed)
  SpecializationUtil.registerFunction(vehicleType, "setPipeState", Pipe.setPipeState)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentPipeState", Pipe.getCurrentPipeState)
  SpecializationUtil.registerFunction(vehicleType, "updatePipeNodes", Pipe.updatePipeNodes)
  SpecializationUtil.registerFunction(vehicleType, "updateBendingRegulationNodes", Pipe.updateBendingRegulationNodes)
  SpecializationUtil.registerFunction(vehicleType, "unloadingTriggerCallback", Pipe.unloadingTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "updateNearestObjectInTriggers", Pipe.updateNearestObjectInTriggers)
  SpecializationUtil.registerFunction(vehicleType, "updateActionEventText", Pipe.updateActionEventText)
  SpecializationUtil.registerFunction(vehicleType, "onDeletePipeObject", Pipe.onDeletePipeObject)
  SpecializationUtil.registerFunction(vehicleType, "getPipeDischargeNodeIndex", Pipe.getPipeDischargeNodeIndex)
  SpecializationUtil.registerFunction(vehicleType, "setPipeDischargeToGround", Pipe.setPipeDischargeToGround)
end
function Pipe.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDischargeNodeActive", Pipe.getIsDischargeNodeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOn", Pipe.getCanBeTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getTurnedOnNotAllowedWarning", Pipe.getTurnedOnNotAllowedWarning)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", Pipe.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischarge", Pipe.handleDischarge)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischargeRaycast", Pipe.handleDischargeRaycast)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "dischargeToGround", Pipe.dischargeToGround)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleDischargeToObject", Pipe.getCanToggleDischargeToObject)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleDischargeToGround", Pipe.getCanToggleDischargeToGround)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getRequiresPower", Pipe.getRequiresPower)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadMovingToolFromXML", Pipe.loadMovingToolFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMovingToolActive", Pipe.getIsMovingToolActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadCoverFromXML", Pipe.loadCoverFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsNextCoverStateAllowed", Pipe.getIsNextCoverStateAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Pipe.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIReadyToDrive", Pipe.getIsAIReadyToDrive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIPreparingToDrive", Pipe.getIsAIPreparingToDrive)
end
function Pipe.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onMovingToolChanged", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onDischargeStateChanged", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onAIImplementPrepare", Pipe)
  SpecializationUtil.registerEventListener(vehicleType, "onRootVehicleChanged", Pipe)
end
function Pipe:onLoad(savegame)
  local pipeConfigurationId = Utils.getNoNil(self.configurations.pipe, 1)
  local v4 = string.format("vehicle.pipe.pipeConfigurations.pipeConfiguration(%d)", pipeConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.pipe.pipeConfigurations.pipeConfiguration", pipeConfigurationId, self.components, self)
  local v5 = v5:hasProperty(v4)
  if not v5 then
  end
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipeEffect.effectNode", v4 .. ".pipeEffect.effectNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.overloading.trailerTriggers.trailerTrigger(0)#index", v4 .. ".unloadingTriggers.unloadingTrigger(0)#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe#raycastNodeIndex", v4 .. ".raycast#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe#raycastDistance", v4 .. ".raycast#maxDistance")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe#effectExtraDistanceOnTrailer", v4 .. ".raycast#extraDistance")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe#animName", v4 .. ".animation#name")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe#animSpeedScale", v4 .. ".animation#speedScale")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe#animSpeedScale", v4 .. ".animation#speedScale")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe.node#node", v4 .. ".node#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe#numStates", v4 .. ".states#num")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe#unloadingStates", v4 .. ".states#unloading")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe#autoAimingStates", v4 .. ".states#autoAiming")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipe#turnOnAllowed", v4 .. ".states#turnOnAllowed")
  local v6 = v6:getValue(v4 .. "#turnOnStateWarning", "warning_firstSetPipeState", self.customEnvironment)
  v5 = string.format(v6, self.typeDesc)
  v2.turnOnStateWarning = v5
  v5 = v5:getValue(v4 .. "#dischargeNodeIndex", 1)
  v2.dischargeNodeIndex = v5
  v5 = v5:getValue(v4 .. "#forceDischargeNodeIndex", true)
  v2.forceDischargeNodeIndex = v5
  if v2.forceDischargeNodeIndex then
    self:setCurrentDischargeNodeIndex(v2.dischargeNodeIndex)
  end
  v5 = v5:getValue(v4 .. "#automaticDischarge", true)
  v2.automaticDischarge = v5
  v5 = v5:getValue(v4 .. "#toggleableDischargeToGround", false)
  v2.toggleableDischargeToGround = v5
  v2.dischargeToGroundState = false
  v2.unloadingTriggers = {}
  v2.objectsInTriggers = {}
  v2.unloadTriggersInTriggers = {}
  v2.numObjectsInTriggers = 0
  v2.numUnloadTriggersInTriggers = 0
  v2.nearestObjectInTriggers = {objectId = nil, fillUnitIndex = 0}
  v2.nearestObjectInTriggersSent = {objectId = nil, fillUnitIndex = 0}
  self:loadUnloadingTriggers(v2.unloadingTriggers, self.xmlFile, v4 .. ".unloadingTriggers.unloadingTrigger")
  if #v2.unloadingTriggers == 0 then
    Logging.xmlWarning(self.xmlFile, "No 'unloadingTriggers' defined for pipe 'vehicle.pipe'!")
  else
    for v8, v9 in pairs(v2.unloadingTriggers) do
      addTrigger(v9.node, "unloadingTriggerCallback", self)
      if not (setTriggerReportStatics ~= nil) then
        continue
      end
      setTriggerReportStatics(v9.node, true)
    end
  end
  v2.animation = {}
  v6 = v6:getValue(v4 .. ".animation#name")
  v2.animation.name = v6
  v6 = v6:getValue(v4 .. ".animation#speedScale", 1)
  v2.animation.speedScale = v6
  v2.currentState = 1
  v2.targetState = 1
  v5 = v5:getValue(v4 .. ".states#num", 0)
  v2.numStates = v5
  v2.nodes = {}
  self:loadPipeNodes(v2.nodes, self.xmlFile, v4 .. ".pipeNodes.pipeNode")
  if 0 >= #v2.nodes and v2.animation.name == nil then
  end
  v2.hasMovablePipe = v5
  v2.unloadingStates = {}
  v2.autoAimingStates = {}
  v2.turnOnAllowedStates = {}
  local v11 = self.xmlFile:getValue(v4 .. ".states#unloading", nil, true)
  if v11 ~= nil then
    for v15, v16 in ipairs(v11) do
      v7[v16] = true
    end
  end
  v2.numUnloadingStates = v10
  v11 = self.xmlFile:getValue(v4 .. ".states#autoAiming", nil, true)
  if v11 ~= nil then
    for v15, v16 in ipairs(v11) do
      v7[v16] = true
    end
  end
  v2.numAutoAimingStates = v10
  v11 = self.xmlFile:getValue(v4 .. ".states#turnOnAllowed", nil, true)
  if v11 ~= nil then
    for v15, v16 in ipairs(v11) do
      v7[v16] = true
    end
  end
  v2.numTurnOnAllowedStates = v10
  v2.dischargeNodeMapping = {}
  while true do
    v7 = string.format("%s.states.state(%d)", v4, v6)
    v8 = v8:hasProperty(v7)
    if not v8 then
      break
    end
    v8 = v8:getValue(v7 .. "#stateIndex")
    v9 = v9:getValue(v7 .. "#dischargeNodeIndex")
    if v8 ~= nil and v9 ~= nil then
      v2.dischargeNodeMapping[v8] = v9
    end
  end
  if self.isClient then
    v7 = v7:loadAnimations(self.xmlFile, "vehicle.pipe.animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v7
  end
  v7 = v7:getValue(v4 .. "#foldMinLimit", 0)
  v2.foldMinTime = v7
  v7 = v7:getValue(v4 .. "#foldMaxLimit", 1)
  v2.foldMaxTime = v7
  v7 = v7:getValue(v4 .. "#foldMinState", 1)
  v2.foldMinState = v7
  v7 = v7:getValue(v4 .. "#foldMaxState", v2.numStates)
  v2.foldMaxState = v7
  v7 = v7:getValue(v4 .. "#aiFoldedPipeUsesTrailerSpace", false)
  v2.aiFoldedPipeUsesTrailerSpace = v7
  v2.texts = {}
  v8 = v8:getText("warning_foldingNotWhilePipeExtended")
  v2.texts.warningFoldingPipe = v8
  v8 = v8:getText("action_pipeIn")
  v2.texts.pipeIn = v8
  v8 = v8:getText("action_pipeOut")
  v2.texts.pipeOut = v8
  v8 = v8:getText("action_startTipToGround")
  v2.texts.startTipToGround = v8
  v8 = v8:getText("action_stopTipToGround")
  v2.texts.stopTipToGround = v8
  v7 = self:getNextDirtyFlag()
  v2.dirtyFlag = v7
  v2.lastFillTime = -1000
  v2.lastEmptyTime = -1000
  if not self.isServer then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", Pipe)
  end
end
function Pipe:onPostLoad(savegame)
  if savegame ~= nil and not savegame.resetVehicles then
    local v3 = v3:getValue(savegame.key .. ".pipe#state", self.spec_pipe.currentState)
    self:setPipeState(v3, true)
    self:updatePipeNodes(999999, nil)
    if self.spec_pipe.animation.name ~= nil then
      if v3 ~= 1 then
      end
      self:setAnimationTime(v2.animation.name, v4, true)
    end
  end
end
function Pipe:onDelete()
  if self.spec_pipe.unloadingTriggers ~= nil then
    for v5, v6 in pairs(self.spec_pipe.unloadingTriggers) do
      removeTrigger(v6.node)
    end
  end
  v2:deleteAnimations(v1.animationNodes)
end
function Pipe:saveToXMLFile(xmlFile, key, usedModNames)
  local v8 = MathUtil.clamp(self.spec_pipe.currentState, 1, self.spec_pipe.numStates)
  xmlFile:setValue(...)
end
function Pipe:onReadStream(streamId, connection)
  local pipeState = streamReadUIntN(streamId, 2)
  self:setPipeState(pipeState, true)
  local v5 = streamReadBool(streamId)
  if v5 then
    local v6 = NetworkUtil.readNodeObjectId(streamId)
    self.spec_pipe.nearestObjectInTriggers.objectId = v6
    v6 = streamReadUIntN(streamId, 4)
    self.spec_pipe.nearestObjectInTriggers.fillUnitIndex = v6
  end
end
function Pipe:onWriteStream(streamId, connection)
  streamWriteUIntN(streamId, self.spec_pipe.targetState, 2)
  if self.spec_pipe.nearestObjectInTriggersSent.objectId == nil then
  end
  local v4 = v4(v5, true)
  if v4 then
    NetworkUtil.writeNodeObjectId(streamId, v3.nearestObjectInTriggersSent.objectId)
    streamWriteUIntN(streamId, v3.nearestObjectInTriggersSent.fillUnitIndex, 4)
  end
end
function Pipe:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      local v5 = streamReadBool(streamId)
      if v5 then
        local v6 = NetworkUtil.readNodeObjectId(streamId)
        self.spec_pipe.nearestObjectInTriggers.objectId = v6
        v6 = streamReadUIntN(streamId, 4)
        self.spec_pipe.nearestObjectInTriggers.fillUnitIndex = v6
        return
      end
      v4.nearestObjectInTriggers.objectId = nil
      v4.nearestObjectInTriggers.fillUnitIndex = 0
    end
  end
end
function Pipe:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_pipe.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      if v4.nearestObjectInTriggersSent.objectId == nil then
      end
      v5 = v5(v6, true)
      if v5 then
        NetworkUtil.writeNodeObjectId(streamId, v4.nearestObjectInTriggersSent.objectId)
        streamWriteUIntN(streamId, v4.nearestObjectInTriggersSent.fillUnitIndex, 4)
      end
    end
  end
end
function Pipe:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  self:updateActionEventText()
  if self.spec_pipe.hasMovablePipe then
    self:updatePipeNodes(dt, self.spec_pipe.nearestObjectInTriggers)
  end
end
function Pipe:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    self:updateNearestObjectInTriggers()
    if self.spec_pipe.nearestObjectInTriggers.objectId == self.spec_pipe.nearestObjectInTriggersSent.objectId then
    end
    if v5.nearestObjectInTriggers.fillUnitIndex == v5.nearestObjectInTriggersSent.fillUnitIndex then
    end
    if not v6 then
      -- if not true then goto L55 end
    end
    v5.nearestObjectInTriggersSent.objectId = v5.nearestObjectInTriggers.objectId
    v5.nearestObjectInTriggersSent.fillUnitIndex = v5.nearestObjectInTriggers.fillUnitIndex
    self:raiseDirtyFlags(v5.dirtyFlag)
    if v5.numAutoAimingStates == 0 and Platform.gameplay.automaticPipeUnfolding then
      local v8 = self:getIsAIActive()
      if not v8 then
        if v5.nearestObjectInTriggers.objectId == nil and 0 >= v5.numUnloadTriggersInTriggers then
        end
        local v11 = self:getPipeDischargeNodeIndex()
        local v9 = self:getDischargeNodeByIndex(...)
        if v9 ~= nil then
          local v10 = self:getFillUnitCapacity(v9.fillUnitIndex)
          v11 = self:getFillUnitFillLevel(v9.fillUnitIndex)
          if v8 then
            if v10 == math.huge then
              -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L118
              local v12 = self:getIsTurnedOn()
              -- if v12 then goto L118 end
            end
            if 0 >= v11 then
            end
          end
        end
        if v8 then
          -- cmp-jump LOP_JUMPXEQKN R10 aux=0x8000001a -> L153
          v10, v11 = next(v5.unloadingStates)
          v12 = self:getIsPipeStateChangeAllowed(v10)
          -- if not v12 then goto L153 end
          self:setPipeState(v10)
        elseif 1 < v5.targetState then
          v10 = self:getIsPipeStateChangeAllowed(1)
          if v10 then
            self:setPipeState(1)
          end
        end
        if v8 then
          self:raiseActive()
        end
      end
    end
  end
end
function Pipe:loadUnloadingTriggers(unloadingTriggers, xmlFile, baseKey)
  while true do
    v5 = string.format("%s(%d)", baseKey, isSelected)
    v6 = xmlFile:hasProperty(v5)
    if not v6 then
      break
    end
    XMLUtil.checkDeprecatedXMLElements(self.xmlFile, v5 .. "#index", v5 .. "#node")
    v6 = xmlFile:getValue(v5 .. "#node", nil, self.components, self.i3dMappings)
    if v6 ~= nil then
      v7 = CollisionFlag.getHasFlagSet(v6, CollisionFlag.FILLABLE)
      if v7 then
        table.insert(unloadingTriggers, {node = v6})
      else
        v10 = CollisionFlag.getBit(CollisionFlag.FILLABLE)
        v11 = getName(v6)
        Logging.xmlWarning(self.xmlFile, "Missing collision mask bit '%d'. Please add this bit to unload trigger node '%s' in '%s'", v10, v11, v5)
      end
    end
  end
end
function Pipe:loadPipeNodes(pipeNodes, xmlFile, baseKey)
  while true do
    v7 = string.format("%s(%d)", baseKey, v6)
    v8 = xmlFile:hasProperty(v7)
    if not v8 then
      break
    end
    v8 = xmlFile:getValue(v7 .. "#node", nil, self.components, self.i3dMappings)
    if v8 ~= nil then
      v10 = xmlFile:getValue(v7 .. "#autoAimXRotation", false)
      v10 = xmlFile:getValue(v7 .. "#autoAimYRotation", false)
      v10 = xmlFile:getValue(v7 .. "#autoAimInvertZ", false)
      v10 = xmlFile:getValue(v7 .. "#subPipeNode", nil, self.components, self.i3dMappings)
      if {node = v8, autoAimXRotation = v10, autoAimYRotation = v10, autoAimInvertZ = v10, states = {}, subPipeNode = v10}.subPipeNode ~= nil then
        v10, v11, v12 = getRotation({node = v8, autoAimXRotation = v10, autoAimYRotation = v10, autoAimInvertZ = v10, states = {}, subPipeNode = v10}.node)
        v15 = getParent({node = v8, autoAimXRotation = v10, autoAimYRotation = v10, autoAimInvertZ = v10, states = {}, subPipeNode = v10}.node)
        v13, v14, v15 = localRotationToLocal({node = v8, autoAimXRotation = v10, autoAimYRotation = v10, autoAimInvertZ = v10, states = {}, subPipeNode = v10}.subPipeNode, v15, 0, 0, 0)
        v19 = math.abs(v10 / v13)
        v16 = xmlFile:getValue(...)
      end
      XMLUtil.checkDeprecatedXMLElements(self.xmlFile, v7 .. ".state1", v7 .. ".state")
      -- TODO: structure LOP_FORNPREP (pc 126, target 213)
      v15 = string.format(".state(%d)", 1 - 1)
      v9.states[1] = {}
      v18 = getTranslation(v8)
      v14, v15, v16 = xmlFile:getValue(v7 .. v15 .. "#translation", {})
      if 1 == 1 then
        setTranslation(v8, v14, v15, v16)
      end
      v9.states[v12].translation = {v14, v15, v16}
      v21 = getRotation(v8)
      v17, v18, v19 = xmlFile:getValue(v13 .. "#rotation", {})
      if v12 == 1 then
        setRotation(v8, v17, v18, v19)
      end
      v9.states[v12].rotation = {v14, v15, v16}
      -- TODO: structure LOP_FORNLOOP (pc 212, target 127)
      v10, v11, v12 = xmlFile:getValue(v7 .. "#translationSpeeds")
      if v10 ~= nil and v11 ~= nil and v12 ~= nil then
        if v10 * 0.001 == 0 and v11 * 0.001 == 0 then
          -- cmp-jump LOP_JUMPXEQKN R12 aux=0x34 -> L243
        end
        v9.translationSpeeds = {v10, v11, v12}
      end
      v13, v14, v15 = xmlFile:getValue(v7 .. "#rotationSpeeds")
      if v13 ~= nil and v14 ~= nil and v15 ~= nil then
        if v13 * 0.001 == 0 and v14 * 0.001 == 0 then
          -- cmp-jump LOP_JUMPXEQKN R12 aux=0x34 -> L276
        end
        v9.rotationSpeeds = {v10, v11, v12}
      end
      v14 = xmlFile:getValue(v7 .. "#minRotationLimits")
      v13, v14, v15 = string.getVector(...)
      if v13 == nil and v14 == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L333
      end
      if v10 ~= nil then
        v13 = math.rad(v10)
        -- if v13 then goto L303 end
      end
      if v11 ~= nil then
        v13 = math.rad(v11)
        -- if v13 then goto L313 end
      end
      if v12 ~= nil then
        v13 = math.rad(v12)
        -- if v13 then goto L323 end
      end
      v9.minRotationLimits = {v10, v11, nil}
      v14 = xmlFile:getValue(v7 .. "#maxRotationLimits")
      v13, v14, v15 = string.getVector(...)
      if v13 == nil and v14 == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L390
      end
      if v10 ~= nil then
        v13 = math.rad(v10)
        -- if v13 then goto L360 end
      end
      if v11 ~= nil then
        v13 = math.rad(v11)
        -- if v13 then goto L370 end
      end
      if v12 ~= nil then
        v13 = math.rad(v12)
        -- if v13 then goto L380 end
      end
      v9.maxRotationLimits = {v10, v11, nil}
      v13 = xmlFile:getValue(v7 .. "#foldPriority", 0)
      v9.foldPriority = v13
      v13 = math.max(v9.foldPriority, v5)
      v13, v14, v15 = getTranslation(v8)
      v9.curTranslation = {v13, v14, v15}
      v13, v14, v15 = getRotation(v8)
      v9.curRotation = {v13, v14, v15}
      v9.lastTargetRotation = {v13, v14, v15}
      v13 = xmlFile:getValue(v7 .. "#bendingRegulation", 0)
      v9.bendingRegulation = v13
      v9.regulationNodes = {}
      while true do
        v14 = string.format("%s.bendingRegulationNode(%d)", v7, v13)
        v15 = xmlFile:hasProperty(v14)
        if not v15 then
          break
        end
        v16 = xmlFile:getValue(v14 .. "#node", nil, self.components, self.i3dMappings)
        if {node = v16}.node ~= nil then
          v17 = getRotation({node = v16}.node)
          v16 = xmlFile:getValue(v14 .. "#axis", 1)
          v17 = xmlFile:getValue(v14 .. "#direction", 1)
          v19 = MathUtil.clamp(v16, 1, 3)
          {node = v16, startRotation = {}, weights = {0, 0, 0}}.weights[v19] = v17
          table.insert(v9.regulationNodes, {node = v16, startRotation = {}, weights = {0, 0, 0}})
        else
          Logging.xmlWarning(self.xmlFile, "Failed to load bendingRegulationNode '%s'", v14)
        end
      end
      table.insert(pipeNodes, v9)
    end
  end
  for v10, v11 in ipairs(pipeNodes) do
    v11.inverseFoldPriority = v5 - v11.foldPriority
  end
end
function Pipe:getIsPipeStateChangeAllowed(pipeState)
  if self.getFoldAnimTime ~= nil then
    local isSelected = self:getFoldAnimTime()
  end
  if isActiveForInputIgnoreSelection ~= nil then
    if isActiveForInputIgnoreSelection >= isActiveForInput.foldMinTime then
      -- if v2.foldMaxTime >= v3 then goto L23 end
    end
    return false
  end
  return true
end
function Pipe:setPipeState(pipeState, noEventSend)
  local isSelected = math.min(pipeState, self.spec_pipe.numStates)
  if self.spec_pipe.targetState ~= isSelected then
    if noEventSend ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L50
    end
    if g_server ~= nil then
      local v6 = SetPipeStateEvent.new(self, pipeState)
      isSelected:broadcastEvent(...)
    else
      isSelected = isSelected:getServerConnection()
      v6 = SetPipeStateEvent.new(self, pipeState)
      isSelected:sendEvent(v6, nil, nil, self)
    end
    isActiveForInputIgnoreSelection.targetState = pipeState
    isActiveForInputIgnoreSelection.currentState = 0
    if isActiveForInputIgnoreSelection.animation ~= nil then
      if pipeState == 1 then
        local v8 = self:getAnimationTime(isActiveForInputIgnoreSelection.animation.name)
        self:playAnimation(isActiveForInputIgnoreSelection.animation.name, -isActiveForInputIgnoreSelection.animation.speedScale, v8, true)
      else
        v8 = self:getAnimationTime(isActiveForInputIgnoreSelection.animation.name)
        self:playAnimation(isActiveForInputIgnoreSelection.animation.name, isActiveForInputIgnoreSelection.animation.speedScale, v8, true)
      end
    end
    if isActiveForInputIgnoreSelection.forceDischargeNodeIndex then
      v6 = self:getPipeDischargeNodeIndex(pipeState)
      self:setCurrentDischargeNodeIndex(...)
    end
  end
end
function Pipe:getCurrentPipeState()
  return self.spec_pipe.currentState
end
function Pipe:updatePipeNodes(dt, nearestObjectInTrigger)
  if nearestObjectInTrigger ~= nil then
    local v5 = NetworkUtil.getObject(nearestObjectInTrigger.objectId)
  end
  if isSelected ~= nil then
    v5 = entityExists(isSelected.components[1].node)
    if v5 then
    end
  end
  if isActiveForInputIgnoreSelection.currentState == isActiveForInputIgnoreSelection.targetState then
    -- if not v5 then goto L646 end
  end
  if isActiveForInputIgnoreSelection.targetState ~= isActiveForInputIgnoreSelection.numStates then
  else
  end
  if v5 then
    local fillTypeIndex = isSelected:getFillUnitAutoAimTargetNode(nearestObjectInTrigger.fillUnitIndex)
    if fillTypeIndex == nil then
      fillTypeIndex = isSelected:getFillUnitExactFillRootNode(nearestObjectInTrigger.fillUnitIndex)
    end
    local fillTypeIndex, v12, v13 = getWorldTranslation(v7)
    if VehicleDebug.state == VehicleDebug.DEBUG then
      local v21 = getName(v7)
      DebugUtil.drawDebugGizmoAtWorldPos(fillTypeIndex, v12, v13, 0, 0, 1, 0, 1, 0, v21, false)
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 99, target 620)
  if 0 < isActiveForInputIgnoreSelection.nodes[1].bendingRegulation and v7 ~= nil then
    local v18 = calcDistanceFrom(isActiveForInputIgnoreSelection.nodes[1].node, v7)
    local v19 = self:updateBendingRegulationNodes(isActiveForInputIgnoreSelection.nodes[1], v18)
  end
  if v16.translationSpeeds ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 136, target 200)
    local v22 = math.abs(v16.curTranslation[1] - v16.states[isActiveForInputIgnoreSelection.targetState].translation[1])
    if 0.000001 < v22 then
      if v16.curTranslation[1] < v16.states[isActiveForInputIgnoreSelection.targetState].translation[1] then
        local v23 = math.min(v16.curTranslation[1] + dt * v16.translationSpeeds[1], v16.states[isActiveForInputIgnoreSelection.targetState].translation[1])
        v16.curTranslation[1] = v23
      else
        v23 = math.max(v16.curTranslation[1] - dt * v16.translationSpeeds[1], v16.states[isActiveForInputIgnoreSelection.targetState].translation[1])
        v16.curTranslation[1] = v23
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 199, target 137)
    setTranslation(v16.node, v16.curTranslation[1], v16.curTranslation[2], v16.curTranslation[3])
  end
  if v16.rotationSpeeds ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 222, target 593)
    if v5 then
      if v16.autoAimXRotation then
        -- cmp-jump LOP_JUMPXEQKN R22 aux=0x80000034 -> L351
        local v24, v25, v26 = getWorldTranslation(v16.node)
        if VehicleDebug.state == VehicleDebug.DEBUG then
          if v16.subPipeNode == nil then
            drawDebugLine(v24, v25, v26, 1, 0, 0, outputFillType, v17, v10, 1, 0, 0)
          else
            local v27, v28, v29 = getWorldTranslation(v16.node)
            local v30, v31, v32 = localToWorld(v16.node, 0, 0, 3)
            drawDebugLine(v27, v28, v29, 1, 1, 0, v30, v31, v32, 1, 1, 0)
            local v43 = string.format("ratio: %.2f", v16.subPipeNodeRatio)
            DebugUtil.drawDebugGizmoAtWorldPos(v30, v31, v32, 0, 0, 1, 0, 1, 0, v43, false)
          end
        end
        v28 = getParent(v16.node)
        v27, v28, v29 = worldDirectionToLocal(v28, outputFillType - v24, v17 - v25, v10 - v26)
        v30 = math.atan2(v28, v29)
        if v16.subPipeNode ~= nil then
        end
        if v16.autoAimInvertZ then
        end
        v30 = MathUtil.normalizeRotationForShortestPath(v23, v16.curRotation[v22])
      elseif v16.autoAimYRotation and 1 == 2 then
        v24, v25, v26 = getWorldTranslation(v16.node)
        v28 = getParent(v16.node)
        v27, v28, v29 = worldDirectionToLocal(v28, outputFillType - v24, v17 - v25, v10 - v26)
        v30 = math.atan2(v27, v29)
        if v16.autoAimInvertZ then
        end
        v30 = MathUtil.normalizeRotationForShortestPath(v23, v16.curRotation[v22])
      end
    end
    if v16.minRotationLimits ~= nil and v16.maxRotationLimits ~= nil then
      v24 = math.abs(v23)
      if 2 * math.pi < v24 then
      end
      if v16.minRotationLimits[v22] ~= nil then
        v24 = math.max(v23, v16.minRotationLimits[v22])
      end
      if v16.maxRotationLimits[v22] ~= nil then
        v24 = math.min(v23, v16.maxRotationLimits[v22])
      end
    end
    v24 = math.abs(v16.curRotation[v22] - v23)
    if 0.00001 < v24 then
      if not v5 then
        -- TODO: structure LOP_FORNPREP (pc 467, target 506)
        if v16[v6] < isActiveForInputIgnoreSelection.nodes[1][v6] then
          if isActiveForInputIgnoreSelection.nodes[1].curRotation[1] ~= isActiveForInputIgnoreSelection.nodes[1].lastTargetRotation[1] then
          elseif isActiveForInputIgnoreSelection.nodes[1].curRotation[2] ~= isActiveForInputIgnoreSelection.nodes[1].lastTargetRotation[2] then
          else
            if isActiveForInputIgnoreSelection.nodes[1].curRotation[3] ~= isActiveForInputIgnoreSelection.nodes[1].lastTargetRotation[3] then
              -- goto L505  (LOP_JUMP +0)
            end
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 505, target 468)
      end
      if v24 then
        if v16.curRotation[v22] < v23 then
          v26 = math.min(v16.curRotation[v22] + dt * v16.rotationSpeeds[v22], v23)
          v16.curRotation[v22] = v26
        else
          v26 = math.max(v16.curRotation[v22] - dt * v16.rotationSpeeds[v22], v23)
          v16.curRotation[v22] = v26
        end
        if 2 * math.pi < v16.curRotation[v22] then
          v16.curRotation[v22] = v16.curRotation[v22] - 2 * math.pi
        elseif v16.curRotation[v22] < -2 * math.pi then
          v16.curRotation[v22] = v16.curRotation[v22] + 2 * math.pi
        end
        v16.lastTargetRotation[v22] = v23
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 592, target 223)
    if v19 then
      setRotation(v16.node, v16.curRotation[1], v16.curRotation[2], v16.curRotation[3])
    end
  end
  if v15 and self.setMovingToolDirty ~= nil then
    self:setMovingToolDirty(v16.node)
  end
  -- TODO: structure LOP_FORNLOOP (pc 619, target 100)
  if #isActiveForInputIgnoreSelection.nodes == 0 and isActiveForInputIgnoreSelection.animation.name ~= nil then
    v12 = self:getIsAnimationPlaying(isActiveForInputIgnoreSelection.animation.name)
    if v12 then
    end
  end
  if not fillTypeIndex then
    isActiveForInputIgnoreSelection.currentState = isActiveForInputIgnoreSelection.targetState
    return
    local v6 = self:getDischargeState()
    if v6 == Dischargeable.DISCHARGE_STATE_GROUND then
      local outputFillType = self:getPipeDischargeNodeIndex()
      v6 = self:getDischargeNodeByIndex(...)
      if v6 ~= nil then
        for v10, fillTypeIndex in ipairs(isActiveForInputIgnoreSelection.nodes) do
          if not (0 < fillTypeIndex.bendingRegulation) then
            continue
          end
          self:updateBendingRegulationNodes(fillTypeIndex, v6.dischargeDistance)
        end
      end
    end
  end
end
function Pipe.updateBendingRegulationNodes(v0, dt, nearestObjectInTrigger)
  local isActiveForInputIgnoreSelection, isSelected, v5 = localDirectionToWorld(dt.node, 0, 1, 0)
  for v9, v10 in ipairs(dt.regulationNodes) do
    setRotation(v10.node, v10.startRotation[1] + v10.weights[1] * isSelected * dt.bendingRegulation, v10.startRotation[2] + v10.weights[2] * isSelected * dt.bendingRegulation, v10.startRotation[3] + v10.weights[3] * isSelected * dt.bendingRegulation)
    if not (VehicleDebug.state == VehicleDebug.DEBUG) then
      continue
    end
    local v14, v15, v16 = getWorldTranslation(v10.node)
    local v17, v18, v19 = localToWorld(v10.node, 0, -10, 0)
    drawDebugLine(v14, v15, v16, 0, 0, 1, v17, v18, v19, 0, 0, 1)
  end
  v7 = math.sin(isSelected * dt.bendingRegulation)
  return v7 * nearestObjectInTrigger
end
function Pipe:unloadingTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if not onEnter then
    -- if not v4 then goto L201 end
  end
  local v7 = v7:getNodeObject(otherId)
  if v7 ~= nil and v7 ~= self then
    local outputFillType = v7:isa(Vehicle)
    if outputFillType then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L201
      outputFillType = v7:getFillUnitIndexFromNode(otherId)
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L201
      local v12 = self:getPipeDischargeNodeIndex()
      local v10 = self:getDischargeNodeByIndex(...)
      -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L201
      local fillTypeIndex = self:getFillUnitSupportedFillTypes(v10.fillUnitIndex)
      for v16, v17 in pairs(fillTypeIndex) do
        local v18 = v7:getFillUnitSupportsFillType(outputFillType, v16)
        if not v18 then
          continue
        end
        break
      end
      -- if not v12 then goto L201 end
      if onEnter then
        if v9.objectsInTriggers[v7] == nil then
          v9.objectsInTriggers[v7] = 0
          v9.numObjectsInTriggers = v9.numObjectsInTriggers + 1
          if v7.addDeleteListener ~= nil then
            v7:addDeleteListener(self, "onDeletePipeObject")
          end
        end
        v9.objectsInTriggers[v7] = v9.objectsInTriggers[v7] + 1
        self:raiseActive()
        return
      end
      v9.objectsInTriggers[v7] = v9.objectsInTriggers[v7] - 1
      -- cmp-jump LOP_JUMPXEQKN R13 aux=0x80000015 -> L201
      v9.objectsInTriggers[v7] = nil
      v9.numObjectsInTriggers = v9.numObjectsInTriggers - 1
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L201
      v7:removeDeleteListener(self)
      return
    end
  end
  if v7 ~= nil and v7 ~= self then
    outputFillType = v7:isa(UnloadTrigger)
    if outputFillType then
      if onEnter then
        if self.spec_pipe.unloadTriggersInTriggers[v7] == nil then
          self.spec_pipe.unloadTriggersInTriggers[v7] = 0
          self.spec_pipe.numUnloadTriggersInTriggers = self.spec_pipe.numUnloadTriggersInTriggers + 1
          if v7.addDeleteListener ~= nil then
            v7:addDeleteListener(self, "onDeletePipeObject")
          end
        end
        outputFillType.unloadTriggersInTriggers[v7] = outputFillType.unloadTriggersInTriggers[v7] + 1
        self:raiseActive()
        return
      end
      outputFillType.unloadTriggersInTriggers[v7] = outputFillType.unloadTriggersInTriggers[v7] - 1
      if outputFillType.unloadTriggersInTriggers[v7] == 0 then
        outputFillType.unloadTriggersInTriggers[v7] = nil
        outputFillType.numUnloadTriggersInTriggers = outputFillType.numUnloadTriggersInTriggers - 1
        if v7.removeDeleteListener ~= nil then
          v7:removeDeleteListener(self)
        end
      end
    end
  end
end
function Pipe:updateNearestObjectInTriggers()
  self.spec_pipe.nearestObjectInTriggers.objectId = nil
  self.spec_pipe.nearestObjectInTriggers.fillUnitIndex = 0
  local v5 = self:getPipeDischargeNodeIndex()
  local isActiveForInputIgnoreSelection = self:getDischargeNodeByIndex(...)
  if isActiveForInputIgnoreSelection ~= nil then
    local isSelected = Utils.getNoNil(isActiveForInputIgnoreSelection.node, self.components[1].node)
    for outputFillType, v9 in pairs(self.spec_pipe.objectsInTriggers) do
      local v10 = self:getFillUnitLastValidFillType(isActiveForInputIgnoreSelection.fillUnitIndex)
      for v14, v15 in ipairs(outputFillType.spec_fillUnit.fillUnits) do
        local v16 = outputFillType:getFillUnitSupportsToolType(v14, ToolType.DISCHARGEABLE)
        local v17 = outputFillType:getFillUnitSupportsFillType(v14, v10)
        if not v17 and v10 ~= FillType.UNKNOWN then
        end
        local v22 = self:getOwnerFarmId()
        local v18 = outputFillType:getFillUnitFreeCapacity(...)
        if not v16 then
          continue
        end
        if not v17 then
          continue
        end
        if not (0 < v18) then
          continue
        end
        local v19 = outputFillType:getFillUnitAutoAimTargetNode(v14)
        local v20 = outputFillType:getFillUnitExactFillRootNode(v14)
        if v19 == nil then
        end
        if not (v19 ~= nil) then
          continue
        end
        local v21 = calcDistanceFrom(isSelected, v19)
        if not (v21 < nearestObjectInTrigger) then
          continue
        end
        local v23 = NetworkUtil.getObjectId(outputFillType)
        dt.nearestObjectInTriggers.objectId = v23
        dt.nearestObjectInTriggers.fillUnitIndex = v14
        break
      end
    end
    return
  end
  v7 = self:getPipeDischargeNodeIndex()
  Logging.xmlWarning(...)
end
function Pipe:updateActionEventText()
  if self.spec_pipe.actionEvents[InputAction.TOGGLE_PIPE] ~= nil then
    if self.spec_pipe.targetState == self.spec_pipe.numStates then
      local isSelected = self:getIsPipeStateChangeAllowed(1)
      -- if not v4 then goto L109 end
      isSelected:setActionEventText(self.spec_pipe.actionEvents[InputAction.TOGGLE_PIPE].actionEventId, self.spec_pipe.texts.pipeIn)
    else
      local v5 = self:getIsPipeStateChangeAllowed(self.spec_pipe.targetState + 1)
      if v5 then
        if 1 < self.spec_pipe.numUnloadingStates and self.spec_pipe.numUnloadingStates ~= self.spec_pipe.numStates then
          local v6 = string.format(" [%d]", self.spec_pipe.targetState + 1 - 1)
          v6 = self:getPipeDischargeNodeIndex(self.spec_pipe.targetState + 1)
          local v7 = self:getDischargeNodeByIndex(v6)
          local outputFillType = self:getFillUnitFillType(v7.fillUnitIndex)
          if outputFillType ~= FillType.UNKNOWN then
            local v9 = v9:getFillTypeByIndex(outputFillType)
            if v9 ~= nil then
              local v10 = string.format(" [%d, %s]", self.spec_pipe.targetState + 1 - 1, v9.title)
            end
          end
        end
        v9 = string.format(dt.texts.pipeOut, v5)
        v6:setActionEventText(...)
      end
    end
    isSelected:setActionEventActive(nearestObjectInTrigger.actionEventId, isActiveForInputIgnoreSelection)
  end
end
function Pipe:getIsDischargeNodeActive(superFunc, dischargeNode)
  local v5 = self:getPipeDischargeNodeIndex()
  if dischargeNode.index == v5 then
    if self.spec_pipe.unloadingStates[self.spec_pipe.currentState] ~= true then
    end
    return true
  end
  return superFunc(self, dischargeNode)
end
function Pipe:getCanBeTurnedOn(superFunc)
  if self.spec_pipe.hasMovablePipe then
    local isActiveForInputIgnoreSelection = next(self.spec_pipe.turnOnAllowedStates)
    if isActiveForInputIgnoreSelection ~= nil then
      for v7, outputFillType in pairs(self.spec_pipe.turnOnAllowedStates) do
        if not (v7 == nearestObjectInTrigger.currentState) then
          continue
        end
        break
      end
      if not isActiveForInputIgnoreSelection then
        return false
      end
    end
  end
  isActiveForInputIgnoreSelection = superFunc(self)
  return isActiveForInputIgnoreSelection
end
function Pipe:getTurnedOnNotAllowedWarning(superFunc)
  if self.spec_pipe.hasMovablePipe then
    local isActiveForInputIgnoreSelection = next(self.spec_pipe.turnOnAllowedStates)
    if isActiveForInputIgnoreSelection ~= nil then
      for v7, outputFillType in pairs(self.spec_pipe.turnOnAllowedStates) do
        if not (v7 == nearestObjectInTrigger.currentState) then
          continue
        end
        break
      end
      if not isActiveForInputIgnoreSelection then
        return nearestObjectInTrigger.turnOnStateWarning
      end
    end
  end
  isActiveForInputIgnoreSelection = superFunc(self)
  return isActiveForInputIgnoreSelection
end
function Pipe:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  if self.spec_pipe.hasMovablePipe then
    if self.spec_pipe.foldMaxState >= self.spec_pipe.currentState then
      -- if v0.spec_pipe.currentState >= v0.spec_pipe.foldMinState then goto L23 end
    end
    return false, isSelected.texts.warningFoldingPipe
  end
  return superFunc(self, direction, onAiTurnOn)
end
function Pipe:handleDischarge(superFunc, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
  if self.spec_pipe.automaticDischarge then
    local outputFillType = self:getPipeDischargeNodeIndex()
    -- if v2.index == v8 then goto L27 end
    superFunc(self, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
    return
  end
  superFunc(self, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
end
function Pipe:handleDischargeRaycast(superFunc, dischargeNode, hitObject, hitShape, hitDistance, hitFillUnitIndex, hitTerrain)
  if self.spec_pipe.automaticDischarge then
    local v10 = self:getIsPowered()
    if v10 then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L42
      v10 = self:getDischargeFillType(dischargeNode)
      local fillTypeIndex = hitObject:getFillUnitAllowsFillType(hitFillUnitIndex, v10)
      if fillTypeIndex then
        local v16 = self:getOwnerFarmId()
        local v12 = hitObject:getFillUnitFreeCapacity(...)
        if 0 < v12 then
          self:setDischargeState(Dischargeable.DISCHARGE_STATE_OBJECT, true)
          -- goto L57  (LOP_JUMP +17)
        end
      end
    else
      v10 = self:getIsPowered()
      if v10 then
        -- if not v0.spec_pipe.toggleableDischargeToGround then goto L56 end
        self:setDischargeState(Dischargeable.DISCHARGE_STATE_GROUND, true)
      else
      end
    end
    if v9 then
      v10 = self:getDischargeState()
      if v10 == Dischargeable.DISCHARGE_STATE_OBJECT then
        self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF, true)
      end
    end
    return
  end
  superFunc(self, dischargeNode, hitObject, hitShape, hitDistance, hitFillUnitIndex, hitTerrain)
end
function Pipe:dischargeToGround(superFunc, dischargeNode, emptyLiters)
  if self.spec_pipe.toggleableDischargeToGround and not self.spec_pipe.dischargeToGroundState then
    local unloadInfo = self:getFillVolumeUnloadInfo(dischargeNode.unloadInfoIndex)
    local outputFillType = self:getOwnerFarmId()
    local fillTypeIndex = self:getFillUnitFillType(dischargeNode.fillUnitIndex)
    self:addFillUnitFillLevel(outputFillType, dischargeNode.fillUnitIndex, -emptyLiters, fillTypeIndex, ToolType.UNDEFINED, unloadInfo)
    if 0 >= emptyLiters then
    end
    if 0 >= emptyLiters then
    end
    return v6, v7, true
  end
  unloadInfo = superFunc(self, dischargeNode, emptyLiters)
  return unloadInfo
end
function Pipe:getCanToggleDischargeToObject(superFunc)
  if self.spec_pipe.automaticDischarge then
    return false
  end
  return superFunc(self)
end
function Pipe:getCanToggleDischargeToGround(superFunc)
  if self.spec_pipe.automaticDischarge and self.spec_pipe.toggleableDischargeToGround then
    return false
  end
  return superFunc(self)
end
function Pipe:getRequiresPower(superFunc)
  if self.spec_pipe.automaticDischarge then
    local v5 = self:getPipeDischargeNodeIndex()
    local isActiveForInputIgnoreSelection = self:getDischargeNodeByIndex(...)
    if isActiveForInputIgnoreSelection ~= nil then
      if self.spec_pipe.isAsyncRaycastActive and isActiveForInputIgnoreSelection.lastDischargeObject ~= nil then
        return true
      end
      if not nearestObjectInTrigger.isAsyncRaycastActive and isActiveForInputIgnoreSelection.dischargeObject ~= nil then
        return true
      end
    end
  end
  if nearestObjectInTrigger.currentState ~= nearestObjectInTrigger.targetState then
    return true
  end
  isActiveForInputIgnoreSelection = superFunc(self)
  return isActiveForInputIgnoreSelection
end
function Pipe.loadMovingToolFromXML(v0, dt, nearestObjectInTrigger, isActiveForInputIgnoreSelection, isSelected)
  local v5 = dt(v0, nearestObjectInTrigger, isActiveForInputIgnoreSelection, isSelected)
  if not v5 then
    return false
  end
  v5 = nearestObjectInTrigger:getValue(isActiveForInputIgnoreSelection .. "#freezingPipeStates", nil, true)
  isSelected.freezingPipeStates = v5
  return true
end
function Pipe:getIsMovingToolActive(superFunc, movingTool)
  if movingTool.freezingPipeStates ~= nil then
    for v7, outputFillType in pairs(movingTool.freezingPipeStates) do
      if isActiveForInputIgnoreSelection.currentState ~= outputFillType and isActiveForInputIgnoreSelection.targetState ~= outputFillType and not (isActiveForInputIgnoreSelection.currentState == 0) then
        continue
      end
      return false
    end
  end
  isSelected = superFunc(self, movingTool)
  return isSelected
end
function Pipe.loadCoverFromXML(v0, dt, nearestObjectInTrigger, isActiveForInputIgnoreSelection, isSelected)
  local v5 = nearestObjectInTrigger:getValue(isActiveForInputIgnoreSelection .. "#minPipeState", 0)
  isSelected.minPipeState = v5
  v5 = nearestObjectInTrigger:getValue(isActiveForInputIgnoreSelection .. "#maxPipeState", math.huge)
  isSelected.maxPipeState = v5
  v5 = dt(v0, nearestObjectInTrigger, isActiveForInputIgnoreSelection, isSelected)
  return v5
end
function Pipe:getIsNextCoverStateAllowed(superFunc, nextState)
  local isActiveForInputIgnoreSelection = superFunc(self, nextState)
  if not isActiveForInputIgnoreSelection then
    return false
  end
  if nextState ~= 0 then
    if self.spec_pipe.currentState >= self.spec_cover.covers[nextState].minPipeState then
      -- if v0.spec_cover.covers[v2].maxPipeState >= v0.spec_pipe.currentState then goto L30 end
    end
    return false
  end
  return true
end
function Pipe:onDeletePipeObject(object)
  if self.spec_pipe.objectsInTriggers[object] ~= nil then
    self.spec_pipe.objectsInTriggers[object] = nil
    self.spec_pipe.numObjectsInTriggers = self.spec_pipe.numObjectsInTriggers - 1
  end
  if nearestObjectInTrigger.unloadTriggersInTriggers[object] ~= nil then
    nearestObjectInTrigger.unloadTriggersInTriggers[object] = nil
    nearestObjectInTrigger.numUnloadTriggersInTriggers = nearestObjectInTrigger.numUnloadTriggersInTriggers - 1
  end
end
function Pipe:getPipeDischargeNodeIndex(state)
  if state == nil then
  end
  if nearestObjectInTrigger.dischargeNodeMapping[state] ~= nil then
    return nearestObjectInTrigger.dischargeNodeMapping[state]
  end
  return nearestObjectInTrigger.dischargeNodeIndex
end
function Pipe:setPipeDischargeToGround(state, noEventSend)
  if state == nil then
  end
  if state ~= isActiveForInputIgnoreSelection.dischargeToGroundState then
    isActiveForInputIgnoreSelection.dischargeToGroundState = state
    if isActiveForInputIgnoreSelection.actionEvents[InputAction.TOGGLE_TIPSTATE_GROUND] ~= nil then
      if state then
        -- if v3.texts.stopTipToGround then goto L34 end
      end
      v5:setActionEventText(v7, isActiveForInputIgnoreSelection.texts.startTipToGround)
    end
    SetPipeDischargeToGroundEvent.sendEvent(self, state, noEventSend)
  end
end
function Pipe.getCanBeSelected(v0, dt)
  return true
end
function Pipe:getIsAIReadyToDrive(superFunc)
  if self.spec_pipe.hasMovablePipe and self.spec_pipe.currentState ~= 1 then
    return false
  end
  return superFunc(self)
end
function Pipe:getIsAIPreparingToDrive(superFunc)
  if self.spec_pipe.hasMovablePipe and self.spec_pipe.currentState ~= self.spec_pipe.targetState then
    return true
  end
  return superFunc(self)
end
function Pipe:onMovingToolChanged(tool, transSpeed, dt)
  for outputFillType, v9 in ipairs(self.spec_pipe.nodes) do
    if not (v9.node == tool.node) then
      continue
    end
    v9.curTranslation = {tool.curTrans[1], tool.curTrans[2], tool.curTrans[3]}
    v9.curRotation = {tool.curRot[1], tool.curRot[2], tool.curRot[3]}
  end
end
function Pipe:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_pipe.actionEvents)
    if isActiveForInputIgnoreSelection and self.spec_pipe.hasMovablePipe then
      local isSelected, v5 = self:addPoweredActionEvent(self.spec_pipe.actionEvents, InputAction.TOGGLE_PIPE, self, Pipe.actionEventTogglePipe, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
      self:updateActionEventText()
      if self.spec_pipe.toggleableDischargeToGround then
        local v6, v7 = self:addActionEvent(self.spec_pipe.actionEvents, InputAction.TOGGLE_TIPSTATE_GROUND, self, Pipe.actionEventToggleDischargeToGround, false, true, false, true, nil)
        v6:setActionEventTextPriority(v7, GS_PRIO_NORMAL)
        if self.spec_pipe.dischargeToGroundState then
          -- if v0.spec_pipe.texts.stopTipToGround then goto L87 end
        end
        v6:setActionEventText(outputFillType, isActiveForInputIgnoreSelection.texts.startTipToGround)
      end
    end
  end
end
function Pipe:onDischargeStateChanged(state)
  if self.isClient then
    local dischargeNode = self:getCurrentDischargeNode()
    if dischargeNode ~= nil then
    end
    local v5 = self:getPipeDischargeNodeIndex()
    if isSelected == v5 then
      if state == Dischargeable.DISCHARGE_STATE_OFF then
        v5:stopAnimations(nearestObjectInTrigger.animationNodes)
        return
      end
      v5:startAnimations(nearestObjectInTrigger.animationNodes)
      local outputFillType = self:getFillUnitLastValidFillType(dischargeNode.fillUnitIndex)
      v5:setFillType(...)
    end
  end
end
function Pipe:onAIImplementPrepare()
  if self.spec_pipe.hasMovablePipe then
    local nearestObjectInTrigger = self:getIsPipeStateChangeAllowed(1)
    if nearestObjectInTrigger then
      self:setPipeState(1)
    end
  end
end
function Pipe:onRootVehicleChanged(dt)
  if self.spec_pipe.hasMovablePipe and 0 < self.spec_pipe.numAutoAimingStates then
    if dt.actionController ~= nil then
      if self.spec_pipe.controlledAction ~= nil then
        isSelected:updateParent(dt.actionController)
        return
      end
      local isSelected, v5 = next(nearestObjectInTrigger.autoAimingStates)
      local v6 = isActiveForInputIgnoreSelection:registerAction("pipe", nil, 2)
      nearestObjectInTrigger.controlledAction = v6
      v6:setCallback(self, Pipe.actionControllerPipeEvent)
      v6:addAIEventListener(self, "onAIFieldWorkerEnd", -1)
      v6:setFinishedFunctions(self, Pipe.getCurrentPipeState, isSelected, 1)
      return
    end
    if nearestObjectInTrigger.controlledAction ~= nil then
      isSelected:remove()
      nearestObjectInTrigger.controlledAction = nil
    end
  end
end
function Pipe:actionControllerPipeEvent(dt)
  if 0 < dt then
    local isActiveForInputIgnoreSelection, isSelected = next(self.spec_pipe.autoAimingStates)
    self:setPipeState(isActiveForInputIgnoreSelection)
  else
    self:setPipeState(1)
  end
  return true
end
function Pipe:actionEventTogglePipe(actionName, inputValue, callbackState, isAnalog)
  if self.spec_pipe.numStates < self.spec_pipe.targetState + 1 then
  end
  local v7 = self:getIsPipeStateChangeAllowed(v6)
  if v7 then
    self:setPipeState(v6)
    return
  end
  if v6 ~= 1 then
    v7 = self:getIsPipeStateChangeAllowed(1)
    if v7 then
      self:setPipeState(1)
    end
  end
end
function Pipe:actionEventToggleDischargeToGround(actionName, inputValue, callbackState, isAnalog)
  self:setPipeDischargeToGround()
end
