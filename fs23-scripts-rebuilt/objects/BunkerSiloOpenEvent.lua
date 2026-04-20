-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BunkerSiloOpenEvent = {}
local BunkerSiloOpenEvent_mt = Class(BunkerSiloOpenEvent, Event)
InitStaticEventClass(BunkerSiloOpenEvent, "BunkerSiloOpenEvent", EventIds.EVENT_BUNKER_SILO_OPEN)
function BunkerSiloOpenEvent.emptyNew()
  return Event.new(u0)
end
function BunkerSiloOpenEvent.new(bunkerSilo, x, y, z)
  local v4 = BunkerSiloOpenEvent.emptyNew()
  v4.bunkerSilo = bunkerSilo
  v4.x = x
  v4.y = y
  v4.z = z
  return v4
end
function BunkerSiloOpenEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.bunkerSilo = v3
    v3 = streamReadFloat32(streamId)
    self.x = v3
    v3 = streamReadFloat32(streamId)
    self.y = v3
    v3 = streamReadFloat32(streamId)
    self.z = v3
  end
  self:run(connection)
end
function BunkerSiloOpenEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.bunkerSilo)
    streamWriteFloat32(streamId, self.x)
    streamWriteFloat32(streamId, self.y)
    streamWriteFloat32(streamId, self.z)
  end
end
function BunkerSiloOpenEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:openSilo(self.x, self.y, self.z)
  end
end
