-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InfoDisplay = {}
local InfoDisplay_mt = Class(InfoDisplay, HUDDisplayElement)
function InfoDisplay.new(hudAtlasPath)
  local backgroundOverlay = InfoDisplay.createBackground(hudAtlasPath)
  local v3 = v3:superClass()
  local v2 = v3.new(backgroundOverlay, nil, u0)
  v2.isEnabled = true
  v2.boxMarginY = 0
  v2.boxes = {}
  return v2
end
function InfoDisplay.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function InfoDisplay:setEnabled(isEnabled)
  self.isEnabled = isEnabled
end
function InfoDisplay:createBox(class)
  local box = class.new(self.uiScale)
  table.insert(self.boxes, box)
  return box
end
function InfoDisplay:destroyBox(box)
  table.removeElement(self.boxes, box)
  box:delete()
end
function InfoDisplay:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.isEnabled then
    self:updateSize()
  end
end
function InfoDisplay:updateSize()
  -- TODO: structure LOP_FORNPREP (pc 6, target 22)
  local v6 = self.boxes[1]:canDraw()
  if v6 then
    local v7 = self.boxes[1]:getDisplayHeight()
  end
  -- TODO: structure LOP_FORNLOOP (pc 21, target 7)
  self.totalHeight = v1
end
function InfoDisplay:getDisplayHeight()
  if self.isEnabled then
    return self.totalHeight
  end
  return 0
end
function InfoDisplay:draw()
  if not self.isEnabled then
    return
  end
  local v2 = v2:superClass()
  v2.draw(self)
  -- TODO: structure LOP_FORNPREP (pc 24, target 45)
  local v7 = self.boxes[#self.boxes]:canDraw()
  if v7 then
    self.boxes[#self.boxes]:draw(1 - g_safeFrameOffsetX, g_safeFrameOffsetY)
    local v8 = self.boxes[#self.boxes]:getDisplayHeight()
  end
  -- TODO: structure LOP_FORNLOOP (pc 44, target 25)
end
function InfoDisplay.getBackgroundPosition(uiScale)
  local v2 = unpack(InfoDisplay.SIZE.SELF)
  local v1, v2 = getNormalizedScreenValues(...)
  return 1 - g_safeFrameOffsetX - v1 * uiScale, g_safeFrameOffsetY
end
function InfoDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  self.uiScale = uiScale
  self:storeScaledValues()
  for v5, v6 in ipairs(self.boxes) do
    v6:setScale(uiScale)
  end
end
function InfoDisplay:storeScaledValues()
  local v1 = self:scalePixelToScreenHeight(InfoDisplay.SIZE.BOX_MARGIN)
  self.boxMarginY = v1
end
function InfoDisplay.createBackground()
  local v0, v1 = InfoDisplay.getBackgroundPosition(1)
  local v3 = unpack(InfoDisplay.SIZE.SELF)
  local v2, v3 = getNormalizedScreenValues(...)
  local v4 = Overlay.new(g_baseUIFilename, v0, v1, v2, v3)
  v4:setUVs(g_colorBgUVs)
  v4:setColor(1, 0, 0, 0.75)
  return v4
end
InfoDisplay.SIZE = {SELF = {340, 160}, BOX_MARGIN = 20}
