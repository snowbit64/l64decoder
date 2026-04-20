-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ServerSettingsDialog = {}
local ServerSettingsDialog_mt = Class(ServerSettingsDialog, DialogElement)
ServerSettingsDialog.CONTROLS = {SAVE_BUTTON = "saveButton", CHANGE_BUTTON = "changeButton", SERVER_NAME = "serverNameElement", PASSWORD = "passwordElement", AUTO_ACCEPT = "autoAcceptElement", ALLOW_ONLY_FRIENDS = "allowOnlyFriendsElement", LAYOUT = "boxLayout"}
function ServerSettingsDialog.register()
  local v0 = ServerSettingsDialog.new()
  v1:loadGui("dataS/gui/dialogs/ServerSettingsDialog.xml", "ServerSettingsDialog", v0)
  ServerSettingsDialog.INSTANCE = v0
end
function ServerSettingsDialog.show()
  if ServerSettingsDialog.INSTANCE ~= nil then
    v0:showDialog("ServerSettingsDialog")
  end
end
function ServerSettingsDialog.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ServerSettingsDialog.CONTROLS)
  v2.inputDelay = 250
  v2.capacityTable = {}
  v2.capacityNumberTable = {}
  -- TODO: structure LOP_FORNPREP (pc 30, target 50)
  local v8 = tostring(g_serverMinCapacity)
  table.insert(...)
  table.insert(v2.capacityNumberTable, g_serverMinCapacity)
  -- TODO: structure LOP_FORNLOOP (pc 49, target 31)
  return v2
end
function ServerSettingsDialog.createFromExistingGui(v0, v1)
  ServerSettingsDialog.register()
  ServerSettingsDialog.show()
end
function ServerSettingsDialog:onCreateNumPlayer(element)
  self.capacityElement = element
  element:setTexts(self.capacityTable)
  local v4 = table.getn(self.capacityTable)
  element:setState(...)
end
function ServerSettingsDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  v1:setVisible(Platform.hasFriendFilter)
  local v7 = table.getn(self.capacityNumberTable)
  -- TODO: structure LOP_FORNPREP (pc 30, target 39)
  if g_currentMission.missionDynamicInfo.capacity == self.capacityNumberTable[1] then
  else
    -- TODO: structure LOP_FORNLOOP (pc 38, target 31)
  end
  v4:setState(v3)
  v4:setVisible(not g_currentMission.connectedToDedicatedServer)
  v4:setVisible(not g_currentMission.connectedToDedicatedServer)
  v4:setVisible(not g_currentMission.connectedToDedicatedServer)
  v4:setText(v1.serverName)
  v4:setText(v1.password)
  v4:setIsChecked(v1.autoAccept)
  v4:setIsChecked(v1.allowOnlyFriends)
  v4:invalidateLayout()
end
function ServerSettingsDialog:setCallback(onFinished, target, callbackArgs)
  if not onFinished then
  end
  self.onFinished = v4
  self.target = target
  self.callbackArgs = callbackArgs
end
function ServerSettingsDialog:onClickOk()
  if self.time <= self.inputDelay then
    return true
  end
  local v1 = v1:getText()
  local v2 = filterText(v1, false, true)
  if v1 ~= "" then
    -- if v1 == v2 then goto L48 end
  end
  if v1 == "" then
    local v5 = v5:getDefaultServerName()
    v3:setText(...)
  else
    v3:setText(v2)
    print("Warning: Gamename not allowed. Profanity text filter. Gamename adjusted")
  end
  return true
  local v3 = v3:getText()
  local v6 = v6:getState()
  v5 = v5:getIsChecked()
  v6 = v6:getIsChecked()
  v7:updateMissionDynamicInfo(v1, self.capacityNumberTable[v6], v3, v5, v6, g_currentMission.missionDynamicInfo.allowCrossPlay)
  local v7 = v7:getIsServer()
  if v7 then
    v7:updateMasterServerInfo()
  else
    v7 = v7:getServerConnection()
    local v9 = MissionDynamicInfoEvent.new()
    v7:sendEvent(...)
  end
  self:close()
  return false
end
function ServerSettingsDialog:onClickActivate()
  if self.currentInputElement ~= nil then
    v1:onFocusActivate()
  end
end
function ServerSettingsDialog:onEnter()
  self.isTyping = true
end
function ServerSettingsDialog:onFocus(element)
  self.currentInputElement = element
  self:showChangeButton(true)
end
function ServerSettingsDialog:onLeave()
  self.currentInputElement = nil
  self:showChangeButton(false)
end
function ServerSettingsDialog:showChangeButton(show)
  v2:setVisible(show)
  v2:invalidateLayout()
end
function ServerSettingsDialog:onEscPressed(element)
  v2:setFocus(element)
  self.isTyping = false
  self.blockTime = self.time + 250
  v2:unsetFocus(element)
  v2:setFocus(element)
end
function ServerSettingsDialog:onEnterPressed(element)
  self.blockTime = self.time + 250
  self.isTyping = false
  v2:unsetFocus(element)
  v2:setFocus(element)
end
