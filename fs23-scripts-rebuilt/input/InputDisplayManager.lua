-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputDisplayManager = {}
local InputDisplayManager_mt = Class(InputDisplayManager)
source("dataS/scripts/input/DisplayActionBinding.lua")
source("dataS/scripts/input/InputHelpElement.lua")
InputDisplayManager.CONTROLLER_SYMBOLS_PATH = "dataS/controllerSymbols.xml"
InputDisplayManager.AXIS_ICON_DEFINITIONS_PATH = "dataS/axisIcons.xml"
InputDisplayManager.RESOLUTION_ATLAS_PATHS = {{MIN_HEIGHT = 0, PATH = "dataS/menu/controllerSymbols1024.png"}, {MIN_HEIGHT = 1080, PATH = "dataS/menu/controllerSymbols2048.png"}}
InputDisplayManager.AXIS_ICON_BASE_SIZE = 40
InputDisplayManager.SYMBOL_PREFIX_XBOX = "xbox_"
InputDisplayManager.SYMBOL_PREFIX_PS4 = "ps4_"
InputDisplayManager.SYMBOL_PREFIX_PS5 = "ps5_"
InputDisplayManager.SYMBOL_PREFIX_MOUSE = "mouse_"
InputDisplayManager.SYMBOL_PREFIX_SWITCH = "switch_"
InputDisplayManager.SYMBOL_PREFIX_MOBILE = "mobile_"
InputDisplayManager.SYMBOL_PREFIX_STADIA = "stadia_"
InputDisplayManager.AXIS_NAME_X = "X"
InputDisplayManager.AXIS_NAME_Y = "Y"
InputDisplayManager.AXIS_NAME_MOUSE_X = InputBinding.MOUSE_AXIS_NAMES[Input.AXIS_X]
InputDisplayManager.AXIS_NAME_MOUSE_Y = InputBinding.MOUSE_AXIS_NAMES[Input.AXIS_Y]
InputDisplayManager.AXIS_AFFIX_POSITIVE = "(+)"
InputDisplayManager.AXIS_AFFIX_NEGATIVE = "(-)"
InputDisplayManager.MODIFIER_BUTTON_CONCAT = " + "
InputDisplayManager.PLUS_OVERLAY_NAME = "PLUS"
InputDisplayManager.OR_OVERLAY_NAME = "OR"
local v2 = InputHelpElement.new()
InputDisplayManager.NO_HELP_ELEMENT = v2
function InputDisplayManager:new(v1, v2, v3)
  local v4 = setmetatable({}, u0)
  v4.messageCenter = self
  v4.inputManager = v1
  v4.modManager = v2
  v4.isConsoleVersion = v3
  v4.isMobileVersion = GS_IS_MOBILE_VERSION
  self:subscribe(MessageType.INPUT_BINDINGS_CHANGED, v4.onActionBindingsChanged, v4)
  v1:setEventChangeCallback(function(self)
    v1:onActionEventsChanged(self)
  end)
  local v6 = v1:getActionList()
  v4.actionList = v6
  v6 = v1:getActionBindings()
  v4.actionBindings = v6
  {}[GS_INPUT_HELP_MODE_GAMEPAD] = {}
  {}[GS_INPUT_HELP_MODE_KEYBOARD] = {}
  {}[GS_INPUT_HELP_MODE_TOUCH] = {}
  v4.eventHelpElements = {}
  {}[GS_INPUT_HELP_MODE_GAMEPAD] = {}
  {}[GS_INPUT_HELP_MODE_KEYBOARD] = {}
  {}[GS_INPUT_HELP_MODE_TOUCH] = {}
  v4.eventComboButtons = {}
  v4.controllerSymbols = {}
  v4.plusOverlay = nil
  v4.orOverlay = nil
  v4.keyboardKeyOverlay = nil
  v4.axisIconOverlays = {}
  v4.buttonIconSize = 45
  v4.uiScale = 1
  return v4
end
function InputDisplayManager:load()
  local v1 = v1:getValue("uiScale")
  self.uiScale = v1
  self:setDevGamepadLabelMapping()
  self:loadControllerSymbolsAndOverlays()
  v1 = loadXMLFile("AxisIcons", InputDisplayManager.AXIS_ICON_DEFINITIONS_PATH)
  self:loadAxisIcons(v1)
  delete(v1)
  self:loadModAxisIcons()
end
function InputDisplayManager:delete()
  v1:unsubscribeAll(self)
  for v4, v5 in pairs(self.controllerSymbols) do
    v6:delete()
  end
  for v4, v5 in pairs(self.axisIconOverlays) do
    v5:delete()
  end
  v1:delete()
end
function InputDisplayManager.setDevGamepadLabelMapping(v0)
  if GS_PLATFORM_PLAYSTATION and g_isDevelopmentVersion then
    function getGamepadButtonLabel(buttonId, internalId)
      local v2 = u0(buttonId, internalId)
      return Utils.getNoNil(u1[v2], v2)
    end
    function getGamepadAxisLabel(axisId, internalId)
      local v2 = u0(axisId, internalId)
      return Utils.getNoNil(u1[v2], v2)
    end
  end
end
function InputDisplayManager:loadControllerSymbolsAndOverlays()
  for v5, v6 in ipairs(InputDisplayManager.RESOLUTION_ATLAS_PATHS) do
    if not (v6.MIN_HEIGHT <= g_screenHeight) then
      continue
    end
  end
  v2 = loadXMLFile("ControllerSymbolsBinding", InputDisplayManager.CONTROLLER_SYMBOLS_PATH)
  while true do
    v4 = string.format("controllerSymbols.controllerSymbol(%d)", v3)
    v5 = hasXMLProperty(v2, v4)
    if not v5 then
      break
    end
    v6 = getXMLString(v2, v4 .. "#prefix")
    v5 = Utils.getNoNil(v6, "")
    v6 = getXMLString(v2, v4 .. "#name")
    v8 = getXMLBool(v2, v4 .. "#isComboButton")
    v7 = Utils.getNoNil(v8, false)
    v10 = getXMLString(v2, v4 .. "#imageSize")
    v9 = Utils.getNoNil(v10, "1024, 1024")
    v8 = string.getVectorN(v9, 2)
    v10 = getXMLString(v2, v4 .. "#imageUVs")
    v9 = Utils.getNoNil(v10, "0 0 1 1")
    if v6 ~= nil then
      v10 = v6:trim()
      v10 = v10:split(" ")
      for v15, v16 in pairs(v10) do
        if not (v16 ~= "") then
          continue
        end
      end
      if not self.controllerSymbols[v11] then
        self:createButtonOverlay(v11, v1, v9, v8, v7)
      else
        print("Warning: controller symbol name '" .. v11 .. "' already exists!")
      end
    end
  end
  v4 = ButtonOverlay.new()
  self.keyboardKeyOverlay = v4
  delete(v2)
end
function InputDisplayManager:createButtonOverlay(axisName, filename, imageUVs, imageSize, isComboButton)
  local v6, v7 = getNormalizedScreenValues(self.buttonIconSize * self.uiScale, self.buttonIconSize * self.uiScale)
  local v8 = GuiUtils.getUVs(imageUVs, imageSize, nil)
  v8 = Overlay.new(filename, 0, 0, v6, v7)
  v8:setUVs(v8)
  v8:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_LEFT)
  self.controllerSymbols[axisName] = {name = axisName, filename = filename, overlay = v8}
  if axisName == InputDisplayManager.PLUS_OVERLAY_NAME then
    self.plusOverlay = v8
    v8.width = v6 * 0.5
    v8.defaultWidth = v6 * 0.5
    v8.height = v7 * 0.5
    v8.defaultHeight = v7 * 0.5
    return
  end
  if axisName == InputDisplayManager.OR_OVERLAY_NAME then
    self.orOverlay = v8
    v8.width = v6 * 0.5
    v8.defaultWidth = v6 * 0.5
    v8.height = v7 * 0.5
    v8.defaultHeight = v7 * 0.5
  end
end
function InputDisplayManager:loadAxisIcons(xmlFile, modPath)
  if modPath then
    local v6, v7 = Utils.getModNameAndBaseDirectory(modPath)
  end
  while true do
    v7 = string.format("%s.icon(%d)", v3, v6)
    v8 = hasXMLProperty(xmlFile, v7)
    if not v8 then
      break
    end
    v11 = getXMLString(xmlFile, v7 .. "#name")
    v9 = getXMLString(xmlFile, v7 .. "#filename")
    if (v5 .. v11 or "") and v9 then
      v10 = Utils.getFilename(v9, v4)
      v12, v13 = getNormalizedScreenValues(InputDisplayManager.AXIS_ICON_BASE_SIZE * self.uiScale, InputDisplayManager.AXIS_ICON_BASE_SIZE * self.uiScale)
      v14 = Overlay.new(v10, 0, 0, v12, v13)
      v14:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_LEFT)
      self.axisIconOverlays[v5 .. v11 or ""] = v14
    end
  end
end
function InputDisplayManager:loadModAxisIcons()
  local v2 = v2:getMods()
  for v4, v5 in ipairs(...) do
    local v6 = loadXMLFile("ModFile", v5.modFile)
    self:loadAxisIcons(v6, v5.modFile)
    delete(v6)
  end
end
function InputDisplayManager:addContextBindings(contextBindings, action, isContextGamepad, isComboAction)
  for v11, v12 in pairs(self.actionBindings[action]) do
    if not v12.isActive then
      continue
    end
    if not isComboAction then
      for v17, v18 in pairs(contextBindings) do
        if not (v12.internalDeviceId == v18.internalDeviceId) then
          continue
        end
        if not (v12.unmodifiedAxis == v18.unmodifiedAxis) then
          continue
        end
        break
      end
    end
    if not not v13 then
      continue
    end
    if not isContextGamepad then
    end
    if isContextGamepad then
    end
    if v15 and v6 ~= nil and v12.index >= v6.index then
    end
    local v19 = v19:getDeviceByInternalId(v12.internalDeviceId)
    if v19.category ~= InputDevice.CATEGORY.GAMEPAD then
    end
    if not v16 then
      -- if not true and v4 then goto L82 end
    end
    table.remove(contextBindings, v7)
    if not v14 then
      if not v15 then
        continue
      end
      if not (nil == nil) then
        continue
      end
    end
    table.insert(contextBindings, v12)
    if not v15 then
      continue
    end
  end
end
function InputDisplayManager:getActionBindingsForContext(action1, action2, isContextGamepad, isComboAction)
  self:addContextBindings({}, action1, isContextGamepad, isComboAction)
  if action2 then
    self:addContextBindings({}, action2, isContextGamepad)
  end
  return v5
end
function InputDisplayManager:getKeyboardBindings(action1, action2)
  for v6 in pairs(u0) do
    u0[v6] = nil
  end
  if action2 then
  end
  table.insert(u0, v3)
  if v4 ~= nil then
    table.insert(u0, v4)
  end
  for v9, v10 in ipairs(u0) do
    for v14, v15 in ipairs(v10) do
      if not v15.isKeyboard then
        continue
      end
      table.insert(v5, v15)
    end
  end
  return v5
end
function InputDisplayManager:resolveModifierSymbols(overlays, separators, firstContextBinding)
  -- TODO: structure LOP_FORNPREP (pc 6, target 39)
  local v8 = self:getGamepadInputSymbolName(firstContextBinding.internalDeviceId, firstContextBinding.axisNames[1], false)
  if self.controllerSymbols[v8] ~= nil then
    table.insert(overlays, self.controllerSymbols[v8].overlay)
    table.insert(separators, InputHelpElement.SEPARATOR.COMBO_INPUT)
  end
  -- TODO: structure LOP_FORNLOOP (pc 38, target 7)
end
function InputDisplayManager:resolveAccumulatedSymbolPermutations(overlays, symbolNames, permLength)
  if permLength == 0 then
    for v8, v9 in ipairs(symbolNames) do
    end
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L46
    table.insert(overlays, self.controllerSymbols[v4].overlay)
    return
  end
  -- TODO: structure LOP_FORNPREP (pc 30, target 46)
  symbolNames[permLength] = symbolNames[1]
  symbolNames[1] = symbolNames[permLength]
  self:resolveAccumulatedSymbolPermutations(overlays, symbolNames, permLength - 1)
  symbolNames[permLength] = symbolNames[1]
  symbolNames[1] = symbolNames[permLength]
  -- TODO: structure LOP_FORNLOOP (pc 45, target 31)
end
function InputDisplayManager:resolveUnmodifiedSymbols(overlays, contextBindings, isContextGamepad, accumulateSymbols)
  for v9, v10 in pairs(contextBindings) do
    if isContextGamepad then
      local v13 = self:getGamepadInputSymbolName(v10.internalDeviceId, v10.unmodifiedAxis, v10.isAnalog)
    else
      local v12 = self:getMouseInputSymbolName(v10.axisNames)
    end
    if accumulateSymbols then
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L59
      if v5 == nil then
        continue
      end
      for v16, v17 in ipairs(v5) do
        if not (v17 == v11) then
          continue
        end
        break
      end
      if not not v12 then
        continue
      end
      table.insert(v5, v11)
    else
      if not (self.controllerSymbols[v11] ~= nil) then
        continue
      end
      table.insert(overlays, self.controllerSymbols[v11].overlay)
    end
  end
  if accumulateSymbols and v5 ~= nil then
    self:resolveAccumulatedSymbolPermutations(overlays, v5, #v5)
  end
end
function InputDisplayManager:addRegularSymbols(overlays, separators, accumulateSymbols, contextBindings, isContextGamepad, ignoreComboButtons)
  if 0 < #contextBindings then
    if not ignoreComboButtons and isContextGamepad then
      self:resolveModifierSymbols(overlays, separators, contextBindings[1])
    end
    self:resolveUnmodifiedSymbols(overlays, contextBindings, isContextGamepad, accumulateSymbols)
    if #overlays ~= #overlays then
      -- TODO: structure LOP_FORNPREP (pc 27, target 37)
      table.insert(separators, InputHelpElement.SEPARATOR.ANY_INPUT)
      -- TODO: structure LOP_FORNLOOP (pc 36, target 28)
    end
  end
end
function InputDisplayManager:addComboSymbols(overlays, separators, contextBindings, isContextGamepad)
  if #contextBindings ~= 1 then
  end
  assert(true, "Number of bindings for a combo action must always be 1, check code and configuration!")
  if isContextGamepad then
    for v9, v10 in ipairs(contextBindings[1].axisNames) do
      local v11 = self:getGamepadInputSymbolName(v5.internalDeviceId, v10, false)
      if not (self.controllerSymbols[v11] ~= nil) then
        continue
      end
      table.insert(overlays, self.controllerSymbols[v11].overlay)
    end
  else
    v6 = self:getMouseInputSymbolName(contextBindings[1].axisNames, false)
    table.insert(overlays, self.controllerSymbols[v6].overlay)
  end
  -- TODO: structure LOP_FORNPREP (pc 63, target 73)
  table.insert(separators, InputHelpElement.SEPARATOR.COMBO_INPUT)
  -- TODO: structure LOP_FORNLOOP (pc 72, target 64)
end
function InputDisplayManager:getControllerSymbolOverlays(actionName1, actionName2, text, ignoreComboButtons)
  local v5 = v5:getActionByName(actionName1)
  local v6 = v6:getActionByName(actionName2)
  if InputBinding.GAMEPAD_COMBOS[actionName1] == nil then
  end
  if InputBinding.MOUSE_COMBOS[actionName1] == nil then
  end
  if not self.isConsoleVersion and not self.isMobileVersion then
    local v11 = v11:getInputHelpMode()
    if v11 ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
  end
  if v10 then
  end
  v11 = self:makeHelpElement(v13, v14, v15, v16, v17, ignoreComboButtons)
  return v11
end
function InputDisplayManager:requireSymbolAccumulation(v1, v2)
  local v4 = self:isFullAxis()
  if v4 then
    -- if not v1 then goto L11 end
  end
  if v1 then
    local v3 = v1:isFullAxis()
  end
  if not v3 then
    for v8, v9 in pairs(v2) do
      if v4 then
        local v10 = InputBinding.getIsDPadInput(v9.axisNames)
      end
    end
  end
  if not v3 then
    for v8, v9 in pairs(v2) do
      if v4 then
        v10 = InputBinding.getIsMouseWheelInput(v9.axisNames)
      end
    end
  end
  return v3
end
function InputDisplayManager:makeHelpElement(action1, action2, text, isComboAction, isContextGamepad, ignoreComboButtons, customAxisIcon, priority)
  local contextBindings = self:getActionBindingsForContext(action1, action2, isContextGamepad, isComboAction)
  if 0 < #contextBindings then
    if isComboAction then
      self:addComboSymbols({}, {}, contextBindings, isContextGamepad)
    else
      local accumulateSymbols = InputDisplayManager.requireSymbolAccumulation(action1, action2, contextBindings)
      self:addRegularSymbols({}, {}, accumulateSymbols, contextBindings, isContextGamepad, ignoreComboButtons)
    end
  end
  if #v11 < 1 and not isContextGamepad then
    local kbBindings = self:getKeyboardBindings(action1, action2)
    for v18, v19 in ipairs(kbBindings) do
      for v23, v24 in ipairs(v19.axisNames) do
        if v19.modifierAxisSet[v24] == nil then
        end
        if true and not not v14[v24] then
          continue
        end
        local v28 = KeyboardHelper.getDisplayKeyName(Input[v24])
        table.insert(...)
        if not v25 then
          continue
        end
        v14[v24] = true
      end
    end
  end
  if 0 >= #v11 then
    -- if 0 >= #v12 then goto L127 end
  end
  if action2 ~= nil then
    -- if v2.name then goto L112 end
  end
  v15 = InputHelpElement.new(action1.name, "", v11, accumulateSymbols, v10, "", text, not ignoreComboButtons, customAxisIcon, priority)
  return v15
end
function InputDisplayManager:onActionEventsChanged(displayActionEvents)
  self:storeEventHelpElements(displayActionEvents)
  self:storeComboHelpElements(displayActionEvents)
end
function InputDisplayManager:sortEventHelpElements(v1)
  if self.priority ~= v1.priority then
    if self.priority >= v1.priority then
    end
    return true
  end
  if self.actionName ~= "" and v1.actionName ~= "" then
    local v2 = v2:getActionByName(self.actionName)
    local v3 = v3:getActionByName(v1.actionName)
    if v2.primaryKeyboardInput ~= nil then
      if v3.primaryKeyboardInput ~= nil then
        if v2.primaryKeyboardInput >= v3.primaryKeyboardInput then
        end
        return true
      end
      return false
    end
    if self.textRight >= v1.textRight then
    end
    return true
  end
  if v1.actionName ~= "" then
    return false
  end
  return true
end
function InputDisplayManager:sortEventHelpElementsGamepad(v1)
  if 0 < #self.buttons and 0 < #v1.buttons then
    for v5, v6 in pairs(self.buttons) do
      if v1.buttons[v5] ~= nil then
        if not (v1.buttons[v5].overlayId ~= v6.overlayId) then
          continue
        end
        if v6.overlayId >= v1.buttons[v5].overlayId then
        end
        return true
      else
        return true
      end
    end
    return
  end
  if 0 < #self.buttons then
    return true
  end
  return false
end
function InputDisplayManager:storeEventHelpElements(displayActionEvents)
  {}[GS_INPUT_HELP_MODE_GAMEPAD] = {}
  {}[GS_INPUT_HELP_MODE_KEYBOARD] = {}
  {}[GS_INPUT_HELP_MODE_TOUCH] = {}
  self.eventHelpElements = {}
  for v5, v6 in pairs(self.eventHelpElements) do
    if v5 ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
    for v11, v12 in ipairs(displayActionEvents) do
      if not v12.inlineModifierButtons and v5 ~= GS_INPUT_HELP_MODE_KEYBOARD then
      end
      if v7 then
        -- if v15 then goto L57 end
      else
      end
      if not v6[v16] then
        v6[v16] = {}
      end
      if v14.contextDisplayIconName and not self.axisIconOverlays[v14.contextDisplayIconName] then
        print("Warning: Could not resolve axis icon name '" .. v14.contextDisplayIconName .. "'. Check vehicle and axis icon configurations.")
      end
      local v19 = self:makeHelpElement(v13, nil, v14.contextDisplayText, false, v7, v15, v18, v14.displayPriority)
      if not (v19 ~= InputDisplayManager.NO_HELP_ELEMENT) then
        continue
      end
      table.insert(v17, v19)
    end
    if v7 then
    end
    for v12, v13 in pairs(v6) do
      table.sort(v13, v8)
    end
  end
end
function InputDisplayManager:storeComboHelpElements(displayActionEvents)
  {}[GS_INPUT_HELP_MODE_GAMEPAD] = {}
  {}[GS_INPUT_HELP_MODE_KEYBOARD] = {}
  {}[GS_INPUT_HELP_MODE_TOUCH] = {}
  self.eventComboButtons = {}
  for v5, v6 in pairs(self.eventHelpElements) do
    if v5 ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
    for v11, v12 in ipairs(displayActionEvents) do
      for v17, v18 in pairs(self.actionBindings[v12.action]) do
        if v7 and v18.isActive then
        end
        if not v7 then
        end
        if v19 then
          -- if not v12.inlineModifierButtons then goto L61 end
        end
        if not v20 then
          continue
        end
        local v21 = v21:getComboActionNameForAxisSet(v18.modifierAxisSet)
        if not v21 then
          continue
        end
        self.eventComboButtons[v5][v21] = true
      end
    end
  end
end
function InputDisplayManager:getEventHelpElementForAction(inputActionName)
  local v2 = v2:getInputHelpMode()
  for v8, v9 in pairs(self.eventHelpElements[v2]) do
    for v13, v14 in pairs(v9) do
      if not (v14.actionName == inputActionName) then
        continue
      end
      break
    end
  end
  return v4
end
function InputDisplayManager:getEventHelpElements(pressedComboMask, isContextGamepad)
  if isContextGamepad then
    -- if GS_INPUT_HELP_MODE_GAMEPAD then goto L6 end
  end
  if self.eventHelpElements[GS_INPUT_HELP_MODE_KEYBOARD][pressedComboMask] == nil then
    return {}
  end
  return v4
end
function InputDisplayManager:getComboHelpElements(isContextGamepad)
  if isContextGamepad then
    -- if GS_INPUT_HELP_MODE_GAMEPAD then goto L6 end
  end
  return self.eventComboButtons[GS_INPUT_HELP_MODE_KEYBOARD]
end
function InputDisplayManager.getPrefix(v0, v1)
  if GS_PLATFORM_XBOX then
    return InputDisplayManager.SYMBOL_PREFIX_XBOX
  end
  if GS_PLATFORM_SWITCH then
    return InputDisplayManager.SYMBOL_PREFIX_SWITCH
  end
  if GS_PLATFORM_PLAYSTATION then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x8000000a -> L90
    if GS_PLATFORM_ID == PlatformId.PS5 then
      return InputDisplayManager.SYMBOL_PREFIX_PS5
    end
    return InputDisplayManager.SYMBOL_PREFIX_PS4
  end
  if GS_IS_MOBILE_VERSION then
  end
  if v1 ~= nil then
    local v3 = getGamepadName(v1)
    if v3 ~= InputDevice.NAMES.XBOX_GAMEPAD then
      -- if v3 ~= InputDevice.NAMES.XINPUT_GAMEPAD then goto L64 end
    end
    return InputDisplayManager.SYMBOL_PREFIX_XBOX
    if v3 == InputDevice.NAMES.PS_GAMEPAD then
      return InputDisplayManager.SYMBOL_PREFIX_PS4
    end
    if v3 == InputDevice.NAMES.STADIA_GAMEPAD then
      return InputDisplayManager.SYMBOL_PREFIX_STADIA
    end
    if v3 == InputDevice.NAMES.SWITCH_GAMEPAD then
    end
  end
  return v2
end
function InputDisplayManager:getPlusOverlay()
  return self.plusOverlay
end
function InputDisplayManager:getOrOverlay()
  return self.orOverlay
end
function InputDisplayManager:getKeyboardKeyOverlay()
  return self.keyboardKeyOverlay
end
function InputDisplayManager:getFirstBindingAxisAndDeviceForActionName(inputActionName, axisComponent, isGamepad)
  if not axisComponent then
  end
  local v4 = v4:getActionByName(inputActionName)
  if self.actionBindings[v4] == nil then
    return "", -1
  end
  for v12, v13 in ipairs(v7) do
    if v13.isGamepad then
      -- if v3 then goto L35 end
    end
    if v13.isKeyboard then
    end
    if not v13.isActive then
      continue
    end
    if not (v13.index < v8) then
      continue
    end
    if not v14 then
      continue
    end
    if not (v13.axisComponent == axisComponent) then
      continue
    end
  end
  if v5 then
    return v5.axisNames[1], v6
  end
  return "", -1
end
function InputDisplayManager:getGamepadInputActionOverlay(inputActionName, axisComponent)
  local v3, v4 = self:getFirstBindingAxisAndDeviceForActionName(inputActionName, axisComponent, true)
  local v5 = self:getGamepadInputSymbolName(v4, v3, false)
  if v5 ~= nil and v5 ~= "" then
    if self.controllerSymbols[v5] == nil then
      Logging.devWarning("Controller symbol name '%s' is not defined in controllerSymbols.xml", v5)
      return nil
    end
    return GuiOverlay.createOverlay({uvs = self.controllerSymbols[v5].overlay.uvs, color = {self.controllerSymbols[v5].overlay.r, self.controllerSymbols[v5].overlay.g, self.controllerSymbols[v5].overlay.b, self.controllerSymbols[v5].overlay.a}, filename = self.controllerSymbols[v5].overlay.filename})
  end
  return nil
end
function InputDisplayManager:getKeyboardInputActionKey(inputActionName, axisComponent)
  local axisName = self:getFirstBindingAxisAndDeviceForActionName(inputActionName, axisComponent, false)
  if axisName ~= "" then
    return KeyboardHelper.getDisplayKeyName(Input[axisName])
  end
  return nil
end
function InputDisplayManager.getGamepadInputSymbolName(v0, v1, v2, v3)
  if v1 ~= nil and 0 <= v1 then
    local v5 = v5:getPrefix(v1)
    if v3 then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L50
      local v8 = getGamepadAxisLabel(Input.axisIdNameToId[v2], v1)
      local v7 = string.gsub(v8, " ", "")
      return v5 .. v7
    end
    if Input.buttonIdNameToId[v2] ~= nil then
      v7 = getGamepadButtonLabel(Input.buttonIdNameToId[v2], v1)
      local v9 = string.gsub(v7, " ", "")
    end
  end
  return v4
end
function InputDisplayManager.getMouseInputSymbolName(v0, v1)
  for v6, v7 in pairs(v1) do
    if InputBinding.MOUSE_BUTTONS[v7] then
    else
      local v8 = v7:sub(1, #InputDisplayManager.AXIS_NAME_MOUSE_X)
      if v8 == InputDisplayManager.AXIS_NAME_MOUSE_X then
      else
        v8 = v7:sub(1, #InputDisplayManager.AXIS_NAME_MOUSE_Y)
        if not (v8 == InputDisplayManager.AXIS_NAME_MOUSE_Y) then
          continue
        end
      end
    end
  end
  return v2
end
function InputDisplayManager:onActionBindingsChanged(actionBindings)
  self.actionBindings = actionBindings
end
