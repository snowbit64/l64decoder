-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategyBulb2 = {}
local AITurnStrategyBulb2_mt = Class(AITurnStrategyBulb2, AITurnStrategy)
function AITurnStrategyBulb2.new(customMt)
  if customMt == nil then
  end
  local v1 = AITurnStrategy.new(customMt)
  v1.strategyName = "AITurnStrategyBulb2"
  return v1
end
function AITurnStrategyBulb2:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  self.maxTurningSizeBox = {}
  self.maxTurningSizeBox2 = {}
end
function AITurnStrategyBulb2:startTurn(driveStrategyStraight)
  local v3 = v3:superClass()
  local v2 = v3.startTurn(self, driveStrategyStraight)
  if not v2 then
    return false
  end
  if self.turnLeft then
  else
  end
  if 0 <= v3 then
  else
  end
  local v9 = math.abs(v3)
  local v7 = math.acos(v9 / v2.radius)
  if 0 <= v3 then
  else
  end
  local v12 = math.sin(v7)
  v12 = v12:getAIDirectionNode()
  local v11, v12, v13 = getWorldRotation(...)
  local v15 = self:getVehicleToWorld(0, 0, 0, true)
  v15 = self:getVehicleToWorld(0, 0, v12 * 2 * v2.radius + v2.zOffsetTurn, true)
  table.insert(self.turnSegments, {isCurve = false, moveForward = true, slowDown = true, startPoint = v15, endPoint = v15})
  local v16 = createTransformGroup("segment1")
  local v17 = getRootNode()
  link(v17, {isCurve = true, moveForward = true, radius = v2.radius, o = v16}.o)
  local v18 = self:getVehicleToWorld(v8, 0, v12 * 2 * v2.radius + v2.zOffsetTurn)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v16}.o, v11, v12, v13)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v15)
  v17 = createTransformGroup("segment2")
  v18 = getRootNode()
  link(v18, {isCurve = true, moveForward = true, radius = v2.radius, o = v17}.o)
  local v19 = self:getVehicleToWorld(v4, v5, v6)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v17}.o, v11, v12, v13)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v16)
  v19 = self:getVehicleToWorld(2 * v3, 0, v6, true)
  local v23 = math.min(v2.zOffset, v6 - 0.1)
  v19 = self:getVehicleToWorld(2 * v3, 0, v23, true)
  table.insert(self.turnSegments, {isCurve = false, moveForward = true, slowDown = true, startPoint = v19, endPoint = v19})
  self:startTurnFinalization()
  return true
end
function AITurnStrategyBulb2:updateTurningSizeBox(box, turnLeft, turnData, lookAheadDistance)
  if turnLeft then
  else
  end
  if 0 <= v5 then
  else
  end
  local v11 = math.abs(v5)
  local v9 = math.acos(v11 / turnData.radius)
  if 0 <= v5 then
  else
  end
  local v14 = math.sin(v9)
  local v13 = math.max(turnData.toolOverhang.front.xb, turnData.toolOverhang.back.xb)
  v14 = math.max(turnData.toolOverhang.front.xt, turnData.toolOverhang.back.xt)
  local v15 = math.max(v13, turnData.radius + v14)
  box.center[1] = v10 + v15 - (v10 + v15 - v10 - v15) / 2
  box.center[2] = 0
  box.center[3] = (v14 * 2 * turnData.radius + turnData.zOffsetTurn + v15) / 2 + lookAheadDistance / 2
  box.size[1] = (v10 + v15 - v10 - v15) / 2
  box.size[2] = 5
  box.size[3] = (v14 * 2 * turnData.radius + turnData.zOffsetTurn + v15) / 2 + lookAheadDistance / 2
  self:adjustHeightOfTurningSizeBox(box)
end
