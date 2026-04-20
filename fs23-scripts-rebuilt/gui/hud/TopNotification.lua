-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TopNotification = {}
local TopNotification_mt = Class(TopNotification, HUDDisplayElement)
TopNotification.NO_NOTIFICATION = {title = "", text = "", info = "", icon = nil, duration = 0}
TopNotification.DEFAULT_DURATION = 5000
TopNotification.FADE_DURATION = 500
TopNotification.ICON = {RADIO = "radio"}
function TopNotification.new(hudAtlasPath)
  local backgroundOverlay = TopNotification.createBackground(hudAtlasPath)
  local v3 = v3:superClass()
  local v2 = v3.new(backgroundOverlay, nil, u0)
  v2.currentNotification = TopNotification.NO_NOTIFICATION
  v2.icons = {}
  v2.titleTextSize = 0
  v2.descTextSize = 0
  v2.infoTextSize = 0
  v2.maxTextWidth = 0
  v2.titleOffsetX = 0
  v2.titleOffsetY = 0
  v2.descOffsetX = 0
  v2.descOffsetY = 0
  v2.infoOffsetX = 0
  v2.infoOffsetY = 0
  v2.iconOffsetX = 0
  v2.iconOffsetY = 0
  v2.notificationStartDuration = 0
  v2:storeScaledValues()
  v2:createComponents(hudAtlasPath)
  v2:createIconOverlays()
  return v2
end
function TopNotification:delete()
  for v4, v5 in pairs(self.icons) do
    v5:delete()
    self.icons[v4] = nil
  end
  if self.customIcon ~= nil then
    v1:delete()
    self.customIcon = nil
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function TopNotification:setNotification(title, text, info, iconKey, duration, iconFilename)
  if iconKey ~= nil and self.icons[iconKey] ~= nil then
  end
  if duration ~= nil then
    -- if v5 >= 0 then goto L20 end
  end
  self.notificationStartDuration = TopNotification.DEFAULT_DURATION
  self.currentNotification = {title = title, text = text, info = info, icon = v7, duration = TopNotification.DEFAULT_DURATION, iconFilename = iconFilename}
  if iconFilename ~= nil then
    local v9 = self:createCustomIcon(iconFilename)
    self.customIcon = v9
  end
  self:setVisible(true, true)
end
function TopNotification.getHidingTranslation(v0)
  return 0, 0.5
end
function TopNotification:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = self:getVisible()
  if v2 and self.currentNotification ~= TopNotification.NO_NOTIFICATION then
    if self.currentNotification.duration < TopNotification.FADE_DURATION then
      v2 = v2:getFinished()
      if v2 then
        self:setVisible(false, true)
      end
    end
    if self.currentNotification.duration <= 0 then
      self.currentNotification = TopNotification.NO_NOTIFICATION
      return
    end
    self.currentNotification.duration = self.currentNotification.duration - dt
  end
end
function TopNotification:draw()
  local v1 = self:getVisible()
  if v1 then
    local v2 = v2:superClass()
    v2.draw(self)
    v2 = Utils.limitTextToWidth(self.currentNotification.title, self.titleTextSize, self.maxTextWidth, false, "...")
    local v3 = Utils.limitTextToWidth(self.currentNotification.text, self.descTextSize, self.maxTextWidth, false, "...")
    local v4 = Utils.limitTextToWidth(self.currentNotification.info, self.infoTextSize, self.maxTextWidth, false, "...")
    if self.notificationStartDuration - self.currentNotification.duration < TopNotification.FADE_DURATION then
    elseif self.currentNotification.duration < TopNotification.FADE_DURATION then
    end
    local v6, v7, v8, v9 = self:getColor()
    local v10, v11 = self:getPosition()
    local v14 = self:getWidth()
    local v13 = self:getHeight()
    if v1.iconFilename ~= nil then
      self.customIcon:setColor(nil, nil, nil, v9 * v5)
      self.customIcon:setPosition(v10 + self.iconOffsetX, v11 + (v13 - v1.icon.height) * 0.5)
      self.customIcon:render()
    elseif v1.icon ~= nil then
      v1.icon:setColor(nil, nil, nil, v9 * v5)
      v1.icon:setPosition(v10 + self.iconOffsetX, v11 + (v13 - v1.icon.height) * 0.5)
      v1.icon:render()
    end
    local v15, v16, v17, v18 = unpack(TopNotification.COLOR.TEXT_TITLE)
    setTextColor(v15, v16, v17, v18 * v14)
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_CENTER)
    renderText(v10 + v12 * 0.5 + self.titleOffsetX, v11 + self.titleOffsetY, self.titleTextSize, v2)
    local v20, v21, v22, v23 = unpack(TopNotification.COLOR.TEXT_DESC)
    setTextColor(v20, v21, v22, v23 * v14)
    renderText(v10 + v12 * 0.5 + self.descOffsetX, v11 + self.descOffsetY, self.descTextSize, v3)
    v20, v21, v22, v23 = unpack(TopNotification.COLOR.TEXT_INFO)
    setTextColor(v20, v21, v22, v23 * v14)
    renderText(v10 + v12 * 0.5 + self.infoOffsetX, v11 + self.infoOffsetY, self.infoTextSize, v4)
  end
end
function TopNotification.getBackgroundPosition(uiScale, width, height)
  local v4 = unpack(TopNotification.POSITION.SELF)
  local v3, v4 = getNormalizedScreenValues(...)
  return 0.5 - width * 0.5 + v3 * uiScale, 1 - g_safeFrameOffsetY - height + v4 * uiScale
end
function TopNotification:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale)
  self:storeScaledValues()
  local v2, v3 = self:scalePixelToScreenVector(TopNotification.SIZE.SELF)
  local v4, v5 = TopNotification.getBackgroundPosition(uiScale, v2, v3)
  self:setPosition(v4, v5)
end
function TopNotification:storeScaledValues()
  local v1 = self:scalePixelToScreenHeight(TopNotification.TEXT_SIZE.TITLE)
  self.titleTextSize = v1
  v1 = self:scalePixelToScreenHeight(TopNotification.TEXT_SIZE.TEXT)
  self.descTextSize = v1
  v1 = self:scalePixelToScreenHeight(TopNotification.TEXT_SIZE.INFO)
  self.infoTextSize = v1
  v1 = self:scalePixelToScreenWidth(TopNotification.TEXT_SIZE.MAX_TEXT_WIDTH)
  self.maxTextWidth = v1
  local v1, v2 = self:scalePixelToScreenVector(TopNotification.POSITION.TITLE_OFFSET)
  self.titleOffsetX = v1
  self.titleOffsetY = v2
  v1, v2 = self:scalePixelToScreenVector(TopNotification.POSITION.TEXT_OFFSET)
  self.descOffsetX = v1
  self.descOffsetY = v2
  v1, v2 = self:scalePixelToScreenVector(TopNotification.POSITION.INFO_OFFSET)
  self.infoOffsetX = v1
  self.infoOffsetY = v2
  v1, v2 = self:scalePixelToScreenVector(TopNotification.POSITION.ICON)
  self.iconOffsetX = v1
  self.iconOffsetY = v2
  v1, v2 = self:scalePixelToScreenVector(TopNotification.SIZE.ICON)
  for v6, v7 in pairs(self.icons) do
    v7:setDimension(v1, v2)
  end
end
function TopNotification.createBackground(hudAtlasPath)
  local v2 = unpack(TopNotification.SIZE.SELF)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3, v4 = TopNotification.getBackgroundPosition(1, v1, v2)
  local v5 = Overlay.new(g_baseUIFilename, v3, v4, v1, v2)
  v5:setUVs(g_colorBgUVs)
  local v8 = unpack(TopNotification.COLOR.BACKGROUND)
  v5:setColor(...)
  return v5
end
function TopNotification.createComponents(v0, v1)
end
function TopNotification:createIconOverlays()
  local v2 = unpack(TopNotification.SIZE.ICON)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = Overlay.new(g_iconsUIFilename, 0, 0, v1, v2)
  local v6 = GuiUtils.getUVs(TopNotification.UV.ICON_RADIO_STREAM)
  v3:setUVs(...)
  v6 = unpack(TopNotification.COLOR.ICON)
  v3:setColor(...)
  self.icons[TopNotification.ICON.RADIO] = v3
end
function TopNotification:createCustomIcon(filename)
  if self.lastIconFilename ~= filename then
    if self.customIcon == nil then
      local v2, v3 = self:scalePixelToScreenVector(TopNotification.SIZE.CUSTOM_ICON)
      local v4 = Overlay.new(filename, 0, 0, v2, v3)
      self.customIcon = v4
    else
      v2:setImage(filename)
    end
    self.lastIconFilename = filename
  end
  return self.customIcon
end
TopNotification.UV = {BACKGROUND = {8, 8, 2, 2}, ICON_RADIO_STREAM = {304, 288, 65, 65}}
TopNotification.POSITION = {SELF = {0, -8}, TITLE_OFFSET = {24, 42}, TEXT_OFFSET = {24, 19}, INFO_OFFSET = {24, 5}, ICON = {10, 0}}
TopNotification.TEXT_SIZE = {TITLE = 30, TEXT = 19, INFO = 10, MAX_TEXT_WIDTH = 650}
TopNotification.SIZE = {SELF = {775, 75}, ICON = {48, 48}, CUSTOM_ICON = {96, 48}}
TopNotification.COLOR = {BACKGROUND = {0, 0, 0, 0.75}, TEXT_TITLE = {0.0003, 0.5647, 0.9822, 1}, TEXT_DESC = {1, 1, 1, 1}, TEXT_INFO = {1, 1, 1, 0.4}, ICON = {0.0003, 0.5647, 0.9822, 1}}
