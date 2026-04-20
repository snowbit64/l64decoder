-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HUDTextDisplay = {}
local HUDTextDisplay_mt = Class(HUDTextDisplay, HUDDisplayElement)
HUDTextDisplay.SHADOW_OFFSET_FACTOR = 0.05
function HUDTextDisplay.new(posX, posY, textSize, textAlignment, textColor, textBold)
  local backgroundOverlay = Overlay.new(nil, 0, 0, 0, 0)
  backgroundOverlay:setColor(1, 1, 1, 1)
  local v8 = v8:superClass()
  local v7 = v8.new(backgroundOverlay, nil, u0)
  v7.initialPosX = posX
  v7.initialPosY = posY
  v7.text = ""
  v7.textSize = textSize or 0
  v8 = v7:scalePixelToScreenHeight(v7.textSize)
  v7.screenTextSize = v8
  if not textAlignment then
  end
  v7.textAlignment = v8
  if not textColor then
  end
  v7.textColor = v8
  v7.textBold = textBold or false
  v7.hasShadow = false
  v7.shadowColor = {0, 0, 0, 1}
  return v7
end
function HUDTextDisplay:setText(text, textSize, textAlignment, textColor, textBold)
  if not text then
  end
  self.text = v6
  if not textSize then
  end
  self.textSize = v6
  local v6 = self:scalePixelToScreenHeight(self.textSize)
  self.screenTextSize = v6
  if not textAlignment then
  end
  self.textAlignment = v6
  if not textColor then
  end
  self.textColor = v6
  if not textBold then
  end
  self.textBold = v6
  local width = getTextWidth(self.screenTextSize, self.text)
  local height = getTextHeight(self.screenTextSize, self.text)
  self:setDimension(width, height)
  self:setPosition(self.initialPosX, self.initialPosY)
end
function HUDTextDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale)
  local v2 = self:scalePixelToScreenHeight(self.textSize)
  self.screenTextSize = v2
end
function HUDTextDisplay:setVisible(isVisible, animate)
  HUDElement.setVisible(self, isVisible)
  if animate then
    if isVisible then
      local v3 = v3:getFinished()
      -- if v3 then goto L18 end
    end
    v3:reset()
    if isVisible then
      v3:start()
    end
  end
end
function HUDTextDisplay:setAlpha(alpha)
  self:setColor(nil, nil, nil, alpha)
end
function HUDTextDisplay:setTextColorChannels(r, g, b, a)
  self.textColor[1] = r
  self.textColor[2] = g
  self.textColor[3] = b
  self.textColor[4] = a
end
function HUDTextDisplay:setTextShadow(isShadowEnabled, shadowColor)
  if not isShadowEnabled then
  end
  self.hasShadow = v3
  if not shadowColor then
  end
  self.shadowColor = v3
end
function HUDTextDisplay:setAnimation(animationTween)
  self:storeOriginalPosition()
  if not animationTween then
  end
  self.animation = v2
end
function HUDTextDisplay:update(dt)
  local v2 = self:getVisible()
  if v2 then
    local v3 = v3:superClass()
    v3.update(self, dt)
  end
end
function HUDTextDisplay:draw()
  if self.text == "" then
    return
  end
  setTextBold(self.textBold)
  local v1, v2 = self:getPosition()
  setTextAlignment(self.textAlignment)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
  setTextWrapWidth(0.9)
  if self.hasShadow then
    local v4, v5, v6, v7 = unpack(self.shadowColor)
    setTextColor(v4, v5, v6, v7 * self.overlay.a)
    renderText(v1 + self.screenTextSize * HUDTextDisplay.SHADOW_OFFSET_FACTOR, v2 - self.screenTextSize * HUDTextDisplay.SHADOW_OFFSET_FACTOR, self.screenTextSize, self.text)
  end
  local v3, v4, v5, v6 = unpack(self.textColor)
  setTextColor(v3, v4, v5, v6 * self.overlay.a)
  renderText(v1, v2, self.screenTextSize, self.text)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextWrapWidth(0)
  setTextBold(false)
  setTextColor(1, 1, 1, 1)
end
