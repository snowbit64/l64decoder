-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetPipeStateEvent = {}
local SetPipeStateEvent_mt = Class(SetPipeStateEvent, Event)
InitStaticEventClass(SetPipeStateEvent, "SetPipeStateEvent", EventIds.EVENT_SET_PIPE_STATE)
function SetPipeStateEvent.emptyNew()
  return Event.new(u0)
end
function SetPipeStateEvent.new(object, pipeState)
  local v2 = SetPipeStateEvent.emptyNew()
  v2.object = object
  v2.pipeState = pipeState
  if 0 <= v2.pipeState and v2.pipeState >= 8 then
  end
  assert(v4)
  return v2
end
function SetPipeStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUIntN(streamId, 3)
  self.pipeState = v3
  self:run(connection)
end
function SetPipeStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self.pipeState, 3)
end
function SetPipeStateEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setPipeState(self.pipeState, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = SetPipeStateEvent.new(self.object, self.pipeState)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
