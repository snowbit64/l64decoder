-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalScreen = {TRANSPORTATION_FEE = 200, SELECTION_NONE = 0, SELECTION_SOURCE = 1, SELECTION_TARGET = 2, CONTROLS = {INFO_BOX = "infoBox", CENTER_BOX = "centerBox", CENTER_BOX_MOBILE = "centerBoxMobile", CENTER_BOX_MONEY = "centerBoxMoney", BALANCE_TEXT = "balanceElement", BALANCE_TEXT_MOBILE = "balanceElementMobile", HEADER_SOURCE = "headerSource", HEADER_TARGET = "headerTarget", LIST_SOURCE = "listSource", LIST_TARGET = "listTarget", INFO_ICON = "infoIcon", INFO_ICON_MOBILE = "infoIconMobile", INFO_TITLE = "infoName", INFO_TITLE_MOBILE = "infoNameMobile", INFO_PRICE = "infoPrice", INFO_FEE = "infoFee", INFO_TOTAL = "infoTotal", INFO_TITLES = "infoTitle", INFO_TITLES_MOBILE = "infoTitleMobile", INFO_VALUES = "infoValue", INFO_VALUES_MOBILE = "infoValueMobile", INFO_DESCRIPTION = "infoDescription", INFO_DESCRIPTION_MOBILE = "infoDescriptionMobile", NUM_ANIMALS = "numAnimalsElement", BUTTON_APPLY = "buttonApply", BUTTON_SELECT = "buttonSelect", BUTTON_BUY = "buttonBuy", BUTTON_SELL = "buttonSell"}, INPUT_CONTEXT = "AnimalScreen"}
local AnimalScreen_mt = Class(AnimalScreen, ScreenElement)
function AnimalScreen.register()
  local v0 = AnimalScreen.new()
  v1:loadGui("dataS/gui/AnimalScreen.xml", "AnimalScreen", v0)
  return v0
end
function AnimalScreen.new(custom_mt)
  if not custom_mt then
  end
  local v1 = v1(v2, v3)
  v1:registerControls(AnimalScreen.CONTROLS)
  v1.isSourceSelected = true
  v1.isOpen = false
  v1.lastBalance = 0
  v1.numAnimals = 0
  v1.selectionState = AnimalScreen.SELECTION_NONE
  return v1
end
function AnimalScreen:createFromExistingGui(v1)
  local v2 = self:getController()
  local v3 = AnimalScreen.new()
  v4:delete()
  v4:delete()
  v3:setController(v2)
  v4:loadGui(self.xmlFilename, v1, v3)
  return v3
end
function AnimalScreen:setController(controller)
  self.controller = controller
  v2:setAnimalsChangedCallback(self.onAnimalsChanged, self)
  v2:setActionTypeCallback(self.onActionTypeChanged, self)
  v2:setSourceActionFinishedCallback(self.onSourceActionFinished, self)
  v2:setTargetActionFinishedCallback(self.onTargetActionFinished, self)
  v2:setErrorCallback(self.onError, self)
end
function AnimalScreen:getController()
  return self.controller
end
function AnimalScreen:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  if GS_IS_MOBILE_VERSION then
    self.balanceElement = self.balanceElementMobile
    self.infoIcon = self.infoIconMobile
    self.infoName = self.infoNameMobile
    self.infoValue = self.infoValueMobile
    self.infoTitle = self.infoTitleMobile
    self.infoDescription = self.infoDescriptionMobile
    v1:delete()
    v1:delete()
    self.buttonSelect = nil
    v1:delete()
    self.buttonApply = nil
    v1:delete()
    self.numAnimalsElement = nil
  elseif self.centerBoxMobile ~= nil then
    v1:delete()
    v1:delete()
    self.buttonBuy = nil
    v1:delete()
    self.buttonSell = nil
  end
  if self.numAnimalsElement ~= nil then
    v1:setTexts({"1"})
  end
  function self.listSource.onFocusEnter(...)
    u0(...)
    return self:onFocusEnterList(true, u1.listSource, u1.listTarget)
  end
  function self.listTarget.onFocusEnter(...)
    u0(...)
    return self:onFocusEnterList(false, u1.listTarget, u1.listSource)
  end
end
function AnimalScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self.isOpen = true
  self.isUpdating = false
  v1:setGameState(GameState.MENU_ANIMAL_SHOP)
  v1:pushArea(0, 0, 1, 1)
  self:updateScreen()
  self:updateSelectionState()
  local v1 = v1:getItemCount()
  if 0 < v1 then
    v1:setFocus(self.listSource)
  else
    v1 = v1:getItemCount()
    if 0 < v1 then
      v1:setFocus(self.listTarget)
    end
  end
  self:toggleCustomInputContext(true, AnimalScreen.INPUT_CONTEXT)
  self:registerActionEvents()
end
function AnimalScreen:onClose(element)
  local v3 = v3:superClass()
  v3.onClose(self)
  v2:reset()
  self.isOpen = false
  self:removeActionEvents()
  self:toggleCustomInputContext(false, AnimalScreen.INPUT_CONTEXT)
  v2:resetGameState()
  v2:showMoneyChange(MoneyType.NEW_ANIMALS_COST)
  v2:showMoneyChange(MoneyType.SOLD_ANIMALS)
  v2:unsubscribeAll(self)
  v2:popArea()
end
function AnimalScreen:onVehicleLeftTrigger()
  if self.isOpen then
    local v2 = v2:getText(AnimalScreen.SYMBOL_L10N.ERROR_TRAILER_LEFT)
    InfoDialog.show(v2, self.onClickOkVehicleLeft, self)
  end
end
function AnimalScreen:onClickOkVehicleLeft()
  self:onClickBack()
end
function AnimalScreen:updateSelectionState()
  if self.numAnimalsElement ~= nil then
    self:setSelectionState(AnimalScreen.SELECTION_NONE)
    return
  end
  local v1 = v1:getItemCount()
  if 0 < v1 then
    self:setSelectionState(AnimalScreen.SELECTION_SOURCE)
    return
  end
  v1 = v1:getItemCount()
  if 0 < v1 then
    self:setSelectionState(AnimalScreen.SELECTION_TARGET)
    return
  end
  self:setSelectionState(AnimalScreen.SELECTION_NONE)
end
function AnimalScreen:setSelectionState(state)
  if self.numAnimalsElement ~= nil then
    if state == AnimalScreen.SELECTION_NONE then
    end
    v2:setDisabled(true)
    if state == AnimalScreen.SELECTION_NONE then
    end
    v2:setDisabled(true)
    if state ~= AnimalScreen.SELECTION_NONE then
    end
    v2:setDisabled(true)
  end
  for v5, v6 in ipairs(self.listSource.elements) do
    local v7 = v6:getAttribute("highlight")
    if state == AnimalScreen.SELECTION_SOURCE then
      local v10 = v10:getSelectedElement()
      if v10 ~= v6 then
      end
    end
    v7:setVisible(v9)
  end
  for v5, v6 in ipairs(self.listTarget.elements) do
    v7 = v6:getAttribute("highlight")
    if state == AnimalScreen.SELECTION_TARGET then
      v10 = v10:getSelectedElement()
      if v10 ~= v6 then
      end
    end
    v7:setVisible(v9)
  end
  if state ~= AnimalScreen.SELECTION_NONE then
    v2 = v2:getMaxNumAnimals()
    if state == AnimalScreen.SELECTION_SOURCE then
      if self.buttonApply ~= nil then
        v5 = v5:getSourceActionText()
        v3:setText(...)
      elseif self.buttonBuy then
        v5 = v5:getSourceActionText()
        v3:setText(...)
      end
      local v8 = v8:getSourceMaxNumAnimals(self.listSource.selectedIndex)
      v6 = math.min(...)
      v4 = math.max(...)
    elseif state == AnimalScreen.SELECTION_TARGET then
      if self.buttonApply ~= nil then
        v5 = v5:getTargetActionText()
        v3:setText(...)
      elseif self.buttonSell ~= nil then
        v5 = v5:getTargetActionText()
        v3:setText(...)
      end
      v8 = v8:getTargetMaxNumAnimals(self.listTarget.selectedIndex)
      v6 = math.min(...)
      v4 = math.max(...)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L297
    -- TODO: structure LOP_FORNPREP (pc 241, target 252)
    local v9 = tostring(1)
    table.insert(...)
    -- TODO: structure LOP_FORNLOOP (pc 251, target 242)
    v4:setTexts({})
    v4:setFocus(self.numAnimalsElement)
  elseif self.selectionState == AnimalScreen.SELECTION_SOURCE then
    v2:setFocus(self.listSource)
  else
    if self.selectionState == AnimalScreen.SELECTION_TARGET then
      v2:setFocus(self.listTarget)
    end
  end
  if self.buttonBuy ~= nil then
    if state ~= AnimalScreen.SELECTION_SOURCE then
    end
    v2:setVisible(true)
    if state ~= AnimalScreen.SELECTION_TARGET then
    end
    v2:setVisible(true)
  else
    if state == AnimalScreen.SELECTION_NONE then
      v5 = v5:getItemCount()
      if 0 >= v5 then
        v5 = v5:getItemCount()
        if 0 >= v5 then
        end
      end
    end
    v2:setVisible(v4)
    if state == AnimalScreen.SELECTION_NONE then
    end
    v2:setVisible(true)
  end
  self.selectionState = state
  if self.numAnimalsElement ~= nil then
    self:updatePrice()
  end
end
function AnimalScreen:updateBalanceText()
  if g_currentMission ~= nil then
    local v2 = v2:getMoney()
  end
  if self.lastBalance ~= state then
    self.lastBalance = state
    v2:setValue(state)
    if 0 < state then
      v2:applyProfile(AnimalScreen.PROFILE.POSITIVE_BALANCE)
      return
    end
    v2:applyProfile(AnimalScreen.PROFILE.NEGATIVE_BALANCE)
  end
end
function AnimalScreen:updatePrice()
  local v3 = v3:getState()
  local state, v2, v3, v4 = self:getPrice(...)
  v5:setValue(0)
  v5:setValue(0)
  v5:setValue(0)
  if state then
    -- if TextElement.FORMAT.CURRENCY then goto L34 end
  end
  v5:setFormat(TextElement.FORMAT.NONE)
  if state then
    -- if TextElement.FORMAT.CURRENCY then goto L45 end
  end
  v5:setFormat(TextElement.FORMAT.NONE)
  if state then
    -- if TextElement.FORMAT.CURRENCY then goto L56 end
  end
  v5:setFormat(TextElement.FORMAT.NONE)
  if state then
    -- if v2 then goto L65 end
  end
  v5:setValue("-")
  if state then
    -- if v3 then goto L74 end
  end
  v5:setValue("-")
  if state then
    -- if v4 then goto L83 end
  end
  v5:setValue("-")
end
function AnimalScreen:updateInfoBox(isSourceSelected)
  if isSourceSelected == nil then
  end
  if isSourceSelected then
    local v3 = v3:getSourceItems()
  else
    v3 = v3:getTargetItems()
  end
  if v2 == nil then
  end
  v3:setVisible(true)
  if v2 == nil then
  end
  v3:setVisible(true)
  if v2 ~= nil then
    local v5 = v2:getFilename()
    v3:setImageFilename(...)
    v5 = v2:getName()
    v3:setText(...)
    v5 = v2:getDescription()
    v3:setText(...)
    v3 = v2:getInfos()
    for v7, v8 in ipairs(self.infoTitle) do
      if v3[v7] == nil then
      end
      v8:setVisible(true)
      if v9 == nil then
      end
      v10:setVisible(true)
      if not (v9 ~= nil) then
        continue
      end
      v8:setText(v3[v7].title)
      v10:setText(v3[v7].value)
    end
    if self.numAnimalsElement ~= nil then
      self:updatePrice()
    end
  end
end
function AnimalScreen:getPrice(state)
  if self.isSourceSelected then
    local v7, v8, v9, v10 = v7:getSourcePrice(self.listSource.selectedIndex, state)
    return v7, v8, v9, v10
  end
  v7, v8, v9, v10 = v7:getTargetPrice(self.listTarget.selectedIndex, state)
  return v7, v8, v9, v10
end
function AnimalScreen:updateScreen()
  self:updateBalanceText()
  state:reloadData()
  state:reloadData()
  local v3 = v3:getSourceName()
  state:setText(...)
  v3 = v3:getTargetName()
  state:setText(...)
  if self.numAnimalsElement ~= nil then
    self:updatePrice()
  end
  self:updateInfoBox()
end
function AnimalScreen:onAnimalsChanged()
  if not self.isUpdating then
    self:updateScreen()
  end
end
function AnimalScreen.onActionTypeChanged(v0, state, v2)
  if v2 ~= nil then
    MessageDialog.show(nil, nil, v2)
    return
  end
  MessageDialog.hide()
end
function AnimalScreen:onSourceActionFinished(isWarning, text)
  if isWarning then
  end
  InfoDialog.show(text, nil, nil, v3)
  self:updateSelectionState()
end
function AnimalScreen:onTargetActionFinished(isWarning, text)
  if isWarning then
  end
  InfoDialog.show(text, nil, nil, v3)
  self:updateSelectionState()
end
function AnimalScreen.onError(v0, state)
  InfoDialog.show(state, nil, nil, DialogElement.TYPE_WARNING)
end
function AnimalScreen:onSourceListSelectionChanged(list, section, index)
  if not self.isSourceSelected then
    self:onFocusEnterList(true, list, self.listTarget)
  end
  self:updateInfoBox(true)
  self:updateSelectionState()
end
function AnimalScreen:onTargetListSelectionChanged(list, section, index)
  if self.isSourceSelected then
    self:onFocusEnterList(false, list, self.listSource)
  end
  self:updateInfoBox(false)
end
function AnimalScreen:onClickBack()
  local v2 = v2:superClass()
  v2.onClickBack(self)
  if self.numAnimalsElement ~= nil then
    -- if v0.selectionState ~= AnimalScreen.SELECTION_NONE then goto L33 end
  end
  state:setFocus(self.listSource)
  self:changeScreen(nil)
  return
  self:setSelectionState(AnimalScreen.SELECTION_NONE)
end
function AnimalScreen:onClickSelect()
  if self.isSourceSelected then
    self:setSelectionState(AnimalScreen.SELECTION_SOURCE)
  else
    self:setSelectionState(AnimalScreen.SELECTION_TARGET)
  end
  return true
end
function AnimalScreen:onAnimalsTradedCallback(state, v2, v3, v4)
  self.numAnimals = v4
  if v2 then
    if state then
      local v8 = v8:getApplySourceConfirmationText(v3, v4)
      YesNoDialog.show(...)
      -- goto L34  (LOP_JUMP +16)
    end
    v8 = v8:getApplyTargetConfirmationText(v3, v4)
    YesNoDialog.show(...)
  else
    return false
  end
  return true
end
function AnimalScreen:onClickApply()
  local state = state:getState()
  self.numAnimals = state
  if self.selectionState == AnimalScreen.SELECTION_SOURCE then
    local v2 = v2:getState()
    local v6 = v6:getApplySourceConfirmationText(self.listSource.selectedIndex, v2)
    YesNoDialog.show(...)
  elseif self.selectionState == AnimalScreen.SELECTION_TARGET then
    v2 = v2:getState()
    v6 = v6:getApplyTargetConfirmationText(self.listTarget.selectedIndex, v2)
    YesNoDialog.show(...)
  else
    return false
  end
  return true
end
function AnimalScreen:onClickNumAnimals()
  self:updatePrice()
end
function AnimalScreen:onClickBuy()
  local v2 = v2:getSourceMaxNumAnimals(self.listSource.selectedIndex)
  if 0 < v2 then
    local v3 = v3:getSourceActionText()
    AnimalTradingDialog.show(self.onAnimalsTradedCallback, self, self.listSource.selectedIndex, self.isHorse, self.infoIcon, v2, true, self.selectionState, self.getPrice, v3, nil)
    return
  end
  v3:onAnimalBuyError(AnimalBuyEvent.BUY_ERROR_NOT_ENOUGH_SPACE)
end
function AnimalScreen:onClickSell()
  local v2 = v2:getTargetMaxNumAnimals(self.listTarget.selectedIndex)
  local v3 = v3:getTargetActionText()
  AnimalTradingDialog.show(self.onAnimalsTradedCallback, self, self.listTarget.selectedIndex, self.isHorse, self.infoIcon, v2, false, self.selectionState, self.getPrice, nil, v3)
end
function AnimalScreen:onYesNoSource(yes)
  if yes then
    v3:applySource(self.listSource.selectedIndex, self.numAnimals)
  end
end
function AnimalScreen:onYesNoTarget(yes)
  if yes then
    v3:applyTarget(self.listTarget.selectedIndex, self.numAnimals)
  end
end
function AnimalScreen:registerActionEvents()
  state:registerActionEvent(InputAction.AXIS_MTO_SCROLL, self, self.onInputScrollMTO, false, false, true, true)
end
function AnimalScreen.removeActionEvents(v0)
  state:removeActionEventsByTarget(v0)
end
function AnimalScreen:onInputScrollMTO(_, inputValue)
  if self.selectionState ~= AnimalScreen.SELECTION_NONE and inputValue ~= 0 then
    local v6 = v6:getState()
    v3:setState(v6 + inputValue)
    self:updatePrice()
  end
end
function AnimalScreen:onFocusEnterList(isEnteringSourceList, enteredList, previousList)
  local v4 = enteredList:getItemCount()
  if v4 == 0 then
    v4 = previousList:getItemCount()
    if 0 < v4 then
      v4:setFocus(previousList)
    end
    return
  end
  v4:unsetFocus(previousList)
  self.isSourceSelected = isEnteringSourceList
  self:updateInfoBox(isEnteringSourceList)
  if isEnteringSourceList then
    self:setSelectionState(AnimalScreen.SELECTION_SOURCE)
  else
    self:setSelectionState(AnimalScreen.SELECTION_TARGET)
  end
  if enteredList.selectedIndex == 0 then
    enteredList:setSelectedIndex(1)
  end
end
function AnimalScreen:getNumberOfItemsInSection(list, section)
  if not self.isOpen then
    return 0
  end
  if list == self.listSource then
    local v4 = v4:getSourceItems()
    return #v4
  end
  v4 = v4:getTargetItems()
  return #v4
end
function AnimalScreen:populateCellForItemInSection(list, section, index, cell)
  if list == self.listSource then
    local v6 = v6:getSourceItems()
  else
    v6 = v6:getTargetItems()
  end
  local v8 = v5:getSubTypeIndex()
  v6 = v6:getSubTypeByIndex(...)
  if v6.typeIndex ~= AnimalType.HORSE then
  end
  self.isHorse = true
  local v7 = cell:getAttribute("icon")
  local v9 = v5:getFilename()
  v7:setImageFilename(...)
  v7 = cell:getAttribute("name")
  v9 = v5:getName()
  v7:setText(...)
  v7 = cell:getAttribute("price")
  v9 = v5:getPrice()
  v7:setValue(...)
  v7 = cell:getAttribute("highlight")
  v7:setVisible(false)
  v7 = cell:getAttribute("numAnimals")
  if v7 ~= nil then
    if not self.isHorse then
      v7 = cell:getAttribute("numAnimals")
      v9 = v5:getNumAnimals()
      v7:setValue(...)
      return
    end
    v7 = cell:getAttribute("numAnimals")
    v7:setValue("")
  end
end
function AnimalScreen:onListSelectionChanged(list, section, index)
  if self.isAutoUpdatingList then
    return
  end
  if list == self.listSource then
    self:onSourceListSelectionChanged(list, section, index)
    return
  end
  self:onTargetListSelectionChanged(list, section, index)
end
function AnimalScreen:onSourceListDoubleClick(list, section, index)
  self:setSelectionState(AnimalScreen.SELECTION_SOURCE)
end
function AnimalScreen:onSourceListClick(state, v2, v3)
  if self.numAnimalsElement == nil then
    self:setSelectionState(AnimalScreen.SELECTION_SOURCE)
  end
end
function AnimalScreen:onTargetListClick(state, v2, v3)
  if self.numAnimalsElement == nil then
    self:setSelectionState(AnimalScreen.SELECTION_TARGET)
  end
end
function AnimalScreen:onTargetListDoubleClick(list, section, index)
  self:setSelectionState(AnimalScreen.SELECTION_TARGET)
end
function AnimalScreen:updateChangedList(listElement, fallbackListElement, restoreSelection)
  self.isAutoUpdatingList = true
  listElement:reloadData()
  self.isAutoUpdatingList = false
  local v4 = listElement:getItemCount()
  if v4 == 0 then
    v4:setFocus(fallbackListElement)
    fallbackListElement:setSelectedIndex(1)
  end
  self:updateInfoBox()
  if self.numAnimalsElement ~= nil then
    self:updatePrice()
  end
end
function AnimalScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self:updateBalanceText()
end
AnimalScreen.PROFILE = {POSITIVE_BALANCE = "shopMoney", NEGATIVE_BALANCE = "shopMoneyNeg"}
AnimalScreen.SYMBOL_L10N = {TEXT_BUY = "button_buy", TEXT_SELL = "button_sell", TEXT_LOAD = "button_load", TEXT_UNLOAD = "button_unload", TEXT_PIECES = "unit_pieces", ERROR_TRAILER_LEFT = "animals_transportTargetLeftTrigger"}
