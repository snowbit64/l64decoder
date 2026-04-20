-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MotionPathEffect = {}
local MotionPathEffect_mt = Class(MotionPathEffect, Effect)
MotionPathEffect.STATE_OFF = 0
MotionPathEffect.STATE_TURNING_ON = 1
MotionPathEffect.STATE_ON = 2
MotionPathEffect.STATE_TURNING_OFF = 3
MotionPathEffect.DEFAULT_CLIP_DISTANCE = 150
function MotionPathEffect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.state = MotionPathEffect.STATE_OFF
  v1.fadeIn = 0
  v1.fadeOut = 0
  v1.numRows = 0
  v1.rowLength = 0
  v1.lastSharedEffect = nil
  v1.lastSharedEffectMesh = nil
  v1.lastSharedEffectMaterial = nil
  v1.lastDensity = 0
  v1.lastDensityReal = 1
  local v2 = ValueDelay.new(750, -1)
  v1.lastDensityDelay = v2
  v1.effectDensityScale = 1
  v1.pathPosition = 0
  v1.lastPathPosition = 0
  v1.useVehicleSpeed = false
  v1.motionPathEffectManager = g_motionPathEffectManager
  return v1
end
function MotionPathEffect:delete()
  if self.currentEffectNode ~= nil then
    delete(self.currentEffectNode)
    self.currentEffectNode = nil
  end
  if self.texture ~= nil then
    delete(self.texture)
    self.texture = nil
  end
  if self.densityMask ~= nil then
    delete(self.densityMask)
    self.densityMask = nil
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function MotionPathEffect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  XMLUtil.checkDeprecatedXMLElements(xmlFile, key .. "#lengthAndRadius")
  local v7 = Utils.getNoNil(node, self.rootNodes)
  local v8 = xmlFile:getValue(key .. "#linkNode")
  local v6 = I3DUtil.indexToObject(v7, v8, i3dMapping)
  self.linkNode = v6
  if self.linkNode == nil then
    Logging.xmlError(xmlFile, "Missing linkNode in '%s'", key)
    return false
  end
  v6 = createTransformGroup("effectNode")
  self.effectNode = v6
  link(self.linkNode, self.effectNode)
  setTranslation(self.effectNode, 0, 0, 0)
  setRotation(self.effectNode, 0, 0, 0)
  setClipDistance(self.effectNode, MotionPathEffect.DEFAULT_CLIP_DISTANCE)
  v6 = xmlFile:getValue(key .. "#effectType", "DEFAULT")
  v6 = v6:upper()
  self.effectType = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#textureFilename")
  self.textureFilename = v6
  if self.textureFilename == nil then
    Logging.xmlError(xmlFile, "No texture defined for motion path effect '%s'. Please update effects to new motion path effect system.", key)
    return false
  end
  v6 = Utils.getFilename(self.textureFilename, self.baseDirectory)
  self.textureFilename = v6
  v6 = createMaterialTextureFromFile(self.textureFilename, true, false)
  self.texture = v6
  if self.texture == 0 then
    self.texture = nil
    return false
  end
  v6 = xmlFile:getValue(key .. ".motionPathEffect#textureRealWidth")
  self.textureRealWidth = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#numRows", 12)
  self.numRows = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#rowLength", 30)
  self.rowLength = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#useVehicleSpeed", self.useVehicleSpeed)
  self.useVehicleSpeed = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#maxReferenceVehicleSpeed", 10)
  self.maxReferenceVehicleSpeed = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#speedScale")
  self.speedScale = v6
  self.effectSpeedScale = self.speedScale or 1
  self.effectSpeedScaleOrig = self.speedScale or 1
  v6 = xmlFile:getValue(key .. ".motionPathEffect#verticalOffset")
  self.verticalOffset = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#shapeScale")
  self.shapeScale = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#maxShapeScale")
  self.maxShapeScale = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#fadeOutScale", 1)
  self.fadeOutScale = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#minFade", 0)
  self.minFade = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#inversedFadeOut", false)
  self.inversedFadeOut = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#delay", 0)
  self.delay = v6
  v7 = xmlFile:getValue(key .. ".motionPathEffect#startDelay", self.delay)
  self.startDelay = v7 * 1000
  v7 = xmlFile:getValue(key .. ".motionPathEffect#stopDelay", self.delay)
  self.stopDelay = v7 * 1000
  v6 = xmlFile:getValue(key .. ".motionPathEffect#density", 1)
  self.effectDensityScaleSetting = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#densityMaskFilename")
  self.densityMaskFilename = v6
  if self.densityMaskFilename ~= nil then
    v6 = Utils.getFilename(self.densityMaskFilename, self.baseDirectory)
    self.densityMaskFilename = v6
    v6 = createMaterialTextureFromFile(self.densityMaskFilename, true, false)
    self.densityMask = v6
    if self.densityMask == 0 then
      self.densityMask = nil
    end
  end
  v6 = xmlFile:getValue(key .. ".motionPathEffect#speedReferenceAnimation")
  self.speedReferenceAnimation = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#speedReferenceAnimationOffset", 0)
  self.speedReferenceAnimationOffset = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#visibilityX", "50 -50", true)
  self.visibilityX = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#visibilityY", "50 -50", true)
  self.visibilityY = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#visibilityZ", "50 -50", true)
  self.visibilityZ = v6
  self.currentStartDelay = 0
  self.currentStopDelay = 0
  self.fadeIn = self.minFade
  self.fadeOut = self.minFade
  v6 = xmlFile:getValue(key .. ".motionPathEffect#fadeVisibilityMin", 1)
  self.fadeVisibilityMin = v6
  v6 = xmlFile:getValue(key .. ".motionPathEffect#fadeVisibilityMax", 0)
  self.fadeVisibilityMax = v6
  return true
end
function MotionPathEffect:transformEffectNode(xmlFile, key, node)
  if self.node ~= nil then
    local v5 = v5:superClass()
    v5.transformEffectNode(self, xmlFile, key, node)
    setVisibility(self.node, true)
  end
end
function MotionPathEffect:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.useVehicleSpeed then
    if self.state ~= MotionPathEffect.STATE_TURNING_ON then
      -- if v0.state ~= MotionPathEffect.STATE_ON then goto L48 end
    end
    local v6 = v6:getLastSpeed()
    local v4 = MathUtil.clamp(v6 / self.maxReferenceVehicleSpeed, 0, 1)
    self.effectSpeedScale = self.effectSpeedScaleOrig * v4
    -- goto L60  (LOP_JUMP +12)
    self.effectSpeedScale = self.effectSpeedScaleOrig
    if self.inversedFadeOut then
      self.effectSpeedScale = -self.effectSpeedScale
    end
  end
  if self.state == MotionPathEffect.STATE_TURNING_OFF then
  end
  self.pathPosition = (self.pathPosition + dt * 0.001 * v2) % 1
  if self.speedReferenceAnimation ~= nil then
    v4 = v4:getAnimationTime(self.speedReferenceAnimation)
    self.pathPosition = v4 + self.speedReferenceAnimationOffset
  end
  if self.state == MotionPathEffect.STATE_TURNING_ON then
    v3 = math.max(self.currentStartDelay - dt, 0)
    self.currentStartDelay = v3
    if self.currentStartDelay == 0 then
      v3 = MathUtil.clamp(self.fadeIn + dt * 0.001 * v2, self.minFade, 1)
      self.fadeIn = v3
      self.fadeOut = self.minFade
      if self.fadeIn == 1 then
        self.state = MotionPathEffect.STATE_ON
        if 0 < self.currentStopDelay then
          self.state = MotionPathEffect.STATE_TURNING_OFF
        end
      end
    end
  end
  if self.state == MotionPathEffect.STATE_TURNING_OFF then
    v3 = math.max(self.currentStopDelay - dt, 0)
    self.currentStopDelay = v3
    if self.currentStopDelay == 0 then
      if not self.inversedFadeOut then
        v4 = MathUtil.clamp(self.fadeIn + dt * 0.001 * v2, self.minFade, 1)
        self.fadeIn = v4
        v4 = MathUtil.clamp(self.fadeOut + dt * 0.001 * v2, self.minFade, 1)
        self.fadeOut = v4
        -- cmp-jump LOP_JUMPXEQKN R4 aux=0x80000012 -> L246
      else
        local v9 = math.abs(v2)
        v4 = MathUtil.clamp(self.fadeIn - dt * 0.001 * v9, self.minFade, 1)
        self.fadeIn = v4
        self.fadeOut = self.minFade
        if self.fadeIn == self.minFade then
        end
      end
      if v3 then
        self.fadeIn = self.minFade
        self.fadeOut = self.minFade
        self.state = MotionPathEffect.STATE_OFF
      end
    end
  end
  if self.currentEffectNode ~= nil then
    v3:setEffectShaderParameter(self.currentEffectNode, "scrollPosition", self.pathPosition, nil, nil, nil, false)
    v3:setEffectShaderParameter(self.currentEffectNode, "prevScrollPosition", self.lastPathPosition, nil, nil, nil, false)
    self.lastPathPosition = self.pathPosition
    v3:setEffectShaderParameter(self.currentEffectNode, "fadeProgress", self.fadeIn, self.fadeOut, self.fadeVisibilityMin, self.fadeVisibilityMax, false)
    if self.state ~= MotionPathEffect.STATE_TURNING_ON then
      -- if v0.state ~= MotionPathEffect.STATE_ON then goto L340 end
    end
    v3 = v3:add(self.lastDensityReal)
    self.lastDensity = v3
    -- goto L345  (LOP_JUMP +5)
    v3:reset()
    v3:setEffectShaderParameter(self.currentEffectNode, "density", self.lastDensity * self.effectDensityScale * self.effectDensityScaleSetting, 0, 0, 0, false)
    if self.fadeIn == self.minFade and self.fadeOut == self.minFade then
    end
    v3(v4, v5)
  end
end
function MotionPathEffect:isRunning()
  if self.state == MotionPathEffect.STATE_OFF then
  end
  return true
end
function MotionPathEffect:start()
  if self.state ~= MotionPathEffect.STATE_OFF then
    -- if v0.state ~= MotionPathEffect.STATE_TURNING_OFF then goto L42 end
  end
  self.state = MotionPathEffect.STATE_TURNING_ON
  if self.currentEffectNode == nil then
    self:loadSharedMotionPathEffect()
  end
  if 0.5 < self.fadeOut then
    self.fadeIn = self.minFade
  end
  self.currentStartDelay = self.startDelay
  self.currentStopDelay = 0
  return true
end
function MotionPathEffect:stop()
  if self.state ~= MotionPathEffect.STATE_ON then
    -- if v0.state ~= MotionPathEffect.STATE_TURNING_ON then goto L34 end
  end
  if self.currentStartDelay <= 0 then
    self.state = MotionPathEffect.STATE_TURNING_OFF
  end
  self.currentStopDelay = self.stopDelay - self.currentStartDelay
  return true
end
function MotionPathEffect:reset()
  self.fadeIn = self.minFade
  self.fadeOut = self.minFade
  setVisibility(self.currentEffectNode, false)
end
function MotionPathEffect:getIsVisible()
  if self.minFade >= self.fadeIn then
  end
  return true
end
function MotionPathEffect:getIsFullyVisible()
  if self.fadeIn ~= 1 then
  end
  return true
end
function MotionPathEffect:setDensity(density)
  self.lastDensityReal = density
end
function MotionPathEffect:getIsSharedEffectMatching(sharedEffect, alternativeCheck)
  -- TODO: structure LOP_FORNPREP (pc 5, target 16)
  if sharedEffect.effectTypes[1] == self.effectType then
    return true
  end
  -- TODO: structure LOP_FORNLOOP (pc 15, target 6)
  return false
end
function MotionPathEffect:getIsEffectMeshMatching(effectMesh, alternativeCheck)
  if effectMesh.rowLength == self.rowLength then
    -- if v1.numRows == v0.numRows then goto L14 end
  end
  return false
  return true
end
function MotionPathEffect.getIsEffectMaterialMatching(v0, v1, v2)
  return true
end
function MotionPathEffect:getEffectMatchingString()
  local v4 = self:class()
  local v3 = ClassUtil.getClassName(...)
  return string.format("Class: '%s', numRows: %d, rowLength: %d", v3, self.numRows, self.rowLength)
end
function MotionPathEffect:loadSharedMotionPathEffect()
  local v1 = v1:getSharedMotionPathEffect(self)
  if v1 ~= nil then
    if v1 ~= self.lastSharedEffect then
      self.lastSharedEffect = v1
    end
    self.effectDensityScale = v1.densityScale or 1
    local v2 = v2:getMotionPathEffectMesh(v1, self)
    if v2 ~= nil then
      if v2 == self.lastSharedEffectMesh then
        -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L167
      end
      if self.currentEffectNode ~= nil then
        delete(self.currentEffectNode)
      end
      if 1 < v2.numVariations then
        -- TODO: structure LOP_FORNPREP (pc 59, target 81)
        if not v2.usedVariations[1] then
          local v10 = math.random(0, 100)
          if 75 < v10 then
            v2.usedVariations[1] = true
          else
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 80, target 60)
        if v6 == nil then
          v2.usedVariations[v5] = true
          if not v4 then
            -- TODO: structure LOP_FORNPREP (pc 93, target 100)
            if not v2.usedVariations[1] then
            end
            -- TODO: structure LOP_FORNLOOP (pc 99, target 94)
          end
        end
        if v4 then
          -- TODO: structure LOP_FORNPREP (pc 105, target 111)
          v2.usedVariations[1] = false
          -- TODO: structure LOP_FORNLOOP (pc 110, target 106)
        end
        local v7 = getNumOfChildren(v3)
        if 0 < v7 then
          if not v6 and not v5 then
          end
          local v8 = v8(v9, v11 - 1)
        end
      end
      local v4 = clone(v3, false, false, true)
      self.currentEffectNode = v4
      link(self.effectNode, self.currentEffectNode)
      if self.fadeIn == self.minFade and self.fadeOut == self.minFade then
      end
      v4(v5, v6)
      self.lastSharedEffectMesh = v2
      if not v2.densityScale then
      end
      self.effectDensityScale = v3
      local v3 = v3:getMotionPathEffectMaterial(v1, self)
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L224
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L224
      v4:setEffectMaterial(self.currentEffectNode, v3)
      if not v3.densityScale then
      end
      self.effectDensityScale = v4
      self.lastSharedEffectMaterial = v3
    else
      local v5 = self:getEffectMatchingString()
      Logging.error(...)
      if self.currentEffectNode ~= nil then
        delete(self.currentEffectNode)
        self.currentEffectNode = nil
      end
    end
    v3 = v3:applyEffectConfiguration(v1, v2, self.lastSharedEffectMaterial, self.currentEffectNode, self.texture, self.speedScale)
    self.effectSpeedScale = v3
    self.effectSpeedScaleOrig = self.effectSpeedScale
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L415
    if self.verticalOffset ~= nil then
      v3:setEffectShaderParameter(self.currentEffectNode, "verticalOffset", self.verticalOffset, 0, 0, 0, false)
    end
    if self.shapeScale ~= nil then
      v3:setEffectShaderParameter(self.currentEffectNode, "sizeScale", self.shapeScale, nil, nil, nil, false)
    end
    if self.maxShapeScale ~= nil then
      v3:setEffectShaderParameter(self.currentEffectNode, "sizeScale", nil, self.maxShapeScale, nil, nil, false)
    end
    if self.visibilityX ~= nil and #self.visibilityX == 2 then
      v3:setEffectShaderParameter(self.currentEffectNode, "visibilityX", self.visibilityX[1], self.visibilityX[2], nil, nil, false)
    end
    if self.visibilityY ~= nil and #self.visibilityY == 2 then
      v3:setEffectShaderParameter(self.currentEffectNode, "visibilityY", self.visibilityY[1], self.visibilityY[2], nil, nil, false)
    end
    if self.visibilityZ ~= nil and #self.visibilityZ == 2 then
      v3:setEffectShaderParameter(self.currentEffectNode, "visibilityZ", self.visibilityZ[1], self.visibilityZ[2], nil, nil, false)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L415
    v3:setEffectCustomMap(self.currentEffectNode, "densityMask", self.densityMask)
    return
  end
  v4 = self:getEffectMatchingString()
  Logging.error(...)
  if self.currentEffectNode ~= nil then
    delete(self.currentEffectNode)
    self.currentEffectNode = nil
  end
end
function MotionPathEffect:loadEffectDefinitionFromXML(v1, v2)
  local v3 = v1:getValue(v2 .. "#speedScale")
  self.speedScale = v3
  v3 = v1:getValue(v2 .. "#densityScale")
  self.densityScale = v3
end
function MotionPathEffect:loadEffectMeshFromXML(v1, v2)
  local v3 = v1:getValue(v2 .. "#speedScale")
  self.speedScale = v3
  v3 = v1:getValue(v2 .. "#densityScale")
  self.densityScale = v3
end
function MotionPathEffect:loadEffectMaterialFromXML(v1, v2)
  local v3 = v1:getValue(v2 .. "#speedScale")
  self.speedScale = v3
  v3 = v1:getValue(v2 .. "#densityScale")
  self.densityScale = v3
end
function MotionPathEffect:registerEffectDefinitionXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. "#speedScale", "Speed of effect", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. "#densityScale", "Density of effect", 1)
end
function MotionPathEffect:registerEffectMeshXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. "#speedScale", "Speed of effect", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. "#densityScale", "Density of effect", 1)
end
function MotionPathEffect:registerEffectMaterialXMLPaths(v1)
  self:register(XMLValueType.FLOAT, v1 .. "#speedScale", "Speed of effect", 0.5)
  self:register(XMLValueType.FLOAT, v1 .. "#densityScale", "Density of effect", 1)
end
function MotionPathEffect:registerEffectXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#linkNode", "Link node")
  self:register(XMLValueType.STRING, v1 .. "#effectType", "(MotionPathEffect) Effect type string")
  self:register(XMLValueType.STRING, v1 .. ".motionPathEffect#textureFilename", "(MotionPathEffect) Animation texture", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#textureRealWidth", "(MotionPathEffect) Real width of effect in meter with this texture")
  self:register(XMLValueType.INT, v1 .. ".motionPathEffect#numRows", "(MotionPathEffect) Number of rows", 0)
  self:register(XMLValueType.INT, v1 .. ".motionPathEffect#rowLength", "(MotionPathEffect) Number of plants for each row", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#speedScale", "(MotionPathEffect) Speed scale that is applied to effect speed defined in effect.xml or i3d file")
  self:register(XMLValueType.BOOL, v1 .. ".motionPathEffect#useVehicleSpeed", "(MotionPathEffect) Use speed of vehicle as effect speed")
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#maxReferenceVehicleSpeed", "(MotionPathEffect) This speed represents speed '1' for effect", 10)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#verticalOffset", "(MotionPathEffect) Vertical offset of plants")
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#shapeScale", "(MotionPathEffect) Scale of single shapes")
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#maxShapeScale", "(MotionPathEffect) Scale of single shapes at the end of the effect")
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#minFade", "(MotionPathEffect) Defines start fade value", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#fadeOutScale", "(MotionPathEffect) Fade out speed multiplicator", 1)
  self:register(XMLValueType.BOOL, v1 .. ".motionPathEffect#inversedFadeOut", "(MotionPathEffect) Using inversed fade in as fade out", false)
  self:register(XMLValueType.STRING, v1 .. ".motionPathEffect#speedReferenceAnimation", "(MotionPathEffect) This animation will be used for the effect speed")
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#speedReferenceAnimationOffset", "(MotionPathEffect) Time offset to apply", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#delay", "(MotionPathEffect) Start and stop delay", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#startDelay", "(MotionPathEffect) Start delay", "value of #delay")
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#stopDelay", "(MotionPathEffect) Stop delay", "value of #delay")
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#density", "(MotionPathEffect) Density Scale", 1)
  self:register(XMLValueType.STRING, v1 .. ".motionPathEffect#densityMaskFilename", "(MotionPathEffect) Custom Density Mask Texture")
  self:register(XMLValueType.VECTOR_2, v1 .. ".motionPathEffect#visibilityX", "(MotionPathEffect) Visibility cut size X axis", "50 -50")
  self:register(XMLValueType.VECTOR_2, v1 .. ".motionPathEffect#visibilityY", "(MotionPathEffect) Visibility cut size Y axis", "50 -50")
  self:register(XMLValueType.VECTOR_2, v1 .. ".motionPathEffect#visibilityZ", "(MotionPathEffect) Visibility cut size Z axis", "50 -50")
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#fadeVisibilityMin", "(MotionPathEffect) Default fade visibility min. value", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".motionPathEffect#fadeVisibilityMax", "(MotionPathEffect) Default fade visibility max. value", 0)
end
