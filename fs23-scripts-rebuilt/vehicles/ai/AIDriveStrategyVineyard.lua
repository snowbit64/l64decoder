-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDriveStrategyVineyard = {}
local v0 = Class(AIDriveStrategyVineyard, AIDriveStrategy)
function AIDriveStrategyVineyard.new(v0)
  if not v0 then
  end
  local v1 = v1(v2)
  v1.firstUpdate = true
  v1.isTurning = false
  v1.turnData = {radius = 0, maxZOffset = 0, minZOffset = 0, aiAreaMaxX = 0, aiAreaMinX = 0, sideOffsetLeft = 0, sideOffsetRight = 0, useExtraStraightLeft = false, useExtraStraightRight = false}
  v1.gabAllowTurnLeft = true
  v1.gabAllowTurnRight = true
  v1.lastValidTurnLeftPosition = {0, 0, 0}
  v1.lastValidTurnRightPosition = {0, 0, 0}
  v1.turnLeft = false
  v1.useSegmentSide = false
  return v1
end
function AIDriveStrategyVineyard:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  v2 = v2:getAttachedAIImplements()
  for v4, v5 in ipairs(...) do
    v6:aiImplementEndLine()
    v5.object.rootVehicle:raiseStateChange(Vehicle.STATE_CHANGE_AI_END_LINE)
  end
end
function AIDriveStrategyVineyard:setAIVehicle(v1)
  local v3 = v3:superClass()
  v3.setAIVehicle(self, v1)
  local v2 = AIVehicleUtil.getAttachedImplementsAllowTurnBackward(v1)
  self.allowTurnBackward = v2
  if self.allowTurnBackward then
    v2 = AITurnStrategyVineyard.new(self)
    self.turnStrategy = v2
  else
    v2 = AITurnStrategyVineyardBulb.new(self)
    self.turnStrategy = v2
  end
  v2 = v2:getAIDirectionNode()
  self.xOffset = 0
  self.zOffset = 0
  v3 = v3:getAttachedAIImplements()
  -- TODO: structure LOP_FORNPREP (pc 51, target 126)
  local v8, v9, v10, v11 = v8:getAIMarkers()
  local v12, v13, v14 = localToLocal(v8, v3[1].object.rootNode, 0, 0, 0)
  local v15, v16, v17 = localToLocal(v9, v3[1].object.rootNode, 0, 0, 0)
  local v18, v19, v20 = localToLocal(v10, v3[1].object.rootNode, 0, 0, 0)
  self.xOffset = (v12 + v15 + v18) / 3
  local v21, v22, v23 = localToLocal(v8, v2, 0, 0, 0)
  local v24, v25, v26 = localToLocal(v9, v2, 0, 0, 0)
  local v27, v28, v29 = localToLocal(v10, v2, 0, 0, 0)
  self.zOffset = (v23 + v26 + v29) / 3
  -- TODO: structure LOP_FORNLOOP (pc 125, target 52)
  local v4, v5, v6, v7 = v4:getAIAgentSize()
  v12 = math.max(self.zOffset, v7)
  v8, v9, v10 = localToWorld(...)
  v11, v12, v13, v14, v15 = AIDriveStrategyVineyard.getInitialVineSegment(self, v8, v9, v10)
  if v11 == nil then
    v16, v17, v18, v19, v20 = AIDriveStrategyVineyard.getInitialVineSegment(self, v8, v9, v10, nil, true)
    if v16 ~= nil then
      v26 = v26:getAIJobFarmId()
      v24 = v24:canFarmAccessLand(v26, (v16.spec_fence.segments[v17].x1 + v16.spec_fence.segments[v17].x2) * 0.5, (v16.spec_fence.segments[v17].z1 + v16.spec_fence.segments[v17].z2) * 0.5)
      if not v24 then
        self.invalidAccessSegmentFound = true
      end
    end
  end
  self.placeable = v11
  self.segmentIndex = v12
  self.segmentDirection = v13
  self.segmentMinDistance = v14
  self.segmentSide = v15
  v16:setAIVehicle(v1)
  self:updateAIDriveTarget()
end
function AIDriveStrategyVineyard:update(v1)
  v2:update(v1)
end
function AIDriveStrategyVineyard.updateTurnData(v0)
end
function AIDriveStrategyVineyard:getSegmentTranslation(v1, v2, v3)
  if v2 < 0 then
  end
  if self.placeable ~= nil then
    local v9 = v9:getSnapDistance()
  end
  if self.useSegmentSide then
    if not v3 then
    end
    local v9, v10 = MathUtil.vector2Normalize(v1.x2 - v1.x1, v1.z2 - v1.z1)
  end
  v9, v10 = MathUtil.vector2Normalize(v6 - v4, v7 - v5)
  local v11 = math.abs(self.xOffset)
  if 0.025 < v11 then
  end
  v11 = math.abs(self.zOffset)
  if 0.025 < v11 then
  end
  return v4, v5, v6, v7
end
function AIDriveStrategyVineyard:updateAIDriveTarget()
  if self.vehicle.aiDriveTarget == nil then
    self.vehicle.aiDriveTarget = {0, 0}
  end
  if self.vehicle.aiDriveDirection == nil then
    self.vehicle.aiDriveDirection = {0, 1}
  end
  if self.placeable ~= nil and self.placeable.spec_fence.segments[self.segmentIndex] ~= nil then
    local v2, v3, v4, v5 = self:getSegmentTranslation(self.placeable.spec_fence.segments[self.segmentIndex], self.segmentDirection)
    self.vehicle.aiDriveTarget[1] = v2
    self.vehicle.aiDriveTarget[2] = v3
    local v8, v9 = MathUtil.vector2Normalize(v4 - v2, v5 - v3)
    self.vehicle.aiDriveDirection[1] = v8
    self.vehicle.aiDriveDirection[2] = v9
  end
end
function AIDriveStrategyVineyard:updateImplementLineState()
  if self.placeable ~= nil and self.placeable.spec_fence.segments[self.segmentIndex] ~= nil then
    if self.segmentDirection < 0 then
    end
    local v6, v7 = MathUtil.vector2Normalize(v4 - v2, v5 - v3)
    local v8 = v8:getAttachedAIImplements()
    -- TODO: structure LOP_FORNPREP (pc 53, target 148)
    local v13, v14, v15, v16 = v13:getAIMarkers()
    local v17, v18, v19 = localToLocal(v13, v15, 0, 0, 0)
    local v20, v21, v22 = getWorldTranslation(v15)
    local v23, v24, v25, v26 = MathUtil.getClosestPointOnLineSegment(v2 - v6 * 1, 0, v3 - v7 * 1, v4 - v6 * v19, 0, v5 - v7 * v19, v20, 0, v22)
    if 0 < v26 then
      -- if v26 >= 1 then goto L120 end
      if v8[1].aiStartLineCalled ~= nil then
        -- if v8[1].aiStartLineCalled then goto L147 end
      end
      v12.aiStartLineCalled = true
      v12.aiEndLineCalled = nil
      v27:aiImplementStartLine()
      v27:raiseStateChange(Vehicle.STATE_CHANGE_AI_START_LINE)
    else
      if v8[1].aiEndLineCalled ~= nil then
        -- if v8[1].aiEndLineCalled then goto L147 end
      end
      v12.aiEndLineCalled = true
      v12.aiStartLineCalled = nil
      v27:aiImplementEndLine()
      v27:raiseStateChange(Vehicle.STATE_CHANGE_AI_END_LINE)
    end
    -- TODO: structure LOP_FORNLOOP (pc 147, target 54)
  end
end
function AIDriveStrategyVineyard:getDriveData(v1, v2, v3, v4)
  self:updateImplementLineState()
  if self.isTurning then
    local v5, v6, v7, v8, v9 = v5:getDriveData(v1, v2, v3, v4, self.turnData)
    if v5 ~= nil then
      return v5, v6, v7, v8, v9
    end
    v10:onEndTurn(self.turnLeft)
    self.isTurning = false
    self.turnLeft = not self.turnLeft
    self.segmentIndex = self.nextSegmentIndex
    self.segmentSide = self.nextSegmentSide
    self:updateAIDriveTarget()
    if self.placeable ~= nil then
    end
    if v10 ~= nil then
      local v15 = v15:getAIJobFarmId()
      local v13 = v13:canFarmAccessLand(v15, (v10.x1 + v10.x2) * 0.5, (v10.z1 + v10.z2) * 0.5)
      if not v13 then
        v15 = AIMessageErrorFieldNotOwned.new()
        v13:stopCurrentAIJob(...)
        self:debugPrint("Stopping AIVehicle - next vine segment not owned")
        return 0, 0, true, 0, 0
      end
    end
  end
  if self.firstUpdate then
    if self.placeable ~= nil then
    end
    if v5 ~= nil then
      local v10 = v10:getAIJobFarmId()
      v8 = v8:canFarmAccessLand(v10, (v5.x1 + v5.x2) * 0.5, (v5.z1 + v5.z2) * 0.5)
      -- if v8 then goto L189 end
      v10 = AIMessageErrorFieldNotOwned.new()
      v8:stopCurrentAIJob(...)
      self:debugPrint("Stopping AIVehicle - vine segment not owned")
      return 0, 0, true, 0, 0
    elseif self.invalidAccessSegmentFound then
      v8 = AIMessageErrorFieldNotOwned.new()
      v6:stopCurrentAIJob(...)
      self:debugPrint("Stopping AIVehicle - closest segment not owned")
      return 0, 0, true, 0, 0
    end
    if self.segmentMinDistance ~= 0 then
      v7 = v7:getAIDirectionNode()
      v6, v7, v8 = getWorldTranslation(...)
      if v5 ~= nil then
        if 0 < self.segmentDirection then
        else
        end
      end
      if v9 == 0 and v10 == 0 then
        v13 = AIMessageErrorNoVineFound.new()
        v11:stopCurrentAIJob(...)
        self:debugPrint("Stopping AIVehicle - unable to find vine segments")
        return 0, 0, true, 0, 0
      end
      local v12 = v12:getAIDirectionNode()
      local v11, v12, v13 = worldToLocal(v12, v9, v7, v10)
      local v14 = MathUtil.vector2Length(v9 - v6, v10 - v8)
      v15 = math.abs(v11)
      if 3.5 >= v15 and v13 >= 0 then
        -- if 20 >= v14 then goto L292 end
      end
      local v17 = AIMessageErrorNoVineFound.new()
      v15:stopCurrentAIJob(...)
      self:debugPrint("Stopping AIVehicle - vine segments too far away (x %.2f/3.5, z %.2f/0, distance %.2f/20)", v11, v13, v14)
      return 0, 0, true, 0, 0
      self.firstUpdate = false
    end
  end
  v5, v6, v7 = v5:getCanAIFieldWorkerContinueWork()
  if not v5 then
    if v6 then
      if not v7 then
        v10 = AIMessageErrorUnknown.new()
      end
      v8:stopCurrentAIJob(v10)
      self:debugPrint("Stopping AIVehicle - cannot continue work")
    end
    return 0, 0, true, 0, 0
  end
  if self.placeable ~= nil then
    -- if not v0.placeable.isDeleted then goto L354 end
  end
  v15 = AIMessageErrorNoVineFound.new()
  v13:stopCurrentAIJob(...)
  self:debugPrint("Stopping AIVehicle - placeable no longer available")
  return 0, 0, true, 0, 0
  if self.placeable.spec_fence.segments[self.segmentIndex] ~= nil then
    local v14, v15, v16, v17 = self:getSegmentTranslation(self.placeable.spec_fence.segments[self.segmentIndex], self.segmentDirection)
    local v18, v19 = MathUtil.vector2Normalize(v16 - v14, v17 - v15)
    local v20, v21, v22, v23 = MathUtil.getClosestPointOnLineSegment(v14 - v18 * 30, 0, v15 - v19 * 30, v16, 0, v17, v2, 0, v4)
    if 0 < v23 then
      local v26 = MathUtil.vector2Length(v16 - v20, v17 - v22)
      if v26 < 5 then
        v26 = math.max(v11 * v26 / 5, 2)
      end
      -- cmp-jump LOP_JUMPXEQKN R23 aux=0x80000047 -> L437
    else
      v26 = MathUtil.vector2Length(v14 - v18 * 30 - v2, v15 - v19 * 30 - v4)
      if v26 < 3 then
      else
      end
    end
    if v25 then
      local v26, v27 = self:getNextSegment(self.segmentIndex, self.segmentSide, 1)
      self.nextSegmentIndex = v26
      self.nextSegmentSide = v27
      v26 = v26:startTurn(self)
      if v26 then
        self.isTurning = true
      else
        local v28 = AIMessageSuccessFinishedJob.new()
        v26:stopCurrentAIJob(...)
        self:debugPrint("Stopping AIVehicle - no further segment found")
      end
    end
    -- if VehicleDebug.state ~= VehicleDebug.DEBUG_AI then goto L722 end
    v26:addAIDebugText("== AIDriveStrategyVineyard ==")
    v28 = string.format("Segment: %.1f,%.1f -> %.1f,%.1f (dir %d)", v13.x1, v13.z1, v13.x2, v13.z2, self.segmentDirection)
    v26:addAIDebugText(...)
    v28 = string.format("Segment Position: %.1f%%, Distance to end: %.2f", v23 * 100, v24 or -1)
    v26:addAIDebugText(...)
    v28 = string.format("Turn Radius: %.2f | Offset: X %.1f Z %.1f", self.vehicle.maxTurningRadius, self.xOffset, self.zOffset)
    v26:addAIDebugText(...)
    DebugUtil.drawDebugGizmoAtWorldPos(v8, 0, v9, 0, 1, 0, 0, 0, 1, "Target", true)
    {}[self.segmentIndex] = true
    -- if v0.useSegmentSide then goto L722 end
    -- TODO: structure LOP_FORNPREP (pc 569, target 722)
    local v35, v36 = self:getNextSegment(self.segmentIndex, 1, 1, {})
    -- cmp-jump LOP_JUMPXEQKNIL R29 aux=0x0 -> L722
    local v36, v37 = self.turnStrategy.generateTurnSegments(self, self.vehicle, self.placeable, self.placeable.spec_fence.segments, self.segmentIndex, v35, v36, self.segmentDirection)
    self.turnSegments = v36
    AITurnStrategy.drawTurnSegments(self.turnSegments)
    local v36, v37, v38, v39 = self:getSegmentTranslation(self.placeable.spec_fence.segments[v35], v37)
    local v40 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v36, 0, v37)
    local v41 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v38, 0, v39)
    local v47 = math.min(1 / 15, 1)
    local v50 = math.min(1 / 15, 1)
    v42:addAIDebugLine({v36, v40 + 1, v37}, {v38, v41 + 1, v39}, {v47, 1 - v50, 0})
    local v55 = string.format("n%d s%d", 1, v35)
    DebugUtil.drawDebugGizmoAtWorldPos(...)
    {}[v35] = true
    -- goto L702  (LOP_JUMP +1)
    return v8, v9, v10, v11, v12
    -- TODO: structure LOP_FORNLOOP (pc 702, target 570)
    return v8, v9, v10, v11, v12
  end
  v16 = AIMessageErrorNoVineFound.new()
  v14:stopCurrentAIJob(...)
  self:debugPrint("Stopping AIVehicle - segment no longer available")
  return 0, 0, true, 0, 0
  return v8, v9, v10, v11, v12
end
function AIDriveStrategyVineyard.updateDriving(v0, v1)
end
function AIDriveStrategyVineyard:getIsSegmentAvailable(v1, v2, v3)
  local v4 = v4:getAttachedAIImplements()
  -- TODO: structure LOP_FORNPREP (pc 8, target 22)
  local v9 = v9:getAIImplementUseVineSegment(v1, v2, v3)
  if v9 then
    return true
  end
  -- TODO: structure LOP_FORNLOOP (pc 21, target 9)
  return false
end
function AIDriveStrategyVineyard:getNextSegment(v1, v2, v3, v4)
  if self.placeable ~= nil then
    local v6 = v6:getSnapDistance()
    local v9, v10 = MathUtil.vector2Normalize(self.placeable.spec_fence.segments[v1].x2 - self.placeable.spec_fence.segments[v1].x1, self.placeable.spec_fence.segments[v1].z2 - self.placeable.spec_fence.segments[v1].z1)
    function(self, v1, v2)
      -- TODO: structure LOP_FORNPREP (pc 4, target 42)
      if u1[1] == nil and u0[1] ~= self then
        local v8 = AIDriveStrategyVineyard.getSegmentOffset(self, u0[1], 0)
        local v7 = math.abs(...)
        if v1 <= v7 and v7 <= v2 then
          u1[1] = true
          u2(1, u0[1])
          u3(u0[1], v1, v2)
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 41, target 5)
    end(self.placeable.spec_fence.segments[v1], v6 - 0.25, v6 + 0.25)
    table.sort({}, function(self, v1)
      if self.offset >= v1.offset then
      end
      return true
    end)
    table.sort({}, function(self, v1)
      if v1.offset >= self.offset then
      end
      return true
    end)
    if #{} ~= 0 then
      -- cmp-jump LOP_JUMPXEQKN R17 aux=0x80000012 -> L97
    end
    if 0 < v16 then
      return v11[1].index, v11[1].side
    end
    if 0 < v17 then
      return v12[1].index, v12[1].side
      -- goto L115  (LOP_JUMP +18)
      if v17 < v16 then
        return v12[1].index, v12[1].side
      end
      return v11[1].index, v11[1].side
    end
  end
end
function AIDriveStrategyVineyard:getSegmentOffset(v1, v2, v3)
  if v3 ~= nil then
    local v6, v7 = MathUtil.vector2Normalize(self.x2 - self.x1, self.z2 - self.z1)
  end
  v6, v7 = MathUtil.vector2Normalize(v1.x2 - v1.x1, v1.z2 - v1.z1)
  if v2 ~= 0 then
  end
  local v10, v11 = MathUtil.getSignedDistanceToLineSegment2D(v4, v5, v8 - v6 * 1024, v9 - v7 * 1024, v6, v7, 2048)
  if v11 == 0 then
    return v10
  end
  return math.huge
end
function AIDriveStrategyVineyard:getInitialVineSegment(v1, v2, v3, v4, v5)
  if v4 == nil then
    -- TODO: structure LOP_FORNPREP (pc 13, target 42)
    if g_currentMission.placeableSystem.placeables[1].spec_vine ~= nil and g_currentMission.placeableSystem.placeables[1].spec_fence ~= nil then
      local v16, v17, v18, v19, v20 = AIDriveStrategyVineyard.getInitialVineSegment(self, v1, v2, v3, g_currentMission.placeableSystem.placeables[1], v5)
      if v19 < math.huge then
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 41, target 14)
    return v6, v7, v8, v9, v10
  end
  if v5 == nil then
  end
  for v15, v16 in pairs(v4.spec_fence.segments) do
    v18 = self:getIsSegmentAvailable(v4, v16, 1)
    v18 = self:getIsSegmentAvailable(v4, v16, -1)
    if not (v18 or v5) and not v18 then
      continue
    end
    if self.useSegmentSide then
      v20 = v4:getSnapDistance()
      if v17 then
        local v20, v21, v22 = v11(v16, v20 * 0.5, v9)
        if v20 ~= nil then
        end
      end
      if not v18 then
        continue
      end
      v20, v21, v22 = v11(v16, -v19, v9)
      if not (v20 ~= nil) then
        continue
      end
    else
      v19, v20, v21 = v11(v16, 0, v9)
      if not (v19 ~= nil) then
        continue
      end
    end
  end
  return v6, v7, v8, v9, v10
end
