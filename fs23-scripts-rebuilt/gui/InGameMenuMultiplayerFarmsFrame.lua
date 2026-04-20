-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuMultiplayerFarmsFrame = {}
local InGameMenuMultiplayerFarmsFrame_mt = Class(InGameMenuMultiplayerFarmsFrame, TabbedMenuFrameElement)
InGameMenuMultiplayerFarmsFrame.CONTROLS = {"playerNameTemplate", FARM_LIST = "farmList", NEW_FARM_ITEM = "newFarmItem", NO_FARMS_BOX = "noFarmsBox"}
function InGameMenuMultiplayerFarmsFrame.register()
  local v0 = InGameMenuMultiplayerFarmsFrame.new()
  v1:loadGui("dataS/gui/InGameMenuMultiplayerFarmsFrame.xml", "MultiplayerFarmsFrame", v0, true)
end
function InGameMenuMultiplayerFarmsFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuMultiplayerFarmsFrame.CONTROLS)
  local v3 = User.new()
  v2.currentUser = v3
  v2.users = {}
  v2.player = nil
  v2.playerFarm = nil
  v2.hasAskedForPassword = false
  v2.timeSinceLastMoneyUpdate = 0
  v2.elementFarmIdMap = {}
  v2.farmIdBalanceMap = {}
  v2.farmIdPlayerCountMap = {}
  v2.farmIdPlayerNameLayoutMap = {}
  v2.farmIdPlayerNameTemplateMap = {}
  v2.newFarmListIndex = 0
  v2.hasCustomMenuButtons = true
  v2.menuButtonInfo = {}
  return v2
end
function InGameMenuMultiplayerFarmsFrame:createFromExistingGui(v1)
  local v2 = InGameMenuMultiplayerFarmsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuMultiplayerFarmsFrame:initialize()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.BUTTON_JOIN_FARM)
  self.joinMenuButton = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:joinFarm(u0.selectedFarmId)
  end}
  v2 = v2:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.BUTTON_LEAVE_FARM)
  self.leaveMenuButton = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:leaveFarm()
  end}
  v2 = v2:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.BUTTON_EDIT_FARM)
  self.editMenuButton = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
    self:editFarm(u0.selectedFarmId)
  end}
  v2 = v2:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.BUTTON_CREATE_FARM)
  self.createMenuButton = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:createFarm()
  end}
  v2 = v2:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.BUTTON_DELETE_FARM)
  self.deleteMenuButton = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = function()
    self:deleteFarm(u0.selectedFarmId)
  end}
  v1:unlinkElement()
end
function InGameMenuMultiplayerFarmsFrame:delete()
  for v4, v5 in pairs(self.farmIdPlayerNameTemplateMap) do
    v5:delete()
  end
  v1:delete()
  v2 = v2:superClass()
  v2.delete(self)
end
function InGameMenuMultiplayerFarmsFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function InGameMenuMultiplayerFarmsFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  v1:subscribe(MessageType.FARM_CREATED, self.onFarmCreated, self)
  v1:subscribe(MessageType.FARM_PROPERTY_CHANGED, self.onFarmsChanged, self)
  v1:subscribe(MessageType.FARM_DELETED, self.onFarmsChanged, self)
  v1:subscribe(MessageType.PLAYER_NICKNAME_CHANGED, self.onFarmsChanged, self)
  v1:subscribe(MessageType.PLAYER_FARM_CHANGED, self.onPlayerFarmChanged, self)
  v1:subscribe(MessageType.MONEY_CHANGED, self.onFarmMoneyChanged, self)
  v1:subscribe(MessageType.MASTERUSER_ADDED, self.onMasterUserAdded, self)
  v1:subscribe(PlayerSetFarmAnswerEvent, self.onPlayerSetFarmAnswer, self)
  v1:subscribe(PlayerPermissionsEvent, self.onPermissionChanged, self)
  self.selectedFarmId = nil
  self:reloadFarms()
  if self.playerFarm ~= nil then
    v2 = self:getListFarmIndex(self.playerFarm.farmId)
  end
  v2:setSelectedIndex(v1, true)
  v2:setFocus(self.farmList)
  self:updateMenuButtons()
end
function InGameMenuMultiplayerFarmsFrame.onFrameClose(v0)
  v1:unsubscribeAll(v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
end
function InGameMenuMultiplayerFarmsFrame:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  local v1 = User.new()
  self.currentUser = v1
  self.users = {}
  self.player = nil
  self.playerFarm = nil
  self.hasAskedForPassword = false
  self.elementFarmIdMap = {}
  self.farmIdBalanceMap = {}
  self.farmIdPlayerCountMap = {}
  self.farmIdPlayerNameLayoutMap = {}
  self.farmIdPlayerNameTemplateMap = {}
  self.newFarmListIndex = 0
end
function InGameMenuMultiplayerFarmsFrame:setCurrentUserId(currentUserId)
  local v2 = v2:getUserByUserId(currentUserId)
  if not v2 then
  end
  self.currentUser = v2
  self.currentUserId = currentUserId
end
function InGameMenuMultiplayerFarmsFrame:setUsers(users)
  self.users = users
end
function InGameMenuMultiplayerFarmsFrame:setPlayer(player)
  self.player = player
end
function InGameMenuMultiplayerFarmsFrame:setPlayerFarm(farm)
  self.playerFarm = farm
end
function InGameMenuMultiplayerFarmsFrame.getListFarmIndex(v0, v1)
  if v1 ~= FarmManager.SPECTATOR_FARM_ID then
    local v2 = v2:getFarms()
    for v6, v7 in ipairs(v2) do
      if not (v7.farmId == v1) then
        continue
      end
      return v6 - 1
    end
  end
  return 1
end
function InGameMenuMultiplayerFarmsFrame:setFarmBalance(farmId, balance)
  if balance == nil then
    local v3 = v3:getFarmById(farmId)
    local v4 = v3:getBalance()
  end
  if self.farmIdBalanceMap[farmId] ~= nil then
    v3:setValue(balance)
  end
end
function InGameMenuMultiplayerFarmsFrame:updateFarmPlayers(farmId)
  for v6, v7 in pairs(self.farmIdPlayerNameLayoutMap[farmId].elements) do
    v7:delete()
  end
  v3 = v3:getFarmById(farmId)
  v4 = v3:getActiveUsers()
  v5 = v5:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.PLAYER_COUNT)
  v6 = string.format("%s: %d", v5, #v4)
  self.farmIdPlayerCountMap[farmId]:setText(v6)
  for v13, v14 in ipairs(v4) do
    for v19, v20 in pairs(self.users) do
      local v22 = v20:getId()
      if not (v14.userId == v22) then
        continue
      end
      local v21 = v20:getNickname()
      break
    end
    v16 = v8:clone(v2)
    v16:setText(v15)
  end
  if v9 <= v2.size[2] then
  else
  end
  v2.numFlows = v10
  v2:invalidateLayout(true)
end
function InGameMenuMultiplayerFarmsFrame:updateMenuButtons()
  self.menuButtonInfo = {}
  if self.selectedFarmId ~= nil then
    if self.selectedFarmId == self.playerFarm.farmId then
      table.insert(self.menuButtonInfo, self.leaveMenuButton)
    else
      table.insert(self.menuButtonInfo, self.joinMenuButton)
    end
    table.insert(self.menuButtonInfo, self.backButtonInfo)
    local v1 = v1:getIsMasterUser()
    -- if not v1 then goto L103 end
    table.insert(self.menuButtonInfo, self.editMenuButton)
    table.insert(self.menuButtonInfo, self.deleteMenuButton)
  else
    v1 = v1:getIsMasterUser()
    if v1 then
      table.insert(self.menuButtonInfo, self.createMenuButton)
      table.insert(self.menuButtonInfo, self.backButtonInfo)
    else
      table.insert(self.menuButtonInfo, self.backButtonInfo)
    end
  end
  self:setMenuButtonInfoDirty()
end
function InGameMenuMultiplayerFarmsFrame:joinFarm(farmId)
  if self.playerFarm ~= nil and farmId ~= self.playerFarm.farmId then
    if self.playerFarm.farmId ~= FarmManager.SPECTATOR_FARM_ID then
      local v4 = v4:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.LEAVE_FARM_CONFIRM)
      local v3 = string.format(v4, self.playerFarm.name)
      v4 = v4:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.BUTTON_LEAVE_FARM)
      YesNoDialog.show(self.doJoinFarm, self, v3, v4)
      return
    end
    self:doJoinFarm(true, farmId)
  end
end
function InGameMenuMultiplayerFarmsFrame:doJoinFarm(yesNo)
  if yesNo then
    local v2 = v2:getFarmById(self.selectedFarmId)
    local v3 = v3:getServerConnection()
    local v5 = PlayerSetFarmEvent.new(self.player, self.selectedFarmId, v2.password)
    v3:sendEvent(...)
  end
end
function InGameMenuMultiplayerFarmsFrame:leaveFarm()
  local v2 = v2:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.LEAVE_FARM_CONFIRM)
  local v1 = string.format(v2, self.playerFarm.name)
  v2 = v2:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.BUTTON_LEAVE_FARM)
  YesNoDialog.show(self.doLeaveFarm, self, v1, v2)
end
function InGameMenuMultiplayerFarmsFrame:doLeaveFarm(yesNo)
  if yesNo then
    local v2 = v2:getServerConnection()
    local v4 = PlayerSetFarmEvent.new(self.player, FarmManager.SPECTATOR_FARM_ID)
    v2:sendEvent(...)
  end
end
function InGameMenuMultiplayerFarmsFrame:deleteFarm(farmId)
  local v2 = v2:getFarmById(farmId)
  local v3, v4 = v2:canBeDestroyed()
  if v3 then
    local v5 = v5:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.DELETE_FARM_CONFIRM)
    local v6 = v6:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.BUTTON_DELETE_FARM)
    YesNoDialog.show(self.onDeleteFarmYesNo, self, v5, v6)
    return
  end
  v6 = v6:getText(v4)
  InfoDialog.show(...)
end
function InGameMenuMultiplayerFarmsFrame.editFarm(v0, v1)
  EditFarmDialog.show(v1)
end
function InGameMenuMultiplayerFarmsFrame.createFarm(v0)
  EditFarmDialog.show()
end
function InGameMenuMultiplayerFarmsFrame:reloadFarms()
  v1:reloadData()
  local v5 = v5:getFarms()
  if #v5 == 1 then
    local v4 = v4:getIsMasterUser()
  end
  v1:setVisible(v3)
end
function InGameMenuMultiplayerFarmsFrame:onPlayerSetFarmAnswer(answerState, farmId, password)
  if answerState == PlayerSetFarmAnswerEvent.STATE.OK then
    local v4 = v4:getFarmById(farmId)
    v4.password = password
    self.hasAskedForPassword = false
    local v7 = self:getListFarmIndex(farmId)
    v5:setSelectedIndex(...)
    return
  end
  if answerState == PlayerSetFarmAnswerEvent.STATE.PASSWORD_REQUIRED then
    if not self.hasAskedForPassword then
      self.hasAskedForPassword = true
      local v9 = v9:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.BUTTON_JOIN_FARM)
      PasswordDialog.show(...)
      return
    end
    local v5 = v5:getText(InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL.WRONG_PASSWORD)
    InfoDialog.show(...)
    self.hasAskedForPassword = false
  end
end
function InGameMenuMultiplayerFarmsFrame:onFarmPasswordEntered(password, hasConfirmed, farmId)
  if hasConfirmed then
    local v4 = v4:getServerConnection()
    local v6 = PlayerSetFarmEvent.new(self.player, farmId, password)
    v4:sendEvent(...)
    return
  end
  self.hasAskedForPassword = false
end
function InGameMenuMultiplayerFarmsFrame:onPermissionChanged(userId)
  if userId == self.currentUserId then
    self:updateMenuButtons()
  end
end
function InGameMenuMultiplayerFarmsFrame:onFarmCreated(newFarmId)
  self:reloadFarms()
  local v2 = v2:getIsMasterUser()
  if v2 then
    v2 = self:getListFarmIndex(newFarmId)
    v3:setSelectedIndex(v2, true)
  end
end
function InGameMenuMultiplayerFarmsFrame:onFarmsChanged(farmId)
  self:reloadFarms()
end
function InGameMenuMultiplayerFarmsFrame:onPlayerFarmChanged(player)
  self:reloadFarms()
  self:updateMenuButtons()
end
function InGameMenuMultiplayerFarmsFrame:onFarmMoneyChanged(farmId, balance)
  if self.farmIdBalanceMap[farmId] ~= nil then
    v3:setValue(balance)
  end
end
function InGameMenuMultiplayerFarmsFrame:onMasterUserAdded(user)
  self:reloadFarms()
  self:updateMenuButtons()
end
function InGameMenuMultiplayerFarmsFrame:onDoubleClickFarm(list, section, index)
  if index == self.newFarmListIndex then
    self:createFarm()
    return
  end
  local v5 = v5:getFarms()
  self.selectedFarmId = v5[index + 1].farmId
  self:joinFarm(self.selectedFarmId)
end
function InGameMenuMultiplayerFarmsFrame:onListSelectionChanged(list, section, index)
  if index == self.newFarmListIndex then
    self.selectedFarmId = nil
  else
    local v5 = v5:getFarms()
    self.selectedFarmId = v5[index + 1].farmId
  end
  self:updateMenuButtons()
end
function InGameMenuMultiplayerFarmsFrame:onDeleteFarmYesNo(yes)
  if yes then
    local v2 = v2:getFarmById(self.selectedFarmId)
    local v3 = v2:canBeDestroyed()
    if v3 then
      v3 = v3:getServerConnection()
      local v5 = FarmDestroyEvent.new(self.selectedFarmId)
      v3:sendEvent(...)
    end
  end
end
function InGameMenuMultiplayerFarmsFrame:getNumberOfItemsInSection(list, section)
  local v4 = v4:getFarms()
  if #v4 < FarmManager.MAX_NUM_FARMS + 1 then
    v4 = v4:getIsMasterUser()
    if v4 then
      self.newFarmListIndex = #v4
      return #v4
    end
  end
  self.newFarmListIndex = nil
  return v3 - 1
end
function InGameMenuMultiplayerFarmsFrame:populateCellForItemInSection(list, section, index, cell)
  local v5 = v5:getFarms()
  local v7 = cell:getAttribute("existingFarm")
  if v5[index + 1] == nil then
  end
  v7:setVisible(true)
  v7 = cell:getAttribute("newFarm")
  if v6 ~= nil then
  end
  v7:setVisible(true)
  if v6 ~= nil then
    if self.elementFarmIdMap[cell] ~= nil then
      self.farmIdBalanceMap[self.elementFarmIdMap[cell]] = nil
    end
    local v8 = cell:getAttribute("farmName")
    v8:setText(v6.name)
    v8 = cell:getAttribute("farmIcon")
    local v13 = v6:getIconUVs()
    local v12 = GuiUtils.getUVs(...)
    local v11 = unpack(...)
    v8:setImageUVs(...)
    local v10 = cell:getAttribute("farmBalance")
    self.farmIdBalanceMap[v6.farmId] = v10
    v8 = cell:getAttribute("farmBalance")
    v10 = v6:getBalance()
    v8:setValue(...)
    v8 = cell:getAttribute("playerNameLayout")
    -- TODO: structure LOP_FORNPREP (pc 95, target 103)
    v12:delete()
    -- TODO: structure LOP_FORNLOOP (pc 102, target 96)
    v10 = v6:getActiveUsers()
    for v12, v13 in ipairs(...) do
      local v15 = v15:getUserByUserId(v13.userId)
      if not (v15 ~= nil) then
        continue
      end
      local v16 = v15:getNickname()
      local v17 = v17:clone(v8)
      v17:setText(v16)
    end
    self.elementFarmIdMap[cell] = v6.farmId
  end
end
InGameMenuMultiplayerFarmsFrame.L10N_SYMBOL = {PLAYER_COUNT = "ui_players", DELETE_FARM_CONFIRM = "ui_farmDeleteConfirmation", WRONG_PASSWORD = "ui_wrongPassword", BUTTON_CREATE_FARM = "button_mp_createFarm", BUTTON_JOIN_FARM = "button_mp_joinFarm", BUTTON_LEAVE_FARM = "button_mp_leaveFarm", BUTTON_DELETE_FARM = "button_mp_deleteFarm", BUTTON_EDIT_FARM = "button_mp_editFarm", LEAVE_FARM_CONFIRM = "ui_farmLeaveConfirmation"}
