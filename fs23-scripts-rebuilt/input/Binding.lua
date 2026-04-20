-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Binding = {}
local Binding_mt = Class(Binding)
Binding.AXIS_COMPONENT = {POSITIVE = "+", NEGATIVE = "-"}
Binding.INPUT_COMPONENT = {POSITIVE = "+", NEGATIVE = "-"}
Binding.MAX_ALTERNATIVES_KB_MOUSE = 3
Binding.MAX_ALTERNATIVES_GAMEPAD = 2
Binding.PRESSED_MAGNITUDE_THRESHOLD = 0.1
Binding.PS_JAPAN_BUTTON_SWAP_MAP = {BUTTON_2 = "BUTTON_3", BUTTON_3 = "BUTTON_2"}
function Binding.new(deviceId, axisNames, axisComponent, inputComponent, neutralInput, index)
  local v6 = setmetatable({}, u0)
  v6.axisComponent = axisComponent
  v6.index = index
  if v6.axisComponent == Binding.AXIS_COMPONENT.POSITIVE then
    v6.axisDirection = 1
  else
    v6.axisDirection = -1
  end
  v6.id = nil
  v6.comboMask = 0
  v6.deviceId = nil
  v6.deviceCategory = InputDevice.CATEGORY.UNKNOWN
  v6.internalDeviceId = nil
  v6.axisNameSet = nil
  v6.inputString = ""
  v6.unmodifiedAxis = nil
  v6.modifierAxisSet = nil
  v6.axisNames = {}
  v6.inputComponent = nil
  v6.inputDirection = 0
  v6.neutralInput = neutralInput
  v6.isMouse = false
  v6.isKeyboard = false
  v6.isGamepad = false
  v6.isPrimary = false
  v6:updateData(deviceId, nil, axisNames, inputComponent, true)
  v6.isAnalog = false
  v6.inputValue = 0
  v6.isInputActive = false
  v6.isDown = false
  v6.isUp = false
  v6.wasUp = true
  v6.wasDown = false
  v6.isPressed = false
  v6.isShadowed = false
  v6.isActive = true
  v6.hasFrameTriggered = false
  return v6
end
function Binding.createFromXML(xmlFile, elementTag)
  local deviceId = getXMLString(xmlFile, elementTag .. "#device")
  local v4 = getXMLString(xmlFile, elementTag .. "#input")
  v4 = (v4 or ""):split(" ")
  local v5 = getXMLString(xmlFile, elementTag .. "#axisComponent")
  if v5 ~= Binding.AXIS_COMPONENT.POSITIVE and v5 ~= Binding.AXIS_COMPONENT.NEGATIVE then
  end
  local v6 = getXMLString(xmlFile, elementTag .. "#inputComponent")
  if v6 ~= Binding.INPUT_COMPONENT.POSITIVE and v6 ~= Binding.INPUT_COMPONENT.NEGATIVE and 0 < #v4 then
    local v9 = v9:len()
    local v7 = v7:sub(...)
    if v7 == "-" then
    end
  end
  local v8 = getXMLInt(xmlFile, elementTag .. "#neutralInput")
  v9 = getXMLInt(xmlFile, elementTag .. "#index")
  v9 = Binding.new(deviceId, v4, v5, v6, v8 or 0, v9 or -1)
  return v9
end
function Binding:saveToXMLFile(xmlFile, elementTag)
  setXMLString(xmlFile, elementTag .. "#device", self.deviceId)
  local inputValue = table.concat(self.axisNames, " ")
  setXMLString(xmlFile, elementTag .. "#input", inputValue)
  setXMLString(xmlFile, elementTag .. "#axisComponent", self.axisComponent)
  setXMLInt(xmlFile, elementTag .. "#neutralInput", self.neutralInput)
  setXMLInt(xmlFile, elementTag .. "#index", self.index)
end
function Binding:updateData(deviceId, deviceCategory, axisNames, inputComponent, isInit)
  if axisNames ~= nil then
    self.axisNames = {}
    for v9, v10 in ipairs(axisNames) do
      table.insert(self.axisNames, v10)
    end
    if isInit then
      v6 = Binding.needJapanesePlaystationButtonSwap()
      if v6 then
        Binding.swapJapanesePlaystationButtons(self.axisNames)
      end
    end
  end
  if not inputComponent then
  end
  if v6 then
    -- if v6 ~= Binding.INPUT_COMPONENT.POSITIVE then goto L61 end
  end
  self.inputComponent = Binding.INPUT_COMPONENT.POSITIVE
  self.inputDirection = 1
  -- goto L72  (LOP_JUMP +11)
  self.inputComponent = Binding.INPUT_COMPONENT.NEGATIVE
  self.inputDirection = -1
  if 0 < #self.axisNames then
    v9 = self.axisNames[#self.axisNames]:len()
    v7 = self.axisNames[#self.axisNames]:sub(...)
    if v7 ~= "-" then
      -- cmp-jump LOP_JUMPXEQKS R7 aux=0x80000011 -> L103
    end
    local v12 = v6:len()
    v8 = v6:sub(1, v12 - 1)
    if self.inputComponent == Binding.INPUT_COMPONENT.NEGATIVE then
    else
      v8 = InputBinding.getIsPhysicalFullAxis(v8)
      if v8 then
      end
    end
    self.axisNames[#self.axisNames] = v6
  end
  if not deviceId then
  end
  self.deviceId = v6
  if not deviceCategory then
  end
  self.deviceCategory = v6
  v6 = table.toSet(self.axisNames)
  self.axisNameSet = v6
  v6 = table.concat(self.axisNames, " ")
  self.inputString = v6
  self.unmodifiedAxis = self.axisNames[#self.axisNames]
  self.modifierAxisSet = {}
  -- TODO: structure LOP_FORNPREP (pc 176, target 184)
  self.modifierAxisSet[self.axisNames[1]] = self.axisNames[1]
  -- TODO: structure LOP_FORNLOOP (pc 183, target 177)
  if self.deviceId ~= InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT then
  end
  if true and self.index ~= Binding.MAX_ALTERNATIVES_KB_MOUSE then
  end
  self.isMouse = v7
  if v6 then
  end
  self.isKeyboard = v7
  if self.deviceId ~= nil then
  end
  self.isGamepad = v7
  if self.index ~= 1 then
  end
  self.isPrimary = true
end
function Binding:updateInput(inputValue, allInputActive)
  if 0 <= self.axisDirection then
    local v4 = math.max(inputValue, 0)
    self.inputValue = v4
    if Binding.PRESSED_MAGNITUDE_THRESHOLD > inputValue then
    end
  else
    v4 = math.min(inputValue, 0)
    self.inputValue = v4
    if inputValue > -Binding.PRESSED_MAGNITUDE_THRESHOLD then
    end
  end
  self.isShadowed = false
  self.hasFrameTriggered = false
  if v3 and not self.isPressed then
  end
  if not v3 then
  end
  self.isDown = v4
  self.isUp = v5
  self.isPressed = v3
  if not self.wasDown then
    -- if not v4 then goto L72 end
  end
  self.wasDown = not v5
  if not self.wasUp then
    -- if not v5 then goto L80 end
  end
  self.wasUp = not v4
  self.isInputActive = allInputActive or v5
end
function Binding:setIsAnalog(isAnalog)
  self.isAnalog = isAnalog
end
function Binding:setIndex(index)
  self.index = index
  if index ~= 1 then
  end
  self.isPrimary = true
  if self.deviceId ~= InputDevice.DEFAULT_DEVICE_NAMES.KB_MOUSE_DEFAULT then
  end
  if true and self.index ~= Binding.MAX_ALTERNATIVES_KB_MOUSE then
  end
  self.isMouse = v3
end
function Binding:setActive(isActive)
  self.isActive = isActive
end
function Binding:setFrameTriggered(hasTriggered)
  self.hasFrameTriggered = hasTriggered
end
function Binding:getFrameTriggered()
  return self.hasFrameTriggered
end
function Binding:setComboMask(comboMask)
  self.comboMask = comboMask
end
function Binding:getComboMask()
  return self.comboMask
end
function Binding:hasCollisionWith(otherBinding)
  if self == otherBinding then
    return false
  end
  if self.deviceId ~= otherBinding.deviceId then
  end
  local sameInput = table.equals(self.axisNames, otherBinding.axisNames, true)
  return true and sameInput
end
function Binding:hasEventCollision(otherBinding)
  if self == otherBinding then
    return true
  end
  if self.deviceId ~= otherBinding.deviceId then
  end
  local sameInput = table.equals(self.axisNames, otherBinding.axisNames, true)
  if self.inputComponent ~= otherBinding.inputComponent then
  end
  if v2 and sameInput then
  end
  return v5
end
function Binding:clone()
  local clone = Binding.new(self.deviceId, self.axisNames, self.axisComponent, self.inputComponent, self.neutralInput, self.index)
  clone:updateData(self.deviceId, self.deviceCategory, self.axisNames, self.inputComponent, false)
  clone.internalDeviceId = self.internalDeviceId
  clone.isAnalog = self.isAnalog
  clone.comboMask = self.comboMask
  clone.isActive = self.isActive
  return clone
end
function Binding:copyInputStateFrom(src)
  self.isDown = src.isDown
  self.isUp = src.isUp
  self.isPressed = src.isPressed
  self.isInputActive = src.isInputActive
  self.wasDown = src.wasDown
  self.wasUp = src.wasUp
end
function Binding:isSameSlot(otherBinding)
  if self.axisComponent ~= otherBinding.axisComponent then
  end
  if self.isKeyboard then
    -- if v1.isKeyboard then goto L25 end
  end
  if self.isMouse then
    -- if v1.isMouse then goto L25 end
  end
  if self.isGamepad then
  end
  if self.index ~= otherBinding.index then
  end
  if v2 and v3 then
  end
  return v5
end
function Binding:isSameSlotWithParams(axisComponent, isKbMouse, slotIndex)
  if self.axisComponent ~= axisComponent then
  end
  if not self.isKeyboard then
  end
  if v6 ~= isKbMouse then
  end
  if self.index ~= slotIndex then
  end
  if v4 and v5 then
  end
  return v7
end
function Binding.getOppositeAxisComponent(axisComponent)
  if axisComponent == Binding.AXIS_COMPONENT.POSITIVE then
    return Binding.AXIS_COMPONENT.NEGATIVE
  end
  if axisComponent == Binding.AXIS_COMPONENT.NEGATIVE then
    return Binding.AXIS_COMPONENT.POSITIVE
  end
end
function Binding.getOppositeInputComponent(inputComponent)
  if inputComponent == Binding.INPUT_COMPONENT.POSITIVE then
    return Binding.INPUT_COMPONENT.NEGATIVE
  end
  if inputComponent == Binding.INPUT_COMPONENT.NEGATIVE then
    return Binding.INPUT_COMPONENT.POSITIVE
  end
end
function Binding:makeId()
  if self.id == nil then
    local v4 = table.concat(self.axisNames, ";")
    local v1 = string.format("%s|%s|%s|%s|%s", self.deviceId, v4, self.axisComponent, self.neutralInput, self.index)
    self.id = v1
  end
end
function Binding.needJapanesePlaystationButtonSwap()
  if Platform.isPlaystation then
  end
  return v0
end
function Binding:swapJapanesePlaystationButtons()
  for v4, v5 in ipairs(self) do
    if not (Binding.PS_JAPAN_BUTTON_SWAP_MAP[v5] ~= nil) then
      continue
    end
    self[v4] = Binding.PS_JAPAN_BUTTON_SWAP_MAP[v5]
  end
end
function Binding:toString()
  local v3 = table.concat(self.axisNames, ", ")
  return string.format("[(%s), deviceId: %s, axisComponent: %s, index: %s, isActive: %s, isShadowed: %s isInverted: %s, isDown: %s, isUp: %s, inputValue: %s]", v3, self.deviceId, self.axisComponent, self.index, self.isActive, self.isShadowed, self.isInverted, self.isDown, self.isUp, self.inputValue)
end
Binding_mt.__tostring = Binding.toString
