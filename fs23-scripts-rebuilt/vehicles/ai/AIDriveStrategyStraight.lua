-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDriveStrategyStraight = {}
local AIDriveStrategyStraight_mt = Class(AIDriveStrategyStraight, AIDriveStrategy)
function AIDriveStrategyStraight.new(customMt)
  if customMt == nil then
  end
  return AIDriveStrategy.new(customMt)
end
function AIDriveStrategyStraight:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  v2 = v2:getAttachedAIImplements()
  for v4, v5 in ipairs(...) do
    v6:aiImplementEndLine()
    v5.object.rootVehicle:raiseStateChange(Vehicle.STATE_CHANGE_AI_END_LINE)
  end
  for v4, v5 in pairs(self.turnStrategies) do
    v5:delete()
  end
end
function AIDriveStrategyStraight:setAIVehicle(vehicle)
  local v3 = v3:superClass()
  v3.setAIVehicle(self, vehicle)
  v3 = v3:getAIDirectionNode()
  local v2, v3, v4 = localDirectionToWorld(v3, 0, 0, 1)
  if g_currentMission.snapAIDirection then
    local v5 = v5:getDirectionSnapAngle()
    local v10 = v10:getGroundAngleMaxValue()
    local v8 = math.max(v10 + 1, 4)
    local v7 = math.max(v5, math.pi / v8)
    v7 = MathUtil.getYRotationFromDirection(v2, v4)
    v8 = math.floor(v7 / v7 + 0.5)
    local v8, v9 = MathUtil.getDirectionFromYRotation(v8 * v7)
  else
    v5 = MathUtil.vector2Length(v2, v4)
  end
  self.vehicle.aiDriveDirection = {v2, v4}
  local v6 = v6:getAIDirectionNode()
  v5, v6, v7 = getWorldTranslation(...)
  self.vehicle.aiDriveTarget = {v5, v7}
  v9 = AIVehicleUtil.getAttachedImplementsAllowTurnBackward(vehicle)
  self.allowTurnBackward = v9
  if not self.allowTurnBackward then
  end
  v10 = v10:getAttachedAIImplements()
  for v12, v13 in ipairs(...) do
    v13.aiLastStateChangeDistance = nil
  end
  v9 = AIVehicleUtil.getAIToolReverserDirectionNode(self.vehicle)
  self.aiToolReverserDirectionNode = v9
  v9 = v9:getAIReverserNode()
  self.vehicleAIReverserNode = v9
  self.turnStrategies = {}
  if v8 then
    v12 = AITurnStrategyDefault.new()
    table.insert(...)
    v12 = AITurnStrategyDefaultReverse.new()
    table.insert(...)
  end
  if self.aiToolReverserDirectionNode == nil and not v8 then
    -- if not v0.vehicleAIReverserNode then goto L214 end
  end
  v12 = AITurnStrategyBulb1Reverse.new()
  table.insert(...)
  v12 = AITurnStrategyBulb2Reverse.new()
  table.insert(...)
  v12 = AITurnStrategyBulb3Reverse.new()
  table.insert(...)
  -- goto L244  (LOP_JUMP +30)
  v12 = AITurnStrategyBulb1.new()
  table.insert(...)
  v12 = AITurnStrategyBulb2.new()
  table.insert(...)
  v12 = AITurnStrategyBulb3.new()
  table.insert(...)
  if self.aiToolReverserDirectionNode == nil and not v8 then
    -- if not v0.vehicleAIReverserNode then goto L265 end
  end
  v12 = AITurnStrategyHalfCircleReverse.new()
  table.insert(...)
  -- goto L277  (LOP_JUMP +12)
  v12 = AITurnStrategyHalfCircle.new()
  table.insert(...)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    local v15 = tostring(self.vehicle.configFileName)
    print("AI is using strategies: " .. v9 .. "   +HALFCIRCLE (reverse)" .. " +HALFCIRCLE" .. " for " .. v15)
  end
  for v13, v14 in ipairs(self.turnStrategies) do
    v14:setAIVehicle(self.vehicle, self)
  end
  self.activeTurnStrategy = nil
  self.turnDataIsStable = false
  self.turnDataIsStableCounter = 0
  self.fieldEndGabDetected = false
  self.fieldEndGabLastPos = {}
  self.gabAllowTurnLeft = true
  self.gabAllowTurnRight = true
  self.resetGabDetection = true
  self.fieldEndGabDetectedByBits = false
  self.lastValidTurnLeftPosition = {0, 0, 0}
  self.lastValidTurnLeftValue = 0
  self.lastValidTurnRightPosition = {0, 0, 0}
  self.lastValidTurnRightValue = 0
  self.lastValidTurnCheckPosition = {0, 0, 0}
  self.useCorridor = false
  self.useCorridorStart = nil
  self.useCorridorTimeOut = 0
  self.rowStartTranslation = nil
  self.lastLookAheadDistance = 5
  self.driveExtraDistanceToFieldBorder = false
  self.toolLineStates = {}
  self.isTurning = false
  self.isFirstRow = true
  self.isFirstRun = true
end
function AIDriveStrategyStraight:update(dt)
  for v5, v6 in ipairs(self.turnStrategies) do
    v6:update(dt)
  end
  if self.isFirstRun then
    v3 = v3:getAISteeringNode()
    v2, v3, v4 = getWorldTranslation(...)
    local v5, v6, v7 = self:getDistanceToEndOfField(dt, v2, v3, v4)
    if not v6 then
      if v7 then
        local v10 = AIMessageErrorNoFieldFound.new()
        v8:stopCurrentAIJob(...)
        self:debugPrint("Stopping AIVehicle - unable to find field (initial)")
      else
        v10 = AIMessageErrorFieldNotOwned.new()
        v8:stopCurrentAIJob(...)
        self:debugPrint("Stopping AIVehicle - field not owned (initial)")
      end
    end
    self.isFirstRun = false
  end
end
function AIDriveStrategyStraight:getDriveData(dt, vX, vY, vZ)
  if self.activeTurnStrategy ~= nil then
    if not self.isTurning then
      self.fieldEndGabDetected = false
      self.fieldEndGabDetectedByBits = false
      self.fieldEndGabLastPos = {}
      self.lastValidTurnLeftPosition = {0, 0, 0}
      self.lastValidTurnLeftValue = 0
      self.lastValidTurnRightPosition = {0, 0, 0}
      self.lastValidTurnRightValue = 0
      self.gabAllowTurnLeft = true
      self.gabAllowTurnRight = true
      self.resetGabDetection = true
      self.rowStartTranslation = nil
    end
    self.isTurning = true
    self.isFirstRow = false
    local v5, v6, v7, v8, v9 = v5:getDriveData(dt, vX, vY, vZ, self.turnData)
    if v5 ~= nil then
      if VehicleDebug.state == VehicleDebug.DEBUG_AI then
        v10:addAIDebugText("===> distanceToStop = " .. v9)
      end
      return v5, v6, v7, v8, v9
    end
    for v13, v14 in ipairs(self.turnStrategies) do
      v14:onEndTurn(self.activeTurnStrategy.turnLeft)
    end
    self.turnLeft = self.activeTurnStrategy.turnLeft
    self.activeTurnStrategy = nil
    self.idealTurnStrategy = nil
    self.turnDataIsStable = false
    self.turnDataIsStableCounter = 0
    self.lastLookAheadDistance = 5
    self.foundField = false
    self.foundNoBetterTurnStrategy = false
    self.lastHasNoField = false
  else
    self.isTurning = false
  end
  if self.rowStartTranslation == nil then
    v6 = v6:getAIDirectionNode()
    v5, v6, v7 = getWorldTranslation(...)
    self.rowStartTranslation = {v5, v6, v7}
  end
  v5, v6, v7 = self:getDistanceToEndOfField(dt, vX, vY, vZ)
  v8 = v8:getAttachedAIImplements()
  if v6 and 0 < v5 then
    self.foundField = true
  end
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    v11 = string.format("==(I)=> distanceToEndOfField: %.1f", v5)
    v9:addAIDebugText(...)
  end
  if self.foundField == false and v5 <= 0 and self.turnLeft ~= nil then
    v10 = v10:getAIDirectionNode()
    v9, v10, v11 = worldToLocal(v10, self.vehicle.aiDriveTarget[1], 0, self.vehicle.aiDriveTarget[2])
    if 0 < v11 then
      self.lastHasNoField = false
    end
  end
  if not v6 and self.foundField ~= true and self.turnLeft == nil then
    if v7 then
      v11 = AIMessageErrorNoFieldFound.new()
      v9:stopCurrentAIJob(...)
      self:debugPrint("Stopping AIVehicle - unable to find field")
    else
      v11 = AIMessageErrorFieldNotOwned.new()
      v9:stopCurrentAIJob(...)
      self:debugPrint("Stopping AIVehicle - field not owned")
    end
    return nil
  end
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    v11 = string.format("==(II)=> distanceToEndOfField: %.1f", v5)
    v9:addAIDebugText(...)
    v13 = tostring(self.foundField)
    v11 = string.format(...)
    v9:addAIDebugText(...)
    v13 = tostring(self.lastHasNoField)
    v11 = string.format(...)
    v9:addAIDebugText(...)
    if self.turnData ~= nil then
      v13 = tostring(self.turnData.useExtraStraightLeft)
      v14 = tostring(self.turnData.useExtraStraightRight)
      v11 = string.format(...)
      v9:addAIDebugText(...)
    end
  end
  if v5 <= 0 then
    for v12, v13 in ipairs(v8) do
      local v14, v15, v16 = v14:getAIMarkers()
      local v17, v18 = v17:getAIHasNoFullCoverageArea()
      if self.turnLeft ~= nil then
        if self.turnLeft then
          -- if v0.gabAllowTurnRight then goto L374 end
        end
        if self.turnLeft == false then
        end
      end
      if v19 then
      end
      if v20 then
      end
      if not v20 then
        continue
      end
      if self.turnLeft then
      else
      end
      local v21 = calcDistanceFrom(v14, v15)
      local v22, v23, v24, v25, v26, v27 = AIVehicleUtil.getAreaDimensions(self.vehicle.aiDriveDirection[1], self.vehicle.aiDriveDirection[2], v14, v15, v20 * v21, 0, 1, false)
      local v28, v29 = AIVehicleUtil.getAIAreaOfVehicle(v13.object, v22, v23, v24, v25, v26, v27, false)
      if 0 < v28 then
        local v30 = AIVehicleUtil.getIsAreaOwned(self.vehicle, v22, v23, v24, v25, v26, v27)
        if not v30 then
        end
      end
      if self.turnLeft == nil then
        if not self.gabAllowTurnLeft then
        end
        if v28 <= 0 and self.gabAllowTurnRight then
          local v30, v31, v32, v33, v34, v35 = AIVehicleUtil.getAreaDimensions(self.vehicle.aiDriveDirection[1], self.vehicle.aiDriveDirection[2], v14, v15, -v20 * v21, 0, 1, false)
          v30, v31 = AIVehicleUtil.getAIAreaOfVehicle(v13.object, v30, v31, v32, v33, v34, v35, false)
          if 0 < v30 then
            v30 = AIVehicleUtil.getIsAreaOwned(self.vehicle, v30, v31, v32, v33, v34, v35)
            if not v30 then
            end
          end
        end
      end
      if not (0 < v28) then
        continue
      end
      if VehicleDebug.state == VehicleDebug.DEBUG_AI then
        v32 = string.format("===> continue until field border on left/right (area: %d)", v28)
        v30:addAIDebugText(...)
      end
      self.driveExtraDistanceToFieldBorder = true
    end
  else
    self.driveExtraDistanceToFieldBorder = false
  end
  if 0 < v5 and not self.useCorridor then
    if VehicleDebug.state == VehicleDebug.DEBUG_AI then
      v15 = tostring(self.turnDataIsStable)
      v13 = string.format(" turnDataIsStable: %s | %d", v15, self.turnDataIsStableCounter)
      v11:addAIDebugText(...)
      if self.turnData ~= nil then
        v13 = string.format(" turn radius: %.2f", self.turnData.radius or 0)
        v11:addAIDebugText(...)
      end
    end
    if not self.turnDataIsStable then
      self:updateTurnData()
    end
    if self.idealTurnStrategy ~= nil then
    end
    if self.idealTurnStrategy ~= nil then
      v12 = v12:getDistanceToCollision(dt, vX, vY, vZ, self.turnData, v9)
      if v12 < v9 then
      else
        self.foundNoBetterTurnStrategy = false
      end
    end
    if VehicleDebug.state == VehicleDebug.DEBUG_AI then
      v16 = tostring(v11)
      v14 = string.format(...)
      v12:addAIDebugText(...)
    end
    if v11 and self.foundNoBetterTurnStrategy ~= true then
      for v15, v16 in ipairs(self.turnStrategies) do
        if not (v16 ~= self.idealTurnStrategy) then
          continue
        end
        v17 = v16:getDistanceToCollision(dt, vX, vY, vZ, self.turnData, v9)
        if not (v9 <= v17) then
          continue
        end
        if not not v16.collisionDetected then
          continue
        end
        self.idealTurnStrategy = v16
        break
      end
    end
    if VehicleDebug.state == VehicleDebug.DEBUG_AI then
      v14 = string.format("===> distanceToCollision: %.1f", v10)
      v12:addAIDebugText(...)
    end
    if self.idealTurnStrategy ~= nil then
      if self.idealTurnStrategy.turnLeft ~= self.turnLeft then
        if self.idealTurnStrategy.turnLeft then
          self.lastValidTurnRightPosition[1] = 0
          self.lastValidTurnRightPosition[2] = 0
          self.lastValidTurnRightPosition[3] = 0
          self.lastValidTurnRightValue = 0
        else
          self.lastValidTurnLeftPosition[1] = 0
          self.lastValidTurnLeftPosition[2] = 0
          self.lastValidTurnLeftPosition[3] = 0
          self.lastValidTurnLeftValue = 0
        end
      end
      self.turnLeft = self.idealTurnStrategy.turnLeft
    end
  end
  v11 = math.min(v5, v10)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    v14 = string.format("===> Distance to turn: %.1f", v11)
    v12:addAIDebugText(...)
    v16 = tostring(self.turnLeft)
    v14 = string.format(...)
    v12:addAIDebugText(...)
  end
  if v10 < v9 and v10 < v5 then
    if self.turnLeft == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x80000000 -> L888
    end
    AIVehicleUtil.updateInvertLeftRightMarkers(self.vehicle, self.vehicle)
    for v15, v16 in pairs(v8) do
      AIVehicleUtil.updateInvertLeftRightMarkers(self.vehicle, v16.object)
    end
    v12, v13 = AIVehicleUtil.getValidityOfTurnDirections(self.vehicle, self.turnData)
    if self.turnLeft then
      -- if v13 < AIVehicleUtil.VALID_AREA_THRESHOLD then goto L847 end
    end
    if not self.turnLeft then
      -- if v12 < AIVehicleUtil.VALID_AREA_THRESHOLD then goto L847 end
    end
    if self.idealTurnStrategy == nil then
      self.foundNoBetterTurnStrategy = false
      v14 = v14:checkCollisionInFront(self.turnData)
      if not v14 then
        -- if v5 > 0 then goto L887 end
      end
      self.foundNoBetterTurnStrategy = false
      self.idealTurnStrategy = nil
      if self.turnLeft == nil then
        v17 = AIMessageSuccessFinishedJob.new()
        v15:stopCurrentAIJob(...)
        self:debugPrint("Stopping AIVehicle - turn direction undefined")
        return nil
        -- goto L888  (LOP_JUMP +1)
      end
    end
  end
  if not self.allowTurnBackward then
    -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L992
  end
  if v11 <= 0 then
    -- if 0 >= v5 then goto L989 end
    v12 = v12:checkCollisionInFront(self.turnData, 0)
    if not v12 then
      v13 = v13:getLastSpeed()
      if v13 < 1.5 then
        self.useCorridorTimeOut = self.useCorridorTimeOut + dt
      else
        self.useCorridorTimeOut = 0
      end
      if 3000 < self.useCorridorTimeOut then
      end
    end
    if not v12 then
      self.useCorridor = true
      if self.useCorridorStart == nil then
        self.useCorridorStart = {vX, vY, vZ}
        -- goto L992  (LOP_JUMP +39)
      end
      -- if VehicleDebug.state ~= VehicleDebug.DEBUG_AI then goto L992 end
      v13 = MathUtil.vector3Length(self.useCorridorStart[1] - vX, self.useCorridorStart[2] - vY, self.useCorridorStart[3] - vZ)
      v16 = string.format("===> is using a corridor (%.1fm)", v13)
      v14:addAIDebugText(...)
      -- goto L992  (LOP_JUMP +7)
    end
    self.useCorridor = false
  else
    self.useCorridor = false
  end
  if v11 <= 0 and not self.useCorridor then
    for v15, v16 in ipairs(v8) do
      if v16.aiEndLineCalled ~= nil and not not v16.aiEndLineCalled then
        continue
      end
      v16.aiEndLineCalled = true
      v16.aiStartLineCalled = nil
      v17:aiImplementEndLine()
      v16.object.rootVehicle:raiseStateChange(Vehicle.STATE_CHANGE_AI_END_LINE)
    end
    self.lastHasNoField = false
    self.activeTurnStrategy = self.idealTurnStrategy
    if self.turnData ~= nil and self.activeTurnStrategy ~= nil then
      if self.useCorridorStart ~= nil then
        v12 = MathUtil.vector3Length(self.useCorridorStart[1] - vX, self.useCorridorStart[2] - vY, self.useCorridorStart[3] - vZ)
        self.corridorDistance = v12
        self.useCorridorStart = nil
        v15 = string.format("start turn with corridor offset: %.2f", v12)
        self:debugPrint(...)
      end
      v12 = v12:startTurn(self)
      self.activeTurnStrategy.lastValidTurnPositionOffset = 0
      self.corridorDistance = 0
      if not v12 then
        v15 = AIMessageSuccessFinishedJob.new()
        v13:stopCurrentAIJob(...)
        self:debugPrint("Stopping AIVehicle - could not start to turn (%s)", self.activeTurnStrategy.strategyName)
        return nil
      end
      v13 = v13:getDriveData(dt, vX, vY, vZ, self.turnData)
      return v13
    end
    v14 = AIMessageSuccessFinishedJob.new()
    v12:stopCurrentAIJob(...)
    self:debugPrint("Stopping AIVehicle - no turn data found")
    return nil
  end
  v12:addAIDebugText("===> Drive straight")
  v12 = self:getDriveStraightData(dt, vX, vY, vZ, v11, v5)
  return v12
end
function AIDriveStrategyStraight:getDriveStraightData(dt, vX, vY, vZ, distanceToTurn, distanceToEndOfField)
  if self.vehicle.aiDriveDirection == nil then
    return nil, nil, true, 0, 0
  end
  local v7, v8 = MathUtil.projectOnLine(vX, vZ, self.vehicle.aiDriveTarget[1], self.vehicle.aiDriveTarget[2], self.vehicle.aiDriveDirection[1], self.vehicle.aiDriveDirection[2])
  local v11 = v11:getSpeedLimit(true)
  local v12 = v12:getAttachedAIImplements()
  -- TODO: structure LOP_FORNPREP (pc 75, target 81)
  self.toolLineStates[#self.toolLineStates] = nil
  -- TODO: structure LOP_FORNLOOP (pc 80, target 76)
  -- TODO: structure LOP_FORNPREP (pc 85, target 691)
  if self.toolLineStates[#v12 + 1] == -1 then
    local v18 = v18:getAttacherVehicle()
    -- if v18 ~= v12[#v12].object then goto L109 end
    self.toolLineStates[#v12] = -1
  else
    local v18, v19, v20, v21 = v18:getAIMarkers()
    local v23, v24, v25 = localToLocal(v20, v18, 0, 0, 0)
    local v28, v29 = v28:getAIHasNoFullCoverageArea()
    if v28 then
      local v30 = math.abs(v25)
    end
    local v31, v32, v33, v34, v35, v36 = function(self, dt, vX, vY, vZ, distanceToTurn)
      if distanceToTurn ~= nil then
        -- if not v5 then goto L6 end
      end
      if u0 then
      end
      local v8, v9, v10 = localToWorld(self, distanceToEndOfField, 0, vY)
      local v11, v12, v13 = localToWorld(dt, v7, 0, vY)
      return v8 - 0.5 * u1.vehicle.aiDriveDirection[1], v10 - 0.5 * u1.vehicle.aiDriveDirection[2], v11 - 0.5 * u1.vehicle.aiDriveDirection[1], v13 - 0.5 * u1.vehicle.aiDriveDirection[2], v8 + vZ * u1.vehicle.aiDriveDirection[1], v10 + vZ * u1.vehicle.aiDriveDirection[2]
    end(v18, v19, 0.2, v22, v26)
    local v37, v38 = AIVehicleUtil.getAIAreaOfVehicle(v17.object, v31, v32, v33, v34, v35, v36, false)
    if 0 < v38 then
      -- if 0.01 >= v37 / v38 then goto L628 end
      if not self.fieldEndGabDetected then
        self.toolLineStates[v16] = -1
      end
      if v27 then
        local v41, v42, v43, v44, v45, v46 = v30(v18, v19, 0.2, 1, 1)
        local v47, v48 = AIVehicleUtil.getAIAreaOfVehicle(v17.object, v41, v42, v43, v44, v45, v46, false)
        if 0 < #self.fieldEndGabLastPos then
          local v50 = MathUtil.vector2Length(v41 - self.fieldEndGabLastPos[1], v42 - self.fieldEndGabLastPos[2])
          local v49 = math.abs(...)
        end
        local v49, v50, v51, v52, v53, v54 = v30(v18, v19, 0.2, -1, 1)
        local v55, v56 = AIVehicleUtil.getAIAreaOfVehicle(v17.object, v49, v50, v51, v52, v53, v54, false)
        if 0 < #self.fieldEndGabLastPos then
          local v58 = MathUtil.vector2Length(v49 - self.fieldEndGabLastPos[1], v50 - self.fieldEndGabLastPos[2])
          local v57 = math.abs(...)
        end
        if v55 == 0 and 0 < v47 and 0 < v39 and 0 < v40 and 3 < v39 and v40 < v39 then
          self.fieldEndGabDetected = true
          self.toolLineStates[v16] = 1
        end
        if 0 < v47 then
          self.fieldEndGabLastPos[1] = v41
          self.fieldEndGabLastPos[2] = v42
        end
      end
      -- if v0.driveExtraDistanceToFieldBorder then goto L690 end
      local v39 = math.abs(v25)
      if v22 ~= 0 then
      end
      if self.turnLeft then
      else
      end
      v41 = calcDistanceFrom(v18, v19)
      v42, v43, v44, v45, v46, v47 = v30(v18, v19, v40 * v41, v22 - v39, v26, false)
      v42, v43 = AIVehicleUtil.getAIAreaOfVehicle(v17.object, v42, v43, v44, v45, v46, v47, false)
      v45 = AIVehicleUtil.getIsAreaOwned(self.vehicle, v42, v43, v44, v45, v46, v47)
      if not v45 then
      end
      if 0 < v37 then
        v46 = v46:getAIDirectionNode()
        v45, v46, v47 = getWorldTranslation(...)
      end
      if v37 ~= 0 then
        -- cmp-jump LOP_JUMPXEQKNIL R45 aux=0x80000000 -> L483
      end
      v45, v46, v47, v48, v49, v50 = v30(v18, v19, -v40 * v41, v22 - v39, v26, false)
      v45, v46 = AIVehicleUtil.getAIAreaOfVehicle(v17.object, v45, v46, v47, v48, v49, v50, false)
      v47 = AIVehicleUtil.getIsAreaOwned(self.vehicle, v45, v46, v47, v48, v49, v50)
      if not v47 then
      end
      if 0 < v45 then
        v48 = v48:getAIDirectionNode()
        v47, v48, v49 = getWorldTranslation(...)
      end
      if self.turnLeft ~= nil then
      else
        if 0 < v37 then
          self.lastValidTurnLeftPosition[1] = v42
          self.lastValidTurnLeftPosition[2] = v43
          self.lastValidTurnLeftPosition[3] = v44
          v47 = math.max(v37, self.lastValidTurnLeftValue)
          self.lastValidTurnLeftValue = v47
        end
        if 0 < v45 then
          self.lastValidTurnRightPosition[1] = v42
          self.lastValidTurnRightPosition[2] = v43
          self.lastValidTurnRightPosition[3] = v44
          v47 = math.max(v45, self.lastValidTurnRightValue)
          self.lastValidTurnRightValue = v47
        end
      end
      if self.turnLeft ~= nil and 0 < v37 then
        if 0 < v40 then
          -- if v0.lastValidTurnRightValue >= v37 then goto L564 end
          self.lastValidTurnLeftPosition[1] = v42
          self.lastValidTurnLeftPosition[2] = v43
          self.lastValidTurnLeftPosition[3] = v44
          v45 = math.max(v37, self.lastValidTurnLeftValue)
          self.lastValidTurnLeftValue = v45
          self.lastValidTurnRightPosition[1] = 0
          self.lastValidTurnRightPosition[2] = 0
          self.lastValidTurnRightPosition[3] = 0
        elseif self.lastValidTurnLeftValue < v37 then
          self.lastValidTurnRightPosition[1] = v42
          self.lastValidTurnRightPosition[2] = v43
          self.lastValidTurnRightPosition[3] = v44
          v45 = math.max(v37, self.lastValidTurnRightValue)
          self.lastValidTurnRightValue = v45
          self.lastValidTurnLeftPosition[1] = 0
          self.lastValidTurnLeftPosition[2] = 0
          self.lastValidTurnLeftPosition[3] = 0
        end
      end
      v49 = v49:getAIDirectionNode()
      v48, v49, v50 = getWorldTranslation(...)
      self.lastValidTurnCheckPosition[1] = v48
      self.lastValidTurnCheckPosition[2] = v49
      self.lastValidTurnCheckPosition[3] = v50
      -- if VehicleDebug.state ~= VehicleDebug.DEBUG_AI then goto L690 end
      DebugUtil.drawDebugGizmoAtWorldPos(self.lastValidTurnLeftPosition[1], self.lastValidTurnLeftPosition[2], self.lastValidTurnLeftPosition[3], 0, 1, 0, 0, 1, 0, "last valid left", true)
      DebugUtil.drawDebugGizmoAtWorldPos(self.lastValidTurnRightPosition[1], self.lastValidTurnRightPosition[2], self.lastValidTurnRightPosition[3], 0, 1, 0, 0, 1, 0, "last valid right", true)
    elseif self.lastHasNoField then
      self.toolLineStates[v16] = 1
    else
      local v39, v40, v41 = localToWorld(v18, -0.2, 0, v22)
      v44 = math.max(distanceToTurn, 2.5)
      v45 = math.max(distanceToTurn, 2.5)
      v44, v45 = AIVehicleUtil.getAIAreaOfVehicle(v17.object, v31, v32, v33, v34, v39 + v44 * self.vehicle.aiDriveDirection[1], v41 + v45 * self.vehicle.aiDriveDirection[2], false)
      if v44 <= 0 then
        self.toolLineStates[v16] = 1
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 690, target 86)
  -- TODO: structure LOP_FORNPREP (pc 694, target 791)
  if v12[v13].aiLastStateChangeDistance == nil then
    v12[v13].aiLastStateChangeDistance = 0.249
  end
  v17.aiLastStateChangeDistance = v17.aiLastStateChangeDistance + v17.object.lastMovedDistance
  if 0.25 < v17.aiLastStateChangeDistance then
    if self.toolLineStates[v16] == -1 then
      if v17.aiStartLineCalled ~= nil then
        -- if v17.aiStartLineCalled then goto L790 end
      end
      v17.aiStartLineCalled = true
      v17.aiEndLineCalled = nil
      v18:aiImplementStartLine()
      v17.aiLastStateChangeDistance = 0
      v18 = v18:getRootVehicle()
      v18:raiseStateChange(Vehicle.STATE_CHANGE_AI_START_LINE)
    elseif self.toolLineStates[v16] == 1 then
      if v17.aiEndLineCalled ~= nil then
        -- if v17.aiEndLineCalled then goto L790 end
      end
      v17.aiEndLineCalled = true
      v17.aiStartLineCalled = nil
      v18:aiImplementEndLine()
      v17.aiLastStateChangeDistance = 0
      v18 = v18:getRootVehicle()
      v18:raiseStateChange(Vehicle.STATE_CHANGE_AI_END_LINE)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 790, target 695)
  -- TODO: structure LOP_FORNPREP (pc 796, target 808)
  if v12[1].aiStartLineCalled then
  elseif v12[1].aiEndLineCalled then
  end
  -- TODO: structure LOP_FORNLOOP (pc 807, target 797)
  if v14 and v15 then
    local v16 = math.min(v11, 10)
    v18 = string.format("===> Tools only partly lowered, limit speed to 10kph")
    v16:addAIDebugText(...)
  end
  local v16, v17, v18 = v16:getCanAIFieldWorkerContinueWork()
  if not v16 and v17 then
    if not v18 then
      v21 = AIMessageErrorUnknown.new()
    end
    v19:stopCurrentAIJob(v21)
    self:debugPrint("Stopping AIVehicle - cannot continue work")
  end
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    v23 = tostring(v16)
    v21 = string.format(...)
    v19:addAIDebugText(...)
    v19:addAIDebugLine({vX, vY, vZ}, {v9, vY, v10}, {1, 1, 1})
  end
  if v16 then
    v19 = v19:getLastSpeed()
    if 1 < v19 and 0 < self.vehicle.movingDirection then
      self.gabAllowTurnLeft = true
      self.gabAllowTurnRight = true
      for v27, v28 in ipairs(v12) do
        if v28.aiStartLineCalled then
          v29, v30 = v29:getAIHasNoFullCoverageArea()
          v31, v32, v33, v34 = v31:getAIMarkers()
          if v34 then
          else
          end
          v37 = calcDistanceFrom(v31, v32)
          if v37 + 0.8 < 8.5 then
          end
          if v36 < 4.5 then
          end
          if not v28.object.aiImplementGabCheckpoints then
            v39 = MathUtil.round(v36 / v37, 0)
          end
          if v28.object.aiImplementGabCheckpoints == nil then
            v28.object.aiImplementGabCheckpoints = v38
          end
          if v28.object.aiImplementGabCheckpointValues ~= nil and v28.object.aiImplementFieldEndCheckpointValues ~= nil then
            -- if not v0.resetGabDetection then goto L1006 end
          end
          v28.object.aiImplementGabCheckpointValues = {}
          v28.object.aiImplementFieldEndCheckpointValues = {}
          v28.object.aiImplementCurCheckpoint = (v28.object.aiImplementCurCheckpoint or -1) + 1
          if v38 <= v28.object.aiImplementCurCheckpoint then
            v28.object.aiImplementCurCheckpoint = 0
          end
          if 2 < v38 then
            v44, v45, v46 = localToWorld(v31, 0.4 * v35, 0, 0)
            v47, v48, v49 = localToWorld(v32, -0.4 * v35, 0, 0)
            v53, v54 = FSDensityMapUtil.getFieldDataAtWorldPosition(v44 - (v44 - v47) * v28.object.aiImplementCurCheckpoint * v36 / (v38 - 1) / v36, v45 - (v45 - v48) * v28.object.aiImplementCurCheckpoint * v36 / (v38 - 1) / v36, v46 - (v46 - v49) * v28.object.aiImplementCurCheckpoint * v36 / (v38 - 1) / v36)
            if v29 and v40[v28.object.aiImplementCurCheckpoint + 1] == 2 and v53 then
              v40[v28.object.aiImplementCurCheckpoint + 1] = 3
            end
            if v40[v43] == 1 and not v53 then
              v40[v43] = 2
            end
            if v40[v43] == nil and v53 then
              -- TODO: structure LOP_FORNPREP (pc 1105, target 1116)
              if v40[1] ~= nil then
                -- if 2 > v40[1] then goto L1115 end
              else
                -- TODO: structure LOP_FORNLOOP (pc 1115, target 1106)
              end
              if v56 then
                v40[v43] = 1
              end
            end
            v39[v43] = v55
            -- TODO: structure LOP_FORNPREP (pc 1123, target 1172)
            if v39[1] ~= v20 and 2 < v19 + 1 then
            end
            if VehicleDebug.state == VehicleDebug.DEBUG_AI then
              if v39[v58] then
              else
              end
              local v60 = v60(v61)
              if v40[v58] == 3 then
              elseif v40[v58] == nil then
              else
                if v40[v58] == 1 then
                else
                end
              end
              v60 = v60(v61)
            end
            -- TODO: structure LOP_FORNLOOP (pc 1171, target 1124)
            if self.isFirstRow then
              if 0 < v22 and v22 >= 0.5 then
              end
              if 0.5 > v22 then
              end
              if self.gabAllowTurnLeft and v39[1] then
              end
              self.gabAllowTurnLeft = v58
              if self.gabAllowTurnRight and v39[#v39] then
              end
              self.gabAllowTurnRight = v58
            else
              if self.gabAllowTurnLeft and v39[1] and v22 >= 0 then
              end
              self.gabAllowTurnLeft = v56
              if self.gabAllowTurnRight and v39[#v39] and v22 >= 0 then
              end
              self.gabAllowTurnRight = v56
            end
          end
          -- TODO: structure LOP_FORNPREP (pc 1236, target 1243)
          if v40[1] ~= nil then
          else
            -- TODO: structure LOP_FORNLOOP (pc 1242, target 1237)
          end
          -- TODO: structure LOP_FORNPREP (pc 1247, target 1254)
          if v40[1] == 1 then
          else
            -- TODO: structure LOP_FORNLOOP (pc 1253, target 1248)
          end
          if v29 then
            -- TODO: structure LOP_FORNPREP (pc 1259, target 1268)
            if v40[1] == 3 then
              -- goto L1268  (LOP_JUMP +3)
            end
            -- TODO: structure LOP_FORNLOOP (pc 1265, target 1260)
          else
          end
          if 0 < v38 and v42 and v43 then
          end
          self.fieldEndGabDetectedByBits = v45
        else
          if v28.object.aiImplementGabCheckpointValues ~= nil and v28.object.aiImplementFieldEndCheckpointValues ~= nil and not self.resetGabDetection then
            continue
          end
          v28.object.aiImplementGabCheckpointValues = {}
          v28.object.aiImplementFieldEndCheckpointValues = {}
        end
      end
      if self.resetGabDetection then
        self.resetGabDetection = false
      end
      if VehicleDebug.state == VehicleDebug.DEBUG_AI then
        v26 = string.format("===> gab bits: %s", v21)
        v24:addAIDebugText(...)
        if 0 < v22 then
          if v22 < 0.5 then
          else
          end
          v26 = v26(v27, v28, v29)
          v24:addAIDebugText(...)
        end
        v26 = string.format("===> gab allow Left: %s", self.gabAllowTurnLeft)
        v24:addAIDebugText(...)
        v26 = string.format("===> gab allow right: %s", self.gabAllowTurnRight)
        v24:addAIDebugText(...)
        v26 = string.format("===> field end detection: %s (%s)", v23, self.fieldEndGabDetectedByBits)
        v24:addAIDebugText(...)
      end
    end
  end
  return v9, v10, true, v11, distanceToTurn
end
function AIDriveStrategyStraight:updateTurnData()
  if self.turnData == nil then
    self.turnData = {}
  end
  local dt = dt:getAttachedAIImplements()
  local vX = vX:getAIDirectionNode()
  local vY = vY:getAIMinTurningRadius()
  self.turnData.radius = self.vehicle.maxTurningRadius * 1.1
  if vY ~= nil then
    local distanceToTurn = math.max(self.turnData.radius, vY)
    self.turnData.radius = distanceToTurn
  end
  for v8, v9 in pairs(dt) do
    local v12 = AIVehicleUtil.getMaxToolRadius(v9)
    local v10 = math.max(...)
  end
  distanceToEndOfField = math.max(self.turnData.radius, vZ)
  self.turnData.radius = distanceToEndOfField
  self.turnData.maxZOffset = -math.huge
  self.turnData.minZOffset = math.huge
  self.turnData.aiAreaMaxX = -math.huge
  self.turnData.aiAreaMinX = math.huge
  for v12, v13 in pairs(dt) do
    if distanceToEndOfField == nil then
    end
    local v14 = v14:getTypeByName(distanceToEndOfField)
    local v15 = v15:getTypeByName(v13.object.typeName)
    if v7 and v15 ~= v14 and v15.parent ~= v14 and v15 ~= v14.parent and v15.parent ~= v14.parent then
    end
    local v16, v17, v18 = v16:getAIMarkers()
    local v19, v20, v21 = localToLocal(v16, vX, 0, 0, 0)
    local v22, v23, v24 = localToLocal(v17, vX, 0, 0, 0)
    local v25, v26, v27 = localToLocal(v18, vX, 0, 0, 0)
    local v28 = math.abs(v19 - v22)
    if v28 < distanceToTurn then
      self.turnData.minAreaImplement = v13
    end
    local v30 = math.min(self.turnData.aiAreaMinX, v19, v22, v25)
    self.turnData.aiAreaMinX = v30
    v30 = math.max(self.turnData.aiAreaMaxX, v19, v22, v25)
    self.turnData.aiAreaMaxX = v30
    v30 = math.max(self.turnData.maxZOffset, v21, v24)
    self.turnData.maxZOffset = v30
    v30 = math.min(self.turnData.minZOffset, v21, v24)
    self.turnData.minZOffset = v30
    local v33 = v33:getAIAreaOverlap()
    if not v33 then
    end
    local v31 = math.min(v32, v33)
    local v29 = math.max(...)
  end
  self.turnData.allImplementsOfSameType = v7
  if self.turnData.maxZOffset == self.turnData.minZOffset then
    self.turnData.zOffset = 2 * self.turnData.maxZOffset
    v10 = math.max(1, 2 * self.turnData.maxZOffset)
    self.turnData.zOffsetTurn = v10
  elseif 0 < self.turnData.maxZOffset then
    -- if v0.turnData.minZOffset >= 0 then goto L372 end
    self.turnData.zOffset = self.turnData.minZOffset + self.turnData.maxZOffset
    v10 = math.max(1, self.turnData.minZOffset + self.turnData.maxZOffset)
    self.turnData.zOffsetTurn = v10
  else
    if 0 < self.turnData.maxZOffset then
      -- if 0 >= v0.turnData.minZOffset then goto L413 end
      self.turnData.zOffset = 2 * self.turnData.maxZOffset
      v10 = math.max(1, 2 * self.turnData.maxZOffset)
      self.turnData.zOffsetTurn = v10
    elseif self.turnData.maxZOffset < 0 and self.turnData.minZOffset < 0 then
      self.turnData.zOffset = self.turnData.minZOffset + self.turnData.maxZOffset
      v10 = math.max(1, self.turnData.minZOffset + self.turnData.maxZOffset)
      self.turnData.zOffsetTurn = v10
    end
  end
  v9, v10, v11 = v9:getAIMarkers()
  v13 = localToLocal(v9, vX, 0, 0, 0)
  self.turnData.sideOffsetLeft = v13
  v13 = localToLocal(v10, vX, 0, 0, 0)
  self.turnData.sideOffsetRight = v13
  if v7 then
    self.turnData.sideOffsetLeft = self.turnData.aiAreaMaxX
    self.turnData.sideOffsetRight = self.turnData.aiAreaMinX
  end
  self.turnData.sideOffsetLeft = self.turnData.sideOffsetLeft - v8 / 2
  self.turnData.sideOffsetRight = self.turnData.sideOffsetRight + v8 / 2
  v14 = math.max(self.turnData.radius, self.turnData.sideOffsetLeft, -self.turnData.sideOffsetRight)
  self.turnData.radius = v14
  if self.turnLeft ~= nil then
    for v17, v18 in pairs(dt) do
      if not v13 then
        v19 = v19:getAIInvertMarkersOnTurn(self.turnLeft)
      end
    end
    if v13 then
      v15 = math.abs(self.turnData.sideOffsetLeft - self.turnData.sideOffsetRight)
      self.turnData.sideOffsetLeft = v15 / 2
      self.turnData.sideOffsetRight = -(v15 / 2)
    end
  end
  if self.turnData.radius >= self.turnData.sideOffsetLeft then
  end
  v13.useExtraStraightLeft = true
  if self.turnData.sideOffsetRight >= -self.turnData.radius then
  end
  v13.useExtraStraightRight = true
  if self.turnData.toolOverhang == nil then
    self.turnData.toolOverhang = {front = {xt = 0, zt = 0, xb = 0, zb = 0}, back = {xt = 0, zt = 0, xb = 0, zb = 0}}
  end
  self.turnData.allToolsAtFront = true
  v15 = math.atan(-(self.vehicle.size.length * 0.75) / (self.vehicle.size.width * 0.5 + self.turnData.radius))
  v16 = math.atan((self.vehicle.size.width * 0.5 + self.turnData.radius) / self.vehicle.size.length * 0.75)
  v20 = math.cos(v15)
  v21 = math.sin(v15)
  v20 = math.cos(v15)
  v21 = math.sin(v16)
  v22 = math.cos(v16)
  v21 = math.sin(v16)
  self.turnData.toolOverhang.front.xt = self.vehicle.size.width * 0.5
  self.turnData.toolOverhang.front.xt = self.vehicle.size.width * 0.5
  self.turnData.toolOverhang.front.zt = self.vehicle.size.length * 0.75
  self.turnData.toolOverhang.front.zt = self.vehicle.size.length * 0.75
  self.turnData.toolOverhang.front.xb = v20 * self.vehicle.size.width * 0.5 - v21 * self.vehicle.size.length * 0.75 + v20 * self.turnData.radius
  self.turnData.toolOverhang.front.xb = v20 * self.vehicle.size.width * 0.5 - v21 * self.vehicle.size.length * 0.75 + v20 * self.turnData.radius
  self.turnData.toolOverhang.front.zb = v21 * self.vehicle.size.width * 0.5 + v22 * self.vehicle.size.length * 0.75 + v21 * self.turnData.radius
  self.turnData.toolOverhang.front.zb = v21 * self.vehicle.size.width * 0.5 + v22 * self.vehicle.size.length * 0.75 + v21 * self.turnData.radius
  v19 = v19:getAIRootNode()
  v20, v21, v22, v23, v24 = v20:getAIAgentSize()
  function(self, dt, vX, vY)
    local vZ, distanceToTurn, distanceToEndOfField = localToLocal(self, u0, dt, vX, vY)
    if u1.turnData.allToolsAtFront and 0 >= distanceToEndOfField then
    end
    v7.allToolsAtFront = v8
    local v7 = math.abs(vZ)
    local v8 = math.abs(distanceToEndOfField)
    local v10 = math.sqrt(v7 * v7 + v8 * v8)
    local v11 = math.sqrt(v7 * v7 + v8 * v8)
    if 0 < distanceToEndOfField then
    end
    local v13 = math.max(v9, u1.turnData.toolOverhang[v11].xb)
    u1.turnData.toolOverhang[v11].xb = v13
    v13 = math.max(v10, u1.turnData.toolOverhang[v11].zb)
    u1.turnData.toolOverhang[v11].zb = v13
    v13 = math.max(v7, u1.turnData.toolOverhang[v11].xt)
    u1.turnData.toolOverhang[v11].xt = v13
    v13 = math.max(v8, u1.turnData.toolOverhang[v11].zt)
    u1.turnData.toolOverhang[v11].zt = v13
  end(v19, (v20 + 0.25) * 0.5, 0, (v21 + 0.75) * 0.5 + v22)
  function(self, dt, vX, vY)
    local vZ, distanceToTurn, distanceToEndOfField = localToLocal(self, u0, dt, vX, vY)
    if u1.turnData.allToolsAtFront and 0 >= distanceToEndOfField then
    end
    v7.allToolsAtFront = v8
    local v7 = math.abs(vZ)
    local v8 = math.abs(distanceToEndOfField)
    local v10 = math.sqrt(v7 * v7 + v8 * v8)
    local v11 = math.sqrt(v7 * v7 + v8 * v8)
    if 0 < distanceToEndOfField then
    end
    local v13 = math.max(v9, u1.turnData.toolOverhang[v11].xb)
    u1.turnData.toolOverhang[v11].xb = v13
    v13 = math.max(v10, u1.turnData.toolOverhang[v11].zb)
    u1.turnData.toolOverhang[v11].zb = v13
    v13 = math.max(v7, u1.turnData.toolOverhang[v11].xt)
    u1.turnData.toolOverhang[v11].xt = v13
    v13 = math.max(v8, u1.turnData.toolOverhang[v11].zt)
    u1.turnData.toolOverhang[v11].zt = v13
  end(v19, -(v20 + 0.25) * 0.5, 0, (v21 + 0.75) * 0.5 + v22)
  function(self, dt, vX, vY)
    local vZ, distanceToTurn, distanceToEndOfField = localToLocal(self, u0, dt, vX, vY)
    if u1.turnData.allToolsAtFront and 0 >= distanceToEndOfField then
    end
    v7.allToolsAtFront = v8
    local v7 = math.abs(vZ)
    local v8 = math.abs(distanceToEndOfField)
    local v10 = math.sqrt(v7 * v7 + v8 * v8)
    local v11 = math.sqrt(v7 * v7 + v8 * v8)
    if 0 < distanceToEndOfField then
    end
    local v13 = math.max(v9, u1.turnData.toolOverhang[v11].xb)
    u1.turnData.toolOverhang[v11].xb = v13
    v13 = math.max(v10, u1.turnData.toolOverhang[v11].zb)
    u1.turnData.toolOverhang[v11].zb = v13
    v13 = math.max(v7, u1.turnData.toolOverhang[v11].xt)
    u1.turnData.toolOverhang[v11].xt = v13
    v13 = math.max(v8, u1.turnData.toolOverhang[v11].zt)
    u1.turnData.toolOverhang[v11].zt = v13
  end(v19, (v20 + 0.25) * 0.5, 0, -(v21 + 0.75) * 0.5 + v22)
  function(self, dt, vX, vY)
    local vZ, distanceToTurn, distanceToEndOfField = localToLocal(self, u0, dt, vX, vY)
    if u1.turnData.allToolsAtFront and 0 >= distanceToEndOfField then
    end
    v7.allToolsAtFront = v8
    local v7 = math.abs(vZ)
    local v8 = math.abs(distanceToEndOfField)
    local v10 = math.sqrt(v7 * v7 + v8 * v8)
    local v11 = math.sqrt(v7 * v7 + v8 * v8)
    if 0 < distanceToEndOfField then
    end
    local v13 = math.max(v9, u1.turnData.toolOverhang[v11].xb)
    u1.turnData.toolOverhang[v11].xb = v13
    v13 = math.max(v10, u1.turnData.toolOverhang[v11].zb)
    u1.turnData.toolOverhang[v11].zb = v13
    v13 = math.max(v7, u1.turnData.toolOverhang[v11].xt)
    u1.turnData.toolOverhang[v11].xt = v13
    v13 = math.max(v8, u1.turnData.toolOverhang[v11].zt)
    u1.turnData.toolOverhang[v11].zt = v13
  end(v19, -(v20 + 0.25) * 0.5, 0, -(v21 + 0.75) * 0.5 + v22)
  v29 = math.atan(1 / self.turnData.radius)
  v28 = math.atan(1 / self.vehicle.maxTurningRadius)
  if 0 <= 1 / self.vehicle.wheelSteeringDuration * v29 / v28 then
  else
  end
  for v31, v32 in pairs(dt) do
    local v35 = v32.object:getAIAllowTurnBackward()
    if not not v35 and v32.object.getAttacherVehicle ~= nil then
      v35 = v32.object:getAttacherVehicle()
      if v35 ~= nil and v35.getAIAllowTurnBackward ~= nil then
        local v36 = v35:getAIAllowTurnBackward()
        if not v36 then
        end
      end
    end
    if not v34 then
      continue
    end
    local v35, v36, v37 = v35:getAIMarkers()
    local v38, v39, v40 = v38:getAISizeMarkers()
    local v41, v42, v43 = localToLocal(v38 or v35, v33.components[1].node, 0, 0, 0)
    local v44, v45, v46 = localToLocal(v39 or v36, v33.components[1].node, 0, 0, 0)
    local v47, v48, v49 = localToLocal(v40 or v37, v33.components[1].node, 0, 0, 0)
    local v51 = math.abs(v41)
    local v52 = math.abs(v44)
    local v53 = math.abs(v47)
    local v50 = math.max(...)
    v53 = math.abs(v43)
    local v54 = math.abs(v46)
    local v55 = math.abs(v49)
    v51 = math.min(-v53, -v54, -v55)
    if not v33.getActiveInputAttacherJoint then
      continue
    end
    v52 = v33:getActiveInputAttacherJoint()
    v53, v54, v55 = localToLocal(v33.components[1].node, v52.node, v50, 0, v51)
    local v58 = math.cos(-v27)
    local v59 = math.sin(-v27)
    v59 = math.sin(-v27)
    local v60 = math.cos(-v27)
    v58, v59, v60 = localToLocal(v33.components[1].node, vX, v55 * v58 - -v53 * v59, 0, v55 * v59 + -v53 * v60)
    local v62 = math.max(self.turnData.toolOverhang.back.xb, v58 + self.turnData.radius)
    self.turnData.toolOverhang.back.xb = v62
    local v61, v62, v63 = localToLocal(v38 or v35, vX, 0, 0, 0)
    local v64, v65, v66 = localToLocal(v39 or v36, vX, 0, 0, 0)
    local v67, v68, v69 = localToLocal(v40 or v37, vX, 0, 0, 0)
    local v73 = math.abs(v61)
    local v74 = math.abs(v64)
    local v71 = math.max(...)
    self.turnData.toolOverhang.back.xt = v71
    v71 = math.max(self.turnData.toolOverhang.back.zt, -v69)
    self.turnData.toolOverhang.back.zt = v71
    local v70, v71, v72 = v33:getAITurnRadiusLimitation()
    if v71 ~= nil then
      for v77, v78 in pairs(v72) do
        if not (v78.steeringAxleScale ~= 0) then
          continue
        end
        if not (v78.steeringAxleRotMax ~= 0) then
          continue
        end
        local v81 = math.abs(v78.steeringAxleRotMax)
        local v79 = math.max(...)
      end
    end
    if not (v73 ~= 0) then
      continue
    end
    if not (v71 ~= nil) then
      continue
    end
    if not (v71 ~= nil) then
      continue
    end
    if not (0 < #v72) then
      continue
    end
    for v80, v81 in pairs(v72) do
      local v82, v83, v84 = localToLocal(v81.repr, v33.components[1].node, 0, 0, 0)
    end
    v79 = math.sqrt((v50 - v75 / v74) * (v50 - v75 / v74) + (v51 - v76 / v74) * (v51 - v76 / v74))
    v82 = math.max(self.turnData.toolOverhang.back.xb, v79 + self.turnData.radius)
    self.turnData.toolOverhang.back.xb = v82
  end
  for v31, v32 in pairs(dt) do
    local v33, v34, v35 = v33:getAIMarkers()
    v36, v37, v38 = localToLocal(v33, vX, 0, 0, 0)
    v32.distToVehicle = v38
  end
  table.sort(dt, function(self, dt)
    if dt.distToVehicle >= self.distToVehicle then
    end
    return true
  end)
  if self.lastTurnData == nil then
    self.lastTurnData = {radius = self.turnData.radius, maxZOffset = self.turnData.maxZOffset, minZOffset = self.turnData.minZOffset, aiAreaMaxX = self.turnData.aiAreaMaxX, aiAreaMinX = self.turnData.aiAreaMinX, sideOffsetLeft = self.turnData.sideOffsetLeft, sideOffsetRight = self.turnData.sideOffsetRight}
    return
  end
  v29 = v29:getLastSpeed()
  if 2 < v29 then
    v29 = math.abs(self.lastTurnData.radius - self.turnData.radius)
    if v29 < 0.03 then
      v29 = math.abs(self.lastTurnData.maxZOffset - self.turnData.maxZOffset)
      if v29 < 0.03 then
        v29 = math.abs(self.lastTurnData.minZOffset - self.turnData.minZOffset)
        if v29 < 0.03 then
          v29 = math.abs(self.lastTurnData.aiAreaMaxX - self.turnData.aiAreaMaxX)
          if v29 < 0.03 then
            v29 = math.abs(self.lastTurnData.aiAreaMinX - self.turnData.aiAreaMinX)
            if v29 < 0.03 then
              v29 = math.abs(self.lastTurnData.sideOffsetLeft - self.turnData.sideOffsetLeft)
              if v29 < 0.03 then
                v29 = math.abs(self.lastTurnData.sideOffsetRight - self.turnData.sideOffsetRight)
                if v29 < 0.03 then
                  self.turnDataIsStableCounter = self.turnDataIsStableCounter + 1
                  -- if 120 >= v0.turnDataIsStableCounter then goto L1605 end
                  self.turnDataIsStable = true
                  return
                end
              end
            end
          end
        end
      end
    end
  end
  self.lastTurnData.radius = self.turnData.radius
  self.lastTurnData.maxZOffset = self.turnData.maxZOffset
  self.lastTurnData.minZOffset = self.turnData.minZOffset
  self.lastTurnData.aiAreaMaxX = self.turnData.aiAreaMaxX
  self.lastTurnData.aiAreaMinX = self.turnData.aiAreaMinX
  self.lastTurnData.sideOffsetLeft = self.turnData.sideOffsetLeft
  self.lastTurnData.sideOffsetRight = self.turnData.sideOffsetRight
  self.turnDataIsStableCounter = 0
end
