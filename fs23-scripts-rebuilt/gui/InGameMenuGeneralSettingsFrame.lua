-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuGeneralSettingsFrame = {}
local InGameMenuGeneralSettingsFrame_mt = Class(InGameMenuGeneralSettingsFrame, TabbedMenuFrameElement)
InGameMenuGeneralSettingsFrame.CONTROLS = {SETTINGS_CONTAINER = "settingsContainer", BOX_LAYOUT = "boxLayout", CHECKBOX_AUTO_HELP = "checkAutoHelp", CHECKBOX_COLORBLIND_MODE = "checkColorBlindMode", OPTION_MONEY_UNIT = "multiMoneyUnit", CHECKBOX_USE_MILES = "checkUseMiles", CHECKBOX_USE_FAHRENHEIT = "checkUseFahrenheit", CHECKBOX_USE_ACRE = "checkUseAcre", CHECKBOX_SHOW_TRIGGER_MARKER = "checkShowTriggerMarker", CHECKBOX_SHOW_HELP_TRIGGER = "checkShowHelpTrigger", CHECKBOX_SHOW_MULTIPLAYER_NAMES = "checkShowMultiplayerNames", CHECKBOX_SHOW_MULTIPLAYER_NAMES_BOX = "checkShowMultiplayerNamesBox", CHECKBOX_SHOW_FIELD_INFO = "checkShowFieldInfo", CHECKBOX_IS_RADIO_ACTIVE = "checkIsRadioActive", CHECKBOX_IS_RADIO_VEHICLE_ONLY = "checkIsRadioVehicleOnly", CHECKBOX_RESET_CAMERA = "checkResetCamera", CHECKBOX_ACTIVE_SUSPENSION_CAMERA = "checkActiveSuspensionCamera", CHECKBOX_CAMERA_CHECK_COLLISION = "checkCameraCheckCollision", CHECKBOX_CAMERA_CHECK_COLLISION_BOX = "checkCameraCheckCollisionBox", CHECKBOX_USE_WORLD_CAMERA = "checkUseWorldCamera", CHECKBOX_INVERT_Y_LOOK = "checkInvertYLook", CHECKBOX_USE_EASY_ARM_CONTROLER = "checkUseEasyArmControl", OPTION_CAMERA_SENSITIVITY = "multiCameraSensitivity", OPTION_VEHICLE_ARM_SENSITIVITY = "multiVehicleArmSensitivity", OPTION_STEERING_BACK_SPEED = "multiSteeringBackSpeed", OPTION_STEERING_SENSITIVITY = "multiSteeringSensitivity", OPTION_DIRECTION_CHANGE_MODE = "multiDirectionChangeMode", OPTION_GEAR_SHIFT_MODE = "multiGearShiftMode", OPTION_HUD_SPEED_GAUGE = "multiHudSpeedGauge", CHECKBOX_WOOD_HARVESTER_AUTO_CUT = "checkWoodHarvesterAutoCut", OPTION_REAL_BEACON_LIGHT = "multiRealBeaconLightBrightness", OPTION_REAL_BEACON_LIGHT_BOX = "multiRealBeaconLightBrightnessBox", CHECKBOX_IS_TRAIN_TABBABLE = "checkIsTrainTabbable", CHECKBOX_IS_TRAIN_TABBABLE_BOX = "checkIsTrainTabbableBox", OPTION_VOLUME_MASTER = "multiMasterVolume", OPTION_VOLUME_VEHICLE = "multiVehicleVolume", OPTION_VOLUME_ENVIRONMENT = "multiEnvironmentVolume", OPTION_VOLUME_RADIO = "multiRadioVolume", OPTION_VOLUME_GUI = "multiVolumeGUI", OPTION_VOLUME_VOICE = "multiVolumeVoice", OPTION_VOLUME_VOICE_BOX = "multiVolumeVoiceBox", OPTION_VOLUME_VOICE_INPUT = "multiVolumeVoiceInput", OPTION_VOLUME_VOICE_INPUT_BOX = "multiVolumeVoiceInputBox", OPTION_VOICE_MODE = "multiVoiceMode", OPTION_VOICE_MODE_BOX = "multiVoiceModeBox", OPTION_VOICE_INPUT_SENSITIVITY = "multiVoiceInputSensitivity", OPTION_VOICE_INPUT_SENSITIVITY_BOX = "multiVoiceInputSensitivityBox", OPTION_INPUT_HELP_MODE = "multiInputHelpMode"}
function InGameMenuGeneralSettingsFrame.register()
  local v0 = InGameMenuGeneralSettingsFrame.new()
  v1:loadGui("dataS/gui/InGameMenuGeneralSettingsFrame.xml", "GeneralSettingsFrame", v0, true)
end
function InGameMenuGeneralSettingsFrame.new(subclass_mt, settingsModel)
  if not settingsModel then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuGeneralSettingsFrame.CONTROLS)
  v2.checkboxMapping = {}
  v2.optionMapping = {}
  return v2
end
function InGameMenuGeneralSettingsFrame:createFromExistingGui(v1)
  local v2 = InGameMenuGeneralSettingsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuGeneralSettingsFrame:initialize()
  self.checkboxMapping[self.checkAutoHelp] = g_settingsModel.SETTING.SHOW_HELP_MENU
  self.checkboxMapping[self.checkColorBlindMode] = g_settingsModel.SETTING.USE_COLORBLIND_MODE
  self.checkboxMapping[self.checkUseMiles] = g_settingsModel.SETTING.USE_MILES
  self.checkboxMapping[self.checkUseFahrenheit] = g_settingsModel.SETTING.USE_FAHRENHEIT
  self.checkboxMapping[self.checkUseAcre] = g_settingsModel.SETTING.USE_ACRE
  self.checkboxMapping[self.checkShowTriggerMarker] = g_settingsModel.SETTING.SHOW_TRIGGER_MARKER
  self.checkboxMapping[self.checkShowHelpTrigger] = g_settingsModel.SETTING.SHOW_HELP_TRIGGER
  self.checkboxMapping[self.checkShowFieldInfo] = g_settingsModel.SETTING.SHOW_FIELD_INFO
  self.checkboxMapping[self.checkIsRadioVehicleOnly] = g_settingsModel.SETTING.RADIO_VEHICLE_ONLY
  self.checkboxMapping[self.checkIsRadioActive] = g_settingsModel.SETTING.RADIO_IS_ACTIVE
  self.checkboxMapping[self.checkResetCamera] = g_settingsModel.SETTING.RESET_CAMERA
  self.checkboxMapping[self.checkActiveSuspensionCamera] = g_settingsModel.SETTING.ACTIVE_SUSPENSION_CAMERA
  self.checkboxMapping[self.checkCameraCheckCollision] = g_settingsModel.SETTING.CAMERA_CHECK_COLLISION
  self.checkboxMapping[self.checkUseWorldCamera] = g_settingsModel.SETTING.USE_WORLD_CAMERA
  self.checkboxMapping[self.checkInvertYLook] = g_settingsModel.SETTING.INVERT_Y_LOOK
  self.checkboxMapping[self.checkUseEasyArmControl] = g_settingsModel.SETTING.EASY_ARM_CONTROL
  self.checkboxMapping[self.checkIsTrainTabbable] = g_settingsModel.SETTING.IS_TRAIN_TABBABLE
  self.checkboxMapping[self.checkShowMultiplayerNames] = g_settingsModel.SETTING.SHOW_MULTIPLAYER_NAMES
  self.checkboxMapping[self.checkWoodHarvesterAutoCut] = g_settingsModel.SETTING.WOOD_HARVESTER_AUTO_CUT
  local v3 = v3:getDistanceUnitTexts()
  v1:setTexts(...)
  v3 = v3:getTemperatureUnitTexts()
  v1:setTexts(...)
  v3 = v3:getAreaUnitTexts()
  v1:setTexts(...)
  v3 = v3:getRadioModeTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiMoneyUnit] = g_settingsModel.SETTING.MONEY_UNIT
  self.optionMapping[self.multiCameraSensitivity] = g_settingsModel.SETTING.CAMERA_SENSITIVITY
  self.optionMapping[self.multiVehicleArmSensitivity] = g_settingsModel.SETTING.VEHICLE_ARM_SENSITIVITY
  self.optionMapping[self.multiSteeringBackSpeed] = g_settingsModel.SETTING.STEERING_BACK_SPEED
  self.optionMapping[self.multiSteeringSensitivity] = g_settingsModel.SETTING.STEERING_SENSITIVITY
  self.optionMapping[self.multiMasterVolume] = g_settingsModel.SETTING.VOLUME_MASTER
  self.optionMapping[self.multiVehicleVolume] = g_settingsModel.SETTING.VOLUME_VEHICLE
  self.optionMapping[self.multiEnvironmentVolume] = g_settingsModel.SETTING.VOLUME_ENVIRONMENT
  self.optionMapping[self.multiRadioVolume] = g_settingsModel.SETTING.VOLUME_RADIO
  self.optionMapping[self.multiVolumeGUI] = g_settingsModel.SETTING.VOLUME_GUI
  self.optionMapping[self.multiInputHelpMode] = g_settingsModel.SETTING.INPUT_HELP_MODE
  self.optionMapping[self.multiDirectionChangeMode] = g_settingsModel.SETTING.DIRECTION_CHANGE_MODE
  self.optionMapping[self.multiGearShiftMode] = g_settingsModel.SETTING.GEAR_SHIFT_MODE
  self.optionMapping[self.multiHudSpeedGauge] = g_settingsModel.SETTING.HUD_SPEED_GAUGE
  self.optionMapping[self.multiVolumeVoice] = g_settingsModel.SETTING.VOLUME_VOICE
  self.optionMapping[self.multiVolumeVoiceInput] = g_settingsModel.SETTING.VOLUME_VOICE_INPUT
  self.optionMapping[self.multiVoiceMode] = g_settingsModel.SETTING.VOICE_MODE
  self.optionMapping[self.multiVoiceInputSensitivity] = g_settingsModel.SETTING.VOICE_INPUT_SENSITIVITY
  self.optionMapping[self.multiRealBeaconLightBrightness] = g_settingsModel.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS
  v3 = v3:getMoneyUnitTexts()
  v1:setTexts(...)
  v3 = v3:getCameraSensitivityTexts()
  v1:setTexts(...)
  v3 = v3:getVehicleArmSensitivityTexts()
  v1:setTexts(...)
  v3 = v3:getSteeringBackSpeedTexts()
  v1:setTexts(...)
  v3 = v3:getSteeringSensitivityTexts()
  v1:setTexts(...)
  v3 = v3:getAudioVolumeTexts()
  v1:setTexts(...)
  v3 = v3:getAudioVolumeTexts()
  v1:setTexts(...)
  v3 = v3:getAudioVolumeTexts()
  v1:setTexts(...)
  v3 = v3:getAudioVolumeTexts()
  v1:setTexts(...)
  v3 = v3:getAudioVolumeTexts()
  v1:setTexts(...)
  v3 = v3:getAudioVolumeTexts()
  v1:setTexts(...)
  v3 = v3:getRecordingVolumeTexts()
  v1:setTexts(...)
  v3 = v3:getVoiceModeTexts()
  v1:setTexts(...)
  v3 = v3:getVoiceInputSensitivityTexts()
  v1:setTexts(...)
  v3 = v3:getInputHelpModeTexts()
  v1:setTexts(...)
  v3 = v3:getDirectionChangeModeTexts()
  v1:setTexts(...)
  v3 = v3:getGearShiftModeTexts()
  v1:setTexts(...)
  v3 = v3:getHudSpeedGaugeTexts()
  v1:setTexts(...)
  if GS_PLATFORM_PC then
    v3 = v3:getRealBeaconLightBrightnessTexts()
    v1:setTexts(...)
  end
  if GS_IS_CONSOLE_VERSION then
    v1:setVisible(false)
    v1:setVisible(false)
  end
  if GS_PLATFORM_TYPE == GS_PLATFORM_TYPE_GGP then
    v1:setVisible(false)
  end
end
function InGameMenuGeneralSettingsFrame:onFrameOpen(element)
  local v3 = v3:superClass()
  v3.onFrameOpen(self)
  self:updateGeneralSettings()
  if self.checkIsTrainTabbableBox ~= nil then
    v3:setVisible(not g_currentMission.missionDynamicInfo.isMultiplayer)
  else
    v3:setVisible(not g_currentMission.missionDynamicInfo.isMultiplayer)
  end
  if self.multiVolumeVoiceBox ~= nil then
    if v2 then
      local v6 = VoiceChatUtil.getIsVoiceRestricted()
    end
    v3:setVisible(v5)
  else
    if v2 then
      v6 = VoiceChatUtil.getIsVoiceRestricted()
    end
    v3:setVisible(v5)
  end
  if self.multiVoiceModeBox ~= nil then
    v3:setVisible(v2)
  else
    v3:setVisible(v2)
  end
  if self.multiVolumeVoiceInputBox ~= nil then
    if v2 then
      local v5 = VoiceChatUtil.getHasRecordingDevice()
      if v5 then
        v6 = VoiceChatUtil.getIsVoiceRestricted()
      end
    end
    v3:setVisible(v5)
  else
    if v2 then
      v5 = VoiceChatUtil.getHasRecordingDevice()
      if v5 then
        v6 = VoiceChatUtil.getIsVoiceRestricted()
      end
    end
    v3:setVisible(v5)
  end
  if self.checkShowMultiplayerNamesBox ~= nil then
    if v2 then
    end
    v3:setVisible(v5)
  else
    if v2 then
    end
    v3:setVisible(v5)
  end
  if self.multiRealBeaconLightBrightnessBox ~= nil then
    v6 = v6:getNumOfLights()
    if 0 >= v6 then
    end
    v3:setVisible(true)
  else
    v6 = v6:getNumOfLights()
    if 0 >= v6 then
    end
    v3:setVisible(true)
  end
  if self.multiVoiceInputSensitivityBox ~= nil then
    v3:setVisible(v2)
  else
    v3:setVisible(v2)
  end
  if self.checkCameraCheckCollisionBox ~= nil then
    v3:setVisible(g_modIsLoaded.FS22_disableVehicleCameraCollision)
  else
    v3:setVisible(g_modIsLoaded.FS22_disableVehicleCameraCollision)
  end
  v3:invalidateLayout()
  v3 = v3:getFocusedElement()
  if v3 == nil then
    self:setSoundSuppressed(true)
    v3:setFocus(self.boxLayout)
    self:setSoundSuppressed(false)
  end
end
function InGameMenuGeneralSettingsFrame.onFrameClose(v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
  v1:saveChanges(SettingsModel.SETTING_CLASS.SAVE_GAMEPLAY_SETTINGS)
end
function InGameMenuGeneralSettingsFrame:updateGeneralSettings()
  v1:refresh()
  for v4, v5 in pairs(self.checkboxMapping) do
    local v8 = v8:getValue(v5)
    v4:setIsChecked(...)
  end
  for v4, v5 in pairs(self.optionMapping) do
    v8 = v8:getValue(v5)
    v4:setState(...)
  end
end
function InGameMenuGeneralSettingsFrame:onClickCheckbox(state, checkboxElement)
  if self.checkboxMapping[checkboxElement] ~= nil then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v4:setValue(v6, true)
    v4:applyChanges(SettingsModel.SETTING_CLASS.SAVE_NONE)
    self.dirty = true
    return
  end
  local v7 = checkboxElement:toString()
  print("Warning: Invalid settings checkbox event or key configuration for element " .. v7)
end
function InGameMenuGeneralSettingsFrame:onClickMultiOption(state, optionElement)
  if optionElement == self.multiVoiceMode then
    local v3 = VoiceChatUtil.getIsVoiceRestricted()
    if v3 then
      VoiceChatUtil.showVoiceRestrictedPopup()
      optionElement:setState(VoiceChatUtil.MODE.DISABLED)
      return
    end
  end
  if self.optionMapping[optionElement] ~= nil then
    v4:setValue(self.optionMapping[optionElement], state)
    v4:applyChanges(SettingsModel.SETTING_CLASS.SAVE_NONE)
    self.dirty = true
  else
    local v7 = optionElement:toString()
    print("Warning: Invalid settings multi option event or key configuration for element " .. v7)
  end
  if optionElement == self.multiRealBeaconLightBrightness then
    v4:updateBeaconLights()
  end
end
function InGameMenuGeneralSettingsFrame.onClickNativeHelp(v0)
  openNativeHelpMenu()
end
