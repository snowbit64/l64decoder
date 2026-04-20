-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if getSelection == nil then
end
GS_IS_EDITOR = true
GS_INPUT_HELP_MODE_AUTO = 1
GS_INPUT_HELP_MODE_KEYBOARD = 2
GS_INPUT_HELP_MODE_GAMEPAD = 3
GS_INPUT_HELP_MODE_TOUCH = 4
GS_PRIO_VERY_HIGH = 1
GS_PRIO_HIGH = 2
GS_PRIO_NORMAL = 3
GS_PRIO_LOW = 4
GS_PRIO_VERY_LOW = 5
GS_MONEY_EURO = 1
GS_MONEY_DOLLAR = 2
GS_MONEY_POUND = 3
string.dump = function()
  return ""
end
function loadfile()
end
function load()
  return nil, "invalid function"
end
if setFileLogPrefixTimestamp == nil then
  function setFileLogPrefixTimestamp(addTimestamp)
  end
end
if addConsoleCommand ~= nil then
  function addConsoleCommand(v0, v1, ...)
    if u0[v0] == nil then
      u1(...)
      u0[v0] = v1
      return
    end
    local v3 = string.format("Error: Failed to register console command '%s. Command was already registered!", v0)
    print(...)
  end
end
if removeConsoleCommand ~= nil then
  function removeConsoleCommand(v0, ...)
    u0(...)
    u1[v0] = nil
  end
end
function consoleCommandListCommands()
  for v5 in pairs(u0) do
    v0[#v0 + 1] = v5
    local v9 = v5:len()
    local v7 = math.max(...)
  end
  table.sort(v0)
  setFileLogPrefixTimestamp(false)
  for v5, v6 in ipairs(v0) do
    local v12 = v6:len()
    v9 = string.rep(" ", v1 - v12)
    v9 = string.format("%s   %s", v6 .. v9, u0[v6])
    print(...)
  end
  v3 = string.format("# Listed %d script-based console commands. Use 'help' to get all commands", #v0)
  print(...)
  setFileLogPrefixTimestamp(g_logFilePrefixTimestamp)
end
function consoleCommandSearchCommands(v0)
  if v0 ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R0 aux=0x80000000 -> L10
  end
  return "Error: no search string given"
  local v3 = string.upper(v0)
  for v6, v7 in pairs(u0) do
    local v9 = string.upper(v6)
    local v8 = string.contains(v9, v0)
    if not v8 then
      continue
    end
    table.insert(v1, {v6, v7})
    v2[v6] = true
  end
  for v6, v7 in pairs(u0) do
    if not (v2[v6] == nil) then
      continue
    end
    v9 = string.upper(v7)
    v8 = string.contains(v9, v0)
    if not v8 then
      continue
    end
    table.insert(v1, {v6, v7})
  end
  if #v1 == 0 then
    return "Error: no results\nTry a different search term or use 'help' to list all commands"
  end
  setFileLogPrefixTimestamp(false)
  for v6, v7 in ipairs(v1) do
    print(v7[1] .. "\n        " .. v7[2])
  end
  v4 = string.format("Listed %d script-based console commands for search '%s'. Use 'help' to get all available commands", #v1, v0)
  print(...)
  setFileLogPrefixTimestamp(g_logFilePrefixTimestamp)
end
if addConsoleCommand ~= nil then
  addConsoleCommand("gsScriptCommandsList", "Lists script-based console commands. Use 'help' to get all commands", "consoleCommandListCommands", nil)
  addConsoleCommand("gsSearch", "Searches for script-based console commands containing the given string (name and description). Use 'help' to get all commands", "consoleCommandSearchCommands", nil)
end
string.posixFormat = function(self, ...)
  local v3 = self:gsub("([%%]?)%%(%d+)%$", function(self, v1)
    if self == "%" then
      return "%%" .. v1 .. "$"
    end
    local v6 = tonumber(v1)
    table.insert(u0, u1[v6])
    return "%"
  end)
  if #{} == 0 then
    v3 = string.format(...)
    return v3
  end
  local v5 = unpack(v2)
  v3 = string.format(...)
  return v3
end
function log(...)
  local v4 = select(...)
  -- TODO: structure LOP_FORNPREP (pc 11, target 24)
  local v7 = select(...)
  local v6 = tostring(...)
  -- TODO: structure LOP_FORNLOOP (pc 23, target 12)
  print("" .. " " .. v6)
end
function print_r(tbl, depth)
  if tbl == nil then
    print("table: nil")
    return
  end
  local v2 = type(tbl)
  if v2 ~= "table" then
    print("table: no such table")
    return
  end
  v2 = next(tbl)
  if v2 == nil then
    print("table: empty")
    return
  end
  setFileLogPrefixTimestamp(false)
  u0(tbl, "  ", 0, depth or 5)
  setFileLogPrefixTimestamp(g_logFilePrefixTimestamp)
end
function printf(formatText, ...)
  local v2 = string.format(...)
  print(...)
end
function assertWithCallstack(f, message)
  if not f then
    if message ~= nil then
      local v2 = type(message)
      -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000002 -> L17
      print("Error: assertion failed: " .. message)
    else
      print("Error: assertion failed!")
    end
    printCallstack()
    error("Assertion failed")
  end
end
function registerObjectClassName(object, className)
  if g_currentMission ~= nil then
    g_currentMission.objectsToClassName[object] = className
  end
end
function unregisterObjectClassName(object)
  if g_currentMission ~= nil then
    g_currentMission.objectsToClassName[object] = nil
  end
end
function getNormalizedScreenValues(x, y)
  local v2 = GuiUtils.getNormalizedValues({x, y}, {g_referenceScreenWidth, g_referenceScreenHeight})
  if v2[1] ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L26
  end
  printCallstack()
  return v2[1] * g_aspectScaleX, v2[2] * g_aspectScaleY
end
function getCorrectTextSize(size)
  if g_aspectScaleY == nil then
    return size
  end
  return size * g_aspectScaleY
end
function calculateFovY(cameraNode)
  local v1 = getFovY(cameraNode)
  if GS_IS_EDITOR then
    return v1
  end
  if g_fovYMax < v1 * g_fovYMax / g_fovYDefault then
  end
  local v4 = v4:getValue("fovY")
  if g_fovYDefault < v4 then
    return v1 + v3 * (1 - (g_fovYMax - v4) / (g_fovYMax - g_fovYDefault))
  end
  if v4 < g_fovYDefault then
    return v1 - v3 * (1 - (v4 - g_fovYMin) / (g_fovYDefault - g_fovYMin))
  end
  return v1
end
if GS_IS_EDITOR then
  function getUserName()
    return ""
  end
  function addConsoleCommand()
  end
  function removeConsoleCommand()
  end
  function getAppBasePath()
    return ""
  end
  function getUserProfileAppPath()
    return ""
  end
  function isHeadTrackingAvailable()
    return false
  end
end
if getHasGamepadAxisForceFeedback == nil then
  function getHasGamepadAxisForceFeedback()
    return false
  end
end
if setGamepadAxisForceFeedback == nil then
  function setGamepadAxisForceFeedback()
  end
end
