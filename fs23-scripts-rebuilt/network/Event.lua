-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Event = {}
local Event_mt = Class(Event)
function Event.new(customMt, channel)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.networkChannel = channel
  v2.queueCount = 0
  return v2
end
function Event.delete(v0)
end
function Event.readStream(v0, v1, v2)
end
function Event.writeStream(v0, v1, v2)
end
function Event.run(v0, v1)
end
