-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SetCrabSteeringEvent.lua")
CrabSteering = {STEERING_SEND_NUM_BITS = 3}
function CrabSteering.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Drivable, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Wheels, v0)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(AnimatedVehicle, v0)
    end
  end
  return v1
end
function CrabSteering.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("CrabSteering")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.crabSteering#distFromCompJointToCenterOfBackWheels", "Distance from component joint to center of back wheels")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.crabSteering#aiSteeringModeIndex", "AI steering mode index", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.crabSteering#toggleSpeedFactor", "Toggle speed factor", 1)
  CrabSteering.registerSteeringModeXMLPaths(Vehicle.xmlSchema, "vehicle.crabSteering.steeringMode(?)")
  CrabSteering.registerSteeringModeXMLPaths(Vehicle.xmlSchema, "vehicle.crabSteering.crabSteeringConfiguration(?).steeringMode(?)")
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.crabSteering.dashboards", "state")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_N, "vehicle.crabSteering.dashboards.dashboard(?)#states", "Crab steering states which activate the dashboard")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.wheels.wheelConfigurations.wheelConfiguration(?).wheels#crabSteeringIndex", "Crab steering configuration index")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).crabSteering#state", "Current steering mode", 1)
end
function CrabSteering:registerSteeringModeXMLPaths(v1)
  self:register(XMLValueType.L10N_STRING, v1 .. "#name", "Steering mode name")
  self:register(XMLValueType.STRING, v1 .. "#inputBindingName", "Input action name")
  self:register(XMLValueType.INT, v1 .. ".wheel(?)#index", "Wheel Index")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".wheel(?)#node", "Wheel Node")
  self:register(XMLValueType.ANGLE, v1 .. ".wheel(?)#offset", "Rotation offset", 0)
  self:register(XMLValueType.BOOL, v1 .. ".wheel(?)#locked", "Steering is locked", false)
  self:register(XMLValueType.ANGLE, v1 .. ".articulatedAxis#offset", "Articulated axis offset angle", 0)
  self:register(XMLValueType.BOOL, v1 .. ".articulatedAxis#locked", "Articulated axis is locked", false)
  self:register(XMLValueType.VECTOR_N, v1 .. ".articulatedAxis#wheelIndices", "Wheel indices")
  self:register(XMLValueType.STRING, v1 .. ".animation(?)#name", "Change animation name")
  self:register(XMLValueType.FLOAT, v1 .. ".animation(?)#speed", "Animation speed", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".animation(?)#stopTime", "Animation stop time")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".steeringWheel#node", "Steering wheel node")
  self:register(XMLValueType.ANGLE, v1 .. ".steeringWheel#indoorRotation", "Steering wheel indoor rotation", 0)
  self:register(XMLValueType.ANGLE, v1 .. ".steeringWheel#outdoorRotation", "Steering wheel outdoor rotation", 0)
end
function CrabSteering.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getCanToggleCrabSteering", CrabSteering.getCanToggleCrabSteering)
  SpecializationUtil.registerFunction(vehicleType, "setCrabSteering", CrabSteering.setCrabSteering)
  SpecializationUtil.registerFunction(vehicleType, "updateArticulatedAxisRotation", CrabSteering.updateArticulatedAxisRotation)
end
function CrabSteering.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateSteeringAngle", CrabSteering.updateSteeringAngle)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", CrabSteering.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadWheelsFromXML", CrabSteering.loadWheelsFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateSteeringWheel", CrabSteering.updateSteeringWheel)
end
function CrabSteering.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", CrabSteering)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", CrabSteering)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", CrabSteering)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", CrabSteering)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", CrabSteering)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", CrabSteering)
  SpecializationUtil.registerEventListener(vehicleType, "onAIImplementStart", CrabSteering)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", CrabSteering)
end
function CrabSteering:onLoad(savegame)
  self.spec_crabSteering.state = 1
  self.spec_crabSteering.stateMax = -1
  self.spec_crabSteering.configurationIndex = self.spec_crabSteering.configurationIndex or 1
  local v3 = v3:getValue("vehicle.crabSteering#distFromCompJointToCenterOfBackWheels")
  self.spec_crabSteering.distFromCompJointToCenterOfBackWheels = v3
  v3 = v3:getValue("vehicle.crabSteering#aiSteeringModeIndex", 1)
  self.spec_crabSteering.aiSteeringModeIndex = v3
  v3 = v3:getValue("vehicle.crabSteering#toggleSpeedFactor", 1)
  self.spec_crabSteering.toggleSpeedFactor = v3
  self.spec_crabSteering.currentArticulatedAxisOffset = 0
  self.spec_crabSteering.articulatedAxisOffsetChanged = false
  self.spec_crabSteering.articulatedAxisLastAngle = 0
  self.spec_crabSteering.articulatedAxisChangingTime = 0
  local v4 = string.format("vehicle.crabSteering.crabSteeringConfiguration(%d)", self.spec_crabSteering.configurationIndex - 1)
  local v5 = v5:hasProperty(v4)
  if v5 then
  end
  v2.steeringModes = {}
  while true do
    v6 = string.format("%s.steeringMode(%d)", v3, v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v8 = v8:getValue(v6 .. "#name", "", self.customEnvironment, false)
    v8 = v8:getValue(v6 .. "#inputBindingName")
    if v8 ~= nil then
      if InputAction[v8] ~= nil then
      else
        v12 = tostring(v8)
        Logging.xmlWarning(self.xmlFile, "Invalid inputBindingname '%s' for '%s'", v12, v6)
      end
    end
    v7.wheels = {}
    while true do
      v10 = string.format("%s.wheel(%d)", v6, v9)
      v11 = v11:hasProperty(v10)
      if not v11 then
        break
      end
      v12 = v12:getValue(v10 .. "#index")
      v12 = v12:getValue(v10 .. "#node", nil, self.components, self.i3dMappings)
      if {wheelIndex = v12, wheelNode = v12}.wheelNode ~= nil then
        v12 = self:getWheelByWheelNode({wheelIndex = v12, wheelNode = v12}.wheelNode)
        if v12 ~= nil then
        else
          v16 = v16:getString(v10 .. "#node")
          Logging.xmlError(self.xmlFile, "Invalid wheel node '%s' for '%s'", v16, v10)
        end
      end
      v12 = v12:getValue(v10 .. "#offset", 0)
      v11.offset = v12
      v12 = v12:getValue(v10 .. "#locked", false)
      v11.locked = v12
      v12 = self:getWheels()
      if v12[v11.wheelIndex] ~= nil then
        v12[v11.wheelIndex].steeringOffset = 0
        v12[v11.wheelIndex].forceSteeringAngleUpdate = true
        v12[v11.wheelIndex].rotSpeedBackUp = v12[v11.wheelIndex].rotSpeed
      else
        v16 = tostring(v11.wheelIndex)
        Logging.xmlError(self.xmlFile, "Invalid wheelIndex '%s' for '%s'", v16, v10)
      end
      table.insert(v7.wheels, v11)
    end
    if self.spec_articulatedAxis ~= nil and self.spec_articulatedAxis.componentJoint ~= nil then
      v7.articulatedAxis = {rotSpeedBackUp = self.spec_articulatedAxis.rotSpeed}
      v12 = v12:getValue(v6 .. ".articulatedAxis#offset", 0)
      v7.articulatedAxis.offset = v12
      v12 = v12:getValue(v6 .. ".articulatedAxis#locked", false)
      v7.articulatedAxis.locked = v12
      v12 = v12:getValue(v6 .. ".articulatedAxis#wheelIndices", nil, true)
      v7.articulatedAxis.wheelIndices = v12
    end
    v7.animations = {}
    while true do
      v11 = string.format("%s.animation(%d)", v6, v9)
      v12 = v12:hasProperty(v11)
      if not v12 then
        break
      end
      v12 = v12:getValue(v11 .. "#name")
      v13 = v13:getValue(v11 .. "#speed", 1)
      v14 = v14:getValue(v11 .. "#stopTime")
      if v12 ~= nil then
        v15 = self:getAnimationExists(v12)
        -- if not v15 then goto L408 end
        table.insert(v7.animations, {animName = v12, animSpeed = v13, stopTime = v14})
      else
        v18 = tostring(v12)
        Logging.xmlWarning(self.xmlFile, "Invalid animation '%s' for '%s'", v18, v11)
      end
    end
    v11 = v11:getValue(v6 .. ".steeringWheel#node", nil, self.components, self.i3dMappings)
    if v11 ~= nil then
      v7.steeringWheel = {node = v11}
      v12, v13, v14 = getRotation(v7.steeringWheel.node)
      v7.steeringWheel.lastRotation = v13
      v16 = v16:getValue(v6 .. ".steeringWheel#indoorRotation", 0)
      v7.steeringWheel.indoorRotation = v16
      v16 = v16:getValue(v6 .. ".steeringWheel#outdoorRotation", 0)
      v7.steeringWheel.outdoorRotation = v16
    end
    table.insert(v2.steeringModes, v7)
  end
  v2.stateMax = #v2.steeringModes
  if 2 ^ CrabSteering.STEERING_SEND_NUM_BITS - 1 < v2.stateMax then
    Logging.xmlError(self.xmlFile, "CrabSteering only supports %d steering modes!", 2 ^ CrabSteering.STEERING_SEND_NUM_BITS - 1)
  end
  if 0 >= v2.stateMax then
  end
  v2.hasSteeringModes = true
  if v2.hasSteeringModes then
    self.customSteeringAngleFunction = true
    self:setCrabSteering(1, true)
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L623
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.crabSteering.dashboards", {valueTypeToLoad = "state", valueObject = self.spec_crabSteering, valueFunc = "state", additionalAttributesFunc = CrabSteering.dashboardCrabSteeringAttributes, stateFunc = CrabSteering.dashboardCrabSteeringState})
    return
  end
  SpecializationUtil.removeEventListener(self, "onReadStream", CrabSteering)
  SpecializationUtil.removeEventListener(self, "onWriteStream", CrabSteering)
  SpecializationUtil.removeEventListener(self, "onReadUpdateStream", CrabSteering)
  SpecializationUtil.removeEventListener(self, "onWriteUpdateStream", CrabSteering)
  SpecializationUtil.removeEventListener(self, "onDraw", CrabSteering)
  SpecializationUtil.removeEventListener(self, "onAIImplementStart", CrabSteering)
  SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", CrabSteering)
end
function CrabSteering:onPostLoad(savegame)
  if savegame ~= nil and not savegame.resetVehicles and self.spec_crabSteering.hasSteeringModes then
    local v3 = v3:hasProperty(savegame.key .. ".crabSteering")
    if v3 then
      v3 = v3:getValue(savegame.key .. ".crabSteering#state", 1)
      local v4 = MathUtil.clamp(v3, 1, self.spec_crabSteering.stateMax)
      self:setCrabSteering(v4, true)
      AnimatedVehicle.updateAnimations(self, 99999999, true)
      self:forceUpdateWheelPhysics(99999999)
    end
  end
end
function CrabSteering:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_crabSteering.hasSteeringModes then
    xmlFile:setValue(key .. "#state", self.spec_crabSteering.state)
  end
end
function CrabSteering:onReadStream(streamId, connection)
  local state = streamReadUIntN(streamId, CrabSteering.STEERING_SEND_NUM_BITS)
  self:setCrabSteering(state, true)
  AnimatedVehicle.updateAnimations(self, 99999999, true)
  self:forceUpdateWheelPhysics(99999999)
end
function CrabSteering:onWriteStream(streamId, connection)
  streamWriteUIntN(streamId, self.spec_crabSteering.state, CrabSteering.STEERING_SEND_NUM_BITS)
end
function CrabSteering:onReadUpdateStream(streamId, timestamp, connection)
  if self.spec_articulatedAxis ~= nil and self.spec_articulatedAxis.componentJoint ~= nil then
    local v5 = streamReadFloat32(streamId)
    self.spec_articulatedAxis.curRot = v5
  end
end
function CrabSteering:onWriteUpdateStream(streamId, connection, dirtyMask)
  if self.spec_articulatedAxis ~= nil and self.spec_articulatedAxis.componentJoint ~= nil then
    streamWriteFloat32(streamId, self.spec_articulatedAxis.curRot)
  end
end
function CrabSteering.getCanToggleCrabSteering(v0)
  return true, nil
end
function CrabSteering:setCrabSteering(state, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L37
  end
  if g_server ~= nil then
    local v6 = SetCrabSteeringEvent.new(self, state)
    v4:broadcastEvent(v6, nil, nil, self)
  else
    local v4 = v4:getServerConnection()
    v6 = SetCrabSteeringEvent.new(self, state)
    v4:sendEvent(...)
  end
  if state ~= v3.state then
    if v3.steeringModes[v3.state].animations ~= nil then
      for v8, v9 in pairs(v3.steeringModes[v3.state].animations) do
        local v10 = self:getAnimationTime(v9.animName)
        if not (v9.stopTime == nil) then
          continue
        end
        self:playAnimation(v9.animName, -v9.animSpeed, v10, noEventSend)
      end
    end
    if v3.steeringModes[state].animations ~= nil then
      for v9, v10 in pairs(v3.steeringModes[state].animations) do
        local v11 = self:getAnimationTime(v10.animName)
        if v10.stopTime ~= nil then
          self:setAnimationStopTime(v10.animName, v10.stopTime)
          if v10.stopTime < v11 then
          end
          self:playAnimation(v10.animName, v12, v11, noEventSend)
        else
          self:playAnimation(v10.animName, v10.animSpeed, v11, noEventSend)
        end
      end
    end
  end
  v3.state = state
  if v3.actionEvents[InputAction.TOGGLE_CRABSTEERING] ~= nil then
    v9 = v9:getText("action_steeringModeToggle")
    v8 = string.format(v9, v3.steeringModes[v3.state].name)
    v5:setActionEventText(...)
  end
end
function CrabSteering:updateSteeringAngle(superFunc, wheel, dt, steeringAngle)
  if self.spec_crabSteering.stateMax == 0 then
    return superFunc(self, wheel, dt, steeringAngle)
  end
  -- TODO: structure LOP_FORNPREP (pc 25, target 308)
  if v5.steeringModes[v5.state].wheels[1].wheelIndex == wheel.xmlIndex + 1 then
    local v12 = math.min(1 / (self.lastSpeed * v6.speedRotScale + v6.speedRotScaleOffset), 1)
    if wheel.steeringOffset < v5.steeringModes[v5.state].wheels[1].offset then
      local v14 = math.min(v5.steeringModes[v5.state].wheels[1].offset, wheel.steeringOffset + dt * 0.001 * self.autoRotateBackSpeed * v12 * v5.toggleSpeedFactor)
      wheel.steeringOffset = v14
    elseif v5.steeringModes[v5.state].wheels[1].offset < wheel.steeringOffset then
      v14 = math.max(v5.steeringModes[v5.state].wheels[1].offset, wheel.steeringOffset - dt * 0.001 * self.autoRotateBackSpeed * v12 * v5.toggleSpeedFactor)
      wheel.steeringOffset = v14
    end
    if not v11.locked then
      if 0 < self.rotatedTime then
        -- if v2.rotSpeedBackUp >= 0 then goto L151 end
      elseif wheel.rotSpeedBackUp < 0 then
      end
      if wheel.rotSpeed < wheel.rotSpeedBackUp then
        local v15 = math.min(wheel.rotSpeedBackUp, wheel.rotSpeed + v13)
        wheel.rotSpeed = v15
      elseif wheel.rotSpeedBackUp < wheel.rotSpeed then
        v15 = math.max(wheel.rotSpeedBackUp, wheel.rotSpeed - v13)
        wheel.rotSpeed = v15
      end
    else
      if wheel.steeringOffset >= wheel.steeringAngle then
        -- if v2.steeringOffset >= v4 then goto L229 end
      end
      local v17 = math.min(wheel.steeringAngle, steeringAngle)
      v14 = math.max(wheel.steeringOffset, v17 - v13)
      -- goto L256  (LOP_JUMP +27)
      if wheel.steeringAngle >= wheel.steeringOffset then
        -- if v14 >= v2.steeringOffset then goto L256 end
      end
      v17 = math.max(wheel.steeringAngle, steeringAngle)
      v14 = math.min(wheel.steeringOffset, v17 + v13)
      if v14 == wheel.steeringOffset then
        wheel.rotSpeed = 0
      elseif wheel.rotSpeed < 0 then
        v14 = math.min(0, wheel.rotSpeed + v13)
        wheel.rotSpeed = v14
      else
        if 0 < wheel.rotSpeed then
          v14 = math.max(0, wheel.rotSpeed - v13)
          wheel.rotSpeed = v14
        end
      end
    end
    v14 = MathUtil.clamp(steeringAngle, wheel.rotMin, wheel.rotMax)
    return v14
  end
  -- TODO: structure LOP_FORNLOOP (pc 307, target 26)
  return steeringAngle
end
function CrabSteering:updateArticulatedAxisRotation(steeringAngle, dt)
  if self.spec_crabSteering.stateMax == 0 then
    return steeringAngle
  end
  if not self.isServer then
    return steeringAngle.curRot
  end
  if dt.steeringModes[dt.state].articulatedAxis == nil then
    return steeringAngle
  end
  local v7 = math.min(1 / (self.lastSpeed * v5.speedRotScale + v5.speedRotScaleOffset), 1)
  if dt.currentArticulatedAxisOffset < v6.articulatedAxis.offset then
    local v9 = math.min(v6.articulatedAxis.offset, dt.currentArticulatedAxisOffset + dt * 0.001 * self.autoRotateBackSpeed * v7 * dt.toggleSpeedFactor)
    dt.currentArticulatedAxisOffset = v9
  elseif v6.articulatedAxis.offset < dt.currentArticulatedAxisOffset then
    v9 = math.max(v6.articulatedAxis.offset, dt.currentArticulatedAxisOffset - dt * 0.001 * self.autoRotateBackSpeed * v7 * dt.toggleSpeedFactor)
    dt.currentArticulatedAxisOffset = v9
  end
  if v6.articulatedAxis.locked then
    if 0 < steeringAngle.rotSpeed then
      v9 = math.max(0, steeringAngle.rotSpeed - v8)
      steeringAngle.rotSpeed = v9
      -- goto L180  (LOP_JUMP +62)
    end
    -- if v4.rotSpeed >= 0 then goto L180 end
    v9 = math.min(0, steeringAngle.rotSpeed + v8)
    steeringAngle.rotSpeed = v9
  elseif v6.articulatedAxis.rotSpeedBackUp < steeringAngle.rotSpeed then
    v9 = math.max(v6.articulatedAxis.rotSpeedBackUp, steeringAngle.rotSpeed - v8)
    steeringAngle.rotSpeed = v9
  else
    if steeringAngle.rotSpeed < v6.articulatedAxis.rotSpeedBackUp then
      v9 = math.min(v6.articulatedAxis.rotSpeedBackUp, steeringAngle.rotSpeed + v8)
      steeringAngle.rotSpeed = v9
    end
  end
  if 0 < self.rotatedTime * v6.articulatedAxis.rotSpeedBackUp then
  else
  end
  local v11 = math.abs(steeringAngle.rotSpeed)
  local v12 = math.abs(v6.articulatedAxis.rotSpeedBackUp)
  local v13 = math.abs(self.rotatedTime)
  v11 = table.getn(v6.articulatedAxis.wheelIndices)
  if 0 < v11 then
    -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L369
    -- if 0 > v0.movingDirection then goto L369 end
    v11 = self:getWheels()
    v13 = MathUtil.sign(v6.articulatedAxis.rotSpeedBackUp)
    for v18, v19 in pairs(v6.articulatedAxis.wheelIndices) do
    end
    for v19, v20 in pairs(v6.articulatedAxis.wheelIndices) do
      local v22 = getWheelShapeAxleSpeed(v11[v20].node, v11[v20].wheelShape)
      if not v11[v20].hasGroundContact then
        continue
      end
      local v23, v24 = getWheelShapeSlip(v11[v20].node, v11[v20].wheelShape)
      local v27 = math.min(1, v23)
    end
    v18 = math.sin(v13)
    v19 = math.cos(v13)
    v20 = math.atan2(v18 * v15 / v14 * 0.001 * dt, dt.distFromCompJointToCenterOfBackWheels - v19 * v15 / v14 * 0.001 * dt)
    local v21 = MathUtil.sign(v6.articulatedAxis.rotSpeedBackUp)
    dt.articulatedAxisOffsetChanged = true
    dt.articulatedAxisLastAngle = v21 * (v12 + v20)
  else
    if dt.articulatedAxisOffsetChanged then
      dt.articulatedAxisOffsetChanged = false
    end
    if 0 < v11 then
      dt.articulatedAxisChangingTime = v11 - dt
    end
  end
  v13 = math.min(steeringAngle.rotMax, steeringAngle)
  v11 = math.max(...)
  return v11
end
function CrabSteering:getCanBeSelected(superFunc)
  if not self.spec_crabSteering.hasSteeringModes then
    local dt = superFunc(self)
  end
  return dt
end
function CrabSteering:loadWheelsFromXML(superFunc, xmlFile, key, wheelConfigurationI)
  superFunc(self, xmlFile, key, wheelConfigurationI)
  local v6 = xmlFile:getValue(key .. ".wheels#crabSteeringIndex")
  self.spec_crabSteering.configurationIndex = v6
end
function CrabSteering:updateSteeringWheel(superFunc, steeringWheel, dt, direction)
  if self.spec_crabSteering.hasSteeringModes and self.spec_crabSteering.steeringModes[self.spec_crabSteering.state].steeringWheel ~= nil then
  end
  superFunc(self, steeringWheel, dt, direction)
end
function CrabSteering:onAIImplementStart()
  self:setCrabSteering(self.spec_crabSteering.aiSteeringModeIndex)
end
function CrabSteering:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient and self.spec_crabSteering.hasSteeringModes then
    self:clearActionEventsTable(self.spec_crabSteering.actionEvents)
    if isActiveForInputIgnoreSelection then
      local steeringAngle, v5 = self:addPoweredActionEvent(self.spec_crabSteering.actionEvents, InputAction.TOGGLE_CRABSTEERING, self, CrabSteering.actionEventToggleCrabSteeringModes, false, true, false, true, 1)
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
      local v10 = v10:getText("action_steeringModeToggle")
      local v9 = string.format(v10, self.spec_crabSteering.steeringModes[self.spec_crabSteering.state].name)
      v6:setActionEventText(...)
      for v9, v10 in pairs(self.spec_crabSteering.steeringModes) do
        if not (v10.inputAction ~= nil) then
          continue
        end
        local v11, v12 = self:addPoweredActionEvent(dt.actionEvents, v10.inputAction, self, CrabSteering.actionEventSetCrabSteeringMode, false, true, false, true, nil)
        v11:setActionEventTextVisibility(v12, false)
        v11:setActionEventTextPriority(v12, GS_PRIO_NORMAL)
      end
      v6, v7 = self:addPoweredActionEvent(dt.actionEvents, InputAction.TOGGLE_CRABSTEERING_BACK, self, CrabSteering.actionEventToggleCrabSteeringModes, false, true, false, true, -1)
      v6:setActionEventTextVisibility(v7, false)
    end
  end
end
function CrabSteering:actionEventToggleCrabSteeringModes(actionName, inputValue, callbackState, isAnalog)
  local v5, v6 = self:getCanToggleCrabSteering()
  if v5 then
    if self.spec_crabSteering.stateMax < self.spec_crabSteering.state + callbackState then
    elseif self.spec_crabSteering.state + callbackState < 1 then
    end
    -- if v8 == v7.state then goto L38 end
    self:setCrabSteering(v8)
    return
  end
  if v6 ~= nil then
    v7:showBlinkingWarning(v6, 2000)
  end
end
function CrabSteering:actionEventSetCrabSteeringMode(actionName, inputValue, callbackState, isAnalog)
  local v5, v6 = self:getCanToggleCrabSteering()
  if v5 then
    for v12, v13 in pairs(self.spec_crabSteering.steeringModes) do
      if not (v13.inputAction == InputAction[actionName]) then
        continue
      end
      break
    end
    -- if v8 == v7.state then goto L43 end
    self:setCrabSteering(v8)
    return
  end
  if v6 ~= nil then
    v7:showBlinkingWarning(v6, 2000)
  end
end
function CrabSteering.dashboardCrabSteeringAttributes(v0, actionName, inputValue, callbackState, isAnalog)
  local v5 = actionName:getValue(inputValue .. "#states", nil, true)
  callbackState.crabSteeringStates = v5
  return true
end
function CrabSteering:dashboardCrabSteeringState(dashboard, newValue, minValue, maxValue, isActive)
  if dashboard.crabSteeringStates ~= nil then
    for v10, v11 in pairs(dashboard.crabSteeringStates) do
      if not (self.spec_crabSteering.state == v11) then
        continue
      end
    end
  end
  Dashboard.defaultDashboardStateFunc(self, dashboard, v6, minValue, maxValue, isActive)
end
