-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GreatDemandsEvent = {}
local GreatDemandsEvent_mt = Class(GreatDemandsEvent, Event)
InitStaticEventClass(GreatDemandsEvent, "GreatDemandsEvent", EventIds.EVENT_GREAT_DEMANDS)
function GreatDemandsEvent.emptyNew()
  return Event.new(u0)
end
function GreatDemandsEvent.new(greatDemands)
  local v1 = GreatDemandsEvent.emptyNew()
  v1.greatDemands = greatDemands
  return v1
end
function GreatDemandsEvent:readStream(streamId, connection)
  local numberOfDemands = streamReadUInt8(streamId)
  -- TODO: structure LOP_FORNPREP (pc 7, target 90)
  local v7 = v7:getGreatDemandById(1)
  local v8 = streamReadBool(streamId)
  v7.isValid = v8
  if v7.isValid then
    v8 = NetworkUtil.readNodeObject(streamId)
    v7.sellStation = v8
    local v9 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
    v7.fillTypeIndex = v9
    v9 = streamReadFloat32(streamId)
    v7.demandMultiplier = v9
    local v10 = streamReadInt32(streamId)
    v7.demandStart.day = v10
    v10 = streamReadInt32(streamId)
    v7.demandStart.hour = v10
    v9 = streamReadInt32(streamId)
    v7.demandDuration = v9
    v9 = streamReadBool(streamId)
    if v9 then
    end
    v7.needsStarting = v10
    if not v9 then
    end
    v7.needsStopping = v10
  elseif v7.isRunning then
    v7.needsStopping = true
  end
  -- TODO: structure LOP_FORNLOOP (pc 89, target 8)
  self:run(connection)
end
function GreatDemandsEvent:writeStream(streamId, connection)
  streamWriteUInt8(streamId, #self.greatDemands)
  for v6, v7 in ipairs(self.greatDemands) do
    local v8 = streamWriteBool(streamId, v7.isValid)
    if not v8 then
      continue
    end
    NetworkUtil.writeNodeObject(streamId, v7.sellStation)
    streamWriteUIntN(streamId, v7.fillTypeIndex, FillTypeManager.SEND_NUM_BITS)
    streamWriteFloat32(streamId, v7.demandMultiplier)
    streamWriteInt32(streamId, v7.demandStart.day)
    streamWriteInt32(streamId, v7.demandStart.hour)
    streamWriteInt32(streamId, v7.demandDuration)
    streamWriteBool(streamId, v7.isRunning)
  end
end
function GreatDemandsEvent.run(v0, streamId)
  local connection = streamId:getIsServer()
  if connection then
    for v5, v6 in pairs(g_currentMission.economyManager.greatDemands) do
      if v6.needsStarting then
        v7:startGreatDemand(v6)
        v6.needsStarting = false
      end
      if not v6.needsStopping then
        continue
      end
      v7:stopGreatDemand(v6)
      v6.needsStopping = false
    end
  end
end
