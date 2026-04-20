-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SellHandToolEvent = {STATE_SUCCESS = 0, STATE_FAILED = 1, STATE_NO_PERMISSION = 2, STATE_IN_USE = 3}
local SellHandToolEvent_mt = Class(SellHandToolEvent, Event)
InitStaticEventClass(SellHandToolEvent, "SellHandToolEvent", EventIds.EVENT_SELL_HANDTOOL)
function SellHandToolEvent.emptyNew()
  return Event.new(u0)
end
function SellHandToolEvent.new(filename, farmId)
  local v2 = SellHandToolEvent.emptyNew()
  v2.filename = filename
  v2.state = SellHandToolEvent.STATE_FAILED
  v2.isAnswer = false
  v2.farmId = farmId
  return v2
end
function SellHandToolEvent.newServerToClient(state, filename, farmId)
  local v3 = SellHandToolEvent.emptyNew()
  v3.state = state
  v3.filename = filename
  v3.farmId = farmId
  v3.isAnswer = true
  return v3
end
function SellHandToolEvent:readStream(streamId, connection)
  local v4 = streamReadString(streamId)
  local v3 = NetworkUtil.convertFromNetworkFilename(...)
  self.filename = v3
  v3 = streamReadUIntN(streamId, 2)
  self.state = v3
  v3 = streamReadBool(streamId)
  self.isAnswer = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  self:run(connection)
end
function SellHandToolEvent:writeStream(streamId, connection)
  local v5 = NetworkUtil.convertToNetworkFilename(self.filename)
  streamWriteString(...)
  streamWriteUIntN(streamId, self.state, 2)
  streamWriteBool(streamId, self.isAnswer)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function SellHandToolEvent:run(connection)
  local v2 = v2:getItemByXMLFilename(self.filename)
  if v2 ~= nil then
  end
  local v4 = connection:getIsServer()
  if not v4 then
    local v5 = v5:getHasPlayerPermission("sellVehicle", connection)
    if not v5 then
    end
    if g_currentMission.players ~= nil then
      for v9, v10 in pairs(g_currentMission.players) do
        local v11 = v10:getEquippedHandtoolFilename()
        v11 = v11:lower()
        local v12 = v3:lower()
        if not (v11 == v12) then
          continue
        end
        break
      end
    end
    if v2 ~= nil and not v5 and g_currentMission.players ~= nil then
      self:removeHandTool(v3, self.farmId)
      v6 = v6:getIsServer()
      if v6 then
        v8 = SellHandToolEvent.new(v3, self.farmId)
        v6:broadcastEvent(v8, false, connection)
        v8 = v8:getSellPrice(v2)
        v6:addMoney(v8, self.farmId, MoneyType.SHOP_VEHICLE_SELL, true)
      end
    end
    v8 = SellHandToolEvent.newServerToClient(v4, v3, self.farmId)
    connection:sendEvent(...)
    return
  end
  if self.isAnswer then
    if self.state == SellHandToolEvent.STATE_SUCCESS then
      self:removeHandTool(v3, self.farmId)
    end
    v4:publish(SellHandToolEvent, self.state)
    return
  end
  self:removeHandTool(v3, self.farmId)
end
function SellHandToolEvent.removeHandTool(v0, v1, v2)
  local v3 = v3:getFarmById(v2)
  v3:removeHandTool(v1)
end
