-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SavegameConflictDialog = {}
local SavegameConflictDialog_mt = Class(SavegameConflictDialog, MessageDialog)
SavegameConflictDialog.CONTROLS = {LOCAL_GAME_NAME = "local_gameName", LOCAL_MAP_NAME = "local_mapName", LOCAL_MONEY = "local_money", LOCAL_DIFFICULTY = "local_difficulty", LOCAL_TIME_PLAYED = "local_timePlayed", LOCAL_CREATE_DATE = "local_createDate", CLOUD_GAME_NAME = "cloud_gameName", CLOUD_MAP_NAME = "cloud_mapName", CLOUD_MONEY = "cloud_money", CLOUD_DIFFICULTY = "cloud_difficulty", CLOUD_TIME_PLAYED = "cloud_timePlayed", CLOUD_CREATE_DATE = "cloud_createDate", KEEP_BOTH = "keepBoth"}
function SavegameConflictDialog.register()
  local v0 = SavegameConflictDialog.new()
  v1:loadGui("dataS/gui/dialogs/SavegameConflictDialog.xml", "SavegameConflictDialog", v0)
  SavegameConflictDialog.INSTANCE = v0
end
function SavegameConflictDialog.show(v0, v1, v2, v3, v4)
  if SavegameConflictDialog.INSTANCE ~= nil then
    SavegameConflictDialog.INSTANCE:setFinishedCallback(v0, v1)
    SavegameConflictDialog.INSTANCE:setSavegame(true, v2)
    SavegameConflictDialog.INSTANCE:setCloudSavegame(v2.conflictedMetadata)
    SavegameConflictDialog.INSTANCE:setSavegameId(v3)
    if v4 == nil then
    else
    end
    v5:setShowKeepBoth(v8)
    v6:showDialog("SavegameConflictDialog")
  end
end
function SavegameConflictDialog.new(v0, v1)
  if v1 == nil then
  end
  local v2 = ColorPickerDialog.new(v0, v1)
  v2.savegameId = 1
  v2:registerControls(SavegameConflictDialog.CONTROLS)
  return v2
end
function SavegameConflictDialog:createFromExistingGui(v1)
  SavegameConflictDialog.register()
  SavegameConflictDialog.show(self.startCallback, self.savegameScreenCallback, self.savegame, self.savegameId, self.showKeepBoth)
end
function SavegameConflictDialog:setFinishedCallback(startCallback, savegameScreenCallback)
  self.startCallback = startCallback
  self.savegameScreenCallback = savegameScreenCallback
end
function SavegameConflictDialog:setLocalSavegame(metadata)
  local savegame = self:getSavegameFromMetadata(metadata)
  self:setSavegame(true, savegame)
end
function SavegameConflictDialog:setCloudSavegame(metadata)
  local savegame = self:getSavegameFromMetadata(metadata)
  self:setSavegame(false, savegame)
end
function SavegameConflictDialog.getSavegameFromMetadata(v0, v1)
  local v2 = FSCareerMissionInfo.new("", nil, 1)
  v2:loadDefaults()
  if v1 ~= "" then
    local v3 = loadXMLFileFromMemory("careerSavegameXML", v1)
    if v3 ~= nil then
      local v4 = v2:loadFromXML(v3)
      if not v4 then
        v2:loadDefaults()
      end
      delete(v3)
    end
  end
  return v2
end
function SavegameConflictDialog:setSavegame(isLocal, savegame)
  if savegame ~= nil then
    local v4 = math.floor(savegame.playTime / 60 + 0.0001)
    local v5 = math.floor((savegame.playTime / 60 + 0.0001 - v4) * 60)
    local v6 = string.format("%02d:%02d", v4, v5)
    local v7 = v7:getText("ui_difficulty" .. savegame.difficulty)
    if isLocal then
      v8:setText(savegame.savegameName)
      v8:setText(savegame.money)
      v8:setText(v7)
      v8:setText(v6)
      v8:setText(savegame.saveDateFormatted)
    else
      v8:setText(savegame.savegameName)
      v8:setText(savegame.money)
      v8:setText(v7)
      v8:setText(v6)
      v8:setText(savegame.saveDateFormatted)
    end
  end
  self.savegame = savegame
end
function SavegameConflictDialog:setSavegameId(savegameId)
  self.savegameId = savegameId
end
function SavegameConflictDialog:setShowKeepBoth(showKeepBoth)
  if showKeepBoth ~= nil then
  end
  v2:setDisabled(not v5)
  self.showKeepBoth = showKeepBoth
end
function SavegameConflictDialog:onClickKeepLocal()
  v1:resolveConflict(self.savegameId, SaveGameResolvePolicy.KEEP_LOCAL)
  self:close()
  if self.startCallback ~= nil then
    local v3 = unpack(self.startCallback.extraAttributes)
    self.startCallback.callback(...)
  end
end
function SavegameConflictDialog:onClickKeepRemote()
  v1:resolveConflict(self.savegameId, SaveGameResolvePolicy.KEEP_REMOTE)
  self:close()
  if self.startCallback ~= nil then
    local v3 = unpack(self.startCallback.extraAttributes)
    self.startCallback.callback(...)
  end
end
function SavegameConflictDialog:onClickKeepBoth()
  self:close()
  local v1 = v1:resolveConflict(self.savegameId, SaveGameResolvePolicy.KEEP_BOTH)
  if v1 and self.savegameScreenCallback ~= nil then
    local v3 = unpack(self.savegameScreenCallback.extraAttributes)
    self.savegameScreenCallback.callback(...)
  end
end
SavegameConflictDialog.L10N_SYMBOL = {TITLE_CREATE_FARM = "ui_createNewFarm", TITLE_EDIT_FARM_TEMPLATE = "ui_editFarm", DEFAULT_FARM_NAME = "ui_defaultFarmName", BUTTON_CREATE = "button_mp_createFarm", BUTTON_CONFIRM = "button_confirm"}
