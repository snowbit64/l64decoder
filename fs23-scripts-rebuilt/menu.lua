-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

function OnLoadingScreen(v0, v1, v2)
  local v3 = Utils.getModNameAndBaseDirectory(self.scriptFilename)
  source(self.scriptFilename, v3)
  if v3 ~= nil then
    local v4 = ClassUtil.getClassModName(self.scriptClass)
    if v4 ~= v3 then
      print("Error: mission class " .. self.scriptClass .. " does not match expected mod name " .. v3)
      OnInGameMenuMenu()
      return
    end
  end
  v4 = ClassUtil.getClassObject(self.scriptClass)
  if v4 ~= nil then
    v5:addTask(function()
      if g_server == nil and g_client == nil then
        return
      end
      local self = u0.new(u1.baseDirectory, nil)
      g_currentMission = self
      self:setCallbackTarget(g_currentMission)
    end)
    v5:addTask(function()
      if g_server == nil and g_client == nil then
        return
      end
      self:initialize()
      self:setLoadingScreen(u0)
    end)
    v5:addTask(function()
      if g_server == nil and g_client == nil then
        return
      end
      self:setMissionInfo(u0, u1)
    end)
  else
    print("Error: mission class " .. self.scriptClass .. " could not be found.")
    OnInGameMenuMenu()
    return
  end
  v5:addTask(function()
    if g_server == nil and g_client == nil then
      return
    end
    if not g_currentMission.cancelLoading then
      if u0.isMultiplayer then
        if u0.isClient then
          self:setNetworkListener(g_currentMission)
          self:start(u0.serverAddress, u0.serverPort, u0.relayHeader)
          self:disconnectFromMasterServer()
          -- goto L83  (LOP_JUMP +34)
        end
        self:setNetworkListener(g_currentMission)
        self:setNetworkListener(g_currentMission)
      else
        self:setNetworkListener(g_currentMission)
        self:setNetworkListener(g_currentMission)
        self:startLocal()
      end
      if g_server ~= nil then
        self:init()
      end
      if u0.isMultiplayer then
        -- if u0.isClient then goto L105 end
      end
      self:startLocal()
    end
  end)
end
function OnInGameMenuMenu(goToSignIn, wasNetworkError)
  saveReadSavegameFinish("", nil)
  startFrameRepeatMode()
  setPresenceMode(PresenceModes.PRESENCE_IDLE)
  if g_currentMission ~= nil then
    g_currentMission.cancelLoading = true
  end
  cancelAllStreamedI3DFiles()
  cancelAllStreamedI3DFiles()
  v2:flushAllTasks()
  v2:flushAllTasks()
  setStreamLowPriorityI3DFiles(true)
  if g_currentMission ~= nil and g_currentMission.missionDynamicInfo ~= nil and g_currentMission.missionDynamicInfo.isMultiplayer then
    netSetIsEventProcessingEnabled(true)
  end
  v2:disconnectFromMasterServer()
  v2:setCallbackTarget(nil)
  if g_client ~= nil then
    v2:stop()
  end
  if g_server ~= nil then
    v2:stop()
  end
  if g_currentMission ~= nil then
    if g_currentMission.missionInfo ~= nil then
      local v4 = v4:isa(FSCareerMissionInfo)
    end
  else
  end
  if g_currentMission ~= nil then
    v4:showGui("")
    v4:delete()
  end
  g_currentMission = nil
  g_server = nil
  g_client = nil
  v4:shutdownAll()
  v4:clearEntireSharedI3DFileCache(g_isDevelopmentVersion)
  v4:unloadGameRelatedData()
  if g_createGameScreen ~= nil then
    v4:removePortMapping()
  end
  v4:setGameState(GameState.MENU_MAIN)
  forceEndFrameRepeatMode()
  if wasNetworkError then
    -- if not GS_PLATFORM_PLAYSTATION then goto L188 end
    ConnectionFailedDialog.showMasterServerConnectionFailedReason(MasterServerConnection.FAILED_CONNECTION_LOST, "MainScreen")
  else
    if v2 then
      if goToSignIn then
      end
      v5:setStartScreen(v4)
      doRestart(false, "")
      return
    end
    if not v3 then
      v4:saveToXMLFile(g_savegameXML)
      if goToSignIn then
        v4:showGui("GamepadSigninScreen")
        -- goto L235  (LOP_JUMP +13)
      end
      v4:showGui("MainScreen")
    else
      v4:showGui("MainScreen")
    end
  end
  v4:setShowMouseCursor(true)
  simulatePhysics(false)
end
