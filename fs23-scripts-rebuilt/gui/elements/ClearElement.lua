-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ClearElement = {}
local BitmapElement_mt = Class(ClearElement, GuiElement)
function ClearElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.offset = {0, 0}
  v2.focusedOffset = {0, 0}
  v2.overlay = {}
  return v2
end
function ClearElement:delete()
  GuiOverlay.deleteOverlay(self.overlay)
  local v2 = v2:superClass()
  v2.delete(self)
end
function ClearElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.overlay, "clear", self.imageSize, nil, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#focusedOffset")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.focusedOffset)
  self.focusedOffset = v3
  v4 = getXMLString(xmlFile, key .. "#offset")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.offset)
  self.offset = v3
end
function ClearElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  GuiOverlay.loadOverlay(self, self.overlay, "clear", self.imageSize, profile, nil, nil)
  v4 = profile:getValue("offset")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.offset)
  self.offset = v3
  v4 = profile:getValue("focusedOffset")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, {self.offset[1], self.offset[2]})
  self.focusedOffset = v3
  if applyProfile then
    self:applyBitmapAspectScale()
  end
end
function ClearElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  GuiOverlay.copyOverlay(self.overlay, src.overlay)
  local v2 = table.copy(src.offset)
  self.offset = v2
  v2 = table.copy(src.focusedOffset)
  self.focusedOffset = v2
end
function ClearElement:applyBitmapAspectScale()
  local v1, v2 = self:getAspectScale()
  self.offset[1] = self.offset[1] * v1
  self.focusedOffset[1] = self.focusedOffset[1] * v1
  self.offset[2] = self.offset[2] * v2
  self.focusedOffset[2] = self.focusedOffset[2] * v2
end
function ClearElement:applyScreenAlignment()
  self:applyBitmapAspectScale()
  local v2 = v2:superClass()
  v2.applyScreenAlignment(self)
end
function ClearElement:setDisabled(disabled, doNotUpdateChildren)
  local v4 = v4:superClass()
  v4.setDisabled(self, disabled, doNotUpdateChildren)
  if disabled then
    self:setOverlayState(GuiOverlay.STATE_DISABLED)
    return
  end
  self:setOverlayState(GuiOverlay.STATE_NORMAL)
end
function ClearElement:getOffset()
  local state = self:getOverlayState()
  if state ~= GuiOverlay.STATE_FOCUSED and state ~= GuiOverlay.STATE_PRESSED and state ~= GuiOverlay.STATE_SELECTED then
    -- if not GuiOverlay.STATE_HIGHLIGHTED then goto L30 end
  end
  return self.focusedOffset[1], self.focusedOffset[2]
end
function ClearElement:setImageRotation(rotation)
  self.overlay.rotation = rotation
end
function ClearElement:draw(clipX1, clipY1, clipX2, clipY2)
  local v5, v6 = self:getOffset()
  clearOverlayArea(self.absPosition[1] + v5, self.absPosition[2] + v6, self.size[1], self.size[2], self.overlay.rotation, self.size[1] / 2, self.size[2] / 2)
  local v8 = v8:superClass()
  v8.draw(self, clipX1, clipY1, clipX2, clipY2)
end
function ClearElement:canReceiveFocus()
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
function ClearElement:getFocusTarget()
  local v1, v2 = next(self.elements)
  if v2 then
    return v2
  end
  return self
end
