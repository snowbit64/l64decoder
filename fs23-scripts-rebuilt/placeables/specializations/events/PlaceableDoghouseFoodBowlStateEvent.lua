-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableDoghouseFoodBowlStateEvent = {}
local PlaceableDoghouseFoodBowlStateEvent_mt = Class(PlaceableDoghouseFoodBowlStateEvent, Event)
InitStaticEventClass(PlaceableDoghouseFoodBowlStateEvent, "PlaceableDoghouseFoodBowlStateEvent", EventIds.EVENT_DOGHOUSE_FOOD_BOWL_STATE)
function PlaceableDoghouseFoodBowlStateEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableDoghouseFoodBowlStateEvent.new(doghouse, isFilled)
  local v2 = PlaceableDoghouseFoodBowlStateEvent.emptyNew()
  v2.doghouse = doghouse
  v2.isFilled = isFilled
  return v2
end
function PlaceableDoghouseFoodBowlStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.doghouse = v3
  v3 = streamReadBool(streamId)
  self.isFilled = v3
  self:run(connection)
end
function PlaceableDoghouseFoodBowlStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.doghouse)
  streamWriteBool(streamId, self.isFilled)
end
function PlaceableDoghouseFoodBowlStateEvent:run(connection)
  if self.doghouse ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setFoodBowlState(self.isFilled, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = PlaceableDoghouseFoodBowlStateEvent.new(self.doghouse, self.isFilled)
    v2:broadcastEvent(v4, nil, connection, self.doghouse)
  end
end
function PlaceableDoghouseFoodBowlStateEvent.sendEvent(doghouse, isFilled, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = PlaceableDoghouseFoodBowlStateEvent.new(doghouse, isFilled)
    v3:broadcastEvent(v5, nil, nil, doghouse)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = PlaceableDoghouseFoodBowlStateEvent.new(doghouse, isFilled)
  v3:sendEvent(...)
end
