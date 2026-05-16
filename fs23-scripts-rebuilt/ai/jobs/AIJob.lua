-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIJob = {START_SUCCESS = 0}
local AIJob_mt = Class(AIJob)
function AIJob.new(isServer, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.isServer = isServer
  v2.tasks = {}
  v2.namedParameters = {}
  v2.groupedParameters = {}
  v2.currentTaskIndex = 0
  v2.jobId = nil
  v2.startedFarmId = nil
  v2.isDirectStart = false
  return v2
end
function AIJob:delete()
  for v4, v5 in ipairs(self.namedParameters) do
    v6:delete()
  end
  for v4, v5 in ipairs(self.tasks) do
    v5:delete()
  end
end
function AIJob:saveToXMLFile(xmlFile, key, usedModNames)
  for v8, v9 in ipairs(self.namedParameters) do
    if not (v9.parameter.saveToXMLFile ~= nil) then
      continue
    end
    local v11 = string.format("%s.parameter(%d)", key, v4)
    xmlFile:setString(v11 .. "#name", v9.name)
    v12:saveToXMLFile(xmlFile, v11, usedModNames)
  end
  return true
end
function AIJob.loadFromXMLFile(v0, v1, v2)
  v1:iterate(v2 .. ".parameter", function(v0, v1)
    local v2 = v2:getString(v1 .. "#name")
    if v2 ~= nil then
      local v3 = v3:getNamedParameter(v2)
      if v3 ~= nil and v3.loadFromXMLFile ~= nil then
        v3:loadFromXMLFile(u0, v1)
      end
    end
  end)
end
function AIJob:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  self.isDirectStart = v3
  v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadInt32(streamId)
    self.jobId = v3
  end
  for v6, v7 in ipairs(self.namedParameters) do
    v8:readStream(streamId, connection)
  end
  self:setValues()
  v3 = streamReadUInt8(streamId)
  self.currentTaskIndex = v3
end
function AIJob:writeStream(streamId, connection)
  streamWriteBool(streamId, self.isDirectStart)
  if self.jobId == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    streamWriteInt32(streamId, self.jobId)
  end
  for v6, v7 in ipairs(self.namedParameters) do
    v8:writeStream(streamId, connection)
  end
  streamWriteUInt8(streamId, self.currentTaskIndex)
end
function AIJob:update(dt)
  if self.isServer then
    if self.currentTaskIndex == 0 then
      local v3, v4 = self:canStartWork()
      if v3 then
        local taskIndex = self:getStartTaskIndex()
        local task = self:getTaskByIndex(taskIndex)
        self:startTask(task)
        -- goto L39  (LOP_JUMP +15)
      end
      taskIndex:stopJob(self, v4)
      return
    else
      v3 = self:getTaskByIndex(self.currentTaskIndex)
    end
    if v2 ~= nil then
      v2:update(dt)
      v3 = v2:getIsFinished()
      if v3 then
        v3, v4 = self:canContinueWork()
        if not v3 then
          taskIndex:stopJob(self, v4)
          return
        end
        taskIndex = self:getNextTaskIndex()
        if #self.tasks < taskIndex then
          task = self:getIsLooping()
          if task then
          else
            local v9 = AIMessageSuccessFinishedJob.new()
            task:stopJob(...)
            return
          end
        end
        self:stopTask(v2, false)
        task = self:getTaskByIndex(taskIndex)
        self:startTask(task)
      end
    end
  end
end
function AIJob.canContinueWork(v0)
  return true, nil
end
function AIJob.canStartWork(v0)
  return true, nil
end
function AIJob.getPricePerMs(v0)
  return 0.0004
end
function AIJob:getNextTaskIndex()
  return self.currentTaskIndex + 1
end
function AIJob.validate(v0, v1)
  return true, nil
end
function AIJob.getIsLooping(v0)
  return false
end
function AIJob.setValues(v0)
end
function AIJob:startTask(task)
  self.currentTaskIndex = task.taskIndex
  task:start()
  if self.isServer then
    local v4 = AITaskStartEvent.new(self, task)
    v2:broadcastEvent(...)
  end
end
function AIJob:stopTask(task, wasJobStopped)
  task:stop(wasJobStopped)
  if self.isServer then
    local v5 = AITaskStopEvent.new(self, task, wasJobStopped)
    v3:broadcastEvent(...)
  end
end
function AIJob:start(farmId)
  local v2 = v2:getRandomHelper()
  self.helperIndex = v2.index
  self.startedFarmId = farmId
  self.isRunning = true
  if self.isServer then
    self.currentTaskIndex = 0
  end
end
function AIJob.getCanSkipTask(v0)
  return false
end
function AIJob.skipCurrentTask(v0)
end
function AIJob:stop(aiMessage)
  self.isRunning = false
  if self.isServer and self.currentTaskIndex ~= 0 then
    local task = self:getTaskByIndex(self.currentTaskIndex)
    self:stopTask(task, true)
  end
  self:showNotification(aiMessage)
  self:resetTasks()
end
function AIJob:addTask(task)
  if task.taskIndex ~= nil then
  end
  assert(true, "Task already added")
  table.insert(self.tasks, task)
  task.taskIndex = #self.tasks
end
function AIJob:resetTasks()
  for v4, v5 in ipairs(self.tasks) do
    v5:reset()
  end
end
function AIJob:getTaskByIndex(taskIndex)
  return self.tasks[taskIndex]
end
function AIJob:getTitle()
  local v1 = v1:getHelperByIndex(self.helperIndex)
  return v1.title
end
function AIJob:getDescription()
  local v1 = v1:getJobTypeByIndex(self.jobTypeIndex)
  return v1.title
end
function AIJob:getHelperName()
  local v1 = v1:getHelperByIndex(self.helperIndex)
  return v1.title
end
function AIJob:showNotification(aiMessage)
  local v2 = v2:getHelperByIndex(self.helperIndex)
  if v2 ~= nil then
    if g_currentMission ~= nil and g_currentMission.player ~= nil then
    end
    if aiMessage ~= nil and self.startedFarmId == v3 then
      local text = aiMessage:getMessage()
      local errorType = aiMessage:getType()
      if errorType == AIMessageType.OK then
      elseif errorType == AIMessageType.INFO then
      end
      local v13 = aiMessage:getMessageArguments()
      local v10 = string.format(...)
      v7:addIngameNotification(...)
    end
  end
end
function AIJob.getStartTaskIndex(v0)
  return 1
end
function AIJob:addNamedParameter(name, parameter)
  table.insert(self.namedParameters, {name = name, parameter = parameter})
end
function AIJob:setParamterValid(isValid)
  for errorType, v6 in ipairs(self.namedParameters) do
    v7:setIsValid(isValid)
  end
end
function AIJob:getNamedParameters()
  return self.namedParameters
end
function AIJob:getNamedParameter(name)
  if name == nil then
    return nil
  end
  local v2 = name:upper()
  for errorType, v6 in ipairs(self.namedParameters) do
    local v7 = v7:upper()
    if not (v7 == name) then
      continue
    end
    return v6.parameter
  end
  return nil
end
function AIJob:getGroupedParameters()
  return self.groupedParameters
end
function AIJob:applyCurrentState(vehicle, mission, farmId, isDirectStart)
  self.isDirectStart = isDirectStart
end
function AIJob.getIsAvailableForVehicle(v0, aiMessage)
  return true
end
function AIJob:setId(id)
  self.jobId = id
end
function AIJob.onParameterValueChanged(v0, aiMessage)
end
function AIJob.getIsStartable(v0, aiMessage)
  return true, AIJob.START_SUCCESS
end
