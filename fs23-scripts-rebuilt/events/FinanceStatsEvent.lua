-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FinanceStatsEvent = {}
local FinanceStatsEvent_mt = Class(FinanceStatsEvent, Event)
InitStaticEventClass(FinanceStatsEvent, "FinanceStatsEvent", EventIds.EVENT_FINANCE_STATS)
function FinanceStatsEvent.emptyNew()
  return Event.new(u0, NetworkNode.CHANNEL_SECONDARY)
end
function FinanceStatsEvent.new(historyIndex, farmId)
  local v2 = FinanceStatsEvent.emptyNew()
  v2.historyIndex = historyIndex
  v2.farmId = farmId
  if 0 <= historyIndex and historyIndex > 255 then
  end
  assert(v4)
  return v2
end
function FinanceStatsEvent:readStream(streamId, connection)
  local v3 = streamReadUInt8(streamId)
  self.historyIndex = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  v3 = connection:getIsServer()
  if v3 then
    v3 = streamReadBool(streamId)
    -- if not v3 then goto L115 end
    v3 = streamReadUIntN(streamId, 7)
    local v5 = streamReadBool(streamId)
    if v5 then
      for v8, v9 in ipairs(FinanceStats.statNames) do
        local money = streamReadFloat32(streamId)
        v4[v9] = money
      end
    end
    v5 = v5:getFarmById(self.farmId)
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L115
    v5.stats.financesHistoryVersionCounter = v3
    if self.historyIndex == 0 then
    elseif #v5.stats.financesHistory < self.historyIndex then
      -- TODO: structure LOP_FORNPREP (pc 81, target 93)
      local v15 = FinanceStats.new()
      table.insert(...)
      -- TODO: structure LOP_FORNLOOP (pc 92, target 82)
    end
    for v11, v12 in pairs(v4) do
      v7[v11] = v12
    end
    return
  end
  connection:sendEvent(self)
end
function FinanceStatsEvent:writeStream(streamId, connection)
  streamWriteUInt8(streamId, self.historyIndex)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = v3:getFarmById(self.farmId)
    if v3 == nil then
    end
    local v4 = v4(v5, true)
    if v4 then
      streamWriteUIntN(streamId, v3.stats.financesHistoryVersionCounter, 7)
      if self.historyIndex == 0 then
      elseif self.historyIndex <= #v3.stats.financesHistory then
      end
      if v6 ~= nil and self.farmId == FarmManager.SPECTATOR_FARM_ID then
      end
      local v7 = v7(v8, v9)
      if v7 then
        for money, v11 in ipairs(FinanceStats.statNames) do
          local v12 = Utils.getNoNil(v6[v11], 0)
          streamWriteFloat32(streamId, v12)
        end
      end
    end
  end
end
function FinanceStatsEvent.run(v0, streamId)
  print("Error: FinanceStatsEvent is not allowed to be executed on a local client")
end
