-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SettingsDisplayFrame = {}
local SettingsDisplayFrame_mt = Class(SettingsDisplayFrame, TabbedMenuFrameElement)
SettingsDisplayFrame.CONTROLS = {ELEMENT_PERFORMANCE_CLASS = "performanceClassElement", RESOLUTION = "resolutionElement", V_SYNC = "vSyncElement", FRAME_LIMIT = "frameLimitElement", BRIGHTNESS = "brightnessElement", FOV_Y = "fovYElement", UI_SCALE = "uiScaleElement", FULLSCREEN_MODE = "fullscreenModeElement", RESOLUTION_SCALE = "resolutionScaleElement", HDR_CALIBRATION_BUTTON = "hdrCalibrationButton", BOX_LAYOUT = "boxLayout", CAMERA_BOBBING = "cameraBobbingElement", MAIN_CONTAINER = "settingsContainer"}
function SettingsDisplayFrame.register()
  local v0 = SettingsDisplayFrame.new()
  v1:loadGui("dataS/gui/SettingsDisplayFrame.xml", "SettingsDisplayFrame", v0, true)
end
function SettingsDisplayFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(SettingsDisplayFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  v2.lastHDRActive = true
  return v2
end
function SettingsDisplayFrame:createFromExistingGui(v1)
  local v2 = SettingsDisplayFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  v2.hasCustomMenuButtons = self.hasCustomMenuButtons
  return v2
end
function SettingsDisplayFrame:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.hasCustomMenuButtons = src.hasCustomMenuButtons
end
function SettingsDisplayFrame:initialize()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText(SettingsDisplayFrame.L10N_SYMBOL.BUTTON_APPLY)
  self.applyButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onApplySettings()
  end}
  if not GS_PLATFORM_GGP then
    v2 = v2:getText(SettingsDisplayFrame.L10N_SYMBOL.BUTTON_ADVANCED)
    self.advancedButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
      self:onClickAdvancedButton()
    end}
  end
end
function SettingsDisplayFrame:setOpenAdvancedSettingsCallback(itemSelectedCallback)
  if not itemSelectedCallback then
  end
  self.notifyAdvancedSettingsButton = v2
end
function SettingsDisplayFrame:onApplySettings()
  local v1 = v1:needsRestartToApplyChanges()
  if v1 then
  end
  v2:applyChanges(SettingsModel.SETTING_CLASS.SAVE_ALL)
  if v1 then
    v2:setStartScreen(RestartManager.START_SCREEN_SETTINGS_ADVANCED)
    doRestart(true, "")
    return
  end
  self:setMenuButtonInfoDirty()
end
function SettingsDisplayFrame:getMenuButtonInfo()
  local v2 = v2:hasChanges()
  if v2 then
    table.insert({}, self.applyButtonInfo)
  end
  table.insert(v1, self.backButtonInfo)
  table.insert(v1, self.advancedButtonInfo)
  return v1
end
function SettingsDisplayFrame:updateValues()
  self:updatePerformanceClass()
  local v3 = v3:getValue(SettingsModel.SETTING.PERFORMANCE_CLASS)
  v1:setState(...)
  local v4 = v4:getValue(SettingsModel.SETTING.FULLSCREEN_MODE)
  v1:setState(v4 + 1)
  v4 = v4:getValue(SettingsModel.SETTING.RESOLUTION)
  v1:setState(v4 + 1)
  v3 = v3:getValue(SettingsModel.SETTING.V_SYNC)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.BRIGHTNESS)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.FOV_Y)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.UI_SCALE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.RESOLUTION_SCALE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.CAMERA_BOBBING)
  v1:setIsChecked(...)
  if Platform.hasAdjustableFrameLimit and 1 < #Platform.frameLimits then
    v3 = v3:getValue(SettingsModel.SETTING.FRAME_LIMIT)
    v1:setState(...)
    v4 = v4:getValue(SettingsModel.SETTING.V_SYNC)
    if v4 ~= 2 then
    end
    v1:setDisabled(true)
  end
  self:setMenuButtonInfoDirty()
end
function SettingsDisplayFrame:onFrameOpen()
  v1:setVisible(self.lastHDRActive)
  v1:setVisible(not GS_PLATFORM_GGP)
  v1:setVisible(not GS_PLATFORM_GGP)
  v1:setVisible(not GS_PLATFORM_GGP)
  v1:setVisible(not GS_PLATFORM_GGP)
  v1:setVisible(not GS_PLATFORM_GGP)
  if Platform.hasAdjustableFrameLimit and 1 >= #Platform.frameLimits then
  end
  v1:setVisible(v3)
  self:updateHDRFocus()
  self:updateValues()
end
function SettingsDisplayFrame:updateHDRFocus()
  v1:invalidateLayout()
  if self.hdrCalibrationButton.parent.visible then
    self.cameraBobbingElement.parent.wrapAround = false
    v1:linkElements(self.cameraBobbingElement, FocusManager.BOTTOM, self.hdrCalibrationButton)
    v1:linkElements(self.performanceClassElement, FocusManager.TOP, self.hdrCalibrationButton)
  end
end
function SettingsDisplayFrame:updatePerformanceClass()
  local v1, v2, v3 = v1:getPerformanceClassTexts()
  v4:setTexts(v1)
end
function SettingsDisplayFrame:setOpenHDRSettingsCallback(itemSelectedCallback)
  if not itemSelectedCallback then
  end
  self.notifyHDRSettingsButton = v2
end
function SettingsDisplayFrame:update(dt)
  local v2 = getHdrAvailable()
  if v2 then
  end
  if self.lastHDRActive ~= v2 then
    v3:setVisible(v2)
    self:updateHDRFocus()
    self.lastHDRActive = v2
  end
end
function SettingsDisplayFrame.onCreatePerformanceClass(v0, v1)
  local v2, v3, v4 = v2:getPerformanceClassTexts()
  v1:setTexts(v2)
end
function SettingsDisplayFrame.onCreateResolution(v0, v1)
  local v4 = v4:getResolutionTexts()
  v1:setTexts(...)
end
function SettingsDisplayFrame.onCreateFullscreenMode(v0, v1)
  local v4 = v4:getFullscreenModeTexts()
  v1:setTexts(...)
end
function SettingsDisplayFrame.onCreateBrightness(v0, v1)
  local v4 = v4:getBrightnessTexts()
  v1:setTexts(...)
end
function SettingsDisplayFrame.onCreateFovY(v0, v1)
  local v4 = v4:getFovYTexts()
  v1:setTexts(...)
end
function SettingsDisplayFrame.onCreateUIScale(v0, v1)
  local v4 = v4:getUiScaleTexts()
  v1:setTexts(...)
end
function SettingsDisplayFrame.onCreateResolutionScale(v0, v1)
  local v4 = v4:getResolutionScaleTexts()
  v1:setTexts(...)
end
function SettingsDisplayFrame.onCreateFrameLimit(v0, v1)
  local v4 = v4:getFrameLimitTexts()
  v1:setTexts(...)
end
function SettingsDisplayFrame:onClickPerformanceClass(state)
  v2:applyPerformanceClass(state)
  self:updateValues()
end
function SettingsDisplayFrame:onClickResolution(state)
  v2:setValue(SettingsModel.SETTING.RESOLUTION, state - 1)
  self:setMenuButtonInfoDirty()
end
function SettingsDisplayFrame:onClickFovY(state)
  v2:setValue(SettingsModel.SETTING.FOV_Y, state)
  self:setMenuButtonInfoDirty()
end
function SettingsDisplayFrame:onClickBrightness(state)
  v2:setValue(SettingsModel.SETTING.BRIGHTNESS, state)
  self:setMenuButtonInfoDirty()
end
function SettingsDisplayFrame:onClickFullscreenMode(state)
  v2:setValue(SettingsModel.SETTING.FULLSCREEN_MODE, state - 1)
  self:setMenuButtonInfoDirty()
end
function SettingsDisplayFrame:onClickVSync(state)
  v2:setValue(SettingsModel.SETTING.V_SYNC, state)
  self:setMenuButtonInfoDirty()
  self:updateValues()
end
function SettingsDisplayFrame:onClickFrameLimit(state)
  v2:setValue(SettingsModel.SETTING.FRAME_LIMIT, state)
  self:setMenuButtonInfoDirty()
end
function SettingsDisplayFrame:onClickUIScale(state)
  v2:setValue(SettingsModel.SETTING.UI_SCALE, state)
  self:setMenuButtonInfoDirty()
end
function SettingsDisplayFrame:onClickAdvancedButton()
  self.notifyAdvancedSettingsButton()
end
function SettingsDisplayFrame:onClickResolutionScale(state)
  v2:setValue(SettingsModel.SETTING.RESOLUTION_SCALE, state)
  self:setMenuButtonInfoDirty()
end
function SettingsDisplayFrame:onClickCameraBobbing(state)
  local v5 = v5:getIsChecked()
  v2:setValue(...)
  self:setMenuButtonInfoDirty()
end
function SettingsDisplayFrame:onHDRCalibration()
  self.notifyHDRSettingsButton()
end
SettingsDisplayFrame.L10N_SYMBOL = {BUTTON_APPLY = "button_apply", BUTTON_ADVANCED = "setting_advanced"}
