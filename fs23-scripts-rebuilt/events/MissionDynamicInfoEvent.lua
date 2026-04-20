-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MissionDynamicInfoEvent = {}
local MissionDynamicInfoEvent_mt = Class(MissionDynamicInfoEvent, Event)
InitStaticEventClass(MissionDynamicInfoEvent, "MissionDynamicInfoEvent", EventIds.EVENT_MISSION_INFO_DYNAMIC)
MissionDynamicInfoEvent.sendCapNumBits = 4
function MissionDynamicInfoEvent.emptyNew()
  return Event.new(u0)
end
function MissionDynamicInfoEvent.new()
  return MissionDynamicInfoEvent.emptyNew()
end
function MissionDynamicInfoEvent.readStream(v0, v1, v2)
  local v3 = streamReadString(v1)
  local v4 = streamReadBool(v1)
  local v5 = streamReadString(v1)
  local v7 = streamReadUIntN(v1, MissionDynamicInfoEvent.sendCapNumBits)
  if GS_IS_CONSOLE_VERSION then
    local v8 = streamReadBool(v1)
  end
  v8 = streamReadBool(v1)
  v9:updateMissionDynamicInfo(v3, v6, v5, v4, v7, v8)
  local v9 = v2:getIsServer()
  if not v9 then
    v9:updateMasterServerInfo(v2)
  end
end
function MissionDynamicInfoEvent.writeStream(v0, v1, v2)
  streamWriteString(v1, g_currentMission.missionDynamicInfo.serverName)
  streamWriteBool(v1, g_currentMission.missionDynamicInfo.autoAccept)
  streamWriteString(v1, g_currentMission.missionDynamicInfo.password)
  streamWriteUIntN(v1, g_currentMission.missionDynamicInfo.capacity - 1, MissionDynamicInfoEvent.sendCapNumBits)
  if GS_IS_CONSOLE_VERSION then
    streamWriteBool(v1, g_currentMission.missionDynamicInfo.allowOnlyFriends)
  end
  streamWriteBool(v1, g_currentMission.missionDynamicInfo.allowCrossPlay)
end
function MissionDynamicInfoEvent.run(v0, v1)
end
