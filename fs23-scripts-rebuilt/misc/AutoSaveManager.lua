-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AutoSaveManager = {DEFAULT_INTERVAL = 15, INTERVAL_OPTIONS = {}}
AutoSaveManager.INTERVAL_OPTIONS[1] = 0
AutoSaveManager.INTERVAL_OPTIONS[2] = 5
AutoSaveManager.INTERVAL_OPTIONS[3] = 10
AutoSaveManager.INTERVAL_OPTIONS[4] = 15
local AutoSaveManager_mt = Class(AutoSaveManager, AbstractManager)
function AutoSaveManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.interval = 60000 * AutoSaveManager.DEFAULT_INTERVAL
  v1.time = v1.interval
  v1.isPending = false
  v1.isActive = true
  v1.saveNextFrame = false
  return v1
end
function AutoSaveManager:loadFinished()
  v1:subscribe(MessageType.GUI_INGAME_OPEN, self.onOpenIngameMenu, self)
  v1:subscribe(MessageType.SAVEGAME_LOADED, self.onSavegameLoaded, self)
  local v1 = v1:getIsServer()
  if v1 then
    addConsoleCommand("gsAutoSave", "Enables/disables auto save", "consoleCommandAutoSave", self)
    addConsoleCommand("gsAutoSaveInterval", "Sets the auto save interval", "consoleCommandAutoSaveInterval", self)
  end
end
function AutoSaveManager.unloadMapData(v0)
  v1:unsubscribeAll(v0)
  local v1 = v1:getIsServer()
  if v1 then
    removeConsoleCommand("gsAutoSaveInterval")
    removeConsoleCommand("gsAutoSave")
  end
end
function AutoSaveManager:update(dt)
  local v2 = self:getIsAutoSaveAllowed()
  if v2 then
    v2 = v2:getIsServer()
    if v2 and g_currentMission.gameStarted and self.time < g_time then
      self.isPending = true
      if g_dedicatedServer ~= nil then
        self:runAutoSaveIfPending(true)
      end
    end
  end
  if self.saveNextFrame then
    self:runAutoSaveIfPending()
    self.saveNextFrame = false
  end
end
function AutoSaveManager:runAutoSaveIfPending(hideVisuals)
  if self.isPending then
    self.isPending = false
    v2:startSaveCurrentGame(hideVisuals)
    self.time = g_time + self.interval
  end
end
function AutoSaveManager:onMissionStarted()
  self.time = g_time + self.interval
  self.isPending = false
end
function AutoSaveManager:onOpenIngameMenu()
  self.saveNextFrame = true
end
function AutoSaveManager:onSavegameLoaded()
  if g_dedicatedServer == nil then
    if g_currentMission ~= nil then
      if g_currentMission.missionInfo ~= nil and g_currentMission.missionInfo.autoSaveInterval ~= nil then
      end
      v2:registerObjectToCallOnMissionStart(self)
    end
    if not GS_IS_MOBILE_VERSION then
      self:setInterval(v1)
    end
  end
end
function AutoSaveManager:setInterval(intervalMinutes)
  if 0 < intervalMinutes then
    self.interval = intervalMinutes * 60 * 1000
    self.time = g_time + self.interval
    self:setIsActive(true)
    return
  end
  self:setIsActive(false)
end
function AutoSaveManager:getInterval()
  if not self.isActive then
    return 0
  end
  return self.interval / 60 / 1000
end
function AutoSaveManager.getIntervalFromIndex(v0, v1)
  if AutoSaveManager.INTERVAL_OPTIONS[v1] ~= nil then
    return AutoSaveManager.INTERVAL_OPTIONS[v1]
  end
  return 0
end
function AutoSaveManager.getIndexFromInterval(v0, v1)
  for v5, v6 in ipairs(AutoSaveManager.INTERVAL_OPTIONS) do
    if not (v6 == v1) then
      continue
    end
    return v5
  end
  return 1
end
function AutoSaveManager.getIntervalOptions(v0)
  return AutoSaveManager.INTERVAL_OPTIONS
end
function AutoSaveManager:setIsActive(state)
  self.isActive = state
  if state then
    self.time = g_time + self.interval
  end
end
function AutoSaveManager:getIsActive()
  return self.isActive
end
function AutoSaveManager:resetTime()
  self.time = g_time + self.interval
end
function AutoSaveManager:getIsAutoSaveAllowed()
  if g_currentMission ~= nil then
    local v1 = v1:getIsAutoSaveSupported()
    -- if v1 then goto L12 end
  end
  return false
  if g_appIsSuspended then
    return false
  end
  if Profiler.IS_INITIALIZED then
    return false
  end
  return self.isActive
end
function AutoSaveManager.consoleCommandAutoSaveInterval(v0, v1)
  local v2 = v2:getIsServer()
  if v2 then
    v2 = tonumber(v1)
    if v2 == nil then
      local v10 = v10:getInterval()
      local v6 = string.format("%1.3f", v10 / 60 / 1000)
      return "AutoSaveInterval = " .. v6 .. ". Arguments: interval[minutes]"
    end
    v2 = math.max(v1, 1)
    v2:setInterval(v2)
    return "AutoSaveInterval minutes = " .. v2
  end
end
function AutoSaveManager.consoleCommandAutoSave(v0, v1)
  local v2 = v2:getIsServer()
  if v2 then
    if v1 ~= nil then
      -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000003 -> L23
    end
    local v7 = v7:getIsActive()
    local v6 = tostring(...)
    return "AutoSave = " .. v6 .. ". Arguments: enabled[true|false]"
    v2 = tostring(v1)
    v2 = v2:lower()
    if v2 ~= "true" then
    end
    v2:setIsActive(true)
    local v5 = v5:getIsActive()
    local v4 = tostring(...)
    return "AutoSave = " .. v4
  end
end
