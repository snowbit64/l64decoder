-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetWorkModeEvent = {}
local SetWorkModeEvent_mt = Class(SetWorkModeEvent, Event)
InitStaticEventClass(SetWorkModeEvent, "SetWorkModeEvent", EventIds.EVENT_SET_WORK_MODE)
function SetWorkModeEvent.emptyNew()
  return Event.new(u0)
end
function SetWorkModeEvent.new(vehicle, state)
  local v2 = SetWorkModeEvent.emptyNew()
  v2.vehicle = vehicle
  v2.state = state
  return v2
end
function SetWorkModeEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadUIntN(streamId, WorkMode.WORKMODE_SEND_NUM_BITS)
  self.state = v3
  self:run(connection)
end
function SetWorkModeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteUIntN(streamId, self.state, WorkMode.WORKMODE_SEND_NUM_BITS)
end
function SetWorkModeEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setWorkMode(self.state, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = SetWorkModeEvent.new(self.vehicle, self.state)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
function SetWorkModeEvent.sendEvent(vehicle, state, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = SetWorkModeEvent.new(vehicle, state)
    v3:broadcastEvent(v5, nil, nil, vehicle)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = SetWorkModeEvent.new(vehicle, state)
  v3:sendEvent(...)
end
