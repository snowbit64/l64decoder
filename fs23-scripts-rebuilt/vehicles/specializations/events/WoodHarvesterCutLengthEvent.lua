-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WoodHarvesterCutLengthEvent = {}
local WoodHarvesterCutLengthEvent_mt = Class(WoodHarvesterCutLengthEvent, Event)
InitStaticEventClass(WoodHarvesterCutLengthEvent, "WoodHarvesterCutLengthEvent", EventIds.EVENT_WOODHARVESTER_CUT_LENGTH)
function WoodHarvesterCutLengthEvent.emptyNew()
  return Event.new(u0)
end
function WoodHarvesterCutLengthEvent.new(object, index)
  local v2 = WoodHarvesterCutLengthEvent.emptyNew()
  v2.object = object
  v2.index = index
  return v2
end
function WoodHarvesterCutLengthEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUIntN(streamId, WoodHarvester.NUM_BITS_CUT_LENGTH)
  self.index = v3
  self:run(connection)
end
function WoodHarvesterCutLengthEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self.index, WoodHarvester.NUM_BITS_CUT_LENGTH)
end
function WoodHarvesterCutLengthEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, false, connection, self.object)
  end
  if self.object ~= nil then
    v2 = v2:getIsSynchronized()
    if v2 then
      v2:setWoodHarvesterCutLengthIndex(self.index, true)
    end
  end
end
function WoodHarvesterCutLengthEvent.sendEvent(object, index, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = WoodHarvesterCutLengthEvent.new(object, index)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = WoodHarvesterCutLengthEvent.new(object, index)
  v3:sendEvent(...)
end
