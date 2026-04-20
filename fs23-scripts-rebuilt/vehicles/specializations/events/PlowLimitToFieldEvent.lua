-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlowLimitToFieldEvent = {}
local PlowLimitToFieldEvent_mt = Class(PlowLimitToFieldEvent, Event)
InitStaticEventClass(PlowLimitToFieldEvent, "PlowLimitToFieldEvent", EventIds.EVENT_PLOW_LIMIT_TO_FIELD)
function PlowLimitToFieldEvent.emptyNew()
  return Event.new(u0)
end
function PlowLimitToFieldEvent.new(object, plowLimitToField)
  local v2 = PlowLimitToFieldEvent.emptyNew()
  v2.object = object
  v2.plowLimitToField = plowLimitToField
  return v2
end
function PlowLimitToFieldEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.plowLimitToField = v3
  self:run(connection)
end
function PlowLimitToFieldEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.plowLimitToField)
end
function PlowLimitToFieldEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setPlowLimitToField(self.plowLimitToField, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = PlowLimitToFieldEvent.new(self.object, self.plowLimitToField)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
