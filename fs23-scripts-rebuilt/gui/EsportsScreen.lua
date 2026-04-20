-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EsportsScreen = {MAP_ID_ARENA = "arena.mapArena", MAP_ID_BALESTACKING = "baleStacking.mapBaleStacking", CONTROLS = {"onlinePresenceNameElement", "changeNameButton", "arenaBox", "baleStackingBox", "baleStackingBannerFrame", "arenaBannerFrame"}}
local EsportsScreen_mt = Class(EsportsScreen, ScreenElement)
function EsportsScreen.register()
  local esportsScreen = EsportsScreen.new()
  v1:loadGui("dataS/gui/EsportsScreen.xml", "EsportsScreen", esportsScreen)
  return esportsScreen
end
function EsportsScreen.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(EsportsScreen.CONTROLS)
  v2.returnScreenClass = MainScreen
  local v3 = EsportsServerController.new()
  v2.serverController = v3
  return v2
end
function EsportsScreen:createFromExistingGui(v1)
  local v2 = EsportsScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function EsportsScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  v1:init()
  self:updateOnlinePresenceName()
end
function EsportsScreen.onClose(v0)
  local v2 = v2:superClass()
  v2.onOpen(v0)
end
function EsportsScreen:onClickBack()
  v1:stop()
  local v2 = v2:superClass()
  v2.onClickBack(self)
end
function EsportsScreen:updateOnlinePresenceName()
  local v7 = v7:getText("ui_onlinePresenceName")
  local v6 = v6:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
  v1:setText(v7 .. ": " .. v6)
  if Platform.canChangeGamerTag then
    v1:setVisible(true)
    return
  end
  v1:setVisible(false)
end
function EsportsScreen:onClickArenaTraining()
  self:startTraining(EsportsScreen.MAP_ID_ARENA)
end
function EsportsScreen:onClickArenaStartMatch()
  self:startMatch(EsportsScreen.MAP_ID_ARENA)
end
function EsportsScreen.onClickArenaJoinRandom(v0)
end
function EsportsScreen.onClickArenaJoin(v0)
end
function EsportsScreen:onClickBaleStackingTraining()
  self:startTraining(EsportsScreen.MAP_ID_BALESTACKING)
end
function EsportsScreen:onClickBaleStackingStartMatch()
  self:startMatch(EsportsScreen.MAP_ID_BALESTACKING)
end
function EsportsScreen:onClickBaleStackingJoinRandom()
  v1:joinRandomGame()
end
function EsportsScreen.onClickBaleStackingJoin(v0)
end
function EsportsScreen:setIsArenaHighlighted(v1)
  v2:setVisible(v1)
  v2:setVisible(not v1)
end
function EsportsScreen:onHighlight(v1)
  if v1.parent ~= self.arenaBox then
  end
  self:setIsArenaHighlighted(true)
end
function EsportsScreen.onClickChangeName(v0)
  local v1 = v1:getText("ui_enterName")
  local v3 = v3:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
  local v4 = v4:getText("button_change")
  TextInputDialog.show(function(v0)
    local v1 = v1:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
    if v0 ~= v1 then
      v1:setValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME, v0, true)
      v1:updateOnlinePresenceName()
    end
  end, nil, v3, nil, nil, nil, v4, nil, v1)
end
function EsportsScreen:getMissionInfos(mapId)
  local missionInfo = FSCareerMissionInfo.new("", nil, 0)
  missionInfo:loadDefaults()
  missionInfo:setMapId(mapId)
  missionInfo.supportsSaving = false
  local v4 = self:getMods(mapId)
  return missionInfo, {mods = v4}
end
function EsportsScreen.getMods(v0, v1)
  local v2 = v2:getModNameFromMapId(v1)
  local v3 = v3:getModByName(v2)
  if g_isDevelopmentVersion then
    for v8, v9 in ipairs({"FS22_ProShot", "FS22_actionCamera", "actionCamera"}) do
      local v10 = v10:getModByName(v9)
      if not (v10 ~= nil) then
        continue
      end
      table.insert(v4, v10)
    end
  end
  return v4
end
function EsportsScreen:startTraining(v1)
  local v2, v3 = self:getMissionInfos(v1)
  v4:setMissionInfo(v2, v3)
  self:changeScreen(MPLoadingScreen)
  v4:loadSavegameAndStart()
end
function EsportsScreen:startMatch(v1)
  local v2, v3 = self:getMissionInfos(v1)
  g_startMissionInfo.createGame = true
  v4:setMissionInfo(v2, v3)
  v4:createMatch(v2, v3)
end
