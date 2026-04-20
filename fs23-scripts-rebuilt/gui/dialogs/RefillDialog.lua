-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RefillDialog = {CONTROLS = {FILL_AMOUNTS_ELEMENT = "fillAmountsElement", FILL_TYPE_TEXT = "fillTypeText", FILL_TYPE_ICON = "fillTypeIcon", FILL_TYPES_ELEMENT = "fillTypesElement", FILL_AMOUNT_TEXT = "fillAmountText", MESSAGE_BACKGROUND = "messageBackground"}}
local RefillDialog_mt = Class(RefillDialog, YesNoDialog)
RefillDialog.FILL_AMOUNTS = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000, 50000, 100000}
function RefillDialog.register()
  local v0 = RefillDialog.new()
  v1:loadGui("dataS/gui/dialogs/RefillDialog.xml", "RefillDialog", v0)
  RefillDialog.INSTANCE = v0
end
function RefillDialog.show(v0, v1, v2, v3)
  if RefillDialog.INSTANCE ~= nil then
    RefillDialog.INSTANCE:setFreeCapacities(v2, v3)
    RefillDialog.INSTANCE:setCallback(v0, v1)
    v5:showDialog("RefillDialog")
  end
end
function RefillDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.selectedFillAmount = nil
  v2.fillTypeAmountMapping = {}
  v2.amountMapping = {}
  v2.priceMapping = {}
  v2.selectedPrice = 0
  v2.priceFactor = 2
  v2.fillTypeMapping = {}
  v2.selectedFillType = nil
  v2.lastSelectedFillType = nil
  v2.areButtonsDisabled = false
  v2:registerControls(RefillDialog.CONTROLS)
  return v2
end
function RefillDialog:createFromExistingGui(v1)
  RefillDialog.register()
  RefillDialog.show(self.callbackFunc, self.target, self.freeCapacities, self.priceFactor)
end
function RefillDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  if self.fillTypesElement.disabled then
    v1:setFocus(self.fillAmountsElement)
    return
  end
  v1:unsetFocus(self.fillTypesElement)
  v1:setFocus(self.fillTypesElement)
end
function RefillDialog:onClickOk()
  if self.areButtonsDisabled then
    return true
  end
  local v1 = v1:getFillTypeByIndex(self.selectedFillType)
  local v4 = v4:formatMoney(self.selectedPrice)
  local v6 = v6:getText("ui_buyProductAmount")
  local v5 = string.format(v6, self.selectedFillAmount, v1.title, v4)
  YesNoDialog.show(self.onBuyYesNo, self, v5)
  return false
end
function RefillDialog:onBuyYesNo(yes)
  if yes then
    local v3 = v3:getMoney()
    if self.selectedPrice > v3 then
    end
    if true then
      self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
      self.callbackArgs = self.selectedFillAmount
      self.lastSelectedFillType = self.selectedFillType
      self:sendCallback(self.selectedFillType, self.selectedFillAmount, self.selectedPrice)
      return
    end
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.ERROR)
    local v4 = v4:getText("shop_messageNotEnoughMoneyToBuy")
    InfoDialog.show(...)
  end
end
function RefillDialog:onClickBack(forceBack, usedMenuButton)
  self:sendCallback(nil, nil, nil)
  return false
end
function RefillDialog:sendCallback(fillTypeIndex, amount, price)
  self:close()
  if self.callbackFunc ~= nil then
    if self.target ~= nil then
      self.callbackFunc(self.target, fillTypeIndex, amount, price)
      return
    end
    self.callbackFunc(fillTypeIndex, amount, price)
  end
end
function RefillDialog:onClickFillTypes(state)
  self.selectedFillType = self.fillTypeMapping[state]
  self:updateFillAmounts()
  local v2 = v2:getTextWidth()
  v3:setPosition(self.fillTypeText.position[1] - v2 * 0.5 - self.fillTypeIcon.margin[3], nil)
  local v3 = v3:getFillTypeByIndex(self.selectedFillType)
  v4:setImageFilename(v3.hudOverlayFilename)
end
function RefillDialog:onClickFillAmount(state)
  self.selectedFillAmount = self.amountMapping[state]
  self.selectedPrice = self.priceMapping[state]
end
function RefillDialog:setFreeCapacities(v1, v2)
  self.fillTypeMapping = {}
  self.fillTypeAmountMapping = {}
  if not v2 then
  end
  self.priceFactor = v3
  for v9, v10 in pairs(v1) do
    local v11 = v11:getFillTypeByIndex(v9)
    if v9 == self.lastSelectedFillType then
    end
    table.insert(v3, v11.title)
    table.insert(self.fillTypeMapping, v9)
    -- TODO: structure LOP_FORNPREP (pc 59, target 75)
    if RefillDialog.FILL_AMOUNTS[#RefillDialog.FILL_AMOUNTS] < v10 then
      table.insert({}, 1, RefillDialog.FILL_AMOUNTS[#RefillDialog.FILL_AMOUNTS])
    end
    -- TODO: structure LOP_FORNLOOP (pc 74, target 60)
    if 0 < v10 and v10 ~= math.huge and v10 ~= v12[#v12] then
      table.insert(v12, v10)
    end
    self.fillTypeAmountMapping[v9] = v12
  end
  if #v3 > 1 then
  end
  v6:setDisabled(true)
  v6:setTexts(v3)
  v6:setState(v4, true)
  self.freeCapacities = v1
  self.priceFactor = v2
end
function RefillDialog:updateFillAmounts()
  self.amountMapping = {}
  self.priceMapping = {}
  local v3 = v3:getFillTypeByIndex(self.selectedFillType)
  local v4 = v4:getText("unit_liter")
  for v8, v9 in ipairs(self.fillTypeAmountMapping[self.selectedFillType]) do
    local v12 = v12:formatMoney(v3.pricePerLiter * self.priceFactor * v9)
    local v13 = string.format("%d %s (%s)", v9, v4, v12)
    table.insert(v1, v13)
    table.insert(self.amountMapping, v9)
    table.insert(self.priceMapping, v3.pricePerLiter * self.priceFactor * v9)
  end
  v5:setTexts(v1)
  v5:setState(#v1, true)
  if #v2 ~= 0 then
  end
  self:setButtonDisabled(true)
  if #v2 ~= 0 then
  end
  v5:setDisabled(true)
  if #v2 == 0 then
    v5:setText("-")
  end
  if self.fillTypesElement.disabled and not self.fillAmountsElement.disabled then
    v5:unsetFocus(self.fillAmountsElement)
    v5:setFocus(self.fillAmountsElement)
  end
end
function RefillDialog:setButtonDisabled(disabled)
  v2:setVisible(disabled)
  self.areButtonsDisabled = disabled
  v2:setDisabled(disabled)
end
