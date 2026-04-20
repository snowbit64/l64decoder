-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ControlsController = {BINDING_PRIMARY = 1, BINDING_SECONDARY = 2, BINDING_TERTIARY = 3, AXIS_DIRECTION_POSITIVE = 1, AXIS_DIRECTION_NEGATIVE = -1, MESSAGE_CLEAR = 0, MESSAGE_CANNOT_MAP_KEY = 1, MESSAGE_CANNOT_MAP_MOUSE = 2, MESSAGE_CANNOT_MAP_CONTROLLER = 3, MESSAGE_PROMPT_KEY = 4, MESSAGE_PROMPT_MOUSE = 5, MESSAGE_PROMPT_CONTROLLER = 6, MESSAGE_PROMPT_CANCEL_DELETE = 7, MESSAGE_SELECT_ACTION = 8, MESSAGE_CONFLICT_KEY = 9, MESSAGE_CONFLICT_MOUSE = 10, MESSAGE_CONFLICT_BUTTON = 11, MESSAGE_CONFLICT_AXIS = 12, MESSAGE_REMAPPED = 13, MESSAGE_ENSURE_IN_NEUTRAL = 14, MESSAGE_CONFLICT_BLOCKED_KEY = 15, AXIS_NAME_X = "X", AXIS_NAME_Y = "Y", AXIS_AFFIX_POSITIVE = "(+)", AXIS_AFFIX_NEGATIVE = "(-)", MODIFIER_BUTTON_CONCAT = " + "}
{}[InputAction.MENU] = true
{}[InputAction.MENU_CANCEL] = true
{}[InputAction.MENU_BACK] = true
{}[InputAction.MENU_ACCEPT] = true
{}[InputAction.MENU_ACTIVATE] = true
{}[InputAction.MENU_PAGE_PREV] = true
{}[InputAction.MENU_PAGE_NEXT] = true
{}[InputAction.MENU_AXIS_UP_DOWN] = true
{}[InputAction.MENU_AXIS_UP_DOWN_SECONDARY] = true
{}[InputAction.MENU_AXIS_LEFT_RIGHT] = true
{}[ControlsController.BINDING_PRIMARY] = {}
{}[ControlsController.BINDING_SECONDARY] = {}
{}[ControlsController.BINDING_TERTIARY] = {}
ControlsController.LOCKED_BINDINGS = {}
local ControlsController_mt = Class(ControlsController)
ControlsController.INPUT_DELAY = 500
ControlsController.MOUSE_MOVE_THRESHOLD = 10
function ControlsController.new()
  local v0 = setmetatable({}, u0)
  v0.messageCallback = u1
  v0.inputDoneCallback = u1
  v0.controlsActions = {}
  v0.controlsAnalogActions = {}
  v0.controlsDigitalActions = {}
  v0.actionBindings = nil
  v0.waitForInput = false
  v0.gatheringDevice = nil
  v0.gatheringBindingIndex = nil
  v0.gatheringAction = nil
  v0.gatheringActionIndex = 0
  v0.mouseMoveThresholdX = ControlsController.MOUSE_MOVE_THRESHOLD / g_screenWidth
  v0.mouseMoveThresholdY = ControlsController.MOUSE_MOVE_THRESHOLD / g_screenHeight
  v0:loadBindings()
  return v0
end
function ControlsController:setMessageCallback(messageCallback)
  if not messageCallback then
  end
  self.messageCallback = v2
end
function ControlsController:setInputDoneCallback(inputDoneCallback)
  if not inputDoneCallback then
  end
  self.inputDoneCallback = v2
end
function ControlsController:createDisplayAction(deviceCategory, actionBinding, isAxisPositive)
  local v6 = DisplayActionBinding.new(actionBinding.action, actionBinding.action.displayNamePositive, isAxisPositive, actionBinding.bindings)
  if not isAxisPositive then
    v6.displayName = actionBinding.action.displayNameNegative
  end
  if deviceCategory ~= InputDevice.CATEGORY.KEYBOARD_MOUSE then
  end
  if deviceCategory ~= InputDevice.CATEGORY.GAMEPAD then
  end
  if isAxisPositive then
    -- if Binding.AXIS_COMPONENT.POSITIVE then goto L35 end
  end
  for v13, v14 in ipairs(v5) do
    if v14.deviceId ~= InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT then
    end
    if v7 then
      -- if true then goto L54 end
    end
    if v8 then
    end
    if not v16 then
      continue
    end
    if not (v14.axisComponent == v9) then
      continue
    end
    local v17 = self:getBindingInputDisplayText(v14)
    v6:setBindingDisplay(v14, v17, v14.index)
  end
  return v6
end
function ControlsController:getDeviceCategoryActionBindings(deviceCategory)
  local v2 = getNumOfGamepads()
  self.numGamepads = v2
  for v7, v8 in ipairs(self.actionBindings) do
    if v8.action.displayCategory == nil then
    end
    if v3[v9] ~= nil then
    else
      table.insert(v2, {name = v9})
      v3[v9] = #v2
    end
    local v13 = self:createDisplayAction(deviceCategory, v8, true)
    table.insert(...)
    local v11 = v11:isFullAxis()
    if not v11 then
      continue
    end
    v13 = self:createDisplayAction(deviceCategory, v8, false)
    table.insert(...)
  end
  return v2
end
function ControlsController.getMouseAxisDisplayText(v0, v1)
  if InputBinding.MOUSE_AXES[v1] == Input.AXIS_X then
  elseif InputBinding.MOUSE_AXES[v1] == Input.AXIS_Y then
  end
  if v2 ~= "" then
    local v6 = v1:len()
    local v4 = v1:sub(...)
    if v4 == "-" then
    end
  end
  return v2
end
function ControlsController.getGamepadButtonDisplayText(v0, v1, v2)
  if v2 ~= nil then
    -- if v2 >= 0 then goto L14 end
  end
  local v3 = string.format("%d", Input[v1] + 1)
  return v3
  v3 = getGamepadButtonLabel(Input[v1], v2)
  return v3
end
function ControlsController.getGamepadAxisDisplayText(v0, v1, v2)
  if v2 ~= nil then
    -- if v2 >= 0 then goto L16 end
  end
  local v4 = string.format("Axis %d", Input[v1] + 1)
  -- goto L24  (LOP_JUMP +8)
  v4 = getGamepadAxisLabel(Input[v1], v2)
  local v7 = v1:len()
  local v5 = v1:sub(...)
  if v5 == "-" then
  end
  return v3 .. v4
end
function ControlsController:getBindingInputDisplayText(binding)
  if #binding.axisNames < 1 then
    return ""
  end
  if binding.deviceId ~= InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT then
  end
  if true then
    for v8, v9 in pairs(binding.axisNames) do
      if InputBinding.MOUSE_BUTTONS[v9] then
        local v12 = getMouseButtonName(Input[v9])
        table.insert(...)
      elseif InputBinding.MOUSE_AXES[v9] then
        v12 = self:getMouseAxisDisplayText(v9)
        table.insert(...)
      else
        v12 = KeyboardHelper.getDisplayKeyName(Input[v9])
        table.insert(...)
      end
    end
  else
    for v8, v9 in pairs(binding.axisNames) do
      if Input.buttonIdNameToId[v9] then
        v12 = self:getGamepadButtonDisplayText(v9, binding.internalDeviceId)
        table.insert(...)
      else
        if not Input.axisIdNameToId[v9] then
          continue
        end
        v12 = self:getGamepadAxisDisplayText(v9, binding.internalDeviceId)
        table.insert(...)
      end
    end
    if 1 >= self.numGamepads then
      v5 = v5:getHasMissingDevices()
      -- if not v5 then goto L161 end
    end
    v5 = v5:getDeviceByInternalId(binding.internalDeviceId)
    if v5 == nil then
      v6 = v6:getMissingDeviceById(binding.deviceId)
    end
    if v5 ~= nil then
      v7 = v7:hasText(v5.deviceName)
      if v7 then
        v7 = v7:getText(v5.deviceName)
      end
      v7 = string.format(" [%s]", v6)
    end
  end
  v8 = table.concat(v2, " + ")
  return v8 .. v3
end
function ControlsController.saveChanges(v0)
  binding:commitBindingChanges()
  binding:saveToXMLFile()
end
function ControlsController.discardChanges(v0)
  binding:rollbackBindingChanges()
end
function ControlsController:loadBindings()
  local binding = binding:getActionBindingsCopy(true)
  self.actionBindings = binding
end
function ControlsController:onClickInput(deviceCategory, bindingIndex, displayActionBinding)
  if not self.waitForInput then
    if ControlsController.LOCKED_BINDINGS[bindingIndex][displayActionBinding.action.name] then
      if deviceCategory == InputDevice.CATEGORY.KEYBOARD_MOUSE then
        if bindingIndex == ControlsController.BINDING_TERTIARY then
          self.messageCallback(ControlsController.MESSAGE_CANNOT_MAP_MOUSE)
          return false
        end
        self.messageCallback(ControlsController.MESSAGE_CANNOT_MAP_KEY)
        return v4
      end
      self.messageCallback(ControlsController.MESSAGE_CANNOT_MAP_CONTROLLER)
      return v4
    end
    self:beginWaitForInput(deviceCategory, bindingIndex, displayActionBinding)
  end
  return v4
end
function ControlsController:beginWaitForInput(deviceCategory, bindingIndex, displayActionBinding)
  v4:startBindingChanges()
  self.waitForInput = true
  if deviceCategory == InputDevice.CATEGORY.KEYBOARD_MOUSE then
    if bindingIndex == ControlsController.BINDING_TERTIARY then
      v5:startInputCapture(false, true, self, {binding = displayActionBinding, bindingIndex = bindingIndex, mouseState = {}}, self.onCaptureMouseInput, self.onAbortInputGathering, self.onDeleteInputBinding)
      return
    end
    v4.keyState = {}
    v5:startInputCapture(true, false, self, v4, self.onCaptureKeyboardInput, self.onAbortInputGathering, self.onDeleteInputBinding)
    return
  end
  v4.gamepadState = {}
  v5:startInputCapture(false, false, self, v4, self.onCaptureGamepadInput, self.onAbortInputGathering, self.onDeleteInputBinding)
end
function ControlsController:onAbortInputGathering()
  self:endWaitForInput(false)
end
function ControlsController:onDeleteInputBinding(gatheringState)
  local hasDeleted = self:deleteBinding(gatheringState.binding, gatheringState.bindingIndex)
  self:endWaitForInput(hasDeleted)
end
function ControlsController:onCaptureKeyboardInput(_, keyName, inputValue, initInputValue, gatheringState)
  if 0 < inputValue then
    table.insert(gatheringState.keyState, keyName)
    return
  end
  local v8 = self:assignKeyboardBinding(gatheringState.binding, gatheringState.bindingIndex, v6)
  self:endWaitForInput(v8)
end
function ControlsController:onCaptureMouseInput(_, inputAxisName, inputValue, initInputValue, gatheringState)
  if not self.waitForInput then
    return
  end
  gatheringState.mouseState[inputAxisName] = inputValue
  for v16 in pairs(InputBinding.MOUSE_BUTTONS) do
    if not (v6[v16] ~= nil) then
      continue
    end
    break
  end
  v15 = v15:isFullAxis()
  if InputBinding.MOUSE_BUTTONS[inputAxisName] ~= nil and v7 == 1 and inputValue == 0 then
    table.insert({}, inputAxisName)
    for v20 in pairs(InputBinding.MOUSE_BUTTONS) do
      if v6[v20] == 1 then
        table.insert(v16, v20)
        break
      end
      v6[v20] = nil
    end
    if v15 then
      if v10 == 0 and v11 == 0 then
      end
      if v18 then
        v18 = math.abs(v11)
        v19 = math.abs(v10)
        if v19 < v18 then
          table.insert(v16, v9)
        else
          table.insert(v16, v8)
        end
      end
    end
    -- if not v17 then goto L191 end
    v18 = self:assignMouseBinding(v14, v16, v13)
    self:endWaitForInput(v18)
    return
  end
  if v15 and not v12 then
    v19 = math.abs(v10)
    v18 = math.abs(v11)
    if self.mouseMoveThresholdX < v19 then
      -- if v18 >= v19 then goto L163 end
      table.insert(v16, v8)
    elseif self.mouseMoveThresholdY < v18 and v19 < v18 then
      table.insert(v16, v9)
    end
    if 0 < #v16 then
      v19 = self:assignMouseBinding(v14, v16, v13)
      self:endWaitForInput(v19)
    end
  end
end
function ControlsController:onCaptureGamepadInput(deviceId, inputAxisName, inputValue, initInputValue, gatheringState)
  if not gatheringState.gamepadState[deviceId] then
    gatheringState.gamepadState[deviceId] = {}
  end
  v6[inputAxisName] = {inputValue, initInputValue}
  if v6[inputAxisName] then
    local v8 = math.abs(v6[inputAxisName][1] - initInputValue)
    if 0.3 < v8 then
      v8 = math.abs(inputValue - initInputValue)
      if v8 <= 0.3 then
        for v12, v13 in pairs(v6) do
          if 0.5 < v13[2] then
          elseif v13[2] < -0.5 then
          end
          if not (v12 ~= inputAxisName) then
            continue
          end
          local v17 = math.abs(v14)
          if not (0.5 < v17) then
            continue
          end
          if v16 ~= 0 then
            v17 = math.abs(v14 - v16)
            if 0.6 >= v17 then
              v17 = Input.isHalfAxis(Input[v12])
              if not v17 then
                continue
              end
            end
          end
          if v14 < 0 then
            table.insert(v8, v12 .. "-")
          else
            table.insert(v8, v12)
          end
        end
        table.sort(v8)
        table.insert(v8, inputAxisName)
        v10 = Input.isHalfAxis(Input[inputAxisName])
        if not v10 then
          if 0.5 < initInputValue then
          elseif initInputValue < -0.5 then
          end
        end
        v11 = self:assignGamepadBinding(gatheringState.binding, gatheringState.bindingIndex, deviceId, v8, v7[1] - initInputValue, v9)
        self:endWaitForInput(v11)
      end
    end
  end
end
function ControlsController:endWaitForInput(madeChange)
  self.waitForInput = false
  inputAxisName:stopInputGathering()
  self.inputDoneCallback(madeChange)
  self:lockInput()
end
function ControlsController.lockInput(v0)
  for initInputValue, gatheringState in pairs(Gui.NAV_ACTIONS) do
    v6:lockFocusInput(gatheringState, ControlsController.INPUT_DELAY)
  end
end
function ControlsController:deleteBinding(displayActionBinding, currentBindingIndex)
  for v7, v8 in pairs(self.actionBindings) do
    if not (v8.action == displayActionBinding.action) then
      continue
    end
    for v12, v13 in ipairs(v8.bindings) do
      if not (inputValue == v13) then
        continue
      end
      v14:deleteBinding(v13.deviceId, displayActionBinding.action.name, v13.index, v13.axisComponent)
      local v15 = InputBinding.getIsPhysicalFullAxis(inputValue.axisNames[#inputValue.axisNames])
      if v15 then
        local v20 = Binding.getOppositeAxisComponent(v13.axisComponent)
        v15:deleteBinding(...)
      end
      self.messageCallback(ControlsController.MESSAGE_CLEAR)
      return true
    end
  end
  return false
end
function ControlsController.areKeyCombinationsBlocked(v0, deviceId)
  for v7, v8 in ipairs(Platform.blockedKeyboardCombos) do
    if not (#v8 == inputValue) then
      continue
    end
    for v13, v14 in ipairs(deviceId) do
      for v19, v20 in ipairs(v8) do
        if not (v14 == v20) then
          continue
        end
        break
      end
      if not not v15 then
        continue
      end
      break
    end
    if not v9 then
      continue
    end
    return true
  end
  return false
end
function ControlsController:assignKeyboardBinding(displayActionBinding, bindingIndex, keyNames)
  local initInputValue = self:areKeyCombinationsBlocked(keyNames)
  if initInputValue then
    self.messageCallback(ControlsController.MESSAGE_CONFLICT_BLOCKED_KEY, {})
    return false
  end
  local initInputValue, gatheringState = self:assignBinding(InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT, displayActionBinding.action, bindingIndex, keyNames, displayActionBinding.isPositive, 1, 0)
  if initInputValue then
    if gatheringState and not gatheringState.collisionAction.isLocked then
      if gatheringState.collisionBinding.axisComponent ~= Binding.AXIS_COMPONENT.POSITIVE then
      end
      if true then
        -- if v7.displayNamePositive then goto L54 end
      end
      self.messageCallback(ControlsController.MESSAGE_CONFLICT_KEY, {" (" .. v7.displayNameNegative .. ")"})
    end
    local v11 = KeyboardHelper.getInputDisplayText(keyNames)
    local v10 = string.upper(...)
    if gatheringState == nil then
    end
    v6(v7, v8, true)
  end
  return initInputValue
end
function ControlsController.validateMouseCombo(v0, deviceId)
  if #deviceId == 1 then
    return true
  end
  -- TODO: structure LOP_FORNPREP (pc 11, target 20)
  table.insert({}, deviceId[1])
  -- TODO: structure LOP_FORNLOOP (pc 19, target 12)
  for v6, v7 in pairs(InputBinding.MOUSE_COMBO_BINDINGS) do
    local v8 = table.equals(inputAxisName, v7)
    if not v8 then
      continue
    end
    return true
  end
  return false
end
function ControlsController:assignMouseBinding(displayActionBinding, inputAxisNames, inputDirection)
  table.sort(inputAxisNames, u0)
  local v6 = self:validateMouseCombo(inputAxisNames)
  if not v6 then
    return false
  end
  local v6, v7 = self:assignBinding(gatheringState, displayActionBinding.action, initInputValue, inputAxisNames, displayActionBinding.isPositive, inputDirection, 0)
  if v6 then
    local v9 = v9:isFullAxis()
    if v9 then
      v9 = InputBinding.getIsPhysicalFullAxis(inputAxisNames[#inputAxisNames])
      if v9 then
        self:assignBinding(gatheringState, displayActionBinding.action, initInputValue, inputAxisNames, not displayActionBinding.isPositive, -inputDirection, 0)
      end
    end
    if v7 and not v7.collisionAction.isLocked then
      if v7.collisionBinding.axisComponent ~= Binding.AXIS_COMPONENT.POSITIVE then
      end
      if true then
        -- if v10.displayNamePositive then goto L81 end
      end
      self.messageCallback(ControlsController.MESSAGE_CONFLICT_MOUSE, {" (" .. v10.displayNameNegative .. ")"})
    end
    local v14 = MouseHelper.getInputDisplayText(inputAxisNames)
    local v13 = string.upper(...)
    if v7 == nil then
    end
    v9(v10, v11, true)
  end
  return v6
end
function ControlsController:assignGamepadBinding(displayActionBinding, bindingIndex, deviceId, inputAxisNames, inputDirection, neutralInput)
  local v7 = self:areKeyCombinationsBlocked(inputAxisNames)
  if v7 then
    self.messageCallback(ControlsController.MESSAGE_CONFLICT_BLOCKED_KEY, {})
    return false
  end
  if displayActionBinding.columnBindings[bindingIndex] then
  end
  local v9, v10 = self:assignBinding(deviceId, displayActionBinding.action, bindingIndex, inputAxisNames, displayActionBinding.isPositive, inputDirection, neutralInput, v8)
  if v9 then
    local v12 = v12:isFullAxis()
    if v12 then
      v12 = InputBinding.getIsPhysicalFullAxis(inputAxisNames[#inputAxisNames])
      if v12 and neutralInput == 0 then
        self:assignBinding(deviceId, displayActionBinding.action, bindingIndex, inputAxisNames, not displayActionBinding.isPositive, -inputDirection, neutralInput)
      end
    end
    if v10 and not v10.collisionAction.isLocked then
      local v15 = v15:isFullAxis()
      if v15 then
      end
      if v12.axisComponent ~= Binding.AXIS_COMPONENT.POSITIVE then
      end
      if true then
        -- if v13.displayNamePositive then goto L103 end
      end
      self.messageCallback(v14, {" (" .. v13.displayNameNegative .. ")"})
    end
    local v19 = v19:getInternalIdByDeviceId(deviceId)
    local v17 = GamepadHelper.getInputDisplayText(...)
    local v16 = string.upper(...)
    if v10 == nil then
    end
    v12(v13, v14, true)
  end
  return v9
end
function ControlsController.assignBinding(v0, deviceId, inputAxisName, inputValue, initInputValue, gatheringState, v6, v7, v8)
  if gatheringState then
    -- if Binding.AXIS_COMPONENT.POSITIVE then goto L6 end
  end
  if 0 <= v6 then
    -- if Binding.INPUT_COMPONENT.POSITIVE then goto L14 end
  end
  if not v8 then
  end
  local v11, v12 = v11:updateBinding(v8, inputAxisName.name, inputValue, v9, deviceId, initInputValue, v10, v7)
  if not v11 then
    local v14 = Binding.new(deviceId, initInputValue, v9, v10, v7, inputValue)
    local v15 = v15:getActionByName(inputAxisName.name)
    local v16, v17 = v16:addBinding(v15, v14)
  end
  return v11 or v13, v12
end
function ControlsController:loadDefaultSettings()
  deviceId:restoreDefaultBindings()
  self:loadBindings()
end
