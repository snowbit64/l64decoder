-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameIcon = {}
local InGameIcon_mt = Class(InGameIcon)
function InGameIcon.new()
  setmetatable({}, u0)
  local v1, v2 = getNormalizedScreenValues(50, 50)
  v1, v2 = getNormalizedScreenValues(25, 360)
  v1 = Overlay.new({width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6, textPosY = {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6}.posY + 0.005, fadeTime = 1000, visibleTime = 2000, visible = false, time = 0, alpha = 0, fileName = "dataS/menu/blank.png", text = "+1"}.fileName, {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6, textPosY = {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6}.posY + 0.005, fadeTime = 1000, visibleTime = 2000, visible = false, time = 0, alpha = 0, fileName = "dataS/menu/blank.png", text = "+1"}.posX, {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6, textPosY = {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6}.posY + 0.005, fadeTime = 1000, visibleTime = 2000, visible = false, time = 0, alpha = 0, fileName = "dataS/menu/blank.png", text = "+1"}.posY, {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6, textPosY = {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6}.posY + 0.005, fadeTime = 1000, visibleTime = 2000, visible = false, time = 0, alpha = 0, fileName = "dataS/menu/blank.png", text = "+1"}.width, {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6, textPosY = {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6}.posY + 0.005, fadeTime = 1000, visibleTime = 2000, visible = false, time = 0, alpha = 0, fileName = "dataS/menu/blank.png", text = "+1"}.height)
  return {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6, textPosY = {width = v1, height = v2, posX = v1, posY = v2, textPosX = {width = v1, height = v2, posX = v1, posY = v2}.posX + {width = v1, height = v2, posX = v1, posY = v2}.width * 0.6}.posY + 0.005, fadeTime = 1000, visibleTime = 2000, visible = false, time = 0, alpha = 0, fileName = "dataS/menu/blank.png", text = "+1", iconOverlay = v1}
end
function InGameIcon:delete()
  v1:delete()
end
function InGameIcon:setIcon(fileName)
  v2:delete()
  self.fileName = fileName
  local v2 = Overlay.new(self.fileName, self.posX, self.posY, self.width, self.height)
  self.iconOverlay = v2
end
function InGameIcon:setText(text)
  self.text = text
end
function InGameIcon:mouseEvent(posX, posY, isDown, isUp, button)
  if self.visible and isDown and button == 1 and self.time <= self.fadeTime + self.visibleTime then
    self:hideIcon()
  end
end
function InGameIcon:update(dt)
  if self.visible then
    self.time = self.time + dt
    local v2 = math.min(1, self.time / self.fadeTime)
    self.alpha = v2
    if self.fadeTime + self.visibleTime < self.time then
      v2 = math.max(0, (self.fadeTime - self.time - self.fadeTime - self.visibleTime) / self.fadeTime)
      self.alpha = v2
    end
    if self.fadeTime * 2 + self.visibleTime < self.time then
      self.time = 0
      self.visible = false
    end
  end
end
function InGameIcon:showIcon(duration)
  self.visibleTime = duration
  self.time = 0
  self.alpha = 0
  self.visible = true
end
function InGameIcon:hideIcon()
  self.time = self.fadeTime + self.visibleTime
end
function InGameIcon:setPosition(x, y)
  v3:setPosition(x, y)
  local v3 = Utils.getNoNil(x, self.posX)
  self.posX = v3
  v3 = Utils.getNoNil(y, self.posY)
  self.posY = v3
  self.textPosX = self.posX + self.width * 0.6
  self.textPosY = self.posY + 0.005
end
function InGameIcon:draw()
  if self.visible then
    v1:setColor(1, 1, 1, self.alpha)
    v1:render()
    setTextBold(true)
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextColor(0, 0, 0, self.alpha)
    renderText(self.textPosX, self.textPosY - 0.003, 0.025, self.text)
    setTextColor(1, 1, 1, self.alpha)
    renderText(self.textPosX, self.textPosY, 0.025, self.text)
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextBold(false)
    setTextColor(1, 1, 1, 1)
  end
end
