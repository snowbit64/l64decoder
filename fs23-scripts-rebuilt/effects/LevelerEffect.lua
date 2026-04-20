-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LevelerEffect = {}
local LevelerEffect_mt = Class(LevelerEffect, ShaderPlaneEffect)
function LevelerEffect.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function LevelerEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v7 = Effect.getValue(xmlFile, key, node, "speed", 1)
  self.speed = v7 * 0.001
  v6 = Effect.getValue(xmlFile, key, node, "minHeight", -0.5)
  self.minHeight = v6
  v6 = Effect.getValue(xmlFile, key, node, "maxHeight", 1)
  self.maxHeight = v6
  self.scrollPosition = 0
  self.depthTarget = 0
  self.fillLevel = 0
  self.lastVehicleSpeed = 0
  return true
end
function LevelerEffect:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.state == ShaderPlaneEffect.STATE_ON then
    setVisibility(self.node, true)
    if self.depthTarget < self.fillLevel then
      local v2 = math.min(self.fillLevel, self.depthTarget + 0.001 * dt)
      self.depthTarget = v2
    elseif self.fillLevel < self.depthTarget then
      v2 = math.max(self.fillLevel, self.depthTarget - 0.001 * dt)
      self.depthTarget = v2
    end
    self.scrollPosition = self.scrollPosition + self.lastVehicleSpeed * self.speed
    setShaderParameter(self.node, "VertxoffsetVertexdeformMotionUVscale", self.maxHeight, self.minHeight + self.depthTarget * (self.maxHeight - self.minHeight), self.scrollPosition, 6, false)
    return
  end
  setVisibility(self.node, false)
end
function LevelerEffect:isRunning()
  local v2 = v2:superClass()
  local dt = v2.isRunning(self)
  if not dt and self.state ~= ShaderPlaneEffect.STATE_ON then
  end
  return dt
end
function LevelerEffect:setFillLevel(fillLevel)
  self.fillLevel = fillLevel
end
function LevelerEffect:setLastVehicleSpeed(speed)
  self.lastVehicleSpeed = speed
end
function LevelerEffect:registerEffectXMLPaths(dt)
  self:register(XMLValueType.FLOAT, dt .. "#speed", "speed", 1)
  self:register(XMLValueType.FLOAT, dt .. "#minHeight", "(LevelerEffect) Min. height", -0.5)
  self:register(XMLValueType.FLOAT, dt .. "#maxHeight", "(LevelerEffect) Max. height", 1)
end
