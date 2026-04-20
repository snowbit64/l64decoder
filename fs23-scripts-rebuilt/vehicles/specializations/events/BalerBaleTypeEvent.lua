-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BalerBaleTypeEvent = {BALE_TYPE_SEND_NUM_BITS = 4, MAX_NUM_BALE_TYPES = 2 ^ BalerBaleTypeEvent.BALE_TYPE_SEND_NUM_BITS - 1}
local BalerBaleTypeEvent_mt = Class(BalerBaleTypeEvent, Event)
InitEventClass(BalerBaleTypeEvent, "BalerBaleTypeEvent")
function BalerBaleTypeEvent.emptyNew()
  return Event.new(u0)
end
function BalerBaleTypeEvent.new(object, baleTypeIndex, force)
  local v3 = BalerBaleTypeEvent.emptyNew()
  v3.object = object
  v3.baleTypeIndex = baleTypeIndex
  v3.force = force
  return v3
end
function BalerBaleTypeEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUIntN(streamId, BalerBaleTypeEvent.BALE_TYPE_SEND_NUM_BITS)
  self.baleTypeIndex = v3
  v3 = streamReadBool(streamId)
  self.force = v3
  self:run(connection)
end
function BalerBaleTypeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self.baleTypeIndex, BalerBaleTypeEvent.BALE_TYPE_SEND_NUM_BITS)
  local v5 = Utils.getNoNil(self.force, false)
  streamWriteBool(...)
end
function BalerBaleTypeEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setBaleTypeIndex(self.baleTypeIndex, self.force, true)
    end
  end
end
function BalerBaleTypeEvent.sendEvent(object, baleTypeIndex, force, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L41
  end
  if g_server ~= nil then
    local v6 = BalerBaleTypeEvent.new(object, baleTypeIndex, force)
    v4:broadcastEvent(v6, nil, nil, object)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = BalerBaleTypeEvent.new(object, baleTypeIndex, force)
  v4:sendEvent(...)
end
