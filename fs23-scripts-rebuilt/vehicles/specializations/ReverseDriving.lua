-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/ReverseDrivingSetStateEvent.lua")
ReverseDriving = {}
function ReverseDriving.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Drivable, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Enterable, v0)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
    end
  end
  return v1
end
function ReverseDriving.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("ReverseDriving")
  IKUtil.registerIKChainTargetsXMLPaths(Vehicle.xmlSchema, "vehicle.reverseDriving")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.reverseDriving.steeringWheel#node", "Spawn place node")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.reverseDriving.steeringWheel#indoorRotation", "Indoor rotation", "vehicle.drivable.steeringWheel#indoorRotation")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.reverseDriving.steeringWheel#outdoorRotation", "Outdoor rotation", "vehicle.drivable.steeringWheel#outdoorRotation")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.reverseDriving#animationName", "Animation name", "reverseDriving")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.reverseDriving#hideCharacterOnChange", "Hide the chracter while chaning the direction", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.reverseDriving#inverseTransmission", "Inverse the transmission gear ratio when direction has changed", false)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.reverseDriving#disablingAttacherJointIndices", "Attacher joint indices which are disabling the reverse driving")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.reverseDriving.ai#directionNode", "Direction Node while in reverse driving mode")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.reverseDriving.ai#steeringNode", "Steering Node while in reverse driving mode")
  AIImplement.registerAICollisionTriggerXMLPaths(Vehicle.xmlSchema, "vehicle.reverseDriving.ai")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Dashboard.GROUP_XML_KEY .. "#isReverseDriving", "Is Reverse driving")
  -- TODO: structure LOP_FORNPREP (pc 99, target 113)
  Vehicle.xmlSchema:register(XMLValueType.INT, Lights.ADDITIONAL_LIGHT_ATTRIBUTES_KEYS[1] .. "#enableDirection", "Light is enabled when driving into this direction [-1, 1]")
  -- TODO: structure LOP_FORNLOOP (pc 112, target 100)
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).reverseDriving#isActive", "Reverse driving is active")
end
function ReverseDriving.postInitSpecialization()
  local v2 = v2:getConfigurations()
  for v4, v5 in pairs(...) do
    local v6 = v6:getConfigurationAttribute(v4, "xmlKey")
    if v6 ~= nil then
    else
    end
    local v7 = string.format("vehicle%s.%sConfigurations", v6, v4)
    local v8 = string.format("%s.%sConfiguration(?)", v7, v4)
    v0:setXMLSharedRegistration("configReverseDriving", v8)
    v0:register(XMLValueType.BOOL, v8 .. ".reverseDriving#isAllowed", "Reverse driving is allowed while this configuration is equipped", true)
    v0:setXMLSharedRegistration()
  end
end
function ReverseDriving.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onStartReverseDirectionChange")
  SpecializationUtil.registerEvent(v0, "onReverseDirectionChanged")
end
function ReverseDriving.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "reverseDirectionChanged", ReverseDriving.reverseDirectionChanged)
  SpecializationUtil.registerFunction(vehicleType, "setIsReverseDriving", ReverseDriving.setIsReverseDriving)
  SpecializationUtil.registerFunction(vehicleType, "getIsReverseDrivingAllowed", ReverseDriving.getIsReverseDrivingAllowed)
end
function ReverseDriving.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateSteeringWheel", ReverseDriving.updateSteeringWheel)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getSteeringDirection", ReverseDriving.getSteeringDirection)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowCharacterVisibilityUpdate", ReverseDriving.getAllowCharacterVisibilityUpdate)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanStartAIVehicle", ReverseDriving.getCanStartAIVehicle)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadDashboardGroupFromXML", ReverseDriving.loadDashboardGroupFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDashboardGroupActive", ReverseDriving.getIsDashboardGroupActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", ReverseDriving.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadAdditionalLightAttributesFromXML", ReverseDriving.loadAdditionalLightAttributesFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsLightActive", ReverseDriving.getIsLightActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIDirectionNode", ReverseDriving.getAIDirectionNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAISteeringNode", ReverseDriving.getAISteeringNode)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIImplementCollisionTrigger", ReverseDriving.getAIImplementCollisionTrigger)
end
function ReverseDriving.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ReverseDriving)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", ReverseDriving)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", ReverseDriving)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", ReverseDriving)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", ReverseDriving)
  SpecializationUtil.registerEventListener(vehicleType, "onVehicleCharacterChanged", ReverseDriving)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", ReverseDriving)
end
function ReverseDriving:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.reverseDriving.steering#reversedIndex", "vehicle.reverseDriving.steeringWheel#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.reverseDriving.steering#reversedNode", "vehicle.reverseDriving.steeringWheel#node")
  self.spec_reverseDriving.reversedCharacterTargets = {}
  IKUtil.loadIKChainTargets(self.xmlFile, "vehicle.reverseDriving", self.components, self.spec_reverseDriving.reversedCharacterTargets, self.i3dMappings)
  local v3 = v3:getValue("vehicle.reverseDriving.steeringWheel#node", nil, self.components, self.i3dMappings)
  if v3 ~= nil then
    self.spec_reverseDriving.steeringWheel = {node = v3}
    local v4, v5, v6 = getRotation(self.spec_reverseDriving.steeringWheel.node)
    self.spec_reverseDriving.steeringWheel.lastRotation = v5
    local v11 = v11:getValue("vehicle.drivable.steeringWheel#indoorRotation", 0)
    local v8 = v8:getValue(...)
    self.spec_reverseDriving.steeringWheel.indoorRotation = v8
    v11 = v11:getValue("vehicle.drivable.steeringWheel#outdoorRotation", 0)
    v8 = v8:getValue(...)
    self.spec_reverseDriving.steeringWheel.outdoorRotation = v8
  end
  v4 = v4:getValue("vehicle.reverseDriving#animationName", "reverseDriving")
  v2.reverseDrivingAnimation = v4
  v4 = v4:getValue("vehicle.reverseDriving#hideCharacterOnChange", true)
  v2.hideCharacterOnChange = v4
  v4 = v4:getValue("vehicle.reverseDriving#inverseTransmission", false)
  v2.inverseTransmission = v4
  v4 = v4:getValue("vehicle.reverseDriving#disablingAttacherJointIndices", nil, true)
  v2.disablingAttacherJointIndices = v4
  v4 = v4:getValue("vehicle.reverseDriving.ai#directionNode", nil, self.components, self.i3dMappings)
  v2.aiDirectionNode = v4
  v4 = v4:getValue("vehicle.reverseDriving.ai#steeringNode", nil, self.components, self.i3dMappings)
  v2.aiSteeringNode = v4
  if self.loadAICollisionTriggerFromXML ~= nil then
    v4 = self:loadAICollisionTriggerFromXML(self.xmlFile, "vehicle.reverseDriving.ai")
    v2.aiCollisionTrigger = v4
  end
  v4 = self:getAnimationExists(v2.reverseDrivingAnimation)
  v2.hasReverseDriving = v4
  for v7, v8 in pairs(self.configurations) do
    local v9 = v9:getConfigurationAttribute(v7, "xmlKey")
    if v9 ~= nil then
    else
    end
    local v10 = string.format("vehicle%s.%sConfigurations.%sConfiguration(%d).reverseDriving", v9, v7, v7, v8 - 1)
    v11 = v11:getValue(v10 .. "#isAllowed", true)
    if not not v11 then
      continue
    end
    v2.hasReverseDriving = false
  end
  v2.isChangingDirection = false
  v2.isReverseDriving = false
  v2.smoothReverserDirection = 1
  if not v2.hasReverseDriving then
    SpecializationUtil.removeEventListener(self, "onPostLoad", ReverseDriving)
    SpecializationUtil.removeEventListener(self, "onReadStream", ReverseDriving)
    SpecializationUtil.removeEventListener(self, "onWriteStream", ReverseDriving)
    SpecializationUtil.removeEventListener(self, "onUpdate", ReverseDriving)
    SpecializationUtil.removeEventListener(self, "onVehicleCharacterChanged", ReverseDriving)
    SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", ReverseDriving)
  end
end
function ReverseDriving:onPostLoad(savegame)
  local character = self:getVehicleCharacter()
  if character ~= nil then
    local v4 = character:getIKChainTargets()
    self.spec_reverseDriving.defaultCharacterTargets = v4
  end
  if savegame ~= nil then
    local v5 = v5:getValue(savegame.key .. ".reverseDriving#isActive", false)
  end
  self:setIsReverseDriving(v4, true)
  v2.updateAnimationOnEnter = v4
end
function ReverseDriving:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_reverseDriving.hasReverseDriving then
    xmlFile:setValue(key .. "#isActive", self.spec_reverseDriving.isReverseDriving)
  end
end
function ReverseDriving:onReadStream(streamId, connection)
  local v6 = streamReadBool(streamId)
  local v5 = Utils.getNoNil(v6, false)
  self:setIsReverseDriving(v5, true)
  self.spec_reverseDriving.updateAnimationOnEnter = self.spec_reverseDriving.isReverseDriving
end
function ReverseDriving:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_reverseDriving.isReverseDriving)
end
function ReverseDriving:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_reverseDriving.isChangingDirection then
    if self.spec_reverseDriving.hideCharacterOnChange then
      local character = self:getVehicleCharacter()
      if character ~= nil then
        character:setCharacterVisibility(false)
      end
    end
    character = self:getIsEntered()
    if not character and v5.updateAnimationOnEnter then
      AnimatedVehicle.updateAnimations(self, 99999999, true)
      v5.updateAnimationOnEnter = false
    end
    character = self:getIsAnimationPlaying(v5.reverseDrivingAnimation)
    if not character then
      self:reverseDirectionChanged(v5.reverserDirection)
    end
    if v5.isReverseDriving then
    else
    end
    local v7 = MathUtil.clamp(v5.smoothReverserDirection - 0.001 * dt * character, -1, 1)
    v5.smoothReverserDirection = v7
  end
end
function ReverseDriving:reverseDirectionChanged(direction)
  self.spec_reverseDriving.isChangingDirection = false
  if self.spec_reverseDriving.isReverseDriving then
    self:setReverserDirection(-1)
    self.spec_reverseDriving.smoothReverserDirection = -1
  else
    self:setReverserDirection(1)
    self.spec_reverseDriving.smoothReverserDirection = 1
  end
  local character = self:getVehicleCharacter()
  if character ~= nil then
    if v2.isReverseDriving then
      local v4 = next(v2.reversedCharacterTargets)
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L44
      character:setIKChainTargets(v2.reversedCharacterTargets)
    else
      character:setIKChainTargets(v2.defaultCharacterTargets)
    end
    if character.meshThirdPerson ~= nil then
      v4 = self:getIsEntered()
      if not v4 then
        character:updateVisibility()
      end
    end
    character:setAllowCharacterUpdate(true)
  end
  if self.setLightsTypesMask ~= nil then
    self:setLightsTypesMask(self.spec_lights.lightsTypesMask, true, true)
  end
  SpecializationUtil.raiseEvent(self, "onReverseDirectionChanged", direction)
end
function ReverseDriving:setIsReverseDriving(isReverseDriving, noEventSend)
  if isReverseDriving ~= self.spec_reverseDriving.isReverseDriving then
    self.spec_reverseDriving.isChangingDirection = true
    self.spec_reverseDriving.isReverseDriving = isReverseDriving
    if isReverseDriving then
    else
    end
    local v9 = self:getAnimationTime(v3.reverseDrivingAnimation)
    self:playAnimation(v3.reverseDrivingAnimation, v4, v9, true)
    local character = self:getVehicleCharacter()
    if character ~= nil then
      character:setAllowCharacterUpdate(false)
    end
    if v3.inverseTransmission and self.setTransmissionDirection ~= nil then
      self:setTransmissionDirection(-v4)
    end
    self:setReverserDirection(0)
    SpecializationUtil.raiseEvent(self, "onStartReverseDirectionChange")
    ReverseDrivingSetStateEvent.sendEvent(self, isReverseDriving, noEventSend)
  end
end
function ReverseDriving:getIsReverseDrivingAllowed(newState)
  if newState and self.spec_reverseDriving.disablingAttacherJointIndices ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 12, target 24)
    local v6 = self:getImplementFromAttacherJointIndex(self.spec_reverseDriving.disablingAttacherJointIndices[1])
    if v6 ~= nil then
      return false
    end
    -- TODO: structure LOP_FORNLOOP (pc 23, target 13)
  end
  return true
end
function ReverseDriving:updateSteeringWheel(superFunc, steeringWheel, dt, direction)
  if self.spec_reverseDriving.isReverseDriving and self.spec_reverseDriving.steeringWheel ~= nil then
  end
  superFunc(self, steeringWheel, dt, direction)
end
function ReverseDriving:getSteeringDirection(superFunc)
  if self.spec_reverseDriving.hasReverseDriving then
    return self.spec_reverseDriving.smoothReverserDirection
  end
  return superFunc(self)
end
function ReverseDriving:getAllowCharacterVisibilityUpdate(superFunc)
  local v3 = superFunc(self)
  if v3 and not not self.spec_reverseDriving.hideCharacterOnChange then
  end
  return v3
end
function ReverseDriving:getCanStartAIVehicle(superFunc)
  if self.spec_reverseDriving.hasReverseDriving then
    if self.spec_reverseDriving.isReverseDriving then
      return false
    end
    if v2.isChangingDirection then
      return false
    end
  end
  return superFunc(self)
end
function ReverseDriving.loadDashboardGroupFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  v5 = v2:getValue(v3 .. "#isReverseDriving")
  v4.isReverseDriving = v5
  return true
end
function ReverseDriving:getIsDashboardGroupActive(superFunc, group)
  if group.isReverseDriving ~= nil and self.spec_reverseDriving.isReverseDriving ~= group.isReverseDriving then
    return false
  end
  return superFunc(self, group)
end
function ReverseDriving.getCanBeSelected(v0, v1)
  return true
end
function ReverseDriving.loadAdditionalLightAttributesFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  v5 = v2:getValue(v3 .. "#enableDirection")
  v4.enableDirection = v5
  return true
end
function ReverseDriving:getIsLightActive(superFunc, light)
  if light.enableDirection ~= nil then
    local v4 = self:getReverserDirection()
    if light.enableDirection ~= v4 then
      return false
    end
  end
  return superFunc(self, light)
end
function ReverseDriving:getAIDirectionNode(superFunc)
  if self.spec_reverseDriving.isReverseDriving then
    if not self.spec_reverseDriving.aiDirectionNode then
      local v3 = superFunc(self)
    end
    return v3
  end
  v3 = superFunc(self)
  return v3
end
function ReverseDriving:getAISteeringNode(superFunc)
  if self.spec_reverseDriving.isReverseDriving then
    if not self.spec_reverseDriving.aiSteeringNode then
      local v3 = superFunc(self)
    end
    return v3
  end
  v3 = superFunc(self)
  return v3
end
function ReverseDriving:getAIImplementCollisionTrigger(superFunc)
  if self.spec_reverseDriving.isReverseDriving then
    if not self.spec_reverseDriving.aiCollisionTrigger then
      local v3 = superFunc(self)
    end
    return v3
  end
  v3 = superFunc(self)
  return v3
end
function ReverseDriving:onVehicleCharacterChanged(character)
  if self.spec_reverseDriving.updateAnimationOnEnter then
    AnimatedVehicle.updateAnimations(self, 99999999, true)
    self.spec_reverseDriving.updateAnimationOnEnter = false
  end
  if v2.isReverseDriving then
    local v3 = next(v2.reversedCharacterTargets)
    if v3 ~= nil then
      character:setIKChainTargets(v2.reversedCharacterTargets, true)
      return
    end
  end
  character:setIKChainTargets(v2.defaultCharacterTargets, true)
end
function ReverseDriving:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_reverseDriving.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4, v5 = self:addPoweredActionEvent(self.spec_reverseDriving.actionEvents, InputAction.CHANGE_DRIVING_DIRECTION, self, ReverseDriving.actionEventToggleReverseDriving, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
      local v9 = v9:getText("input_CHANGE_DRIVING_DIRECTION")
      v6:setActionEventText(...)
    end
  end
end
function ReverseDriving:actionEventToggleReverseDriving(actionName, inputValue, callbackState, isAnalog)
  local v6 = self:getIsReverseDrivingAllowed(not self.spec_reverseDriving.isReverseDriving)
  if v6 then
    self:setIsReverseDriving(not self.spec_reverseDriving.isReverseDriving)
  end
end
