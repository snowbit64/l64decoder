-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableLightsStateEvent = {}
local PlaceableLightsStateEvent_mt = Class(PlaceableLightsStateEvent, Event)
InitStaticEventClass(PlaceableLightsStateEvent, "PlaceableLightsStateEvent", EventIds.EVENT_PLACEABLE_LIGHTS_STATE)
function PlaceableLightsStateEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableLightsStateEvent.new(placeable, groupIndex, isActive)
  local v3 = PlaceableLightsStateEvent.emptyNew()
  v3.placeable = placeable
  v3.groupIndex = groupIndex
  v3.isActive = isActive
  return v3
end
function PlaceableLightsStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.placeable = v3
  v3 = streamReadUIntN(streamId, PlaceableLights.MAX_NUM_BITS)
  self.groupIndex = v3
  v3 = streamReadBool(streamId)
  self.isActive = v3
  self:run(connection)
end
function PlaceableLightsStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.placeable)
  streamWriteUIntN(streamId, self.groupIndex, PlaceableLights.MAX_NUM_BITS)
  streamWriteBool(streamId, self.isActive)
end
function PlaceableLightsStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.placeable)
  end
  if self.placeable ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 and self.placeable.setGroupIsActive ~= nil then
      v2:setGroupIsActive(self.groupIndex, self.isActive, true)
    end
  end
end
function PlaceableLightsStateEvent.sendEvent(placeable, groupIndex, isActive, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L41
  end
  if g_server ~= nil then
    local v6 = PlaceableLightsStateEvent.new(placeable, groupIndex, isActive)
    v4:broadcastEvent(v6, nil, nil, placeable)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = PlaceableLightsStateEvent.new(placeable, groupIndex, isActive)
  v4:sendEvent(...)
end
