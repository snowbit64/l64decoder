-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BalerAutomaticDropEvent = {}
local BalerAutomaticDropEvent_mt = Class(BalerAutomaticDropEvent, Event)
InitEventClass(BalerAutomaticDropEvent, "BalerAutomaticDropEvent")
function BalerAutomaticDropEvent.emptyNew()
  return Event.new(u0)
end
function BalerAutomaticDropEvent.new(object, automaticDrop)
  local v2 = BalerAutomaticDropEvent.emptyNew()
  v2.object = object
  v2.automaticDrop = automaticDrop
  return v2
end
function BalerAutomaticDropEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.automaticDrop = v3
  self:run(connection)
end
function BalerAutomaticDropEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.automaticDrop)
end
function BalerAutomaticDropEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setBalerAutomaticDrop(self.automaticDrop, true)
    end
  end
end
function BalerAutomaticDropEvent.sendEvent(object, automaticDrop, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = BalerAutomaticDropEvent.new(object, automaticDrop)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = BalerAutomaticDropEvent.new(object, automaticDrop)
  v3:sendEvent(...)
end
