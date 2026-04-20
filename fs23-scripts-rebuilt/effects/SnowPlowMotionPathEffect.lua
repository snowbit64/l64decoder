-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SnowPlowMotionPathEffect = {}
local SnowPlowMotionPathEffect_mt = Class(SnowPlowMotionPathEffect, TypedMotionPathEffect)
SnowPlowMotionPathEffect.Y_OFFSET = 0.75
function SnowPlowMotionPathEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.fillLevelPct = 0
  v1.lastSpeed = 0
  return v1
end
function SnowPlowMotionPathEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = xmlFile:getValue(key .. ".snowPlowEffect#shaderPlane", nil, self.rootNodes, i3dMapping)
  self.shaderPlaneNode = v6
  v6 = xmlFile:getValue(key .. ".snowPlowEffect#minScale", {1, 1, 1}, true)
  self.shaderPlaneMinScale = v6
  v6 = xmlFile:getValue(key .. ".snowPlowEffect#maxScale", {1, 1, 1}, true)
  self.shaderPlaneMaxScale = v6
  v7 = xmlFile:getValue(key .. ".snowPlowEffect#scrollSpeed", 1)
  self.shaderPlaneScrollSpeed = v7 * 0.001
  self.shaderPlaneScrollTime = 0
  if self.shaderPlaneNode ~= nil then
    local v6, v7, v8 = localToLocal(self.shaderPlaneNode, self.effectNode, 0, 0, 0)
    local v9, v10, v11 = localRotationToLocal(self.shaderPlaneNode, self.effectNode, 0, 0, 0)
    link(self.effectNode, self.shaderPlaneNode)
    setTranslation(self.shaderPlaneNode, v6, v7, v8)
    setRotation(self.shaderPlaneNode, v9, v10, v11)
  end
  setTranslation(self.effectNode, 0, -SnowPlowMotionPathEffect.Y_OFFSET, 0)
  return true
end
function SnowPlowMotionPathEffect:update(dt)
  self.fadeIn = 1
  self.fadeOut = 0
  if self.currentEffectNode ~= nil then
    if 0.005 < self.fillLevelPct and 0.1 >= self.lastSpeed then
    end
    local alpha = MathUtil.clamp(self.lastSpeed / 20, 0.1, 1)
    if self.state ~= MotionPathEffect.STATE_OFF then
      v4:setEffectShaderParameter(self.currentEffectNode, "scrollPosition", nil, 0, 1, alpha, false)
      if self.shaderPlaneNode ~= nil then
        local v4, v5, v6 = MathUtil.vector3ArrayLerp(self.shaderPlaneMinScale, self.shaderPlaneMaxScale, alpha)
        setScale(self.shaderPlaneNode, v4, v5, v6)
        self.shaderPlaneScrollTime = self.shaderPlaneScrollTime + self.shaderPlaneScrollSpeed * dt * self.effectSpeedScale
        setShaderParameter(self.shaderPlaneNode, "offsetUV", self.shaderPlaneScrollTime, 0, 0, 0, false)
        setShaderParameter(self.shaderPlaneNode, "VertxoffsetVertexdeformMotionUVscale", -35, 1, self.shaderPlaneScrollTime, 6, false)
      end
    end
    if v2 then
      v6 = math.max(alpha, 0.3)
      self.effectSpeedScale = self.effectSpeedScaleOrig * v6
      v4, v5, v6 = getTranslation(self.effectNode)
      local v7 = math.min(v5 + dt * 0.001, 0)
      local v7, v8, v9 = getWorldTranslation(self.effectNode)
      local v11 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v7, v8, v9)
      local v12 = getParent(self.effectNode)
      local v11, v12, v13 = worldToLocal(v12, v7, v11 - 0.5, v9)
      local v14 = math.max(v7, v12)
      setTranslation(self.effectNode, v4, v14, v6)
      if -SnowPlowMotionPathEffect.Y_OFFSET >= v14 then
      end
      v14(v15, true)
    else
      self.effectSpeedScale = self.effectSpeedScaleOrig * 0.5
      v4, v5, v6 = getTranslation(self.effectNode)
      v7 = math.max(v5 - dt * 0.001, -SnowPlowMotionPathEffect.Y_OFFSET)
      setTranslation(self.effectNode, v4, v7, v6)
      if -SnowPlowMotionPathEffect.Y_OFFSET >= v7 then
      end
      v7(v8, true)
    end
  end
  alpha = alpha:superClass()
  alpha.update(self, dt)
end
function SnowPlowMotionPathEffect:setFillLevel(fillLevelPct)
  self.fillLevelPct = fillLevelPct
end
function SnowPlowMotionPathEffect:setLastVehicleSpeed(lastSpeed)
  self.lastSpeed = lastSpeed
end
function SnowPlowMotionPathEffect.stop(v0)
  local v2 = v2:superClass()
  return v2.stop(v0)
end
function SnowPlowMotionPathEffect.reset(v0)
  local v2 = v2:superClass()
  return v2.reset(v0)
end
function SnowPlowMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
  TypedMotionPathEffect.loadEffectDefinitionFromXML(motionPathEffect, xmlFile, key)
end
function SnowPlowMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
  TypedMotionPathEffect.loadEffectMeshFromXML(effectMesh, xmlFile, key)
end
function SnowPlowMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
  TypedMotionPathEffect.loadEffectMaterialFromXML(effectMaterial, xmlFile, key)
end
function SnowPlowMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectDefinitionXMLPaths(schema, basePath)
end
function SnowPlowMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMeshXMLPaths(schema, basePath)
end
function SnowPlowMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
  TypedMotionPathEffect.registerEffectMaterialXMLPaths(schema, basePath)
end
function SnowPlowMotionPathEffect:registerEffectXMLPaths(v1)
  TypedMotionPathEffect.registerEffectXMLPaths(self, v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".snowPlowEffect#shaderPlane", "(SnowPlowMotionPathEffect) Node of shader plane effect to control the same way")
  self:register(XMLValueType.VECTOR_SCALE, v1 .. ".snowPlowEffect#minScale", "(SnowPlowMotionPathEffect) Min. Scale which corresponds to the first motion path array state", "1 1 1")
  self:register(XMLValueType.VECTOR_SCALE, v1 .. ".snowPlowEffect#maxScale", "(SnowPlowMotionPathEffect) Max. Scale which corresponds to the second motion path array state", "1 1 1")
  self:register(XMLValueType.FLOAT, v1 .. ".snowPlowEffect#scrollSpeed", "(SnowPlowMotionPathEffect) UV scroll speed", 1)
end
