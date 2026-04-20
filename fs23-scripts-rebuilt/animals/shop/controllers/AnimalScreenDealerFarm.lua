-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalScreenDealerFarm = {}
local AnimalScreenDealerFarm_mt = Class(AnimalScreenDealerFarm, AnimalScreenBase)
function AnimalScreenDealerFarm.new(husbandry, customMt)
  if not customMt then
  end
  local v2 = v2(v3)
  v2.husbandry = husbandry
  local v3 = v3:getText(AnimalScreenDealerFarm.L10N_SYMBOL.BUY)
  v2.sourceActionText = v3
  v3 = v3:getText(AnimalScreenDealerFarm.L10N_SYMBOL.SELL)
  v2.targetActionText = v3
  v3 = v3:getText(AnimalScreenDealerFarm.L10N_SYMBOL.DEALER)
  v2.sourceTitle = v3
  return v2
end
function AnimalScreenDealerFarm:initSourceItems()
  self.sourceItems = {}
  local v1 = v1:getAnimalTypeIndex()
  local v2 = v2:getTypeByIndex(v1)
  if v2 ~= nil then
    for v6, v7 in ipairs(v2.subTypes) do
      local v8 = v8:getSubTypeByIndex(v7)
      for v12, v13 in ipairs(v8.visuals) do
        if not v13.store.canBeBought then
          continue
        end
        local v14 = AnimalItemNew.new(v8.subTypeIndex, v13.minAge)
        table.insert(self.sourceItems, v14)
      end
    end
  end
end
function AnimalScreenDealerFarm:initTargetItems()
  self.targetItems = {}
  local v1 = v1:getClusters()
  if v1 ~= nil then
    for v5, v6 in ipairs(v1) do
      local v7 = AnimalItemStock.new(v6)
      table.insert(self.targetItems, v7)
    end
  end
end
function AnimalScreenDealerFarm:getTargetName()
  local v1 = v1:getText(AnimalScreenDealerFarm.L10N_SYMBOL.FARM)
  local v2 = v2:getNumOfAnimals()
  local v3 = v3:getMaxNumOfAnimals()
  return string.format("%s (%d / %d)", v1, v2, v3)
end
function AnimalScreenDealerFarm:applySource(itemIndex, numItems)
  local v4 = self.sourceItems[itemIndex]:getSubTypeIndex()
  local v5 = self.sourceItems[itemIndex]:getAge()
  local v7 = self.sourceItems[itemIndex]:getPrice()
  local v8 = self.sourceItems[itemIndex]:getTranportationFee(numItems)
  local v16 = v16:getOwnerFarmId()
  local v9 = AnimalBuyEvent.validate(...)
  if v9 ~= nil then
    local v12 = v12:getText(AnimalScreenDealerFarm.BUY_ERROR_CODE_MAPPING[v9].text)
    self.errorCallback(...)
    return false
  end
  local v10 = v10:getText(AnimalScreenDealerFarm.L10N_SYMBOL.BUYING)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_SOURCE, v10)
  v11:subscribe(AnimalBuyEvent, self.onAnimalBought, self)
  local v11 = v11:getServerConnection()
  local v13 = AnimalBuyEvent.new(self.husbandry, v4, v5, numItems, v8, v7)
  v11:sendEvent(...)
  return true
end
function AnimalScreenDealerFarm:onAnimalBought(errorCode)
  v2:unsubscribe(AnimalBuyEvent, self)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_NONE, nil)
  local v5 = v5:getText(AnimalScreenDealerFarm.BUY_ERROR_CODE_MAPPING[errorCode].text)
  self.sourceActionFinished(...)
end
function AnimalScreenDealerFarm:applyTarget(itemIndex, numItems)
  local v4 = self.targetItems[itemIndex]:getPrice()
  local v6 = self.targetItems[itemIndex]:getTranportationFee(numItems)
  local v7 = self.targetItems[itemIndex]:getClusterId()
  local v8 = AnimalSellEvent.validate(self.husbandry, v7, numItems, v4 * numItems, -v6)
  if v8 ~= nil then
    local v11 = v11:getText(AnimalScreenDealerFarm.SELL_ERROR_CODE_MAPPING[v8].text)
    self.errorCallback(...)
    return false
  end
  local v9 = v9:getText(AnimalScreenDealerFarm.L10N_SYMBOL.SELLING)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_TARGET, v9)
  v10:subscribe(AnimalSellEvent, self.onAnimalSold, self)
  local v10 = v10:getServerConnection()
  local v12 = AnimalSellEvent.new(self.husbandry, v7, numItems, v6, v5)
  v10:sendEvent(...)
  return true
end
function AnimalScreenDealerFarm:onAnimalSold(errorCode)
  v2:unsubscribe(AnimalSellEvent, self)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_NONE, nil)
  local v5 = v5:getText(AnimalScreenDealerFarm.SELL_ERROR_CODE_MAPPING[errorCode].text)
  self.targetActionFinished(...)
end
function AnimalScreenDealerFarm:getSourcePrice(itemIndex, numItems)
  local v5 = self.sourceItems[itemIndex]:getPrice()
  local v6 = self.sourceItems[itemIndex]:getTranportationFee(numItems)
  return true, -v5 * numItems, -v6, -v5 * numItems + -v6
end
function AnimalScreenDealerFarm:getTargetPrice(itemIndex, numItems)
  local v4 = self.targetItems[itemIndex]:getPrice()
  local v6 = self.targetItems[itemIndex]:getTranportationFee(numItems)
  return true, v4 * numItems, -v6, v4 * numItems + -v6
end
function AnimalScreenDealerFarm:getApplySourceConfirmationText(itemIndex, numItems)
  local v3, v4, v5, v6 = self:getSourcePrice(itemIndex, numItems)
  local v7 = v7:getText(AnimalScreenDealerFarm.L10N_SYMBOL.CONFIRM_BUY)
  local v10 = math.abs(v6)
  local v8 = v8:formatMoney(v10, 0, true, true)
  local v13 = self.sourceItems[itemIndex]:getName()
  v10 = string.format(v7, numItems, v13, v8)
  return v10
end
function AnimalScreenDealerFarm:getApplyTargetConfirmationText(itemIndex, numItems)
  local v3, v4, v5, v6 = self:getTargetPrice(itemIndex, numItems)
  local v7 = v7:getText(AnimalScreenDealerFarm.L10N_SYMBOL.CONFIRM_SELL)
  local v10 = math.abs(v6)
  local v8 = v8:formatMoney(v10, 0, true, true)
  local v13 = self.targetItems[itemIndex]:getName()
  v10 = string.format(v7, numItems, v13, v8)
  return v10
end
function AnimalScreenDealerFarm:getSourceMaxNumAnimals(itemIndex)
  local maxNumAnimals = self:getMaxNumAnimals()
  local v5 = v5:getNumOfFreeAnimalSlots()
  return math.min(...)
end
function AnimalScreenDealerFarm:getTargetMaxNumAnimals(itemIndex)
  return self.targetItems[itemIndex]:getNumAnimals()
end
function AnimalScreenDealerFarm:onAnimalsChanged(husbandry, clusters)
  if husbandry == self.husbandry then
    self:initItems()
    self.animalsChangedCallback()
  end
end
function AnimalScreenDealerFarm.onAnimalBuyError(v0, v1)
  if AnimalScreenDealerFarm.BUY_ERROR_CODE_MAPPING[v1] ~= nil then
    local v4 = v4:getText(AnimalScreenDealerFarm.BUY_ERROR_CODE_MAPPING[v1].text)
    InfoDialog.show(...)
  end
end
AnimalScreenDealerFarm.L10N_SYMBOL = {DEALER = "animals_dealer", FARM = "ui_farm", CONFIRM_BUY = "shop_doYouWantToBuyAnimals", CONFIRM_SELL = "shop_doYouWantToSellAnimals", BUYING = "shop_messageBuyingAnimals", SELLING = "shop_messageSellingAnimals", BUY = "button_buy", SELL = "button_sell"}
{}[AnimalBuyEvent.BUY_SUCCESS] = {warning = false, text = "shop_messageBoughtAnimals"}
{}[AnimalBuyEvent.BUY_ERROR_NO_PERMISSION] = {warning = true, text = "shop_messageNoPermissionToTradeAnimals"}
{}[AnimalBuyEvent.BUY_ERROR_NOT_ENOUGH_MONEY] = {warning = true, text = "shop_messageNotEnoughMoneyToBuy"}
{}[AnimalBuyEvent.BUY_ERROR_NOT_ENOUGH_SPACE] = {warning = true, text = "shop_messageNotEnoughSpaceAnimals"}
{}[AnimalBuyEvent.BUY_ERROR_ANIMAL_NOT_SUPPORTED] = {warning = true, text = "shop_messageAnimalTypeNotSupported"}
{}[AnimalBuyEvent.BUY_ERROR_ANIMAL_GLOBAL_LIMIT_REACHED] = {warning = true, text = "shop_messageAnimalGlobalLimitReached"}
{}[AnimalBuyEvent.BUY_ERROR_OBJECT_DOES_NOT_EXIST] = {warning = true, text = "shop_messageHusbandryDoesNotExist"}
{}[AnimalBuyEvent.BUY_ERROR_NO_BARN_AVAILABLE] = {warning = true, text = "shop_messageHusbandryBuyBarnFirst"}
AnimalScreenDealerFarm.BUY_ERROR_CODE_MAPPING = {}
{}[AnimalSellEvent.SELL_SUCCESS] = {warning = false, text = "shop_messageSoldAnimals"}
{}[AnimalSellEvent.SELL_ERROR_NO_PERMISSION] = {warning = true, text = "shop_messageNoPermissionToTradeAnimals"}
{}[AnimalSellEvent.SELL_ERROR_INVALID_CLUSTER] = {warning = true, text = "shop_messageInvalidCluster"}
{}[AnimalSellEvent.SELL_ERROR_NOT_ENOUGH_ANIMALS] = {warning = true, text = "shop_messageNotEnoughAnimals"}
{}[AnimalSellEvent.SELL_ERROR_CANNOT_BE_SOLD] = {warning = true, text = "shop_messageCannotSellAnimal"}
{}[AnimalSellEvent.SELL_ERROR_OBJECT_DOES_NOT_EXIST] = {warning = true, text = "shop_messageHusbandryDoesNotExist"}
AnimalScreenDealerFarm.SELL_ERROR_CODE_MAPPING = {}
