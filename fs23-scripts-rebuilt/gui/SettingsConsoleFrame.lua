-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SettingsConsoleFrame = {}
local SettingsConsoleFrame_mt = Class(SettingsConsoleFrame, TabbedMenuFrameElement)
SettingsConsoleFrame.CONTROLS = {"hdrCalibrationButton", "brightnessElement", "realBeaconLightsElement", "realBeaconLightsElementBox", ELEMENT_DISPLAY_RESOLUTION = "resolutionElement", ELEMENT_DISPLAY_RESOLUTION_BOX = "resolutionElementBox", ELEMENT_RENDER_QUALITY = "renderQualityElement", ELEMENT_RENDER_QUALITY_BOX = "renderQualityElementBox", ELEMENT_FOVY = "fovyElement", ELEMENT_UI_SCALE = "uiScaleElement", ELEMENT_INVERT_Y = "invertYLookElement", VOLUME_MASTER = "masterVolumeElement", VOLUME_MUSIC = "musicVolumeElement", VOLUME_VEHICLE = "volumeVehicleElement", VOLUME_ENVIRONMENT = "volumeEnvironmentElement", VOLUME_RADIO = "volumeRadioElement", VOLUME_GUI = "volumeGUIElement", MAIN_CONTAINER = "settingsContainer", MAIN_BOX = "boxLayout"}
function SettingsConsoleFrame.register()
  local v0 = SettingsConsoleFrame.new()
  v1:loadGui("dataS/gui/SettingsConsoleFrame.xml", "SettingsConsoleFrame", v0, true)
end
function SettingsConsoleFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(SettingsConsoleFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  return v2
end
function SettingsConsoleFrame:createFromExistingGui(v1)
  local v2 = SettingsConsoleFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  v2.hasCustomMenuButtons = self.hasCustomMenuButtons
  return v2
end
function SettingsConsoleFrame:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.hasCustomMenuButtons = src.hasCustomMenuButtons
end
function SettingsConsoleFrame:initialize()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText(SettingsConsoleFrame.L10N_SYMBOL.BUTTON_APPLY)
  self.applyButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onApplySettings()
  end}
end
function SettingsConsoleFrame:onApplySettings()
  v1:applyChanges(SettingsModel.SETTING_CLASS.SAVE_ALL)
  local v2 = v2:getText(SettingsConsoleFrame.L10N_SYMBOL.SAVING_FINISHED)
  InfoDialog.show(v2, nil, nil, DialogElement.TYPE_INFO)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:getMenuButtonInfo()
  local v2 = v2:hasChanges()
  if v2 then
    table.insert({}, self.applyButtonInfo)
  end
  table.insert(v1, self.backButtonInfo)
  return v1
end
function SettingsConsoleFrame:updateValues()
  local v3 = v3:getValue(SettingsModel.SETTING.CONSOLE_RESOLUTION)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.CONSOLE_RENDER_QUALITY)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.FOV_Y)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.UI_SCALE)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.INVERT_Y_LOOK)
  platformId:setIsChecked(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_MASTER)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_MUSIC)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_VEHICLE)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_ENVIRONMENT)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_RADIO)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_GUI)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.BRIGHTNESS)
  platformId:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.REAL_BEACON_LIGHTS)
  platformId:setIsChecked(...)
  local platformId = getPlatformId()
  if self.realBeaconLightsElementBox ~= nil then
    if platformId ~= PlatformId.XBOX_SERIES and platformId ~= PlatformId.PS5 then
    end
    v2:setVisible(v4)
  else
    if platformId ~= PlatformId.XBOX_SERIES and platformId ~= PlatformId.PS5 then
    end
    v2:setVisible(v4)
  end
  v2:invalidateLayout()
end
function SettingsConsoleFrame:onFrameOpen()
  v1:subscribe(MessageType.USER_PROFILE_CHANGED, self.onUserProfileChanged, self)
  self:updateValues()
  local v3 = v3:getText(SettingsConsoleFrame.L10N_SYMBOL.DOWNSAMPLED)
  v1:setLabel(...)
  if self.resolutionElementBox ~= nil then
    v3 = v3:getConsoleIsResolutionVisible()
    v1:setVisible(...)
  else
    v3 = v3:getConsoleIsResolutionVisible()
    v1:setVisible(...)
  end
  v3 = v3:getConsoleIsRenderQualityDisabled()
  v1:setDisabled(...)
  if self.renderQualityElementBox ~= nil then
    v3 = v3:getConsoleIsRenderQualityVisible()
    v1:setVisible(...)
  else
    v3 = v3:getConsoleIsRenderQualityVisible()
    v1:setVisible(...)
  end
  v1:invalidateLayout()
  self:updateHDRFocus()
end
function SettingsConsoleFrame.onFrameClose(v0)
  v1:unsubscribeAll(v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
end
function SettingsConsoleFrame:updateHDRFocus()
  v1:invalidateLayout()
  if self.hdrCalibrationButton.parent.visible then
    v1:linkElements(self.brightnessElement, FocusManager.BOTTOM, self.hdrCalibrationButton)
    v1:linkElements(self.masterVolumeElement, FocusManager.TOP, self.hdrCalibrationButton)
  end
end
function SettingsConsoleFrame:onUserProfileChanged()
  v1:refresh()
  self:updateValues()
end
function SettingsConsoleFrame:getMainElementSize()
  return self.settingsContainer.size
end
function SettingsConsoleFrame:getMainElementPosition()
  return self.settingsContainer.absPosition
end
function SettingsConsoleFrame:setOpenHDRSettingsCallback(itemSelectedCallback)
  if not itemSelectedCallback then
  end
  self.notifyHDRSettingsButton = v2
end
function SettingsConsoleFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = getHdrAvailable()
  if v2 then
    v3 = getHdrMaxNitsAvailable()
    if not v3 then
    end
  end
  if self.lastHDRActive ~= v2 then
    v3:setVisible(v2)
    self:updateHDRFocus()
    self.lastHDRActive = v2
  end
end
function SettingsConsoleFrame:onHDRCalibration()
  self.notifyHDRSettingsButton()
end
function SettingsConsoleFrame.onCreateDisplayResolution(v0, v1)
  local v4 = v4:getConsoleResolutionTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame.onCreateRenderQuality(v0, v1)
  local v4 = v4:getConsoleRenderQualityTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame.onCreateFovy(v0, v1)
  local v4 = v4:getFovYTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame.onCreateUIScale(v0, v1)
  local v4 = v4:getUiScaleTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame.onCreateMasterVolume(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame.onCreateMusicVolume(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame.onCreateVolumeVehicle(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame.onCreateVolumeEnvironment(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame.onCreateVolumeRadio(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame.onCreateVolumeGUI(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame.onCreateBrightness(v0, v1)
  local v4 = v4:getBrightnessTexts()
  v1:setTexts(...)
end
function SettingsConsoleFrame:onClickFovy(state)
  v2:setValue(SettingsModel.SETTING.FOV_Y, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickDisplayResolution(state)
  v2:setConsoleResolution(state)
  local v4 = v4:getConsoleIsRenderQualityDisabled()
  v2:setDisabled(...)
  v4 = v4:getValue(SettingsModel.SETTING.CONSOLE_RENDER_QUALITY)
  v2:setState(...)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickRenderQuality(state)
  v2:setValue(SettingsModel.SETTING.CONSOLE_RENDER_QUALITY, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickVSync(state)
  v2:setValue(SettingsModel.SETTING.V_SYNC, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickUIScale(state)
  v2:setValue(SettingsModel.SETTING.UI_SCALE, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickInvertYLook(state)
  local v5 = v5:getIsChecked()
  v2:setValue(...)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickMasterVolume(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_MASTER, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickMusicVolume(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_MUSIC, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickVolumeVehicle(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_VEHICLE, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickVolumeEnvironment(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_ENVIRONMENT, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickVolumeRadio(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_RADIO, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickVolumeGUI(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_GUI, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickBrightness(state)
  v2:setValue(SettingsModel.SETTING.BRIGHTNESS, state)
  self:setMenuButtonInfoDirty()
end
function SettingsConsoleFrame:onClickRealBeaconLights(state)
  local v5 = v5:getIsChecked()
  v2:setValue(...)
  self:setMenuButtonInfoDirty()
end
SettingsConsoleFrame.L10N_SYMBOL = {BUTTON_APPLY = "button_apply", DOWNSAMPLED = "setting_resolutionDownsampled", SAVING_FINISHED = "ui_savingFinished"}
