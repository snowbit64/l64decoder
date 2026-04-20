-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if PlayerControlPadDisplay ~= nil then
  g_currentMission.hud.playerControlPadDisplay:delete()
end
PlayerControlPadDisplay = {}
local PlayerControlPadDisplay_mt = Class(PlayerControlPadDisplay, HUDDisplayElement)
function PlayerControlPadDisplay.new(hud, hudAtlasPath)
  local backgroundOverlay = PlayerControlPadDisplay.createBackground()
  local v4 = v4:superClass()
  local v3 = v4.new(backgroundOverlay, nil, u0)
  v3.hud = hud
  v3.uiScale = 1
  v3.hudAtlasPath = hudAtlasPath
  v3.player = nil
  v3.joystickPosX = 0.5
  v3.joystickPosY = 0.5
  v3.lastInputHelpMode = GS_INPUT_HELP_MODE_KEYBOARD
  v3:createComponents()
  return v3
end
function PlayerControlPadDisplay:setPlayer(player)
  self.player = player
  self:updateVisibilityState()
end
function PlayerControlPadDisplay:createComponents()
  local v1, v2 = self:getPosition()
  local v4 = unpack(PlayerControlPadDisplay.SIZE.BACKGROUND)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5 = Overlay.new(self.hudAtlasPath, v1, v2, v3, v4)
  local v8 = GuiUtils.getUVs(PlayerControlPadDisplay.UV.BACKGROUND)
  v5:setUVs(...)
  local v6 = HUDElement.new(v5)
  self.backgroundHudElement = v6
  self:addChild(self.backgroundHudElement)
  v6 = GuiUtils.getUVs(PlayerControlPadDisplay.UV.JOYSTICK)
  self.uvs = v6
  v6 = GuiUtils.getUVs(PlayerControlPadDisplay.UV.JOYSTICK_DISABLED)
  self.uvsDisabled = v6
  local v7 = unpack(PlayerControlPadDisplay.SIZE.JOYSTICK)
  v6, v7 = getNormalizedScreenValues(...)
  v8 = Overlay.new(self.hudAtlasPath, v1 + v6 * 0.5, v2 + v7 * 0.5, v6, v7)
  v8:setUVs(self.uvs)
  local v9 = HUDElement.new(v8)
  self.joystickElement = v9
  self:addChild(self.joystickElement)
  v9 = Overlay.new(nil, v1 + v6 * 0.5, v2 + v7 * 0.5, v6, v7)
  local v10 = Overlay.new(nil, v1 + v6 * 0.5, v2 + v7 * 0.5, v6, v7)
  local v11 = HUDSliderElement.new(v9, v5, 1, 1, 20, 1, 0, 0.5, 1, nil)
  self.joystickXHudElement = v11
  v11:setCallback(self.onSliderPositionChangedX, self)
  self.joystickXHudElement.radius = v3 / 2
  self:addChild(self.joystickXHudElement)
  v11 = HUDSliderElement.new(v10, v5, 1, 1, 20, 2, 0, 0.5, 1, nil)
  self.joystickYHudElement = v11
  v11:setCallback(self.onSliderPositionChangedY, self)
  self.joystickYHudElement.radius = v4 / 2
  self:addChild(self.joystickYHudElement)
  self:updateSliderTranslations(1)
  v11:setAxisPosition(self.joystickXHudElement.centerTrans)
  v11:setAxisPosition(self.joystickYHudElement.centerTrans)
end
function PlayerControlPadDisplay:updateSliderTranslations(v1)
  local v2 = self:getWidth()
  local v3 = self:getHeight()
  local v5 = unpack(PlayerControlPadDisplay.SIZE.JOYSTICK)
  local v4, v5 = getNormalizedScreenValues(...)
  v14:setRange(-(v4 * 0.5 * v1), v2 * 0.5 - v4 * 0.5 * v1, v2 - v4 * 0.5 * v1, nil)
  self.joystickXHudElement.radius = v2 * 0.5
  v14:setRange(-(v5 * 0.5 * v1), v3 * 0.5 - v5 * 0.5 * v1, v3 - v5 * 0.5 * v1, nil)
  self.joystickYHudElement.radius = v3 * 0.5
end
function PlayerControlPadDisplay.setVisible(v0, v1, v2)
  if v1 then
    local v3 = v3:getInputHelpMode()
    -- if v3 == GS_INPUT_HELP_MODE_GAMEPAD then goto L21 end
  end
  local v4 = v4:superClass()
  v4.setVisible(v0, v1, v2)
end
function PlayerControlPadDisplay:onSliderPositionChangedX(position)
  self.joystickPosX = position * 2 - 1
  local v2, v3 = self:updateJoystickPosition()
  v4:setPosition(v2, nil)
  if v2 ~= nil then
    return v2
  end
end
function PlayerControlPadDisplay:onSliderPositionChangedY(position)
  self.joystickPosY = position * 2 - 1
  local v2, v3 = self:updateJoystickPosition()
  if v3 ~= nil then
    return v3
  end
end
function PlayerControlPadDisplay:updateJoystickPosition()
  local distance = math.sqrt(self.joystickPosX ^ 2 + self.joystickPosY ^ 2)
  if 1 < distance then
    self.joystickPosX = self.joystickPosX / distance
    v3:setAxisPosition(self.joystickXHudElement.minTrans + (self.joystickXHudElement.maxTrans - self.joystickXHudElement.minTrans) * (self.joystickPosX / 2 + 0.5), true)
    self.joystickPosY = self.joystickPosY / distance
    v4:setAxisPosition(self.joystickYHudElement.minTrans + (self.joystickYHudElement.maxTrans - self.joystickYHudElement.minTrans) * (self.joystickPosY / 2 + 0.5), true)
    return self.joystickXHudElement.minTrans + (self.joystickXHudElement.maxTrans - self.joystickXHudElement.minTrans) * (self.joystickPosX / 2 + 0.5), self.joystickYHudElement.minTrans + (self.joystickYHudElement.maxTrans - self.joystickYHudElement.minTrans) * (self.joystickPosY / 2 + 0.5)
  end
end
function PlayerControlPadDisplay:onInputHelpModeChange(inputHelpMode)
  self.lastInputHelpMode = inputHelpMode
  self:updateVisibilityState()
end
function PlayerControlPadDisplay:updateVisibilityState()
  local v1 = self:getIsPlayerMoveActive()
  if v1 ~= self.animationState then
    self:setVisible(v1, true)
    v2:setTouchIsActive(v1)
    v2:setTouchIsActive(v1)
  end
end
function PlayerControlPadDisplay:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v4 = v4:getIsGuiVisible()
  if not v4 then
    v3 = g_currentMission.guidedTour:getCanAccessHudButton("playerControlPadDisplay_playerMove")
  end
  if v3 then
    v4:setUVs(self.uvs)
  else
    v4:setUVs(self.uvsDisabled)
  end
  local v4, v5 = v4:getPosition()
  local v6, v7 = v6:getPosition()
  v8:setPosition(v4, v7)
  if self.player ~= nil then
    if self.joystickXHudElement ~= nil and self.joystickYHudElement ~= nil then
      v8:update(dt)
      v8:update(dt)
    end
    v8:onInputMoveSide(nil, self.joystickPosX, nil, nil, false)
    v8:onInputMoveForward(nil, -self.joystickPosY, nil, nil, false)
  end
end
function PlayerControlPadDisplay:onAnimateVisibilityFinished(isVisible)
  local v3 = v3:superClass()
  v3.onAnimateVisibilityFinished(self, isVisible)
  if isVisible then
    v2:resetSlider()
    v2:resetSlider()
  end
end
function PlayerControlPadDisplay:getIsPlayerMoveActive()
  local v1 = v1:getLastInputMode()
  if v1 == GS_INPUT_HELP_MODE_GAMEPAD then
    return false
  end
  if not Platform.hasTouchSliders then
    return false
  end
  if self.player == nil then
    return false
  end
  return true
end
function PlayerControlPadDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  local currentVisibility = self:getVisible()
  self:setVisible(true, false)
  self.uiScale = uiScale
  local v5 = self:getWidth()
  local v3, v4 = PlayerControlPadDisplay.getBackgroundPosition(...)
  self:setPosition(v3, v4)
  self:storeOriginalPosition()
  self:setVisible(currentVisibility, false)
  self:updateVisibilityState()
  self:updateSliderTranslations(uiScale)
end
function PlayerControlPadDisplay.getBackgroundPosition(scale, width)
  local v3 = unpack(PlayerControlPadDisplay.POSITION.BACKGROUND)
  local v2, v3 = getNormalizedScreenValues(...)
  return v2 * scale, v3 * scale
end
function PlayerControlPadDisplay.createBackground()
  local v1 = unpack(PlayerControlPadDisplay.SIZE.BACKGROUND)
  local v0, v1 = getNormalizedScreenValues(...)
  local v2, v3 = PlayerControlPadDisplay.getBackgroundPosition(1, v0)
  return Overlay.new(nil, v2, v3, v0, v1)
end
PlayerControlPadDisplay.SIZE = {BACKGROUND = {264, 264}, JOYSTICK = {174, 174}}
PlayerControlPadDisplay.POSITION = {BACKGROUND = {100, 50}, HIDE_OFFSET = {0, -250}}
PlayerControlPadDisplay.UV = {BACKGROUND = {624, 432, 264, 264}, JOYSTICK = {194, 670, 174, 174}, JOYSTICK_DISABLED = {370, 670, 174, 174}}
PlayerControlPadDisplay.COLOR = {BACKGROUND = {1, 1, 1, 0.5}}
if v0 ~= nil then
  local v2 = PlayerControlPadDisplay.new(v0.hud, v0.hudAtlasPath)
  v2:setScale(v0.uiScale)
  v2:setPlayer(v0.player)
  for v6, v7 in ipairs(g_currentMission.hud.displayComponents) do
    if not (v7 == g_currentMission.hud.playerControlPadDisplay) then
      continue
    end
    g_currentMission.hud.displayComponents[v6] = v2
    break
  end
  g_currentMission.hud.playerControlPadDisplay = v2
  Logging.info("Reloaded")
end
