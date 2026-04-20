-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModHubExtraContentFrame = {}
local ModHubExtraContentFrame_mt = Class(ModHubExtraContentFrame, TabbedMenuFrameElement)
ModHubExtraContentFrame.CONTROLS = {NAVIGATION_HEADER = "breadcrumbs", ITEMS_LIST = "itemsList", HEADER_TEXT = "headerText", NO_ITEMS = "noItemsElement", ITEM_BOX = "itemDescriptionBox", ITEM_NAME = "itemDescription"}
function ModHubExtraContentFrame.register()
  local v0 = ModHubExtraContentFrame.new()
  v1:loadGui("dataS/gui/ModHubExtraContentFrame.xml", "ModHubExtraContentFrame", v0, true)
end
function ModHubExtraContentFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ModHubExtraContentFrame.CONTROLS)
  v2.items = {}
  v2.title = ""
  return v2
end
function ModHubExtraContentFrame:createFromExistingGui(v1)
  local v2 = ModHubExtraContentFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function ModHubExtraContentFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function ModHubExtraContentFrame:initialize(title)
  self.title = title
  v2:setText(title)
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v3 = v3:getText(ModHubExtraContentFrame.L10N_SYMBOL.BUTTON_UNLOCK)
  self.unlockButton = {inputAction = InputAction.MENU_ACTIVATE, text = v3, callback = function()
    self:onButtonUnlock()
  end}
end
function ModHubExtraContentFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:updateList()
  self:setSoundSuppressed(true)
  v1:setFocus(self.itemsList)
  self:setSoundSuppressed(false)
end
function ModHubExtraContentFrame:getMenuButtonInfo()
  table.insert({}, self.backButtonInfo)
  local v2 = v2:getHasLockedItems()
  if v2 then
    table.insert({}, self.unlockButton)
  end
  return v1
end
function ModHubExtraContentFrame:setBreadcrumbs(list)
  v2:setText(list[#list])
  v2:setBreadcrumbs(list)
end
function ModHubExtraContentFrame:reload()
  self:updateList()
end
function ModHubExtraContentFrame:updateList()
  local v1 = v1:getUnlockedItems()
  self.items = v1
  v1:reloadData()
  if 0 >= #self.items then
  end
  v1:setVisible(true)
  if #self.items ~= 0 then
  end
  v1:setVisible(true)
  self:setMenuButtonInfoDirty()
end
function ModHubExtraContentFrame:getMainElementSize()
  return self.itemDescriptionBox.size
end
function ModHubExtraContentFrame:getMainElementPosition()
  return self.itemDescriptionBox.absPosition
end
function ModHubExtraContentFrame:onClickLeft()
  v1:scrollTo(self.itemsList.firstVisibleItem - self.itemsList.itemsPerCol)
end
function ModHubExtraContentFrame:onClickRight()
  v1:scrollTo(self.itemsList.firstVisibleItem + self.itemsList.itemsPerCol)
end
function ModHubExtraContentFrame:onListSelectionChanged(list, section, index)
  if self.items[index] ~= nil then
    v5:setText(self.items[index].description)
  end
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.HOVER)
end
function ModHubExtraContentFrame:onButtonUnlock(defaultText)
  local v2 = v2:getText(ModHubExtraContentFrame.L10N_SYMBOL.UNLOCK_ITEM_KEY)
  local v3 = v3:getText(ModHubExtraContentFrame.L10N_SYMBOL.UNLOCK_ITEM_KEY)
  local v4 = v4:getText(ModHubExtraContentFrame.L10N_SYMBOL.UNLOCK_ITEM)
  if GS_PLATFORM_PC then
  else
  end
  TextInputDialog.show(self.onExtraContentKeyEntered, self, defaultText or "", v2, v3, v5, v4, nil, nil, false)
end
function ModHubExtraContentFrame:onExtraContentKeyEntered(text, ok, categoryId)
  if ok then
    local upperText = utf8ToUpper(text)
    local length = utf8Strlen(text)
    if GS_PLATFORM_PC and 20 <= length and length <= 24 then
      local v9 = v9:getText("extraContent_eshopWarning")
      local v11 = v11:getText("extraContent_eshopVisitShop")
      local v12 = v12:getText("button_back")
      YesNoDialog.show(self.onEShopOpen, self, v9, "", v11, v12, nil, nil, nil, text)
      return
    end
    local v6, v7 = v6:unlockItem(upperText, false)
    if v7 == ExtraContentSystem.UNLOCKED then
      self:updateList()
      v11 = v11:getText(ModHubExtraContentFrame.L10N_SYMBOL.UNLOCKED_ITEM)
      local v10 = string.format(v11, v6.title)
      InfoDialog.show(...)
      return
    end
    if v7 == ExtraContentSystem.ERROR_ALREADY_UNLOCKED then
      v10 = v10:getText(ModHubExtraContentFrame.L10N_SYMBOL.ALREADY_UNLOCKED_ITEM)
      v9 = string.format(v10, v6.title)
    elseif v7 == ExtraContentSystem.ERROR_KEY_INVALID_FORMAT then
      v9 = v9:getText(ModHubExtraContentFrame.L10N_SYMBOL.INVALID_KEY_FORMAT)
    else
      v9 = v9:getText(ModHubExtraContentFrame.L10N_SYMBOL.INVALID_KEY)
    end
    InfoDialog.show(v8, self.onButtonUnlock, self, nil, nil, nil, text)
  end
end
function ModHubExtraContentFrame:onEShopOpen(yes, text)
  if yes then
    openWebFile("lp/fs22-go-to-eshop.php", "key=" .. text)
    return
  end
  self:onButtonUnlock(text)
end
function ModHubExtraContentFrame:getNumberOfItemsInSection(list, section)
  if self.listSizeLimit ~= nil then
    return math.min(#self.items, self.listSizeLimit)
  end
  return categoryId
end
function ModHubExtraContentFrame:populateCellForItemInSection(list, section, index, cell)
  local iconElement = cell:getAttribute("icon")
  iconElement:setImageFilename(self.items[index].imageFilename)
  local v7 = cell:getAttribute("nameLabel")
  v7:setText(self.items[index].title)
end
ModHubExtraContentFrame.L10N_SYMBOL = {BUTTON_UNLOCK = "modHub_unlock", UNLOCK_ITEM = "modHub_unlock", UNLOCK_ITEM_KEY = "modHub_unlock_key", UNLOCKED_ITEM = "modHub_unlocked_item", ALREADY_UNLOCKED_ITEM = "modHub_already_unlocked_item", INVALID_KEY = "modHub_invalid_key", INVALID_KEY_FORMAT = "modHub_invalid_key_format"}
