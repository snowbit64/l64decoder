-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LifetimeStats = {MS_TO_HOUR = 0.00000027777777777777776, SAVE_PERIOD = 60000}
local LifetimeStats_mt = Class(LifetimeStats)
function LifetimeStats.new(customMt)
  local v1 = setmetatable({}, u0 or customMt)
  local v4 = getUserProfileAppPath()
  local v2 = Utils.getFilename(...)
  v1.xmlFilename = v2
  v1.saveTimer = LifetimeStats.SAVE_PERIOD
  v1.totalRuntimeUpToStart = 0
  v1.gameRateMessagesShown = 0
  v1.runtimeSinceLoad = 0
  return v1
end
function LifetimeStats.delete(v0)
end
function LifetimeStats:load()
  if not GS_PLATFORM_PHONE then
    return
  end
  local v1 = fileExists(self.xmlFilename)
  if v1 then
    v1 = loadXMLFile("lifetimeStats", self.xmlFilename)
    local v3 = getXMLFloat(v1, "lifetimeStats.totalRuntime")
    local v2 = Utils.getNoNil(v3, self.totalRuntimeUpToStart)
    self.totalRuntimeUpToStart = v2
    v3 = getXMLInt(v1, "lifetimeStats.gameRateMessagesShown")
    v2 = Utils.getNoNil(v3, self.gameRateMessagesShown)
    self.gameRateMessagesShown = v2
    self.runtimeSinceLoad = g_time
    delete(v1)
  end
end
function LifetimeStats:save()
  if GS_PLATFORM_ID ~= PlatformId.IOS and GS_PLATFORM_ID ~= PlatformId.ANDROID then
    return
  end
  local xmlFile = createXMLFile("lifetimeStats", self.xmlFilename, "lifetimeStats")
  local v5 = self:getTotalRuntime()
  setXMLFloat(...)
  setXMLInt(xmlFile, "lifetimeStats.gameRateMessagesShown", self.gameRateMessagesShown)
  saveXMLFile(xmlFile)
  delete(xmlFile)
  self.saveTimer = LifetimeStats.SAVE_PERIOD
end
function LifetimeStats:reload()
  self.totalRuntimeUpToStart = 0
  self.gameRateMessagesShown = 0
  self:load()
end
function LifetimeStats:update(dt)
  self.saveTimer = self.saveTimer - dt
  if self.saveTimer < 0 then
    self.saveTimer = LifetimeStats.SAVE_PERIOD
    self:save()
  end
end
function LifetimeStats:getTotalRuntime()
  return g_time * LifetimeStats.MS_TO_HOUR + self.totalRuntimeUpToStart - self.runtimeSinceLoad
end
