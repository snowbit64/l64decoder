-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategyHalfCircleReverse = {}
local AITurnStrategyHalfCircleReverse_mt = Class(AITurnStrategyHalfCircleReverse, AITurnStrategy)
function AITurnStrategyHalfCircleReverse.new(customMt)
  if customMt == nil then
  end
  local v1 = AITurnStrategy.new(customMt)
  v1.strategyName = "AITurnStrategyHalfCircleReverse"
  v1.usesExtraStraight = true
  v1.isReverseStrategy = true
  local v2 = v1:createTurningSizeBox()
  v1.turnBox = v2
  return v1
end
function AITurnStrategyHalfCircleReverse:startTurn(driveStrategyStraight)
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
  if 0 <= v3 then
  else
  end
  local v12 = v12:getAIDirectionNode()
  local v11, v12, v13 = getWorldRotation(v12, 0, 0, 0)
  local v14 = math.max(v2.toolOverhang.front.xb, v2.toolOverhang.back.xb)
  local v15 = math.max(v2.toolOverhang.front.zb, v2.toolOverhang.back.zb)
  local v16 = math.max(v2.toolOverhang.front.xt, v2.toolOverhang.back.xt)
  local v17 = math.max(v2.toolOverhang.front.zt, v2.toolOverhang.back.zt)
  local v18 = math.max(v14, v15, v2.radius + v16, v2.radius + v17)
  local v20 = math.max(0, v7 + v18 - v4)
  self:addNoFullCoverageSegment(self.turnSegments)
  if 0 >= v7 - v20 then
  end
  v21.moveForward = true
  v21.slowDown = true
  if v21.moveForward then
    v21.skipToNextSegmentDistanceThreshold = 3
  end
  local v22 = self:getVehicleToWorld(0, 0, 0, true)
  v21.startPoint = v22
  v22 = self:getVehicleToWorld(0, 0, v7 - v20, true)
  v21.endPoint = v22
  table.insert(self.turnSegments, v21)
  local v23 = createTransformGroup("segment1")
  local v24 = getRootNode()
  link(v24, {isCurve = true, moveForward = true, radius = v2.radius, o = v23}.o)
  local v25 = self:getVehicleToWorld(v5, v6, v7 - v20)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v23}.o, v11, v12, v13)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v22)
  v24 = self:getVehicleToWorld(v5, v6, v7 + v2.radius - v20, true)
  v24 = self:getVehicleToWorld(v8, v9, v10 + v2.radius - v20, true)
  table.insert(self.turnSegments, {isCurve = false, moveForward = true, skipToNextSegmentDistanceThreshold = 3, startPoint = v24, endPoint = v24})
  v25 = createTransformGroup("segment3")
  local v26 = getRootNode()
  link(v26, {isCurve = true, moveForward = true, radius = v2.radius, o = v25}.o)
  local v27 = self:getVehicleToWorld(v8, v9, v10 - v20)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v25}.o, v11, v12, v13)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v24)
  if v10 - 2 * v19 >= v10 - v20 then
  end
  v25.moveForward = true
  v25.slowDown = true
  v25.checkAlignmentToSkipSegment = true
  v27 = self:getVehicleToWorld(2 * v3, 0, v10 - v20, true)
  v25.startPoint = v27
  v27 = self:getVehicleToWorld(2 * v3, 0, v10 - 2 * v19, true)
  v25.endPoint = v27
  table.insert(self.turnSegments, v25)
  if v2.zOffset >= v10 - 2 * v19 then
  end
  v28.moveForward = true
  v28.slowDown = true
  v28.findEndOfField = true
  local v29 = self:getVehicleToWorld(v26, 0, v10 - 2 * v19, true)
  v28.startPoint = v29
  v29 = self:getVehicleToWorld(v26, 0, v27, true)
  v28.endPoint = v29
  table.insert(self.turnSegments, v28)
  self:startTurnFinalization()
  return true
end
function AITurnStrategyHalfCircleReverse:updateTurningSizeBox(box, turnLeft, turnData, lookAheadDistance)
  if turnLeft then
  else
  end
  if 0 <= v5 then
  else
  end
  if 0 <= v5 then
  else
  end
  local v12 = math.max(turnData.toolOverhang.front.xb, turnData.toolOverhang.back.xb)
  local v13 = math.max(turnData.toolOverhang.front.xt, turnData.toolOverhang.back.xt)
  if 0 <= v5 then
    local v16 = math.min(v6 - v12, -v13)
    v16 = math.max(v9 + v12, v9 + turnData.radius + v13)
  else
    v16 = math.max(v6 + v12, v13)
    v16 = math.min(v9 - v12, v9 - turnData.radius - v13)
  end
  box.center[1] = v14 - (v14 - v15) / 2
  box.center[2] = 0
  box.center[3] = turnData.toolOverhang.front.zt / 2 + lookAheadDistance / 2
  box.size[1] = (v14 - v15) / 2
  box.size[2] = 5
  box.size[3] = turnData.toolOverhang.front.zt / 2 + lookAheadDistance / 2
  self:adjustHeightOfTurningSizeBox(box)
end
