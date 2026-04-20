-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RotationAnimation = {STATE_OFF = 0, STATE_ON = 1, STATE_TURNING_OFF = 2}
local RotationAnimation_mt = Class(RotationAnimation, Animation)
function RotationAnimation.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.state = RotationAnimation.STATE_OFF
  v1.node = nil
  v1.shaderParameterName = nil
  v1.shaderComponentScale = {1, 0, 0, 0}
  v1.rotSpeed = 0
  v1.currentAlpha = 0
  v1.initialTurnOnFadeTime = 1000
  v1.turnOnOffVariance = nil
  v1.turnOnFadeTime = 0
  v1.turnOffFadeTime = 0
  v1.rotAxis = 1
  v1.currentRot = 0
  v1.owner = nil
  v1.speedFunc = function()
    return 1
  end
  v1.speedFuncTarget = v1
  return v1
end
function RotationAnimation:load(xmlFile, key, rootNodes, owner, i3dMapping)
  local v6 = xmlFile:hasProperty(key)
  if not v6 then
    return nil
  end
  self.owner = owner
  v6 = xmlFile:getValue(key .. "#node", nil, rootNodes, i3dMapping)
  self.node = v6
  if self.node == nil then
    Logging.xmlWarning(xmlFile, "Missing node for rotation animation '%s'!", key)
    return nil
  end
  v6 = xmlFile:getValue(key .. "#shaderParameterName")
  self.shaderParameterName = v6
  if self.shaderParameterName ~= nil then
    v6 = getHasShaderParameter(self.node, self.shaderParameterName)
    if not v6 then
      local v9 = getName(self.node)
      Logging.xmlWarning(xmlFile, "Node '%s' has no shader parameter '%s' for animationNode '%s'!", v9, self.shaderParameterName, key)
      return nil
    end
    v6 = xmlFile:getValue(key .. "#shaderParameterPrevName")
    self.shaderParameterPrevName = v6
    if self.shaderParameterPrevName ~= nil then
      v6 = getHasShaderParameter(self.node, self.shaderParameterPrevName)
      -- if v6 then goto L131 end
      v9 = getName(self.node)
      Logging.xmlWarning(xmlFile, "Node '%s' has no shader parameter '%s' (prev) for animationNode '%s'!", v9, self.shaderParameterPrevName, key)
      return nil
    else
      local v10 = v10:sub(1, 1)
      v10 = v10:upper()
      v9 = v9:sub(2)
      local v7 = getHasShaderParameter(self.node, "prev" .. v10 .. v9)
      if v7 then
        self.shaderParameterPrevName = "prev" .. v10 .. v9
      end
    end
  end
  v6 = xmlFile:getValue(key .. "#shaderComponentScale", "1 0 0 0", true)
  self.shaderComponentScale = v6
  v7 = xmlFile:getValue(key .. "#rotSpeed", 1)
  self.rotSpeed = v7 * 0.001
  v6 = xmlFile:getValue(key .. "#rotAxis", 2)
  self.rotAxis = v6
  local v8 = xmlFile:getValue(key .. "#turnOnFadeTime", 2)
  v6 = math.max(v8 * 1000, 1)
  self.turnOnFadeTime = v6
  v8 = xmlFile:getValue(key .. "#turnOffFadeTime", 2)
  v6 = math.max(v8 * 1000, 1)
  self.turnOffFadeTime = v6
  v6 = xmlFile:getValue(key .. "#turnOnOffVariance")
  self.turnOnOffVariance = v6
  if self.turnOnOffVariance ~= nil then
    self.initialTurnOnFadeTime = self.turnOnFadeTime
    self.initialTurnOffFadeTime = self.turnOffFadeTime
    self.turnOnOffVariance = self.turnOnOffVariance * 1000
  end
  v6 = xmlFile:getValue(key .. "#speedFunc")
  if v6 ~= nil then
    if owner[v6] ~= nil then
      self.speedFunc = owner[v6]
      self.speedFuncTarget = self.owner
      v7 = xmlFile:getValue(key .. "#speedFuncParam")
      self.speedFuncParam = v7
    else
      Logging.xmlWarning(xmlFile, "Could not find speed function '%s' for rotation animation '%s'!", v6, key)
    end
  end
  v7 = xmlFile:getValue(key .. "#minAlphaForTurnOff", 0)
  self.minAlphaForTurnOff = v7
  self.delayedTurnOff = false
  v7 = xmlFile:getValue(key .. "#turnedOffRotation")
  self.turnedOffRotation = v7
  if self.turnedOffRotation ~= nil then
    self.turnOffFadeTimeOrigin = self.turnOffFadeTime
    v7 = xmlFile:getValue(key .. "#turnedOffSubDivisions", 1)
    self.turnedOffSubDivisions = v7
    if self.shaderParameterName == nil then
      if self.rotAxis == 2 then
        setRotation(self.node, 0, self.turnedOffRotation, 0)
      elseif self.rotAxis == 1 then
        setRotation(self.node, self.turnedOffRotation, 0, 0)
      else
        setRotation(self.node, 0, 0, self.turnedOffRotation)
      end
      self.currentRot = self.turnedOffRotation
    end
  end
  if self.rotAxis == 1 then
    v8, v9, v10 = getRotation(self.node)
    self.currentRot = v8
    return self
  end
  if self.rotAxis == 2 then
    v8, v9, v10 = getRotation(self.node)
    self.currentRot = v9
    return self
  end
  v8, v9, v10 = getRotation(self.node)
  self.currentRot = v10
  return self
end
function RotationAnimation:update(dt)
  local rootNodes = rootNodes:superClass()
  rootNodes.update(self, dt)
  if self.state == RotationAnimation.STATE_ON then
    local key = math.min(1, self.currentAlpha + dt / self.turnOnFadeTime)
    self.currentAlpha = key
  elseif self.state == RotationAnimation.STATE_TURNING_OFF then
    key = math.max(0, self.currentAlpha - dt / self.turnOffFadeTime)
    self.currentAlpha = key
  end
  if 0 < self.currentAlpha then
    key = self.speedFunc(self.speedFuncTarget, self.speedFuncParam)
    self.currentRot = (self.currentRot + self.currentAlpha * dt * self.rotSpeed * key) % 2 * math.pi
    if self.shaderParameterName == nil then
      local owner, i3dMapping, v6 = getRotation(self.node)
      if self.rotAxis == 2 then
        setRotation(self.node, owner, self.currentRot, v6)
        -- goto L204  (LOP_JUMP +97)
      end
      if self.rotAxis == 1 then
        setRotation(self.node, self.currentRot, i3dMapping, v6)
        -- goto L204  (LOP_JUMP +83)
      end
      setRotation(self.node, owner, i3dMapping, self.currentRot)
    elseif self.shaderParameterPrevName ~= nil then
      owner:setPrevShaderParameter(self.node, self.shaderParameterName, self.currentRot * self.shaderComponentScale[1], self.currentRot * self.shaderComponentScale[2], self.currentRot * self.shaderComponentScale[3], self.currentRot * self.shaderComponentScale[4], false, self.shaderParameterPrevName)
    else
      setShaderParameter(self.node, self.shaderParameterName, self.currentRot * self.shaderComponentScale[1], self.currentRot * self.shaderComponentScale[2], self.currentRot * self.shaderComponentScale[3], self.currentRot * self.shaderComponentScale[4], false)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L228
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L228
    owner:setMovingToolDirty(self.node)
  else
    self.state = RotationAnimation.STATE_OFF
  end
  if self.delayedTurnOff and self.minAlphaForTurnOff <= self.currentAlpha then
    self.delayedTurnOff = false
    self:stop()
  end
  self:updateDuplicates()
end
function RotationAnimation:isRunning()
  if self.state == RotationAnimation.STATE_OFF then
  end
  return true
end
function RotationAnimation:start()
  if self.state ~= RotationAnimation.STATE_ON then
    if self.state == RotationAnimation.STATE_OFF and self.turnOnOffVariance ~= nil and self.currentAlpha == 0 then
      local rootNodes = math.random(-self.turnOnOffVariance, self.turnOnOffVariance)
      self.turnOnFadeTime = self.initialTurnOnFadeTime + rootNodes
      rootNodes = math.random(-self.turnOnOffVariance, self.turnOnOffVariance)
      self.turnOffFadeTime = self.initialTurnOffFadeTime + rootNodes
    end
    self.state = RotationAnimation.STATE_ON
    self:updateDuplicates()
    return true
  end
  return false
end
function RotationAnimation:stop()
  if self.state ~= RotationAnimation.STATE_OFF then
    if 0 < self.minAlphaForTurnOff and self.currentAlpha < self.minAlphaForTurnOff then
      self.delayedTurnOff = true
      self.state = RotationAnimation.STATE_ON
      return true
    end
    self.state = RotationAnimation.STATE_TURNING_OFF
    self:updateDuplicates()
    if self.turnedOffRotation ~= nil then
      local key = getRotation(self.node)
      local speedFactor = self.speedFunc(self.speedFuncTarget)
      local v7 = MathUtil.sign(self.rotSpeed)
      local owner = Animation.calculateTurnOffFadeTime(self.currentAlpha, self.rotSpeed * speedFactor, v7, {}[self.rotAxis], self.turnedOffRotation, self.turnOffFadeTimeOrigin, 2 * math.pi, self.turnedOffSubDivisions)
      self.turnOffFadeTime = owner
    end
    return true
  end
  return false
end
function RotationAnimation:reset()
  self.currentAlpha = 0
  self.state = RotationAnimation.STATE_OFF
  self:updateDuplicates()
end
function RotationAnimation:isDuplicate(otherAnimation)
  local key = otherAnimation:isa(RotationAnimation)
  if key and self.parent == otherAnimation.parent and self.node == otherAnimation.node then
    return true
  end
  return false
end
function RotationAnimation:updateDuplicate(otherAnimation)
  otherAnimation.currentAlpha = self.currentAlpha
  otherAnimation.currentRot = self.currentRot
  otherAnimation.state = self.state
end
function RotationAnimation:registerAnimationClassXMLPaths(dt)
  self:register(XMLValueType.NODE_INDEX, dt .. "#node", "Node")
  self:register(XMLValueType.STRING, dt .. "#shaderParameterName", "Shader parameter name")
  self:register(XMLValueType.VECTOR_4, dt .. "#shaderComponentScale", "Shader parameter name", "1 0 0 0")
  self:register(XMLValueType.ANGLE, dt .. "#rotSpeed", "Rotation speed", 1)
  self:register(XMLValueType.ANGLE, dt .. "#turnedOffRotation", "(RotationAnimation) Target rotation while turned off")
  self:register(XMLValueType.FLOAT, dt .. "#minAlphaForTurnOff", "Min. alpha for turn off (speed [0-1])", 0)
  self:register(XMLValueType.FLOAT, dt .. "#turnedOffSubDivisions", "Amount of sub divisions which have the same state", 1)
  self:register(XMLValueType.FLOAT, dt .. "#rotAxis", "Rotation axis", 2)
  self:register(XMLValueType.FLOAT, dt .. "#turnOnFadeTime", "Turn on fade time", 2)
  self:register(XMLValueType.FLOAT, dt .. "#turnOffFadeTime", "Turn off fade time", 2)
  self:register(XMLValueType.FLOAT, dt .. "#turnOnOffVariance", "Turn off time variance")
  self:register(XMLValueType.STRING, dt .. "#speedFunc", "Lua speed function")
  self:register(XMLValueType.STRING, dt .. "#speedFuncParam", "Additional string parameter that is passed to the speedFunc")
end
