-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GrainTankEffect = {}
local GrainTankEffect_mt = Class(GrainTankEffect, ShaderPlaneEffect)
function GrainTankEffect.new(customMt)
  if customMt == nil then
  end
  return ShaderPlaneEffect.new(customMt)
end
function GrainTankEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = Effect.getValue(xmlFile, key, node, "minVisHeight", -math.huge)
  self.minVisHeight = v6
  v6 = Effect.getValue(xmlFile, key, node, "maxVisHeight", math.huge)
  self.maxVisHeight = v6
  return true
end
function GrainTankEffect:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2, v3, v4 = getTranslation(self.node)
  if self.minVisHeight < v3 and v3 >= self.maxVisHeight then
  end
  v5(v6, v7)
end
function GrainTankEffect:registerEffectXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. "#minVisHeight", "(GrainTankEffect) Min. height to bis visibile", "-inf")
  self:register(XMLValueType.FLOAT, v1 .. "#maxVisHeight", "(GrainTankEffect) Max. height to bis visibile", "inf")
end
