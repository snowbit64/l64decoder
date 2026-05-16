-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetSplitShapesEvent = {}
local SetSplitShapesEvent_mt = Class(SetSplitShapesEvent, Event)
InitStaticEventClass(SetSplitShapesEvent, "SetSplitShapesEvent", EventIds.EVENT_SET_SPLIT_SHAPES)
SetSplitShapesEvent.PartSizeBits = 160000
function SetSplitShapesEvent.emptyNew()
  local v0 = Event.new(u0)
  local v1 = createStream()
  v0.streamId = v1
  return v0
end
function SetSplitShapesEvent.newAck(ackIndex)
  local v1 = SetSplitShapesEvent.emptyNew()
  v1.ackIndex = ackIndex
  return v1
end
function SetSplitShapesEvent.newReceiving(numParts)
  local v1 = SetSplitShapesEvent.emptyNew()
  v1.numParts = numParts
  return v1
end
function SetSplitShapesEvent.new()
  local v0 = SetSplitShapesEvent.emptyNew()
  local numFileIds = table.getn(g_currentMission.mapsSplitShapeFileIds)
  streamWriteInt32(v0.streamId, numFileIds)
  -- TODO: structure LOP_FORNPREP (pc 20, target 29)
  streamWriteInt32(v0.streamId, g_currentMission.mapsSplitShapeFileIds[1])
  -- TODO: structure LOP_FORNLOOP (pc 28, target 21)
  v3:writeToClientStream(v0.streamId)
  writeSplitShapesToStream(v0.streamId)
  v0.currentPartIndex = 0
  local v5 = streamGetWriteOffset(v0.streamId)
  local v3 = math.ceil(v5 / SetSplitShapesEvent.PartSizeBits)
  v0.numParts = v3
  v0.percentage = 0
  return v0
end
function SetSplitShapesEvent:delete()
  if self.streamId ~= 0 then
    delete(self.streamId)
    self.streamId = 0
  end
end
function SetSplitShapesEvent.readStream(v0, v1, v2)
  local v3 = v2:getIsServer()
  if v3 then
    v3 = streamReadInt32(v1)
    if v3 == 0 then
      local v4 = streamReadInt32(v1)
      local v6 = SetSplitShapesEvent.newReceiving(v4)
      g_currentMission.receivingSplitShapesEvent = v6
    end
    streamWriteStream(g_currentMission.receivingSplitShapesEvent.streamId, v1, SetSplitShapesEvent.PartSizeBits, true)
    v5:onSplitShapesProgress(v2, (v3 + 1) / g_currentMission.receivingSplitShapesEvent.numParts)
    local v7 = SetSplitShapesEvent.newAck(v3)
    v2:sendEvent(v7, true)
    -- if v3 ~= g_currentMission.receivingSplitShapesEvent.numParts - 1 then goto L117 end
    g_currentMission.receivingSplitShapesEvent:processReadData()
    v5:delete()
    g_currentMission.receivingSplitShapesEvent = nil
    return
  end
  v3 = streamReadInt32(v1)
  if g_currentMission.playersSynchronizing[v2] ~= nil and g_currentMission.playersSynchronizing[v2].splitShapesEvent ~= nil then
    g_currentMission.playersSynchronizing[v2].splitShapesEvent.percentage = (v3 + 1) / g_currentMission.playersSynchronizing[v2].splitShapesEvent.numParts
    if v3 + 1 < g_currentMission.playersSynchronizing[v2].splitShapesEvent.numParts then
      v2:sendEvent(g_currentMission.playersSynchronizing[v2].splitShapesEvent, false)
    end
    v6:onSplitShapesProgress(v2, (v3 + 1) / v5.numParts)
  end
end
function SetSplitShapesEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    if g_currentMission.playersSynchronizing[connection].splitShapesEvent ~= self then
    end
    assert(true)
    self.currentPartIndex = self.currentPartIndex + 1
    streamWriteInt32(streamId, self.currentPartIndex)
    if self.currentPartIndex == 0 then
      streamWriteInt32(streamId, self.numParts)
    end
    local readOffset = streamGetReadOffset(self.streamId)
    streamSetReadOffset(self.streamId, v3 * SetSplitShapesEvent.PartSizeBits)
    streamWriteStream(streamId, self.streamId, SetSplitShapesEvent.PartSizeBits, true)
    streamSetReadOffset(self.streamId, readOffset)
    return
  end
  streamWriteInt32(streamId, self.ackIndex)
end
function SetSplitShapesEvent:processReadData()
  local v2 = streamReadInt32(self.streamId)
  -- TODO: structure LOP_FORNPREP (pc 9, target 22)
  local v6 = streamReadInt32(self.streamId)
  setSplitShapesFileIdMapping(g_currentMission.mapsSplitShapeFileIds[1], v6)
  -- TODO: structure LOP_FORNLOOP (pc 21, target 10)
  v3:readFromServerStream(self.streamId)
  readSplitShapesFromStream(self.streamId)
end
function SetSplitShapesEvent.run(v0, v1)
end
