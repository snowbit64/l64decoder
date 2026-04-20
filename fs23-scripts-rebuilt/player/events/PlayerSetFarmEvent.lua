-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/player/events/PlayerSetFarmAnswerEvent.lua")
PlayerSetFarmEvent = {}
local PlayerSetFarmEvent_mt = Class(PlayerSetFarmEvent, Event)
InitStaticEventClass(PlayerSetFarmEvent, "PlayerSetFarmEvent", EventIds.EVENT_PLAYER_SET_FARM)
function PlayerSetFarmEvent.emptyNew()
  return Event.new(u0)
end
function PlayerSetFarmEvent.new(player, farmId, password)
  local v3 = PlayerSetFarmEvent.emptyNew()
  v3.player = player
  v3.farmId = farmId
  v3.password = password
  return v3
end
function PlayerSetFarmEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.player)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
  if self.password ~= nil then
    streamWriteBool(streamId, true)
    streamWriteString(streamId, self.password)
    return
  end
  streamWriteBool(streamId, false)
end
function PlayerSetFarmEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadString(streamId)
    self.password = v3
  end
  self:run(connection)
end
function PlayerSetFarmEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v3 = v3:getFarmById(self.player.farmId)
    local v4 = v4:getFarmById(self.farmId)
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L147
    local v5 = v5:getUserByUserId(self.player.userId)
    local v6 = v5:getIsMasterUser()
    if not v6 and v4.password ~= nil then
      -- if v4.password ~= v0.password then goto L116 end
    end
    local v8 = v5:getId()
    v3:removeUser(...)
    v6:setFarm(self.farmId)
    v8 = v5:getId()
    local v9 = v5:getUniqueUserId()
    local v10 = v5:getIsMasterUser()
    v4:addUser(...)
    v6:onFarmChange()
    v6:publish(MessageType.PLAYER_FARM_CHANGED, self.player)
    v5:setFinancesVersionCounter(0)
    v8 = PlayerSetFarmAnswerEvent.new(PlayerSetFarmAnswerEvent.STATE.OK, self.farmId, self.password)
    connection:sendEvent(...)
    local v11 = v5:getId()
    v8 = PlayerSwitchedFarmEvent.new(...)
    v6:broadcastEvent(...)
    return
    v8 = PlayerSetFarmAnswerEvent.new(PlayerSetFarmAnswerEvent.STATE.PASSWORD_REQUIRED, self.farmId)
    connection:sendEvent(...)
    return
  end
  self.player.farmId = self.farmId
  v2:onFarmChange()
  v2:publish(MessageType.PLAYER_FARM_CHANGED, self.player)
end
function PlayerSetFarmEvent.sendEvent(player, farmId, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = PlayerSetFarmEvent.new(player, farmId)
    v3:broadcastEvent(v5, nil, nil, player)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = PlayerSetFarmEvent.new(player, farmId)
  v3:sendEvent(...)
end
