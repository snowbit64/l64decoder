-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlowMotionPathEffect = {}
local PlowMotionPathEffect_mt = Class(PlowMotionPathEffect, TypedMotionPathEffect)
function PlowMotionPathEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.useVehicleSpeed = true
  v1.isReverseFadeOutMode = false
  return v1
end
function PlowMotionPathEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  self.fadeOutScale = 0.25
  v6 = xmlFile:getValue(key .. ".motionPathEffect#maxScaleSpeed", 10)
  self.maxScaleSpeed = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#minScaleOffset", -0.07)
  self.minScaleOffset = v6
  return true
end
function PlowMotionPathEffect:update(dt)
  local v2 = v2:getLastSpeed()
  if self.parent.movingDirection < 0 then
    -- if 0.5 < v2 then goto L18 end
  end
  if self.fadeIn >= 0.5 then
  end
  self.inversedFadeOut = v4
  if self.state ~= MotionPathEffect.STATE_OFF then
    if v2 < 2 then
    else
    end
    self.fadeOutScale = v4
    local v5 = getParent(self.effectNode)
    local v4, v5, v6 = getWorldTranslation(...)
    local v7 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v4, 0, v6)
    local v9 = getParent(self.effectNode)
    local v8, v9, v10 = worldToLocal(v9, v4, v7, v6)
    local v16 = math.min(v2 / self.maxScaleSpeed)
    local v11 = math.min(v9, (1 - v16) * self.minScaleOffset)
    if not v3 then
      setTranslation(self.effectNode, 0, -((1 - v11) ^ 2 - 1), 0)
    else
      if not self.isReverseFadeOutMode then
        self.isReverseFadeOutMode = true
      end
      local v11, v12, v13 = getTranslation(self.effectNode)
      v11 = math.min(v12 - dt * 0.0005, v9)
      setTranslation(self.effectNode, v11, v11, v13)
      self.fadeOutScale = 0.5
    end
    if v9 < -1 then
      if self.state == MotionPathEffect.STATE_TURNING_OFF then
        self.state = MotionPathEffect.STATE_OFF
      end
      self.fadeIn = self.minFade
      self.fadeOut = self.minFade
      self.isReverseFadeOutMode = false
    end
    -- if not v0.isReverseFadeOutMode then goto L209 end
    v11 = v11:getLastSpeed()
    -- if 1 >= v11 then goto L209 end
    -- if 0 >= v0.parent.movingDirection then goto L209 end
    self.isReverseFadeOutMode = false
    self.fadeIn = self.minFade
    self.fadeOut = self.minFade
  else
    setTranslation(self.effectNode, 0, 0, 0)
    self.fadeIn = self.minFade
    self.fadeOut = self.minFade
    self.isReverseFadeOutMode = false
  end
  v5 = v5:superClass()
  v5.update(self, dt)
end
function PlowMotionPathEffect.stop(v0)
  local v2 = v2:superClass()
  return v2.stop(v0)
end
function PlowMotionPathEffect.reset(v0)
  local v2 = v2:superClass()
  return v2.reset(v0)
end
function PlowMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
  TypedMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
end
function PlowMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
  TypedMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
end
function PlowMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
  TypedMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
end
function PlowMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
end
function PlowMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
end
function PlowMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
end
function PlowMotionPathEffect:registerEffectXMLPaths(v1)
  TypedMotionPathEffect.registerEffectXMLPaths(self, v1)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#maxScaleSpeed", "(PlowMotionPathEffect) Speed at which the effect reaches the max. scale", 10)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#minScaleOffset", "(PlowMotionPathEffect) Y Offset when the scale is at it's minimum", -0.07)
end
