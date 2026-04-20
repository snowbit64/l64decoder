-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BitmapElement = {}
local BitmapElement_mt = Class(BitmapElement, GuiElement)
function BitmapElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.offset = {0, 0}
  v2.focusedOffset = {0, 0}
  v2.overlay = {}
  return v2
end
function BitmapElement:delete()
  GuiOverlay.deleteOverlay(self.overlay)
  local v2 = v2:superClass()
  v2.delete(self)
end
function BitmapElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.overlay, "image", self.imageSize, nil, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#focusedOffset")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.focusedOffset)
  self.focusedOffset = v3
  v4 = getXMLString(xmlFile, key .. "#offset")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.offset)
  self.offset = v3
  GuiOverlay.createOverlay(self.overlay)
end
function BitmapElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  GuiOverlay.loadOverlay(self, self.overlay, "image", self.imageSize, profile, nil, nil)
  local v6 = profile:getValue("offset")
  local v5 = GuiUtils.getNormalizedValues(v6, self.outputSize, self.offset)
  self.offset = v5
  v6 = profile:getValue("focusedOffset")
  v5 = GuiUtils.getNormalizedValues(v6, self.outputSize, {self.offset[1], self.offset[2]})
  self.focusedOffset = v5
  if self.overlay.filename == self.overlay.filename then
    -- if v0.overlay.previewFilename == v0.overlay.previewFilename then goto L87 end
  end
  GuiOverlay.deleteOverlay(self.overlay)
  GuiOverlay.createOverlay(self.overlay)
  if applyProfile then
    self:applyBitmapAspectScale()
  end
end
function BitmapElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  GuiOverlay.copyOverlay(self.overlay, src.overlay)
  local v2 = table.copy(src.offset)
  self.offset = v2
  v2 = table.copy(src.focusedOffset)
  self.focusedOffset = v2
end
function BitmapElement:applyBitmapAspectScale()
  local v1, v2 = self:getAspectScale()
  self.offset[1] = self.offset[1] * v1
  self.focusedOffset[1] = self.focusedOffset[1] * v1
  self.offset[2] = self.offset[2] * v2
  self.focusedOffset[2] = self.focusedOffset[2] * v2
end
function BitmapElement:applyScreenAlignment()
  self:applyBitmapAspectScale()
  local v2 = v2:superClass()
  v2.applyScreenAlignment(self)
end
function BitmapElement:setDisabled(disabled, doNotUpdateChildren)
  local v4 = v4:superClass()
  v4.setDisabled(self, disabled, doNotUpdateChildren)
  if disabled then
    self:setOverlayState(GuiOverlay.STATE_DISABLED)
    return
  end
  self:setOverlayState(GuiOverlay.STATE_NORMAL)
end
function BitmapElement:setAlpha(alpha)
  local v3 = v3:superClass()
  v3.setAlpha(self, alpha)
  if self.overlay ~= nil then
    self.overlay.alpha = self.alpha
  end
end
function BitmapElement:getOffset()
  local state = self:getOverlayState()
  if state ~= GuiOverlay.STATE_FOCUSED and state ~= GuiOverlay.STATE_PRESSED and state ~= GuiOverlay.STATE_SELECTED then
    -- if not GuiOverlay.STATE_HIGHLIGHTED then goto L30 end
  end
  return self.focusedOffset[1], self.focusedOffset[2]
end
function BitmapElement:setIsWebOverlay(isWebOverlay)
  self.overlay.isWebOverlay = isWebOverlay
end
function BitmapElement:setImageFilename(filename)
  local v2 = GuiOverlay.createOverlay(self.overlay, filename)
  self.overlay = v2
end
function BitmapElement:setImageColor(state, r, g, b, a)
  local color = GuiOverlay.getOverlayColor(self.overlay, state)
  local v7 = Utils.getNoNil(r, color[1])
  color[1] = v7
  v7 = Utils.getNoNil(g, color[2])
  color[2] = v7
  v7 = Utils.getNoNil(b, color[3])
  color[3] = v7
  v7 = Utils.getNoNil(a, color[4])
  color[4] = v7
end
function BitmapElement:setImageUVs(state, v0, u0, v1, u1, v2, u2, v3, u3)
  local v12 = self:getOverlayState()
  local v10 = Utils.getNoNil(...)
  v10 = GuiOverlay.getOverlayUVs(self.overlay, v10)
  local v11 = Utils.getNoNil(v0, v10[1])
  v10[1] = v11
  v11 = Utils.getNoNil(u0, v10[2])
  v10[2] = v11
  v11 = Utils.getNoNil(v1, v10[3])
  v10[3] = v11
  v11 = Utils.getNoNil(u1, v10[4])
  v10[4] = v11
  v11 = Utils.getNoNil(v2, v10[5])
  v10[5] = v11
  v11 = Utils.getNoNil(u2, v10[6])
  v10[6] = v11
  v11 = Utils.getNoNil(v3, v10[7])
  v10[7] = v11
  v11 = Utils.getNoNil(u3, v10[8])
  v10[8] = v11
end
function BitmapElement:setImageRotation(rotation)
  self.overlay.rotation = rotation
end
function BitmapElement:draw(clipX1, clipY1, clipX2, clipY2)
  local v5, v6 = self:getOffset()
  local v13 = self:getOverlayState()
  GuiOverlay.renderOverlay(self.overlay, self.absPosition[1] + v5, self.absPosition[2] + v6, self.absSize[1], self.absSize[2], v13, clipX1, clipY1, clipX2, clipY2)
  local v8 = v8:superClass()
  v8.draw(self, clipX1, clipY1, clipX2, clipY2)
end
function BitmapElement:canReceiveFocus()
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
function BitmapElement:getFocusTarget()
  if 0 < #self.elements then
    local v1, v2 = next(self.elements)
    if v2 then
      return v2
    end
  end
  return self
end
