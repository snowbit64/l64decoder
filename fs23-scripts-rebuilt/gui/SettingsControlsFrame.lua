-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SettingsControlsFrame = {}
local SettingsControlsFrame_mt = Class(SettingsControlsFrame, TabbedMenuFrameElement)
SettingsControlsFrame.CONTROLS = {KEYBOARD_HIDDEN_BUTTON = "keyboardHiddenButton", KEYBOARD_HEADER_TEXT = "keyboardHeaderText", GAMEPAD_HIDDEN_BUTTON = "gamepadHiddenButton", GAMEPAD_HEADER_TEXT = "gamepadHeaderText", PAGING = "pagingElement", KB_MOUSE_PAGE = "keyboardMousePage", KB_MOUSE_TABLE = "keyboardMouseTable", GAMEPAD_PAGE = "gamepadPage", GAMEPAD_TABLE = "gamepadTable", CONTROLS_MESSAGE = "controlsMessage", CONTROLS_MESSAGE_WARNING_ICON = "controlsMessageWarningIcon", DISCLAIMER = "disclaimerLabel"}
function SettingsControlsFrame.register()
  local v0 = SettingsControlsFrame.new()
  v1:loadGui("dataS/gui/SettingsControlsFrame.xml", "SettingsControlsFrame", v0, true)
end
function SettingsControlsFrame.new(subclass_mt, l10n)
  if not l10n then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(SettingsControlsFrame.CONTROLS)
  v2.controlsController = nil
  v2.deviceCategoryDataBindings = {}
  v2.deviceCategoryTables = {}
  v2.controlsPageMappingTables = {}
  v2.activeControlsTable = v2.keyboardMouseTable
  v2.previousSelectedCell = nil
  v2.previousFirstRowIndex = 1
  v2.userChangedInput = false
  v2.hasCustomMenuButtons = true
  v2.backButtonInfo = {}
  v2.saveButtonInfo = {}
  v2.resetButtonInfo = {}
  v2.switchButtonInfo = {}
  v2.dataForList = {}
  v2.keyboardData = {}
  v2.gamepadData = {}
  return v2
end
function SettingsControlsFrame:createFromExistingGui(v1)
  local v2 = SettingsControlsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function SettingsControlsFrame:initialize(controlsController, inGame)
  self.controlsController = controlsController
  v5:setMessageCallback(function(self, controlsController, inGame)
    v3:setControlsMessage(self, controlsController, inGame)
  end)
  v5:setInputDoneCallback(function(self)
    controlsController:notifyInputGatheringFinished(self)
  end)
  self:setupControlsView()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v9 = v9:getText(SettingsControlsFrame.L10N_SYMBOL.BUTTON_SAVE)
  self.saveButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v9, callback = function()
    self:saveChanges()
  end, showWhenPaused = true}
  v9 = v9:getText(SettingsControlsFrame.L10N_SYMBOL.BUTTON_DEFAULTS)
  self.resetButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v9, callback = function()
    self:onClickDefaults()
  end, showWhenPaused = true}
  v9 = v9:getText(SettingsControlsFrame.L10N_SYMBOL.BUTTON_GAMEPAD)
  self.switchButtonInfo = {inputAction = InputAction.MENU_EXTRA_1, text = v9, callback = function()
    self:switchDevice()
  end, clickSound = GuiSoundPlayer.SOUND_SAMPLES.NONE, showWhenPaused = true}
end
function SettingsControlsFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  function self.gamepadTable.shouldFocusChange(...)
    local self = u0(...)
    local v1 = getIsKeyboardAvailable()
    if not v1 then
      return false
    end
    return self
  end
  v2:setDataSource(self)
  v2:setDataSource(self)
end
function SettingsControlsFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:updateDisplay()
  local v1 = getIsKeyboardAvailable()
  local v3 = getNumOfGamepads()
  if 0 >= v3 then
  end
  if v1 then
    self:setDevicePage(true)
  elseif true then
    self:setDevicePage(false)
  end
  v3:setText("")
  v3:setVisible(false)
  self:updateHeader()
  self:updateMenuButtons()
  v3:setVisible(GS_PLATFORM_GGP)
  v3:subscribe(MessageType.INPUT_MODE_CHANGED, self.onControllerChanged, self)
end
function SettingsControlsFrame:requestClose(callback)
  if self.userChangedInput then
    local v4 = v4:superClass()
    v4.requestClose(self, callback)
    local v6 = v6:getText(SettingsControlsFrame.L10N_SYMBOL.SAVE_CHANGES_PROMPT)
    YesNoDialog.show(...)
  end
  return v2
end
function SettingsControlsFrame.onFrameClose(v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
  v1:unsubscribe(MessageType.INPUT_MODE_CHANGED, v0)
end
function SettingsControlsFrame:onYesNoSaveControls(yes)
  if yes then
    self:saveChanges()
    return
  end
  self:revertChanges()
  self.requestCloseCallback()
  self.requestCloseCallback = u0
end
function SettingsControlsFrame:revertChanges()
  v1:discardChanges()
  self.userChangedInput = false
  self:updateMenuButtons()
end
function SettingsControlsFrame:saveChanges()
  if self.userChangedInput then
    v1:saveChanges()
    self.userChangedInput = false
    self:updateMenuButtons()
    local v2 = v2:getText(SettingsControlsFrame.L10N_SYMBOL.SAVED_CHANGES_INFO)
    InfoDialog.show(v2, self.requestCloseCallback)
    self.requestCloseCallback = u0
  end
end
function SettingsControlsFrame:updateMenuButtons()
  if self.userChangedInput then
    self.gamepadPresentMenuButtonInfo = {self.backButtonInfo, self.saveButtonInfo, self.resetButtonInfo, self.switchButtonInfo}
    self.keyboardOnlyMenuButtonInfo = {self.backButtonInfo, self.saveButtonInfo, self.resetButtonInfo}
  else
    self.gamepadPresentMenuButtonInfo = {self.backButtonInfo, self.resetButtonInfo, self.switchButtonInfo}
    self.keyboardOnlyMenuButtonInfo = {self.backButtonInfo, self.resetButtonInfo}
  end
  local v1 = getNumOfGamepads()
  if 0 < v1 then
    v1 = getIsKeyboardAvailable()
    -- if not v1 then goto L67 end
    self.menuButtonInfo = self.gamepadPresentMenuButtonInfo
  else
    self.menuButtonInfo = self.keyboardOnlyMenuButtonInfo
  end
  self:setMenuButtonInfoDirty()
end
function SettingsControlsFrame:updateHeader()
  local v2 = getNumOfGamepads()
  if 0 >= v2 then
  end
  v2 = getIsKeyboardAvailable()
  v3:setVisible(true)
  v3:setVisible(v2)
  v3:setOverlayState(GuiOverlay.STATE_DISABLED)
  v3:setDisabled(true)
  v3:setOverlayState(GuiOverlay.STATE_DISABLED)
  v3:setDisabled(true)
  if v2 then
    v3:setOverlayState(GuiOverlay.STATE_NORMAL)
    v3:setDisabled(false)
    return
  end
  if v1 then
    v3:setOverlayState(GuiOverlay.STATE_NORMAL)
    v3:setDisabled(false)
  end
end
function SettingsControlsFrame:setDevicePage(toKeyboard)
  if toKeyboard then
  else
  end
  v3:setPage(v2)
  if toKeyboard then
    -- if v0.keyboardMouseTable then goto L16 end
  end
  self.activeControlsTable = self.gamepadTable
  if toKeyboard then
    -- if GuiOverlay.STATE_NORMAL then goto L24 end
  end
  if toKeyboard then
    -- if GuiOverlay.STATE_DISABLED then goto L30 end
  end
  v5:setOverlayState(v3)
  v5:setDisabled(not toKeyboard)
  v5:setOverlayState(GuiOverlay.STATE_NORMAL)
  v5:setDisabled(toKeyboard)
  if not toKeyboard then
  end
  local v6 = v6:getText(v5)
  self.switchButtonInfo.text = v6
  self.requestButtonUpdateCallback(v6)
  self:setSoundSuppressed(true)
  v7:setFocus(self.activeControlsTable)
  self:setSoundSuppressed(false)
end
function SettingsControlsFrame:switchDevice()
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.PAGING)
  local v2 = getNumOfGamepads()
  if 0 >= v2 then
  end
  v2 = getIsKeyboardAvailable()
  if self.activeControlsTable ~= self.keyboardMouseTable then
  end
  if not not v1 and v2 then
  end
  self:setDevicePage(v4)
end
function SettingsControlsFrame:setupControlsView()
  local v1 = v1:getPageIdByElement(self.keyboardMousePage)
  local hasKeyboard = getIsKeyboardAvailable()
  if hasKeyboard then
    self.deviceCategoryTables[InputDevice.CATEGORY.KEYBOARD_MOUSE] = self.keyboardMouseTable
    self:bindControls(SettingsControlsFrame.KB_MOUSE_BOUND_CONTROLS, InputDevice.CATEGORY.KEYBOARD_MOUSE)
  else
    self.deviceCategoryTables[InputDevice.CATEGORY.KEYBOARD_MOUSE] = nil
    self.deviceCategoryDataBindings[InputDevice.CATEGORY.KEYBOARD_MOUSE] = nil
  end
  v3:setPageIdDisabled(v1, not hasKeyboard)
  local v3 = v3:getPageIdByElement(self.gamepadPage)
  local v5 = getNumOfGamepads()
  if 0 >= v5 then
  end
  if true then
    self:bindControls(SettingsControlsFrame.GAMEPAD_BOUND_CONTROLS, InputDevice.CATEGORY.GAMEPAD)
    self.deviceCategoryTables[InputDevice.CATEGORY.GAMEPAD] = self.gamepadTable
  else
    self.deviceCategoryTables[InputDevice.CATEGORY.GAMEPAD] = nil
    self.deviceCategoryDataBindings[InputDevice.CATEGORY.GAMEPAD] = nil
  end
  v5:setPageIdDisabled(v3, not v4)
end
function SettingsControlsFrame:assignDeviceTableData()
  v1:loadBindings()
  local v1 = v1:getDeviceCategoryActionBindings(InputDevice.CATEGORY.KEYBOARD_MOUSE)
  self.keyboardData = v1
  v1 = v1:getDeviceCategoryActionBindings(InputDevice.CATEGORY.GAMEPAD)
  self.gamepadData = v1
  v1:reloadData()
  v1:reloadData()
end
function SettingsControlsFrame:setRequestButtonUpdateCallback(callback)
  if not callback then
  end
  self.requestButtonUpdateCallback = v2
end
function SettingsControlsFrame:setControlsMessage(messageId, additionalText, addLine)
  if messageId then
    -- if v1 ~= ControlsController.MESSAGE_CLEAR then goto L18 end
  end
  v4:setText("")
  v4:setVisible(false)
  return
  if addLine then
    local v7 = v7:getText()
  end
  if SettingsControlsFrame.CONTROLS_UI_STRINGS[messageId] then
    v7 = v7:getText(SettingsControlsFrame.CONTROLS_UI_STRINGS[messageId])
    -- if not v2 then goto L82 end
    -- if 0 >= #v2 then goto L82 end
  else
    local v6 = v6:getText(SettingsControlsFrame.L10N_TEMPLATE_SYMBOL[messageId])
    if additionalText then
      -- if 0 >= #v2 then goto L79 end
      local v10 = unpack(additionalText)
      local v8 = string.format(...)
    else
    end
  end
  v6:setText(v4)
  v6:setVisible(true)
end
function SettingsControlsFrame:notifyInputGatheringFinished(madeChange)
  self:setSoundSuppressed(true)
  v2:closeAllDialogs()
  v2:setGui(self.name)
  self:setSoundSuppressed(false)
  if madeChange then
    self:assignDeviceTableData()
    self.userChangedInput = true
    self:updateMenuButtons()
  end
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
  if self.previousSelectedCell ~= nil then
    v2:setFocus(self.activeControlsTable)
    v2:setHighlight(self.previousSelectedCell)
  end
end
function SettingsControlsFrame.showInputPrompt(v0, v1, v2, v3)
  if v1 == InputDevice.CATEGORY.KEYBOARD_MOUSE then
    if v2 ~= ControlsController.BINDING_PRIMARY then
      -- if v2 ~= ControlsController.BINDING_SECONDARY then goto L20 end
    end
    -- goto L33  (LOP_JUMP +13)
  else
  end
  local v5 = v5:getText(v4)
  local v6 = string.format(v5, v3.displayName)
  if not GS_PLATFORM_GGP then
    local v9 = v9:getText(SettingsControlsFrame.CONTROLS_UI_STRINGS[ControlsController.MESSAGE_PROMPT_CANCEL_DELETE])
    local v7 = v7:getText(SettingsControlsFrame.CONTROLS_UI_STRINGS[ControlsController.MESSAGE_ENSURE_IN_NEUTRAL])
    local v8 = v7:len()
    if 1 < v8 then
    end
  end
  MessageDialog.show(nil, nil, v6, DialogElement.TYPE_KEY)
end
SettingsControlsFrame.KB_MOUSE_BOUND_CONTROLS = {ACTION = "action", KEY_1 = "key1", KEY_2 = "key2", MOUSE_BUTTON = "mouseButton"}
SettingsControlsFrame.GAMEPAD_BOUND_CONTROLS = {ACTION = "gamepadAction", BUTTON_1 = "gamepadButton1", BUTTON_2 = "gamepadButton2"}
function SettingsControlsFrame:bindControls(bindings, deviceCategory)
  for v6, v7 in pairs(bindings) do
    if not self.deviceCategoryDataBindings[deviceCategory] then
      self.deviceCategoryDataBindings[deviceCategory] = {}
    end
    self.deviceCategoryDataBindings[deviceCategory][v6] = v7
  end
end
function SettingsControlsFrame:updateDisplay()
  self:setupControlsView()
  self:assignDeviceTableData()
end
function SettingsControlsFrame:getNumberOfSections(list)
  if list == self.keyboardMouseTable then
    return #self.keyboardData
  end
  return #self.gamepadData
end
function SettingsControlsFrame:getTitleForSectionHeader(list, section)
  if list == self.keyboardMouseTable then
  else
  end
  return v4:convertText(v3)
end
function SettingsControlsFrame:getNumberOfItemsInSection(list, section)
  if list == self.keyboardMouseTable then
    return #self.keyboardData[section]
  end
  return #self.gamepadData[section]
end
function SettingsControlsFrame:populateCellForItemInSection(list, section, index, cell)
  if list == self.keyboardMouseTable then
    local v6 = cell:getAttribute("action")
    v6:setText(self.keyboardData[section][index].displayName)
    v6 = cell:getAttribute("key1")
    v6:setText(self.keyboardData[section][index].columnTexts[ControlsController.BINDING_PRIMARY])
    v6 = cell:getAttribute("key2")
    v6:setText(self.keyboardData[section][index].columnTexts[ControlsController.BINDING_SECONDARY])
    v6 = cell:getAttribute("mouseButton")
    v6:setText(self.keyboardData[section][index].columnTexts[ControlsController.BINDING_TERTIARY])
    cell.actionBinding = self.keyboardData[section][index]
    return
  end
  v6 = cell:getAttribute("gamepadAction")
  v6:setText(self.gamepadData[section][index].displayName)
  v6 = cell:getAttribute("gamepadButton1")
  v6:setText(self.gamepadData[section][index].columnTexts[ControlsController.BINDING_PRIMARY])
  v6 = cell:getAttribute("gamepadButton2")
  v6:setText(self.gamepadData[section][index].columnTexts[ControlsController.BINDING_SECONDARY])
  cell.actionBinding = self.gamepadData[section][index]
end
function SettingsControlsFrame:inputEvent(action, value, eventUsed)
  if action == InputAction.MENU_ACCEPT and self.activeControlsTable == self.gamepadTable then
    local v4 = v4:getSelectedElement()
    self:onInputClicked(InputDevice.CATEGORY.GAMEPAD, ControlsController.BINDING_PRIMARY, v4.actionBinding, self.activeControlsTable)
    return true
  end
end
function SettingsControlsFrame:onInputClicked(deviceCategory, bindingId, actionData, element)
  self.previousFirstRowIndex = self.activeControlsTable.firstVisibleItem
  self.previousSelectedCell = element
  local v5 = v5:onClickInput(deviceCategory, bindingId, actionData)
  if v5 then
    self:showInputPrompt(deviceCategory, bindingId, actionData)
  end
end
function SettingsControlsFrame:onClickKey1(element)
  self:onInputClicked(InputDevice.CATEGORY.KEYBOARD_MOUSE, ControlsController.BINDING_PRIMARY, element.parent.actionBinding, element)
end
function SettingsControlsFrame:onClickKey2(element)
  self:onInputClicked(InputDevice.CATEGORY.KEYBOARD_MOUSE, ControlsController.BINDING_SECONDARY, element.parent.actionBinding, element)
end
function SettingsControlsFrame:onClickMouse(element)
  self:onInputClicked(InputDevice.CATEGORY.KEYBOARD_MOUSE, ControlsController.BINDING_TERTIARY, element.parent.actionBinding, element)
end
function SettingsControlsFrame:onClickGamepadButton1(element)
  self:onInputClicked(InputDevice.CATEGORY.GAMEPAD, ControlsController.BINDING_PRIMARY, element.parent.actionBinding, element)
end
function SettingsControlsFrame:onClickGamepadButton2(element)
  self:onInputClicked(InputDevice.CATEGORY.GAMEPAD, ControlsController.BINDING_SECONDARY, element.parent.actionBinding, element)
end
function SettingsControlsFrame.onClickDefaults(v0)
  local v5 = v5:getText(SettingsControlsFrame.L10N_SYMBOL.LOAD_DEFAULTS)
  local v6 = v6:getText(SettingsControlsFrame.L10N_SYMBOL.BUTTON_RESET)
  YesNoDialog.show(...)
end
function SettingsControlsFrame:onClickKeyboardHeader()
  self:setDevicePage(true)
end
function SettingsControlsFrame:onClickGamepadHeader()
  self:setDevicePage(false)
end
function SettingsControlsFrame:onControllerChanged()
  self:assignDeviceTableData()
end
{}[ControlsController.MESSAGE_CANNOT_MAP_KEY] = "ui_cannotMapKeyHere"
{}[ControlsController.MESSAGE_CANNOT_MAP_MOUSE] = "ui_cannotMapMouseHere"
{}[ControlsController.MESSAGE_CANNOT_MAP_CONTROLLER] = "ui_cannotMapGamepadHere"
{}[ControlsController.MESSAGE_PROMPT_KEY] = "ui_pressKeyToMap"
{}[ControlsController.MESSAGE_PROMPT_MOUSE] = "ui_pressMouseButtonToMap"
{}[ControlsController.MESSAGE_PROMPT_CONTROLLER] = "ui_pressGamepadButtonToMap"
{}[ControlsController.MESSAGE_PROMPT_CANCEL_DELETE] = "ui_pressESCToCancel"
{}[ControlsController.MESSAGE_ENSURE_IN_NEUTRAL] = "ui_ensureAxisToMapInNeutral"
{}[ControlsController.MESSAGE_SELECT_ACTION] = "ui_selectActionToRemap"
{}[ControlsController.MESSAGE_CONFLICT_KEY] = "ui_keyAlreadyMapped"
{}[ControlsController.MESSAGE_CONFLICT_MOUSE] = "ui_buttonAlreadyMapped"
{}[ControlsController.MESSAGE_CONFLICT_BUTTON] = "ui_buttonAlreadyMapped"
{}[ControlsController.MESSAGE_CONFLICT_AXIS] = "ui_axisAlreadyMapped"
{}[ControlsController.MESSAGE_CONFLICT_BLOCKED_KEY] = "ui_blockedKeyCombination"
SettingsControlsFrame.CONTROLS_UI_STRINGS = {}
{}[ControlsController.MESSAGE_REMAPPED] = "ui_actionRemapped"
SettingsControlsFrame.L10N_TEMPLATE_SYMBOL = {}
SettingsControlsFrame.L10N_SYMBOL = {BUTTON_SAVE = "button_saveControls", BUTTON_DEFAULTS = "button_defaults", BUTTON_KEYBOARD = "ui_keyboard", BUTTON_GAMEPAD = "ui_gamepad", SAVE_CHANGES_PROMPT = "ui_saveChanges", SAVED_CHANGES_INFO = "ui_savingFinished", LOAD_DEFAULTS = "ui_loadDefaultSettings", DEFAULTS_LOADED = "ui_loadedDefaultSettings", KEY_PROMPT = "ui_pressKeyToMap", MOUSE_PROMPT = "ui_pressMouseButtonToMap", BUTTON_PROMPT = "ui_pressGamepadButtonToMap", BUTTON_RESET = "button_reset"}
