-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/gui/hud/IngameMapLayoutMobile.lua")
source("dataS/scripts/gui/hud/IngameMapLayoutFullscreenMobile.lua")
IngameMapMobile = {}
local IngameMapMobile_mt = Class(IngameMapMobile, IngameMap)
IngameMapMobile.STATE_HIDDEN = 3
function IngameMapMobile.new(v0, v1, v2, v3, v4)
  local v6 = v6:superClass()
  if not v4 then
  end
  local v5 = v5(v6, v7, v8)
  IngameMapMobile.POSITION.SELF[2] = g_screenHeight * IngameMapMobile.HEIGHT_FACTOR
  v6 = v5:createBackground(v1)
  v5.overlay = v6
  v5.hud = v0
  v5.hudAtlasPath = v1
  v5.controlHudAtlasPath = v2
  v5.inputDisplayManager = v3
  v5.uiScale = 1
  v5.isVisible = true
  v6 = IngameMapLayoutMobile.new()
  v5.mobileLayout = v6
  v5.layouts = {v5.mobileLayout}
  v6 = IngameMapLayoutFullscreenMobile.new()
  v5.fullScreenLayout = v6
  v5.state = 1
  v5.layout = v5.layouts[v5.state]
  v6 = Overlay.new(nil, 0, 0, 1, 1)
  v5.mapOverlay = v6
  v6 = HUDElement.new(v5.mapOverlay)
  v5.mapElement = v6
  v5:createComponents(v1)
  for v9, v10 in ipairs(v5.layouts) do
    v10:createComponents(v5, v1)
  end
  v5.filter = {[MapHotspot.CATEGORY_FIELD] = true, [MapHotspot.CATEGORY_ANIMAL] = true, [MapHotspot.CATEGORY_MISSION] = true, [MapHotspot.CATEGORY_TOUR] = true, [MapHotspot.CATEGORY_STEERABLE] = true, [MapHotspot.CATEGORY_COMBINE] = true, [MapHotspot.CATEGORY_TRAILER] = true, [MapHotspot.CATEGORY_TOOL] = true, [MapHotspot.CATEGORY_UNLOADING] = true, [MapHotspot.CATEGORY_LOADING] = true, [MapHotspot.CATEGORY_PRODUCTION] = true, [MapHotspot.CATEGORY_SHOP] = true, [MapHotspot.CATEGORY_OTHER] = true, [MapHotspot.CATEGORY_AI] = true, [MapHotspot.CATEGORY_PLAYER] = true}
  v5.currentFilter = v5.filter
  v5:setWorldSize(2048, 2048)
  v5.hotspots = {}
  v5.selectedHotspot = nil
  v5.allowToggle = true
  v5.topDownCamera = nil
  v5.isMapVisible = false
  v5.toggleSizeAfterDialog = false
  v5.mapExtensionOffsetX = 0
  v5.mapExtensionOffsetZ = 0
  v5.mapExtensionScaleFactor = 1
  v5.isDrawing = false
  v6:subscribe(MessageType.INSETS_CHANGED, v5.updateInsets, v5)
  return v5
end
function IngameMapMobile.delete(v0)
  v1:unsubscribe(MessageType.INSETS_CHANGED, v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function IngameMapMobile:loadMap(filename, worldSizeX, worldSizeZ, fieldColor, grassFieldColor)
  v6:delete()
  self:setWorldSize(worldSizeX, worldSizeZ)
  local v6 = Overlay.new(filename, 0, 0, 1, 1)
  self.mapOverlay = v6
  v6 = HUDElement.new(self.mapOverlay)
  self.mapElement = v6
  self:addChild(self.mapElement)
  self:setScale(self.uiScale)
end
function IngameMapMobile:createComponents(hudAtlasPath)
  local v2, v3 = self:getPosition()
  local width = self:getWidth()
  local height = self:getHeight()
  self:createFrame(hudAtlasPath, v2, v3, width, height)
  width = GuiUtils.getUVs(IngameMapMobile.UV.BUTTON)
  self.buttonUVs = width
  width = GuiUtils.getUVs(IngameMapMobile.UV.BUTTON_DISABLED)
  self.buttonUVsDisabled = width
  width = GuiUtils.getUVs(IngameMapMobile.UV.BUTTON_EXTENSION)
  self.buttonExtensionUVs = width
  width = GuiUtils.getUVs(IngameMapMobile.UV.BUTTON_EXTENSION_DISABLED)
  self.buttonExtensionUVsDisabled = width
  width = self:createOverlayElement(IngameMapMobile.POSITION.BUTTON, IngameMapMobile.SIZE.BUTTON, IngameMapMobile.UV.BUTTON, IngameMapMobile.COLOR.MAP_ICON)
  self.buttonElement = width
  self:addChild(self.buttonElement)
  local width, v7 = width:getPosition()
  local v9 = unpack(IngameMapMobile.SIZE.BUTTON_EXTENSION)
  local v8, v9 = getNormalizedScreenValues(...)
  local v10 = Overlay.new(self.hudAtlasPath, width - v8, v7, v8, v9)
  local v13 = GuiUtils.getUVs(IngameMapMobile.UV.BUTTON_EXTENSION)
  v10:setUVs(...)
  local v11 = HUDElement.new(v10)
  self.buttonExtensionElement = v11
  self:addChild(self.buttonExtensionElement)
  v11 = self:createOverlayElement(IngameMapMobile.POSITION.BUTTON_ICON, IngameMapMobile.SIZE.BUTTON_ICON, IngameMapMobile.UV.ARROW_RIGHT, IngameMapMobile.COLOR.MAP_ICON, true)
  self.buttonIconElement = v11
  self:addChild(self.buttonIconElement)
  v11 = self:createOverlayElement(IngameMapMobile.POSITION.RIGHT_BORDER, IngameMapMobile.SIZE.RIGHT_BORDER, HUDElement.UV.FILL, IngameMapMobile.COLOR.RIGHT_BORDER)
  self.rightBorderElement = v11
  self:addChild(self.rightBorderElement)
  v11 = v11:addTouchButton(self.buttonElement.overlay, 1, 0.4, self.onClickToggleButton, self, TouchHandler.TRIGGER_UP)
  self.toggleButton = v11
  v11:setAreaPressedSizeGain(self.toggleButton, 3.5)
  local v12 = unpack(IngameMapMobile.POSITION.INPUT_GLYPH_OFFSET)
  v11, v12 = getNormalizedScreenValues(...)
  local v13, v14 = v13:getPosition()
  local v15 = InputGlyphMobileElement.new(g_inputDisplayManager)
  self.glyphElement = v15
  v15:setAction(InputAction.TOGGLE_MAP_SIZE)
  v15:setButtonGlyphColor(HUDButtonElement.COLOR.INPUT_GLYPH)
  v15:setPosition(v13 + v11, v14 + v12)
  v15:addChild(self.glyphElement)
end
function IngameMapMobile:getHeight()
  return self.overlay.height
end
function IngameMapMobile:setPlayer(player)
  self.player = player
end
function IngameMapMobile:onClickToggleButton(v1, v2)
  if not self.isActive then
    return
  end
  self:toggleSize(not self.isMapVisible)
end
function IngameMapMobile:createOverlayElement(v1, v2, v3, v4, v5)
  local v6, v7 = self:getPosition()
  local v9 = unpack(v1)
  local v8, v9 = getNormalizedScreenValues(...)
  local v11 = unpack(v2)
  local v10, v11 = getNormalizedScreenValues(...)
  if v5 then
    local v13 = Overlay.new(self.controlHudAtlasPath, v6 + v8, v7 + v9, v10, v11)
  else
    v13 = Overlay.new(self.hudAtlasPath, v6 + v8, v7 + v9, v10, v11)
  end
  local v15 = GuiUtils.getUVs(v3)
  v12:setUVs(...)
  v15 = unpack(v4)
  v12:setColor(...)
  v13 = HUDElement.new(v12)
  return v13
end
function IngameMapMobile:storeScaledValues(uiScale)
  local v3 = v3:superClass()
  v3.storeScaledValues(self, uiScale)
  local v2, v3 = self:scalePixelToScreenVector(IngameMapMobile.SIZE.MAP)
  self.mapWidth = v2
  self.mapHeight = v3
  v2, v3 = self:scalePixelToScreenVector(IngameMapMobile.SIZE.MAP)
  self.mapSizeX = v2
  self.mapSizeY = v3
  v2, v3 = self:scalePixelToScreenVector(IngameMapMobile.POSITION.MAP)
  self.mapOffsetX = v2
  self.mapOffsetY = v3
  v2 = self:scalePixelToScreenVector(IngameMapMobile.SIZE.MAP_HIDE_WIDTH)
  self.mapHideWidth = v2
  v2 = self:scalePixelToScreenWidth(IngameMapMobile.SIZE.SELF[1] - IngameMapMobile.SIZE.MAP[1])
  self.mapToFrameDiffX = v2
  v2 = self:scalePixelToScreenHeight(IngameMapMobile.SIZE.SELF[2] - IngameMapMobile.SIZE.MAP[2])
  self.mapToFrameDiffY = v2
end
function IngameMapMobile:resetSettings()
  local v2 = v2:superClass()
  v2.resetSettings(self)
  if self.overlay == nil then
    return
  end
  if not self.isMapVisible then
    self:setPosition(self.mapHideWidth, nil)
  end
end
function IngameMapMobile:updateButton()
  local v2 = g_currentMission.guidedTour:getCanAccessHudButton("ingameMap")
  local v6 = v6:getIsGuiVisible()
  self.isActive = not v6 and v2
  if self.isActive ~= self.isActive then
    v4:setVisible(self.isActive)
    if self.isActive then
      v4:setUVs(self.buttonUVs)
      v4:setUVs(self.buttonExtensionUVs)
      return
    end
    v4:setUVs(self.buttonUVsDisabled)
    v4:setUVs(self.buttonExtensionUVsDisabled)
  end
end
function IngameMapMobile:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:getIsDialogVisible()
  if v2 and self.isMapVisible and not g_inGameMenu.showMap then
    self:toggleSize(false)
  end
  self:updateButton()
end
function IngameMapMobile:draw()
  if self.isMapVisible then
    local v2 = v2:superClass()
    v2.draw(self)
  end
  if self.overlay.visible then
    if self.isMapVisible then
      v1:draw()
      v1:draw()
    else
      v1:draw()
    end
    v1:draw()
    v1:draw()
    v1:draw()
  end
end
function IngameMapMobile:toggleSize(state, force)
  local v3 = v3:getIsSleeping()
  if v3 then
    return
  end
  if not self.isActive then
    return
  end
  local v4 = v4:superClass()
  v4.toggleSize(self, 1, force)
  if state == nil then
  end
  self.isMapVisible = state
  if state then
  else
  end
  self:setPosition(v5, nil)
end
function IngameMapMobile:toggleDrawing()
  self.isDrawing = not self.isDrawing
end
function IngameMapMobile:setPosition(x, y)
  local v3, v4, v5, v6 = getSafeFrameInsets()
  local v8 = v8:superClass()
  v8.setPosition(self, x + v3, y)
  v7:setOffset(x + v3 or 0)
end
function IngameMapMobile:setScale(v1)
  local v3 = v3:superClass()
  v3.setScale(self, v1, v1)
  local v2, v3 = self:getBackgroundPosition(v1)
  self:setPosition(v2, v3)
end
function IngameMapMobile:updateInsets()
  self:setScale(self.uiScale)
end
function IngameMapMobile:getBackgroundPosition(v1)
  local v3 = unpack(IngameMapMobile.SIZE.MAP_HIDE_WIDTH)
  local v2, v3 = getNormalizedScreenValues(...)
  if self.isMapVisible then
  end
  local v5 = unpack(IngameMapMobile.SIZE.SELF)
  local v4, v5 = getNormalizedScreenValues(...)
  local v7, v8 = GuiUtils.alignToScreenPixels(v2 * v1, IngameMapMobile.HEIGHT_FACTOR - v5 * 0.5 * v1)
  return v7, v8
end
function IngameMapMobile:createBackground()
  local v2 = unpack(IngameMapMobile.SIZE.SELF)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3, v4 = self:getBackgroundPosition(1)
  return Overlay.new(nil, v3, v4, v1, v2)
end
function IngameMapMobile:createFrame(hudAtlasPath, baseX, baseY, width, height)
  local frame = HUDFrameElement.new(hudAtlasPath, baseX, baseY, width, height, nil, false, IngameMapMobile.FRAME_THICKNESS)
  local v9 = unpack(IngameMapMobile.COLOR.FRAME)
  frame:setFrameColor(...)
  self.mapFrameElement = frame
  self:addChild(frame)
end
function IngameMapMobile.drawPlayersCoordinates(v0)
end
IngameMapMobile.MIN_MAP_WIDTH = 464
IngameMapMobile.MIN_MAP_HEIGHT = 470
IngameMapMobile.FRAME_THICKNESS = 2
IngameMapMobile.HEIGHT_FACTOR = 0.55
IngameMapMobile.SIZE = {MAP = {IngameMapMobile.MIN_MAP_WIDTH, IngameMapMobile.MIN_MAP_HEIGHT}, SELF = {IngameMapMobile.MIN_MAP_WIDTH + IngameMapMobile.FRAME_THICKNESS * 2, IngameMapMobile.MIN_MAP_HEIGHT + IngameMapMobile.FRAME_THICKNESS}, RIGHT_BORDER = {IngameMapMobile.FRAME_THICKNESS, IngameMapMobile.MIN_MAP_HEIGHT + IngameMapMobile.FRAME_THICKNESS}, BUTTON = {86, 106}, BUTTON_EXTENSION = {150, 106}, BUTTON_ICON = {96, 96}, MAP_HIDE_WIDTH = {-IngameMapMobile.MIN_MAP_WIDTH - IngameMapMobile.FRAME_THICKNESS * 2 - 4, 0}}
IngameMapMobile.POSITION = {INPUT_GLYPH_OFFSET = {103, 81}, SELF = {0, 540}, MAP = {IngameMapMobile.FRAME_THICKNESS, IngameMapMobile.FRAME_THICKNESS}, RIGHT_BORDER = {IngameMapMobile.FRAME_THICKNESS + IngameMapMobile.MIN_MAP_WIDTH, 0}, BUTTON = {IngameMapMobile.SIZE.RIGHT_BORDER[1] + IngameMapMobile.MIN_MAP_WIDTH, IngameMapMobile.MIN_MAP_HEIGHT / 2 - IngameMapMobile.SIZE.BUTTON[2] / 2}, BUTTON_ICON = {IngameMapMobile.SIZE.RIGHT_BORDER[1] + IngameMapMobile.MIN_MAP_WIDTH - 5, IngameMapMobile.MIN_MAP_HEIGHT / 2 - IngameMapMobile.SIZE.BUTTON_ICON[2] / 2}}
IngameMapMobile.UV = {BUTTON = {152, 908, 86, 106}, BUTTON_EXTENSION = {160, 908, 10, 106}, BUTTON_DISABLED = {364, 908, 86, 106}, BUTTON_EXTENSION_DISABLED = {372, 908, 10, 106}, BUTTON_ICON = {504, 96, 48, 96}, ARROW_RIGHT = {96, 96, -96, 96}}
IngameMapMobile.COLOR = {RIGHT_BORDER = {0.098039, 0.098039, 0.098039, 1}, MAP_ICON = {1, 1, 1, 1}, FRAME = {0.098039, 0.098039, 0.098039, 1}}
