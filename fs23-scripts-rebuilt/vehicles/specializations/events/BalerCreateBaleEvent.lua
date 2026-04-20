-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BalerCreateBaleEvent = {}
local BalerCreateBaleEvent_mt = Class(BalerCreateBaleEvent, Event)
InitStaticEventClass(BalerCreateBaleEvent, "BalerCreateBaleEvent", EventIds.EVENT_BALER_CREATE_BALE)
function BalerCreateBaleEvent.emptyNew()
  return Event.new(u0)
end
function BalerCreateBaleEvent.new(object, baleFillType, baleTime, baleServerId)
  local v4 = BalerCreateBaleEvent.emptyNew()
  v4.object = object
  v4.baleFillType = baleFillType
  v4.baleTime = baleTime
  v4.baleServerId = baleServerId
  return v4
end
function BalerCreateBaleEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadFloat32(streamId)
  self.baleTime = v3
  v3 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  self.baleFillType = v3
  v3 = streamReadBool(streamId)
  if v3 then
    v3 = NetworkUtil.readNodeObjectId(streamId)
    self.baleServerId = v3
  end
  self:run(connection)
end
function BalerCreateBaleEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteFloat32(streamId, self.baleTime)
  streamWriteUIntN(streamId, self.baleFillType, FillTypeManager.SEND_NUM_BITS)
  if self.baleServerId == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    NetworkUtil.writeNodeObjectId(streamId, self.baleServerId)
  end
end
function BalerCreateBaleEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:createBale(self.baleFillType, nil, self.baleServerId)
      local v4 = table.getn(self.object.spec_baler.bales)
      v2:setBaleTime(v4, self.baleTime)
    end
  end
end
