-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GamePausedDisplay = {}
local GamePausedDisplay_mt = Class(GamePausedDisplay, HUDDisplayElement)
function GamePausedDisplay.new(hudAtlasPath)
  local backgroundOverlay = GamePausedDisplay.createBackground(hudAtlasPath)
  local v3 = v3:superClass()
  local v2 = v3.new(backgroundOverlay, nil, u0)
  v2.pauseText = ""
  v2.isMenuVisible = false
  v2.syncBackgroundElement = nil
  v2.textSize = 0
  v2.textOffsetX = 0
  v2.textOffsetY = 0
  v2:storeOriginalPosition()
  v2:storeScaledValues()
  v2:createComponents(hudAtlasPath)
  return v2
end
function GamePausedDisplay:setPauseText(text)
  self.pauseText = text
end
function GamePausedDisplay:onMenuVisibilityChange(isMenuVisible, isOverlayMenu)
  if isMenuVisible then
  end
  v4:setVisible(v3)
end
function GamePausedDisplay:draw()
  local v1 = self:getVisible()
  if v1 then
    local v2 = v2:superClass()
    v2.draw(self)
    v1 = getTextHeight(self.textSize, self.pauseText)
    local v2, v3 = self:getPosition()
    local v7 = self:getWidth()
    local v9 = self:getHeight()
    setTextBold(true)
    setTextAlignment(RenderText.ALIGN_CENTER)
    v7 = unpack(GamePausedDisplay.COLOR.TEXT)
    setTextColor(...)
    renderText(v2 + v7 * 0.5 + self.textOffsetX, v3 + (v9 - v1) * 0.5 + self.textOffsetY, self.textSize, self.pauseText)
  end
end
function GamePausedDisplay.setScale(v0, v1)
  local v3 = v3:superClass()
  v3.setScale(v0, 1)
end
function GamePausedDisplay:storeScaledValues()
  local v1 = self:scalePixelToScreenHeight(GamePausedDisplay.TEXT_SIZE.PAUSE_TEXT)
  self.textSize = v1
  local v1, v2 = self:scalePixelToScreenVector(GamePausedDisplay.POSITION.PAUSE_TEXT)
  self.textOffsetX = v1
  self.textOffsetY = v2
end
function GamePausedDisplay.createBackground(hudAtlasPath)
  local v2 = unpack(GamePausedDisplay.SIZE.SELF)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = Overlay.new(hudAtlasPath, 0, (1 - v2) * 0.5, 1, v2)
  local v6 = GuiUtils.getUVs(GamePausedDisplay.UV.BACKGROUND)
  v3:setUVs(...)
  v6 = unpack(GamePausedDisplay.COLOR.BACKGROUND)
  v3:setColor(...)
  return v3
end
function GamePausedDisplay:createComponents(hudAtlasPath)
  local syncOverlay = Overlay.new(GamePausedDisplay.SYNC_SPLASH_PATH, 0, 0, 1, g_screenWidth / g_screenHeight)
  local v3 = HUDElement.new(syncOverlay)
  self.syncBackgroundElement = v3
  self:addChild(self.syncBackgroundElement)
end
GamePausedDisplay.SYNC_SPLASH_PATH = "shared/splash.png"
GamePausedDisplay.UV = {BACKGROUND = {8, 8, 2, 2}}
GamePausedDisplay.SIZE = {SELF = {0, 75}}
GamePausedDisplay.POSITION = {PAUSE_TEXT = {0, 3}}
GamePausedDisplay.TEXT_SIZE = {PAUSE_TEXT = 24}
GamePausedDisplay.COLOR = {BACKGROUND = {0, 0, 0, 0.75}, TEXT = {1, 1, 1, 1}}
