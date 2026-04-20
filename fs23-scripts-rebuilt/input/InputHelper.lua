-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MouseHelper = {}
KeyboardHelper = {}
GamepadHelper = {}
function MouseHelper.getButtonName(mouseButtonId)
  return getMouseButtonName(mouseButtonId)
end
function MouseHelper.getButtonNames(mouseButtons)
  for v5, v6 in ipairs(mouseButtons) do
    local v7 = getMouseButtonName(v6)
    if not v7 then
      continue
    end
    if v5 ~= 1 then
    end
  end
  return v1
end
function MouseHelper.getInputDisplayText(mouseInputs)
  for v5, v6 in ipairs(mouseInputs) do
    if InputBinding.MOUSE_AXES[v6] then
      if InputBinding.MOUSE_AXES[v6] == Input.AXIS_Y then
      end
      table.insert(v1, v8)
    else
      if not InputBinding.MOUSE_BUTTONS[v6] then
        continue
      end
      local v10 = getMouseButtonName(InputBinding.MOUSE_BUTTONS[v6])
      table.insert(...)
    end
  end
  v2 = table.concat(v1, ", ")
  return v2
end
function MouseHelper.getButtonsXMLString(mouseButtons)
  for v5, v6 in ipairs(mouseButtons) do
    if not (Input.mouseButtonIdToIdName[v6] ~= nil) then
      continue
    end
    if v5 ~= 1 then
    end
  end
  return v1
end
{nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_return"}[271] = "keyGlyph_enter"
{nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_return"}[8] = "keyGlyph_backspace"
{nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_return", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_escape", nil, nil, nil, nil, "keyGlyph_space"}[273] = "keyGlyph_up"
{nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_return", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_escape", nil, nil, nil, nil, "keyGlyph_space"}[274] = "keyGlyph_down"
{nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_return", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_escape", nil, nil, nil, nil, "keyGlyph_space"}[275] = "keyGlyph_right"
{nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_return", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_escape", nil, nil, nil, nil, "keyGlyph_space"}[276] = "keyGlyph_left"
{nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_return", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_escape", nil, nil, nil, nil, "keyGlyph_space"}[306] = "keyGlyph_ctrl"
{nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_return", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_escape", nil, nil, nil, nil, "keyGlyph_space"}[308] = "keyGlyph_alt"
KeyboardHelper.KEY_GLYPHS = {nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_return", nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, nil, "keyGlyph_escape", nil, nil, nil, nil, "keyGlyph_space"}
function KeyboardHelper.getDisplayKeyName(keyId)
  if KeyboardHelper.KEY_GLYPHS[keyId] ~= nil then
    local v3 = v3:getText(KeyboardHelper.KEY_GLYPHS[keyId])
  end
  if v1 == nil then
    v3 = getKeyName(keyId)
  end
  return v1
end
function KeyboardHelper.getKeyNames(keyList)
  for v5, v6 in ipairs(keyList) do
    if v5 ~= 1 then
    end
    local v8 = KeyboardHelper.getDisplayKeyName(v6)
  end
  return v1
end
function KeyboardHelper.getKeyNameTable(keyList)
  for v5, v6 in ipairs(keyList) do
    local v9 = KeyboardHelper.getDisplayKeyName(v6)
    table.insert(...)
  end
  return v1
end
function KeyboardHelper.getInputDisplayText(keyNames)
  for v5, v6 in ipairs(keyNames) do
    local v10 = KeyboardHelper.getDisplayKeyName(Input[v6])
    table.insert(...)
  end
  v2 = table.concat(v1, ", ")
  return v2
end
function KeyboardHelper.getKeysXMLString(keyList)
  if keyList ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R0 aux=0x80000000 -> L6
  end
  return ""
  for v5, v6 in ipairs(keyList) do
    if not (Input.keyIdToIdName[v6] ~= nil) then
      continue
    end
    if v5 ~= 1 then
    end
  end
  return v1
end
function GamepadHelper.getGamepadInputCombinedName(gamepadsHash)
  for v6, v7 in pairs(gamepadsHash) do
    table.insert(v1, v6)
    v2[v6] = {buttonsList = {}, axesList = {}}
    for v11, v12 in pairs(v7.buttons) do
      table.insert(v2[v6].buttonsList, v11)
    end
    for v11, v12 in pairs(v7.axes) do
      table.insert(v2[v6].axesList, v11)
    end
    table.sort(v2[v6].buttonsList)
    table.sort(v2[v6].axesList)
  end
  table.sort(v1)
  for v9, v10 in ipairs(v1) do
    for v14, v15 in ipairs(v2[v10].buttonsList) do
      if v14 ~= 1 then
      else
      end
      local v18 = GamepadHelper.getButtonName(v15, v10)
    end
    for v14, v15 in ipairs(v2[v10].axesList) do
      if v14 ~= 1 then
      else
      end
      v18 = GamepadHelper.getAxisName(v15, v10)
    end
  end
  if v4 ~= "" then
    v12 = v12:getText("ui_button")
    -- if v12 .. " " .. v4 .. " " then goto L152 end
  end
  if v5 ~= "" then
    v11 = v11:getText("ui_axis")
    -- if v11 .. " " .. v5 then goto L166 end
  end
  return v6 .. ""
end
function GamepadHelper.getButtonName(buttonId, deviceId)
  if buttonId == nil then
    return ""
  end
  if deviceId == nil then
  end
  return getGamepadButtonLabel(buttonId, deviceId)
end
function GamepadHelper.getAxisName(axisId, deviceId)
  if axisId == nil then
    return ""
  end
  return getGamepadAxisLabel(axisId, deviceId)
end
function GamepadHelper.getButtonNames(buttonIdList, deviceId)
  if buttonIdList == nil then
    return ""
  end
  for v7, v8 in ipairs(buttonIdList) do
    if v7 ~= v3 then
      -- if v1 then goto L21 end
    end
    local v9 = v9(v10, 0)
    if v7 == 1 then
    else
    end
  end
  if v3 == 1 then
    v7 = v7:getText("ui_button")
  elseif 1 < v3 then
    v7 = v7:getText("ui_buttons")
  end
  return v4 .. v2
end
function GamepadHelper.getButtonAndAxisNames(buttonIdList, axisId, deviceId)
  local buttonString = GamepadHelper.getButtonNames(buttonIdList)
  local axisString = GamepadHelper.getAxisName(axisId, deviceId)
  local gamePadName = GamepadHelper.getLocalizedGamepadName(deviceId)
  local v12 = GamepadHelper.getDeviceString(deviceId)
  if buttonString ~= "" then
    -- cmp-jump LOP_JUMPXEQKS R4 aux=0x8 -> L38
  else
  end
  if axisString ~= "" then
    -- if v4 then goto L44 end
  end
  if buttonString == "" then
    -- cmp-jump LOP_JUMPXEQKS R4 aux=0x8 -> L52
  end
  if not (" " .. v6) then
  end
  return v8 .. v9 .. v10 .. v11
end
function GamepadHelper.getLocalizedGamepadName(internalDeviceId)
  local gamepadName = getGamepadName(internalDeviceId)
  local v2 = v2:hasText(gamepadName)
  if v2 then
    v2 = v2:getText(gamepadName)
  end
  return gamepadName
end
function GamepadHelper.getInputDisplayText(inputList, internalDeviceId)
  for v6, v7 in ipairs(inputList) do
    if Input.buttonIdNameToId[v7] then
      local v11 = GamepadHelper.getButtonName(Input.buttonIdNameToId[v7], internalDeviceId)
      table.insert(...)
    else
      if not Input.axisIdNameToId[v7] then
        continue
      end
      v11 = GamepadHelper.getAxisName(Input.axisIdNameToId[v7], internalDeviceId)
      table.insert(...)
    end
  end
  v3 = GamepadHelper.getLocalizedGamepadName(internalDeviceId)
  v6 = table.concat(v2, ", ")
  v4 = string.format("%s [%s]", v6, v3)
  return v4
end
function GamepadHelper.getDeviceString(deviceId)
  return "[" .. deviceId + 1 .. "]"
end
function GamepadHelper.getButtonsXMLString(buttonIdList)
  if buttonIdList == nil then
    return ""
  end
  for v5, v6 in ipairs(buttonIdList) do
    if v5 == 1 then
    else
    end
  end
  return deviceId
end
function GamepadHelper.getAxisXMLString(gamepadAxisId)
  if gamepadAxisId ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R0 aux=0x80000000 -> L6
  end
  return ""
  return "AXIS_" .. gamepadAxisId + 1
end
function GamepadHelper.getDeviceXMLInt(gamepadId)
  if gamepadId ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R0 aux=0x80000000 -> L6
  end
  return 0
  return gamepadId
end
