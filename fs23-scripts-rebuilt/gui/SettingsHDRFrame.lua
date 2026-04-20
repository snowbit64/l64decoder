-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SettingsHDRFrame = {}
local SettingsHDRFrame_mt = Class(SettingsHDRFrame, TabbedMenuFrameElement)
SettingsHDRFrame.CONTROLS = {ELEMENT_BRIGHTNESS = "HDRPeakBrightnessElement", ELEMENT_IMAGE = "hdrImage", MAIN_CONTAINER = "settingsContainer"}
function SettingsHDRFrame.register()
  local v0 = SettingsHDRFrame.new()
  v1:loadGui("dataS/gui/SettingsHDRFrame.xml", "SettingsHDRFrame", v0, true)
end
function SettingsHDRFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(SettingsHDRFrame.CONTROLS)
  v2.lastHDRActive = false
  v2.hasCustomMenuButtons = true
  return v2
end
function SettingsHDRFrame:createFromExistingGui(v1)
  local v2 = SettingsHDRFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  v2.hasCustomMenuButtons = self.hasCustomMenuButtons
  return v2
end
function SettingsHDRFrame:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.hasCustomMenuButtons = src.hasCustomMenuButtons
end
function SettingsHDRFrame:initialize()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText(SettingsHDRFrame.L10N_SYMBOL.BUTTON_APPLY)
  self.applyButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onApplySettings()
  end}
end
function SettingsHDRFrame:onApplySettings()
  local v1 = v1:needsRestartToApplyChanges()
  if v1 then
  end
  v2:applyChanges(SettingsModel.SETTING_CLASS.SAVE_ALL)
  if v1 then
    v2:setStartScreen(RestartManager.START_SCREEN_SETTINGS_ADVANCED)
    doRestart(false, "")
    return
  end
  self:setMenuButtonInfoDirty()
end
function SettingsHDRFrame:getMenuButtonInfo()
  local v2 = v2:hasChanges()
  if v2 then
    table.insert({}, self.applyButtonInfo)
  end
  table.insert(v1, self.backButtonInfo)
  return v1
end
function SettingsHDRFrame:updateValues()
  local v3 = v3:getValue(SettingsModel.SETTING.HDR_PEAK_BRIGHTNESS)
  v1:setState(...)
  self:setMenuButtonInfoDirty()
end
function SettingsHDRFrame:update(dt)
  local v2 = getHdrAvailable()
  if v2 then
  end
  if self.lastHDRActive ~= v2 then
    v3:setDisabled(not v2)
    self.lastHDRActive = v2
  end
end
function SettingsHDRFrame:onFrameOpen()
  local v1 = getHdrAvailable()
  if v1 then
  end
  self.lastHDRActive = v1
  v1:loadI3DFileAsync("dataS/menu/hdrPlane/hdrPlane.i3d", true, true, SettingsHDRFrame.hdrPlaneLoaded, self, nil)
  self:updateValues()
end
function SettingsHDRFrame:hdrPlaneLoaded(i3dNode, failedReason, args)
  self.hdrPlaneNode = i3dNode
  local v5 = getRootNode()
  link(v5, self.hdrPlaneNode)
  local cameraId = getChild(self.hdrPlaneNode, "hdrPlaneCamera")
  setTranslation(cameraId, (-(self.hdrImage.size[1] / 2 + self.hdrImage.absPosition[1]) + 0.5) * g_screenAspectRatio, 1, self.hdrImage.size[2] / 2 + self.hdrImage.absPosition[2] - 0.5)
  setCamera(cameraId)
  setEnablePostFx(false)
end
function SettingsHDRFrame:onFrameClose()
  delete(self.hdrPlaneNode)
  setEnablePostFx(true)
  setCamera(0)
end
function SettingsHDRFrame:getMainElementSize()
  return self.settingsContainer.size
end
function SettingsHDRFrame:getMainElementPosition()
  return self.settingsContainer.absPosition
end
function SettingsHDRFrame.onCreateHDRPeakBrightness(v0, v1)
  local v2, v3, v4 = v2:getHDRPeakBrightnessTexts()
  v1:setTexts(v2)
end
function SettingsHDRFrame:onClickHDRPeakBrightness(state)
  v2:applyHDRPeakBrightness(state)
  self:updateValues()
  self:setMenuButtonInfoDirty()
end
SettingsHDRFrame.L10N_SYMBOL = {BUTTON_APPLY = "button_apply"}
