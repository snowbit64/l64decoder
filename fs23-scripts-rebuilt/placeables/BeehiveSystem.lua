-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BeehiveSystem = {COOLDOWN_DURATION = 603, DEBUG_ENABLED = false}
local BeehiveSystem_mt = Class(BeehiveSystem)
function BeehiveSystem.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.mission = mission
  v2.beehives = {}
  v2.beehivesSortedRadius = {}
  v2.beehivePalletSpawners = {}
  v2.isFxActive = false
  v2.isProductionActive = false
  local v3 = v3:getIsServer()
  if v3 and g_addTestCommands then
    addConsoleCommand("gsBeehiveDebug", "Toggles beehive debug mode", "consoleCommandBeehiveDebug", v2)
  end
  v2.updateCooldown = BeehiveSystem.COOLDOWN_DURATION
  v2.currentSpawnerUpdateIndex = 0
  v2.lastTimeNoSpawnerWarningDisplayed = 0
  return v2
end
function BeehiveSystem.delete(v0)
  removeConsoleCommand("gsBeehiveDebug")
end
function BeehiveSystem:addBeehive(beehiveToAdd)
  if #self.beehivesSortedRadius == 0 then
    self:updateState()
    v2:subscribe(MessageType.HOUR_CHANGED, self.onHourChanged, self)
    v2:subscribe(MessageType.WEATHER_CHANGED, self.updateBeehivesState, self)
  end
  table.insert(self.beehivesSortedRadius, beehiveToAdd)
  if self.mission.isMissionStarted then
    self:showNoSpawnerWarning(beehiveToAdd)
  end
  table.sort(self.beehivesSortedRadius, function(self, beehiveToAdd)
    if beehiveToAdd.spec_beehive.actionRadius >= self.spec_beehive.actionRadius then
    end
    return true
  end)
end
function BeehiveSystem:removeBeehive(beehive)
  table.removeElement(self.beehivesSortedRadius, beehive)
  if #self.beehivesSortedRadius == 0 then
    v2:unsubscribe(MessageType.HOUR_CHANGED, self)
    v2:unsubscribe(MessageType.WEATHER_CHANGED, self)
  end
end
function BeehiveSystem:onHourChanged()
  self:updateBeehivesOutput()
  self:updateBeehivesState()
end
function BeehiveSystem:update()
  if #self.beehivePalletSpawners ~= 0 then
    local v1 = v1:getIsServer()
    -- if v1 then goto L12 end
  end
  return
  if self.updateCooldown <= 0 then
    if self.beehivePalletSpawners[self.currentSpawnerUpdateIndex] ~= nil then
      self.beehivePalletSpawners[self.currentSpawnerUpdateIndex]:updatePallets()
      self.currentSpawnerUpdateIndex = self.currentSpawnerUpdateIndex + 1
      return
    end
    self.currentSpawnerUpdateIndex = 1
    self.updateCooldown = BeehiveSystem.COOLDOWN_DURATION
    return
  end
  self.updateCooldown = self.updateCooldown - 1
end
function BeehiveSystem:updateBeehivesOutput(farmId)
  local v2 = v2:getIsServer()
  if v2 then
    -- TODO: structure LOP_FORNPREP (pc 11, target 39)
    local v6 = self.beehivesSortedRadius[1]:getOwnerFarmId()
    if farmId ~= nil then
      -- if v1 ~= v6 then goto L38 end
    end
    local v7 = self:getFarmBeehivePalletSpawner(v6)
    if v7 ~= nil then
      local v8 = v5:getHoneyAmountToSpawn()
      if 0 < v8 then
        v7:addFillLevel(v8)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 38, target 12)
  end
end
function BeehiveSystem:updateState()
  self.isFxActive = true
  self.isProductionActive = true
  if not g_currentMission.environment.isSunOn then
    self.isFxActive = false
    return
  end
  if v1.currentSeason == Environment.SEASON.WINTER then
    self.isFxActive = false
    self.isProductionActive = false
    return
  end
  local v2 = v2:getIsRaining()
  if v2 then
    self.isFxActive = false
  end
end
function BeehiveSystem:updateBeehivesState()
  self:updateState()
  -- TODO: structure LOP_FORNPREP (pc 8, target 16)
  v4:updateBeehiveState()
  -- TODO: structure LOP_FORNLOOP (pc 15, target 9)
end
function BeehiveSystem:getFarmHasBeehive(farmId)
  for v5, v6 in ipairs(self.beehivesSortedRadius) do
    local v7 = v6:getOwnerFarmId()
    if not (v7 == farmId) then
      continue
    end
    return true
  end
  return false
end
function BeehiveSystem:getBeehives()
  return self.beehivesSortedRadius
end
function BeehiveSystem:getBeehiveInfluenceFactorAt(wx, wz)
  -- TODO: structure LOP_FORNPREP (pc 6, target 20)
  local v8 = self.beehivesSortedRadius[1]:getBeehiveInfluenceFactor(wx, wz)
  if 1 > 0 + v8 then
    -- TODO: structure LOP_FORNLOOP (pc 19, target 7)
  end
  return math.min(v3, 1)
end
function BeehiveSystem:addBeehivePalletSpawner(beehivePalletSpawner)
  table.addElement(self.beehivePalletSpawners, beehivePalletSpawner)
  local v4 = beehivePalletSpawner:getOwnerFarmId()
  self:updateBeehivesOutput(...)
end
function BeehiveSystem:removeBeehivePalletSpawner(beehivePalletSpawner)
  table.removeElement(self.beehivePalletSpawners, beehivePalletSpawner)
  self:showNoSpawnerWarning(beehivePalletSpawner)
end
function BeehiveSystem:showNoSpawnerWarning(placeable)
  local v2 = v2:getIsClient()
  if v2 and 5000 < g_time - self.lastTimeNoSpawnerWarningDisplayed then
    v2 = placeable:getOwnerFarmId()
    local v3 = v3:getFarmId()
    local v4 = self:getFarmHasBeehive(v3)
    if v4 and v3 == v2 then
      v4 = self:getFarmBeehivePalletSpawner(v3)
      if v4 == nil then
        local v7 = v7:getText("ingameNotification_noPalletLocationAvailable")
        local v8 = v8:getText("category_beeHives")
        local v6 = string.format(...)
        v5:addIngameNotification(FSBaseMission.INGAME_NOTIFICATION_CRITICAL, v7 .. v6)
        self.lastTimeNoSpawnerWarningDisplayed = g_time
      end
    end
  end
end
function BeehiveSystem:getFarmBeehivePalletSpawner(farmId)
  for v5, v6 in ipairs(self.beehivePalletSpawners) do
    local v7 = v6:getOwnerFarmId()
    if not (v7 == farmId) then
      continue
    end
    return v6
  end
  return nil
end
function BeehiveSystem.consoleCommandBeehiveDebug(v0)
  BeehiveSystem.DEBUG_ENABLED = not BeehiveSystem.DEBUG_ENABLED
  local v3 = tostring(BeehiveSystem.DEBUG_ENABLED)
  return "BeehiveSystem.DEBUG_ENABLED=" .. v3
end
