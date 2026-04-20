-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InterpolatorPosition = {}
local InterpolatorPosition_mt = Class(InterpolatorPosition)
function InterpolatorPosition.new(positionX, positionY, positionZ, customMt)
  if customMt == nil then
  end
  setmetatable(v4, v5)
  v4.positionX = positionX
  v4.positionY = positionY
  v4.positionZ = positionZ
  v4.lastPositionX = positionX
  v4.lastPositionY = positionY
  v4.lastPositionZ = positionZ
  v4.targetPositionX = positionX
  v4.targetPositionY = positionY
  v4.targetPositionZ = positionZ
  return v4
end
function InterpolatorPosition:setPosition(x, y, z)
  self.positionX = x
  self.positionY = y
  self.positionZ = z
  self.lastPositionX = x
  self.lastPositionY = y
  self.lastPositionZ = z
  self.targetPositionX = x
  self.targetPositionY = y
  self.targetPositionZ = z
end
function InterpolatorPosition:setTargetPosition(x, y, z)
  self.targetPositionX = x
  self.targetPositionY = y
  self.targetPositionZ = z
  self.lastPositionX = self.positionX
  self.lastPositionY = self.positionY
  self.lastPositionZ = self.positionZ
end
function InterpolatorPosition:getInterpolatedValues(interpolationAlpha)
  self.positionX = self.lastPositionX + interpolationAlpha * (self.targetPositionX - self.lastPositionX)
  self.positionY = self.lastPositionY + interpolationAlpha * (self.targetPositionY - self.lastPositionY)
  self.positionZ = self.lastPositionZ + interpolationAlpha * (self.targetPositionZ - self.lastPositionZ)
  return self.positionX, self.positionY, self.positionZ
end
