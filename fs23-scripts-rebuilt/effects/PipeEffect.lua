-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PipeEffect = {SAFETY_OFFSET = 0.01}
local PipeEffect_mt = Class(PipeEffect, ShaderPlaneEffect)
function PipeEffect.new(customMt)
  if customMt == nil then
  end
  return ShaderPlaneEffect.new(customMt)
end
function PipeEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  v6 = Effect.getValue(xmlFile, key, node, "maxBending", 0.25)
  self.maxBending = v6
  v6 = Effect.getValue(xmlFile, key, node, "shapeScaleSpread", "0.6 1 1 0", true)
  self.shapeScaleSpread = v6
  v6 = Effect.getValue(xmlFile, key, node, "uvScaleSpeedFreqAmp", nil, true)
  self.uvScaleSpeedFreqAmp = v6
  v6 = Effect.getValue(xmlFile, key, node, "positionUpdateNodes")
  if v6 ~= nil then
    v7 = v6:split(" ")
    self.positionUpdateNodes = {}
    for v11, v12 in pairs(v7) do
      local v14 = Utils.getNoNil(node, self.rootNodes)
      local v13 = I3DUtil.indexToObject(v14, v12, i3dMapping)
      if not (v13 ~= nil) then
        continue
      end
      table.insert(self.positionUpdateNodes, v13)
    end
  end
  v7 = Effect.getValue(xmlFile, key, node, "updateDistance", true)
  self.updateDistance = v7
  v7 = Effect.getValue(xmlFile, key, node, "extraDistance", 0)
  self.extraDistance = v7
  self.worldTarget = {0, 0, 0}
  v7 = Effect.getValue(xmlFile, key, node, "controlPoint", "10 0.25 0 0", true)
  self.controlPoint = v7
  self.controlPointY = 0
  self.distance = 0
  return true
end
function PipeEffect:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if 0 < self.distance then
    local mCos = math.cos(self.controlPointY)
    v3 = math.sin(self.controlPointY)
    local v4 = MathUtil.dotProduct(0, 0, self.distance, 0, mCos, -v3)
    local v5 = MathUtil.dotProduct(0, 0, self.distance, 0, v3, mCos)
    local v6, v7, v8 = localToWorld(self.node, 0, v4, v5)
    self.worldTarget[1] = v6
    self.worldTarget[2] = v7
    self.worldTarget[3] = v8
  end
  if self.positionUpdateNodes ~= nil then
    for v5, v6 in pairs(self.positionUpdateNodes) do
      setWorldTranslation(v6, self.worldTarget[1], self.worldTarget[2], self.worldTarget[3])
    end
  end
end
function PipeEffect:setDistance(distance, terrain)
  if 0 >= distance then
  end
  v3(v4, true)
  if self.updateDistance then
    local v3 = getHasShaderParameter(self.node, "controlPoint")
    if v3 then
      local v3, v4, v5 = localDirectionToWorld(self.node, 0, 1, 0)
      self.controlPointY = v4 * self.maxBending
      self.distance = distance + self.extraDistance
      local mCos = math.cos(self.controlPointY)
      local mSin = math.sin(self.controlPointY)
      local v8 = MathUtil.dotProduct(0, 0, distance + self.extraDistance, 0, mCos, -mSin)
      local v9 = MathUtil.dotProduct(0, 0, distance + self.extraDistance, 0, mSin, mCos)
      local v10 = MathUtil.vector2Length(v8, v9)
      setShaderParameter(self.node, "controlPoint", distance + self.extraDistance + distance + self.extraDistance - v10 - PipeEffect.SAFETY_OFFSET, self.controlPointY, 0, 0, false)
    end
  end
end
function PipeEffect:setFillType(fillType)
  local v3 = v3:superClass()
  local v2 = v3.setFillType(self, fillType)
  if v2 then
    v3 = getHasShaderParameter(self.node, "shapeScaleSpread")
    if v3 then
      setShaderParameter(self.node, "shapeScaleSpread", self.shapeScaleSpread[1], self.shapeScaleSpread[2], self.shapeScaleSpread[3], self.shapeScaleSpread[4], false)
    end
    if self.uvScaleSpeedFreqAmp ~= nil then
      v3 = getHasShaderParameter(self.node, "uvScaleSpeedFreqAmp")
      if v3 then
        setShaderParameter(self.node, "uvScaleSpeedFreqAmp", self.uvScaleSpeedFreqAmp[1], self.uvScaleSpeedFreqAmp[2], self.uvScaleSpeedFreqAmp[3], self.uvScaleSpeedFreqAmp[4], false)
      end
    end
    v3 = getHasShaderParameter(self.node, "controlPoint")
    if v3 then
      setShaderParameter(self.node, "controlPoint", self.controlPoint[1], self.controlPoint[2], 0, 0, false)
    end
  end
  return v2
end
function PipeEffect:registerEffectXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. "#maxBending", "(PipeEffect) Max bending", 0.25)
  self:register(XMLValueType.VECTOR_4, v1 .. "#shapeScaleSpread", "(PipeEffect) Shape scale spread", "0.6 1 1 0")
  self:register(XMLValueType.VECTOR_4, v1 .. "#uvScaleSpeedFreqAmp", "(PipeEffect) UV Scale, speed, frequency, amplitude")
  self:register(XMLValueType.STRING, v1 .. "#positionUpdateNodes", "(PipeEffect) List of nodes to position at control point")
  self:register(XMLValueType.STRING, v1 .. "#updateDistance", "(PipeEffect) Update effect distance", true)
  self:register(XMLValueType.STRING, v1 .. "#extraDistance", "(PipeEffect) Extra distance", 0)
  self:register(XMLValueType.VECTOR_4, v1 .. "#controlPoint", "(PipeEffect) Control point position", "10 0.25 0 0")
end
