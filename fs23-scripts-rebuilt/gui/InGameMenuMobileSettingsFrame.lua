-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuMobileSettingsFrame = {}
local InGameMenuMobileSettingsFrame_mt = Class(InGameMenuMobileSettingsFrame, TabbedMenuFrameElement)
InGameMenuMobileSettingsFrame.CONTROLS = {"checkGyroscope", "checkTilt", "checkTraffic", "checkUseMiles", "checkUseFahrenheit", "checkUseAcre", "checkColorBlindMode", "checkIntroductionHelp", "multiTimeScale", "multiMoneyUnit", "multiVolumeMusic", "multiVolumeVehicle", "multiVolumeEnvironment", "multiVolumeGUI", "multiCameraSensitivity", "multiSteeringBackSpeed", "multiSteeringSensitivity", "multiGraphics", "multiFrameLimit", "separatorGraphics", "multiUIScale", "checkShowTriggerMarker", "checkShowHelpTrigger", "checkResetCamera", "checkCameraCheckCollision", "checkUseWorldCamera", "checkInvertYLook", "checkHelperRefillFuel", "checkHelperRefillSeed", "checkHelperRefillFertilizer", "checkHelperRefillSlurry", "checkHelperRefillManure", "iapRestoreSeparator", "iapRestoreButton", "iapRestoreSeparatorEnd", SETTINGS_CONTAINER = "settingsContainer", BOX_LAYOUT = "boxLayout"}
function InGameMenuMobileSettingsFrame.register()
  if Platform.isMobile then
    local v0 = InGameMenuMobileSettingsFrame.new()
    v1:loadGui("dataS/gui/InGameMenuMobileSettingsFrame.xml", "MobileSettingsFrame", v0, true)
  end
end
function InGameMenuMobileSettingsFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuMobileSettingsFrame.CONTROLS)
  v2.missionInfo = nil
  v2.hasMasterRights = false
  v2.checkboxMapping = {}
  v2.checkboxMappingGame = {}
  v2.optionMapping = {}
  v2.manureLoadingStations = {}
  v2.liquidManureLoadingStations = {}
  v2.instantApplySettings = {[GameSettings.SETTING.VOLUME_MASTER] = true, [GameSettings.SETTING.VOLUME_MUSIC] = true, [GameSettings.SETTING.VOLUME_GUI] = true}
  v2.hasCustomMenuButtons = false
  return v2
end
function InGameMenuMobileSettingsFrame:createFromExistingGui(v1)
  local v2 = InGameMenuMobileSettingsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuMobileSettingsFrame:initialize()
  self.checkboxMapping[self.checkGyroscope] = SettingsModel.SETTING.GYROSCOPE_STEERING
  self.checkboxMapping[self.checkTilt] = SettingsModel.SETTING.CAMERA_TILTING
  self.checkboxMapping[self.checkUseMiles] = g_settingsModel.SETTING.USE_MILES
  self.checkboxMapping[self.checkUseFahrenheit] = g_settingsModel.SETTING.USE_FAHRENHEIT
  self.checkboxMapping[self.checkUseAcre] = g_settingsModel.SETTING.USE_ACRE
  self.checkboxMapping[self.checkColorBlindMode] = g_settingsModel.SETTING.USE_COLORBLIND_MODE
  self.checkboxMapping[self.checkShowTriggerMarker] = g_settingsModel.SETTING.SHOW_TRIGGER_MARKER
  self.checkboxMapping[self.checkShowHelpTrigger] = g_settingsModel.SETTING.SHOW_HELP_TRIGGER
  self.checkboxMapping[self.checkResetCamera] = g_settingsModel.SETTING.RESET_CAMERA
  self.checkboxMapping[self.checkCameraCheckCollision] = g_settingsModel.SETTING.CAMERA_CHECK_COLLISION
  self.checkboxMapping[self.checkUseWorldCamera] = g_settingsModel.SETTING.USE_WORLD_CAMERA
  self.checkboxMapping[self.checkInvertYLook] = g_settingsModel.SETTING.INVERT_Y_LOOK
  local v3 = v3:getDistanceUnitTexts()
  v1:setTexts(...)
  v3 = v3:getTemperatureUnitTexts()
  v1:setTexts(...)
  v3 = v3:getAreaUnitTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiMoneyUnit] = SettingsModel.SETTING.MONEY_UNIT
  v3 = v3:getMoneyUnitTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiVolumeMusic] = SettingsModel.SETTING.VOLUME_MUSIC
  v3 = v3:getAudioVolumeTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiVolumeVehicle] = SettingsModel.SETTING.VOLUME_VEHICLE
  v3 = v3:getAudioVolumeTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiVolumeEnvironment] = SettingsModel.SETTING.VOLUME_ENVIRONMENT
  v3 = v3:getAudioVolumeTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiVolumeGUI] = SettingsModel.SETTING.VOLUME_GUI
  v3 = v3:getAudioVolumeTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiCameraSensitivity] = g_settingsModel.SETTING.CAMERA_SENSITIVITY
  v3 = v3:getCameraSensitivityTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiSteeringBackSpeed] = g_settingsModel.SETTING.STEERING_BACK_SPEED
  v3 = v3:getSteeringBackSpeedTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiUIScale] = g_settingsModel.SETTING.UI_SCALE
  v3 = v3:getUiScaleTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiSteeringSensitivity] = g_settingsModel.SETTING.STEERING_SENSITIVITY
  v3 = v3:getSteeringSensitivityTexts()
  v1:setTexts(...)
  self.optionMapping[self.multiGraphics] = SettingsModel.SETTING.PERFORMANCE_CLASS
  v3 = v3:getPerformanceClassTexts()
  v1:setTexts(...)
  v1:setVisible(GS_PLATFORM_PHONE)
  self.optionMapping[self.multiFrameLimit] = SettingsModel.SETTING.FRAME_LIMIT
  v3 = v3:getFrameLimitTexts()
  v1:setTexts(...)
  if 1 >= #Platform.frameLimits then
  end
  v1:setVisible(true)
  if not self.multiGraphics.parent.visible then
  end
  v1:setVisible(v3)
end
function InGameMenuMobileSettingsFrame:setMissionInfo(missionInfo)
  self.missionInfo = missionInfo
end
function InGameMenuMobileSettingsFrame:setHasMasterRights(hasMasterRights)
  self.hasMasterRights = hasMasterRights
end
function InGameMenuMobileSettingsFrame:onFrameOpen(element)
  local v3 = v3:superClass()
  v3.onFrameOpen(self)
  self:assignDynamicTexts()
  self:updateGeneralSettings()
  self:updateGameSettings()
  local v2 = v2:getHasPurchasesToRestore()
  v3:setVisible(v2)
  v3:setVisible(v2)
  v3:setVisible(v2)
  v3 = v3:getFocusedElement()
  if v3 == nil then
    self:setSoundSuppressed(true)
    v3:setFocus(self.multiTimeScale)
    self:setSoundSuppressed(false)
  end
  v3:invalidateLayout()
end
function InGameMenuMobileSettingsFrame.onFrameClose(v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
  local v1 = v1:hasChanges()
  if v1 then
    v1 = v1:getHasValueChanged(SettingsModel.SETTING.PERFORMANCE_CLASS)
    if v1 then
      v1:applyChanges(SettingsModel.SETTING_CLASS.SAVE_ALL)
      return
    end
    v1:applyChanges(SettingsModel.SETTING_CLASS.SAVE_GAMEPLAY_SETTINGS)
  end
end
function InGameMenuMobileSettingsFrame:updateGeneralSettings()
  v1:refresh()
  for v4, v5 in pairs(self.checkboxMapping) do
    local v8 = v8:getValue(v5)
    v4:setIsChecked(...)
  end
  for v4, v5 in pairs(self.optionMapping) do
    local v6 = type(v5)
    if v6 == "table" then
      v8 = v8:getValue(v5[1])
      v4:setState(...)
    else
      v8 = v8:getValue(v5)
      v4:setState(...)
    end
  end
end
function InGameMenuMobileSettingsFrame:updateGameSettings()
  v1:setIsChecked(self.missionInfo.trafficEnabled)
  v1:setState(self.missionInfo.helperSlurrySource)
  v1:setState(self.missionInfo.helperManureSource)
  v1:setIsChecked(self.missionInfo.helperBuyFuel)
  v1:setIsChecked(self.missionInfo.helperBuySeeds)
  v1:setIsChecked(self.missionInfo.helperBuyFertilizer)
  v1:setIsChecked(self.missionInfo.introductionHelpActive)
  local v2 = Utils.getNumTimeScales()
  -- TODO: structure LOP_FORNPREP (pc 71, target 82)
  local v8 = Utils.getTimeScaleString(1)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 81, target 72)
  v3:setTexts({})
  local v5 = Utils.getTimeScaleIndex(self.missionInfo.timeScale)
  v3:setState(...)
end
function InGameMenuMobileSettingsFrame:assignDynamicTexts()
  local v2 = v2:getText("ui_off")
  local v3 = v3:getText("ui_buy")
  table.insert({}, {}[1])
  table.insert({}, {}[2])
  for v6, v7 in ipairs(self.manureLoadingStations) do
    local v8 = v8:canPlayerAccess(v7)
    if not v8 then
      continue
    end
    local v10 = v7:getName()
    table.insert(...)
  end
  v3:setTexts(v2)
  table.insert({}, v1[1])
  table.insert({}, v1[2])
  for v6, v7 in ipairs(self.liquidManureLoadingStations) do
    v8 = v8:canPlayerAccess(v7)
    if not v8 then
      continue
    end
    v10 = v10:getFarmId()
    v8 = v7:getIsFillAllowedToFarm(...)
    if not v8 then
      continue
    end
    v10 = v7:getName()
    table.insert(...)
  end
  v3:setTexts(v2)
end
function InGameMenuMobileSettingsFrame:setManureTriggers(v1, v2)
  self.manureLoadingStations = v1
  self.liquidManureLoadingStations = v2
end
function InGameMenuMobileSettingsFrame:onClickTraffic(state)
  if self.hasMasterRights then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setTrafficEnabled(true)
  end
end
function InGameMenuMobileSettingsFrame:onClickTimeScale(state)
  if self.hasMasterRights then
    local v4 = Utils.getTimeScaleFromIndex(state)
    v2:setTimeScale(...)
  end
end
function InGameMenuMobileSettingsFrame:onClickCheckbox(state, checkboxElement)
  if self.checkboxMapping[checkboxElement] ~= nil then
    if state ~= CheckedOptionElement.STATE_CHECKED then
    end
    v4:setValue(v6, true)
    return
  end
  local v7 = checkboxElement:toString()
  print("Warning: Invalid settings checkbox event or key configuration for element " .. v7)
end
function InGameMenuMobileSettingsFrame:onClickMultiOption(state, optionElement)
  if self.optionMapping[optionElement] ~= nil then
    local v4 = type(self.optionMapping[optionElement])
    if v4 == "table" then
      for v7, v8 in ipairs(self.optionMapping[optionElement]) do
        v9:setValue(v8, state)
      end
    else
      v4:setValue(self.optionMapping[optionElement], state)
    end
    -- if not v0.instantApplySettings[v3] then goto L53 end
    v4:applyChange(v3)
    return
  end
  v7 = optionElement:toString()
  print("Warning: Invalid settings multi option event or key configuration for element " .. v7)
end
function InGameMenuMobileSettingsFrame:onClickGraphics(v1, v2)
  if self.optionMapping[v2] ~= nil then
    v4:setValue(self.optionMapping[v2], v1)
    return
  end
  local v7 = v2:toString()
  print("Warning: Invalid settings multi option event or key configuration for element " .. v7)
end
function InGameMenuMobileSettingsFrame:onClickHelperRefillFuel(v1)
  if self.hasMasterRights then
    if v1 ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setHelperBuyFuel(true)
  end
end
function InGameMenuMobileSettingsFrame:onClickHelperRefillSeed(v1)
  if self.hasMasterRights then
    if v1 ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setHelperBuySeeds(true)
  end
end
function InGameMenuMobileSettingsFrame:onClickHelperRefillFertilizer(v1)
  if self.hasMasterRights then
    if v1 ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2:setHelperBuyFertilizer(true)
  end
end
function InGameMenuMobileSettingsFrame:onClickHelperRefillSlurry(v1)
  if self.hasMasterRights then
    v2:setHelperSlurrySource(v1)
  end
end
function InGameMenuMobileSettingsFrame:onClickHelperRefillManure(v1)
  if self.hasMasterRights then
    v2:setHelperManureSource(v1)
  end
end
function InGameMenuMobileSettingsFrame:onClickIntroductionHelp(v1)
  if self.hasMasterRights then
    if v1 ~= CheckedOptionElement.STATE_CHECKED then
    end
    v2.introductionHelpActive = true
  end
end
function InGameMenuMobileSettingsFrame.onClickRestoreInAppPurchases(v0, v1)
  v2:restorePurchases()
end
