-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ButtonOverlay = {}
local ButtonOverlay_mt = Class(ButtonOverlay)
function ButtonOverlay.new()
  setmetatable({}, u0)
  local v2 = Overlay.new(g_baseUIFilename, 0, 0, 0, 0)
  local v4 = GuiUtils.getUVs({106, 100, 1, 40}, {1024, 1024})
  v2:setUVs(...)
  v2 = Overlay.new(g_baseUIFilename, 0, 0, 0, 0)
  v4 = GuiUtils.getUVs({101, 100, 5, 40}, {1024, 1024})
  v2:setUVs(...)
  v2 = Overlay.new(g_baseUIFilename, 0, 0, 0, 0)
  v4 = GuiUtils.getUVs({133, 100, 5, 40}, {1024, 1024})
  v2:setUVs(...)
  {textSizeFactor = 0.47, textYOffsetFactor = 0.125, buttonScaleOverlay = v2, buttonLeftOverlay = v2, buttonLeftRatio = 0.06756756756756757, buttonRightOverlay = v2, buttonRightRatio = 0.06756756756756757}:setColor(0.0723, 0.0723, 0.0723, 1)
  return {textSizeFactor = 0.47, textYOffsetFactor = 0.125, buttonScaleOverlay = v2, buttonLeftOverlay = v2, buttonLeftRatio = 0.06756756756756757, buttonRightOverlay = v2, buttonRightRatio = 0.06756756756756757, debugEnabled = false}
end
function ButtonOverlay:delete()
  if self.buttonScaleOverlay ~= 0 then
    v1:delete()
  end
  if self.buttonLeftOverlay ~= 0 then
    v1:delete()
  end
  if self.buttonRightOverlay ~= 0 then
    v1:delete()
  end
end
function ButtonOverlay:setColor(r, g, b, a)
  local v5 = Utils.getNoNil(r, self.r)
  self.r = v5
  v5 = Utils.getNoNil(g, self.g)
  self.g = v5
  v5 = Utils.getNoNil(b, self.b)
  self.b = v5
  v5 = Utils.getNoNil(a, self.a)
  self.a = v5
  if self.buttonScaleOverlay ~= 0 then
    setOverlayColor(self.buttonScaleOverlay.overlayId, self.r, self.g, self.b, self.a)
  end
  if self.buttonLeftOverlay ~= 0 then
    setOverlayColor(self.buttonLeftOverlay.overlayId, self.r, self.g, self.b, self.a)
  end
  if self.buttonRightOverlay ~= 0 then
    setOverlayColor(self.buttonRightOverlay.overlayId, self.r, self.g, self.b, self.a)
  end
end
function ButtonOverlay:renderButton(buttonText, posX, posY, height, alignment, colorText, clipX1, clipY1, clipX2, clipY2)
  local v11 = Utils.getNoNil(alignment, RenderText.ALIGN_LEFT)
  local v11, v12, v13, v14, v15 = self:getButtonWidth(buttonText, height)
  v17:setDimension(v13, height)
  v17:setDimension(v12, height)
  v17:setDimension(v14, height)
  if v11 == RenderText.ALIGN_RIGHT then
  elseif v11 == RenderText.ALIGN_CENTER then
  end
  v17:setPosition(v16, posY)
  v17:render(clipX1, clipY1, clipX2, clipY2)
  if colorText then
    setTextColor(self.r, self.g, self.b, self.a)
  else
    setTextColor(1, 1, 1, self.a)
  end
  setTextBold(true)
  setTextAlignment(RenderText.ALIGN_CENTER)
  if clipX1 ~= nil then
    setTextClipArea(clipX1, clipY1, clipX2, clipY2)
  end
  local v22 = utf8ToUpper(buttonText)
  renderText(...)
  if clipX1 ~= nil then
    setTextClipArea(0, 0, 1, 1)
  end
  setTextBold(false)
  setTextColor(1, 1, 1, 1)
  v18:setPosition(v16, posY)
  v18:render(clipX1, clipY1, clipX2, clipY2)
  v18:setPosition(v16 + v12, posY)
  v18:render(clipX1, clipY1, clipX2, clipY2)
  if not self.debugEnabled then
    -- if not g_uiDebugEnabled then goto L242 end
  end
  setOverlayColor(GuiElement.debugOverlay, 1, 0, 1, 0.5)
  renderOverlay(GuiElement.debugOverlay, posX - 1 / g_screenWidth, posY - 1 / g_screenHeight, v11 + 2 * 1 / g_screenWidth, 1 / g_screenHeight)
  renderOverlay(GuiElement.debugOverlay, posX - 1 / g_screenWidth, posY + height, v11 + 2 * 1 / g_screenWidth, 1 / g_screenHeight)
  renderOverlay(GuiElement.debugOverlay, posX - 1 / g_screenWidth, posY, 1 / g_screenWidth, height)
  renderOverlay(GuiElement.debugOverlay, posX + v11, posY, 1 / g_screenWidth, height)
  return v11
end
function ButtonOverlay:getButtonWidth(buttonText, height)
  setTextBold(true)
  setTextAlignment(RenderText.ALIGN_LEFT)
  local height = tostring(buttonText)
  local posY = utf8ToUpper(...)
  local clipX1 = getTextWidth(height * self.textSizeFactor, posY)
  local clipY1 = math.max(clipX1 + 2 * self.buttonLeftRatio * height * g_aspectScaleX, height * g_screenHeight / g_screenWidth - self.buttonLeftRatio * height * g_aspectScaleX - self.buttonRightRatio * height * g_aspectScaleX)
  setTextBold(false)
  return clipY1 + self.buttonLeftRatio * height * g_aspectScaleX + self.buttonRightRatio * height * g_aspectScaleX, clipY1, self.buttonLeftRatio * height * g_aspectScaleX, self.buttonRightRatio * height * g_aspectScaleX, height * self.textSizeFactor
end
