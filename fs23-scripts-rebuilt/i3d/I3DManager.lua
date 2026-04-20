-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

I3DManager = {VERBOSE_LOADING = true, DEBUG_LOADING_CHECKS = {}}
local I3DManager_mt = Class(I3DManager)
function I3DManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  addConsoleCommand("gsI3DLoadingDelaySet", "Sets loading delay for i3d files", "consoleCommandSetLoadingDelay", v1)
  addConsoleCommand("gsI3DShowCache", "Show active i3d cache", "consoleCommandShowCache", v1)
  addConsoleCommand("gsI3DPrintActiveLoadings", "Print active loadings", "consoleCommandPrintActiveLoadings", v1)
  return v1
end
function I3DManager:init()
  local v2 = StartParams.getValue("i3dLoadingDelay")
  local v1 = tonumber(...)
  if v1 ~= nil and 0 < v1 then
    self:setLoadingDelay(v1 / 1000)
  end
  v2 = StartParams.getIsSet("scriptDebug")
  if v2 then
    self:setupDebugLoading()
  end
end
function I3DManager.update(v0, v1)
  if I3DManager.showCache then
    local v3 = getNumOfSharedI3DFiles()
    -- TODO: structure LOP_FORNPREP (pc 13, target 30)
    local v7, v8 = getSharedI3DFilesData(0)
    table.insert({}, {filename = v7, numRefs = v8})
    -- TODO: structure LOP_FORNLOOP (pc 29, target 14)
    table.sort({}, function(self, v1)
      if self.filename >= v1.filename then
      end
      return true
    end)
    for v9, v10 in ipairs({}) do
      setTextAlignment(RenderText.ALIGN_LEFT)
      local v17 = tostring(v10.numRefs)
      renderText(v4, v5, 0.01, "Refcount: " .. v17)
      v17 = tostring(v10.filename)
      renderText(v4 + 0.04, v5, 0.01, "File: " .. v17)
      if not (v5 - 0.011 < 0) then
        continue
      end
    end
  end
end
function I3DManager.loadSharedI3DFile(v0, v1, v2, v3)
  local v4 = Utils.getNoNil(v2, false)
  v4 = Utils.getNoNil(v3, false)
  local v4, v5, v6 = loadSharedI3DFile(v1, v4, v4, true)
  return v4, v5, v6
end
function I3DManager.loadSharedI3DFileAsync(v0, v1, v2, v3, v4, v5, v6)
  if v1 == nil then
  end
  assert(true, "I3DManager:loadSharedI3DFileAsync - missing filename")
  if v4 == nil then
  end
  assert(true, "I3DManager:loadSharedI3DFileAsync - missing callback function")
  local v9 = type(v4)
  if v9 ~= "function" then
  end
  assert(true, "I3DManager:loadSharedI3DFileAsync - Callback value is not a function")
  local v7 = Utils.getNoNil(v2, false)
  v7 = Utils.getNoNil(v3, false)
  return streamSharedI3DFile(v1, "loadSharedI3DFileAsyncFinished", v0, {asyncCallbackFunction = v4, asyncCallbackObject = v5, asyncCallbackArguments = v6}, v7, v7, I3DManager.VERBOSE_LOADING)
end
function I3DManager.loadSharedI3DFileAsyncFinished(v0, v1, v2, v3)
  v3.asyncCallbackFunction(v3.asyncCallbackObject, v1, v2, v3.asyncCallbackArguments)
end
function I3DManager.loadI3DFile(v0, v1, v2, v3)
  local v4 = Utils.getNoNil(v2, false)
  v4 = Utils.getNoNil(v3, false)
  v4 = loadI3DFile(v1, v4, v4, I3DManager.VERBOSE_LOADING)
  return v4
end
function I3DManager.loadI3DFileAsync(v0, v1, v2, v3, v4, v5, v6)
  if v1 == nil then
  end
  assert(true, "I3DManager:loadI3DFileAsync - missing filename")
  if v4 == nil then
  end
  assert(true, "I3DManager:loadI3DFileAsync - missing callback function")
  local v9 = type(v4)
  if v9 ~= "function" then
  end
  assert(true, "I3DManager:loadI3DFileAsync - Callback value is not a function")
  local v7 = Utils.getNoNil(v2, false)
  v7 = Utils.getNoNil(v3, false)
  return streamI3DFile(v1, "loadSharedI3DFileFinished", v0, {asyncCallbackFunction = v4, asyncCallbackObject = v5, asyncCallbackArguments = v6}, v7, v7, I3DManager.VERBOSE_LOADING)
end
function I3DManager.loadSharedI3DFileFinished(v0, v1, v2, v3)
  v3.asyncCallbackFunction(v3.asyncCallbackObject, v1, v2, v3.asyncCallbackArguments)
end
function I3DManager.cancelStreamI3DFile(v0, v1)
  if v1 ~= nil then
    cancelStreamI3DFile(v1)
    return
  end
  Logging.error("I3DManager:cancelStreamedI3dFile - loadingRequestId is nil")
  printCallstack()
end
function I3DManager.releaseSharedI3DFile(v0, v1, v2)
  if v1 ~= nil then
    local v3 = Utils.getNoNil(v2, false)
    -- if not g_isDevelopmentVersion then goto L11 end
    releaseSharedI3DFile(v1, v3)
    return
  end
  Logging.error("I3DManager:releaseSharedI3DFile - sharedLoadRequestId is nil")
  printCallstack()
end
function I3DManager.pinSharedI3DFileInCache(v0, v1)
  if v1 ~= nil then
    local v2 = getSharedI3DFileRefCount(v1)
    -- if v2 >= 0 then goto L22 end
    pinSharedI3DFileInCache(v1, true)
    return
  end
  Logging.error("I3DManager:pinSharedI3DFileInCache - Filename is nil")
  printCallstack()
end
function I3DManager.unpinSharedI3DFileInCache(v0, v1)
  if v1 ~= nil then
    unpinSharedI3DFileInCache(v1)
    return
  end
  Logging.error("I3DManager:unpinSharedI3DFileInCache - filename is nil")
  printCallstack()
end
function I3DManager.clearEntireSharedI3DFileCache(v0, v1)
  if v1 == true then
    local v2 = getNumOfSharedI3DFiles()
    Logging.devInfo("I3DManager: Deleting %s shared i3d files", v2)
    -- TODO: structure LOP_FORNPREP (pc 13, target 25)
    local v6, v7 = getSharedI3DFilesData(0)
    Logging.devWarning("    NumRef: %d - File: %s", v7, v6)
    -- TODO: structure LOP_FORNLOOP (pc 24, target 14)
  end
  Logging.devInfo("I3DManager: Deleted shared i3d files")
  clearEntireSharedI3DFileCache()
end
function I3DManager.setLoadingDelay(v0, v1, v2, v3, v4)
  setStreamI3DFileDelay(v1 or 0, v2 or v1 or 0)
  setStreamSharedI3DFileDelay(v1 or 0, v2 or v1 or 0, v3 or v1 or 0, v4 or v2 or v1 or 0)
  Logging.info("Set new loading delay. MinDelay: %.2fs, MaxDelay: %.2fs, MinDelayCached: %.2fs, MaxDelayCached: %.2fs", v1 or 0, v2 or v1 or 0, v3 or v1 or 0, v4 or v2 or v1 or 0)
end
function I3DManager:consoleCommandSetLoadingDelay(minDelaySec, maxDelaySec, minDelayCachedSec, maxDelayCachedSec)
  local v5 = tonumber(minDelaySec)
  v5 = tonumber(maxDelaySec)
  v5 = tonumber(minDelayCachedSec)
  v5 = tonumber(maxDelayCachedSec)
  self:setLoadingDelay(v5 or 0, v5 or v5 or 0, v5 or v5 or 0, v5 or v5 or v5 or 0)
end
function I3DManager.consoleCommandShowCache(v0, v1)
  I3DManager.showCache = not I3DManager.showCache
  local v4 = tostring(I3DManager.showCache)
  return "showCache=" .. v4
end
function I3DManager.consoleCommandPrintActiveLoadings(v0)
  print("Non-Shared loading tasks:")
  local v1 = getAllStreamI3DFileRequestIds()
  if #v1 == 0 then
    print("none")
  else
    for v5, v6 in ipairs(v1) do
      local v7, v8, v9, v10, v11, v12 = getStreamI3DFileProgressInfo(v6)
      local v20 = tostring(v11)
      local v21 = tostring(v12)
      local v13 = string.format(...)
      print(v13)
    end
  end
  print("")
  print("Shared loading tasks:")
  v2 = getAllSharedI3DFileRequestIds()
  if #v2 == 0 then
    print("none")
    return
  end
  for v6, v7 in ipairs(v2) do
    v8, v9, v10, v11, v12, v13 = getSharedI3DFileProgressInfo(v7)
    v21 = tostring(v12)
    local v22 = tostring(v13)
    local v14 = string.format(...)
    print(v14)
  end
end
local v1 = I3DManager.new()
g_i3DManager = v1
function I3DManager.addDebugLoadingCheck(name, checkFunc)
  table.insert(I3DManager.DEBUG_LOADING_CHECKS, {checkFunc = checkFunc, name = name})
end
function I3DManager:setupDebugLoading()
  print("\n\n  ##################   Warning: I3D-Manager Debug checks are active!   ##################\n\n")
  local v1 = StartParams.getIsSet("i3dTracing")
  self.debugTracingActive = v1
  if self.debugTracingActive then
    printWarning("\n\n  ##################   Warning: I3D-Manager Debug tracing is active !   ##################\n\n")
    self.debugPendingRequests = {}
  end
  function I3DManager.checkRecursive(self, node, delegate)
    local v4 = delegate(self, node)
    if v4 then
    end
    local v7 = getNumOfChildren(node)
    -- TODO: structure LOP_FORNPREP (pc 14, target 29)
    local v9 = getChildAt(node, 0)
    v7 = I3DManager.checkRecursive(self, v9, delegate)
    -- TODO: structure LOP_FORNLOOP (pc 28, target 15)
    return v3 + v7
  end
  function loadI3DFile(self, ...)
    local v1, v2, v3 = u0(...)
    if 0 < v1 then
      for v7, v8 in ipairs(I3DManager.DEBUG_LOADING_CHECKS) do
        local v9 = I3DManager.checkRecursive(self, v1, v8.checkFunc)
        if not (0 < v9) then
          continue
        end
        Logging.devInfo("Finished '%s' check with %d matches for '%s'", v8.name, v9, self or "")
      end
    end
    return v1
  end
  function loadSharedI3DFile(self, ...)
    local v1, v2, v3 = u0(...)
    if 0 < v1 then
      for v7, v8 in ipairs(I3DManager.DEBUG_LOADING_CHECKS) do
        local v9 = I3DManager.checkRecursive(self, v1, v8.checkFunc)
        if not (0 < v9) then
          continue
        end
        Logging.devInfo("Finished '%s' check with '%d' matches for '%s'", v8.name, v9, self or "")
      end
    end
    return v1, v2, v3
  end
  function streamI3DFile(self, callbackFunc, target, params, ...)
    local v5 = u0(...)
    if u1.debugTracingActive then
      log("streamI3DFile", "requestId", v5, self, "callback", {target = target, callbackFunc = callbackFunc, params = params, filename = self}.callbackFunc, "updateLoopIndex", g_updateLoopIndex)
      table.insert(u1.debugPendingRequests, v5)
    end
    return v5
  end
  function streamI3DCallback(self, failedReason, arguments)
    if not arguments.params then
    end
    if u0.debugTracingActive then
      u1("streamI3DCallback", self, failedReason, arguments)
    end
    if 0 < self then
      for v9, v10 in ipairs(I3DManager.DEBUG_LOADING_CHECKS) do
        local v11 = I3DManager.checkRecursive(arguments.filename or "", self, v10.checkFunc)
        if not (0 < v11) then
          continue
        end
        Logging.devInfo("Finished '%s' check with '%d' matches for '%s'", v10.name, v11, arguments.filename or "")
      end
    end
    v3[v4](v3, self, failedReason, v5)
  end
  function streamSharedI3DFile(self, callbackFunc, target, params, ...)
    local v5 = u0(...)
    if u1.debugTracingActive then
      log("streamSharedI3DFile", "requestId", v5, self, "callback", {target = target, callbackFunc = callbackFunc, filename = self, params = params}.callbackFunc, "updateLoopIndex", g_updateLoopIndex)
      table.insert(u1.debugPendingRequests, v5)
    end
    return v5
  end
  function streamSharedI3DCallback(self, failedReason, arguments)
    if not arguments.params then
    end
    if u0.debugTracingActive then
      u1("streamSharedI3DCallback", self, failedReason, arguments)
    end
    if 0 < self then
      for v9, v10 in ipairs(I3DManager.DEBUG_LOADING_CHECKS) do
        local v11 = I3DManager.checkRecursive(arguments.filename or "", self, v10.checkFunc)
        if not (0 < v11) then
          continue
        end
        Logging.devInfo("Finished '%s' check with '%d' matches for '%s'", v10.name, v11, arguments.filename or "")
      end
    end
    v3[v4](v3, self, failedReason, v5)
  end
  if self.debugTracingActive then
    function cancelStreamI3DFile(self)
      log("cancelStreamI3DFile", self, "updateLoopIndex", g_updateLoopIndex)
      table.removeElement(u0.debugPendingRequests, self)
      return u1(self)
    end
    function releaseSharedI3DFile(self, ...)
      log("releaseSharedI3DFile", self, "updateLoopIndex", g_updateLoopIndex)
      local v1 = getSharedI3DFileProgressInfo(self)
      if v1 ~= "PROGRESS_UNKNOWN" then
        printWarning("    releaseSharedI3DFile while request was still pending, same effect as cancelStreamI3DFile")
        table.removeElement(u0.debugPendingRequests, self)
      end
      return u1(...)
    end
  end
end
function I3DManager.getFailedReasonName(v0)
  for v4, v5 in pairs(LoadI3DFailedReason) do
    if not (v5 == v0) then
      continue
    end
    return v4
  end
  v1 = string.format("<undefined failedReason '%s'>", v0)
  return v1
end
I3DManager.addDebugLoadingCheck("Directional-Lights", function(I3DManager_mt, v1)
  local v2 = getHasClassId(v1, ClassIds.LIGHT_SOURCE)
  if v2 and g_currentMission ~= nil then
    v2 = getLightType(v1)
    if v2 == LightType.DIRECTIONAL and v1 ~= g_currentMission.environment.lighting.sunLightId then
      v2 = getName(v1)
      if v2 == "licensePlateCreationBoxLight" then
        return false
      end
      local v5 = I3DUtil.getNodePath(v1)
      local v3 = string.format(...)
      print(...)
      return true
    end
  end
  return false
end)
I3DManager.addDebugLoadingCheck("tip col properties", function(I3DManager_mt, v1)
  local v3 = getHasClassId(v1, ClassIds.SHAPE)
  if v3 then
    local v4 = getName(v1)
    v4 = v4:upper()
    v3 = string.contains(v4, "TIPCOL")
    if v3 then
      v3 = CollisionFlag.getHasFlagSet(v1, CollisionFlag.GROUND_TIP_BLOCKING)
      if not v3 then
        local v5 = I3DUtil.getNodePath(v1)
        Logging.warning(...)
      end
      v3 = getRigidBodyType(v1)
      -- if v3 == RigidBodyType.STATIC then goto L82 end
      v5 = I3DUtil.getNodePath(v1)
      Logging.warning(...)
      return true
    end
    v3 = CollisionFlag.getHasFlagSet(v1, CollisionFlag.GROUND_TIP_BLOCKING)
    if v3 then
      v4 = I3DUtil.getNodePath(v1)
      v4 = v4:upper()
      v3 = string.contains(v4, "TIPCOL")
      if not v3 then
        v5 = I3DUtil.getNodePath(v1)
        Logging.warning(...)
      end
    end
  end
  return v2
end)
I3DManager.addDebugLoadingCheck("LOD Checks", function(I3DManager_mt, v1)
  local v2 = getLODTransformGroup(v1)
  if v2 ~= 0 then
    local v3 = getParent(v1)
    if v2 == v3 then
      v3 = getVisibility(v1)
      if v3 then
        local v4 = getParent(v1)
        v3 = getVisibility(...)
        -- if v3 then goto L39 end
      end
      local v5 = I3DUtil.getNodePath(v1)
      local v6 = I3DUtil.getNodePathIndices(v1)
      Logging.warning(...)
      return true
    end
  end
  return false
end)
I3DManager.addDebugLoadingCheck("Occluder Checks", function(I3DManager_mt, v1)
  local v2 = getHasClassId(v1, ClassIds.SHAPE)
  if v2 then
    v2 = getName(v1)
    local v3 = getIsOccluderMesh(v1)
    local v5 = v2:upper()
    local v4 = string.contains(v5, "OCCLUDER")
    if not v4 then
      -- if not v3 then goto L89 end
    end
    if v4 then
      -- if v3 then goto L37 end
      local v8 = I3DUtil.getNodePath(v1)
      Logging.warning(...)
    elseif not v4 and v3 then
      v8 = I3DUtil.getNodePath(v1)
      Logging.warning(...)
    end
    if v3 then
      local v6 = getVisibility(v1)
      if v6 then
        local v7 = getParent(v1)
        v6 = getVisibility(...)
        -- if v6 then goto L71 end
      end
      v8 = I3DUtil.getNodePath(v1)
      Logging.warning(...)
      local v6, v7, v8, v9 = getShapeBoundingSphere(v1)
      if v9 < 3 then
        local v13 = I3DUtil.getNodePath(v1)
        Logging.warning(...)
      end
    end
    return v5
  end
  return false
end)
I3DManager.addDebugLoadingCheck("ScaledTrees", function(I3DManager_mt, v1)
  local v3 = getHasClassId(v1, ClassIds.MESH_SPLIT_SHAPE)
  if v3 then
    v3 = getParent(v1)
    if v3 ~= 0 then
      local v4, v5, v6 = getScale(v3)
      if v4 == 1 and v5 == 1 then
        -- cmp-jump LOP_JUMPXEQKN R6 aux=0xa -> L33
      end
      local v9 = I3DUtil.getNodePath(v1)
      Logging.warning(...)
    end
  end
  return v2
end)
