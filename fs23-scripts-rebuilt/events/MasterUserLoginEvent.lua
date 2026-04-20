-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MasterUserLoginEvent = {}
local MasterUserLoginEvent_mt = Class(MasterUserLoginEvent, Event)
InitStaticEventClass(MasterUserLoginEvent, "MasterUserLoginEvent", EventIds.EVENT_MASTER_USER_LOGIN)
function MasterUserLoginEvent.emptyNew()
  return Event.new(u0)
end
function MasterUserLoginEvent.new(userId)
  local v1 = MasterUserLoginEvent.emptyNew()
  v1.userId = userId
  return v1
end
function MasterUserLoginEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObjectId(streamId)
  self.userId = v3
  self:run(connection)
end
function MasterUserLoginEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObjectId(streamId, self.userId)
end
function MasterUserLoginEvent:run(connection)
  local v2 = v2:getUserByUserId(self.userId)
  v2.isMasterUser = true
end
