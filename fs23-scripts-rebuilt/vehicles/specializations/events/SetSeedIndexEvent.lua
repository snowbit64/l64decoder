-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetSeedIndexEvent = {}
local SetSeedIndexEvent_mt = Class(SetSeedIndexEvent, Event)
InitStaticEventClass(SetSeedIndexEvent, "SetSeedIndexEvent", EventIds.EVENT_SOWING_MACHINE_SET_SEED_INDEX)
function SetSeedIndexEvent.emptyNew()
  return Event.new(u0)
end
function SetSeedIndexEvent.new(object, seedIndex)
  local v2 = SetSeedIndexEvent.emptyNew()
  v2.object = object
  v2.seedIndex = seedIndex
  return v2
end
function SetSeedIndexEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUInt8(streamId)
  self.seedIndex = v3
  self:run(connection)
end
function SetSeedIndexEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUInt8(streamId, self.seedIndex)
end
function SetSeedIndexEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setSeedIndex(self.seedIndex, true)
    end
  end
end
function SetSeedIndexEvent.sendEvent(object, seedIndex, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = SetSeedIndexEvent.new(object, seedIndex)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = SetSeedIndexEvent.new(object, seedIndex)
  v3:sendEvent(...)
end
