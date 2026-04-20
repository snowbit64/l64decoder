-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HUDFrameElement = {}
local HUDFrameElement_mt = Class(HUDFrameElement, HUDElement)
function HUDFrameElement.new(hudAtlasPath, posX, posY, width, height, parent, showBar, frameThickness, barThickness)
  local backgroundOverlay = Overlay.new(hudAtlasPath, posX, posY, width, height)
  local v12 = GuiUtils.getUVs(HUDElement.UV.FILL)
  backgroundOverlay:setUVs(...)
  backgroundOverlay:setColor(0, 0, 0, 0)
  local v10 = HUDElement.new(backgroundOverlay, parent, u0)
  v10.topLine = nil
  v10.leftLine = nil
  v10.rightLine = nil
  v10.bottomBar = nil
  v10.frameWidth = 0
  v10.frameHeight = 0
  local v11 = Utils.getNoNil(showBar, true)
  v10.showBar = v11
  if not frameThickness then
  end
  v10.frameThickness = v11
  if not barThickness then
  end
  v10.barThickness = v11
  v10:createComponents(hudAtlasPath, posX, posY, width, height)
  return v10
end
function HUDFrameElement:createComponents(hudAtlasPath, baseX, baseY, width, height)
  local v12 = math.max(1 / g_referenceScreenWidth, 1 / g_screenWidth)
  local v11 = math.max(1 / g_referenceScreenHeight, 1 / g_screenHeight)
  local v14 = self:getHeight()
  local v14, v15 = getNormalizedScreenValues(self.frameThickness, self.frameThickness)
  local v18 = math.ceil(v14 / v12)
  local v17 = math.ceil(v15 / v11)
  self.frameWidth = v18 * v12
  self.frameHeight = v17 * v11
  v18 = Overlay.new(hudAtlasPath, baseX, baseY + v14 - self.frameHeight, width, self.frameHeight)
  local v21 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v18:setUVs(...)
  v21 = unpack(HUDFrameElement.COLOR.FRAME)
  v18:setColor(...)
  local v19 = HUDElement.new(v18)
  self.topLine = v19
  self:addChild(v19)
  local v20 = Overlay.new(hudAtlasPath, baseX, baseY + self.frameHeight, self.frameWidth, height - self.frameHeight * 2)
  local v22 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v20:setUVs(...)
  v22 = unpack(HUDFrameElement.COLOR.FRAME)
  v20:setColor(...)
  v20 = HUDElement.new(v20)
  self.leftLine = v20
  self:addChild(v20)
  v20 = Overlay.new(hudAtlasPath, baseX + width - self.frameWidth, baseY + self.frameHeight, self.frameWidth, height - self.frameHeight * 2)
  v22 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v20:setUVs(...)
  v22 = unpack(HUDFrameElement.COLOR.FRAME)
  v20:setColor(...)
  v20 = HUDElement.new(v20)
  self.rightLine = v20
  self:addChild(v20)
  if not self.showBar then
  end
  local v22, v23 = getNormalizedScreenValues(0, v20)
  local v24 = math.ceil(v23 / v11)
  v24 = Overlay.new(hudAtlasPath, baseX, baseY, width, v24 * v11)
  local v27 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v24:setUVs(...)
  v27 = unpack(v21)
  v24:setColor(...)
  local v25 = HUDElement.new(v24)
  self.bottomBar = v25
  self:addChild(v25)
end
function HUDFrameElement:setDimension(width, height)
  local v4 = v4:superClass()
  v4.setDimension(self, width, height)
  if height ~= nil then
  end
  v4:setDimension(width, nil)
  v4:setDimension(nil, v3)
  v4:setDimension(nil, v3)
  v4:setDimension(width, nil)
  local v4, v5 = self:getPosition()
  local v11 = self:getHeight()
  v6:setPosition(nil, v5 + v11 - self.frameHeight)
  local v10 = self:getWidth()
  v6:setPosition(v4 + v10 - self.frameWidth, nil)
end
function HUDFrameElement:setBottomBarHeight(height)
  v2:setDimension(nil, height)
end
function HUDFrameElement:setBottomBarColor(r, g, b, a)
  v5:setColor(r, g, b, a)
end
function HUDFrameElement:setLeftLineVisible(visible)
  v2:setVisible(visible)
end
function HUDFrameElement:setRightLineVisible(visible)
  v2:setVisible(visible)
end
function HUDFrameElement:setFrameColor(r, g, b, a)
  v5:setColor(r, g, b, a)
  v5:setColor(r, g, b, a)
  v5:setColor(r, g, b, a)
  v5:setColor(r, g, b, a)
end
HUDFrameElement.THICKNESS = {FRAME = 1, BAR = 4}
HUDFrameElement.COLOR = {FRAME = {1, 1, 1, 0.3}, BAR = {0.0227, 0.5346, 0.8519, 1}}
