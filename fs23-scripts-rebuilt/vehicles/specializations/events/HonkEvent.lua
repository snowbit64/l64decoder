-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HonkEvent = {}
local HonkEvent_mt = Class(HonkEvent, Event)
InitStaticEventClass(HonkEvent, "HonkEvent", EventIds.EVENT_HONK)
function HonkEvent.emptyNew()
  return Event.new(u0)
end
function HonkEvent.new(object, isPlaying)
  local v2 = HonkEvent.emptyNew()
  v2.object = object
  v2.isPlaying = isPlaying
  return v2
end
function HonkEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.isPlaying = v3
  self:run(connection)
end
function HonkEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.isPlaying)
end
function HonkEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:playHonk(self.isPlaying, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = HonkEvent.new(self.object, self.isPlaying)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
function HonkEvent:sendEvent(v1, v2)
  if self.spec_honk ~= nil and self.spec_honk.isPlaying ~= v1 then
    if v2 ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L49
    end
    if g_server ~= nil then
      local v5 = HonkEvent.new(self, v1)
      v3:broadcastEvent(v5, nil, nil, self)
      return
    end
    local v3 = v3:getServerConnection()
    v5 = HonkEvent.new(self, v1)
    v3:sendEvent(...)
  end
end
