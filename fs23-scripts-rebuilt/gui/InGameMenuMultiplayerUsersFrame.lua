-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuMultiplayerUsersFrame = {}
local InGameMenuMultiplayerUsersFrame_mt = Class(InGameMenuMultiplayerUsersFrame, TabbedMenuFrameElement)
InGameMenuMultiplayerUsersFrame.CONTROLS = {"currentBalanceLabel", "currentBalanceText", "container", "actionsBox", "permissionsBox", "userList", "permissionRow", "transferButton", "removeButton", "promoteButton", "contractorButton", "kickButton", "blockButton", "blockFromServerButton", "reportButton", "muteButton", "showProfileButton", "peerVolumeOption", "buyVehiclePermissionCheckbox", "sellVehiclePermissionCheckbox", "resetVehiclePermissionCheckbox", "buyPlaceablePermissionCheckbox", "sellPlaceablePermissionCheckbox", "hireAssistantPermissionCheckbox", "manageMissionsPermissionCheckbox", "manageProductionsPermissionCheckbox", "tradeAnimalsPermissionCheckbox", "cutTreesPermissionCheckbox", "createFieldsPermissionCheckbox", "landscapingPermissionCheckbox"}
InGameMenuMultiplayerUsersFrame.ELEMENT_NAME = {ROW_PLAYER_NAME = "playerName", ROW_FARM_NAME = "farmName", ROW_FARM_COLOR = "farmColor"}
InGameMenuMultiplayerUsersFrame.TRANSFER_AMOUNT = {SMALL = 5000, MEDIUM = 50000, LARGE = 250000}
function InGameMenuMultiplayerUsersFrame.register()
  local v0 = InGameMenuMultiplayerUsersFrame.new()
  v1:loadGui("dataS/gui/InGameMenuMultiplayerUsersFrame.xml", "StatisticsFrame", v0, true)
end
function InGameMenuMultiplayerUsersFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuMultiplayerUsersFrame.CONTROLS)
  local v3 = User.new()
  v2.currentUser = v3
  v2.playerFarm = nil
  v2.selectedUserId = nil
  v2.selectedUserFarm = nil
  v2.isNavigatingUsers = false
  v2.users = {}
  v2.listRowUser = {}
  v2.permissionCheckboxes = {}
  v2.checkboxPermissions = {}
  v2.hasCustomMenuButtons = true
  v2.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  v2.menuButtonInfo = {v2.backButtonInfo}
  v2.adminButtonInfo = {}
  v2.inviteFriendsInfo = {}
  v2.timeSinceLastRefresh = 0
  return v2
end
function InGameMenuMultiplayerUsersFrame:createFromExistingGui(v1)
  local v2 = InGameMenuMultiplayerUsersFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuMultiplayerUsersFrame:initialize()
  self:setupUserListFocusContext()
  local v2 = v2:getText("button_blocklist")
  self.unblockButtonInfo = {inputAction = InputAction.MENU_EXTRA_1, text = v2, callback = function()
    self:onButtonUnBan()
  end}
  v2 = v2:getText("button_blocklist")
  self.unblockRemoteButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = function()
    self:onButtonUnBanRemote()
  end}
  v2 = v2:getText("button_adminLogin")
  self.adminButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
    self:onButtonAdminLogin()
  end}
  v2 = v2:getText("ui_inviteScreen")
  self.inviteFriendsInfo = {inputAction = InputAction.MENU_EXTRA_2, text = v2, callback = function()
    self:onButtonInviteFriends()
  end}
  {}[Farm.PERMISSION.BUY_VEHICLE] = self.buyVehiclePermissionCheckbox
  {}[Farm.PERMISSION.SELL_VEHICLE] = self.sellVehiclePermissionCheckbox
  {}[Farm.PERMISSION.RESET_VEHICLE] = self.resetVehiclePermissionCheckbox
  {}[Farm.PERMISSION.BUY_PLACEABLE] = self.buyPlaceablePermissionCheckbox
  {}[Farm.PERMISSION.SELL_PLACEABLE] = self.sellPlaceablePermissionCheckbox
  {}[Farm.PERMISSION.HIRE_ASSISTANT] = self.hireAssistantPermissionCheckbox
  {}[Farm.PERMISSION.MANAGE_CONTRACTS] = self.manageMissionsPermissionCheckbox
  {}[Farm.PERMISSION.MANAGE_PRODUCTIONS] = self.manageProductionsPermissionCheckbox
  {}[Farm.PERMISSION.TRADE_ANIMALS] = self.tradeAnimalsPermissionCheckbox
  {}[Farm.PERMISSION.CUT_TREES] = self.cutTreesPermissionCheckbox
  {}[Farm.PERMISSION.CREATE_FIELDS] = self.createFieldsPermissionCheckbox
  {}[Farm.PERMISSION.LANDSCAPING] = self.landscapingPermissionCheckbox
  self.permissionCheckboxes = {}
  local v3 = v3:getText("ui_reportPlayer_reason_name")
  {}[ReportUserReason.PLAYER_NAME + 1] = v3
  v3 = v3:getText("ui_reportPlayer_reason_voice")
  {}[ReportUserReason.VOICE_CHAT + 1] = v3
  v3 = v3:getText("ui_reportPlayer_reason_text")
  {}[ReportUserReason.TEXT_CHAT + 1] = v3
  v3 = v3:getText("ui_reportPlayer_reason_behavior")
  {}[ReportUserReason.BEHAVIOR + 1] = v3
  v3 = v3:getText("ui_reportPlayer_reason_cheating")
  {}[ReportUserReason.CHEATING + 1] = v3
  self.reportReasons = {}
  self.checkboxPermissions = {}
  for v4, v5 in pairs(self.permissionCheckboxes) do
    self.checkboxPermissions[v5] = v4
  end
end
function InGameMenuMultiplayerUsersFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
end
function InGameMenuMultiplayerUsersFrame.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function InGameMenuMultiplayerUsersFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  v1:subscribe(GetAdminAnswerEvent, self.onAdminLoginSuccess, self)
  v1:subscribe(PlayerPermissionsEvent, self.onPermissionChanged, self)
  v1:subscribe(ContractingStateEvent, self.onContractingStateChanged, self)
  v1:subscribe(MessageType.FARM_PROPERTY_CHANGED, self.onFarmsChanged, self)
  v1:subscribe(MessageType.FARM_DELETED, self.onFarmsChanged, self)
  v1:subscribe(MessageType.PLAYER_FARM_CHANGED, self.onPlayerFarmChanged, self)
  v1:subscribe(MessageType.USER_ADDED, self.onUserAdded, self)
  v1:subscribe(MessageType.USER_REMOVED, self.onUserRemoved, self)
  v1:subscribe(MessageType.MASTERUSER_ADDED, self.onMasterUserAdded, self)
  v1:subscribe(MessageType.PLAYER_NICKNAME_CHANGED, self.onFarmsChanged, self)
  v1:subscribe(MessageType.MONEY_CHANGED, self.onFarmsChanged, self)
  self:setCurrentUserId(g_currentMission.playerUserId)
  self:updateDisplay()
  v1:setFocus(self.userList)
end
function InGameMenuMultiplayerUsersFrame.onFrameClose(v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
  v1:unsubscribeAll(v0)
end
function InGameMenuMultiplayerUsersFrame:setupUserListFocusContext()
  function self.userList.onFocusEnter()
    u0.isNavigatingUsers = true
    self:updateMenuButtons()
  end
  function self.userList.onFocusLeave()
    u0.isNavigatingUsers = false
    self:updateMenuButtons()
  end
end
function InGameMenuMultiplayerUsersFrame:setPlayerFarm(farm)
  self.playerFarm = farm
end
function InGameMenuMultiplayerUsersFrame:setCurrentUserId(userId)
  self.currentUserId = userId
  local v2 = v2:getUserByUserId(userId)
  if not v2 then
  end
  self.currentUser = v2
  self:updateMenuButtons()
end
function InGameMenuMultiplayerUsersFrame:setUsers(users)
  local sortedUsers = self:getSortedUsers(users)
  self.users = sortedUsers
  self.shouldRebuildUserList = true
  self:updateMenuButtons()
end
function InGameMenuMultiplayerUsersFrame.getSortedUsers(v0, v1)
  for v6, v7 in pairs(v1) do
    if g_currentMission.connectedToDedicatedServer then
      local v8 = v7:getId()
      local v9 = v9:getServerUserId()
      if not (v8 ~= v9) then
        continue
      end
    end
    table.insert(v2, v7)
  end
  return v2
end
function InGameMenuMultiplayerUsersFrame:getSortedFarmList()
  local v2 = v2:getFarms()
  table.insert({}, self.playerFarm)
  for v8, v9 in pairs(v2) do
    if not v9.isSpectator and v9 ~= self.playerFarm then
      table.insert(v1, v9)
    end
    if not v9.isSpectator then
      continue
    end
  end
  v5 = v4:getNumActivePlayers()
  if 0 < v5 and v4 ~= self.playerFarm then
    table.insert(v1, v4)
  end
  return v1
end
function InGameMenuMultiplayerUsersFrame:updateElements()
  local v1 = v1:isUserFarmManager(self.currentUserId)
  if not v1 then
    local v2 = v2:getIsMasterUser()
  end
  if self.selectedUserFarm ~= self.playerFarm then
  end
  if self.selectedUserId ~= self.currentUserId then
  end
  if self.selectedUserId ~= nil then
    local v6 = v6:isUserFarmManager(self.selectedUserId)
  end
  if v1 then
    -- if v3 then goto L54 end
  end
  local v7 = v7:getIsMasterUser()
  if self.selectedUserId == nil then
  end
  if true then
    local v11 = v11:getUserByUserId(self.selectedUserId)
    if self.selectedUserId ~= self.currentUserId then
      v11 = v11:getIsMasterUser()
    end
  end
  if not v9 and not v3 and v1 then
  end
  v11:setVisible(v13)
  if v9 and v7 and not v5 and not v4 then
    local v14 = v10:getIsMasterUser()
    if v14 then
      local v15 = v15:getIsMasterUser()
    end
  end
  v11:setVisible(v13)
  if v9 and v7 and not v4 then
  end
  v11:setVisible(v13)
  if v6 then
  else
  end
  local v13 = v13:getText(v15)
  v11:setText(...)
  v11 = v11:getIsContractingFor(self.playerFarm.farmId)
  if not v9 and v2 and not v3 and not v4 then
  end
  v12:setVisible(v14)
  if v11 then
  else
  end
  v14 = v14:getText(v16)
  v12:setText(...)
  if v9 and not v5 then
    v14 = v14:getIsMasterUser()
  end
  v12:setVisible(v14)
  if v9 and not v5 then
    v14 = v14:getIsMasterUser()
    if v14 then
      v15 = v15:getIsServer()
      if not v15 then
        local v16 = v16:getServerUserId()
        if self.selectedUserId == v16 then
        end
      end
    end
  end
  v12:setVisible(v14)
  if v9 then
  end
  v12:setVisible(v14)
  if v9 then
    local v17 = v10:getIsBlocked()
    if v17 then
    else
    end
    v14 = v14:getText(v16)
    v12:setText(...)
  end
  if v9 and v5 then
    v14 = VoiceChatUtil.getHasRecordingDevice()
    if v14 then
      v15 = VoiceChatUtil.getIsVoiceRestricted()
    end
  end
  v12:setVisible(v14)
  if v9 then
    v17 = v10:getVoiceMuted()
    if v17 then
    else
    end
    v14 = v14:getText(v16)
    v12:setText(...)
  end
  if v9 and not v5 then
    v15 = VoiceChatUtil.getIsVoiceRestricted()
  end
  v12:setVisible(v14)
  if v9 then
    v13 = v13:getText("button_mute")
    v13 = v13:getText("ui_volumeSound")
    -- TODO: structure LOP_FORNPREP (pc 326, target 339)
    local v19 = string.format("%s: %d%%", v13, 1 * 10)
    table.insert(...)
    -- TODO: structure LOP_FORNLOOP (pc 338, target 327)
    v14:setTexts({})
    v14 = v14:getUserByUserId(self.selectedUserId)
    v14 = v14:getVoiceVolume()
    v17 = MathUtil.round(v14 / 0.1 + 1, 0)
    v15:setState(...)
  end
  if v9 then
    if Platform.hasNativeProfiles then
      v15 = v10:getPlatformId()
      v16 = getPlatformId()
      v14 = getPlatformIdsAreCompatible(...)
    end
    v12:setVisible(v14)
    if not v5 and not not Platform.hasNativeProfiles then
      v16 = v10:getPlatformId()
      v17 = getPlatformId()
      v15 = getPlatformIdsAreCompatible(...)
    end
    v12:setVisible(v14)
  else
    v12:setVisible(false)
    v12:setVisible(false)
  end
  if v9 then
    if not v4 and v7 and not v6 then
      v13 = v10:getIsMasterUser()
    end
    v13 = v13:getUserPermissions(self.selectedUserId)
    for v17, v18 in pairs(self.permissionCheckboxes) do
      if not v13[v17] then
        local v21 = v10:getIsMasterUser()
      end
      v18:setIsChecked(v21)
      v18:setDisabled(not v12)
    end
    v14:setVisible(true)
  else
    v12:setVisible(false)
  end
  v12:invalidateLayout()
  v12:invalidateLayout()
end
function InGameMenuMultiplayerUsersFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if 1000 < self.timeSinceLastRefresh then
    self.shouldRebuildUserList = true
  end
  self.timeSinceLastRefresh = self.timeSinceLastRefresh + dt
  if self.shouldRebuildUserList then
    self.shouldRebuildUserList = false
    self.timeSinceLastRefresh = 0
    local v2 = self:getSortedFarmList()
    self.sortedFarms = v2
    v2:reloadData()
  end
end
function InGameMenuMultiplayerUsersFrame:updateMenuButtons()
  self.menuButtonInfo = {self.backButtonInfo}
  local v1 = getNumOfBlockedUsers()
  if 0 < v1 then
    table.insert(self.menuButtonInfo, self.unblockButtonInfo)
  end
  if g_currentMission ~= nil then
    v1 = v1:getIsMasterUser()
    if v1 then
      -- if not g_currentMission.connectedToDedicatedServer then goto L68 end
      table.insert(self.menuButtonInfo, self.unblockRemoteButtonInfo)
    elseif g_currentMission ~= nil and g_currentMission.connectedToDedicatedServer then
      v1 = v1:getIsMasterUser()
      if not v1 then
        table.insert(self.menuButtonInfo, self.adminButtonInfo)
      end
    end
    if Platform.hasFriendInvitation then
      v1 = PlatformPrivilegeUtil.getCanInvitePlayer(g_currentMission)
      if v1 then
        table.insert(self.menuButtonInfo, self.inviteFriendsInfo)
      end
    end
  end
  self:setMenuButtonInfoDirty()
end
function InGameMenuMultiplayerUsersFrame:updateBalance()
  local v1 = v1:getBalance()
  local v6 = v6:formatMoney(v1, 0, false)
  local v5 = v5:getCurrencySymbol(true)
  self:setCurrentBalance(v1, v6 .. " " .. v5)
end
function InGameMenuMultiplayerUsersFrame:setCurrentBalance(balance, balanceString)
  local v4 = math.floor(balance)
  if v4 <= -1 then
  end
  if self.currentBalanceText.profile ~= v3 then
    v4:applyProfile(v3)
  end
  v4:setText(balanceString)
end
function InGameMenuMultiplayerUsersFrame:updateDisplay()
  local v1 = self:getSortedFarmList()
  self.sortedFarms = v1
  v1:reloadData()
  if self.selectedUserId ~= nil and self.selectedUserFarm ~= nil then
    self:updateElements()
    self:updateMenuButtons()
  end
  self:updateBalance()
end
function InGameMenuMultiplayerUsersFrame:onButtonKick()
  if self.selectedUserId ~= nil then
    local v2 = v2:getServerUserId()
    if self.selectedUserId ~= v2 then
      local v1 = v1:getUserByUserId(self.selectedUserId)
      local v3 = v3:getText(InGameMenuMultiplayerUsersFrame.L10N_SYMBOL.DIALOG_KICK_CONFIRM)
      local v4 = v1:getNickname()
      v2 = string.format(...)
      v3 = v3:getText(InGameMenuMultiplayerUsersFrame.L10N_SYMBOL.DIALOG_KICK_TITLE)
      YesNoDialog.show(self.onYesNoKick, self, v2, v3)
      return
    end
  end
  v2 = v2:getText(InGameMenuMultiplayerUsersFrame.L10N_SYMBOL.INFO_CANNOT_KICK_SERVER)
  InfoDialog.show(...)
end
function InGameMenuMultiplayerUsersFrame:onYesNoKick(yes)
  if yes then
    local v2 = v2:getServerConnection()
    local v4 = KickBanEvent.new(true, self.selectedUserId)
    v2:sendEvent(...)
  end
end
function InGameMenuMultiplayerUsersFrame:onButtonUnBan()
  UnBanDialog.show(self.updateMenuButtons, self, true)
end
function InGameMenuMultiplayerUsersFrame:onButtonUnBanRemote()
  UnBanDialog.show(self.updateMenuButtons, self, false)
end
function InGameMenuMultiplayerUsersFrame:onButtonShowProfile()
  if self.selectedUserId ~= nil then
    local v1 = v1:getUserByUserId(self.selectedUserId)
    local v2 = v1:getPlatformUserId()
    if v2 == "" then
      local v3 = v1:getNickname()
    end
    showUserProfile(v2)
  end
end
function InGameMenuMultiplayerUsersFrame.onButtonInviteFriends(v0)
  if Platform.hasFriendInvitation then
    if g_currentMission ~= nil then
      local v3 = v3:getUsers()
      openMpFriendInvitation(#v3, g_currentMission.missionDynamicInfo.capacity)
      return
    end
    openMpFriendInvitation(1, 6)
  end
end
function InGameMenuMultiplayerUsersFrame:onButtonAdminLogin()
  local v6 = v6:getText(InGameMenuMultiplayerUsersFrame.L10N_SYMBOL.PROMPT_ADMIN_PASSWORD)
  PasswordDialog.show(...)
end
function InGameMenuMultiplayerUsersFrame:onClickPermission(checkboxElement, isActive)
  v4:setUserPermission(self.selectedUserId, self.checkboxPermissions[checkboxElement], isActive)
end
function InGameMenuMultiplayerUsersFrame:onClickTransferButton()
  TransferMoneyDialog.show(self.transferMoney, self, self.selectedUserFarm)
end
function InGameMenuMultiplayerUsersFrame:transferMoney(amount)
  if 0 < amount then
    v2:transferMoney(self.selectedUserFarm, amount)
    self:updateBalance()
  end
end
function InGameMenuMultiplayerUsersFrame:onClickRemoveFromFarm()
  local v1 = v1:getUserByUserId(self.selectedUserId)
  local v3 = v3:getText(InGameMenuMultiplayerUsersFrame.L10N_SYMBOL.DIALOG_REMOVE_CONFIRM)
  local v4 = v1:getNickname()
  local v2 = string.format(...)
  v3 = v3:getText(InGameMenuMultiplayerUsersFrame.L10N_SYMBOL.DIALOG_REMOVE_TITLE)
  YesNoDialog.show(self.onYesNoRemoveFromFarm, self, v2, v3)
end
function InGameMenuMultiplayerUsersFrame:onYesNoRemoveFromFarm(yes)
  if yes then
    v2:removeUserFromFarm(self.selectedUserId)
  end
end
function InGameMenuMultiplayerUsersFrame:onClickPromote()
  local v1 = v1:isUserFarmManager(self.selectedUserId)
  if not v1 then
    v1 = v1:getUserByUserId(self.selectedUserId)
    local v3 = v3:getText(InGameMenuMultiplayerUsersFrame.L10N_SYMBOL.DIALOG_PROMOTE_CONFIRM)
    local v4 = v1:getNickname()
    local v2 = string.format(...)
    v3 = v3:getText(InGameMenuMultiplayerUsersFrame.L10N_SYMBOL.DIALOG_PROMOTE_TITLE)
    YesNoDialog.show(self.onYesNoPromoteToFarmManager, self, v2, v3)
    return
  end
  v1:demoteUser(self.selectedUserId)
end
function InGameMenuMultiplayerUsersFrame:onYesNoPromoteToFarmManager(yes)
  if yes then
    v2:promoteUser(self.selectedUserId)
  end
end
function InGameMenuMultiplayerUsersFrame:onClickContractor()
  local v1 = v1:getIsContractingFor(self.playerFarm.farmId)
  if v1 then
  else
  end
  local v4 = v4:getText(v2)
  local v3 = string.format(v4, self.selectedUserFarm.name)
  v4 = v4:getText(InGameMenuMultiplayerUsersFrame.L10N_SYMBOL.DIALOG_CONTRACTOR_STATE_TITLE)
  YesNoDialog.show(self.onYesNoToggleContractorState, self, v3, v4)
end
function InGameMenuMultiplayerUsersFrame:onYesNoToggleContractorState(yes)
  if yes then
    local v2 = v2:getIsContractingFor(self.playerFarm.farmId)
    v3:setIsContractingFor(self.playerFarm.farmId, not v2, false)
  end
end
function InGameMenuMultiplayerUsersFrame:onFarmsChanged(farmId)
  self:updateDisplay()
end
function InGameMenuMultiplayerUsersFrame:onPlayerFarmChanged(player)
  self:updateDisplay()
end
function InGameMenuMultiplayerUsersFrame:onPermissionChanged()
  self:updateDisplay()
end
function InGameMenuMultiplayerUsersFrame:onMasterUserAdded()
  self:updateDisplay()
end
function InGameMenuMultiplayerUsersFrame:onUserAdded()
  self:updateDisplay()
end
function InGameMenuMultiplayerUsersFrame:onUserRemoved()
  self:updateDisplay()
end
function InGameMenuMultiplayerUsersFrame:onContractingStateChanged()
  self:updateElements()
end
function InGameMenuMultiplayerUsersFrame.onAdminPassword(v0, v1, v2)
  if v2 then
    local v3 = v3:getServerConnection()
    local v5 = GetAdminEvent.new(v1)
    v3:sendEvent(...)
  end
end
function InGameMenuMultiplayerUsersFrame:onAdminLoginSuccess()
  self:updateDisplay()
  if self.playerFarm ~= nil and self.playerFarm.farmId ~= FarmManager.SPECTATOR_FARM_ID then
    v1:promoteUser(self.currentUserId)
  end
end
function InGameMenuMultiplayerUsersFrame:onButtonBlock()
  local v1 = v1:getUserByUserId(self.selectedUserId)
  local v2 = v1:getIsBlocked()
  if v2 then
    v1:unblock()
    self:updateDisplay()
    return
  end
  if Platform.hasNativeProfiles then
    local v3 = v1:getPlatformId()
    local v4 = getPlatformId()
    v2 = getPlatformIdsAreCompatible(...)
    if v2 then
      v1:block()
      return
    end
  end
  v2 = v2:getText("ui_doYouWantToBlockThisServer_title")
  v4 = v4:getText("ui_blockPlayerConfirm")
  local v5 = v1:getNickname()
  v3 = string.format(...)
  YesNoDialog.show(function(self)
    if self then
      v1:banUser(u0)
      v1:updateDisplay()
    end
  end, nil, v3, v2)
end
function InGameMenuMultiplayerUsersFrame:onButtonBlockFromServer()
  local v1 = v1:getUserByUserId(self.selectedUserId)
  local v3 = v3:getText("ui_banConfirm")
  local v4 = v1:getNickname()
  local v2 = string.format(...)
  v3 = v3:getText("ui_banTitle")
  YesNoDialog.show(function(self)
    if self then
      local v1 = v1:getServerConnection()
      local v3 = KickBanEvent.new(false, u0.selectedUserId)
      v1:sendEvent(...)
    end
  end, nil, v2, v3)
end
function InGameMenuMultiplayerUsersFrame:onButtonReport()
  local v1 = v1:getUserByUserId(self.selectedUserId)
  local v2 = v2:getText("ui_reportPlayer_title")
  local v4 = v4:getText("ui_reportPlayer_confirm")
  local v5 = v1:getNickname()
  local v3 = string.format(...)
  OptionDialog.show(function(self)
    if 0 < self then
      v1:report(self - 1)
    end
  end, v3, v2, self.reportReasons)
end
function InGameMenuMultiplayerUsersFrame:onButtonMute()
  local v1 = v1:getUserByUserId(self.selectedUserId)
  local v2 = v1:getVoiceMuted()
  if v2 then
    v1:setVoiceMuted(false)
  else
    v1:setVoiceMuted(true)
  end
  self:updateDisplay()
end
function InGameMenuMultiplayerUsersFrame:onPeerVolumeChanged(state)
  local v3 = v3:getUserByUserId(self.selectedUserId)
  v3:setVoiceVolume((state - 1) * 0.1)
end
function InGameMenuMultiplayerUsersFrame:getNumberOfSections()
  return #self.sortedFarms
end
function InGameMenuMultiplayerUsersFrame.getCellTypeForItemInSection(v0, v1, v2, v3)
  if v3 == 1 then
    return "farm"
  end
  return "user"
end
function InGameMenuMultiplayerUsersFrame:getNumberOfItemsInSection(list, section)
  local v6 = self.sortedFarms[section]:getActiveUsers()
  return #v6 + 1
end
function InGameMenuMultiplayerUsersFrame:populateCellForItemInSection(list, section, index, cell)
  if index == 1 then
    if self.sortedFarms[section].farmId == FarmManager.SPECTATOR_FARM_ID then
      local v6 = cell:getAttribute("title")
      local v8 = v8:getText("ui_noFarm")
      v6:setText(...)
      v6 = cell:getAttribute("farmBalance")
      v6:setVisible(false)
    else
      v6 = cell:getAttribute("title")
      v6:setText(self.sortedFarms[section].name)
      v6 = cell:getAttribute("farmBalance")
      v6:setVisible(true)
      v6 = cell:getAttribute("farmBalance")
      v8 = self.sortedFarms[section]:getBalance()
      v6:setValue(...)
    end
    v6 = cell:getAttribute("dot")
    local v10 = v5:getColor()
    local v9 = unpack(...)
    v6:setImageColor(...)
    return
  end
  v6 = v5:getActiveUsers()
  v8 = v8:getUserByUserId(v6[index - 1].userId)
  if v8 == nil then
    return
  end
  v9 = cell:getAttribute("playerName")
  local v11 = v8:getNickname()
  v9:setText(...)
  v9 = cell:getAttribute("platform")
  v11 = v8:getPlatformId()
  v9:setPlatformId(...)
  if g_currentMission.connectedToDedicatedServer then
    v9 = v8:getId()
    v10 = v10:getServerUserId()
    -- if v9 == v10 then goto L194 end
  end
  v11 = v8:getId()
  v9 = v5:isUserFarmManager(...)
  local v12 = v8:getUniqueUserId()
  v11 = voiceChatGetConnectionStatus(...)
  if v11 ~= VoiceChatConnectionStatus.UNAVAILABLE then
  end
  v11 = cell:getAttribute("noMicrophone")
  v11:setVisible(true)
  v11 = cell:getAttribute("muted")
  if not true then
    local v13 = v8:getVoiceMuted()
  end
  v11:setVisible(v13)
  v11 = cell:getAttribute("farmManager")
  local v15 = v8:getId()
  v13 = v5:isUserFarmManager(...)
  v11:setVisible(...)
  v11 = cell:getAttribute("admin")
  v13 = v8:getIsMasterUser()
  v11:setVisible(...)
  v12 = cell:getAttribute("admin")
  v11:invalidateLayout()
end
function InGameMenuMultiplayerUsersFrame:onListSelectionChanged(list, section, index)
  if index == 1 then
    self.selectedUserId = nil
    self.selectedUserFarm = self.sortedFarms[section]
  else
    local v6 = self.sortedFarms[section]:getActiveUsers()
    if v6[index - 1] ~= nil then
      self.selectedUserId = v6[index - 1].userId
      self.selectedUserFarm = self.sortedFarms[section]
    end
  end
  self:updateMenuButtons()
  self:updateElements()
end
InGameMenuMultiplayerUsersFrame.L10N_SYMBOL = {MONEY_BUTTON_TEMPLATE = "button_mp_transferMoney", BUTTON_UNBAN = "button_unban", BUTTON_ADMIN = "button_adminLogin", BUTTON_CONTRACT = "button_mp_grant", BUTTON_UNCONTRACT = "button_mp_ungrant", BUTTON_INVITE_FRIENDS = "ui_inviteScreen", PROMPT_ADMIN_PASSWORD = "ui_enterAdminPassword", INFO_CANNOT_BAN_SERVER = "ui_serverCannotBeBanned", INFO_CANNOT_KICK_SERVER = "ui_serverCannotBeKicked", DIALOG_KICK_TITLE = "ui_kickTitle", DIALOG_KICK_CONFIRM = "ui_kickConfirm", DIALOG_REMOVE_TITLE = "ui_removeFromFarmTitle", DIALOG_REMOVE_CONFIRM = "ui_removeFromFarmConfirm", DIALOG_PROMOTE_CONFIRM = "ui_promoteToFarmManagerConfirm", DIALOG_PROMOTE_TITLE = "ui_promoteToFarmManagerTitle", DIALOG_CONTRACTOR_STATE_TITLE = "ui_contractorStateChangeTitle", DIALOG_GRANT_CONTRACTOR_CONFIRM = "ui_contractorGrantConfirm", DIALOG_DENY_CONTRACTOR_CONFIRM = "ui_contractorUngrantConfirm"}
InGameMenuMultiplayerUsersFrame.PROFILE = {BALANCE_POSITIVE = "shopMoney", BALANCE_NEGATIVE = "shopMoneyNeg", CURRENT_PLAYER_TEXT = "ingameMenuMPUsersListRowTextCurrentPlayer"}
