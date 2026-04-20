-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WardrobeOutfitsFrame = {}
local WardrobeOutfitsFrame_mt = Class(WardrobeOutfitsFrame, TabbedMenuFrameElement)
WardrobeOutfitsFrame.CONTROLS = {"itemList", "title", "infoText"}
function WardrobeOutfitsFrame.register()
  local v0 = WardrobeOutfitsFrame.new()
  v1:loadGui("dataS/gui/WardrobeOutfitsFrame.xml", "WardrobeOutfitsFrame", v0, true)
end
function WardrobeOutfitsFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(WardrobeOutfitsFrame.CONTROLS)
  local v4 = v4:getText("button_confirm")
  v2.backButtonInfo = {inputAction = InputAction.MENU_BACK, text = v4}
  v4 = v4:getText("button_select")
  v2.equipButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v4, callback = function()
    v0:onClickSelect()
  end}
  v4 = v4:getText("button_selectColor")
  v2.colorButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v4, callback = function()
    v0:onClickSelectColor()
  end}
  v2.hasCustomMenuButtons = true
  v2.menuButtonInfo = {v2.backButtonInfo, v2.equipButtonInfo}
  v2.indexMapping = {}
  v2.isShowingColors = false
  return v2
end
function WardrobeOutfitsFrame:createFromExistingGui(v1)
  local v2 = WardrobeOutfitsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function WardrobeOutfitsFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function WardrobeOutfitsFrame:initialize(delegate, titleKey)
  self.delegate = delegate
  v3:setLocaKey(titleKey)
end
function WardrobeOutfitsFrame:setPlayerStyle(playerStyle, savedPlayerStyle)
  self.playerStyle = playerStyle
  self.savedPlayerStyle = savedPlayerStyle
  self:resetList()
end
function WardrobeOutfitsFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  if not self.isShowingColors then
    v1:onItemSelectionStart()
    self:resetList()
  end
end
function WardrobeOutfitsFrame:resetList()
  if self.playerStyle ~= nil then
    self.indexMapping = {{-1}, {}}
    local v1 = self:getCurrentlySelectedPresetIndex()
    self.currentlyUsedPreset = v1
    for v6, v7 in ipairs(self.playerStyle.presets) do
      if v7.brandName ~= nil then
        local v8 = v8:getBrandByName(v7.brandName)
        v7.brand = v8
        if v7.brand ~= nil then
          v7.brandName = nil
        end
      end
      if v7.brand ~= nil then
      else
      end
      if self.currentlyUsedPreset ~= v6 then
      end
      if not v7.isSelectable then
        continue
      end
      if not true and v7.extraContentId ~= nil then
        local v10 = v10:getIsItemIdUnlocked(v7.extraContentId)
        if not v10 then
          continue
        end
      end
      table.insert(self.indexMapping[v8], v6)
      if not v9 then
        continue
      end
    end
    v3:reloadData()
    v3:setSelectedItem(v2, v1)
  end
end
function WardrobeOutfitsFrame:getCurrentlySelectedPresetIndex()
  for v4, v5 in ipairs(self.playerStyle.presets) do
    local v6 = v6:getIsPresetUsed(v5)
    if not v6 then
      continue
    end
    return v4
  end
  return nil
end
function WardrobeOutfitsFrame:onFrameClose()
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
function WardrobeOutfitsFrame:updateSelectionButton()
  local item = self:getSelectedPreset()
  if item ~= nil then
    local v3 = self:getPresetHasColors(item)
  end
  if v2 then
    -- if v0.colorButtonInfo then goto L22 end
  end
  self.menuButtonInfo = {v4, v5, nil}
  self:setMenuButtonInfoDirty()
end
function WardrobeOutfitsFrame:getNumberOfSections()
  if 0 < #self.indexMapping[2] then
    return 2
  end
  return 1
end
function WardrobeOutfitsFrame.getTitleForSectionHeader(v0, v1, v2)
  if v2 == 2 then
    return v3:getText("character_section_branded")
  end
  return nil
end
function WardrobeOutfitsFrame:getNumberOfItemsInSection(list, section)
  return #self.indexMapping[section]
end
function WardrobeOutfitsFrame:populateCellForItemInSection(list, section, index, cell)
  if self.indexMapping[section][index] == -1 then
    local v6 = cell:getAttribute("icon")
    v6:setImageFilename(self.playerStyle.atlasFilename)
    local v10 = v10:getSlotUVs(1)
    v6:setImageUVs(...)
    local v7 = cell:getAttribute("selected")
    if self.currentlyUsedPreset ~= nil then
    end
    v7:setVisible(true)
    v7 = cell:getAttribute("hasColors")
    v7:setVisible(false)
    return
  end
  v7 = cell:getAttribute("icon")
  v7:setImageFilename(self.playerStyle.atlasFilename)
  local v11 = v11:getSlotUVs(self.playerStyle.presets[v5].uvSlot)
  v7:setImageUVs(...)
  local v8 = cell:getAttribute("selected")
  if self.currentlyUsedPreset ~= v5 then
  end
  v8:setVisible(true)
  v8 = cell:getAttribute("hasColors")
  v10 = self:getPresetHasColors(v6)
  v8:setVisible(...)
end
function WardrobeOutfitsFrame:onListSelectionChanged(list, section, index)
  local preset = self:getPresetFromItem(section, index)
  if preset == nil then
    v5:onItemSelectionCancelled()
  else
    if self.currentlyUsedPreset == self.indexMapping[section][index] then
    end
    v6:setPreset(v8, true)
    v6:onItemSelectionChanged()
  end
  self:updateSelectionButton()
end
function WardrobeOutfitsFrame:onListHighlightChanged(list, section, index)
  if index == nil then
    preset:onItemSelectionCancelled()
    return
  end
  local preset = self:getPresetFromItem(section, index)
  if preset == nil then
    v5:onItemSelectionCancelled()
    return
  end
  local v10 = self:getCurrentlySelectedPresetIndex()
  if self.currentlyUsedPreset == v10 then
  end
  v5:setPreset(v7, true)
  v5:onItemSelectionChanged()
end
function WardrobeOutfitsFrame:onClickSelect()
  v1:onItemSelectionConfirmed()
  local v1 = self:getCurrentlySelectedPresetIndex()
  self.currentlyUsedPreset = v1
  v1:reloadData()
end
function WardrobeOutfitsFrame:onClickSelectColor()
  local preset = self:getSelectedPreset()
  self.isShowingColors = true
  v4:onItemShowColors("onepieceConfig", self.playerStyle.onepieceConfig.items[preset.onepiece], function(self, preset)
    if not preset then
      u0.isShowingColors = false
    end
    if not self then
      u0.playerStyle.onepieceConfig.color = u1
      v2:onItemSelectionChanged()
      return
    end
    u1 = u0.playerStyle.onepieceConfig.color
  end)
end
function WardrobeOutfitsFrame:getSelectedPreset()
  return self:getPresetFromItem(self.itemList.selectedSectionIndex, self.itemList.selectedIndex)
end
function WardrobeOutfitsFrame:getPresetFromItem(section, index)
  if self.indexMapping[section][index] == -1 then
    return nil
  end
  return self.playerStyle.presets[v3]
end
function WardrobeOutfitsFrame:getPresetHasColors(preset)
  if preset.onepiece ~= nil and preset.onepiece ~= 0 then
    if 0 >= self.playerStyle.onepieceConfig.items[preset.onepiece].numColors then
    end
    return true
  end
  return false
end
