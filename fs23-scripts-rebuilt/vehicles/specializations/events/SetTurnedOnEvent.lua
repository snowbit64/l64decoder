-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetTurnedOnEvent = {}
local SetTurnedOnEvent_mt = Class(SetTurnedOnEvent, Event)
InitStaticEventClass(SetTurnedOnEvent, "SetTurnedOnEvent", EventIds.EVENT_SET_TURNED_ON)
function SetTurnedOnEvent.emptyNew()
  return Event.new(u0)
end
function SetTurnedOnEvent.new(object, isTurnedOn)
  local v2 = SetTurnedOnEvent.emptyNew()
  v2.object = object
  v2.isTurnedOn = isTurnedOn
  return v2
end
function SetTurnedOnEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.isTurnedOn = v3
  self:run(connection)
end
function SetTurnedOnEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.isTurnedOn)
end
function SetTurnedOnEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setIsTurnedOn(self.isTurnedOn, true)
    end
  end
end
function SetTurnedOnEvent.sendEvent(vehicle, isTurnedOn, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = SetTurnedOnEvent.new(vehicle, isTurnedOn)
    v3:broadcastEvent(v5, nil, nil, vehicle)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = SetTurnedOnEvent.new(vehicle, isTurnedOn)
  v3:sendEvent(...)
end
