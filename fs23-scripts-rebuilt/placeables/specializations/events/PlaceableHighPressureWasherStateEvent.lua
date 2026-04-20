-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHighPressureWasherStateEvent = {}
local PlaceableHighPressureWasherStateEvent_mt = Class(PlaceableHighPressureWasherStateEvent, Event)
InitStaticEventClass(PlaceableHighPressureWasherStateEvent, "PlaceableHighPressureWasherStateEvent", EventIds.EVENT_HIGHPRESSURE_WASHER_TURN_ON)
function PlaceableHighPressureWasherStateEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableHighPressureWasherStateEvent.new(placeable, isTurnedOn, player)
  local v3 = PlaceableHighPressureWasherStateEvent.emptyNew()
  v3.placeable = placeable
  v3.isTurnedOn = isTurnedOn
  v3.player = player
  return v3
end
function PlaceableHighPressureWasherStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.placeable = v3
  v3 = streamReadBool(streamId)
  self.isTurnedOn = v3
  if self.isTurnedOn then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.player = v3
  end
  self:run(connection)
end
function PlaceableHighPressureWasherStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.placeable)
  streamWriteBool(streamId, self.isTurnedOn)
  if self.isTurnedOn then
    NetworkUtil.writeNodeObject(streamId, self.player)
  end
end
function PlaceableHighPressureWasherStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.placeable)
  end
  if self.placeable ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setIsHighPressureWasherTurnedOn(self.isTurnedOn, self.player, true)
    end
  end
end
