-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableObjectStorageStoreEvent = {}
local v0 = Class(PlaceableObjectStorageStoreEvent, Event)
InitStaticEventClass(PlaceableObjectStorageStoreEvent, "PlaceableObjectStorageStoreEvent", EventIds.EVENT_PLACEABLE_OBJECT_STORAGE_STORE)
function PlaceableObjectStorageStoreEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableObjectStorageStoreEvent.new(v0, v1, v2)
  local v3 = PlaceableObjectStorageStoreEvent.emptyNew()
  v3.placeable = v0
  return v3
end
function PlaceableObjectStorageStoreEvent:readStream(v1, v2)
  local v3 = NetworkUtil.readNodeObject(v1)
  self.placeable = v3
  self:run(v2)
end
function PlaceableObjectStorageStoreEvent:writeStream(v1, v2)
  NetworkUtil.writeNodeObject(v1, self.placeable)
end
function PlaceableObjectStorageStoreEvent:run(v1)
  if self.placeable ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 and self.placeable.storePendingManualObjects ~= nil then
      v2:storePendingManualObjects()
    end
  end
end
