-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HUDButtonElement = {}
local v0 = Class(HUDButtonElement, HUDElement)
function HUDButtonElement.new(v0, v1, v2, v3, v4)
  local v5 = GuiUtils.getUVs(HUDButtonElement.UV.BUTTON_NORMAL)
  local v7 = unpack(HUDButtonElement.SIZE.BUTTON)
  local v6, v7 = getNormalizedScreenValues(...)
  local v8 = Overlay.new(g_baseHUDFilename, v1, v2, v6, v7)
  v8:setUVs(v5)
  if not v4 then
  end
  local v9 = v9(v10, v11, v12)
  v9.hud = v0
  v9.uvsNormal = v5
  local v10 = GuiUtils.getUVs(HUDButtonElement.UV.BUTTON_PRESSED)
  v9.uvsPressed = v10
  v10 = GuiUtils.getUVs(HUDButtonElement.UV.BUTTON_DISABLED)
  v9.uvsDisabled = v10
  v9.iconElement = nil
  v9.touchAreas = {}
  v9.isActive = true
  v9.isPressed = false
  v9.isDisabled = false
  return v9
end
function HUDButtonElement:delete()
  self:removeTouchHandler()
  local v2 = v2:superClass()
  v2.delete(self)
end
function HUDButtonElement:setIcon(v1, v2, v3, v4, v5, v6, v7)
  local v8, v9 = self:getPosition()
  local v10 = self:getWidth()
  local v11 = self:getHeight()
  if self.iconElement ~= nil then
    if not v2 then
      local v12 = v12:getWidth()
    end
    if not v3 then
      v12 = v12:getHeight()
    end
  else
  end
  if not v5 then
  end
  if not v6 then
  end
  if self.iconElement == nil then
    local v15 = Overlay.new(v1, v12, v9 + v14, v2, v3)
    v15 = HUDElement.new(v15)
    self.iconElement = v15
  elseif v1 ~= nil then
    self.iconElement.overlay:setImage(v1)
  end
  if v4 ~= nil then
    v14:setUVs(v4)
  end
  if v7 ~= nil then
    local v17 = unpack(v7)
    v14:setColor(...)
  end
  self:addChild(self.iconElement)
end
function HUDButtonElement:setIsPressed(v1)
  if self.isPressed ~= v1 then
    self.isPressed = v1
    self:updateUVs()
  end
end
function HUDButtonElement:setDisabled(v1)
  if self.isDisabled ~= v1 then
    self.isDisabled = v1
    self:updateUVs()
    self:updateButtonState()
  end
end
function HUDButtonElement:updateUVs()
  if self.isDisabled then
    self:setUVs(self.uvsDisabled)
    return
  end
  if self.isPressed then
    self:setUVs(self.uvsPressed)
    return
  end
  self:setUVs(self.uvsNormal)
end
function HUDButtonElement:addTouchHandler(v1, v2)
  local v8 = v8:addTouchButton(self.overlay, 0.2, 0.2, function(self, v1, v2, v3)
    if not v3 then
      u0(u1, v1, v2)
    end
  end, self, TouchHandler.TRIGGER_UP, {self})
  table.insert(...)
  v8 = v8:addTouchButton(self.overlay, 0.2, 0.2, function(self)
    v1:setIsPressed(true)
  end, self, TouchHandler.TRIGGER_DOWN)
  table.insert(...)
  v8 = v8:addTouchButton(self.overlay, 0.2, 0.2, function(self)
    v1:setIsPressed(false)
  end, self, TouchHandler.TRIGGER_UP)
  table.insert(...)
end
function HUDButtonElement:removeTouchHandler()
  for v4, v5 in ipairs(self.touchAreas) do
    v6:removeTouchButton(v5)
  end
  self.touchAreas = {}
end
function HUDButtonElement:setAction(v1)
  if self.glyphElement ~= nil then
    v2:delete()
    self.glyphElement = nil
  end
  if v1 ~= nil then
    local v2, v3 = self:getPosition()
    local v5 = unpack(HUDButtonElement.POSITION.INPUT_GLYPH_OFFSET)
    local v4, v5 = getNormalizedScreenValues(...)
    local v8 = InputGlyphMobileElement.new(g_inputDisplayManager)
    self.glyphElement = v8
    v8:setAction(v1)
    v8:setButtonGlyphColor(HUDButtonElement.COLOR.INPUT_GLYPH)
    v8:setPosition(v2 + v4, v3 + v5)
    self:addChild(self.glyphElement)
  end
end
function HUDButtonElement:setIsActive(v1)
  self.isActive = v1
  self:updateButtonState()
end
function HUDButtonElement:updateButtonState()
  if self.isActive and not self.isDisabled then
    local v1 = self:getVisible()
  end
  for v5, v6 in ipairs(self.touchAreas) do
    v7:setTouchAreaVisibility(v6, v1)
  end
  if self.glyphElement ~= nil then
    v2:setVisible(v1)
  end
end
function HUDButtonElement:setVisible(v1)
  local v3 = v3:superClass()
  v3.setVisible(self, v1)
  self:updateButtonState()
end
HUDButtonElement.POSITION = {INPUT_GLYPH_OFFSET = {123, 81}, INPUT_GLYPH_ICON_OFFSET = {-2, -1}}
HUDButtonElement.SIZE = {BUTTON = {106, 106}, INPUT_GLYPH_BG_LEFT = {46, 96}, INPUT_GLYPH_BG_MIDDLE = {34, 96}, INPUT_GLYPH_BG_RIGHT = {46, 96}, INPUT_GLYPH_ICON = {48, 48}}
HUDButtonElement.UV = {BUTTON_NORMAL = {132, 908, 106, 106}, BUTTON_PRESSED = {238, 908, 106, 106}, BUTTON_DISABLED = {344, 908, 106, 106}, GLYPH_BG_LEFT = {288, 432, 46, 96}, GLYPH_BG_MIDDLE = {334, 432, 38, 96}, GLYPH_BG_RIGHT = {372, 432, 46, 96}}
HUDButtonElement.COLOR = {INPUT_GLYPH = {0, 0, 0, 1}}
