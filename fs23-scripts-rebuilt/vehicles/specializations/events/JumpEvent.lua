-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

JumpEvent = {}
local JumpEvent_mt = Class(JumpEvent, Event)
InitStaticEventClass(JumpEvent, "JumpEvent", EventIds.EVENT_JUMP)
function JumpEvent.emptyNew()
  return Event.new(u0)
end
function JumpEvent.new(object)
  local v1 = JumpEvent.emptyNew()
  v1.object = object
  return v1
end
function JumpEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.object = v3
    self:run(connection)
  end
end
function JumpEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.object)
  end
end
function JumpEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:jump(true)
    end
  end
end
