-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SellPlaceableEvent = {STATE_SUCCESS = 0, STATE_FAILED = 1, STATE_NO_PERMISSION = 2, STATE_IN_USE = 3}
local SellPlaceableEvent_mt = Class(SellPlaceableEvent, Event)
InitStaticEventClass(SellPlaceableEvent, "SellPlaceableEvent", EventIds.EVENT_SELL_PLACEABLE)
function SellPlaceableEvent.emptyNew()
  return Event.new(u0)
end
function SellPlaceableEvent.new(placeable, forFree, forFullPrice)
  local v3 = SellPlaceableEvent.emptyNew()
  v3.placeable = placeable
  local v4 = Utils.getNoNil(forFree, false)
  v3.forFree = v4
  v4 = Utils.getNoNil(forFullPrice, false)
  v3.forFullPrice = v4
  return v3
end
function SellPlaceableEvent.newServerToClient(state, sellPrice)
  local v2 = SellPlaceableEvent.emptyNew()
  v2.state = state
  v2.sellPrice = sellPrice
  return v2
end
function SellPlaceableEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.placeable = v3
    v3 = streamReadBool(streamId)
    self.forFree = v3
    v3 = streamReadBool(streamId)
    self.forFullPrice = v3
  else
    v3 = streamReadUIntN(streamId, 2)
    self.state = v3
    if self.state == SellPlaceableEvent.STATE_SUCCESS then
      v3 = streamReadInt32(streamId)
      self.sellPrice = v3
    end
  end
  self:run(connection)
end
function SellPlaceableEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.placeable)
    streamWriteBool(streamId, self.forFree)
    streamWriteBool(streamId, self.forFullPrice)
    return
  end
  streamWriteUIntN(streamId, self.state, 2)
  if self.state == SellPlaceableEvent.STATE_SUCCESS then
    streamWriteInt32(streamId, self.sellPrice)
  end
end
function SellPlaceableEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    if self.placeable ~= nil then
      local v4 = v4:getHasPlayerPermission("sellPlaceable", connection)
      if v4 then
        v4 = v4:canBeSold()
        if v4 then
          v4:onSell()
          if not self.forFree then
            if self.forFullPrice then
            else
              v4 = v4:getSellPrice()
            end
          end
          local v7 = v7:getOwnerFarmId()
          v4:addMoney(v3, v7, MoneyType.SHOP_PROPERTY_SELL, true, true)
          v4 = v4:getSellAction()
          if v4 == Placeable.SELL_AND_SPECTATOR_FARM then
            v4:setOwnerFarmId(FarmManager.SPECTATOR_FARM_ID)
            -- goto L102  (LOP_JUMP +17)
          end
          v4:addPlaceableToDelete(self.placeable)
          -- goto L102  (LOP_JUMP +9)
        end
      else
      end
    end
    v4:publish(SellPlaceableEvent, v2, v3)
    local v6 = SellPlaceableEvent.newServerToClient(v2, v3)
    connection:sendEvent(...)
    return
  end
  v2:publish(SellPlaceableEvent, self.state, self.sellPrice)
end
