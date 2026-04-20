-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableTrainSystemSellEvent = {}
local PlaceableTrainSystemSellEvent_mt = Class(PlaceableTrainSystemSellEvent, Event)
InitStaticEventClass(PlaceableTrainSystemSellEvent, "PlaceableTrainSystemSellEvent", EventIds.EVENT_SELL_TRAIN_GOODS)
function PlaceableTrainSystemSellEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableTrainSystemSellEvent.new(object, isBlocked)
  local v2 = PlaceableTrainSystemSellEvent.emptyNew()
  v2.object = object
  return v2
end
function PlaceableTrainSystemSellEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  self:run(connection)
end
function PlaceableTrainSystemSellEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
end
function PlaceableTrainSystemSellEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 and self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:sellGoods()
    end
  end
end
