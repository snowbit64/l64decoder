-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WoodHarvesterOnDelimbTreeEvent = {}
local WoodHarvesterOnDelimbTreeEvent_mt = Class(WoodHarvesterOnDelimbTreeEvent, Event)
InitStaticEventClass(WoodHarvesterOnDelimbTreeEvent, "WoodHarvesterOnDelimbTreeEvent", EventIds.EVENT_WOODHARVESTER_ON_DELIMB_TREE)
function WoodHarvesterOnDelimbTreeEvent.emptyNew()
  return Event.new(u0)
end
function WoodHarvesterOnDelimbTreeEvent.new(object, state)
  local v2 = WoodHarvesterOnDelimbTreeEvent.emptyNew()
  v2.object = object
  v2.state = state
  return v2
end
function WoodHarvesterOnDelimbTreeEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.state = v3
  self:run(connection)
end
function WoodHarvesterOnDelimbTreeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.state)
end
function WoodHarvesterOnDelimbTreeEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v4 = WoodHarvesterOnDelimbTreeEvent.new(self.object, self.state)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:onDelimbTree(self.state)
    end
  end
end
