-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Rotator = {}
local Rotator_mt = Class(Rotator)
function Rotator.onCreate(v0, v1)
  local v4 = Rotator.new(v1)
  v2:addUpdateable(...)
end
function Rotator.new(name)
  setmetatable({}, u0)
  local v3 = getUserAttribute(name, "speed")
  local v2 = Utils.getNoNil(v3, 0.0012)
  v3 = getUserAttribute(name, "axis")
  v2 = Utils.getNoNil(v3, 3)
  {axisTable = {0, 0, 0}, me = name, speed = v2}.axisTable[v2] = 1
  return {axisTable = {0, 0, 0}, me = name, speed = v2}
end
function Rotator.delete(v0)
end
function Rotator:update(dt)
  rotate(self.me, self.axisTable[1] * self.speed * dt, self.axisTable[2] * self.speed * dt, self.axisTable[3] * self.speed * dt)
end
