-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RideableStableNotificationEvent = {}
local RideableStableNotificationEvent_mt = Class(RideableStableNotificationEvent, Event)
InitStaticEventClass(RideableStableNotificationEvent, "RideableStableNotificationEvent", EventIds.EVENT_RIDEABLE_STABLE_NOTIFICATION)
function RideableStableNotificationEvent.emptyNew()
  return Event.new(u0)
end
function RideableStableNotificationEvent.new(isInStable, name)
  local v2 = RideableStableNotificationEvent.emptyNew()
  v2.isInStable = isInStable
  v2.name = name
  return v2
end
function RideableStableNotificationEvent:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  self.isInStable = v3
  v3 = streamReadString(streamId)
  self.name = v3
  self:run(connection)
end
function RideableStableNotificationEvent:writeStream(streamId, connection)
  streamWriteBool(streamId, self.isInStable)
  streamWriteString(streamId, self.name)
end
function RideableStableNotificationEvent:run(connection)
  if self.isInStable then
    local v6 = v6:getText("ingameNotification_horseInStable")
    local v5 = string.format(v6, self.name)
    v2:addIngameNotification(...)
    return
  end
  v6 = v6:getText("ingameNotification_horseNotInStable")
  v5 = string.format(v6, self.name)
  v2:addIngameNotification(...)
end
