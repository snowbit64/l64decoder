-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GetAdminAnswerEvent = {}
local GetAdminAnswerEvent_mt = Class(GetAdminAnswerEvent, Event)
InitStaticEventClass(GetAdminAnswerEvent, "GetAdminAnswerEvent", EventIds.EVENT_GET_ADMIN_ANSWER)
GetAdminAnswerEvent.ACCESS_GRANTED = 0
GetAdminAnswerEvent.ACCESS_DENIED = 1
GetAdminAnswerEvent.NOT_SUPPORTED = 2
GetAdminAnswerEvent.sendNumBits = 2
function GetAdminAnswerEvent.emptyNew()
  return Event.new(u0)
end
function GetAdminAnswerEvent.new(state)
  local v1 = GetAdminAnswerEvent.emptyNew()
  v1.state = state
  return v1
end
function GetAdminAnswerEvent:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, GetAdminAnswerEvent.sendNumBits)
  self.state = v3
  self:run(connection)
end
function GetAdminAnswerEvent:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.state, GetAdminAnswerEvent.sendNumBits)
end
function GetAdminAnswerEvent:run(connection)
  local v2 = connection:getIsServer()
  if v2 then
    v2 = v2:getText("ui_adminLoginNotSupported")
    if self.state == GetAdminAnswerEvent.ACCESS_GRANTED then
      local v4 = v4:getText("ui_adminLoginGranted")
    elseif self.state == GetAdminAnswerEvent.ACCESS_DENIED then
      v4 = v4:getText("ui_wrongPassword")
    end
    if self.state ~= GetAdminAnswerEvent.ACCESS_GRANTED then
    end
    v4(v5, v6, v7, v8, v9, v10, {true})
    return
  end
  print("This is a server to client event!")
end
function GetAdminAnswerEvent.onAnswerOk(v0, connection)
  if connection ~= nil and connection[1] == true then
    v2:publish(GetAdminAnswerEvent, true)
  end
end
