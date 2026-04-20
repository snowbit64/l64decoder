-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

OilPump = {}
local OilPump_mt = Class(OilPump)
function OilPump.onCreate(v0, v1)
  local v4 = OilPump.new(v1)
  v2:addUpdateable(...)
end
function OilPump.new(name)
  setmetatable({}, u0)
  local v2 = getChildAt({axisTable = {0, 0, 0}, me = name}.me, 1)
  v2 = getChildAt({axisTable = {0, 0, 0}, me = name, head = v2}.me, 2)
  v2 = getChildAt({axisTable = {0, 0, 0}, me = name, head = v2, cylinders = v2}.cylinders, 0)
  v2 = MathUtil.degToRad(40)
  local v4 = math.random()
  return {axisTable = {0, 0, 0}, me = name, head = v2, cylinders = v2, innerCylinders = v2, speed = 0.0012, zRotationMin = 0, zRotationMax = v2, timer = v4 * 2 * math.pi}
end
function OilPump.delete(v0)
end
function OilPump:update(dt)
  self.timer = self.timer + dt * 0.001
  if 2 * math.pi <= self.timer then
    self.timer = 0
  end
  local v4 = math.sin(self.timer)
  local v8 = math.cos(self.zRotationMax * (v4 + 1) / 2 - self.zRotationMax / 2)
  local v5 = MathUtil.degToRad(-(2.105 - 1.977 / v8) * 15)
  setRotation(self.head, 0, 0, self.zRotationMax * (v4 + 1) / 2)
  setRotation(self.cylinders, 0, 0, v5)
  setScale(self.innerCylinders, 1, 1 + 0.5 * (v4 + 1) / 2, 1)
end
