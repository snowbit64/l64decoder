-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if SpeedSliderDisplay ~= nil then
  g_currentMission.hud.speedSliderDisplay:delete()
end
SpeedSliderDisplay = {}
local SpeedSliderDisplay_mt = Class(SpeedSliderDisplay, HUDDisplayElement)
SpeedSliderDisplay.GAMEPAD_SWITCH_TIME = 500
SpeedSliderDisplay.SPEED_NEED_OFFSET = 0.20943951023931956
SpeedSliderDisplay.RIDEABLE_SNAP_POSITIONS = {0, 0.2, 0.4, 0.6, 0.8, 1}
function SpeedSliderDisplay.new(v0, v1, v2)
  local backgroundOverlay = SpeedSliderDisplay.createBackground()
  local v5 = v5:superClass()
  local v4 = v5.new(backgroundOverlay, nil, u0)
  v4.hud = v0
  v4.uiScale = 1
  v4.hudAtlasPath = v1
  v4.controlHudAtlasPath = v2
  v4.vehicle = nil
  v4.player = nil
  v4.isRideable = false
  v4.sliderPosition = 0
  v4.restPosition = 0.25
  v4.lastInputHelpMode = GS_INPUT_HELP_MODE_KEYBOARD
  v4.sliderState = nil
  v4:createComponents()
  v5:subscribe(MessageType.GUI_BEFORE_OPEN, v4.onGuiOpen, v4)
  v5:subscribe(MessageType.GUI_DIALOG_OPENED, v4.onDialogOpened, v4)
  v5:subscribe(MessageType.MISSION_TOUR_DIALOG, v4.onTourDialog, v4)
  v5:subscribe(MessageType.INSETS_CHANGED, v4.updateInsets, v4)
  return v4
end
function SpeedSliderDisplay.delete(v0)
  v1:unsubscribeAll(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function SpeedSliderDisplay:createComponents()
  local v1, v2 = self:getPosition()
  local v4 = unpack(SpeedSliderDisplay.SIZE.BACKGROUND)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5 = Overlay.new(self.hudAtlasPath, v1, v2, v3, v4)
  local v8 = GuiUtils.getUVs(SpeedSliderDisplay.UV.BACKGROUND)
  v5:setUVs(...)
  local v6 = HUDElement.new(v5)
  self.sliderBackgroundElement = v6
  self:addChild(self.sliderBackgroundElement)
  v6 = self:createBar(SpeedSliderDisplay.POSITION.POSITIVE_BAR, SpeedSliderDisplay.SIZE.POSITIVE_BAR, SpeedSliderDisplay.COLOR.POSITIVE_BAR)
  self.positiveBarHudElement = v6
  v6:addChild(self.positiveBarHudElement)
  v6 = self:createBar(SpeedSliderDisplay.POSITION.NEGATIVE_BAR, SpeedSliderDisplay.SIZE.NEGATIVE_BAR, SpeedSliderDisplay.COLOR.NEGATIVE_BAR)
  self.negativeBarHudElement = v6
  v6:addChild(self.negativeBarHudElement)
  local v7 = unpack(SpeedSliderDisplay.POSITION.NEGATIVE_BAR)
  v6, v7 = getNormalizedScreenValues(...)
  self.negativeBarPosX = v6
  self.negativeBarPosY = v7
  v7 = unpack(SpeedSliderDisplay.SIZE.NEGATIVE_BAR)
  v6, v7 = getNormalizedScreenValues(...)
  self.negativeBarSizeY = v7
  local v9 = unpack(SpeedSliderDisplay.POSITION.SPEED_TEXT)
  v8, v9 = getNormalizedScreenValues(...)
  self.textPosX = v8
  self.textPosY = v9
  v9 = unpack(SpeedSliderDisplay.POSITION.SPEED_TEXT_GAMEPAD)
  v8, v9 = getNormalizedScreenValues(...)
  self.textPosGamepadX = v8
  self.textPosGamepadY = v9
  v9 = unpack(SpeedSliderDisplay.POSITION.SPEED_TEXT_GAMEPAD_OFFSET_KMH)
  v8, v9 = getNormalizedScreenValues(...)
  self.textOffsetXkmh = v8
  v9 = unpack(SpeedSliderDisplay.SIZE.SPEED_TEXT)
  v8, v9 = getNormalizedScreenValues(...)
  self.textSize = v9
  local v10 = GuiUtils.getUVs(SpeedSliderDisplay.UV.SLIDER)
  self.sliderUVs = v10
  v10 = GuiUtils.getUVs(SpeedSliderDisplay.UV.SLIDER_DISABLED)
  self.sliderUVsDisabled = v10
  local v11 = unpack(SpeedSliderDisplay.POSITION.SLIDER_OFFSET)
  v10, v11 = getNormalizedScreenValues(...)
  local v13 = unpack(SpeedSliderDisplay.SIZE.SLIDER_SIZE)
  local v12, v13 = getNormalizedScreenValues(...)
  local v14 = Overlay.new(self.hudAtlasPath, v1 + v10, v2 + v11, v12, v13)
  v14:setUVs(self.sliderUVs)
  self:updateSliderTranslations(1)
  local v15 = HUDSliderElement.new(v14, v5, 1.5, 0, 100, 2, self.sliderMin, self.sliderCenter, self.sliderMax, self.sliderMax)
  self.sliderHudElement = v15
  v15:setCallback(self.onSliderPositionChanged, self)
  v15:addChild(self.sliderHudElement)
  local v16 = unpack(SpeedSliderDisplay.POSITION.JUMP_BUTTON)
  v15, v16 = getNormalizedScreenValues(...)
  local v18 = unpack(SpeedSliderDisplay.SIZE.PLAYER_JUMP_ICON)
  local v17, v18 = getNormalizedScreenValues(...)
  local v19 = HUDButtonElement.new(self.hud, v1 + v15, v2 + v16)
  self.playerJumpButtonElement = v19
  local v24 = GuiUtils.getUVs(SpeedSliderDisplay.UV.JUMP_PLAYER)
  v19:setIcon(...)
  v19:setAction(InputAction.JUMP)
  v19:addTouchHandler(self.onJumpEventCallback, self)
  self:addChild(self.playerJumpButtonElement)
  v19 = HUDButtonElement.new(self.hud, v1 + v15, v2 + v16)
  self.horseJumpButtonElement = v19
  v24 = GuiUtils.getUVs(SpeedSliderDisplay.UV.JUMP_HORSE)
  v19:setIcon(...)
  v19:setAction(InputAction.JUMP)
  v19:addTouchHandler(self.onJumpEventCallback, self)
  self:addChild(self.horseJumpButtonElement)
  local v20 = unpack(SpeedSliderDisplay.POSITION.GAMEPAD_BACKGROUND)
  v19, v20 = getNormalizedScreenValues(...)
  local v22 = unpack(SpeedSliderDisplay.SIZE.GAMEPAD_BACKGROUND)
  local v21, v22 = getNormalizedScreenValues(...)
  local v23 = Overlay.new(self.hudAtlasPath, v1 + v19, v2 + v20, v21, v22)
  local v26 = GuiUtils.getUVs(SpeedSliderDisplay.UV.GAMEPAD_BACKGROUND)
  v23:setUVs(...)
  v24 = HUDElement.new(v23)
  self.gamepadBackgroundHudElement = v24
  self:addChild(self.gamepadBackgroundHudElement)
  v24:setAxisPosition(self.sliderCenter)
  self.positionVisible = {v1, v2}
  local v25 = unpack(SpeedSliderDisplay.POSITION.GAMEPAD_BACKGROUND)
  v24, v25 = getNormalizedScreenValues(...)
  self.positionInvisible = {v1, v2 - v25}
end
function SpeedSliderDisplay:updateSliderTranslations(v1)
  local v2 = v2:getHeight()
  local v4 = unpack(SpeedSliderDisplay.POSITION.SLIDER_OFFSET)
  local v3, v4 = getNormalizedScreenValues(...)
  self.sliderPosX = v3 * v1
  self.sliderPosY = v4 * v1
  self.backgroundSizeY = v2 - v4 * 2
  local v6 = unpack(SpeedSliderDisplay.SIZE.SLIDER_AREA)
  local v5, v6 = getNormalizedScreenValues(...)
  self.sliderAreaY = v6 * v1
  local v8 = unpack(SpeedSliderDisplay.POSITION.SLIDER_CENTER)
  local v7, v8 = getNormalizedScreenValues(...)
  self.restPosition = v8 * v1 / v6 * v1
  self.sliderMin = self.sliderPosY
  self.sliderMax = self.sliderMin + self.sliderAreaY
  self.sliderCenter = self.sliderMin + self.sliderAreaY * self.restPosition
end
function SpeedSliderDisplay:setSliderState(state)
  if self.sliderState ~= state then
    if state then
      self:showSlider()
      return
    end
    self:hideSlider()
  end
end
function SpeedSliderDisplay:hideSlider()
  local v1, v2 = self:getPosition()
  local sequence = TweenSequence.new(self)
  local v6 = MultiValueTween.new(self.setPosition, {v1, v2}, self.positionInvisible, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  sequence:insertTween(v6, 0)
  sequence:start()
  self.animation = sequence
  self.sliderState = false
  v4:setTouchIsActive(false)
  self:updateElementsVisibility()
end
function SpeedSliderDisplay:showSlider()
  local v1, v2 = self:getPosition()
  local sequence = TweenSequence.new(self)
  local v6 = MultiValueTween.new(self.setPosition, {v1, v2}, self.positionVisible, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  sequence:insertTween(v6, 0)
  sequence:addCallback(self.onSliderVisibilityChangeFinished, true)
  sequence:start()
  self.animation = sequence
  self.sliderState = true
  v4:resetSlider()
  v4:setTouchIsActive(true)
end
function SpeedSliderDisplay:updateElementsVisibility()
  if not self.sliderState and self.player == nil and self.vehicle ~= nil then
  end
  v1:setVisible(v3)
  v1:setVisible(self.sliderState)
end
function SpeedSliderDisplay:onSliderVisibilityChangeFinished(visibility)
  if visibility then
    self:updateElementsVisibility()
  end
end
function SpeedSliderDisplay:setVehicle(vehicle)
  self.vehicle = vehicle
  if vehicle ~= nil then
    local v2 = SpecializationUtil.hasSpecialization(Rideable, vehicle.specializations)
    self.isRideable = v2
    if self.player ~= nil then
      self:setPlayer(nil)
    end
    v2:resetSlider()
    v2:clearSnapPositions()
    if self.isRideable then
      -- TODO: structure LOP_FORNPREP (pc 41, target 59)
      v5:addSnapPosition(self.sliderPosY + self.sliderAreaY * SpeedSliderDisplay.RIDEABLE_SNAP_POSITIONS[1])
      -- TODO: structure LOP_FORNLOOP (pc 58, target 42)
    end
  end
  if self.isRideable then
    local v4 = GuiUtils.getUVs(SpeedSliderDisplay.UV.BACKGROUND_HORSE)
    v2:setUVs(...)
    local v3 = unpack(SpeedSliderDisplay.SIZE.BACKGROUND_HORSE)
    v2, v3 = getNormalizedScreenValues(...)
    v4:setDimension(v2 * self.uiScale, v3 * self.uiScale)
  else
    v4 = GuiUtils.getUVs(SpeedSliderDisplay.UV.BACKGROUND)
    v2:setUVs(...)
    v3 = unpack(SpeedSliderDisplay.SIZE.BACKGROUND)
    v2, v3 = getNormalizedScreenValues(...)
    v4:setDimension(v2 * self.uiScale, v3 * self.uiScale)
  end
  self:updateElementsVisibility()
end
function SpeedSliderDisplay:setPlayer(player)
  self.player = player
  if player ~= nil and self.vehicle ~= nil then
    self:setVehicle(nil)
  end
  self:updateVisibilityState()
  self:updateElementsVisibility()
end
function SpeedSliderDisplay:updateButton()
  if self.player ~= nil then
  end
  v2:setVisible(v1)
  local v2 = v2:getIsGuiVisible()
  if not v2 then
    local v4 = g_currentMission.guidedTour:getCanAccessHudButton("speedSliderDisplay_playerJump")
  end
  if not v2 then
    local v5 = v3:getCanAccessHudButton("speedSliderDisplay_horseJump")
  end
  if not v2 then
    local v6 = v3:getCanAccessHudButton("speedSliderDisplay_controlSpeed")
  end
  v7:setDisabled(not v4)
  if self.vehicle ~= nil then
  end
  if v7 then
    local v8 = v8:getIsRideableJumpAllowed(true)
    if v8 then
    end
  end
  v9:setVisible(v7)
  v9:setDisabled(not v8)
  if v6 then
    v9:setUVs(self.sliderUVs)
    return
  end
  v9:setUVs(self.sliderUVsDisabled)
end
function SpeedSliderDisplay:createBar(position, size, color)
  local v4, v5 = self:getPosition()
  local v7 = unpack(position)
  local v6, v7 = getNormalizedScreenValues(...)
  local v9 = unpack(size)
  local v8, v9 = getNormalizedScreenValues(...)
  local v10 = Overlay.new(self.hudAtlasPath, v4 + v6, v5 + v7, v8, v9)
  local v13 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v10:setUVs(...)
  v13 = unpack(color)
  v10:setColor(...)
  return HUDElement.new(v10)
end
function SpeedSliderDisplay:onSliderPositionChanged(position)
  local v2 = MathUtil.clamp(position, 0, 1)
  self.sliderPosition = v2
  local v2, v3 = self:getPosition()
  local v4, v5 = self:getAccelerateAndBrakeValue()
  v6:setScale(self.uiScale, v4 * self.uiScale)
  if self.cruiseControlIsActive then
    -- if SpeedSliderDisplay.COLOR.CRUISE_CONTROL then goto L42 end
  end
  local v8 = unpack(SpeedSliderDisplay.COLOR.POSITIVE_BAR)
  v6:setColor(...)
  v8:setPosition(v2 + self.negativeBarPosX * self.uiScale, v3 + (self.negativeBarPosY + self.negativeBarSizeY * (1 - v5)) * self.uiScale)
  v8:setScale(self.uiScale, v5 * self.uiScale)
  if self.vehicle ~= nil and self.isRideable then
    -- TODO: structure LOP_FORNPREP (pc 98, target 126)
    local v11 = math.abs(position - SpeedSliderDisplay.RIDEABLE_SNAP_POSITIONS[1])
    if v11 < 0.01 then
      v11:setCurrentGait(1)
      self.lastGait = 1
      self.lastGaitTime = g_time
      return
    end
    -- TODO: structure LOP_FORNLOOP (pc 125, target 99)
  end
end
function SpeedSliderDisplay:getAccelerateAndBrakeValue()
  local v1 = MathUtil.clamp((self.sliderPosition - self.restPosition) / (1 - self.restPosition), 0, 1)
  local v4 = MathUtil.clamp(self.sliderPosition / self.restPosition, 0, 1)
  return v1, 1 - v4
end
function SpeedSliderDisplay:onJumpEventCallback()
  local v1 = v1:getIsSleeping()
  if v1 then
    return
  end
  if self.vehicle ~= nil and self.isRideable then
    v1 = v1:getIsRideableJumpAllowed()
    if v1 then
      v1:jump()
    end
  end
  if self.player ~= nil then
    v1:onInputJump(nil, 1)
  end
end
function SpeedSliderDisplay:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self:updateButton()
  if self.sliderHudElement ~= nil then
    v2:update(dt)
  end
  if self.vehicle ~= nil then
    if self.vehicle.setAccelerationPedalInput ~= nil then
      local v2, v3 = self:getAccelerateAndBrakeValue()
      if 0 < v2 then
      elseif 0 < v3 then
      else
      end
      local v7 = math.abs(v2 + v3)
      v5:setTargetSpeedAndDirection(v7, v4)
    end
    if self.isRideable then
      v2 = v2:getCurrentGait()
      if v2 ~= self.lastGait and self.lastGaitTime < g_time - 250 and SpeedSliderDisplay.RIDEABLE_SNAP_POSITIONS[v2] ~= nil then
        v3:setAxisPosition(self.sliderPosY + self.sliderAreaY * SpeedSliderDisplay.RIDEABLE_SNAP_POSITIONS[v2])
        self.lastGait = v2
      end
    end
  end
end
function SpeedSliderDisplay:getIsSliderActive()
  if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
    return false
  end
  if not Platform.hasTouchSliders then
    return false
  end
  if self.vehicle ~= nil then
    local dt = dt:getIsAIActive()
    if dt then
      return false
    end
  end
  if self.player ~= nil then
    return false
  end
  return true
end
function SpeedSliderDisplay:onInputHelpModeChange(inputHelpMode)
  self.lastInputHelpMode = inputHelpMode
  if inputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
    v2:setAxisPosition(self.sliderPosY + self.sliderAreaY * self.restPosition)
  end
  self:updateVisibilityState()
end
function SpeedSliderDisplay:onAIVehicleStateChanged(state, vehicle)
  if vehicle == self.vehicle then
    self:updateVisibilityState()
  end
end
function SpeedSliderDisplay:updateVisibilityState()
  local dt = self:getIsSliderActive()
  if dt ~= self.sliderState then
    self:setSliderState(dt, true)
  end
end
function SpeedSliderDisplay:draw()
  local v2 = v2:superClass()
  v2.draw(self)
  if self.vehicle ~= nil and not self.isRideable then
    local v4 = v4:getLastSpeed()
    v2 = v2:getSpeed(...)
    local dt = MathUtil.round(...)
    local v2, v3 = self:getPosition()
    v4 = self:getWidth()
    setTextColor(1, 1, 1, 1)
    setTextBold(true)
    local v8 = v8:getIsAIActive()
    if not v8 and self.lastInputHelpMode ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
    if v8 then
      local v9 = v9:getPosition()
      v9 = v9:getWidth()
      local v12 = v12:getSpeedMeasuringUnit()
      v9 = string.format(...)
    else
      v9 = string.format("%02d", dt)
    end
    setTextAlignment(RenderText.ALIGN_CENTER)
    renderText(v5 + v4 * 0.5, v6, self.textSize * self.uiScale, v7)
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextBold(false)
  end
end
function SpeedSliderDisplay.getIsVehicleThrottleActive(v0)
  if not Platform.hasTouchSliders then
    return false
  end
  local dt = dt:getLastInputMode()
  if dt == GS_INPUT_HELP_MODE_GAMEPAD then
  end
  return true
end
function SpeedSliderDisplay:onDialogOpened(guiName, overlappingDialog)
  if not overlappingDialog then
    v3:resetSlider()
  end
end
function SpeedSliderDisplay:onGuiOpen()
  dt:resetSlider()
end
function SpeedSliderDisplay:onTourDialog()
  dt:resetSlider()
end
function SpeedSliderDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  local currentVisibility = self:getVisible()
  self:setVisible(true, false)
  self.uiScale = uiScale
  local v5 = self:getWidth()
  local v3, v4 = SpeedSliderDisplay.getBackgroundPosition(...)
  self:setPosition(v3, v4)
  self.positionVisible = {v3, v4}
  local v6 = unpack(SpeedSliderDisplay.POSITION.GAMEPAD_BACKGROUND)
  v5, v6 = getNormalizedScreenValues(...)
  self.positionInvisible = {v3, v4 - v6 * uiScale}
  self:updateSliderTranslations(uiScale)
  v7:setRange(self.sliderMin, self.sliderCenter, self.sliderMax, self.sliderMax)
  self:storeOriginalPosition()
  self:setVisible(currentVisibility, false)
  local v7 = self:getIsSliderActive()
  if not v7 then
    self:setPosition(self.positionInvisible[1], self.positionInvisible[2])
  end
end
function SpeedSliderDisplay:updateInsets()
  self:setScale(self.uiScale)
end
function SpeedSliderDisplay.getBackgroundPosition(scale, width)
  local v3 = unpack(SpeedSliderDisplay.POSITION.BACKGROUND)
  local v2, v3 = getNormalizedScreenValues(...)
  local v6, v7, v8, v9 = getSafeFrameInsets()
  local v11 = math.min(1 + v2 * scale, 1 - v7 - width)
  return v11, v3 * scale
end
function SpeedSliderDisplay.createBackground()
  local dt = unpack(SpeedSliderDisplay.SIZE.BACKGROUND)
  local v0, dt = getNormalizedScreenValues(...)
  local v2, v3 = SpeedSliderDisplay.getBackgroundPosition(1, v0)
  return Overlay.new(nil, v2, v3, v0, dt)
end
SpeedSliderDisplay.SIZE = {BACKGROUND = {91, 635}, BACKGROUND_HORSE = {91, 549}, POSITIVE_BAR = {67, 400}, NEGATIVE_BAR = {67, 100}, PLAYER_JUMP_ICON = {90, 90}, JUMP_BUTTON = {106, 106}, JUMP_BUTTON_ICON = {90, 90}, SLIDER_SIZE = {192, 124}, SLIDER_AREA = {192, 500}, GAMEPAD_BACKGROUND = {264, 84}, SPEED_TEXT = {0, 55}, GAMEPAD_OFFSET = {0, -557}}
SpeedSliderDisplay.POSITION = {BACKGROUND = {-160, 50}, JUMP_BUTTON = {-7, 558}, SPEED_TEXT = {45, 574}, SPEED_TEXT_GAMEPAD = {84, 578}, SPEED_TEXT_GAMEPAD_OFFSET_KMH = {15, 0}, SNAP1 = {8, 224}, SNAP2 = {8, 324}, SNAP3 = {8, 424}, NEGATIVE_BAR = {12, 24}, POSITIVE_BAR = {12, 124}, SLIDER_OFFSET = {-49, -41}, SLIDER_CENTER = {0, 100}, GAMEPAD_BACKGROUND = {-143, 557}}
SpeedSliderDisplay.UV = {BACKGROUND = {5, 293, 91, 635}, BACKGROUND_HORSE = {5, 379, 91, 549}, SLIDER = {97, 432, 192, 142}, SLIDER_DISABLED = {779, 0, 192, 142}, JUMP_HORSE = {96, 192, 96, 96}, JUMP_PLAYER = {768, 0, 96, 96}, GAMEPAD_BACKGROUND = {288, 528, 264, 84}}
SpeedSliderDisplay.COLOR = {BACKGROUND = {1, 1, 1, 0.5}, POSITIVE_BAR = {0, 0.486274, 0.8549019, 0.5}, NEGATIVE_BAR = {1, 0.1, 0.1, 0.5}, CRUISE_CONTROL = {0.0227, 0.5346, 0.8519, 0.9}}
if v0 ~= nil then
  local v2 = SpeedSliderDisplay.new(v0.hud, v0.hudAtlasPath, v0.controlHudAtlasPath)
  v2:setScale(v0.uiScale)
  v2:setVehicle(v0.vehicle)
  v2:setPlayer(v0.player)
  for v6, v7 in ipairs(g_currentMission.hud.displayComponents) do
    if not (v7 == g_currentMission.hud.speedSliderDisplay) then
      continue
    end
    g_currentMission.hud.displayComponents[v6] = v2
    break
  end
  g_currentMission.hud.speedSliderDisplay = v2
  Logging.info("Reloaded")
end
