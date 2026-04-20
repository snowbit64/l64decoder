-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BalerSetIsUnloadingBaleEvent = {}
local BalerSetIsUnloadingBaleEvent_mt = Class(BalerSetIsUnloadingBaleEvent, Event)
InitStaticEventClass(BalerSetIsUnloadingBaleEvent, "BalerSetIsUnloadingBaleEvent", EventIds.EVENT_BALER_SET_IS_UNLOADING_BALE)
function BalerSetIsUnloadingBaleEvent.emptyNew()
  return Event.new(u0)
end
function BalerSetIsUnloadingBaleEvent.new(object, isUnloadingBale)
  local v2 = BalerSetIsUnloadingBaleEvent.emptyNew()
  v2.object = object
  v2.isUnloadingBale = isUnloadingBale
  return v2
end
function BalerSetIsUnloadingBaleEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.isUnloadingBale = v3
  self:run(connection)
end
function BalerSetIsUnloadingBaleEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.isUnloadingBale)
end
function BalerSetIsUnloadingBaleEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setIsUnloadingBale(self.isUnloadingBale, true)
    end
  end
end
function BalerSetIsUnloadingBaleEvent.sendEvent(object, isUnloadingBale, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = BalerSetIsUnloadingBaleEvent.new(object, isUnloadingBale)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = BalerSetIsUnloadingBaleEvent.new(object, isUnloadingBale)
  v3:sendEvent(...)
end
