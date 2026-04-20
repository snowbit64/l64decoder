-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WardrobeItemsFrame = {}
local WardrobeItemsFrame_mt = Class(WardrobeItemsFrame, TabbedMenuFrameElement)
WardrobeItemsFrame.CONTROLS = {"itemList", "title", "infoText"}
function WardrobeItemsFrame.register()
  local v0 = WardrobeItemsFrame.new()
  v1:loadGui("dataS/gui/WardrobeItemsFrame.xml", "PricesFrame", v0, true)
end
function WardrobeItemsFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(WardrobeItemsFrame.CONTROLS)
  local v4 = v4:getText("button_confirm")
  v2.backButtonInfo = {inputAction = InputAction.MENU_BACK, text = v4}
  v4 = v4:getText("button_select")
  v2.selectButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v4, callback = function()
    v0:onClickSelect()
  end}
  v4 = v4:getText("button_select")
  v2.equipButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v4, callback = function()
    v0:onClickSelect()
  end}
  v4 = v4:getText("button_selectColor")
  v2.colorButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v4, callback = function()
    v0:onClickSelectColor()
  end}
  v2.hasCustomMenuButtons = true
  v2.menuButtonInfo = {v2.backButtonInfo, v2.selectButtonInfo}
  v2.indexMapping = {}
  v2.isShowingColors = false
  return v2
end
function WardrobeItemsFrame:createFromExistingGui(v1)
  local v2 = WardrobeItemsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function WardrobeItemsFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function WardrobeItemsFrame:initialize(configName, delegate, titleKey)
  self.configName = configName
  self.delegate = delegate
  v4:setLocaKey(titleKey)
end
function WardrobeItemsFrame:setPlayerStyle(playerStyle, savedPlayerStyle)
  self.playerStyle = playerStyle
  self.savedPlayerStyle = savedPlayerStyle
  self:resetList()
end
function WardrobeItemsFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  if not self.isShowingColors then
    v1:onItemSelectionStart()
    self:resetList()
  end
end
function WardrobeItemsFrame:resetList()
  self.indexMapping = {{}, {}}
  if self.playerStyle ~= nil and self.configName ~= nil then
    if self.playerStyle[self.configName].items[0] ~= nil then
      self.indexMapping[1][1] = 0
    end
    local v5 = self.playerStyle[self.configName].listMappingGetter(self.playerStyle)
    for v7, v8 in ipairs(...) do
      if v8 ~= self.playerStyle[self.configName].selection then
      end
      if v9 ~= nil and v9.brandName ~= nil then
        local v11 = v11:getBrandByName(v9.brandName)
        v9.brand = v11
        if v9.brand ~= nil then
          v9.brandName = nil
        end
      end
      if not v10 and v9.extraContentId ~= nil then
        v11 = v11:getIsItemIdUnlocked(v9.extraContentId)
        if not v11 then
          continue
        end
      end
      if v9.brand ~= nil then
      else
      end
      table.insert(self.indexMapping[v11], v8)
      if not v10 then
        continue
      end
    end
    if v1 == 0 then
      if self.configName ~= "beardConfig" then
        -- cmp-jump LOP_JUMPXEQKS R4 aux=0x80000017 -> L147
      end
      v4:setLocaKey("ui_noItemsAvailable")
      -- goto L159  (LOP_JUMP +12)
      v4:setLocaKey("ui_noItemsAvailable_onepieceSelected")
    else
      v4:setLocaKey()
    end
    self.menuButtonInfo = {self.backButtonInfo}
    if 0 < v1 then
      table.insert(self.menuButtonInfo, self.selectButtonInfo)
    end
    self:setMenuButtonInfoDirty()
    v4:reloadData()
    v4:setSelectedItem(v3, v2)
    if 0 < v1 then
      v4:setFocus(self.itemList)
    end
  end
end
function WardrobeItemsFrame:onFrameClose()
  if not self.isShowingColors then
    for v4, v5 in ipairs(self.itemList.elements) do
      if not not v5.isHeader then
        continue
      end
      local v6 = v5:getAttribute("icon")
      v6:setImageFilename(g_baseUIFilename)
    end
  end
  v2 = v2:superClass()
  v2.onFrameClose(self)
end
function WardrobeItemsFrame:updateSelectionButton()
  local item = self:getSelectedItem()
  self.menuButtonInfo = {self.backButtonInfo}
  if item ~= nil then
    if not self.equipButtonInfo then
    end
    table.insert(v3, v4)
  end
  if 0 < item.numColors then
    table.insert(self.menuButtonInfo, self.colorButtonInfo)
  end
  self:setMenuButtonInfoDirty()
end
function WardrobeItemsFrame:getNumberOfSections()
  if 0 < #self.indexMapping[2] then
    return 2
  end
  return 1
end
function WardrobeItemsFrame.getTitleForSectionHeader(v0, v1, v2)
  if v2 == 2 then
    return v3:getText("character_section_branded")
  end
  return nil
end
function WardrobeItemsFrame:getNumberOfItemsInSection(list, section)
  return #self.indexMapping[section]
end
function WardrobeItemsFrame:populateCellForItemInSection(list, section, index, cell)
  local v7 = cell:getAttribute("icon")
  if self.playerStyle[self.configName].items[self.indexMapping[section][index]].iconFilename ~= nil then
    v7:setImageFilename(self.playerStyle[self.configName].items[self.indexMapping[section][index]].iconFilename)
  else
    v7:setImageFilename(self.playerStyle.atlasFilename)
  end
  local v11 = v11:getSlotUVs(v6.uvSlot)
  v7:setImageUVs(...)
  local v8 = cell:getAttribute("selected")
  if self.savedPlayerStyle[self.configName].selection ~= v5 then
  end
  v8:setVisible(true)
  v8 = cell:getAttribute("hasColors")
  if 0 >= v6.numColors then
  end
  v8:setVisible(true)
end
function WardrobeItemsFrame:onListSelectionChanged(list, section, index)
  self:setItemToIndex(section, index)
  v4:onItemSelectionChanged()
  self:updateSelectionButton()
end
function WardrobeItemsFrame:onListHighlightChanged(list, section, index)
  if index == nil then
    v4:onItemSelectionCancelled()
    return
  end
  self:setItemToIndex(section, index)
  v4:onItemSelectionChanged()
end
function WardrobeItemsFrame:setItemToIndex(section, index)
  self.playerStyle[self.configName].setter(self.playerStyle, self.indexMapping[section][index])
  if self.savedPlayerStyle[self.configName].selection == self.indexMapping[section][index] and 0 < self.playerStyle[self.configName].items[self.indexMapping[section][index]].numColors then
    self.playerStyle[self.configName].color = self.savedPlayerStyle[self.configName].color
  end
end
function WardrobeItemsFrame:onClickSelect()
  self:setItemToIndex(self.itemList.selectedSectionIndex, self.itemList.selectedIndex)
  v1:onItemSelectionConfirmed()
  v1:reloadData()
end
function WardrobeItemsFrame:onClickSelectColor()
  local item = self:getSelectedItem()
  self.isShowingColors = true
  v3:onItemShowColors(self.configName, item, function(self, item)
    if not item then
      u0.isShowingColors = false
    end
    if not self then
      u0.playerStyle[u0.configName].color = u1
      v2:onItemSelectionChanged()
      v2:reloadData()
      return
    end
    u1 = u0.playerStyle[u0.configName].color
    v2:reloadData()
  end)
end
function WardrobeItemsFrame:getSelectedItem()
  return self.playerStyle[self.configName].items[self.indexMapping[self.itemList.selectedSectionIndex][self.itemList.selectedIndex]]
end
