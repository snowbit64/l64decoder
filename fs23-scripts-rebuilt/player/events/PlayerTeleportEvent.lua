-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerTeleportEvent = {}
local PlayerTeleportEvent_mt = Class(PlayerTeleportEvent, Event)
InitStaticEventClass(PlayerTeleportEvent, "PlayerTeleportEvent", EventIds.EVENT_PLAYER_TELEPORT)
function PlayerTeleportEvent.emptyNew()
  return Event.new(u0)
end
function PlayerTeleportEvent.new(x, y, z, isAbsolute, isRootNode)
  local v5 = PlayerTeleportEvent.emptyNew()
  v5.x = x
  v5.y = y
  v5.z = z
  v5.isAbsolute = isAbsolute
  v5.isRootNode = isRootNode
  return v5
end
function PlayerTeleportEvent.newExitVehicle(exitVehicle)
  local v1 = PlayerTeleportEvent.emptyNew()
  v1.exitVehicle = exitVehicle
  return v1
end
function PlayerTeleportEvent:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.exitVehicle = v3
  else
    v3 = streamReadFloat32(streamId)
    self.x = v3
    v3 = streamReadFloat32(streamId)
    self.y = v3
    v3 = streamReadFloat32(streamId)
    self.z = v3
    v3 = streamReadBool(streamId)
    self.isAbsolute = v3
    v3 = streamReadBool(streamId)
    self.isRootNode = v3
  end
  self:run(connection)
end
function PlayerTeleportEvent:writeStream(streamId, connection)
  if self.exitVehicle == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.exitVehicle)
    return
  end
  streamWriteFloat32(streamId, self.x)
  streamWriteFloat32(streamId, self.y)
  streamWriteFloat32(streamId, self.z)
  streamWriteBool(streamId, self.isAbsolute)
  streamWriteBool(streamId, self.isRootNode)
end
function PlayerTeleportEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 and g_currentMission.connectionsToPlayer[connection] ~= nil then
    if self.exitVehicle ~= nil then
      g_currentMission.connectionsToPlayer[connection]:moveToExitPoint(self.exitVehicle)
      return
    end
    if self.x ~= nil then
      v2:moveTo(self.x, self.y, self.z, self.isAbsolute, self.isRootNode)
    end
  end
end
