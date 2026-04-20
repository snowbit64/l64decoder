-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ContextActionDisplay = {}
local ContextActionDisplay_mt = Class(ContextActionDisplay, HUDDisplayElement)
ContextActionDisplay.CONTEXT_ICON = {ATTACH = "attach", FUEL = "fuel", TIP = "tip", NO_DETACH = "noDetach", FILL_BOWL = "fillBowl"}
ContextActionDisplay.MIN_DISPLAY_DURATION = 100
function ContextActionDisplay.new(hudAtlasPath, inputDisplayManager)
  local backgroundOverlay = ContextActionDisplay.createBackground()
  local v4 = v4:superClass()
  local v3 = v4.new(backgroundOverlay, nil, u0)
  v3.uiScale = 1
  v3.inputDisplayManager = inputDisplayManager
  v3.inputGlyphElement = nil
  v3.contextIconElements = {}
  v3.contextAction = ""
  v3.contextIconName = ""
  v3.targetText = ""
  v3.actionText = ""
  v3.contextPriority = -math.huge
  v3.contextIconElementRightX = 0
  v3.contextIconOffsetX = 0
  v3.contextIconOffsetY = 0
  v3.contextIconSizeX = 0
  v3.actionTextOffsetX = 0
  v3.actionTextOffsetY = 0
  v3.actionTextSize = 0
  v3.targetTextOffsetX = 0
  v3.targetTextOffsetY = 0
  v3.targetTextSize = 0
  v3.borderOffsetX = 0
  v3.displayTime = 0
  v3:createComponents(hudAtlasPath, inputDisplayManager)
  return v3
end
function ContextActionDisplay:setContext(contextAction, contextIconName, targetText, priority, actionText)
  if priority == nil then
  end
  if self.contextPriority <= priority and self.contextIconElements[contextIconName] ~= nil then
    self.contextAction = contextAction
    self.contextIconName = contextIconName
    self.targetText = targetText
    self.contextPriority = priority
    local v6 = v6:getEventHelpElementForAction(self.contextAction)
    self.contextEventHelpElement = v6
    if v6 ~= nil then
      v7:setAction(contextAction)
      if not actionText and not v6.textRight then
      end
      local v7 = v7(v8)
      self.actionText = v7
      v7 = getTextWidth(self.targetTextSize, self.targetText)
      self.rightSideX = 0.5 - v7 * 0.5
      for v13, v14 in pairs(self.contextIconElements) do
        local v18 = v14:getWidth()
        v14:setPosition(v9 - v18, nil)
        if not (v13 == self.contextIconName) then
          continue
        end
        local v15 = v14:getWidth()
      end
      v12 = v12:getWidth()
      v10:setPosition(v9 - v12 + self.inputIconOffsetX - v8, nil)
    end
    v7 = self:getVisible()
    if not v7 then
      self:setVisible(true, true)
    end
  end
  for v9, v10 in pairs(self.contextIconElements) do
    if v9 ~= self.contextIconName then
    end
    v10:setVisible(true)
  end
  self.displayTime = ContextActionDisplay.MIN_DISPLAY_DURATION
end
function ContextActionDisplay:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self.displayTime = self.displayTime - dt
  local v2 = self:getVisible()
  if self.displayTime <= 0 and v2 then
    v3 = v3:getFinished()
    if v3 then
      self:setVisible(false, true)
    end
  end
  v3 = v3:getFinished()
  if not v3 then
    self:storeScaledValues()
    return
  end
  if self.contextAction ~= "" and not v2 then
    self:resetContext()
  end
end
function ContextActionDisplay:resetContext()
  self.contextAction = ""
  self.contextIconName = ""
  self.targetText = ""
  self.actionText = ""
  self.contextPriority = -math.huge
end
function ContextActionDisplay:draw()
  if self.contextAction ~= "" and self.contextEventHelpElement ~= nil then
    v1:setAction(self.contextAction)
    local v2 = v2:superClass()
    v2.draw(self)
    local v1, v2 = self:getPosition()
    local v4 = unpack(ContextActionDisplay.COLOR.ACTION_TEXT)
    setTextColor(...)
    setTextBold(true)
    setTextAlignment(RenderText.ALIGN_LEFT)
    local height = self:getHeight()
    renderText(self.rightSideX, v2 + height * 0.5 + self.targetTextSize * 0.5 + self.actionTextOffsetY, self.actionTextSize, self.actionText)
    local v7 = unpack(ContextActionDisplay.COLOR.TARGET_TEXT)
    setTextColor(...)
    setTextBold(false)
    local width = self:getWidth()
    local v11 = v11:getWidth()
    setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_MIDDLE)
    setTextAlignment(RenderText.ALIGN_CENTER)
    renderText(0.5, v2 + height * 0.5, self.targetTextSize, self.targetText)
    setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
    if g_uiDebugEnabled then
      setOverlayColor(GuiElement.debugOverlay, 0, 1, 1, 1)
      renderOverlay(GuiElement.debugOverlay, self.rightSideX, v2 + height * 0.5, width - self.targetTextOffsetX - self.contextIconSizeX - v11 * 2 - self.contextIconOffsetX, 1 / g_screenHeight)
    end
  end
end
function ContextActionDisplay.getWidth(v0)
  return 1
end
function ContextActionDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  local currentVisibility = self:getVisible()
  self:setVisible(true, false)
  self.uiScale = uiScale
  local v5 = self:getWidth()
  local v3, v4 = ContextActionDisplay.getBackgroundPosition(...)
  self:setPosition(v3, v4)
  self:storeOriginalPosition()
  self:setVisible(currentVisibility, false)
  self:storeScaledValues()
  v5:setDimension(1)
  v5:setPosition(0, 0)
end
function ContextActionDisplay:storeScaledValues()
  local v1, v2 = self:scalePixelToScreenVector(ContextActionDisplay.POSITION.CONTEXT_ICON)
  self.contextIconOffsetX = v1
  self.contextIconOffsetY = v2
  v1 = self:scalePixelToScreenWidth(ContextActionDisplay.SIZE.CONTEXT_ICON[1])
  self.contextIconSizeX = v1
  v1 = self:scalePixelToScreenWidth(ContextActionDisplay.OFFSET.X)
  self.borderOffsetX = v1
  v1, v2 = self:scalePixelToScreenVector(ContextActionDisplay.POSITION.INPUT_ICON)
  self.inputIconOffsetX = v1
  self.inputIconOffsetX = v2
  v1, v2 = self:scalePixelToScreenVector(ContextActionDisplay.POSITION.ACTION_TEXT)
  self.actionTextOffsetX = v1
  self.actionTextOffsetY = v2
  v1 = self:scalePixelToScreenHeight(ContextActionDisplay.TEXT_SIZE.ACTION_TEXT)
  self.actionTextSize = v1
  v1, v2 = self:scalePixelToScreenVector(ContextActionDisplay.POSITION.TARGET_TEXT)
  self.targetTextOffsetX = v1
  self.targetTextOffsetY = v2
  v1 = self:scalePixelToScreenHeight(ContextActionDisplay.TEXT_SIZE.TARGET_TEXT)
  self.targetTextSize = v1
end
function ContextActionDisplay.getBackgroundPosition(scale, width)
  local v3 = unpack(ContextActionDisplay.POSITION.BACKGROUND)
  local v2, v3 = getNormalizedScreenValues(...)
  return 0.5 - width * 0.5 - v2 * scale, g_safeFrameOffsetY - v3 * scale
end
function ContextActionDisplay.createBackground()
  local v1 = unpack(ContextActionDisplay.SIZE.BACKGROUND)
  local v0, v1 = getNormalizedScreenValues(...)
  local v2, v3 = ContextActionDisplay.getBackgroundPosition(1, v0)
  return Overlay.new(nil, v2, v3, v0, v1)
end
function ContextActionDisplay:createComponents(hudAtlasPath, inputDisplayManager)
  local v3, v4 = self:getPosition()
  self:createFrame(hudAtlasPath, v3, v4)
  self:createInputGlyph(hudAtlasPath, v3, v4, inputDisplayManager)
  self:createActionIcons(hudAtlasPath, v3, v4)
  self:createFadeBackground(hudAtlasPath)
  self:storeOriginalPosition()
end
function ContextActionDisplay:createInputGlyph(hudAtlasPath, baseX, baseY, inputDisplayManager)
  local v6 = unpack(ContextActionDisplay.SIZE.INPUT_ICON)
  local v5, v6 = getNormalizedScreenValues(...)
  local v8 = unpack(ContextActionDisplay.POSITION.INPUT_ICON)
  local v7, v8 = getNormalizedScreenValues(...)
  local v9 = InputGlyphElement.new(inputDisplayManager, v5, v6)
  local v15 = self:getHeight()
  v9:setPosition(baseX + v7, baseY + v8 + (v15 - v6) * 0.5)
  v9:setKeyboardGlyphColor(ContextActionDisplay.COLOR.INPUT_ICON)
  self.inputGlyphElement = v9
  self:addChild(v9)
end
function ContextActionDisplay.createFrame(v0, v1, v2, v3)
end
function ContextActionDisplay:createActionIcons(hudAtlasPath, baseX, baseY)
  local v5 = unpack(ContextActionDisplay.POSITION.CONTEXT_ICON)
  local v4, v5 = getNormalizedScreenValues(...)
  local v7 = unpack(ContextActionDisplay.SIZE.CONTEXT_ICON)
  local v6, v7 = getNormalizedScreenValues(...)
  local v12 = self:getHeight()
  for v12, v13 in pairs(ContextActionDisplay.CONTEXT_ICON) do
    local v14 = Overlay.new(hudAtlasPath, baseX + v4, v8, v6, v7)
    local v18 = GuiUtils.getUVs(ContextActionDisplay.UV[v13])
    v14:setUVs(...)
    v18 = unpack(ContextActionDisplay.COLOR.CONTEXT_ICON)
    v14:setColor(...)
    local v16 = HUDElement.new(v14)
    v16:setVisible(false)
    self.contextIconElements[v13] = v16
    self:addChild(v16)
  end
end
function ContextActionDisplay:createFadeBackground(hudAtlasPath)
  local v3 = unpack(ContextActionDisplay.SIZE.FADE)
  local v2, v3 = getNormalizedScreenValues(...)
  local v4 = Overlay.new(g_baseUIFilename, 0, 0, 1, v3)
  v4:setUVs(g_colorBgUVs)
  v4:setColor(1, 0, 0, 1)
  setOverlayCornerColor(v4.overlayId, 0, 0, 0, 0, 0.8)
  setOverlayCornerColor(v4.overlayId, 1, 0, 0, 0, 0)
  setOverlayCornerColor(v4.overlayId, 2, 0, 0, 0, 0.8)
  setOverlayCornerColor(v4.overlayId, 3, 0, 0, 0, 0)
  local v5 = HUDElement.new(v4)
  v5:setVisible(true)
  self:addChild(v5)
  self.fadeBackgroundElement = v5
end
function ContextActionDisplay.getHidingTranslation(v0)
  local v2 = unpack(ContextActionDisplay.SIZE.FADE)
  local v1, v2 = getNormalizedScreenValues(...)
  return 0, -v2
end
{}[ContextActionDisplay.CONTEXT_ICON.ATTACH] = {48, 0, 48, 48}
{}[ContextActionDisplay.CONTEXT_ICON.FUEL] = {192, 0, 48, 48}
{}[ContextActionDisplay.CONTEXT_ICON.TIP] = {384, 0, 48, 48}
{}[ContextActionDisplay.CONTEXT_ICON.NO_DETACH] = {96, 0, 48, 48}
{}[ContextActionDisplay.CONTEXT_ICON.FILL_BOWL] = {480, 144, 48, 48}
ContextActionDisplay.UV = {}
ContextActionDisplay.SIZE = {BACKGROUND = {1920, 60}, INPUT_ICON = {36, 36}, CONTEXT_ICON = {64, 64}, FADE = {0, 180}}
ContextActionDisplay.OFFSET = {X = 37.5}
ContextActionDisplay.TEXT_SIZE = {ACTION_TEXT = 14, TARGET_TEXT = 26}
ContextActionDisplay.POSITION = {BACKGROUND = {0, -20}, INPUT_ICON = {0, 3}, CONTEXT_ICON = {-6, 3}, ACTION_TEXT = {0, -2}, TARGET_TEXT = {30, 0}}
ContextActionDisplay.COLOR = {INPUT_ICON = {0.0003, 0.5647, 0.9822, 1}, CONTEXT_ICON = {0.0003, 0.5647, 0.9822, 1}, ACTION_TEXT = {0.0003, 0.5647, 0.9822, 1}, TARGET_TEXT = {1, 1, 1, 1}}
