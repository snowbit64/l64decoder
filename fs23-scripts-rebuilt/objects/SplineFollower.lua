-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SplineFollower = {}
local SplineFollower_mt = Class(SplineFollower)
function SplineFollower.onCreate(v0, v1)
  SplineFollower.new(v1)
end
function SplineFollower.new(node)
  local v1 = setmetatable({}, u0)
  v1.spline = node
  local v2 = getChildAt(node, 0)
  v1.follower = v2
  v2 = getSplineLength(v1.spline)
  local v4 = getUserAttribute(node, "speed")
  local v3 = Utils.getNoNil(v4, 1)
  v1.speed = v3
  if v2 ~= 0 then
    v1.speed = v1.speed / v2
  end
  v1.speed = v1.speed / 1000
  v1.splinePos = 0
  v3:addUpdateable(v1)
  return v1
end
function SplineFollower.delete(v0)
end
function SplineFollower:update(dt)
  self.splinePos = self.splinePos + dt * self.speed
  if 1 < self.splinePos then
    self.splinePos = self.splinePos - 1
  end
  local v2, v3, v4 = getSplinePosition(self.spline, self.splinePos)
  setWorldTranslation(self.follower, v2, v3, v4)
end
