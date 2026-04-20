-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if SteeringSliderDisplay ~= nil then
  g_currentMission.hud.steeringSliderDisplay:delete()
end
SteeringSliderDisplay = {}
local SteeringSliderDisplay_mt = Class(SteeringSliderDisplay, HUDDisplayElement)
function SteeringSliderDisplay.new(hud, hudAtlasPath)
  local backgroundOverlay = SteeringSliderDisplay.createBackground()
  local v4 = v4:superClass()
  local v3 = v4.new(backgroundOverlay, nil, u0)
  v3.hud = hud
  v3.uiScale = 1
  v3.hudAtlasPath = hudAtlasPath
  v3.vehicle = nil
  v3.isRideable = false
  v3.sliderPosition = 0
  v3.restPosition = 0.5
  v3.resetTime = 2500
  v3.lastInputHelpMode = GS_INPUT_HELP_MODE_KEYBOARD
  v3.lastGyroscopeSteeringState = false
  v3:createComponents()
  v4:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.STEERING_BACK_SPEED], v3.onSteeringBackSpeedSettingChanged, v3)
  return v3
end
function SteeringSliderDisplay.delete(v0)
  v1:unsubscribeAll(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function SteeringSliderDisplay:setVehicle(vehicle)
  self.vehicle = vehicle
  if vehicle ~= nil then
    local v2 = SpecializationUtil.hasSpecialization(Rideable, vehicle.specializations)
    self.isRideable = v2
    local v4 = GuiUtils.getUVs(SteeringSliderDisplay.UV.SLIDER)
    v2:setUVs(...)
  end
end
function SteeringSliderDisplay:setPlayer(player)
  self.player = player
  self:updateVisibilityState()
end
function SteeringSliderDisplay:createComponents()
  local v2 = unpack(SteeringSliderDisplay.SIZE.BACKGROUND)
  local v1, v2 = getNormalizedScreenValues(...)
  local v4 = unpack(SteeringSliderDisplay.POSITION.BACKGROUND)
  local v3, v4 = getNormalizedScreenValues(...)
  local v5 = Overlay.new(self.hudAtlasPath, v3, v4, v1, v2)
  local v8 = GuiUtils.getUVs(SteeringSliderDisplay.UV.BACKGROUND)
  v5:setUVs(...)
  local v6 = HUDElement.new(v5)
  self.backgroundHudElement = v6
  self:addChild(self.backgroundHudElement)
  v6 = GuiUtils.getUVs(SteeringSliderDisplay.UV.SLIDER)
  self.uvs = v6
  v6 = GuiUtils.getUVs(SteeringSliderDisplay.UV.SLIDER_DISABLED)
  self.uvsDisabled = v6
  local v7 = unpack(SteeringSliderDisplay.SIZE.SLIDER_SIZE)
  v6, v7 = getNormalizedScreenValues(...)
  local v9 = Overlay.new(self.hudAtlasPath, v3, v4 + (v2 - v7) * 0.5, v6, v7)
  v9:setUVs(self.uvs)
  self:updateSliderTranslations(1)
  local v10 = HUDSliderElement.new(v9, v5, {0.12, 0.05}, 1, 10, 1, self.sliderMin, self.sliderCenter, self.sliderMax, nil)
  self.sliderHudElement = v10
  v10:setCallback(self.onSliderPositionChanged, self)
  local v13 = v13:getValue(GameSettings.SETTING.STEERING_BACK_SPEED)
  v10:setMoveToCenterSpeedFactor(v13 / 10)
  local v11 = unpack(SteeringSliderDisplay.SIZE.STEERING)
  v10, v11 = getNormalizedScreenValues(...)
  local v14 = Overlay.new(self.hudAtlasPath, v3 + (v6 - v10) * 0.5, v4 + (v2 - v7) * 0.5 + (v7 - v11) * 0.5, v10, v11)
  local v17 = GuiUtils.getUVs(SteeringSliderDisplay.UV.STEERING)
  v14:setUVs(...)
  v17 = HUDElement.new(v14)
  v15:addChild(...)
  v15:addChild(self.sliderHudElement)
  v15:setAxisPosition(self.sliderCenter)
end
function SteeringSliderDisplay:updateSliderTranslations(v1)
  local v2 = v2:getWidth()
  local v4 = unpack(SteeringSliderDisplay.SIZE.SLIDER_SIZE)
  local v3, v4 = getNormalizedScreenValues(...)
  self.sliderMin = 0
  self.sliderMax = v2 - v3 * self.uiScale
  local v5 = MathUtil.lerp(self.sliderMin, self.sliderMax, 0.5)
  self.sliderCenter = v5
end
function SteeringSliderDisplay.setVisible(v0, v1, v2)
  if v1 then
    local v3 = v3:getInputHelpMode()
    -- if v3 == GS_INPUT_HELP_MODE_GAMEPAD then goto L21 end
  end
  local v4 = v4:superClass()
  v4.setVisible(v0, v1, v2)
end
function SteeringSliderDisplay:onSliderPositionChanged(position)
  local v2 = MathUtil.clamp(position, 0, 1)
  self.sliderPosition = v2
end
function SteeringSliderDisplay:getSteeringValue()
  if self.sliderPosition * 2 - 1 == 0 then
    return self.sliderPosition * 2 - 1
  end
  local v3 = math.abs(v1)
  return v1 * v1 * v1 / v3
end
function SteeringSliderDisplay:getIsSliderActive()
  if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
    return false
  end
  if not Platform.hasTouchSliders then
    return false
  end
  if self.lastGyroscopeSteeringState then
    return false
  end
  if self.vehicle ~= nil then
    local v1 = v1:getIsAIActive()
    if v1 then
      return false
    end
  end
  if self.player ~= nil then
    return false
  end
  return true
end
function SteeringSliderDisplay:onInputHelpModeChange(inputHelpMode)
  self.lastInputHelpMode = inputHelpMode
  self:updateVisibilityState()
end
function SteeringSliderDisplay:onAIVehicleStateChanged(state, vehicle)
  self:updateVisibilityState()
end
function SteeringSliderDisplay:onGyroscopeSteeringChanged(state)
  self.lastGyroscopeSteeringState = state
  self:updateVisibilityState()
end
function SteeringSliderDisplay:updateVisibilityState()
  local v1 = self:getIsSliderActive()
  if v1 ~= self.animationState then
    self:setVisible(v1, true)
    v2:setTouchIsActive(v1)
  end
end
function SteeringSliderDisplay:onSteeringBackSpeedSettingChanged()
  if self.sliderHudElement ~= nil then
    local v4 = v4:getValue(GameSettings.SETTING.STEERING_BACK_SPEED)
    v1:setMoveToCenterSpeedFactor(v4 / 10)
  end
end
function SteeringSliderDisplay:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v4 = v4:getIsGuiVisible()
  if not v4 then
    v3 = g_currentMission.guidedTour:getCanAccessHudButton("steeringSliderDisplay_vehicleSteering")
  end
  if v3 then
    v4:setUVs(self.uvs)
  else
    v4:setUVs(self.uvsDisabled)
  end
  v4 = v4:getValue(GameSettings.SETTING.GYROSCOPE_STEERING)
  if not v4 and self.vehicle ~= nil then
    if self.isRideable then
      local v6 = self:getSteeringValue()
      v4:setRideableSteer(...)
    elseif self.vehicle.setSteeringInput ~= nil then
      v6 = self:getSteeringValue()
      v4:setSteeringInput(v6, true, InputDevice.CATEGORY.WHEEL)
    end
  end
  if self.sliderHudElement ~= nil then
    v4:update(dt)
  end
end
function SteeringSliderDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  local currentVisibility = self:getVisible()
  self:setVisible(true, false)
  self.uiScale = uiScale
  local v5 = self:getWidth()
  local v3, v4 = SteeringSliderDisplay.getBackgroundPosition(...)
  self:setPosition(v3, v4)
  self:updateSliderTranslations(uiScale)
  v5:setRange(self.sliderMin, self.sliderCenter, self.sliderMax, nil)
  self:storeOriginalPosition()
  self:setVisible(currentVisibility, false)
end
function SteeringSliderDisplay.getBackgroundPosition(scale, width)
  local v3 = unpack(SteeringSliderDisplay.POSITION.BACKGROUND)
  local v2, v3 = getNormalizedScreenValues(...)
  return v2 * scale, v3 * scale
end
function SteeringSliderDisplay.createBackground()
  local dt = unpack(SteeringSliderDisplay.SIZE.BACKGROUND)
  local v0, dt = getNormalizedScreenValues(...)
  local v2, v3 = SteeringSliderDisplay.getBackgroundPosition(1, v0)
  return Overlay.new(nil, v2, v3, v0, dt)
end
SteeringSliderDisplay.SIZE = {BACKGROUND = {480, 144}, SLIDER_SIZE = {106, 106}, STEERING = {90, 90}}
SteeringSliderDisplay.POSITION = {BACKGROUND = {50, 31}, HIDE_OFFSET = {0, -250}}
SteeringSliderDisplay.UV = {BACKGROUND = {97, 288, 480, 144}, SLIDER = {132, 908, 106, 106}, SLIDER_DISABLED = {344, 908, 106, 106}, STEERING = {384, 48, 96, 96}}
SteeringSliderDisplay.COLOR = {BACKGROUND = {1, 1, 1, 0.5}}
if v0 ~= nil then
  local v2 = SteeringSliderDisplay.new(v0.hud, v0.hudAtlasPath)
  v2:setScale(v0.uiScale)
  v2:setVehicle(v0.vehicle)
  v2:setPlayer(v0.player)
  v2.lastGyroscopeSteeringState = v0.lastGyroscopeSteeringState
  for v6, v7 in ipairs(g_currentMission.hud.displayComponents) do
    if not (v7 == g_currentMission.hud.steeringSliderDisplay) then
      continue
    end
    g_currentMission.hud.displayComponents[v6] = v2
    break
  end
  g_currentMission.hud.steeringSliderDisplay = v2
  Logging.info("Reloaded")
end
