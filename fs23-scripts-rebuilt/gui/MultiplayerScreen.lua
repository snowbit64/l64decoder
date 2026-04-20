-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MultiplayerScreen = {CONTROLS = {"onlinePresenceNameElement", "changeNameButton", LIST = "list", NAT_WARNING = "natWarning"}}
local MultiplayerScreen_mt = Class(MultiplayerScreen, ScreenElement)
function MultiplayerScreen.register()
  local v0 = MultiplayerScreen.new()
  v1:loadGui("dataS/gui/MultiplayerScreen.xml", "MultiplayerScreen", v0)
  return v0
end
function MultiplayerScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(MultiplayerScreen.CONTROLS)
  v2.returnScreenClass = MainScreen
  return v2
end
function MultiplayerScreen:createFromExistingGui(v1)
  local v2 = MultiplayerScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function MultiplayerScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self:initJoinGameScreen()
  g_startMissionInfo.createGame = false
  g_startMissionInfo.isMultiplayer = true
  if g_startMissionInfo.canStart then
    g_startMissionInfo.canStart = false
    self:changeScreen(ConnectToMasterServerScreen)
    v1:connectToFront()
  end
  self:updateOnlinePresenceName()
  v1:reloadData()
end
function MultiplayerScreen:updateOnlinePresenceName()
  local v7 = v7:getText("ui_onlinePresenceName")
  local v6 = v6:getValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME)
  v1:setText(v7 .. ": " .. v6)
  if Platform.canChangeGamerTag then
    v1:setVisible(true)
    return
  end
  v1:setVisible(false)
end
function MultiplayerScreen.initJoinGameScreen(v0)
  local v3 = v3:getValue("defaultServerPort")
  v1:startupWithWorkingPort(...)
  v1:setNextScreenName("JoinGameScreen")
  v1:setPrevScreenName("MultiplayerScreen")
end
function MultiplayerScreen:onContinue()
  if self.list.selectedIndex == 1 then
    g_startMissionInfo.canStart = false
    self:changeScreen(ConnectToMasterServerScreen)
    v2:connectToFront()
    return
  end
  if v1 == 2 then
    g_startMissionInfo.canStart = false
    g_createGameScreen.usePendingInvites = false
    self:changeScreen(CareerScreen, MainScreen)
    return
  end
  if v1 == 3 then
    if not GS_IS_STEAM_VERSION then
      openWebFile("fs22-rent-a-dedicated-server.php", "")
      return
    end
    openWebFile("fs22-rent-a-dedicated-server-from-steam.php", "")
  end
end
function MultiplayerScreen:onClickCreateGame()
  v1:setSelectedIndex(2)
  self:onContinue()
end
function MultiplayerScreen:onClickJoinGame()
  v1:setSelectedIndex(1)
  self:onContinue()
end
function MultiplayerScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  Platform.verifyMultiplayerAvailabilityInMenu()
  local v5 = getNATType()
  if v5 ~= NATType.NAT_STRICT then
  end
  v2:setVisible(true)
end
function MultiplayerScreen.onClickChangeName(v0)
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
function MultiplayerScreen.onClickOpenBlocklist(v0)
  v1:showUnblockDialog({useLocal = true})
end
function MultiplayerScreen.getNumberOfItemsInSection(v0, v1, v2)
  if Platform.showRentServerWebButton then
    return 3
  end
  return 2
end
function MultiplayerScreen.populateCellForItemInSection(v0, v1, v2, v3, v4)
  if v3 == 1 then
    local v5 = v4:getAttribute("title")
    v5:setLocaKey("button_joinGame")
    v5 = v4:getAttribute("icon")
    v5:applyProfile("multiplayerButtonIconJoin")
    return
  end
  if v3 == 2 then
    v5 = v4:getAttribute("title")
    v5:setLocaKey("button_createGame")
    v5 = v4:getAttribute("icon")
    v5:applyProfile("multiplayerButtonIconCreate")
    return
  end
  if v3 == 3 then
    v5 = v4:getAttribute("title")
    v5:setLocaKey("button_rentAServer")
    v5 = v4:getAttribute("icon")
    v5:applyProfile("multiplayerButtonIconRent")
  end
end
