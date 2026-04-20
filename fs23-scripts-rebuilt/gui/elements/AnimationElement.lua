-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimationElement = {}
local AnimationElement_mt = Class(AnimationElement, BitmapElement)
AnimationElement.MODE = {UV_SHIFT = 1, ROTATE = 2}
function AnimationElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.animationMode = AnimationElement.MODE.UV_SHIFT
  v2.animationOffset = -1
  v2.animationFrames = 8
  v2.animationTimer = 0
  v2.animationSpeed = 120
  v2.animationFrameSize = 0
  v2.animationStartPos = 0
  v2.animationUVOffset = 0
  v2.animationRotation = 0
  return v2
end
function AnimationElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLInt(xmlFile, key .. "#animationOffset")
  local v3 = Utils.getNoNil(v4, self.animationOffset)
  self.animationOffset = v3
  v4 = getXMLInt(xmlFile, key .. "#animationFrames")
  v3 = Utils.getNoNil(v4, self.animationFrames)
  self.animationFrames = v3
  v4 = getXMLInt(xmlFile, key .. "#animationSpeed")
  v3 = Utils.getNoNil(v4, self.animationSpeed)
  self.animationSpeed = v3
  v3 = getXMLString(xmlFile, key .. "#animationUVOffset")
  if v3 ~= nil then
    v4 = GuiUtils.getNormalizedValues(v3, self.imageSize)
    self.animationUVOffset = v4[1]
  end
  local v6 = self:getOverlayState()
  v4 = GuiOverlay.getOverlayUVs(...)
  local v5 = table.copy(v4)
  self.animationDefaultUVs = v5
  v5 = getXMLString(xmlFile, key .. "#animationMode")
  if v5 ~= nil then
    v6 = v5:lower()
    if v6 == "uvshift" then
      self.animationMode = AnimationElement.MODE.UV_SHIFT
    else
      self.animationMode = AnimationElement.MODE.ROTATE
    end
  end
  self:setAnimationData()
end
function AnimationElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getNumber("animationOffset", self.animationOffset)
  self.animationOffset = v3
  v3 = profile:getNumber("animationFrames", self.animationFrames)
  self.animationFrames = v3
  v3 = profile:getNumber("animationSpeed", self.animationSpeed)
  self.animationSpeed = v3
  v3 = profile:getValue("animationUVOffset")
  if v3 ~= nil then
    v4 = GuiUtils.getNormalizedValues(v3, self.imageSize)
    self.animationUVOffset = v4[1]
  end
  v4 = profile:getValue("animationMode")
  if v4 ~= nil then
    local v5 = v4:lower()
    if v5 == "uvshift" then
      self.animationMode = AnimationElement.MODE.UV_SHIFT
      return
    end
    self.animationMode = AnimationElement.MODE.ROTATE
  end
end
function AnimationElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  local v2 = table.copy(src.animationDefaultUVs)
  self.animationDefaultUVs = v2
  self.animationOffset = src.animationOffset
  self.animationFrames = src.animationFrames
  self.animationSpeed = src.animationSpeed
  self.animationUVOffset = src.animationUVOffset
  self.animationMode = src.animationMode
  local v5 = unpack(self.animationDefaultUVs)
  self:setImageUVs(...)
  self:setAnimationData()
end
function AnimationElement:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.animationMode == AnimationElement.MODE.UV_SHIFT then
    self.animationTimer = self.animationTimer - dt
    -- if v0.animationTimer >= 0 then goto L79 end
    self.animationTimer = self.animationSpeed
    self.animationOffset = self.animationOffset + 1
    if self.animationFrames - 1 < self.animationOffset then
      self.animationOffset = 0
    end
    self:updateAnimationUVs()
    return
  end
  if self.animationMode == AnimationElement.MODE.ROTATE then
    self.animationRotation = self.animationRotation - 2 * math.pi * dt / self.animationSpeed
    self:updateRotation()
  end
end
function AnimationElement:updateAnimationUVs()
  if self.animationMode == AnimationElement.MODE.UV_SHIFT then
    self:setImageUVs(nil, self.animationStartPos + (self.animationFrameSize + self.animationUVOffset) * self.animationOffset, nil, self.animationStartPos + (self.animationFrameSize + self.animationUVOffset) * self.animationOffset, nil, self.animationStartPos + (self.animationFrameSize + self.animationUVOffset) * self.animationOffset + self.animationFrameSize, nil, self.animationStartPos + (self.animationFrameSize + self.animationUVOffset) * self.animationOffset + self.animationFrameSize, nil)
  end
end
function AnimationElement:updateRotation()
  GuiOverlay.setRotation(self.overlay, self.animationRotation, self.absSize[1] * self.pivot[1], self.absSize[2] * self.pivot[2])
end
function AnimationElement:setAnimationData()
  if self.overlay ~= nil then
    local v3 = self:getOverlayState()
    local v1 = GuiOverlay.getOverlayUVs(...)
    self.animationFrameSize = (v1[5] - v1[1] - self.animationUVOffset * (self.animationFrames - 1)) / self.animationFrames
    self.animationStartPos = v1[1]
    self:updateAnimationUVs()
  end
end
