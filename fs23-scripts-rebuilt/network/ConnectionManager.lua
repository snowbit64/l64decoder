-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConnectionManager = {}
local ConnectionManager_mt = Class(ConnectionManager)
function ConnectionManager.new()
  setmetatable({}, u0)
  return {listeners = {}, defaultListener = nil, startupCount = 0, maxIncomingConnections = 0}
end
function ConnectionManager:packetReceived(packetType, timestamp, streamId)
  local v4 = netGetTime()
  g_networkTime = v4
  if self.listeners[streamId] == nil then
  end
  if v4 ~= nil then
    v4.func(v4.target, packetType, timestamp, streamId)
  end
end
function ConnectionManager:startupWithWorkingPort(port)
  if 0 < self.startupCount then
    self:startup()
    return
  end
  local v2 = self:startup(port)
  if not v2 then
    v2 = self:startup(port + 1)
    if not v2 then
      self:startup()
    end
  end
end
function ConnectionManager:startup(port, address, maxIncomingConnections)
  local ip = Utils.getNoNil(address, "")
  if g_dedicatedServer == nil then
  end
  local v6 = Utils.getNoNil(maxIncomingConnections, g_serverMaxCapacity)
  if port ~= nil then
    if 0 < self.startupCount then
      print("Error: Startup with port while already running")
      netShutdown(0, 0)
    end
    v6 = netStartup(v5, 1, ip, port, "packetReceived", self)
    if not v6 then
      return false
    end
    netSetMaximumIncomingConnections(v5)
  elseif self.startupCount == 0 then
    v6 = netStartup(5, 1, ip, 0, "packetReceived", self)
    if not v6 then
      return false
    end
    netSetMaximumIncomingConnections(5)
    -- goto L72  (LOP_JUMP +0)
  end
  self.startupCount = self.startupCount + 1
  return true
end
function ConnectionManager:shutdown()
  self.startupCount = self.startupCount - 1
  if self.startupCount == 0 then
    netShutdown(500, 0)
    return
  end
end
function ConnectionManager:shutdownAll()
  if 0 < self.startupCount then
    self.startupCount = 0
    netShutdown(500, 0)
  end
end
function ConnectionManager:addListener(streamId, func, target)
  self.listeners[streamId] = {func = func, target = target}
end
function ConnectionManager:removeListener(streamId)
  self.listeners[streamId] = nil
end
function ConnectionManager:setDefaultListener(func, target)
  if func ~= nil then
    self.defaultListener = {func = func, target = target}
    return
  end
  self.defaultListener = nil
end
