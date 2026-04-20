-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DynamicFadedBitmapElement = {}
local DynamicFadedBitmapElement_mt = Class(DynamicFadedBitmapElement, PictureElement)
function DynamicFadedBitmapElement.new(target, custom_mt)
  local v3 = v3:superClass()
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.templateOverlay = {}
  v2.fadeTime = 2500
  v2.fadeInterval = 10000
  v2.alpha = 1
  v2.filenames = {}
  v2.overlays = {}
  v2.currentImageIndex = 1
  v2.fadeAlpha = 0
  return v2
end
function DynamicFadedBitmapElement:delete()
  for v4, v5 in ipairs(self.overlays) do
    GuiOverlay.deleteOverlay(v5)
  end
  GuiOverlay.deleteOverlay(self.templateOverlay)
  v2 = v2:superClass()
  v2.delete(self)
end
function DynamicFadedBitmapElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLInt(xmlFile, key .. "#fadeTime")
  local v3 = Utils.getNoNil(v4, self.fadeTime)
  self.fadeTime = v3
  v4 = getXMLInt(xmlFile, key .. "#fadeInterval")
  v3 = Utils.getNoNil(v4, self.fadeInterval)
  self.fadeInterval = v3
  GuiOverlay.loadOverlay(self, self.templateOverlay, "image", self.imageSize, nil, xmlFile, key)
  GuiOverlay.createOverlay(self.templateOverlay)
end
function DynamicFadedBitmapElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getNumber("fadeTime", self.fadeTime)
  self.fadeTime = v3
  v3 = profile:getNumber("fadeInterval", self.fadeInterval)
  self.fadeInterval = v3
  GuiOverlay.loadOverlay(self, self.templateOverlay, "image", self.imageSize, profile, nil, nil)
  if self.templateOverlay.filename == self.templateOverlay.filename then
    -- if v0.templateOverlay.previewFilename == v0.templateOverlay.previewFilename then goto L64 end
  end
  GuiOverlay.createOverlay(self.templateOverlay)
  local filenameList = profile:getValue("imageFilenames")
  if filenameList ~= nil then
    local v6 = filenameList:split(";")
    self.filenames = v6
    self:buildOverlays()
  end
end
function DynamicFadedBitmapElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  GuiOverlay.copyOverlay(self.templateOverlay, src.templateOverlay)
  local v2 = table.copy(src.filenames)
  self.filenames = v2
  self.fadeTime = src.fadeTime
  self.fadeInterval = src.fadeInterval
  self:buildOverlays()
end
function DynamicFadedBitmapElement:setDisabled(disabled, doNotUpdateChildren)
  local v4 = v4:superClass()
  v4.setDisabled(self, disabled, doNotUpdateChildren)
  if disabled then
    self:setOverlayState(GuiOverlay.STATE_DISABLED)
    return
  end
  self:setOverlayState(GuiOverlay.STATE_NORMAL)
end
function DynamicFadedBitmapElement:setAlpha(alpha)
  local v3 = v3:superClass()
  v3.setAlpha(self, alpha)
  self.alpha = alpha
end
function DynamicFadedBitmapElement:setImageFilenames(filenames)
  self.filenames = filenames
  self:buildOverlays()
end
function DynamicFadedBitmapElement:setImagesUVs(v1)
  self.uvs = v1
  self:buildOverlays()
end
function DynamicFadedBitmapElement:buildOverlays()
  -- TODO: structure LOP_FORNPREP (pc 5, target 17)
  GuiOverlay.deleteOverlay(self.overlays[1])
  self.overlays[1] = nil
  -- TODO: structure LOP_FORNLOOP (pc 16, target 6)
  for v4, v5 in ipairs(self.filenames) do
    self.overlays[v4] = {}
    GuiOverlay.copyOverlay(self.overlays[v4], self.templateOverlay, self.filenames[v4])
    if not (self.uvs ~= nil) then
      continue
    end
    self.overlays[v4].uvs = self.uvs
  end
end
function DynamicFadedBitmapElement:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if #self.filenames == 0 then
    return
  end
  local v4 = math.floor(g_time % self.fadeInterval * #self.filenames / self.fadeInterval)
  self.currentImageIndex = v4 + 1
  self.fadeAlpha = g_time % self.fadeInterval * #self.filenames % self.fadeInterval / self.fadeInterval
end
function DynamicFadedBitmapElement:draw(clipX1, clipY1, clipX2, clipY2)
  local v5, v6, v7, v8 = self:getAdjustedPosition()
  local state = self:getOverlayState()
  local v12 = MathUtil.smoothstep(1 - self.fadeTime / self.fadeInterval, 1, self.fadeAlpha)
  self.overlays[self.currentImageIndex].color[4] = 1 * self.alpha
  GuiOverlay.renderOverlay(self.overlays[self.currentImageIndex], v5, v6, v7, v8, state, clipX1, clipY1, clipX2, clipY2)
  if 0 < v12 then
    self.overlays[self.currentImageIndex % #self.filenames + 1].color[4] = v12 * self.alpha
    GuiOverlay.renderOverlay(self.overlays[self.currentImageIndex % #self.filenames + 1], v5, v6, v7, v8, state, clipX1, clipY1, clipX2, clipY2)
  end
end
function DynamicFadedBitmapElement:canReceiveFocus()
  if self.visible then
    -- if #v0.elements >= 1 then goto L11 end
  end
  return false
  for v4, v5 in ipairs(self.elements) do
    local v6 = v5:canReceiveFocus()
    if not not v6 then
      continue
    end
    return false
  end
  return true
end
function DynamicFadedBitmapElement:getFocusTarget()
  if 0 < #self.elements then
    local v1, v2 = next(self.elements)
    if v2 then
      return v2
    end
  end
  return self
end
