-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SettingsGeneralFrame = {}
local SettingsGeneralFrame_mt = Class(SettingsGeneralFrame, TabbedMenuFrameElement)
SettingsGeneralFrame.CONTROLS = {"languageElement", "languageElementBox", "mpLanguageElement", "inputHelpModeElement", "inputHelpModeElementBox", "masterVolumeElement", "musicVolumeElement", "volumeVehicleElement", "volumeEnvironmentElement", "volumeRadioElement", "volumeGUIElement", "isHeadTrackingEnabledElement", "isHeadTrackingEnabledElementBox", "isGamepadEnabledElement", "isGamepadEnabledElementBox", "settingsContainer", "invertYLookElement", "boxLayout", "forceFeedbackElement", "forceFeedbackElementBox", "multiVolumeVoice", "multiVolumeVoiceInput", "multiVoiceMode"}
function SettingsGeneralFrame.register()
  local v0 = SettingsGeneralFrame.new()
  v1:loadGui("dataS/gui/SettingsGeneralFrame.xml", "SettingsGeneralFrame", v0, true)
end
function SettingsGeneralFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(SettingsGeneralFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  return v2
end
function SettingsGeneralFrame:createFromExistingGui(v1)
  local v2 = SettingsGeneralFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  v2.hasCustomMenuButtons = self.hasCustomMenuButtons
  return v2
end
function SettingsGeneralFrame:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.hasCustomMenuButtons = src.hasCustomMenuButtons
end
function SettingsGeneralFrame:applyDefaultSettingsValues()
  local v3 = v3:getValue(SettingsModel.SETTING.INPUT_HELP_MODE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.GAMEPAD_ENABLED)
  v1:setIsChecked(...)
  v3 = v3:getValue(SettingsModel.SETTING.HEAD_TRACKING_ENABLED)
  v1:setIsChecked(...)
  v3 = v3:getValue(SettingsModel.SETTING.FORCE_FEEDBACK)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.LANGUAGE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.MP_LANGUAGE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_MASTER)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_MUSIC)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_VEHICLE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_ENVIRONMENT)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_RADIO)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_GUI)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.INVERT_Y_LOOK)
  v1:setIsChecked(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_VOICE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_VOICE_INPUT)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOICE_MODE)
  v1:setState(...)
end
function SettingsGeneralFrame:initialize()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText(SettingsAdvancedFrame.L10N_SYMBOL.BUTTON_APPLY)
  self.applyButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onApplySettings()
  end}
end
function SettingsGeneralFrame:onApplySettings()
  local v1 = v1:needsRestartToApplyChanges()
  if v1 then
  end
  v2:applyChanges(SettingsModel.SETTING_CLASS.SAVE_ALL)
  if v1 then
    v2:setStartScreen(RestartManager.START_SCREEN_SETTINGS)
    doRestart(false, "")
    return
  end
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:getMenuButtonInfo()
  local v2 = v2:hasChanges()
  if v2 then
    table.insert({}, self.applyButtonInfo)
  end
  table.insert(v1, self.backButtonInfo)
  return v1
end
function SettingsGeneralFrame:onFrameOpen()
  if self.isHeadTrackingEnabledElementBox ~= nil then
    v1:setVisible(not GS_PLATFORM_GGP)
  else
    v1:setVisible(not GS_PLATFORM_GGP)
  end
  if self.languageElementBox ~= nil then
    local v4 = v4:getIsLanguageDisabled()
    v1:setVisible(not v4)
  else
    v4 = v4:getIsLanguageDisabled()
    v1:setVisible(not v4)
  end
  if self.isGamepadEnabledElementBox ~= nil then
    v1:setVisible(not GS_PLATFORM_GGP)
  else
    v1:setVisible(not GS_PLATFORM_GGP)
  end
  if self.inputHelpModeElementBox ~= nil then
    v1:setVisible(not GS_PLATFORM_GGP)
  else
    v1:setVisible(not GS_PLATFORM_GGP)
  end
  if self.forceFeedbackElementBox ~= nil then
    v1:setVisible(not GS_PLATFORM_GGP)
  else
    v1:setVisible(not GS_PLATFORM_GGP)
  end
  v1:invalidateLayout()
  self:applyDefaultSettingsValues()
end
function SettingsGeneralFrame.onCreateLanguage(v0, v1)
  local v4 = v4:getLanguageTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateMPLanguage(v0, v1)
  local v4 = v4:getMPLanguageTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateInputHelpMode(v0, v1)
  local v4 = v4:getInputHelpModeTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateMasterVolume(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateMusicVolume(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateVolumeVehicle(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateVolumeEnvironment(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateVolumeRadio(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateVolumeGUI(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateForceFeedback(v0, v1)
  local v4 = v4:getForceFeedbackTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateVoiceVolume(v0, v1)
  local v4 = v4:getAudioVolumeTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateRecordingVolume(v0, v1)
  local v4 = v4:getRecordingVolumeTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame.onCreateVoiceMode(v0, v1)
  local v4 = v4:getVoiceModeTexts()
  v1:setTexts(...)
end
function SettingsGeneralFrame:onClickLanguage(state)
  v2:setValue(SettingsModel.SETTING.LANGUAGE, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickMPLanguage(state)
  v2:setValue(SettingsModel.SETTING.MP_LANGUAGE, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickIsHeadTrackingEnabled(state)
  local v5 = v5:getIsChecked()
  v2:setValue(...)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickForceFeedback(state)
  v2:setValue(SettingsModel.SETTING.FORCE_FEEDBACK, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickIsGamepadEnabled(state)
  local v5 = v5:getIsChecked()
  v2:setValue(...)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickInputHelpMode(state)
  local v5 = v5:getState()
  v2:setValue(...)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickMasterVolume(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_MASTER, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickMusicVolume(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_MUSIC, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickVolumeVehicle(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_VEHICLE, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickVolumeEnvironment(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_ENVIRONMENT, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickVolumeRadio(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_RADIO, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickVolumeGUI(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_GUI, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickInvertYLook(state)
  local v5 = v5:getIsChecked()
  v2:setValue(...)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickVoiceVolume(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_VOICE, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickRecordingVolume(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_VOICE_INPUT, state)
  self:setMenuButtonInfoDirty()
end
function SettingsGeneralFrame:onClickVoiceMode(state)
  v2:setValue(SettingsModel.SETTING.VOICE_MODE, state)
  self:setMenuButtonInfoDirty()
end
SettingsGeneralFrame.L10N_SYMBOL = {BUTTON_APPLY = "button_apply"}
