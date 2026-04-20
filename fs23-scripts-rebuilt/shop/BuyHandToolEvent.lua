-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BuyHandToolEvent = {}
local BuyHandToolEvent_mt = Class(BuyHandToolEvent, Event)
InitStaticEventClass(BuyHandToolEvent, "BuyHandToolEvent", EventIds.EVENT_BUY_HANDTOOL)
BuyHandToolEvent.STATE_SUCCESS = 0
BuyHandToolEvent.STATE_NO_PERMISSION = 1
BuyHandToolEvent.STATE_FAILED_TO_LOAD = 2
BuyHandToolEvent.STATE_NOT_ENOUGH_MONEY = 3
function BuyHandToolEvent.emptyNew()
  return Event.new(u0)
end
function BuyHandToolEvent.new(filename, farmId)
  local v2 = BuyHandToolEvent.emptyNew()
  v2.isAnswer = false
  v2.filename = filename
  v2.farmId = farmId
  return v2
end
function BuyHandToolEvent.newServerToClient(successful, filename, farmId, price, errorCode)
  local v5 = BuyHandToolEvent.emptyNew()
  v5.isAnswer = true
  v5.successful = successful
  v5.errorCode = errorCode
  v5.filename = filename
  v5.farmId = farmId
  v5.price = price
  return v5
end
function BuyHandToolEvent:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  self.isAnswer = v3
  if self.isAnswer then
    v3 = streamReadBool(streamId)
    self.successful = v3
  end
  if self.isAnswer then
    -- if v0.successful then goto L24 end
  end
  if not self.isAnswer then
    local v4 = streamReadString(streamId)
    v3 = NetworkUtil.convertFromNetworkFilename(...)
    self.filename = v3
  end
  if self.isAnswer then
    -- if v0.successful then goto L47 end
    v3 = streamReadUIntN(streamId, 2)
    self.errorCode = v3
  else
    self.errorCode = BuyHandToolEvent.STATE_SUCCESS
  end
  if self.isAnswer then
    v3 = streamReadFloat32(streamId)
    self.price = v3
  end
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  self:run(connection)
end
function BuyHandToolEvent:writeStream(streamId, connection)
  streamWriteBool(streamId, self.isAnswer)
  if self.isAnswer then
    streamWriteBool(streamId, self.successful)
  end
  if self.isAnswer then
    -- if v0.successful then goto L24 end
  end
  if not self.isAnswer then
    local v5 = NetworkUtil.convertToNetworkFilename(self.filename)
    streamWriteString(...)
  end
  if self.isAnswer and not self.successful then
    streamWriteUIntN(streamId, self.errorCode, 2)
  end
  if self.isAnswer then
    streamWriteFloat32(streamId, self.price)
  end
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function BuyHandToolEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v4 = v4:getHasPlayerPermission(Farm.PERMISSION.BUY_VEHICLE, connection)
    if v4 then
      v4 = v4:getItemByXMLFilename(self.filename)
      if v4 ~= nil then
        local v5, v6 = v5:getBuyPrice(v4)
        v5 = v5:getMoney(self.farmId)
        if v5 <= v5 then
          if v4.xmlFilename ~= nil and g_currentMission.players ~= nil then
            self:addHandTool(v4.xmlFilename, false, self.farmId)
            v7:addMoney(-v5, self.farmId, MoneyType.SHOP_VEHICLE_BUY, true)
            local v9 = BuyHandToolEvent.new(v4.xmlFilename, self.farmId)
            v7:broadcastEvent(v9, nil, connection)
          end
          v9 = BuyHandToolEvent.newServerToClient(v6, v5, self.farmId, v2)
          connection:sendEvent(...)
          return
        end
        local v7 = BuyHandToolEvent.newServerToClient(false, nil, self.farmId, v2, BuyHandToolEvent.STATE_NOT_ENOUGH_MONEY)
        connection:sendEvent(...)
        return
      end
      v7 = BuyHandToolEvent.newServerToClient(false, nil, self.farmId, v2, BuyHandToolEvent.STATE_FAILED_TO_LOAD)
      connection:sendEvent(...)
      return
    end
    v6 = BuyHandToolEvent.newServerToClient(false, nil, self.farmId, v2, BuyHandToolEvent.STATE_NO_PERMISSION)
    connection:sendEvent(...)
    return
  end
  if self.isAnswer then
    if self.successful then
      v2 = v2:getIsServer()
      if not v2 then
        self:addHandTool(self.filename, true, self.farmId)
      end
    end
    v2:publish(BuyHandToolEvent, self.successful, self.errorCode, self.price)
    return
  end
  self:addHandTool(self.filename, true, self.farmId)
end
function BuyHandToolEvent.addHandTool(v0, v1, v2, v3)
  if v2 then
    local v4 = v4:getItemByXMLFilename(v1)
  end
  v4 = v4:getFarmById(v3)
  v4:addHandTool(v1)
end
