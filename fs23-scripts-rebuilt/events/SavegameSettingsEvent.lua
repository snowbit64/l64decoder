-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SavegameSettingsEvent = {}
local SavegameSettingsEvent_mt = Class(SavegameSettingsEvent, Event)
InitStaticEventClass(SavegameSettingsEvent, "SavegameSettingsEvent", EventIds.EVENT_SAVEGAME_SETTTINGS)
function SavegameSettingsEvent.emptyNew()
  return Event.new(u0, NetworkNode.CHANNEL_SECONDARY)
end
function SavegameSettingsEvent.new()
  return SavegameSettingsEvent.emptyNew()
end
function SavegameSettingsEvent.readStream(v0, v1, v2)
  local v3 = streamReadFloat32(v1)
  local v4 = streamReadUIntN(v1, 3)
  local v5 = streamReadBool(v1)
  local v6 = streamReadUIntN(v1, 3)
  local v7 = streamReadBool(v1)
  local v8 = streamReadBool(v1)
  local v9 = streamReadBool(v1)
  local v10 = streamReadBool(v1)
  local v11 = streamReadBool(v1)
  local v12 = streamReadBool(v1)
  local v13 = streamReadBool(v1)
  local v14 = streamReadBool(v1)
  local v15 = streamReadBool(v1)
  local v16 = streamReadString(v1)
  local v17 = streamReadUIntN(v1, 3)
  local v18 = streamReadInt32(v1)
  local v19 = streamReadUIntN(v1, 4)
  if v19 == 0 then
  end
  local v20 = streamReadUIntN(v1, 5)
  local v21 = streamReadUIntN(v1, 2)
  local v22 = streamReadBool(v1)
  local v23 = streamReadBool(v1)
  local v24 = streamReadBool(v1)
  local v25 = streamReadUIntN(v1, 4)
  local v26 = streamReadUIntN(v1, 4)
  local v27 = v2:getIsServer()
  if not v27 then
    v27 = v27:getIsConnectionMasterUser(v2)
    -- if not v27 then goto L298 end
  end
  v27:setTimeScale(v3, true)
  v27:setEconomicDifficulty(v4, true)
  v27:setSnowEnabled(v5, true)
  v27:setGrowthMode(v6, true)
  v27:setFruitDestructionEnabled(v7, true)
  v27:setPlowingRequiredEnabled(v8, true)
  v27:setStonesEnabled(v9, true)
  v27:setLimeRequired(v10, true)
  v27:setWeedsEnabled(v11, true)
  v27:setSavegameName(v16, true)
  v27:setDirtInterval(v17, true)
  v27:setAutoSaveInterval(v18, true)
  v27:setFixedSeasonalVisuals(v19, true)
  v27:setPlannedDaysPerPeriod(v20, true)
  v27:setAutomaticMotorStartEnabled(v12, true)
  v27:setTrafficEnabled(v13, true)
  v27:setHelperBuyFuel(v22, true)
  v27:setHelperBuySeeds(v23, true)
  v27:setHelperBuyFertilizer(v24, true)
  v27:setHelperSlurrySource(v25, true)
  v27:setHelperManureSource(v26, true)
  v27:setFuelUsage(v21, true)
  v27:setStopAndGoBraking(v14, true)
  v27:setTrailerFillLimit(v15, true)
  v27 = v2:getIsServer()
  if not v27 then
    v27:broadcastEvent(v0, false, v2)
  end
end
function SavegameSettingsEvent.writeStream(v0, v1, v2)
  streamWriteFloat32(v1, g_currentMission.missionInfo.timeScale)
  streamWriteUIntN(v1, g_currentMission.missionInfo.economicDifficulty, 3)
  streamWriteBool(v1, g_currentMission.missionInfo.isSnowEnabled)
  streamWriteUIntN(v1, g_currentMission.missionInfo.growthMode, 3)
  streamWriteBool(v1, g_currentMission.missionInfo.fruitDestruction)
  streamWriteBool(v1, g_currentMission.missionInfo.plowingRequiredEnabled)
  streamWriteBool(v1, g_currentMission.missionInfo.stonesEnabled)
  streamWriteBool(v1, g_currentMission.missionInfo.limeRequired)
  streamWriteBool(v1, g_currentMission.missionInfo.weedsEnabled)
  streamWriteBool(v1, g_currentMission.missionInfo.automaticMotorStartEnabled)
  streamWriteBool(v1, g_currentMission.missionInfo.trafficEnabled)
  streamWriteBool(v1, g_currentMission.missionInfo.stopAndGoBraking)
  streamWriteBool(v1, g_currentMission.missionInfo.trailerFillLimit)
  streamWriteString(v1, g_currentMission.missionInfo.savegameName)
  streamWriteUIntN(v1, g_currentMission.missionInfo.dirtInterval, 3)
  local v5 = v5:getInterval()
  streamWriteInt32(...)
  streamWriteUIntN(v1, g_currentMission.missionInfo.fixedSeasonalVisuals or 0, 4)
  streamWriteUIntN(v1, g_currentMission.missionInfo.plannedDaysPerPeriod, 5)
  streamWriteUIntN(v1, g_currentMission.missionInfo.fuelUsage, 2)
  streamWriteBool(v1, g_currentMission.missionInfo.helperBuyFuel)
  streamWriteBool(v1, g_currentMission.missionInfo.helperBuySeeds)
  streamWriteBool(v1, g_currentMission.missionInfo.helperBuyFertilizer)
  streamWriteUIntN(v1, g_currentMission.missionInfo.helperSlurrySource, 4)
  streamWriteUIntN(v1, g_currentMission.missionInfo.helperManureSource, 4)
end
function SavegameSettingsEvent.run(v0, v1)
  print("Error: SavegameSettingsEvent is not allowed to be executed on a local client")
end
function SavegameSettingsEvent.sendEvent(noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R0 aux=0x80000000 -> L35
  end
  local v1 = v1:getIsServer()
  if v1 then
    local v3 = SavegameSettingsEvent.new()
    v1:broadcastEvent(v3, false)
    return
  end
  v1 = v1:getServerConnection()
  v3 = SavegameSettingsEvent.new()
  v1:sendEvent(...)
end
