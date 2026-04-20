-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GetBansEvent = {}
local GetBansEvent_mt = Class(GetBansEvent, Event)
InitStaticEventClass(GetBansEvent, "GetBansEvent", EventIds.EVENT_GET_BANS)
function GetBansEvent.emptyNew()
  return Event.new(u0)
end
function GetBansEvent.new(bans)
  local v1 = GetBansEvent.emptyNew()
  if not bans then
  end
  v1.bans = v2
  return v1
end
function GetBansEvent:readStream(streamId, connection)
  local num = streamReadUInt16(streamId)
  self.bans = {}
  -- TODO: structure LOP_FORNPREP (pc 11, target 35)
  local v8 = streamReadString(streamId)
  v8 = streamReadString(streamId)
  table.insert(self.bans, {displayName = v8, uniqueUserId = v8})
  -- TODO: structure LOP_FORNLOOP (pc 34, target 12)
  self:run(connection)
end
function GetBansEvent:writeStream(streamId, connection)
  streamWriteUInt16(streamId, #self.bans)
  for v6, v7 in ipairs(self.bans) do
    streamWriteString(streamId, v7.displayName)
    streamWriteString(streamId, v7.uniqueUserId)
  end
end
function GetBansEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getIsConnectionMasterUser(connection)
    if not v2 then
      print("Connection is not a master user")
      return
    end
    local v6 = getNumOfBlockedUsers()
    -- TODO: structure LOP_FORNPREP (pc 24, target 41)
    local v6, v7, v8, v9 = getBlockedUser(0)
    table.insert({}, {uniqueUserId = v6, displayName = v9})
    -- TODO: structure LOP_FORNLOOP (pc 40, target 25)
    local v5 = GetBansEvent.new({})
    connection:sendEvent(...)
    return
  end
  v2:publish(GetBansEvent, self.bans)
end
