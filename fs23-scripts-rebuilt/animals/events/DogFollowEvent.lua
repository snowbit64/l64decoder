-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DogFollowEvent = {}
local DogFollowEvent_mt = Class(DogFollowEvent, Event)
InitStaticEventClass(DogFollowEvent, "DogFollowEvent", EventIds.EVENT_DOG_FOLLOW)
function DogFollowEvent.emptyNew()
  return Event.new(u0)
end
function DogFollowEvent.new(dog, player)
  local v2 = DogFollowEvent.emptyNew()
  v2.dog = dog
  v2.player = player
  if player == nil then
  end
  v2.follow = true
  return v2
end
function DogFollowEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.dog = v3
  v3 = streamReadBool(streamId)
  self.follow = v3
  if self.follow then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.player = v3
  end
  self:run(connection)
end
function DogFollowEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.dog)
  local v3 = streamWriteBool(streamId, self.follow)
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.player)
  end
end
function DogFollowEvent:run(connection)
  if self.dog ~= nil then
    if self.follow then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L24
      v2:followEntity(self.player)
      return
    end
    v2:goToSpawn()
  end
end
