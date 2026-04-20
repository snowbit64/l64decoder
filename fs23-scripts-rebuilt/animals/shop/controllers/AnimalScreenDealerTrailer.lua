-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalScreenDealerTrailer = {}
local AnimalScreenDealerTrailer_mt = Class(AnimalScreenDealerTrailer, AnimalScreenBase)
function AnimalScreenDealerTrailer.new(trailer, customMt)
  if not customMt then
  end
  local v2 = v2(v3)
  v2.trailer = trailer
  local v3 = v3:getText(AnimalScreenDealerTrailer.L10N_SYMBOL.BUY)
  v2.sourceActionText = v3
  v3 = v3:getText(AnimalScreenDealerTrailer.L10N_SYMBOL.SELL)
  v2.targetActionText = v3
  v3 = v3:getText(AnimalScreenDealerTrailer.L10N_SYMBOL.DEALER)
  v2.sourceTitle = v3
  return v2
end
function AnimalScreenDealerTrailer:initSourceItems()
  self.sourceItems = {}
  local v1 = v1:getCurrentAnimalType()
  local v2 = v2:getTypes()
  for v6, v7 in ipairs(v2) do
    if v1 ~= nil and not (v7 == v1) then
      continue
    end
    local v8 = v8:getSupportsAnimalType(v7.typeIndex)
    if not v8 then
      continue
    end
    for v11, v12 in ipairs(v7.subTypes) do
      local v13 = v13:getSubTypeByIndex(v12)
      for v17, v18 in ipairs(v13.visuals) do
        if not v18.store.canBeBought then
          continue
        end
        local v19 = AnimalItemNew.new(v13.subTypeIndex, v18.minAge)
        table.insert(self.sourceItems, v19)
      end
    end
  end
end
function AnimalScreenDealerTrailer:initTargetItems()
  self.targetItems = {}
  local v1 = v1:getClusters()
  if v1 ~= nil then
    for v5, v6 in ipairs(v1) do
      local v7 = AnimalItemStock.new(v6)
      table.insert(self.targetItems, v7)
    end
  end
end
function AnimalScreenDealerTrailer:getTargetName()
  local v1 = v1:getName()
  local v2 = v2:getCurrentAnimalType()
  if v2 == nil then
    return v1
  end
  local v3 = v3:getNumOfAnimals()
  local v4 = v4:getMaxNumOfAnimals(v2)
  return string.format("%s (%d / %d)", v1, v3, v4)
end
function AnimalScreenDealerTrailer:getSourcePrice(itemIndex, numItems)
  local v5 = self.sourceItems[itemIndex]:getPrice()
  return true, -v5 * numItems, 0, -v5 * numItems
end
function AnimalScreenDealerTrailer:getTargetPrice(itemIndex, numItems)
  local v4 = self.targetItems[itemIndex]:getPrice()
  return true, v4 * numItems, 0, v4 * numItems
end
function AnimalScreenDealerTrailer:getSourceMaxNumAnimals(itemIndex)
  local v6 = self.sourceItems[itemIndex]:getSubTypeIndex()
  local v4 = g_currentMission.animalSystem:getSubTypeByIndex(...)
  local v5 = g_currentMission.animalSystem:getTypeByIndex(v4.typeIndex)
  v6 = v6:getNumOfAnimals()
  local v7 = v7:getMaxNumOfAnimals(v5)
  local maxNumAnimals = self:getMaxNumAnimals()
  return math.min(maxNumAnimals, v7 - v6)
end
function AnimalScreenDealerTrailer:getTargetMaxNumAnimals(itemIndex)
  if self.targetItems[itemIndex] == nil then
    return 0
  end
  return v2:getNumAnimals()
end
function AnimalScreenDealerTrailer:getApplySourceConfirmationText(itemIndex, numItems)
  local v3, v4, v5, v6 = self:getSourcePrice(itemIndex, numItems)
  local v7 = v7:getText(AnimalScreenDealerTrailer.L10N_SYMBOL.CONFIRM_BUY)
  local v10 = math.abs(v6)
  local v8 = v8:formatMoney(v10, 0, true, true)
  local v13 = self.sourceItems[itemIndex]:getName()
  v10 = string.format(v7, numItems, v13, v8)
  return v10
end
function AnimalScreenDealerTrailer:getApplyTargetConfirmationText(itemIndex, numItems)
  local v3, v4, v5, v6 = self:getTargetPrice(itemIndex, numItems)
  local v7 = v7:getText(AnimalScreenDealerTrailer.L10N_SYMBOL.CONFIRM_SELL)
  local v10 = math.abs(v6)
  local v8 = v8:formatMoney(v10, 0, true, true)
  local v13 = self.targetItems[itemIndex]:getName()
  v10 = string.format(v7, numItems, v13, v8)
  return v10
end
function AnimalScreenDealerTrailer:applySource(itemIndex, numItems)
  local v4 = self.sourceItems[itemIndex]:getSubTypeIndex()
  local v5 = self.sourceItems[itemIndex]:getAge()
  local v7 = self.sourceItems[itemIndex]:getPrice()
  local v15 = v15:getOwnerFarmId()
  local v8 = AnimalBuyEvent.validate(...)
  if v8 ~= nil then
    local v11 = v11:getText(AnimalScreenDealerTrailer.BUY_ERROR_CODE_MAPPING[v8].text)
    self.errorCallback(...)
    return false
  end
  local v9 = v9:getText(AnimalScreenDealerTrailer.L10N_SYMBOL.BUYING)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_SOURCE, v9)
  v10:subscribe(AnimalBuyEvent, self.onAnimalBought, self)
  local v10 = v10:getServerConnection()
  local v12 = AnimalBuyEvent.new(self.trailer, v4, v5, numItems, v7, 0)
  v10:sendEvent(...)
  return true
end
function AnimalScreenDealerTrailer:onAnimalBought(errorCode)
  v2:unsubscribe(AnimalBuyEvent, self)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_NONE, nil)
  local v5 = v5:getText(AnimalScreenDealerTrailer.BUY_ERROR_CODE_MAPPING[errorCode].text)
  self.sourceActionFinished(...)
end
function AnimalScreenDealerTrailer:applyTarget(itemIndex, numItems)
  local v4 = self.targetItems[itemIndex]:getPrice()
  local v6 = self.targetItems[itemIndex]:getClusterId()
  local v7 = AnimalSellEvent.validate(self.trailer, v6, numItems, v4 * numItems, 0)
  if v7 ~= nil then
    local v10 = v10:getText(AnimalScreenDealerTrailer.SELL_ERROR_CODE_MAPPING[v7].text)
    self.errorCallback(...)
    return false
  end
  local v8 = v8:getText(AnimalScreenDealerTrailer.L10N_SYMBOL.SELLING)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_TARGET, v8)
  v9:subscribe(AnimalSellEvent, self.onAnimalSold, self)
  local v9 = v9:getServerConnection()
  local v11 = AnimalSellEvent.new(self.trailer, v6, numItems, v5, 0)
  v9:sendEvent(...)
  return true
end
function AnimalScreenDealerTrailer:onAnimalSold(errorCode)
  v2:unsubscribe(AnimalSellEvent, self)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_NONE, nil)
  local v5 = v5:getText(AnimalScreenDealerTrailer.SELL_ERROR_CODE_MAPPING[errorCode].text)
  self.targetActionFinished(...)
end
function AnimalScreenDealerTrailer:onAnimalsChanged(trailer, clusters)
  if trailer == self.trailer then
    self:initItems()
    self.animalsChangedCallback()
  end
end
function AnimalScreenDealerTrailer.onAnimalBuyError(v0, v1)
  if AnimalScreenDealerTrailer.BUY_ERROR_CODE_MAPPING[v1] ~= nil then
    local v4 = v4:getText(AnimalScreenDealerTrailer.BUY_ERROR_CODE_MAPPING[v1].text)
    InfoDialog.show(...)
  end
end
AnimalScreenDealerTrailer.L10N_SYMBOL = {DEALER = "animals_dealer", BUY = "button_buy", SELL = "button_sell", CONFIRM_BUY = "shop_doYouWantToBuyAnimals", CONFIRM_SELL = "shop_doYouWantToSellAnimals", BUYING = "shop_messageBuyingAnimals", SELLING = "shop_messageSellingAnimals"}
{}[AnimalBuyEvent.BUY_SUCCESS] = {warning = false, text = "shop_messageBoughtAnimals"}
{}[AnimalBuyEvent.BUY_ERROR_NO_PERMISSION] = {warning = true, text = "shop_messageNoPermissionToTradeAnimals"}
{}[AnimalBuyEvent.BUY_ERROR_NOT_ENOUGH_MONEY] = {warning = true, text = "shop_messageNotEnoughMoneyToBuy"}
{}[AnimalBuyEvent.BUY_ERROR_NOT_ENOUGH_SPACE] = {warning = true, text = "shop_messageNotEnoughSpaceAnimalsTrailer"}
{}[AnimalBuyEvent.BUY_ERROR_ANIMAL_NOT_SUPPORTED] = {warning = true, text = "shop_messageAnimalTypeNotSupportedByTrailer"}
{}[AnimalBuyEvent.BUY_ERROR_ANIMAL_GLOBAL_LIMIT_REACHED] = {warning = true, text = "shop_messageAnimalGlobalLimitReached"}
{}[AnimalBuyEvent.BUY_ERROR_OBJECT_DOES_NOT_EXIST] = {warning = true, text = "shop_messageTrailerDoesNotExist"}
{}[AnimalBuyEvent.BUY_ERROR_NO_BARN_AVAILABLE] = {warning = true, text = "shop_messageHusbandryBuyBarnFirst"}
AnimalScreenDealerTrailer.BUY_ERROR_CODE_MAPPING = {}
{}[AnimalSellEvent.SELL_SUCCESS] = {warning = false, text = "shop_messageSoldAnimals"}
{}[AnimalSellEvent.SELL_ERROR_NO_PERMISSION] = {warning = true, text = "shop_messageNoPermissionToTradeAnimals"}
{}[AnimalSellEvent.SELL_ERROR_INVALID_CLUSTER] = {warning = true, text = "shop_messageInvalidCluster"}
{}[AnimalSellEvent.SELL_ERROR_NOT_ENOUGH_ANIMALS] = {warning = true, text = "shop_messageNotEnoughAnimals"}
{}[AnimalSellEvent.SELL_ERROR_CANNOT_BE_SOLD] = {warning = true, text = "shop_messageCannotSellAnimal"}
{}[AnimalSellEvent.SELL_ERROR_OBJECT_DOES_NOT_EXIST] = {warning = true, text = "shop_messageTrailerDoesNotExist"}
AnimalScreenDealerTrailer.SELL_ERROR_CODE_MAPPING = {}
