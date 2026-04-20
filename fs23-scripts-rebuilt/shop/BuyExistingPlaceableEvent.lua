-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BuyExistingPlaceableEvent = {}
local BuyExistingPlaceableEvent_mt = Class(BuyExistingPlaceableEvent, Event)
BuyExistingPlaceableEvent.STATE_SUCCESS = 0
BuyExistingPlaceableEvent.STATE_NO_PERMISSION = 1
BuyExistingPlaceableEvent.STATE_NOT_ENOUGH_MONEY = 2
BuyExistingPlaceableEvent.STATE_NUM_BITS = 2
{}[BuyExistingPlaceableEvent.STATE_SUCCESS] = {dialogType = DialogElement.TYPE_INFO, text = "shop_messageBoughtPlaceable"}
{}[BuyExistingPlaceableEvent.STATE_NO_PERMISSION] = {dialogType = DialogElement.TYPE_WARNING, text = "shop_messageNoPermissionGeneral"}
{}[BuyExistingPlaceableEvent.STATE_NOT_ENOUGH_MONEY] = {dialogType = DialogElement.TYPE_WARNING, text = "shop_messageNotEnoughMoneyToBuy"}
BuyExistingPlaceableEvent.DIALOG_MESSAGES = {}
InitStaticEventClass(BuyExistingPlaceableEvent, "BuyExistingPlaceableEvent", EventIds.EVENT_BUY_EXISTING_PLACEABLE)
function BuyExistingPlaceableEvent.emptyNew()
  return Event.new(u0)
end
function BuyExistingPlaceableEvent.new(placeable, ownerFarmId)
  local v2 = BuyExistingPlaceableEvent.emptyNew()
  v2.placeable = placeable
  v2.ownerFarmId = ownerFarmId
  return v2
end
function BuyExistingPlaceableEvent.newServerToClient(statusCode, price)
  local v2 = BuyExistingPlaceableEvent.emptyNew()
  v2.statusCode = statusCode
  v2.price = price
  return v2
end
function BuyExistingPlaceableEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.placeable = v3
    v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.ownerFarmId = v3
  else
    v3 = streamReadUIntN(streamId, BuyExistingPlaceableEvent.STATE_NUM_BITS)
    self.statusCode = v3
    v3 = streamReadInt32(streamId)
    self.price = v3
  end
  self:run(connection)
end
function BuyExistingPlaceableEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.placeable)
    streamWriteUIntN(streamId, self.ownerFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    return
  end
  streamWriteUIntN(streamId, self.statusCode, BuyExistingPlaceableEvent.STATE_NUM_BITS)
  streamWriteInt32(streamId, self.price)
end
function BuyExistingPlaceableEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v4 = v4:getHasPlayerPermission("buyPlaceable", connection)
    if not v4 then
    else
      v4 = v4:getItemByXMLFilename(self.placeable.configFileName)
      if v4 ~= nil then
        local v5 = v5:getBuyPrice(v4)
        if self.placeable.buysFarmland and self.placeable.farmlandId ~= nil then
          v5 = v5:getFarmlandById(self.placeable.farmlandId)
          if v5 ~= nil then
            local v6 = v6:getFarmlandOwner(self.placeable.farmlandId)
            if v6 ~= self.ownerFarmId then
            end
          end
        end
        v5 = v5:getMoney(self.ownerFarmId)
        if v3 <= v5 then
          v5:addMoney(-v3, self.ownerFarmId, MoneyType.SHOP_PROPERTY_BUY, true, true)
          v5:setOwnerFarmId(self.ownerFarmId)
        else
        end
      end
    end
    v6 = BuyExistingPlaceableEvent.newServerToClient(v2, v3)
    connection:sendEvent(...)
    return
  end
  v2:publish(BuyExistingPlaceableEvent, self.statusCode, self.price)
end
