-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalScreenTrailerFarm = {}
local AnimalScreenTrailerFarm_mt = Class(AnimalScreenTrailerFarm, AnimalScreenBase)
function AnimalScreenTrailerFarm.new(husbandry, trailer, customMt)
  if not customMt then
  end
  local v3 = v3(v4)
  v3.husbandry = husbandry
  v3.trailer = trailer
  return v3
end
function AnimalScreenTrailerFarm:initSourceItems()
  self.sourceItems = {}
  local v1 = v1:getClusters()
  if v1 ~= nil then
    for v5, v6 in ipairs(v1) do
      local v7 = AnimalItemStock.new(v6)
      table.insert(self.sourceItems, v7)
    end
  end
end
function AnimalScreenTrailerFarm:initTargetItems()
  self.targetItems = {}
  local v1 = v1:getClusters()
  if v1 ~= nil then
    for v5, v6 in ipairs(v1) do
      local v7 = AnimalItemStock.new(v6)
      table.insert(self.targetItems, v7)
    end
  end
end
function AnimalScreenTrailerFarm:getSourceName()
  local v1 = v1:getName()
  local v2 = v2:getCurrentAnimalType()
  if v2 == nil then
    return v1
  end
  local v3 = v3:getNumOfAnimals()
  local v4 = v4:getMaxNumOfAnimals(v2)
  return string.format("%s (%d / %d)", v1, v3, v4)
end
function AnimalScreenTrailerFarm:getTargetName()
  local v1 = v1:getText(AnimalScreenTrailerFarm.L10N_SYMBOL.FARM)
  local v2 = v2:getNumOfAnimals()
  local v3 = v3:getMaxNumOfAnimals()
  return string.format("%s (%d / %d)", v1, v2, v3)
end
function AnimalScreenTrailerFarm.getSourceActionText(v0)
  return v1:getText(AnimalScreenTrailerFarm.L10N_SYMBOL.MOVE_TO_FARM)
end
function AnimalScreenTrailerFarm.getTargetActionText(v0)
  return v1:getText(AnimalScreenTrailerFarm.L10N_SYMBOL.MOVE_TO_TRAILER)
end
function AnimalScreenTrailerFarm:getApplySourceConfirmationText(itemIndex, numItems)
  local v3 = v3:getText(AnimalScreenTrailerFarm.L10N_SYMBOL.CONFIRM_MOVE_TO_FARM)
  local v8 = self.sourceItems[itemIndex]:getName()
  return string.format(...)
end
function AnimalScreenTrailerFarm:getApplyTargetConfirmationText(itemIndex, numItems)
  local v3 = v3:getText(AnimalScreenTrailerFarm.L10N_SYMBOL.CONFIRM_MOVE_TO_TRAILER)
  local v8 = self.targetItems[itemIndex]:getName()
  return string.format(...)
end
function AnimalScreenTrailerFarm.getSourcePrice(v0, v1, v2)
  return false, 0, 0, 0
end
function AnimalScreenTrailerFarm.getTargetPrice(v0, v1, v2)
  return false, 0, 0, 0
end
function AnimalScreenTrailerFarm:getSourceMaxNumAnimals(itemIndex)
  if self.sourceItems[itemIndex] == nil then
    return 0
  end
  local maxNumAnimals = self:getMaxNumAnimals()
  local v6 = v2:getNumAnimals()
  local v7 = v7:getNumOfFreeAnimalSlots()
  return math.min(...)
end
function AnimalScreenTrailerFarm:getTargetMaxNumAnimals(itemIndex)
  if self.targetItems[itemIndex] == nil then
    return 0
  end
  local v6 = v2:getSubTypeIndex()
  local v4 = g_currentMission.animalSystem:getSubTypeByIndex(...)
  local v5 = g_currentMission.animalSystem:getTypeByIndex(v4.typeIndex)
  v6 = v6:getNumOfAnimals()
  local v7 = v7:getMaxNumOfAnimals(v5)
  local maxNumAnimals = self:getMaxNumAnimals()
  local v13 = v2:getNumAnimals()
  return math.min(...)
end
function AnimalScreenTrailerFarm:applySource(itemIndex, numItems)
  local v4 = self.sourceItems[itemIndex]:getClusterId()
  local v10 = v10:getOwnerFarmId()
  local v5 = AnimalMoveEvent.validate(...)
  if v5 ~= nil then
    local v8 = v8:getText(AnimalScreenTrailerFarm.MOVE_TO_FARM_ERROR_CODE_MAPPING[v5].text)
    self.errorCallback(...)
    return false
  end
  local v6 = v6:getText(AnimalScreenTrailerFarm.L10N_SYMBOL.MOVE_TO_FARM)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_SOURCE, v6)
  v7:subscribe(AnimalMoveEvent, self.onAnimalMovedToFarm, self)
  local v7 = v7:getServerConnection()
  local v9 = AnimalMoveEvent.new(self.trailer, self.husbandry, v4, numItems)
  v7:sendEvent(...)
  return true
end
function AnimalScreenTrailerFarm:onAnimalMovedToFarm(errorCode)
  v2:unsubscribe(AnimalMoveEvent, self)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_NONE, nil)
  local v5 = v5:getText(AnimalScreenTrailerFarm.MOVE_TO_FARM_ERROR_CODE_MAPPING[errorCode].text)
  self.sourceActionFinished(...)
end
function AnimalScreenTrailerFarm:applyTarget(itemIndex, numItems)
  local v4 = self.targetItems[itemIndex]:getClusterId()
  local v10 = v10:getOwnerFarmId()
  local v5 = AnimalMoveEvent.validate(...)
  if v5 ~= nil then
    local v8 = v8:getText(AnimalScreenTrailerFarm.MOVE_TO_TRAILER_ERROR_CODE_MAPPING[v5].text)
    self.errorCallback(...)
    return false
  end
  local v6 = v6:getText(AnimalScreenTrailerFarm.L10N_SYMBOL.MOVE_TO_TRAILER)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_TARGET, v6)
  v7:subscribe(AnimalMoveEvent, self.onAnimalMovedToTrailer, self)
  local v7 = v7:getServerConnection()
  local v9 = AnimalMoveEvent.new(self.husbandry, self.trailer, v4, numItems)
  v7:sendEvent(...)
  return true
end
function AnimalScreenTrailerFarm:onAnimalMovedToTrailer(errorCode)
  v2:unsubscribe(AnimalMoveEvent, self)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_NONE, nil)
  local v5 = v5:getText(AnimalScreenTrailerFarm.MOVE_TO_TRAILER_ERROR_CODE_MAPPING[errorCode].text)
  self.targetActionFinished(...)
end
function AnimalScreenTrailerFarm:onAnimalsChanged(obj, clusters)
  if obj ~= self.trailer then
    -- if v1 ~= v0.husbandry then goto L14 end
  end
  self:initItems()
  self.animalsChangedCallback()
end
AnimalScreenTrailerFarm.L10N_SYMBOL = {FARM = "ui_farm", MOVE_TO_FARM = "shop_moveToFarm", MOVE_TO_TRAILER = "shop_moveToTrailer", CONFIRM_MOVE_TO_FARM = "shop_doYouWantToMoveAnimalsToFarm", CONFIRM_MOVE_TO_TRAILER = "shop_doYouWantToMoveAnimalsToTrailer"}
{}[AnimalMoveEvent.MOVE_SUCCESS] = {warning = false, text = "shop_movedToTrailer"}
{}[AnimalMoveEvent.MOVE_ERROR_NO_PERMISSION] = {warning = true, text = "shop_messageNoPermissionToTradeAnimals"}
{}[AnimalMoveEvent.MOVE_ERROR_SOURCE_OBJECT_DOES_NOT_EXIST] = {warning = true, text = "shop_messageHusbandryDoesNotExist"}
{}[AnimalMoveEvent.MOVE_ERROR_TARGET_OBJECT_DOES_NOT_EXIST] = {warning = true, text = "shop_messageTrailerDoesNotExist"}
{}[AnimalMoveEvent.MOVE_ERROR_INVALID_CLUSTER] = {warning = true, text = "shop_messageInvalidCluster"}
{}[AnimalMoveEvent.MOVE_ERROR_ANIMAL_NOT_SUPPORTED] = {warning = true, text = "shop_messageAnimalTypeNotSupportedByTrailer"}
{}[AnimalMoveEvent.MOVE_ERROR_NOT_ENOUGH_SPACE] = {warning = true, text = "shop_messageNotEnoughSpaceAnimalsTrailer"}
{}[AnimalMoveEvent.MOVE_ERROR_NOT_ENOUGH_ANIMALS] = {warning = true, text = "shop_messageNotEnoughAnimals"}
AnimalScreenTrailerFarm.MOVE_TO_TRAILER_ERROR_CODE_MAPPING = {}
{}[AnimalMoveEvent.MOVE_SUCCESS] = {warning = false, text = "shop_movedToFarm"}
{}[AnimalMoveEvent.MOVE_ERROR_NO_PERMISSION] = {warning = true, text = "shop_messageNoPermissionToTradeAnimals"}
{}[AnimalMoveEvent.MOVE_ERROR_SOURCE_OBJECT_DOES_NOT_EXIST] = {warning = true, text = "shop_messageTrailerDoesNotExist"}
{}[AnimalMoveEvent.MOVE_ERROR_TARGET_OBJECT_DOES_NOT_EXIST] = {warning = true, text = "shop_messageHusbandryDoesNotExist"}
{}[AnimalMoveEvent.MOVE_ERROR_INVALID_CLUSTER] = {warning = true, text = "shop_messageInvalidCluster"}
{}[AnimalMoveEvent.MOVE_ERROR_ANIMAL_NOT_SUPPORTED] = {warning = true, text = "shop_messageAnimalTypeNotSupported"}
{}[AnimalMoveEvent.MOVE_ERROR_NOT_ENOUGH_SPACE] = {warning = true, text = "shop_messageNotEnoughSpaceAnimals"}
{}[AnimalMoveEvent.MOVE_ERROR_NOT_ENOUGH_ANIMALS] = {warning = true, text = "shop_messageNotEnoughAnimals"}
AnimalScreenTrailerFarm.MOVE_TO_FARM_ERROR_CODE_MAPPING = {}
