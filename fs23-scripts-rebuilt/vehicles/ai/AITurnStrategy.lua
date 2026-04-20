-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategy = {COLLISION_BOX_COLOR_OK = {0, 1, 0}, COLLISION_BOX_COLOR_HIT = {1, 0, 0}, SLOPE_DETECTION_THRESHOLD = 0.5235987755982988, DENSITY_HEIGHT_THRESHOLD = 2}
local AITurnStrategy_mt = Class(AITurnStrategy)
function AITurnStrategy.new(customMt)
  if customMt == nil then
  end
  setmetatable({}, customMt)
  local v2 = {isTurning = false, turnLeft = nil, collisionDetected = false, usesExtraStraight = false, distanceToCollision = 5, maxTurningSizeBoxes = {}, maxTurningSizeBoxes2 = {}, turnSegments = {}, requestToEndTurn = false, lastValidTurnPositionOffset = 0, corridorPositionOffset = 0, strategyName = "AITurnStrategy"}:createTurningSizeBox()
  v2 = {isTurning = false, turnLeft = nil, collisionDetected = false, usesExtraStraight = false, distanceToCollision = 5, maxTurningSizeBoxes = {}, maxTurningSizeBoxes2 = {}, turnSegments = {}, requestToEndTurn = false, lastValidTurnPositionOffset = 0, corridorPositionOffset = 0, strategyName = "AITurnStrategy", leftBox = v2}:createTurningSizeBox()
  table.insert({isTurning = false, turnLeft = nil, collisionDetected = false, usesExtraStraight = false, distanceToCollision = 5, maxTurningSizeBoxes = {}, maxTurningSizeBoxes2 = {}, turnSegments = {}, requestToEndTurn = false, lastValidTurnPositionOffset = 0, corridorPositionOffset = 0, strategyName = "AITurnStrategy", leftBox = v2, rightBox = v2, heightChecks = {}}.heightChecks, {1, 1})
  table.insert({isTurning = false, turnLeft = nil, collisionDetected = false, usesExtraStraight = false, distanceToCollision = 5, maxTurningSizeBoxes = {}, maxTurningSizeBoxes2 = {}, turnSegments = {}, requestToEndTurn = false, lastValidTurnPositionOffset = 0, corridorPositionOffset = 0, strategyName = "AITurnStrategy", leftBox = v2, rightBox = v2, heightChecks = {}}.heightChecks, {-1, 1})
  table.insert({isTurning = false, turnLeft = nil, collisionDetected = false, usesExtraStraight = false, distanceToCollision = 5, maxTurningSizeBoxes = {}, maxTurningSizeBoxes2 = {}, turnSegments = {}, requestToEndTurn = false, lastValidTurnPositionOffset = 0, corridorPositionOffset = 0, strategyName = "AITurnStrategy", leftBox = v2, rightBox = v2, heightChecks = {}}.heightChecks, {1, -1})
  table.insert({isTurning = false, turnLeft = nil, collisionDetected = false, usesExtraStraight = false, distanceToCollision = 5, maxTurningSizeBoxes = {}, maxTurningSizeBoxes2 = {}, turnSegments = {}, requestToEndTurn = false, lastValidTurnPositionOffset = 0, corridorPositionOffset = 0, strategyName = "AITurnStrategy", leftBox = v2, rightBox = v2, heightChecks = {}}.heightChecks, {-1, -1})
  return {isTurning = false, turnLeft = nil, collisionDetected = false, usesExtraStraight = false, distanceToCollision = 5, maxTurningSizeBoxes = {}, maxTurningSizeBoxes2 = {}, turnSegments = {}, requestToEndTurn = false, lastValidTurnPositionOffset = 0, corridorPositionOffset = 0, strategyName = "AITurnStrategy", leftBox = v2, rightBox = v2, heightChecks = {}, numHeightChecks = 4, lastWaterY1 = -2000, lastWaterY2 = -2000}
end
function AITurnStrategy:delete()
  self:clearTurnSegments()
end
function AITurnStrategy:setAIVehicle(vehicle, parent)
  self.vehicle = vehicle
  local v3 = v3:getAIDirectionNode()
  self.vehicleDirectionNode = v3
  v3 = v3:getAISteeringNode()
  self.vehicleAISteeringNode = v3
  v3 = v3:getAIReverserNode()
  self.vehicleAIReverserNode = v3
  v3 = AIVehicleUtil.getAIToolReverserDirectionNode(self.vehicle)
  self.reverserDirectionNode = v3
  self.parent = parent
  AIVehicleUtil.updateInvertLeftRightMarkers(self.vehicle, self.vehicle)
  local v4 = v4:getAttachedAIImplements()
  for v6, v7 in pairs(...) do
    AIVehicleUtil.updateInvertLeftRightMarkers(self.vehicle, v7.object)
  end
end
function AITurnStrategy:update(dt)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    AITurnStrategy.drawTurnSegments(self.turnSegments)
    if self.maxTurningSizeBoxes ~= nil then
      local v2 = table.getn(self.maxTurningSizeBoxes)
      if 0 < v2 then
        self.maxTurningSizeBoxes2 = {}
        for v5, v6 in pairs(self.maxTurningSizeBoxes) do
          local v9 = unpack(v6.color)
          table.insert({points = {}, color = {}}.points, {v6.x + v6.xx * v6.size[1] - v6.zx * v6.size[3], v6.y - v6.size[2], v6.z + v6.xz * v6.size[1] - v6.zz * v6.size[3]})
          table.insert({points = {}, color = {}}.points, {v6.x + -v6.xx * v6.size[1] - v6.zx * v6.size[3], v6.y - v6.size[2], v6.z + -v6.xz * v6.size[1] - v6.zz * v6.size[3]})
          table.insert({points = {}, color = {}}.points, {v6.x + -v6.xx * v6.size[1] + v6.zx * v6.size[3], v6.y - v6.size[2], v6.z + -v6.xz * v6.size[1] + v6.zz * v6.size[3]})
          table.insert({points = {}, color = {}}.points, {v6.x + v6.xx * v6.size[1] + v6.zx * v6.size[3], v6.y - v6.size[2], v6.z + v6.xz * v6.size[1] + v6.zz * v6.size[3]})
          table.insert({points = {}, color = {}}.points, {v6.x + v6.xx * v6.size[1] - v6.zx * v6.size[3], v6.y + v6.size[2], v6.z + v6.xz * v6.size[1] - v6.zz * v6.size[3]})
          table.insert({points = {}, color = {}}.points, {v6.x + -v6.xx * v6.size[1] - v6.zx * v6.size[3], v6.y + v6.size[2], v6.z + -v6.xz * v6.size[1] - v6.zz * v6.size[3]})
          table.insert({points = {}, color = {}}.points, {v6.x + -v6.xx * v6.size[1] + v6.zx * v6.size[3], v6.y + v6.size[2], v6.z + -v6.xz * v6.size[1] + v6.zz * v6.size[3]})
          table.insert({points = {}, color = {}}.points, {v6.x + v6.xx * v6.size[1] + v6.zx * v6.size[3], v6.y + v6.size[2], v6.z + v6.xz * v6.size[1] + v6.zz * v6.size[3]})
          table.insert({points = {}, color = {}}.points, {v6.x, v6.y, v6.z})
          table.insert(self.maxTurningSizeBoxes2, {points = {}, color = {}})
        end
        self.maxTurningSizeBoxes = {}
      end
      if self.maxTurningSizeBoxes2 ~= nil then
        for v5, v6 in pairs(self.maxTurningSizeBoxes2) do
          drawDebugLine(v6.points[1][1], v6.points[1][2], v6.points[1][3], v6.color[1], v6.color[2], v6.color[3], v6.points[2][1], v6.points[2][2], v6.points[2][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[2][1], v6.points[2][2], v6.points[2][3], v6.color[1], v6.color[2], v6.color[3], v6.points[3][1], v6.points[3][2], v6.points[3][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[3][1], v6.points[3][2], v6.points[3][3], v6.color[1], v6.color[2], v6.color[3], v6.points[4][1], v6.points[4][2], v6.points[4][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[4][1], v6.points[4][2], v6.points[4][3], v6.color[1], v6.color[2], v6.color[3], v6.points[1][1], v6.points[1][2], v6.points[1][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[5][1], v6.points[5][2], v6.points[5][3], v6.color[1], v6.color[2], v6.color[3], v6.points[6][1], v6.points[6][2], v6.points[6][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[6][1], v6.points[6][2], v6.points[6][3], v6.color[1], v6.color[2], v6.color[3], v6.points[7][1], v6.points[7][2], v6.points[7][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[7][1], v6.points[7][2], v6.points[7][3], v6.color[1], v6.color[2], v6.color[3], v6.points[8][1], v6.points[8][2], v6.points[8][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[8][1], v6.points[8][2], v6.points[8][3], v6.color[1], v6.color[2], v6.color[3], v6.points[5][1], v6.points[5][2], v6.points[5][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[1][1], v6.points[1][2], v6.points[1][3], v6.color[1], v6.color[2], v6.color[3], v6.points[5][1], v6.points[5][2], v6.points[5][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[4][1], v6.points[4][2], v6.points[4][3], v6.color[1], v6.color[2], v6.color[3], v6.points[8][1], v6.points[8][2], v6.points[8][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[2][1], v6.points[2][2], v6.points[2][3], v6.color[1], v6.color[2], v6.color[3], v6.points[6][1], v6.points[6][2], v6.points[6][3], v6.color[1], v6.color[2], v6.color[3])
          drawDebugLine(v6.points[3][1], v6.points[3][2], v6.points[3][3], v6.color[1], v6.color[2], v6.color[3], v6.points[7][1], v6.points[7][2], v6.points[7][3], v6.color[1], v6.color[2], v6.color[3])
          local v11 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v6.points[9][1], v6.points[9][2], v6.points[9][3])
          v6.points[9][2] = v11 + 2
          drawDebugPoint(v6.points[9][1], v6.points[9][2], v6.points[9][3], 1, 0, 0, 1)
          local v14 = getCorrectTextSize(0.012)
          Utils.renderTextAtWorldPosition(v6.points[9][1], v6.points[9][2], v6.points[9][3], self.strategyName, v14, 0)
        end
      end
    end
  end
end
function AITurnStrategy:getDriveData(dt, vX, vY, vZ, turnData)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    local v8 = string.format("strategy: %s", self.strategyName)
    v6:addAIDebugText(...)
  end
  local v9 = v9:getSpeedLimit(true)
  local v10 = math.min(14, v9)
  if self.turnSegments[self.activeTurnSegmentIndex].isCurve then
    local v14 = MathUtil.sign(self.turnSegments[self.activeTurnSegmentIndex].endAngle - self.turnSegments[self.activeTurnSegmentIndex].startAngle)
    if self.reverserDirectionNode ~= nil then
      -- if v0.turnSegments[v0.activeTurnSegmentIndex].moveForward then goto L70 end
      local v16 = AITurnStrategy.getAngleInSegment(self.reverserDirectionNode, self.turnSegments[self.activeTurnSegmentIndex])
    else
      v16 = AITurnStrategy.getAngleInSegment(self.vehicleAISteeringNode, self.turnSegments[self.activeTurnSegmentIndex])
    end
    v16 = math.max(3, 0.33 * self.vehicle.maxTurningRadius)
    if math.pi < v15 + v14 * v16 / v11.radius then
    elseif v15 + v14 * v16 / v11.radius < -math.pi then
    end
    if math.pi < v11.endAngle then
    elseif v11.endAngle < -math.pi then
    end
    local v19 = MathUtil.sign(v11.endAngle - v11.startAngle)
    if 0.17453292519943295 < v19 * (v15 - v18) then
    elseif v19 * (v15 - v18) < -2 * math.pi + 0.17453292519943295 then
    end
    if 0.17453292519943295 < v14 * (v17 - v18) then
    elseif v14 * (v17 - v18) < -2 * math.pi + 0.17453292519943295 then
    end
    local v22 = math.cos(v17)
    local v23 = math.sin(v17)
    local v23, v24, v25 = localToWorld(v11.o, v22 * v11.radius, 0, v23 * v11.radius)
    if -v19 * v11.radius >= 0.01 then
      -- cmp-jump LOP_JUMPXEQKB R23 aux=0x0 -> L235
      -- if 0 >= v20 then goto L235 end
    end
    if v11.checkForSkipToNextSegment then
      local v26 = MathUtil.vector2Length(self.turnSegments[self.activeTurnSegmentIndex + 1].endPoint[1] - self.turnSegments[self.activeTurnSegmentIndex + 1].startPoint[1], self.turnSegments[self.activeTurnSegmentIndex + 1].endPoint[3] - self.turnSegments[self.activeTurnSegmentIndex + 1].startPoint[3])
      if self.reverserDirectionNode ~= nil then
        -- if v13 then goto L282 end
        local v29, v30, v31 = worldDirectionToLocal(self.reverserDirectionNode, (self.turnSegments[self.activeTurnSegmentIndex + 1].endPoint[1] - self.turnSegments[self.activeTurnSegmentIndex + 1].startPoint[1]) / v26, 0, (self.turnSegments[self.activeTurnSegmentIndex + 1].endPoint[3] - self.turnSegments[self.activeTurnSegmentIndex + 1].startPoint[3]) / v26)
      else
        v29, v30, v31 = worldDirectionToLocal(self.vehicleAISteeringNode, (self.turnSegments[self.activeTurnSegmentIndex + 1].endPoint[1] - self.turnSegments[self.activeTurnSegmentIndex + 1].startPoint[1]) / v26, 0, (self.turnSegments[self.activeTurnSegmentIndex + 1].endPoint[3] - self.turnSegments[self.activeTurnSegmentIndex + 1].startPoint[3]) / v26)
      end
      v29 = MathUtil.vector2Length(v24, v25)
      v30, v31 = MathUtil.projectOnLine(vX, vZ, v23.startPoint[1], v23.startPoint[3], v24 / v29, v25 / v29)
      v30 = MathUtil.vector2Length(vX - v30, vZ - v31)
      v31 = MathUtil.vector2Length(vX - v23.startPoint[1], vZ - v23.startPoint[3])
      if v30 < 1.5 then
        local v32 = math.abs(v27)
        if v32 < 0.15 and v31 < self.vehicle.size.length / 2 then
        end
      end
    end
    if not v13 and self.reverserDirectionNode ~= nil then
      v23, v24, v25 = worldToLocal(self.reverserDirectionNode, v6, vY, v8)
      v26 = Utils.getYRotationBetweenNodes(self.vehicleAISteeringNode, self.reverserDirectionNode)
      v29 = math.cos(v26)
      v30 = math.sin(v26)
      v30 = math.sin(v26)
      v31 = math.cos(v26)
      v29, v30, v31 = localToWorld(self.vehicleAISteeringNode, -(v29 * v23 - v30 * v25), 0, v30 * v23 + v31 * v25)
    end
    -- if VehicleDebug.state ~= VehicleDebug.DEBUG_AI then goto L955 end
    drawDebugLine(vX, vY + 2, vZ, 1, 1, 0, v6, v7 + 2, v8, 1, 1, 0)
  else
    if self.reverserDirectionNode ~= nil then
      local v17, v18, v19 = getWorldTranslation(self.reverserDirectionNode)
    end
    v19 = MathUtil.vector2Length(v11.endPoint[1] - v11.startPoint[1], v11.endPoint[3] - v11.startPoint[3])
    if self.reverserDirectionNode ~= nil then
      -- if v13 then goto L491 end
      v22, v23 = MathUtil.projectOnLine(v14, v16, v11.startPoint[1], v11.startPoint[3], (v11.endPoint[1] - v11.startPoint[1]) / v19, (v11.endPoint[3] - v11.startPoint[3]) / v19)
    elseif self.vehicleAIReverserNode ~= nil then
      -- if v13 then goto L520 end
      v22, v23, v24 = getWorldTranslation(self.vehicleAIReverserNode)
      v22, v23 = MathUtil.projectOnLine(v22, v24, v11.startPoint[1], v11.startPoint[3], (v11.endPoint[1] - v11.startPoint[1]) / v19, (v11.endPoint[3] - v11.startPoint[3]) / v19)
    else
      v22, v23 = MathUtil.projectOnLine(vX, vZ, v11.startPoint[1], v11.startPoint[3], (v11.endPoint[1] - v11.startPoint[1]) / v19, (v11.endPoint[3] - v11.startPoint[3]) / v19)
    end
    if self.reverserDirectionNode ~= nil and not v13 then
      v22, v23, v24 = worldToLocal(self.reverserDirectionNode, v20 + v17 * 1 * self.vehicle.maxTurningRadius, vY, v21 + v18 * 1 * self.vehicle.maxTurningRadius)
      v25 = Utils.getYRotationBetweenNodes(self.vehicleAISteeringNode, self.reverserDirectionNode)
      if self.vehicle.spec_articulatedAxis ~= nil and self.vehicle.spec_articulatedAxis.componentJoint ~= nil then
        if self.vehicle.spec_articulatedAxis.anchorActor == 1 then
        end
        v29 = Utils.getYRotationBetweenNodes(v27, v28)
      end
      v29 = math.cos(v25)
      v30 = math.sin(v25)
      v30 = math.sin(v25)
      v31 = math.cos(v25)
      v29, v30, v31 = localToWorld(self.vehicleAISteeringNode, -(v29 * v22 - v30 * v24), 0, v30 * v22 + v31 * v24)
    end
    v22 = MathUtil.vector3Length(v11.endPoint[1] - vX, v11.endPoint[2] - vY, v11.endPoint[3] - vZ)
    v22, v23, v24 = worldToLocal(self.vehicleAISteeringNode, v11.endPoint[1], v11.endPoint[2], v11.endPoint[3])
    if v11.moveForward then
      -- if v24 < 0 then goto L696 end
    end
    if not v11.moveForward and 0 < v24 then
    end
    if v11.checkAlignmentToSkipSegment then
      local v25, v26, v27 = localDirectionToWorld(self.vehicleAISteeringNode, 0, 0, 1)
      local v28 = MathUtil.vector2Length(v25, v27)
      v29 = math.acos(v25 / v28 * v17 + v27 / v28 * v18)
      v30 = MathUtil.vector2Length(vX - v20, vZ - v21)
      v32 = math.deg(v29)
      if v32 < 8 and v30 >= 0.6 then
      end
      if self.vehicle.spec_articulatedAxis ~= nil and self.vehicle.spec_articulatedAxis.componentJoint ~= nil then
        -- TODO: structure LOP_FORNPREP (pc 758, target 814)
        local v36, v37, v38 = localDirectionToWorld(self.vehicle.components[self.vehicle.spec_articulatedAxis.componentJoint.componentIndices[1]].node, 0, 0, 1)
        v36 = MathUtil.vector2Length(v36, v38)
        v36 = math.acos(v36 / v36 * v17 + v38 / v36 * v18)
        if v31 then
          v38 = math.deg(v36)
          if v38 >= 8 then
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 813, target 759)
      end
      if self.reverserDirectionNode ~= nil then
        local v32, v33, v34 = localDirectionToWorld(self.reverserDirectionNode, 0, 0, 1)
        local v35 = MathUtil.vector2Length(v32, v34)
        v36 = math.acos(v32 / v35 * v17 + v34 / v35 * v18)
        v37, v38 = MathUtil.projectOnLine(v14, v16, v11.startPoint[1], v11.startPoint[3], v17, v18)
        v37 = MathUtil.vector2Length(v14 - v37, v16 - v38)
        if v31 then
          v38 = math.deg(v36)
          if v38 < 6 and v37 >= 0.6 then
          end
        end
      end
      v33, v34, v35 = worldToLocal(self.vehicleDirectionNode, self.turnSegments[self.activeTurnSegmentIndex + 1].startPoint[1], self.turnSegments[self.activeTurnSegmentIndex + 1].startPoint[2], self.turnSegments[self.activeTurnSegmentIndex + 1].startPoint[3])
      v36, v37, v38 = worldToLocal(self.vehicleDirectionNode, self.turnSegments[self.activeTurnSegmentIndex + 1].endPoint[1], self.turnSegments[self.activeTurnSegmentIndex + 1].endPoint[2], self.turnSegments[self.activeTurnSegmentIndex + 1].endPoint[3])
      if v31 and v35 >= 0 and v38 >= 0 then
      end
      if v39 then
      end
    end
    if VehicleDebug.state == VehicleDebug.DEBUG_AI then
      v25 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v6, vY, v8)
      drawDebugLine(vX, vY + 2, vZ, 1, 1, 0, v6, v25 + 2, v8, 1, 1, 0)
    end
  end
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    v16 = string.format("active segment: %d", self.activeTurnSegmentIndex)
    v14:addAIDebugText(...)
  end
  if v11.checkForValidArea then
    if not v13 then
    end
    local v15 = AIVehicleUtil.checkImplementListForValidGround(self.vehicle, 0, v14)
    if v15 then
      self.activeTurnSegmentIndex = #self.turnSegments
    end
  end
  if v11.findEndOfField then
    if not v13 then
    end
    v15 = AIVehicleUtil.checkImplementListForValidGround(self.vehicle, 0, v14)
    if not v15 then
    end
  end
  if not v12 then
    -- if not v0.requestToEndTurn then goto L1031 end
  end
  self.activeTurnSegmentIndex = self.activeTurnSegmentIndex + 1
  if self.turnSegments[self.activeTurnSegmentIndex] == nil then
    self.isTurning = false
    self.requestToEndTurn = false
    return nil
  end
  for v19, v20 in ipairs(self.turnSegments) do
    if not not v20.checkAlignmentToSkipSegment then
      break
    end
    if v20.isCurve then
      v22 = math.abs(v20.endAngle - v20.startAngle)
    else
      v23 = MathUtil.vector3Length(v20.endPoint[1] - v20.startPoint[1], v20.endPoint[2] - v20.startPoint[2], v20.endPoint[3] - v20.startPoint[3])
      v22 = math.abs(...)
    end
    v22 = math.abs(v21)
    if v19 < self.activeTurnSegmentIndex then
    elseif not (v19 == self.activeTurnSegmentIndex) then
      continue
    end
  end
  v17:aiFieldWorkerTurnProgress(v15 / v14, self.turnLeft)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    v19 = string.format("turn progress: %.1f%%", v15 / v14 * 100)
    v17:addAIDebugText(...)
  end
  if not v11.slowDown then
  end
  return v6, v8, v13, v9, v10
end
function AITurnStrategy.updateTurningSizeBox(v0, dt, vX, vY, vZ)
  dt.center[3] = vZ / 2
  dt.size[1] = 3
  dt.size[2] = 5
  dt.size[3] = vZ / 2
end
function AITurnStrategy.createTurningSizeBox(v0)
  return {center = {0, 0, 0}, rotation = {0, 0, 0}, size = {0, 0, 0}}
end
function AITurnStrategy:getDistanceToCollision(dt, vX, vY, vZ, turnData, lookAheadDistance)
  if self.usesExtraStraight ~= turnData.useExtraStraightLeft then
  end
  if self.usesExtraStraight ~= turnData.useExtraStraightRight then
  end
  if not v7 then
    -- if true then goto L21 end
  elseif self.turnLeft ~= nil then
    if self.turnLeft then
      -- if not true then goto L33 end
    end
    -- if v0.turnLeft then goto L75 end
    -- if v7 then goto L75 end
  else
    if v7 and self.collisionEndPosLeft ~= nil then
    end
    if v8 and self.collisionEndPosRight ~= nil then
    end
    if dist then
      -- if v11 then goto L75 end
    end
    local v12, v13 = AIVehicleUtil.getValidityOfTurnDirections(self.vehicle, turnData)
    if dist and v12 <= 3 * AIVehicleUtil.VALID_AREA_THRESHOLD then
    end
    if v11 and v13 <= 3 * AIVehicleUtil.VALID_AREA_THRESHOLD then
    end
  end
  if self.collisionDetected then
    if self.collisionDetectedPosX ~= nil then
      local dist = MathUtil.vector3Length(vX - self.collisionDetectedPosX, vY - self.collisionDetectedPosY, vZ - self.collisionDetectedPosZ)
      local v11 = math.min(v9, lookAheadDistance - dist)
    else
    end
  end
  self.distanceToCollision = v9
  if self.parent ~= nil and self.parent.rowStartTranslation ~= nil then
    v12 = v12:getAIDirectionNode()
    v11, v12, v13 = getWorldTranslation(...)
    local v16 = MathUtil.vector2Length(v11 - self.parent.rowStartTranslation[1], v13 - self.parent.rowStartTranslation[3])
    local v14 = math.min(v16 * 0.5, 5)
  end
  -- TODO: structure LOP_FORNPREP (pc 153, target 159)
  self.maxTurningSizeBoxes[#self.maxTurningSizeBoxes] = nil
  -- TODO: structure LOP_FORNLOOP (pc 158, target 154)
  if self.turnLeft ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R13 aux=0x80000000 -> L252
  end
  if v7 then
    local v18 = math.max(0, v9)
    self:updateTurningSizeBox(...)
    self.leftBox.center[3] = self.leftBox.center[3] - dist
    self.leftBox.size[3] = self.leftBox.size[3] + dist
    v14 = self:validateCollisionBox(self.leftBox)
    if not v14 then
      v16 = AIMessageErrorUnknown.new()
      v14:stopCurrentAIJob(...)
      self:debugPrint("Stopping AIVehicle - collision box invalid")
      return v9
    end
    v14 = self:getIsBoxColliding(v13)
    table.insert(self.maxTurningSizeBoxes, v13)
    if v14 and self.collisionEndPosLeft == nil then
      local v15 = localToWorld(self.vehicleDirectionNode, 0, 0, v13.size[3])
      self.collisionEndPosLeft = {}
    end
  end
  if self.turnLeft ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R13 aux=0x80000001 -> L343
  end
  if v8 then
    v18 = math.max(0, v9)
    self:updateTurningSizeBox(...)
    self.rightBox.center[3] = self.rightBox.center[3] - dist
    self.rightBox.size[3] = self.rightBox.size[3] + dist
    v14 = self:validateCollisionBox(self.rightBox)
    if not v14 then
      v16 = AIMessageErrorUnknown.new()
      v14:stopCurrentAIJob(...)
      self:debugPrint("Stopping AIVehicle - collision box invalid 2")
      return v9
    end
    v14 = self:getIsBoxColliding(v13)
    table.insert(self.maxTurningSizeBoxes, v13)
    if v14 and self.collisionEndPosRight == nil then
      v15 = localToWorld(self.vehicleDirectionNode, 0, 0, v13.size[3])
      self.collisionEndPosRight = {}
    end
  end
  self:evaluateCollisionHits(vX, vY, vZ, v11, v12, turnData)
  return v9
end
function AITurnStrategy:getIsBoxColliding(box)
  local vX, vY, vZ = localToWorld(self.vehicleDirectionNode, box.center[1], box.center[2], box.center[3])
  box.x = vX
  box.y = vY
  box.z = vZ
  vX, vY, vZ = localDirectionToWorld(self.vehicleDirectionNode, 0, 0, 1)
  box.zx = vX
  box.zy = vY
  box.zz = vZ
  vX, vY, vZ = localDirectionToWorld(self.vehicleDirectionNode, 1, 0, 0)
  box.xx = vX
  box.xy = vY
  box.xz = vZ
  vX = math.atan2(box.zx, box.zz)
  box.ry = vX
  box.color = AITurnStrategy.COLLISION_BOX_COLOR_OK
  self.collisionHit = false
  overlapBox(box.x, box.y, box.z, 0, box.ry, 0, box.size[1], box.size[2], box.size[3], "collisionTestCallback", self, CollisionFlag.AI_BLOCKING, true, true, true)
  if self.collisionHit then
    box.color = AITurnStrategy.COLLISION_BOX_COLOR_HIT
    return true
  end
  vX, vY, vZ = localToWorld(self.vehicleDirectionNode, box.center[1] + box.size[1] * 0.66, 0, box.center[3] + box.size[3])
  local turnData, lookAheadDistance, v7 = localToWorld(self.vehicleDirectionNode, box.center[1] - box.size[1] * 0.66, 0, box.center[3] + box.size[3])
  local v8 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, vX, 0, vZ)
  local v9 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, turnData, 0, v7)
  raycastClosest(vX, v8 + 50, vZ, 0, -1, 0, "onWaterRaycastCallback", 100, self, CollisionFlag.WATER, false, false, true)
  raycastClosest(turnData, v9 + 50, v7, 0, -1, 0, "onWaterRaycastCallback2", 100, self, CollisionFlag.WATER, false, false, true)
  self.lastWaterY1 = -2000
  self.lastWaterY2 = -2000
  if v8 >= self.lastWaterY1 - 0.75 then
    -- if v9 >= v0.lastWaterY2 - 0.75 then goto L242 end
  end
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    local v14 = string.format(" hit water: b%.1f f%.1f w%.1f", v8, v9, dist)
    v12:addAIDebugText(...)
  end
  box.color = AITurnStrategy.COLLISION_BOX_COLOR_HIT
  return true
  local v12 = self:getCollisionBoxSlope(self.vehicleDirectionNode, box.center[1] + box.size[1], 0, box.center[3] + box.size[3], box.center[1] + box.size[1], 0, box.center[3] + box.size[3] - 3)
  local v13 = self:getCollisionBoxSlope(self.vehicleDirectionNode, box.center[1] - box.size[1], 0, box.center[3] + box.size[3], box.center[1] - box.size[1], 0, box.center[3] + box.size[3] - 3)
  v14 = self:getCollisionBoxSlope(self.vehicleDirectionNode, 0, 0, box.center[3] + box.size[3], 0, 0, box.center[3] + box.size[3] - 3)
  local v15 = self:getCollisionBoxSlope(self.vehicleDirectionNode, box.center[1] + box.size[1] - 3, 0, box.center[3] + box.size[3], box.center[1] + box.size[1], 0, box.center[3] + box.size[3])
  local v16 = self:getCollisionBoxSlope(self.vehicleDirectionNode, box.center[1] - box.size[1] + 3, 0, box.center[3] + box.size[3], box.center[1] - box.size[1], 0, box.center[3] + box.size[3])
  local v17 = math.max(v12, v13, v14, v15, v16)
  if AITurnStrategy.SLOPE_DETECTION_THRESHOLD < v17 then
    box.color = AITurnStrategy.COLLISION_BOX_COLOR_HIT
    return true
  end
  local v18, v19, v20 = localToWorld(self.vehicleDirectionNode, box.center[1] + box.size[1], 0, box.center[3] + box.size[3])
  v18, v19, v20 = localToWorld(self.vehicleDirectionNode, box.center[1] - box.size[1], 0, box.center[3] + box.size[3])
  v18 = MathUtil.vector2Length(v18 - v18, v20 - v20)
  v19 = math.floor(v18 / 3)
  -- TODO: structure LOP_FORNPREP (pc 492, target 541)
  local v27 = math.random()
  local v23 = math.min(1 / (v19 + 1) * (0 + v27), 1)
  local v26 = MathUtil.lerp(v18, v18, v23)
  local v25 = MathUtil.lerp(v20, v20, v23)
  v26, v27 = DensityMapHeightUtil.getHeightAtWorldPos(v26, 0, v25)
  if AITurnStrategy.DENSITY_HEIGHT_THRESHOLD <= v27 then
    box.color = AITurnStrategy.COLLISION_BOX_COLOR_HIT
    return true
  end
  -- TODO: structure LOP_FORNLOOP (pc 540, target 493)
  return false
end
function AITurnStrategy:onWaterRaycastCallback(hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  if hitObjectId ~= 0 then
    self.lastWaterY1 = y
  end
end
function AITurnStrategy:onWaterRaycastCallback2(hitObjectId, x, y, z, distance, nx, ny, nz, subShapeIndex, shapeId, isLast)
  if hitObjectId ~= 0 then
    self.lastWaterY2 = y
  end
end
function AITurnStrategy:getCollisionBoxSlope(rootNode, x1, y1, z1, x2, y2, z2)
  local v8, v9, dist = localToWorld(self.vehicleDirectionNode, x1, y1, z1)
  v8, v9, dist = localToWorld(self.vehicleDirectionNode, x2, y2, z2)
  v8 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v8, 0, dist)
  v9 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v8, 0, dist)
  dist = MathUtil.vector3Length(v8 - v8, v9 - v9, dist - dist)
  local v13 = math.abs(v8 - v9)
  local v11 = math.atan(v13 / dist)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    v12:addAIDebugLine({v8, v8 + 1, dist}, {v8, v9 + 1, dist}, {1, 0, 0})
    local v18 = math.deg(v11)
    local v16 = string.format(...)
    local v17 = getCorrectTextSize(0.012)
    Utils.renderTextAtWorldPosition((v8 + v8) / 2, (v8 + 1 + v9 + 1) / 2, (dist + dist) / 2, v16, v17, 0)
  end
  return v11
end
function AITurnStrategy.validateCollisionBox(v0, dt)
  -- TODO: structure LOP_FORNPREP (pc 3, target 31)
  if dt.center[1] == dt.center[1] and dt.rotation[1] == dt.rotation[1] then
    -- if v1.size[1] == v1.size[1] then goto L30 end
  end
  return false
  -- TODO: structure LOP_FORNLOOP (pc 30, target 4)
  return true
end
function AITurnStrategy:clearTurnSegments()
  -- TODO: structure LOP_FORNPREP (pc 5, target 24)
  local vZ = table.remove(self.turnSegments, #self.turnSegments)
  if vZ ~= nil and vZ.o ~= nil then
    delete(vZ.o)
  end
  -- TODO: structure LOP_FORNLOOP (pc 23, target 6)
end
function AITurnStrategy:startTurn(driveStrategyStraight)
  self.isTurning = true
  self.requestToEndTurn = false
  self:clearTurnSegments()
  self.turnSegmentsTotalLength = 0
  self.activeTurnSegmentIndex = 1
  if self.usesExtraStraight == driveStrategyStraight.turnData.useExtraStraightLeft then
  end
  if self.usesExtraStraight == vX.useExtraStraightRight then
  end
  if not vY and not vZ then
    self:debugPrint("Stopping AI - not allowed in both directions (gabAllowTurnLeft: %s, gabAllowTurnRight: %s)", driveStrategyStraight.gabAllowTurnLeft, driveStrategyStraight.gabAllowTurnRight)
    return false
  end
  AIVehicleUtil.updateInvertLeftRightMarkers(self.vehicle, self.vehicle)
  local lookAheadDistance = lookAheadDistance:getAttachedAIImplements()
  for v8, v9 in pairs(...) do
    AIVehicleUtil.updateInvertLeftRightMarkers(self.vehicle, v9.object)
  end
  turnData, lookAheadDistance = AIVehicleUtil.getValidityOfTurnDirections(self.vehicle, vX)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    log(" --(I)--> self.turnLeft:", self.turnLeft, "leftAreaPercentage:", turnData, "rightAreaPercentage:", lookAheadDistance)
  end
  if driveStrategyStraight.corridorDistance ~= nil then
    self.corridorPositionOffset = -driveStrategyStraight.corridorDistance
  end
  if self.turnLeft == nil then
    if turnData == lookAheadDistance then
      v8 = v8:getAIFieldWorkerLastTurnDirection()
      if v8 then
      else
      end
    end
    if self.collisionEndPosLeft == nil and self.collisionEndPosRight == nil then
    end
    if self.collisionEndPosRight == nil and self.collisionEndPosLeft ~= nil and vZ and AIVehicleUtil.VALID_AREA_THRESHOLD >= lookAheadDistance then
    end
    if lookAheadDistance >= turnData then
      -- if not v8 then goto L157 end
    end
    if vY and AIVehicleUtil.VALID_AREA_THRESHOLD < turnData then
      if not not v9 then
        -- if v4 then goto L174 end
      end
      self.turnLeft = true
      v7(self.vehicleDirectionNode, true, 5)
      -- goto L278  (LOP_JUMP +104)
    end
    if vZ and AIVehicleUtil.VALID_AREA_THRESHOLD < lookAheadDistance then
      self.turnLeft = false
      v7(self.vehicleDirectionNode, false, 5)
      -- goto L278  (LOP_JUMP +89)
    end
    local v11 = v7(self.vehicleDirectionNode, true, 5)
    if not v11 then
      v11 = v7(self.vehicleDirectionNode, false, 5)
      if not v11 then
        self:debugPrint("Stopping AIVehicle - no valid ground (I)")
        return false
      end
      self.turnLeft = false
      -- goto L278  (LOP_JUMP +65)
    end
    self.turnLeft = true
  else
    self.turnLeft = not self.turnLeft
    if self.turnLeft then
      if vY then
        -- if v5 >= AIVehicleUtil.VALID_AREA_THRESHOLD then goto L245 end
      end
      v8 = v7(self.vehicleDirectionNode, true, 5)
      -- if v8 then goto L278 end
      self:debugPrint("Stopping AI - No ground left (%.3f)", turnData)
      return false
      -- goto L278  (LOP_JUMP +33)
      v7(self.vehicleDirectionNode, true, 5)
    else
      if vZ then
        -- if v6 >= AIVehicleUtil.VALID_AREA_THRESHOLD then goto L272 end
      end
      v8 = v7(self.vehicleDirectionNode, false, 5)
      if not v8 then
        self:debugPrint("Stopping AI - No ground right (%.3f)", lookAheadDistance)
        return false
        -- goto L278  (LOP_JUMP +6)
        v7(self.vehicleDirectionNode, false, 5)
      end
    end
  end
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    log(" --(II)--> self.turnLeft:", self.turnLeft, "leftAreaPercentage:", turnData, "rightAreaPercentage:", lookAheadDistance)
  end
  driveStrategyStraight.turnLeft = not self.turnLeft
  driveStrategyStraight:updateTurnData()
  driveStrategyStraight.turnLeft = nil
  self.vehicle.aiDriveDirection[1] = -self.vehicle.aiDriveDirection[1]
  self.vehicle.aiDriveDirection[2] = -self.vehicle.aiDriveDirection[2]
  if self.turnLeft then
  else
  end
  self.vehicle.aiDriveTarget[1] = self.vehicle.aiDriveTarget[1] + -self.vehicle.aiDriveDirection[2] * 2 * v8
  self.vehicle.aiDriveTarget[2] = self.vehicle.aiDriveTarget[2] + self.vehicle.aiDriveDirection[1] * 2 * v8
  v16:aiFieldWorkerStartTurn(self.turnLeft, self)
  return true
end
function AITurnStrategy:getZOffsetForTurn(box0)
  local length = math.max(self.distanceToCollision + 2 * box0.size[3], 20)
  {name = "ZoffsetForTurn", center = {box0.center[1], box0.center[2], box0.center[3]}, size = {box0.size[1], box0.size[2], box0.size[3]}}.center[3] = length / 2
  {name = "ZoffsetForTurn", center = {box0.center[1], box0.center[2], box0.center[3]}, size = {box0.size[1], box0.size[2], box0.size[3]}}.size[3] = length / 2
  local turnData = localDirectionToWorld(self.vehicleDirectionNode, 0, 0, 1)
  turnData = localDirectionToWorld(self.vehicleDirectionNode, 1, 0, 0)
  while true do
    if not (0.5 < vX.size[3]) then
      break
    end
    lookAheadDistance = self:getIsBoxColliding(vX)
    self.collisionHit = lookAheadDistance
    if self.collisionHit then
      vX.center[3] = vX.center[3] - vX.size[3] / 2
    else
      vX.center[3] = vX.center[3] + 3 * vX.size[3] / 2
    end
    vX.size[3] = vX.size[3] / 2
  end
  return vZ
end
function AITurnStrategy:startTurnFinalization()
  for vZ, turnData in pairs(self.turnSegments) do
    if turnData.startPoint ~= nil then
      local v7 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, turnData.startPoint[1], 0, turnData.startPoint[3])
      turnData.startPoint[2] = v7
      v7 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, turnData.endPoint[1], 0, turnData.endPoint[3])
      turnData.endPoint[2] = v7
    else
      if not (turnData.o ~= nil) then
        continue
      end
      local lookAheadDistance, v7, v8 = getWorldTranslation(turnData.o)
      local v9 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, lookAheadDistance, v7, v8)
      setTranslation(turnData.o, lookAheadDistance, v9, v8)
    end
  end
  for vZ, turnData in pairs(self.turnSegments) do
    if turnData.startPoint ~= nil then
      lookAheadDistance = MathUtil.vector3Length(turnData.endPoint[1] - turnData.startPoint[1], turnData.endPoint[2] - turnData.startPoint[2], turnData.endPoint[3] - turnData.startPoint[3])
      turnData.length = lookAheadDistance
      self.turnSegmentsTotalLength = self.turnSegmentsTotalLength + turnData.length
    else
      v7 = math.rad(turnData.endAngle - turnData.startAngle)
      turnData.length = v7 * turnData.radius
      self.turnSegmentsTotalLength = self.turnSegmentsTotalLength + turnData.length
    end
  end
end
function AITurnStrategy:onEndTurn(turnLeft)
  if 0 < #self.turnSegments then
    vX:aiFieldWorkerEndTurn(self.turnLeft)
  end
  self.collisionDetected = false
  self.collisionEndPosLeft = nil
  self.collisionEndPosRight = nil
  self.collisionDetectedPosX = nil
  self.turnLeft = turnLeft
  self.maxTurningSizeBoxes = {}
  self.maxTurningSizeBoxes2 = {}
  self:clearTurnSegments()
  AIVehicleUtil.updateInvertLeftRightMarkers(self.vehicle, self.vehicle)
  local vY = vY:getAttachedAIImplements()
  for turnData, lookAheadDistance in pairs(...) do
    AIVehicleUtil.updateInvertLeftRightMarkers(self.vehicle, lookAheadDistance.object)
  end
end
function AITurnStrategy.getAngleInSegment(node, segment, ox, oy, oz)
  local turnData, lookAheadDistance, v7 = localToLocal(node, segment.o, ox or 0, oy or 0, oz or 0)
  return math.atan2(v7, turnData)
end
function AITurnStrategy.drawTurnSegments(segments)
  for vZ, turnData in pairs(segments) do
    if turnData.isCurve == true then
      local lookAheadDistance, v7, v8 = localToWorld(turnData.o, 0, 2, 0)
      local v9, dist, v11 = localToWorld(turnData.o, 2, 2, 0)
      local v12, v13, v14 = localToWorld(turnData.o, 0, 4, 0)
      local v15, v16, v17 = localToWorld(turnData.o, 0, 2, 2)
      drawDebugLine(lookAheadDistance, v7, v8, 1, 0, 0, v9, dist, v11, 1, 0, 0)
      drawDebugLine(lookAheadDistance, v7, v8, 0, 1, 0, v12, v13, v14, 0, 1, 0)
      drawDebugLine(lookAheadDistance, v7, v8, 0, 0, 1, v15, v16, v17, 0, 0, 1)
      -- TODO: structure LOP_FORNPREP (pc 89, target 365)
      local v23 = math.cos(turnData.startAngle + 0 * (turnData.endAngle - turnData.startAngle) / 20)
      local v24 = math.sin(turnData.startAngle + 0 * (turnData.endAngle - turnData.startAngle) / 20)
      local v25 = math.cos(turnData.startAngle + (0 + 1) * (turnData.endAngle - turnData.startAngle) / 20)
      local v26 = math.sin(turnData.startAngle + (0 + 1) * (turnData.endAngle - turnData.startAngle) / 20)
      local v25, v26, v27 = localToWorld(turnData.o, turnData.radius * v23, 0, turnData.radius * v24)
      local v28, v29, v30 = localToWorld(turnData.o, turnData.radius * v25, 0, turnData.radius * v26)
      local v32 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v25, v26, v27)
      local v33 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v28, v29, v30)
      drawDebugLine(v25, v32 + 1, v27, (20 - 0) / 20, 0 / 20, 0, v28, v33 + 1, v30, (20 - 0 - 1) / 20, (0 + 1) / 20, 0)
      if 0 == 10 then
        if turnData.moveForward then
        else
        end
        local v37 = v37(v38, v39, vZ)
        v33(v34, v35, v36, v37, 0.02, 0)
      end
      -- TODO: structure LOP_FORNLOOP (pc 236, target 90)
    else
      v9 = unpack(turnData.startPoint)
      v7 = getTerrainHeightAtWorldPos(...)
      dist = unpack(turnData.endPoint)
      v8 = getTerrainHeightAtWorldPos(...)
      drawDebugLine(turnData.startPoint[1], v7 + 1, turnData.startPoint[3], 1, 0, 0, turnData.endPoint[1], v8 + 1, turnData.endPoint[3], 0, 1, 0)
      drawDebugLine(turnData.startPoint[1], v7 + 1, turnData.startPoint[3], 1, 1, 1, turnData.startPoint[1], v7 + 1 + 2, turnData.startPoint[3], 1, 1, 1)
      drawDebugLine(turnData.endPoint[1], v7 + 1, turnData.endPoint[3], 1, 1, 1, turnData.endPoint[1], v7 + 1 + 2, turnData.endPoint[3], 1, 1, 1)
      if turnData.moveForward then
      else
      end
      v12 = v12(v13, v14, vZ)
      v8(v9, dist, v11, v12, 0.02, 0)
    end
  end
end
function AITurnStrategy:collisionTestCallback(transformId)
  local vX = vX:getNodeObject(transformId)
  if vX ~= nil then
    local vY = vX:isa(Placeable)
    -- if not v3 then goto L19 end
  end
  self.collisionHit = true
  return false
end
function AITurnStrategy:evaluateCollisionHits(vX, vY, vZ, collisionHitLeft, collisionHitRight, turnData)
  if not collisionHitLeft and self.collisionEndPosLeft ~= nil then
    local v7, v8, v9 = worldToLocal(self.vehicleDirectionNode, self.collisionEndPosLeft[1], self.collisionEndPosLeft[2], self.collisionEndPosLeft[3])
    if v9 < -1 then
      self.collisionEndPosLeft = nil
      self.collisionDetected = false
      self.collisionDetectedPosX = nil
    end
  end
  if not collisionHitRight and self.collisionEndPosRight ~= nil then
    v7, v8, v9 = worldToLocal(self.vehicleDirectionNode, self.collisionEndPosRight[1], self.collisionEndPosRight[2], self.collisionEndPosRight[3])
    if v9 < -1 then
      self.collisionEndPosRight = nil
      self.collisionDetected = false
      self.collisionDetectedPosX = nil
    end
  end
  if self.turnLeft == nil then
    if not collisionHitLeft then
      -- if not v5 then goto L143 end
    end
    if self.usesExtraStraight ~= turnData.useExtraStraightLeft then
    end
    if self.usesExtraStraight ~= turnData.useExtraStraightRight then
    end
    if collisionHitLeft and collisionHitRight then
      self.collisionDetected = true
      -- goto L143  (LOP_JUMP +53)
    end
    local v9, dist = AIVehicleUtil.getValidityOfTurnDirections(self.vehicle, turnData)
    if v8 and v9 > dist then
    end
    if v7 and dist > v9 then
    end
    if collisionHitLeft and not v8 then
      self.collisionDetected = true
      self.turnLeft = false
      -- goto L143  (LOP_JUMP +24)
    end
    if collisionHitRight and not v7 then
      self.collisionDetected = true
      self.turnLeft = true
      -- goto L143  (LOP_JUMP +15)
    end
    self.turnLeft = collisionHitLeft
  elseif self.turnLeft then
    -- if not v5 then goto L143 end
    self.collisionDetected = true
  else
    if collisionHitLeft then
      self.collisionDetected = true
    end
  end
  if self.collisionDetected and self.collisionDetectedPosX == nil then
    self.collisionDetectedPosX = vX
    self.collisionDetectedPosY = vY
    self.collisionDetectedPosZ = vZ
  end
end
function AITurnStrategy:checkCollisionInFront(turnData, lookAheadDistance)
  local maxZ = math.max(4, turnData.toolOverhang.front.zt)
  local v7 = self:getIsBoxColliding({name = "checkCollisionInFront", center = {turnData.sideOffsetLeft - (turnData.sideOffsetLeft - turnData.sideOffsetRight) / 2, 0, maxZ / 2 + (lookAheadDistance or 5) / 2}, rotation = {0, 0, 0}, size = {(turnData.sideOffsetLeft - turnData.sideOffsetRight) / 2, 5, maxZ / 2 + (lookAheadDistance or 5) / 2}})
  self.collisionHit = v7
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    table.insert(self.maxTurningSizeBoxes, {name = "checkCollisionInFront", center = {turnData.sideOffsetLeft - (turnData.sideOffsetLeft - turnData.sideOffsetRight) / 2, 0, maxZ / 2 + (lookAheadDistance or 5) / 2}, rotation = {0, 0, 0}, size = {(turnData.sideOffsetLeft - turnData.sideOffsetRight) / 2, 5, maxZ / 2 + (lookAheadDistance or 5) / 2}})
  end
  return self.collisionHit
end
function AITurnStrategy:adjustHeightOfTurningSizeBox(box)
  -- TODO: structure LOP_FORNPREP (pc 9, target 62)
  local v8, v9, dist = localToWorld(self.vehicleDirectionNode, box.center[1] + box.size[1] * self.heightChecks[1][1], 0, box.center[3] + box.size[3] * self.heightChecks[1][2])
  local v11 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v8, 0, dist)
  local v12 = math.max(-math.huge, v11)
  v12 = math.min(math.huge, v11)
  -- TODO: structure LOP_FORNLOOP (pc 61, target 10)
  local collisionHitLeft = math.max(6, v12 - v12 + 2)
  box.size[2] = collisionHitLeft
  box.center[2] = 0
end
function AITurnStrategy:getNoFullCoverageZOffset()
  local vY = AIVehicleUtil.getAttachedImplementsBlockTurnBackward(self.vehicle)
  if vY then
    return 0
  end
  vY = vY:getAttachedAIImplements()
  for turnData, v7 in pairs(vY) do
    local v8 = v8:getAIHasNoFullCoverageArea()
    if not v8 then
      continue
    end
    local v8, v9, dist = v8:getAIMarkers()
    local v11, v12, v13 = localToLocal(dist, v8, 0, 0, 0)
  end
  return vX + self.corridorPositionOffset + self.lastValidTurnPositionOffset
end
function AITurnStrategy:getVehicleToWorld(x, y, z, returnTable)
  local dist = self:getNoFullCoverageZOffset()
  local collisionHitRight, turnData, v7 = localToWorld(self.vehicleDirectionNode, x, y, z + dist)
  if returnTable then
    return {collisionHitRight, turnData, v7}
  end
  return x, y, z
end
function AITurnStrategy:addNoFullCoverageSegment(turnSegments)
  local offset = self:getNoFullCoverageZOffset()
  if offset ~= 0 then
    local collisionHitLeft = self:getVehicleToWorld(0, 0, -offset, true)
    collisionHitLeft = self:getVehicleToWorld(0, 0, 0, true)
    table.insert(turnSegments, {isCurve = false, moveForward = false, slowDown = true, startPoint = collisionHitLeft, endPoint = collisionHitLeft})
  end
end
function AITurnStrategy.debugPrint(v0, vX, ...)
  if VehicleDebug.state == VehicleDebug.DEBUG_AI then
    local collisionHitRight = string.format(...)
    local vZ = string.format(...)
    print(...)
  end
end
function AITurnStrategy.getTurnRadius(v0, vX, vY)
  local collisionHitRight = math.abs(vY)
  local vZ = math.abs(collisionHitRight - vX)
  if vZ < 0.25 then
    vZ = math.abs(vY)
  end
  return vX
end
function AITurnStrategy:skipTurnSegment()
  if self.activeTurnSegmentIndex < #self.turnSegments then
    self.activeTurnSegmentIndex = self.activeTurnSegmentIndex + 1
    return
  end
  self.requestToEndTurn = true
end
function AITurnStrategy:getActiveTurnSegmentByNode(referenceNode, originX, originY, originZ)
  -- TODO: structure LOP_FORNPREP (pc 15, target 243)
  if self.turnSegments[self.activeTurnSegmentIndex].moveForward and self.turnSegments[self.activeTurnSegmentIndex].moveForward then
    if self.activeTurnSegmentIndex <= self.activeTurnSegmentIndex and self.activeTurnSegmentIndex <= self.activeTurnSegmentIndex + 2 then
      if self.turnSegments[self.activeTurnSegmentIndex].isCurve then
        local v16 = worldToLocal(referenceNode, originX, originY, originZ)
        local v13 = AITurnStrategy.getAngleInSegment(...)
        local v18 = math.cos(v13)
        local v20 = math.sin(v13)
        local v14, v15, v16 = localToWorld(self.turnSegments[self.activeTurnSegmentIndex].o, self.turnSegments[self.activeTurnSegmentIndex].radius * v18, 0, self.turnSegments[self.activeTurnSegmentIndex].radius * v20)
        local v17 = MathUtil.vector2Length(v14 - originX, v16 - originZ)
        v20 = MathUtil.getIsOutOfBounds(v13, self.turnSegments[self.activeTurnSegmentIndex].startAngle, self.turnSegments[self.activeTurnSegmentIndex].endAngle)
        local v21 = MathUtil.getIsOutOfBounds(v13 - 2 * math.pi, self.turnSegments[self.activeTurnSegmentIndex].startAngle, self.turnSegments[self.activeTurnSegmentIndex].endAngle)
        local v22 = MathUtil.getIsOutOfBounds(v13 + 2 * math.pi, self.turnSegments[self.activeTurnSegmentIndex].startAngle, self.turnSegments[self.activeTurnSegmentIndex].endAngle)
        if v20 and v21 then
          -- if v22 then goto L133 end
        end
        -- if v17 >= v7 then goto L242 end
        if not v21 then
        end
        if not v22 then
        end
        -- goto L242  (LOP_JUMP +109)
        local v27 = math.cos(v12.startAngle)
        local v29 = math.sin(v12.startAngle)
        local v23, v24, v25 = localToWorld(v12.o, v12.radius * v27, 0, v12.radius * v29)
        v23 = MathUtil.vector2Length(v23 - originX, v25 - originZ)
        if v23 < v7 then
        end
        v27 = math.cos(v12.endAngle)
        v29 = math.sin(v12.endAngle)
        v23, v24, v25 = localToWorld(v12.o, v12.radius * v27, 0, v12.radius * v29)
        v23 = MathUtil.vector2Length(v23 - originX, v25 - originZ)
        -- if v23 >= v7 then goto L242 end
      else
        v13, v14, v15, v16 = MathUtil.getClosestPointOnLineSegment(self.turnSegments[self.activeTurnSegmentIndex].startPoint[1], 0, self.turnSegments[self.activeTurnSegmentIndex].startPoint[3], self.turnSegments[self.activeTurnSegmentIndex].endPoint[1], 0, self.turnSegments[self.activeTurnSegmentIndex].endPoint[3], originX, 0, originZ)
        v17 = MathUtil.vector2Length(v13 - originX, v15 - originZ)
        if v17 < math.huge then
          -- goto L242  (LOP_JUMP +1)
          return self.activeTurnSegmentIndex, v16
        end
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 242, target 16)
  end
  return collisionHitRight, turnData
end
function AITurnStrategy:createPointsForSegment(segmentIndex, segmentProgress, positions, posIndex, pointToPointDistance, remainingDistance, remainingPoints)
  if self.turnSegments[segmentIndex].isCurve then
    while true do
      -- if 0 >= v7 then goto L157 end
      -- if 0 >= v6 then goto L157 end
      v14 = MathUtil.sign(v8.endAngle - v9)
      if v8.startAngle < v8.endAngle then
        -- if v8.endAngle <= v9 + v5 / v10 * 2 * math.pi * v14 then goto L157 end
        -- if v9 + v5 / v10 * 2 * math.pi * v14 <= v8.startAngle then goto L157 end
      else
        -- if v9 + v5 / v10 * 2 * math.pi * v14 <= v8.endAngle then goto L157 end
        -- if v8.startAngle <= v9 + v5 / v10 * 2 * math.pi * v14 then goto L157 end
      end
      v14 = math.cos(v11)
      v15 = math.sin(v11)
      v17, v18, v19 = localToWorld(v8.o, v8.radius * v14, 0, v8.radius * v15)
      positions[posIndex + 1] = v17
      positions[posIndex + 2] = v18
      positions[posIndex + 3] = v19
      positions[posIndex + 2] = positions[2]
    end
  else
    local dist = MathUtil.vector2Length(self.turnSegments[segmentIndex].startPoint[1] - self.turnSegments[segmentIndex].endPoint[1], self.turnSegments[segmentIndex].startPoint[3] - self.turnSegments[segmentIndex].endPoint[3])
    while true do
      if not (0 < remainingPoints) then
        break
      end
      if not (0 < remainingDistance) then
        break
      end
      if not (v11 + pointToPointDistance / dist >= 0) then
        break
      end
      if not (1 >= v11 + pointToPointDistance / dist) then
        break
      end
      v13, v14, v15 = MathUtil.vector3ArrayLerp(v8.startPoint, v8.endPoint, v11 + pointToPointDistance / dist)
      positions[posIndex + 1] = v13
      positions[posIndex + 2] = positions[2]
      positions[posIndex + 3] = v15
    end
  end
  if 0 < remainingDistance then
    if self.turnSegments[segmentIndex + 1] ~= nil and self.turnSegments[segmentIndex + 1].moveForward then
      self:createPointsForSegment(segmentIndex + 1, 0, positions, posIndex, pointToPointDistance, remainingDistance, remainingPoints)
      return
    end
    if 3 <= posIndex then
      if v8.isCurve then
        v13 = MathUtil.sign(v8.endAngle - v8.startAngle)
        if v13 ~= 0 then
          local v20 = math.cos(v9 + 0.17453292519943295 * -v13)
          local v22 = math.sin(v9 + 0.17453292519943295 * -v13)
          local v16, v17, v18 = localToWorld(v8.o, v8.radius * v20, 0, v8.radius * v22)
          local v23 = math.cos(v9 + 0.17453292519943295 * v13)
          local v25 = math.sin(v9 + 0.17453292519943295 * v13)
          local v19, v20, v21 = localToWorld(v8.o, v8.radius * v23, 0, v8.radius * v25)
          local v22, v23, v24 = MathUtil.vector3Normalize(v16 - v19, v17 - v20, v18 - v21)
          -- goto L306  (LOP_JUMP +43)
        end
        v20, v21, v22 = MathUtil.vector3Normalize(positions[posIndex - 5] - positions[posIndex - 2], positions[posIndex - 4] - positions[posIndex - 1], positions[posIndex - 3] - positions[posIndex - 0])
      else
        v13, v14, v15 = MathUtil.vector3Normalize(v8.startPoint[1] - v8.endPoint[1], 0, v8.startPoint[3] - v8.endPoint[3])
      end
      -- TODO: structure LOP_FORNPREP (pc 316, target 332)
      positions[posIndex + 1] = positions[posIndex - 2] - dist * (0 + pointToPointDistance)
      positions[posIndex + 2] = positions[posIndex - 1] - v11 * (0 + pointToPointDistance)
      positions[posIndex + 3] = positions[posIndex - 0] - v12 * (0 + pointToPointDistance)
      -- TODO: structure LOP_FORNLOOP (pc 331, target 317)
    end
  end
end
function AITurnStrategy:calculatePathPrediction(positions, referenceNode, originX, originY, originZ, posIndex, pointToPointDistance, remainingDistance, remainingPoints)
  local dist, v11 = self:getActiveTurnSegmentByNode(referenceNode, originX, originY, originZ)
  if dist ~= nil then
    self:createPointsForSegment(dist, v11, positions, posIndex, pointToPointDistance, remainingDistance, remainingPoints)
  end
  if dist == nil then
  end
  return true
end
