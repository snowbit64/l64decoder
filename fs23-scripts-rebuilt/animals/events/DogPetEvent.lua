-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DogPetEvent = {}
local DogPetEvent_mt = Class(DogPetEvent, Event)
InitStaticEventClass(DogPetEvent, "DogPetEvent", EventIds.EVENT_DOG_PET)
function DogPetEvent.emptyNew()
  return Event.new(u0)
end
function DogPetEvent.new(dog)
  local v1 = DogPetEvent.emptyNew()
  v1.dog = dog
  return v1
end
function DogPetEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.dog = v3
  self:run(connection)
end
function DogPetEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.dog)
end
function DogPetEvent:run(connection)
  if self.dog ~= nil then
    v2:pet()
  end
end
