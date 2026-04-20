-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WrapEngineFunctions = {SCRIPT_BINDING_PATH = "../tools/debugger/Farming_Simulator_22_Dev.xml", ACTIVE = false, funcCallsThisFrame = {}, funcTimeThisFrame = {}, maxTotalCallsInOneFrame = 0, maxTotalTimeInOneFrame = 0, maxFuncCalls = {}, maxFuncTime = {}, ignore = {}}
function WrapEngineFunctions.init()
  print("Warning: Engine function profiling / wrapping active")
  addConsoleCommand("gsFunctionStatsReset", "Reset maximum function call counts and execution times", "resetFunctionStats", WrapEngineFunctions)
  addConsoleCommand("gsFunctionStatsExport", "Export currently tracked function stats", "exportFunctionStats", WrapEngineFunctions)
  WrapEngineFunctions.openIntervalTimer = openIntervalTimer
  WrapEngineFunctions.readIntervalTimerMs = readIntervalTimerMs
  WrapEngineFunctions.closeIntervalTimer = closeIntervalTimer
  WrapEngineFunctions.setTextColor = setTextColor
  WrapEngineFunctions.setTextAlignment = setTextAlignment
  WrapEngineFunctions.renderText = renderText
  WrapEngineFunctions.wrapEngineFunctions()
  WrapEngineFunctions.ACTIVE = true
end
function WrapEngineFunctions.renderStats()
  for v5, v6 in pairs(WrapEngineFunctions.funcCallsThisFrame) do
    if not (0 < v6) then
      continue
    end
    WrapEngineFunctions.maxFuncCalls[v5] = WrapEngineFunctions.maxFuncCalls[v5] or 0
    if WrapEngineFunctions.maxFuncCalls[v5] < v6 then
      WrapEngineFunctions.maxFuncCalls[v5] = v6
    end
    table.insert(v1, {v6, v5})
  end
  table.sort(v1, function(self, v1)
    if v1[1] >= self[1] then
    end
    return true
  end)
  if WrapEngineFunctions.maxTotalCallsInOneFrame < v0 then
    WrapEngineFunctions.maxTotalCallsInOneFrame = v0
  end
  for v7, v8 in pairs(WrapEngineFunctions.funcTimeThisFrame) do
    if not (0 < v8) then
      continue
    end
    WrapEngineFunctions.maxFuncTime[v7] = WrapEngineFunctions.maxFuncTime[v7] or 0
    if WrapEngineFunctions.maxFuncTime[v7] < v8 then
      WrapEngineFunctions.maxFuncTime[v7] = v8
    end
    table.insert(v3, {v8, v7})
  end
  table.sort(v3, function(self, v1)
    if v1[1] >= self[1] then
    end
    return true
  end)
  if WrapEngineFunctions.maxTotalTimeInOneFrame < v2 then
    WrapEngineFunctions.maxTotalTimeInOneFrame = v2
  end
  WrapEngineFunctions.setTextColor(1, 1, 1, 1)
  WrapEngineFunctions.setTextAlignment(RenderText.ALIGN_LEFT)
  WrapEngineFunctions.renderText(0.01, 0.535 + 0.04, 0.016, "function stats - 'gsFunctionStatsReset' to reset total/max values")
  local v18 = tostring(WrapEngineFunctions.maxTotalCallsInOneFrame)
  local v17 = tostring(v0)
  WrapEngineFunctions.renderText(0.01, 0.535 + 0.028, 0.014, "max calls one frame " .. v18 .. " - total calls this frame " .. v17)
  v18 = string.format("%.1fus", WrapEngineFunctions.maxTotalTimeInOneFrame * 1000)
  v17 = string.format("%.1fus", v2 * 1000)
  WrapEngineFunctions.renderText(0.01, 0.535 + 0.016, 0.014, "max us in one frame " .. v18 .. " - total us in this frame " .. v17)
  for v12, v13 in ipairs(v1) do
    if not (0 < v13[1]) then
      continue
    end
    WrapEngineFunctions.setTextAlignment(RenderText.ALIGN_RIGHT)
    local v20 = tostring(v13[1])
    WrapEngineFunctions.renderText(...)
    v20 = tostring(WrapEngineFunctions.maxFuncCalls[v13[2]])
    WrapEngineFunctions.renderText(...)
    WrapEngineFunctions.setTextAlignment(RenderText.ALIGN_LEFT)
    WrapEngineFunctions.renderText(v6 + 0.034 + v8 * v4, v7 - 0.0117 * v5, 0.013, v13[2])
    if not (v7 - 0.0117 * (v5 + 1) <= 0) then
      continue
    end
  end
  for v12, v13 in ipairs(v3) do
    if not (0 < v13[1]) then
      continue
    end
    WrapEngineFunctions.setTextAlignment(RenderText.ALIGN_RIGHT)
    v20 = string.format("%.1f us", v13[1] * 1000)
    WrapEngineFunctions.renderText(...)
    v20 = tostring(WrapEngineFunctions.funcCallsThisFrame[v13[2]])
    WrapEngineFunctions.renderText(...)
    v20 = string.format("%.1f us", WrapEngineFunctions.maxFuncTime[v13[2]] * 1000)
    WrapEngineFunctions.renderText(...)
    WrapEngineFunctions.setTextAlignment(RenderText.ALIGN_LEFT)
    v20 = tostring(v13[2])
    WrapEngineFunctions.renderText(...)
    if not (v7 - 0.0117 * (v5 + 1) <= 0) then
      continue
    end
  end
  for v12 in pairs(WrapEngineFunctions.funcCallsThisFrame) do
    WrapEngineFunctions.funcCallsThisFrame[v12] = 0
  end
  for v12 in pairs(WrapEngineFunctions.funcTimeThisFrame) do
    WrapEngineFunctions.funcTimeThisFrame[v12] = 0
  end
end
function WrapEngineFunctions.resetFunctionStats()
  WrapEngineFunctions.maxTotalCallsInOneFrame = 0
  WrapEngineFunctions.maxTotalTimeInOneFrame = 0
  WrapEngineFunctions.maxFuncCalls = {}
  WrapEngineFunctions.maxFuncTime = {}
  return "Reset maximum values"
end
function WrapEngineFunctions.exportFunctionStats()
  setFileLogPrefixTimestamp(false)
  for v4, v5 in pairs(WrapEngineFunctions.maxFuncCalls) do
    table.insert(v0, {v4, v5})
  end
  table.sort(v0, function(self, v1)
    if v1[2] >= self[2] then
    end
    return true
  end)
  log("max calls in one frame")
  for v4, v5 in ipairs(v0) do
    log(v5[2], v5[1])
  end
  for v5, v6 in pairs(WrapEngineFunctions.maxFuncTime) do
    table.insert(v1, {v5, v6})
  end
  table.sort(v1, function(self, v1)
    if v1[2] >= self[2] then
    end
    return true
  end)
  log("max time of a single call in one frame")
  for v5, v6 in ipairs(v1) do
    local v8 = string.format("%.1f us %s", v6[2] * 1000, v6[1])
    print(...)
  end
  setFileLogPrefixTimestamp(g_logFilePrefixTimestamp)
end
function WrapEngineFunctions.engineFunctionCalled(name, timeMs)
  WrapEngineFunctions.funcCallsThisFrame[name] = (WrapEngineFunctions.funcCallsThisFrame[name] or 0) + 1
  WrapEngineFunctions.funcTimeThisFrame[name] = (WrapEngineFunctions.funcTimeThisFrame[name] or 0) + timeMs
end
function WrapEngineFunctions.wrap(name, func)
  _G[name] = function(...)
    local name = WrapEngineFunctions.openIntervalTimer()
    local func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16 = u0(...)
    local v19 = WrapEngineFunctions.readIntervalTimerMs(name)
    WrapEngineFunctions.engineFunctionCalled(...)
    WrapEngineFunctions.closeIntervalTimer(name)
    if v16 ~= nil then
      return func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16
    end
    if v15 ~= nil then
      return func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15
    end
    if v14 ~= nil then
      return func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14
    end
    if v13 ~= nil then
      return func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13
    end
    if v12 ~= nil then
      return func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12
    end
    if v11 ~= nil then
      return func, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11
    end
    if v10 ~= nil then
      return func, v2, v3, v4, v5, v6, v7, v8, v9, v10
    end
    if v9 ~= nil then
      return func, v2, v3, v4, v5, v6, v7, v8, v9
    end
    if v8 ~= nil then
      return func, v2, v3, v4, v5, v6, v7, v8
    end
    if v7 ~= nil then
      return func, v2, v3, v4, v5, v6, v7
    end
    if v6 ~= nil then
      return func, v2, v3, v4, v5, v6
    end
    if v5 ~= nil then
      return func, v2, v3, v4, v5
    end
    if v4 ~= nil then
      return func, v2, v3, v4
    end
    if v3 ~= nil then
      return func, v2, v3
    end
    if v2 ~= nil then
      return func, v2
    end
    if func ~= nil then
      return func
    end
    return nil
  end
end
function WrapEngineFunctions.wrapEngineFunctions()
  local xml = loadXMLFile("scriptBinding", WrapEngineFunctions.SCRIPT_BINDING_PATH)
  if xml ~= 0 then
    log("WrapEngineFunctions.wrapEngineFunctions(): loading script biding from", WrapEngineFunctions.SCRIPT_BINDING_PATH)
    while true do
      v3 = hasXMLProperty(xml, "scriptBinding.function(" .. v1 .. ")" .. "#name")
      if not v3 then
        break
      end
      v3 = getXMLString(xml, "scriptBinding.function(" .. v1 .. ")" .. "#name")
      v5 = string.split(v3, ".")
      if WrapEngineFunctions.ignore[v3] == nil then
        v5 = string.contains(v3, ":")
        if not v5 then
          v5 = string.format("if %s ~= nil then\n", v5[1])
          v7 = string.format("WrapEngineFunctions.wrap(\"%s\", %s)\n", v3, v3)
          v7 = string.format("print(\"Error: %s from script binding does not exist\")\n", v5[1])
          v6, v7 = loadstring(v5 .. v7 .. "else\n" .. v7 .. "end")
          if v6 then
            v6()
          else
            v9 = string.format("Error parsing '%s'\n%s", v5 .. v7 .. "else\n" .. v7 .. "end", v7)
            print(...)
          end
        end
      end
    end
  end
end
function WrapEngineFunctions.customWrappers()
  function findSplitShape(x, y, z, nx, ny, nz, yx, yy, yz, cutSizeY, cutSizeZ)
    u0(x, y, z, nx, ny, nz, yx, yy, yz, cutSizeY, cutSizeZ, 1, 0, 0, 0.5)
    local v11, v12, v13, v14, v15 = u1(x, y, z, nx, ny, nz, yx, yy, yz, cutSizeY, cutSizeZ)
    if v11 ~= nil and v11 ~= 0 then
      local v20 = string.format("findSplitShape shape:%s minY:%.3f maxY:%.3f minZ:%.3f maxZ:%.3f", v11, v12, v13, v14, v15)
      Utils.renderTextAtWorldPosition(x, y, z, v20, 0.02)
      return v11, v12, v13, v14, v15
    end
    Utils.renderTextAtWorldPosition(x, y, z, "findSplitShape nil", 0.02)
    return v11, v12, v13, v14, v15
  end
  function testSplitShape(splitShape, x, y, z, nx, ny, nz, yx, yy, yz, cutSizeY, cutSizeZ)
    u0(x, y, z, nx, ny, nz, yx, yy, yz, cutSizeY, cutSizeZ, 0, 1, 0, 0.5)
    local v12, v13, v14, v15 = u1(splitShape, x, y, z, nx, ny, nz, yx, yy, yz, cutSizeY, cutSizeZ)
    if v12 then
      local v20 = string.format("testSplitShape shape:%s minY:%.3f maxY:%.3f minZ:%.3f maxZ:%.3f", splitShape, v12, v13, v14, v15)
      Utils.renderTextAtWorldPosition(x, y, z, v20, 0.02)
      return v12, v13, v14, v15
    end
    Utils.renderTextAtWorldPosition(x, y, z, "testSplitShape nil", 0.02)
    return v12, v13, v14, v15
  end
  function raycastClosest(x, y, z, nx, ny, nz, raycastFunctionCallback, maxDistance, targetObject, collisionMask, generateNormal, async)
    local v12 = DebugUtil.isPositionInCameraRange(x, y, z, 3)
    if not v12 then
      drawDebugArrow(x, y, z, nx * maxDistance, ny * maxDistance, nz * maxDistance, 0.3, 0.3, 0.3, 0.8, 0, 0, true)
    end
    v12 = u0(x, y, z, nx, ny, nz, raycastFunctionCallback, maxDistance, targetObject, collisionMask, generateNormal, async)
    return v12
  end
  function raycastAll(x, y, z, nx, ny, nz, raycastFunctionCallback, maxDistance, targetObject, collisionMask, generateNormal, async)
    local v12 = DebugUtil.isPositionInCameraRange(x, y, z, 3)
    if not v12 then
      drawDebugArrow(x, y, z, nx * maxDistance, ny * maxDistance, nz * maxDistance, 0.3, 0.3, 0.3, 0, 0.8, 0, true)
    end
    v12 = u0(x, y, z, nx, ny, nz, raycastFunctionCallback, maxDistance, targetObject, collisionMask, generateNormal, async)
    return v12
  end
  function overlapBox(x, y, z, rx, ry, rz, ex, ey, ez, overlapFunctionCallback, targetObject, collisionMask, includeDynamics, includeStatics, exactTest, async)
    DebugUtil.drawOverlapBox(x, y, z, rx, ry, rz, ex, ey, ez)
    return u0(x, y, z, rx, ry, rz, ex, ey, ez, overlapFunctionCallback, targetObject, collisionMask, includeDynamics, includeStatics, exactTest, async)
  end
end
