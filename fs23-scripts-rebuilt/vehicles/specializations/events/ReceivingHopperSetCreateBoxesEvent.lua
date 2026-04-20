-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ReceivingHopperSetCreateBoxesEvent = {}
local ReceivingHopperSetCreateBoxesEvent_mt = Class(ReceivingHopperSetCreateBoxesEvent, Event)
InitStaticEventClass(ReceivingHopperSetCreateBoxesEvent, "ReceivingHopperSetCreateBoxesEvent", EventIds.EVENT_RECEIVINGHOPPER_SET_CREATE_BOXES)
function ReceivingHopperSetCreateBoxesEvent.emptyNew()
  return Event.new(u0)
end
function ReceivingHopperSetCreateBoxesEvent.new(object, state)
  local v2 = ReceivingHopperSetCreateBoxesEvent.emptyNew()
  v2.object = object
  v2.state = state
  return v2
end
function ReceivingHopperSetCreateBoxesEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.state = v3
  self:run(connection)
end
function ReceivingHopperSetCreateBoxesEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.state)
end
function ReceivingHopperSetCreateBoxesEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setCreateBoxes(self.state, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = ReceivingHopperSetCreateBoxesEvent.new(self.object, self.state)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
function ReceivingHopperSetCreateBoxesEvent:sendEvent(v1, v2)
  if v1 ~= self.state then
    if v2 ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L43
    end
    if g_server ~= nil then
      local v5 = ReceivingHopperSetCreateBoxesEvent.new(self, v1)
      v3:broadcastEvent(v5, nil, nil, self)
      return
    end
    local v3 = v3:getServerConnection()
    v5 = ReceivingHopperSetCreateBoxesEvent.new(self, v1)
    v3:sendEvent(...)
  end
end
