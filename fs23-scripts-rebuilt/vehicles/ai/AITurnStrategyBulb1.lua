-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategyBulb1 = {}
local AITurnStrategyBulb1_mt = Class(AITurnStrategyBulb1, AITurnStrategy)
function AITurnStrategyBulb1.new(customMt)
  if customMt == nil then
  end
  local v1 = AITurnStrategy.new(customMt)
  v1.strategyName = "AITurnStrategyBulb1"
  return v1
end
function AITurnStrategyBulb1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  self.maxTurningSizeBox = {}
  self.maxTurningSizeBox2 = {}
end
function AITurnStrategyBulb1:startTurn(driveStrategyStraight)
  local v3 = v3:superClass()
  local v2 = v3.startTurn(self, driveStrategyStraight)
  if not v2 then
    return false
  end
  if self.turnLeft then
  else
  end
  if 0 <= v3 then
    local v7, v8, v9 = self:getVehicleToWorld(-v2.radius, 0, v2.zOffsetTurn)
  else
    v7, v8, v9 = self:getVehicleToWorld(v2.radius, 0, v2.zOffsetTurn)
  end
  v9 = math.abs(v3)
  v8 = math.sqrt(2 * v2.radius * 2 * v2.radius - (v2.radius + v9) * (v2.radius + v9))
  local v9, v10, v11 = self:getVehicleToWorld(v3, 0, v8 + v2.zOffsetTurn)
  if 0 <= v3 then
    local v15, v16, v17 = self:getVehicleToWorld(2 * v3 + v2.radius, 0, v2.zOffsetTurn)
  else
    v15, v16, v17 = self:getVehicleToWorld(2 * v3 - v2.radius, 0, v2.zOffsetTurn)
  end
  v15 = math.atan(v8 / v7)
  v17 = v17:getAIDirectionNode()
  local v16, v17, v18 = getWorldRotation(v17, 0, 0, 0)
  self:addNoFullCoverageSegment(self.turnSegments)
  local v20 = self:getVehicleToWorld(0, 0, 0, true)
  v20 = self:getVehicleToWorld(0, 0, v2.zOffsetTurn, true)
  table.insert(self.turnSegments, {isCurve = false, moveForward = true, slowDown = true, startPoint = v20, endPoint = v20})
  local v21 = createTransformGroup("segment1")
  local v22 = getRootNode()
  link(v22, {isCurve = true, moveForward = true, radius = v2.radius, o = v21}.o)
  setTranslation({isCurve = true, moveForward = true, radius = v2.radius, o = v21}.o, v4, v5, v6)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v21}.o, v16, v17, v18)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v20)
  v22 = createTransformGroup("segment2")
  local v23 = getRootNode()
  link(v23, {isCurve = true, moveForward = true, radius = v2.radius, o = v22}.o)
  setTranslation({isCurve = true, moveForward = true, radius = v2.radius, o = v22}.o, v9, v10, v11)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v22}.o, v16, v17, v18)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v21)
  v23 = createTransformGroup("segment3")
  local v24 = getRootNode()
  link(v24, {isCurve = true, moveForward = true, radius = v2.radius, o = v23}.o)
  setTranslation({isCurve = true, moveForward = true, radius = v2.radius, o = v23}.o, v12, v13, v14)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v23}.o, v16, v17, v18)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v22)
  local v25 = self:getVehicleToWorld(2 * v3, 0, v2.zOffsetTurn, true)
  local v29 = math.min(v2.zOffset, v2.zOffsetTurn - 0.1)
  v25 = self:getVehicleToWorld(2 * v3, 0, v29, true)
  table.insert(self.turnSegments, {isCurve = false, moveForward = true, slowDown = true, startPoint = v25, endPoint = v25})
  self:startTurnFinalization()
  return true
end
function AITurnStrategyBulb1:updateTurningSizeBox(box, turnLeft, turnData, lookAheadDistance)
  if turnLeft then
  else
  end
  local v8 = math.abs(v5)
  local v7 = math.sqrt(2 * turnData.radius * 2 * turnData.radius - (turnData.radius + v8) * (turnData.radius + v8))
  local v11 = math.max(turnData.toolOverhang.front.xb, turnData.toolOverhang.back.xb)
  local v12 = math.max(turnData.toolOverhang.front.xt, turnData.toolOverhang.back.xt)
  local v13 = math.max(v11, turnData.radius + v12)
  box.center[1] = v5 + v11 - (v5 + v11 - v5 - v11) / 2
  box.center[2] = 0
  box.center[3] = (v7 + turnData.zOffsetTurn + v13) / 2 + lookAheadDistance / 2
  box.size[1] = (v5 + v11 - v5 - v11) / 2
  box.size[2] = 5
  box.size[3] = (v7 + turnData.zOffsetTurn + v13) / 2 + lookAheadDistance / 2
  self:adjustHeightOfTurningSizeBox(box)
end
