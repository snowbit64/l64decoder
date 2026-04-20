-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategyDefault = {}
local AITurnStrategyDefault_mt = Class(AITurnStrategyDefault, AITurnStrategy)
function AITurnStrategyDefault.new(customMt)
  if customMt == nil then
  end
  local v1 = AITurnStrategy.new(customMt)
  v1.strategyName = "AITurnStrategyDefault"
  return v1
end
function AITurnStrategyDefault:startTurn(driveStrategyStraight)
  local v3 = v3:superClass()
  local v2 = v3.startTurn(self, driveStrategyStraight)
  if not v2 then
    return false
  end
  if self.turnLeft then
  else
  end
  local v4 = self:getTurnRadius(v2.radius, v3)
  if 0 <= v3 then
  else
  end
  local v13 = math.abs(v3)
  local v12 = math.sqrt(2 * v4 * 2 * v4 - 2 * v13 * 2 * v13)
  if 0 <= v3 then
  else
  end
  v13 = math.acos(v11 / 2 * v4)
  if 0 <= v3 then
  else
  end
  local v20 = math.sqrt(2 * v4 * 2 * v4 - v12 / 2 * v12 / 2)
  if 0 <= v3 then
  else
  end
  local v21 = math.acos(v20 / 2 * v4)
  local v23 = v23:getAIDirectionNode()
  local v22, v23, v24 = getWorldRotation(v23, 0, 0, 0)
  self:addNoFullCoverageSegment(self.turnSegments)
  if 0 < v2.zOffsetTurn then
    local v26 = self:getVehicleToWorld(0, 0, 0, true)
    v26 = self:getVehicleToWorld(0, 0, v2.zOffsetTurn, true)
    table.insert(self.turnSegments, {isCurve = false, moveForward = true, slowDown = true, startPoint = v26, endPoint = v26})
  end
  v26 = createTransformGroup("segment1")
  local v27 = getRootNode()
  link(v27, {isCurve = true, moveForward = true, slowDown = true, usePredictionToSkipToNextSegment = false, radius = v4, o = v26}.o)
  local v28 = self:getVehicleToWorld(v5, v6, v7)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, slowDown = true, usePredictionToSkipToNextSegment = false, radius = v4, o = v26}.o, v22, v23, v24)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v25)
  v27 = createTransformGroup("segment2")
  v28 = getRootNode()
  link(v28, {isCurve = true, moveForward = false, slowDown = true, usePredictionToSkipToNextSegment = false, radius = v4, o = v27}.o)
  local v29 = self:getVehicleToWorld(v8, v9, v10)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = false, slowDown = true, usePredictionToSkipToNextSegment = false, radius = v4, o = v27}.o, v22, v23, v24)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v26)
  v28 = createTransformGroup("segment3")
  v29 = getRootNode()
  link(v29, {isCurve = true, moveForward = true, slowDown = true, radius = v4, o = v28}.o)
  local v30 = self:getVehicleToWorld(v17, v18, v19)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, slowDown = true, radius = v4, o = v28}.o, v22, v23, v24)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v27)
  v29 = createTransformGroup("segment4")
  v30 = getRootNode()
  link(v30, {isCurve = true, moveForward = true, slowDown = true, radius = v4, o = v29}.o)
  local v31 = self:getVehicleToWorld(v14, v15, v16)
  setTranslation(...)
  setRotation({isCurve = true, moveForward = true, slowDown = true, radius = v4, o = v29}.o, v22, v23, v24)
  if 0 <= v3 then
  else
  end
  table.insert(self.turnSegments, v28)
  v30 = math.min(v16 - 0.05, v2.zOffset)
  if v30 >= v16 then
  end
  v29.moveForward = true
  v29.slowDown = true
  local v32 = self:getVehicleToWorld(2 * v3, 0, v16, true)
  v29.startPoint = v32
  v32 = self:getVehicleToWorld(2 * v3, 0, v30, true)
  v29.endPoint = v32
  table.insert(self.turnSegments, v29)
  self:startTurnFinalization()
  return true
end
function AITurnStrategyDefault:updateTurningSizeBox(box, turnLeft, turnData, lookAheadDistance)
  if turnLeft then
  else
  end
  local v6 = self:getTurnRadius(turnData.radius, v5)
  if 0 <= v5 then
  else
  end
  local v11 = math.abs(v5)
  local v10 = math.sqrt(2 * v6 * 2 * v6 - 2 * v11 * 2 * v11)
  local v12 = math.acos(2 * v11 / 2 * v6)
  local v13 = math.sqrt(2 * v6 * 2 * v6 - v10 / 2 * v10 / 2)
  v13 = math.acos(v13 / 2 * v6)
  local v15 = math.max(v12 - turnData.toolOverhang.front.zt / 2 * math.pi * v6 * 2 * math.pi, 0)
  if 0 <= v5 then
    local v20 = math.cos(v15)
    local v17 = math.min(-turnData.toolOverhang.front.xt, -turnData.toolOverhang.back.xt)
    -- if v3.allToolsAtFront then goto L206 end
    v17 = math.min(v17, v7 - turnData.toolOverhang.back.xb)
  else
    v20 = math.cos(v15)
    v17 = math.max(turnData.toolOverhang.front.xt, turnData.toolOverhang.back.xt)
    if not turnData.allToolsAtFront then
      v17 = math.max(v17, v7 + turnData.toolOverhang.back.xb)
    end
  end
  local v19 = math.max(turnData.toolOverhang.front.zb, turnData.toolOverhang.back.zb)
  local v22 = math.sin(v13)
  v17 = math.max(v8 + v19, v11 - v22 * v6 + turnData.toolOverhang.back.zt)
  box.center[1] = v15 - (v15 - v16) / 2
  box.center[2] = 0
  box.center[3] = v17 / 2 + lookAheadDistance / 2
  box.size[1] = (v15 - v16) / 2
  box.size[2] = 5
  box.size[3] = v17 / 2 + lookAheadDistance / 2
  self:adjustHeightOfTurningSizeBox(box)
end
