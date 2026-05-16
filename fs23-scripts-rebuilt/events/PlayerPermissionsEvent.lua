-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerPermissionsEvent = {}
local PlayerPermissionsEvent_mt = Class(PlayerPermissionsEvent, Event)
InitStaticEventClass(PlayerPermissionsEvent, "PlayerPermissionsEvent", EventIds.EVENT_PLAYER_PERMISSIONS)
function PlayerPermissionsEvent.emptyNew()
  return Event.new(u0)
end
function PlayerPermissionsEvent.new(userId, permissions, isFarmManager)
  local v3 = PlayerPermissionsEvent.emptyNew()
  v3.userId = userId
  v3.permissions = permissions
  v3.isFarmManager = isFarmManager
  return v3
end
function PlayerPermissionsEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObjectId(streamId, self.userId)
  for v6, v7 in ipairs(Farm.PERMISSIONS) do
    streamWriteBool(streamId, self.permissions[v7])
  end
  if self.isFarmManager == nil then
  end
  v3 = v3(v4, true)
  if v3 then
    streamWriteBool(streamId, self.isFarmManager)
  end
end
function PlayerPermissionsEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObjectId(streamId)
  self.userId = v3
  self.permissions = {}
  for v6, v7 in ipairs(Farm.PERMISSIONS) do
    local v9 = streamReadBool(streamId)
    self.permissions[v7] = v9
  end
  v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadBool(streamId)
    self.isFarmManager = v3
  end
  self:run(connection)
end
function PlayerPermissionsEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getFarmByUserId(self.userId)
    local v3 = v3:getHasPlayerPermission("manageRights", connection, v2.farmId)
    -- if not v3 then goto L87 end
    v2.userIdToPlayer[self.userId].permissions = self.permissions
    if self.isFarmManager ~= nil then
      v2.userIdToPlayer[self.userId].isFarmManager = self.isFarmManager
    end
    v4:broadcastEvent(self)
    v4:publish(PlayerPermissionsEvent, self.userId)
    return
  end
  v2 = v2:getFarmByUserId(self.userId)
  v2.userIdToPlayer[self.userId].permissions = self.permissions
  if self.isFarmManager ~= nil then
    v2.userIdToPlayer[self.userId].isFarmManager = self.isFarmManager
  end
  v4:publish(PlayerPermissionsEvent, self.userId)
end
function PlayerPermissionsEvent.sendEvent(userId, permissions, isFarmManager, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L44
  end
  local event = PlayerPermissionsEvent.new(userId, permissions, isFarmManager)
  if g_server ~= nil then
    local v5 = v5:getFarmByUserId(userId)
    v7:broadcastEvent(event, nil, nil, v5.userIdToPlayer[userId])
    return
  end
  v5 = v5:getServerConnection()
  v5:sendEvent(event)
end
