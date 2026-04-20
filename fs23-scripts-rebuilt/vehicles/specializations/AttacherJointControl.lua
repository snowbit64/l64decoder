-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AttacherJointControl = {ALPHA_NUM_BITS = 8, ALPHA_MAX_VALUE = 2 ^ AttacherJointControl.ALPHA_NUM_BITS - 1}
function AttacherJointControl.prerequisitesPresent(specializations)
  return SpecializationUtil.hasSpecialization(Attachable, specializations)
end
function AttacherJointControl.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("AttacherJointControl")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.attacherJointControl#maxTiltAngle", "Max tilt angle", 25)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attacherJointControl#supportsDamping", "Supports damping of Y axis", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attacherJointControl#dampingOffset", "Distance from attacher joint to damping reference point (m)", 2)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.attacherJointControl.control(?)#controlFunction", "Control script function (controlAttacherJointHeight or controlAttacherJointTilt)")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.attacherJointControl.control(?)#controlAxis", "Name of input action")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.attacherJointControl.control(?)#iconName", "Name of icon")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.attacherJointControl.control(?)#invertControlAxis", "Invert control axis", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.attacherJointControl.control(?)#mouseSpeedFactor", "Mouse speed factor", 1)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.attacherJointControl.sounds", "hydraulic")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Attachable.INPUT_ATTACHERJOINT_XML_KEY .. "#isControllable", "Is controllable", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Attachable.INPUT_ATTACHERJOINT_CONFIG_XML_KEY .. "#isControllable", "Is controllable", false)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function AttacherJointControl.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "controlAttacherJoint", AttacherJointControl.controlAttacherJoint)
  SpecializationUtil.registerFunction(vehicleType, "controlAttacherJointHeight", AttacherJointControl.controlAttacherJointHeight)
  SpecializationUtil.registerFunction(vehicleType, "controlAttacherJointTilt", AttacherJointControl.controlAttacherJointTilt)
  SpecializationUtil.registerFunction(vehicleType, "getControlAttacherJointDirection", AttacherJointControl.getControlAttacherJointDirection)
  SpecializationUtil.registerFunction(vehicleType, "getIsAttacherJointControlDampingAllowed", AttacherJointControl.getIsAttacherJointControlDampingAllowed)
end
function AttacherJointControl.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadInputAttacherJoint", AttacherJointControl.loadInputAttacherJoint)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "registerLoweringActionEvent", AttacherJointControl.registerLoweringActionEvent)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getLoweringActionEventState", AttacherJointControl.getLoweringActionEventState)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", AttacherJointControl.getCanBeSelected)
end
function AttacherJointControl.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", AttacherJointControl)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", AttacherJointControl)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", AttacherJointControl)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", AttacherJointControl)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", AttacherJointControl)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", AttacherJointControl)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", AttacherJointControl)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", AttacherJointControl)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", AttacherJointControl)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetach", AttacherJointControl)
end
function AttacherJointControl:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.attacherJointControl.control1", "vehicle.attacherJointControl.control with #controlFunction 'controlAttacherJointHeight'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.attacherJointControl.control2", "vehicle.attacherJointControl.control with #controlFunction 'controlAttacherJointTilt'")
  local v3 = v3:getValue("vehicle.attacherJointControl" .. "#maxTiltAngle", 25)
  self.spec_attacherJointControl.maxTiltAngle = v3
  self.spec_attacherJointControl.heightTargetAlpha = -1
  v3 = v3:getValue("vehicle.attacherJointControl" .. "#supportsDamping", false)
  self.spec_attacherJointControl.supportsDamping = v3
  v3 = v3:getValue("vehicle.attacherJointControl" .. "#dampingOffset", 2)
  self.spec_attacherJointControl.dampingOffset = v3
  self.spec_attacherJointControl.nextHeightDampingUpdateTime = 0
  self.spec_attacherJointControl.controls = {}
  self.spec_attacherJointControl.nameToControl = {}
  while true do
    v4 = string.format("%s.control(%d)", "vehicle.attacherJointControl", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = v6:getValue(v4 .. "#controlFunction")
    if v6 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L112
      if {func = self[v6]}.func == self.controlAttacherJointHeight then
        v2.heightController = {func = self[v6]}
      end
      -- if v5.func ~= v0.controlAttacherJointTilt then goto L124 end
      v2.tiltController = v5
    else
      v10 = tostring(v6)
      Logging.xmlWarning(self.xmlFile, "Unknown control function '%s' for attacher joint control '%s'", v10, v4)
      break
    end
    v7 = v7:getValue(v4 .. "#controlAxis")
    if v7 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L145
      v5.controlAction = InputAction[v7]
    else
      v11 = tostring(v7)
      Logging.xmlWarning(self.xmlFile, "Unknown control axis '%s' for attacher joint control '%s'", v11, v4)
      break
    end
    XMLUtil.checkDeprecatedXMLElements(self.xmlFile, v4 .. "#controlAxisIcon", v4 .. "#iconName")
    v8 = v8:getValue(v4 .. "#iconName", "")
    if InputHelpElement.AXIS_ICON[v8] == nil then
    end
    v5.axisActionIcon = v8
    v9 = v9:getValue(v4 .. "#invertControlAxis", false)
    v5.invertAxis = v9
    v9 = v9:getValue(v4 .. "#mouseSpeedFactor", 1)
    v5.mouseSpeedFactor = v9
    v5.moveAlpha = 0
    v5.moveAlphaSent = 0
    v5.moveAlphaLastManual = 0
    v2.nameToControl[v7] = v5
    table.insert(v2.controls, v5)
  end
  if self.isClient then
    v2.lastMoveTime = 0
    v2.samples = {}
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.attacherJointControl" .. ".sounds", "hydraulic", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.hydraulic = v5
  end
  v2.jointDesc = nil
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlagClient = v4
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlagServer = v4
  if #v2.controls == 0 then
    SpecializationUtil.removeEventListener(self, "onReadStream", AttacherJointControl)
    SpecializationUtil.removeEventListener(self, "onWriteStream", AttacherJointControl)
    SpecializationUtil.removeEventListener(self, "onReadUpdateStream", AttacherJointControl)
    SpecializationUtil.removeEventListener(self, "onWriteUpdateStream", AttacherJointControl)
    SpecializationUtil.removeEventListener(self, "onUpdate", AttacherJointControl)
    SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", AttacherJointControl)
    SpecializationUtil.removeEventListener(self, "onPostAttach", AttacherJointControl)
    SpecializationUtil.removeEventListener(self, "onPreDetach", AttacherJointControl)
  end
end
function AttacherJointControl:onDelete()
  if self.isClient and self.spec_attacherJointControl.samples ~= nil then
    v2:deleteSample(self.spec_attacherJointControl.samples.hydraulic)
  end
end
function AttacherJointControl:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    v3 = streamReadBool(streamId)
    if v3 then
      for v7, v8 in ipairs(self.spec_attacherJointControl.controls) do
        local v10 = streamReadUIntN(streamId, AttacherJointControl.ALPHA_NUM_BITS)
        self:controlAttacherJoint(v8, v10 / AttacherJointControl.ALPHA_MAX_VALUE, false, true)
      end
    end
  end
end
function AttacherJointControl:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    if self.spec_attacherJointControl.jointDesc == nil then
    end
    local v4 = v4(v5, true)
    if v4 then
      for v7, v8 in ipairs(v3.controls) do
        streamWriteUIntN(streamId, v8.moveAlpha * AttacherJointControl.ALPHA_MAX_VALUE, AttacherJointControl.ALPHA_NUM_BITS)
      end
    end
  end
end
function AttacherJointControl:onReadUpdateStream(streamId, timestamp, connection)
  local v5 = connection:getIsServer()
  if not v5 then
    v5 = streamReadBool(streamId)
    -- if not v5 then goto L73 end
    for v8, v9 in ipairs(self.spec_attacherJointControl.controls) do
      local v11 = streamReadUIntN(streamId, AttacherJointControl.ALPHA_NUM_BITS)
      self:controlAttacherJoint(v9, v11 / AttacherJointControl.ALPHA_MAX_VALUE, false, true)
    end
    return
  end
  v5 = streamReadBool(streamId)
  if v5 then
    for v8, v9 in ipairs(v4.controls) do
      v11 = streamReadUIntN(streamId, AttacherJointControl.ALPHA_NUM_BITS)
      self:controlAttacherJoint(v9, v11 / AttacherJointControl.ALPHA_MAX_VALUE, false, true)
    end
  end
end
function AttacherJointControl:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v5 = connection:getIsServer()
  if v5 then
    local v8 = bitAND(dirtyMask, self.spec_attacherJointControl.dirtyFlagClient)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    -- if not v5 then goto L83 end
    for v8, v9 in ipairs(v4.controls) do
      streamWriteUIntN(streamId, v9.moveAlpha * AttacherJointControl.ALPHA_MAX_VALUE, AttacherJointControl.ALPHA_NUM_BITS)
    end
    return
  end
  v8 = bitAND(dirtyMask, v4.dirtyFlagServer)
  if v8 == 0 then
  end
  v5 = v5(v6, true)
  if v5 then
    for v8, v9 in ipairs(v4.controls) do
      streamWriteUIntN(streamId, v9.moveAlpha * AttacherJointControl.ALPHA_MAX_VALUE, AttacherJointControl.ALPHA_NUM_BITS)
    end
  end
end
function AttacherJointControl:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_attacherJointControl.heightController ~= nil and self.spec_attacherJointControl.jointDesc ~= nil then
    if self.spec_attacherJointControl.heightTargetAlpha ~= -1 then
      if 0 < self.spec_attacherJointControl.heightTargetAlpha - self.spec_attacherJointControl.heightController.moveAlpha + 0.0001 then
      end
      if v5.nextHeightDampingUpdateTime >= g_time then
      end
      self:controlAttacherJoint(v13, v14, true, true)
      local v11 = math.abs(v5.heightTargetAlpha - v10)
      if v11 < 0.01 then
        v5.heightTargetAlpha = -1
      end
    end
    if self.isServer and v5.supportsDamping and v5.nextHeightDampingUpdateTime < g_time then
      local inputJointDesc = self:getActiveInputAttacherJoint()
      local v9 = self:getIsAttacherJointControlDampingAllowed()
      if v9 then
        local v9, v10, v11 = getWorldTranslation(inputJointDesc.node)
        local v12, v13, v14 = localDirectionToWorld(inputJointDesc.node, v5.dampingOffset, 0, 0)
        local v15, v16, v17 = worldToLocal(self.components[1].node, v9 + v12, v10, v11 + v14)
        local v18, v19, v20 = getVelocityAtLocalPos(self.components[1].node, v15, v16, v17)
        local v21 = math.abs(v19)
        if 0.15 < v21 then
        end
      end
      v9 = math.abs(v8 + (v6.moveAlphaLastManual - v6.moveAlpha) * 0.001 * dt)
      if 0.0001 < v9 then
        v9 = MathUtil.clamp(v6.moveAlpha + v8 + (v6.moveAlphaLastManual - v6.moveAlpha) * 0.001 * dt, 0, 1)
        v5.heightTargetAlpha = v9
        if v5.heightTargetAlpha <= 0 and v5.tiltController ~= nil then
          v12 = MathUtil.clamp(v5.tiltController.moveAlpha - (v8 + (v6.moveAlphaLastManual - v6.moveAlpha) * 0.001 * dt) * 0.1, 0, 1)
          self:controlAttacherJoint(v5.tiltController, v12, true)
        end
      end
    end
  end
  if g_time < v5.lastMoveTime + 100 then
    inputJointDesc = inputJointDesc:getIsSamplePlaying(v5.samples.hydraulic)
    -- if v7 then goto L234 end
    inputJointDesc:playSample(v5.samples.hydraulic)
    return
  end
  inputJointDesc = inputJointDesc:getIsSamplePlaying(v5.samples.hydraulic)
  if inputJointDesc then
    inputJointDesc:stopSample(v5.samples.hydraulic)
  end
end
function AttacherJointControl:controlAttacherJoint(control, moveAlpha, automaticControl, noEventSend)
  if self.isServer and self.spec_attacherJointControl.jointDesc ~= nil then
    local v7 = control.func(self, moveAlpha)
    v7 = self:getAttacherVehicle()
    v7:updateAttacherJointRotation(self.spec_attacherJointControl.jointDesc, self)
    if self.spec_attacherJointControl.jointDesc.jointIndex ~= 0 then
      setJointFrame(self.spec_attacherJointControl.jointDesc.jointIndex, 0, self.spec_attacherJointControl.jointDesc.jointTransform)
    end
  end
  v5.lastMoveTime = g_time
  if not automaticControl then
    v5.nextHeightDampingUpdateTime = g_time + 100
    control.moveAlphaLastManual = control.moveAlpha
  end
  local v8 = math.max(moveAlpha, 0)
  v7 = math.min(v8, 1)
  control.moveAlpha = v7
  if noEventSend ~= nil then
    -- if v4 then goto L99 end
  end
  v7 = math.abs(control.moveAlphaSent - moveAlpha)
  if 1 / AttacherJointControl.ALPHA_MAX_VALUE < v7 then
    control.moveAlphaSent = moveAlpha
    if not self.isServer then
      self:raiseDirtyFlags(v5.dirtyFlagClient)
      return
    end
    self:raiseDirtyFlags(v5.dirtyFlagServer)
    return
    control.moveAlphaSent = moveAlpha
  end
end
function AttacherJointControl:controlAttacherJointHeight(moveAlpha)
  if moveAlpha == nil then
  end
  local v4 = MathUtil.clamp(moveAlpha, v3.upperAlpha, v3.lowerAlpha)
  self:updateAttacherJointRotationNodes(v3, v4)
  v3.moveAlpha = v4
  self:updateAttacherJointRotation(v3, self)
  v2.lastHeightAlpha = v4
  return v4
end
function AttacherJointControl:controlAttacherJointTilt(moveAlpha)
  if moveAlpha == nil then
  end
  local v3 = MathUtil.clamp(moveAlpha, 0, 1)
  v2.jointDesc.upperRotationOffset = v2.jointDesc.upperRotationOffsetBackup + v2.maxTiltAngle * -(v3 - 0.5)
  v2.jointDesc.lowerRotationOffset = v2.jointDesc.lowerRotationOffsetBackup + v2.maxTiltAngle * -(v3 - 0.5)
  return v3
end
function AttacherJointControl:getControlAttacherJointDirection()
  if self.spec_attacherJointControl.heightTargetAlpha ~= -1 then
    if self.spec_attacherJointControl.heightTargetAlpha ~= self.spec_attacherJointControl.jointDesc.upperAlpha then
    end
    return true
  end
  local v4 = math.abs(v1.heightController.moveAlpha - v1.jointDesc.lowerAlpha)
  local v5 = math.abs(v1.heightController.moveAlpha - v1.jointDesc.upperAlpha)
  if v5 >= v4 then
  end
  return true
end
function AttacherJointControl:getIsAttacherJointControlDampingAllowed()
  local attacherVehicle = self:getAttacherVehicle()
  local v2 = attacherVehicle:getLastSpeed()
  if v2 < 0.5 then
    return false
  end
  if self.movingDirection <= 0 then
    return false
  end
  return true
end
function AttacherJointControl.loadInputAttacherJoint(v0, v1, v2, v3, v4, v5)
  local v6 = v1(v0, v2, v3, v4, v5)
  if not v6 then
    return false
  end
  v6 = v2:getValue(v3 .. "#isControllable", false)
  v4.isControllable = v6
  return true
end
function AttacherJointControl:registerLoweringActionEvent(superFunc, actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName)
  if self.spec_attacherJointControl.heightController then
    local v13, v14 = self:addPoweredActionEvent(actionEventsTable, InputAction.LOWER_IMPLEMENT, self, AttacherJointControl.actionEventAttacherJointControlSetPoint, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName)
    v15:setActionEventTextPriority(v14, GS_PRIO_HIGH)
    if inputAction == InputAction.LOWER_IMPLEMENT then
      return
    end
  end
  superFunc(self, actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName)
end
function AttacherJointControl:getLoweringActionEventState(superFunc)
  if self.spec_attacherJointControl.heightController then
    if self.spec_attacherJointControl.jointDesc == nil then
    end
    if true then
      local v5 = self:getControlAttacherJointDirection()
      if v5 then
        local v6 = v6:getText("action_lowerOBJECT")
        v5 = string.format(v6, self.typeDesc)
        return true, v5
      end
      v6 = v6:getText("action_liftOBJECT")
      v5 = string.format(v6, self.typeDesc)
    end
    return v3, v4
  end
  return superFunc(self)
end
function AttacherJointControl.getCanBeSelected(v0, v1)
  return true
end
function AttacherJointControl:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_attacherJointControl.actionEvents)
    if isActiveForInputIgnoreSelection and self.spec_attacherJointControl.jointDesc ~= nil then
      for v7, v8 in ipairs(self.spec_attacherJointControl.controls) do
        local v9, v10 = self:addPoweredActionEvent(v3.actionEvents, v8.controlAction, self, AttacherJointControl.actionEventAttacherJointControl, false, false, true, true, nil, v8.axisActionIcon)
        v11:setActionEventTextPriority(v10, GS_PRIO_NORMAL)
      end
    end
  end
end
function AttacherJointControl:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex, loadFromSavegame)
  local inputAttacherJoints = self:getInputAttacherJoints()
  if inputAttacherJoints[inputJointDescIndex] ~= nil and inputAttacherJoints[inputJointDescIndex].isControllable then
    local attacherJoints = attacherVehicle:getAttacherJoints()
    attacherJoints[jointDescIndex].allowsLoweringBackup = attacherJoints[jointDescIndex].allowsLowering
    attacherJoints[jointDescIndex].allowsLowering = false
    attacherJoints[jointDescIndex].upperRotationOffsetBackup = attacherJoints[jointDescIndex].upperRotationOffset
    attacherJoints[jointDescIndex].lowerRotationOffsetBackup = attacherJoints[jointDescIndex].lowerRotationOffset
    self.spec_attacherJointControl.jointDesc = attacherJoints[jointDescIndex]
    for v12, v13 in ipairs(self.spec_attacherJointControl.controls) do
      local v14 = v13.func(self)
      v13.moveAlpha = v14
    end
    if loadFromSavegame then
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L69
      self:controlAttacherJoint(v5.heightController, v5.jointDesc.upperAlpha, false)
    else
      v5.heightTargetAlpha = v5.jointDesc.upperAlpha
    end
    self:requestActionEventUpdate()
  end
end
function AttacherJointControl:onPreDetach(attacherVehicle, implement)
  if self.spec_attacherJointControl.jointDesc ~= nil then
    self.spec_attacherJointControl.jointDesc.allowsLowering = self.spec_attacherJointControl.jointDesc.allowsLoweringBackup
    self.spec_attacherJointControl.jointDesc.upperRotationOffset = self.spec_attacherJointControl.jointDesc.upperRotationOffsetBackup
    self.spec_attacherJointControl.jointDesc.lowerRotationOffset = self.spec_attacherJointControl.jointDesc.lowerRotationOffsetBackup
    self.spec_attacherJointControl.jointDesc = nil
  end
end
function AttacherJointControl:actionEventAttacherJointControl(actionName, inputValue, callbackState, isAnalog)
  local v5 = math.abs(inputValue)
  if 0 < v5 then
    if self.spec_attacherJointControl.nameToControl[actionName].invertAxis then
    end
    self:controlAttacherJoint(v6, v6.moveAlpha + v7, false)
    v5.heightTargetAlpha = -1
  end
end
function AttacherJointControl:actionEventAttacherJointControlSetPoint(actionName, inputValue, callbackState, isAnalog)
  if self.spec_attacherJointControl.jointDesc ~= nil then
    local v6 = self:getControlAttacherJointDirection()
    if v6 then
      self.spec_attacherJointControl.heightTargetAlpha = self.spec_attacherJointControl.jointDesc.lowerAlpha
    else
      self.spec_attacherJointControl.heightTargetAlpha = self.spec_attacherJointControl.jointDesc.upperAlpha
    end
    v5.nextHeightDampingUpdateTime = g_time + v5.jointDesc.moveTime
  end
end
