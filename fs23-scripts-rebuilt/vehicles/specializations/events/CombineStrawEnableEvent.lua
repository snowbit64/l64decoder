-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CombineStrawEnableEvent = {}
local CombineStrawEnableEvent_mt = Class(CombineStrawEnableEvent, Event)
InitStaticEventClass(CombineStrawEnableEvent, "CombineStrawEnableEvent", EventIds.EVENT_COMBINE_ENABLE_STRAW)
function CombineStrawEnableEvent.emptyNew()
  return Event.new(u0)
end
function CombineStrawEnableEvent.new(vehicle, isSwathActive)
  local v2 = CombineStrawEnableEvent.emptyNew()
  v2.vehicle = vehicle
  v2.isSwathActive = isSwathActive
  return v2
end
function CombineStrawEnableEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadBool(streamId)
  self.isSwathActive = v3
  self:run(connection)
end
function CombineStrawEnableEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteBool(streamId, self.isSwathActive)
end
function CombineStrawEnableEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setIsSwathActive(self.isSwathActive, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = CombineStrawEnableEvent.new(self.vehicle, self.isSwathActive)
    v2:broadcastEvent(v4, nil, connection, self.vehicle)
  end
end
function CombineStrawEnableEvent.sendEvent(vehicle, isSwathActive, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = CombineStrawEnableEvent.new(vehicle, isSwathActive)
    v3:broadcastEvent(v5, nil, nil, vehicle)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = CombineStrawEnableEvent.new(vehicle, isSwathActive)
  v3:sendEvent(...)
end
