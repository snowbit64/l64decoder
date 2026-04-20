-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIFieldWorkerStateEvent = {}
local AIFieldWorkerStateEvent_mt = Class(AIFieldWorkerStateEvent, Event)
InitStaticEventClass(AIFieldWorkerStateEvent, "AIFieldWorkerStateEvent", EventIds.EVENT_AI_FIELDWORKER_STATE)
function AIFieldWorkerStateEvent.emptyNew()
  return Event.new(u0)
end
function AIFieldWorkerStateEvent.new(vehicle, isActive)
  local v2 = AIFieldWorkerStateEvent.emptyNew()
  v2.vehicle = vehicle
  v2.isActive = isActive
  return v2
end
function AIFieldWorkerStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadBool(streamId)
  self.isActive = v3
  self:run(connection)
end
function AIFieldWorkerStateEvent:writeStream(streamId, connection)
  local v5 = connection:getIsServer()
  assert(not v5, "AIFieldWorkerStateEvent is a server to client event only")
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteBool(streamId, self.isActive)
end
function AIFieldWorkerStateEvent:run(connection)
  if self.vehicle ~= nil and self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      if self.isActive then
        v2:startFieldWorker()
        return
      end
      v2:stopFieldWorker()
    end
  end
end
