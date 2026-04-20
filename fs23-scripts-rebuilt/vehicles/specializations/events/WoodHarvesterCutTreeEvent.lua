-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WoodHarvesterCutTreeEvent = {}
local WoodHarvesterCutTreeEvent_mt = Class(WoodHarvesterCutTreeEvent, Event)
InitStaticEventClass(WoodHarvesterCutTreeEvent, "WoodHarvesterCutTreeEvent", EventIds.EVENT_WOODHARVESTER_CUT_TREE)
function WoodHarvesterCutTreeEvent.emptyNew()
  return Event.new(u0)
end
function WoodHarvesterCutTreeEvent.new(object, length)
  local v2 = WoodHarvesterCutTreeEvent.emptyNew()
  v2.object = object
  v2.length = length
  return v2
end
function WoodHarvesterCutTreeEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadFloat32(streamId)
  self.length = v3
  self:run(connection)
end
function WoodHarvesterCutTreeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteFloat32(streamId, self.length)
end
function WoodHarvesterCutTreeEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v4 = WoodHarvesterCutTreeEvent.new(self.object, self.length)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:cutTree(self.length, true)
    end
  end
end
function WoodHarvesterCutTreeEvent.sendEvent(object, length, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = WoodHarvesterCutTreeEvent.new(object, length)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = WoodHarvesterCutTreeEvent.new(object, length)
  v3:sendEvent(...)
end
