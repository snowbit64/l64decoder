-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VariableWorkWidthStateEvent = {}
local VariableWorkWidthStateEvent_mt = Class(VariableWorkWidthStateEvent, Event)
InitStaticEventClass(VariableWorkWidthStateEvent, "VariableWorkWidthStateEvent", EventIds.EVENT_VARIABLE_WORK_WIDTH_STATE)
function VariableWorkWidthStateEvent.emptyNew()
  return Event.new(u0)
end
function VariableWorkWidthStateEvent.new(vehicle, leftSide, rightSide)
  local v3 = VariableWorkWidthStateEvent.emptyNew()
  v3.vehicle = vehicle
  v3.leftSide = leftSide
  v3.rightSide = rightSide
  return v3
end
function VariableWorkWidthStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadUIntN(streamId, VariableWorkWidth.SEND_NUM_BITS)
  self.leftSide = v3
  v3 = streamReadUIntN(streamId, VariableWorkWidth.SEND_NUM_BITS)
  self.rightSide = v3
  self:run(connection)
end
function VariableWorkWidthStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteUIntN(streamId, self.leftSide, VariableWorkWidth.SEND_NUM_BITS)
  streamWriteUIntN(streamId, self.rightSide, VariableWorkWidth.SEND_NUM_BITS)
end
function VariableWorkWidthStateEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setSectionsActive(self.leftSide, self.rightSide, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = VariableWorkWidthStateEvent.new(self.vehicle, self.leftSide, self.rightSide)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
function VariableWorkWidthStateEvent.sendEvent(vehicle, leftSide, rightSide, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L41
  end
  if g_server ~= nil then
    local v6 = VariableWorkWidthStateEvent.new(vehicle, leftSide, rightSide)
    v4:broadcastEvent(v6, nil, nil, vehicle)
    return
  end
  local v4 = v4:getServerConnection()
  v6 = VariableWorkWidthStateEvent.new(vehicle, leftSide, rightSide)
  v4:sendEvent(...)
end
