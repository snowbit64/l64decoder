-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TrailerToggleManualTipEvent = {}
local TrailerToggleManualTipEvent_mt = Class(TrailerToggleManualTipEvent, Event)
InitStaticEventClass(TrailerToggleManualTipEvent, "TrailerToggleManualTipEvent", EventIds.EVENT_TRAILER_TOGGLE_MANUAL_TIP)
function TrailerToggleManualTipEvent.emptyNew()
  return Event.new(u0)
end
function TrailerToggleManualTipEvent.new(object, state)
  local v2 = TrailerToggleManualTipEvent.emptyNew()
  v2.object = object
  v2.state = state
  return v2
end
function TrailerToggleManualTipEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.state = v3
  self:run(connection)
end
function TrailerToggleManualTipEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.state)
end
function TrailerToggleManualTipEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      if self.state then
        v2:startTipping(nil, true)
        return
      end
      v2:stopTipping(true)
    end
  end
end
function TrailerToggleManualTipEvent.sendEvent(vehicle, state, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = TrailerToggleManualTipEvent.new(vehicle, state)
    v3:broadcastEvent(v5, nil, nil, vehicle)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = TrailerToggleManualTipEvent.new(vehicle, state)
  v3:sendEvent(...)
end
