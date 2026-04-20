-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SetWorkModeEvent.lua")
WorkMode = {WORKMODE_SEND_NUM_BITS = 4}
function WorkMode.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
  end
  return v1
end
function WorkMode.initSpecialization()
  local v3 = v3:getText("configuration_workMode")
  v0:addConfigurationType("workMode", v3, "workModes", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("WorkMode")
  WorkMode.registerWorkModeXMLPaths(Vehicle.xmlSchema, "vehicle.workModes")
  WorkMode.registerWorkModeXMLPaths(Vehicle.xmlSchema, "vehicle.workModes.workModeConfigurations.workModeConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.workModes.workModeConfigurations.workModeConfiguration(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).workMode#state", "Current work mode", 1)
end
function WorkMode:registerWorkModeXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. "#foldMaxLimit", "Fold max. limit to change mode", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#foldMinLimit", "Fold min. limit to change mode", 0)
  self:register(XMLValueType.BOOL, v1 .. "#allowChangeOnLowered", "Allow change while lowered", true)
  self:register(XMLValueType.BOOL, v1 .. "#allowChangeWhileTurnedOn", "Allow change while turned on", true)
  self:register(XMLValueType.L10N_STRING, v1 .. ".workMode(?)#name", "Work mode name")
  self:register(XMLValueType.STRING, v1 .. ".workMode(?)#inputBindingName", "Input action name for quick access")
  self:register(XMLValueType.STRING, v1 .. ".workMode(?).turnedOnAnimations.turnedOnAnimation(?)#name", "Turned on animation name")
  self:register(XMLValueType.FLOAT, v1 .. ".workMode(?).turnedOnAnimations.turnedOnAnimation(?)#turnOnFadeTime", "Turn on fade time (sec.)", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".workMode(?).turnedOnAnimations.turnedOnAnimation(?)#turnOffFadeTime", "Turn off fade time (sec.)", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".workMode(?).turnedOnAnimations.turnedOnAnimation(?)#speedScale", "Speed scale", 1)
  self:register(XMLValueType.STRING, v1 .. ".workMode(?).loweringAnimations.loweringAnimation(?)#name", "Lowering animation name")
  self:register(XMLValueType.FLOAT, v1 .. ".workMode(?).loweringAnimations.loweringAnimation(?)#speed", "Speed scale", 1)
  self:register(XMLValueType.INT, v1 .. ".workMode(?).workAreas.workArea(?)#workAreaIndex", "Work area index")
  self:register(XMLValueType.INT, v1 .. ".workMode(?).workAreas.workArea(?)#dropAreaIndex", "Drop area index")
  self:register(XMLValueType.STRING, v1 .. ".workMode(?).animation(?)#name", "Mode change animation name")
  self:register(XMLValueType.FLOAT, v1 .. ".workMode(?).animation(?)#speed", "Mode change animation speed", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".workMode(?).animation(?)#stopTime", "Mode change animation stop time")
  self:register(XMLValueType.BOOL, v1 .. ".workMode(?).animation(?)#repeatAfterUnfolding", "Repeat animation after unfolding", false)
  self:register(XMLValueType.FLOAT, v1 .. ".workMode(?).animation(?)#repeatStartTime", "Repeat start time")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".workMode(?).movingToolLimit#node", "Target moving tool node")
  self:register(XMLValueType.ANGLE, v1 .. ".workMode(?).movingToolLimit#minRot", "Min. rotation", 0)
  self:register(XMLValueType.ANGLE, v1 .. ".workMode(?).movingToolLimit#maxRot", "Max. rotation", 0)
  EffectManager.registerEffectXMLPaths(self, v1 .. ".workMode(?).windrowerEffect")
  AnimationManager.registerAnimationNodesXMLPaths(self, v1 .. ".workMode(?).animationNodes")
  self:register(XMLValueType.INT, Sprayer.SPRAY_TYPE_XML_KEY .. "#workModeIndex", "Index of work mode to activate spray type")
  self:register(XMLValueType.BOOL, Cylindered.MOVING_TOOL_XML_KEY .. "#allowWhileChangingWorkMode", "Allow movement while changing work mode", true)
end
function WorkMode.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setWorkMode", WorkMode.setWorkMode)
  SpecializationUtil.registerFunction(vehicleType, "getIsWorkModeChangeAllowed", WorkMode.getIsWorkModeChangeAllowed)
  SpecializationUtil.registerFunction(vehicleType, "deactivateWindrowerEffects", WorkMode.deactivateWindrowerEffects)
end
function WorkMode.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", WorkMode.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", WorkMode.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowsLowering", WorkMode.getAllowsLowering)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSprayTypeFromXML", WorkMode.loadSprayTypeFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSprayTypeActive", WorkMode.getIsSprayTypeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadMovingToolFromXML", WorkMode.loadMovingToolFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMovingToolActive", WorkMode.getIsMovingToolActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreEffectsVisible", WorkMode.getAreEffectsVisible)
end
function WorkMode.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onSetLowered", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onFoldStateChanged", WorkMode)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", WorkMode)
end
function WorkMode:onLoad(savegame)
  local configurationId = Utils.getNoNil(self.configurations.workMode, 1)
  local v4 = string.format("vehicle.workModes" .. ".workModeConfigurations.workModeConfiguration(%d)", configurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.workModes" .. ".workModeConfigurations.workModeConfiguration", configurationId, self.components, self)
  local v5 = v5:hasProperty(v4)
  if not v5 then
  end
  v2.state = 1
  v2.stateMax = 0
  v5 = v5:getValue(v4 .. "#foldMaxLimit", 1)
  v2.foldMaxLimit = v5
  v5 = v5:getValue(v4 .. "#foldMinLimit", 0)
  v2.foldMinLimit = v5
  v5 = v5:getValue(v4 .. "#allowChangeOnLowered", true)
  v2.allowChangeOnLowered = v5
  v5 = v5:getValue(v4 .. "#allowChangeWhileTurnedOn", true)
  v2.allowChangeWhileTurnedOn = v5
  v2.workModes = {}
  while true do
    v6 = string.format("%s.workMode(%d)", v4, v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = v8:getValue(v6 .. "#name", nil, self.customEnvironment)
    v8 = v8:getValue(v6 .. "#inputBindingName")
    if v8 ~= nil and InputAction[v8] ~= nil then
    end
    v7.turnedOnAnimations = {}
    while true do
      v10 = string.format("%s.turnedOnAnimations.turnedOnAnimation(%d)", v6, v9)
      v11 = v11:hasProperty(v10)
      if not v11 then
        break
      end
      v12 = v12:getValue(v10 .. "#name")
      v13 = v13:getValue(v10 .. "#turnOnFadeTime", 1)
      v13 = v13:getValue(v10 .. "#turnOffFadeTime", 1)
      v12 = v12:getValue(v10 .. "#speedScale", 1)
      v12 = self:getAnimationExists({name = v12, turnOnFadeTime = v13 * 1000, turnOffFadeTime = v13 * 1000, speedScale = v12, speedDirection = 0, currentSpeed = 0}.name)
      if v12 then
        table.insert(v7.turnedOnAnimations, {name = v12, turnOnFadeTime = v13 * 1000, turnOffFadeTime = v13 * 1000, speedScale = v12, speedDirection = 0, currentSpeed = 0})
      end
    end
    v7.loweringAnimations = {}
    while true do
      v10 = string.format("%s.loweringAnimations.loweringAnimation(%d)", v6, v9)
      v11 = v11:hasProperty(v10)
      if not v11 then
        break
      end
      v12 = v12:getValue(v10 .. "#name")
      v12 = v12:getValue(v10 .. "#speed", 1)
      v12 = self:getAnimationExists({name = v12, speed = v12}.name)
      if v12 then
        table.insert(v7.loweringAnimations, {name = v12, speed = v12})
      end
    end
    v7.workAreas = {}
    while true do
      v10 = string.format("%s.workAreas.workArea(%d)", v6, v9)
      v11 = v11:hasProperty(v10)
      if not v11 then
        break
      end
      v12 = v12:getValue(v10 .. "#workAreaIndex", v9 + 1)
      v12 = v12:getValue(v10 .. "#dropAreaIndex", v9 + 1)
      table.insert(v7.workAreas, {workAreaIndex = v12, dropAreaIndex = v12})
    end
    v7.animations = {}
    while true do
      v10 = string.format("%s.animation(%d)", v6, v9)
      v11 = v11:hasProperty(v10)
      if not v11 then
        break
      end
      v12 = v12:getValue(v10 .. "#name")
      v12 = v12:getValue(v10 .. "#speed", 1)
      v12 = v12:getValue(v10 .. "#stopTime")
      v12 = v12:getValue(v10 .. "#repeatAfterUnfolding", false)
      v12 = v12:getValue(v10 .. "#repeatStartTime")
      v12 = self:getAnimationExists({animName = v12, animSpeed = v12, stopTime = v12, repeatAfterUnfolding = v12, repeatStartTime = v12, repeated = false}.animName)
      if v12 then
        table.insert(v7.animations, {animName = v12, animSpeed = v12, stopTime = v12, repeatAfterUnfolding = v12, repeatStartTime = v12, repeated = false})
      end
    end
    v10 = v10:getValue(v6 .. ".movingToolLimit#node", nil, self.components, self.i3dMappings)
    if v10 ~= nil then
      v11 = self:getMovingToolByNode(v10)
      v7.movingTool = v11
      v11 = v11:getValue(v6 .. ".movingToolLimit#minRot", 0)
      v7.movingToolMinRot = v11
      v11 = v11:getValue(v6 .. ".movingToolLimit#maxRot", 0)
      v7.movingToolMaxRot = v11
    end
    v14 = string.format("%s.windrowerEffect", v6)
    v11 = v11:loadEffect(self.xmlFile, v14, self.components, self, self.i3dMappings)
    v7.windrowerEffects = v11
    v11 = v11:loadAnimations(self.xmlFile, v6 .. ".animationNodes", self.components, self, self.i3dMappings)
    v7.animationNodes = v11
    table.insert(v2.workModes, v7)
  end
  v6 = table.getn(v2.workModes)
  v2.stateMax = v6
  if 2 ^ WorkMode.WORKMODE_SEND_NUM_BITS - 1 < v2.stateMax then
    print("Error: WorkMode only supports " .. 2 ^ WorkMode.WORKMODE_SEND_NUM_BITS - 1 .. " modes!")
  end
  if 0 < v2.stateMax then
    self:setWorkMode(1, true)
  end
  v2.accumulatedFruitType = FruitType.UNKNOWN
  v6 = self:getNextDirtyFlag()
  v2.dirtyFlag = v6
  if v2.stateMax == 0 then
    SpecializationUtil.removeEventListener(self, "onReadStream", WorkMode)
    SpecializationUtil.removeEventListener(self, "onWriteStream", WorkMode)
    SpecializationUtil.removeEventListener(self, "onReadUpdateStream", WorkMode)
    SpecializationUtil.removeEventListener(self, "onWriteUpdateStream", WorkMode)
    SpecializationUtil.removeEventListener(self, "onUpdate", WorkMode)
    SpecializationUtil.removeEventListener(self, "onUpdateTick", WorkMode)
    SpecializationUtil.removeEventListener(self, "onDraw", WorkMode)
    SpecializationUtil.removeEventListener(self, "onTurnedOn", WorkMode)
    SpecializationUtil.removeEventListener(self, "onTurnedOff", WorkMode)
    SpecializationUtil.removeEventListener(self, "onDeactivate", WorkMode)
    SpecializationUtil.removeEventListener(self, "onSetLowered", WorkMode)
    SpecializationUtil.removeEventListener(self, "onFoldStateChanged", WorkMode)
    SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", WorkMode)
  end
end
function WorkMode:onPostLoad(savegame)
  if savegame ~= nil and not savegame.resetVehicles and 0 < self.spec_workMode.stateMax then
    local v3 = v3:hasProperty(savegame.key .. ".workMode#state")
    if v3 then
      v3 = v3:getValue(savegame.key .. ".workMode#state", 1)
      local v4 = MathUtil.clamp(v3, 1, self.spec_workMode.stateMax)
      self:setWorkMode(v4, true)
      AnimatedVehicle.updateAnimations(self, 99999999, true)
      if self.getFoldAnimTime ~= nil and self.spec_foldable.foldMoveDirection == 0 then
        v4 = self:getFoldAnimTime()
        if v4 <= 0 then
          self.spec_foldable.foldMoveDirection = -1
          return
        end
        if self.spec_foldable.foldMiddleAnimTime == v4 then
          self.spec_foldable.moveToMiddle = true
        end
        self.spec_foldable.foldMoveDirection = 1
      end
    end
  end
end
function WorkMode:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#state", self.spec_workMode.state)
end
function WorkMode:onDelete()
  if self.spec_workMode.workModes ~= nil then
    for v5, v6 in ipairs(self.spec_workMode.workModes) do
      v7:deleteEffects(v6.windrowerEffects)
      v7:deleteAnimations(v6.animationNodes)
    end
  end
end
function WorkMode:onReadStream(streamId, connection)
  if self.spec_workMode.stateMax == 0 then
    return
  end
  local state = streamReadUIntN(streamId, WorkMode.WORKMODE_SEND_NUM_BITS)
  self:setWorkMode(state, true)
end
function WorkMode:onWriteStream(streamId, connection)
  if self.spec_workMode.stateMax == 0 then
    return
  end
  streamWriteUIntN(streamId, v3.state, WorkMode.WORKMODE_SEND_NUM_BITS)
end
function WorkMode:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      for v9, v10 in ipairs(self.spec_workMode.workModes[self.spec_workMode.state].windrowerEffects) do
        local v11 = streamReadBool(streamId)
        if not v11 then
          continue
        end
        v10.lastChargeTime = g_currentMission.time
      end
      v6 = streamReadUIntN(streamId, FruitTypeManager.SEND_NUM_BITS)
      v4.accumulatedFruitType = v6
    end
  end
end
function WorkMode:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_workMode.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      for v9, v10 in ipairs(v4.workModes[v4.state].windrowerEffects) do
        if g_currentMission.time >= v10.lastChargeTime + 500 then
        end
        v11(v12, true)
      end
      streamWriteUIntN(streamId, v4.accumulatedFruitType, FruitTypeManager.SEND_NUM_BITS)
    end
  end
end
function WorkMode:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_workMode.stateMax == 0 then
    return
  end
  if self.isClient then
    -- TODO: structure LOP_FORNPREP (pc 20, target 125)
    for v13, v14 in pairs(v5.workModes[1].turnedOnAnimations) do
      if not (v14.speedDirection ~= 0) then
        continue
      end
      if v14.speedDirection == -1 then
      end
      if v14.speedDirection == 1 then
      end
      local v18 = MathUtil.clamp(v14.currentSpeed + v14.speedDirection * dt / v15, v16, v17)
      v14.currentSpeed = v18
      v18 = self:getIsAnimationPlaying(v14.name)
      if not v18 then
        local v22 = self:getAnimationTime(v14.name)
        self:playAnimation(v14.name, v14.currentSpeed * v14.speedScale, v22, true)
      else
        self:setAnimationSpeed(v14.name, v14.currentSpeed * v14.speedScale)
      end
      if v14.speedDirection == -1 and v14.currentSpeed == 0 then
        self:stopAnimation(v14.name, true)
      end
      if v14.currentSpeed ~= 1 and not (v14.currentSpeed == 0) then
        continue
      end
      v14.speedDirection = 0
    end
    -- TODO: structure LOP_FORNLOOP (pc 124, target 21)
    for v10, v11 in pairs(v6.windrowerEffects) do
      if g_currentMission.time < v11.lastChargeTime + 500 then
        v12 = v12:getWindrowFillTypeIndexByFruitTypeIndex(v5.accumulatedFruitType)
        if not (v12 ~= nil) then
          continue
        end
        v11:setFillType(v12)
        v13 = v11:isRunning()
        if not not v13 then
          continue
        end
        v13:startEffect(v11)
      else
        if v11.turnOffRequiredEffect ~= 0 then
          if not (v11.turnOffRequiredEffect ~= 0) then
            continue
          end
          v12 = v12:isRunning()
          if not not v12 then
            continue
          end
        end
        v12:stopEffect(v11)
      end
    end
  end
  if self.isServer then
    for v12, v13 in ipairs(v5.workModes[v5.state].workAreas) do
      if not (self.spec_workArea.workAreas[v13.workAreaIndex] ~= nil) then
        continue
      end
      if self.spec_workArea.workAreas[v13.workAreaIndex].lastValidPickupFruitType ~= FruitType.UNKNOWN then
      end
      if not v8 and v14.lastPickupLiters == 0 then
      end
    end
    if v7 ~= nil and v7 ~= v5.accumulatedFruitType then
      v5.accumulatedFruitType = v7
      self:raiseDirtyFlags(v5.dirtyFlag)
    end
    for v12, v13 in pairs(v6.windrowerEffects) do
      if not v8 then
        continue
      end
      v13.lastChargeTime = g_currentMission.time
      self:raiseDirtyFlags(v5.dirtyFlag)
    end
  end
end
function WorkMode:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_workMode.stateMax == 0 then
    return
  end
  if self.getFoldAnimTime ~= nil then
    local foldAnimTime = self:getFoldAnimTime()
    if foldAnimTime ~= 0 then
      -- if v6 ~= v0.spec_foldable.foldMiddleAnimTime then goto L105 end
    end
    for v11, v12 in pairs(v5.workModes[v5.state].animations) do
      if not v12.repeatAfterUnfolding then
        continue
      end
      if not not v12.repeated then
        continue
      end
      local v13 = self:getAnimationTime(v12.animName)
      if v12.stopTime ~= nil then
        self:setAnimationStopTime(v12.animName, v12.stopTime)
        local v14 = math.abs(v12.animSpeed)
        if v12.stopTime < v13 then
          local v15 = math.abs(v12.animSpeed)
        end
        local v19 = Utils.getNoNil(v12.repeatStartTime, v13)
        self:playAnimation(v12.animName, v14, v19, true)
      else
        local v18 = Utils.getNoNil(v12.repeatStartTime, v13)
        self:playAnimation(v12.animName, v12.animSpeed, v18, true)
      end
      v12.repeated = true
    end
    if v5.playDelayedLoweringAnimation ~= nil then
      if foldAnimTime ~= 1 and foldAnimTime ~= 0 then
        -- if v6 ~= v0.spec_foldable.foldMiddleAnimTime then goto L130 end
      end
      WorkMode.onSetLowered(self, v5.playDelayedLoweringAnimation)
      v5.playDelayedLoweringAnimation = nil
    end
  end
end
function WorkMode:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_workMode.stateMax == 0 then
    return
  end
  local v9 = v9:getText("action_workModeSelected")
  local v8 = string.format(v9, v4.workModes[v4.state].name)
  allowWorkModeChange:addExtraPrintText(...)
  local allowWorkModeChange = self:getIsWorkModeChangeAllowed()
  if v4.actionEvents[InputAction.TOGGLE_WORKMODE] ~= nil then
    v8:setActionEventActive(v4.actionEvents[InputAction.TOGGLE_WORKMODE].actionEventId, allowWorkModeChange)
  end
  for v11, v12 in ipairs(v4.workModes) do
    if not (v12.inputAction ~= nil) then
      continue
    end
    if not (v4.actionEvents[v12.inputAction] ~= nil) then
      continue
    end
    v13:setActionEventActive(v4.actionEvents[v12.inputAction].actionEventId, allowWorkModeChange)
  end
end
function WorkMode.onDeactivate(v0)
  WorkMode.deactivateWindrowerEffects(v0)
end
function WorkMode:deactivateWindrowerEffects()
  if self.isClient then
    for v5, v6 in pairs(self.spec_workMode.workModes) do
      if not (v6.windrowerEffects ~= nil) then
        continue
      end
      v7:stopEffects(v6.windrowerEffects)
    end
  end
end
function WorkMode:setWorkMode(state, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L37
  end
  if g_server ~= nil then
    local v6 = SetWorkModeEvent.new(self, state)
    v4:broadcastEvent(v6, nil, nil, self)
  else
    local v4 = v4:getServerConnection()
    v6 = SetWorkModeEvent.new(self, state)
    v4:sendEvent(...)
  end
  if state ~= v3.state then
    if v3.workModes[v3.state].animations ~= nil then
      for v8, v9 in pairs(v3.workModes[v3.state].animations) do
        local v10 = self:getAnimationTime(v9.animName)
        if not (v9.stopTime == nil) then
          continue
        end
        self:playAnimation(v9.animName, -v9.animSpeed, v10, noEventSend)
      end
      v5:stopAnimations(v4.animationNodes)
    end
    if v3.workModes[state].animations ~= nil then
      for v9, v10 in pairs(v3.workModes[state].animations) do
        local v11 = self:getAnimationTime(v10.animName)
        if v10.stopTime ~= nil then
          self:setAnimationStopTime(v10.animName, v10.stopTime)
          local v12 = math.abs(v10.animSpeed)
          if v10.stopTime < v11 then
            local v13 = math.abs(v10.animSpeed)
          end
          self:playAnimation(v10.animName, v12, v11, noEventSend)
        else
          self:playAnimation(v10.animName, v10.animSpeed, v11, noEventSend)
        end
      end
      v6 = self:getIsTurnedOn()
      if v6 then
        v6:startAnimations(v5.animationNodes)
      end
    end
    v6 = self:getIsTurnedOn()
    if v6 then
      for v9, v10 in pairs(v5.turnedOnAnimations) do
        v11 = self:getIsAnimationPlaying(v10.name)
        if v11 then
          -- TODO: structure LOP_FORNPREP (pc 182, target 227)
          if v3.workModes[1] ~= v5 then
            -- TODO: structure LOP_FORNPREP (pc 193, target 226)
            if v3.workModes[1].turnedOnAnimations[1].name == v10.name and self.spec_animatedVehicle.animations[v10.name].currentSpeed ~= 0 then
              v10.currentSpeed = self.spec_animatedVehicle.animations[v10.name].currentSpeed / v10.speedScale
              v3.workModes[1].turnedOnAnimations[1].currentSpeed = 0
              v3.workModes[1].turnedOnAnimations[1].speedDirection = 0
            end
            -- TODO: structure LOP_FORNLOOP (pc 225, target 194)
          end
          -- TODO: structure LOP_FORNLOOP (pc 226, target 183)
        end
        v10.speedDirection = 1
      end
    end
    for v9, v10 in pairs(v4.windrowerEffects) do
      v11:stopEffect(v10)
    end
    if v5.movingTool ~= nil then
      if v5.movingToolMinRot ~= nil then
        v5.movingTool.rotMin = v5.movingToolMinRot
      end
      if v5.movingToolMaxRot ~= nil then
        v6.rotMax = v5.movingToolMaxRot
      end
      if self.isClient then
        v7:setMinMax(v6.rotMin, v6.rotMax)
      end
    end
  end
  if self.spec_workArea ~= nil then
    for v9, v10 in pairs(v3.workModes[state].workAreas) do
      if not (v5[v10.workAreaIndex] ~= nil) then
        continue
      end
      v5[v10.workAreaIndex].dropWindrowWorkAreaIndex = v10.dropAreaIndex
      v5[v10.workAreaIndex].dropAreaIndex = v10.dropAreaIndex
    end
  end
  v3.state = state
end
function WorkMode:getIsWorkAreaActive(superFunc, workArea)
  if self.spec_workMode.stateMax == 0 then
    return superFunc(self, workArea)
  end
  for v7, v8 in pairs(v3.workModes[v3.state].workAreas) do
    if not (workArea.index == v8.workAreaIndex) then
      continue
    end
    if not (v8.dropAreaIndex == 0) then
      continue
    end
    return false
  end
  v4 = superFunc(self, workArea)
  return v4
end
function WorkMode.getCanBeSelected(v0, v1)
  return true
end
function WorkMode:getAllowsLowering(superFunc)
  local v2, v3 = superFunc(self)
  if 0 < #self.spec_workMode.workModes and 0 >= #self.spec_workMode.workModes[self.spec_workMode.state].loweringAnimations then
  end
  return v2 or v5, v3
end
function WorkMode:loadSprayTypeFromXML(superFunc, xmlFile, key, sprayType)
  local v5 = v5:getValue(key .. "#workModeIndex")
  sprayType.workModeIndex = v5
  v5 = superFunc(self, xmlFile, key, sprayType)
  return v5
end
function WorkMode:getIsSprayTypeActive(superFunc, sprayType)
  if sprayType.workModeIndex ~= nil and self.spec_workMode.state ~= sprayType.workModeIndex then
    return false
  end
  return superFunc(self, sprayType)
end
function WorkMode:loadMovingToolFromXML(superFunc, xmlFile, key, entry)
  local v5 = superFunc(self, xmlFile, key, entry)
  if not v5 then
    return false
  end
  v5 = v5:getValue(key .. "#allowWhileChangingWorkMode", true)
  entry.allowWhileChangingWorkMode = v5
  return true
end
function WorkMode:getIsMovingToolActive(superFunc, movingTool)
  if not movingTool.allowWhileChangingWorkMode then
    -- TODO: structure LOP_FORNPREP (pc 10, target 33)
    for v10 = 1, #self.spec_workMode.workModes[1].animations do
      local v11 = self:getIsAnimationPlaying(v7.animations[v10].animName)
      if v11 then
        return false
      end
      -- TODO: structure LOP_FORNLOOP (pc 31, target 20)
    end
  end
  return superFunc(self, movingTool)
end
function WorkMode:getAreEffectsVisible(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  if 0 < self.spec_workMode.stateMax then
    -- TODO: structure LOP_FORNPREP (pc 18, target 41)
    for v9 = 1, #self.spec_workMode.workModes[1].animations do
      local v10 = self:getIsAnimationPlaying(v6.animations[v9].animName)
      if v10 then
        return false
      end
      -- TODO: structure LOP_FORNLOOP (pc 39, target 28)
    end
  end
  return true
end
function WorkMode:getIsWorkModeChangeAllowed()
  if self.getFoldAnimTime ~= nil then
    local v2 = self:getFoldAnimTime()
    if self.spec_workMode.foldMaxLimit >= v2 then
      v2 = self:getFoldAnimTime()
      -- if v2 >= v0.spec_workMode.foldMinLimit then goto L22 end
    end
    return false
  end
  if not v1.allowChangeOnLowered then
    v2 = self:getAttacherVehicle()
    if v2 ~= nil then
      local v3 = v2:getAttacherJointIndexFromObject(self)
      local v4 = v2:getAttacherJointByJointDescIndex(v3)
      if v4.moveDown then
        return false
      end
    end
  end
  return true
end
function WorkMode:onTurnedOff()
  if self.spec_workMode.stateMax == 0 then
    return
  end
  if self.isClient then
    WorkMode.deactivateWindrowerEffects(self)
    for v6, v7 in pairs(v1.workModes[v1.state].turnedOnAnimations) do
      v7.speedDirection = -1
    end
    v3:stopAnimations(v2.animationNodes)
  end
end
function WorkMode:onTurnedOn()
  if self.spec_workMode.stateMax == 0 then
    return
  end
  if self.isClient then
    for v6, v7 in pairs(v1.workModes[v1.state].turnedOnAnimations) do
      v7.speedDirection = 1
    end
    v3:startAnimations(v2.animationNodes)
  end
end
function WorkMode:onSetLowered(lowered)
  if self.spec_workMode.stateMax == 0 then
    return
  end
  if self.getFoldAnimTime ~= nil then
    local foldAnimTime = self:getFoldAnimTime()
    if foldAnimTime ~= 1 and foldAnimTime ~= 0 and foldAnimTime ~= self.foldMiddleAnimTime then
      v2.playDelayedLoweringAnimation = lowered
      return
    end
  end
  for v7, v8 in pairs(v2.workModes[v2.state].loweringAnimations) do
    if lowered then
      local v9 = self:getAnimationTime(v8.name)
      if not (v9 < 1) then
        continue
      end
      self:playAnimation(v8.name, v8.speed, nil, true)
    else
      v9 = self:getAnimationTime(v8.name)
      if not (0 < v9) then
        continue
      end
      self:playAnimation(v8.name, -v8.speed, nil, true)
    end
  end
end
function WorkMode:onFoldStateChanged(direction, moveToMiddle)
  if self.spec_workMode.stateMax == 0 then
    return
  end
  if 0 < direction then
    for v8, v9 in pairs(v3.workModes[v3.state].animations) do
      if not v9.repeatAfterUnfolding then
        continue
      end
      v9.repeated = false
    end
    v5 = self:getIsLowered()
    if v5 and self.getAttacherVehicle ~= nil then
      v5 = self:getAttacherVehicle()
      if v5 ~= nil then
        v5:handleLowerImplementEvent()
      end
    end
  end
end
function WorkMode:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient and 0 < self.spec_workMode.stateMax then
    self:clearActionEventsTable(self.spec_workMode.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4, v5 = self:addPoweredActionEvent(self.spec_workMode.actionEvents, InputAction.TOGGLE_WORKMODE, self, WorkMode.actionEventWorkModeChange, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
      for v9, v10 in ipairs(self.spec_workMode.workModes) do
        if not (v10.inputAction ~= nil) then
          continue
        end
        local v11, v12 = self:addPoweredActionEvent(v3.actionEvents, v10.inputAction, self, WorkMode.actionEventWorkModeChangeDirect, false, true, false, true, nil)
        v11:setActionEventTextVisibility(v12, false)
      end
    end
  end
end
function WorkMode:actionEventWorkModeChange(actionName, inputValue, callbackState, isAnalog)
  if self.spec_workMode.stateMax < self.spec_workMode.state + 1 then
  end
  if v6 ~= v5.state then
    self:setWorkMode(v6)
  end
end
function WorkMode:actionEventWorkModeChangeDirect(actionName, inputValue, callbackState, isAnalog)
  for v9, v10 in ipairs(self.spec_workMode.workModes) do
    if not (v10.inputAction == InputAction[actionName]) then
      continue
    end
    if not (v9 ~= v5.state) then
      continue
    end
    self:setWorkMode(v9)
  end
end
