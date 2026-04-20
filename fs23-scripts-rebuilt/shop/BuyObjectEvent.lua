-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BuyObjectEvent = {}
local BuyObjectEvent_mt = Class(BuyObjectEvent, Event)
BuyObjectEvent.STATE_SUCCESS = 0
BuyObjectEvent.STATE_FAILED_TO_LOAD = 1
BuyObjectEvent.STATE_NO_SPACE = 2
BuyObjectEvent.STATE_LIMIT_REACHED = 3
BuyObjectEvent.STATE_NOT_ENOUGH_MONEY = 4
InitStaticEventClass(BuyObjectEvent, "BuyObjectEvent", EventIds.EVENT_BUY_OBJECT)
function BuyObjectEvent.emptyNew()
  return Event.new(u0)
end
function BuyObjectEvent.new(filename, outsideBuy, ownerFarmId)
  local v3 = BuyObjectEvent.emptyNew()
  v3.filename = filename
  v3.outsideBuy = outsideBuy
  v3.ownerFarmId = ownerFarmId
  return v3
end
function BuyObjectEvent.newServerToClient(errorCode, price)
  local v2 = BuyObjectEvent.emptyNew()
  v2.errorCode = errorCode
  v2.price = price
  return v2
end
function BuyObjectEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    local v4 = streamReadString(streamId)
    v3 = NetworkUtil.convertFromNetworkFilename(...)
    self.filename = v3
    v3 = streamReadBool(streamId)
    self.outsideBuy = v3
    v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
    self.ownerFarmId = v3
  else
    v3 = streamReadUIntN(streamId, 3)
    self.errorCode = v3
    v3 = streamReadFloat32(streamId)
    self.price = v3
  end
  self:run(connection)
end
function BuyObjectEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    local v5 = NetworkUtil.convertToNetworkFilename(self.filename)
    streamWriteString(...)
    streamWriteBool(streamId, self.outsideBuy)
    streamWriteUIntN(streamId, self.ownerFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
    return
  end
  streamWriteUIntN(streamId, self.errorCode, 3)
  streamWriteFloat32(streamId, self.price)
end
function BuyObjectEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:lower()
    self.filename = v2
    v2 = v2:getItemByXMLFilename(self.filename)
    if v2 ~= nil then
      local v6, v7 = v6:getBuyPrice(v2, self.saleItem)
      v6 = v6:getMoney(self.ownerFarmId)
      if v6 <= v6 then
        local v11 = MathUtil.degToRad(v2.rotation)
        local v6, v7, v8 = v6:loadObjectAtPlace(v2.xmlFilename, g_currentMission.storeSpawnPlaces, g_currentMission.usedStorePlaces, v11, self.ownerFarmId)
        if v6 ~= nil then
          if GS_IS_CONSOLE_VERSION then
            local v9 = fileExists(v2.xmlFilename)
            if not v9 then
              v6:delete()
              -- goto L151  (LOP_JUMP +73)
            end
          end
          if not self.outsideBuy then
            if v6.fillType ~= FillType.TREESAPLINGS then
              -- if v6.fillType ~= FillType.POPLAR then goto L98 end
            end
            -- goto L121  (LOP_JUMP +23)
            if v6.fillType ~= FillType.FERTILIZER then
              -- if v6.fillType ~= FillType.LIQUIDFERTILIZER then goto L113 end
            end
            -- goto L121  (LOP_JUMP +8)
            if v6.fillType == FillType.SEEDS then
            end
            v10:addMoney(-v4, self.ownerFarmId, v9)
          end
          -- goto L151  (LOP_JUMP +16)
        end
        if v7 then
          -- goto L151  (LOP_JUMP +10)
        end
        -- if not v8 then goto L151 end
      else
      end
    end
    v8 = BuyObjectEvent.newServerToClient(v3, v4)
    connection:sendEvent(...)
    return
  end
  v2:publish(BuyObjectEvent, self.errorCode, self.price)
end
