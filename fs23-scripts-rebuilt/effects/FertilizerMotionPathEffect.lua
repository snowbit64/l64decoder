-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FertilizerMotionPathEffect = {}
local FertilizerMotionPathEffect_mt = Class(FertilizerMotionPathEffect, TypedMotionPathEffect)
function FertilizerMotionPathEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.isLeft = false
  return v1
end
function FertilizerMotionPathEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = xmlFile:getValue(key .. ".motionPathEffect#isLeft", self.isLeft)
  self.isLeft = v6
  self.smoothY1 = nil
  self.smoothY2 = nil
  return true
end
function FertilizerMotionPathEffect:update(dt)
  if self.state ~= MotionPathEffect.STATE_TURNING_ON then
    -- if v0.state ~= MotionPathEffect.STATE_ON then goto L128 end
  end
  if self.parent.getVariableWorkWidth ~= nil then
    local v2, v3, v4 = v2:getVariableWorkWidth(self.isLeft)
    if self.textureRealWidth ~= nil then
      local v6 = MathUtil.sign(v3)
    end
    self.fadeVisibilityMax = 1 - v2 / v3
    if not v4 then
    end
    if v2 ~= 0 then
      local v5, v6, v7 = localToWorld(self.effectNode, 0, 0, 0)
      if self.smoothY1 == nil then
        self.smoothY1 = v6
      end
      self.smoothY1 = self.smoothY1 * 0.98 + v6 * 0.02
      local v9 = getParent(self.effectNode)
      local v8, v9, v10 = localToWorld(v9, v2, 0, 0)
      if self.smoothY2 == nil then
        self.smoothY2 = v9
      end
      self.smoothY2 = self.smoothY2 * 0.98 + v9 * 0.02
      local v12 = getParent(self.effectNode)
      local v11, v12, v13 = worldToLocal(v12, v8, self.smoothY2 + v6 - self.smoothY1, v10)
      local v14 = math.atan(v12 / v2)
      setRotation(self.effectNode, 0, 0, v14)
    else
      setRotation(self.effectNode, 0, 0, 0)
    end
  end
  v3 = v3:superClass()
  v3.update(self, dt)
end
function FertilizerMotionPathEffect:stop()
  self.smoothY1 = nil
  self.smoothY2 = nil
  local v2 = v2:superClass()
  return v2.stop(self)
end
function FertilizerMotionPathEffect.reset(v0)
  local v2 = v2:superClass()
  return v2.reset(v0)
end
function FertilizerMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
  TypedMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
end
function FertilizerMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
  TypedMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
end
function FertilizerMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
  TypedMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
end
function FertilizerMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
end
function FertilizerMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
end
function FertilizerMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
end
function FertilizerMotionPathEffect:registerEffectXMLPaths(v1)
  TypedMotionPathEffect.registerEffectXMLPaths(self, v1)
  self:register(XMLValueType.BOOL, v1 .. ".motionPathEffect#isLeft", "(FertilizerMotionPathEffect) Defines if the effect is left or right", false)
end
