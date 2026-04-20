-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TipEffect = {}
local TipEffect_mt = Class(TipEffect, Effect)
function TipEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.activeEffect = nil
  return v1
end
function TipEffect:load(xmlFile, baseName, rootNodes, parent, i3dMapping)
  local v6 = v6:loadEffect(xmlFile, baseName, rootNodes, parent, i3dMapping)
  self.effects = v6
  return self
end
function TipEffect:delete()
  for v4, v5 in ipairs(self.effects) do
    v5:delete()
  end
end
function TipEffect:update(dt)
  if self.activeEffect ~= nil then
    v2:update(dt)
  end
end
function TipEffect:isRunning()
  if self.activeEffect ~= nil then
    local v1 = v1:isRunning()
  end
  return v1
end
function TipEffect:start()
  local v1 = self:canStart()
  if v1 and self.activeEffect ~= nil then
    v1 = v1:start()
    return v1
  end
  return false
end
function TipEffect:stop()
  if self.activeEffect ~= nil then
    return v1:stop()
  end
  return false
end
function TipEffect:reset()
  for v4, v5 in ipairs(self.effects) do
    v5:reset()
  end
end
function TipEffect:setFillType(fillType, force)
  local v3 = v3:getPrioritizedEffectTypeByFillTypeIndex(fillType)
  if v3 ~= nil then
    for v7, v8 in ipairs(self.effects) do
      if not (v8.setFillType ~= nil) then
        continue
      end
      local v9 = ClassUtil.getClassNameByObject(v8)
      if not (v9 ~= nil) then
        continue
      end
      local v10 = v9:lower()
      local v11 = v3:lower()
      if not (v10 == v11) then
        continue
      end
      v10 = v8:setFillType(fillType, force)
      if not v10 then
        continue
      end
      self.activeEffect = v8
      return true
    end
  end
  for v8, v9 in ipairs(self.effects) do
    if not (v9.setFillType ~= nil) then
      continue
    end
    v10 = v9:setFillType(fillType, force)
    if not v10 then
      continue
    end
    self.activeEffect = v9
    return true
  end
  return v4
end
function TipEffect:setDistance(distance)
  if self.activeEffect ~= nil and self.activeEffect.setDistance ~= nil then
    v2:setDistance(distance)
  end
end
function TipEffect:getIsVisible()
  if self.activeEffect ~= nil and self.activeEffect.getIsVisible ~= nil then
    return v1:getIsVisible()
  end
  return false
end
function TipEffect:getIsFullyVisible()
  if self.activeEffect ~= nil and self.activeEffect.getIsFullyVisible ~= nil then
    return v1:getIsFullyVisible()
  end
  return false
end
function TipEffect:registerEffectXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. ".effectNode(?)#effectClass", "Effect class", "ShaderPlaneEffect")
  Effect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  LevelerEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  MorphPositionEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  ParticleEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  PipeEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  ShaderPlaneEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  SlurrySideToSideEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  WindrowerEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  GrainTankEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  CutterMotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  CultivatorMotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  PlowMotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  WindrowerMotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
  MotionPathEffect.registerEffectXMLPaths(self, v1 .. ".effectNode(?)")
end
