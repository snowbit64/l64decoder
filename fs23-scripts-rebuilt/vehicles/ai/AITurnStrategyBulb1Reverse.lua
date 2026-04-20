-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategyBulb1Reverse = {}
local AITurnStrategyBulb1Reverse_mt = Class(AITurnStrategyBulb1Reverse, AITurnStrategy)
function AITurnStrategyBulb1Reverse.new(customMt)
  if customMt == nil then
  end
  local v1 = AITurnStrategy.new(customMt)
  v1.strategyName = "AITurnStrategyBulb1Reverse"
  v1.isReverseStrategy = true
  local v2 = v1:createTurningSizeBox()
  v1.turnBox = v2
  return v1
end
function AITurnStrategyBulb1Reverse:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  self.maxTurningSizeBox = {}
  self.maxTurningSizeBox2 = {}
end
function AITurnStrategyBulb1Reverse:startTurn(driveStrategyStraight)
  local v3 = v3:superClass()
  local v2 = v3.startTurn(self, driveStrategyStraight)
  if not v2 then
    return false
  end
  if self.turnLeft then
  else
  end
  self:updateTurningSizeBox(self.turnBox, self.turnLeft, v2, 0)
  if 0 <= v3 then
  else
  end
  local v10 = math.abs(v3)
  local v9 = math.sqrt(2 * v2.radius * 2 * v2.radius - (v2.radius + v10) * (v2.radius + v10))
  if 0 <= v3 then
  else
  end
  local v16 = math.atan(v9 / v8)
  local v18 = v18:getAIDirectionNode()
  local v17, v18, v19 = getWorldRotation(v18, 0, 0, 0)
  local v20 = math.max(v2.toolOverhang.front.xb, v2.toolOverhang.back.xb)
  local v21 = math.max(v2.toolOverhang.front.xt, v2.toolOverhang.back.xt)
  local v22 = math.max(v20, 0, v2.radius + v21, v2.radius + 0)
  local v24 = math.max(0, v12 + v22 - v4)
  self:addNoFullCoverageSegment(self.turnSegments)
  if 0 >= v7 - v24 then
  end
  v25.moveForward = true
  v25.slowDown = true
  if v25.moveForward then
    v25.skipToNextSegmentDistanceThreshold = 3
  end
  local v26 = self:getVehicleToWorld(0, 0, 0, true)
  v25.startPoint = v26
  v26 = self:getVehicleToWorld(0, 0, v7 - v24, true)
  v25.endPoint = v26
  table.insert(self.turnSegments, v25)
  local v27 = createTransformGroup("segment1")
  local v28 = getRootNode()
  link(v28, {isCurve = true, moveForward = true, radius = v2.radius, o = v27}.o)
  local v29 = self:getVehicleToWorld(v5, v6, v7 - v24)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v27}.o, v17, v18, v19)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v26)
  v28 = createTransformGroup("segment2")
  v29 = getRootNode()
  link(v29, {isCurve = true, moveForward = true, radius = v2.radius, o = v28}.o)
  local v30 = self:getVehicleToWorld(v10, 0, v12 - v24)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v28}.o, v17, v18, v19)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v27)
  v29 = createTransformGroup("segment3")
  v30 = getRootNode()
  link(v30, {isCurve = true, moveForward = true, radius = v2.radius, o = v29}.o)
  local v31 = self:getVehicleToWorld(v13, v14, v15 - v24)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v29}.o, v17, v18, v19)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v28)
  if v15 - 2 * v23 >= v15 - v24 then
  end
  v29.moveForward = true
  v29.slowDown = true
  v29.checkAlignmentToSkipSegment = true
  v31 = self:getVehicleToWorld(2 * v3, 0, v15 - v24, true)
  v29.startPoint = v31
  v31 = self:getVehicleToWorld(2 * v3, 0, v15 - 2 * v23, true)
  v29.endPoint = v31
  table.insert(self.turnSegments, v29)
  if v2.zOffset >= v15 - 2 * v23 then
  end
  v32.moveForward = true
  v32.slowDown = true
  local v33 = self:getVehicleToWorld(v30, 0, v15 - 2 * v23, true)
  v32.startPoint = v33
  v33 = self:getVehicleToWorld(v30, 0, v31, true)
  v32.endPoint = v33
  table.insert(self.turnSegments, v32)
  self:startTurnFinalization()
  return true
end
function AITurnStrategyBulb1Reverse:updateTurningSizeBox(box, turnLeft, turnData, lookAheadDistance)
  if turnLeft then
  else
  end
  local v8 = math.abs(v5)
  local v7 = math.sqrt(2 * turnData.radius * 2 * turnData.radius - (turnData.radius + v8) * (turnData.radius + v8))
  local v11 = math.max(turnData.toolOverhang.front.xb, turnData.toolOverhang.back.xb)
  local v12 = math.max(turnData.toolOverhang.front.xt, turnData.toolOverhang.back.xt)
  local v13 = math.max(v11, turnData.radius + v12)
  local maxZ = math.max(turnData.toolOverhang.front.zt, turnData.zOffset + turnData.toolOverhang.back.zt)
  box.center[1] = v5 + v13 - (v5 + v13 - v5 - v13) / 2
  box.center[2] = 0
  box.center[3] = maxZ / 2 + lookAheadDistance / 2
  box.size[1] = (v5 + v13 - v5 - v13) / 2
  box.size[2] = 5
  box.size[3] = maxZ / 2 + lookAheadDistance / 2
  self:adjustHeightOfTurningSizeBox(box)
end
