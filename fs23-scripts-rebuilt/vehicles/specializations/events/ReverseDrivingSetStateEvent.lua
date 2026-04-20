-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ReverseDrivingSetStateEvent = {}
local ReverseDrivingSetStateEvent_mt = Class(ReverseDrivingSetStateEvent, Event)
InitStaticEventClass(ReverseDrivingSetStateEvent, "ReverseDrivingSetStateEvent", EventIds.EVENT_REVERSE_DRIVING_SET_STATE)
function ReverseDrivingSetStateEvent.emptyNew()
  return Event.new(u0)
end
function ReverseDrivingSetStateEvent.new(vehicle, isReverseDriving)
  local v2 = ReverseDrivingSetStateEvent.emptyNew()
  v2.vehicle = vehicle
  v2.isReverseDriving = isReverseDriving
  return v2
end
function ReverseDrivingSetStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadBool(streamId)
  self.isReverseDriving = v3
  self:run(connection)
end
function ReverseDrivingSetStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteBool(streamId, self.isReverseDriving)
end
function ReverseDrivingSetStateEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.vehicle)
  end
  if self.vehicle ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setIsReverseDriving(self.isReverseDriving, true)
    end
  end
end
function ReverseDrivingSetStateEvent:sendEvent(v1, v2)
  if v1 ~= self.isReverseDriving then
    if v2 ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L43
    end
    if g_server ~= nil then
      local v5 = ReverseDrivingSetStateEvent.new(self, v1)
      v3:broadcastEvent(v5, nil, nil, self)
      return
    end
    local v3 = v3:getServerConnection()
    v5 = ReverseDrivingSetStateEvent.new(self, v1)
    v3:sendEvent(...)
  end
end
