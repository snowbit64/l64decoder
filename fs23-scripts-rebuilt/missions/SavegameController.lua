-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SavegameController = {}
local SavegameController_mt = Class(SavegameController)
if not GS_PLATFORM_PC then
  -- if not GS_PLATFORM_GGP then goto L27 end
end
SavegameController.NUM_SAVEGAMES = 20
SavegameController.SAVING_DURATION = 0.5
-- goto L51  (LOP_JUMP +24)
if GS_IS_MOBILE_VERSION then
  SavegameController.NUM_SAVEGAMES = 3
  SavegameController.SAVING_DURATION = 1
else
  SavegameController.NUM_SAVEGAMES = 10
  SavegameController.SAVING_DURATION = 3
end
SavegameController.SAVE_STATE_NONE = 0
SavegameController.SAVE_STATE_VALIDATE_LIST = 1
SavegameController.SAVE_STATE_VALIDATE_LIST_DIALOG_WAIT = 2
SavegameController.SAVE_STATE_VALIDATE_LIST_WAIT = 3
SavegameController.SAVE_STATE_OVERWRITE_DIALOG = 4
SavegameController.SAVE_STATE_OVERWRITE_DIALOG_WAIT = 5
SavegameController.SAVE_STATE_NOP_WRITE = 6
SavegameController.SAVE_STATE_WRITE = 7
SavegameController.SAVE_STATE_WRITE_WAIT = 8
SavegameController.SAVE_TASK_DENSITY_MAP = 0
SavegameController.SAVE_TASK_TERRAIN_HEIGHT_MAP = 1
SavegameController.SAVE_TASK_TERRAIN_LOD_TYPE_MAP = 2
SavegameController.SAVE_TASK_COLLISION_MAP = 3
SavegameController.SAVE_TASK_PLACEMENT_BLOCKING_MAP = 4
SavegameController.SAVE_TASK_SPLIT_SHAPES = 5
SavegameController.SAVE_TASK_BITVECTOR_MAP = 6
SavegameController.SAVE_TASK_NAVIGATION_MAP = 7
SavegameController.UPLOAD_STATE_OK = 0
SavegameController.UPLOAD_STATE_BAD_INDEX = 4
SavegameController.UPLOAD_STATE_LOAD_FAILED = 9
SavegameController.UPLOAD_STATE_PROGRESS = 11
SavegameController.INFO_INVALID_USER = "invalidUser"
SavegameController.INFO_CORRUPT_FILE = "corrupt"
SavegameController.NO_SAVEGAME = {}
function SavegameController.new(subclass_mt)
  if not subclass_mt then
  end
  local v2 = setmetatable({}, v1)
  v2.savegames = {}
  v2.isSavingGame = false
  v2.waitingForSaveGameInfo = false
  v2.savingErrorCode = Savegame.ERROR_OK
  v2.onDeleteCallback = u1.NO_CALLBACK
  v2.onDeleteCallbackTarget = u1
  v2.onSaveCompleteCallback = u1.NO_CALLBACK
  v2.onSaveCompleteCallbackTarget = u1
  v2.onUpdateCompleteCallback = u1.NO_CALLBACK
  v2.onUpdateCompleteTarget = u1
  saveSetCloudErrorCallback("onCloudError", v2)
  return v2
end
function SavegameController:loadSavegames()
  for v4, v5 in pairs(self.savegames) do
    v5:delete()
    self.savegames[v4] = nil
  end
  v2 = getUserProfileAppPath()
  v1 = Files.new(...)
  -- TODO: structure LOP_FORNPREP (pc 27, target 144)
  v5 = FSCareerMissionInfo.new("", nil, 1)
  if not Platform.isConsole then
    for v9, v10 in ipairs(v1.files) do
      if not (v10.filename == "savegame" .. v4 .. ".zip") then
        continue
      end
      if not not v10.isDirectory then
        continue
      end
      Logging.warning("Savegame %d is loaded from a ZIP file, but saving happens in a directory.", v4)
      break
    end
  end
  v5:loadDefaults()
  v6, v7, v8, v9 = saveGetInfoById(v4)
  if v6 ~= "" then
    if v7 == "" then
    end
    v5.hasConflict = true
    v5.isSoftConflict = v9
    v5.conflictedMetadata = v7
    local v11 = saveGetUploadState(v4)
    v5.uploadState = v11
    if v5.hasConflict and v5.isSoftConflict then
    end
    if v6 == SavegameController.INFO_INVALID_USER then
      v5.isInvalidUser = true
    elseif v6 == SavegameController.INFO_CORRUPT_FILE then
      v5.isCorruptFile = true
    else
      v11 = loadXMLFileFromMemory("careerSavegameXML", v6)
    end
  end
  if v10 ~= nil then
    v11 = v5:loadFromXML(v10)
    if not v11 then
      v5:loadDefaults()
    end
    delete(v10)
  end
  table.insert(self.savegames, v5)
  -- TODO: structure LOP_FORNLOOP (pc 143, target 28)
  v2:publish(MessageType.SAVEGAMES_LOADED)
end
function SavegameController.resetStorageDeviceSelection(v0)
  saveResetStorageDeviceSelection()
end
function SavegameController:onBrokenSavegameUploadProgress(v1, v2)
  if self.brokenSavegameUploadCallback ~= nil then
    self.brokenSavegameUploadCallback(self.brokenSavegameUploadTarget, v1, v2)
  end
end
function SavegameController:uploadBrokenSavegame(v1, v2, v3, v4)
  if saveUploadSavegameDebugInfo == nil then
    return false
  end
  self.brokenSavegameUploadCallback = v3
  self.brokenSavegameUploadTarget = v4
  saveUploadSavegameDebugInfo(v1, v2, "onBrokenSavegameUploadProgress", self)
  return true
end
function SavegameController:updateSavegames(callback, callbackTarget)
  if not self.waitingForSaveGameInfo then
    self.waitingForSaveGameInfo = true
    if not callback then
    end
    self.onUpdateCompleteCallback = v3
    if not callbackTarget then
    end
    self.onUpdateCompleteTarget = v3
    saveUpdateList("onSaveGameUpdateComplete", self)
  end
end
function SavegameController.cancelSavegameUpdate(v0)
  saveCancelUpdateList()
end
function SavegameController:onSaveGameUpdateComplete(errorCode)
  self.waitingForSaveGameInfo = false
  self.onUpdateCompleteCallback(self.onUpdateCompleteTarget, errorCode)
end
function SavegameController:onSaveGameUpdateCompleteCloudError(errorCode)
  self.waitingForSaveGameInfo = false
  self:loadSavegames()
  self:tryToResolveConflict(self.cloudErrorConflictedSavegame)
  self.cloudErrorConflictedSavegame = nil
end
function SavegameController:onCloudError(errorCode, savegameId)
  local v3 = tonumber(savegameId)
  if errorCode == Savegame.ERROR_CLOUD_CONFLICT then
    self:updateSavegames(self.onSaveGameUpdateCompleteCloudError, self)
    self.cloudErrorConflictedSavegame = v3
  end
end
function SavegameController:tryToResolveConflict(savegameId, startCallback, savegameScreenCallback, showKeepBoth)
  local savegame = self:getSavegame(savegameId)
  if savegame ~= SavegameController.NO_SAVEGAME and savegame.hasConflict then
    if savegame.isSoftConflict then
      self:resolveConflict(savegameId, SaveGameResolvePolicy.KEEP_REMOTE)
      savegame.hasConflict = false
      return
    end
    SavegameConflictDialog.show(startCallback, savegameScreenCallback, savegame, savegameId, showKeepBoth)
  end
end
function SavegameController:resolveConflict(savegameId, resolvePolicy)
  if resolvePolicy == SaveGameResolvePolicy.KEEP_BOTH then
    local v3 = self:getNumValidSavegames()
    if v3 == SavegameController.NUM_SAVEGAMES then
      local v4 = v4:getText("ui_savegameConflictResolveKeepBothFailed")
      InfoDialog.show(v4, self.savegameConflictResolveKeepBothFailed, self, nil, nil, nil, {savegameId = savegameId})
      return false
    end
  end
  if g_currentMission ~= nil then
    if resolvePolicy == SaveGameResolvePolicy.KEEP_BOTH then
      self:executeResolveConflict(savegameId, resolvePolicy)
      self:returnToSavegameSelection()
      return true
    end
    if resolvePolicy == SaveGameResolvePolicy.KEEP_REMOTE then
      v3 = v3:getText("ui_savegameConflictKeepRemoteYesNo")
      local v6 = v6:getText("button_continue")
      local v7 = v7:getText("button_cancel")
      YesNoDialog.show(self.onYesNoConflictKeepRemote, self, v3, nil, v6, v7, nil, nil, nil, {savegameId = savegameId})
      return true
    end
  end
  self:executeResolveConflict(savegameId, resolvePolicy)
  return true
end
function SavegameController:onYesNoConflictKeepRemote(yes, args)
  if yes then
    self:executeResolveConflict(args.savegameId, SaveGameResolvePolicy.KEEP_REMOTE)
    self:returnToSavegameSelection()
    return
  end
  self:tryToResolveConflict(args.savegameId)
end
function SavegameController:savegameConflictResolveKeepBothFailed(args)
  self:tryToResolveConflict(args.savegameId, nil, nil, false)
end
function SavegameController:executeResolveConflict(savegameId, resolvePolicy)
  self.currentSavegameToResolve = savegameId
  saveResolveConflict(savegameId, resolvePolicy, "onResolveConflictComplete", self)
end
function SavegameController:onResolveConflictComplete(errorCode, newSavegameId)
  self.currentSavegameToResolve = nil
  if errorCode == Savegame.ERROR_RESOLVE_FAILED then
    local v5 = v5:getText("ui_savegameConflictResolveFailed")
    InfoDialog.show(v5, self.returnToSavegameSelection, self)
    return
  end
  if v3 ~= nil then
    local v4 = self:getSavegame(v3)
    if v4 ~= SavegameController.NO_SAVEGAME then
      v4.hasConflict = false
    end
  end
end
function SavegameController.returnToSavegameSelection(v0)
  OnInGameMenuMenu()
  if g_gui.currentGuiName == "MainScreen" then
    v1:onCareerClick(g_mainScreen.careerButton)
  end
end
function SavegameController.locateBackups(v0, v1, v2)
  local v4 = Files.new(v1)
  for v8, v9 in pairs(v4.files) do
    if not v9.isDirectory then
      continue
    end
    local v10 = v10:startsWith(v2)
    if not v10 then
      continue
    end
    local v13 = v2:len()
    v10 = v10:sub(v13 + 1)
    local v11, v12, v13, v14, v15 = v10:match("^(%d%d%d%d)-(%d%d)-(%d%d)_(%d%d)-(%d%d)$")
    local v16 = tonumber(v11)
    v16 = tonumber(v12)
    v16 = tonumber(v13)
    v16 = tonumber(v14)
    v16 = tonumber(v15)
    if not (v16 ~= nil) then
      continue
    end
    if not (v16 ~= nil) then
      continue
    end
    if not (v16 ~= nil) then
      continue
    end
    if not (v16 ~= nil) then
      continue
    end
    if not (v16 ~= nil) then
      continue
    end
    table.insert(v3, {filename = v9.filename, toDelete = true, time = {v16, v16, v16, v16, v16}})
  end
  return v3
end
function SavegameController:assignBackupDeleteFlags(dateNow, backups)
  table.sort(backups, SavegameController.backupSortFunction)
  local v6 = math.min(4, #backups)
  -- TODO: structure LOP_FORNPREP (pc 18, target 24)
  backups[1].toDelete = false
  -- TODO: structure LOP_FORNLOOP (pc 23, target 19)
  local v3, v4, v5, v6, v7 = dateNow:match("(%d%d%d%d)-(%d%d)-(%d%d)_(%d%d)-(%d%d)")
  local v8 = tonumber(v3)
  v8 = tonumber(v4)
  v8 = tonumber(v5)
  v8 = tonumber(v6)
  for v11, v12 in pairs(self.BACKUP_DATE_OFFSETS) do
    local v13 = getDateAt("%Y-%m-%d_%H-%M", v3, v4, v5, v6, 0, 0, -v12[1] * 60 * 60, v12[2] * 60 * 60)
    local v14, v15, v16, v17, v18 = v13:match("(%d%d%d%d)-(%d%d)-(%d%d)_(%d%d)-(%d%d)")
    local v19 = tonumber(v14)
    v19 = tonumber(v15)
    v19 = tonumber(v16)
    v19 = tonumber(v17)
    v19 = tonumber(v18)
    for v24, v25 in pairs(backups) do
      local v26 = getDateDiffSeconds(v25.time[1], v25.time[2], v25.time[3], v25.time[4], v25.time[5], 0, v14, v15, v16, v17, v18, 0)
      local v27 = math.abs(v26)
      if v20 ~= nil and not (v27 < v19) then
        continue
      end
    end
    if not (v20 ~= nil) then
      continue
    end
    v20.toDelete = false
  end
end
function SavegameController.createBackup(v0, v1, v2, v3, v4)
  createFolder(v2)
  createFolder(v3)
  local v5 = Files.new(v1.savegameDirectory)
  for v9, v10 in pairs(v5.files) do
    if not not v10.isDirectory then
      continue
    end
    copyFile(v1.savegameDirectory .. "/" .. v10.filename, v3 .. "/" .. v10.filename, true)
  end
  v10 = v1:getSavegameAutoBackupLatestFilename(v1.savegameIndex)
  v6 = io.open(v2 .. "/" .. v10, "w")
  if v6 ~= nil then
    v6:write("Latest auto backup directory: " .. v4)
    v6:close()
  end
end
function SavegameController:backupSavegame(savegame)
  if savegame.isValid then
    local dateNow = getDate("%Y-%m-%d_%H-%M")
    local backupBasePath = savegame:getSavegameAutoBackupBasePath()
    local backupDirBase = savegame:getSavegameAutoBackupDirectoryBase(savegame.savegameIndex)
    local foundBackups = self:locateBackups(backupBasePath, backupDirBase)
    if 0 < #foundBackups then
      self:assignBackupDeleteFlags(dateNow, foundBackups)
      for v11, v12 in pairs(foundBackups) do
        if not v12.toDelete then
          continue
        end
        deleteFolder(backupBasePath .. "/" .. v12.filename)
      end
    end
    self:createBackup(savegame, backupBasePath, v6, v5)
  end
end
function SavegameController:addSaveTask(taskType, taskParam)
  table.insert(self.saveTasks, {["type"] = taskType, param = taskParam})
end
function SavegameController:executeSaveTask()
  if #self.saveTasks < self.currentSaveTask then
    self:onSaveTaskComplete(true)
    return
  end
  self.currentSaveTask = self.currentSaveTask + 1
  if self.saveTasks[self.currentSaveTask]["type"] == SavegameController.SAVE_TASK_DENSITY_MAP then
    savePreparedDensityMapToFile(self.saveTasks[self.currentSaveTask].param, "onSaveTaskComplete", self)
    return
  end
  if v1["type"] == SavegameController.SAVE_TASK_TERRAIN_LOD_TYPE_MAP then
    savePreparedTerrainLodTypeMap(v1.param, "onSaveTaskComplete", self)
    return
  end
  if v1["type"] == SavegameController.SAVE_TASK_TERRAIN_HEIGHT_MAP then
    savePreparedTerrainHeightMap(v1.param, "onSaveTaskComplete", self)
    return
  end
  if v1["type"] == SavegameController.SAVE_TASK_COLLISION_MAP then
    v2:savePreparedCollisionMap("onSaveTaskComplete", self)
    return
  end
  if v1["type"] == SavegameController.SAVE_TASK_PLACEMENT_BLOCKING_MAP then
    v2:savePreparedPlacementCollisionMap("onSaveTaskComplete", self)
    return
  end
  if v1["type"] == SavegameController.SAVE_TASK_SPLIT_SHAPES then
    savePreparedSplitShapesToFile("onSaveTaskComplete", self)
    return
  end
  if v1["type"] == SavegameController.SAVE_TASK_BITVECTOR_MAP then
    savePreparedBitVectorMapToFile(v1.param, "onSaveTaskComplete", self)
    return
  end
  if v1["type"] == SavegameController.SAVE_TASK_NAVIGATION_MAP then
    savePreparedVehicleNavigationCostMapToFile(v1.param, "onSaveTaskComplete", self)
  end
end
function SavegameController:onSaveTaskComplete(success)
  if #self.saveTasks < self.currentSaveTask then
    saveWriteSavegameFinish(self.savegameMetadata, self.savegameDisplayDesc, "onSaveComplete", self)
    return
  end
  self:executeSaveTask()
end
function SavegameController:onSaveStartComplete(errorCode, savegameDirectory)
  self.savingErrorCode = errorCode
  if errorCode == Savegame.ERROR_OK and savegameDirectory ~= nil then
    if self.isSavingBlocking then
      local v4 = startFrameRepeatMode()
    end
    self.saveTasks = {}
    self.currentSaveTask = 1
    self.currentSavegame:setSavegameDirectory(savegameDirectory)
    self.currentSavegame:saveToXMLFile()
    local v6 = math.floor(self.currentSavegame.playTime / 60 + 0.0001)
    local v7 = math.floor((self.currentSavegame.playTime / 60 + 0.0001 - v6) * 60)
    local v14 = v14:formatMoney(0)
    local v13 = string.format("%02d:%02d", v6, v7)
    self.savegameDisplayDesc = self.currentSavegame.map.title .. "\n" .. v14 .. "\n" .. v13
    local v11 = v11:getFruitTypes()
    for v13, v14 in pairs(...) do
      if v14.terrainDataPlaneId ~= nil then
        local v17 = getDensityMapFilename(v14.terrainDataPlaneId)
        if v9[v17] == nil then
          v9[v17] = true
          if self.isSavingBlocking then
            saveDensityMapToFile(v14.terrainDataPlaneId, v8 .. "/" .. v17)
          else
            v18:addTask(function()
              prepareSaveDensityMapToFile(u0, u1 .. "/" .. u2)
              self:addSaveTask(SavegameController.SAVE_TASK_DENSITY_MAP, u0)
            end)
          end
        end
      end
      if not (v16 ~= nil) then
        continue
      end
      v17 = getDensityMapFilename(v16)
      if not (v9[v17] == nil) then
        continue
      end
      v9[v17] = true
      if self.isSavingBlocking then
        saveDensityMapToFile(v16, v8 .. "/" .. v17)
      else
        v18:addTask(function()
          prepareSaveDensityMapToFile(u0, u1 .. "/" .. u2)
          self:addSaveTask(SavegameController.SAVE_TASK_DENSITY_MAP, u0)
        end)
      end
    end
    v10 = v10:getDensityMapData()
    if v10 ~= nil then
      v11 = getDensityMapFilename(v10)
      if v9[v11] == nil then
        v9[v11] = true
        if self.isSavingBlocking then
          saveDensityMapToFile(v10, v8 .. "/" .. v11)
        else
          v13:addTask(function()
            prepareSaveDensityMapToFile(u0, u1)
            self:addSaveTask(SavegameController.SAVE_TASK_DENSITY_MAP, u0)
          end)
        end
      end
    end
    v11 = v11:getInfoLayer()
    if v11 ~= nil and v9[v11.filename] == nil then
      v9[v11.filename] = true
      if self.isSavingBlocking then
        saveBitVectorMapToFile(v11.map, v8 .. "/" .. v11.filename)
      else
        v14:addTask(function()
          prepareSaveBitVectorMapToFile(u0.map, u1)
          self:addSaveTask(SavegameController.SAVE_TASK_BITVECTOR_MAP, u0.map)
        end)
      end
    end
    v12 = v12:getNavigationMap()
    if v12 ~= nil then
      v13 = v13:getNavigationMapFilename()
      if v9[v13] == nil then
        v9[v13] = true
        if self.isSavingBlocking then
          saveVehicleNavigationCostMapToFile(v12, v8 .. "/" .. v13)
        else
          v15:addTask(function()
            prepareSaveVehicleNavigationCostMapToFile(u0, u1)
            self:addSaveTask(SavegameController.SAVE_TASK_NAVIGATION_MAP, u0)
          end)
        end
      end
    end
    v13 = v13:getDensityMapData()
    if v13 ~= nil then
      v14 = getDensityMapFilename(v13)
      if v9[v14] == nil then
        v9[v14] = true
        if self.isSavingBlocking then
          saveDensityMapToFile(v13, v8 .. "/" .. v14)
        else
          v15:addTask(function()
            prepareSaveDensityMapToFile(u0, u1 .. "/" .. u2)
            self:addSaveTask(SavegameController.SAVE_TASK_DENSITY_MAP, u0)
          end)
        end
      end
    end
    v14 = v14:getDensityMaps()
    for v18, v19 in pairs(v14) do
      if not (v9[v19.filename] == nil) then
        continue
      end
      v9[v19.filename] = true
      if self.isSavingBlocking then
        if v19.isBitVector then
          saveBitVectorMapToFile(v19.map, v8 .. "/" .. v19.filename)
          continue
        end
        saveDensityMapToFile(v19.map, v21)
      else
        v22:addTask(function()
          if u0.isBitVector then
            prepareSaveBitVectorMapToFile(u0.map, u1)
            self:addSaveTask(SavegameController.SAVE_TASK_BITVECTOR_MAP, u0.map)
            return
          end
          prepareSaveDensityMapToFile(u0.map, u1)
          self:addSaveTask(SavegameController.SAVE_TASK_DENSITY_MAP, u0.map)
        end)
      end
    end
    v18 = table.getn(g_currentMission.dynamicFoliageLayers)
    -- TODO: structure LOP_FORNPREP (pc 366, target 402)
    v19 = getDensityMapFilename(g_currentMission.dynamicFoliageLayers[1])
    if v9[v19] == nil then
      v9[v19] = true
      if self.isSavingBlocking then
        saveDensityMapToFile(g_currentMission.dynamicFoliageLayers[1], v8 .. "/" .. v19)
      else
        v20:addTask(function()
          prepareSaveDensityMapToFile(u0, u1 .. "/" .. u2)
          self:addSaveTask(SavegameController.SAVE_TASK_DENSITY_MAP, u0)
        end)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 401, target 367)
    v15 = getDensityMapFilename(g_currentMission.terrainDetailHeightId)
    if v15 ~= nil and v9[v15] == nil then
      v9[v15] = true
      if self.isSavingBlocking then
        saveDensityMapToFile(g_currentMission.terrainDetailHeightId, v8 .. "/" .. v15)
      else
        v16:addTask(function()
          prepareSaveDensityMapToFile(g_currentMission.terrainDetailHeightId, u0 .. "/" .. u1)
          self:addSaveTask(SavegameController.SAVE_TASK_DENSITY_MAP, g_currentMission.terrainDetailHeightId)
        end)
      end
    end
    if self.isSavingBlocking then
      v16:saveState(v8)
      v16:saveState(v8)
    else
      v16:addTask(function()
        self:saveState(u0)
      end)
      v16:addTask(function()
        self:saveState(u0)
      end)
    end
    if self.isSavingBlocking then
      saveSplitShapesToFile(v8 .. "/splitShapes.gmss")
    else
      v16:addTask(function()
        prepareSaveSplitShapesToFile(u0 .. "/splitShapes.gmss")
        self:addSaveTask(SavegameController.SAVE_TASK_SPLIT_SHAPES, 0)
      end)
    end
    if not GS_IS_MOBILE_VERSION then
      if self.isSavingBlocking then
        v16:saveCollisionMap(v8)
      else
        v16:addTask(function()
          self:prepareSaveCollisionMap(u0)
          self:addSaveTask(SavegameController.SAVE_TASK_COLLISION_MAP, 0)
        end)
      end
      if self.isSavingBlocking then
        v16:savePlacementCollisionMap(v8)
      else
        v16:addTask(function()
          self:prepareSavePlacementCollisionMap(u0)
          self:addSaveTask(SavegameController.SAVE_TASK_PLACEMENT_BLOCKING_MAP, 0)
        end)
      end
      if self.isSavingBlocking then
        local v21 = getTerrainLodTypeMapFilename(g_currentMission.terrainRootNode)
        saveTerrainLodTypeMap(g_currentMission.terrainRootNode, v8 .. "/" .. v21)
      else
        v16:addTask(function()
          local v5 = getTerrainLodTypeMapFilename(g_currentMission.terrainRootNode)
          prepareSaveTerrainLodTypeMap(g_currentMission.terrainRootNode, u0 .. "/" .. v5)
          self:addSaveTask(SavegameController.SAVE_TASK_TERRAIN_LOD_TYPE_MAP, g_currentMission.terrainRootNode)
        end)
      end
      if self.isSavingBlocking then
        v21 = getTerrainLodNormalMapFilename(g_currentMission.terrainRootNode)
        saveTerrainLodNormalMap(g_currentMission.terrainRootNode, v8 .. "/" .. v21)
      else
        v16:addTask(function()
          local v5 = getTerrainLodNormalMapFilename(g_currentMission.terrainRootNode)
          saveTerrainLodNormalMap(g_currentMission.terrainRootNode, u0 .. "/" .. v5)
        end)
      end
      if self.isSavingBlocking then
        v21 = getTerrainHeightMapFilename(g_currentMission.terrainRootNode)
        saveTerrainHeightMap(g_currentMission.terrainRootNode, v8 .. "/" .. v21)
      else
        v16:addTask(function()
          local v5 = getTerrainHeightMapFilename(g_currentMission.terrainRootNode)
          prepareSaveTerrainHeightMap(g_currentMission.terrainRootNode, u0 .. "/" .. v5)
          self:addSaveTask(SavegameController.SAVE_TASK_TERRAIN_HEIGHT_MAP, g_currentMission.terrainRootNode)
        end)
      end
      if self.isSavingBlocking then
        v21 = getTerrainOccludersCacheFilename(g_currentMission.terrainRootNode)
        saveTerrainOccludersCache(g_currentMission.terrainRootNode, v8 .. "/" .. v21)
      else
        v16:addTask(function()
          local v5 = getTerrainOccludersCacheFilename(g_currentMission.terrainRootNode)
          saveTerrainOccludersCache(g_currentMission.terrainRootNode, u0 .. "/" .. v5)
        end)
      end
    end
    if self.isSavingBlocking then
      v16 = saveXMLFileToMemory(v4.xmlFile)
      self.savegameMetadata = v16
    else
      v16:addTask(function()
        local errorCode = saveXMLFileToMemory(u1.xmlFile)
        u0.savegameMetadata = errorCode
      end)
    end
    if self.isSavingBlocking and 0 < #self.saveTasks then
      print("Warning: Blocking saving has async tasks")
    end
    if self.isSavingBlocking then
      self:executeSaveTask()
    else
      v16:addTask(function()
        self:executeSaveTask()
      end)
    end
    -- if not v3 then goto L676 end
    endFrameRepeatMode()
    return
  end
  self:onSaveComplete(errorCode)
end
function SavegameController:onSaveComplete(errorCode)
  self.savingErrorCode = errorCode
  self.isSavingGame = false
  if errorCode == Savegame.ERROR_OK then
    print("Game saved successfully.")
  else
    local v5 = tostring(errorCode)
    print("Game save failed. Error: " .. v5)
  end
  leaveCpuBoostMode()
  v2:setAllowedTimePerFrame(nil)
  self.onSaveCompleteCallback(self.onSaveCompleteCallbackTarget, errorCode)
end
function SavegameController:onSavegameDeleted(errorCode)
  self.onDeleteCallback(self.onDeleteCallbackTarget, errorCode)
end
function SavegameController:deleteSavegame(index, callback, callbackTarget)
  if not callback then
  end
  self.onDeleteCallback = v4
  if not callbackTarget then
  end
  self.onDeleteCallbackTarget = v4
  saveDeleteSavegame(self.savegames[index].savegameIndex, "onSavegameDeleted", self)
end
function SavegameController:saveSavegame(savegame, blocking)
  if savegame.supportsSaving == false then
    print("Warning: Saving not supported by savegame/mission")
    self.onSaveCompleteCallback(self.onSaveCompleteCallbackTarget, Savegame.ERROR_OK)
    return
  end
  if self.isSavingGame then
    print("Warning: Saving while already saving")
    self.onSaveCompleteCallback(self.onSaveCompleteCallbackTarget, Savegame.ERROR_OPERATION_IN_PROGRESS)
    return
  end
  self.isSavingGame = true
  self.hasSavingError = false
  self.isSavingBlocking = blocking
  enterCpuBoostMode()
  v3:setAllowedTimePerFrame(33.333333333333336)
  if savegame.isValid and not GS_IS_CONSOLE_VERSION and not GS_IS_MOBILE_VERSION then
    self:backupSavegame(savegame)
  end
  savegame.isValid = true
  savegame.densityMapRevision = g_densityMapRevision
  savegame.terrainTextureRevision = g_terrainTextureRevision
  savegame.terrainLodTextureRevision = g_terrainLodTextureRevision
  savegame.splitShapesRevision = g_splitShapesRevision
  savegame.tipCollisionRevision = g_tipCollisionRevision
  savegame.placementCollisionRevision = g_placementCollisionRevision
  savegame.navigationCollisionRevision = g_navigationCollisionRevision
  savegame.resetVehicles = false
  savegame:loadFromMission(g_currentMission)
  self.currentSavegame = savegame
  saveWriteSavegameStart(savegame.savegameIndex, savegame.displayName, FSCareerMissionInfo.MaxSavegameSize, "onSaveStartComplete", self)
end
function SavegameController:getCanStartGame(index, allowConflicted)
  local savegame = self:getSavegame(index)
  if not allowConflicted and savegame ~= SavegameController.NO_SAVEGAME and savegame.hasConflict then
    return false
  end
  if savegame ~= SavegameController.NO_SAVEGAME and savegame.isValid and savegame.map == nil then
    return false
  end
  if 0 >= index then
  end
  return true
end
function SavegameController:getIsSavegameConflicted(index)
  local savegame = self:getSavegame(index)
  if savegame ~= SavegameController.NO_SAVEGAME and savegame.hasConflict then
    return true
  end
  return false
end
function SavegameController:getCanDeleteGame(index)
  if 0 < index and self.savegames[index] ~= nil then
    if not self.savegames[index].isValid and not self.savegames[index].isInvalidUser then
    end
    return v5
  end
  return false
end
function SavegameController:getSavegame(index)
  if not self.savegames[index] then
  end
  return v2
end
function SavegameController:getNumValidSavegames()
  -- TODO: structure LOP_FORNPREP (pc 7, target 23)
  local v5 = self:getSavegame(1)
  if v5 ~= SavegameController.NO_SAVEGAME and v5.isValid then
  end
  -- TODO: structure LOP_FORNLOOP (pc 22, target 8)
  return v1
end
function SavegameController:getIsSaving()
  return self.isSavingGame
end
function SavegameController:getSavingErrorCode()
  return self.savingErrorCode
end
function SavegameController:getIsWaitingForSavegameInfo()
  return self.waitingForSaveGameInfo
end
function SavegameController.getNumberOfSavegames(v0)
  return saveGetNumOfSaveGames()
end
function SavegameController.getMaxNumberOfSavegames(v0)
  return SavegameController.NUM_SAVEGAMES
end
function SavegameController.isStorageDeviceUnavailable(v0)
  local v2 = saveGetNumOfSaveGames()
  if v2 >= 0 then
  end
  return true
end
function SavegameController:backupSortFunction(v1)
  if self.time[1] ~= v1.time[1] then
    if v1.time[1] >= self.time[1] then
    end
    return true
  end
  if self.time[2] ~= v1.time[2] then
    if v1.time[2] >= self.time[2] then
    end
    return true
  end
  if self.time[3] ~= v1.time[3] then
    if v1.time[3] >= self.time[3] then
    end
    return true
  end
  if self.time[4] ~= v1.time[4] then
    if v1.time[4] >= self.time[4] then
    end
    return true
  end
  if v1.time[5] >= self.time[5] then
  end
  return true
end
SavegameController.BACKUP_DATE_OFFSETS = {{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}, {6, 6}, {12, 12}, {24, 24}, {48, 48}, {96, 96}, {192, 192}}
