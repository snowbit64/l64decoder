-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmlandStateEvent = {}
local FarmlandStateEvent_mt = Class(FarmlandStateEvent, Event)
InitStaticEventClass(FarmlandStateEvent, "FarmlandStateEvent", EventIds.EVENT_FARMLAND_STATE)
function FarmlandStateEvent.emptyNew()
  return Event.new(u0)
end
function FarmlandStateEvent.new(id, farmId, price)
  local v3 = FarmlandStateEvent.emptyNew()
  v3.id = id
  v3.farmId = farmId
  v3.price = price
  return v3
end
function FarmlandStateEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, g_farmlandManager.numberOfBits)
  self.id = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  v3 = streamReadInt32(streamId)
  self.price = v3
  self:run(connection)
end
function FarmlandStateEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.id, g_farmlandManager.numberOfBits)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  streamWriteInt32(streamId, self.price)
end
function FarmlandStateEvent:run(connection)
  local v2 = v2:getIsValidFarmlandId(self.id)
  if v2 then
    v2 = connection:getIsServer()
    if not v2 then
      v2 = v2:getFarmlandOwner(self.id)
      if self.farmId ~= FarmlandManager.NO_OWNER_FARM_ID then
        -- if v2 ~= FarmlandManager.NO_OWNER_FARM_ID then goto L136 end
      end
      local v3 = v3:getPlayerByConnection(connection)
      if v3 ~= nil then
        local v4 = v4:getHasPlayerPermission("farmManager", connection, v3.farmId)
        if v4 and v3.farmId ~= self.farmId and v2 ~= v3.farmId then
        end
      end
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L136
      -- if 0 >= v3.farmId then goto L136 end
      -- if not v4 then goto L136 end
      if 0 < self.price then
        local v6 = v6:getMoney(v3.farmId)
        if self.farmId ~= FarmlandManager.NO_OWNER_FARM_ID then
          if v6 < self.price then
            return
          end
          v7:addMoney(-self.price, v5, MoneyType.FIELD_BUY, true, true)
        else
          v7:addMoney(self.price, v3.farmId, MoneyType.FIELD_SELL, true, true)
        end
      end
      v5:broadcastEvent(self, true)
      return
    end
    v2:setLandOwnership(self.id, self.farmId)
  end
end
