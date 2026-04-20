-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WardrobeColorsFrame = {}
local WardrobeColorsFrame_mt = Class(WardrobeColorsFrame, TabbedMenuFrameElement)
WardrobeColorsFrame.CONTROLS = {"primaryList"}
function WardrobeColorsFrame.register()
  local v0 = WardrobeColorsFrame.new()
  v1:loadGui("dataS/gui/WardrobeColorsFrame.xml", "WardrobeColorsFrame", v0, true)
end
function WardrobeColorsFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(WardrobeColorsFrame.CONTROLS)
  local v4 = v4:getText(ShopMenu.L10N_SYMBOL.BUTTON_BACK)
  v2.backButtonInfo = {inputAction = InputAction.MENU_BACK, text = v4, callback = function()
    v0:onClickBack()
  end}
  v4 = v4:getText("button_select")
  v2.equipButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v4, callback = function()
    v0:onClickSelect()
  end}
  v2.hasCustomMenuButtons = true
  v2.menuButtonInfo = {v2.backButtonInfo, v2.equipButtonInfo}
  return v2
end
function WardrobeColorsFrame:createFromExistingGui(v1)
  local v2 = WardrobeColorsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function WardrobeColorsFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function WardrobeColorsFrame:initialize(delegate)
  self.delegate = delegate
end
function WardrobeColorsFrame:setPlayerStyle(playerStyle, savedPlayerStyle)
  self.playerStyle = playerStyle
  self.savedPlayerStyle = savedPlayerStyle
end
function WardrobeColorsFrame:setConfigAndItem(configName, item)
  self.configName = configName
  self.item = item
  v3:reloadData()
  v3:setFocus(self.primaryList)
  v3:setSelectedIndex(self.playerStyle[self.configName].color)
end
function WardrobeColorsFrame.onFrameOpen(v0)
  local v2 = v2:superClass()
  v2.onFrameOpen(v0)
end
function WardrobeColorsFrame:getNumberOfItemsInSection(list, section)
  if self.delegate ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L10
  end
  return 0
  return #self.item.colors
end
function WardrobeColorsFrame:populateCellForItemInSection(list, section, index, cell)
  local v6 = cell:getAttribute("icon")
  v6:setImageColor(nil, self.item.colors[index].primary[1], self.item.colors[index].primary[2], self.item.colors[index].primary[3], 1)
  v6 = cell:getAttribute("selected")
  if self.savedPlayerStyle[self.configName].selection == self.item.itemIndex and self.savedPlayerStyle[self.configName].color ~= index then
  end
  v6:setVisible(v8)
end
function WardrobeColorsFrame:onListSelectionChanged(list, section, index)
  self.playerStyle[self.configName].colorSetter(self.playerStyle, self.playerStyle[self.configName], index)
  v5:onColorSelectionChanged()
end
function WardrobeColorsFrame:onListHighlightChanged(list, section, index)
  if index == nil then
    v4:onColorSelectionCancelled(true)
    return
  end
  self.playerStyle[self.configName].colorSetter(self.playerStyle, self.playerStyle[self.configName], index)
  v5:onColorSelectionChanged()
end
function WardrobeColorsFrame:onClickSelect()
  v1:onColorSelectionConfirmed(true)
  v1:reloadData()
end
function WardrobeColorsFrame:onDoubleClickSelect()
  v1:onColorSelectionConfirmed()
end
function WardrobeColorsFrame:onClickBack()
  v1:onColorSelectionCancelled()
end
