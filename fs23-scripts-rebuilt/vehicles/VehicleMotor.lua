-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleMotor = {}
local VehicleMotor_mt = Class(VehicleMotor)
VehicleMotor.DAMAGE_TORQUE_REDUCTION = 0.3
VehicleMotor.DEFAULT_DAMPING_RATE_FULL_THROTTLE = 0.00025
VehicleMotor.DEFAULT_DAMPING_RATE_ZERO_THROTTLE_CLUTCH_EN = 0.0015
VehicleMotor.DEFAULT_DAMPING_RATE_ZERO_THROTTLE_CLUTCH_DIS = 0.0015
VehicleMotor.GEAR_START_THRESHOLD = 1.5
VehicleMotor.REASON_CLUTCH_NOT_ENGAGED = 0
VehicleMotor.SHIFT_MODE_AUTOMATIC = 1
VehicleMotor.SHIFT_MODE_MANUAL = 2
VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH = 3
VehicleMotor.DIRECTION_CHANGE_MODE_AUTOMATIC = 1
VehicleMotor.DIRECTION_CHANGE_MODE_MANUAL = 2
VehicleMotor.TRANSMISSION_TYPE = {DEFAULT = 1, POWERSHIFT = 2}
function VehicleMotor.new(vehicle, minRpm, maxRpm, maxForwardSpeed, maxBackwardSpeed, torqueCurve, brakeForce, forwardGears, backwardGears, minForwardGearRatio, maxForwardGearRatio, minBackwardGearRatio, maxBackwardGearRatio, ptoMotorRpmRatio, minSpeed)
  setmetatable({}, u0)
  if {vehicle = vehicle, minRpm = minRpm, maxRpm = maxRpm, minSpeed = minSpeed, maxForwardSpeed = maxForwardSpeed, maxBackwardSpeed = maxBackwardSpeed, maxClutchTorque = 5, torqueCurve = torqueCurve, brakeForce = brakeForce, lastAcceleratorPedal = 0, idleGearChangeTimer = 0, doSecondBestGearSelection = 0, gear = 0, bestGearSelected = 0, minGearRatio = 0, maxGearRatio = 0, allowGearChangeTimer = 0, allowGearChangeDirection = 0, forwardGears = forwardGears, backwardGears = backwardGears, currentGears = {vehicle = vehicle, minRpm = minRpm, maxRpm = maxRpm, minSpeed = minSpeed, maxForwardSpeed = maxForwardSpeed, maxBackwardSpeed = maxBackwardSpeed, maxClutchTorque = 5, torqueCurve = torqueCurve, brakeForce = brakeForce, lastAcceleratorPedal = 0, idleGearChangeTimer = 0, doSecondBestGearSelection = 0, gear = 0, bestGearSelected = 0, minGearRatio = 0, maxGearRatio = 0, allowGearChangeTimer = 0, allowGearChangeDirection = 0, forwardGears = forwardGears, backwardGears = backwardGears}.forwardGears, minForwardGearRatio = minForwardGearRatio, maxForwardGearRatio = maxForwardGearRatio, minBackwardGearRatio = minBackwardGearRatio, maxBackwardGearRatio = maxBackwardGearRatio, maxClutchSpeedDifference = 0, defaultForwardGear = 1}.forwardGears ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 84, target 115)
    local v19 = math.max({vehicle = vehicle, minRpm = minRpm, maxRpm = maxRpm, minSpeed = minSpeed, maxForwardSpeed = maxForwardSpeed, maxBackwardSpeed = maxBackwardSpeed, maxClutchTorque = 5, torqueCurve = torqueCurve, brakeForce = brakeForce, lastAcceleratorPedal = 0, idleGearChangeTimer = 0, doSecondBestGearSelection = 0, gear = 0, bestGearSelected = 0, minGearRatio = 0, maxGearRatio = 0, allowGearChangeTimer = 0, allowGearChangeDirection = 0, forwardGears = forwardGears, backwardGears = backwardGears, currentGears = {vehicle = vehicle, minRpm = minRpm, maxRpm = maxRpm, minSpeed = minSpeed, maxForwardSpeed = maxForwardSpeed, maxBackwardSpeed = maxBackwardSpeed, maxClutchTorque = 5, torqueCurve = torqueCurve, brakeForce = brakeForce, lastAcceleratorPedal = 0, idleGearChangeTimer = 0, doSecondBestGearSelection = 0, gear = 0, bestGearSelected = 0, minGearRatio = 0, maxGearRatio = 0, allowGearChangeTimer = 0, allowGearChangeDirection = 0, forwardGears = forwardGears, backwardGears = backwardGears}.forwardGears, minForwardGearRatio = minForwardGearRatio, maxForwardGearRatio = maxForwardGearRatio, minBackwardGearRatio = minBackwardGearRatio, maxBackwardGearRatio = maxBackwardGearRatio, maxClutchSpeedDifference = 0, defaultForwardGear = 1}.maxClutchSpeedDifference, {vehicle = vehicle, minRpm = minRpm, maxRpm = maxRpm, minSpeed = minSpeed, maxForwardSpeed = maxForwardSpeed, maxBackwardSpeed = maxBackwardSpeed, maxClutchTorque = 5, torqueCurve = torqueCurve, brakeForce = brakeForce, lastAcceleratorPedal = 0, idleGearChangeTimer = 0, doSecondBestGearSelection = 0, gear = 0, bestGearSelected = 0, minGearRatio = 0, maxGearRatio = 0, allowGearChangeTimer = 0, allowGearChangeDirection = 0, forwardGears = forwardGears, backwardGears = backwardGears, currentGears = {vehicle = vehicle, minRpm = minRpm, maxRpm = maxRpm, minSpeed = minSpeed, maxForwardSpeed = maxForwardSpeed, maxBackwardSpeed = maxBackwardSpeed, maxClutchTorque = 5, torqueCurve = torqueCurve, brakeForce = brakeForce, lastAcceleratorPedal = 0, idleGearChangeTimer = 0, doSecondBestGearSelection = 0, gear = 0, bestGearSelected = 0, minGearRatio = 0, maxGearRatio = 0, allowGearChangeTimer = 0, allowGearChangeDirection = 0, forwardGears = forwardGears, backwardGears = backwardGears}.forwardGears, minForwardGearRatio = minForwardGearRatio, maxForwardGearRatio = maxForwardGearRatio, minBackwardGearRatio = minBackwardGearRatio, maxBackwardGearRatio = maxBackwardGearRatio, maxClutchSpeedDifference = 0, defaultForwardGear = 1}.minRpm / {vehicle = vehicle, minRpm = minRpm, maxRpm = maxRpm, minSpeed = minSpeed, maxForwardSpeed = maxForwardSpeed, maxBackwardSpeed = maxBackwardSpeed, maxClutchTorque = 5, torqueCurve = torqueCurve, brakeForce = brakeForce, lastAcceleratorPedal = 0, idleGearChangeTimer = 0, doSecondBestGearSelection = 0, gear = 0, bestGearSelected = 0, minGearRatio = 0, maxGearRatio = 0, allowGearChangeTimer = 0, allowGearChangeDirection = 0, forwardGears = forwardGears, backwardGears = backwardGears, currentGears = {vehicle = vehicle, minRpm = minRpm, maxRpm = maxRpm, minSpeed = minSpeed, maxForwardSpeed = maxForwardSpeed, maxBackwardSpeed = maxBackwardSpeed, maxClutchTorque = 5, torqueCurve = torqueCurve, brakeForce = brakeForce, lastAcceleratorPedal = 0, idleGearChangeTimer = 0, doSecondBestGearSelection = 0, gear = 0, bestGearSelected = 0, minGearRatio = 0, maxGearRatio = 0, allowGearChangeTimer = 0, allowGearChangeDirection = 0, forwardGears = forwardGears, backwardGears = backwardGears}.forwardGears, minForwardGearRatio = minForwardGearRatio, maxForwardGearRatio = maxForwardGearRatio, minBackwardGearRatio = minBackwardGearRatio, maxBackwardGearRatio = maxBackwardGearRatio, maxClutchSpeedDifference = 0, defaultForwardGear = 1}.forwardGears[1].ratio * math.pi / 30)
    if {vehicle = vehicle, minRpm = minRpm, maxRpm = maxRpm, minSpeed = minSpeed, maxForwardSpeed = maxForwardSpeed, maxBackwardSpeed = maxBackwardSpeed, maxClutchTorque = 5, torqueCurve = torqueCurve, brakeForce = brakeForce, lastAcceleratorPedal = 0, idleGearChangeTimer = 0, doSecondBestGearSelection = 0, gear = 0, bestGearSelected = 0, minGearRatio = 0, maxGearRatio = 0, allowGearChangeTimer = 0, allowGearChangeDirection = 0, forwardGears = forwardGears, backwardGears = backwardGears, currentGears = {vehicle = vehicle, minRpm = minRpm, maxRpm = maxRpm, minSpeed = minSpeed, maxForwardSpeed = maxForwardSpeed, maxBackwardSpeed = maxBackwardSpeed, maxClutchTorque = 5, torqueCurve = torqueCurve, brakeForce = brakeForce, lastAcceleratorPedal = 0, idleGearChangeTimer = 0, doSecondBestGearSelection = 0, gear = 0, bestGearSelected = 0, minGearRatio = 0, maxGearRatio = 0, allowGearChangeTimer = 0, allowGearChangeDirection = 0, forwardGears = forwardGears, backwardGears = backwardGears}.forwardGears, minForwardGearRatio = minForwardGearRatio, maxForwardGearRatio = maxForwardGearRatio, minBackwardGearRatio = minBackwardGearRatio, maxBackwardGearRatio = maxBackwardGearRatio, maxClutchSpeedDifference = 0, defaultForwardGear = 1, maxClutchSpeedDifference = v19}.forwardGears[1].default then
    end
    -- TODO: structure LOP_FORNLOOP (pc 114, target 85)
  end
  v15.defaultBackwardGear = 1
  if v15.backwardGears ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 127, target 158)
    v19 = math.max(v15.maxClutchSpeedDifference, v15.minRpm / v15.backwardGears[1].ratio * math.pi / 30)
    v15.maxClutchSpeedDifference = v19
    if v15.backwardGears[1].default then
      v15.defaultBackwardGear = 1
    end
    -- TODO: structure LOP_FORNLOOP (pc 157, target 128)
  end
  v15.gearType = VehicleMotor.TRANSMISSION_TYPE.DEFAULT
  v15.groupType = VehicleMotor.TRANSMISSION_TYPE.DEFAULT
  v15.manualTargetGear = nil
  v15.targetGear = 0
  v15.previousGear = 0
  v15.gearChangeTimer = -1
  v15.gearChangeTime = 250
  v15.gearChangeTimeOrig = v15.gearChangeTime
  v15.autoGearChangeTimer = -1
  v15.autoGearChangeTime = 1000
  v15.manualClutchValue = 0
  v15.stallTimer = 0
  v15.lastGearChangeTime = 0
  v15.gearChangeTimeAutoReductionTime = 500
  v15.gearChangeTimeAutoReductionTimer = 0
  v15.lastManualShifterActive = false
  v15.clutchSlippingTime = 1000
  v15.clutchSlippingTimer = 0
  v15.clutchSlippingGearRatio = 0
  v15.groupChangeTime = 500
  v15.groupChangeTimer = 0
  v15.gearGroupUpShiftTime = 3000
  v15.gearGroupUpShiftTimer = 0
  v15.currentDirection = 1
  v15.directionChangeTimer = 0
  v15.directionChangeTime = 500
  v15.directionChangeUseGear = false
  v15.directionChangeGearIndex = 1
  v15.directionLastGear = -1
  v15.directionChangeUseGroup = false
  v15.directionChangeGroupIndex = 1
  v15.directionLastGroup = -1
  v15.directionChangeUseInverse = true
  v15.gearChangedIsLocked = false
  v15.gearGroupChangedIsLocked = false
  v15.startGearValues = {slope = 0, mass = 0, lastMass = 0, maxForce = 0, massDirectionDifferenceXZ = 0, massDirectionDifferenceY = 0, massDirectionFactor = 0, availablePower = 0, massFactor = 0}
  v15.startGearThreshold = VehicleMotor.GEAR_START_THRESHOLD
  v15.lastSmoothedClutchPedal = 0
  v15.lastRealMotorRpm = 0
  v15.lastMotorRpm = 0
  v15.lastModulationPercentage = 0
  v15.lastModulationTimer = 0
  v15.rawLoadPercentage = 0
  v15.rawLoadPercentageBuffer = 0
  v15.rawLoadPercentageBufferIndex = 0
  v15.smoothedLoadPercentage = 0
  v15.loadPercentageChangeCharge = 0
  v15.accelerationLimitLoadScale = 1
  v15.accelerationLimitLoadScaleTimer = 0
  v15.accelerationLimitLoadScaleDelay = 2000
  v15.constantRpmCharge = 0
  v15.constantAccelerationCharge = 0
  v15.lastTurboScale = 0
  v15.blowOffValveState = 0
  v15.overSpeedTimer = 0
  v15.rpmLimit = math.huge
  v15.speedLimit = math.huge
  v15.speedLimitAcc = math.huge
  v15.accelerationLimit = 2
  v15.motorRotationAccelerationLimit = (maxRpm - minRpm) * math.pi / 30 / 2
  v15.equalizedMotorRpm = 0
  v15.requiredMotorPower = 0
  if v15.maxForwardSpeed == nil then
    local v16 = v15:calculatePhysicalMaximumForwardSpeed()
    v15.maxForwardSpeed = v16
  end
  if v15.maxBackwardSpeed == nil then
    v16 = v15:calculatePhysicalMaximumBackwardSpeed()
    v15.maxBackwardSpeed = v16
  end
  v15.maxForwardSpeedOrigin = v15.maxForwardSpeed
  v15.maxBackwardSpeedOrigin = v15.maxBackwardSpeed
  v15.minForwardGearRatioOrigin = v15.minForwardGearRatio
  v15.maxForwardGearRatioOrigin = v15.maxForwardGearRatio
  v15.minBackwardGearRatioOrigin = v15.minBackwardGearRatio
  v15.maxBackwardGearRatioOrigin = v15.maxBackwardGearRatio
  v16 = v16:getMaximum()
  v15.peakMotorTorque = v16
  v15.peakMotorPower = 0
  v15.peakMotorPowerRotSpeed = 0
  if 2 <= #v15.torqueCurve.keyframes then
    -- TODO: structure LOP_FORNPREP (pc 459, target 561)
    local v22 = v22:getFromKeyframes(v15.torqueCurve.keyframes[2 - 1], v15.torqueCurve.keyframes[2 - 1], 2 - 1, 2 - 1, 0)
    local v23 = v23:getFromKeyframes(v15.torqueCurve.keyframes[2], v15.torqueCurve.keyframes[2], 2, 2, 0)
    local v26 = math.abs(v22 - v23)
    if 0.0001 < v26 then
      local v27 = math.max((v15.torqueCurve.keyframes[2].time * v22 - v15.torqueCurve.keyframes[2 - 1].time * v23) / 2 * (v22 - v23), v15.torqueCurve.keyframes[2 - 1].time)
      v26 = math.min(v27, v15.torqueCurve.keyframes[2].time)
      v26 = v26:getFromKeyframes(v15.torqueCurve.keyframes[2 - 1], v15.torqueCurve.keyframes[2], 2 - 1, 2, (v15.torqueCurve.keyframes[2].time - v26) / (v15.torqueCurve.keyframes[2].time - v15.torqueCurve.keyframes[2 - 1].time))
    else
    end
    if v15.peakMotorPower < v25 * v24 then
      v15.peakMotorPower = v25 * v24
      v15.peakMotorPowerRotSpeed = v24
    end
    -- TODO: structure LOP_FORNLOOP (pc 560, target 460)
    v15.peakMotorPower = v15.peakMotorPower * math.pi / 30
    v15.peakMotorPowerRotSpeed = v15.peakMotorPowerRotSpeed * math.pi / 30
  else
    v19 = v19:getFromKeyframes(v15.torqueCurve.keyframes[1], v15.torqueCurve.keyframes[1], 1, 1, 0)
    v15.peakMotorPower = v15.torqueCurve.keyframes[1].time * math.pi / 30 * v19
    v15.peakMotorPowerRotSpeed = v15.torqueCurve.keyframes[1].time * math.pi / 30
  end
  v15.ptoMotorRpmRatio = ptoMotorRpmRatio
  v15.rotInertia = v15.peakMotorTorque / 600
  v15.dampingRateFullThrottle = VehicleMotor.DEFAULT_DAMPING_RATE_FULL_THROTTLE
  v15.dampingRateZeroThrottleClutchEngaged = VehicleMotor.DEFAULT_DAMPING_RATE_ZERO_THROTTLE_CLUTCH_EN
  v15.dampingRateZeroThrottleClutchDisengaged = VehicleMotor.DEFAULT_DAMPING_RATE_ZERO_THROTTLE_CLUTCH_DIS
  v15.gearRatio = 0
  v15.motorRotSpeed = 0
  v15.motorRotSpeedClutchEngaged = 0
  v15.motorRotAcceleration = 0
  v15.motorRotAccelerationSmoothed = 0
  v15.motorAvailableTorque = 0
  v15.lastMotorAvailableTorque = 0
  v15.motorAppliedTorque = 0
  v15.lastMotorAppliedTorque = 0
  v15.motorExternalTorque = 0
  v15.lastMotorExternalTorque = 0
  v15.externalTorqueVirtualMultiplicator = 1
  v15.differentialRotSpeed = 0
  v15.differentialRotAcceleration = 0
  v15.differentialRotAccelerationSmoothed = 0
  v15.differentialRotAccelerationIndex = 1
  v15.differentialRotAccelerationSamples = {}
  table.insert(v15.differentialRotAccelerationSamples, 0)
  table.insert(v15.differentialRotAccelerationSamples, 0)
  table.insert(v15.differentialRotAccelerationSamples, 0)
  table.insert(v15.differentialRotAccelerationSamples, 0)
  table.insert(v15.differentialRotAccelerationSamples, 0)
  table.insert(v15.differentialRotAccelerationSamples, 0)
  table.insert(v15.differentialRotAccelerationSamples, 0)
  table.insert(v15.differentialRotAccelerationSamples, 0)
  table.insert(v15.differentialRotAccelerationSamples, 0)
  table.insert(v15.differentialRotAccelerationSamples, 0)
  v15.lastDifference = 0
  local v17 = v17:getValue(GameSettings.SETTING.DIRECTION_CHANGE_MODE)
  v15.directionChangeMode = v17
  v17 = v17:getValue(GameSettings.SETTING.GEAR_SHIFT_MODE)
  v15.gearShiftMode = v17
  return v15
end
function VehicleMotor:postLoad(savegame)
  if self.gearGroups ~= nil then
    SpecializationUtil.raiseEvent(self.vehicle, "onGearGroupChanged", self.activeGearGroupIndex, 0)
  end
end
function VehicleMotor.delete(v0)
  v1:unsubscribeAll(v0)
end
function VehicleMotor:setGearGroups(gearGroups, groupType, groupChangeTime)
  self.gearGroups = gearGroups
  local v6 = groupType:upper()
  if not VehicleMotor.TRANSMISSION_TYPE[v6] then
  end
  self.groupType = v4
  self.groupChangeTime = groupChangeTime
  if gearGroups ~= nil then
    self.numGearGroups = #gearGroups
    self.defaultGearGroup = 1
    -- TODO: structure LOP_FORNPREP (pc 33, target 46)
    if 0 < self.gearGroups[1].ratio then
      self.defaultGearGroup = 1
    else
      -- TODO: structure LOP_FORNLOOP (pc 45, target 34)
    end
    -- TODO: structure LOP_FORNPREP (pc 50, target 61)
    if self.gearGroups[1].isDefault then
      self.defaultGearGroup = 1
    else
      -- TODO: structure LOP_FORNLOOP (pc 60, target 51)
    end
    self.activeGearGroupIndex = self.defaultGearGroup
  end
end
function VehicleMotor:setDirectionChange(directionChangeUseGear, directionChangeGearIndex, directionChangeUseGroup, directionChangeGroupIndex, directionChangeTime)
  self.directionChangeUseGear = directionChangeUseGear
  self.directionChangeGearIndex = directionChangeGearIndex
  self.directionChangeUseGroup = directionChangeUseGroup
  self.directionChangeGroupIndex = directionChangeGroupIndex
  self.directionChangeTime = directionChangeTime
  if not directionChangeUseGear then
  end
  self.directionChangeUseInverse = v6
end
function VehicleMotor:setManualShift(manualShiftGears, manualShiftGroups)
  self.manualShiftGears = manualShiftGears
  self.manualShiftGroups = manualShiftGroups
end
function VehicleMotor:setStartGearThreshold(startGearThreshold)
  self.startGearThreshold = startGearThreshold
end
function VehicleMotor:setLowBrakeForce(lowBrakeForceScale, lowBrakeForceSpeedLimit)
  self.lowBrakeForceScale = lowBrakeForceScale
  self.lowBrakeForceSpeedLimit = lowBrakeForceSpeedLimit
end
function VehicleMotor:getMaxClutchTorque()
  return self.maxClutchTorque
end
function VehicleMotor:getRotInertia()
  return self.rotInertia
end
function VehicleMotor:setRotInertia(rotInertia)
  self.rotInertia = rotInertia
end
function VehicleMotor:getDampingRateFullThrottle()
  return self.dampingRateFullThrottle
end
function VehicleMotor:getDampingRateZeroThrottleClutchEngaged()
  return self.dampingRateZeroThrottleClutchEngaged
end
function VehicleMotor:getDampingRateZeroThrottleClutchDisengaged()
  return self.dampingRateZeroThrottleClutchDisengaged
end
function VehicleMotor:setDampingRateScale(dampingRateScale)
  self.dampingRateFullThrottle = VehicleMotor.DEFAULT_DAMPING_RATE_FULL_THROTTLE * dampingRateScale
  self.dampingRateZeroThrottleClutchEngaged = VehicleMotor.DEFAULT_DAMPING_RATE_ZERO_THROTTLE_CLUTCH_EN * dampingRateScale
  self.dampingRateZeroThrottleClutchDisengaged = VehicleMotor.DEFAULT_DAMPING_RATE_ZERO_THROTTLE_CLUTCH_DIS * dampingRateScale
end
function VehicleMotor:setGearChangeTime(gearChangeTime)
  self.gearChangeTime = gearChangeTime
  self.gearChangeTimeOrig = gearChangeTime
  local v2 = math.min(self.gearChangeTimer, gearChangeTime)
  self.gearChangeTimer = v2
  if gearChangeTime == 0 then
    -- if VehicleMotor.TRANSMISSION_TYPE.POWERSHIFT then goto L29 end
  end
  self.gearType = VehicleMotor.TRANSMISSION_TYPE.DEFAULT
end
function VehicleMotor:setAutoGearChangeTime(autoGearChangeTime)
  self.autoGearChangeTime = autoGearChangeTime
  local v2 = math.min(self.autoGearChangeTimer, autoGearChangeTime)
  self.autoGearChangeTimer = v2
end
function VehicleMotor:getPeakTorque()
  return self.peakMotorTorque
end
function VehicleMotor:getBrakeForce()
  return self.brakeForce
end
function VehicleMotor:getMinRpm()
  return self.minRpm
end
function VehicleMotor:getMaxRpm()
  return self.maxRpm
end
function VehicleMotor:getRequiredMotorRpmRange()
  local v3 = PowerConsumer.getMaxPtoRpm(self.vehicle)
  local v1 = math.min(v3 * self.ptoMotorRpmRatio, self.maxRpm)
  if v1 ~= 0 then
    return v1, self.maxRpm
  end
  return self.minRpm, self.maxRpm
end
function VehicleMotor:getLastMotorRpm()
  return self.lastMotorRpm
end
function VehicleMotor:getLastModulatedMotorRpm()
  local v1 = MathUtil.clamp((self.smoothedLoadPercentage - 0.1) / 0.9, 0.01, 1)
  local v4 = self:getClutchPedal()
  if v4 < 0.1 then
    -- if 0 >= v0.minGearRatio then goto L46 end
  else
    self.loadPercentageChangeCharge = 0
  end
  return self.lastMotorRpm + v2 - v3
end
function VehicleMotor:getLastRealMotorRpm()
  return self.lastRealMotorRpm
end
function VehicleMotor:getSmoothLoadPercentage()
  local v1 = MathUtil.clamp((self.smoothedLoadPercentage - 0) / 0.5, 0, 1)
  return self.smoothedLoadPercentage - self.lastModulationPercentage * 0.05 * v1
end
function VehicleMotor:getClutchPedal()
  if self.vehicle.isServer then
    -- if v0.gearShiftMode ~= VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH then goto L16 end
  end
  return self.manualClutchValue
  local v1 = self:getNonClampedMotorRpm()
  if v1 == 0 then
    return 0
  end
  local v10 = self:getClutchRotSpeed()
  local v5 = math.min((v10 * 30 / math.pi + 50) / v1, 1)
  local v4 = math.max(v5, 0)
  return 1 - v4
end
function VehicleMotor:getSmoothedClutchPedal()
  return self.lastSmoothedClutchPedal
end
function VehicleMotor:getManualClutchPedal()
  if self.gearShiftMode == VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH then
    return self.manualClutchValue
  end
  return 0
end
function VehicleMotor:getGearToDisplay()
  if not self.backwardGears then
    -- if not v0.forwardGears then goto L129 end
  end
  if 0 < self.targetGear and self.currentGears[self.targetGear] ~= nil then
    if self.currentGears == self.forwardGears then
      -- if v0.currentDirection then goto L38 end
    end
    if 1 == 1 then
      -- if v9.name then goto L45 end
    end
    if self.currentGears[self.targetGear + 1 * -v10] ~= nil then
      if v11 == 1 then
        -- if v0.currentGears[v0.targetGear + 1 * -v10].name then goto L64 end
      end
      if self.currentGears[self.targetGear + 2 * -v10] ~= nil and v11 == 1 then
        -- if v0.currentGears[v0.targetGear + 2 * -v10].name then goto L83 end
      end
    end
    if self.currentGears[self.targetGear + 1 * v10] ~= nil then
      if v11 == 1 then
        -- if v0.currentGears[v0.targetGear + 1 * v10].name then goto L101 end
      end
      if self.currentGears[self.targetGear + 2 * v10] ~= nil and v11 == 1 then
        -- if v0.currentGears[v0.targetGear + 2 * v10].name then goto L119 end
      end
    end
    if self.gear ~= self.targetGear then
    end
  end
  -- goto L147  (LOP_JUMP +18)
  local v9 = self:getDrivingDirection()
  if 0 < v9 then
  elseif v9 < 0 then
  else
  end
  return v1, v2, true, v3, v4, v5, v6, v8
end
function VehicleMotor:getDrivingDirection()
  if self.directionChangeMode ~= VehicleMotor.DIRECTION_CHANGE_MODE_MANUAL then
    -- if v0.gearShiftMode == VehicleMotor.SHIFT_MODE_AUTOMATIC then goto L19 end
  end
  return self.currentDirection
  local v1 = v1:getLastSpeed()
  if 0.95 < v1 then
    return self.vehicle.movingDirection
  end
  return 0
end
function VehicleMotor:getGearGroupToDisplay()
  if not self.backwardGears then
    -- if not v0.forwardGears then goto L27 end
  end
  if self.gearGroups ~= nil and 0 < self.activeGearGroupIndex and self.gearGroups[self.activeGearGroupIndex] ~= nil then
  end
  return v1, v2
end
function VehicleMotor:readGearDataFromStream(streamId)
  local v3 = streamReadUIntN(streamId, 2)
  self.currentDirection = v3 - 1
  local v2 = streamReadBool(streamId)
  if v2 then
    v2 = streamReadUIntN(streamId, 6)
    v3 = streamReadBool(streamId)
    local v4 = streamReadBool(streamId)
    if v4 then
      self.currentGears = self.forwardGears
    else
      self.currentGears = self.backwardGears
    end
    if self.gearGroups ~= nil then
      local v5 = streamReadUIntN(streamId, 5)
    end
    if v2 ~= self.gear then
      if v3 and self.gear ~= 0 then
        self.lastGearChangeTime = g_time
      end
      if v3 then
      else
      end
      self.gear = v5
      self.targetGear = v2
      if self.directionChangeUseGear then
        -- if v0.currentDirection then goto L75 end
      end
      SpecializationUtil.raiseEvent(self.vehicle, "onGearChanged", self.gear * 1, self.targetGear * 1, 0)
    end
    if v4 ~= self.activeGearGroupIndex then
      self.activeGearGroupIndex = v4
      if self.groupType == VehicleMotor.TRANSMISSION_TYPE.DEFAULT then
        -- if v0.groupChangeTime then goto L115 end
      end
      v5(v6, v7, v8, 0)
    end
  end
end
function VehicleMotor:writeGearDataToStream(streamId)
  local v5 = MathUtil.sign(self.currentDirection)
  streamWriteUIntN(streamId, v5 + 1, 2)
  if self.backwardGears == nil and self.forwardGears == nil then
  end
  local v2 = v2(v3, v4)
  if v2 then
    streamWriteUIntN(streamId, self.targetGear, 6)
    if self.targetGear == self.gear then
    end
    v2(v3, true)
    if self.currentGears ~= self.forwardGears then
    end
    v2(v3, true)
    if self.gearGroups ~= nil then
      streamWriteUIntN(streamId, self.activeGearGroupIndex, 5)
    end
  end
end
function VehicleMotor:setLastRpm(lastRpm)
  self.lastRealMotorRpm = lastRpm
  if self.gearType == VehicleMotor.TRANSMISSION_TYPE.POWERSHIFT and g_time - self.lastGearChangeTime < 200 then
  end
  self.lastMotorRpm = self.lastMotorRpm * (1 - v3) + self.lastRealMotorRpm * v3
  if not self.lastPtoRpm then
  end
  local v7 = math.max(v8, self.minRpm)
  local v6 = self:getSmoothLoadPercentage()
  self.lastTurboScale = self.lastTurboScale * 0.95 + (v6 - v7) / (self.maxRpm - self.minRpm) * v6 * 0.05
  if self.lastAcceleratorPedal ~= 0 then
    -- cmp-jump LOP_JUMPXEQKN R6 aux=0x80000015 -> L85
    -- if 0 >= v0.autoGearChangeTime then goto L85 end
  end
  self.blowOffValveState = self.lastTurboScale
  -- goto L88  (LOP_JUMP +3)
  self.blowOffValveState = 0
  local v10 = math.abs(self.lastMotorRpm - v2)
  local v8 = math.min(v10 * 0.15, 1)
  self.constantRpmCharge = 1 - v8
end
function VehicleMotor:getMotorAppliedTorque()
  return self.motorAppliedTorque
end
function VehicleMotor:getMotorExternalTorque()
  return self.motorExternalTorque
end
function VehicleMotor:getMotorAvailableTorque()
  return self.motorAvailableTorque
end
function VehicleMotor:getEqualizedMotorRpm()
  return self.equalizedMotorRpm
end
function VehicleMotor:setEqualizedMotorRpm(rpm)
  self.equalizedMotorRpm = rpm
  self:setLastRpm(rpm)
end
function VehicleMotor:getPtoMotorRpmRatio()
  return self.ptoMotorRpmRatio
end
function VehicleMotor:setExternalTorqueVirtualMultiplicator(externalTorqueVirtualMultiplicator)
  self.externalTorqueVirtualMultiplicator = externalTorqueVirtualMultiplicator or 1
end
function VehicleMotor:getNonClampedMotorRpm()
  return self.motorRotSpeed * 30 / math.pi
end
function VehicleMotor:getMotorRotSpeed()
  return self.motorRotSpeed
end
function VehicleMotor:getClutchRotSpeed()
  return self.differentialRotSpeed * self.gearRatio
end
function VehicleMotor:getTorqueCurve()
  return self.torqueCurve
end
function VehicleMotor:getTorque(acceleration)
  local v4 = MathUtil.clamp(self.motorRotSpeed * 30 / math.pi, self.minRpm, self.maxRpm)
  local v2 = self:getTorqueCurveValue(...)
  local v3 = math.abs(acceleration)
  return v2 * v3
end
function VehicleMotor:getTorqueCurveValue(rpm)
  local v5 = v5:getVehicleDamage()
  local v4 = self:getTorqueCurve()
  v4 = v4:get(rpm)
  return v4 * (1 - v5 * VehicleMotor.DAMAGE_TORQUE_REDUCTION)
end
function VehicleMotor:getTorqueAndSpeedValues()
  local v6 = self:getTorqueCurve()
  for v6, v7 in ipairs(v6.keyframes) do
    table.insert(v1, v7.time * math.pi / 30)
    local v10 = self:getTorqueCurveValue(v7.time)
    table.insert(...)
  end
  return v2, v1
end
function VehicleMotor:getMaximumForwardSpeed()
  return self.maxForwardSpeed
end
function VehicleMotor:getMaximumBackwardSpeed()
  return self.maxBackwardSpeed
end
function VehicleMotor:calculatePhysicalMaximumForwardSpeed()
  return VehicleMotor.calculatePhysicalMaximumSpeed(self.minForwardGearRatio, self.forwardGears, self.maxRpm)
end
function VehicleMotor:calculatePhysicalMaximumBackwardSpeed()
  if not self.backwardGears then
  end
  return v1(v2, v3, self.maxRpm)
end
function VehicleMotor.calculatePhysicalMaximumSpeed(minGearRatio, gears, maxRpm)
  if minGearRatio ~= nil then
  elseif gears ~= nil then
    for v7, v8 in pairs(gears) do
      local v9 = math.min(v3, v8.ratio)
    end
  else
    printCallstack()
    return 0
  end
  return maxRpm * math.pi / 30 * v3
end
function VehicleMotor:update(dt)
  local v3 = next(self.vehicle.spec_motorized.differentials)
  if v3 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L302
    local v5, v6, clutchPedal = getMotorRotationSpeed(self.vehicle.spec_motorized.motorizedNode)
    self.motorRotSpeed = v5
    self.differentialRotSpeed = v6
    self.gearRatio = clutchPedal
    if self.gearShiftMode ~= VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH then
      if not self.backwardGears then
        -- if not v0.forwardGears then goto L102 end
      end
      if self.gearRatio ~= 0 and self.maxGearRatio ~= 0 and self.lastAcceleratorPedal ~= 0 then
        local v9 = math.abs(self.maxGearRatio)
        v6 = math.abs(self.differentialRotSpeed)
        if v6 < self.minRpm / v9 * math.pi / 30 * 0.75 then
          self.clutchSlippingTimer = self.clutchSlippingTime
          self.clutchSlippingGearRatio = self.gearRatio
        else
          v6 = math.max(self.clutchSlippingTimer - dt, 0)
          self.clutchSlippingTimer = v6
        end
      end
    end
    v5 = self:getUseAutomaticGearShifting()
    if not v5 then
      if self.minGearRatio == 0 then
        -- cmp-jump LOP_JUMPXEQKN R7 aux=0x10 -> L125
      end
      if 0.1 < self.manualClutchValue then
      end
      if v6 * v5 == 0 then
      end
      if 0 < clutchPedal then
        -- if v0.motorRotationAccelerationLimit * 0.02 then goto L143 end
      end
      local v12 = math.max(self.motorRotSpeedClutchEngaged + clutchPedal * self.dampingRateZeroThrottleClutchEngaged * 30 * math.pi * dt, self.minRpm * math.pi / 30)
      local v11 = math.min(v12, self.minRpm * math.pi / 30 + (self.maxRpm * math.pi / 30 - self.minRpm * math.pi / 30) * v5)
      self.motorRotSpeedClutchEngaged = v11
      v11 = math.max(self.motorRotSpeed, self.motorRotSpeedClutchEngaged)
      self.motorRotSpeed = v11
    end
    if 0 < g_physicsDtNonInterpolated then
      v5 = getIsSleeping(maxRpm.rootNode)
      if not v5 then
        v5, v6, clutchPedal = getMotorTorque(maxRpm.spec_motorized.motorizedNode)
        self.lastMotorAvailableTorque = v5
        self.lastMotorAppliedTorque = v6
        self.lastMotorExternalTorque = clutchPedal
      end
    end
    self.motorAvailableTorque = self.lastMotorAvailableTorque
    self.motorAppliedTorque = self.lastMotorAppliedTorque
    self.motorExternalTorque = self.lastMotorExternalTorque
    self.motorAppliedTorque = self.motorAppliedTorque - self.motorExternalTorque
    v5 = math.min(self.motorExternalTorque * self.externalTorqueVirtualMultiplicator, self.motorAvailableTorque - self.motorAppliedTorque)
    self.motorExternalTorque = v5
    self.motorAppliedTorque = self.motorAppliedTorque + self.motorExternalTorque
    if 0 < g_physicsDtNonInterpolated then
    end
    self.motorRotAcceleration = v5
    self.motorRotAccelerationSmoothed = 0.8 * self.motorRotAccelerationSmoothed + 0.2 * v5
    self.differentialRotAcceleration = v6
    self.differentialRotAccelerationSmoothed = 0.95 * self.differentialRotAccelerationSmoothed + 0.05 * v6
    self.requiredMotorPower = math.huge
  else
    local v3, v4 = self:getMinMaxGearRatio()
    v5 = WheelsUtil.computeDifferentialRotSpeedNonMotor(self.vehicle)
    self.differentialRotSpeed = v5
    v6 = math.abs(self.differentialRotSpeed * v4)
    v5 = math.max(v6, 0)
    self.motorRotSpeed = v5
    self.gearRatio = v4
  end
  if self.lastPtoRpm == nil then
    self.lastPtoRpm = self.minRpm
  end
  v4 = PowerConsumer.getMaxPtoRpm(self.vehicle)
  if self.lastPtoRpm < v4 * self.ptoMotorRpmRatio then
    v4 = math.min(v4 * self.ptoMotorRpmRatio, self.lastPtoRpm + self.maxRpm * dt / 2000)
    self.lastPtoRpm = v4
  elseif v4 * self.ptoMotorRpmRatio < self.lastPtoRpm then
    v4 = math.max(self.minRpm, self.lastPtoRpm - self.maxRpm * dt / 1000)
    self.lastPtoRpm = v4
  end
  if self.vehicle.isServer then
    v6 = math.min(self.lastPtoRpm, self.maxRpm)
    v4 = math.max(self.motorRotSpeed * 30 / math.pi, v6, self.minRpm)
    self:setLastRpm(v4)
    self.equalizedMotorRpm = v4
    v6 = self:getMotorAppliedTorque()
    local v8 = self:getMotorAvailableTorque()
    clutchPedal = math.max(v8, 0.0001)
    self.rawLoadPercentageBuffer = self.rawLoadPercentageBuffer + v6 / clutchPedal
    self.rawLoadPercentageBufferIndex = self.rawLoadPercentageBufferIndex + 1
    if 2 <= self.rawLoadPercentageBufferIndex then
      self.rawLoadPercentage = self.rawLoadPercentageBuffer / 2
      self.rawLoadPercentageBuffer = 0
      self.rawLoadPercentageBufferIndex = 0
    end
    if self.rawLoadPercentage < 0.01 then
      -- if v0.lastAcceleratorPedal >= 0.2 then goto L483 end
      if not self.backwardGears then
        -- if not v0.forwardGears then goto L479 end
      end
      if self.gear == 0 then
        -- cmp-jump LOP_JUMPXEQKN R6 aux=0x80000010 -> L483
      end
      self.rawLoadPercentage = -1
    else
      self.rawLoadPercentage = (self.rawLoadPercentage - 0.05) / 0.95
    end
    v6 = math.min(self.vehicle.lastSpeedAcceleration * 1000 * 1000 * self.vehicle.movingDirection / self.accelerationLimit, 1)
    if v6 < 0.95 then
      -- if 0.2 >= v0.lastAcceleratorPedal then goto L525 end
      self.accelerationLimitLoadScale = 1
      self.accelerationLimitLoadScaleTimer = self.accelerationLimitLoadScaleDelay
    elseif 0 < self.accelerationLimitLoadScaleTimer then
      self.accelerationLimitLoadScaleTimer = self.accelerationLimitLoadScaleTimer - dt
      clutchPedal = math.max(self.accelerationLimitLoadScaleTimer / self.accelerationLimitLoadScaleDelay, 0)
      v9 = math.sin((1 - clutchPedal) * 3.14)
      self.accelerationLimitLoadScale = v9 * 0.85
    end
    if 0 < v6 then
      clutchPedal = math.max(self.rawLoadPercentage, v6 * self.accelerationLimitLoadScale)
      self.rawLoadPercentage = clutchPedal
    end
    local v13 = math.abs(self.vehicle.lastSpeedAcceleration)
    v9 = math.min(v13 * 1000 * 1000 / self.accelerationLimit, 1)
    self.constantAccelerationCharge = 1 - v9
    if 0 < self.rawLoadPercentage then
      self.rawLoadPercentage = self.rawLoadPercentage * 0.8 + self.rawLoadPercentage * 0.19999999999999996 * self.constantAccelerationCharge
    end
    if not self.backwardGears then
      -- if not v0.forwardGears then goto L672 end
    end
    clutchPedal = self:getUseAutomaticGearShifting()
    if clutchPedal then
      if 0.99 < self.constantRpmCharge then
        if self.maxRpm - v4 < 50 then
          clutchPedal = math.min(self.gearChangeTimeAutoReductionTimer + dt, self.gearChangeTimeAutoReductionTime)
          self.gearChangeTimeAutoReductionTimer = clutchPedal
          self.gearChangeTime = self.gearChangeTimeOrig * (1 - self.gearChangeTimeAutoReductionTimer / self.gearChangeTimeAutoReductionTime)
          -- goto L672  (LOP_JUMP +15)
        end
        self.gearChangeTimeAutoReductionTimer = 0
        self.gearChangeTime = self.gearChangeTimeOrig
      else
        self.gearChangeTimeAutoReductionTimer = 0
        self.gearChangeTime = self.gearChangeTimeOrig
      end
    end
  end
  self:updateSmoothLoadPercentage(dt, self.rawLoadPercentage)
  v4 = math.max(self.idleGearChangeTimer - dt, 0)
  self.idleGearChangeTimer = v4
  if not self.forwardGears then
    -- if not v0.backwardGears then goto L709 end
  end
  self:updateStartGearValues(dt)
  v4 = self:getClutchPedal()
  self.lastSmoothedClutchPedal = self.lastSmoothedClutchPedal * 0.9 + v4 * 0.1
  self.lastModulationTimer = self.lastModulationTimer + dt * 0.0009
  clutchPedal = math.sin(self.lastModulationTimer)
  v8 = math.sin((self.lastModulationTimer + 2) * 0.3)
  clutchPedal = math.cos(self.lastModulationTimer * 5)
  self.lastModulationPercentage = clutchPedal * v8 * 0.8 + clutchPedal * 0.2
end
function VehicleMotor:updateSmoothLoadPercentage(dt, rawLoadPercentage)
  local v5 = self:getMaximumForwardSpeed()
  if self.vehicle.movingDirection < 0 then
    v5 = self:getMaximumBackwardSpeed()
  end
  local v8 = v8:getLastSpeed()
  local v6 = math.min(v8 / v4, 1)
  v5 = math.max(v6, 0)
  if rawLoadPercentage < self.smoothedLoadPercentage then
    if self.gearType == VehicleMotor.TRANSMISSION_TYPE.POWERSHIFT then
      -- if 200 >= g_time - v0.lastGearChangeTime then goto L75 end
    end
    local clutchPedal = self:getClutchPedal()
    if 0.75 < clutchPedal then
    end
    if rawLoadPercentage < 0 then
      -- goto L76  (LOP_JUMP +1)
    end
  end
  self.smoothedLoadPercentage = (1 - v6) * self.smoothedLoadPercentage + v6 * rawLoadPercentage
  v8 = math.max(self.smoothedLoadPercentage - v3, 0)
  self.loadPercentageChangeCharge = self.loadPercentageChangeCharge + v8
  local v10 = math.max(self.loadPercentageChangeCharge - dt * 0.0005, 0)
  local v9 = math.min(v10, 1)
  self.loadPercentageChangeCharge = v9
end
function VehicleMotor:updateStartGearValues(dt)
  local maxRpm = maxRpm:getTotalMass()
  local v4 = v4:getTotalMass(true)
  local v5 = math.abs(maxRpm - self.startGearValues.lastMass)
  if 0.00001 * dt < v5 then
    self.startGearValues.lastMass = maxRpm
    self.idleGearChangeTimer = 500
  end
  local v6 = v6:getChildVehicles()
  for v10, v11 in ipairs(v6) do
    if not (v11 ~= self.vehicle) then
      continue
    end
    if v11.spec_powerConsumer ~= nil and v11.spec_powerConsumer.maxForce ~= nil then
      local v12 = v11:getPowerMultiplier()
      if v12 ~= 0 then
      end
    end
    if v11.spec_leveler ~= nil then
      v12 = math.abs(v11.spec_leveler.lastForce)
    end
    if not (v11.spec_wheels ~= nil) then
      continue
    end
    if not (0 < #v11.spec_wheels.wheels) then
      continue
    end
    v12 = v11:getTotalMass(true)
  end
  for v16, v17 in ipairs(v6) do
    if not (v17 ~= self.vehicle) then
      continue
    end
    if not (v17.spec_wheels ~= nil) then
      continue
    end
    if not (0 < #v17.spec_wheels.wheels) then
      continue
    end
    local v18 = v17:getTotalMass(true)
    local v20, v21, v22 = v17:getOverallCenterOfMass()
    local v23, v24, v25 = v17:getVehicleWorldDirection()
  end
  v13, v14, v15 = v13:getVehicleWorldDirection()
  if VehicleDebug.state == VehicleDebug.DEBUG_TRANSMISSION then
    v16, v17, v18 = getWorldTranslation(self.vehicle.components[1].node)
    DebugUtil.drawDebugGizmoAtWorldPos(clutchPedal, v8, v9, v10, v11, v12, 0, 1, 0, "TOOLS DIR", false)
    DebugUtil.drawDebugGizmoAtWorldPos(v16, v17, v18, v13, v14, v15, 0, 1, 0, "VEHICLE DIR", false)
  end
  if v10 == 0 and v11 == 0 then
    -- cmp-jump LOP_JUMPXEQKN R12 aux=0xf -> L231
  end
  local v19 = math.abs(v10 - v13)
  v20 = math.abs(v12 - v15)
  v18 = math.max(...)
  v18 = math.max(v11 - v14, 0)
  v18 = math.min((maxRpm - v4) / 5, 1)
  self.startGearValues.massDirectionDifferenceXZ = v18
  self.startGearValues.massDirectionDifferenceY = v18
  self.startGearValues.massDirectionFactor = (1 + v18 * v18) * (1 + v18 / 0.15 * v18)
  v20 = PowerConsumer.getTotalConsumedPtoTorque(self.vehicle, nil, nil, true)
  v21 = self:getPtoMotorRpmRatio()
  self.startGearValues.availablePower = self.peakMotorPower - self.peakMotorPowerRotSpeed * v20 / v21
  self.startGearValues.maxForce = v5
  self.startGearValues.mass = (((maxRpm + v5 * (1 + self.peakMotorPowerRotSpeed * v20 / v21 / self.peakMotorPower * 0.75)) / v4 - 1) * 0.5 + 1) * v4
  v24 = v24:getVehicleWorldXRot()
  self.startGearValues.slope = v24
  self.startGearValues.massFactor = self.startGearValues.mass * self.startGearValues.massDirectionFactor / ((self.startGearValues.availablePower / 100 - 1) * 50 + 100) * 0.4
end
function VehicleMotor:getBestStartGear(gears)
  if self.directionChangeUseGroup then
  else
  end
  if self.gearGroups ~= nil then
    local v9 = self:getUseAutomaticGroupShifting()
    -- if not v9 then goto L100 end
    -- TODO: structure LOP_FORNPREP (pc 27, target 100)
    local v13 = MathUtil.sign(self.gearGroups[1].ratio * maxRpm)
    if v13 ~= self.currentDirection then
      -- if v0.directionChangeUseGroup then goto L71 end
    end
    for v15 = 1, #gears do
      local v16 = self:getStartInGearFactor(gears[v15].ratio * v12)
      if v16 < self.startGearThreshold and v6 < v16 then
      end
      if v16 < v3 then
      end
      -- TODO: structure LOP_FORNLOOP (pc 70, target 49)
    end
  else
    v9 = self:getGearRatioMultiplier()
    -- TODO: structure LOP_FORNPREP (pc 79, target 100)
    v13 = self:getStartInGearFactor(gears[1].ratio * v9)
    if v13 < self.startGearThreshold and 0 < v13 then
    end
    if v13 < v3 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 99, target 80)
  end
  if v6 == 0 then
    return v4, v5
  end
  return clutchPedal, v8
end
function VehicleMotor:getRequiredRpmAtSpeedLimit(ratio)
  local v3 = v3:getSpeedLimit(true)
  local v4 = math.max(self.speedLimitAcc, self.vehicle.lastSpeedReal * 3600)
  local maxRpm = math.min(...)
  v3 = v3:getCruiseControlState()
  if v3 == Drivable.CRUISECONTROL_STATE_ACTIVE then
    local v5 = v5:getCruiseControlSpeed()
    v3 = math.min(...)
  end
  if 0 < ratio then
    v3 = math.min(maxRpm, self.maxForwardSpeed * 3.6)
    -- if v3 then goto L64 end
  end
  v3 = math.min(maxRpm, self.maxBackwardSpeed * 3.6)
  v5 = math.abs(ratio)
  return v3 / 3.6 * 30 / math.pi * v5
end
function VehicleMotor:getStartInGearFactor(ratio)
  local maxRpm = self:getRequiredRpmAtSpeedLimit(ratio)
  if maxRpm < self.minRpm + (self.maxRpm - self.minRpm) * 0.25 then
    return math.huge
  end
  if ratio < 0 then
  end
  local clutchPedal = math.max(maxRpm, 0)
  local v8 = math.abs(ratio)
  return self.startGearValues.massFactor * (1 + clutchPedal / (((self.startGearValues.availablePower / 100 - 1) / 2) ^ 2 * 2 + 1) * 0.06981) / v8 / 300
end
function VehicleMotor:getBestGearRatio(wheelSpeedRpm, minRatio, maxRatio, accSafeMotorRpm, requiredMotorPower, requiredMotorRpm)
  if requiredMotorRpm ~= 0 then
    local v8 = math.max(requiredMotorRpm - accSafeMotorRpm, requiredMotorRpm * 0.8)
    local v9 = math.max(wheelSpeedRpm, 0.001)
    v8 = MathUtil.clamp(v8 / v9, minRatio, maxRatio)
    return v8
  end
  local clutchPedal = math.max(wheelSpeedRpm, 0.0001)
  -- TODO: structure LOP_FORNPREP (pc 38, target 68)
  if self.maxRpm - accSafeMotorRpm >= clutchPedal * minRatio then
    local v18 = math.max(clutchPedal * minRatio, self.minRpm)
    local v16 = self:getTorqueCurveValue(...)
    if 0 < v16 * clutchPedal * minRatio * math.pi / 30 then
    end
    if requiredMotorPower > v13 then
      -- TODO: structure LOP_FORNLOOP (pc 67, target 39)
    end
  end
  return v8
end
function VehicleMotor:getBestGear(acceleration, wheelSpeedRpm, accSafeMotorRpm, requiredMotorPower, requiredMotorRpm)
  local v6 = math.abs(acceleration)
  if v6 < 0.001 and wheelSpeedRpm < 0 then
  end
  if 0 < acceleration then
    if self.minForwardGearRatio ~= nil then
      v6 = math.max(wheelSpeedRpm, 0)
      v6 = self:getBestGearRatio(v6, self.minForwardGearRatio, self.maxForwardGearRatio, accSafeMotorRpm, requiredMotorPower, requiredMotorRpm)
      return 1, v6
    end
    return 1, self.forwardGears[1].ratio
  end
  if self.minBackwardGearRatio ~= nil then
    v6 = math.max(-wheelSpeedRpm, 0)
    v6 = self:getBestGearRatio(v6, self.minBackwardGearRatio, self.maxBackwardGearRatio, accSafeMotorRpm, requiredMotorPower, requiredMotorRpm)
    return -1, -v6
  end
  if self.backwardGears ~= nil then
    return -1, -self.backwardGears[1].ratio
  end
  return 1, self.forwardGears[1].ratio
end
function VehicleMotor:findGearChangeTargetGearPrediction(curGear, gears, gearSign, gearChangeTimer, acceleratorPedal, dt)
  local v8 = self:getGearRatioMultiplier()
  local v11 = math.abs(gears[curGear].ratio * v8)
  local v12 = math.max(self.differentialRotSpeed * gearSign, 0.0001)
  local v16 = math.abs(acceleratorPedal)
  if v16 < 0.0001 then
    v16 = math.min(self.differentialRotAccelerationSmoothed * gearSign * 0.8, 0)
    local v17 = math.max(v12 + v16 * self.gearChangeTime * 0.001, 0)
  else
    local v20 = v20:getTotalMass()
    local v25 = math.max(self.differentialRotAccelerationSmoothed * gearSign, 0)
    local v22 = math.max((self.motorAppliedTorque - self.motorExternalTorque - (self.motorRotSpeed - (self.motorRotSpeed - self.motorRotAcceleration * g_physicsDtLastValidNonInterpolated * 0.001) / (1 + self.dampingRateFullThrottle / self.rotInertia * g_physicsDtLastValidNonInterpolated * 0.001)) / g_physicsDtLastValidNonInterpolated * 0.001 * self.rotInertia) * v11 / v20 * 0.9 - v25, 0)
    local v23 = math.max(v12 - v22 * self.gearChangeTime * 0.001, 0)
  end
  -- TODO: structure LOP_FORNPREP (pc 140, target 189)
  if 1 == curGear then
  else
    local v24 = math.abs(gears[1].ratio * v8)
  end
  v22 = self:getStartInGearFactor(gears[v20].ratio * v8)
  if v22 < self.startGearThreshold then
  end
  if v21 <= v10 then
    -- if v9 * v23 <= v21 then goto L179 end
  end
  if v20 == curGear then
    v25 = self:getTorqueCurveValue(v21)
    if v16 <= v25 * v21 then
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 188, target 141)
  if v17 ~= 0 then
    -- TODO: structure LOP_FORNPREP (pc 195, target 551)
    if #gears == curGear then
    else
      local v26 = math.abs(gears[#gears].ratio * v8)
    end
    v24 = self:getStartInGearFactor(gears[v21].ratio * v8)
    if v24 < self.startGearThreshold then
    end
    if v23 <= v10 then
      -- if v9 * v25 <= v23 then goto L237 end
    end
    if v21 == curGear then
      local v28 = self:getTorqueCurveValue(v23)
      if v16 * v26 > v28 * v23 then
        -- if v21 ~= v1 then goto L447 end
      end
      local v30 = math.abs(gears[v21].ratio * v8)
      local v33 = math.max(v10 - v9, 0.001)
      v30 = MathUtil.clamp((v10 - v13 * v30) / v33, 0, 2)
      if 1 < v30 then
      end
      if v21 == curGear then
      else
        local v32 = math.min(-gearChangeTimer / 2000, 0.9)
      end
      if v21 < curGear then
        v33 = MathUtil.clamp((v23 - v14) / 250, -1, 0)
      end
      if v21 < self.bestGearSelected then
        v33 = self:getStartInGearFactor(v11)
        if v33 < self.startGearThreshold then
        end
      end
      local v38 = math.sin(v30 * math.pi)
      local v36 = math.min(v38 * 5, 2)
      if v21 == curGear and 0 < v32 - (1 - v36) * 0.7 then
      end
      v33 = math.abs(acceleratorPedal)
      if v33 < 0.0001 then
      else
      end
      v33 = math.abs(acceleratorPedal)
      if v33 < 0.0001 and 0.25 < (v14 - v25) / (v10 - v25) then
        if v21 < curGear then
        elseif v21 == curGear then
        end
      end
      if curGear < v21 and v24 < self.startGearThreshold then
      end
      if v18 <= v28 + v30 + v31 + v32 then
      end
      if VehicleDebug.state == VehicleDebug.DEBUG_TRANSMISSION then
        gears[v21].lastTradeoff = v33
        if v21 == curGear then
          -- if v15 then goto L410 end
        end
        v34.lastDiffSpeedAfterChange = nil
        gears[v21].lastPowerFactor = v28
        gears[v21].lastRpmFactor = v30
        gears[v21].lastGearChangeFactor = v31
        gears[v21].lastRpmPreferenceFactor = v32
        gears[v21].lastNextPower = v27
        gears[v21].nextPowerValid = true
        gears[v21].lastNextRpm = v23
        gears[v21].nextRpmValid = true
        gears[v21].lastMaxPower = v16
        gears[v21].lastHasPower = true
      end
      -- goto L456  (LOP_JUMP +9)
      if VehicleDebug.state == VehicleDebug.DEBUG_TRANSMISSION then
        gears[v21].lastNextPower = v27
      end
    end
    if not v22 and VehicleDebug.state == VehicleDebug.DEBUG_TRANSMISSION then
      gears[v21].lastTradeoff = 0
      gears[v21].lastPowerFactor = 0
      gears[v21].lastRpmFactor = 0
      gears[v21].lastGearChangeFactor = 0
      gears[v21].lastRpmPreferenceFactor = 0
      if v21 == curGear then
        -- if v15 then goto L489 end
      end
      v27.lastDiffSpeedAfterChange = nil
      gears[v21].lastNextRpm = v23
      if v23 <= v10 and v9 * v25 > v23 then
      end
      v27.nextRpmValid = v28
      gears[v21].nextPowerValid = false
      gears[v21].lastMaxPower = v16
      gears[v21].lastHasPower = false
    end
    -- TODO: structure LOP_FORNLOOP (pc 516, target 196)
    return clutchPedal
  end
  -- TODO: structure LOP_FORNPREP (pc 524, target 550)
  v26 = math.abs(gears[1].ratio * v8)
  v24 = math.max(v15 * v26 * 30 / math.pi - v10, v9 - v15 * v26 * 30 / math.pi)
  if v24 < math.huge then
  end
  -- TODO: structure LOP_FORNLOOP (pc 549, target 525)
  return v18
end
function VehicleMotor:applyTargetGear()
  local gearRatioMultiplier = self:getGearRatioMultiplier()
  self.gear = self.targetGear
  if self.gearShiftMode ~= VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH then
    if self.currentGears[self.gear] ~= nil then
      self.minGearRatio = self.currentGears[self.gear].ratio * gearRatioMultiplier
      self.maxGearRatio = self.minGearRatio
    else
      self.minGearRatio = 0
      self.maxGearRatio = 0
    end
    self.startDebug = 0
  end
  self.gearChangeTime = self.gearChangeTimeOrig
  if self.directionChangeUseGear then
    -- if v0.currentDirection then goto L57 end
  end
  SpecializationUtil.raiseEvent(self.vehicle, "onGearChanged", self.gear * 1, self.targetGear * 1, 0)
end
function VehicleMotor:updateGear(acceleratorPedal, brakePedal, dt)
  self.lastAcceleratorPedal = acceleratorPedal
  if 0 <= self.gearChangeTimer then
    self.gearChangeTimer = self.gearChangeTimer - dt
    if self.gearChangeTimer < 0 and self.targetGear ~= 0 then
      self.allowGearChangeTimer = 3000
      local acceleratorPedal = MathUtil.sign(self.targetGear - self.previousGear)
      self.allowGearChangeDirection = acceleratorPedal
      self:applyTargetGear()
    end
  else
    if 0 >= self.groupChangeTimer then
      -- if 0 >= v0.directionChangeTimer then goto L74 end
    end
    self.groupChangeTimer = self.groupChangeTimer - dt
    self.directionChangeTimer = self.directionChangeTimer - dt
    if self.groupChangeTimer < 0 and self.directionChangeTimer < 0 then
      self:applyTargetGear()
      -- goto L646  (LOP_JUMP +572)
      if 0 < acceleratorPedal then
        if self.minForwardGearRatio ~= nil then
          self.minGearRatio = self.minForwardGearRatio
          self.maxGearRatio = self.maxForwardGearRatio
          -- goto L134  (LOP_JUMP +43)
        end
      elseif acceleratorPedal < 0 then
        if self.minBackwardGearRatio ~= nil then
          self.minGearRatio = -self.minBackwardGearRatio
          self.maxGearRatio = -self.maxBackwardGearRatio
          -- goto L134  (LOP_JUMP +23)
        end
      else
        if 0 < self.maxGearRatio then
          -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L134
        elseif self.maxGearRatio < 0 and self.minBackwardGearRatio == nil then
        end
      end
      if not self.backwardGears then
        -- if not v0.forwardGears then goto L562 end
      end
      local clutchPedal = self:getUseAutomaticGearShifting()
      if clutchPedal then
        self.autoGearChangeTimer = self.autoGearChangeTimer - dt
        clutchPedal = clutchPedal:getIsAutomaticShiftingAllowed()
        if not clutchPedal then
          -- cmp-jump LOP_JUMPXEQKN R1 aux=0x3 -> L562
        end
        clutchPedal = math.abs(self.vehicle.lastSpeed)
        if clutchPedal < 0.0003 then
          if acceleratorPedal < 0 then
            if self.currentDirection ~= 1 then
              -- cmp-jump LOP_JUMPXEQKN R10 aux=0x80000003 -> L191
            end
            self:changeDirection(-1, true)
          elseif 0 < acceleratorPedal then
            if self.currentDirection ~= -1 then
              -- cmp-jump LOP_JUMPXEQKN R10 aux=0x80000003 -> L209
            end
            self:changeDirection(1, true)
          else
            if self.lastAcceleratorPedal == 0 then
              -- if v0.idleGearChangeTimer > 0 then goto L223 end
              self.doSecondBestGearSelection = 3
            elseif 0 < self.doSecondBestGearSelection and self.lastAcceleratorPedal ~= 0 then
              self.doSecondBestGearSelection = self.doSecondBestGearSelection - 1
              if self.doSecondBestGearSelection == 0 then
              end
            end
          end
          if clutchPedal and self.targetGear ~= self.gear then
          end
          -- if not v8 then goto L530 end
          local v10, v11 = self:getBestStartGear(self.currentGears)
          if v10 == self.gear then
            -- if v10 == v0.bestGearSelected then goto L277 end
          end
          if 1 >= v10 then
            -- if not v9 then goto L277 end
          end
          self.bestGearSelected = v10
          self.allowGearChangeTimer = 0
          local v12 = self:getUseAutomaticGroupShifting()
          -- if not v12 then goto L530 end
          -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L530
          -- if v11 == v0.activeGearGroupIndex then goto L530 end
          self:setGearGroup(v11)
        elseif self.gear ~= 0 then
          if self.autoGearChangeTimer <= 0 then
            clutchPedal = MathUtil.sign(acceleratorPedal)
            local v8 = MathUtil.sign(self.currentDirection)
            if clutchPedal ~= v8 then
            end
            clutchPedal = self:findGearChangeTargetGearPrediction(self.gear, self.currentGears, self.currentDirection, self.autoGearChangeTimer, acceleratorPedal, dt)
            clutchPedal = self:getUseAutomaticGroupShifting()
            if clutchPedal and self.gearGroups ~= nil then
              if self.activeGearGroupIndex < #self.gearGroups then
                v10 = self:getLastRealMotorRpm()
                local v9 = math.min(v10, self.maxRpm)
                clutchPedal = math.abs(v9 - self.maxRpm)
                if clutchPedal < 50 then
                  if self.gear == #self.currentGears then
                    v8 = MathUtil.sign(self.gearGroups[self.activeGearGroupIndex].ratio)
                    v9 = MathUtil.sign(self.gearGroups[self.activeGearGroupIndex + 1].ratio)
                    -- if v8 ~= v9 then goto L484 end
                    v8 = self:getRequiredRpmAtSpeedLimit(self.gearGroups[self.activeGearGroupIndex + 1].ratio * self.currentGears[self.gear].ratio)
                    -- if v0.minRpm + (v0.maxRpm - v0.minRpm) * 0.25 >= v8 then goto L484 end
                    self:shiftGroup(true)
                    -- goto L484  (LOP_JUMP +63)
                  end
                  -- if v0.groupType ~= VehicleMotor.TRANSMISSION_TYPE.POWERSHIFT then goto L484 end
                  clutchPedal = MathUtil.sign(self.gearGroups[self.activeGearGroupIndex].ratio)
                  v8 = MathUtil.sign(self.gearGroups[self.activeGearGroupIndex + 1].ratio)
                  if clutchPedal == v8 then
                    self.gearGroupUpShiftTimer = self.gearGroupUpShiftTimer + dt
                    -- if v0.gearGroupUpShiftTime >= v0.gearGroupUpShiftTimer then goto L484 end
                    self.gearGroupUpShiftTimer = 0
                    self:shiftGroup(true)
                    -- goto L484  (LOP_JUMP +11)
                  end
                  self.gearGroupUpShiftTimer = 0
                  -- goto L484  (LOP_JUMP +7)
                end
                self.gearGroupUpShiftTimer = 0
              else
                self.gearGroupUpShiftTimer = 0
              end
              if self.gear == 1 and self.lastRealMotorRpm < self.minRpm + (self.maxRpm - self.minRpm) * 0.25 then
                clutchPedal, v8 = self:getBestStartGear(self.currentGears)
                if v8 < self.activeGearGroupIndex then
                  self:setGearGroup(v8)
                end
              end
            end
          end
          v8 = math.max(dt, 1)
          clutchPedal = math.min(v8, #self.currentGears)
        end
        self.allowGearChangeTimer = self.allowGearChangeTimer - dt
        if 0 < self.allowGearChangeTimer and 0 < acceleratorPedal * self.currentDirection and dt < self.gear then
          v8 = MathUtil.sign(dt - self.gear)
          if self.allowGearChangeDirection ~= v8 then
          end
        end
      end
      if dt == self.gear then
      else
        if dt ~= self.bestGearSelected then
          self.bestGearSelected = -1
        end
        self.targetGear = dt
        self.previousGear = self.gear
        self.gear = 0
        self.minGearRatio = 0
        self.maxGearRatio = 0
        self.autoGearChangeTimer = self.autoGearChangeTime
        self.gearChangeTimer = self.gearChangeTime
        self.lastGearChangeTime = g_time
        if self.directionChangeUseGear then
          -- if v0.currentDirection then goto L609 end
        end
        SpecializationUtil.raiseEvent(self.vehicle, "onGearChanged", self.gear * 1, self.targetGear * 1, self.gearChangeTimer)
        if self.gearChangeTimer == 0 then
          self.gearChangeTimer = -1
          self.allowGearChangeTimer = 3000
          v8 = MathUtil.sign(self.targetGear - self.previousGear)
          self.allowGearChangeDirection = v8
          self:applyTargetGear()
        end
      end
    end
  end
  if self.gearShiftMode == VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH then
    if not self.backwardGears then
      -- if not v0.forwardGears then goto L776 end
    end
    if self.currentGears[self.gear] ~= nil then
      v8 = self:getGearRatioMultiplier()
      clutchPedal = math.min(self.motorRotSpeed / self.differentialRotSpeed, 5000)
    end
    if dt ~= nil then
      v9 = math.abs(dt)
      v10 = math.abs(acceleratorPedal)
      local v13 = math.min(self.manualClutchValue, 0.9)
      v8 = MathUtil.lerp(v9, v10, v13 / 0.9 * 0.5)
      v9 = MathUtil.sign(dt)
    end
    self.minGearRatio = clutchPedal
    self.maxGearRatio = clutchPedal
    if self.manualClutchValue == 0 then
      -- cmp-jump LOP_JUMPXEQKN R8 aux=0x3 -> L773
      v12 = self:getClutchRotSpeed()
      v10 = self:getNonClampedMotorRpm()
      if (v12 * 30 / math.pi + 50) / v10 < 0.2 then
        self.stallTimer = self.stallTimer + dt
        -- if 500 >= v0.stallTimer then goto L776 end
        v9:stopMotor()
        self.stallTimer = 0
        -- goto L776  (LOP_JUMP +7)
      end
      self.stallTimer = 0
    else
      self.stallTimer = 0
    end
  end
  acceleratorPedal = self:getUseAutomaticGearShifting()
  if acceleratorPedal then
    acceleratorPedal = math.abs(self.vehicle.lastSpeed)
    if 0.0003 < acceleratorPedal then
      if not self.backwardGears then
        -- if not v0.forwardGears then goto L815 end
      end
      if 0 < self.currentDirection then
        -- if v4 < 0 then goto L813 end
      end
      if self.currentDirection < 0 and 0 < gearChangeTimer then
      end
    end
  end
  return gearChangeTimer, brakePedal
end
function VehicleMotor:shiftGear(up)
  if not self.gearChangedIsLocked then
    local brakePedal = self:getIsGearChangeAllowed()
    if brakePedal then
      if up then
      else
      end
      if 0 >= self.currentDirection then
        -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L42
      end
      if #self.forwardGears < brakePedal then
        -- goto L59  (LOP_JUMP +17)
        if self.currentDirection >= 0 then
          -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L59
        end
        if #self.backwardGears < brakePedal then
        end
      end
      -- if v2 == v0.targetGear then goto L101 end
      if 0 < self.currentDirection then
        -- if v2 >= 0 then goto L85 end
        self:changeDirection(-1)
      elseif brakePedal < 0 then
        self:changeDirection(1)
      end
      self:setGear(brakePedal)
      self.lastManualShifterActive = false
      return
    end
    SpecializationUtil.raiseEvent(self.vehicle, "onClutchCreaking", true, false)
  end
end
function VehicleMotor:selectGear(gearIndex, activation)
  if activation then
    -- if v0.gear == v1 then goto L41 end
    local dt = self:getIsGearChangeAllowed()
    if dt then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L41
      self:setGear(gearIndex, true)
      self.lastManualShifterActive = true
      return
    end
    SpecializationUtil.raiseEvent(self.vehicle, "onClutchCreaking", false, false, gearIndex)
    return
  end
  self:setGear(0, false)
  self.lastManualShifterActive = true
end
function VehicleMotor:setGear(gearIndex, isLocked)
  if gearIndex ~= self.targetGear then
    if self.gearChangeTime == 0 and gearIndex < self.targetGear then
      self.loadPercentageChangeCharge = 1
    end
    if self.gearShiftMode ~= VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH then
      self.targetGear = gearIndex
      self.previousGear = self.gear
      self.gear = 0
      self.minGearRatio = 0
      self.maxGearRatio = 0
      self.autoGearChangeTimer = self.autoGearChangeTime
      self.gearChangeTimer = self.gearChangeTime
    else
      self.targetGear = gearIndex
      self.previousGear = self.gear
      self.gear = gearIndex
    end
    if self.directionChangeUseGear then
      -- if v0.currentDirection then goto L62 end
    end
    SpecializationUtil.raiseEvent(self.vehicle, "onGearChanged", self.gear * 1, self.targetGear * 1, self.gearChangeTime)
  end
end
function VehicleMotor:shiftGroup(up)
  if not self.gearGroupChangedIsLocked then
    local brakePedal = self:getIsGearGroupChangeAllowed()
    if brakePedal then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L39
      if up then
      else
      end
      local acceleratorPedal = MathUtil.clamp(brakePedal, 1, self.numGearGroups)
      self:setGearGroup(...)
      return
    end
    SpecializationUtil.raiseEvent(self.vehicle, "onClutchCreaking", true, true)
  end
end
function VehicleMotor:selectGroup(groupIndex, activation)
  if activation then
    local dt = self:getIsGearGroupChangeAllowed()
    if dt then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L40
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L40
      self:setGearGroup(groupIndex, true)
      return
    end
    -- if v0.activeGearGroupIndex == v1 then goto L40 end
    SpecializationUtil.raiseEvent(self.vehicle, "onClutchCreaking", false, true, nil, groupIndex)
    return
  end
  self:setGearGroup(0, false)
end
function VehicleMotor:setGearGroup(groupIndex, isLocked)
  self.activeGearGroupIndex = groupIndex
  self.gearGroupChangedIsLocked = isLocked
  if self.activeGearGroupIndex ~= self.activeGearGroupIndex then
    if self.groupType == VehicleMotor.TRANSMISSION_TYPE.POWERSHIFT and self.activeGearGroupIndex < self.activeGearGroupIndex then
      self.loadPercentageChangeCharge = 1
    end
    if self.directionChangeUseGroup then
      if self.activeGearGroupIndex == self.directionChangeGroupIndex then
      else
      end
      self.currentDirection = gearChangeTimer
    end
    if self.gearShiftMode ~= VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH then
      if self.groupType == VehicleMotor.TRANSMISSION_TYPE.DEFAULT then
        self.groupChangeTimer = self.groupChangeTime
        self.gear = 0
        self.minGearRatio = 0
        self.maxGearRatio = 0
      elseif self.groupType == VehicleMotor.TRANSMISSION_TYPE.POWERSHIFT then
        self:applyTargetGear()
      end
    end
    if self.groupType == VehicleMotor.TRANSMISSION_TYPE.DEFAULT then
      -- if v0.groupChangeTime then goto L107 end
    end
    gearChangeTimer(acceleratorPedal, dt, clutchPedal, 0)
  end
end
function VehicleMotor:changeDirection(direction, force)
  if direction == nil then
  else
  end
  if self.backwardGears == nil and self.forwardGears == nil then
    self.currentDirection = dt
    SpecializationUtil.raiseEvent(self.vehicle, "onGearDirectionChanged", self.currentDirection)
    return
  end
  if self.directionChangeUseGroup then
    -- if not v0.gearGroupChangedIsLocked then goto L48 end
  end
  if self.directionChangeUseGear then
    -- if not v0.gearChangedIsLocked then goto L48 end
  end
  if not self.directionChangeUseGear then
  end
  if gearChangeTimer then
    if dt == self.currentDirection then
      -- if not v2 then goto L222 end
    end
    self.currentDirection = dt
    if 0 < self.directionChangeTime then
      self.directionChangeTimer = self.directionChangeTime
      self.gear = 0
      self.minGearRatio = 0
      self.maxGearRatio = 0
    end
    if self.currentDirection < 0 then
      if self.directionChangeUseGear then
        self.directionLastGear = self.targetGear
        local dt = self:getUseAutomaticGearShifting()
        if dt then
          -- if v0.lastManualShifterActive then goto L99 end
        end
        self.targetGear = self.directionChangeGearIndex
        if not self.backwardGears then
        end
        self.currentGears = dt
        -- goto L172  (LOP_JUMP +65)
      end
      -- if not v0.directionChangeUseGroup then goto L172 end
      self.directionLastGroup = self.activeGearGroupIndex
      self.activeGearGroupIndex = self.directionChangeGroupIndex
    elseif self.directionChangeUseGear then
      dt = self:getUseAutomaticGearShifting()
      if dt then
        -- if v0.lastManualShifterActive then goto L150 end
      end
      if 0 < self.directionLastGear then
        local clutchPedal = self:getUseAutomaticGearShifting()
        if not clutchPedal then
          -- if v0.directionLastGear then goto L143 end
        end
        self.targetGear = self.defaultForwardGear
      else
        self.targetGear = self.defaultForwardGear
      end
      self.currentGears = self.forwardGears
    else
      if self.directionChangeUseGroup then
        if 0 < self.directionLastGroup then
          self.activeGearGroupIndex = self.directionLastGroup
        else
          self.activeGearGroupIndex = self.defaultGearGroup
        end
      end
    end
    SpecializationUtil.raiseEvent(self.vehicle, "onGearDirectionChanged", self.currentDirection)
    if self.directionChangeUseGear then
      -- if v0.currentDirection then goto L187 end
    end
    SpecializationUtil.raiseEvent(self.vehicle, "onGearChanged", self.gear * 1, self.targetGear * 1, self.directionChangeTime)
    if self.activeGearGroupIndex ~= acceleratorPedal then
      SpecializationUtil.raiseEvent(self.vehicle, "onGearGroupChanged", self.activeGearGroupIndex, self.directionChangeTime)
    end
    if self.directionChangeTime == 0 then
      self:applyTargetGear()
    end
  end
end
function VehicleMotor:onManualClutchChanged(clutchValue)
  self.manualClutchValue = clutchValue
end
function VehicleMotor:getIsGearChangeAllowed()
  if self.gearShiftMode == VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH and self.gearType ~= VehicleMotor.TRANSMISSION_TYPE.POWERSHIFT then
    if 0.5 >= self.manualClutchValue then
    end
    return true
  end
  return true
end
function VehicleMotor:getIsGearGroupChangeAllowed()
  if self.gearGroups == nil then
    return false
  end
  if self.gearShiftMode == VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH and self.groupType ~= VehicleMotor.TRANSMISSION_TYPE.POWERSHIFT then
    if 0.5 >= self.manualClutchValue then
    end
    return true
  end
  return true
end
function VehicleMotor:setTransmissionDirection(direction)
  if 0 < direction then
    self.maxForwardSpeed = self.maxForwardSpeedOrigin
    self.maxBackwardSpeed = self.maxBackwardSpeedOrigin
    self.minForwardGearRatio = self.minForwardGearRatioOrigin
    self.maxForwardGearRatio = self.maxForwardGearRatioOrigin
    self.minBackwardGearRatio = self.minBackwardGearRatioOrigin
    self.maxBackwardGearRatio = self.maxBackwardGearRatioOrigin
    return
  end
  self.maxForwardSpeed = self.maxBackwardSpeedOrigin
  self.maxBackwardSpeed = self.maxForwardSpeedOrigin
  self.minForwardGearRatio = self.minBackwardGearRatioOrigin
  self.maxForwardGearRatio = self.maxBackwardGearRatioOrigin
  self.minBackwardGearRatio = self.minForwardGearRatioOrigin
  self.maxBackwardGearRatio = self.maxForwardGearRatioOrigin
end
function VehicleMotor:getMinMaxGearRatio()
  if self.minGearRatio == 0 then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x2 -> L62
  end
  if self.clutchSlippingTimer == self.clutchSlippingTime then
    local dt = math.max(350, self.maxGearRatio)
    local gearChangeTimer = MathUtil.sign(self.maxGearRatio)
    return direction, dt * gearChangeTimer
  end
  if 0 < self.clutchSlippingTimer then
    dt = MathUtil.lerp(direction, self.clutchSlippingGearRatio, self.clutchSlippingTimer / self.clutchSlippingTime)
    dt = MathUtil.lerp(force, self.clutchSlippingGearRatio, self.clutchSlippingTimer / self.clutchSlippingTime)
  end
  return direction, force
end
function VehicleMotor:getGearRatio()
  return self.gearRatio
end
function VehicleMotor:getGearRatioMultiplier()
  if self.directionChangeUseGroup then
  else
  end
  if self.gearGroups ~= nil then
    if self.activeGearGroupIndex == 0 then
      return 0
    end
    if self.gearGroups[self.activeGearGroupIndex] ~= nil then
      return self.gearGroups[self.activeGearGroupIndex].ratio * direction
    end
  end
  return direction
end
function VehicleMotor:getIsInNeutral()
  if not self.backwardGears then
    -- if not v0.forwardGears then goto L16 end
  end
  if self.gear == 0 and self.targetGear == 0 then
    return true
  end
  return false
end
function VehicleMotor:getCanMotorRun()
  if self.gearShiftMode == VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH then
    local direction = direction:getIsMotorStarted()
    if not direction then
      if not self.backwardGears then
        -- if not v0.forwardGears then goto L49 end
      end
      if self.manualClutchValue == 0 and self.maxGearRatio ~= 0 then
        local acceleratorPedal = self:getClutchRotSpeed()
        local dt = self:getNonClampedMotorRpm()
        if (acceleratorPedal * 30 / math.pi + 50) / dt < 0.2 then
          return false, VehicleMotor.REASON_CLUTCH_NOT_ENGAGED
        end
      end
    end
  end
  return true
end
function VehicleMotor:getCurMaxRpm()
  local gearRatio = self:getGearRatio()
  if gearRatio ~= 0 then
    local dt = math.max(self.speedLimitAcc, self.vehicle.lastSpeedReal * 3600)
    local gearChangeTimer = math.min(...)
    if 0 < gearRatio then
      gearChangeTimer = math.min(gearChangeTimer * 0.277778, self.maxForwardSpeed)
    else
      gearChangeTimer = math.min(gearChangeTimer * 0.277778, self.maxBackwardSpeed)
    end
    local v8 = math.abs(gearRatio)
    gearChangeTimer = math.min(direction, dt * 30 / math.pi * v8)
  end
  return math.min(direction, self.rpmLimit)
end
function VehicleMotor:setSpeedLimit(limit)
  local force = math.max(limit, self.minSpeed)
  self.speedLimit = force
end
function VehicleMotor:getSpeedLimit()
  return self.speedLimit
end
function VehicleMotor:setAccelerationLimit(accelerationLimit)
  self.accelerationLimit = accelerationLimit
end
function VehicleMotor:getAccelerationLimit()
  return self.accelerationLimit
end
function VehicleMotor:setRpmLimit(rpmLimit)
  self.rpmLimit = rpmLimit
end
function VehicleMotor:setMotorRotationAccelerationLimit(limit)
  self.motorRotationAccelerationLimit = limit
end
function VehicleMotor:getMotorRotationAccelerationLimit()
  return self.motorRotationAccelerationLimit
end
function VehicleMotor:setDirectionChangeMode(directionChangeMode)
  self.directionChangeMode = directionChangeMode
end
function VehicleMotor:setGearShiftMode(gearShiftMode)
  self.gearShiftMode = gearShiftMode
end
function VehicleMotor:getUseAutomaticGearShifting()
  if self.gearShiftMode == VehicleMotor.SHIFT_MODE_AUTOMATIC then
    return true
  end
  if not self.manualShiftGears then
    return true
  end
  return false
end
function VehicleMotor:getUseAutomaticGroupShifting()
  if self.gearShiftMode == VehicleMotor.SHIFT_MODE_AUTOMATIC then
    return true
  end
  if not self.manualShiftGroups then
    return true
  end
  return false
end
