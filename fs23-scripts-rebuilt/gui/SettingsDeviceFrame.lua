-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SettingsDeviceFrame = {}
local SettingsDeviceFrame_mt = Class(SettingsDeviceFrame, TabbedMenuFrameElement)
SettingsDeviceFrame.CONTROLS = {"titleElement", "settingsContainer", "layout", "sectionTemplate", "deadzoneTemplate", "sensitivityTemplate", "disclaimerLabel"}
function SettingsDeviceFrame.register()
  local v0 = SettingsDeviceFrame.new()
  v1:loadGui("dataS/gui/SettingsDeviceFrame.xml", "SettingsDeviceFrame", v0, true)
end
function SettingsDeviceFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(SettingsDeviceFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  v2.stateBars = {}
  return v2
end
function SettingsDeviceFrame:createFromExistingGui(v1)
  local v2 = SettingsDeviceFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  v2.hasCustomMenuButtons = self.hasCustomMenuButtons
  return v2
end
function SettingsDeviceFrame:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.hasCustomMenuButtons = src.hasCustomMenuButtons
end
function SettingsDeviceFrame:initialize()
  v1:unlinkElement()
  v1:removeElement(self.sectionTemplate)
  v1:unlinkElement()
  v1:removeElement(self.deadzoneTemplate)
  v1:unlinkElement()
  v1:removeElement(self.sensitivityTemplate)
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText(SettingsDeviceFrame.L10N_SYMBOL.SWITCH_DEVICE)
  self.switchButtonInfo = {inputAction = InputAction.MENU_EXTRA_1, text = v2, callback = function()
    self:onSwitchDevice()
  end}
  v2 = v2:getText(SettingsDeviceFrame.L10N_SYMBOL.BUTTON_APPLY)
  self.applyButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onApplySettings()
  end}
  self:updateController()
end
function SettingsDeviceFrame:delete()
  if self.sectionTemplate ~= nil then
    v1:delete()
  end
  if self.deadzoneTemplate ~= nil then
    v1:delete()
  end
  if self.sensitivityTemplate ~= nil then
    v1:delete()
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function SettingsDeviceFrame:onFrameOpen()
  v1:initDeviceSettings()
  v1:refresh()
  self:updateView()
  v1:setVisible(GS_PLATFORM_GGP)
end
function SettingsDeviceFrame:getMenuButtonInfo()
  local v2 = v2:hasChanges()
  if v2 then
    table.insert({}, self.applyButtonInfo)
  end
  table.insert(v1, self.backButtonInfo)
  v2 = v2:getNumDevices()
  if 1 < v2 then
    table.insert(v1, self.switchButtonInfo)
  end
  return v1
end
function SettingsDeviceFrame.onApplySettings(v0)
  v1:saveChanges(SettingsModel.SETTING_CLASS.SAVE_ALL)
  local v2 = v2:getText(SettingsDeviceFrame.L10N_SYMBOL.SAVING_FINISHED)
  InfoDialog.show(v2, nil, nil, DialogElement.TYPE_INFO)
end
function SettingsDeviceFrame:onSwitchDevice()
  v1:nextDevice()
  self:updateView()
end
function SettingsDeviceFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = getNumOfGamepads()
  if v2 ~= self.numOfGamepads then
    self:updateController()
  end
  self:updateGamepadInputStates()
end
function SettingsDeviceFrame:updateGamepadInputStates()
  for v4, v5 in pairs(self.stateBars) do
    local v8 = v8:getCurrentDeviceDeadzoneValue(v5.axisIndex)
    local v9 = v9:getCurrentDeviceSensitivityValue(v5.axisIndex)
    local v10 = v10:getGamepadAxisValue(g_settingsModel.deviceSettings[g_settingsModel.currentDevice].device.internalId, v5.axisIndex, "", 0, v8)
    local v11 = MathUtil.clamp(v10 * v9, -1, 1)
    local v18 = math.abs(v11)
    local v15 = math.max(v18 * v5.element.absSize[1] * 0.5, 2 / g_screenWidth)
    v5.element.elements[1]:setSize(...)
    if v11 < 0 then
      local v19 = math.abs(v11)
      v5.element.elements[1]:setPosition((1 - v19) * v5.element.absSize[1] * 0.5)
    else
      v5.element.elements[1]:setPosition(v5.element.absSize[1] * 0.5)
    end
    v13:updateAbsolutePosition()
  end
end
function SettingsDeviceFrame:updateController()
  local v1 = getNumOfGamepads()
  self.numOfGamepads = v1
  v1:initDeviceSettings()
  self:updateView()
  self:setMenuButtonInfoDirty()
end
function SettingsDeviceFrame:updateView()
  local v1 = v1:getCurrentDeviceName()
  if v1 == InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT then
    local v2 = v2:getText("ui_mouse")
  else
    v2 = v2:hasText(v1)
    if v2 then
      v2 = v2:getText(v1)
    end
  end
  local v6 = v6:getText("ui_deviceConfiguration")
  local v4 = string.format("%s: %s", v6, v1)
  v2:setText(...)
  function addSectionHeader(self, axis)
    local v2 = v2:clone(u0.layout)
    v2:reloadFocusHandling(true)
    local v3 = v2:getDescendantByName("title")
    v3:setText(self)
    v3 = v2:getDescendantByName("box")
    if axis == nil then
    end
    v3:setVisible(true)
    if axis ~= nil then
      table.insert(u0.stateBars, {element = v3, axisIndex = axis})
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 59, target 69)
  v6:delete()
  -- TODO: structure LOP_FORNLOOP (pc 68, target 60)
  self.stateBars = {}
  local v3 = v3:getIsDeviceMouse()
  if v3 then
    local v5 = v5:getText("ui_mouse")
    addSectionHeader(...)
    v4 = v4:clone(self.layout)
    v4:reloadFocusHandling(true)
    local v7 = v7:getSensitivityTexts()
    v4:setTexts(...)
    v7 = v7:getMouseSensitivityValue()
    v4:setState(...)
    v4.onClickCallback = function(self, v1)
      v2:setMouseSensitivity(v1)
      v2:setMenuButtonInfoDirty()
    end
    if nil == nil then
    end
  end
  v4 = v4:getValue("isHeadTrackingEnabled")
  if v4 then
    v4 = isHeadTrackingAvailable()
  end
  v5 = getIsKeyboardAvailable()
  if v4 and not v3 then
  end
  if v6 then
    local v8 = v8:getText("setting_headTracking")
    addSectionHeader(...)
    v7 = v7:clone(self.layout)
    v7:reloadFocusHandling(true)
    local v10 = v10:getHeadTrackingSensitivityTexts()
    v7:setTexts(...)
    v10 = v10:getHeadTrackingSensitivityValue()
    v7:setState(...)
    v7.onClickCallback = function(self, v1)
      v2:setHeadTrackingSensitivity(v1)
      v2:setMenuButtonInfoDirty()
    end
    if v2 == nil then
    end
  end
  if not v3 then
    -- TODO: structure LOP_FORNPREP (pc 199, target 316)
    local v12 = v12:getDeviceHasAxisDeadzone(0)
    local v13 = v13:getDeviceHasAxisSensitivity(0)
    if not v12 then
      -- if not v13 then goto L315 end
    end
    local v14 = getGamepadAxisLabel(v11, v8)
    local v16 = v16:getText("setting_gamepadAxis")
    local v15 = string.format(v16, v11 + 1)
    if v14 ~= "" then
    end
    addSectionHeader(v15, v11)
    if v12 then
      v16 = v16:clone(self.layout)
      v16:reloadFocusHandling(true)
      local v19 = v19:getDeadzoneTexts()
      v16:setTexts(...)
      v19 = v19:getDeviceAxisDeadzoneValue(v11)
      v16:setState(...)
      v16.onClickCallback = function(self, v1)
        v2:setDeviceDeadzoneValue(u0, v1)
        v2:setMenuButtonInfoDirty()
      end
      if v2 == nil then
      end
    end
    if v13 then
      v16 = v16:clone(self.layout)
      v16:reloadFocusHandling(true)
      v19 = v19:getSensitivityTexts()
      v16:setTexts(...)
      v19 = v19:getDeviceAxisSensitivityValue(v11)
      v16:setState(...)
      v16.onClickCallback = function(self, v1)
        v2:setDeviceSensitivityValue(u0, v1)
        v2:setMenuButtonInfoDirty()
      end
      if v2 == nil then
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 315, target 200)
  end
  v7:scrollTo(0, true)
  v7:invalidateLayout()
  if v2 ~= nil then
    v7:scrollToMakeElementVisible(v2)
    v7:setFocus(v2)
    v2.forceFocusScrollToTop = true
  end
end
SettingsDeviceFrame.L10N_SYMBOL = {BUTTON_APPLY = "button_apply", SWITCH_DEVICE = "ui_switchDevice", SAVING_FINISHED = "ui_savingFinished"}
