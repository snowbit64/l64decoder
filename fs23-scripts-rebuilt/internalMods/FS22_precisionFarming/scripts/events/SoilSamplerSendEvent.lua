-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SoilSamplerSendEvent = {}
local SoilSamplerSendEvent_mt = Class(SoilSamplerSendEvent, Event)
InitEventClass(SoilSamplerSendEvent, "SoilSamplerSendEvent")
function SoilSamplerSendEvent.emptyNew(v0)
  return Event.new(u0)
end
function SoilSamplerSendEvent.new(object)
  local v1 = v1:emptyNew()
  v1.object = object
  return v1
end
function SoilSamplerSendEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  self:run(connection)
end
function SoilSamplerSendEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
end
function SoilSamplerSendEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:sendTakenSoilSamples(true)
    end
  end
end
function SoilSamplerSendEvent.sendEvent(object, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000000 -> L37
  end
  if g_server ~= nil then
    local v4 = SoilSamplerSendEvent.new(object)
    v2:broadcastEvent(v4, nil, nil, object)
    return
  end
  local v2 = v2:getServerConnection()
  v4 = SoilSamplerSendEvent.new(object)
  v2:sendEvent(...)
end
