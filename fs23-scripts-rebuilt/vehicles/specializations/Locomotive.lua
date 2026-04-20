-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/LocomotiveStateEvent.lua")
Locomotive = {STATE_NONE = 0, STATE_MANUAL_TRAVEL_ACTIVE = 1, STATE_MANUAL_TRAVEL_INACTIVE = 2, STATE_AUTOMATIC_TRAVEL_ACTIVE = 3, STATE_REQUESTED_POSITION = 4, STATE_REQUESTED_POSITION_BRAKING = 5, NUM_BITS_STATE = 3, AUTOMATIC_DRIVE_DELAY = 1500000}
function Locomotive.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(SplineVehicle, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Drivable, v0)
  end
  return v1
end
function Locomotive.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Locomotive")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.locomotive.powerArm#node", "Power arm node")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Locomotive.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onAutomatedTrainTravelActive")
end
function Locomotive.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getDownhillForce", Locomotive.getDownhillForce)
  SpecializationUtil.registerFunction(vehicleType, "setRequestedSplinePosition", Locomotive.setRequestedSplinePosition)
  SpecializationUtil.registerFunction(vehicleType, "getDistanceToRequestedPosition", Locomotive.getDistanceToRequestedPosition)
  SpecializationUtil.registerFunction(vehicleType, "setLocomotiveState", Locomotive.setLocomotiveState)
  SpecializationUtil.registerFunction(vehicleType, "startAutomatedTrainTravel", Locomotive.startAutomatedTrainTravel)
  SpecializationUtil.registerFunction(vehicleType, "notifyPlayerFarmChanged", Locomotive.notifyPlayerFarmChanged)
end
function Locomotive.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMotorStarted", Locomotive.getIsMotorStarted)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateVehiclePhysics", Locomotive.updateVehiclePhysics)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsReadyForAutomatedTrainTravel", Locomotive.getIsReadyForAutomatedTrainTravel)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "alignToSplineTime", Locomotive.alignToSplineTime)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setTrainSystem", Locomotive.setTrainSystem)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFullName", Locomotive.getFullName)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreSurfaceSoundsActive", Locomotive.getAreSurfaceSoundsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getTraveledDistanceStatsActive", Locomotive.getTraveledDistanceStatsActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsEnterable", Locomotive.getIsEnterable)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsMapHotspotVisible", Locomotive.getIsMapHotspotVisible)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeReset", Locomotive.getCanBeReset)
end
function Locomotive.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Locomotive)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Locomotive)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Locomotive)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Locomotive)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Locomotive)
  SpecializationUtil.registerEventListener(vehicleType, "onLeaveVehicle", Locomotive)
  SpecializationUtil.registerEventListener(vehicleType, "onEnterVehicle", Locomotive)
end
function Locomotive:onLoad(savegame)
  self.serverMass = 1
  local v3 = v3:getValue("vehicle.locomotive.powerArm#node", nil, self.components, self.i3dMappings)
  self.spec_locomotive.powerArm = v3
  self.spec_locomotive.electricitySpline = nil
  v3 = self:getMotor()
  v3 = v3:getMinRpm()
  self.spec_locomotive.lastVirtualRpm = v3
  self.spec_locomotive.speed = 0
  self.spec_locomotive.lastAcceleration = 0
  self.spec_locomotive.nextMovingDirection = 0
  self.spec_locomotive.sellingDirection = 1
  self.spec_locomotive.startBrakeDistance = 0
  self.spec_locomotive.startBrakeSpeed = 0
  self:setLocomotiveState(Locomotive.STATE_NONE)
  v3 = self:getMotor()
  self.spec_locomotive.motor = v3
  self.spec_locomotive.doStartCheck = true
  v3:subscribe(MessageType.PLAYER_FARM_CHANGED, self.notifyPlayerFarmChanged, self)
  v3:subscribe(MessageType.PLAYER_CREATED, self.notifyPlayerFarmChanged, self)
end
function Locomotive.onDelete(v0)
  v1:unsubscribeAll(v0)
end
function Locomotive:onReadStream(streamId, connection)
  local v4 = streamReadUIntN(streamId, Locomotive.NUM_BITS_STATE)
  self.spec_locomotive.state = v4
end
function Locomotive:onWriteStream(streamId, connection)
  streamWriteUIntN(streamId, self.spec_locomotive.state, Locomotive.NUM_BITS_STATE)
end
function Locomotive:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_locomotive.doStartCheck and self.trainSystem ~= nil then
    local v6 = v6:getIsRented()
    if not v6 then
      self:startAutomatedTrainTravel()
    else
      self:setLocomotiveState(Locomotive.STATE_MANUAL_TRAVEL_ACTIVE)
    end
    self:raiseActive()
    v5.doStartCheck = false
  end
  if self.isServer then
    if v5.state == Locomotive.STATE_AUTOMATIC_TRAVEL_ACTIVE then
      self:raiseActive()
      self:updateVehiclePhysics(1, 0, 0, dt)
      SpecializationUtil.raiseEvent(self, "onAutomatedTrainTravelActive", dt)
      return
    end
    if v5.state == Locomotive.STATE_REQUESTED_POSITION then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L270
      v6 = v6:getSplineLength()
      local v7 = self:getCurrentSplinePosition()
      local v9 = MathUtil.sign(v5.requestedSplinePosition - v7)
      local v10 = Locomotive.getBrakeAcceleration(self)
      local v11 = math.abs(v5.speed ^ 2 / 2 * v10)
      if v9 ~= self.movingDirection and self.movingDirection ~= 0 then
      end
      if not not v14 then
        if 0 <= v9 and v12 < v7 then
          -- if v7 < v12 + 0.5 then goto L135 end
        end
        -- if v9 >= 0 then goto L149 end
        -- if v7 >= v12 then goto L149 end
        -- if v12 - 0.5 >= v7 then goto L149 end
        self:setLocomotiveState(Locomotive.STATE_REQUESTED_POSITION_BRAKING)
        v5.startBrakeDistance = v11
        v5.startBrakeSpeed = v5.speed
      else
        self:updateVehiclePhysics(v9, 0, 0, dt)
      end
      self:raiseActive()
      return
    end
    if v5.state == Locomotive.STATE_REQUESTED_POSITION_BRAKING then
      v6 = Locomotive.getBrakeAcceleration(self)
      v7 = math.abs(v5.startBrakeSpeed ^ 2 / 2 * v6)
      if v7 < v5.startBrakeDistance - 10 then
        self:setLocomotiveState(Locomotive.STATE_REQUESTED_POSITION)
      end
      if 0 < self.movingDirection then
        self:updateVehiclePhysics(-1, 0, 0, dt)
      else
        self:updateVehiclePhysics(1, 0, 0, dt)
      end
      self:raiseActive()
      -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000020 -> L270
      self:setLocomotiveState(Locomotive.STATE_MANUAL_TRAVEL_ACTIVE)
      self:stopMotor()
      return
    end
    if v5.state == Locomotive.STATE_MANUAL_TRAVEL_INACTIVE then
      if 0 < self.movingDirection then
        self:updateVehiclePhysics(-1, 0, 0, dt)
      elseif self.movingDirection < 0 then
        self:updateVehiclePhysics(1, 0, 0, dt)
      end
      self:raiseActive()
    end
  end
end
function Locomotive:setTrainSystem(superFunc, trainSystem)
  superFunc(self, trainSystem)
  if self.spec_locomotive.powerArm ~= nil then
    local spline = trainSystem:getElectricitySpline()
    if spline ~= nil then
      local electricitySplineLength = trainSystem:getElectricitySplineLength()
      local splineLength = trainSystem:getSplineLength()
      local v7 = math.abs(electricitySplineLength - splineLength)
      self.spec_locomotive.splineDiff = v7
      self.spec_locomotive.electricitySplineSearchTime = self.spec_locomotive.splineDiff * 5 / electricitySplineLength
      self.spec_locomotive.electricitySpline = spline
    end
  end
end
function Locomotive:getFullName(superFunc)
  local isActiveForInput = isActiveForInput:getItemByXMLFilename(self.configFileName)
  return isActiveForInput.name
end
function Locomotive:getAreSurfaceSoundsActive(superFunc)
  local isActiveForInputIgnoreSelection = self:getLastSpeed()
  if 0.1 >= isActiveForInputIgnoreSelection then
  end
  return true
end
function Locomotive:getTraveledDistanceStatsActive(superFunc)
  if self.spec_locomotive.state ~= Locomotive.STATE_MANUAL_TRAVEL_ACTIVE then
  end
  return true
end
function Locomotive:getIsEnterable(superFunc)
  local isActiveForInput = superFunc(self)
  if not isActiveForInput then
    return false
  end
  if self.trainSystem ~= nil then
    isActiveForInput = isActiveForInput:getIsTrainInDriveableRange()
    if not isActiveForInput then
      return false
    end
  end
  if self.spec_locomotive.state ~= Locomotive.STATE_MANUAL_TRAVEL_ACTIVE and self.spec_locomotive.state ~= Locomotive.STATE_MANUAL_TRAVEL_INACTIVE then
  end
  return isActiveForInputIgnoreSelection
end
function Locomotive:getIsMapHotspotVisible(superFunc)
  local isActiveForInput = superFunc(self)
  if not isActiveForInput then
    return false
  end
  if self.trainSystem ~= nil then
    isActiveForInput = isActiveForInput:getIsTrainInDriveableRange()
    if not isActiveForInput then
      return false
    end
  end
  local isActiveForInput, isActiveForInputIgnoreSelection, isSelected = getWorldTranslation(self.rootNode)
  local v5 = math.abs(isActiveForInput)
  if g_currentMission.terrainSize * 0.5 >= v5 then
    v5 = math.abs(isSelected)
    -- if g_currentMission.terrainSize * 0.5 >= v5 then goto L45 end
  end
  return false
  return true
end
function Locomotive:setRequestedSplinePosition(splinePosition, noEventSend)
  self.spec_locomotive.requestedSplinePosition = splinePosition
  self:setLocomotiveState(Locomotive.STATE_REQUESTED_POSITION, true)
  local currentPosition = self:getCurrentSplinePosition()
  if self.spec_locomotive.requestedSplinePosition < currentPosition then
    local v6 = math.abs(currentPosition - self.spec_locomotive.requestedSplinePosition + 1)
    local v7 = math.abs(currentPosition - self.spec_locomotive.requestedSplinePosition)
    if v6 < v7 then
      self.spec_locomotive.requestedSplinePosition = self.spec_locomotive.requestedSplinePosition + 1
    end
  end
  if self.isServer then
    self:startMotor()
  end
end
function Locomotive:getDistanceToRequestedPosition()
  if self.spec_locomotive.state ~= Locomotive.STATE_REQUESTED_POSITION_BRAKING then
    -- if v0.spec_locomotive.state ~= Locomotive.STATE_REQUESTED_POSITION then goto L48 end
  end
  local currentPosition = self:getCurrentSplinePosition()
  local isSelected = math.abs(dt.requestedSplinePosition - currentPosition)
  if dt.state == Locomotive.STATE_REQUESTED_POSITION_BRAKING and 0.5 < isSelected then
    return 0
  end
  local v6 = v6:getSplineLength()
  return isSelected * v6
  return 0
end
function Locomotive:setLocomotiveState(state, noEventSend)
  self.spec_locomotive.state = state
  if state == Locomotive.STATE_AUTOMATIC_TRAVEL_ACTIVE then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L27
    self:setRandomVehicleCharacter()
  elseif state == Locomotive.STATE_MANUAL_TRAVEL_ACTIVE then
    self:restoreVehicleCharacter()
  end
  if g_server ~= nil and not noEventSend then
    local v6 = LocomotiveStateEvent.new(self, state)
    isSelected:broadcastEvent(v6, nil, nil, self)
  end
end
function Locomotive:startAutomatedTrainTravel()
  self:setLocomotiveState(Locomotive.STATE_AUTOMATIC_TRAVEL_ACTIVE)
  self:startMotor()
end
function Locomotive:notifyPlayerFarmChanged()
  if self.trainSystem ~= nil then
    if self.trainSystem.isRented and g_currentMission.player.farmId ~= self.trainSystem.rentFarmId then
    end
    self:setIsTabbable(isActiveForInputIgnoreSelection)
  end
end
function Locomotive:onLeaveVehicle()
  if self.spec_locomotive.state ~= Locomotive.STATE_AUTOMATIC_TRAVEL_ACTIVE then
    local noEventSend = self:getIsReadyForAutomatedTrainTravel()
    if noEventSend then
      self.spec_locomotive.automaticTravelStartTime = g_time + Locomotive.AUTOMATIC_DRIVE_DELAY
    end
    self:setLocomotiveState(Locomotive.STATE_MANUAL_TRAVEL_INACTIVE)
    self:raiseActive()
    state.requestedSplinePosition = nil
  end
end
function Locomotive:onEnterVehicle()
  self.spec_locomotive.requestedSplinePosition = nil
  self.spec_locomotive.automaticTravelStartTime = nil
  if not g_currentMission.missionInfo.automaticMotorStartEnabled then
    if self.spec_locomotive.state ~= Locomotive.STATE_AUTOMATIC_TRAVEL_ACTIVE and self.spec_locomotive.state ~= Locomotive.STATE_REQUESTED_POSITION then
      -- if v0.spec_locomotive.state ~= Locomotive.STATE_REQUESTED_POSITION_BRAKING then goto L39 end
    end
    self:startMotor(true)
  end
  self:setLocomotiveState(Locomotive.STATE_MANUAL_TRAVEL_ACTIVE)
end
function Locomotive:getIsReadyForAutomatedTrainTravel(superFunc)
  local noEventSend = self:getIsControlled()
  if noEventSend then
    return false
  end
  noEventSend = superFunc(self)
  return noEventSend
end
function Locomotive:getIsMotorStarted(superFunc)
  local isActiveForInputIgnoreSelection = superFunc(self)
  if not isActiveForInputIgnoreSelection and self.spec_locomotive.state ~= Locomotive.STATE_AUTOMATIC_TRAVEL_ACTIVE and self.spec_locomotive.state ~= Locomotive.STATE_REQUESTED_POSITION and self.spec_locomotive.state ~= Locomotive.STATE_REQUESTED_POSITION_BRAKING then
  end
  return isActiveForInputIgnoreSelection
end
function Locomotive:getDownhillForce()
  local state, noEventSend, isActiveForInputIgnoreSelection = localDirectionToWorld(self.rootNode, 0, 0, 1)
  local v7 = MathUtil.vector3Length(state, noEventSend, isActiveForInputIgnoreSelection)
  local v5 = math.acos(noEventSend / v7)
  v7 = math.sin(-(v5 - 0.5 * math.pi))
  return self.serverMass * 9.81 * v7
end
function Locomotive:getBrakeAcceleration()
  local downhillForce = self:getDownhillForce()
  local v5 = math.abs(self.spec_locomotive.speed)
  if v5 >= 0.3 then
    v5 = self:getIsControlled()
    -- if v5 then goto L25 end
  end
  -- goto L26  (LOP_JUMP +1)
  v5 = MathUtil.sign(state.speed)
  return 1 / self.serverMass * (-(isActiveForInputIgnoreSelection * 0.05 * v5) - downhillForce)
end
function Locomotive:updateVehiclePhysics(superFunc, axisForward, axisSide, doHandbrake, dt)
  local v8 = superFunc(self, axisForward * self.spec_locomotive.sellingDirection, axisSide, doHandbrake, dt)
  if g_server == nil then
  end
  local downhillForce = self:getDownhillForce()
  local v13 = math.min(300000, self.serverMass * 9.81 * 0.18)
  v13 = self:getIsMotorStarted()
  if v13 then
    v13 = self:getMotorStartTime()
    -- if v13 > g_currentMission.time then goto L80 end
    if v7 == nil then
    else
    end
    local v14 = self:getCruiseControlState()
    -- if v14 == Drivable.CRUISECONTROL_STATE_OFF then goto L81 end
    local v15 = self:getCruiseControlSpeed()
    if v6.speed < v13 * v15 / 3.6 then
      -- goto L81  (LOP_JUMP +8)
    end
    -- if v13 * v14 >= v6.speed then goto L81 end
  else
  end
  v13 = math.abs(v8)
  if v13 < 0.001 then
    v13 = Locomotive.getBrakeAcceleration(self)
    if 0 < v6.speed then
      v14 = math.max(0, v6.speed + v13 * dt / 1000)
      v6.speed = v14
    elseif v6.speed < 0 then
      v14 = math.min(0, v6.speed + v13 * dt / 1000)
      v6.speed = v14
    else
      v14 = math.abs(downhillForce)
      if v11 < v14 then
        v6.speed = v6.speed + v13 * dt / 1000
      end
    end
    if v6.speed == 0 then
      v6.hasStopped = true
      -- goto L266  (LOP_JUMP +111)
    end
    v6.hasStopped = false
  else
    v13 = math.abs(v6.speed)
    if 0.1 < v13 then
      v6.hasStopped = false
    else
      v13 = math.abs(v6.speed)
      if v13 == 0 then
        v6.hasStopped = true
      end
    end
    if v6.hasStopped ~= nil then
      -- if not v6.hasStopped then goto L204 end
      v13 = math.abs(v8)
      -- if 0.01 >= v13 then goto L204 end
    end
    v13 = MathUtil.sign(v8)
    v6.nextMovingDirection = v13
    if v6.nextMovingDirection ~= nil then
      -- if 0 >= v6.nextMovingDirection * v8 then goto L226 end
    end
    -- goto L259  (LOP_JUMP +33)
    local v16 = MathUtil.sign(v6.speed)
    local v17 = math.abs(v8)
    v15 = math.abs(v6.speed)
    if v15 < 0.1 then
      v6.speed = 0
    else
    end
    v6.speed = v6.speed + v13 * v9 / 1000
  end
  if 0 < v6.speed then
    v14 = math.min(v6.speed, v6.motor.maxForwardSpeed)
    v6.speed = v14
  elseif v6.speed < 0 then
    v14 = math.max(v6.speed, -v6.motor.maxBackwardSpeed)
    v6.speed = v14
  end
  if v6.speed ~= 0 then
    v14:updateTrainPositionByLocomotiveSpeed(v9, v6.speed)
  end
  if 0 < v6.lastAcceleration * v6.nextMovingDirection then
    v16 = math.min(v13.maxRpm, v6.lastVirtualRpm + 0.0005 * dt * (v13.maxRpm - v13.minRpm))
    v6.lastVirtualRpm = v16
  else
    v16 = math.max(v13.minRpm, v6.lastVirtualRpm - 0.001 * dt * (v13.maxRpm - v13.minRpm))
    v6.lastVirtualRpm = v16
  end
  v13:setEqualizedMotorRpm(v6.lastVirtualRpm)
  v6.lastAcceleration = v8
end
function Locomotive:alignToSplineTime(superFunc, spline, yOffset, tFront)
  local retValue = superFunc(self, spline, yOffset, tFront)
  if retValue ~= nil and self.spec_locomotive.powerArm ~= nil and self.spec_locomotive.electricitySpline ~= nil then
    local v7 = SplineUtil.getValidSplineTime(retValue)
    local v8, v9, v10 = getWorldTranslation(self.spec_locomotive.powerArm)
    local v11, downhillForce, v13, v14 = getLocalClosestSplinePosition(self.spec_locomotive.electricitySpline, v7, self.spec_locomotive.electricitySplineSearchTime, v8, v9, v10, 0.01)
    downhillForce = getParent(self.spec_locomotive.powerArm)
    v11, downhillForce, v13 = worldToLocal(downhillForce, v11, downhillForce, v13)
    v11, downhillForce, v13 = getTranslation(self.spec_locomotive.powerArm)
    setTranslation(self.spec_locomotive.powerArm, v11, downhillForce, v13)
    if self.spec_locomotive.powerArm ~= nil then
      self:setMovingToolDirty(self.spec_locomotive.powerArm)
    end
  end
  if not self.isServer then
    self:updateMapHotspot()
  end
  return retValue
end
function Locomotive.getCanBeReset(v0, superFunc)
  return false
end
