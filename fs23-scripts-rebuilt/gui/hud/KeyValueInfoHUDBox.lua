-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

KeyValueInfoHUDBox = {}
local KeyValueInfoHUDBox_mt = Class(KeyValueInfoHUDBox, InfoHUDBox)
function KeyValueInfoHUDBox.new(uiScale)
  local v1 = InfoHUDBox.new(u0, uiScale)
  v1.displayComponents = {}
  v1.cachedLines = {}
  v1.activeLines = {}
  v1.title = "Unknown Title"
  return v1
end
function KeyValueInfoHUDBox:canDraw()
  return self.doShowNextFrame
end
function KeyValueInfoHUDBox:getDisplayHeight()
  return 2 * self.listMarginHeight + #self.activeLines * self.rowHeight + self.labelTextSize + self.labelTextOffsetY
end
function KeyValueInfoHUDBox:draw(posX, posY)
  drawFilledRect(posX - self.boxWidth, posY, self.boxWidth, 2 * self.listMarginHeight + #self.activeLines * self.rowHeight, 0, 0, 0, 0.75)
  setTextAlignment(RenderText.ALIGN_LEFT)
  local v8 = unpack(KeyValueInfoHUDBox.COLOR.TEXT_DEFAULT)
  setTextColor(...)
  setTextBold(true)
  renderText(posX - self.boxWidth + self.labelTextOffsetX, posY + 2 * self.listMarginHeight + #self.activeLines * self.rowHeight + self.labelTextOffsetY, self.titleTextSize, self.title)
  setTextBold(false)
  -- TODO: structure LOP_FORNPREP (pc 102, target 233)
  setTextBold(true)
  if self.activeLines[#self.activeLines].accentuate then
    if not self.activeLines[#self.activeLines].accentuateColor then
    end
    local v13 = unpack(v14)
    v12(...)
  end
  setTextAlignment(RenderText.ALIGN_LEFT)
  renderText(v4, v5 + self.leftTextOffsetY, self.rowTextSize, v11.key)
  setTextAlignment(RenderText.ALIGN_RIGHT)
  local v14 = getTextWidth(self.rowTextSize, v11.key)
  setTextBold(false)
  v13 = Utils.limitTextToWidth(v11.value, self.rowTextSize, v7 - 0.025 * self.boxWidth - v14, false, "...")
  renderText(v3, v5 + self.rightTextOffsetY, self.rowTextSize, v13)
  if v11.accentuate then
    local v15 = unpack(KeyValueInfoHUDBox.COLOR.TEXT_DEFAULT)
    setTextColor(...)
  end
  if v10 < #self.activeLines then
    local v19 = unpack(KeyValueInfoHUDBox.COLOR.SEPARATOR)
    drawFilledRect(...)
  end
  -- TODO: structure LOP_FORNLOOP (pc 232, target 103)
  setTextAlignment(RenderText.ALIGN_LEFT)
  self.doShowNextFrame = false
end
function KeyValueInfoHUDBox:clear()
  -- TODO: structure LOP_FORNPREP (pc 5, target 21)
  self.cachedLines[#self.cachedLines + 1] = self.activeLines[#self.activeLines]
  self.activeLines[#self.activeLines] = nil
  -- TODO: structure LOP_FORNLOOP (pc 20, target 6)
end
function KeyValueInfoHUDBox:setTitle(title)
  local v2 = utf8ToUpper(title)
  if v2 ~= self.title then
    self.title = v2
    v2 = self:textSizeToFit(self.labelTextSize, self.title, self.boxWidth)
    self.titleTextSize = v2
  end
end
function KeyValueInfoHUDBox.textSizeToFit(v0, v1, v2, v3, v4)
  if v4 == nil then
  end
  setTextWrapWidth(v3)
  local v6 = getTextLength(v5, v2, 99999)
  while true do
    v7 = getTextLength(v5, v2, 1)
    if not (v7 < v6) then
      break
    end
    if not (v5 - v1 * 0.05 <= v1 / 2) then
      continue
    end
    break
  end
  setTextWrapWidth(0)
  return v5
end
function KeyValueInfoHUDBox:addLine(key, value, accentuate, accentuateColor)
  if 0 < #self.cachedLines then
    self.cachedLines[#self.cachedLines] = nil
  else
  end
  v5.key = key
  v5.value = value or ""
  v5.accentuate = accentuate
  v5.accentuateColor = accentuateColor
  self.activeLines[#self.activeLines + 1] = v5
end
function KeyValueInfoHUDBox:showNextFrame()
  self.doShowNextFrame = true
end
function KeyValueInfoHUDBox:setScale(uiScale)
  self.uiScale = uiScale
  self:storeScaledValues()
end
function KeyValueInfoHUDBox:storeScaledValues()
  self.boxWidth = 340 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.labelTextSize = HUDElement.TEXT_SIZE.DEFAULT_TITLE * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.rowTextSize = HUDElement.TEXT_SIZE.DEFAULT_TEXT * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.titleTextSize = self.labelTextSize
  self.labelTextOffsetX = 0 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.labelTextOffsetY = 3 * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.leftTextOffsetX = 0 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.leftTextOffsetY = 6 * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.rightTextOffsetX = 0 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.rightTextOffsetY = 6 * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.rowWidth = 308 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.rowHeight = 26 * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.listMarginWidth = 16 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.listMarginHeight = 15 * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
end
KeyValueInfoHUDBox.COLOR = {TEXT_DEFAULT = {1, 1, 1, 1}, TEXT_HIGHLIGHT = {0.0003, 0.5647, 0.9822, 1}, SEPARATOR = {1, 1, 1, 0.2}}
