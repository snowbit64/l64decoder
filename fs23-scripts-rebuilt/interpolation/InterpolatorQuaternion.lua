-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InterpolatorQuaternion = {}
local InterpolatorQuaternion_mt = Class(InterpolatorQuaternion)
function InterpolatorQuaternion.new(qx, qy, qz, qw, customMt)
  if customMt == nil then
  end
  setmetatable(v5, v6)
  v5.quaternionX = qx
  v5.quaternionY = qy
  v5.quaternionZ = qz
  v5.quaternionW = qw
  v5.lastQuaternionX = qx
  v5.lastQuaternionY = qy
  v5.lastQuaternionZ = qz
  v5.lastQuaternionW = qw
  v5.targetQuaternionX = qx
  v5.targetQuaternionY = qy
  v5.targetQuaternionZ = qz
  v5.targetQuaternionW = qw
  return v5
end
function InterpolatorQuaternion:setQuaternion(qx, qy, qz, qw)
  self.quaternionX = qx
  self.quaternionY = qy
  self.quaternionZ = qz
  self.quaternionW = qw
  self.lastQuaternionX = qx
  self.lastQuaternionY = qy
  self.lastQuaternionZ = qz
  self.lastQuaternionW = qw
  self.targetQuaternionX = qx
  self.targetQuaternionY = qy
  self.targetQuaternionZ = qz
  self.targetQuaternionW = qw
end
function InterpolatorQuaternion:setTargetQuaternion(qx, qy, qz, qw)
  self.targetQuaternionX = qx
  self.targetQuaternionY = qy
  self.targetQuaternionZ = qz
  self.targetQuaternionW = qw
  self.lastQuaternionX = self.quaternionX
  self.lastQuaternionY = self.quaternionY
  self.lastQuaternionZ = self.quaternionZ
  self.lastQuaternionW = self.quaternionW
end
function InterpolatorQuaternion:getInterpolatedValues(interpolationAlpha)
  local v2, v3, v4, v5 = MathUtil.nlerpQuaternionShortestPath(self.lastQuaternionX, self.lastQuaternionY, self.lastQuaternionZ, self.lastQuaternionW, self.targetQuaternionX, self.targetQuaternionY, self.targetQuaternionZ, self.targetQuaternionW, interpolationAlpha)
  self.quaternionX = v2
  self.quaternionY = v3
  self.quaternionZ = v4
  self.quaternionW = v5
  return self.quaternionX, self.quaternionY, self.quaternionZ, self.quaternionW
end
