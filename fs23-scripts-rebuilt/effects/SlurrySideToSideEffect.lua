-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SlurrySideToSideEffect = {}
local SlurrySideToSideEffect_mt = Class(SlurrySideToSideEffect, ShaderPlaneEffect)
function SlurrySideToSideEffect.new(customMt)
  if customMt == nil then
  end
  return ShaderPlaneEffect.new(customMt)
end
function SlurrySideToSideEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = Effect.getValue(xmlFile, key, node, "refAnimation")
  self.refAnimation = v6
  v6 = Effect.getValue(xmlFile, key, node, "offset", 0.5)
  self.offset = v6
  return true
end
function SlurrySideToSideEffect:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v4 = v4:getAnimationTime(self.refAnimation)
  setShaderParameter(self.node, "fadeProgress", self.fadeCur[1], self.fadeCur[2], (v4 + self.offset) % 1, 0, false)
end
function SlurrySideToSideEffect:isRunning()
  local v2 = v2:superClass()
  local v1 = v2.isRunning(self)
  if not v1 and self.state ~= ShaderPlaneEffect.STATE_ON then
  end
  return v1
end
function SlurrySideToSideEffect:registerEffectXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#refAnimation", "(SlurrySideToSideEffect) Reference animation")
  self:register(XMLValueType.FLOAT, v1 .. "#offset", "(SlurrySideToSideEffect) Animation time offset", 0.5)
end
