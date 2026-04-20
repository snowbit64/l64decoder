-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HUDRoundedBarElement = {}
local HUDRoundedBarElement_mt = Class(HUDRoundedBarElement, HUDElement)
function HUDRoundedBarElement.new(hudAtlasPath, posX, posY, width, height, isHorizontal, customMt)
  local overlay = Overlay.new(nil, posX, posY, width, height)
  if not customMt then
  end
  local v8 = v8(v9, v10, v11)
  v8.isHorizontal = isHorizontal or false
  v8.xPadding = 0
  v8.yPadding = 0
  v8.value = 0
  v8:createComponents(hudAtlasPath)
  return v8
end
function HUDRoundedBarElement:delete()
  if self.overlayFront ~= nil then
    v1:delete()
    self.overlayFront = nil
    v1:delete()
    self.overlayMiddle = nil
    v1:delete()
    self.overlayBack = nil
    v1:delete()
    self.barOverlayFront = nil
    v1:delete()
    self.barOverlayMiddle = nil
    v1:delete()
    self.barOverlayBack = nil
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function HUDRoundedBarElement:createComponents(hudAtlasPath)
  local v3 = Overlay.new(hudAtlasPath, 0, 0, 1, 1)
  self.overlayFront = v3
  local v5 = GuiUtils.getUVs(HUDRoundedBarElement.UV.HORIZONTAL[self.isHorizontal].FRONT)
  v3:setUVs(...)
  v5 = unpack(HUDRoundedBarElement.COLOR.BACKGROUND)
  v3:setColor(...)
  v3 = Overlay.new(hudAtlasPath, 0, 0, 1, 1)
  self.overlayMiddle = v3
  v5 = GuiUtils.getUVs(HUDRoundedBarElement.UV.HORIZONTAL[self.isHorizontal].MIDDLE)
  v3:setUVs(...)
  v5 = unpack(HUDRoundedBarElement.COLOR.BACKGROUND)
  v3:setColor(...)
  v3 = Overlay.new(hudAtlasPath, 0, 0, 1, 1)
  self.overlayBack = v3
  v5 = GuiUtils.getUVs(HUDRoundedBarElement.UV.HORIZONTAL[self.isHorizontal].BACK)
  v3:setUVs(...)
  v5 = unpack(HUDRoundedBarElement.COLOR.BACKGROUND)
  v3:setColor(...)
  v3 = Overlay.new(hudAtlasPath, 0, 0, 1, 1)
  self.barOverlayFront = v3
  v5 = GuiUtils.getUVs(HUDRoundedBarElement.UV.HORIZONTAL[self.isHorizontal].FRONT)
  v3:setUVs(...)
  v3 = Overlay.new(hudAtlasPath, 0, 0, 1, 1)
  self.barOverlayMiddle = v3
  v5 = GuiUtils.getUVs(HUDRoundedBarElement.UV.HORIZONTAL[self.isHorizontal].MIDDLE)
  v3:setUVs(...)
  v3 = Overlay.new(hudAtlasPath, 0, 0, 1, 1)
  self.barOverlayBack = v3
  v5 = GuiUtils.getUVs(HUDRoundedBarElement.UV.HORIZONTAL[self.isHorizontal].BACK)
  v3:setUVs(...)
  self:updateComponents()
end
function HUDRoundedBarElement:setValue(value, d)
  local v4 = math.min(value, 1)
  local v3 = math.max(v4, 0)
  v3 = math.abs(v3 - self.value)
  if 0.005 < v3 then
    self.value = v3
    self:updateComponents(true)
  end
end
function HUDRoundedBarElement:setBarColor(r, g, b)
  v4:setColor(r, g, b, 1)
  v4:setColor(r, g, b, 1)
  v4:setColor(r, g, b, 1)
end
function HUDRoundedBarElement:setBarAlpha(alpha)
  v2:setColor(nil, nil, nil, alpha)
  v2:setColor(nil, nil, nil, alpha)
  v2:setColor(nil, nil, nil, alpha)
end
function HUDRoundedBarElement:setPosition(x, y)
  local v4 = v4:superClass()
  v4.setPosition(self, x, y)
  self:updateComponents()
end
function HUDRoundedBarElement:setAlpha(alpha)
  v2:setColor(nil, nil, nil, alpha)
  v2:setColor(nil, nil, nil, alpha)
  v2:setColor(nil, nil, nil, alpha)
  v2:setColor(nil, nil, nil, alpha)
  v3:setColor(nil, nil, nil, alpha * HUDRoundedBarElement.COLOR.BACKGROUND[4])
  v3:setColor(nil, nil, nil, alpha * HUDRoundedBarElement.COLOR.BACKGROUND[4])
  v3:setColor(nil, nil, nil, alpha * HUDRoundedBarElement.COLOR.BACKGROUND[4])
end
function HUDRoundedBarElement:setDimension(width, height)
  v3:setDimension(width, height)
  self:updateComponents()
end
function HUDRoundedBarElement:updateComponents(barOnly)
  local v7, v8 = getNormalizedScreenValues(HUDRoundedBarElement.UV.HORIZONTAL[self.isHorizontal].FRONT[3], HUDRoundedBarElement.UV.HORIZONTAL[self.isHorizontal].FRONT[4])
  local v10 = unpack(HUDRoundedBarElement.PADDING[self.isHorizontal])
  local v9, v10 = getNormalizedScreenValues(...)
  if self.isHorizontal then
    if not barOnly then
      v12:setDimension(v7 / v8 * self.overlay.height, self.overlay.height)
      v12:setPosition(self.overlay.x, self.overlay.y)
      v12:setDimension(self.overlay.width - 2 * v7 / v8 * self.overlay.height, self.overlay.height)
      v12:setPosition(self.overlay.x + v7 / v8 * self.overlay.height, self.overlay.y)
      v12:setDimension(v7 / v8 * self.overlay.height, self.overlay.height)
      v12:setPosition(self.overlay.x + self.overlay.width - v7 / v8 * self.overlay.height, self.overlay.y)
    end
    local v12 = math.max(v5 - 2 * v10, 1 / g_screenHeight)
    v15:setDimension(v7 / v8 * v12, v12)
    v15:setPosition(v2 + v9, v3 + v10)
    v15:setDimension((v4 - 2 * v9 - 2 * v7 / v8 * v12) * self.value + 2 * v7 / v8 * v12 - 2 * v7 / v8 * v12, v12)
    v15:setPosition(v2 + v9 + v7 / v8 * v12, v3 + v10)
    v15:setDimension(v7 / v8 * v12, v12)
    v15:setPosition(v2 + v9 + (v4 - 2 * v9 - 2 * v7 / v8 * v12) * self.value + 2 * v7 / v8 * v12 - v7 / v8 * v12, v3 + v10)
    return
  end
  if not barOnly then
    v12:setDimension(v4, v8 / v7 * v4)
    v12:setPosition(v2, v3)
    v12:setDimension(v4, v5 - 2 * v8 / v7 * v4)
    v12:setPosition(v2, v3 + v8 / v7 * v4)
    v12:setDimension(v4, v8 / v7 * v4)
    v12:setPosition(v2, v3 + v5 - v8 / v7 * v4)
  end
  local v13 = math.max(v4 - 2 * v9, 1 / g_screenWidth)
  v15:setDimension(v13, v8 / v7 * v13)
  v15:setPosition(v2 + v9, v3 + v10)
  v15:setDimension(v13, (v5 - 2 * v10 - 2 * v8 / v7 * v13) * self.value + 2 * v8 / v7 * v13 - 2 * v8 / v7 * v13)
  v15:setPosition(v2 + v9, v3 + v10 + v8 / v7 * v13)
  v15:setDimension(v13, v8 / v7 * v13)
  v15:setPosition(v2 + v9, v3 + v10 + (v5 - 2 * v10 - 2 * v8 / v7 * v13) * self.value + 2 * v8 / v7 * v13 - v8 / v7 * v13)
end
function HUDRoundedBarElement:draw()
  if self.overlay.visible then
    v1:render()
    v1:render()
    v1:render()
    v1:render()
    v1:render()
    v1:render()
  end
end
{}[true] = {3.5, 3}
{}[false] = {3, 3.5}
HUDRoundedBarElement.PADDING = {}
{}[true] = {FRONT = {258, 123, 8, 14}, MIDDLE = {300, 123, 1, 14}, BACK = {361, 123, 8, 14}}
{}[false] = {FRONT = {401, 167, 14, 8}, MIDDLE = {401, 100, 14, 1}, BACK = {401, 64, 14, 8}}
HUDRoundedBarElement.UV = {HORIZONTAL = {}}
HUDRoundedBarElement.COLOR = {BACKGROUND = {0, 0, 0, 0.54}}
