-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/PlowRotationEvent.lua")
source("dataS/scripts/vehicles/specializations/events/PlowLimitToFieldEvent.lua")
Plow = {AI_REQUIRED_GROUND_TYPES = {FieldGroundType.STUBBLE_TILLAGE, FieldGroundType.CULTIVATED, FieldGroundType.SEEDBED, FieldGroundType.ROLLED_SEEDBED, FieldGroundType.SOWN, FieldGroundType.DIRECT_SOWN, FieldGroundType.PLANTED, FieldGroundType.RIDGE, FieldGroundType.ROLLER_LINES, FieldGroundType.HARVEST_READY, FieldGroundType.HARVEST_READY_OTHER, FieldGroundType.GRASS, FieldGroundType.GRASS_CUT}, AI_OUTPUT_GROUND_TYPES = {FieldGroundType.PLOWED}}
function Plow.initSpecialization()
  local v3 = v3:getText("configuration_design")
  v0:addConfigurationType("plow", v3, "plow", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  v0:addWorkAreaType("plow", true)
  Vehicle.xmlSchema:setXMLSpecializationType("Plow")
  Plow.registerXMLPaths(Vehicle.xmlSchema, "vehicle.plow")
  Plow.registerXMLPaths(Vehicle.xmlSchema, "vehicle.plow.plowConfigurations.plowConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.plow.plowConfigurations.plowConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#disableOnTurn", "Disable while turning", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#turnAnimLimit", "Turn animation limit", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#turnAnimLimitSide", "Turn animation limit side", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#invertDirectionOnRotation", "Invert direction on rotation", true)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).plow#rotationMax", "Rotation max.")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).plow#turnAnimTime", "Turn animation time")
end
function Plow:registerXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".rotationPart#turnAnimationName", "Turn animation name")
  self:register(XMLValueType.FLOAT, v1 .. ".rotationPart#foldMinLimit", "Fold min. limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".rotationPart#foldMaxLimit", "Fold max. limit", 1)
  self:register(XMLValueType.BOOL, v1 .. ".rotationPart#limitFoldRotationMax", "Block folding if in max state")
  self:register(XMLValueType.FLOAT, v1 .. ".rotationPart#foldRotationMinLimit", "Fold allow if inbetween this limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".rotationPart#foldRotationMaxLimit", "Fold allow if inbetween this limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".rotationPart#rotationFoldMinLimit", "Rotation allow if fold time inbetween this limit", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".rotationPart#rotationFoldMaxLimit", "Rotation allow if fold time inbetween this limit", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".rotationPart#detachMinLimit", "Detach is allowed if turn animation between these values", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".rotationPart#detachMaxLimit", "Detach is allowed if turn animation between these values", 1)
  self:register(XMLValueType.BOOL, v1 .. ".rotationPart#rotationAllowedIfLowered", "Allow plow rotation if lowered", true)
  self:register(XMLValueType.L10N_STRING, v1 .. ".rotationPart#detachWarning", "Warning to be displayed if not in correct turn state for detach", "warning_detachNotAllowedPlowTurn")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".directionNode#node", "Plow direction node")
  self:register(XMLValueType.FLOAT, v1 .. ".ai#centerPosition", "Center position", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. ".ai#rotateToCenterHeadlandPos", "Rotate to center headland position", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. ".ai#rotateCompletelyHeadlandPos", "Rotate completely headland position", 0.5)
  self:register(XMLValueType.BOOL, v1 .. ".rotateLeftToMax#value", "Rotate left to max", true)
  self:register(XMLValueType.BOOL, v1 .. ".onlyActiveWhenLowered#value", "Only active when lowered", true)
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "turn")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "work")
end
function Plow.prerequisitesPresent(specializations)
  return SpecializationUtil.hasSpecialization(WorkArea, specializations)
end
function Plow.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processPlowArea", Plow.processPlowArea)
  SpecializationUtil.registerFunction(vehicleType, "setRotationMax", Plow.setRotationMax)
  SpecializationUtil.registerFunction(vehicleType, "setRotationCenter", Plow.setRotationCenter)
  SpecializationUtil.registerFunction(vehicleType, "setPlowLimitToField", Plow.setPlowLimitToField)
  SpecializationUtil.registerFunction(vehicleType, "getIsPlowRotationAllowed", Plow.getIsPlowRotationAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getCanTogglePlowRotation", Plow.getCanTogglePlowRotation)
  SpecializationUtil.registerFunction(vehicleType, "getPlowLimitToField", Plow.getPlowLimitToField)
  SpecializationUtil.registerFunction(vehicleType, "getPlowForceLimitToField", Plow.getPlowForceLimitToField)
  SpecializationUtil.registerFunction(vehicleType, "setPlowAIRequirements", Plow.setPlowAIRequirements)
end
function Plow.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldAllowed", Plow.getIsFoldAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsFoldMiddleAllowed", Plow.getIsFoldMiddleAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", Plow.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Plow.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSpeedRotatingPartFromXML", Plow.loadSpeedRotatingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSpeedRotatingPartActive", Plow.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getSpeedRotatingPartDirection", Plow.getSpeedRotatingPartDirection)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Plow.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWorkAreaFromXML", Plow.loadWorkAreaFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", Plow.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanAIImplementContinueWork", Plow.getCanAIImplementContinueWork)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIInvertMarkersOnTurn", Plow.getAIInvertMarkersOnTurn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Plow.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "isDetachAllowed", Plow.isDetachAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowsLowering", Plow.getAllowsLowering)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIReadyToDrive", Plow.getIsAIReadyToDrive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAIPreparingToDrive", Plow.getIsAIPreparingToDrive)
end
function Plow.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetach", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onAIImplementStartTurn", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onAIImplementTurnProgress", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onStartAnimation", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onFinishAnimation", Plow)
  SpecializationUtil.registerEventListener(vehicleType, "onRootVehicleChanged", Plow)
end
function Plow:onLoad(savegame)
  local v2 = self:getGroundReferenceNodeFromIndex(1)
  if v2 == nil then
    print("Warning: No ground reference nodes in " .. self.configFileName)
  end
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.rotationPart", "vehicle.plow.rotationPart")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.ploughDirectionNode#index", "vehicle.plow.directionNode#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.rotateLeftToMax#value", "vehicle.plow.rotateLeftToMax#value")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.animTimeCenterPosition#value", "vehicle.plow.ai#centerPosition")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.aiPlough#rotateEarly", "vehicle.plow.ai#rotateCompletelyHeadlandPos")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.onlyActiveWhenLowered#value", "vehicle.plow.onlyActiveWhenLowered#value")
  local v3 = string.format("vehicle.plow.plowConfigurations.plowConfiguration(%d)", (self.configurations.plow or 1) - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.plow.plowConfigurations.plowConfiguration", self.configurations.plow or 1, self.components, self)
  local v4 = v4:hasProperty(v3)
  if not v4 then
  end
  self.spec_plow.rotationPart = {}
  local v6 = v6:getValue(v3 .. ".rotationPart#turnAnimationName")
  self.spec_plow.rotationPart.turnAnimation = v6
  v6 = v6:getValue(v3 .. ".rotationPart#foldMinLimit", 0)
  self.spec_plow.rotationPart.foldMinLimit = v6
  v6 = v6:getValue(v3 .. ".rotationPart#foldMaxLimit", 1)
  self.spec_plow.rotationPart.foldMaxLimit = v6
  v6 = v6:getValue(v3 .. ".rotationPart#limitFoldRotationMax")
  self.spec_plow.rotationPart.limitFoldRotationMax = v6
  v6 = v6:getValue(v3 .. ".rotationPart#foldRotationMinLimit", 0)
  self.spec_plow.rotationPart.foldRotationMinLimit = v6
  v6 = v6:getValue(v3 .. ".rotationPart#foldRotationMaxLimit", 1)
  self.spec_plow.rotationPart.foldRotationMaxLimit = v6
  v6 = v6:getValue(v3 .. ".rotationPart#rotationFoldMinLimit", 0)
  self.spec_plow.rotationPart.rotationFoldMinLimit = v6
  v6 = v6:getValue(v3 .. ".rotationPart#rotationFoldMaxLimit", 1)
  self.spec_plow.rotationPart.rotationFoldMaxLimit = v6
  v6 = v6:getValue(v3 .. ".rotationPart#detachMinLimit", 0)
  self.spec_plow.rotationPart.detachMinLimit = v6
  v6 = v6:getValue(v3 .. ".rotationPart#detachMaxLimit", 1)
  self.spec_plow.rotationPart.detachMaxLimit = v6
  v6 = v6:getValue(v3 .. ".rotationPart#rotationAllowedIfLowered", true)
  self.spec_plow.rotationPart.rotationAllowedIfLowered = v6
  local v7 = v7:getValue(v3 .. ".rotationPart#detachWarning", "warning_detachNotAllowedPlowTurn", self.customEnvironment, false)
  v6 = string.format(...)
  self.spec_plow.rotationPart.detachWarning = v6
  local v5 = v5:getValue(v3 .. ".directionNode#node", self.components[1].node, self.components, self.i3dMappings)
  self.spec_plow.directionNode = v5
  self:setPlowAIRequirements()
  self.spec_plow.ai = {}
  v6 = v6:getValue(v3 .. ".ai#centerPosition", 0.5)
  self.spec_plow.ai.centerPosition = v6
  v6 = v6:getValue(v3 .. ".ai#rotateToCenterHeadlandPos", 0.5)
  self.spec_plow.ai.rotateToCenterHeadlandPos = v6
  v6 = v6:getValue(v3 .. ".ai#rotateCompletelyHeadlandPos", 0.5)
  self.spec_plow.ai.rotateCompletelyHeadlandPos = v6
  self.spec_plow.ai.lastHeadlandPosition = 0
  v5 = v5:getValue(v3 .. ".rotateLeftToMax#value", true)
  self.spec_plow.rotateLeftToMax = v5
  v5 = v5:getValue(v3 .. ".onlyActiveWhenLowered#value", true)
  self.spec_plow.onlyActiveWhenLowered = v5
  self.spec_plow.rotationMax = false
  self.spec_plow.startActivationTimeout = 2000
  self.spec_plow.startActivationTime = 0
  self.spec_plow.lastPlowArea = 0
  self.spec_plow.limitToField = true
  self.spec_plow.forceLimitToField = false
  self.spec_plow.wasTurnAnimationStopped = false
  self.spec_plow.isWorking = false
  if self.isClient then
    self.spec_plow.samples = {}
    v6 = v6:loadSampleFromXML(self.xmlFile, v3 .. ".sounds", "turn", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_plow.samples.turn = v6
    v6 = v6:loadSampleFromXML(self.xmlFile, v3 .. ".sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_plow.samples.work = v6
    self.spec_plow.isWorkSamplePlaying = false
  end
  v4.texts = {}
  v6 = v6:getText("warning_foldingNotWhileLowered")
  v4.texts.warningFoldingLowered = v6
  v6 = v6:getText("warning_foldingNotWhilePlowTurned")
  v4.texts.warningFoldingPlowTurned = v6
  v6 = v6:getText("action_turnPlow")
  v4.texts.turnPlow = v6
  v6 = v6:getText("action_allowCreateFields")
  v4.texts.allowCreateFields = v6
  v6 = v6:getText("action_limitToFields")
  v4.texts.limitToFields = v6
  v4.workAreaParameters = {}
  v6 = self:getPlowLimitToField()
  v4.workAreaParameters.limitToField = v6
  v6 = self:getPlowForceLimitToField()
  v4.workAreaParameters.forceLimitToField = v6
  v4.workAreaParameters.angle = 0
  v4.workAreaParameters.lastChangedArea = 0
  v4.workAreaParameters.lastStatsArea = 0
  v4.workAreaParameters.lastTotalArea = 0
  if not self.isClient then
    SpecializationUtil.removeEventListener(self, "onUpdate", Plow)
  end
end
function Plow:onPostLoad(savegame)
  if savegame ~= nil and not savegame.resetVehicles then
    local v2 = v2:getValue(savegame.key .. ".plow#rotationMax")
    if v2 ~= nil then
      local v3 = self:getIsPlowRotationAllowed()
      if v3 then
        v3 = v3:getValue(savegame.key .. ".plow#turnAnimTime")
        self:setRotationMax(v2, true, v3)
        if self.updateCylinderedInitial ~= nil then
          self:updateCylinderedInitial(false)
        end
      end
    end
  end
end
function Plow:onDelete()
  v2:deleteSamples(self.spec_plow.samples)
end
function Plow:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#rotationMax", self.spec_plow.rotationMax)
  if self.spec_plow.rotationPart.turnAnimation ~= nil and self.playAnimation ~= nil then
    local v5 = self:getAnimationTime(self.spec_plow.rotationPart.turnAnimation)
    xmlFile:setValue(key .. "#turnAnimTime", v5)
  end
end
function Plow:onReadStream(streamId, connection)
  local rotationMax = streamReadBool(streamId)
  if self.spec_plow.rotationPart.turnAnimation ~= nil and self.playAnimation ~= nil then
    local v6 = streamReadFloat32(streamId)
  end
  self:setRotationMax(rotationMax, true, v5)
  if self.updateCylinderedInitial ~= nil then
    self:updateCylinderedInitial(false)
  end
end
function Plow:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_plow.rotationMax)
  if self.spec_plow.rotationPart.turnAnimation ~= nil and self.playAnimation ~= nil then
    local v4 = self:getAnimationTime(self.spec_plow.rotationPart.turnAnimation)
    streamWriteFloat32(streamId, v4)
  end
end
function Plow:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    if self.spec_plow.actionEvents[InputAction.IMPLEMENT_EXTRA3] ~= nil then
      local v7 = self:getPlowForceLimitToField()
      if not v7 then
        local v10 = self:getOwner()
        v7 = v7:getHasPlayerPermission(...)
        -- if not v7 then goto L62 end
        v7:setActionEventActive(self.spec_plow.actionEvents[InputAction.IMPLEMENT_EXTRA3].actionEventId, true)
        v7 = self:getPlowLimitToField()
        if v7 then
          v7:setActionEventText(self.spec_plow.actionEvents[InputAction.IMPLEMENT_EXTRA3].actionEventId, self.spec_plow.texts.allowCreateFields)
          -- goto L70  (LOP_JUMP +20)
        end
        v7:setActionEventText(v6.actionEventId, v5.texts.limitToFields)
      else
        v7:setActionEventActive(self.spec_plow.actionEvents[InputAction.IMPLEMENT_EXTRA3].actionEventId, false)
      end
    end
    if v5.rotationPart.turnAnimation ~= nil and v5.actionEvents[InputAction.IMPLEMENT_EXTRA] ~= nil then
      v10 = self:getCanTogglePlowRotation()
      v7:setActionEventActive(...)
    end
  end
end
function Plow:processPlowArea(workArea, dt)
  local v4, v5, v6 = getWorldTranslation(workArea.start)
  local v7, v8, v9 = getWorldTranslation(workArea.width)
  local v10, v11, v12 = getWorldTranslation(workArea.height)
  if self.tailwaterDepth < 0.1 then
    local v16, v17 = FSDensityMapUtil.updatePlowArea(v4, v6, v7, v9, v10, v12, not self.spec_plow.workAreaParameters.limitToField, self.spec_plow.workAreaParameters.limitFruitDestructionToField, self.spec_plow.workAreaParameters.angle)
    v16 = FSDensityMapUtil.updateVineCultivatorArea(v4, v6, v7, v9, v10, v12)
  end
  v13.lastChangedArea = v13.lastChangedArea + v14
  v13.lastStatsArea = v13.lastStatsArea + v14
  v13.lastTotalArea = v13.lastTotalArea + v15
  FSDensityMapUtil.eraseTireTrack(v4, v6, v7, v9, v10, v12)
  v17 = self:getLastSpeed()
  if 0.5 >= v17 then
  end
  v3.isWorking = true
  return v14, v15
end
function Plow:setRotationMax(rotationMax, noEventSend, turnAnimationTime)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L35
  end
  if g_server ~= nil then
    local v6 = PlowRotationEvent.new(self, rotationMax)
    v4:broadcastEvent(v6, nil, nil, self)
  else
    local v4 = v4:getServerConnection()
    v6 = PlowRotationEvent.new(self, rotationMax)
    v4:sendEvent(...)
  end
  self.spec_plow.rotationMax = rotationMax
  if self.spec_plow.rotationPart.turnAnimation ~= nil then
    if turnAnimationTime == nil then
      local v5 = self:getAnimationTime(self.spec_plow.rotationPart.turnAnimation)
      if self.spec_plow.rotationMax then
        self:playAnimation(self.spec_plow.rotationPart.turnAnimation, 1, v5, true)
        return
      end
      self:playAnimation(v4.rotationPart.turnAnimation, -1, v5, true)
      return
    end
    self:setAnimationTime(v4.rotationPart.turnAnimation, turnAnimationTime, true)
  end
end
function Plow:setRotationCenter()
  if self.spec_plow.rotationPart.turnAnimation ~= nil then
    self:setAnimationStopTime(self.spec_plow.rotationPart.turnAnimation, self.spec_plow.ai.centerPosition)
    local v2 = self:getAnimationTime(self.spec_plow.rotationPart.turnAnimation)
    if v2 < self.spec_plow.ai.centerPosition then
      self:playAnimation(self.spec_plow.rotationPart.turnAnimation, 1, v2, true)
      return
    end
    if v1.ai.centerPosition < v2 then
      self:playAnimation(v1.rotationPart.turnAnimation, -1, v2, true)
    end
  end
end
function Plow:setPlowLimitToField(plowLimitToField, noEventSend)
  if self.spec_plow.limitToField ~= plowLimitToField then
    if noEventSend ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L41
    end
    if g_server ~= nil then
      local v6 = PlowLimitToFieldEvent.new(self, plowLimitToField)
      v4:broadcastEvent(v6, nil, nil, self)
    else
      local v4 = v4:getServerConnection()
      v6 = PlowLimitToFieldEvent.new(self, plowLimitToField)
      v4:sendEvent(...)
    end
    v3.limitToField = plowLimitToField
    if v3.actionEvents[InputAction.IMPLEMENT_EXTRA3] ~= nil then
      if v3.limitToField then
      else
      end
      v6:setActionEventText(v4.actionEventId, v5)
    end
  end
end
function Plow:getIsPlowRotationAllowed()
  if self.getFoldAnimTime ~= nil then
    local foldAnimTime = self:getFoldAnimTime()
    if self.spec_plow.rotationPart.rotationFoldMaxLimit >= foldAnimTime then
      -- if v2 >= v0.spec_plow.rotationPart.rotationFoldMinLimit then goto L23 end
    end
    return false
  end
  return true
end
function Plow:getCanTogglePlowRotation()
  local v2 = self:getIsPlowRotationAllowed()
  if not v2 then
    return false
  end
  if not v1.rotationPart.rotationAllowedIfLowered and self.getIsLowered ~= nil then
    v2 = self:getIsLowered()
    if v2 then
      return false
    end
  end
  v2 = self:getIsPowered()
  if not v2 then
    return false
  end
  return true
end
function Plow:getPlowLimitToField()
  return self.spec_plow.limitToField
end
function Plow:getPlowForceLimitToField()
  if not self.spec_plow.forceLimitToField then
  end
  return v1
end
function Plow:setPlowAIRequirements(excludedGroundTypes)
  if self.clearAITerrainDetailRequiredRange ~= nil then
    self:clearAITerrainDetailRequiredRange()
    if excludedGroundTypes ~= nil then
      local v5 = unpack(excludedGroundTypes)
      self:addAIGroundTypeRequirements(...)
      return
    end
    self:addAIGroundTypeRequirements(Plow.AI_REQUIRED_GROUND_TYPES)
  end
end
function Plow:getIsFoldAllowed(superFunc, direction, onAiTurnOn)
  if self.spec_plow.rotationPart.limitFoldRotationMax ~= nil and self.spec_plow.rotationPart.limitFoldRotationMax == self.spec_plow.rotationMax then
    return false, self.spec_plow.texts.warningFoldingPlowTurned
  end
  if v4.rotationPart.turnAnimation ~= nil and self.getAnimationTime ~= nil then
    local v5 = self:getAnimationTime(v4.rotationPart.turnAnimation)
    if v4.rotationPart.foldRotationMaxLimit >= v5 then
      -- if v5 >= v4.rotationPart.foldRotationMinLimit then goto L57 end
    end
    return false, v4.texts.warningFoldingPlowTurned
  end
  if not v4.rotationPart.rotationAllowedIfLowered and self.getIsLowered ~= nil then
    v5 = self:getIsLowered()
    if v5 then
      return false, v4.texts.warningFoldingLowered
    end
  end
  v5 = superFunc(self, direction, onAiTurnOn)
  return v5
end
function Plow:getIsFoldMiddleAllowed(superFunc)
  if self.spec_plow.rotationPart.limitFoldRotationMax ~= nil and self.spec_plow.rotationPart.limitFoldRotationMax == self.spec_plow.rotationMax then
    return false
  end
  if v2.rotationPart.turnAnimation ~= nil and self.getAnimationTime ~= nil then
    local v3 = self:getAnimationTime(v2.rotationPart.turnAnimation)
    if v2.rotationPart.foldRotationMaxLimit >= v3 then
      -- if v3 >= v2.rotationPart.foldRotationMinLimit then goto L49 end
    end
    return false
  end
  v3 = superFunc(self)
  return v3
end
function Plow:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_plow.isWorking then
    local v6 = self:getWorkDirtMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function Plow:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_plow.isWorking then
    local v6 = self:getWorkWearMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function Plow.loadSpeedRotatingPartFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  v5 = v3:getValue(v4 .. "#disableOnTurn", true)
  v2.disableOnTurn = v5
  v5 = v3:getValue(v4 .. "#turnAnimLimit", 0)
  v2.turnAnimLimit = v5
  v5 = v3:getValue(v4 .. "#turnAnimLimitSide", 0)
  v2.turnAnimLimitSide = v5
  v5 = v3:getValue(v4 .. "#invertDirectionOnRotation", true)
  v2.invertDirectionOnRotation = v5
  return true
end
function Plow:getIsSpeedRotatingPartActive(superFunc, speedRotatingPart)
  if self.spec_plow.rotationPart.turnAnimation ~= nil and speedRotatingPart.disableOnTurn then
    local v4 = self:getAnimationTime(self.spec_plow.rotationPart.turnAnimation)
    if v4 ~= nil then
      if speedRotatingPart.turnAnimLimitSide < 0 then
        if v4 > speedRotatingPart.turnAnimLimit then
        end
      elseif 0 < speedRotatingPart.turnAnimLimitSide then
        if 1 - v4 > speedRotatingPart.turnAnimLimit then
        end
      else
        if v4 > speedRotatingPart.turnAnimLimit and 1 - v4 > speedRotatingPart.turnAnimLimit then
        end
      end
      if not v5 then
        return false
      end
    end
  end
  v4 = superFunc(self, speedRotatingPart)
  return v4
end
function Plow:getSpeedRotatingPartDirection(superFunc, speedRotatingPart)
  if self.spec_plow.rotationPart.turnAnimation ~= nil then
    local v4 = self:getAnimationTime(self.spec_plow.rotationPart.turnAnimation)
    if 0.5 < v4 and speedRotatingPart.invertDirectionOnRotation then
      return -1
    end
  end
  v4 = superFunc(self, speedRotatingPart)
  return v4
end
function Plow:doCheckSpeedLimit(superFunc)
  local speedRotatingPart = superFunc(self)
  if not speedRotatingPart and self.spec_plow.onlyActiveWhenLowered then
    speedRotatingPart = self:getIsImplementChainLowered()
  end
  return speedRotatingPart
end
function Plow.loadWorkAreaFromXML(v0, superFunc, speedRotatingPart, v3, v4)
  local v5 = superFunc(v0, speedRotatingPart, v3, v4)
  if speedRotatingPart["type"] == WorkAreaType.DEFAULT then
    speedRotatingPart["type"] = WorkAreaType.PLOW
  end
  return v5
end
function Plow.getDefaultSpeedLimit()
  return 15
end
function Plow:getIsWorkAreaActive(superFunc, workArea)
  if workArea["type"] == WorkAreaType.PLOW then
    if g_currentMission.time < self.spec_plow.startActivationTime then
      return false
    end
    if v3.onlyActiveWhenLowered and self.getIsLowered ~= nil then
      local v4 = self:getIsLowered(false)
      if not v4 then
        return false
      end
    end
  end
  return superFunc(self, workArea)
end
function Plow:getCanAIImplementContinueWork(superFunc)
  local speedRotatingPart, v3, v4 = superFunc(self)
  if not speedRotatingPart then
    return false, v3, v4
  end
  local v6 = self:getIsAnimationPlaying(self.spec_plow.rotationPart.turnAnimation)
  return not v6
end
function Plow:getAIInvertMarkersOnTurn(superFunc, turnLeft)
  if self.spec_plow.rotationPart.turnAnimation ~= nil then
    if turnLeft then
      if self.spec_plow.rotationMax ~= self.spec_plow.rotateLeftToMax then
      end
      return true
    end
    if v3.rotationMax == v3.rotateLeftToMax then
    end
    return true
  end
  return false
end
function Plow.getCanBeSelected(v0, superFunc)
  return true
end
function Plow:isDetachAllowed(superFunc)
  local v3 = self:getIsAnimationPlaying(self.spec_plow.rotationPart.turnAnimation)
  if v3 then
    return false
  end
  if speedRotatingPart.rotationPart.turnAnimation ~= nil then
    v3 = self:getAnimationTime(speedRotatingPart.rotationPart.turnAnimation)
    if v3 >= speedRotatingPart.rotationPart.detachMinLimit then
      -- if v2.rotationPart.detachMaxLimit >= v3 then goto L44 end
    end
    return false, speedRotatingPart.rotationPart.detachWarning, true
  end
  v3 = superFunc(self)
  return v3
end
function Plow:getAllowsLowering(superFunc)
  local v3 = self:getIsAnimationPlaying(self.spec_plow.rotationPart.turnAnimation)
  if v3 then
    return false
  end
  v3 = superFunc(self)
  return v3
end
function Plow:getIsAIReadyToDrive(superFunc)
  if not self.spec_plow.rotationMax then
    local v3 = self:getIsAnimationPlaying(self.spec_plow.rotationPart.turnAnimation)
    -- if not v3 then goto L15 end
  end
  return false
  v3 = superFunc(self)
  return v3
end
function Plow:getIsAIPreparingToDrive(superFunc)
  local v3 = self:getIsAnimationPlaying(self.spec_plow.rotationPart.turnAnimation)
  if v3 then
    return true
  end
  v3 = superFunc(self)
  return v3
end
function Plow:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_plow.actionEvents)
    if isActiveForInputIgnoreSelection then
      if self.spec_plow.rotationPart.turnAnimation ~= nil then
        local v4, v5 = self:addPoweredActionEvent(self.spec_plow.actionEvents, InputAction.IMPLEMENT_EXTRA, self, Plow.actionEventTurn, false, true, false, true, nil)
        v6:setActionEventTextPriority(v5, GS_PRIO_HIGH)
        v6:setActionEventText(v5, self.spec_plow.texts.turnPlow)
      end
      v4, v5 = self:addActionEvent(v3.actionEvents, InputAction.IMPLEMENT_EXTRA3, self, Plow.actionEventLimitToField, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
    end
  end
end
function Plow:onStartWorkAreaProcessing(dt)
  self.spec_plow.isWorking = false
  local v3 = self:getPlowLimitToField()
  local v8 = self:getOwner()
  local v5 = v5:getHasPlayerPermission("createFields", v8, nil, true)
  if not v5 then
  end
  local v5, v6, v7 = localDirectionToWorld(speedRotatingPart.directionNode, 0, 0, 1)
  local v9 = MathUtil.getYRotationFromDirection(v5, v7)
  local v10 = v10:getGroundAngleMaxValue()
  v8 = FSDensityMapUtil.convertToDensityMapAngle(...)
  speedRotatingPart.workAreaParameters.limitToField = v3
  speedRotatingPart.workAreaParameters.limitFruitDestructionToField = v4
  speedRotatingPart.workAreaParameters.angle = v8
  speedRotatingPart.workAreaParameters.lastChangedArea = 0
  speedRotatingPart.workAreaParameters.lastStatsArea = 0
  speedRotatingPart.workAreaParameters.lastTotalArea = 0
end
function Plow:onEndWorkAreaProcessing(dt)
  if self.isServer then
    local v3 = self:getLastTouchedFarmlandFarmId()
    if 0 < self.spec_plow.workAreaParameters.lastStatsArea then
      local v7 = v7:getFruitPixelsToSqm()
      local v5 = MathUtil.areaToHa(...)
      v6:updateFarmStats(v3, "plowedHectares", v5)
      self:updateLastWorkedArea(self.spec_plow.workAreaParameters.lastStatsArea)
    end
    if speedRotatingPart.isWorking then
      v5:updateFarmStats(v3, "plowedTime", dt / 60000)
    end
  end
  if self.isClient then
    if speedRotatingPart.isWorking then
      -- if v2.isWorkSamplePlaying then goto L84 end
      v3:playSample(speedRotatingPart.samples.work)
      speedRotatingPart.isWorkSamplePlaying = true
      return
    end
    if speedRotatingPart.isWorkSamplePlaying then
      v3:stopSample(speedRotatingPart.samples.work)
      speedRotatingPart.isWorkSamplePlaying = false
    end
  end
end
function Plow:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  self.spec_plow.startActivationTime = g_currentMission.time + self.spec_plow.startActivationTimeout
  if self.spec_plow.wasTurnAnimationStopped then
    if not self.spec_plow.rotationMax then
    end
    local v10 = self:getAnimationTime(v4.rotationPart.turnAnimation)
    self:playAnimation(v4.rotationPart.turnAnimation, v5, v10, true)
    v4.wasTurnAnimationStopped = false
  end
end
function Plow:onPreDetach(attacherVehicle, implement)
  self.spec_plow.limitToField = true
  local v4 = self:getIsAnimationPlaying(self.spec_plow.rotationPart.turnAnimation)
  if v4 then
    self:stopAnimation(self.spec_plow.rotationPart.turnAnimation, true)
    self.spec_plow.wasTurnAnimationStopped = true
  end
end
function Plow:onDeactivate()
  if self.isClient then
    speedRotatingPart:stopSamples(self.spec_plow.samples)
    self.spec_plow.isWorkSamplePlaying = false
  end
end
function Plow:onAIImplementStartTurn()
  self.spec_plow.ai.lastHeadlandPosition = 0
end
function Plow:onAIImplementTurnProgress(progress, left)
  if self.spec_plow.ai.lastHeadlandPosition < self.spec_plow.ai.rotateToCenterHeadlandPos then
    -- if v0.spec_plow.ai.rotateToCenterHeadlandPos >= v1 then goto L28 end
    -- if v1 >= v0.spec_plow.ai.rotateCompletelyHeadlandPos then goto L28 end
    self:setRotationCenter()
  elseif self.spec_plow.ai.lastHeadlandPosition < self.spec_plow.ai.rotateCompletelyHeadlandPos and self.spec_plow.ai.rotateCompletelyHeadlandPos < progress then
    self:setRotationMax(left)
  end
  v3.ai.lastHeadlandPosition = progress
end
function Plow:onStartAnimation(animName)
  if animName == self.spec_plow.rotationPart.turnAnimation then
    v3:playSample(self.spec_plow.samples.turn)
  end
end
function Plow:onFinishAnimation(animName)
  if animName == self.spec_plow.rotationPart.turnAnimation then
    v3:stopSample(self.spec_plow.samples.turn)
  end
end
function Plow:onRootVehicleChanged(rootVehicle)
  if self.spec_foldable ~= nil and 0 < #self.spec_foldable.foldingParts then
    if rootVehicle.actionController ~= nil then
      if self.spec_plow.controlledActionRotateBack ~= nil then
        v5:updateParent(rootVehicle.actionController)
        return
      end
      local v5 = v4:registerAction("rotateBackPlow", nil, 3)
      left.controlledActionRotateBack = v5
      v5:setCallback(self, Plow.actionControllerRotateBackEvent)
      v5:addAIEventListener(self, "onAIImplementPrepare", -1, true)
    elseif self.spec_plow.controlledActionRotateBack ~= nil then
      v5:remove()
      self.spec_plow.controlledActionRotateBack = nil
    end
  end
  if rootVehicle.actionController ~= nil then
    if left.controlledActionRotate ~= nil then
      v5:updateParent(rootVehicle.actionController)
      return
    end
    v5 = v4:registerAction("rotatePlow", nil, 3)
    left.controlledActionRotate = v5
    v5:setCallback(self, Plow.actionControllerRotateEvent)
    v5:setFinishedFunctions(self, function(self)
      return rootVehicle:getIsAnimationPlaying(u1.rotationPart.turnAnimation)
    end, false, false)
    v5:addAIEventListener(self, "onAIImplementStart", 1, true)
    v5:setResetOnDeactivation(false)
    return
  end
  if left.controlledActionRotate ~= nil then
    v5:remove()
    left.controlledActionRotate = nil
  end
end
function Plow:actionEventTurn(actionName, inputValue, callbackState, isAnalog)
  if self.spec_plow.rotationPart.turnAnimation ~= nil then
    local v6 = self:getCanTogglePlowRotation()
    if v6 then
      self:setRotationMax(not self.spec_plow.rotationMax)
    end
  end
end
function Plow:actionEventLimitToField(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getPlowForceLimitToField()
  if not v6 then
    self:setPlowLimitToField(not self.spec_plow.limitToField)
  end
end
function Plow:actionControllerRotateBackEvent(rootVehicle, left)
  if left then
    if self.spec_plow.rotationPart.turnAnimation ~= nil then
      local v4 = self:getCanTogglePlowRotation()
      if v4 and self.spec_plow.rotationMax then
        self:setRotationMax(false)
      end
    end
    return true
  end
  return false
end
function Plow:actionControllerRotateEvent(rootVehicle, left)
  if self.spec_plow.rotationPart.turnAnimation ~= nil then
    local v4 = self:getCanTogglePlowRotation()
    if v4 then
      if rootVehicle < 0 then
        self:setRotationMax(not self.spec_plow.rotationMax)
      else
        v4 = self:getIsAnimationPlaying(self.spec_plow.rotationPart.turnAnimation)
        if not v4 then
          v4 = self:getAnimationTime(self.spec_plow.rotationPart.turnAnimation)
          if 0 < v4 and v4 < 1 then
            self:setRotationMax(self.spec_plow.rotationMax)
          end
        end
      end
    end
  end
  return true
end
