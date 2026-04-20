-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategyBulb2Reverse = {}
local AITurnStrategyBulb2Reverse_mt = Class(AITurnStrategyBulb2Reverse, AITurnStrategy)
function AITurnStrategyBulb2Reverse.new(customMt)
  if customMt == nil then
  end
  local v1 = AITurnStrategy.new(customMt)
  v1.strategyName = "AITurnStrategyBulb2Reverse"
  v1.isReverseStrategy = true
  local v2 = v1:createTurningSizeBox()
  v1.turnBox = v2
  return v1
end
function AITurnStrategyBulb2Reverse:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  self.maxTurningSizeBox = {}
  self.maxTurningSizeBox2 = {}
end
function AITurnStrategyBulb2Reverse:startTurn(driveStrategyStraight)
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
  local v8 = math.acos(v10 / v2.radius)
  if 0 <= v3 then
  else
  end
  local v13 = math.sin(v8)
  v13 = v13:getAIDirectionNode()
  local v12, v13, v14 = getWorldRotation(...)
  local v15 = math.max(v2.toolOverhang.front.xb, v2.toolOverhang.back.xb)
  local v16 = math.max(v2.toolOverhang.front.xt, v2.toolOverhang.back.xt)
  local v17 = math.max(v15, 0, v2.radius + v16, v2.radius + 0)
  local v19 = math.max(0, v13 * 2 * v2.radius + v2.zOffsetTurn + v17 - v4)
  if 0 >= v13 * 2 * v2.radius + v2.zOffsetTurn - v19 then
  end
  v20.moveForward = true
  v20.slowDown = true
  if v20.moveForward then
    v20.skipToNextSegmentDistanceThreshold = 3
  end
  local v21 = self:getVehicleToWorld(0, 0, 0, true)
  v20.startPoint = v21
  v21 = self:getVehicleToWorld(0, 0, v11 - v19, true)
  v20.endPoint = v21
  table.insert(self.turnSegments, v20)
  local v22 = createTransformGroup("segment1")
  local v23 = getRootNode()
  link(v23, {isCurve = true, moveForward = true, radius = v2.radius, o = v22}.o)
  local v24 = self:getVehicleToWorld(v9, v10, v11 - v19)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v22}.o, v12, v13, v14)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v21)
  v23 = createTransformGroup("segment2")
  v24 = getRootNode()
  link(v24, {isCurve = true, moveForward = true, radius = v2.radius, o = v23}.o)
  local v25 = self:getVehicleToWorld(v5, v6, v7 - v19)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, radius = v2.radius, o = v23}.o, v12, v13, v14)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v22)
  if v7 - 2 * v18 >= v7 - v19 then
  end
  v23.moveForward = true
  v23.slowDown = true
  v23.checkAlignmentToSkipSegment = true
  v25 = self:getVehicleToWorld(2 * v3, 0, v7 - v19, true)
  v23.startPoint = v25
  v25 = self:getVehicleToWorld(2 * v3, 0, v7 - 2 * v18, true)
  v23.endPoint = v25
  table.insert(self.turnSegments, v23)
  if v2.zOffset >= v7 - 2 * v18 then
  end
  v26.moveForward = true
  v26.slowDown = true
  local v27 = self:getVehicleToWorld(v24, 0, v7 - 2 * v18, true)
  v26.startPoint = v27
  v27 = self:getVehicleToWorld(v24, 0, v25, true)
  v26.endPoint = v27
  table.insert(self.turnSegments, v26)
  self:startTurnFinalization()
  return true
end
function AITurnStrategyBulb2Reverse:updateTurningSizeBox(box, turnLeft, turnData, lookAheadDistance)
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
  local maxZ = math.max(turnData.toolOverhang.front.zt, turnData.zOffset + turnData.toolOverhang.back.zt)
  box.center[1] = v10 + v15 - (v10 + v15 - v10 - v15) / 2
  box.center[2] = 0
  box.center[3] = maxZ / 2 + lookAheadDistance / 2
  box.size[1] = (v10 + v15 - v10 - v15) / 2
  box.size[2] = 5
  box.size[3] = maxZ / 2 + lookAheadDistance / 2
  self:adjustHeightOfTurningSizeBox(box)
end
