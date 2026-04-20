-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableObjectStorageErrorEvent = {SEND_NUM_BITS = 2, ERROR_NOT_ENOUGH_SPACE = 0, ERROR_STORAGE_IS_FULL = 1, ERROR_SLOT_LIMIT_REACHED_BALES = 2, ERROR_SLOT_LIMIT_REACHED_PALLETS = 3, SHOW_WARNING_DISTANCE = 75}
local PlaceableObjectStorageErrorEvent_mt = Class(PlaceableObjectStorageErrorEvent, Event)
InitStaticEventClass(PlaceableObjectStorageErrorEvent, "PlaceableObjectStorageErrorEvent", EventIds.EVENT_PLACEABLE_OBJECT_STORAGE_ERROR)
function PlaceableObjectStorageErrorEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableObjectStorageErrorEvent.new(placeable, errorId)
  local v2 = PlaceableObjectStorageErrorEvent.emptyNew()
  v2.placeable = placeable
  v2.errorId = errorId
  return v2
end
function PlaceableObjectStorageErrorEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.placeable = v3
  v3 = streamReadUIntN(streamId, PlaceableObjectStorageErrorEvent.SEND_NUM_BITS)
  self.errorId = v3
  self:run(connection)
end
function PlaceableObjectStorageErrorEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.placeable)
  streamWriteUIntN(streamId, self.errorId, PlaceableObjectStorageErrorEvent.SEND_NUM_BITS)
end
function PlaceableObjectStorageErrorEvent:run(connection)
  if self.placeable ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2 = v2:getFarmId()
      local v3 = v3:getOwnerFarmId()
      if v2 == v3 then
        local v2, v3, v4 = v2:getClientPosition()
        local v5, v6, v7 = getWorldTranslation(self.placeable.rootNode)
        local v8 = MathUtil.vector2Length(v2 - v5, v4 - v7)
        if v8 < PlaceableObjectStorageErrorEvent.SHOW_WARNING_DISTANCE then
          if self.errorId == PlaceableObjectStorageErrorEvent.ERROR_NOT_ENOUGH_SPACE then
            local v11 = v11:getText("warning_objectStorageNotEnoughSpace")
            v9:showBlinkingWarning(v11, 2000)
            return
          end
          if self.errorId == PlaceableObjectStorageErrorEvent.ERROR_STORAGE_IS_FULL then
            local v12 = v12:getText("warning_objectStorageIsFull")
            local v13 = v13:getName()
            v11 = string.format(...)
            v9:showBlinkingWarning(v11, 2000)
            return
          end
          if self.errorId == PlaceableObjectStorageErrorEvent.ERROR_SLOT_LIMIT_REACHED_BALES then
            v11 = v11:getText("warning_tooManyBales")
            v9:showBlinkingWarning(v11, 2000)
            return
          end
          if self.errorId == PlaceableObjectStorageErrorEvent.ERROR_SLOT_LIMIT_REACHED_PALLETS then
            v11 = v11:getText("warning_tooManyPallets")
            v9:showBlinkingWarning(v11, 2000)
          end
        end
      end
    end
  end
end
