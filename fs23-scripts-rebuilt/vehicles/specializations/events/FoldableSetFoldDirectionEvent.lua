-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FoldableSetFoldDirectionEvent = {}
local FoldableSetFoldDirectionEvent_mt = Class(FoldableSetFoldDirectionEvent, Event)
InitStaticEventClass(FoldableSetFoldDirectionEvent, "FoldableSetFoldDirectionEvent", EventIds.EVENT_FOLDABLE_SET_FOLD_DIRECTION)
function FoldableSetFoldDirectionEvent.emptyNew()
  return Event.new(u0)
end
function FoldableSetFoldDirectionEvent.new(object, direction, moveToMiddle)
  local v3 = FoldableSetFoldDirectionEvent.emptyNew()
  v3.object = object
  local v4 = MathUtil.sign(direction)
  v3.direction = v4
  v3.moveToMiddle = moveToMiddle
  return v3
end
function FoldableSetFoldDirectionEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  local v4 = streamReadUIntN(streamId, 2)
  self.direction = v4 - 1
  v3 = streamReadBool(streamId)
  self.moveToMiddle = v3
  self:run(connection)
end
function FoldableSetFoldDirectionEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self.direction + 1, 2)
  streamWriteBool(streamId, self.moveToMiddle)
end
function FoldableSetFoldDirectionEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setFoldState(self.direction, self.moveToMiddle, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = FoldableSetFoldDirectionEvent.new(self.object, self.direction, self.moveToMiddle)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
