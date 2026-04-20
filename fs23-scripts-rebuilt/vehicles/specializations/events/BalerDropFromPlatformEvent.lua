-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BalerDropFromPlatformEvent = {}
local BalerDropFromPlatformEvent_mt = Class(BalerDropFromPlatformEvent, Event)
InitEventClass(BalerDropFromPlatformEvent, "BalerDropFromPlatformEvent")
function BalerDropFromPlatformEvent.emptyNew()
  return Event.new(u0)
end
function BalerDropFromPlatformEvent.new(object, waitForNextBale)
  local v2 = BalerDropFromPlatformEvent.emptyNew()
  v2.object = object
  v2.waitForNextBale = waitForNextBale
  return v2
end
function BalerDropFromPlatformEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.waitForNextBale = v3
  self:run(connection)
end
function BalerDropFromPlatformEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.waitForNextBale)
end
function BalerDropFromPlatformEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:dropBaleFromPlatform(self.waitForNextBale, true)
    end
  end
end
function BalerDropFromPlatformEvent.sendEvent(object, waitForNextBale, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = BalerDropFromPlatformEvent.new(object, waitForNextBale)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = BalerDropFromPlatformEvent.new(object, waitForNextBale)
  v3:sendEvent(...)
end
