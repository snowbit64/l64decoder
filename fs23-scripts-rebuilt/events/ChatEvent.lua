-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChatEvent = {}
local ChatEvent_mt = Class(ChatEvent, Event)
InitStaticEventClass(ChatEvent, "ChatEvent", EventIds.EVENT_CHAT)
function ChatEvent.emptyNew()
  return Event.new(u0, NetworkNode.CHANNEL_CHAT)
end
function ChatEvent.new(msg, sender, farmId, userId)
  local v4 = ChatEvent.emptyNew()
  if msg ~= nil and sender == nil then
  end
  assert(v6, "ChatEvent msg and sender not valid")
  local v5 = filterText(msg, false, false)
  v4.msg = v5
  v4.sender = sender
  v4.farmId = farmId
  v4.userId = userId
  return v4
end
function ChatEvent:readStream(streamId, connection)
  local v3 = streamReadString(streamId)
  self.msg = v3
  v3 = streamReadString(streamId)
  self.sender = v3
  v3 = NetworkUtil.readNodeObjectId(streamId)
  self.userId = v3
  v3 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self.farmId = v3
  self:run(connection)
end
function ChatEvent:writeStream(streamId, connection)
  streamWriteString(streamId, self.msg)
  streamWriteString(streamId, self.sender)
  NetworkUtil.writeNodeObjectId(streamId, self.userId)
  streamWriteUIntN(streamId, self.farmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function ChatEvent:run(connection)
  v2:addChatMessage(self.sender, self.msg, self.farmId, self.userId)
  local v2 = connection:getIsServer()
  if not v2 then
    v2 = v2:getUserByUserId(self.userId)
    local v4 = v4:getUsers()
    for v6, v7 in ipairs(...) do
      local v8 = v7:getConnection()
      if not (connection ~= v8) then
        continue
      end
      v8 = v7:getIsBlockedBy(v2)
      if not not v8 then
        continue
      end
      v8 = v7:getConnection()
      v8 = v8:getIsLocal()
      if not not v8 then
        continue
      end
      v8 = v7:getConnection()
      v8:sendEvent(self, false)
    end
  end
end
