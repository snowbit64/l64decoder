-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if IntroductionHelpHUDUtil ~= nil then
  IntroductionHelpHUDUtil.delete()
end
IntroductionHelpHUDUtil = {ARROW_POSITION_TOP = 1, ARROW_POSITION_BOTTOM = 2, ARROW_POSITION_LEFT = 3, ARROW_POSITION_RIGHT = 4}
function IntroductionHelpHUDUtil.init()
  local v1, v2, v3, v4 = unpack(IntroductionHelpHUDUtil.COLOR.BACKGROUND)
  IntroductionHelpHUDUtil.r = v1
  IntroductionHelpHUDUtil.g = v2
  IntroductionHelpHUDUtil.b = v3
  IntroductionHelpHUDUtil.a = v4
  v1, v2 = getNormalizedScreenValues(0, IntroductionHelpHUDUtil.TEXT.SIZE)
  IntroductionHelpHUDUtil.textSize = v2
  v3, v4 = getNormalizedScreenValues(IntroductionHelpHUDUtil.SIZE.ARROW[1], IntroductionHelpHUDUtil.SIZE.ARROW[2])
  local v5 = Overlay.new(g_baseHUDFilename, 0, 0, v3, v4)
  IntroductionHelpHUDUtil.arrow = v5
  local v7 = GuiUtils.getUVs(IntroductionHelpHUDUtil.UV.ARROW)
  v5:setUVs(...)
  v5:setColor(IntroductionHelpHUDUtil.r, IntroductionHelpHUDUtil.g, IntroductionHelpHUDUtil.b, IntroductionHelpHUDUtil.a)
  IntroductionHelpHUDUtil.arrowWidth = v3
  IntroductionHelpHUDUtil.arrowHeight = v4
  local v5, v6 = getNormalizedScreenValues(IntroductionHelpHUDUtil.SIZE.BACKGROUND[1], IntroductionHelpHUDUtil.SIZE.BACKGROUND[2])
  IntroductionHelpHUDUtil.bgWidth = v5
  IntroductionHelpHUDUtil.bgHeight = v6
  v5, v6 = getNormalizedScreenValues(IntroductionHelpHUDUtil.SIZE.BG_TEXT_OFFSET[1], IntroductionHelpHUDUtil.SIZE.BG_TEXT_OFFSET[2])
  IntroductionHelpHUDUtil.bgOffsetX = v5
  IntroductionHelpHUDUtil.bgOffsetY = v6
  v5, v6 = getNormalizedScreenValues(20, 0)
  IntroductionHelpHUDUtil.borderX = v5
  IntroductionHelpHUDUtil.borderY = v6
  v5 = v5:getText("introduction_continueTextTouch")
  IntroductionHelpHUDUtil.continueTextTouch = v5
  local v8 = v8:getText("introduction_continueTextGamepad")
  IntroductionHelpHUDUtil.continueTextGamepad = v8 .. " "
  v5, v6 = getNormalizedScreenValues(0, IntroductionHelpHUDUtil.TEXT.SIZE_MESSAGE)
  IntroductionHelpHUDUtil.textSizeMessage = v6
  v7, v8 = getNormalizedScreenValues(IntroductionHelpHUDUtil.SIZE.INPUT_GLYPH[1], IntroductionHelpHUDUtil.SIZE.INPUT_GLYPH[2])
  v7 = InputGlyphElement.new(g_inputDisplayManager, v7, v8)
  IntroductionHelpHUDUtil.glyphElement = v7
  v7:setAction(InputAction.MENU_ACCEPT)
  v7:setButtonGlyphColor(IntroductionHelpHUDUtil.COLOR.INPUT_GLYPH)
  v7, v8 = getNormalizedScreenValues(IntroductionHelpHUDUtil.SIZE.MESSAGE_TEXT_OFFSET[1], IntroductionHelpHUDUtil.SIZE.MESSAGE_TEXT_OFFSET[2])
  IntroductionHelpHUDUtil.textPaddingX = v7
  IntroductionHelpHUDUtil.textPaddingY = v8
  v7, v8 = getNormalizedScreenValues(IntroductionHelpHUDUtil.SIZE.BOX[1], IntroductionHelpHUDUtil.SIZE.BOX[2])
  IntroductionHelpHUDUtil.boxHeight = v8
  local v9, v10 = getNormalizedScreenValues(0, IntroductionHelpHUDUtil.SIZE.TEXT_TO_TEXT_OFFET_Y)
  IntroductionHelpHUDUtil.textToTextOffsetY = v10
  local v11, v12 = getNormalizedScreenValues(IntroductionHelpHUDUtil.SIZE.MAX_BOX_WIDTH, 0)
  IntroductionHelpHUDUtil.boxMaxWidth = v11
  local v11, v12, v13, v14 = unpack(IntroductionHelpHUDUtil.COLOR.MESSAGE_BOX)
  IntroductionHelpHUDUtil.boxR = v11
  IntroductionHelpHUDUtil.boxG = v12
  IntroductionHelpHUDUtil.boxB = v13
  IntroductionHelpHUDUtil.boxA = v14
  return IntroductionHelpHUDUtil
end
function IntroductionHelpHUDUtil.delete()
  v1:delete()
  v1:delete()
end
function IntroductionHelpHUDUtil.drawHelp(v0, v1, v2, v3)
  local v5 = v5:getValue(GameSettings.SETTING.UI_SCALE)
  IntroductionHelpHUDUtil.arrow:setScale(v5, v5)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextBold(false)
  local v15 = getTextWidth(IntroductionHelpHUDUtil.textSize * v5, v2)
  if v3 == IntroductionHelpHUDUtil.ARROW_POSITION_TOP then
    local v21 = MathUtil.clamp(v0 - v15 * 0.5 - IntroductionHelpHUDUtil.bgOffsetX * v5, IntroductionHelpHUDUtil.borderX, 1 - IntroductionHelpHUDUtil.borderX - v15 + 2 * IntroductionHelpHUDUtil.bgOffsetX * v5)
  elseif v3 == IntroductionHelpHUDUtil.ARROW_POSITION_BOTTOM then
    v21 = MathUtil.clamp(v0 - v15 * 0.5 - IntroductionHelpHUDUtil.bgOffsetX * v5, IntroductionHelpHUDUtil.borderX, 1 - IntroductionHelpHUDUtil.borderX - v15 + 2 * IntroductionHelpHUDUtil.bgOffsetX * v5)
  else
    if v3 == IntroductionHelpHUDUtil.ARROW_POSITION_LEFT then
    elseif v3 == IntroductionHelpHUDUtil.ARROW_POSITION_RIGHT then
    end
  end
  local v21, v22, v23, v24 = getSafeFrameInsets()
  local v25 = math.max(v12, v21)
  v25 = math.min(v25, 1 - v22 - v16)
  v6:setRotation(v20, v7 * 0.5, v8 * 0.5)
  v6:setPosition(v18, v19)
  v6:render()
  drawFilledRectRound(v25, v13, v16, v17, v5, v4.r, v4.g, v4.b, v4.a)
  setTextColor(0.05, 0.05, 0.05, 1)
  renderText(v25 + v9, v13 + v10, v14, v2)
  setTextColor(1, 1, 1, 1)
end
function IntroductionHelpHUDUtil.drawMessage(v0, v1)
  local v5, v6 = getNormalizedScreenValues(0, 5)
  if v1 ~= nil then
    local v9 = v1:getWidth()
    local v9, v10 = getNormalizedScreenValues(15, 0)
  end
  setTextAlignment(RenderText.ALIGN_CENTER)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_MIDDLE)
  setTextColor(1, 1, 1, 1)
  setTextBold(false)
  setTextWrapWidth(v2.boxMaxWidth - 2 * v3 - v7)
  local v11, v12 = getTextHeight(v2.textSizeMessage * 1, v0)
  local v13 = getTextWidth(v2.textSizeMessage * 1, v0)
  drawFilledRectRound(0.5 - v3 - v13 * 0.5 - v7 * 0.5 - v8 * 0.5, 0.55 - v4 - v11 * 0.5, v13 + 2 * v3 + v7 + v8, v11 + 2 * v4, 1, v2.boxR, v2.boxG, v2.boxB, v2.boxA)
  renderText(0.5 - v7 * 0.5, 0.55 + v6, v2.textSizeMessage * 1, v0)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
  setTextWrapWidth(0)
  if v1 ~= nil then
    local v24 = v1:getHeight()
    v1:setPosition(0.5 + v13 * 0.5 - v7 * 0.5 + v8, 0.55 - v24 * 0.5)
    v1:draw()
  end
end
function IntroductionHelpHUDUtil.drawSkipMessage(v0)
  local v8, v9 = getNormalizedScreenValues(0, 5)
  local v11 = v11:getLastInputMode()
  if v11 == GS_INPUT_HELP_MODE_GAMEPAD then
    local v12 = IntroductionHelpHUDUtil.glyphElement:getWidth()
    local v12, v13 = getNormalizedScreenValues(15, 0)
  end
  setTextAlignment(RenderText.ALIGN_CENTER)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_MIDDLE)
  setTextColor(1, 1, 1, 1)
  setTextBold(false)
  setTextWrapWidth(v1.boxMaxWidth - 2 * v6)
  local v14 = getTextWidth(v10, v2)
  local v15, v16 = getTextHeight(v10, v2)
  if v3 ~= nil then
  end
  if v0 ~= nil then
    local v19 = getTextWidth(v10, v0)
    local v20, v21 = getTextHeight(v10, v0)
    v20 = math.max(v17, v19)
  end
  drawFilledRectRound(0.5 - (v17 + 2 * v6) * 0.5, 0.55 - (v18 + 2 * v7) * 0.5, v17 + 2 * v6, v18 + 2 * v7, 1, v1.boxR, v1.boxG, v1.boxB, v1.boxA)
  if v0 ~= nil then
    renderText(0.5, 0.55 - (v18 + 2 * v7) * 0.5 + v18 + 2 * v7 - v7 - v13 * 0.5, v10, v0)
  end
  renderText(0.5 - v4 * 0.5, v20 + v7 + v9 + v15 * 0.5, v10, v2)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
  setTextWrapWidth(0)
  if v3 ~= nil then
    local v28 = v3:getHeight()
    v3:setPosition(0.5 - v4 * 0.5 + v14 * 0.5 + v5, v20 + v7 + v9 + v15 * 0.5 - v28 * 0.5)
    v3:draw()
  end
end
IntroductionHelpHUDUtil.SIZE = {ARROW = {45, 39}, BG_TEXT_OFFSET = {30, 30}, BACKGROUND = {10, 95}, INPUT_GLYPH = {60, 60}, MESSAGE_TEXT_OFFSET = {30, 36}, BOX = {0, 110}, MAX_BOX_WIDTH = 1400, TEXT_TO_TEXT_OFFET_Y = 70}
IntroductionHelpHUDUtil.TEXT = {SIZE = 50, SIZE_MESSAGE = 40}
IntroductionHelpHUDUtil.POSITION = {TEXT = {0.5, 0.4}}
IntroductionHelpHUDUtil.COLOR = {BACKGROUND = {1, 0.5271, 0, 1}, INPUT_GLYPH = {1, 1, 1, 1}, MESSAGE_BOX = {0, 0, 0, 0.9}}
IntroductionHelpHUDUtil.UV = {ARROW = {296, 622, 45, 39}}
if v0 then
  IntroductionHelpHUDUtil.init()
end
