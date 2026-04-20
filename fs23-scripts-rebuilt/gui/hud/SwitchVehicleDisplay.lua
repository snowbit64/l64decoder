-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if SwitchVehicleDisplay ~= nil then
  g_currentMission.hud.switchVehicleDisplay:delete()
end
SwitchVehicleDisplay = {MOVE_ANIMATION_DURATION = 500, STATE_TOUCH = 0, STATE_CONTROLLER = 1}
local v1 = Class(SwitchVehicleDisplay, HUDDisplayElement)
function SwitchVehicleDisplay.new(v0, v1, v2)
  local v3 = SwitchVehicleDisplay.createBackground()
  local v5 = v5:superClass()
  local v4 = v5.new(v3, nil, u0)
  v4.hud = v0
  v4.uiScale = 1
  v4.hudAtlasPath = v1
  v4.controlHudAtlasPath = v2
  v4.vehicle = nil
  v4.player = nil
  v4.touchButtons = {}
  v4.hudElements = {}
  v4.lastInputHelpMode = GS_INPUT_HELP_MODE_KEYBOARD
  v4.lastGyroscopeSteeringState = false
  v4.vehicleControls = {}
  v4:createComponents()
  return v4
end
function SwitchVehicleDisplay:delete()
  for v4, v5 in pairs(self.touchButtons) do
    v6:removeTouchButton(v5)
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function SwitchVehicleDisplay:setVehicle(v1)
  self.vehicle = v1
  self:updatePositionState()
end
function SwitchVehicleDisplay:setPlayer(v1)
  self.player = v1
  self:updatePositionState()
end
function SwitchVehicleDisplay:createBackgroundElements(v1, v2)
  local v4 = unpack(SwitchVehicleDisplay.SIZE.BG_LEFT)
  local v3, v4 = getNormalizedScreenValues(...)
  local v6 = unpack(SwitchVehicleDisplay.SIZE.BG_MIDDLE)
  local v5, v6 = getNormalizedScreenValues(...)
  local v8 = unpack(SwitchVehicleDisplay.SIZE.BG_RIGHT)
  local v7, v8 = getNormalizedScreenValues(...)
  local v9 = GuiUtils.getUVs(SwitchVehicleDisplay.UV.BG_LEFT)
  local v10 = GuiUtils.getUVs(SwitchVehicleDisplay.UV.BG_MIDDLE)
  local v11 = GuiUtils.getUVs(SwitchVehicleDisplay.UV.BG_RIGHT)
  self.uvsLeft = v9
  self.uvsMiddle = v10
  self.uvsRight = v11
  local v12 = GuiUtils.getUVs(SwitchVehicleDisplay.UV.BG_LEFT_DISABLED)
  self.uvsLeftDisabled = v12
  v12 = GuiUtils.getUVs(SwitchVehicleDisplay.UV.BG_MIDDLE_DISABLED)
  self.uvsMiddleDisabled = v12
  v12 = GuiUtils.getUVs(SwitchVehicleDisplay.UV.BG_RIGHT_DISABLED)
  self.uvsRightDisabled = v12
  v12 = Overlay.new(self.hudAtlasPath, v1, v2, v3, v4)
  v12:setUVs(v9)
  local v13 = HUDElement.new(v12)
  self.leftElement = v13
  self:addChild(self.leftElement)
  local v14 = Overlay.new(self.hudAtlasPath, v1 + v3, v2, v5, v4)
  v14:setUVs(v10)
  local v15 = HUDElement.new(v14)
  self.middleElement = v15
  self:addChild(v15)
  local v17 = Overlay.new(self.hudAtlasPath, v1 + v3 + v5, v2, v7, v4)
  v17:setUVs(v11)
  local v18 = HUDElement.new(v17)
  self.rightElement = v18
  self:addChild(v18)
  local v20 = unpack(SwitchVehicleDisplay.SIZE.BACKGROUND)
  local v19, v20 = getNormalizedScreenValues(...)
  local v22 = unpack(SwitchVehicleDisplay.SIZE.BG_PRESSED)
  local v21, v22 = getNormalizedScreenValues(...)
  local v23 = GuiUtils.getUVs(SwitchVehicleDisplay.UV.BG_PRESSED)
  local v24 = Overlay.new(self.hudAtlasPath, v1, v2, v21, v4)
  v24:setUVs(v23)
  local v25 = HUDElement.new(v24)
  v25:setVisible(false)
  self:addChild(v25)
  local v26 = Overlay.new(self.hudAtlasPath, v1 + v19 - v21, v2, v21, v4)
  v26:setUVs(v23)
  v26:setInvertX(true)
  local v27 = HUDElement.new(v26)
  v27:setVisible(false)
  self:addChild(v27)
  self.pressButtonLeftCallback = function()
    if u0.isActive then
      self:setVisible(true)
      self:setVisible(false)
      self:setVisible(false)
      self:setVisible(false)
    end
  end
  self.pressButtonRightCallback = function()
    if u0.isActive then
      self:setVisible(true)
      self:setVisible(false)
      self:setVisible(false)
      self:setVisible(false)
    end
  end
  self.releaseButtonCallback = function()
    if u0.isActive then
      self:setVisible(false)
      self:setVisible(false)
      self:setVisible(true)
      self:setVisible(true)
      self:setVisible(true)
    end
  end
end
function SwitchVehicleDisplay:createComponents()
  local v1, v2 = self:getPosition()
  self:createBackgroundElements(v1, v2)
  local v4 = unpack(SwitchVehicleDisplay.POSITION.ICON)
  local v3, v4 = getNormalizedScreenValues(...)
  local v6 = unpack(SwitchVehicleDisplay.SIZE.ICON)
  local v5, v6 = getNormalizedScreenValues(...)
  local v7 = Overlay.new(self.controlHudAtlasPath, v1 + v3, v2 + v4, v5, v6)
  local v10 = GuiUtils.getUVs(SwitchVehicleDisplay.UV.ICON)
  v7:setUVs(...)
  v10 = HUDElement.new(v7)
  self:addChild(...)
  local v9 = unpack(SwitchVehicleDisplay.POSITION.GLYPH_SWITCH_VEHICLE_BACK)
  local v8, v9 = getNormalizedScreenValues(...)
  v10 = InputGlyphMobileElement.new(g_inputDisplayManager)
  v10:setAction(InputAction.SWITCH_VEHICLE_BACK)
  v10:setIsLeftAligned(true)
  v10:setPosition(v1 + v8, v2 + v9)
  v10:setButtonGlyphColor(HUDButtonElement.COLOR.INPUT_GLYPH)
  self.glyphElementBack = v10
  self:addChild(v10)
  local v12 = unpack(SwitchVehicleDisplay.POSITION.GLYPH_SWITCH_VEHICLE)
  local v11, v12 = getNormalizedScreenValues(...)
  local v13 = InputGlyphMobileElement.new(g_inputDisplayManager)
  v13:setAction(InputAction.SWITCH_VEHICLE)
  v13:setPosition(v1 + v11, v2 + v12)
  v13:setButtonGlyphColor(HUDButtonElement.COLOR.INPUT_GLYPH)
  self.glyphElement = v13
  self:addChild(v13)
  local v15 = unpack(SwitchVehicleDisplay.SIZE.ARROW_LEFT)
  local v14, v15 = getNormalizedScreenValues(...)
  local v17 = unpack(SwitchVehicleDisplay.POSITION.ARROW_LEFT)
  local v16, v17 = getNormalizedScreenValues(...)
  local v18 = Overlay.new(self.controlHudAtlasPath, v1 + v16, v2 + v17, v14, v15)
  local v21 = GuiUtils.getUVs(SwitchVehicleDisplay.UV.ARROW_LEFT)
  v18:setUVs(...)
  self.switchLeftOverlay = v18
  v21 = HUDElement.new(v18)
  self:addChild(...)
  local v22 = v22:addTouchButton(v18, {0.1, 0.4}, 0.5, self.onSwitchLeft, self, TouchHandler.TRIGGER_UP)
  table.insert(...)
  v22 = v22:addTouchButton(v18, {0.1, 0.4}, 0.5, self.pressButtonLeftCallback, self, TouchHandler.TRIGGER_DOWN)
  table.insert(...)
  v22 = v22:addTouchButton(v18, {0.1, 0.4}, 0.5, self.releaseButtonCallback, self, TouchHandler.TRIGGER_UP)
  table.insert(...)
  v21 = unpack(SwitchVehicleDisplay.SIZE.ARROW_RIGHT)
  local v20, v21 = getNormalizedScreenValues(...)
  local v23 = unpack(SwitchVehicleDisplay.POSITION.ARROW_RIGHT)
  v22, v23 = getNormalizedScreenValues(...)
  local v24 = Overlay.new(self.controlHudAtlasPath, v1 + v22, v2 + v23, v20, v21)
  local v27 = GuiUtils.getUVs(SwitchVehicleDisplay.UV.ARROW_RIGHT)
  v24:setUVs(...)
  self.switchRightOverlay = v24
  v27 = HUDElement.new(v24)
  self:addChild(...)
  v27 = v27:addTouchButton(v24, {{0.1, 0.4}[2], {0.1, 0.4}[1]}, 0.5, self.onSwitchRight, self, TouchHandler.TRIGGER_UP)
  table.insert(...)
  v27 = v27:addTouchButton(v24, {{0.1, 0.4}[2], {0.1, 0.4}[1]}, 0.5, self.pressButtonRightCallback, self, TouchHandler.TRIGGER_DOWN)
  table.insert(...)
  v27 = v27:addTouchButton(v24, {{0.1, 0.4}[2], {0.1, 0.4}[1]}, 0.5, self.releaseButtonCallback, self, TouchHandler.TRIGGER_UP)
  table.insert(...)
  local v26 = unpack(SwitchVehicleDisplay.POSITION.GAMEPAD_OFFSET)
  local v25, v26 = getNormalizedScreenValues(...)
  self.positionTouch = {v1 + v25, v2 + v26}
  self.positionGamepad = {v1, v2}
end
function SwitchVehicleDisplay:onSwitchLeft(v1, v2, v3)
  local v4 = v4:getIsSleeping()
  if v4 then
    return
  end
  if not self.isActive then
    return
  end
  if not v3 then
    v4:toggleVehicle(-1)
  end
end
function SwitchVehicleDisplay:onSwitchRight(v1, v2, v3)
  local v4 = v4:getIsSleeping()
  if v4 then
    return
  end
  if not self.isActive then
    return
  end
  if not v3 then
    v4:toggleVehicle(1)
  end
end
function SwitchVehicleDisplay:update(v1)
  local v3 = v3:superClass()
  v3.update(self, v1)
  self:updateButton()
end
function SwitchVehicleDisplay:updateButton()
  local v2 = g_currentMission.guidedTour:getCanAccessHudButton("switchVehicleDisplay")
  local v6 = v6:getIsGuiVisible()
  self.isActive = not v6 and v2
  if self.isActive then
    local v4 = v4:getNextVehicle(1)
    if v4 == nil then
    end
    self.isActive = true
  end
  if v3 ~= self.isActive then
    v4:setVisible(self.isActive)
    v4:setVisible(self.isActive)
    if self.isActive then
      v4:setUVs(self.uvsLeft)
      v4:setUVs(self.uvsMiddle)
      v4:setUVs(self.uvsRight)
      return
    end
    v4:setUVs(self.uvsLeftDisabled)
    v4:setUVs(self.uvsMiddleDisabled)
    v4:setUVs(self.uvsRightDisabled)
  end
end
function SwitchVehicleDisplay:updatePositionState(v1)
  if self.lastInputHelpMode ~= GS_INPUT_HELP_MODE_GAMEPAD and not not Platform.hasTouchSliders and self.lastGyroscopeSteeringState and self.vehicle == nil then
  end
  if v2 then
    self:setPositionState(SwitchVehicleDisplay.STATE_CONTROLLER, v1)
    return
  end
  self:setPositionState(SwitchVehicleDisplay.STATE_TOUCH, v1)
end
function SwitchVehicleDisplay:onInputHelpModeChange(v1, v2)
  self.lastInputHelpMode = v1
  self:updatePositionState(v2)
end
function SwitchVehicleDisplay:onGyroscopeSteeringChanged(v1)
  self.lastGyroscopeSteeringState = v1
  self:updatePositionState()
end
function SwitchVehicleDisplay:setPositionState(v1, v2)
  if not Platform.hasTouchSliders then
    return
  end
  if v1 ~= self.lastPositionState then
    local v3, v4 = self:getPosition()
    if v1 == SwitchVehicleDisplay.STATE_TOUCH then
    end
    if v2 then
    end
    local v8 = TweenSequence.new(self)
    local v11 = MultiValueTween.new(self.setPosition, {v3, v4}, {v5, v6}, v7)
    v8:insertTween(v11, 0)
    v8:start()
    self.animation = v8
    self.lastPositionState = v1
  end
end
function SwitchVehicleDisplay:setScale(v1)
  local v3 = v3:superClass()
  v3.setScale(self, v1, v1)
  local v2 = self:getVisible()
  self:setVisible(true, false)
  self.uiScale = v1
  local v5 = self:getWidth()
  local v3, v4 = SwitchVehicleDisplay.getBackgroundPosition(...)
  self:setPosition(v3, v4)
  local v6 = unpack(SwitchVehicleDisplay.POSITION.GAMEPAD_OFFSET)
  v5, v6 = getNormalizedScreenValues(...)
  self.positionTouch = {v3 + v5 * v1, v4 + v6 * v1}
  self.positionGamepad = {v3, v4}
  self:storeOriginalPosition()
  self:setVisible(v2, false)
  if self.lastPositionState == SwitchVehicleDisplay.STATE_TOUCH then
    self:setPosition(self.positionTouch[1], self.positionTouch[2])
  end
end
function SwitchVehicleDisplay.getBackgroundPosition(v0, v1)
  local v3 = unpack(SwitchVehicleDisplay.POSITION.BACKGROUND)
  local v2, v3 = getNormalizedScreenValues(...)
  return v2 * v0, v3 * v0
end
function SwitchVehicleDisplay.createBackground()
  local v1 = unpack(SwitchVehicleDisplay.SIZE.BACKGROUND)
  local v0, v1 = getNormalizedScreenValues(...)
  local v2, v3 = SwitchVehicleDisplay.getBackgroundPosition(1, v0)
  return Overlay.new(nil, v2, v3, v0, v1)
end
SwitchVehicleDisplay.SIZE = {BACKGROUND = {224, 106}, BG_PRESSED = {224, 106}, BG_LEFT = {25, 106}, BG_MIDDLE = {174, 106}, BG_RIGHT = {25, 106}, ICON = {96, 96}, ARROW_LEFT = {76, 76}, ARROW_RIGHT = {76, 76}, BUTTON_SIZE = {115, 120}}
SwitchVehicleDisplay.POSITION = {BACKGROUND = {50, 50}, GAMEPAD_OFFSET = {515, 0}, ICON = {60, 5}, GLYPH_SWITCH_VEHICLE = {237, 81}, GLYPH_SWITCH_VEHICLE_BACK = {-17, 81}, ARROW_LEFT = {0, 15}, ARROW_RIGHT = {142, 15}}
SwitchVehicleDisplay.UV = {ICON = {96, 96, 96, 96}, ARROW_LEFT = {0, 96, 96, 96}, ARROW_RIGHT = {96, 96, -96, 96}, BG_LEFT = {132, 908, 25, 106}, BG_MIDDLE = {157, 908, 56, 106}, BG_RIGHT = {213, 908, 25, 106}, BG_PRESSED = {578, 908, 224, 106}, BG_LEFT_DISABLED = {344, 908, 25, 106}, BG_MIDDLE_DISABLED = {369, 908, 56, 106}, BG_RIGHT_DISABLED = {425, 908, 25, 106}}
if v0 ~= nil then
  local v2 = SwitchVehicleDisplay.new(v0.hud, v0.hudAtlasPath, v0.controlHudAtlasPath)
  v2:setScale(v0.uiScale)
  v2:setVehicle(v0.vehicle)
  v2:setPlayer(v0.player)
  v2.lastGyroscopeSteeringState = v0.lastGyroscopeSteeringState
  for v6, v7 in ipairs(g_currentMission.hud.displayComponents) do
    if not (v7 == g_currentMission.hud.switchVehicleDisplay) then
      continue
    end
    g_currentMission.hud.displayComponents[v6] = v2
    break
  end
  g_currentMission.hud.switchVehicleDisplay = v2
  Logging.info("Reloaded")
end
