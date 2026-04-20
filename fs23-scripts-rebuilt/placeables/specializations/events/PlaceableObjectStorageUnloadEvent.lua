-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableObjectStorageUnloadEvent = {}
local PlaceableObjectStorageUnloadEvent_mt = Class(PlaceableObjectStorageUnloadEvent, Event)
InitStaticEventClass(PlaceableObjectStorageUnloadEvent, "PlaceableObjectStorageUnloadEvent", EventIds.EVENT_PLACEABLE_OBJECT_STORAGE_UNLOAD)
function PlaceableObjectStorageUnloadEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableObjectStorageUnloadEvent.new(placeable, objectInfoIndex, objectAmount)
  local v3 = PlaceableObjectStorageUnloadEvent.emptyNew()
  v3.placeable = placeable
  v3.objectInfoIndex = objectInfoIndex
  v3.objectAmount = objectAmount
  return v3
end
function PlaceableObjectStorageUnloadEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.placeable = v3
  v3 = streamReadUIntN(streamId, PlaceableObjectStorage.NUM_BITS_OBJECT_INFO)
  self.objectInfoIndex = v3
  v3 = streamReadUIntN(streamId, PlaceableObjectStorage.NUM_BITS_AMOUNT)
  self.objectAmount = v3
  self:run(connection)
end
function PlaceableObjectStorageUnloadEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.placeable)
  streamWriteUIntN(streamId, self.objectInfoIndex, PlaceableObjectStorage.NUM_BITS_OBJECT_INFO)
  streamWriteUIntN(streamId, self.objectAmount, PlaceableObjectStorage.NUM_BITS_AMOUNT)
end
function PlaceableObjectStorageUnloadEvent:run(connection)
  if self.placeable ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 and self.placeable.removeAbstractObjectsFromStorage ~= nil then
      v2:removeAbstractObjectsFromStorage(self.objectInfoIndex, self.objectAmount, connection)
    end
  end
end
