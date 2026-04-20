-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SleepManager = {SLEEPING_TIME_SCALE = 5000, TIME_TO_ANSWER_REQUEST = 20000, TIME_TO_NEXT_REQUEST = 20000}
local SleepManager_mt = Class(SleepManager, AbstractManager)
function SleepManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.isSleeping = false
  v1.wakeUpTime = 0
  v1.previousCamera = nil
  v1.previousInputContext = nil
  v1.fallbackCamera = nil
  v1.isRequestPending = false
  v1.requestAnswer = true
  v1.requestedTime = 0
  v1.requestedTargetTime = 0
  return v1
end
function SleepManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v4, v5 = getNormalizedScreenValues(128, 128)
  self.animationNumFrames = 16
  self.animationTimer = 0
  self.animationSpeed = 50
  self.animationOffset = 0
  self.animationFrameSize = 128
  self.animationRefSize = {2048, 128}
  local v6, v7 = getNormalizedScreenValues(-4, 0)
  local v8 = Overlay.new("dataS/menu/hud/sleep_animation.png", 0.5 + v6, 0.5 + v7, v4, v5)
  self.animationOverlay = v8
  v8:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_CENTER)
  local v10 = GuiUtils.getUVs({0, 0, self.animationFrameSize, self.animationFrameSize}, self.animationRefSize)
  v8:setUVs(...)
  v8:setColor(0.0742, 0.4341, 0.6939, 1)
  local v8, v9 = getNormalizedScreenValues(200, 200)
  v8 = Overlay.new("dataS/menu/hud/ui_elements.png", 0.5, 0.5, v8, v9)
  self.animationBackgroundOverlay = v8
  v8:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_CENTER)
  v10 = GuiUtils.getUVs({294, 390, 100, 100}, {1024, 1024})
  v8:setUVs(...)
  v8:setColor(0, 0, 0, 0.75)
  v8:subscribe(MessageType.USER_REMOVED, self.onUserRemoved, self)
end
function SleepManager:unloadMapData()
  v1:unsubscribeAll(self)
  if self.fallbackCamera ~= nil then
    delete(self.fallbackCamera)
    self.fallbackCamera = nil
  end
  if self.animationOverlay ~= nil then
    v1:delete()
    self.animationOverlay = nil
  end
  if self.animationBackgroundOverlay ~= nil then
    v1:delete()
    self.animationBackgroundOverlay = nil
  end
end
function SleepManager:update(dt)
  local v2 = v2:getIsServer()
  if v2 then
    if self.wakeUpTime < g_time and self.isSleeping then
      self:stopSleep()
    end
    if self.isRequestPending then
      if #self.userRequestIds == 0 then
        if self.requestAnswer then
          self:startSleep(self.requestedTargetTime)
          self:resetRequest()
          -- goto L81  (LOP_JUMP +43)
        end
        local v4 = SleepRequestDeniedEvent.new(self.requestDeniedUserId)
        if g_dedicatedServer ~= nil then
        end
        v2:broadcastEvent(v4, true)
        self:resetRequest()
      elseif self.requestedTime + SleepManager.TIME_TO_ANSWER_REQUEST < g_time then
        v4 = SleepRequestTimeoutEvent.new()
        v2:broadcastEvent(v4, false)
        self:resetRequest()
      end
    end
  end
  if self.isSleeping then
    self.animationTimer = self.animationTimer - dt
    if self.animationTimer < 0 then
      self.animationTimer = self.animationSpeed
      self.animationOffset = self.animationOffset + 1
      if self.animationNumFrames - 1 < self.animationOffset then
        self.animationOffset = 0
      end
      v4 = GuiUtils.getUVs({self.animationOffset * self.animationFrameSize, 0, self.animationFrameSize, self.animationFrameSize}, self.animationRefSize)
      v2:setUVs(...)
    end
  end
end
function SleepManager:draw()
  if self.isSleeping then
    if self.animationBackgroundOverlay ~= nil then
      dt:render()
    end
    if self.animationOverlay ~= nil then
      dt:render()
    end
  end
end
function SleepManager:onUserRemoved(user)
  if self.isRequestPending then
    for v5, v6 in ipairs(self.userRequestIds) do
      local v7 = user:getId()
      if not (v6 == v7) then
        continue
      end
      table.remove(self.userRequestIds, v5)
      return
    end
  end
end
function SleepManager:getCanSleep()
  return not self.isSleeping
end
function SleepManager:getIsSleeping()
  return self.isSleeping
end
function SleepManager.onSleepNotAllowed(v0)
  local v2 = v2:getText("ui_inGameSleepNotAllowed")
  InfoDialog.show(v2, nil, v0, DialogElement.TYPE_WARNING)
end
function SleepManager.onSleepRequestDenied(v0, dt)
  if 0 < dt then
    local v3 = v3:getUserByUserId(dt)
    if v3 ~= nil then
      local v6 = v3:getNickname()
      local v4 = string.format(...)
    end
  end
  local v7 = v7:getText("ui_inGameSleepRequestDenied")
  InfoDialog.show(v7 .. v2, nil, v0, DialogElement.TYPE_WARNING)
end
function SleepManager.onSleepRequestTimeout(v0)
  local v2 = v2:getText("ui_inGameSleepRequestTimeout")
  InfoDialog.show(v2, nil, v0, DialogElement.TYPE_WARNING)
end
function SleepManager.onSleepRequestPending(v0)
  local v2 = v2:getText("ui_inGameSleepRequestPending")
  InfoDialog.show(v2, nil, v0, DialogElement.TYPE_WARNING)
end
function SleepManager:onSleepRequest(userId, targetTime)
  local v3 = v3:getUserByUserId(userId)
  if v3 ~= nil then
    local v5 = v3:getNickname()
  end
  local v9 = v9:getText("ui_inGameSleepRequest")
  local v8 = string.format(v9, v4)
  YesNoDialog.show(...)
end
function SleepManager.onSleepRequestYesNo(v0, dt)
  local v2 = v2:getServerConnection()
  local v4 = SleepResponseEvent.new(dt)
  v2:sendEvent(...)
end
function SleepManager:onSleepResponse(connection, answer)
  local v4 = v4:getIsServer()
  assert(v4, "SleepManager:onSleepResponse is a server-only function")
  if not self.isRequestPending then
    return
  end
  self.requestAnswer = self.requestAnswer and answer
  local v3 = v3:getUserIdByConnection(connection)
  if not answer and self.requestDeniedUserId == nil then
    self.requestDeniedUserId = v3
  end
  if v3 ~= nil then
    for v7, v8 in ipairs(self.userRequestIds) do
      if not (v8 == v3) then
        continue
      end
      table.remove(self.userRequestIds, v7)
      return
    end
  end
end
function SleepManager:showDialog()
  local dt = dt:getBlocksTimeChange()
  if dt then
    local v4 = v4:getText("ui_inGameSleepNotAllowedDuringTour")
    dt:showInfoDialog({text = v4, dialogType = DialogElement.TYPE_WARNING, target = self})
    return
  end
  dt = self:getCanSleep()
  if dt then
    local v2 = v2:getText("ui_inGameSleepTargetTime")
    SleepDialog.show(v2, self.sleepDialogYesNo, self)
    return
  end
  v4 = v4:getText("ui_inGameSleepWrongTime")
  dt:showInfoDialog({text = v4, dialogType = DialogElement.TYPE_WARNING, target = self})
end
function SleepManager:sleepDialogYesNo(yes, targetTime)
  if yes then
    local v3 = v3:getIsServer()
    if v3 then
      self:startSleepRequest(g_currentMission.playerUserId, targetTime)
      return
    end
    v3 = v3:getServerConnection()
    local v5 = SleepRequestEvent.new(g_currentMission.playerUserId, targetTime)
    v3:sendEvent(...)
  end
end
function SleepManager:startSleepRequest(userId, targetTime)
  local v4 = v4:getIsServer()
  assert(v4, "SleepManager:startSleepRequest is a server-only function")
  local v3 = v3:getUserByUserId(userId)
  if v3 ~= nil then
    local v5 = v3:getConnection()
  end
  if self.isRequestPending then
    if v4 ~= nil then
      local v7 = SleepRequestPendingEvent.new()
      v4:sendEvent(...)
    end
    return
  end
  if g_time >= self.requestedTime + SleepManager.TIME_TO_NEXT_REQUEST then
  end
  if not true then
    local v6 = self:getCanSleep()
    if v6 then
      v6 = v6:getBlocksTimeChange()
      -- if not v6 then goto L69 end
    end
  end
  if v4 ~= nil then
    local v8 = SleepNotAllowedEvent.new()
    v4:sendEvent(...)
  end
  return
  self.isRequestPending = true
  self.requestedTime = g_time
  self.requestedTargetTime = targetTime
  self.requestAnswer = true
  self.userRequestIds = {}
  v7 = v7:getUsers()
  for v9, v10 in ipairs(...) do
    local v11 = v10:getId()
    if not (v11 ~= userId) then
      continue
    end
    if g_dedicatedServer ~= nil then
      v11 = v10:getId()
      local v12 = v12:getServerUserId()
      if not (v11 ~= v12) then
        continue
      end
    end
    local v13 = v10:getId()
    table.insert(...)
  end
  v8 = SleepRequestEvent.new(userId, targetTime)
  if g_dedicatedServer ~= nil then
  end
  v6:broadcastEvent(v8, true, v4)
end
function SleepManager:resetRequest()
  self.isRequestPending = false
  self.requestedTargetTime = 0
  self.requestAnswer = true
  self.requestDeniedUserId = nil
end
function SleepManager:startSleep(targetTime)
  v2:setSlowModeEnabled(true)
  local v2 = v2:getIsServer()
  if v2 then
    self.wakeUpTime = g_time + (targetTime * 1000 * 60 * 60 - g_currentMission.environment.dayTime + 1) % 86400000 / SleepManager.SLEEPING_TIME_SCALE
    self.startTimeScale = g_currentMission.missionInfo.timeScale
    v4:setTimeScale(SleepManager.SLEEPING_TIME_SCALE)
    v4:setTimeScaleMultiplier(1)
    local v6 = StartSleepStateEvent.new(targetTime * 1000 * 60 * 60)
    v4:broadcastEvent(v6, false)
  end
  self.isSleeping = true
  v2:setIsVisible(false)
  g_currentMission.isPlayerFrozen = true
  v2:setContext("SLEEPING", true)
  v2 = getCamera()
  self.previousCamera = v2
  v2 = self:getCamera()
  if v2 ~= nil then
    local v3, v4, v5 = getWorldTranslation(v2)
    local v8 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v3, v4, v5)
    v6 = math.max(v8 + 60, v4)
    setWorldTranslation(v2, v3, v6, v5)
    setWorldRotation(v2, 1.3962634015954636, 0, 0)
    setCamera(v2)
  end
  v3:publish(MessageType.SLEEPING, true)
end
function SleepManager:stopSleep()
  dt:setSlowModeEnabled(false)
  local dt = dt:getIsServer()
  if dt then
    dt:setTimeScale(self.startTimeScale)
    local v3 = StopSleepStateEvent.new()
    dt:broadcastEvent(v3, false)
  end
  if self.previousCamera ~= nil then
    dt = entityExists(self.previousCamera)
    -- if not v1 then goto L46 end
    setCamera(self.previousCamera)
  elseif g_currentMission.controlPlayer then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L59
    setCamera(g_currentMission.player.cameraNode)
  else
    if g_currentMission.controlledVehicle ~= nil then
      dt = dt:getActiveCamera()
      if dt ~= nil and dt.cameraNode ~= nil then
        setCamera(dt.cameraNode)
      end
    end
  end
  self.previousCamera = nil
  dt = dt:getContextName()
  if dt == "SLEEPING" then
    dt:revertContext(true)
  end
  g_currentMission.isPlayerFrozen = false
  dt:setIsVisible(true)
  self.isSleeping = false
  dt:publish(MessageType.SLEEPING, false)
end
function SleepManager:getCamera()
  local dt = dt:getSleepCamera(g_currentMission.player.farmId)
  if not dt then
    dt = self:getFallbackCamera()
  end
  return dt
end
function SleepManager:getFallbackCamera()
  if self.fallbackCamera == nil then
    local dt = createCamera("sleepingFallbackCamera", 1.0471975511965976, 1, 10000)
    self.fallbackCamera = dt
    local v2 = getRootNode()
    link(v2, self.fallbackCamera)
  end
  return self.fallbackCamera
end
local dt = SleepManager.new()
g_sleepManager = v1
