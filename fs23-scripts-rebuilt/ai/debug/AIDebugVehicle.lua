-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIDebugVehicle = {}
local AIDebugVehicle_mt = Class(AIDebugVehicle)
function AIDebugVehicle:new(v1, v2)
  if not v2 then
  end
  local v3 = v3(v4, v5)
  v3.vehicle = self
  v3.agentInfo = self.spec_aiDrivable.agentInfo
  v3.color = v1
  local v4 = DebugFlag.new(v1[1], v1[2], v1[3])
  v3.targetFlag = v4
  v3.paths = {}
  return v3
end
function AIDebugVehicle.delete(v0)
end
function AIDebugVehicle:setTarget(x, y, z, dirX, dirY, dirZ)
  local v7 = DebugPath.new({1, 0, 0}, true, 1, false)
  v7:setColor(self.color[1] * (0.5 + #self.paths % 2 * 0.5), self.color[2] * (0.5 + #self.paths % 2 * 0.5), self.color[3] * (0.5 + #self.paths % 2 * 0.5))
  table.insert(self.paths, v7)
  v9:create(x, y, z, dirX or 1, dirZ or 0)
  self:addCurrentPosition()
end
function AIDebugVehicle:update(dt)
  self:addCurrentPosition()
end
function AIDebugVehicle:addCurrentPosition()
  local v1 = v1:getAIRootNode()
  local v2, v3, v4 = getWorldTranslation(v1)
  v5:addPoint(v2, v3, v4)
end
function AIDebugVehicle:draw(forcedY)
  for v5, v6 in ipairs(self.paths) do
    v6:draw(forcedY)
  end
  v2:draw()
end
function AIDebugVehicle:clear()
  for v4, v5 in ipairs(self.paths) do
    v5:clear()
  end
end
