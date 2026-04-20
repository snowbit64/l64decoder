-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WheelsUtil = {GROUND_ROAD = 1, GROUND_HARD_TERRAIN = 2, GROUND_SOFT_TERRAIN = 3, GROUND_FIELD = 4, NUM_GROUNDS = 4, STEERING_ANGLE_THRESHOLD = 0.00034, SUSPENSION_THRESHOLD = 0.001, tireTypes = {}}
function WheelsUtil:registerTireType(v1, v2, v3)
  local v4 = self:upper()
  v4 = WheelsUtil.getTireType(v4)
  if v4 ~= nil then
    print("Warning: Tire type '" .. v4 .. "' already registered, ignoring this definition")
    return
  end
  local v6 = function(self)
    if self[1] == nil then
      -- TODO: structure LOP_FORNPREP (pc 13, target 24)
      if self[2] ~= nil then
        {1.15}[1] = self[2]
        -- goto L24  (LOP_JUMP +4)
      end
      -- TODO: structure LOP_FORNLOOP (pc 20, target 14)
    else
    end
    -- TODO: structure LOP_FORNPREP (pc 30, target 37)
    if not self[2] then
    end
    v1[v4] = v5
    -- TODO: structure LOP_FORNLOOP (pc 36, target 31)
    return v1
  end(v1)
  v6 = function(self)
    if self[1] == nil then
      -- TODO: structure LOP_FORNPREP (pc 13, target 24)
      if self[2] ~= nil then
        {1.15}[1] = self[2]
        -- goto L24  (LOP_JUMP +4)
      end
      -- TODO: structure LOP_FORNLOOP (pc 20, target 14)
    else
    end
    -- TODO: structure LOP_FORNPREP (pc 30, target 37)
    if not self[2] then
    end
    v1[v4] = v5
    -- TODO: structure LOP_FORNLOOP (pc 36, target 31)
    return v1
  end(v2 or v1)
  if not v3 then
  end
  v6 = v6(v7)
  v5.frictionCoeffsSnow = v6
  table.insert(WheelsUtil.tireTypes, v5)
end
function WheelsUtil:unregisterTireType()
  local v1 = self:upper()
  for v4, v5 in ipairs(WheelsUtil.tireTypes) do
    if not (v5.name == self) then
      continue
    end
    table.remove(WheelsUtil.tireTypes, v4)
    return
  end
end
function WheelsUtil:getTireType()
  local v1 = self:upper()
  for v4, v5 in pairs(WheelsUtil.tireTypes) do
    if not (v5.name == self) then
      continue
    end
    return v4
  end
  return nil
end
function WheelsUtil.getTireTypeName(index)
  if WheelsUtil.tireTypes[index] ~= nil then
    return WheelsUtil.tireTypes[index].name
  end
  return "unknown"
end
{}[WheelsUtil.GROUND_ROAD] = 1.15
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1.1
{}[WheelsUtil.GROUND_FIELD] = 0.95
{}[WheelsUtil.GROUND_ROAD] = 1.05
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.05
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1
{}[WheelsUtil.GROUND_FIELD] = 0.7
{}[WheelsUtil.GROUND_ROAD] = 0.45
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 0.45
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 0.4
{}[WheelsUtil.GROUND_FIELD] = 0.35
WheelsUtil.registerTireType("mud", {}, {}, {})
{}[WheelsUtil.GROUND_ROAD] = 1.2
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1.05
{}[WheelsUtil.GROUND_FIELD] = 1
{}[WheelsUtil.GROUND_ROAD] = 1.05
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 0.95
{}[WheelsUtil.GROUND_FIELD] = 0.6
{}[WheelsUtil.GROUND_ROAD] = 0.45
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 0.4
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 0.35
{}[WheelsUtil.GROUND_FIELD] = 0.3
WheelsUtil.registerTireType("offRoad", {}, {}, {})
{}[WheelsUtil.GROUND_ROAD] = 1.25
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1
{}[WheelsUtil.GROUND_FIELD] = 0.9
{}[WheelsUtil.GROUND_ROAD] = 1.15
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 0.85
{}[WheelsUtil.GROUND_FIELD] = 0.45
{}[WheelsUtil.GROUND_ROAD] = 0.55
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 0.4
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 0.3
{}[WheelsUtil.GROUND_FIELD] = 0.35
WheelsUtil.registerTireType("street", {}, {}, {})
{}[WheelsUtil.GROUND_ROAD] = 1.15
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_FIELD] = 1.15
{}[WheelsUtil.GROUND_ROAD] = 1.05
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.05
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1.05
{}[WheelsUtil.GROUND_FIELD] = 0.85
{}[WheelsUtil.GROUND_ROAD] = 0.65
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 0.65
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 0.65
{}[WheelsUtil.GROUND_FIELD] = 0.65
WheelsUtil.registerTireType("crawler", {}, {}, {})
{}[WheelsUtil.GROUND_ROAD] = 1.15
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_FIELD] = 1.15
{}[WheelsUtil.GROUND_ROAD] = 1.05
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.05
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1.05
{}[WheelsUtil.GROUND_FIELD] = 0.95
{}[WheelsUtil.GROUND_ROAD] = 1.05
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.05
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1.05
{}[WheelsUtil.GROUND_FIELD] = 1.05
WheelsUtil.registerTireType("chains", {}, {}, {})
{}[WheelsUtil.GROUND_ROAD] = 1.15
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_FIELD] = 1.15
{}[WheelsUtil.GROUND_ROAD] = 1.15
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_FIELD] = 1.15
{}[WheelsUtil.GROUND_ROAD] = 1.15
{}[WheelsUtil.GROUND_HARD_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_SOFT_TERRAIN] = 1.15
{}[WheelsUtil.GROUND_FIELD] = 1.15
WheelsUtil.registerTireType("metalSpikes", {}, {}, {})
function WheelsUtil:getSmoothedAcceleratorAndBrakePedals(acceleratorPedal, brakePedal, dt)
  if self.wheelsUtilSmoothedAcceleratorPedal == nil then
    self.wheelsUtilSmoothedAcceleratorPedal = 0
  end
  if 0 < acceleratorPedal then
    if self.wheelsUtilSmoothedAcceleratorPedal < acceleratorPedal then
      local v6 = math.max(self.wheelsUtilSmoothedAcceleratorPedal + 0.002 * dt, 0.002)
      local v5 = math.min(v6, acceleratorPedal)
    else
    end
    self.wheelsUtilSmoothedAcceleratorPedal = v4
  elseif acceleratorPedal < 0 then
    if acceleratorPedal < self.wheelsUtilSmoothedAcceleratorPedal then
      v6 = math.min(self.wheelsUtilSmoothedAcceleratorPedal - 0.002 * dt, -0.002)
      v5 = math.max(v6, acceleratorPedal)
    else
    end
    self.wheelsUtilSmoothedAcceleratorPedal = v4
  else
    if 0 < self.wheelsUtilSmoothedAcceleratorPedal then
      v6 = math.max(self.wheelsUtilSmoothedAcceleratorPedal - (0.0005 + 0.001 * brakePedal) * dt, 0)
      self.wheelsUtilSmoothedAcceleratorPedal = v6
    else
      v6 = math.min(self.wheelsUtilSmoothedAcceleratorPedal + (0.0005 + 0.001 * brakePedal) * dt, 0)
      self.wheelsUtilSmoothedAcceleratorPedal = v6
    end
  end
  if self.wheelsUtilSmoothedBrakePedal == nil then
    self.wheelsUtilSmoothedBrakePedal = 0
  end
  if 0 < brakePedal then
    if self.wheelsUtilSmoothedBrakePedal < brakePedal then
      v6 = math.min(self.wheelsUtilSmoothedBrakePedal + 0.0025 * dt, brakePedal)
    else
    end
    self.wheelsUtilSmoothedBrakePedal = v5
    return v4, v5
  end
  local v7 = math.max(self.wheelsUtilSmoothedBrakePedal - (0.0005 + 0.001 * acceleratorPedal) * dt, 0)
  self.wheelsUtilSmoothedBrakePedal = v7
  return v4, v5
end
function WheelsUtil:updateWheelsPhysics(dt, currentSpeed, acceleration, doHandbrake, stopAndGoBraking)
  if self.spec_drivable ~= nil then
  end
  if self.spec_motorized.motor.backwardGears == nil and self.spec_motorized.motor.forwardGears == nil then
  end
  if v10 then
    -- if v9.gearShiftMode ~= VehicleMotor.SHIFT_MODE_AUTOMATIC then goto L42 end
  end
  if v9.directionChangeMode ~= VehicleMotor.DIRECTION_CHANGE_MODE_MANUAL then
  end
  if true then
    local v12 = self:getIsManualDirectionChangeAllowed()
  end
  if v12 then
  else
  end
  v12 = math.abs(currentSpeed)
  local accSign = MathUtil.sign(acceleration)
  self.nextMovingDirection = self.nextMovingDirection or 0
  self.nextMovingDirectionTimer = self.nextMovingDirectionTimer or 0
  local v15 = math.abs(acceleration)
  if v15 < 0.001 then
    if not stopAndGoBraking then
      -- if v2 * v0.nextMovingDirection >= 0.0003 then goto L155 end
    end
    self.nextMovingDirection = 0
  else
    if self.nextMovingDirection * currentSpeed < -0.0014 then
      self.nextMovingDirection = 0
    end
    if accSign ~= self.nextMovingDirection then
      -- if -0.0003 >= v2 * v13 then goto L144 end
      if not stopAndGoBraking then
        -- cmp-jump LOP_JUMPXEQKN R15 aux=0x80000015 -> L144
      end
    end
    v15 = math.max(self.nextMovingDirectionTimer - dt, 0)
    self.nextMovingDirectionTimer = v15
    if self.nextMovingDirectionTimer == 0 then
      self.nextMovingDirection = accSign
    else
      v15 = math.abs(acceleration)
      -- goto L155  (LOP_JUMP +11)
      v15 = math.abs(acceleration)
      if stopAndGoBraking then
        self.nextMovingDirectionTimer = 100
      end
    end
  end
  if v11 and v6 ~= 0 then
    v15 = MathUtil.sign(v6)
    if v15 ~= v9.currentDirection then
      v15 = math.abs(v6)
    end
  end
  if v14 then
  end
  local v15, v16 = v9:updateGear(v6, v7, dt)
  if v9.gear == 0 and v9.targetGear ~= 0 then
    v16 = MathUtil.sign(v9.targetGear)
    if currentSpeed * v16 < 0 then
    end
  end
  if v9.gearShiftMode == VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH and v10 then
  end
  if v14 then
    if v12 >= v9.lowBrakeForceSpeedLimit then
    end
    if self.spec_articulatedAxis ~= nil and self.spec_articulatedAxis.componentJoint ~= nil then
      local v17 = math.abs(self.rotatedTime)
      if 0.01 >= v17 then
      end
    end
    if not v15 then
      -- if not v4 then goto L244 end
    end
    if not v16 then
    else
      v17 = math.min(v12 / 0.001, 1)
      local v18 = MathUtil.lerp(1, v9.lowBrakeForceScale, v17)
    end
  end
  SpecializationUtil.raiseEvent(self, "onVehiclePhysicsUpdate", v6, v7, v14, currentSpeed)
  v15, v16 = WheelsUtil.getSmoothedAcceleratorAndBrakePedals(self, v6, v7, dt)
  v16 = v9:getMaximumForwardSpeed()
  if self.movingDirection < 0 then
    v16 = v9:getMaximumBackwardSpeed()
  end
  v17 = self:getLastSpeed()
  local v19 = v9:getSpeedLimit()
  v18 = math.min(v19, v15)
  if 0 < v17 - v18 then
    if 0.3 < v17 - v18 then
      v17 = math.min(v9.overSpeedTimer + dt, 2000)
      v9.overSpeedTimer = v17
    else
      v17 = math.max(v9.overSpeedTimer - dt, 0)
      v9.overSpeedTimer = v17
    end
    local v20 = math.pow(v16 * (0.5 + v9.overSpeedTimer / 2000 * 1), 2)
    v19 = math.min(v20, 1)
    v18 = math.max(v19, v7)
    v20 = math.max(1 - v16 / 0.2, 0)
  else
    v20 = math.abs(v17 - v18)
    v17 = math.min(v20 / 0.3 + 0.2, 1)
    v9.overSpeedTimer = 0
  end
  v17 = next(self.spec_motorized.differentials)
  if v17 ~= nil and self.spec_motorized.motorizedNode ~= nil then
    v17 = math.abs(v6)
    v18, v19 = v9:getMinMaxGearRatio()
    if 0 <= v19 then
      local v21 = v9:getMaximumForwardSpeed()
    else
      v21 = v9:getMaximumBackwardSpeed()
    end
    local v24 = v9:getSpeedLimit()
    v21 = math.min(v20, v24 / 3.6)
    v21 = v9:getAccelerationLimit()
    local v22 = v9:getMotorRotationAccelerationLimit()
    local v23, v24 = v9:getRequiredMotorRpmRange()
    local v25, v26 = PowerConsumer.getTotalConsumedPtoTorque(self)
    local v27 = v9:getPtoMotorRpmRatio()
    if v18 == 0 then
      -- cmp-jump LOP_JUMPXEQKN R19 aux=0x15 -> L467
    end
    local v28 = v9:getManualClutchPedal()
    if 0.9 >= v28 then
    end
    v9:setExternalTorqueVirtualMultiplicator(v26)
    if not true then
      local v38 = v9:getMaxClutchTorque()
      self:controlVehicle(v17, v20, v21, v23 * math.pi / 30, v24 * math.pi / 30, v22, v18, v19, v38, v25)
    else
      self:controlVehicle(0, 0, 0, 0, math.huge, 0, 0, 0, 0, 0)
      v28 = math.max(v7, 0.03)
    end
  end
  self:brake(v7)
end
function WheelsUtil:updateWheelPhysics(wheel, brakePedal, dt)
  WheelsUtil.updateWheelSteeringAngle(self, wheel, dt)
  if self.isServer and self.isAddedToPhysics then
    local v5 = self:getBrakeForce()
    setWheelShapeProps(wheel.node, wheel.wheelShape, wheel.torque, v5 * brakePedal * wheel.brakeFactor, wheel.steeringAngle, wheel.rotationDamping)
  end
end
function WheelsUtil:updateWheelSteeringAngle(wheel, dt)
  if wheel.steeringAxleScale ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x3 -> L33
    if self.spec_attachable ~= nil then
    end
    local v6 = MathUtil.clamp(v5 * wheel.steeringAxleScale, wheel.steeringAxleRotMin, wheel.steeringAxleRotMax)
  elseif wheel.versatileYRot then
    local v5 = self:getIsVersatileYRotActive(wheel)
    -- if not v5 then goto L72 end
    -- if not v0.isServer then goto L124 end
    if not wheel.forceVersatility then
      -- if not v1.hasGroundContact then goto L124 end
    end
    v5 = Utils.getVersatileRotation(wheel.repr, wheel.node, dt, wheel.positionX, wheel.positionY, wheel.positionZ, wheel.steeringAngle, wheel.rotMin, wheel.rotMax)
  else
    if wheel.rotSpeed ~= 0 and wheel.rotMax ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L87
    end
    if wheel.forceSteeringAngleUpdate then
      if 0 >= v4 then
        -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L98
      end
      -- goto L101  (LOP_JUMP +3)
      if wheel.rotMax < v4 * wheel.rotSpeedNeg then
      elseif v4 * wheel.rotSpeedNeg < wheel.rotMin then
      end
      if self.customSteeringAngleFunction then
        v5 = self:updateSteeringAngle(wheel, dt, dt)
      end
    end
  end
  wheel.steeringAngle = dt
end
function WheelsUtil:computeDifferentialRotSpeedNonMotor()
  if self.isServer and self.spec_wheels ~= nil and #self.spec_wheels.wheels ~= 0 then
    for v6, v7 in pairs(self.spec_wheels.wheels) do
      local v8 = getWheelShapeAxleSpeed(v7.node, v7.wheelShape)
      if not v7.hasGroundContact then
        continue
      end
    end
    if 0 < dt then
      return wheel / dt
    end
    return 0
  end
  return self.lastSpeedReal * 1000
end
function WheelsUtil:updateWheelNetInfo(wheel)
  if wheel.updateWheel then
    local dt, dt, v4, v5, v6 = getWheelShapePosition(wheel.node, wheel.wheelShape)
    if wheel.dirtyFlag ~= nil then
      if wheel.netInfo.x == dt then
        -- if v1.netInfo.z == v4 then goto L34 end
      end
      self:raiseDirtyFlags(wheel.dirtyFlag)
    end
    wheel.netInfo.x = dt
    wheel.netInfo.y = dt
    wheel.netInfo.z = v4
    wheel.netInfo.xDrive = v5
    wheel.netInfo.suspensionLength = v6
    return
  end
  wheel.updateWheel = true
end
function WheelsUtil.updateWheelGraphics(v0, wheel, dt)
  if wheel.netInfo.x ~= nil then
    if wheel.netInfo.xDriveBefore == nil then
      wheel.netInfo.xDriveBefore = wheel.netInfo.xDrive
    end
    if math.pi < v6 - wheel.netInfo.xDriveBefore then
      wheel.netInfo.xDriveBefore = wheel.netInfo.xDriveBefore + 2 * math.pi
    elseif v6 - wheel.netInfo.xDriveBefore < -math.pi then
      wheel.netInfo.xDriveBefore = wheel.netInfo.xDriveBefore - 2 * math.pi
    end
    wheel.netInfo.xDriveDiff = v6 - wheel.netInfo.xDriveBefore
    wheel.netInfo.xDriveSpeed = wheel.netInfo.xDriveDiff / 0.001 * dt
    wheel.netInfo.xDriveBefore = v6
    return WheelsUtil.updateVisualWheel(v0, wheel, dt, v4, v5, v6, v7)
  end
  return false
end
function WheelsUtil:updateVisualWheel(wheel, x, y, z, xDrive, suspensionLength)
  if not wheel.showSteeringAngle then
  end
  local v9 = math.abs(v8 - wheel.lastSteeringAngle)
  if u0 < v9 then
    setRotation(wheel.repr, 0, v8, 0)
    wheel.lastSteeringAngle = v8
  end
  v9 = math.abs(xDrive - wheel.lastXDrive)
  if u0 < v9 then
    setRotation(wheel.driveNode, xDrive, 0, 0)
    wheel.lastXDrive = xDrive
  end
  if wheel.wheelTire ~= nil and self.spec_wheels.wheelVisualPressureActive then
    v9 = MathUtil.clamp(wheel.deltaY + wheel.initialDeformation - suspensionLength, 0, wheel.maxDeformation)
    local v12 = math.abs(v9 - wheel.deformation)
    if Platform.gameplay.wheelVisualPressureUpdateThreshold < v12 then
      wheel.deformation = v9
      wheel.derformationPrevDirty = true
    end
    if v11 == nil and wheel.derformationPrevDirty then
      wheel.derformationPrevDirty = false
    end
    if v11 ~= nil then
      local v12, v13, v14, v15 = I3DUtil.getShaderParameterRec(wheel.wheelTire, "morphPosition")
      I3DUtil.setShaderParameterRec(wheel.wheelTire, "morphPosition", v12, v13, v14, v11, false)
      I3DUtil.setShaderParameterRec(wheel.wheelTire, "prevMorphPosition", v12, v13, v14, v10, false)
      if wheel.additionalWheels ~= nil then
        for v19, v20 in pairs(wheel.additionalWheels) do
          local v21, v22, v23, v24 = I3DUtil.getShaderParameterRec(v20.wheelTire, "morphPosition")
          I3DUtil.setShaderParameterRec(v20.wheelTire, "morphPosition", v21, v22, v23, v11, false)
          I3DUtil.setShaderParameterRec(v20.wheelTire, "prevMorphPosition", v21, v22, v23, v10, false)
        end
      end
    end
  end
  v9 = math.abs(wheel.lastMovement - suspensionLength - wheel.deltaY)
  if u1 < v9 then
    local v11 = getParent(wheel.repr)
    local v9, v10, v11 = localDirectionToLocal(wheel.repr, v11, 0, -1, 0)
    setTranslation(wheel.repr, wheel.startPositionX + v9 * (suspensionLength - wheel.deltaY) * wheel.transRatio, wheel.startPositionY + v10 * (suspensionLength - wheel.deltaY) * wheel.transRatio, wheel.startPositionZ + v11 * (suspensionLength - wheel.deltaY) * wheel.transRatio)
    if wheel.transRatio < 1 then
      setTranslation(wheel.driveNode, wheel.driveNodeStartPosX + v9 * (suspensionLength - wheel.deltaY) * (1 - wheel.transRatio), wheel.driveNodeStartPosY + v10 * (suspensionLength - wheel.deltaY) * (1 - wheel.transRatio), wheel.driveNodeStartPosZ + v11 * (suspensionLength - wheel.deltaY) * (1 - wheel.transRatio))
    end
    wheel.lastMovement = suspensionLength
  end
  if wheel.steeringNode ~= nil then
    if v8 < 0 then
    end
    if v9 ~= 0 then
    end
    if wheel.steeringNodeMinTransX ~= nil then
      v13, v14, v15 = getTranslation(wheel.steeringNode)
      setTranslation(wheel.steeringNode, v10 * v12, v14, v15)
    end
    if wheel.steeringNodeMinRotY ~= nil then
      if not wheel.steeringRotNode then
      end
      v13, v14, v15 = v13(v14)
      if not wheel.steeringRotNode then
      end
      v16(v17, v13, v14, v15)
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 321, target 350)
  if wheel.fenders[1].rotMax < v8 then
  elseif v8 < wheel.fenders[1].rotMin then
  end
  setRotation(v12.node, 0, v13, 0)
  -- TODO: structure LOP_FORNLOOP (pc 349, target 322)
  return v7
end
function WheelsUtil.getTireFriction(tireType, groundType, wetScale, snowScale)
  if wetScale == nil then
  end
  return WheelsUtil.tireTypes[tireType].frictionCoeffs[groundType] + (WheelsUtil.tireTypes[tireType].frictionCoeffsWet[groundType] - WheelsUtil.tireTypes[tireType].frictionCoeffs[groundType]) * wetScale + (WheelsUtil.tireTypes[tireType].frictionCoeffsSnow[groundType] - WheelsUtil.tireTypes[tireType].frictionCoeffs[groundType]) * snowScale
end
function WheelsUtil.getGroundType(isField, isRoad, depth)
  if isField then
    return WheelsUtil.GROUND_FIELD
  end
  if not isRoad then
    -- if v2 >= 0.1 then goto L15 end
  end
  return WheelsUtil.GROUND_ROAD
  if 0.8 < depth then
    return WheelsUtil.GROUND_SOFT_TERRAIN
  end
  return WheelsUtil.GROUND_HARD_TERRAIN
end
