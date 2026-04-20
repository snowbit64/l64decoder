-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UpdateSplitShapesEvent = {}
local UpdateSplitShapesEvent_mt = Class(UpdateSplitShapesEvent, Event)
InitStaticEventClass(UpdateSplitShapesEvent, "UpdateSplitShapesEvent", EventIds.EVENT_UPDATE_SPLIT_SHAPES)
function UpdateSplitShapesEvent.emptyNew()
  return Event.new(u0)
end
function UpdateSplitShapesEvent.new()
  return UpdateSplitShapesEvent.emptyNew()
end
function UpdateSplitShapesEvent.readStream(v0, v1, v2)
  local v3 = v2:getIsServer()
  if v3 then
    readSplitShapesServerEventFromStream(v1)
  end
end
function UpdateSplitShapesEvent.writeStream(v0, v1, v2)
  local v3 = v2:getIsServer()
  if not v3 then
    writeSplitShapesServerEventToStream(v1, v1)
  end
end
function UpdateSplitShapesEvent.run(v0, v1)
  print("Error: UpdateSplitShapesEvent is not allowed to be executed on a local client")
end
