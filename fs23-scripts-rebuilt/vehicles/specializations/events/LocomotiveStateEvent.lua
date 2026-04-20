-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LocomotiveStateEvent = {}
local LocomotiveStateEvent_mt = Class(LocomotiveStateEvent, Event)
InitStaticEventClass(LocomotiveStateEvent, "LocomotiveStateEvent", EventIds.EVENT_TRAIN_LOCOMOTIVE_STATE)
function LocomotiveStateEvent.emptyNew()
  return Event.new(u0)
end
function LocomotiveStateEvent.new(object, state)
  local v2 = LocomotiveStateEvent.emptyNew()
  v2.object = object
  v2.state = state
  return v2
end
function LocomotiveStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUIntN(streamId, Locomotive.NUM_BITS_STATE)
  self.state = v3
  self:run(connection)
end
function LocomotiveStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self.state, Locomotive.NUM_BITS_STATE)
end
function LocomotiveStateEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setLocomotiveState(self.state, true)
    end
  end
end
