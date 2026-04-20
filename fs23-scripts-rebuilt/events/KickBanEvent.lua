-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

KickBanEvent = {}
local KickBanEvent_mt = Class(KickBanEvent, Event)
InitStaticEventClass(KickBanEvent, "KickBanEvent", EventIds.EVENT_KICK_BAN)
function KickBanEvent.emptyNew()
  return Event.new(u0)
end
function KickBanEvent.new(doKick, userId)
  local v2 = KickBanEvent.emptyNew()
  v2.doKick = doKick
  v2.userId = userId
  return v2
end
function KickBanEvent:readStream(streamId, connection)
  local v4 = v4:getIsServer()
  assert(v4, "KickBanEvent is a client to server only event")
  local v3 = streamReadBool(streamId)
  self.doKick = v3
  v3 = NetworkUtil.readNodeObjectId(streamId)
  self.userId = v3
  self:run(connection)
end
function KickBanEvent:writeStream(streamId, connection)
  streamWriteBool(streamId, self.doKick)
  NetworkUtil.writeNodeObjectId(streamId, self.userId)
end
function KickBanEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    local v3 = v3:getServerUserId()
    if self.userId == v3 then
      print("The server cannot be kicked or banned")
      return
    end
    v2 = v2:getIsConnectionMasterUser(connection)
    if not v2 then
      print("Connection is not a master user")
      return
    end
    v2 = v2:getUserByUserId(self.userId)
    if v2 ~= nil then
      if self.doKick then
        v3:kickUser(v2)
        return
      end
      v3:banUser(v2)
      return
    end
    local v8 = tostring(self.userId)
    print("User(" .. v8 .. ") not found")
    return
  end
  print("Error: KickBanEvent is a client to server only event")
end
