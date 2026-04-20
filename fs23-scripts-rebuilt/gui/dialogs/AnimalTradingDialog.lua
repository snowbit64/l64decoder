-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalTradingDialog = {CONTROLS = {BUY_BUTTON = "buyButton", SELL_BUTTON = "sellButton", BACK_BUTTON = "backButton", INFO_PRICE = "infoPrice", INFO_ICON = "infoIcon", INFO_FEE = "infoFee", INFO_TOTAL = "infoTotal", NUM_ANIMALS = "numAnimalsElement", NUM_ANIMALS_TEXTS = "numAnimalsText"}}
local v0 = Class(AnimalTradingDialog, MessageDialog)
function AnimalTradingDialog.register()
  local v0 = AnimalTradingDialog.new()
  v1:loadGui("dataS/gui/dialogs/AnimalTradingDialog.xml", "AnimalTradingDialog", v0)
  AnimalTradingDialog.INSTANCE = v0
end
function AnimalTradingDialog.show(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
  if AnimalTradingDialog.INSTANCE ~= nil then
    AnimalTradingDialog.INSTANCE:setCallback(v0, v1)
    AnimalTradingDialog.INSTANCE:setAnimalIndex(v2)
    AnimalTradingDialog.INSTANCE:setIsHorse(v3)
    AnimalTradingDialog.INSTANCE:setInfoIcon(v4)
    AnimalTradingDialog.INSTANCE:setMaxAnimals(v5)
    AnimalTradingDialog.INSTANCE:setIsBuying(v6)
    AnimalTradingDialog.INSTANCE:setSelectionState(v7)
    AnimalTradingDialog.INSTANCE:setGetPriceFunc(v8)
    AnimalTradingDialog.INSTANCE:setButtonTexts(v9, v10, nil)
    v12:showDialog("AnimalTradingDialog")
  end
end
function AnimalTradingDialog.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2.inputDelay = 250
  v2:registerControls(AnimalTradingDialog.CONTROLS)
  return v2
end
function AnimalTradingDialog:createFromExistingGui(v1)
  local v2 = AnimalTradingDialog.new()
  v3:loadGui(self.xmlFilename, v1, v2)
  AnimalTradingDialog.show(self.callbackFunc, self.target, self.animalIndex, self.target.isHorse, self.infoIcon, self.maxAnimals, self.buying, self.selectionState, self.getPrice)
  return v2
end
function AnimalTradingDialog:onCreate()
  local v2 = v2:superClass()
  v2.onCreate(self)
  v1:setTexts({"1"})
  self.defaultBuyText = self.buyButton.text
  self.defaultSellText = self.sellButton.text
  self.defaultCancelText = self.backButton.text
end
function AnimalTradingDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self.inputDelay = self.time + 250
  self:updatePrice()
end
function AnimalTradingDialog:onClose()
  self:setDialogType(DialogElement.TYPE_QUESTION)
  self:setText(nil)
  self:setButtonTexts(self.defaultYesText, self.defaultNoText)
  local v2 = v2:superClass()
  v2.onClose(self)
end
function AnimalTradingDialog:sendCallback(v1)
  if self.inputDelay < self.time then
    self:close()
    if self.callbackFunc ~= nil then
      local v2 = v2:getState()
      if self.target ~= nil then
        self.callbackFunc(self.target, self.buying, v1, self.animalIndex, v2)
        return
      end
      self.callbackFunc(self.buying, v1, self.animalIndex, v2)
    end
  end
end
function AnimalTradingDialog:setCallback(v1, v2, v3)
  self.callbackFunc = v1
  self.target = v2
  self.callbackArgs = v3
end
function AnimalTradingDialog:setButtonTexts(v1, v2, v3)
  local v6 = Utils.getNoNil(v1, self.defaultBuyText)
  v4:setText(...)
  v6 = Utils.getNoNil(v2, self.defaultSellText)
  v4:setText(...)
  v6 = Utils.getNoNil(v3, self.defaultCancelText)
  v4:setText(...)
end
function AnimalTradingDialog:setAnimalIndex(v1)
  self.animalIndex = v1
end
function AnimalTradingDialog:setIsHorse(v1)
  if v1 then
    v2:setVisible(false)
    return
  end
  v2:setVisible(true)
  v2:setFocus(self.numAnimalsElement)
end
function AnimalTradingDialog:setInfoIcon(v1)
  v2:setImageFilename(v1.overlay.filename)
end
function AnimalTradingDialog:setMaxAnimals(v1)
  self.maxAnimals = v1
  -- TODO: structure LOP_FORNPREP (pc 8, target 19)
  local v8 = tostring(1)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 18, target 9)
  v3:setTexts({})
  v3:setState(1)
end
function AnimalTradingDialog:setIsBuying(v1)
  self.buying = v1
  v2:setVisible(self.buying)
  v2:setVisible(not self.buying)
end
function AnimalTradingDialog:setSelectionState(v1)
  self.selectionState = v1
end
function AnimalTradingDialog:setGetPriceFunc(v1)
  self.getPrice = v1
end
function AnimalTradingDialog.setTitle(v0)
end
function AnimalTradingDialog:updatePrice()
  local v3 = v3:getState()
  local v1, v2, v3, v4 = self.getPrice(...)
  v5:setValue(0)
  v5:setValue(0)
  v5:setValue(0)
  if v1 then
    -- if TextElement.FORMAT.CURRENCY then goto L36 end
  end
  v5:setFormat(TextElement.FORMAT.NONE)
  if v1 then
    -- if TextElement.FORMAT.CURRENCY then goto L47 end
  end
  v5:setFormat(TextElement.FORMAT.NONE)
  if v1 then
    -- if TextElement.FORMAT.CURRENCY then goto L58 end
  end
  v5:setFormat(TextElement.FORMAT.NONE)
  if v1 then
    -- if v2 then goto L67 end
  end
  v5:setValue("-")
  if v1 then
    -- if v3 then goto L76 end
  end
  v5:setValue("-")
  if v1 then
    -- if v4 then goto L85 end
  end
  v5:setValue("-")
end
function AnimalTradingDialog:onClickNumAnimals(v1)
  -- TODO: structure LOP_FORNPREP (pc 6, target 17)
  local v8 = tostring(1)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 16, target 7)
  v3:setTexts({})
  self:updatePrice()
end
function AnimalTradingDialog:onBuy(v1)
  self:sendCallback(true)
end
function AnimalTradingDialog:onSell(v1)
  self:sendCallback(true)
end
function AnimalTradingDialog:onClickBack(v1)
  self:sendCallback(false)
end
