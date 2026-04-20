-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaleLoaderStateEvent = {}
local BaleLoaderStateEvent_mt = Class(BaleLoaderStateEvent, Event)
InitStaticEventClass(BaleLoaderStateEvent, "BaleLoaderStateEvent", EventIds.EVENT_BALE_LOADER_STATE)
function BaleLoaderStateEvent.emptyNew()
  return Event.new(u0)
end
function BaleLoaderStateEvent.new(object, stateId, nearestBaleServerId)
  local v3 = BaleLoaderStateEvent.emptyNew()
  v3.object = object
  v3.stateId = stateId
  if nearestBaleServerId == nil and v3.stateId == BaleLoader.CHANGE_GRAB_BALE then
  end
  assert(v5)
  v3.nearestBaleServerId = nearestBaleServerId
  return v3
end
function BaleLoaderStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadInt8(streamId)
  self.stateId = v3
  if self.stateId == BaleLoader.CHANGE_GRAB_BALE then
    v3 = NetworkUtil.readNodeObjectId(streamId)
    self.nearestBaleServerId = v3
  end
  self:run(connection)
end
function BaleLoaderStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteInt8(streamId, self.stateId)
  if self.stateId == BaleLoader.CHANGE_GRAB_BALE then
    NetworkUtil.writeNodeObjectId(streamId, self.nearestBaleServerId)
  end
end
function BaleLoaderStateEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:doStateChange(self.stateId, self.nearestBaleServerId)
    end
  end
end
