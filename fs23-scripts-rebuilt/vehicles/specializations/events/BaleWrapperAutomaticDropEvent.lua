-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaleWrapperAutomaticDropEvent = {}
local BaleWrapperAutomaticDropEvent_mt = Class(BaleWrapperAutomaticDropEvent, Event)
InitEventClass(BaleWrapperAutomaticDropEvent, "BaleWrapperAutomaticDropEvent")
function BaleWrapperAutomaticDropEvent.emptyNew()
  return Event.new(u0)
end
function BaleWrapperAutomaticDropEvent.new(object, automaticDrop)
  local v2 = BaleWrapperAutomaticDropEvent.emptyNew()
  v2.object = object
  v2.automaticDrop = automaticDrop
  return v2
end
function BaleWrapperAutomaticDropEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.automaticDrop = v3
  self:run(connection)
end
function BaleWrapperAutomaticDropEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.automaticDrop)
end
function BaleWrapperAutomaticDropEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setBaleWrapperAutomaticDrop(self.automaticDrop, true)
    end
  end
end
function BaleWrapperAutomaticDropEvent.sendEvent(object, automaticDrop, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = BaleWrapperAutomaticDropEvent.new(object, automaticDrop)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = BaleWrapperAutomaticDropEvent.new(object, automaticDrop)
  v3:sendEvent(...)
end
