-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BalerSetBaleTimeEvent = {}
local BalerSetBaleTimeEvent_mt = Class(BalerSetBaleTimeEvent, Event)
InitStaticEventClass(BalerSetBaleTimeEvent, "BalerSetBaleTimeEvent", EventIds.EVENT_BALER_SET_BALE_TIME)
function BalerSetBaleTimeEvent.emptyNew()
  return Event.new(u0)
end
function BalerSetBaleTimeEvent.new(object, bale, baleTime)
  local v3 = BalerSetBaleTimeEvent.emptyNew()
  v3.object = object
  v3.bale = bale
  v3.baleTime = baleTime
  return v3
end
function BalerSetBaleTimeEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadInt32(streamId)
  self.bale = v3
  v3 = streamReadFloat32(streamId)
  self.baleTime = v3
  self:run(connection)
end
function BalerSetBaleTimeEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteInt32(streamId, self.bale)
  streamWriteFloat32(streamId, self.baleTime)
end
function BalerSetBaleTimeEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setBaleTime(self.bale, self.baleTime)
    end
  end
end
