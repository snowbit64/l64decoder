-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

KickBanNotificationEvent = {}
local KickBanNotificationEvent_mt = Class(KickBanNotificationEvent, Event)
InitStaticEventClass(KickBanNotificationEvent, "KickBanNotificationEvent", EventIds.EVENT_KICK_BAN_NOTIFICATION)
function KickBanNotificationEvent.emptyNew()
  return Event.new(u0, 1)
end
function KickBanNotificationEvent.new(doKick)
  local v1 = KickBanNotificationEvent.emptyNew()
  v1.doKick = doKick
  return v1
end
function KickBanNotificationEvent.readStream(v0, v1, v2)
  local v4 = v2:getIsServer()
  assert(v4, "KickBanNotificationEvent is a server to client only event")
  local v3 = v2:getIsServer()
  if v3 then
    v3 = streamReadBool(v1)
    if v3 then
      v3:setConnectionLostState(FSBaseMission.CONNECTION_LOST_KICKED)
      return
    end
    v3:setConnectionLostState(FSBaseMission.CONNECTION_LOST_BANNED)
  end
end
function KickBanNotificationEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    streamWriteBool(streamId, self.doKick)
  end
end
