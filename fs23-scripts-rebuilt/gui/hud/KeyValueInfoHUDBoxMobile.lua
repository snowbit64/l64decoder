-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

KeyValueInfoHUDBoxMobile = {}
local v0 = Class(KeyValueInfoHUDBoxMobile, InfoHUDBox)
function KeyValueInfoHUDBoxMobile.new(v0)
  local v1 = InfoHUDBox.new(u0, v0)
  v1.displayComponents = {}
  v1.cachedLines = {}
  v1.activeLines = {}
  v1.posYOffset = 160 / g_screenHeight * g_screenHeight / g_referenceScreenHeight
  return v1
end
function KeyValueInfoHUDBoxMobile:canDraw()
  return self.doShowNextFrame
end
function KeyValueInfoHUDBoxMobile:getDisplayHeight()
  return 2 * self.listMarginHeight + #self.activeLines * self.rowHeight + self.labelTextOffsetY
end
function KeyValueInfoHUDBoxMobile:draw(v1, v2)
  local v3, v4 = getSafeFrameInsets()
  drawFilledRectRound(v1 - v4 - self.boxWidth, v2 + self.posYOffset, self.boxWidth, 2 * self.listMarginHeight + #self.activeLines * self.rowHeight, self.uiScale, 0, 0, 0, 0.75)
  -- TODO: structure LOP_FORNPREP (pc 70, target 183)
  setTextBold(true)
  if self.activeLines[#self.activeLines].accentuate then
    if not self.activeLines[#self.activeLines].accentuateColor then
    end
    local v15 = unpack(v16)
    v14(...)
  else
    setTextColor(1, 1, 1, 1)
  end
  setTextAlignment(RenderText.ALIGN_LEFT)
  renderText(v6, v7 + self.leftTextOffsetY, self.rowTextSize, v13.key)
  setTextAlignment(RenderText.ALIGN_RIGHT)
  local v16 = getTextWidth(self.rowTextSize, v13.key)
  setTextBold(false)
  v15 = Utils.limitTextToWidth(v13.value, self.rowTextSize, v9 - 0.025 * self.boxWidth - v16, false, "...")
  renderText(v5, v7 + self.rightTextOffsetY, self.rowTextSize, v15)
  if v13.accentuate then
    local v17 = unpack(KeyValueInfoHUDBoxMobile.COLOR.TEXT_DEFAULT)
    setTextColor(...)
  end
  -- TODO: structure LOP_FORNLOOP (pc 182, target 71)
  setTextAlignment(RenderText.ALIGN_LEFT)
  self.doShowNextFrame = false
end
function KeyValueInfoHUDBoxMobile:clear()
  -- TODO: structure LOP_FORNPREP (pc 5, target 21)
  self.cachedLines[#self.cachedLines + 1] = self.activeLines[#self.activeLines]
  self.activeLines[#self.activeLines] = nil
  -- TODO: structure LOP_FORNLOOP (pc 20, target 6)
end
function KeyValueInfoHUDBoxMobile.setTitle(v0, v1)
end
function KeyValueInfoHUDBoxMobile.textSizeToFit(v0, v1, v2, v3, v4)
  if v4 == nil then
  end
  setTextWrapWidth(v3)
  local v6 = getTextLength(v5, v2, 99999)
  while true do
    v7 = getTextLength(v5, v2, 1)
    if not (v7 < v6) then
      break
    end
    if not (v5 - v1 * 0.05 <= v4) then
      continue
    end
    break
  end
  setTextWrapWidth(0)
  return v5
end
function KeyValueInfoHUDBoxMobile:addLine(v1, v2, v3, v4)
  if 0 < #self.cachedLines then
    self.cachedLines[#self.cachedLines] = nil
  else
  end
  v5.key = v1
  v5.value = v2 or ""
  v5.accentuate = v3
  v5.accentuateColor = v4
  self.activeLines[#self.activeLines + 1] = v5
end
function KeyValueInfoHUDBoxMobile:showNextFrame()
  self.doShowNextFrame = true
end
function KeyValueInfoHUDBoxMobile:setScale(v1)
  self.uiScale = v1
  self:storeScaledValues()
end
function KeyValueInfoHUDBoxMobile:storeScaledValues()
  self.boxWidth = 500 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.rowTextSize = HUDElement.TEXT_SIZE.DEFAULT_TEXT_MOBILE * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.labelTextOffsetX = 0 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.labelTextOffsetY = 3 * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.leftTextOffsetX = 0 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.leftTextOffsetY = 6 * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.rightTextOffsetX = 0 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.rightTextOffsetY = 6 * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.rowWidth = 450 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.rowHeight = 40 * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
  self.listMarginWidth = 25 * self.uiScale * g_aspectScaleX / g_referenceScreenWidth
  self.listMarginHeight = 15 * self.uiScale * g_aspectScaleY / g_referenceScreenHeight
end
KeyValueInfoHUDBoxMobile.COLOR = {TEXT_DEFAULT = {1, 1, 1, 1}, TEXT_HIGHLIGHT = {0.0003, 0.5647, 0.9822, 1}, SEPARATOR = {1, 1, 1, 0.2}}
