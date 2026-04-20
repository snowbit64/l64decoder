-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputBinding = {}
local InputBinding_mt = Class(InputBinding)
source("dataS/scripts/input/InputAction.lua")
source("dataS/scripts/input/InputDevice.lua")
source("dataS/scripts/input/Binding.lua")
source("dataS/scripts/input/InputEvent.lua")
InputBinding.version = 4
InputBinding.currentBindingVersion = 1
local v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getAppBasePath()
v6 = getUserProfileAppPath()
InputBinding.PATHS = {DEFAULT_BINDINGS_KB_MOUSE = v6 .. "profileTemplate/inputBindingDefault_KeyboardMouse.xml", DEFAULT_BINDINGS_KB_MOUSE_GGP = v6 .. "profileTemplate/inputBindingDefault_KeyboardMouse_GGP.xml", DEFAULT_BINDINGS_GAMEPAD = v6 .. "profileTemplate/inputBindingDefault_Gamepad.xml", DEFAULT_BINDINGS_JOYSTICK = v6 .. "profileTemplate/inputBindingDefault_Joystick.xml", DEFAULT_BINDINGS_WHEEL = v6 .. "profileTemplate/inputBindingDefault_Wheel.xml", DEFAULT_BINDINGS_WHEEL_AND_PANEL = v6 .. "profileTemplate/inputBindingDefault_WheelAndPanel.xml", DEFAULT_BINDINGS_PS4 = v6 .. "profileTemplate/inputBindingDefault_Gamepad.xml", DEFAULT_BINDINGS_XBOX = v6 .. "profileTemplate/inputBindingDefault_Gamepad.xml", DEFAULT_BINDINGS_IOS = v6 .. "profileTemplate/inputBindingDefault_Mobile.xml", DEFAULT_BINDINGS_ANDROID = v6 .. "profileTemplate/inputBindingDefault_Mobile.xml", DEFAULT_BINDINGS_SWITCH = v6 .. "profileTemplate/inputBindingDefault_Switch.xml", DEFAULT_BINDINGS_SAITEK_WHEEL_AND_PANEL = v6 .. "profileTemplate/inputBindingDefault_SaitekWheelAndPanel.xml", DEFAULT_BINDINGS_SAITEK_WHEEL = v6 .. "profileTemplate/inputBindingDefault_SaitekWheel.xml", DEFAULT_BINDINGS_SAITEK_PANEL = v6 .. "profileTemplate/inputBindingDefault_SaitekPanel.xml", ACTION_DEFINITIONS = v6 .. "dataS/inputActions.xml", USER_BINDINGS = v6 .. "inputBinding.xml"}
{}[InputDevice.CATEGORY.GAMEPAD] = InputBinding.PATHS.DEFAULT_BINDINGS_GAMEPAD
{}[InputDevice.CATEGORY.JOYSTICK] = InputBinding.PATHS.DEFAULT_BINDINGS_JOYSTICK
{}[InputDevice.CATEGORY.WHEEL] = InputBinding.PATHS.DEFAULT_BINDINGS_WHEEL
{}[InputDevice.CATEGORY.FARMWHEEL] = InputBinding.PATHS.DEFAULT_BINDINGS_SAITEK_WHEEL
{}[InputDevice.CATEGORY.FARMPANEL] = InputBinding.PATHS.DEFAULT_BINDINGS_SAITEK_PANEL
{}[InputDevice.CATEGORY.UNKNOWN] = InputBinding.PATHS.DEFAULT_BINDINGS_GAMEPAD
{}[InputDevice.CATEGORY.WHEEL_AND_PANEL] = InputBinding.PATHS.DEFAULT_BINDINGS_WHEEL_AND_PANEL
{}[InputDevice.CATEGORY.FARMWHEEL_AND_PANEL] = InputBinding.PATHS.DEFAULT_BINDINGS_SAITEK_WHEEL_AND_PANEL
InputBinding.DEVICE_CATEGORY_DEFAULTS_PATHS = {}
InputBinding.DEVICE_CATEGORY_DEFAULT_LOAD_ORDER = {InputDevice.CATEGORY.FARMWHEEL_AND_PANEL, InputDevice.CATEGORY.WHEEL_AND_PANEL, InputDevice.CATEGORY.FARMWHEEL, InputDevice.CATEGORY.WHEEL, InputDevice.CATEGORY.GAMEPAD, InputDevice.CATEGORY.JOYSTICK, InputDevice.CATEGORY.FARMPANEL}
InputBinding.INPUTTYPE_NONE = 0
InputBinding.INPUTTYPE_KEYBOARD = 1
InputBinding.INPUTTYPE_MOUSE_BUTTON = 2
InputBinding.INPUTTYPE_MOUSE_WHEEL = 3
InputBinding.INPUTTYPE_MOUSE_AXIS = 4
InputBinding.INPUTTYPE_GAMEPAD = 5
InputBinding.INPUTTYPE_GAMEPAD_AXIS = 6
InputBinding.MOUSE_AXIS_NONE = 0
InputBinding.MOUSE_AXIS_X = 1
InputBinding.MOUSE_AXIS_Y = 2
InputBinding.SYMBOL_AFFIX_POSITIVE = "_1"
InputBinding.SYMBOL_AFFIX_NEGATIVE = "_2"
InputBinding.NO_EVENT_TARGET = 0
InputBinding.MOUSE_AXES = {AXIS_X = Input.AXIS_X, AXIS_Y = Input.AXIS_Y, ["AXIS_X+"] = Input.AXIS_X, ["AXIS_Y+"] = Input.AXIS_Y, ["AXIS_X-"] = Input.AXIS_X, ["AXIS_Y-"] = Input.AXIS_Y}
{}[Input.AXIS_X] = "AXIS_X"
{}[Input.AXIS_Y] = "AXIS_Y"
InputBinding.MOUSE_AXIS_NAMES = {}
InputBinding.MOUSE_BUTTONS = {MOUSE_BUTTON_LEFT = Input.MOUSE_BUTTON_LEFT, MOUSE_BUTTON_RIGHT = Input.MOUSE_BUTTON_RIGHT, MOUSE_BUTTON_MIDDLE = Input.MOUSE_BUTTON_MIDDLE, MOUSE_BUTTON_WHEEL_UP = Input.MOUSE_BUTTON_WHEEL_UP, MOUSE_BUTTON_WHEEL_DOWN = Input.MOUSE_BUTTON_WHEEL_DOWN, MOUSE_BUTTON_X1 = Input.MOUSE_BUTTON_X1, MOUSE_BUTTON_X2 = Input.MOUSE_BUTTON_X2}
{}[Input.MOUSE_BUTTON_WHEEL_UP] = true
{}[Input.MOUSE_BUTTON_WHEEL_DOWN] = true
InputBinding.MOUSE_WHEEL = {}
{}[Input.MOUSE_BUTTON_LEFT] = "MOUSE_BUTTON_LEFT"
{}[Input.MOUSE_BUTTON_RIGHT] = "MOUSE_BUTTON_RIGHT"
{}[Input.MOUSE_BUTTON_MIDDLE] = "MOUSE_BUTTON_MIDDLE"
{}[Input.MOUSE_BUTTON_WHEEL_UP] = "MOUSE_BUTTON_WHEEL_UP"
{}[Input.MOUSE_BUTTON_WHEEL_DOWN] = "MOUSE_BUTTON_WHEEL_DOWN"
{}[Input.MOUSE_BUTTON_X1] = "MOUSE_BUTTON_X1"
{}[Input.MOUSE_BUTTON_X2] = "MOUSE_BUTTON_X2"
InputBinding.MOUSE_BUTTON_NAMES = {}
{}[Input.BUTTON_16] = true
{}[Input.BUTTON_17] = true
{}[Input.BUTTON_18] = true
{}[Input.BUTTON_19] = true
InputBinding.GAMEPAD_DPAD = {}
InputBinding.COMBO_MASK_CONSOLE_COMMAND_1 = 1
InputBinding.COMBO_MASK_CONSOLE_COMMAND_2 = 2
InputBinding.COMBO_MASK_CONSOLE_COMMAND_3 = 4
InputBinding.COMBO_MASK_MOUSE_COMMAND_1 = 1
InputBinding.COMBO_MASK_MOUSE_COMMAND_2 = 2
InputBinding.COMBO_MASK_MOUSE_COMMAND_3 = 4
InputBinding.COMBO_MASK_MOUSE_COMMAND_4 = 8
{}[InputAction.CONSOLE_ALT_COMMAND_BUTTON] = {mask = InputBinding.COMBO_MASK_CONSOLE_COMMAND_1, controls = InputAction.CONSOLE_ALT_COMMAND_BUTTON}
{}[InputAction.CONSOLE_ALT_COMMAND2_BUTTON] = {mask = InputBinding.COMBO_MASK_CONSOLE_COMMAND_2, controls = InputAction.CONSOLE_ALT_COMMAND2_BUTTON}
{}[InputAction.CONSOLE_ALT_COMMAND3_BUTTON] = {mask = InputBinding.COMBO_MASK_CONSOLE_COMMAND_3, controls = InputAction.CONSOLE_ALT_COMMAND3_BUTTON}
InputBinding.GAMEPAD_COMBOS = {}
InputBinding.ORDERED_GAMEPAD_COMBOS = {InputBinding.GAMEPAD_COMBOS[InputAction.CONSOLE_ALT_COMMAND_BUTTON], InputBinding.GAMEPAD_COMBOS[InputAction.CONSOLE_ALT_COMMAND3_BUTTON], InputBinding.GAMEPAD_COMBOS[InputAction.CONSOLE_ALT_COMMAND2_BUTTON]}
{}[InputAction.MOUSE_ALT_COMMAND_BUTTON] = {mask = InputBinding.COMBO_MASK_MOUSE_COMMAND_1, controls = InputAction.MOUSE_ALT_COMMAND_BUTTON}
{}[InputAction.MOUSE_ALT_COMMAND2_BUTTON] = {mask = InputBinding.COMBO_MASK_MOUSE_COMMAND_2, controls = InputAction.MOUSE_ALT_COMMAND2_BUTTON}
{}[InputAction.MOUSE_ALT_COMMAND3_BUTTON] = {mask = InputBinding.COMBO_MASK_MOUSE_COMMAND_3, controls = InputAction.MOUSE_ALT_COMMAND3_BUTTON}
{}[InputAction.MOUSE_ALT_COMMAND4_BUTTON] = {mask = InputBinding.COMBO_MASK_MOUSE_COMMAND_4, controls = InputAction.MOUSE_ALT_COMMAND4_BUTTON}
InputBinding.MOUSE_COMBOS = {}
InputBinding.ORDERED_MOUSE_COMBOS = {InputBinding.MOUSE_COMBOS[InputAction.MOUSE_ALT_COMMAND_BUTTON], InputBinding.MOUSE_COMBOS[InputAction.MOUSE_ALT_COMMAND3_BUTTON], InputBinding.MOUSE_COMBOS[InputAction.MOUSE_ALT_COMMAND4_BUTTON], InputBinding.MOUSE_COMBOS[InputAction.MOUSE_ALT_COMMAND2_BUTTON]}
InputBinding.ALL_COMBOS = {InputBinding.GAMEPAD_COMBOS, InputBinding.MOUSE_COMBOS}
{}[InputAction.CONSOLE_ALT_COMMAND_BUTTON] = {Input.buttonIdToIdName[Input.BUTTON_5]}
{}[InputAction.CONSOLE_ALT_COMMAND2_BUTTON] = {Input.buttonIdToIdName[Input.BUTTON_6]}
{}[InputAction.CONSOLE_ALT_COMMAND3_BUTTON] = {Input.buttonIdToIdName[Input.BUTTON_5], Input.buttonIdToIdName[Input.BUTTON_6]}
InputBinding.GAMEPAD_COMBO_BINDINGS = {}
{}[Input.buttonIdToIdName[Input.BUTTON_5]] = true
{}[Input.buttonIdToIdName[Input.BUTTON_6]] = true
InputBinding.GAMEPAD_COMBO_AXIS_NAMES = {}
{}[InputAction.MOUSE_ALT_COMMAND_BUTTON] = {InputBinding.MOUSE_BUTTON_NAMES[Input.MOUSE_BUTTON_LEFT]}
{}[InputAction.MOUSE_ALT_COMMAND2_BUTTON] = {InputBinding.MOUSE_BUTTON_NAMES[Input.MOUSE_BUTTON_RIGHT]}
{}[InputAction.MOUSE_ALT_COMMAND3_BUTTON] = {InputBinding.MOUSE_BUTTON_NAMES[Input.MOUSE_BUTTON_MIDDLE]}
{}[InputAction.MOUSE_ALT_COMMAND4_BUTTON] = {InputBinding.MOUSE_BUTTON_NAMES[Input.MOUSE_BUTTON_LEFT], InputBinding.MOUSE_BUTTON_NAMES[Input.MOUSE_BUTTON_RIGHT]}
InputBinding.MOUSE_COMBO_BINDINGS = {}
{}[InputBinding.MOUSE_BUTTON_NAMES[Input.MOUSE_BUTTON_LEFT]] = true
{}[InputBinding.MOUSE_BUTTON_NAMES[Input.MOUSE_BUTTON_RIGHT]] = true
{}[InputBinding.MOUSE_BUTTON_NAMES[Input.MOUSE_BUTTON_MIDDLE]] = true
InputBinding.MOUSE_COMBO_AXIS_NAMES = {}
InputBinding.MOUSE_MOVE_BASE_FACTOR = 75
InputBinding.MOUSE_MOVE_LIMIT = 4
InputBinding.MOUSE_MOTION_SCALE_X_DEFAULT = 1
InputBinding.MOUSE_MOTION_SCALE_Y_DEFAULT = 1
InputBinding.MOUSE_WHEEL_INPUT_FACTOR = 3
InputBinding.INPUT_MODE_CHANGE_THRESHOLD = 0.2
if not GS_PLATFORM_GGP then
  -- if not GS_IS_MOBILE_VERSION then goto L916 end
end
-- goto L917  (LOP_JUMP +1)
v1.INPUT_MODE_CHANGE_MIN_INTERVAL = 5000
InputBinding.KB_MOUSE_INTERNAL_ID = 255
InputBinding.ROOT_CONTEXT_NAME = "ROOT"
InputBinding.NO_REGISTRATION_CONTEXT = {actionEvents = {}, name = "", previousContextName = "", eventOrderCounter = 0}
InputBinding.NO_ACTION_EVENTS = {}
{}[GS_INPUT_HELP_MODE_KEYBOARD] = {GS_INPUT_HELP_MODE_KEYBOARD}
{}[GS_INPUT_HELP_MODE_GAMEPAD] = {GS_INPUT_HELP_MODE_GAMEPAD}
{}[GS_INPUT_HELP_MODE_TOUCH] = {GS_INPUT_HELP_MODE_TOUCH}
InputBinding.MESSAGE_PARAM_INPUT_MODE = {}
function InputBinding.new(modManager, messageCenter, isConsoleVersion)
  local v3 = setmetatable({}, u0)
  v3.debugEnabled = false
  v3.debugContextEnabled = false
  v3.debugRegisteredActions = false
  v3.modManager = modManager
  v3.messageCenter = messageCenter
  v3.isConsoleVersion = isConsoleVersion
  v3.devicesByInternalId = {}
  v3.devicesByCategory = {}
  v3.deviceIdToInternal = {}
  v3.internalToDeviceId = {}
  v3.engineDeviceIdCounts = {}
  v3.internalIdToEngineDeviceId = {}
  v3.newlyConnectedDevices = {}
  v3.missingDevices = {}
  v3.actions = {}
  v3.nameActions = {}
  v3.originalActionBindings = nil
  v3.activeDeviceBindingsBuffer = {}
  v3.mouseMovementX = 0
  v3.mouseMovementY = 0
  v3.accumMouseMovementX = 0
  v3.accumMouseMovementY = 0
  v3.actionEvents = {}
  v3.displayActionEvents = {}
  v3.events = {}
  v3.eventOrder = {}
  v3.loadedBindings = {}
  v3.activeBindings = {}
  v3.eventBindings = {}
  v3.linkedBindings = {}
  v3.currentContextName = InputBinding.ROOT_CONTEXT_NAME
  {}[InputBinding.ROOT_CONTEXT_NAME] = {previousContextName = "", actionEvents = {}}
  v3.contexts = {}
  v3.registrationContext = InputBinding.NO_REGISTRATION_CONTEXT
  v3.comboInputAxisMasks = {}
  v3.comboInputActions = {}
  v3.comboInputBindings = {}
  v3.pressedMouseComboMask = 0
  v3.pressedGamepadComboMask = 0
  v3.needUpdateAbort = false
  v3.eventChangeCallback = nil
  v3.wrapMousePositionEnabled = false
  v3.saveCursorX = 0.5
  v3.saveCursorY = 0.5
  v3.mouseMotionScaleX = 0.75
  v3.mouseMotionScaleY = 0.75
  v3.devicesToMigrateCategory = {}
  v3.isInputCapturing = false
  v3.gatherInputStoredMouseEvent = nil
  v3.gatherInputStoredKeyEvent = nil
  v3.gatherInputStoredUpdate = nil
  v3.gamepadInputState = {}
  v3.timeSinceLastInputHelpModeChange = InputBinding.INPUT_MODE_CHANGE_MIN_INTERVAL
  v3.lastInputHelpMode = GS_INPUT_HELP_MODE_KEYBOARD
  if isConsoleVersion then
    v3.lastInputHelpMode = GS_INPUT_HELP_MODE_GAMEPAD
  end
  v3.lastInputMode = v3.lastInputHelpMode
  local v4 = v4:getValue(GameSettings.SETTING.INPUT_HELP_MODE)
  v3.inputHelpModeSetting = v4
  if not isConsoleVersion then
    v4 = v4:getValue(GameSettings.SETTING.IS_GAMEPAD_ENABLED)
  end
  v3.isGamepadEnabled = v4
  messageCenter:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.INPUT_HELP_MODE], v3.onInputHelpModeSettingChange, v3)
  messageCenter:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.IS_GAMEPAD_ENABLED], v3.onGamepadEnabledSettingChanged, v3)
  v3.settingsPath = nil
  v3:assignPlatformBindingPaths()
  addConsoleCommand("gsInputDebug", "", "consoleCommandEnableInputDebug", v3)
  addConsoleCommand("gsInputContextPrint", "", "consoleCommandPrintInputContext", v3)
  addConsoleCommand("gsInputContextShow", "", "consoleCommandShowInputContext", v3)
  addConsoleCommand("gsInputRegisteredActionsShow", "", "consoleCommandShowRegisteredActions", v3)
  return v3
end
function InputBinding.delete(v0)
  v1:unsubscribeAll(v0)
end
function InputBinding:load()
  self:clearState()
  local xmlFileActionDefinitions = loadXMLFile("ActionDefinitions", InputBinding.PATHS.ACTION_DEFINITIONS)
  self:loadActions(xmlFileActionDefinitions)
  delete(xmlFileActionDefinitions)
  self:loadModActions()
  local xmlFileInputBinding = loadXMLFile("InputBindings", self.settingsPath)
  local v4 = getXMLFloat(xmlFileInputBinding, "inputBinding#version")
  local v3 = Utils.getNoNil(v4, 0.1)
  self.version = v3
  local v5 = getXMLFloat(xmlFileInputBinding, "inputBinding#mouseSensitivityScaleX")
  v4 = Utils.getNoNil(v5, 1)
  self.mouseMotionScaleX = v4 * self.MOUSE_MOTION_SCALE_X_DEFAULT
  v5 = getXMLFloat(xmlFileInputBinding, "inputBinding#mouseSensitivityScaleY")
  v4 = Utils.getNoNil(v5, 1)
  self.mouseMotionScaleY = v4 * self.MOUSE_MOTION_SCALE_Y_DEFAULT
  self:initializeGamepadMapping(xmlFileInputBinding)
  self:loadActionBindingsFromXML(xmlFileInputBinding, false, nil, nil, nil, true)
  self:upgradeBindingVersion(xmlFileInputBinding)
  self:resolveBindingDevices()
  self:migrateDevicesCategory()
  delete(xmlFileInputBinding)
  self:loadDefaultBindings()
  self:validateAndRepairComboActionBindings()
  self:storeComboInputMappings()
  self:assignComboMasks()
  self:assignActionPrimaryBindings()
  self:storeLinkedBindings()
  self:restoreInputContexts()
  self:notifyBindingChanges()
  self:refreshEventCollections()
  for v6 in pairs(self.newlyConnectedDevices) do
    self.newlyConnectedDevices[v6] = nil
  end
  self:checkDefaultInputExclusiveActionBindings()
end
function InputBinding:loadDefaultBindings()
  if self.inputBindingPathTemplate ~= nil then
    local xmlFile = loadXMLFile("DefaultKeyboardMouseBindings", self.inputBindingPathTemplate)
    self:loadActionBindingsFromXML(xmlFile, true, nil, nil, true, false)
    delete(xmlFile)
  end
  if 0 < self.numGamepads then
    local v3 = self:getAllDeviceIdsWithBindings()
    xmlFile = self:getBindingCategorySet(...)
    local ignoredDevices = self:getAllDeviceIdsWithoutBindings()
    for v6, v7 in ipairs(InputBinding.DEVICE_CATEGORY_DEFAULT_LOAD_ORDER) do
      if not xmlFile[v7] then
        continue
      end
      local v9 = loadXMLFile("ControllerTemplate", InputBinding.DEVICE_CATEGORY_DEFAULTS_PATHS[v7])
      if not (v9 ~= 0) then
        continue
      end
      self:loadActionBindingsFromXML(v9, true, nil, ignoredDevices, true, false)
      delete(v9)
    end
    v3 = self:getBindingCategorySet(ignoredDevices)
    for v7, v8 in ipairs(InputBinding.DEVICE_CATEGORY_DEFAULT_LOAD_ORDER) do
      if not v3[v8] then
        continue
      end
      local v10 = loadXMLFile("ControllerTemplate", InputBinding.DEVICE_CATEGORY_DEFAULTS_PATHS[v8])
      if not (v10 ~= 0) then
        continue
      end
      local usedDevices = self:getAllDevicesWithBindings()
      self:loadActionBindingsFromXML(v10, true, nil, usedDevices, false, false)
      delete(v10)
    end
  end
  self:loadModBindingDefaults()
end
function InputBinding:onInputHelpModeSettingChange(v1)
  self.inputHelpModeSetting = v1
end
function InputBinding:onGamepadEnabledSettingChanged(v1)
  self.isGamepadEnabled = v1
end
function InputBinding:getBindingCategorySet(deviceIds)
  for v6, v7 in pairs(deviceIds) do
    v2[self.devicesByInternalId[v6].category] = true
  end
  if v2[InputDevice.CATEGORY.WHEEL] == nil then
  end
  if v2[InputDevice.CATEGORY.FARMWHEEL] == nil then
  end
  if v2[InputDevice.CATEGORY.FARMPANEL] == nil then
  end
  if not v3 then
    -- if not v4 then goto L62 end
  end
  if v5 then
    v2[InputDevice.CATEGORY.WHEEL] = nil
    v2[InputDevice.CATEGORY.FARMWHEEL] = nil
    v2[InputDevice.CATEGORY.FARMPANEL] = nil
    if v4 then
      v2[InputDevice.CATEGORY.FARMWHEEL_AND_PANEL] = true
      return v2
    end
    v2[InputDevice.CATEGORY.WHEEL_AND_PANEL] = true
  end
  return v2
end
function InputBinding:getDeviceHasAnyBindings(device)
  for v5, v6 in pairs(self.actions) do
    if not (InputBinding.GAMEPAD_COMBO_BINDINGS[v6.name] == nil) then
      continue
    end
    for v10, v11 in pairs(v6.bindings) do
      if not (v11.deviceId == device.deviceId) then
        continue
      end
      return true
    end
  end
  return false
end
function InputBinding:getAllDevicesWithBindings()
  for v5, v6 in pairs(self.actions) do
    if not (InputBinding.GAMEPAD_COMBO_BINDINGS[v6.name] == nil) then
      continue
    end
    for v10, v11 in pairs(v6.bindings) do
      v1[v11.deviceId] = true
    end
  end
  return v1
end
function InputBinding:getAllDeviceIdsWithoutBindings()
  while self.devicesByInternalId[0] ~= nil do
    local v4 = self:getDeviceHasAnyBindings(v3)
    if not v4 then
      v1[v2] = true
    end
  end
  return v1
end
function InputBinding:getAllDeviceIdsWithBindings()
  while self.devicesByInternalId[0] ~= nil do
    local v4 = self:getDeviceHasAnyBindings(v3)
    if v4 then
      v1[v2] = true
    end
  end
  return v1
end
function InputBinding:reloadModActions()
  self:load()
end
function InputBinding:loadModActions()
  local v2 = v2:getMods()
  for v4, v5 in ipairs(...) do
    local v6 = loadXMLFile("InputBinding ModActions ModFile", v5.modFile)
    self:loadActions(v6, v5.modName)
    delete(v6)
  end
end
function InputBinding:loadModBindingDefaults()
  local v2 = v2:getMods()
  for v4, v5 in ipairs(...) do
    local v6 = loadXMLFile("InputBinding BindingDefaults ModFile", v5.modFile)
    self:loadActionBindingsFromXML(v6, true, v5.modName, nil, true, false)
    delete(v6)
  end
end
function InputBinding:assignPlatformBindingPaths()
  if GS_PLATFORM_PLAYSTATION then
    self.settingsPath = InputBinding.PATHS.DEFAULT_BINDINGS_PS4
    return
  end
  if GS_PLATFORM_XBOX then
    self.settingsPath = InputBinding.PATHS.DEFAULT_BINDINGS_XBOX
    return
  end
  if GS_PLATFORM_ID == PlatformId.IOS then
    self.settingsPath = InputBinding.PATHS.DEFAULT_BINDINGS_IOS
    return
  end
  if GS_PLATFORM_ID == PlatformId.ANDROID then
    self.settingsPath = InputBinding.PATHS.DEFAULT_BINDINGS_ANDROID
    return
  end
  if GS_PLATFORM_SWITCH then
    self.settingsPath = InputBinding.PATHS.DEFAULT_BINDINGS_SWITCH
    return
  end
  self.settingsPath = InputBinding.PATHS.USER_BINDINGS
  self.inputBindingPathTemplate = InputBinding.PATHS.DEFAULT_BINDINGS_KB_MOUSE
  if GS_PLATFORM_GGP then
    self.inputBindingPathTemplate = InputBinding.PATHS.DEFAULT_BINDINGS_KB_MOUSE_GGP
  end
  self:overwriteSettingsWithDefault(false)
  local v1 = self:checkSettingsIntegrity(self.settingsPath, self.inputBindingPathTemplate)
  if not v1 then
    self:overwriteSettingsWithDefault(true)
  end
end
function InputBinding:overwriteSettingsWithDefault(forceOverwrite)
  copyFile(self.inputBindingPathTemplate, self.settingsPath, forceOverwrite)
end
function InputBinding:restoreInputContexts()
  for v4, v5 in pairs(self.contexts) do
    for v11, v12 in pairs(v5.actionEvents) do
      v7[self.nameActions[v11.name]] = v12
    end
    if v4 == self.currentContextName then
      self.actionEvents = v7
    end
    v5.actionEvents = v7
  end
end
function InputBinding:setShowMouseCursor(doShow, saveCursorPosition)
  if saveCursorPosition then
    -- if v0.mousePosXLast then goto L5 end
  end
  self.saveCursorX = 0.5
  if saveCursorPosition then
    -- if v0.mousePosYLast then goto L12 end
  end
  self.saveCursorY = 0.5
  self.mousePosXLast = nil
  self.mousePosYLast = nil
  setShowMouseCursor(doShow)
  self.wrapMousePositionEnabled = not doShow
end
function InputBinding:getShowMouseCursor()
  return not self.wrapMousePositionEnabled
end
function InputBinding:getInputHelpMode()
  if GS_IS_MOBILE_VERSION then
    -- if GS_INPUT_HELP_MODE_TOUCH then goto L10 end
  end
  if not self.isConsoleVersion and self.isGamepadEnabled then
    if self.inputHelpModeSetting == GS_INPUT_HELP_MODE_AUTO then
      return self.lastInputHelpMode
    end
    if 0 < self.numGamepads and self.inputHelpModeSetting == GS_INPUT_HELP_MODE_GAMEPAD then
      return GS_INPUT_HELP_MODE_GAMEPAD
    end
    return v2
  end
  return v1
end
function InputBinding:getLastInputMode()
  if GS_PLATFORM_GGP then
    local v1 = getIsKeyboardAvailable()
    if not v1 then
      return GS_INPUT_HELP_MODE_GAMEPAD
    end
  end
  if Platform.isMobile and self.lastInputMode == GS_INPUT_HELP_MODE_KEYBOARD then
    return GS_INPUT_HELP_MODE_TOUCH
  end
  return self.lastInputMode
end
function InputBinding:validateActionEventParameters(actionName, targetObject, eventCallback, triggerUp, triggerDown, triggerAlways)
  if actionName == nil then
    Logging.devWarning("Warning: Tried registering an unknown action")
    printCallstack()
    return false
  end
  if InputAction[actionName] == nil then
    Logging.devWarning("Warning: Tried registering an event for an unknown action: %s", actionName)
    return false
  end
  if not targetObject then
    Logging.devWarning("Warning: Tried registering an action event without a target.")
    return false
  end
  if not eventCallback then
    Logging.devWarning("Warning: Tried registering an action event without an event callback.")
    return false
  end
  if not triggerUp and not triggerDown and not triggerAlways then
    Logging.devWarning("Warning: Tried registering an action event without any active trigger flags.")
    return false
  end
  if self.nameActions[actionName] ~= nil then
    local v8 = self.nameActions[actionName]:getIsSupportedOnCurrentPlatfrom()
    if not v8 then
      return false
    end
  end
  return true
end
function InputBinding:registerActionEvent(actionName, targetObject, eventCallback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, disableConflictingBindings, reportAnyDeviceCollision)
  local valid = self:validateActionEventParameters(actionName, targetObject, eventCallback, triggerUp, triggerDown, triggerAlways)
  if self.registrationContext ~= InputBinding.NO_REGISTRATION_CONTEXT then
  end
  if startActive and valid then
    local v14, v15 = self:checkEventCollision(actionName, disableConflictingBindings, reportAnyDeviceCollision)
    if valid then
    end
    if v14 then
      return false, "", v12[v15]
    end
  end
  if valid then
    if triggerUp ~= nil then
    end
    if triggerDown ~= nil then
    end
    if triggerAlways ~= nil then
    end
    if startActive ~= nil then
    end
    v15 = v15(v16, v17, v18, v19, v20, v21, v22, callbackState, v13)
    if v12[self.nameActions[actionName]] == nil then
      v12[self.nameActions[actionName]] = {}
    end
    if #v17 ~= 0 then
    end
    for v22, v23 in ipairs(v17) do
      if not (v23.actionName == v15.actionName) then
        continue
      end
      local v24 = v23:getTriggerCode()
      local v25 = v15:getTriggerCode()
      if not (v24 == v25) then
        continue
      end
      return false, v14, {v23}
    end
    table.insert(v17, v15)
    self.events[v15.id] = v15
    v15.displayIsVisible = v18
    v15:initializeDisplayText(v16)
    v21 = v16:getIgnoreComboMask()
    v15:setIgnoreComboMask(...)
    if self.registrationContext == InputBinding.NO_REGISTRATION_CONTEXT then
      self:refreshEventCollections()
      self.contexts[self.currentContextName].eventOrderCounter = v13 + 1
    else
      self.registrationContext.eventOrderCounter = v13 + 1
    end
  end
  return valid, v14, nil
end
function InputBinding:checkEventCollision(actionName, disableConflictingBindings, reportAnyDeviceCollision)
  local v5 = self.nameActions[actionName]:getBindings()
  if self.registrationContext ~= InputBinding.NO_REGISTRATION_CONTEXT then
  end
  for v12, v13 in pairs(v6) do
    local v14 = table.hasSetIntersection(v4.categories, v12.categories)
    if v4 ~= v12 then
    end
    if not v4.isLocked then
    end
    if not v15 and v14 then
    end
    for v22, v23 in pairs(v13) do
      if not v23.isActive then
        continue
      end
      break
    end
    if not v17 then
      continue
    end
    if not v18 then
      continue
    end
    v19 = v12:getActiveBindings()
    for v23, v24 in pairs(v5) do
      for v28, v29 in pairs(v19) do
        local v30 = v24:hasEventCollision(v29)
        if not v30 then
          continue
        end
        if disableConflictingBindings then
          v4:disableBinding(v24)
          table.insert(v8, v24)
        else
          return true, v12
        end
      end
    end
  end
  if 0 < #v8 then
    if reportAnyDeviceCollision == true then
      return true, v7
    end
    v12 = v4:getBindings()
    if 0 < #v12 then
      v11 = v4:getNumActiveBindings()
      if v11 ~= 0 then
      end
    end
    if v10 then
      for v13, v14 in pairs(v8) do
        v4:enableBinding(v14)
      end
    end
  end
  return v9, v7
end
function InputBinding:beginActionEventsModification(inContextName, createNew)
  if inContextName ~= nil then
    -- if v1 ~= InputBinding.NO_REGISTRATION_CONTEXT.name then goto L18 end
  end
  Logging.devWarning("Cannot begin action event registration with an empty context name.")
  printCallstack()
  return
  if self.contexts[inContextName] ~= nil then
    -- if not v2 then goto L29 end
  end
  local v4 = self:createContext(inContextName)
  if self.debugEnabled then
    Logging.devInfo("[InputBinding] Beginning action events modification in context [%s]", inContextName)
  end
  self.registrationContext = v3
end
function InputBinding:endActionEventsModification(ignoreCheck)
  if not ignoreCheck and self.registrationContext == InputBinding.NO_REGISTRATION_CONTEXT then
    Logging.devWarning("Called InputBinding:endActionEventsModification() when the registration context is already reset. Check call order.")
    printCallstack()
    return
  end
  if self.debugEnabled then
    Logging.devInfo("[InputBinding] Ended action events modification in context [%s]", self.registrationContext.name)
  end
  self.registrationContext = InputBinding.NO_REGISTRATION_CONTEXT
  self:refreshEventCollections()
end
function InputBinding:refreshEventCollections()
  self:storeEventBindings()
  self:storeDisplayActionEvents()
  self:notifyEventChanges()
end
function InputBinding:storeDisplayActionEvents()
  self.displayActionEvents = {}
  for v4, v5 in pairs(self.actionEvents) do
    for v9, v10 in ipairs(v5) do
      local v11 = v4:getActiveBindings()
      if not v10.isActive then
        continue
      end
      if not v10.displayIsVisible then
        continue
      end
      if not (0 < #v11) then
        continue
      end
      for v17, v18 in pairs(v11) do
        if not v18.isActive then
          continue
        end
        if not (self.devicesByInternalId[v18.internalDeviceId].category ~= InputDevice.CATEGORY.KEYBOARD_MOUSE) then
          continue
        end
        if self.devicesByInternalId[v18.internalDeviceId].category == InputDevice.CATEGORY.GAMEPAD then
          -- if v18.index >= v13 then goto L66 end
        elseif not (v18.index < v12) then
          continue
        end
      end
      if v12 >= v13 then
      end
      table.insert(self.displayActionEvents, {action = v4, event = v10, inlineModifierButtons = true})
      break
    end
  end
end
function InputBinding:storeEventBindings()
  for v4 in pairs(self.activeBindings) do
    self.activeBindings[v4] = nil
  end
  for v4 in pairs(self.eventBindings) do
    self.eventBindings[v4] = nil
  end
  for v4 in pairs(self.eventOrder) do
    self.eventOrder[v4] = nil
  end
  for v4, v5 in pairs(self.actionEvents) do
    local v6 = v4:getActiveBindings()
    for v10, v11 in pairs(v5) do
      if not v11.isActive then
        continue
      end
      if not self.eventBindings[v11] then
        self.eventBindings[v11] = {}
      end
      for v16, v17 in ipairs(v6) do
        if not v17.isActive then
          continue
        end
        table.insert(v12, v17)
        self.activeBindings[v17] = v17
      end
      table.insert(self.eventOrder, v11)
    end
  end
  table.sort(self.eventOrder, u0)
  self.needUpdateAbort = true
end
function InputBinding:iterateEvents(processingFunction)
  if self.registrationContext ~= InputBinding.NO_REGISTRATION_CONTEXT then
  end
  for v6, v7 in pairs(v2) do
    -- TODO: structure LOP_FORNPREP (pc 22, target 34)
    local v12 = processingFunction(v7[#v7], v6.name, v7, #v7)
    if v12 then
      return
    end
    -- TODO: structure LOP_FORNLOOP (pc 33, target 23)
  end
end
function InputBinding:removeEventInternal(event, eventList, index)
  if event.triggerAlways and self.eventBindings[event] ~= nil then
    for v8, v9 in pairs(self.eventBindings[event]) do
      self:neutralizeEventBindingInput(event, v9)
    end
  end
  self.events[event.id] = nil
  table.remove(eventList, index)
end
function InputBinding:removeActionEvent(eventId)
  self:iterateEvents(function(self, eventId, v2, v3)
    if self.id == u0 then
      v4:removeEventInternal(self, v2, v3)
      u2 = true
      return true
    end
  end)
  if false then
    self:refreshEventCollections()
  end
end
function InputBinding:removeActionEventsByActionName(actionName)
  self:iterateEvents(function(self, actionName, v2, v3)
    if self.actionName == u0 then
      v4:removeEventInternal(self, v2, v3)
      u2 = true
    end
  end)
  if false then
    self:refreshEventCollections()
  end
end
function InputBinding:removeActionEventsByTarget(targetObject)
  self:iterateEvents(function(self, targetObject, v2, v3)
    if self.targetObject == u0 then
      v4:removeEventInternal(self, v2, v3)
      u2 = true
    end
  end)
  if false then
    self:refreshEventCollections()
  end
end
function InputBinding:getActionEventsHasBinding(actionEventId)
  if self.events[actionEventId] ~= nil and self.eventBindings[self.events[actionEventId]] ~= nil then
    if 0 >= #self.eventBindings[self.events[actionEventId]] then
    end
    return true
  end
  return false
end
function InputBinding:getDisplayActionEvents()
  return self.displayActionEvents
end
function InputBinding:setActionEventText(eventId, actionText)
  if self.events[eventId] then
    if self.events[eventId].contextDisplayText == actionText then
    end
    v3.contextDisplayText = actionText
  end
  if v4 then
    self:refreshEventCollections()
  end
end
function InputBinding:setActionEventIcon(eventId, iconName)
  if self.events[eventId] then
    if self.events[eventId].contextDisplayIconName == iconName then
    end
    v3.contextDisplayIconName = iconName
  end
  if v4 then
    self:refreshEventCollections()
  end
end
function InputBinding:setActionEventTextVisibility(eventId, isVisible)
  if self.events[eventId] then
    if self.events[eventId].displayIsVisible == isVisible then
    end
    v3.displayIsVisible = isVisible
  end
  if v4 then
    self:refreshEventCollections()
  end
end
function InputBinding:setActionEventTextPriority(eventId, priority)
  if self.events[eventId] then
    local v5 = type(priority)
    if v5 == "number" then
      if self.events[eventId].displayPriority == priority then
      end
      v3.displayPriority = priority
    end
  end
  if v4 then
    self:refreshEventCollections()
  end
end
function InputBinding:setActionEventActive(eventId, isActive)
  self:setEventActive(self.events[eventId], isActive)
end
function InputBinding:setEventActive(event, isActive)
  if event then
    if event.isActive == isActive then
    end
    event.isActive = isActive
    if true then
      if isActive then
        self:checkEventCollision(event.actionName, true)
      else
        v4:resetActiveBindings()
      end
    end
  end
  if v3 then
    self:refreshEventCollections()
  end
end
function InputBinding:setActionEventsActiveByTarget(targetObject, isActive)
  self:iterateEvents(function(self)
    if self.targetObject == u0 then
      if self.isActive == u2 then
      end
      u1 = true
      self.isActive = u2
      if u1 then
        if u2 then
          targetObject:checkEventCollision(self.actionName, true)
          return
        end
        targetObject:resetActiveBindings()
      end
    end
  end)
  if false then
    self:refreshEventCollections()
  end
end
function InputBinding:getComboCommandPressedMask()
  if 0 < self.numGamepads then
    for v6, v7 in pairs(InputBinding.GAMEPAD_COMBOS) do
      if not (self.comboInputBindings[v6] ~= nil) then
        continue
      end
      if not self.comboInputBindings[v6].isPressed then
        continue
      end
      if not (v1 < v7.mask) then
        continue
      end
    end
  end
  if not self.isConsoleVersion then
    for v6, v7 in pairs(InputBinding.MOUSE_COMBOS) do
      if not self.comboInputBindings[v6].isPressed then
        continue
      end
      if not (v2 < v7.mask) then
        continue
      end
    end
  end
  return v1, v2
end
function InputBinding:getComboActionNameForAxisSet(modifierAxisSet)
  for v5, v6 in pairs(self.comboInputActions) do
    local v7 = table.equalSets(v5, modifierAxisSet)
    if not v7 then
      continue
    end
    return v6
  end
end
function InputBinding:getInternalIdByDeviceId(deviceId)
  return self.deviceIdToInternal[deviceId]
end
function InputBinding:getDeviceByInternalId(internalDeviceId)
  return self.devicesByInternalId[internalDeviceId]
end
function InputBinding:getDeviceById(deviceId)
  if self.deviceIdToInternal[deviceId] ~= nil then
  end
  return v2
end
function InputBinding:getMissingDeviceById(deviceId)
  return self.missingDevices[deviceId]
end
function InputBinding:getHasMissingDevices()
  local v2 = next(self.missingDevices)
  if v2 == nil then
  end
  return true
end
function InputBinding:assignLastInputHelpMode(inputHelpMode, force)
  if self.lastInputMode == inputHelpMode then
  end
  self.lastInputMode = inputHelpMode
  if v3 then
    self:notifyInputModeChange(inputHelpMode, false)
  end
  if inputHelpMode ~= GS_INPUT_HELP_MODE_KEYBOARD and InputBinding.INPUT_MODE_CHANGE_MIN_INTERVAL > self.timeSinceLastInputHelpModeChange then
    -- if not GS_PLATFORM_GGP then goto L51 end
  end
  if self.lastInputHelpMode == inputHelpMode then
  end
  self.lastInputHelpMode = inputHelpMode
  if v4 then
    self:notifyInputModeChange(inputHelpMode, true)
  end
  if not v4 then
    -- if v1 ~= GS_INPUT_HELP_MODE_KEYBOARD then goto L51 end
  end
  self.timeSinceLastInputHelpModeChange = 0
  if GS_IS_MOBILE_VERSION and self.lastInputHelpMode == GS_INPUT_HELP_MODE_KEYBOARD then
    self.lastInputHelpMode = GS_INPUT_HELP_MODE_TOUCH
  end
end
function InputBinding:keyEvent(unicode, sym, modifier, isDown)
  self:assignLastInputHelpMode(GS_INPUT_HELP_MODE_KEYBOARD)
end
function InputBinding:mouseEvent(posX, posY, isDown, isUp, button)
  if isDown then
    if GS_IS_MOBILE_VERSION then
      -- if GS_INPUT_HELP_MODE_TOUCH then goto L9 end
    end
    self:assignLastInputHelpMode(GS_INPUT_HELP_MODE_KEYBOARD)
  end
  if self.mousePosXLast ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L24
  end
  self.mousePosXLast = posX
  self.mousePosYLast = posY
  self.mouseMovementX = self.mouseMotionScaleX * (posX - self.mousePosXLast)
  self.mouseMovementY = self.mouseMotionScaleY * (posY - self.mousePosYLast) / g_screenAspectRatio
  self.mousePosXLast = posX
  self.mousePosYLast = posY
  self.accumMouseMovementX = self.accumMouseMovementX + self.mouseMovementX
  self.accumMouseMovementY = self.accumMouseMovementY + self.mouseMovementY
  if isDown then
    self.mouseButtonLast = button
    self.mouseButtonStateLast = true
    return
  end
  if isUp then
    self.mouseButtonLast = Input.MOUSE_BUTTON_NONE
    self.mouseButtonStateLast = false
  end
end
function InputBinding:touchEvent(posX, posY, isDown, isUp, touchId)
  self:assignLastInputHelpMode(GS_INPUT_HELP_MODE_TOUCH)
end
function InputBinding:getMousePosition()
  if not self.mousePosXLast then
  end
  if not self.mousePosYLast then
  end
  return v1, v2
end
function InputBinding:getMouseButtonState()
  return self.mouseButtonLast, self.mouseButtonStateLast
end
function InputBinding:startBindingChanges()
  self.originalActionBindings = {}
  for v4, v5 in pairs(self.actions) do
    local v6 = v5:getBindings()
    for v11, v12 in pairs(v6) do
      local v15 = v12:clone()
      table.insert(...)
    end
    self.originalActionBindings[v5] = v7
  end
end
function InputBinding:commitBindingChanges()
  self.originalActionBindings = nil
  self:assignComboMasks()
  self:assignActionPrimaryBindings()
  self:notifyBindingChanges()
  self:refreshEventCollections()
end
function InputBinding:rollbackBindingChanges()
  for v5, v6 in pairs(self.originalActionBindings) do
    for v10, v11 in pairs(v6) do
      v11:makeId()
      if v1[v11.id] == nil then
        v1[v11.id] = v11
      else
      end
      if not (self.loadedBindings[v11.id] ~= nil) then
        continue
      end
      v11:copyInputStateFrom(self.loadedBindings[v11.id])
    end
  end
  self.loadedBindings = v1
  for v5, v6 in pairs(self.originalActionBindings) do
    v5:clearBindings()
    for v10, v11 in pairs(v6) do
      v5:addBinding(self.loadedBindings[v11.id])
    end
  end
  self:storeEventBindings()
end
function InputBinding:startInputCapture(isKeyboard, isMouse, callbackTarget, callbackState, inputCallback, abortCallback, deleteCallback)
  self.isInputCapturing = true
  self.gatherInputStoredMouseEvent = mouseEvent
  self.gatherInputStoredKeyEvent = keyEvent
  self.gatherInputStoredUpdate = update
  if isKeyboard then
    self:captureKeyboardInput(function()
      if u0 then
        u1(u0)
        return
      end
      u1()
    end, function()
      if u0 then
        u1(u0, u2)
        return
      end
      u1(u2)
    end, function(self, isKeyboard, isMouse, callbackTarget)
      if u0 then
        u1(u0, self, isKeyboard, isMouse, callbackTarget, u2)
        return
      end
      u1(isKeyboard, self, isMouse, callbackTarget, u2)
    end)
    function mouseEvent()
    end
    function update()
    end
    return
  end
  if isMouse then
    self:captureKeyboardInput(v9, v10)
    self:captureMouseInput(v8)
    function update()
    end
    return
  end
  self:captureKeyboardInput(v9, v10)
  self:captureGamepadInput(v8)
  function mouseEvent()
  end
end
function InputBinding.captureKeyboardInput(v0, v1, v2, v3)
  function keyEvent(unicode, sym, modifier, isDown)
    if u0 and sym == Input.KEY_esc then
      u0()
      return
    end
    if u1 and sym == Input.KEY_backspace then
      u1()
      return
    end
    if u2 and v4 then
      if isDown then
      else
      end
      v5(v6, v7, v8)
    end
  end
end
function InputBinding:captureMouseInput(callback)
  callback(InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT, InputBinding.MOUSE_AXIS_NAMES[Input.AXIS_X], false, 0)
  callback(InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT, InputBinding.MOUSE_AXIS_NAMES[Input.AXIS_Y], false, 0)
  function mouseEvent(self, posY, isDown, isUp, button)
    if button ~= Input.MOUSE_BUTTON_WHEEL_UP then
      -- if v4 == Input.MOUSE_BUTTON_WHEEL_DOWN then goto L53 end
      if isDown then
        if u0 == nil then
          u0 = button
          u1 = self
          u2 = posY
          u3(u4, u5, 0)
          u3(u4, u6, 0)
        end
        u3(u4, v5, 1)
        -- goto L63  (LOP_JUMP +29)
      end
      -- if not v3 then goto L63 end
      if button ~= u0 then
      end
      u3(u4, v5, 0)
      -- if not true then goto L63 end
      u0 = nil
      u1 = nil
      u2 = nil
    else
      u3(u4, Input.mouseButtonIdToIdName[button], 1)
      u3(u4, Input.mouseButtonIdToIdName[button], 0)
    end
    if u0 ~= nil then
      u7 = self
      u8 = posY
    end
    if u0 ~= nil then
    end
    u3(u4, u5, self - v6)
    u3(u4, u6, posY - v7)
  end
end
function InputBinding.captureGamepadInput(v0, v1)
  function update(dt)
    local numGamepads = getNumOfGamepads()
    if numGamepads ~= #u0 then
      for v5, v6 in pairs(u0) do
        u0[v5] = nil
      end
      -- TODO: structure LOP_FORNPREP (pc 20, target 87)
      table.insert(u0, {axes = {}, buttons = {}})
      -- TODO: structure LOP_FORNPREP (pc 41, target 58)
      local v10 = getInputButton(1 - 1, 1 - 1)
      if 0 >= v10 then
      end
      if true then
        v5.buttons[v8] = true
      end
      -- TODO: structure LOP_FORNLOOP (pc 57, target 42)
      for v8 = 1, Input.MAX_NUM_AXES do
        v10 = getInputAxis(v8 - 1, v4 - 1)
        v5.axes[v8] = v10
        local v9 = Input.isHalfAxis(v8 - 1)
        if v9 then
          v5.axes[v8] = (1 - v5.axes[v8]) * 0.5
        end
        -- TODO: structure LOP_FORNLOOP (pc 85, target 63)
      end
    end
    -- TODO: structure LOP_FORNPREP (pc 90, target 180)
    -- TODO: structure LOP_FORNPREP (pc 106, target 134)
    local v12 = getInputAxis(1 - 1, 1 - 1)
    local v14 = Input.isHalfAxis(1 - 1)
    if v14 then
    end
    u2(v5, Input.axisIdToIdName[v11 - 1], v12, v13)
    -- TODO: structure LOP_FORNLOOP (pc 133, target 107)
    for v11 = 1, Input.MAX_NUM_BUTTONS do
      v14 = getInputButton(v11 - 1, v4 - 1)
      if 0 >= v14 then
      end
      if true then
        -- if v6.buttons[v11] then goto L178 end
        v8[v11 - 1] = true
        u2(v5, v12, 1, 0)
      else
        v6.buttons[v11] = nil
        u2(v5, v12, 0, 0)
      end
      -- TODO: structure LOP_FORNLOOP (pc 178, target 139)
    end
  end
end
function InputBinding:stopInputGathering()
  if self.isInputCapturing then
    mouseEvent = self.gatherInputStoredMouseEvent
    keyEvent = self.gatherInputStoredKeyEvent
    update = self.gatherInputStoredUpdate
    self.gatherInputCallbackFunction = nil
    self.gatherInputCallbackObject = nil
    self.gatherInputStoredMouseEvent = nil
    self.gatherInputStoredKeyEvent = nil
    self.gatherInputStoredUpdate = nil
    self.isInputCapturing = false
  end
end
function InputBinding:restoreDefaultBindings()
  copyFile(self.inputBindingPathTemplate, self.settingsPath, true)
  self:load()
end
function InputBinding:clearState()
  self.loadedBindings = {}
  self.eventBindings = {}
  self.nameActions = {}
  self.actions = {}
  self.missingDevices = {}
  self.gamepadInputState = {}
  if self.isConsoleVersion then
  elseif GS_IS_MOBILE_VERSION then
  end
  self.lastInputMode = v1
  self.lastInputHelpMode = v1
end
function InputBinding:loadActions(xmlFile, modName)
  if modName then
  end
  self:loadActionsFromXMLPath(xmlFile, v3, v4, modName)
end
function InputBinding:loadActionsFromXMLPath(xmlFile, rootPath, i18n, modName)
  while true do
    v8 = string.format(".action(%d)", v5)
    v7 = hasXMLProperty(xmlFile, rootPath .. v8)
    if not v7 then
      break
    end
    v7 = InputAction.createFromXML(xmlFile, rootPath .. v8)
    if v7 ~= nil then
      v8 = string.format("input_%s", v7.name)
      if modName then
        v9 = string.format(" in mod '%s'", modName)
        -- if v9 then goto L35 end
      end
      if modName ~= nil then
        v11 = v11:getModByName(modName)
        v7.displayCategory = v11.title
      end
      v7.displayNamePositive = v7.name
      v7.displayNameNegative = v7.name
      if InputBinding.MOUSE_COMBOS[v7.name] ~= nil and InputBinding.GAMEPAD_COMBOS[v7.name] == nil then
      end
      if not v10 then
      end
      if v7.axisType == InputAction.AXIS_TYPE.FULL then
        v15 = i18n:hasText(v8 .. InputBinding.SYMBOL_AFFIX_POSITIVE)
        if v15 then
          v15 = i18n:getText(v8 .. InputBinding.SYMBOL_AFFIX_POSITIVE)
          v7.displayNamePositive = v15
        elseif v12 then
          Logging.warning("Missing l10n '%s'%s", v8 .. InputBinding.SYMBOL_AFFIX_POSITIVE, v9)
        end
        v15 = i18n:hasText(v14)
        if v15 then
          v15 = i18n:getText(v14)
          v7.displayNameNegative = v15
          -- goto L157  (LOP_JUMP +27)
        end
        -- if not v12 then goto L157 end
        Logging.warning("Missing l10n '%s'%s", v14, v9)
      else
        v13 = i18n:hasText(v8)
        if v13 then
          v13 = i18n:getText(v8)
          v7.displayNamePositive = v13
        elseif v12 then
          Logging.warning("Missing l10n '%s'%s", v8, v9)
        end
      end
      if self.nameActions[v7.name] ~= nil then
        -- TODO: structure LOP_FORNPREP (pc 169, target 200)
        if self.actions[1].name == v7.name then
          v7.bindings = self.actions[1].bindings
          v7:resetActiveBindings()
          self.actions[1] = v7
          -- goto L200  (LOP_JUMP +10)
        end
        -- TODO: structure LOP_FORNLOOP (pc 190, target 170)
      else
        table.insert(self.actions, v7)
      end
      self.nameActions[v7.name] = v7
    end
  end
end
function InputBinding:resetDeviceInformation()
  self.devicesByInternalId = {}
  self.devicesByCategory = {}
  self.deviceIdToInternal = {}
  self.internalToDeviceId = {}
  return self.devicesByInternalId
end
function InputBinding:createDefaultDevices()
  local kbMouseDevice = InputDevice.new(InputBinding.KB_MOUSE_INTERNAL_ID, InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT, InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT, InputDevice.CATEGORY.KEYBOARD_MOUSE)
  kbMouseDevice.isActive = not self.isConsoleVersion
  self.devicesByInternalId[InputBinding.KB_MOUSE_INTERNAL_ID] = kbMouseDevice
  self.devicesByCategory[InputDevice.CATEGORY.KEYBOARD_MOUSE] = {kbMouseDevice}
  self.deviceIdToInternal[kbMouseDevice.deviceId] = InputBinding.KB_MOUSE_INTERNAL_ID
end
function InputBinding:enumerateGamepadDevices(previousDevices)
  self.engineDeviceIdCounts = {}
  local rootPath = getNumOfGamepads()
  self.numGamepads = rootPath
  self.internalIdToEngineDeviceId = {}
  -- TODO: structure LOP_FORNPREP (pc 18, target 106)
  local v5 = getGamepadId(0)
  local v6 = getGamepadName(0)
  self.internalIdToEngineDeviceId[0] = v5
  local v7 = InputDevice.getIsDeviceSupported(v5, v6)
  if v7 then
    local v7, v8 = InputDevice.getDeviceIdPrefix(v5)
    if v7 < 0 then
    end
    if not self.engineDeviceIdCounts[v8] then
    end
    self.engineDeviceIdCounts[v8] = v9 + 1
    if 0 <= v7 then
    else
      local v11 = InputDevice.getPrefixedDeviceId(v8, v9)
    end
    self.deviceIdToInternal[v10] = modName
    self.internalToDeviceId[modName] = v10
    v11 = InputBinding.getDeviceCategory(modName)
    local v12 = InputDevice.new(modName, v10, v6, v11)
    self.devicesByInternalId[modName] = v12
    if not self.devicesByCategory[v11] then
      self.devicesByCategory[v11] = {}
    end
    table.insert(self.devicesByCategory[v11], v12)
  end
  -- TODO: structure LOP_FORNLOOP (pc 105, target 19)
  for v5, v6 in pairs(previousDevices) do
    if not not self.deviceIdToInternal[v6.deviceId] then
      continue
    end
    v6.internalId = -1
    self.missingDevices[v6.deviceId] = v6
  end
end
function InputBinding:getGamepadDevices()
  for v5, v6 in pairs(self.devicesByInternalId) do
    local v7 = v6:isController()
    if not v7 then
      continue
    end
    table.insert(xmlFile, {deviceId = v6.deviceId, name = v6.deviceName})
  end
  return xmlFile
end
function InputBinding:loadDeviceSettingsFromXML(xmlFile)
  while true do
    modName = string.format("inputBinding.devices.device(%d)", i18n)
    v5 = hasXMLProperty(xmlFile, modName)
    if not v5 then
      break
    end
    v5 = InputDevice.loadIdFromXML(xmlFile, modName)
    rootPath[v5] = true
    if self.deviceIdToInternal[v5] then
      self.devicesByInternalId[self.deviceIdToInternal[v5]]:loadSettingsFromXML(xmlFile, modName)
      v8 = InputDevice.loadCategoryFromXML(xmlFile, modName)
      -- if v8 ~= InputDevice.CATEGORY.UNKNOWN then goto L78 end
      -- if v8 == v0.devicesByInternalId[v0.deviceIdToInternal[v5]].category then goto L78 end
      self.devicesToMigrateCategory[v5] = self.devicesByInternalId[self.deviceIdToInternal[v5]]
    elseif v5 and v5 ~= "" then
      v7 = InputDevice.loadCategoryFromXML(xmlFile, modName)
      v8 = InputDevice.loadNameFromXML(xmlFile, modName)
      v9 = InputDevice.new(-1, v5, v8, v7)
      v9:loadSettingsFromXML(xmlFile, modName)
      self.missingDevices[v5] = v9
    end
  end
  for v7 in pairs(self.deviceIdToInternal) do
    if not not rootPath[v7] then
      continue
    end
    self.newlyConnectedDevices[v7] = true
  end
end
function InputBinding:applyGamepadDeadzones()
  if GS_PLATFORM_PC then
    for modName, v5 in pairs(self.devicesByInternalId) do
      local v6 = v5:isController()
      if not v6 then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 18, target 27)
      setGamepadDeadzone(0, v5.internalId, 0)
      -- TODO: structure LOP_FORNLOOP (pc 26, target 19)
    end
  end
end
function InputBinding:initializeGamepadMapping(xmlFile)
  local previousDevices = self:resetDeviceInformation()
  self:createDefaultDevices()
  self:enumerateGamepadDevices(previousDevices)
  if xmlFile ~= nil then
    self:loadDeviceSettingsFromXML(xmlFile)
  end
  self:applyGamepadDeadzones()
end
function InputBinding:validateAndRepairComboActionBindings()
  for modName, v5 in pairs(self.actions) do
    local v6 = v5:getBindings()
    if 0 < self.numGamepads then
      -- if not InputBinding.GAMEPAD_COMBO_BINDINGS[v5.name] then goto L37 end
    elseif not self.isConsoleVersion and InputBinding.MOUSE_COMBO_BINDINGS[v5.name] then
    end
    if not v7 then
      continue
    end
    local v11 = table.copy(v7)
    for v15 in pairs(v6) do
      v6[v15] = nil
    end
    v12 = Binding.new(v9, v11, Binding.AXIS_COMPONENT.POSITIVE, Binding.INPUT_COMPONENT.POSITIVE, 0, v8)
    table.insert(v6, v12)
    if self.deviceIdToInternal[v6[1].deviceId] ~= nil then
    end
    v13:setIndex(v8)
    v13:updateData(v9, v10, v11, Binding.INPUT_COMPONENT.POSITIVE)
    v15 = self:resolveBindingDefaultDevice(v13, nil)
    v13:setActive(v15)
    v13:makeId()
  end
end
function InputBinding:loadActionBindingsFromXML(xmlFile, silentIgnoreDuplicates, modName, disallowedDeviceIds, requireUnknownBindings, markActionKnown)
  if modName then
  end
  self:loadActionBindingsFromXMLPath(xmlFile, v7, silentIgnoreDuplicates, disallowedDeviceIds, requireUnknownBindings, markActionKnown)
end
function InputBinding:loadActionBindingsFromXMLPath(xmlFile, rootPath, silentIgnoreDuplicates, disallowedDeviceIds, requireUnknownBindings, markActionKnown)
  while true do
    v8 = string.format("%s.actionBinding(%d)", rootPath, v7)
    v9 = hasXMLProperty(xmlFile, v8)
    if not v9 then
      break
    end
    v9 = getXMLString(xmlFile, v8 .. "#action")
    if v9 and v9 ~= "" and self.nameActions[v9] then
      if self.nameActions[v9].bindingsKnown then
        -- if v5 then goto L43 end
      end
      if markActionKnown then
        v10.bindingsKnown = true
      end
      self:loadBindingsFromXML(xmlFile, v8, v10, silentIgnoreDuplicates, disallowedDeviceIds)
    end
  end
end
function InputBinding:loadBindingsFromXML(xmlFile, actionPath, action, silentIgnoreDuplicates, disallowedDeviceIds)
  while true do
    v9 = string.format(".binding(%d)", v6)
    v8 = hasXMLProperty(xmlFile, actionPath .. v9)
    if not v8 then
      break
    end
    v8 = Binding.createFromXML(xmlFile, actionPath .. v9)
    v9 = self:resolveBindingDefaultDevice(v8, disallowedDeviceIds)
    if v9 then
      self:addBinding(action, v8, silentIgnoreDuplicates)
    end
  end
end
function InputBinding:storeComboInputMappings()
  self.comboInputAxisMasks = {}
  self.comboInputActions = {}
  self.comboInputBindings = {}
  if not self.isConsoleVersion then
  end
  for v5, v6 in pairs(xmlFile) do
    for v10, v11 in pairs(v6) do
      if not self.nameActions[v10] then
        continue
      end
      local v15 = self.nameActions[v10]:getBindings()
      for v17, v18 in ipairs(...) do
        if not v18.isActive then
          continue
        end
        if self.devicesByInternalId[v18.internalDeviceId].category ~= InputDevice.CATEGORY.GAMEPAD and not v18.isMouse then
          continue
        end
        break
      end
      if not (v13 ~= nil) then
        continue
      end
      self.comboInputAxisMasks[v13.axisNameSet] = v11.mask
      self.comboInputActions[v13.axisNameSet] = v10
      self.comboInputBindings[v10] = v13
    end
  end
end
function InputBinding:getBindingComboMask(binding)
  for v5, v6 in pairs(self.comboInputAxisMasks) do
    local v7 = table.equalSets(v5, binding.modifierAxisSet)
    if not v7 then
      continue
    end
    return v6
  end
  return 0
end
function InputBinding:assignComboMasks()
  for modName, v5 in pairs(self.actions) do
    local v6 = v5:getActiveBindings()
    v5.comboMaskMouse = 0
    v5.comboMaskGamepad = 0
    for v10, v11 in pairs(v6) do
      local v12 = self:getBindingComboMask(v11)
      if v11.isMouse then
        if not (InputBinding.MOUSE_COMBOS[v5.name] == nil) then
          continue
        end
        v5.comboMaskMouse = v12
        v11:setComboMask(v12)
      else
        if not v11.isActive then
          continue
        end
        if self.devicesByInternalId[v11.internalDeviceId].category == InputDevice.CATEGORY.GAMEPAD then
        end
        if InputBinding.GAMEPAD_COMBOS[v5.name] ~= nil then
        end
        if not v14 then
          continue
        end
        if not true then
          continue
        end
        v5.comboMaskGamepad = v12
        v11:setComboMask(v12)
      end
    end
  end
end
function InputBinding:storeLinkedBindings()
  for modName, v5 in pairs(self.actions) do
    if not (InputAction.LINKED_ACTIONS[v5.name] ~= nil) then
      continue
    end
    local v9 = v5:getBindings()
    for v11, v12 in pairs(...) do
      if self.linkedBindings[v12] == nil then
        self.linkedBindings[v12] = {}
      end
      local v14 = v7:getBindings()
      for v18, v19 in pairs(v14) do
        if not (v19.deviceId == v12.deviceId) then
          continue
        end
        if not (v19.index == v12.index) then
          continue
        end
        table.insert(v13, v19)
      end
    end
  end
end
function InputBinding:assignActionPrimaryBindings()
  for modName, v5 in pairs(self.actions) do
    local v6 = v5:getActiveBindings()
    for v10, v11 in pairs(v6) do
      if not (v11.deviceId == InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT) then
        continue
      end
      if not (v11.index == 1) then
        continue
      end
      v5:setPrimaryKeyboardBinding(v11)
    end
  end
end
function InputBinding.adjustBindingSlotIndex(v0, xmlFile, rootPath)
  if 1 <= xmlFile.index then
    return true
  end
  if xmlFile.deviceId ~= InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT then
  end
  if true then
    local modName = InputBinding.getIsMouseInput(xmlFile.axisNames)
    -- if not v4 then goto L42 end
    modName = rootPath:getBindingAtSlot(xmlFile.axisComponent, true, Binding.MAX_ALTERNATIVES_KB_MOUSE)
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L70
    xmlFile:setIndex(Binding.MAX_ALTERNATIVES_KB_MOUSE)
    return true
  else
    if true then
    else
    end
    -- TODO: structure LOP_FORNPREP (pc 53, target 70)
    local v8 = rootPath:getBindingAtSlot(xmlFile.axisComponent, i18n, 1)
    if v8 == nil then
      xmlFile:setIndex(1)
      return true
    end
    -- TODO: structure LOP_FORNLOOP (pc 69, target 54)
  end
  return false
end
function InputBinding:upgradeBindingVersion(xmlFileInputBinding)
  local i18n = getXMLInt(xmlFileInputBinding, "inputBinding#bindingVersion")
  local rootPath = Utils.getNoNil(i18n, 0)
  if rootPath == 0 then
    for v6, v7 in pairs(self.actions) do
      for v12, v13 in pairs(v7.bindings) do
        v8[v12] = v13
      end
      for v12, v13 in pairs(v8) do
        if not v13.isGamepad then
          continue
        end
        if self.deviceIdToInternal[v13.deviceId] then
        end
        if not v14 then
        end
        if not v14 then
          continue
        end
        if not (v14.category == InputDevice.CATEGORY.UNKNOWN) then
          continue
        end
        for v21, v22 in ipairs(v13.axisNames) do
          local v27 = v22:len()
          local v25 = v22:sub(...)
          if v25 ~= "+" then
            -- cmp-jump LOP_JUMPXEQKS R25 aux=0x8000001b -> L90
          end
          local v30 = v22:len()
          local v26 = v22:sub(1, v30 - 1)
          -- goto L91  (LOP_JUMP +1)
          if v26 ~= "HALF_AXIS_1" then
            -- cmp-jump LOP_JUMPXEQKS R24 aux=0x8000001f -> L98
          end
          -- goto L158  (LOP_JUMP +60)
          if v24 ~= "HALF_AXIS_2" then
            -- cmp-jump LOP_JUMPXEQKS R24 aux=0x80000022 -> L105
          end
          -- goto L158  (LOP_JUMP +53)
          if v24 == "AXIS_2" then
          elseif v24 == "AXIS_7" then
          else
            if v24 == "BUTTON_21" then
            elseif v24 == "BUTTON_22" then
            else
              if v24 == "BUTTON_23" then
              elseif v24 == "BUTTON_24" then
              else
                if v24 == "BUTTON_25" then
                elseif v24 == "BUTTON_26" then
                else
                  if v24 == "BUTTON_27" then
                  elseif v24 == "BUTTON_28" then
                  end
                end
              end
            end
          end
          table.insert(v16, v23)
        end
        if not v17 then
          continue
        end
        if not (0 < #v16) then
          continue
        end
        v22 = v16[#v16]:len()
        v20 = v16[#v16]:sub(...)
        if v20 == "-" then
        end
        v7:removeBinding(v13)
        v20 = Binding.new(v13.deviceId, v16, v13.axisComponent, v19, v13.neutralInput, v13.index)
        self:addBinding(v7, v20)
      end
    end
  end
end
function InputBinding:resolveBindingDevice(oldDevice, newDevice)
  if oldDevice.category == InputDevice.CATEGORY.UNKNOWN and oldDevice.category ~= newDevice.category then
    self.devicesToMigrateCategory[newDevice.deviceId] = newDevice
  end
  for v6, v7 in pairs(self.actions) do
    for v11, v12 in pairs(v7.bindings) do
      if not (v12.deviceId == oldDevice.deviceId) then
        continue
      end
      v12.deviceId = newDevice.deviceId
      v12.internalDeviceId = newDevice.internalId
      v12:setActive(true)
      v12:makeId()
    end
  end
end
function InputBinding:resolveBindingDevices()
  local usedDevices = self:getAllDevicesWithBindings()
  for v5, v6 in pairs(self.missingDevices) do
    if not usedDevices[v5] then
      continue
    end
    for v10, v11 in pairs(self.devicesByInternalId) do
      if not (v11.deviceName == v6.deviceName) then
        continue
      end
      if not not usedDevices[v11.deviceId] then
        continue
      end
      self:resolveBindingDevice(v6, v11)
      usedDevices[v11.deviceId] = true
      self.missingDevices[v5] = nil
      break
    end
  end
  for v5, v6 in pairs(self.missingDevices) do
    if not usedDevices[v5] then
      continue
    end
    if not (v6.category ~= InputDevice.CATEGORY.UNKNOWN) then
      continue
    end
    for v10, v11 in pairs(self.devicesByInternalId) do
      if not (v11.category == v6.category) then
        continue
      end
      if not not usedDevices[v11.deviceId] then
        continue
      end
      self:resolveBindingDevice(v6, v11)
      usedDevices[v11.deviceId] = true
      self.missingDevices[v5] = nil
      break
    end
  end
  for v5 in pairs(self.missingDevices) do
    if not not usedDevices[v5] then
      continue
    end
    self.missingDevices[v5] = nil
  end
end
function InputBinding:resolveBindingDefaultDevice(binding, disallowedDeviceIds)
  if not InputDevice.DEFAULT_DEVICE_NAMES[binding.deviceId] then
    return true
  end
  for v8, v9 in pairs(self.devicesByInternalId) do
    if not (v9.category == modName) then
      continue
    end
    if disallowedDeviceIds ~= nil and not not disallowedDeviceIds[v9.deviceId] then
      continue
    end
    binding.deviceId = v9.deviceId
    binding.internalDeviceId = v9.internalId
    return true
  end
  return false
end
function InputBinding:migrateDevicesCategory()
  if not GS_PLATFORM_PC then
    local xmlFileInputBinding = next(self.devicesToMigrateCategory)
    if xmlFileInputBinding then
      self.devicesToMigrateCategory = {}
    end
    return
  end
  for modName, v5 in pairs(self.devicesToMigrateCategory) do
    if self.deviceIdToInternal[v5.deviceId] ~= nil then
      -- if v0.numGamepads > v0.deviceIdToInternal[v5.deviceId] then goto L36 end
    end
    self.devicesToMigrateCategory[modName] = nil
    continue
    local v7 = getIsGamepadMappingReliable(v6)
    if not v7 then
      continue
    end
    -- TODO: structure LOP_FORNPREP (pc 50, target 80)
    local v12, v13 = getGamepadMappedUnknownAxis(0, v6, 1)
    {}[0] = {v12, v13}
    local v14, v15 = getGamepadMappedUnknownAxis(0, v6, -1)
    {}[0] = {v14, v15}
    -- TODO: structure LOP_FORNLOOP (pc 79, target 51)
    -- TODO: structure LOP_FORNPREP (pc 87, target 95)
    v13 = getGamepadMappedUnknownButton(0, v6)
    {}[0] = v13
    -- TODO: structure LOP_FORNLOOP (pc 94, target 88)
    for v13, v14 in pairs(self.actions) do
      for v19, v20 in pairs(v14.bindings) do
        v15[v19] = v20
      end
      for v19, v20 in pairs(v15) do
        if not (v20.deviceId == v5.deviceId) then
          continue
        end
        for v25, v26 in ipairs(v20.axisNames) do
          if Input.axisIdNameToId[v26] then
            local v31 = v26:len()
            local v29 = v26:sub(...)
            if v25 == #v20.axisNames then
              local v30 = Input.isHalfAxis(Input.axisIdNameToId[v26])
              if not v30 and v20.neutralInput ~= 0 then
                if v20.neutralInput == 1 then
                else
                end
              end
            end
            if v29 == "-" then
              -- if v8 then goto L169 end
            end
            -- if not v7[v28] then goto L212 end
            -- if v7[v28][1] >= Input.MAX_NUM_AXES then goto L212 end
            local v33 = Input.isHalfAxis(v7[v28][1])
            if not v33 then
              if v7[v28][2] then
                if v29 == "-" then
                else
                end
              else
              end
            end
          elseif Input.buttonIdNameToId[v26] and v9[Input.buttonIdNameToId[v26]] and v9[Input.buttonIdNameToId[v26]] < Input.MAX_NUM_BUTTONS then
          end
          table.insert(v21, v27)
        end
        if not (0 < #v21) then
          continue
        end
        v26 = v21[#v21]:len()
        v24 = v21[#v21]:sub(...)
        if v24 == "-" then
        end
        if Input.axisIdNameToId[v22] then
          v25 = Input.isHalfAxis(Input.axisIdNameToId[v22])
          if v25 then
          end
        end
        v14:removeBinding(v20)
        v25 = Binding.new(v20.deviceId, v21, v20.axisComponent, v23, v24, v20.index)
        self:addBinding(v14, v25)
      end
    end
    self.devicesToMigrateCategory[modName] = nil
  end
end
function InputBinding:checkBindings(contextAction, checkFunctions)
  for v7, v8 in pairs(self.actions) do
    local v9 = v8:getBindings()
    for v13, v14 in pairs(v9) do
      for v18, v19 in pairs(checkFunctions) do
        local v20, v21 = v19(v14, v8)
        if not v20 then
          continue
        end
        i18n[v19] = v21
      end
    end
  end
  return i18n
end
function InputBinding:validateBinding(binding, action)
  if binding.deviceId == InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT then
    if binding.index == Binding.MAX_ALTERNATIVES_KB_MOUSE then
    else
    end
  end
  if i18n then
    local v7 = InputBinding.getIsMouseInput(binding.axisNames)
  elseif modName then
    if 0 < binding.index and binding.index <= v5 then
      v7 = InputBinding.getIsKeyboardInput(binding.axisNames)
    end
  else
    if 0 < binding.index and binding.index <= v5 then
      v7 = InputBinding.getIsGamepadInput(binding.axisNames)
    end
  end
  local v10 = self:checkBindings(action, {function(self, binding)
    local action = action:hasCollisionWith(self)
    if action then
      return true, {collisionBinding = self, collisionAction = binding}
    end
    return false, nil
  end, function(self, binding)
    if u0 == binding and u1.id == self.id then
      return true, true
    end
    return false, nil
  end, function(self, binding)
    if binding ~= u0 then
    end
    if true then
      local i18n = i18n:isSameSlot(self)
      if i18n then
        return true, true
      end
    end
    return false, nil
  end})
  return v6, not not v10[function(self, binding)
    if u0 == binding and u1.id == self.id then
      return true, true
    end
    return false, nil
  end], not not v10[function(self, binding)
    if binding ~= u0 then
    end
    if true then
      local i18n = i18n:isSameSlot(self)
      if i18n then
        return true, true
      end
    end
    return false, nil
  end], not not v10[function(self, binding)
    local action = action:hasCollisionWith(self)
    if action then
      return true, {collisionBinding = self, collisionAction = binding}
    end
    return false, nil
  end], v10[function(self, binding)
    local action = action:hasCollisionWith(self)
    if action then
      return true, {collisionBinding = self, collisionAction = binding}
    end
    return false, nil
  end]
end
function InputBinding:addBinding(action, binding, silentIgnoreDuplicates)
  local modName = self:adjustBindingSlotIndex(binding, action)
  if not modName then
    if not silentIgnoreDuplicates then
      local v6 = tostring(binding)
      local v7 = tostring(action.name)
      Logging.warning(...)
    end
    return false, nil
  end
  local v6, v7, v8, v9, v10 = self:validateBinding(binding, action)
  if v6 and not v7 then
  end
  if v11 then
    local v12 = action:getBindings()
    binding.internalDeviceId = self.deviceIdToInternal[binding.deviceId]
    local v15 = InputBinding.getIsAnalogInput(binding.unmodifiedAxis)
    binding:setIsAnalog(...)
    if binding.internalDeviceId == nil then
    end
    binding:setActive(true)
    if self.devicesByInternalId[binding.internalDeviceId] ~= nil then
      binding:updateData(nil, self.devicesByInternalId[binding.internalDeviceId].category)
    end
    binding:makeId()
    if self.loadedBindings[binding.id] ~= nil then
      -- if v0.loadedBindings[v2.id].isActive then goto L98 end
    end
    self.loadedBindings[binding.id] = binding
    -- goto L99  (LOP_JUMP +1)
    action:addBinding(v14)
    return true, v5
  end
  if v7 then
    -- if v3 then goto L136 end
    local v14 = tostring(binding)
    v15 = tostring(action.name)
    Logging.warning(...)
    return modName, v5
  end
  if v8 and not silentIgnoreDuplicates then
    v14 = tostring(binding)
    v15 = tostring(action.name)
    Logging.warning(...)
  end
  return modName, v5
end
function InputBinding:updateBinding(findDeviceId, findActionName, findBindingIndex, findAxisComponent, deviceId, axisNames, inputComponent, neutralInput)
  if self.nameActions[findActionName] ~= nil then
    local v11 = self.nameActions[findActionName]:getBindings()
    for v15, v16 in pairs(v11) do
      if not (v16.deviceId == findDeviceId) then
        continue
      end
      if not (v16.index == findBindingIndex) then
        continue
      end
      if not (v16.axisComponent == findAxisComponent) then
        continue
      end
    end
  end
  if v9 ~= nil then
    v10:removeBinding(v9)
    v13 = Binding.new(deviceId, axisNames, findAxisComponent, inputComponent, neutralInput, findBindingIndex)
    v14, v15 = self:addBinding(v10, v13, true)
    if not v14 then
      self:addBinding(v10, v9, true)
    end
  end
  return v11, v12
end
function InputBinding:deleteBinding(findDeviceId, findActionName, findBindingIndex, findAxisComponent)
  if self.nameActions[findActionName] ~= nil then
    local v6 = self.nameActions[findActionName]:getBindings()
    for v10, v11 in pairs(v6) do
      if not (v11.deviceId == findDeviceId) then
        continue
      end
      if not (v11.index == findBindingIndex) then
        continue
      end
      if not (v11.axisComponent == findAxisComponent) then
        continue
      end
      table.remove(v6, v10)
      return
    end
  end
end
function InputBinding:getKeyboardMouseInputActiveAndValue(axes, axisDirection, inputDirection)
  local modName = next(axes)
  if not modName then
    return false, 0
  end
  for v9, v10 in pairs(axes) do
    if not Input[v10] then
      return false, v5
    end
    if InputBinding.MOUSE_AXES[v10] then
      -- if v11 ~= Input.AXIS_X then goto L37 end
      if not (axisDirection ~= inputDirection) then
        continue
      end
    elseif InputBinding.MOUSE_AXES[v10] then
      -- if v11 ~= Input.AXIS_Y then goto L53 end
      if not (axisDirection ~= inputDirection) then
        continue
      end
    else
      if InputBinding.MOUSE_BUTTONS[v10] then
        local v12 = Input.isMouseButtonPressed(v11)
        -- if v12 then goto L69 end
      end
      v12 = Input.isKeyPressed(v11)
      if v12 then
      else
        return false, 0
      end
    end
  end
  return modName, v5
end
function InputBinding:getGamepadInputActiveAndValue(internalDeviceId, axisNames, neutralInput, axisDirection)
  if #axisNames == 0 then
    return false, 0
  end
  -- TODO: structure LOP_FORNPREP (pc 9, target 28)
  local v11 = self:getGamepadAxisOrButtonValue(internalDeviceId, axisNames[1], neutralInput)
  if v11 < Binding.PRESSED_MAGNITUDE_THRESHOLD then
    return false, 0
  end
  -- TODO: structure LOP_FORNLOOP (pc 27, target 10)
  local v6, v7 = self:getGamepadAxisOrButtonValue(internalDeviceId, axisNames[v5], neutralInput)
  if not v7 and v6 < Binding.PRESSED_MAGNITUDE_THRESHOLD then
    return false, 0
  end
  if axisDirection < 0 then
  end
  return true, v6
end
function InputBinding:getGamepadAxisOrButtonValue(internalDeviceId, axisName, neutralInput)
  if Input.buttonIdNameToId[axisName] ~= nil then
    local v5 = getInputButton(Input.buttonIdNameToId[axisName], internalDeviceId)
    return v5, false
  end
  if Input.axisIdNameToId[axisName] ~= nil then
    local v6 = self:getGamepadAxisValue(internalDeviceId, Input.axisIdNameToId[axisName], axisName, neutralInput)
    return v6, true
  end
  return 0, false
end
function InputBinding:getGamepadAxisValue(internalDeviceId, axisId, axisName, neutralInput, overrideDeadzone)
  local v7 = Input.isHalfAxis(axisId)
  if v7 then
    local v9 = getInputAxis(axisId, internalDeviceId)
  else
    v7 = getInputAxis(axisId, internalDeviceId)
    if neutralInput ~= 0 then
    end
    v9 = axisName:len()
    v7 = axisName:sub(...)
    if v7 == "-" then
    end
  end
  if self.devicesByInternalId[internalDeviceId] then
    if v6 ~= 0 then
      self.devicesByInternalId[internalDeviceId]:updateForceFeedbackState(axisId)
    end
    if GS_PLATFORM_PC then
      local v8 = v7:getDeadzone(axisId)
      if overrideDeadzone ~= nil then
      end
      if 0.999 >= v8 then
        v9 = math.abs(v6)
        -- if v9 >= v8 then goto L66 end
      end
      return 0
      if 0 < 0 then
        return (0 - v8) / (1 - v8)
      end
    end
  end
  return v6
end
function InputBinding:update(dt)
  self.needUpdateAbort = false
  self.timeSinceLastInputHelpModeChange = self.timeSinceLastInputHelpModeChange + dt
  self:checkGamepadsChanged()
  self:checkGamepadsCategoryChanged()
  self:checkGamepadActive(self.numGamepads)
  self:updateMouseInput()
  self:updateInput()
  self:finalizeMouseInput()
end
function InputBinding:draw()
  if self.debugEnabled then
    self:updateDebugDisplay()
  end
  if self.debugContextEnabled then
    self:debugRenderInputContext()
  end
  if self.debugRegisteredActions then
    self:debugRenderRegisteredActions()
  end
end
function InputBinding:checkGamepadsChanged()
  local axes = getNumOfGamepads()
  if axes == self.numGamepads then
  end
  if not true then
    -- TODO: structure LOP_FORNPREP (pc 13, target 26)
    local v6 = getGamepadId(0)
    if v6 ~= self.internalIdToEngineDeviceId[0] then
    else
      -- TODO: structure LOP_FORNLOOP (pc 25, target 14)
    end
  end
  if axisDirection then
    self.numGamepads = axes
    self:load()
    inputDirection:publish(MessageType.INPUT_DEVICES_CHANGED)
    if GS_PLATFORM_GGP then
      self:assignLastInputHelpMode(GS_INPUT_HELP_MODE_GAMEPAD, true)
    end
  end
end
function InputBinding:checkGamepadsCategoryChanged()
  if not GS_PLATFORM_PC then
    return
  end
  -- TODO: structure LOP_FORNPREP (pc 9, target 34)
  if self.devicesByInternalId[0] and self.devicesByInternalId[0].category == InputDevice.CATEGORY.UNKNOWN then
    local v5 = getGamepadCategory(0)
    if v5 ~= self.devicesByInternalId[0].category then
      self.devicesToMigrateCategory[self.devicesByInternalId[0].deviceId] = self.devicesByInternalId[0]
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 33, target 10)
  for modName, v5 in pairs(self.devicesToMigrateCategory) do
    if self.deviceIdToInternal[v5.deviceId] then
      local v7 = getIsGamepadMappingReliable(self.deviceIdToInternal[v5.deviceId])
      if not v7 then
        continue
      end
      self:load()
      return
    else
      self.devicesToMigrateCategory[modName] = nil
    end
  end
end
function InputBinding:checkGamepadActive(numGamepads)
  if 0 < numGamepads and self.lastInputHelpMode ~= GS_INPUT_HELP_MODE_GAMEPAD then
    -- TODO: structure LOP_FORNPREP (pc 17, target 103)
    if self.gamepadInputState[0] == nil then
      self.gamepadInputState[0] = {buttons = {}, axes = {}}
    end
    -- TODO: structure LOP_FORNPREP (pc 45, target 67)
    local v14 = getInputButton(0, v6)
    if not axisDirection then
      local v16 = math.abs(v14 - (v7.buttons[0] or 0))
      if inputDirection >= v16 then
      end
    end
    v8[v12] = v14
    -- TODO: structure LOP_FORNLOOP (pc 66, target 46)
    for v12 = 0, Input.MAX_NUM_AXES - 1 do
      v14 = Input.isHalfAxis(v12)
      if v14 then
      else
      end
      local v15 = getInputAxis(v12, v6)
      if not axisDirection then
        local v17 = math.abs(v15 - (v9[v12] or v13))
        if inputDirection >= v17 then
        end
      end
      v9[v12] = v15
      -- TODO: structure LOP_FORNLOOP (pc 101, target 73)
    end
  end
  if axisDirection then
    self:assignLastInputHelpMode(GS_INPUT_HELP_MODE_GAMEPAD)
  end
end
function InputBinding:updateMouseInput()
  self.inputMouseXAxisValue = 0
  self.inputMouseYAxisValue = 0
  local inputDirection = math.abs(self.accumMouseMovementX)
  if 0.0005 < inputDirection then
    local modName = MathUtil.clamp(self.accumMouseMovementX, -InputBinding.MOUSE_MOVE_LIMIT, InputBinding.MOUSE_MOVE_LIMIT)
    self.inputMouseXAxisValue = modName * InputBinding.MOUSE_MOVE_BASE_FACTOR
  end
  inputDirection = math.abs(axisDirection)
  if 0.0005 < inputDirection then
    modName = MathUtil.clamp(axisDirection, -InputBinding.MOUSE_MOVE_LIMIT, InputBinding.MOUSE_MOVE_LIMIT)
    self.inputMouseYAxisValue = modName * InputBinding.MOUSE_MOVE_BASE_FACTOR
  end
  if self.inputMouseXAxisValue == 0 then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0xe -> L80
  end
  self:assignLastInputHelpMode(GS_INPUT_HELP_MODE_KEYBOARD)
end
function InputBinding:finalizeMouseInput()
  if self.wrapMousePositionEnabled then
    wrapMousePosition(self.saveCursorX, self.saveCursorY)
    self.mousePosXLast = self.saveCursorX
    self.mousePosYLast = self.saveCursorY
  end
  self.accumMouseMovementX = 0
  self.accumMouseMovementY = 0
  self.inputMouseXAxisValue = 0
  self.inputMouseYAxisValue = 0
end
function InputBinding:clearActiveBindingBuffer(activeBindingsBuffer)
  for v5 in pairs(self.devicesByInternalId) do
    if activeBindingsBuffer[v5] then
      for v11 in pairs(activeBindingsBuffer[v5]) do
        v7[v11] = nil
      end
    else
      activeBindingsBuffer[v5] = {}
    end
  end
end
function InputBinding:updateEventBindings(activeBindingsBuffer)
  for v5 in pairs(self.activeBindings) do
    if not v5.isActive then
      continue
    end
    self:updateBindingInput(v5)
    if not v5.isUp and v5.inputValue == 0 then
    end
    for v12, v13 in ipairs(v7) do
      if not (v13 ~= v5) then
        continue
      end
      if v8 and not v13.isShadowed then
        local v14 = table.isRealSubset(v13.axisNameSet, v5.axisNameSet)
        if v14 then
          v13.isShadowed = true
        end
      end
      if not v13.isUp and v13.inputValue == 0 then
      end
      if not v14 then
        continue
      end
      if not not v5.isShadowed then
        continue
      end
      local v15 = table.isRealSubset(v5.axisNameSet, v13.axisNameSet)
      if not v15 then
        continue
      end
      v5.isShadowed = true
    end
    v7[#v7 + 1] = v5
  end
end
function InputBinding:hasBindingForPressedMouseComboMask(pressedMouseComboMask)
  for v5 in pairs(self.activeBindings) do
    if not v5.isMouse then
      continue
    end
    local v7 = v5:getComboMask()
    if not (v7 == pressedMouseComboMask) then
      continue
    end
    return true
  end
  return false
end
function InputBinding:shadowLinkedBindings()
  for modName, v5 in pairs(self.linkedBindings) do
    if not modName.isShadowed then
      continue
    end
    for v9, v10 in pairs(v5) do
      v10.isShadowed = true
    end
  end
end
function InputBinding:updateComboBindings()
  for modName, v5 in pairs(InputBinding.ALL_COMBOS) do
    for v9 in pairs(v5) do
      if not self.comboInputBindings[v9] then
        continue
      end
      if not self.comboInputBindings[v9].isActive then
        continue
      end
      self:updateBindingInput(self.comboInputBindings[v9])
    end
  end
end
function InputBinding:updateInput()
  self.needUpdateAbort = false
  local axes, axisDirection = self:getComboCommandPressedMask()
  if axes == self.pressedGamepadComboMask then
    -- if v2 == v0.pressedMouseComboMask then goto L22 end
  end
  self:resetContinuousEventBindings(true, self.pressedGamepadComboMask, self.pressedMouseComboMask)
  self.pressedGamepadComboMask = axes
  self.pressedMouseComboMask = axisDirection
  self:clearActiveBindingBuffer(self.activeDeviceBindingsBuffer)
  self:updateEventBindings(self.activeDeviceBindingsBuffer)
  self:shadowLinkedBindings()
  local inputDirection = self:hasBindingForPressedMouseComboMask(axisDirection)
  for v7, v8 in ipairs(self.eventOrder) do
    if self.needUpdateAbort then
      self.needUpdateAbort = false
      break
    end
    for v15, v16 in pairs(self.eventBindings[v8]) do
      if inputDirection and v16.isMouse then
      end
      local v19 = v8:getIgnoreComboMask()
      if v19 then
        -- if not v18 then goto L114 end
      end
      if v16.isMouse then
        if v16.comboMask ~= axisDirection then
        end
      elseif v16.comboMask ~= axes then
      end
      if not v17 then
        continue
      end
      if not v16.isInputActive then
        continue
      end
      if not not v16.isShadowed then
        continue
      end
      v19 = v16:getFrameTriggered()
      if not not v19 then
        continue
      end
      if v10 then
        v19 = math.abs(v16.inputValue)
        if v11 >= v19 then
          if not v16.isUp then
            continue
          end
          if not (v11 == 0) then
            continue
          end
        end
      end
      v19 = math.abs(v16.inputValue)
    end
    if not (v10 ~= nil) then
      continue
    end
    v8:notifyInput(v10)
  end
  self:updateComboBindings()
  for v7, v8 in pairs(self.eventBindings) do
    v7:frameReset()
  end
end
function InputBinding:updateBindingInput(binding)
  if self.devicesByInternalId[binding.internalDeviceId] == nil then
    return
  end
  if axisDirection.category == InputDevice.CATEGORY.KEYBOARD_MOUSE then
    local v5, v6 = self:getKeyboardMouseInputActiveAndValue(binding.axisNames, binding.axisDirection, binding.inputDirection)
  elseif self.isGamepadEnabled then
    v5, v6 = self:getGamepadInputActiveAndValue(binding.internalDeviceId, binding.axisNames, binding.neutralInput, binding.axisDirection)
    if v6 ~= 0 then
    end
  end
  binding:updateInput(modName, inputDirection)
end
function InputBinding:resetContinuousEventBindings(checkComboMasks, gamepadComboMask, mouseComboMask)
  for v7, v8 in pairs(self.eventBindings) do
    if not v7.triggerAlways then
      continue
    end
    local v9 = v7:getIgnoreComboMask()
    if not not v9 then
      continue
    end
    for v12, v13 in pairs(v8) do
      if checkComboMasks then
        if v13.isGamepad then
          -- if v13.comboMask == v2 then goto L37 end
        end
        if v13.isMouse and v13.comboMask ~= mouseComboMask then
        end
      end
      if not v14 then
        continue
      end
      self:neutralizeEventBindingInput(v7, v13)
    end
  end
end
function InputBinding.neutralizeEventBindingInput(v0, binding, axisDirection)
  axisDirection:updateInput(0, true)
  binding:frameReset()
  binding:notifyInput(axisDirection)
end
function InputBinding:updateDebugDisplay()
  -- TODO: structure LOP_FORNPREP (pc 6, target 299)
  setTextColor(1, 1, 1, 1)
  setTextBold(true)
  local v9 = getCorrectTextSize(0.012)
  local v10 = getGamepadName(0)
  renderText(...)
  setTextBold(false)
  -- TODO: structure LOP_FORNPREP (pc 42, target 94)
  local v12 = getCorrectTextSize(0.012)
  renderText(0.02, 0.95 - 0.015, v12, "- " .. 0)
  v12 = getCorrectTextSize(0.012)
  local v14 = getGamepadButtonLabel(0, 0)
  renderText(0.02 + 0.05, 0.95 - 0.015, v12, v14 or "n/a")
  v12 = getCorrectTextSize(0.012)
  local v15 = getInputButton(0, 0)
  if 0 >= v15 then
  end
  local v13 = v13(true)
  v9(...)
  -- TODO: structure LOP_FORNLOOP (pc 93, target 43)
  -- TODO: structure LOP_FORNPREP (pc 99, target 147)
  v12 = getCorrectTextSize(0.012)
  renderText(binding, v5 - 0.015, v12, "+ " .. 0)
  v12 = getCorrectTextSize(0.012)
  v14 = getGamepadAxisLabel(0, modName)
  renderText(binding + 0.05, v5 - 0.015, v12, v14 or "n/a")
  v12 = getCorrectTextSize(0.012)
  v15 = getInputAxis(0, modName)
  v13 = string.format(...)
  renderText(...)
  -- TODO: structure LOP_FORNLOOP (pc 146, target 100)
  setTextColor(1, 0, 0, 1)
  setTextBold(true)
  v9 = getCorrectTextSize(0.012)
  v10 = getGamepadName(modName)
  renderText(...)
  setTextBold(false)
  -- TODO: structure LOP_FORNPREP (pc 192, target 244)
  v12 = getCorrectTextSize(0.012)
  renderText(binding - 0.5 / g_screenWidth, 0.95 + 0.5 / g_screenHeight - 0.015, v12, "- " .. 0)
  v12 = getCorrectTextSize(0.012)
  v14 = getGamepadButtonLabel(0, modName)
  renderText(binding - 0.5 / g_screenWidth + 0.05, 0.95 + 0.5 / g_screenHeight - 0.015, v12, v14 or "n/a")
  v12 = getCorrectTextSize(0.012)
  v15 = getInputButton(0, modName)
  if 0 >= v15 then
  end
  v13 = v13(true)
  v9(...)
  -- TODO: structure LOP_FORNLOOP (pc 243, target 193)
  -- TODO: structure LOP_FORNPREP (pc 249, target 297)
  v12 = getCorrectTextSize(0.012)
  renderText(binding, v5 - 0.015, v12, "+ " .. 0)
  v12 = getCorrectTextSize(0.012)
  v14 = getGamepadAxisLabel(0, modName)
  renderText(binding + 0.05, v5 - 0.015, v12, v14 or "n/a")
  v12 = getCorrectTextSize(0.012)
  v15 = getInputAxis(0, modName)
  v13 = string.format(...)
  renderText(...)
  -- TODO: structure LOP_FORNLOOP (pc 296, target 250)
  -- TODO: structure LOP_FORNLOOP (pc 298, target 7)
end
function InputBinding:saveToXMLFile()
  if self.settingsPath ~= InputBinding.PATHS.USER_BINDINGS then
    return
  end
  local xmlFile = loadXMLFile("InputBindings", self.settingsPath)
  while true do
    modName = string.format("inputBinding.actionBinding(%d)", axisDirection - 1)
    v5 = hasXMLProperty(xmlFile, modName)
    if not v5 then
      break
    else
      v5 = getXMLString(xmlFile, modName .. "#action")
      if v5 and InputAction[v5] then
        if self.nameActions[v5] ~= nil then
          v6 = string.format("%s.binding(0)", modName)
          while true do
            v7 = hasXMLProperty(xmlFile, v6)
            if not v7 then
              break
            end
            removeXMLProperty(xmlFile, v6)
          end
          v8 = self.nameActions[v5]:getBindings()
          for v12, v13 in ipairs(v8) do
            v14 = string.format("%s.binding(%d)", modName, v12 - 1)
            v13:saveToXMLFile(xmlFile, v14)
          end
        end
        inputDirection[v5] = true
      end
    end
  end
  for v7, v8 in ipairs(self.actions) do
    if not not inputDirection[v8.name] then
      continue
    end
    v9 = string.format("inputBinding.actionBinding(%d)", axisDirection - 1)
    setXMLString(xmlFile, v9 .. "#action", v8.name)
    v10 = v8:getBindings()
    for v14, v15 in ipairs(v10) do
      local v16 = string.format("%s.binding(%d)", v9, v14 - 1)
      v15:saveToXMLFile(xmlFile, v16)
    end
  end
  self:saveDeviceSettings(xmlFile)
  setXMLFloat(xmlFile, "inputBinding#mouseSensitivityScaleX", self.mouseMotionScaleX)
  setXMLFloat(xmlFile, "inputBinding#mouseSensitivityScaleY", self.mouseMotionScaleY)
  setXMLInt(xmlFile, "inputBinding#bindingVersion", InputBinding.currentBindingVersion)
  saveXMLFile(xmlFile)
  delete(xmlFile)
  syncProfileFiles()
end
function InputBinding:saveDeviceSettings(xmlFile)
  while true do
    axisDirection = hasXMLProperty(xmlFile, "inputBinding.devices.device(0)")
    if not axisDirection then
      break
    end
    removeXMLProperty(xmlFile, "inputBinding.devices.device(0)")
  end
  for v6, v7 in pairs(self.devicesByInternalId) do
    if not not InputDevice.DEFAULT_DEVICE_NAMES[v7.deviceId] then
      continue
    end
    local v8 = string.format("inputBinding.devices.device(%d)", axisDirection)
    v7:saveSettingsToXML(xmlFile, v8)
  end
  for v6, v7 in pairs(self.missingDevices) do
    if not not InputDevice.DEFAULT_DEVICE_NAMES[v7.deviceId] then
      continue
    end
    v8 = string.format("inputBinding.devices.device(%d)", axisDirection)
    v7:saveSettingsToXML(xmlFile, v8)
  end
end
function InputBinding:getActionList()
  for v5, v6 in ipairs(self.actions) do
    local v7 = v6:clone()
    table.insert(binding, v7)
  end
  return binding
end
function InputBinding:getActionByName(actionName)
  return self.nameActions[actionName]
end
function InputBinding:disableAlternateBindingsForAction(actionName)
  if self.actionEvents[self.nameActions[actionName]] ~= nil then
    for v7, v8 in pairs(self.actionEvents[self.nameActions[actionName]]) do
      if not (self.eventBindings[v8] ~= nil) then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 21, target 34)
      if 1 < self.eventBindings[v8][#self.eventBindings[v8]].index then
        table.remove(self.eventBindings[v8], #self.eventBindings[v8])
      end
      -- TODO: structure LOP_FORNLOOP (pc 33, target 22)
    end
  end
end
function InputBinding:resetActiveActionBindings()
  for modName, v5 in pairs(self.nameActions) do
    v5:resetActiveBindings()
  end
end
function InputBinding:createContext(name)
  self:deleteContext(name)
  self.contexts[name] = {actionEvents = {}, name = name, previousContextName = "", eventOrderCounter = 1}
  return {actionEvents = {}, name = name, previousContextName = "", eventOrderCounter = 1}
end
function InputBinding:deleteContext(name)
  if self.contexts[name] ~= nil then
    for v6, v7 in pairs(self.contexts[name].actionEvents) do
      -- TODO: structure LOP_FORNPREP (pc 14, target 23)
      self:removeEventInternal(v7[#v7], v7, #v7)
      -- TODO: structure LOP_FORNLOOP (pc 22, target 15)
    end
  end
  self.contexts[name] = nil
end
function InputBinding:setContext(name, createNew, deletePrevious)
  if self.contexts[name] ~= nil then
    -- if not v2 then goto L13 end
  end
  local v6 = self:createContext(name)
  if deletePrevious and self.currentContextName ~= InputBinding.ROOT_CONTEXT_NAME then
    self:deleteContext(self.currentContextName)
  end
  if self.debugEnabled then
    local v8 = tostring(self.currentContextName)
    local v9 = tostring(name)
    local v10 = tostring(createNew or false)
    local v11 = tostring(deletePrevious or false)
    Logging.devInfo(...)
  end
  if name ~= self.currentContextName then
    modName.previousContextName = self.currentContextName
    self.currentContextName = name
  end
  self:resetContinuousEventBindings(false)
  self.actionEvents = modName.actionEvents
  if v5 then
    registerGlobalActionEvents(self)
  end
  self:refreshEventCollections()
end
function InputBinding:revertContext(deleteCurrent)
  if self.currentContextName == InputBinding.ROOT_CONTEXT_NAME then
    Logging.devWarning("Tried reverting input context when at root level.")
    return
  end
  if self.contexts[self.contexts[self.currentContextName].previousContextName] then
    if deleteCurrent then
      self:deleteContext(self.currentContextName)
    end
    if self.debugEnabled then
      local v7 = tostring(self.currentContextName)
      local v8 = tostring(inputDirection)
      local v9 = tostring(deleteCurrent or false)
      Logging.devInfo(...)
    end
    self.currentContextName = inputDirection
    self.actionEvents = modName.actionEvents
    self:refreshEventCollections()
    return
  end
  v7 = tostring(inputDirection)
  Logging.warning(...)
  printCallstack()
end
function InputBinding:setPreviousContext(forContextName, previousContextName)
  if self.contexts[forContextName] ~= nil and self.contexts[previousContextName] ~= nil then
    self.contexts[forContextName].previousContextName = previousContextName
  end
end
function InputBinding:clearAllContexts()
  for modName in pairs(self.contexts) do
    if not (modName ~= InputBinding.ROOT_CONTEXT_NAME) then
      continue
    end
    self:deleteContext(modName)
  end
  if self.debugEnabled then
    Logging.devInfo("[InputBinding] Cleared all contexts")
  end
  self:setContext(InputBinding.ROOT_CONTEXT_NAME, false, false)
end
function InputBinding:getContextName()
  return self.currentContextName
end
function InputBinding:getActionBindingsCopy(onlyAssignable)
  for v6, v7 in ipairs(self.actions) do
    if onlyAssignable then
      if not onlyAssignable then
        continue
      end
      if not not v7.isLocked then
        continue
      end
    end
    local v8 = v7:getBindings()
    local v9 = v7:clone()
    table.insert(axisDirection, {action = v9, bindings = {}})
    for v15, v16 in ipairs(v8) do
      local v19 = v16:clone()
      table.insert(...)
    end
  end
  return axisDirection
end
function InputBinding:getActionBindings()
  for v5, v6 in pairs(self.actions) do
    local v7 = v6:getActiveBindings()
    binding[v6] = v7
  end
  return binding
end
function InputBinding:getEventsForActionName(actionName)
  if self.nameActions[actionName] ~= nil and self.actionEvents[self.nameActions[actionName]] ~= nil then
    local v5 = unpack(self.actionEvents[self.nameActions[actionName]])
    return {}
  end
  return InputBinding.NO_ACTION_EVENTS
end
function InputBinding:getFirstActiveEventForActionName(actionName)
  if self.nameActions[actionName] ~= nil and self.actionEvents[self.nameActions[actionName]] ~= nil then
    for v7, v8 in ipairs(self.actionEvents[self.nameActions[actionName]]) do
      if not v8.isActive then
        continue
      end
      return v8
    end
  end
  return InputEvent.NO_EVENT
end
function InputBinding:setMouseMotionScale(scale)
  self.mouseMotionScaleX = InputBinding.MOUSE_MOTION_SCALE_X_DEFAULT * scale
  self.mouseMotionScaleY = InputBinding.MOUSE_MOTION_SCALE_Y_DEFAULT * scale
end
function InputBinding:getMouseMotionScale()
  return self.mouseMotionScaleX, self.mouseMotionScaleY
end
function InputBinding:setEventChangeCallback(callback)
  self.eventChangeCallback = callback
end
function InputBinding:notifyBindingChanges()
  local modName = self:getActionBindings()
  binding:publish(...)
end
function InputBinding:notifyEventChanges()
  if self.eventChangeCallback then
    self.eventChangeCallback(self.displayActionEvents)
  end
end
function InputBinding:notifyInputModeChange(inputMode, isHelpModeUpdate)
  if not self.isConsoleVersion then
    if isHelpModeUpdate then
    end
    modName:publish(inputDirection, InputBinding.MESSAGE_PARAM_INPUT_MODE[inputMode])
  end
end
function InputBinding.checkSettingsIntegrity(v0, binding, axisDirection)
  local modName = loadXMLFile("InputBindings1", binding)
  local v5 = getXMLRootName(modName)
  if not not v5 and v5 ~= "" then
  end
  if v6 then
    Logging.error("User input bindings corrupted. Replacing with defaults...")
  end
  local v6 = loadXMLFile("InputBindings2", axisDirection)
  local v8 = getXMLFloat(modName, "inputBinding#version")
  local v7 = Utils.getNoNil(v8, 0.1)
  local v9 = getXMLFloat(v6, "inputBinding#version")
  v8 = Utils.getNoNil(v9, 0.1)
  delete(modName)
  delete(v6)
  if not inputDirection and v7 ~= v8 then
  end
  return v9
end
function InputBinding:checkDefaultInputExclusiveActionBindings()
  for modName, v5 in pairs(InputAction.EXCLUSIVE_ACTION_GROUPS) do
    for v9, v10 in ipairs(v5) do
      -- TODO: structure LOP_FORNPREP (pc 17, target 71)
      for v19, v20 in ipairs(self.nameActions[v10].bindings) do
        for v24, v25 in ipairs(v15.bindings) do
          if v20.index == 1 and v25.index ~= 1 then
          end
          if v20.inputString ~= v25.inputString then
          end
          if not v26 then
            continue
          end
          if not true then
            continue
          end
          Logging.devError("Currently loaded input bindings have conflicting primary bindings in action group '%s' for actions [%s] and [%s], both bound to [%s]", modName, v11.name, v15.name, v25.inputString)
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 70, target 18)
    end
  end
end
function InputBinding.getBindingForceFeedbackInfo(v0, binding)
  if binding == nil then
    return false, nil, 0
  end
  local axisDirection = axisDirection:getDeviceById(binding.deviceId)
  -- TODO: structure LOP_FORNPREP (pc 19, target 27)
  -- TODO: structure LOP_FORNLOOP (pc 26, target 20)
  if axisDirection ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L35
  end
  return false, nil, 0
  local modName = axisDirection:getIsForceFeedbackSupported(inputDirection)
  return modName, axisDirection, inputDirection
end
function InputBinding:setContextEventsActive(contextName, actionName, isActive)
  if not self.contexts[contextName] then
  end
  for v10, v11 in ipairs(modName.actionEvents[self.nameActions[actionName]]) do
    self:setEventActive(v11, isActive)
  end
end
function InputBinding.getIsPhysicalFullAxis(inputAxisName)
  if InputBinding.MOUSE_AXES[inputAxisName] == nil then
  end
  if not true and Input.axisIdNameToId[inputAxisName] ~= nil then
    local modName = Input.isHalfAxis(Input.axisIdNameToId[inputAxisName])
  end
  return inputDirection
end
function InputBinding.getIsHalfAxis(inputAxisName)
  return Input.isHalfAxis(Input.axisIdNameToId[inputAxisName])
end
function InputBinding.getIsAnalogInput(inputName)
  return not not InputBinding.MOUSE_AXES[inputName] or not not Input.axisIdNameToId[inputName]
end
function InputBinding.getIsKeyboardInput(inputAxisNames)
  if inputAxisNames then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000000 -> L6
  end
  return false
  for v5, v6 in pairs(inputAxisNames) do
    if binding then
    end
  end
  return binding
end
function InputBinding.getIsMouseInput(inputAxisNames)
  if inputAxisNames then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000000 -> L6
  end
  return false
  for v5, v6 in pairs(inputAxisNames) do
    if binding and not InputBinding.MOUSE_AXES[v6] then
    end
  end
  return binding
end
function InputBinding:getIsMouseWheelInput()
  if self then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000000 -> L6
  end
  return false
  return InputBinding.MOUSE_WHEEL[InputBinding.MOUSE_BUTTONS[self[1]] or ""]
end
function InputBinding.getIsGamepadInput(inputAxisNames)
  if inputAxisNames then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000000 -> L6
  end
  return false
  for v5, v6 in pairs(inputAxisNames) do
    if binding and Input.axisIdNameToId[v6] == nil and Input.buttonIdNameToId[v6] == nil then
    end
  end
  return binding
end
function InputBinding:getIsDPadInput()
  if self then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000000 -> L6
  end
  return false
  if Input.buttonIdNameToId[self[1]] ~= nil then
    return InputBinding.GAMEPAD_DPAD[Input.buttonIdNameToId[self[1]]]
  end
  return false
end
function InputBinding.isAxisZero(value)
  if value ~= nil then
    local axisDirection = math.abs(value)
    if axisDirection >= 0.0001 then
    end
  end
  return binding
end
function InputBinding.getDeviceCategory(internalDeviceId)
  if internalDeviceId == InputBinding.KB_MOUSE_INTERNAL_ID then
    return InputDevice.CATEGORY.KEYBOARD_MOUSE
  end
  return getGamepadCategory(internalDeviceId)
end
function InputBinding:printAll()
  for modName, v5 in pairs(self.actionEvents) do
    -- TODO: structure LOP_FORNPREP (pc 9, target 22)
    log(nil, self.currentContextName, "EventTable:", self.actionEvents, v5[#v5])
    -- TODO: structure LOP_FORNLOOP (pc 21, target 10)
  end
  for modName, v5 in pairs(self.contexts) do
    for v9, v10 in pairs(v5.actionEvents) do
      -- TODO: structure LOP_FORNPREP (pc 39, target 52)
      log(v5, v5.name, "EventTable:", v5.actionEvents, v10[#v10])
      -- TODO: structure LOP_FORNLOOP (pc 51, target 40)
    end
  end
end
function InputBinding:debugPrintInputContext(contextName)
  if not contextName then
  end
  if not self.contexts[contextName] then
  end
  printf("Context [%s]: previousContextName=%s, eventOrderCounter=%s", contextName, axisDirection.previousContextName, axisDirection.eventOrderCounter)
  for v6, v7 in pairs(axisDirection.actionEvents) do
    printf("  Action %s", v6)
    printf("    Bindings:")
    local v9 = v6:getBindings()
    for v11, v12 in ipairs(...) do
      printf("      %s", v12)
    end
    printf("    Events:")
    for v11, v12 in ipairs(v7) do
      printf("      %s", v12)
    end
  end
end
function InputBinding:debugRenderRegisteredActions()
  for v9, v10 in ipairs(self.actions) do
    table.insert(v5, v10)
  end
  table.sort(v5, function(self, binding)
    if self.name >= binding.name then
    end
    return true
  end)
  for v9, v10 in ipairs(v5) do
    local v11 = v10:getBindings()
    local v12 = string.format("%s (%d Bindings)", v10.name, #v11)
    setTextBold(true)
    setTextColor(0, 0, 0, 1)
    renderText(binding, axisDirection, 0.012, v12)
    setTextColor(1, 1, 1, 1)
    local v17 = string.format("%s (%d Bindings)", v10.name, #v11)
    renderText(...)
    if not (axisDirection - 0.012 - 0.0005 < 0) then
      continue
    end
  end
  setTextColor(1, 1, 1, 1)
end
function InputBinding:debugRenderInputContext(contextName)
  if not contextName then
  end
  if not self.contexts[axisDirection] then
  end
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_LEFT)
  local v7 = string.format("Context [%s]: previousContextName=%s, eventOrderCounter=%s", contextName, axisDirection.previousContextName, axisDirection.eventOrderCounter)
  renderText(...)
  for v9, v10 in pairs(axisDirection.actionEvents) do
    local v15 = v9:getBindings()
    if modName - (1 + #v15 + #v10) * 0.013 < 0 and 2 < v5 + 1 then
      new2DLayer()
    end
    setTextColor(1, 1, 1, 1)
    local v22 = tostring(v9)
    renderText(inputDirection, modName, 0.01, "Action " .. v9.name .. " (" .. v22 .. ")")
    local v13 = v9:getBindings()
    for v15, v16 in ipairs(...) do
      setTextColor(1, 1, 1, 1)
      if v16.isShadowed then
        setTextColor(1, 0, 0, 1)
      elseif v16.inputValue ~= 0 then
        setTextColor(0, 1, 0, 1)
      end
      local v23 = tostring(v16.isActive)
      renderText(inputDirection + 0.005, modName, 0.01, "B: Active: " .. v23)
      v23 = tostring(v16.isShadowed)
      renderText(inputDirection + 0.05, modName, 0.01, "Shadowed: " .. v23)
      v23 = string.format("%.4f", v16.inputValue)
      renderText(inputDirection + 0.105, modName, 0.01, "Value: " .. v23)
      local v30 = table.concat(v16.axisNames, ", ")
      v30 = tostring(v16.axisComponent)
      v30 = tostring(v16.deviceId)
      local v29 = tostring(v16.index)
      renderText(inputDirection + 0.16, modName, 0.01, "[" .. v30 .. "] " .. v30 .. " | " .. v30 .. " | " .. v29)
    end
    setTextColor(1, 1, 1, 1)
    for v15, v16 in ipairs(v10) do
      v23 = tostring(v16.isActive)
      renderText(inputDirection + 0.005, modName, 0.01, "E: Active: " .. v23)
      v23 = tostring(v16.displayIsVisible)
      renderText(inputDirection + 0.05, modName, 0.01, "Visible: " .. v23)
      v23 = tostring(v16.hasFrameTriggered)
      renderText(inputDirection + 0.105, modName, 0.01, "Triggered: " .. v23)
      v23 = tostring(v16.targetObject)
      renderText(inputDirection + 0.16, modName, 0.01, "Target: " .. v23)
    end
  end
end
function InputBinding:consoleCommandEnableInputDebug()
  self.debugEnabled = not self.debugEnabled
end
function InputBinding:consoleCommandPrintInputContext(enable)
  self:debugPrintInputContext()
end
function InputBinding:consoleCommandShowInputContext(enable)
  self.debugContextEnabled = not self.debugContextEnabled
end
function InputBinding:consoleCommandShowRegisteredActions(enable)
  self.debugRegisteredActions = not self.debugRegisteredActions
end
