-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TensionBeltsEvent = {}
local TensionBeltsEvent_mt = Class(TensionBeltsEvent, Event)
InitStaticEventClass(TensionBeltsEvent, "TensionBeltsEvent", EventIds.EVENT_TENSION_BELT)
function TensionBeltsEvent.emptyNew()
  return Event.new(u0)
end
function TensionBeltsEvent.new(object, isActive, beltId)
  local v3 = TensionBeltsEvent.emptyNew()
  v3.object = object
  v3.isActive = isActive
  v3.beltId = beltId
  return v3
end
function TensionBeltsEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  if not v3 then
    local v4 = streamReadUIntN(streamId, TensionBelts.NUM_SEND_BITS)
    self.beltId = v4 + 1
  end
  v3 = streamReadBool(streamId)
  self.isActive = v3
  self:run(connection)
end
function TensionBeltsEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  if self.beltId ~= nil then
  end
  v3(v4, true)
  if self.beltId ~= nil then
    streamWriteUIntN(streamId, self.beltId - 1, TensionBelts.NUM_SEND_BITS)
  end
  streamWriteBool(streamId, self.isActive)
end
function TensionBeltsEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setTensionBeltsActive(self.isActive, self.beltId, true)
    end
  end
end
function TensionBeltsEvent.sendEvent(vehicle, isActive, beltId, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L41
  end
  if g_server ~= nil then
    local v6 = TensionBeltsEvent.new(vehicle, isActive, beltId)
    v4:broadcastEvent(v6, nil, nil, vehicle)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = TensionBeltsEvent.new(vehicle, isActive, beltId)
  v4:sendEvent(...)
end
