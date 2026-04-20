-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SoilSamplerStartEvent = {}
local SoilSamplerStartEvent_mt = Class(SoilSamplerStartEvent, Event)
InitEventClass(SoilSamplerStartEvent, "SoilSamplerStartEvent")
function SoilSamplerStartEvent.emptyNew(v0)
  return Event.new(u0)
end
function SoilSamplerStartEvent.new(object)
  local v1 = v1:emptyNew()
  v1.object = object
  return v1
end
function SoilSamplerStartEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  self:run(connection)
end
function SoilSamplerStartEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
end
function SoilSamplerStartEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:startSoilSampling(true)
    end
  end
end
function SoilSamplerStartEvent.sendEvent(object, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000000 -> L37
  end
  if g_server ~= nil then
    local v4 = SoilSamplerStartEvent.new(object)
    v2:broadcastEvent(v4, nil, nil, object)
    return
  end
  local v2 = v2:getServerConnection()
  v4 = SoilSamplerStartEvent.new(object)
  v2:sendEvent(...)
end
