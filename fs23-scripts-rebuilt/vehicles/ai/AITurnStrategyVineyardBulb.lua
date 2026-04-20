-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITurnStrategyVineyardBulb = {}
local v0 = Class(AITurnStrategyVineyardBulb, AITurnStrategyVineyard)
function AITurnStrategyVineyardBulb.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2.strategyName = "AITurnStrategyVineyardBulb"
  return v2
end
function AITurnStrategyVineyardBulb:generateTurnSegments(v1, v2, v3, v4, v5, v6, v7)
  local v12, v13, v14, v15 = self:getSegmentTranslation(v3[v4], v7)
  local v16, v17 = MathUtil.vector2Normalize(v14 - v12, v15 - v13)
  local v18 = createTransformGroup("referenceNode")
  local v20 = getRootNode()
  link(v20, v18)
  setTranslation(v18, v14, 0, v15)
  setDirection(v18, v16, 0, v17, 0, 1, 0)
  local v19, v20, v21 = worldToLocal(v18, v3[v5].x1, 0, v3[v5].z1)
  local v22, v23, v24 = worldToLocal(v18, v3[v5].x2, 0, v3[v5].z2)
  if v21 < v24 then
  else
  end
  local v25, v26, v27, v28 = self:getSegmentTranslation(v9, v10, v6)
  local v29, v30, v31 = worldToLocal(v18, v25, 0, v26)
  local v33 = math.max(0, v31 + v11 + 1 - self.zOffset)
  v33 = math.abs(v29)
  if v11 * 2 < v33 then
    delete(v18)
    v33 = AITurnStrategyVineyard.generateTurnSegments(self, v1, v2, v3, v4, v5, v6, v7)
    return v33
  end
  if 0 <= v29 then
    local v37, v38, v39 = localToWorld(v18, -v11, 0, v31)
  else
    v37, v38, v39 = localToWorld(v18, v11, 0, v31)
  end
  v38 = math.abs(v29 * 0.5)
  v38 = math.sqrt(2 * v11 * 2 * v11 - (v11 + v38) * (v11 + v38))
  local v39, v40, v41 = localToWorld(v18, v29 * 0.5, 0, v38 + v31)
  if 0 <= v29 then
    local v45, v46, v47 = localToWorld(v18, v29 + v11, 0, v31)
  else
    v45, v46, v47 = localToWorld(v18, v29 - v11, 0, v31)
  end
  v45 = math.atan(v38 / v37)
  local v46, v47, v48 = getWorldRotation(v18)
  if 0 < v31 then
    local v51 = localToWorld(v18, 0, 0, 0)
    v51 = localToWorld(v18, 0, 0, v31)
    table.insert(v33, {isCurve = false, moveForward = true, slowDown = true, startPoint = {}, endPoint = {}})
  end
  local v50 = createTransformGroup("segment1")
  v51 = getRootNode()
  link(v51, {isCurve = true, moveForward = true, radius = v11, o = v50}.o)
  setTranslation({isCurve = true, moveForward = true, radius = v11, o = v50}.o, v34, v35, v36)
  setRotation({isCurve = true, moveForward = true, radius = v11, o = v50}.o, v46, v47, v48)
  if 0 <= v29 then
  else
  end
  table.insert(v33, v49)
  v50 = createTransformGroup("segment2")
  v51 = getRootNode()
  link(v51, {isCurve = true, moveForward = true, radius = v11, o = v50}.o)
  setTranslation({isCurve = true, moveForward = true, radius = v11, o = v50}.o, v39, v40, v41)
  setRotation({isCurve = true, moveForward = true, radius = v11, o = v50}.o, v46, v47, v48)
  if 0 <= v29 then
  else
  end
  table.insert(v33, v49)
  v50 = createTransformGroup("segment3")
  v51 = getRootNode()
  link(v51, {isCurve = true, moveForward = true, radius = v11, o = v50}.o)
  setTranslation({isCurve = true, moveForward = true, radius = v11, o = v50}.o, v42, v43, v44)
  setRotation({isCurve = true, moveForward = true, radius = v11, o = v50}.o, v46, v47, v48)
  if 0 <= v29 then
  else
  end
  table.insert(v33, v49)
  v51 = localToWorld(v18, v29, 0, v31)
  v51 = localToWorld(v18, v29, 0, v32)
  table.insert(v33, {isCurve = false, moveForward = true, slowDown = true, startPoint = {}, endPoint = {}})
  delete(v18)
  return v33, v10
end
function AITurnStrategyVineyardBulb.updateTurningSizeBox(v0, v1, v2, v3, v4)
end
