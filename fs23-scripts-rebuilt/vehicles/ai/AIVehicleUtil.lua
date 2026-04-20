-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIVehicleUtil = {VALID_AREA_THRESHOLD = 0.02, AREA_OVERLAP = 0.26}
function AIVehicleUtil:driveToPoint(v1, v2, v3, v4, v5, v6, v7, v8)
  if self.finishedFirstUpdate then
    if v3 then
      if 0 < v5 then
      end
      local v13, v14, v15 = MathUtil.getLineLineIntersection2D(v9, v10, v11, v12, 0, 0, v5, 0)
      if v8 ~= nil then
        -- if v8 then goto L145 end
      end
      if v13 then
        local v17 = math.abs(v15)
        if v17 < 100000 then
          local v18 = self:getSteeringRotTimeByCurvature(1 / v5 * v15)
          v18 = self:getReverserDirection()
          if v18 < 0 then
          end
        end
      end
      if 0 <= v16 then
        v18 = math.min(v16, self.maxRotTime)
      else
        v18 = math.max(v16, self.minRotTime)
      end
      if self.rotatedTime < v17 then
        local v22 = self:getAISteeringSpeed()
        v18 = math.min(self.rotatedTime + v1 * v22, v17)
        self.rotatedTime = v18
      else
        v22 = self:getAISteeringSpeed()
        v18 = math.max(self.rotatedTime - v1 * v22, v17)
        self.rotatedTime = v18
      end
      local v20 = math.abs(v17 - self.rotatedTime)
      local v21 = math.max(self.maxRotTime, -self.minRotTime)
      v22 = math.pow(v20 / v21, 0.25)
      if v7 * (1 - v22) < 1 then
      end
    end
    local v9 = self:getMotor()
    v13 = self:getCruiseControlSpeed()
    local v11 = math.min(...)
    v9:setSpeedLimit(...)
    v9 = self:getCruiseControlState()
    if v9 ~= Drivable.CRUISECONTROL_STATE_ACTIVE then
      self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_ACTIVE)
    end
    if not v3 then
    end
    if not v4 then
    end
    WheelsUtil.updateWheelsPhysics(self, v1, self.lastSpeedReal * self.movingDirection, v2, not v3, true)
  end
end
function AIVehicleUtil:driveAlongCurvature(v1, v2, v3, v4)
  local v6 = self:getSteeringRotTimeByCurvature(v2)
  local v7 = self:getSteeringDirection()
  self.rotatedTime = -(v6 * v7)
  if self.finishedFirstUpdate then
    if v3 ~= nil then
      -- if 0 >= v3 then goto L40 end
      v7 = self:getMotor()
      v7:setSpeedLimit(v3)
      v7 = self:getCruiseControlState()
      -- if v7 == Drivable.CRUISECONTROL_STATE_ACTIVE then goto L41 end
      self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_ACTIVE)
    else
    end
    if 0 >= v3 then
    end
    v7(v8, v9, v10, v11, true, true)
  end
end
function AIVehicleUtil:driveInDirection(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
  if v8 ~= nil and v9 ~= nil then
    local v14 = math.acos(v9)
    local v13 = math.deg(...)
    if v13 < 0 then
    end
    if 0.00001 >= v8 then
    end
    if not v7 then
    end
    if v13 then
      local v16 = math.min(v12 / v2, 1)
    else
      v16 = math.min(v12 / v2, 1)
    end
    if self.rotatedTime < v14 then
      local v19 = self:getAISteeringSpeed()
      local v15 = math.min(self.rotatedTime + v1 * v19, v14)
      self.rotatedTime = v15
    else
      v19 = self:getAISteeringSpeed()
      v15 = math.max(self.rotatedTime - v1 * v19, v14)
      self.rotatedTime = v15
    end
  end
  if self.finishedFirstUpdate then
    if v10 ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R10 aux=0x11 -> L120
      v14 = math.abs(v12)
      if v5 <= v14 then
      end
      v14:setSpeedLimit(v10)
      -- if v0.cruiseControl.state == Drivable.CRUISECONTROL_STATE_ACTIVE then goto L128 end
      self:setCruiseControlState(Drivable.CRUISECONTROL_STATE_ACTIVE)
    else
      v14 = math.abs(v12)
      if v5 <= v14 then
      end
    end
    if not v6 then
    end
    if not v7 then
    end
    WheelsUtil.updateWheelsPhysics(self, v1, self.lastSpeedReal * self.movingDirection, v13, not v6, true)
  end
end
function AIVehicleUtil.getDriveDirection(v0, v1, v2, v3)
  local v4, v5, v6 = worldToLocal(v0, v1, v2, v3)
  local v7 = MathUtil.vector2Length(v4, v6)
  if 0.00001 < v7 then
  end
  return v4, v6
end
function AIVehicleUtil.getAverageDriveDirection(v0, v1, v2, v3, v4, v5, v6)
  local v7, v8, v9 = worldToLocal(v0, (v1 + v4) * 0.5, (v2 + v5) * 0.5, (v3 + v6) * 0.5)
  local v10 = MathUtil.vector2Length(v7, v9)
  if 0.00001 < v10 then
  end
  return v7, v9, v10
end
function AIVehicleUtil:getAttachedImplementsAllowTurnBackward()
  if self.getAIAllowTurnBackward ~= nil then
    local v1 = self:getAIAllowTurnBackward()
    if not v1 then
      return false
    end
  end
  if self.getAttachedImplements ~= nil then
    local v2 = self:getAttachedImplements()
    for v4, v5 in pairs(...) do
      if not (v5.object ~= nil) then
        continue
      end
      if v5.object.getAIAllowTurnBackward ~= nil then
        local v7 = v5.object:getAIAllowTurnBackward()
        if not v7 then
          return false
        end
      end
      v7 = AIVehicleUtil.getAttachedImplementsAllowTurnBackward(v6)
      if not not v7 then
        continue
      end
      return false
    end
  end
  return true
end
function AIVehicleUtil:getAttachedImplementsBlockTurnBackward()
  if self.getAIBlockTurnBackward ~= nil then
    local v1 = self:getAIBlockTurnBackward()
    if v1 then
      return true
    end
  end
  if self.getAttachedImplements ~= nil then
    local v2 = self:getAttachedImplements()
    for v4, v5 in pairs(...) do
      if not (v5.object ~= nil) then
        continue
      end
      if v5.object.getAIBlockTurnBackward ~= nil then
        local v7 = v5.object:getAIBlockTurnBackward()
        if v7 then
          return true
        end
      end
      v7 = AIVehicleUtil.getAttachedImplementsBlockTurnBackward(v6)
      if not v7 then
        continue
      end
      return true
    end
  end
  return false
end
function AIVehicleUtil:getAttachedImplementsMaxTurnRadius()
  if self.getAttachedImplements ~= nil then
    local v3 = self:getAttachedImplements()
    for v5, v6 in pairs(...) do
      if not (v6.object ~= nil) then
        continue
      end
      if v6.object.getAITurnRadiusLimitation ~= nil then
        local v8 = v6.object:getAITurnRadiusLimitation()
        if v8 ~= nil and v1 < v8 then
        end
      end
      v8 = AIVehicleUtil.getAttachedImplementsMaxTurnRadius(v7)
      if not (v1 < v8) then
        continue
      end
    end
  end
  return v1
end
function AIVehicleUtil:getAIToolReverserDirectionNode()
  local v2 = self:getAttachedImplements()
  for v4, v5 in pairs(...) do
    if not (v5.object ~= nil) then
      continue
    end
    if not (v5.object.getAIToolReverserDirectionNode ~= nil) then
      continue
    end
    local v6 = v6:getAIToolReverserDirectionNode()
    local v7 = AIVehicleUtil.getAIToolReverserDirectionNode(v5.object)
    if not ((v6 or v7) ~= nil) then
      continue
    end
    return v6 or v7
  end
end
function AIVehicleUtil:getMaxToolRadius()
  local v2, v3, v4, v5 = v2:getAITurnRadiusLimitation()
  local v7 = AIVehicleUtil.getAttachedImplementsMaxTurnRadius(self.object.rootVehicle)
  if v7 ~= -1 then
  end
  if v3 then
    local v8 = v8:getActiveInputAttacherJoint()
    local v11 = v11:getInputAttacherJoints()
    for v13, v14 in pairs(...) do
      if not (v9 == v14.node) then
        continue
      end
      break
    end
    v10, v11, v12 = localToLocal(v9, self.object.components[1].node, 0, 0, 0)
    for v16, v17 in pairs(v4) do
      local v18, v19, v20 = localToLocal(v17.repr, self.object.components[1].node, 0, 0, 0)
      if v9 == v8.node then
        local v24 = v24:getAttacherVehicle()
        local v25 = v24:getAttacherJointDescFromObject(self.object)
        local v26 = math.max(v25.upperRotLimit[2], v25.lowerRotLimit[2])
      else
        for v27, v28 in pairs(self.object.componentJoints) do
          if not (v9 == v28.jointNode) then
            continue
          end
          break
        end
      end
      v26 = math.cos(v23 * v5)
      v27 = math.sin(v23 * v5)
      v27 = math.sin(v23 * v5)
      v28 = math.cos(v23 * v5)
      if v17.steeringAxleScale ~= 0 and v17.steeringAxleRotMax ~= 0 then
        local v31 = math.cos(v17.steeringAxleRotMax)
        local v32 = math.sin(v17.steeringAxleRotMax)
        v31 = math.sin(v17.steeringAxleRotMax)
        v32 = math.cos(v17.steeringAxleRotMax)
      end
      local v28, v29, v30 = MathUtil.getLineLineIntersection2D(0, 0, 1, 0, v24, v25, v26, v27)
      if not v28 then
        continue
      end
      local v33 = math.abs(v29)
      v31 = math.max(...)
    end
  end
  return v1
end
function AIVehicleUtil:updateInvertLeftRightMarkers(v1)
  if v1.getAIMarkers ~= nil then
    local v2, v3, v4 = v1:getAIMarkers()
    if v2 ~= nil and v3 ~= nil then
      local v7 = self:getAIDirectionNode()
      local v5, v6, v7 = localToLocal(v2, v7, 0, 0, 0)
      local v10 = self:getAIDirectionNode()
      local v8, v9, v10 = localToLocal(v3, v10, 0, 0, 0)
      if v5 < v8 then
        v1:setAIMarkersInverted()
      end
    end
  end
end
function AIVehicleUtil:getValidityOfTurnDirections(v1)
  local v2 = self:getAIDirectionNode()
  local v3 = self:getAttachedAIImplements()
  for v11, v12 in pairs(v3) do
    local v13, v14, v15 = v13:getAIMarkers()
    local v16, v17, v18 = localToLocal(v13, v2, 0, 0, 0)
    local v19, v20, v21 = localToLocal(v14, v2, 0, 0, 0)
    local v22, v23, v24 = localToLocal(v15, v2, 0, 0, 0)
    local v25 = math.min(v6, v18, v21, v24)
    v25 = math.max(v7, v18, v21, v24)
  end
  if v1 == nil then
    for v13, v14 in pairs(v3) do
      v15, v16, v17 = v15:getAIMarkers()
      v18, v19, v20 = localToLocal(v15, v2, 0, 0, 0)
      v21, v22, v23 = localToLocal(v16, v2, 0, 0, 0)
      local v26 = math.abs(v18 - v21)
      v24 = math.min(...)
    end
  else
    v9 = math.abs(v1.sideOffsetRight - v1.sideOffsetLeft)
  end
  for v16, v17 in pairs(v3) do
    v18, v19, v20 = v18:getAIMarkers()
    v21, v22, v23 = localToLocal(v18, v2, 0, 0, 0)
    v24, v25, v26 = localToLocal(v19, v2, 0, 0, 0)
    local v27 = math.abs(v21 - v24)
    local v30 = math.max(v8 * 1.3 + 2, 5)
    local v29, v30, v31 = localToWorld(v2, v21, v22, v7 + 5)
    v29, v30, v31 = localToWorld(v2, v24, v25, v7 + 5)
    local v41, v42 = AIVehicleUtil.getAIAreaOfVehicle(v17.object, v29, v31, v29 - v11 * v27, v31 - v12 * v27, v29 - v9 * (5 + v7 - v6 + v30), v31 - v10 * (5 + v7 - v6 + v30), false)
    local v43, v44 = AIVehicleUtil.getAIAreaOfVehicle(v17.object, v29, v31, v29 + v11 * v27, v31 + v12 * v27, v29 - v9 * (5 + v7 - v6 + v30), v31 - v10 * (5 + v7 - v6 + v30), false)
    if 0 < v42 then
    end
    if 0 < v44 then
    end
    if not (VehicleDebug.state == VehicleDebug.DEBUG_AI) then
      continue
    end
    local v46 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v29, 0, v30)
    local v47 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v31, 0, v32)
    local v48 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v33, 0, v34)
    local v49 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v35, 0, v36)
    local v50 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v37, 0, v38)
    local v51 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v39, 0, v40)
    self:addAIDebugLine({v29, v46 + 2, v30}, {v31, v47 + 2, v32}, {0.5, 0.5, 0.5})
    self:addAIDebugLine({v29, v46 + 2, v30}, {v33, v48 + 2, v34}, {0.5, 0.5, 0.5})
    self:addAIDebugLine({v35, v49 + 2, v36}, {v37, v50 + 2, v38}, {0.5, 0.5, 0.5})
    self:addAIDebugLine({v35, v49 + 2, v36}, {v39, v51 + 2, v40}, {0.5, 0.5, 0.5})
  end
  return v4 / #v3, v5 / #v3
end
function AIVehicleUtil:checkImplementListForValidGround(v1, v2)
  local v5 = self:getAttachedAIImplements()
  for v7, v8 in pairs(...) do
    local v9, v10, v11 = v9:getAIMarkers()
    local v12, v13, v14 = getWorldTranslation(v9)
    local v15, v16, v17 = getWorldTranslation(v10)
    local v20, v21 = AIVehicleUtil.getAIAreaOfVehicle(v8.object, v12 + self.aiDriveDirection[1] * v1, v14 + self.aiDriveDirection[2] * v1, v15 + self.aiDriveDirection[1] * v1, v17 + self.aiDriveDirection[2] * v1, v12 + self.aiDriveDirection[1] * v1 + self.aiDriveDirection[1] * v2, v14 + self.aiDriveDirection[2] * v1 + self.aiDriveDirection[2] * v2)
    if VehicleDebug.state == VehicleDebug.DEBUG_AI then
      local v24 = string.format("area=%.1f areaTotal=%.1f", v20, v21)
      self:addAIDebugText(...)
      local v23 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v12 + self.aiDriveDirection[1] * v1, 0, v14 + self.aiDriveDirection[2] * v1)
      v24 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v15 + self.aiDriveDirection[1] * v1, 0, v17 + self.aiDriveDirection[2] * v1)
      local v25 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v12 + self.aiDriveDirection[1] * v1 + self.aiDriveDirection[1] * v2, 0, v14 + self.aiDriveDirection[2] * v1 + self.aiDriveDirection[2] * v2)
      self:addAIDebugLine({v12 + self.aiDriveDirection[1] * v1, v23 + 2, v14 + self.aiDriveDirection[2] * v1}, {v15 + self.aiDriveDirection[1] * v1, v24 + 2, v17 + self.aiDriveDirection[2] * v1}, {1, 0, 0})
      self:addAIDebugLine({v12 + self.aiDriveDirection[1] * v1, v23 + 2, v14 + self.aiDriveDirection[2] * v1}, {v12 + self.aiDriveDirection[1] * v1 + self.aiDriveDirection[1] * v2, v25 + 2, v14 + self.aiDriveDirection[2] * v1 + self.aiDriveDirection[2] * v2}, {1, 0, 0})
    end
    if not v3 and 0 >= v20 then
    end
  end
  return v3
end
function AIVehicleUtil.getAreaDimensions(directionX, directionZ, leftNode, rightNode, xOffset, zOffset, areaSize, invertXOffset)
  if invertXOffset ~= nil then
    -- if not v7 then goto L6 end
  end
  local v10, v11, v12 = localToWorld(leftNode, -v8, 0, zOffset)
  local v13, v14, v15 = localToWorld(rightNode, v9, 0, zOffset)
  return v10 - 0.5 * directionX, v12 - 0.5 * directionZ, v13 - 0.5 * directionX, v15 - 0.5 * directionZ, v10 + areaSize * directionX, v12 + areaSize * directionZ
end
function AIVehicleUtil:getIsAreaOwned(v1, v2, v3, v4, v5, v6)
  local v7 = self:getAIJobFarmId()
  local v10 = v10:getIsOwnedByFarmAtWorldPosition(v7, (v1 + v3) * 0.5, (v2 + v4) * 0.5)
  if v10 then
    return true
  end
  v10 = v10:getIsMissionWorkAllowed(v7, v8, v9, nil)
  if v10 then
    return true
  end
  return false
end
function AIVehicleUtil:getAIAreaOfVehicle(v1, v2, v3, v4, v5, v6)
  local v9 = self:getAIDensityHeightTypeRequirements()
  if 0 >= #v9 then
  end
  if not true then
    local v8, v9 = self:getFieldCropsQuery()
    if v9 then
      return AIVehicleUtil.getAIFruitArea(v1, v2, v3, v4, v5, v6, v8)
    end
    return 0, 0
  end
  v8 = self:getAIDensityHeightTypeRequirements()
  v9 = AIVehicleUtil.getAIDensityHeightArea(v1, v2, v3, v4, v5, v6, v8)
  return v9
end
function AIVehicleUtil.getAIFruitArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, query)
  local v7, v8, v9, v10, v11, v12 = MathUtil.getXZWidthAndHeight(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  return query:getParallelogram(v7, v8, v9, v10, v11, v12, false)
end
function AIVehicleUtil.getAIDensityHeightArea(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ, densityHeightTypeRequirements)
  local v7, v8, v9 = FSDensityMapUtil.getFieldDensity(startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  if v8 == 0 then
    return 0, 0
  end
  for v15, v16 in pairs(densityHeightTypeRequirements) do
    if not (v16.fillType ~= FillType.UNKNOWN) then
      continue
    end
    local v17, v18, v19 = DensityMapHeightUtil.getFillLevelAtArea(v16.fillType, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  end
  return v10, v11
end
