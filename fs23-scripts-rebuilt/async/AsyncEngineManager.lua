-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AsyncEngineManager = {}
local v0 = Class(AsyncEngineManager)
AsyncEngineManager.MAXIMUM_OVERLAPS_PER_FRAME = 10
AsyncEngineManager.MAXIMUM_RAYCASTS_PER_FRAME = 10
AsyncEngineManager.DEBUG_QUEUED_COLOUR = {1, 0, 0}
AsyncEngineManager.DEBUG_EXECUTING_COLOUR = {0, 1, 0}
function AsyncEngineManager.new()
  local v0 = setmetatable({}, u0)
  v0.isDebugViewActive = false
  v0.overlapsExecutedThisFrame = 0
  v0.raycastsExecutedThisFrame = 0
  v0.executingOverlaps = {}
  v0.executingRaycasts = {}
  v0.queuedOverlaps = {}
  v0.queuedRaycasts = {}
  local v1 = ObjectPool.new(AsyncOverlapCallback.new, v0)
  v0.overlapsPool = v1
  v1 = ObjectPool.new(AsyncRaycastCallback.new, v0)
  v0.raycastsPool = v1
  v0.cancellingOverlaps = {}
  v0.cancellingRaycasts = {}
  addConsoleCommand("gsAsyncManagerToggleDebugView", "Toggles the debug view for overlaps and raycasts", "consoleCommandToggleDebugView", v0)
  return v0
end
function AsyncEngineManager:delete()
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  v4:cancel()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  -- TODO: structure LOP_FORNPREP (pc 18, target 26)
  v4:cancel()
  -- TODO: structure LOP_FORNLOOP (pc 25, target 19)
  -- TODO: structure LOP_FORNPREP (pc 31, target 39)
  v4:cancel()
  -- TODO: structure LOP_FORNLOOP (pc 38, target 32)
  -- TODO: structure LOP_FORNPREP (pc 44, target 52)
  v4:cancel()
  -- TODO: structure LOP_FORNLOOP (pc 51, target 45)
  if g_currentMission ~= nil then
    v1:removeDrawable(self)
  end
  removeConsoleCommand("gsAsyncManagerToggleDebugView")
end
function AsyncEngineManager:overlapBoxPositionAsync(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
  local v13 = v13:getOrCreateNext()
  v13.framesSinceStart = 0
  v13.targetObject = v8
  v13.onOverlapCallback = v9
  v13.onFinishedCallback = v10
  v13.arguments = v12
  v13.isCancelled = false
  v13:setOverlapParameters(v1, v2, v3, v4, v5, v6, v7)
  if not v11 then
    -- if v0.overlapsExecutedThisFrame >= AsyncEngineManager.MAXIMUM_OVERLAPS_PER_FRAME then goto L43 end
  end
  self:beginExecutingOverlap(v13)
  return v13
  table.insert(self.queuedOverlaps, v13)
  return v13
end
function AsyncEngineManager:raycastClosestAsync(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13)
  local v14 = self:initialiseRaycast(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, nil, v13)
  v14.shouldRaycastAll = false
  if not v12 then
    -- if v0.raycastsExecutedThisFrame >= AsyncEngineManager.MAXIMUM_RAYCASTS_PER_FRAME then goto L33 end
  end
  self:beginExecutingRaycast(v14)
  return v14
  table.insert(self.queuedRaycasts, v14)
  return v14
end
function AsyncEngineManager:raycastAllAsync(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
  local v15 = self:initialiseRaycast(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v14)
  v15.shouldRaycastAll = true
  if not v13 then
    -- if v0.raycastsExecutedThisFrame >= AsyncEngineManager.MAXIMUM_RAYCASTS_PER_FRAME then goto L33 end
  end
  self:beginExecutingRaycast(v15)
  return v15
  table.insert(self.queuedRaycasts, v15)
  return v15
end
function AsyncEngineManager:initialiseRaycast(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13)
  local v14 = v14:getOrCreateNext()
  v14.isDone = false
  if v8 ~= nil then
    -- if v8 then goto L13 end
  end
  v14.generateNormals = false
  v14.targetObject = v10
  v14.onRayHitCallback = v11
  v14.onFinishedCallback = v12
  v14.arguments = v13
  v14.isCancelled = false
  v14:setRayParameters(v1, v2, v3, v4, v5, v6, v9, v7)
  return v14
end
function AsyncEngineManager:beginExecutingOverlap(v1)
  v1:begin()
  table.removeElement(self.queuedOverlaps, v1)
  table.insert(self.executingOverlaps, v1)
  self.overlapsExecutedThisFrame = self.overlapsExecutedThisFrame + 1
end
function AsyncEngineManager:beginExecutingRaycast(v1)
  v1:begin()
  table.removeElement(self.queuedRaycasts, v1)
  table.insert(self.executingRaycasts, v1)
  self.raycastsExecutedThisFrame = self.raycastsExecutedThisFrame + 1
end
function AsyncEngineManager:cancelOverlap(v1)
  local v2 = table.removeElement(self.queuedOverlaps, v1)
  local v3 = table.removeElement(self.executingOverlaps, v1)
  if v3 then
    table.insert(self.cancellingOverlaps, v1)
  elseif v2 then
    v4:returnToPool(v1)
  end
  return v2 or v3
end
function AsyncEngineManager:cancelRaycast(v1)
  local v2 = table.removeElement(self.queuedRaycasts, v1)
  local v3 = table.removeElement(self.executingRaycasts, v1)
  if v3 then
    table.insert(self.cancellingRaycasts, v1)
  elseif v2 then
    v4:returnToPool(v1)
  end
  return v2 or v3
end
function AsyncEngineManager:update()
  self:pumpOverlaps()
  self:pumpRaycasts()
end
function AsyncEngineManager:pumpOverlaps()
  -- TODO: structure LOP_FORNPREP (pc 5, target 36)
  if 1 <= self.executingOverlaps[#self.executingOverlaps].framesSinceStart then
    self.executingOverlaps[#self.executingOverlaps]:executeOnFinishedCallback()
    table.remove(self.executingOverlaps, #self.executingOverlaps)
    v5:returnToPool(self.executingOverlaps[#self.executingOverlaps])
  else
    self.executingOverlaps[#self.executingOverlaps].framesSinceStart = self.executingOverlaps[#self.executingOverlaps].framesSinceStart + 1
  end
  -- TODO: structure LOP_FORNLOOP (pc 35, target 6)
  local v4 = math.min(AsyncEngineManager.MAXIMUM_OVERLAPS_PER_FRAME - self.overlapsExecutedThisFrame, #self.queuedOverlaps)
  -- TODO: structure LOP_FORNPREP (pc 54, target 62)
  self:beginExecutingOverlap(self.queuedOverlaps[1])
  -- TODO: structure LOP_FORNLOOP (pc 61, target 55)
  -- TODO: structure LOP_FORNPREP (pc 67, target 92)
  if 2 <= g_updateLoopIndex - self.cancellingOverlaps[#self.cancellingOverlaps].cancellationLoopIndex then
    table.remove(self.cancellingOverlaps, #self.cancellingOverlaps)
    v5:returnToPool(self.cancellingOverlaps[#self.cancellingOverlaps])
  end
  -- TODO: structure LOP_FORNLOOP (pc 91, target 68)
  self.overlapsExecutedThisFrame = 0
end
function AsyncEngineManager:pumpRaycasts()
  -- TODO: structure LOP_FORNPREP (pc 5, target 28)
  if self.executingRaycasts[#self.executingRaycasts].isDone then
    self.executingRaycasts[#self.executingRaycasts]:executeOnFinishedCallback()
    table.remove(self.executingRaycasts, #self.executingRaycasts)
    v5:returnToPool(self.executingRaycasts[#self.executingRaycasts])
  end
  -- TODO: structure LOP_FORNLOOP (pc 27, target 6)
  local v4 = math.min(AsyncEngineManager.MAXIMUM_RAYCASTS_PER_FRAME - self.raycastsExecutedThisFrame, #self.queuedRaycasts)
  -- TODO: structure LOP_FORNPREP (pc 46, target 54)
  self:beginExecutingRaycast(self.queuedRaycasts[1])
  -- TODO: structure LOP_FORNLOOP (pc 53, target 47)
  -- TODO: structure LOP_FORNPREP (pc 59, target 84)
  if 2 <= g_updateLoopIndex - self.cancellingRaycasts[#self.cancellingRaycasts].cancellationLoopIndex then
    table.remove(self.cancellingRaycasts, #self.cancellingRaycasts)
    v5:returnToPool(self.cancellingRaycasts[#self.cancellingRaycasts])
  end
  -- TODO: structure LOP_FORNLOOP (pc 83, target 60)
  self.raycastsExecutedThisFrame = 0
end
function AsyncEngineManager:draw()
  local v5 = string.format("Queued overlaps: %d", #self.queuedOverlaps)
  renderText(...)
  v5 = string.format("Executing overlaps: %d", #self.executingOverlaps)
  renderText(...)
  v5 = string.format("Cancelling overlaps: %d", #self.cancellingOverlaps)
  renderText(...)
  v5 = string.format("Pooled overlaps: %d", #self.overlapsPool.pool)
  renderText(...)
  v5 = string.format("Queued raycasts: %d", #self.queuedRaycasts)
  renderText(...)
  v5 = string.format("Executing raycasts: %d", #self.executingRaycasts)
  renderText(...)
  v5 = string.format("Cancelling raycasts: %d", #self.cancellingRaycasts)
  renderText(...)
  v5 = string.format("Pooled raycasts: %d", #self.raycastsPool.pool)
  renderText(...)
  for v4, v5 in ipairs(self.queuedOverlaps) do
    v5:debugDraw(self.DEBUG_QUEUED_COLOUR[1], self.DEBUG_QUEUED_COLOUR[2], self.DEBUG_QUEUED_COLOUR[3])
  end
  for v4, v5 in ipairs(self.executingOverlaps) do
    v5:debugDraw(self.DEBUG_EXECUTING_COLOUR[1], self.DEBUG_EXECUTING_COLOUR[2], self.DEBUG_EXECUTING_COLOUR[3])
  end
  for v4, v5 in ipairs(self.queuedRaycasts) do
    v5:debugDraw(self.DEBUG_QUEUED_COLOUR[1], self.DEBUG_QUEUED_COLOUR[2], self.DEBUG_QUEUED_COLOUR[3])
  end
  for v4, v5 in ipairs(self.executingRaycasts) do
    v5:debugDraw(self.DEBUG_EXECUTING_COLOUR[1], self.DEBUG_EXECUTING_COLOUR[2], self.DEBUG_EXECUTING_COLOUR[3])
  end
end
function AsyncEngineManager:consoleCommandToggleDebugView()
  if not g_currentMission then
    return "This command can only be used in a game"
  end
  self.isDebugViewActive = not self.isDebugViewActive
  if self.isDebugViewActive then
    v1:addDrawable(self)
    return "Debug ray/overlaps: on"
  end
  v1:removeDrawable(self)
  return "Debug ray/overlaps: off"
end
local v1 = AsyncEngineManager.new()
g_asyncEngineManager = v1
