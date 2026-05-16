-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SaveEvent = {}
local SaveEvent_mt = Class(SaveEvent, Event)
InitStaticEventClass(SaveEvent, "SaveEvent", EventIds.EVENT_SAVE)
function SaveEvent.emptyNew()
  return Event.new(u0)
end
function SaveEvent.new()
  return SaveEvent.emptyNew()
end
function SaveEvent.readStream(v0, v1, v2)
  local v4 = v4:getIsServer()
  assert(...)
  local v3 = v3:getIsServer()
  if v3 then
    v3 = v2:getIsServer()
    if not v3 then
      v3 = v3:getIsConnectionMasterUser(v2)
      if v3 then
        v3:publish(SaveEvent, false, true)
      end
    end
  end
end
function SaveEvent.writeStream(v0, v1, v2)
end
function SaveEvent.run(v0, v1)
  print("Error: SaveEvent is a client to server only event")
end
