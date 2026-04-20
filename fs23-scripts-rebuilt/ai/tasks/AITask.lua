-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AITask = {}
local AITask_mt = Class(AITask)
function AITask.new(isServer, job, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.isServer = isServer
  v3.job = job
  v3.isFinished = false
  v3.isRunning = false
  v3.markAsFinished = false
  return v3
end
function AITask.delete(v0)
end
function AITask.update(v0, v1)
end
function AITask:start()
  self.isFinished = false
  self.isRunning = true
  if self.markAsFinished then
    self.isFinished = true
    self.markAsFinished = false
  end
end
function AITask:skip()
  if self.isRunning then
    self.isFinished = true
    return
  end
  self.markAsFinished = true
end
function AITask:stop(wasJobStopped)
  self.isRunning = false
  self.markAsFinished = false
end
function AITask:reset()
  self.isFinished = false
end
function AITask.validate(v0, v1)
  return true, nil
end
function AITask:getIsFinished()
  return self.isFinished
end
