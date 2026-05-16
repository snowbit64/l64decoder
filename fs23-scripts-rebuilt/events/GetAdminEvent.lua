-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GetAdminEvent = {}
local GetAdminEvent_mt = Class(GetAdminEvent, Event)
InitStaticEventClass(GetAdminEvent, "GetAdminEvent", EventIds.EVENT_GET_ADMIN)
function GetAdminEvent.emptyNew()
  return Event.new(u0)
end
function GetAdminEvent.new(password)
  local v1 = GetAdminEvent.emptyNew()
  v1.password = password
  return v1
end
function GetAdminEvent:readStream(streamId, connection)
  local v4 = v4:getIsServer()
  assert(...)
  local v3 = streamReadString(streamId)
  self.password = v3
  v3 = v3:getIsServer()
  if v3 then
    v3 = connection:getIsServer()
    if not v3 then
      if g_dedicatedServer ~= nil then
        if g_dedicatedServer.adminPassword == self.password then
          v4:addMasterUserByConnection(connection)
        else
        end
      end
      local v6 = GetAdminAnswerEvent.new(v3)
      connection:sendEvent(...)
    end
  end
end
function GetAdminEvent:writeStream(streamId, connection)
  streamWriteString(streamId, self.password)
end
function GetAdminEvent.run(v0, v1)
  print("Error: GetAdminEvent is a client to server only event")
end
