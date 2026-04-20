-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputGlyphMobileElement = {}
local v0 = Class(InputGlyphMobileElement, InputGlyphElement)
function InputGlyphMobileElement.new(v0, v1)
  local v3 = unpack(InputGlyphMobileElement.SIZE.GLYPH_ICON)
  local v2, v3 = getNormalizedScreenValues(...)
  if not v1 then
  end
  local v4 = v4(v5, v6, v7, v8)
  local v6 = unpack(InputGlyphMobileElement.SIZE.BG_LEFT)
  local v5, v6 = getNormalizedScreenValues(...)
  local v7 = Overlay.new(g_baseHUDFilename, 0, 0, v5, v6)
  local v10 = GuiUtils.getUVs(InputGlyphMobileElement.UV.BG_LEFT)
  v7:setUVs(...)
  local v8 = HUDElement.new(v7)
  v4.glyphBackgroundLeft = v8
  local v9 = unpack(InputGlyphMobileElement.SIZE.BG_MIDDLE)
  v8, v9 = getNormalizedScreenValues(...)
  v10 = Overlay.new(g_baseHUDFilename, 0, 0, v8, v9)
  local v13 = GuiUtils.getUVs(InputGlyphMobileElement.UV.BG_MIDDLE)
  v10:setUVs(...)
  local v11 = HUDElement.new(v10)
  v4.glyphBackgroundMiddle = v11
  local v12 = unpack(InputGlyphMobileElement.SIZE.BG_RIGHT)
  v11, v12 = getNormalizedScreenValues(...)
  v13 = Overlay.new(g_baseHUDFilename, 0, 0, v11, v12)
  local v16 = GuiUtils.getUVs(InputGlyphMobileElement.UV.BG_RIGHT)
  v13:setUVs(...)
  local v14 = HUDElement.new(v13)
  v4.glyphBackgroundRight = v14
  local v15 = unpack(InputGlyphMobileElement.POSITION.BG_OFFSET_LEFT)
  v14 = getNormalizedScreenValues(...)
  v4.bgOffsetLeftX = v14
  v15 = unpack(InputGlyphMobileElement.POSITION.BG_OFFSET_RIGHT)
  v14 = getNormalizedScreenValues(...)
  v4.bgOffsetRightX = v14
  v4.isLeftAligned = false
  v14:setColor(0, 0, 0, 1)
  v4.uiScale = 1
  return v4
end
function InputGlyphMobileElement:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function InputGlyphMobileElement:setIsLeftAligned(v1)
  self.isLeftAligned = v1
end
function InputGlyphMobileElement:draw(v1, v2, v3, v4)
  if #self.actionNames ~= 0 then
    local v5 = v5:getIsVisible()
    if v5 then
      -- if v0.hasButtonOverlays then goto L15 end
    end
  end
  return
  v5 = v5:getLastInputMode()
  if v5 ~= GS_INPUT_HELP_MODE_GAMEPAD then
    return
  end
  local v5, v6 = self:getPosition()
  local v7 = v7:getWidth()
  local v8 = v8:getHeight()
  local v9 = self:getGlyphWidth()
  if not self.isLeftAligned then
  end
  v13:setPosition(v11, v10)
  v13:draw(v1, v2, v3, v4)
  v13:setPosition(v12, v10)
  v13:draw(v1, v2, v3, v4)
  if 0 < v12 - v11 - v7 then
    v14:setDimension(v12 - v11 - v7, nil)
    v14:setPosition(v11 + v7, v10)
    v14:draw(v1, v2, v3, v4)
  end
  local v15 = v15:superClass()
  v15.draw(self, v1, v2, v3, v4)
end
function InputGlyphMobileElement:getPositionOffset()
  if self.isLeftAligned then
    return 0, 0
  end
  local v2 = self:getGlyphWidth()
  return -v2, 0
end
function InputGlyphMobileElement.getDrawSeparator(v0)
  return true
end
function InputGlyphMobileElement:setScale(v1, v2)
  local v4 = v4:superClass()
  v4.setScale(self, v1, v2)
  v3:setScale(v1, v2)
  v3:setScale(v1, v2)
  v3:setScale(v1, v2)
  self.uiScale = v1
  self.glyphOffsetX = -5 / g_screenWidth
end
InputGlyphMobileElement.POSITION = {ICON_OFFSET = {-2, -1}, BG_OFFSET_LEFT = {-22, 0}, BG_OFFSET_RIGHT = {-24, 0}}
InputGlyphMobileElement.SIZE = {BG_LEFT = {46, 96}, BG_MIDDLE = {34, 96}, BG_RIGHT = {46, 96}, GLYPH_ICON = {48, 48}}
InputGlyphMobileElement.UV = {BG_LEFT = {288, 432, 46, 96}, BG_MIDDLE = {334, 432, 38, 96}, BG_RIGHT = {372, 432, 46, 96}}
InputGlyphMobileElement.COLOR = {INPUT_GLYPH = {0, 0, 0, 1}}
