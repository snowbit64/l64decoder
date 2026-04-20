-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TensionBeltsRefreshEvent = {}
local TensionBeltsRefreshEvent_mt = Class(TensionBeltsRefreshEvent, Event)
InitStaticEventClass(TensionBeltsRefreshEvent, "TensionBeltsRefreshEvent", EventIds.EVENT_TENSION_BELT_REFRESH)
function TensionBeltsRefreshEvent.emptyNew()
  return Event.new(u0)
end
function TensionBeltsRefreshEvent.new(object)
  local v1 = TensionBeltsRefreshEvent.emptyNew()
  v1.object = object
  return v1
end
function TensionBeltsRefreshEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  self:run(connection)
end
function TensionBeltsRefreshEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
end
function TensionBeltsRefreshEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:refreshTensionBelts()
    end
  end
end
