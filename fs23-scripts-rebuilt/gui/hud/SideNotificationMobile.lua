-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if SideNotificationMobile ~= nil then
  g_currentMission.hud.sideNotifications:delete()
end
SideNotificationMobile = {}
local SideNotificationMobile_mt = Class(SideNotificationMobile, SideNotification)
function SideNotificationMobile.new(hudAtlasPath)
  local v2 = v2:superClass()
  local v1 = v2.new(u0, hudAtlasPath)
  v1.uiScale = 1
  local v2, v3, v4, v5 = unpack(SideNotificationMobile.COLOR.BACKGROUND)
  v1.r = v2
  v1.g = v3
  v1.b = v4
  v1.a = v5
  v1:applyValues(v1.uiScale)
  return v1
end
function SideNotificationMobile:setScale(v1)
  local v3 = v3:superClass()
  v3.setScale(self, v1)
  self.uiScale = v1
  local v2, v3 = SideNotificationMobile.getBackgroundPosition(v1)
  self:setPosition(v2, v3)
  self:applyValues(v1)
end
function SideNotificationMobile:applyValues(v1)
  local v2, v3 = getNormalizedScreenValues(0, SideNotificationMobile.TEXT_SIZE.DEFAULT_NOTIFICATION)
  self.textSize = v3 * v1
  local v5 = unpack(SideNotificationMobile.POSITION.TEXT_OFFSET)
  local v4, v5 = getNormalizedScreenValues(...)
  self.textOffsetX = v4 * v1
  self.textOffsetY = v5 * v1
  local v6, v7 = getNormalizedScreenValues(0, SideNotificationMobile.SIZE.BG_HEIGHT)
  self.bgHeight = v7 * v1
  local v8, v9 = getNormalizedScreenValues(0, SideNotificationMobile.POSITION.OFFSET)
  self.offsetY = v9 * v1
end
function SideNotificationMobile.updateSizeAndPositions(v0)
end
function SideNotificationMobile:draw()
  local v1 = self:getVisible()
  if v1 and 0 < #self.notificationQueue then
    local v1, v2 = self:getPosition()
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_LEFT)
    local v15 = math.min(#self.notificationQueue, SideNotification.MAX_NOTIFICATIONS)
    -- TODO: structure LOP_FORNPREP (pc 53, target 147)
    if self.notificationQueue[1].startDuration - self.notificationQueue[1].duration < SideNotification.FADE_DURATION then
    elseif self.notificationQueue[1].duration < SideNotification.FADE_DURATION then
    end
    local v17 = getTextWidth(v5, v15.text)
    drawFilledRectRound(v1 - v17 + 2 * v3, v2 - v14 * v7 - (v14 - 1) * v6, v17 + 2 * v3, v7, self.uiScale, v8, v9, v10, v11 * v16)
    setTextColor(v15.color[1], v15.color[2], v15.color[3], v15.color[4] * v16)
    renderText(v1 - v17 + 2 * v3 + v3, v2 - v14 * v7 - (v14 - 1) * v6 + v4, v5, v15.text)
    setTextColor(1, 1, 1, 1)
    -- TODO: structure LOP_FORNLOOP (pc 146, target 54)
  end
end
function SideNotificationMobile.getBackgroundPosition(v0)
  local v2 = unpack(SideNotificationMobile.POSITION.SELF)
  local v1, v2 = getNormalizedScreenValues(...)
  return 1 + v1 * v0, 1 + v2 * v0
end
function SideNotificationMobile.createBackground(v0, v1)
  local v2, v3 = SideNotificationMobile.getBackgroundPosition(1)
  local v5 = unpack(SideNotificationMobile.SIZE.SELF)
  local v4, v5 = getNormalizedScreenValues(...)
  return Overlay.new(nil, v2 - v4, v3 - v5, v4, v5)
end
SideNotificationMobile.POSITION = {SELF = {-45, -160}, TEXT_OFFSET = {10, 11}, OFFSET = 6}
SideNotificationMobile.SIZE = {SELF = {1, 1}, BG_HEIGHT = 46}
SideNotificationMobile.COLOR = {BACKGROUND = {0, 0, 0, 0.4}}
SideNotificationMobile.TEXT_SIZE = {DEFAULT_NOTIFICATION = 32}
if v0 ~= nil then
  local v2 = SideNotificationMobile.new(g_baseHUDFilename)
  v2:setScale(v0.uiScale)
  v2.notificationQueue = v0.notificationQueue
  for v6, v7 in ipairs(g_currentMission.hud.displayComponents) do
    if not (v7 == g_currentMission.hud.sideNotifications) then
      continue
    end
    g_currentMission.hud.displayComponents[v6] = v2
    break
  end
  g_currentMission.hud.sideNotifications = v2
  Logging.info("Reloaded")
end
