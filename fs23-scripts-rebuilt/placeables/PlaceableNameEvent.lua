-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableNameEvent = {}
local PlaceableNameEvent_mt = Class(PlaceableNameEvent, Event)
InitStaticEventClass(PlaceableNameEvent, "PlaceableNameEvent", EventIds.EVENT_PLACEABLE_NAME)
function PlaceableNameEvent.emptyNew()
  return Event.new(u0)
end
function PlaceableNameEvent.new(placeable, name)
  local v2 = PlaceableNameEvent.emptyNew()
  v2.placeable = placeable
  if name ~= nil then
  end
  v2.resetName = true
  v2.name = name or ""
  return v2
end
function PlaceableNameEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.placeable = v3
  v3 = streamReadBool(streamId)
  self.resetName = v3
  if not self.resetName then
    v3 = streamReadString(streamId)
    self.name = v3
  end
  self:run(connection)
end
function PlaceableNameEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.placeable)
  local v3 = streamWriteBool(streamId, self.resetName)
  if not v3 then
    streamWriteString(streamId, self.name)
  end
end
function PlaceableNameEvent:run(connection)
  if self.placeable ~= nil then
    log("PlaceableNameEvent:run", self.name)
    v2:setName(self.name, true)
    local v2 = connection:getIsServer()
    if not v2 then
      v2:broadcastEvent(self, false)
    end
  end
end
function PlaceableNameEvent.sendEvent(placeable, name, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  local v3 = v3:getIsServer()
  if v3 then
    local v5 = PlaceableNameEvent.new(placeable, name)
    v3:broadcastEvent(v5, false)
    return
  end
  v3 = v3:getServerConnection()
  v5 = PlaceableNameEvent.new(placeable, name)
  v3:sendEvent(...)
end
