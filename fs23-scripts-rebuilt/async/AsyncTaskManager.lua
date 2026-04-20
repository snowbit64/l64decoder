-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AsyncTaskManager = {}
local v0 = Class(AsyncTaskManager)
function AsyncTaskManager.new(v0)
  if not v0 then
  end
  local v1 = v1(v2, v3)
  v1:initDataStructures()
  return v1
end
function AsyncTaskManager:initDataStructures()
  self.firstTask = nil
  self.lastTask = nil
  self.currentRunningTask = nil
  self.enabled = true
  self.doTracing = false
  self.executeSubTasksImmediately = self.doTracing and false
  self.allowedTimeMsPerFrame = nil
end
function AsyncTaskManager:runLambda(v1)
  if self.doTracing then
    traceOn(2)
    v1()
    traceOff()
    return
  end
  v1()
end
function AsyncTaskManager:addTask(v1)
  if not self.enabled then
    self:runLambda(v1)
    return
  end
  if self.currentRunningTask == nil then
    if self.doTracing then
      print("Deferred a lambda")
    end
    if self.firstTask == nil then
      self.firstTask = v2
      self.lastTask = v2
      return
    end
    self.lastTask.nextTask = v2
    self.lastTask = v2
    return
  end
  if self.doTracing then
    print("Queued a sub-lambda")
  end
  if self.currentRunningTask.firstSubTask == nil then
    self.currentRunningTask.firstSubTask = v2
    self.currentRunningTask.lastSubTask = v2
    return
  end
  self.currentRunningTask.lastSubTask.nextTask = v2
  self.currentRunningTask.lastSubTask = v2
end
function AsyncTaskManager:addSubtask(v1)
  if self.executeSubTasksImmediately then
    self:runLambda(v1)
    return
  end
  if self.enabled then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L30
  end
  if self.enabled then
    print("Warning: addSubtask is *not* queuing the task, because not inside a task")
    printCallstack()
  end
  self:runLambda(v1)
  return
  self:addTask(v1)
end
function AsyncTaskManager:hasTasks()
  if self.firstTask == nil then
  end
  return true
end
function AsyncTaskManager:flushAllTasks()
  self:initDataStructures()
  forceEndFrameRepeatMode()
end
function AsyncTaskManager:runTopTask()
  if self.firstTask ~= nil then
    self.firstTask = self.firstTask.nextTask
    if self.firstTask == nil then
      self.lastTask = nil
    end
    self.currentRunningTask = v1
    self:runLambda(v1.lambda)
    self.currentRunningTask = nil
    if v1.firstSubTask ~= nil then
      v1.lastSubTask.nextTask = self.firstTask
      self.firstTask = v1.firstSubTask
      if self.lastTask == nil then
        self.lastTask = v1.lastSubTask
      end
    end
    return true
  end
  return false
end
function AsyncTaskManager:update(v1)
  local v2 = self:hasTasks()
  if v2 then
    v2 = openIntervalTimer()
    if v2 == -1 then
      self:runTopTask()
      return
    end
    while true do
      v4 = self:hasTasks()
      if not v4 then
        break
      end
      self:runTopTask()
      if not (self.allowedTimeMsPerFrame ~= nil) then
        break
      end
      v4 = readIntervalTimerMs(v2)
      if not (self.allowedTimeMsPerFrame >= v4) then
        break
      end
    end
    v4 = readIntervalTimerMs(v2)
    if 1000 < v4 then
      Logging.devWarning("deferred loading task ran to %d ms", v4)
    end
    closeIntervalTimer(v2)
  end
end
function AsyncTaskManager:setAllowedTimePerFrame(v1)
  self.allowedTimeMsPerFrame = v1
end
local v1 = AsyncTaskManager.new()
g_asyncTaskManager = v1
