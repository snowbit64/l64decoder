-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SplineUtil = {}
function SplineUtil.getValidSplineTime(v0)
  return v0 % 1
end
function SplineUtil.getSplineTimeAtWorldPos(spline, t, posX, posZ, checkDistance, maxSteps)
  local splineLength = getSplineLength(spline)
  while true do
    v9 = SplineUtil.getValidSplineTime(t + v7)
    v10 = SplineUtil.getValidSplineTime(t - v7)
    v11, v12, v13 = getSplinePosition(spline, v9)
    v14, v15, v16 = getSplinePosition(spline, v10)
    v17 = MathUtil.vector2LengthSq(posX - v11, posZ - v13)
    v18 = MathUtil.vector2LengthSq(posX - v14, posZ - v16)
    if v17 < v18 then
      v19 = SplineUtil.getValidSplineTime(t + v7 * 0.5)
    else
      v19 = SplineUtil.getValidSplineTime(t - v7 * 0.5)
    end
    if not (maxSteps >= v8) then
      break
    end
  end
  return t, v8
end
function SplineUtil.getSplineTimeFromNode(spline, node, checkDistance)
  if spline ~= nil and node ~= nil then
    local v5, v6, v7 = getSplinePosition(spline, 0)
    if v5 == nil then
      local v10 = getName(spline)
      Logging.error(...)
      return 0
    end
    local v11 = getSplineLength(spline)
    -- TODO: structure LOP_FORNPREP (pc 31, target 54)
    local v11, v12, v13 = getSplinePosition(spline, 0)
    if v11 ~= nil then
      local v14, v15, v16 = getWorldTranslation(node)
      local v17 = MathUtil.vector3Length(v11 - v14, v12 - v15, v13 - v16)
      if v17 < v3 then
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 53, target 32)
  end
  return v4
end
function SplineUtil.getSlopeAngle(spline, splineTime)
  local v2, v3, v4 = getSplineDirection(spline, splineTime)
  local v8 = MathUtil.vector3Length(v2, v3, v4)
  local v6 = math.acos(v3 / v8)
  return v6 - 0.5 * math.pi
end
