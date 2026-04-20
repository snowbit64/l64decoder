-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if POIInfoDisplay ~= nil then
  g_currentMission.hud.poiInfoDisplay:delete()
end
POIInfoDisplay = {}
local v1 = Class(POIInfoDisplay, HUDDisplayElement)
function POIInfoDisplay.new(v0)
  local v1 = POIInfoDisplay.createBackground()
  local v3 = v3:superClass()
  local v2 = v3.new(v1, nil, u0)
  v2.hudAtlasPath = v0
  v2.text = ""
  local v3, v4, v5, v6 = unpack(POIInfoDisplay.COLOR.BACKGROUND)
  v2.r = v3
  v2.g = v4
  v2.b = v5
  v2.a = v6
  v2:applyValues(1)
  v3, v4 = v2:getPosition()
  v5 = Overlay.new(v0, v3 + v2.iconOffsetX, v4 + v2.iconOffsetY, v2.iconSizeX, v2.iconSizeY)
  local v8 = GuiUtils.getUVs(POIInfoDisplay.UV.ICON)
  v5:setUVs(...)
  v5:setColor(1, 1, 1, 1)
  v8 = HUDElement.new(v5)
  v2:addChild(...)
  return v2
end
function POIInfoDisplay:setText(v1)
  self.text = v1
end
function POIInfoDisplay:draw()
  if self.text == "" then
    return
  end
  local v1, v2 = self:getPosition()
  local v3 = self:getHeight()
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextBold(false)
  setTextColor(1, 1, 1, 1)
  local v4 = getTextWidth(self.textSize, self.text)
  drawFilledRectRound(v1, v2, v4 + self.offsetLeft + self.offsetRight, v3, self.uiScale, self.r, self.g, self.b, self.a)
  renderText(v1 + self.offsetLeft, v2 + self.offsetBottom, self.textSize, self.text)
  local v6 = v6:superClass()
  v6.draw(self)
end
function POIInfoDisplay:setScale(v1)
  local v3 = v3:superClass()
  v3.setScale(self, v1, v1)
  self.uiScale = v1
  local v2, v3 = POIInfoDisplay.getBackgroundPosition(v1)
  self:setPosition(v2, v3)
  self:applyValues(v1)
end
function POIInfoDisplay:applyValues(v1)
  local v2, v3 = getNormalizedScreenValues(POIInfoDisplay.POSITION.OFFSET_LEFT, 0)
  self.offsetLeft = v2 * v1
  local v4, v5 = getNormalizedScreenValues(POIInfoDisplay.POSITION.OFFSET_RIGHT, 0)
  self.offsetRight = v4 * v1
  local v6, v7 = getNormalizedScreenValues(0, POIInfoDisplay.POSITION.OFFSET_BOTTOM)
  self.offsetBottom = v7 * v1
  local v8, v9 = getNormalizedScreenValues(0, POIInfoDisplay.SIZE.TEXT)
  self.textSize = v9 * v1
  local v11 = unpack(POIInfoDisplay.SIZE.ICON)
  local v10, v11 = getNormalizedScreenValues(...)
  self.iconSizeX = v10 * v1
  self.iconSizeY = v11 * v1
  local v13 = unpack(POIInfoDisplay.POSITION.ICON_OFFSET)
  local v12, v13 = getNormalizedScreenValues(...)
  self.iconOffsetX = v12 * v1
  self.iconOffsetY = v13 * v1
end
function POIInfoDisplay.getBackgroundPosition(v0)
  local v2 = unpack(POIInfoDisplay.SIZE.SELF)
  local v1, v2 = getNormalizedScreenValues(...)
  local v4 = unpack(POIInfoDisplay.POSITION.SELF)
  local v3, v4 = getNormalizedScreenValues(...)
  return v3 * v0, 1 + v4 * v0 - v2 * v0
end
function POIInfoDisplay.createBackground()
  local v0, v1 = POIInfoDisplay.getBackgroundPosition(1)
  local v3 = unpack(POIInfoDisplay.SIZE.SELF)
  local v2, v3 = getNormalizedScreenValues(...)
  return Overlay.new(nil, v0, v1, v2, v3)
end
POIInfoDisplay.SIZE = {SELF = {340, 46}, BOX_MARGIN = 20, TEXT = 32, ICON = {40, 40}}
POIInfoDisplay.POSITION = {ICON_OFFSET = {15, 3}, SELF = {33, -127}, OFFSET_LEFT = 61, OFFSET_RIGHT = 20, OFFSET_BOTTOM = 13}
POIInfoDisplay.COLOR = {BACKGROUND = {0, 0, 0, 0.4}}
POIInfoDisplay.UV = {ICON = {4, 100, 40, 40}}
if v0 ~= nil then
  local v2 = POIInfoDisplay.new(v0.hudAtlasPath)
  v2:setScale(v0.uiScale)
  v2:setText(v0.text)
  for v6, v7 in ipairs(g_currentMission.hud.displayComponents) do
    if not (v7 == g_currentMission.hud.poiInfoDisplay) then
      continue
    end
    g_currentMission.hud.displayComponents[v6] = v2
    break
  end
  g_currentMission.hud.poiInfoDisplay = v2
  Logging.info("Reloaded")
end
