-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MixerWagonBaleNotAcceptedEvent = {}
local MixerWagonBaleNotAcceptedEvent_mt = Class(MixerWagonBaleNotAcceptedEvent, Event)
InitStaticEventClass(MixerWagonBaleNotAcceptedEvent, "MixerWagonBaleNotAcceptedEvent", EventIds.EVENT_MIXERWAGON_BALE_NOT_ACCEPTED)
function MixerWagonBaleNotAcceptedEvent.emptyNew()
  return Event.new(u0)
end
function MixerWagonBaleNotAcceptedEvent.new()
  return MixerWagonBaleNotAcceptedEvent.emptyNew()
end
function MixerWagonBaleNotAcceptedEvent:readStream(streamId, connection)
  self:run(connection)
end
function MixerWagonBaleNotAcceptedEvent.writeStream(v0, v1, v2)
end
function MixerWagonBaleNotAcceptedEvent.run(v0, v1)
  local v5 = v5:getText("warning_baleNotSupported")
  v2:addIngameNotification(...)
end
