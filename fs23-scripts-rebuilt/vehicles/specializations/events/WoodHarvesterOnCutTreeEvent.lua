-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WoodHarvesterOnCutTreeEvent = {}
local WoodHarvesterOnCutTreeEvent_mt = Class(WoodHarvesterOnCutTreeEvent, Event)
InitStaticEventClass(WoodHarvesterOnCutTreeEvent, "WoodHarvesterOnCutTreeEvent", EventIds.EVENT_WOODHARVESTER_ON_CUT_TREE)
function WoodHarvesterOnCutTreeEvent.emptyNew()
  return Event.new(u0)
end
function WoodHarvesterOnCutTreeEvent.new(object, radius)
  local v2 = WoodHarvesterOnCutTreeEvent.emptyNew()
  v2.object = object
  v2.radius = radius
  return v2
end
function WoodHarvesterOnCutTreeEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadFloat32(streamId)
  self.radius = v3
  self:run(connection)
end
function WoodHarvesterOnCutTreeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteFloat32(streamId, self.radius)
end
function WoodHarvesterOnCutTreeEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v4 = WoodHarvesterOnCutTreeEvent.new(self.object, self.radius)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      SpecializationUtil.raiseEvent(self.object, "onCutTree", self.radius)
    end
  end
end
