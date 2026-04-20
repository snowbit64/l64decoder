-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategyHalfCircle = {}
local AITurnStrategyHalfCircle_mt = Class(AITurnStrategyHalfCircle, AITurnStrategy)
function AITurnStrategyHalfCircle.new(customMt)
  if customMt == nil then
  end
  local v1 = AITurnStrategy.new(customMt)
  v1.strategyName = "AITurnStrategyHalfCircle"
  v1.usesExtraStraight = true
  return v1
end
function AITurnStrategyHalfCircle:startTurn(driveStrategyStraight)
  local v3 = v3:superClass()
  local v2 = v3.startTurn(self, driveStrategyStraight)
  if not v2 then
    return false
  end
  if self.turnLeft then
  else
  end
  if 0 <= v3 then
    local v7, v8, v9 = self:getVehicleToWorld(v2.radius, 0, v2.zOffsetTurn)
  else
    v7, v8, v9 = self:getVehicleToWorld(-v2.radius, 0, v2.zOffsetTurn)
  end
  if 0 <= v3 then
    local v10, v11, v12 = self:getVehicleToWorld(2 * v2.sideOffsetLeft - v2.radius, 0, v2.zOffsetTurn)
  else
    v10, v11, v12 = self:getVehicleToWorld(2 * v2.sideOffsetRight + v2.radius, 0, v2.zOffsetTurn)
  end
  v11 = v11:getAIDirectionNode()
  v10, v11, v12 = getWorldRotation(v11, 0, 0, 0)
  self:addNoFullCoverageSegment(self.turnSegments)
  local v14 = self:getVehicleToWorld(0, 0, 0, true)
  v14 = self:getVehicleToWorld(0, 0, v2.zOffsetTurn, true)
  table.insert(self.turnSegments, {isCurve = false, moveForward = true, slowDown = true, startPoint = v14, endPoint = v14})
  local v15 = createTransformGroup("segment1")
  local v16 = getRootNode()
  link(v16, {isCurve = true, moveForward = true, radius = v2.radius, o = v15}.o)
  setTranslation({isCurve = true, moveForward = true, radius = v2.radius, o = v15}.o, v4, v5, v6)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v15}.o, v10, v11, v12)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v14)
  local v17 = v17:getAIDirectionNode()
  local v16, v17, v18 = localDirectionToWorld(v17, 0, 0, v2.radius)
  table.insert(self.turnSegments, {isCurve = false, moveForward = true, skipToNextSegmentDistanceThreshold = 3, startPoint = {v4 + v16, v5 + v17, v6 + v18}, endPoint = {v7 + v16, v8 + v17, v9 + v18}})
  local v20 = createTransformGroup("segment3")
  local v21 = getRootNode()
  link(v21, {isCurve = true, moveForward = true, radius = v2.radius, o = v20}.o)
  setTranslation({isCurve = true, moveForward = true, radius = v2.radius, o = v20}.o, v7, v8, v9)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v20}.o, v10, v11, v12)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v19)
  v21 = self:getVehicleToWorld(2 * v3, 0, v2.zOffsetTurn, true)
  local v25 = math.min(v2.zOffset, v2.zOffsetTurn - 0.1)
  v21 = self:getVehicleToWorld(2 * v3, 0, v25, true)
  table.insert(self.turnSegments, {isCurve = false, moveForward = true, sowDown = true, startPoint = v21, endPoint = v21})
  self:startTurnFinalization()
  return true
end
function AITurnStrategyHalfCircle:updateTurningSizeBox(box, turnLeft, turnData, lookAheadDistance)
  if turnLeft then
  else
  end
  if 0 <= v5 then
  else
  end
  if 0 <= v5 then
  else
  end
  local v10 = math.max(turnData.toolOverhang.front.xb, turnData.toolOverhang.back.xb)
  local v11 = math.max(turnData.toolOverhang.front.zb, turnData.toolOverhang.back.zb)
  local v12 = math.max(turnData.toolOverhang.front.xt, turnData.toolOverhang.back.xt)
  if 0 <= v5 then
    local v15 = math.min(-v10, -v12)
    v15 = math.max(v8 + v10, v8 + turnData.radius + v12)
  else
    v15 = math.max(v10, v12)
    v15 = math.min(v8 - v10, v8 - turnData.radius - v12)
  end
  v15 = math.max(v7 + v11, v7 + turnData.radius + v12)
  box.center[1] = v13 - (v13 - v14) / 2
  box.center[2] = 0
  box.center[3] = v15 / 2 + lookAheadDistance / 2
  box.size[1] = (v13 - v14) / 2
  box.size[2] = 5
  box.size[3] = v15 / 2 + lookAheadDistance / 2
  self:adjustHeightOfTurningSizeBox(box)
end
