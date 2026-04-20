-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategyDefaultReverse = {}
local AITurnStrategyDefaultReverse_mt = Class(AITurnStrategyDefaultReverse, AITurnStrategy)
function AITurnStrategyDefaultReverse.new(customMt)
  if customMt == nil then
  end
  local v1 = AITurnStrategy.new(customMt)
  v1.strategyName = "AITurnStrategyDefaultReverse"
  v1.isReverseStrategy = true
  local v2 = v1:createTurningSizeBox()
  v1.turnBox = v2
  return v1
end
function AITurnStrategyDefaultReverse:startTurn(driveStrategyStraight)
  local v3 = v3:superClass()
  local v2 = v3.startTurn(self, driveStrategyStraight)
  if not v2 then
    return false
  end
  if self.turnLeft then
  else
  end
  local v4 = self:getTurnRadius(v2.radius, v3)
  self:updateTurningSizeBox(self.turnBox, self.turnLeft, v2, 0)
  if 0 <= v3 then
  else
  end
  local v14 = math.abs(v3)
  local v13 = math.sqrt(2 * v4 * 2 * v4 - 2 * v14 * 2 * v14)
  if 0 <= v3 then
  else
  end
  v14 = math.acos(v12 / 2 * v4)
  local v16 = v16:getAIDirectionNode()
  local v15, v16, v17 = getWorldRotation(v16, 0, 0, 0)
  self:addNoFullCoverageSegment(self.turnSegments)
  local v19 = self:getVehicleToWorld(0, 0, -1, true)
  v19 = self:getVehicleToWorld(0, 0, 0, true)
  table.insert(self.turnSegments, {isCurve = false, moveForward = true, slowDown = true, startPoint = v19, endPoint = v19})
  v19 = createTransformGroup("segment1")
  local v20 = getRootNode()
  link(v20, {isCurve = true, moveForward = false, slowDown = true, usePredictionToSkipToNextSegment = false, radius = v4, o = v19}.o)
  local v21 = self:getVehicleToWorld(v6, v7, v8)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = false, slowDown = true, usePredictionToSkipToNextSegment = false, radius = v4, o = v19}.o, v15, v16, v17)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v18)
  v19 = createTransformGroup("segment2")
  v20 = getRootNode()
  link(v20, {isCurve = true, moveForward = true, slowDown = true, radius = v4, o = v19}.o)
  v21 = self:getVehicleToWorld(v9, v10, v11)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, slowDown = true, radius = v4, o = v19}.o, v15, v16, v17)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v18)
  if v2.zOffset >= v11 then
  end
  v18.moveForward = true
  if not v18.moveForward then
    self.turnSegments[#self.turnSegments].usePredictionToSkipToNextSegment = false
  end
  v18.slowDown = true
  v18.skipToNextSegmentDistanceThreshold = 0.001
  v20 = self:getVehicleToWorld(2 * v3, 0, v11, true)
  v18.startPoint = v20
  v20 = self:getVehicleToWorld(2 * v3, 0, v2.zOffset, true)
  v18.endPoint = v20
  table.insert(self.turnSegments, v18)
  self:startTurnFinalization()
  return true
end
function AITurnStrategyDefaultReverse:updateTurningSizeBox(box, turnLeft, turnData, lookAheadDistance)
  if turnLeft then
  else
  end
  local v6 = self:getTurnRadius(turnData.radius, v5)
  if 0 <= v5 then
  else
  end
  if 0 <= v5 then
  else
  end
  if 0 <= v5 then
    local v16 = math.max(turnData.toolOverhang.front.xt, turnData.toolOverhang.back.xt)
    local v19 = math.max(turnData.toolOverhang.front.zt, turnData.toolOverhang.front.xt, turnData.toolOverhang.front.xb, turnData.toolOverhang.front.zb)
    v16 = math.min(-v16, v7 - v19)
  else
    local v15 = math.max(turnData.toolOverhang.front.xt, turnData.toolOverhang.back.xt)
    v19 = math.max(turnData.toolOverhang.front.zt, turnData.toolOverhang.front.xt, turnData.toolOverhang.front.xb, turnData.toolOverhang.front.zb)
    v16 = math.max(v15, v7 + v19)
  end
  v15 = math.max(turnData.toolOverhang.front.zt, turnData.zOffset + turnData.toolOverhang.back.zt)
  box.center[1] = v13 - (v13 - v14) / 2
  box.center[2] = 0
  box.center[3] = v15 / 2 + lookAheadDistance / 2
  box.size[1] = (v13 - v14) / 2
  box.size[2] = 5
  box.size[3] = v15 / 2 + lookAheadDistance / 2
  self:adjustHeightOfTurningSizeBox(box)
end
