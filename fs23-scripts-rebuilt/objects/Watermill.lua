-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Watermill = {}
local Watermill_mt = Class(Watermill)
function Watermill.onCreate(v0, v1)
  local v4 = Watermill.new(v1)
  v2:addUpdateable(...)
end
function Watermill.new(name)
  setmetatable({}, u0)
  local v2 = getChildAt(name, 0)
  return {wheelId = v2}
end
function Watermill.delete(v0)
end
function Watermill:update(dt)
  rotate(self.wheelId, -0.0005 * dt, 0, 0)
end
