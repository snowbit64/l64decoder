-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlowRotationEvent = {}
local PlowRotationEvent_mt = Class(PlowRotationEvent, Event)
InitStaticEventClass(PlowRotationEvent, "PlowRotationEvent", EventIds.EVENT_PLOW_ROTATION)
function PlowRotationEvent.emptyNew()
  return Event.new(u0)
end
function PlowRotationEvent.new(object, rotationMax)
  local v2 = PlowRotationEvent.emptyNew()
  v2.object = object
  v2.rotationMax = rotationMax
  return v2
end
function PlowRotationEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.rotationMax = v3
  self:run(connection)
end
function PlowRotationEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.rotationMax)
end
function PlowRotationEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setRotationMax(self.rotationMax, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = PlowRotationEvent.new(self.object, self.rotationMax)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
