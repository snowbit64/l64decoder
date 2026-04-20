-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SetCruiseControlStateEvent.lua")
source("dataS/scripts/vehicles/specializations/events/SetCruiseControlSpeedEvent.lua")
Drivable = {CRUISECONTROL_STATE_OFF = 0, CRUISECONTROL_STATE_ACTIVE = 1, CRUISECONTROL_STATE_FULL = 2, CRUISECONTROL_FULL_TOGGLE_TIME = 500}
function Drivable.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Enterable, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Motorized, v0)
  end
  return v1
end
function Drivable.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Drivable")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.drivable#reverserDirection", "Default state of reverser direction (when set to -1 the driving direction is inverted)", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.drivable#steeringDirection", "Default state of steering direction (when set to -1 the steering direction is inverted)", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.drivable.speedRotScale#scale", "Speed dependent steering speed scale", 80)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.drivable.speedRotScale#offset", "Speed dependent steering speed offset", 0.7)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.drivable.cruiseControl#maxSpeed", "Max. cruise control speed", "Max. vehicle speed")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.drivable.cruiseControl#minSpeed", "Min. cruise control speed", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.drivable.cruiseControl#maxSpeedReverse", "Max. cruise control speed in reverse", "Max. value reverse speed")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.drivable.cruiseControl#enabled", "Cruise control enabled", true)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.drivable.steeringWheel#node", "Steering wheel node")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.drivable.steeringWheel#indoorRotation", "Steering wheel indoor rotation", 0)
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.drivable.steeringWheel#outdoorRotation", "Steering wheel outdoor rotation", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.drivable.idleTurning#allowed", "When vehicle is not moving and steering keys are pressed turns on the same spot", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.drivable.idleTurning#updateSteeringWheel", "Update steering wheel", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.drivable.idleTurning#lockDirection", "Defines if the direction is locked until player accelerates again", true)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.drivable.idleTurning#direction", "Driving direction [-1, 1]", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.drivable.idleTurning#maxSpeed", "Max. speed while turning", 10)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.drivable.idleTurning#steeringFactor", "Steering speed factor", 100)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.drivable.idleTurning.wheel(?)#node", "Wheel node to change")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.drivable.idleTurning.wheel(?)#steeringAngle", "Steering angle while idle turning")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.drivable.idleTurning.wheel(?)#inverted", "Acceleration is inverted", false)
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.drivable.dashboards", "cruiseControl | directionForward | directionBackward | movingDirection | cruiseControlActive | accelerationAxis | decelerationAxis | ac_decelerationAxis | steeringAngle | combinedPedalLeft | combinedPedalRight")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.drivable.sounds", "waterSplash")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).drivable#cruiseControl", "Current cruise control speed")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).drivable#cruiseControlReverse", "Current cruise control speed reverse")
end
function Drivable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "updateSteeringWheel", Drivable.updateSteeringWheel)
  SpecializationUtil.registerFunction(vehicleType, "setCruiseControlState", Drivable.setCruiseControlState)
  SpecializationUtil.registerFunction(vehicleType, "setCruiseControlMaxSpeed", Drivable.setCruiseControlMaxSpeed)
  SpecializationUtil.registerFunction(vehicleType, "getCruiseControlState", Drivable.getCruiseControlState)
  SpecializationUtil.registerFunction(vehicleType, "getCruiseControlSpeed", Drivable.getCruiseControlSpeed)
  SpecializationUtil.registerFunction(vehicleType, "getCruiseControlMaxSpeed", Drivable.getCruiseControlMaxSpeed)
  SpecializationUtil.registerFunction(vehicleType, "getCruiseControlDisplayInfo", Drivable.getCruiseControlDisplayInfo)
  SpecializationUtil.registerFunction(vehicleType, "getAxisForward", Drivable.getAxisForward)
  SpecializationUtil.registerFunction(vehicleType, "getAccelerationAxis", Drivable.getAccelerationAxis)
  SpecializationUtil.registerFunction(vehicleType, "getDecelerationAxis", Drivable.getDecelerationAxis)
  SpecializationUtil.registerFunction(vehicleType, "getCruiseControlAxis", Drivable.getCruiseControlAxis)
  SpecializationUtil.registerFunction(vehicleType, "getAcDecelerationAxis", Drivable.getAcDecelerationAxis)
  SpecializationUtil.registerFunction(vehicleType, "getDashboardSteeringAxis", Drivable.getDashboardSteeringAxis)
  SpecializationUtil.registerFunction(vehicleType, "setReverserDirection", Drivable.setReverserDirection)
  SpecializationUtil.registerFunction(vehicleType, "getReverserDirection", Drivable.getReverserDirection)
  SpecializationUtil.registerFunction(vehicleType, "getSteeringDirection", Drivable.getSteeringDirection)
  SpecializationUtil.registerFunction(vehicleType, "getIsDrivingForward", Drivable.getIsDrivingForward)
  SpecializationUtil.registerFunction(vehicleType, "getIsDrivingBackward", Drivable.getIsDrivingBackward)
  SpecializationUtil.registerFunction(vehicleType, "getDrivingDirection", Drivable.getDrivingDirection)
  SpecializationUtil.registerFunction(vehicleType, "getIsVehicleControlledByPlayer", Drivable.getIsVehicleControlledByPlayer)
  SpecializationUtil.registerFunction(vehicleType, "updateVehiclePhysics", Drivable.updateVehiclePhysics)
  SpecializationUtil.registerFunction(vehicleType, "setAccelerationPedalInput", Drivable.setAccelerationPedalInput)
  SpecializationUtil.registerFunction(vehicleType, "setBrakePedalInput", Drivable.setBrakePedalInput)
  SpecializationUtil.registerFunction(vehicleType, "setTargetSpeedAndDirection", Drivable.setTargetSpeedAndDirection)
  SpecializationUtil.registerFunction(vehicleType, "setSteeringInput", Drivable.setSteeringInput)
  SpecializationUtil.registerFunction(vehicleType, "brakeToStop", Drivable.brakeToStop)
  SpecializationUtil.registerFunction(vehicleType, "updateSteeringAngle", Drivable.updateSteeringAngle)
end
function Drivable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsManualDirectionChangeAllowed", Drivable.getIsManualDirectionChangeAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getMapHotspotRotation", Drivable.getMapHotspotRotation)
end
function Drivable.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onVehiclePhysicsUpdate")
end
function Drivable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Drivable)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Drivable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Drivable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Drivable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Drivable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Drivable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Drivable)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Drivable)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", Drivable)
  SpecializationUtil.registerEventListener(vehicleType, "onSetBroken", Drivable)
end
function Drivable:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.steering#index", "vehicle.drivable.steeringWheel#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.steering#node", "vehicle.drivable.steeringWheel#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.cruiseControl", "vehicle.drivable.cruiseControl")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.indoorHud.cruiseControl", "vehicle.drivable.dashboards.dashboard with valueType 'cruiseControl'")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.showChangeToolSelectionHelp")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.maxRotatedTimeSpeed#value")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.speedRotScale#scale", "vehicle.drivable.speedRotScale#scale")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.speedRotScale#offset", "vehicle.drivable.speedRotScale#offset")
  self.spec_drivable.showToolSelectionHud = true
  self.spec_drivable.doHandbrake = false
  self.spec_drivable.doHandbrakeSend = false
  local v3 = v3:getValue("vehicle.drivable#reverserDirection", 1)
  self.spec_drivable.reverserDirection = v3
  v3 = v3:getValue("vehicle.drivable#steeringDirection", 1)
  self.spec_drivable.steeringDirection = v3
  self.spec_drivable.lastInputValues = {axisAccelerate = 0, axisBrake = 0, axisSteer = 0, axisSteerIsAnalog = false, axisSteerDeviceCategory = InputDevice.CATEGORY.UNKNOWN, cruiseControlValue = 0, cruiseControlState = 0}
  self.spec_drivable.axisForward = 0
  self.spec_drivable.axisForwardSend = 0
  self.spec_drivable.axisSide = 0
  self.spec_drivable.axisSideSend = 0
  self.spec_drivable.axisSideLast = 0
  self.spec_drivable.lastIsControlled = false
  v3 = v3:getValue("vehicle.drivable.speedRotScale#scale", 80)
  self.spec_drivable.speedRotScale = v3
  v3 = v3:getValue("vehicle.drivable.speedRotScale#offset", 0.7)
  self.spec_drivable.speedRotScaleOffset = v3
  v3 = self:getMotor()
  self.spec_drivable.cruiseControl = {}
  local v10 = v3:getMaximumForwardSpeed()
  local v8 = MathUtil.round(v10 * 3.6)
  local v5 = v5:getValue(...)
  self.spec_drivable.cruiseControl.maxSpeed = v5
  v8 = math.min(1, self.spec_drivable.cruiseControl.maxSpeed)
  v5 = v5:getValue(...)
  self.spec_drivable.cruiseControl.minSpeed = v5
  self.spec_drivable.cruiseControl.speed = self.spec_drivable.cruiseControl.maxSpeed
  v10 = v3:getMaximumBackwardSpeed()
  v8 = MathUtil.round(v10 * 3.6)
  v5 = v5:getValue(...)
  self.spec_drivable.cruiseControl.maxSpeedReverse = v5
  self.spec_drivable.cruiseControl.speedReverse = self.spec_drivable.cruiseControl.maxSpeedReverse
  v5 = v5:getValue("vehicle.drivable.cruiseControl#enabled", true)
  self.spec_drivable.cruiseControl.isActive = v5
  self.spec_drivable.cruiseControl.state = Drivable.CRUISECONTROL_STATE_OFF
  self.spec_drivable.cruiseControl.topSpeedTime = 1000
  self.spec_drivable.cruiseControl.changeDelay = 250
  self.spec_drivable.cruiseControl.changeCurrentDelay = 0
  self.spec_drivable.cruiseControl.changeMultiplier = 1
  self.spec_drivable.cruiseControl.speedSent = self.spec_drivable.cruiseControl.speed
  self.spec_drivable.cruiseControl.speedReverseSent = self.spec_drivable.cruiseControl.speedReverse
  local v4 = v4:getValue("vehicle.drivable.steeringWheel#node", nil, self.components, self.i3dMappings)
  if v4 ~= nil then
    self.spec_drivable.steeringWheel = {node = v4}
    local v5, v6, v7 = getRotation(self.spec_drivable.steeringWheel.node)
    self.spec_drivable.steeringWheel.lastRotation = v6
    local v9 = v9:getValue("vehicle.drivable.steeringWheel#indoorRotation", 0)
    self.spec_drivable.steeringWheel.indoorRotation = v9
    v9 = v9:getValue("vehicle.drivable.steeringWheel#outdoorRotation", 0)
    self.spec_drivable.steeringWheel.outdoorRotation = v9
  end
  v5 = v5:getValue("vehicle.drivable.idleTurning#allowed", false)
  v2.idleTurningAllowed = v5
  v5 = v5:getValue("vehicle.drivable.idleTurning#updateSteeringWheel", true)
  v2.idleTurningUpdateSteeringWheel = v5
  v5 = v5:getValue("vehicle.drivable.idleTurning#lockDirection", true)
  v2.idleTurningLockDirection = v5
  v5 = v5:getValue("vehicle.drivable.idleTurning#direction", 1)
  v2.idleTurningDrivingDirection = v5
  v5 = v5:getValue("vehicle.drivable.idleTurning#maxSpeed", 10)
  v2.idleTurningMaxSpeed = v5
  v5 = v5:getValue("vehicle.drivable.idleTurning#steeringFactor", 100)
  v2.idleTurningSteeringFactor = v5
  v2.idleTurningWheels = {}
  v5:iterate("vehicle.drivable.idleTurning.wheel", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    if v2 ~= nil then
      local v4 = v4:getValue(savegame .. "#steeringAngle", 0)
      v4 = v4:getValue(savegame .. "#inverted", false)
      table.insert(u1.idleTurningWheels, {wheelNode = v2, steeringAngle = v4, inverted = v4})
    end
  end)
  v2.idleTurningActive = false
  v2.idleTurningActiveSend = false
  v2.idleTurningDirection = 0
  if not self.customSteeringAngleFunction and 0 >= #v2.idleTurningWheels then
  end
  self.customSteeringAngleFunction = v5
  v2.forceFeedback = {isActive = false, device = nil, binding = nil, axisIndex = 0}
  v6 = v6:getValue(GameSettings.SETTING.FORCE_FEEDBACK)
  v2.forceFeedback.intensity = v6
  if self.loadDashboardsFromXML ~= nil then
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "cruiseControl", valueObject = v2.cruiseControl, valueFunc = "speed"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "directionForward", valueObject = self, valueFunc = "getIsDrivingForward"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "directionBackward", valueObject = self, valueFunc = "getIsDrivingBackward"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "movingDirection", valueObject = self, valueFunc = "getDrivingDirection", minFunc = -1, maxFunc = 1})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "cruiseControlActive", valueObject = v2.cruiseControl, valueFunc = "state", valueCompare = Drivable.CRUISECONTROL_STATE_ACTIVE})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "accelerationAxis", valueObject = self, valueFunc = "getAccelerationAxis"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "decelerationAxis", valueObject = self, valueFunc = "getDecelerationAxis"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "ac_decelerationAxis", valueObject = self, valueFunc = "getAcDecelerationAxis"})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "steeringAngle", valueObject = self, valueFunc = "getDashboardSteeringAxis", minFunc = -1, maxFunc = 1})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "combinedPedalLeft", valueObject = self, valueFunc = Drivable.getDashboardCombinedPedalLeft, minFunc = -1, maxFunc = 1})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.drivable.dashboards", {valueTypeToLoad = "combinedPedalRight", valueObject = self, valueFunc = Drivable.getDashboardCombinedPedalRight, minFunc = -1, maxFunc = 1})
  end
  if self.isClient then
    v2.samples = {}
    v6 = v6:loadSampleFromXML(self.xmlFile, "vehicle.drivable.sounds", "waterSplash", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.waterSplash = v6
    if self.isClient and g_isDevelopmentVersion and not GS_IS_MOBILE_VERSION and v2.samples.waterSplash == nil then
      Logging.xmlDevWarning(self.xmlFile, "Missing drivable waterSplash sound")
    end
  end
  if savegame ~= nil then
    v5 = v5:getValue(savegame.key .. ".drivable#cruiseControl")
    v6 = v6:getValue(savegame.key .. ".drivable#cruiseControlReverse")
    self:setCruiseControlMaxSpeed(v5, v6)
  end
  v5 = self:getNextDirtyFlag()
  v2.dirtyFlag = v5
end
function Drivable:onDelete()
  v2:deleteSamples(self.spec_drivable.samples)
end
function Drivable:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#cruiseControl", self.spec_drivable.cruiseControl.speed)
  xmlFile:setValue(key .. "#cruiseControlReverse", self.spec_drivable.cruiseControl.speedReverse)
end
function Drivable:onReadStream(streamId, connection)
  if self.spec_drivable.cruiseControl.isActive then
    local v6 = streamReadUIntN(streamId, 2)
    self:setCruiseControlState(v6, true)
    local v4 = streamReadUInt8(streamId)
    local v5 = streamReadUInt8(streamId)
    self:setCruiseControlMaxSpeed(v4, v5)
    self.spec_drivable.cruiseControl.speedSent = v4
    self.spec_drivable.cruiseControl.speedReverseSent = v5
  end
end
function Drivable:onWriteStream(streamId, connection)
  if self.spec_drivable.cruiseControl.isActive then
    streamWriteUIntN(streamId, self.spec_drivable.cruiseControl.state, 2)
    streamWriteUInt8(streamId, self.spec_drivable.cruiseControl.speed)
    streamWriteUInt8(streamId, self.spec_drivable.cruiseControl.speedReverse)
  end
end
function Drivable:onReadUpdateStream(streamId, timestamp, connection)
  local v5 = streamReadBool(streamId)
  if v5 then
    local v8 = streamReadUIntN(streamId, 10)
    self.spec_drivable.axisForward = v8 / 1023 * 2 - 1
    v5 = math.abs(self.spec_drivable.axisForward)
    if v5 < 0.00099 then
      self.spec_drivable.axisForward = 0
    end
    v8 = streamReadUIntN(streamId, 10)
    v4.axisSide = v8 / 1023 * 2 - 1
    v5 = math.abs(v4.axisSide)
    if v5 < 0.00099 then
      v4.axisSide = 0
    end
    v5 = streamReadBool(streamId)
    v4.doHandbrake = v5
    v5 = streamReadBool(streamId)
    v4.idleTurningActive = v5
  end
end
function Drivable:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v8 = bitAND(dirtyMask, self.spec_drivable.dirtyFlag)
  if v8 == 0 then
  end
  local v5 = v5(v6, true)
  if v5 then
    streamWriteUIntN(streamId, (v4.axisForward + 1) / 2 * 1023, 10)
    streamWriteUIntN(streamId, (v4.axisSide + 1) / 2 * 1023, 10)
    streamWriteBool(streamId, v4.doHandbrake)
    streamWriteBool(streamId, v4.idleTurningActive)
  end
end
function Drivable:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient and self.getIsEntered ~= nil then
    local v6 = self:getIsEntered()
    if v6 then
      if self.isActiveForInputIgnoreSelectionIgnoreAI then
        v6 = self:getIsVehicleControlledByPlayer()
        if v6 then
          v6 = self:getLastSpeed()
          self.spec_drivable.doHandbrake = false
          local v7 = MathUtil.clamp(self.spec_drivable.lastInputValues.axisAccelerate - self.spec_drivable.lastInputValues.axisBrake, -1, 1)
          self.spec_drivable.axisForward = v7
          if self.spec_drivable.brakeToStop then
            self.spec_drivable.lastInputValues.targetSpeed = 0.51
            self.spec_drivable.lastInputValues.targetDirection = 1
            if v6 < 1 then
              self.spec_drivable.brakeToStop = false
              self.spec_drivable.lastInputValues.targetSpeed = nil
              self.spec_drivable.lastInputValues.targetDirection = nil
            end
          end
          if v5.lastInputValues.targetSpeed ~= nil then
            local v10 = self:getReverserDirection()
            local v11 = math.abs(v5.lastInputValues.targetSpeed * v5.lastInputValues.targetDirection - v6 * self.movingDirection * v10)
            if 0.1 < v11 then
              v11 = math.abs(v5.lastInputValues.targetSpeed * v5.lastInputValues.targetDirection)
              if 0.5 < v11 then
                local v14 = math.abs(v5.lastInputValues.targetSpeed * v5.lastInputValues.targetDirection - v6 * self.movingDirection * v10)
                local v13 = math.pow(v14, 1.5)
                v14 = MathUtil.sign(v5.lastInputValues.targetSpeed * v5.lastInputValues.targetDirection - v6 * self.movingDirection * v10)
                v11 = MathUtil.clamp(v13 * v14, -1, 1)
                v5.axisForward = v11
              end
            end
          end
          local v8 = self:getIsPowered()
          -- if not v8 then goto L528 end
          local v9 = v9:getValue(GameSettings.SETTING.STEERING_SENSITIVITY)
          if v5.lastInputValues.axisSteerIsAnalog then
            if self.spec_articulatedAxis ~= nil and self.spec_articulatedAxis.componentJoint == nil then
            end
            if v11 then
            else
            end
            if GS_IS_MOBILE_VERSION then
              if v10 == 0 then
                v13 = v13:getValue(GameSettings.SETTING.STEERING_BACK_SPEED)
              end
              v13 = math.abs(v10)
              local v12 = math.pow(v13, 1 / v9)
              if 0 <= v10 then
              else
              end
            elseif v5.lastInputValues.axisSteerDeviceCategory == InputDevice.CATEGORY.GAMEPAD then
            end
            -- if not v5.forceFeedback.isActive then goto L344 end
            if 0 < v5.forceFeedback.intensity then
              v13 = math.abs(v10)
              local v15 = math.min((v6 - 2) / 15, 1)
              v14 = math.max(v15, 0)
              local v18 = MathUtil.sign(v10)
              local v22 = math.abs(v10 - 0.2 * v14 * v18)
              local v20 = math.max(v22 * 0.4, 0.25)
              v17:setForceFeedback(v5.forceFeedback.axisIndex, v20 * v14 * v13 * 2 * v5.forceFeedback.intensity, v10 - 0.2 * v14 * v18)
              -- goto L344  (LOP_JUMP +64)
            end
            v13:setForceFeedback(v12.axisIndex, 0, v10)
          elseif v5.lastInputValues.axisSteer == 0 then
            v12 = v12:getValue(GameSettings.SETTING.STEERING_BACK_SPEED)
            if v12 / 10 < 1 and self.speedDependentRotateBack then
              v14 = math.min(v6 / 36 * v12 / 10 / 0.5, 1)
            end
          else
            v11 = math.min(1 / (self.lastSpeed * v5.speedRotScale + v5.speedRotScaleOffset), 1)
          end
          if v5.idleTurningAllowed then
            if v7 == 0 then
              v11 = math.abs(v10)
              if 0.05 < v11 and v6 < 1 and not v5.idleTurningActive then
                v5.idleTurningActive = true
                v12 = MathUtil.sign(v10)
                v5.idleTurningDirection = v12 * v5.idleTurningDrivingDirection
              end
            end
            if v7 ~= 0 and v5.idleTurningActive then
              v5.idleTurningActive = false
              if 0 < v10 then
                self.rotatedTime = self.minRotTime
                v5.axisSide = 1
              elseif v10 < 0 then
                self.rotatedTime = self.maxRotTime
                v5.axisSide = -1
              end
            end
            if v5.idleTurningActive and not v5.idleTurningLockDirection then
              v5.idleTurningDirection = v5.idleTurningDrivingDirection
              if v10 == 0 then
                v5.idleTurningActive = false
                v5.axisSide = 0
              end
            end
            if v5.idleTurningActive then
              v13 = MathUtil.sign(v10)
              v5.axisForward = v5.idleTurningDirection * v13
              v11 = math.abs(v10)
            end
          end
          if v5.axisSide < v10 then
            v13 = math.min(v10, v5.axisSide + dt / (self.wheelSteeringDuration or 1) * 1000 * v8)
            v5.axisSide = v13
            -- goto L528  (LOP_JUMP +61)
          end
          -- if v10 >= v5.axisSide then goto L528 end
          v13 = math.max(v10, v5.axisSide - v12)
          v5.axisSide = v13
          -- goto L528  (LOP_JUMP +45)
        end
        v5.axisForward = 0
        v5.idleTurningActive = false
        if self.rotatedTime < 0 then
          v8 = self:getSteeringDirection()
          v5.axisSide = self.rotatedTime / -self.maxRotTime / v8
          -- goto L528  (LOP_JUMP +21)
        end
        v8 = self:getSteeringDirection()
        v5.axisSide = self.rotatedTime / self.minRotTime / v8
      else
        self.spec_drivable.doHandbrake = true
        self.spec_drivable.axisForward = 0
        self.spec_drivable.idleTurningActive = false
      end
      v5.lastInputValues.axisAccelerate = 0
      v5.lastInputValues.axisBrake = 0
      v5.lastInputValues.axisSteer = 0
      if v5.axisForward == v5.axisForwardSend and v5.axisSide == v5.axisSideSend and v5.doHandbrake == v5.doHandbrakeSend then
        -- if v5.idleTurningActiveSend == v5.idleTurningActive then goto L588 end
      end
      v5.axisForwardSend = v5.axisForward
      v5.axisSideSend = v5.axisSide
      v5.doHandbrakeSend = v5.doHandbrake
      v5.idleTurningActiveSend = v5.idleTurningActive
      self:raiseDirtyFlags(v5.dirtyFlag)
    end
  end
  if self.isClient and self.getIsEntered ~= nil then
    v6 = self:getIsEntered()
    if v6 then
      v5.lastInputValues.cruiseControlState = 0
      if v5.lastInputValues.cruiseControlState == 1 then
        if v5.cruiseControl.topSpeedTime == Drivable.CRUISECONTROL_FULL_TOGGLE_TIME then
          if v5.cruiseControl.state == Drivable.CRUISECONTROL_STATE_OFF then
            self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_ACTIVE)
          else
            self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF)
          end
        end
        -- if 0 >= v5.cruiseControl.topSpeedTime then goto L684 end
        v5.cruiseControl.topSpeedTime = v5.cruiseControl.topSpeedTime - dt
        -- if v5.cruiseControl.topSpeedTime >= 0 then goto L684 end
        self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_FULL)
      else
        v5.cruiseControl.topSpeedTime = Drivable.CRUISECONTROL_FULL_TOGGLE_TIME
      end
      v5.lastInputValues.cruiseControlValue = 0
      if v5.lastInputValues.cruiseControlValue ~= 0 then
        v5.cruiseControl.changeCurrentDelay = v5.cruiseControl.changeCurrentDelay - dt * v5.cruiseControl.changeMultiplier
        v9 = math.min(v5.cruiseControl.changeMultiplier + dt * 0.003, 10)
        v5.cruiseControl.changeMultiplier = v9
        -- if v5.cruiseControl.changeCurrentDelay >= 0 then goto L868 end
        v5.cruiseControl.changeCurrentDelay = v5.cruiseControl.changeDelay
        v8 = MathUtil.sign(v5.lastInputValues.cruiseControlValue)
        v12 = self:getDrivingDirection()
        if v12 >= 0 then
        end
        v12 = self:getReverserDirection()
        if v12 < 0 then
        end
        if v11 then
        else
        end
        self:setCruiseControlMaxSpeed(v9, v10)
        if v5.cruiseControl.speed == v5.cruiseControl.speedSent then
          -- if v5.cruiseControl.speedReverse == v5.cruiseControl.speedReverseSent then goto L868 end
        end
        if g_server ~= nil then
          v14 = SetCruiseControlSpeedEvent.new(self, v5.cruiseControl.speed, v5.cruiseControl.speedReverse)
          v12:broadcastEvent(v14, nil, nil, self)
        else
          v12 = v12:getServerConnection()
          v14 = SetCruiseControlSpeedEvent.new(self, v5.cruiseControl.speed, v5.cruiseControl.speedReverse)
          v12:sendEvent(...)
        end
        v5.cruiseControl.speedSent = v5.cruiseControl.speed
        v5.cruiseControl.speedReverseSent = v5.cruiseControl.speedReverse
      else
        v5.cruiseControl.changeCurrentDelay = 0
        v5.cruiseControl.changeMultiplier = 1
      end
    end
  end
  if self.getIsControlled ~= nil then
    v6 = self:getIsControlled()
  end
  v7 = self:getIsVehicleControlledByPlayer()
  if v7 and self.isServer then
    if v6 then
      if v5.cruiseControl.state == Drivable.CRUISECONTROL_STATE_ACTIVE then
        v8 = self:getReverserDirection()
        if v8 < 0 then
        else
        end
      end
      v8 = self:getDrivingDirection()
      if v8 < 0 then
        v8 = self:getReverserDirection()
        if v8 < 0 then
          v8 = math.min(v7, v5.cruiseControl.speed)
        else
          v8 = math.min(v7, v5.cruiseControl.speedReverse)
        end
      end
      if v7 ~= math.huge then
        v5.cruiseControl.speedInterpolated = v5.cruiseControl.speedInterpolated or v7
        -- if v7 == v5.cruiseControl.speedInterpolated then goto L1016 end
        v9 = MathUtil.sign(v7 - v5.cruiseControl.speedInterpolated)
        if v9 == 1 then
          -- if math.min then goto L981 end
        end
        v20 = math.abs(v8)
        v18 = math.max(...)
        v12 = math.max(v5.cruiseControl.speedInterpolated + dt * 0.0025 * v18 * v9, v7)
        v5.cruiseControl.speedInterpolated = v12
      else
        v5.cruiseControl.speedInterpolated = nil
      end
      v8, v9 = self:getSpeedLimit(true)
      v10 = math.min(v8, v7)
      if v5.idleTurningAllowed and v5.idleTurningActive then
        v10 = math.min(v10, v5.idleTurningMaxSpeed)
      end
      v10 = self:getMotor()
      v10:setSpeedLimit(v8)
      self:updateVehiclePhysics(v5.axisForward, v5.axisSide, v5.doHandbrake, dt)
    elseif v5.lastIsControlled then
      SpecializationUtil.raiseEvent(self, "onVehiclePhysicsUpdate", 0, 0, true, 0)
    end
  end
  if self.isClient and v6 then
    if v5.idleTurningAllowed and v5.idleTurningActive and not v5.idleTurningUpdateSteeringWheel then
    end
    if v7 then
      self:updateSteeringWheel(v5.steeringWheel, dt, 1)
    end
  end
  v5.lastIsControlled = v6
  v7 = self:getIsActiveForInput(true)
  if v7 then
    v7 = v7:getInputHelpMode()
    if v7 == GS_INPUT_HELP_MODE_GAMEPAD then
      -- if not GS_PLATFORM_SWITCH then goto L1139 end
    end
    v8 = v8:getValue(GameSettings.SETTING.GYROSCOPE_STEERING)
    if v8 then
      v8, v9, v10 = getGravityDirection()
      v11 = MathUtil.getSteeringAngleFromDeviceGravity(v8, v9, v10)
      self:setSteeringInput(v11, true, InputDevice.CATEGORY.WHEEL)
    end
  end
end
function Drivable:setCruiseControlState(state, noEventSend)
  if self.spec_drivable.cruiseControl ~= nil and self.spec_drivable.cruiseControl.state ~= state then
    self.spec_drivable.cruiseControl.state = state
    if noEventSend ~= nil then
      -- if v2 then goto L49 end
    end
    if not self.isServer then
      local isSelected = isSelected:getServerConnection()
      local v6 = SetCruiseControlStateEvent.new(self, state)
      isSelected:sendEvent(...)
    else
      isSelected = self:getOwner()
      if isSelected ~= nil then
        local v7 = SetCruiseControlStateEvent.new(self, state)
        isSelected:sendEvent(...)
      end
    end
    if isActiveForInputIgnoreSelection.toggleCruiseControlEvent ~= nil then
      if state ~= Drivable.CRUISECONTROL_STATE_ACTIVE then
        local v5 = v5:getText("action_activateCruiseControl")
      else
        v5 = v5:getText("action_deactivateCruiseControl")
      end
      v5:setActionEventText(isActiveForInputIgnoreSelection.toggleCruiseControlEvent, isSelected)
    end
  end
end
function Drivable:setCruiseControlMaxSpeed(speed, speedReverse)
  if speed ~= nil then
    local isSelected = MathUtil.clamp(speed, self.spec_drivable.cruiseControl.minSpeed, self.spec_drivable.cruiseControl.maxSpeed)
    if self.spec_drivable.cruiseControl.speed ~= isSelected then
      self.spec_drivable.cruiseControl.speed = isSelected
      if self.spec_drivable.cruiseControl.state == Drivable.CRUISECONTROL_STATE_FULL then
        self.spec_drivable.cruiseControl.state = Drivable.CRUISECONTROL_STATE_ACTIVE
      end
    end
    if speedReverse ~= nil then
      isSelected = MathUtil.clamp(speedReverse, isActiveForInputIgnoreSelection.cruiseControl.minSpeed, isActiveForInputIgnoreSelection.cruiseControl.maxSpeedReverse)
      isActiveForInputIgnoreSelection.cruiseControl.speedReverse = isSelected
    end
    if isActiveForInputIgnoreSelection.cruiseControl.state ~= Drivable.CRUISECONTROL_STATE_OFF then
      if isActiveForInputIgnoreSelection.cruiseControl.state == Drivable.CRUISECONTROL_STATE_ACTIVE then
        local isSelected, v5 = self:getSpeedLimit(true)
        local v6 = math.min(isSelected, isActiveForInputIgnoreSelection.cruiseControl.speed)
        v6 = self:getMotor()
        v6:setSpeedLimit(v6)
      else
        isSelected = self:getMotor()
        isSelected:setSpeedLimit(math.huge)
      end
    end
    isSelected = self:getDrivingDirection()
    if isSelected < 0 then
      isSelected, v5 = self:getSpeedLimit(true)
      v6 = math.min(isSelected, isActiveForInputIgnoreSelection.cruiseControl.speedReverse)
      v6 = self:getMotor()
      v6:setSpeedLimit(v6)
    end
  end
end
function Drivable:updateSteeringWheel(steeringWheel, dt, direction)
  if steeringWheel ~= nil then
    if g_currentMission.controlledVehicle == self and self.getActiveCamera ~= nil then
      local activeCamera = self:getActiveCamera()
      if activeCamera ~= nil and activeCamera.isInside then
      end
    end
    if steeringWheel.lastRotation ~= self.rotatedTime * isSelected then
      steeringWheel.lastRotation = self.rotatedTime * isSelected
      setRotation(steeringWheel.node, 0, self.rotatedTime * isSelected * direction, 0)
      if self.getVehicleCharacter ~= nil then
        local vehicleCharacter = self:getVehicleCharacter()
        if vehicleCharacter ~= nil then
          local v7 = vehicleCharacter:getAllowCharacterUpdate()
          if v7 then
            vehicleCharacter:setDirty(true)
          end
        end
      end
    end
  end
end
function Drivable:getCruiseControlState()
  return self.spec_drivable.cruiseControl.state
end
function Drivable:getCruiseControlSpeed()
  if self.spec_drivable.cruiseControl.state == Drivable.CRUISECONTROL_STATE_FULL then
    return self.spec_drivable.cruiseControl.maxSpeed
  end
  return dt.cruiseControl.speed
end
function Drivable:getCruiseControlMaxSpeed()
  return self.spec_drivable.cruiseControl.maxSpeed
end
function Drivable:getCruiseControlDisplayInfo()
  local isSelected = self:getReverserDirection()
  if isSelected < 0 then
  else
  end
  if isActiveForInputIgnoreSelection.state == Drivable.CRUISECONTROL_STATE_FULL then
  elseif isActiveForInputIgnoreSelection.state == Drivable.CRUISECONTROL_STATE_OFF then
  end
  isSelected = self:getDrivingDirection()
  if isSelected < 0 then
    isSelected = self:getReverserDirection()
    if isSelected < 0 then
      return isActiveForInputIgnoreSelection.speed, isActiveForInput
    end
  end
  return dt, isActiveForInput
end
function Drivable:getAxisForward()
  return self.spec_drivable.axisForward
end
function Drivable:getAccelerationAxis()
  if -1 < self.movingDirection then
  else
  end
  local v5 = self:getReverserDirection()
  return math.max(self.spec_drivable.axisForward * dt * v5, 0)
end
v0:registerModifierType("ACCELERATE", Drivable.getAccelerationAxis)
function Drivable:getDecelerationAxis()
  if 0.0001 < self.lastSpeedReal then
    local isActiveForInput = MathUtil.sign(self.spec_drivable.axisForward)
    if self.movingDirection ~= isActiveForInput then
      -- if 0.002 >= v0.lastSpeedReal then goto L43 end
    end
    local v5 = self:getReverserDirection()
    isActiveForInput = math.min(self.spec_drivable.axisForward * self.movingDirection * v5, 0)
    return math.abs(...)
  end
  return 0
end
v0:registerModifierType("DECELERATE", Drivable.getDecelerationAxis)
function Drivable:getCruiseControlAxis()
  if self.spec_drivable.cruiseControl.state ~= Drivable.CRUISECONTROL_STATE_OFF then
    return 1
  end
  return 0
end
v0:registerModifierType("CRUISECONTROL", Drivable.getCruiseControlAxis)
function Drivable:getAcDecelerationAxis()
  local isActiveForInputIgnoreSelection = self:getReverserDirection()
  return self.spec_drivable.axisForward * isActiveForInputIgnoreSelection
end
function Drivable:getDashboardSteeringAxis()
  if self.spec_drivable.idleTurningAllowed and self.spec_drivable.idleTurningActive and not self.spec_drivable.idleTurningUpdateSteeringWheel then
    return 0
  end
  local isSelected = self:getReverserDirection()
  return self.rotatedTime * isSelected
end
function Drivable:getDashboardCombinedPedalLeft()
  local value = self:getAcDecelerationAxis()
  if self.spec_drivable.idleTurningAllowed and self.spec_drivable.idleTurningActive then
    return value * self.spec_drivable.idleTurningDirection
  end
  local v5 = self:getDashboardSteeringAxis()
  return MathUtil.clamp(value - v5, -1, 1)
end
function Drivable:getDashboardCombinedPedalRight()
  local value = self:getAcDecelerationAxis()
  if self.spec_drivable.idleTurningAllowed and self.spec_drivable.idleTurningActive then
    return -value * self.spec_drivable.idleTurningDirection
  end
  local v5 = self:getDashboardSteeringAxis()
  return MathUtil.clamp(value + v5, -1, 1)
end
function Drivable:setReverserDirection(reverserDirection)
  self.spec_drivable.reverserDirection = reverserDirection
end
function Drivable:getReverserDirection()
  return self.spec_drivable.reverserDirection
end
function Drivable:getSteeringDirection()
  return self.spec_drivable.steeringDirection
end
function Drivable:getIsDrivingForward()
  local isActiveForInput = self:getDrivingDirection()
  if 0 > isActiveForInput then
  end
  return true
end
function Drivable:getIsDrivingBackward()
  local isActiveForInput = self:getDrivingDirection()
  if isActiveForInput >= 0 then
  end
  return true
end
function Drivable:getDrivingDirection()
  local lastSpeed = self:getLastSpeed()
  if lastSpeed < 0.2 then
    return 0
  end
  if lastSpeed < 1.5 and self.spec_drivable.axisForward == 0 then
    return 0
  end
  local isSelected = self:getReverserDirection()
  return self.movingDirection * isSelected
end
v0:registerModifierType("DRIVING_DIRECTION", Drivable.getDrivingDirection)
function Drivable.getIsVehicleControlledByPlayer(v0)
  return true
end
function Drivable:stopMotor(noEventSend)
  self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF, true)
end
function Drivable:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self.spec_drivable.toggleCruiseControlEvent = nil
    self:clearActionEventsTable(self.spec_drivable.actionEvents)
    if self.getIsEntered ~= nil then
      local v5 = self:getIsEntered()
    end
    local v7 = self:getIsActiveForInput(true, true)
    if v7 and isSelected then
      v7 = self:getIsAIActive()
      if not v7 then
        local v7, v8 = self:addPoweredActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.AXIS_ACCELERATE_VEHICLE, self, Drivable.actionEventAccelerate, false, false, true, true, nil)
        v7:setActionEventTextPriority(v8, GS_PRIO_VERY_LOW)
        v7:setActionEventTextVisibility(v8, false)
        v7, v8 = self:addPoweredActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.AXIS_BRAKE_VEHICLE, self, Drivable.actionEventBrake, false, false, true, true, nil)
        v7:setActionEventTextPriority(v8, GS_PRIO_VERY_LOW)
        v7:setActionEventTextVisibility(v8, false)
        v7, v8 = self:addPoweredActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.AXIS_MOVE_SIDE_VEHICLE, self, Drivable.actionEventSteer, false, false, true, true, nil)
        v7:setActionEventTextPriority(v8, GS_PRIO_VERY_LOW)
        v7:setActionEventTextVisibility(v8, false)
        local v10 = v10:getText("action_steer")
        v7:setActionEventText(...)
        v7, v8 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.TOGGLE_CRUISE_CONTROL, self, Drivable.actionEventCruiseControlState, false, true, true, true, nil)
        v7:setActionEventTextPriority(v8, GS_PRIO_LOW)
        isActiveForInputIgnoreSelection.toggleCruiseControlEvent = v8
      end
      v7, v8 = self:addActionEvent(isActiveForInputIgnoreSelection.actionEvents, InputAction.AXIS_CRUISE_CONTROL, self, Drivable.actionEventCruiseControlValue, false, true, true, true, nil)
      v10 = v10:getText("action_changeCruiseControlLevel")
      v7:setActionEventText(...)
      v7:setActionEventTextPriority(v8, GS_PRIO_LOW)
    end
  end
end
function Drivable:onLeaveVehicle(wasEntered)
  self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF)
  if self.brake ~= nil then
    self:brake(1)
  end
  if wasEntered and self.spec_drivable.forceFeedback.isActive then
    isSelected:setForceFeedback(self.spec_drivable.forceFeedback.axisIndex, 0, 0)
    self.spec_drivable.forceFeedback.isActive = false
    self.spec_drivable.forceFeedback.device = nil
  end
end
function Drivable:onSetBroken()
  if self.isClient then
    isActiveForInput:playSample(self.spec_drivable.samples.waterSplash)
  end
end
function Drivable:updateVehiclePhysics(axisForward, axisSide, doHandbrake, dt)
  local v6 = self:getSteeringDirection()
  local v7 = self:getIsMotorStarted()
  if v7 then
    v7 = self:getMotorStartTime()
    if v7 <= g_currentMission.time then
      v7 = math.abs(axisForward)
      if 0 < v7 then
        self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF)
      end
      if v5.cruiseControl.state ~= Drivable.CRUISECONTROL_STATE_OFF then
      end
    end
  end
  v7 = self:getCanMotorRun()
  if not v7 then
    v7 = self:getIsMotorStarted()
    if v7 then
      self:stopMotor()
    end
  end
  if self.getIsControlled ~= nil then
    v7 = self:getIsControlled()
    if v7 then
      if self.maxRotTime ~= nil and self.minRotTime ~= nil then
        if axisSide < 0 then
          local v8 = math.min(-self.maxRotTime * axisSide, self.maxRotTime)
        else
          v8 = math.max(self.minRotTime * axisSide, self.minRotTime)
        end
      end
      self.rotatedTime = v7
    end
  end
  if self.finishedFirstUpdate and self.spec_wheels ~= nil and 0 < #self.spec_wheels.wheels then
    WheelsUtil.updateWheelsPhysics(self, dt, self.lastSpeedReal * self.movingDirection, v6, doHandbrake, g_currentMission.missionInfo.stopAndGoBraking)
  end
  return v6
end
function Drivable:setAccelerationPedalInput(inputValue)
  local isSelected = MathUtil.clamp(inputValue, 0, 1)
  self.spec_drivable.lastInputValues.axisAccelerate = isSelected
  if self.spec_drivable.lastInputValues.targetSpeed ~= nil then
    self.spec_drivable.lastInputValues.targetSpeed = nil
    self.spec_drivable.lastInputValues.targetDirection = nil
  end
end
function Drivable:setBrakePedalInput(inputValue)
  local isSelected = MathUtil.clamp(inputValue, 0, 1)
  self.spec_drivable.lastInputValues.axisBrake = isSelected
  if self.spec_drivable.lastInputValues.targetSpeed ~= nil then
    self.spec_drivable.lastInputValues.targetSpeed = nil
    self.spec_drivable.lastInputValues.targetDirection = nil
  end
end
function Drivable:setTargetSpeedAndDirection(speed, direction)
  if 0 < direction then
    local v5 = self:getMotor()
    v5 = v5:getMaximumForwardSpeed()
  elseif direction < 0 then
    v5 = self:getMotor()
    v5 = v5:getMaximumBackwardSpeed()
  end
  isActiveForInputIgnoreSelection.lastInputValues.targetSpeed = speed
  isActiveForInputIgnoreSelection.lastInputValues.targetDirection = direction
end
function Drivable:setSteeringInput(inputValue, isAnalog, deviceCategory)
  self.spec_drivable.lastInputValues.axisSteer = inputValue
  if inputValue ~= 0 then
    self.spec_drivable.lastInputValues.axisSteerIsAnalog = isAnalog
    self.spec_drivable.lastInputValues.axisSteerDeviceCategory = deviceCategory
  end
end
function Drivable:brakeToStop()
  self.spec_drivable.brakeToStop = true
end
function Drivable:updateSteeringAngle(wheel, dt, steeringAngle)
  if self.spec_drivable.idleTurningAllowed then
    -- TODO: structure LOP_FORNPREP (pc 10, target 42)
    if wheel.repr ~= wheel then
      -- if v1.driveNode ~= v0.spec_drivable.idleTurningWheels[1].wheelNode then goto L41 end
    end
    if v8.inverted then
    end
    if isSelected.idleTurningActive then
      -- if v9 then goto L40 end
    end
    return steeringAngle
    -- TODO: structure LOP_FORNLOOP (pc 41, target 11)
  end
  return steeringAngle
end
function Drivable:getIsManualDirectionChangeAllowed(superFunc)
  if self.spec_drivable.idleTurningAllowed and self.spec_drivable.idleTurningActive then
    return false
  end
  return superFunc(self)
end
function Drivable:getMapHotspotRotation(speed, direction)
  local isActiveForInputIgnoreSelection = self:getReverserDirection()
  if isActiveForInputIgnoreSelection < 0 then
    local isSelected = speed(self, direction)
    return isSelected + math.pi
  end
  isActiveForInputIgnoreSelection = speed(self, direction)
  return isActiveForInputIgnoreSelection
end
function Drivable:actionEventAccelerate(actionName, inputValue, callbackState, isAnalog)
  if inputValue ~= 0 then
    self:setAccelerationPedalInput(inputValue)
  end
end
function Drivable:actionEventBrake(actionName, inputValue, callbackState, isAnalog)
  if inputValue ~= 0 then
    self:setBrakePedalInput(inputValue)
  end
end
function Drivable:actionEventSteer(actionName, inputValue, callbackState, isAnalog, isMouse, deviceCategory, binding)
  if not self.spec_drivable.forceFeedback.isActive then
    local v9, v10, v11 = v9:getBindingForceFeedbackInfo(binding)
    self.spec_drivable.forceFeedback.isActive = v9
    self.spec_drivable.forceFeedback.device = v10
    self.spec_drivable.forceFeedback.binding = binding
    self.spec_drivable.forceFeedback.axisIndex = v11
    -- if not v9 then goto L70 end
    v10:setForceFeedback(v11, 0, inputValue)
  elseif binding ~= self.spec_drivable.forceFeedback.binding then
    v9, v10, v11 = v9:getBindingForceFeedbackInfo(binding)
    if not v9 then
      self.spec_drivable.forceFeedback.isActive = false
      self.spec_drivable.forceFeedback.device = nil
      self.spec_drivable.forceFeedback.binding = nil
      self.spec_drivable.forceFeedback.axisIndex = 0
    end
  end
  if inputValue ~= 0 then
    self:setSteeringInput(inputValue, isAnalog, deviceCategory)
  end
end
function Drivable:actionEventCruiseControlState(actionName, inputValue, callbackState, isAnalog)
  self.spec_drivable.lastInputValues.cruiseControlState = 1
end
function Drivable:actionEventCruiseControlValue(actionName, inputValue, callbackState, isAnalog)
  self.spec_drivable.lastInputValues.cruiseControlValue = inputValue
end
