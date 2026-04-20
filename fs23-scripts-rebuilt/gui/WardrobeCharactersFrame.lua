-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WardrobeCharactersFrame = {}
local WardrobeCharactersFrame_mt = Class(WardrobeCharactersFrame, TabbedMenuFrameElement)
WardrobeCharactersFrame.CONTROLS = {"itemList", "title", "nicknameElement"}
function WardrobeCharactersFrame.register()
  local v0 = WardrobeCharactersFrame.new()
  v1:loadGui("dataS/gui/WardrobeCharactersFrame.xml", "WardrobeCharactersFrame", v0, true)
end
function WardrobeCharactersFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(WardrobeCharactersFrame.CONTROLS)
  local v4 = v4:getText("button_confirm")
  v2.backButtonInfo = {inputAction = InputAction.MENU_BACK, text = v4}
  v4 = v4:getText("button_select")
  v2.selectButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v4, callback = function()
    v0:onClickSelect()
  end}
  v4 = v4:getText("button_changeName")
  v2.nicknameButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v4, callback = function()
    v0:onClickChangeName()
  end}
  v2.hasCustomMenuButtons = true
  v2.menuButtonInfo = {v2.backButtonInfo, v2.selectButtonInfo}
  if Platform.canChangeGamerTag then
    table.insert(v2.menuButtonInfo, v2.nicknameButtonInfo)
  end
  v2.mapping = {}
  return v2
end
function WardrobeCharactersFrame:createFromExistingGui(v1)
  local v2 = WardrobeCharactersFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function WardrobeCharactersFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function WardrobeCharactersFrame:initialize(configName, delegate, titleKey)
  self.configName = configName
  self.delegate = delegate
  v4:setLocaKey(titleKey)
  self:loadPlayers()
end
function WardrobeCharactersFrame:setPlayerStyle(playerStyle, savedPlayerStyle)
  self.playerStyle = playerStyle
  self.savedPlayerStyle = savedPlayerStyle
  self:resetList()
end
function WardrobeCharactersFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  v1:onItemSelectionStart()
  local v7 = v7:getText("ui_name")
  v1:setText(v7 .. ": " .. g_currentMission.playerNickname)
  v1:subscribe(MessageType.PLAYER_NICKNAME_CHANGED, self.onNicknameChanged, self)
  self:resetList()
end
function WardrobeCharactersFrame:resetList()
  self.mapping = {}
  if self.playerStyle ~= nil then
    for v5, v6 in ipairs(self.players) do
      for v10, v11 in ipairs(v6.style.faceConfig.items) do
        table.insert(self.mapping, {xmlFilename = v6.xmlFilename, uvSlot = v11.uvSlot, index = v10, style = v6.style})
        if not (self.playerStyle.faceConfig.selection == v10) then
          continue
        end
        if not (self.playerStyle.xmlFilename == v6.xmlFilename) then
          continue
        end
      end
    end
    v2:reloadData()
    v2:setSelectedItem(1, v1)
  end
  v1:setFocus(self.itemList)
end
function WardrobeCharactersFrame:onFrameClose()
  for v4, v5 in ipairs(self.itemList.elements) do
    local v6 = v5:getAttribute("icon")
    v6:setImageFilename(g_baseUIFilename)
  end
  v1:unsubscribe(MessageType.PLAYER_NICKNAME_CHANGED, self)
  v2 = v2:superClass()
  v2.onFrameClose(self)
end
function WardrobeCharactersFrame:loadPlayers()
  self.players = {}
  for v4, v5 in ipairs(g_characterModelManager.playerModels) do
    local playerStyle = PlayerStyle.new()
    playerStyle:loadConfigurationXML(v5.xmlFilename)
    table.insert(self.players, {xmlFilename = v5.xmlFilename, style = playerStyle})
  end
end
function WardrobeCharactersFrame:getNumberOfItemsInSection(list, section)
  return #self.mapping
end
function WardrobeCharactersFrame:populateCellForItemInSection(list, section, index, cell)
  local v6 = cell:getAttribute("icon")
  v6:setImageFilename(self.mapping[index].style.atlasFilename)
  local v10 = v10:getSlotUVs(self.mapping[index].uvSlot)
  v6:setImageUVs(...)
  local v7 = cell:getAttribute("selected")
  if self.savedPlayerStyle.faceConfig.selection == self.mapping[index].index and self.savedPlayerStyle.xmlFilename ~= self.mapping[index].xmlFilename then
  end
  v7:setVisible(v9)
end
function WardrobeCharactersFrame:onListSelectionChanged(list, section, index)
  if self.playerStyle.xmlFilename ~= self.mapping[index].xmlFilename then
    v5:loadConfigurationXML(self.mapping[index].xmlFilename)
  end
  self.playerStyle.faceConfig.setter(self.playerStyle, v4.index)
  v5:onItemSelectionChanged()
end
function WardrobeCharactersFrame:onClickSelect(element)
  v2:onItemSelectionConfirmed()
  v2:reloadData()
end
function WardrobeCharactersFrame.onClickChangeName(v0)
  local v1 = v1:getText("ui_enterName")
  local v4 = v4:getText("ui_enterName")
  local v5 = v5:getText("button_change")
  TextInputDialog.show(function(v0, v1)
    if v1 and v0 ~= g_currentMission.playerNickname then
      v2:setPlayerNickname(g_currentMission.player, v0)
      local v8 = v8:getText("ui_name")
      v2:setText(v8 .. ": " .. g_currentMission.playerNickname)
    end
  end, nil, g_currentMission.playerNickname, nil, v4, nil, v5, nil, v1)
end
function WardrobeCharactersFrame:onNicknameChanged()
  local v7 = v7:getText("ui_name")
  v1:setText(v7 .. ": " .. g_currentMission.playerNickname)
end
