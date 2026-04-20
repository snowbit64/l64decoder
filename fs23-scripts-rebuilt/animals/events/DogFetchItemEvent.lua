-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DogFetchItemEvent = {}
local DogFetchItemEvent_mt = Class(DogFetchItemEvent, Event)
InitStaticEventClass(DogFetchItemEvent, "DogFetchItemEvent", EventIds.EVENT_DOG_FETCH_ITEM)
function DogFetchItemEvent.emptyNew()
  return Event.new(u0)
end
function DogFetchItemEvent.new(dog, player, item)
  local v3 = DogFetchItemEvent.emptyNew()
  v3.dog = dog
  v3.player = player
  v3.item = item
  return v3
end
function DogFetchItemEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.dog = v3
  v3 = NetworkUtil.readNodeObject(streamId)
  self.player = v3
  v3 = NetworkUtil.readNodeObject(streamId)
  self.item = v3
  self:run(connection)
end
function DogFetchItemEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.dog)
  NetworkUtil.writeNodeObject(streamId, self.player)
  NetworkUtil.writeNodeObject(streamId, self.item)
end
function DogFetchItemEvent:run(connection)
  if self.dog ~= nil and self.player ~= nil and self.item ~= nil then
    v2:fetchItem(self.player, self.item)
  end
end
