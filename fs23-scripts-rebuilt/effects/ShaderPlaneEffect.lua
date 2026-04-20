-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShaderPlaneEffect = {}
local ShaderPlaneEffect_mt = Class(ShaderPlaneEffect, Effect)
ShaderPlaneEffect.STATE_OFF = 0
ShaderPlaneEffect.STATE_TURNING_ON = 1
ShaderPlaneEffect.STATE_ON = 2
ShaderPlaneEffect.STATE_TURNING_OFF = 3
function ShaderPlaneEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.state = ShaderPlaneEffect.STATE_OFF
  v1.planeFadeTime = 0
  return v1
end
function ShaderPlaneEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = v7:superClass()
  local v6 = v7.loadEffectAttributes(self, xmlFile, key, node, i3dNode, i3dMapping)
  if not v6 then
    return false
  end
  local v12 = Effect.getValue(xmlFile, key, node, "fadeTime", 1)
  v7 = Effect.getValue(...)
  self.fadeInTime = v7 * 1000
  v12 = Effect.getValue(xmlFile, key, node, "fadeTime", 1)
  v7 = Effect.getValue(...)
  self.fadeOutTime = v7 * 1000
  v6 = math.max(self.planeFadeTime, self.fadeInTime, self.fadeOutTime)
  self.planeFadeTime = v6
  v12 = Effect.getValue(xmlFile, key, node, "delay", 0)
  v7 = Effect.getValue(...)
  self.startDelay = v7 * 1000
  v12 = Effect.getValue(xmlFile, key, node, "delay", 0)
  v7 = Effect.getValue(...)
  self.stopDelay = v7 * 1000
  self.currentDelay = self.startDelay
  v6 = Effect.getValue(xmlFile, key, node, "alwaysVisibile", false)
  self.alwaysVisibile = v6
  v6 = Effect.getValue(xmlFile, key, node, "showOnFirstUse", false)
  self.showOnFirstUse = v6
  v6 = Effect.getValue(xmlFile, key, node, "defaultFillType")
  if v6 ~= nil then
    v7 = v7:getFillTypeIndexByName(v6)
    self.defaultFillType = v7
  end
  v7 = Effect.getValue(xmlFile, key, node, "dynamicFillType", true)
  self.dynamicFillType = v7
  v7 = Effect.getValue(xmlFile, key, node, "materialType", "unloading")
  self.materialType = v7
  v7 = Effect.getValue(xmlFile, key, node, "materialTypeId", 1)
  self.materialTypeId = v7
  v7 = Effect.getValue(xmlFile, key, node, "alignToWorldY", false)
  self.alignToWorldY = v7
  v7 = Effect.getValue(xmlFile, key, node, "alignXAxisToWorldY", false)
  self.alignXAxisToWorldY = v7
  self.hasValidMaterial = false
  self.useBaseMaterial = false
  v7 = v7:getBaseMaterialByName(self.materialType)
  if v7 ~= nil then
    setMaterial(self.node, v7, 0)
    local v8 = getMaterialCustomShaderFilename(v7)
    if v8 ~= nil then
      local v9 = v8:contains("grainUnloadingSmokeShader")
      if not v9 then
        v9 = v8:contains("grainUnloadingBeltShader")
        if not v9 then
          v9 = v8:contains("grainUnloadingShader")
          if not v9 then
            v9 = v8:contains("levelerShader")
          end
        end
      end
    end
    local v10 = Effect.getValue(xmlFile, key, node, "useFillTypeTextureArrays", v9)
    self.useFillTypeTextureArrays = v10
    if self.useFillTypeTextureArrays then
      if v8 ~= nil then
        v10 = v8:find("grainUnloadingSmokeShader")
        -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L272
        v10:assignFillTypeTextureArrays(self.node, true, false, false)
      else
        v10:assignFillTypeTextureArrays(self.node, true, true, true)
      end
    end
    self.useBaseMaterial = true
    self.hasValidMaterial = true
  else
    v8 = v8:getMaterialTypeByName(self.materialType)
    if v8 == nil then
      Logging.error("Failed to assign material to shader plane effect. Material '%s' not found!", self.materialType)
    end
  end
  if not self.dynamicFillType then
    self:setFillType(self.defaultFillType, true)
  end
  v9 = Effect.getValue(xmlFile, key, node, "fadeXMinDistance", -1.58)
  v10 = Effect.getValue(xmlFile, key, node, "fadeXMaxDistance", 4.18)
  self.fadeXDistance = {}
  v8 = Effect.getValue(xmlFile, key, node, "useDistance", true)
  self.useDistance = v8
  v8 = Effect.getValue(xmlFile, key, node, "extraDistance", -0.25)
  self.extraDistance = v8
  v9 = Utils.getNoNil(node, self.rootNodes)
  v10 = Effect.getValue(xmlFile, key, node, "extraDistanceNode")
  v8 = I3DUtil.indexToObject(v9, v10, i3dMapping)
  self.extraDistanceNode = v8
  v8 = Effect.getValue(xmlFile, key, node, "fadeScale")
  self.fadeScale = v8
  v8 = Effect.getValue(xmlFile, key, node, "uvSpeed")
  self.uvSpeed = v8
  self.fadeX = {-1, 1}
  self.fadeY = {-1, 1}
  self.fadeCur = {-1, 1}
  self.fadeDir = {1, 1}
  self.offset = 0
  setShaderParameter(self.node, "fadeProgress", -1, 1, 0, 0, false)
  if self.alignXAxisToWorldY then
    v8 = createTransformGroup("worldYReferenceFrame")
    self.worldYReferenceFrame = v8
    v9 = getParent(self.node)
    link(v9, self.worldYReferenceFrame)
    v10 = getTranslation(self.node)
    setTranslation(...)
    v10 = getRotation(self.node)
    setRotation(...)
  end
  return true
end
function ShaderPlaneEffect:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self.currentDelay = self.currentDelay - dt
  if self.currentDelay <= 0 then
    if self.state == ShaderPlaneEffect.STATE_TURNING_OFF then
    end
    local v8 = math.abs(self.fadeX[1] - self.fadeX[2])
    local v9 = math.abs(self.fadeY[1] - self.fadeY[2])
    local v7 = MathUtil.clamp(self.fadeCur[1] + v8 * dt / v3 * self.fadeDir[1], self.fadeX[1], self.fadeX[2])
    self.fadeCur[1] = v7
    v7 = MathUtil.clamp(self.fadeCur[2] + v9 * dt / v3 * self.fadeDir[2], self.fadeY[1], self.fadeY[2])
    self.fadeCur[2] = v7
    setShaderParameter(self.node, "fadeProgress", self.fadeCur[1], self.fadeCur[2], 0, 0, false)
    if self.showOnFirstUse then
      -- if not v0.hasValidMaterial then goto L167 end
      setVisibility(self.node, true)
    else
      if self.state == ShaderPlaneEffect.STATE_TURNING_OFF and self.fadeCur[1] == self.fadeX[2] and self.fadeCur[2] ~= self.fadeY[1] then
      end
      if v6 then
      end
      v7(v8, v9)
    end
    if self.state == ShaderPlaneEffect.STATE_TURNING_ON and self.fadeCur[1] == self.fadeX[2] then
      -- if v0.fadeCur[2] == v0.fadeY[2] then goto L218 end
    end
    if self.state == ShaderPlaneEffect.STATE_TURNING_OFF and self.fadeCur[1] == self.fadeX[2] then
      -- if v0.fadeCur[2] == v0.fadeY[1] then goto L218 end
    end
  else
  end
  if self.alignXAxisToWorldY then
    local v3, v4, v5 = worldDirectionToLocal(self.worldYReferenceFrame, 0, 1, 0)
    local v6 = math.atan2(v5, v4)
    v7, v8, v9 = getRotation(self.node)
    setRotation(self.node, v6, v8, v9)
  end
  if self.alignToWorldY then
    I3DUtil.setWorldDirection(self.node, 0, 0, 1, 0, 1, 0)
  end
  if not v2 then
    if self.state == ShaderPlaneEffect.STATE_TURNING_ON then
      self.state = ShaderPlaneEffect.STATE_ON
      return
    end
    if self.state == ShaderPlaneEffect.STATE_TURNING_OFF then
      self.state = ShaderPlaneEffect.STATE_OFF
    end
  end
end
function ShaderPlaneEffect:isRunning()
  if self.state ~= ShaderPlaneEffect.STATE_TURNING_OFF and self.state ~= ShaderPlaneEffect.STATE_TURNING_ON and self.state ~= ShaderPlaneEffect.STATE_ON then
  end
  return v1
end
function ShaderPlaneEffect:start()
  local v1 = self:canStart()
  if v1 and self.state ~= ShaderPlaneEffect.STATE_TURNING_ON and self.state ~= ShaderPlaneEffect.STATE_ON then
    self.state = ShaderPlaneEffect.STATE_TURNING_ON
    self.fadeCur[1] = -1
    self.fadeCur[2] = 1
    self.fadeDir[1] = 1
    self.fadeDir[2] = 1
    self.currentDelay = self.startDelay
    return true
  end
  return false
end
function ShaderPlaneEffect:stop()
  if self.state ~= ShaderPlaneEffect.STATE_TURNING_OFF and self.state ~= ShaderPlaneEffect.STATE_OFF then
    self.state = ShaderPlaneEffect.STATE_TURNING_OFF
    self.fadeDir[1] = 1
    self.fadeDir[2] = -1
    self.currentDelay = self.stopDelay
    return true
  end
  return false
end
function ShaderPlaneEffect:reset()
  self.fadeCur[1] = -1
  self.fadeCur[2] = 1
  self.fadeDir[1] = 1
  self.fadeDir[2] = -1
  setShaderParameter(self.node, "fadeProgress", self.fadeCur[1], self.fadeCur[2], 0, 0, false)
  setVisibility(self.node, false)
  self.state = ShaderPlaneEffect.STATE_OFF
end
function ShaderPlaneEffect:setFillType(fillType, force)
  if self.dynamicFillType then
    -- if v0.lastFillType ~= v1 then goto L9 end
  end
  if force then
    if self.useFillTypeTextureArrays then
      local v4 = v4:getTextureArrayIndexByFillTypeIndex(self.defaultFillType or fillType)
      if v4 ~= nil then
        setShaderParameter(self.node, "fillTypeId", v4 - 1, 0, 0, 0, false)
      end
    end
    if not self.useBaseMaterial and self.materialType ~= nil and self.materialTypeId ~= nil then
      v4 = v4:getMaterial(fillType, self.materialType, self.materialTypeId)
      if v4 == nil and self.defaultFillType ~= nil then
        local v5 = v5:getMaterial(self.defaultFillType, self.materialType, self.materialTypeId)
      end
      if v4 == nil then
      end
      self.hasValidMaterial = true
      if v4 ~= nil then
        setMaterial(self.node, v4, 0)
      else
      end
    end
    v4 = v4:lower()
    v4 = v4:contains("smoke")
    if v4 ~= nil then
      setObjectMask(self.node, 16711807)
    end
    if self.fadeScale ~= nil then
      setShaderParameter(self.node, "fadeScale", self.fadeScale, 0, 0, 0, false)
    end
    if self.uvSpeed ~= nil then
      setShaderParameter(self.node, "uvSpeedMult", self.uvSpeed, 0, 0, 0, false)
    end
    self.lastFillType = fillType
  end
  return v3
end
function ShaderPlaneEffect:getIsVisible()
  if self.fadeX[1] < self.fadeCur[1] and self.fadeCur[2] ~= self.fadeY[2] then
  end
  return v1
end
function ShaderPlaneEffect:getIsFullyVisible()
  local v2 = math.abs(self.fadeCur[1] - self.fadeX[2])
  if v2 < 0.05 then
    v2 = math.abs(self.fadeCur[2] - self.fadeY[2])
    if v2 >= 0.05 then
    end
  end
  return v1
end
function ShaderPlaneEffect:setDelays(startDelay, stopDelay)
  if self.state == ShaderPlaneEffect.STATE_TURNING_ON then
    local v3 = math.max(0, self.currentDelay + startDelay - self.startDelay)
    self.currentDelay = v3
  elseif self.state == ShaderPlaneEffect.STATE_TURNING_OFF then
    v3 = math.max(0, self.currentDelay + stopDelay - self.stopDelay)
    self.currentDelay = v3
  end
  self.startDelay = startDelay
  self.stopDelay = stopDelay
end
function ShaderPlaneEffect:setOffset(offset)
  self.offset = offset
end
function ShaderPlaneEffect:setDistance(distance)
  if self.useDistance then
    if self.extraDistanceNode ~= nil then
      local stopDelay, v3, v4 = localToLocal(self.node, self.extraDistanceNode, 0, 0, 0)
    end
    self.fadeX[2] = 2 * (distance - self.fadeXDistance[1]) / (self.fadeXDistance[2] - self.fadeXDistance[1]) - 1
  end
end
function ShaderPlaneEffect:setColor(r, g, b, a)
  if self.node ~= nil then
    setShaderParameter(self.node, "colorScale", r, g, b, a, false)
  end
end
function ShaderPlaneEffect:registerEffectXMLPaths(startDelay)
  self:register(XMLValueType.FLOAT, startDelay .. "#fadeTime", "(ShaderPlaneEffect) Fade time for fade in and fade out", 1)
  self:register(XMLValueType.FLOAT, startDelay .. "#fadeInTime", "(ShaderPlaneEffect) Fade in time", 1)
  self:register(XMLValueType.FLOAT, startDelay .. "#fadeOutTime", "(ShaderPlaneEffect) Fade out time", 1)
  self:register(XMLValueType.FLOAT, startDelay .. "#delay", "(ShaderPlaneEffect) Start/Stop delay", 0)
  self:register(XMLValueType.FLOAT, startDelay .. "#startDelay", "(ShaderPlaneEffect) Start delay", 0)
  self:register(XMLValueType.FLOAT, startDelay .. "#stopDelay", "(ShaderPlaneEffect) Stop delay", 0)
  self:register(XMLValueType.BOOL, startDelay .. "#alwaysVisibile", "(ShaderPlaneEffect) Always visibile", false)
  self:register(XMLValueType.BOOL, startDelay .. "#showOnFirstUse", "(ShaderPlaneEffect) Show on first use", false)
  self:register(XMLValueType.STRING, startDelay .. "#defaultFillType", "(ShaderPlaneEffect) Default fill type name")
  self:register(XMLValueType.BOOL, startDelay .. "#dynamicFillType", "(ShaderPlaneEffect) Dynamic fill type", false)
  self:register(XMLValueType.STRING, startDelay .. "#materialType", "(ShaderPlaneEffect) Material type name", "unloading")
  self:register(XMLValueType.STRING, startDelay .. "#materialTypeId", "(ShaderPlaneEffect) Material type id", 1)
  self:register(XMLValueType.BOOL, startDelay .. "#useFillTypeTextureArrays", "(ShaderPlaneEffect) Apply shared fill type texture array to effect")
  self:register(XMLValueType.BOOL, startDelay .. "#alignToWorldY", "(ShaderPlaneEffect) Align Y axis to world Y", false)
  self:register(XMLValueType.BOOL, startDelay .. "#alignXAxisToWorldY", "(ShaderPlaneEffect) Align X axis to world Y", false)
  self:register(XMLValueType.FLOAT, startDelay .. "#fadeXMinDistance", "(ShaderPlaneEffect) Fade X min. distance", -1.58)
  self:register(XMLValueType.FLOAT, startDelay .. "#fadeXMaxDistance", "(ShaderPlaneEffect) Fade X max. distance", 4.18)
  self:register(XMLValueType.BOOL, startDelay .. "#useDistance", "(ShaderPlaneEffect) Use distance", true)
  self:register(XMLValueType.FLOAT, startDelay .. "#extraDistance", "(ShaderPlaneEffect) Extra distance", -0.25)
  self:register(XMLValueType.STRING, startDelay .. "#extraDistanceNode", "(ShaderPlaneEffect) Distance between effect and this node will be added to distance")
  self:register(XMLValueType.FLOAT, startDelay .. "#fadeScale", "(ShaderPlaneEffect) Fade scale")
  self:register(XMLValueType.FLOAT, startDelay .. "#uvSpeed", "(ShaderPlaneEffect) UV speed")
end
