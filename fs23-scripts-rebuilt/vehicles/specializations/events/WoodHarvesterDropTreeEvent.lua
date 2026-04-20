-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WoodHarvesterDropTreeEvent = {}
local WoodHarvesterDropTreeEvent_mt = Class(WoodHarvesterDropTreeEvent, Event)
InitStaticEventClass(WoodHarvesterDropTreeEvent, "WoodHarvesterDropTreeEvent", EventIds.EVENT_WOODHARVESTER_DROP_TREE)
function WoodHarvesterDropTreeEvent.emptyNew()
  return Event.new(u0)
end
function WoodHarvesterDropTreeEvent.new(object)
  local v1 = WoodHarvesterDropTreeEvent.emptyNew()
  v1.object = object
  return v1
end
function WoodHarvesterDropTreeEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  self:run(connection)
end
function WoodHarvesterDropTreeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
end
function WoodHarvesterDropTreeEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v4 = WoodHarvesterDropTreeEvent.new(self.object)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:dropWoodHarvesterTree(true)
    end
  end
end
function WoodHarvesterDropTreeEvent.sendEvent(object, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R1 aux=0x80000000 -> L37
  end
  if g_server ~= nil then
    local v4 = WoodHarvesterDropTreeEvent.new(object)
    v2:broadcastEvent(v4, nil, nil, object)
    return
  end
  local v2 = v2:getServerConnection()
  v4 = WoodHarvesterDropTreeEvent.new(object)
  v2:sendEvent(...)
end
