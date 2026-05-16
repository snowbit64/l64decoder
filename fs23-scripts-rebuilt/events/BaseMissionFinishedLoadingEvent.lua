-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BaseMissionFinishedLoadingEvent = {}
local BaseMissionFinishedLoadingEvent_mt = Class(BaseMissionFinishedLoadingEvent, Event)
InitStaticEventClass(BaseMissionFinishedLoadingEvent, "BaseMissionFinishedLoadingEvent", EventIds.EVENT_FINISHED_LOADING)
function BaseMissionFinishedLoadingEvent.emptyNew()
  return Event.new(u0)
end
function BaseMissionFinishedLoadingEvent.new(posX, posY, posZ, viewDistanceCoeff)
  local v4 = BaseMissionFinishedLoadingEvent.emptyNew()
  v4.posX = posX
  v4.posY = posY
  v4.posZ = posZ
  v4.viewDistanceCoeff = viewDistanceCoeff
  return v4
end
function BaseMissionFinishedLoadingEvent:readStream(streamId, connection)
  local v3 = streamReadFloat32(streamId)
  self.posX = v3
  v3 = streamReadFloat32(streamId)
  self.posY = v3
  v3 = streamReadFloat32(streamId)
  self.posZ = v3
  v3 = streamReadFloat32(streamId)
  self.viewDistanceCoeff = v3
  self:run(connection)
end
function BaseMissionFinishedLoadingEvent:writeStream(streamId, connection)
  streamWriteFloat32(streamId, self.posX)
  streamWriteFloat32(streamId, self.posY)
  streamWriteFloat32(streamId, self.posZ)
  streamWriteFloat32(streamId, self.viewDistanceCoeff)
end
function BaseMissionFinishedLoadingEvent:run(connection)
  if g_currentMission ~= nil then
    v2:onConnectionFinishedLoading(connection, self.posX, self.posY, self.posZ, self.viewDistanceCoeff)
  end
end
