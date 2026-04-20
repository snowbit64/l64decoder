-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategyVineyard = {}
local v0 = Class(AITurnStrategyVineyard, AITurnStrategy)
function AITurnStrategyVineyard.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3)
  v2.strategyName = "AITurnStrategyVineyard"
  v2.rootDriveStrategy = v0
  return v2
end
function AITurnStrategyVineyard:startTurn(v1)
  self.isTurning = true
  self.requestToEndTurn = false
  self:clearTurnSegments()
  self.turnSegmentsTotalLength = 0
  self.activeTurnSegmentIndex = 1
  if v1.placeable ~= nil then
    if v1.segmentIndex ~= nil and v1.nextSegmentIndex ~= nil then
      local v8, v9 = self.generateTurnSegments(self.rootDriveStrategy, self.vehicle, v1.placeable, v1.placeable.spec_fence.segments, v1.segmentIndex, v1.nextSegmentIndex, v1.nextSegmentSide, v1.segmentDirection)
      self.turnSegments = v8
      self.nextDirection = v9
      -- goto L61  (LOP_JUMP +5)
    end
    return false
  else
    return false
  end
  if not self.nextDirection then
  end
  v1.segmentDirection = v7
  v1:updateTurnData()
  v7:aiFieldWorkerStartTurn(self.turnLeft, self)
  self:startTurnFinalization()
  return true
end
function AITurnStrategyVineyard:generateTurnSegments(v1, v2, v3, v4, v5, v6, v7)
  local v12 = v1:getAIDirectionNode()
  local v11, v12, v13 = getWorldTranslation(...)
  local v15 = AIDriveStrategyVineyard.getSegmentOffset(v3[v4], v3[v5], 0)
  local v14 = math.abs(...)
  local v16, v17, v18, v19 = self:getSegmentTranslation(v3[v4], v7)
  local v20, v21 = MathUtil.vector2Normalize(v18 - v16, v19 - v17)
  local v22 = createTransformGroup("referenceNode")
  local v24 = getRootNode()
  link(v24, v22)
  setTranslation(v22, v18, 0, v19)
  setDirection(v22, v20, 0, v21, 0, 1, 0)
  local v23, v24, v25 = worldToLocal(v22, v3[v5].x1, 0, v3[v5].z1)
  local v26, v27, v28 = worldToLocal(v22, v3[v5].x2, 0, v3[v5].z2)
  if v25 < v28 then
  else
  end
  local v29, v30, v31, v32 = self:getSegmentTranslation(v9, v10, v6)
  local v33, v34, v35 = worldToLocal(v22, v29, 0, v30)
  local v36 = math.max(0, v35 + v15 + 1 - self.zOffset)
  if v33 >= 0 then
  end
  if 0 < v35 then
    table.insert({}, {isCurve = false, moveForward = true, slowDown = true, startPoint = {v18, v12, v19}, endPoint = {v18 + v20 * v35, v12, v19 + v21 * v35}})
  end
  local v41 = createTransformGroup("segment2")
  local v42 = getRootNode()
  link(v42, {isCurve = true, moveForward = true, slowDown = true, usePredictionToSkipToNextSegment = false, radius = v15, o = v41}.o)
  if v36 then
  else
  end
  local v43 = v43(v44, v15 * v46, 0, v35)
  v41(...)
  setDirection(v40.o, v20, 0, v21, 0, 1, 0)
  if v36 then
    v40.startAngle = 0
    v40.endAngle = 1.5707963267948966
  else
    v40.startAngle = 3.141592653589793
    v40.endAngle = 1.5707963267948966
  end
  table.insert(v39, v40)
  if v15 * 2 >= v14 then
  end
  v40.moveForward = true
  v40.slowDown = true
  if v36 then
  else
  end
  v42 = v42(v43, v15 * v45, 0, v35 + v15)
  v40.startPoint = {}
  local v46 = math.abs(v33)
  if v36 then
  else
  end
  v42 = v42(v43, v45 * v46, 0, v35 + v15)
  v40.endPoint = {}
  table.insert(v39, v40)
  v41 = createTransformGroup("segment3")
  v42 = getRootNode()
  link(v42, {isCurve = true, moveForward = true, checkForSkipToNextSegment = true, usePredictionToSkipToNextSegment = false, radius = v15, o = v41}.o)
  local v47 = math.abs(v33)
  if v36 then
  else
  end
  v43 = v43(v44, v46 * v47, 0, v35)
  v41(...)
  setDirection(v40.o, v20, 0, v21, 0, 1, 0)
  if v36 then
    v40.startAngle = 1.5707963267948966
    v40.endAngle = 3.141592653589793
  else
    v40.startAngle = 1.5707963267948966
    v40.endAngle = 0
  end
  table.insert(v39, v40)
  if self.allowTurnBackward then
    v42 = localToWorld(v22, v33, 0, v35)
    v42 = localToWorld(v22, v33, 0, v35 + v15 * 0.25)
    table.insert(v39, {isCurve = false, moveForward = false, slowDown = true, startPoint = {}, endPoint = {}})
  end
  if self.allowTurnBackward then
    v42 = localToWorld(v22, v33, 0, v35 + v15 * 0.5)
  else
    v42 = localToWorld(v22, v33, 0, v35)
  end
  v40.endPoint = {v29, v12, v30}
  table.insert(v39, v40)
  delete(v22)
  return v39, v10
end
function AITurnStrategyVineyard.updateTurningSizeBox(v0, v1, v2, v3, v4)
end
