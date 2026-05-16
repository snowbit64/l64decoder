-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BezierCurve = {}
local BezierCurve_mt = Class(BezierCurve)
function BezierCurve.new(positionX1, positionY1, positionX2, positionY2)
  local v4 = setmetatable({}, u0)
  local v5 = MathUtil.clamp(positionX1, 0, 1)
  v4.positionX1 = v5
  v4.positionY1 = positionY1
  v5 = MathUtil.clamp(positionX2, 0, 1)
  v4.positionX2 = v5
  v4.positionY2 = positionY2
  v4.cx = 0
  v4.bx = 0
  v4.ax = 0
  v4.cy = 0
  v4.by = 0
  v4.ay = 0
  v4:recalculateCoefficients()
  return v4
end
function BezierCurve:recalculateCoefficients()
  self.cx = 3 * self.positionX1
  self.bx = 3 * (self.positionX2 - self.positionX1) - self.cx
  self.ax = 1 - self.cx - self.bx
  self.cy = 3 * self.positionY1
  self.by = 3 * (self.positionY2 - self.positionY1) - self.cy
  self.ay = 1 - self.cy - self.by
end
function BezierCurve:setPositionX1(newValue)
  local v2 = MathUtil.clamp(newValue, 0, 1)
  self.positionX1 = v2
  self:recalculateCoefficients()
end
function BezierCurve:setPositionY1(newValue)
  local v2 = MathUtil.clamp(newValue, 0, 1)
  self.positionY1 = v2
  self:recalculateCoefficients()
end
function BezierCurve:setPositionX2(newValue)
  local v2 = MathUtil.clamp(newValue, 0, 1)
  self.positionX2 = v2
  self:recalculateCoefficients()
end
function BezierCurve:setPositionY2(newValue)
  local v2 = MathUtil.clamp(newValue, 0, 1)
  self.positionY2 = v2
  self:recalculateCoefficients()
end
function BezierCurve:sampleX(t)
  return ((self.ax * t + self.bx) * t + self.cx) * t
end
function BezierCurve:sampleY(t)
  return ((self.ay * t + self.by) * t + self.cy) * t
end
function BezierCurve:sampleDerivativeX(t)
  return (3 * self.ax * t + 2 * self.bx) * t + self.cx
end
function BezierCurve:solveX(x, epsilon)
  -- TODO: structure LOP_FORNPREP (pc 5, target 33)
  local v8 = self:sampleX(x)
  v8 = math.abs(v8 - x)
  if v8 < (epsilon or 0.000001) then
    return x
  end
  v8 = self:sampleDerivativeX(v3)
  local v9 = math.abs(v8)
  if v9 >= epsilon then
    -- TODO: structure LOP_FORNLOOP (pc 32, target 6)
  end
  if x < 0 then
    return 0
  end
  if v5 < v3 then
    return v5
  end
  while v4 < v5 do
    local v6 = self:sampleX(v3)
    local v7 = math.abs(v6 - x)
    if v7 < epsilon then
      return v3
    end
    if v6 < x then
    else
    end
  end
  return v3
end
function BezierCurve:solve(x, epsilon)
  local v5 = self:solveX(x, epsilon)
  return self:sampleY(...)
end
