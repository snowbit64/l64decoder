-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputDevice = {}
local InputDevice_mt = Class(InputDevice)
InputDevice.CATEGORY = {UNKNOWN = GamepadCategories.CATEGORY_UNKNOWN, GAMEPAD = GamepadCategories.CATEGORY_GAMEPAD, WHEEL = GamepadCategories.CATEGORY_WHEEL, JOYSTICK = GamepadCategories.CATEGORY_JOYSTICK, FARMWHEEL = GamepadCategories.CATEGORY_FARMWHEEL, FARMPANEL = GamepadCategories.CATEGORY_FARMSIDEPANEL, KEYBOARD_MOUSE = 253, WHEEL_AND_PANEL = 254, FARMWHEEL_AND_PANEL = 255}
InputDevice.DEFAULT_DEVICE_NAMES = {KB_MOUSE_DEFAULT = "KB_MOUSE_DEFAULT", GAMEPAD_DEFAULT = "GAMEPAD_DEFAULT", JOYSTICK_DEFAULT = "JOYSTICK_DEFAULT", WHEEL_DEFAULT = "WHEEL_DEFAULT", FARM_WHEEL_DEFAULT = "FARM_WHEEL_DEFAULT", PANEL_DEFAULT = "PANEL_DEFAULT"}
InputDevice.NAMES = {SAITEK_WHEEL = "Saitek Heavy Eqpt. Wheel & Pedal", SAITEK_PANEL = "Saitek Side Panel Control Deck", XINPUT_GAMEPAD = "XINPUT_GAMEPAD", XBOX_GAMEPAD = "XBox Controller", PS_GAMEPAD = "DUALSHOCK(R)4", STADIA_GAMEPAD = "Stadia Controller", SWITCH_GAMEPAD = "Nintendo Controller"}
{}[InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT] = InputDevice.CATEGORY.KEYBOARD_MOUSE
{}[InputDevice.DEFAULT_DEVICE_NAMES.GAMEPAD_DEFAULT] = InputDevice.CATEGORY.GAMEPAD
{}[InputDevice.DEFAULT_DEVICE_NAMES.JOYSTICK_DEFAULT] = InputDevice.CATEGORY.JOYSTICK
{}[InputDevice.DEFAULT_DEVICE_NAMES.WHEEL_DEFAULT] = InputDevice.CATEGORY.WHEEL
{}[InputDevice.DEFAULT_DEVICE_NAMES.FARM_WHEEL_DEFAULT] = InputDevice.CATEGORY.FARMWHEEL
{}[InputDevice.DEFAULT_DEVICE_NAMES.PANEL_DEFAULT] = InputDevice.CATEGORY.FARMPANEL
InputDevice.DEFAULT_DEVICE_CATEGORIES = {}
function InputDevice.new(internalId, deviceId, deviceName, category)
  local v4 = setmetatable({}, u0)
  v4.internalId = internalId
  v4.deviceId = deviceId
  v4.deviceName = deviceName
  v4.category = category
  v4.deadzones = {}
  v4.sensitivities = {}
  v4.isActive = false
  v4.forceFeedbackState = {}
  -- TODO: structure LOP_FORNPREP (pc 33, target 49)
  v4.forceFeedbackState[0] = {isSupported = nil, force = 0, position = 0}
  -- TODO: structure LOP_FORNLOOP (pc 48, target 34)
  return v4
end
function InputDevice:loadSettingsFromXML(xmlFile, deviceElement)
  self.deadzones = {}
  self.sensitivities = {}
  while true do
    v4 = string.format(deviceElement .. ".attributes(%d)", v3)
    v5 = hasXMLProperty(xmlFile, v4)
    if not v5 then
      break
    end
    v5 = getXMLInt(xmlFile, v4 .. "#axis")
    if v5 then
      v6 = getXMLFloat(xmlFile, v4 .. "#deadzone")
      if not v6 then
        v8 = getGamepadDefaultDeadzone()
      end
      v7[v5] = v8
      v7 = getXMLFloat(xmlFile, v4 .. "#sensitivity")
      self.sensitivities[v5] = v7 or 1
    end
  end
end
function InputDevice:saveSettingsToXML(xmlFile, deviceElement)
  setXMLString(xmlFile, deviceElement .. "#id", self.deviceId)
  setXMLString(xmlFile, deviceElement .. "#name", self.deviceName)
  setXMLInt(xmlFile, deviceElement .. "#category", self.category)
  while true do
    v4 = hasXMLProperty(xmlFile, v3)
    if not v4 then
      break
    end
    removeXMLProperty(xmlFile, v3)
  end
  -- TODO: structure LOP_FORNPREP (pc 48, target 117)
  if 0 <= self.internalId then
    local v9 = getHasGamepadAxis(0, self.internalId)
  elseif self.deadzones[0] == nil and self.sensitivities[0] == nil then
  end
  if v8 then
    v9 = string.format(deviceElement .. ".attributes(%d)", v4)
    setXMLInt(xmlFile, v9 .. "#axis", v7)
    local v13 = self:getDeadzone(v7)
    setXMLFloat(...)
    v13 = self:getSensitivity(v7)
    setXMLFloat(...)
  end
  -- TODO: structure LOP_FORNLOOP (pc 116, target 49)
end
function InputDevice:isController()
  if self.category and self.category == InputDevice.CATEGORY.KEYBOARD_MOUSE then
  end
  return xmlFile
end
function InputDevice:setDeadzone(axisIndex, deadzone)
  self.deadzones[axisIndex] = deadzone
end
function InputDevice:getDeadzone(axisIndex)
  if self.deadzones[axisIndex] ~= nil then
    return self.deadzones[axisIndex]
  end
  return getGamepadDefaultDeadzone()
end
function InputDevice:setSensitivity(axisIndex, sensitivity)
  self.sensitivities[axisIndex] = sensitivity
end
function InputDevice:getSensitivity(axisIndex)
  if self.sensitivities[axisIndex] ~= nil then
    return self.sensitivities[axisIndex]
  end
  return 1
end
function InputDevice:updateForceFeedbackState(axisIndex)
  if self.forceFeedbackState[axisIndex] ~= nil and self.forceFeedbackState[axisIndex].isSupported == nil then
    local v3 = getHasGamepadAxisForceFeedback(self.internalId, axisIndex)
    self.forceFeedbackState[axisIndex].isSupported = v3
  end
  return false
end
function InputDevice:getIsForceFeedbackSupported(axisIndex)
  if self.forceFeedbackState[axisIndex] ~= nil and self.forceFeedbackState[axisIndex].isSupported ~= nil then
    return self.forceFeedbackState[axisIndex].isSupported
  end
  return false
end
function InputDevice:setForceFeedback(axisIndex, force, position)
  if self.forceFeedbackState[axisIndex] ~= nil then
    self.forceFeedbackState[axisIndex].force = force
    self.forceFeedbackState[axisIndex].position = position
    setGamepadAxisForceFeedback(self.internalId, axisIndex, force, position)
  end
end
function InputDevice.loadIdFromXML(xmlFile, deviceElement)
  local v3 = getXMLString(xmlFile, deviceElement .. "#id")
  return v3 or ""
end
function InputDevice.loadNameFromXML(xmlFile, deviceElement)
  local v3 = getXMLString(xmlFile, deviceElement .. "#name")
  return v3 or ""
end
function InputDevice.loadCategoryFromXML(xmlFile, deviceElement)
  local deviceElement = getXMLInt(xmlFile, deviceElement .. "#category")
  if not deviceElement then
  end
  return deviceElement
end
function InputDevice.getDeviceIdPrefix(deviceId)
  local xmlFile, deviceElement = string.match(deviceId, "^(-?%d+)_(.+)$")
  if xmlFile then
    local v4 = tonumber(xmlFile)
    if v4 then
      v4 = tonumber(xmlFile)
    end
  end
  return v3, deviceElement
end
function InputDevice.getPrefixedDeviceId(deviceId, number)
  return string.format("%d_%s", number, deviceId)
end
function InputDevice.getIsDeviceSupported(engineDeviceId, deviceName)
  return true
end
function InputDevice:toString()
  local v3 = tostring(self.deviceName)
  local v4 = tostring(self.isActive)
  local v5 = tostring(self.internalId)
  local v6 = tostring(self.deviceId)
  local v7 = tostring(self.category)
  return string.format(...)
end
v0.__tostring = InputDevice.toString
