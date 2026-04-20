-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AbstractMission = {}
local AbstractMission_mt = Class(AbstractMission, Object)
InitStaticObjectClass(AbstractMission, "AbstractMission", ObjectIds.MISSION)
AbstractMission.STATUS_STOPPED = 0
AbstractMission.STATUS_RUNNING = 1
AbstractMission.STATUS_FINISHED = 2
AbstractMission.SUCCESS_FACTOR = 0.95
AbstractMission.NOTIFICATION_DELAY = 60000
function AbstractMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.status = AbstractMission.STATUS_STOPPED
  v3.reward = 0
  v3.completion = 0
  v3.notificationTimer = 0
  v3.lastNotificationCompletion = 0
  local v4 = v3:getNextDirtyFlag()
  v3.missionDirtyFlag = v4
  v4:subscribe(MessageType.FARM_DELETED, v3.farmDestroyed, v3)
  return v3
end
function AbstractMission.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
  v1:unsubscribeAll(v0)
  v1:publish(MessageType.MISSION_DELETED, v0)
end
function AbstractMission:saveToXMLFile(xmlFile, key)
  setXMLInt(xmlFile, key .. "#reward", self.reward)
  setXMLInt(xmlFile, key .. "#status", self.status)
  setXMLBool(xmlFile, key .. "#success", self.success or false)
  if self.farmId ~= nil then
    setXMLInt(xmlFile, key .. "#farmId", self.farmId)
  end
  if self.stealingCost ~= nil then
    setXMLFloat(xmlFile, key .. "#stealingCost", self.stealingCost)
  end
end
function AbstractMission:loadFromXMLFile(xmlFile, key)
  local v3 = getXMLInt(xmlFile, key .. "#reward")
  self.reward = v3
  v3 = getXMLInt(xmlFile, key .. "#status")
  self.status = v3
  v3 = getXMLInt(xmlFile, key .. "#farmId")
  self.farmId = v3
  local v4 = getXMLBool(xmlFile, key .. "#success")
  self.success = v4 or false
  v3 = getXMLFloat(xmlFile, key .. "#stealingCost")
  self.stealingCost = v3
  return true
end
function AbstractMission:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  streamWriteUInt8(streamId, self["type"].typeId)
  streamWriteFloat32(streamId, self.reward)
  streamWriteUInt8(streamId, self.status)
  if self.status == AbstractMission.STATUS_RUNNING then
    streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    streamWriteInt32(streamId, self.activeMissionId)
    return
  end
  if self.status == AbstractMission.STATUS_FINISHED then
    streamWriteFloat32(streamId, self.stealingCost or 0)
    streamWriteBool(streamId, self.success)
  end
end
function AbstractMission:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v5 = streamReadUInt8(streamId)
  local v3 = v3:getMissionTypeById(...)
  self["type"] = v3
  v3 = streamReadFloat32(streamId)
  self.reward = v3
  v3 = streamReadUInt8(streamId)
  self.status = v3
  if self.status == AbstractMission.STATUS_RUNNING then
    v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.farmId = v3
    v3 = streamReadInt32(streamId)
    self.activeMissionId = v3
  elseif self.status == AbstractMission.STATUS_FINISHED then
    v3 = streamReadFloat32(streamId)
    self.stealingCost = v3
    v3 = streamReadBool(streamId)
    self.success = v3
  end
  v3:assignGenerationTime(self)
  table.insert(g_missionManager.missions, self)
  v3:publishDelayed(MessageType.MISSION_GENERATED, self)
end
function AbstractMission:writeUpdateStream(streamId, connection, dirtyMask)
  streamWriteUInt8(streamId, self.status)
  streamWriteFloat32(streamId, self.completion)
end
function AbstractMission:readUpdateStream(streamId, timestamp, connection)
  local v4 = streamReadUInt8(streamId)
  self.status = v4
  v4 = streamReadFloat32(streamId)
  self.completion = v4
end
function AbstractMission.init(v0)
  return true
end
function AbstractMission:updateTick(dt)
  if self.isServer and self.status == AbstractMission.STATUS_RUNNING then
    if self.lastCompletion == nil then
      self.lastCompletion = g_currentMission.time
    elseif self.lastCompletion < g_currentMission.time - 2500 then
      local connection = self:getCompletion()
      self.completion = connection
      if 0.995 <= self.completion then
        self:finish(true)
      end
    end
    if self.lastCompletion ~= self.completion then
      self:raiseDirtyFlags(self.missionDirtyFlag)
    end
  end
end
function AbstractMission:updateCompletionNotification(dt)
  self.notificationTimer = self.notificationTimer + dt
  if self.lastNotificationCompletion + 0.1 < self.completion and AbstractMission.NOTIFICATION_DELAY < self.notificationTimer then
    self.notificationTimer = 0
    self.lastNotificationCompletion = self.completion
    local v3 = v3:getFarmId()
    if self.farmId == v3 then
      self:showCompletionNotification(self.completion)
    end
  end
end
function AbstractMission.showCompletionNotification(v0)
end
function AbstractMission:update(dt)
  if self.status == AbstractMission.STATUS_RUNNING then
    self:raiseActive()
    self:updateCompletionNotification(dt)
  end
end
function AbstractMission:start(spawnVehicles)
  self.status = AbstractMission.STATUS_RUNNING
  self:raiseActive()
  local v4 = MissionStartedEvent.new(self)
  connection:broadcastEvent(...)
  return true
end
function AbstractMission.started(v0)
end
function AbstractMission:finish(success)
  self.status = AbstractMission.STATUS_FINISHED
  self.success = success
  if self.isServer then
    local connection = self:calculateStealingCost()
    self.stealingCost = connection
    local v4 = MissionFinishedEvent.new(self, success, self.stealingCost)
    connection:broadcastEvent(...)
  end
  connection:publish(MissionFinishedEvent, self, success)
end
function AbstractMission.hasLeasableVehicles(v0)
  return false
end
function AbstractMission.hasField(v0)
  return false
end
function AbstractMission.calculateStealingCost(v0)
  return 0
end
function AbstractMission:dismiss()
  if self.isServer then
    if self.success then
      local connection = self:getReward()
    else
    end
    if dt ~= 0 then
      connection:addMoney(dt, self.farmId, MoneyType.MISSIONS, true, true)
    end
  end
end
function AbstractMission.validate(v0, dt)
  return true
end
function AbstractMission:getData()
  local dt = self:getReward()
  return dt, "none", "none"
end
function AbstractMission.getNPC(v0)
  return nil
end
function AbstractMission:getIsAvailable()
  if self.timeLeft ~= nil and 0 >= self.timeLeft then
  end
  return dt
end
function AbstractMission.getExtraProgressText(v0)
  return ""
end
function AbstractMission.getCompletion(v0)
  return 0
end
function AbstractMission:farmDestroyed(farmId)
  if farmId == self.farmId then
    self:delete()
  end
end
