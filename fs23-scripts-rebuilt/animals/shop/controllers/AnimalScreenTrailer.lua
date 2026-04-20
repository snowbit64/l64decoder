-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalScreenTrailer = {}
local AnimalScreenTrailer_mt = Class(AnimalScreenTrailer, AnimalScreenBase)
function AnimalScreenTrailer.new(trailer, customMt)
  if not customMt then
  end
  local v2 = v2(v3)
  v2.trailer = trailer
  v3:setAnimalScreenController(v2)
  return v2
end
function AnimalScreenTrailer:reset()
  v1:setAnimalScreenController(nil)
  local v2 = v2:superClass()
  v2.reset(self)
end
function AnimalScreenTrailer:initSourceItems()
  self.sourceItems = {}
  local v1 = v1:getClusters()
  if v1 ~= nil then
    for v5, v6 in ipairs(v1) do
      local v7 = AnimalItemStock.new(v6)
      table.insert(self.sourceItems, v7)
    end
  end
end
function AnimalScreenTrailer:initTargetItems()
  self.targetItems = {}
  self.clusterToVehicle = {}
  local v1 = v1:getRideablesInTrigger()
  if v1 ~= nil then
    for v5, v6 in ipairs(v1) do
      local v7 = v6:getCluster()
      local v8 = AnimalItemStock.new(v7)
      table.insert(self.targetItems, v8)
      self.clusterToVehicle[v7] = v6
    end
  end
end
function AnimalScreenTrailer:getSourceName()
  local v1 = v1:getName()
  local v2 = v2:getCurrentAnimalType()
  if v2 == nil then
    return v1
  end
  local v3 = v3:getNumOfAnimals()
  local v4 = v4:getMaxNumOfAnimals(v2)
  return string.format("%s (%d / %d)", v1, v3, v4)
end
function AnimalScreenTrailer.getTargetName(v0)
  return ""
end
function AnimalScreenTrailer.getSourceActionText(v0)
  return v1:getText(AnimalScreenTrailer.L10N_SYMBOL.MOVE_TO_SPAWN_PLACE)
end
function AnimalScreenTrailer.getTargetActionText(v0)
  return v1:getText(AnimalScreenTrailer.L10N_SYMBOL.MOVE_TO_TRAILER)
end
function AnimalScreenTrailer:getApplySourceConfirmationText(itemIndex, numItems)
  local v3 = v3:getText(AnimalScreenTrailer.L10N_SYMBOL.CONFIRM_MOVE_TO_SPAWN_PLACE)
  local v7 = self.sourceItems[itemIndex]:getName()
  return string.format(...)
end
function AnimalScreenTrailer:getApplyTargetConfirmationText(itemIndex, numItems)
  local v3 = v3:getText(AnimalScreenTrailer.L10N_SYMBOL.CONFIRM_MOVE_TO_TRAILER)
  local v7 = self.targetItems[itemIndex]:getName()
  return string.format(...)
end
function AnimalScreenTrailer.getSourcePrice(v0, v1, v2)
  return false, 0, 0, 0
end
function AnimalScreenTrailer.getTargetPrice(v0, v1, v2)
  return false, 0, 0, 0
end
function AnimalScreenTrailer.getSourceMaxNumAnimals(v0, v1)
  return 1
end
function AnimalScreenTrailer.getTargetMaxNumAnimals(v0, v1)
  return 1
end
function AnimalScreenTrailer:applySource(itemIndex, numItems)
  local v4 = self.sourceItems[itemIndex]:getClusterId()
  local v5 = AnimalUnloadEvent.validate(self.trailer, v4)
  if v5 ~= nil then
    local v8 = v8:getText(AnimalScreenTrailer.UNLOAD_ERROR_CODE_MAPPING[v5].text)
    self.errorCallback(...)
    return false
  end
  local v6 = v6:getText(AnimalScreenTrailer.L10N_SYMBOL.MOVE_TO_SPAWN_PLACE)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_TARGET, v6)
  v7:subscribe(AnimalUnloadEvent, self.onAnimalMovedToSpawnPlace, self)
  local v7 = v7:getServerConnection()
  local v9 = AnimalUnloadEvent.new(self.trailer, v4)
  v7:sendEvent(...)
  return true
end
function AnimalScreenTrailer:onAnimalMovedToSpawnPlace(errorCode)
  v2:unsubscribe(AnimalUnloadEvent, self)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_NONE, nil)
  local v5 = v5:getText(AnimalScreenTrailer.UNLOAD_ERROR_CODE_MAPPING[errorCode].text)
  self.sourceActionFinished(...)
end
function AnimalScreenTrailer:applyTarget(itemIndex, numItems)
  local v4 = self.targetItems[itemIndex]:getCluster()
  local v9 = v9:getOwnerFarmId()
  local v6 = AnimalLoadEvent.validate(...)
  if v6 ~= nil then
    v9 = v9:getText(AnimalScreenTrailer.LOAD_ERROR_CODE_MAPPING[v6].text)
    self.errorCallback(...)
    return false
  end
  local v7 = v7:getText(AnimalScreenTrailer.L10N_SYMBOL.MOVE_TO_TRAILER)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_TARGET, v7)
  v8:subscribe(AnimalLoadEvent, self.onAnimalLoadedToTrailer, self)
  local v8 = v8:getServerConnection()
  local v10 = AnimalLoadEvent.new(self.trailer, v5)
  v8:sendEvent(...)
  return true
end
function AnimalScreenTrailer:onAnimalLoadedToTrailer(errorCode)
  v2:unsubscribe(AnimalLoadEvent, self)
  self.actionTypeCallback(AnimalScreenBase.ACTION_TYPE_NONE, nil)
  local v5 = v5:getText(AnimalScreenTrailer.LOAD_ERROR_CODE_MAPPING[errorCode].text)
  self.targetActionFinished(...)
end
function AnimalScreenTrailer:onAnimalsChanged(obj, clusters)
  if obj == self.trailer then
    self:initItems()
    self.animalsChangedCallback()
  end
end
AnimalScreenTrailer.L10N_SYMBOL = {MOVE_TO_SPAWN_PLACE = "shop_moveToSpawnPlace", MOVE_TO_TRAILER = "shop_moveToTrailer", CONFIRM_MOVE_TO_SPAWN_PLACE = "shop_doYouWantToMoveAnimalToSpawnPlace", CONFIRM_MOVE_TO_TRAILER = "shop_doYouWantToMoveAnimalToTrailer"}
{}[AnimalLoadEvent.LOAD_SUCCESS] = {warning = false, text = "shop_movedToTrailer"}
{}[AnimalLoadEvent.LOAD_ERROR_NO_PERMISSION] = {warning = true, text = "shop_messageNoPermissionToTradeAnimals"}
{}[AnimalLoadEvent.LOAD_ERROR_TRAILER_DOES_NOT_EXIST] = {warning = true, text = "shop_messageTrailerDoesNotExist"}
{}[AnimalLoadEvent.LOAD_ERROR_RIDEABLE_DOES_NOT_EXIST] = {warning = true, text = "shop_messageRideableDoesNotExist"}
{}[AnimalLoadEvent.LOAD_ERROR_INVALID_CLUSTER] = {warning = true, text = "shop_messageInvalidCluster"}
{}[AnimalLoadEvent.LOAD_ERROR_ANIMAL_NOT_SUPPORTED] = {warning = true, text = "shop_messageAnimalTypeNotSupportedByTrailer"}
{}[AnimalLoadEvent.LOAD_ERROR_NOT_ENOUGH_ANIMALS] = {warning = true, text = "shop_messageNotEnoughAnimals"}
{}[AnimalLoadEvent.LOAD_ERROR_NOT_ENOUGH_SPACE] = {warning = true, text = "shop_messageNotEnoughSpaceAnimalsTrailer"}
AnimalScreenTrailer.LOAD_ERROR_CODE_MAPPING = {}
{}[AnimalUnloadEvent.UNLOAD_SUCCESS] = {warning = false, text = "shop_movedToSpawnPlace"}
{}[AnimalUnloadEvent.UNLOAD_ERROR_NO_PERMISSION] = {warning = true, text = "shop_messageNoPermissionToTradeAnimals"}
{}[AnimalUnloadEvent.UNLOAD_ERROR_INVALID_CLUSTER] = {warning = true, text = "shop_messageInvalidCluster"}
{}[AnimalUnloadEvent.UNLOAD_ERROR_COULD_NOT_BE_LOADED] = {warning = true, text = "shop_messageAnimalCouldNotBeUnloaded"}
{}[AnimalUnloadEvent.UNLOAD_ERROR_DOES_NOT_SUPPORT_UNLOADING] = {warning = true, text = "shop_messageAnimalDoesNotSupportUnloading"}
{}[AnimalUnloadEvent.UNLOAD_ERROR_NO_SPACE] = {warning = true, text = "shop_messageNotEnoughSpaceAnimalsArea"}
{}[AnimalUnloadEvent.UNLOAD_ERROR_NOT_ENOUGH_ANIMALS] = {warning = true, text = "shop_messageNotEnoughAnimals"}
{}[AnimalUnloadEvent.UNLOAD_ERROR_RIDEABLE_LIMIT_REACHED] = {warning = true, text = "shop_messageAnimalRideableLimitReached"}
AnimalScreenTrailer.UNLOAD_ERROR_CODE_MAPPING = {}
