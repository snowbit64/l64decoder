-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConnectToMasterServerScreen = {CONTROLS = {MAIN_BOX = "mainBox"}}
local ConnectToMasterServerScreen_mt = Class(ConnectToMasterServerScreen, ScreenElement)
function ConnectToMasterServerScreen.register()
  local v0 = ConnectToMasterServerScreen.new()
  v1:loadGui("dataS/gui/ConnectToMasterServerScreen.xml", "ConnectToMasterServerScreen", v0)
  return v0
end
function ConnectToMasterServerScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ConnectToMasterServerScreen.CONTROLS)
  v2.isBackAllowed = false
  return v2
end
function ConnectToMasterServerScreen:createFromExistingGui(v1)
  local v2 = self:getController()
  local v3 = ConnectToMasterServerScreen.new()
  v4:delete()
  v4:delete()
  v3:setController(v2)
  v4:loadGui(self.xmlFilename, v1, v3)
  return v3
end
function ConnectToMasterServerScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  if g_deepLinkingInfo ~= nil then
  end
  v1:setVisible(true)
  if g_deepLinkingInfo ~= nil then
    local v1 = v1:getText("ui_connectingPleaseWait")
    MessageDialog.show(nil, nil, v1, DialogElement.TYPE_LOADING)
  else
    MessageDialog.hide()
  end
  v1:setCallbackTarget(self)
end
function ConnectToMasterServerScreen:onClickCancel()
  local v2 = v2:superClass()
  v2.onClickCancel(self)
  ConnectToMasterServerScreen.goBackCleanup()
  g_startMissionInfo.canStart = false
  if g_startMissionInfo.createGame then
    self:changeScreen(CreateGameScreen)
    return
  end
  self:changeScreen(MultiplayerScreen)
end
function ConnectToMasterServerScreen:setNextScreenName(v1)
  self.nextScreenName = v1
end
function ConnectToMasterServerScreen:setPrevScreenName(v1)
  self.prevScreenName = v1
end
function ConnectToMasterServerScreen.connectToFront(v0)
  v1:connectToMasterServerFront()
end
function ConnectToMasterServerScreen.connectToBack(v0, v1)
  v2:disconnectFromMasterServer()
  v2:connectToMasterServer(v1)
end
function ConnectToMasterServerScreen:onMasterServerListStart(numMasterServers)
  self.numMasterServers = numMasterServers
end
function ConnectToMasterServerScreen.onMasterServerList(v0, v1, v2)
end
function ConnectToMasterServerScreen:onMasterServerListEnd()
  if self.numMasterServers == 1 then
    self:connectToBack(0)
  end
end
function ConnectToMasterServerScreen:onMasterServerConnectionFailed(reason)
  v2:setVisible(false)
  g_startMissionInfo.canStart = false
  ConnectToMasterServerScreen.goBackCleanup()
  ConnectionFailedDialog.showMasterServerConnectionFailedReason(reason, self.prevScreenName)
end
function ConnectToMasterServerScreen:onMasterServerConnectionReady()
  local v1 = v1:showGui(self.nextScreenName)
  v2:onMasterServerConnectionReady()
end
function ConnectToMasterServerScreen.goBackCleanup()
  v0:flushAllTasks()
  saveReadSavegameFinish("", ConnectToMasterServerScreen)
  g_deepLinkingInfo = nil
  v0:disconnectFromMasterServer()
  v0:unloadGameRelatedData()
  if g_client ~= nil then
    v0:delete()
    g_client = nil
  end
  if g_server ~= nil then
    v0:delete()
    g_server = nil
    return
  end
  v0:shutdownAll()
end
