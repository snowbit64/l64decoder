-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuAnimalsFrame = {}
local InGameMenuAnimalsFrame_mt = Class(InGameMenuAnimalsFrame, TabbedMenuFrameElement)
InGameMenuAnimalsFrame.CONTROLS = {ANIMALS_CONTAINER = "animalsContainer", ANIMAL_LIST_BOX = "animalsListBox", ANIMAL_LIST = "list", ANIMAL_TYPE_NAME_TEXT = "animalDetailTypeNameText", ANIMAL_TYPE_VALUE_TEXT = "animalDetailTypeValueText", ANIMAL_TYPE_IMAGE = "animalDetailTypeImage", DETAIL_OUTPUT_BOX = "detailOutputBox", DETAIL_INPUT_BOX = "detailInputBox", DETAIL_DESCRIPTION_BOX = "detailDescriptionBox", REPRODUCTION_ELEMENT = "reproductionElement", REPRODUCTION_BAR = "reproductionStatusBar", REPRODUCTION_BAR_VALUE_TEXT = "reproductionValueText", CLEANLINESS_ELEMENT = "cleanlinessElement", CLEANLINESS_BAR = "cleanlinessStatusBar", CLEANLINESS_BAR_VALUE_TEXT = "cleanlinessValueText", FITNESS_ELEMENT = "fitnessElement", FITNESS_BAR = "fitnessStatusBar", FITNESS_BAR_VALUE_TEXT = "fitnessValueText", HEALTH_BAR = "healthStatusBar", HEALTH_BAR_VALUE_TEXT = "healthValueText", AGE_TEXT = "animalAgeText", ANIMAL_VALUE_TEXT = "animalProductValue", LIVESTOCK_ATTRIBUTES_LAYOUT = "livestockAttributesLayout", REPRODUCTION_RATE_TEXT = "animalReproductionRateText", TIME_UNTIL_REPRODUCTION_TEXT = "animalTimeTillNextAnimalText", REQUIREMENTS_LAYOUT = "requirementsLayout", CONDITIONS_HEADER = "conditionsHeader", CONDITION_ROWS = "conditionRow", CONDITION_LABEL_TEXTS = "conditionLabel", CONDITION_VALUE_TEXTS = "conditionValue", CONDITION_BARS = "conditionStatusBar", INFO_ROWS = "infoRow", INFO_LABEL_TEXTS = "infoLabel", INFO_VALUE_TEXTS = "infoValue", INFO_BARS = "infoStatusBar", FOOD_HEADER = "foodHeader", FOOD_ROWS = "foodRow", FOOD_LABEL_TEXTS = "foodLabel", FOOD_VALUE_TEXTS = "foodValue", FOOD_BARS = "foodStatusBar", TOTAL_FOOD_VALUE = "foodRowTotalValue", TOTAL_FOOD_BAR = "foodRowTotalStatusBar", DESCRIPTION_TEXT = "detailDescriptionText", NO_HUSBANDRIES_TEXT = "noHusbandriesBox", NO_ANIMALS_TEXT = "noAnimalsBox", ANIMAL_BOX_TEMPLATE = "animalTemplate", DETAILS_BOX = "detailsBox"}
InGameMenuAnimalsFrame.UPDATE_INTERVAL = 5000
InGameMenuAnimalsFrame.HORSE_TYPE = "HORSE"
InGameMenuAnimalsFrame.CHICKEN_TYPE = "CHICKEN"
InGameMenuAnimalsFrame.ANIMAL_PRODUCT_FILL_TYPES = {MILK = "MILK", WOOL = "WOOL", EGG = "EGG"}
InGameMenuAnimalsFrame.MAX_ANIMAL_NAME_LENGTH = 16
function InGameMenuAnimalsFrame.register()
  local v0 = InGameMenuAnimalsFrame.new()
  v1:loadGui("dataS/gui/InGameMenuAnimalsFrame.xml", "AnimalsFrame", v0, true)
end
function InGameMenuAnimalsFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuAnimalsFrame.CONTROLS)
  v2.sortedHusbandries = {}
  v2.selectedClusterIsHorse = false
  v2.selectedCluster = nil
  v2.selectedHusbandry = nil
  v2.animalDataUpdateTime = InGameMenuAnimalsFrame.UPDATE_INTERVAL
  v2.hasCustomMenuButtons = true
  v2.renameButtonInfo = {}
  return v2
end
function InGameMenuAnimalsFrame:createFromExistingGui(v1)
  local v2 = InGameMenuAnimalsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuAnimalsFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function InGameMenuAnimalsFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  v1:subscribe(MessageType.HUSBANDRY_ANIMALS_CHANGED, self.onAnimalDataChanged, self)
  v1:subscribe(MessageType.HUSBANDRY_SYSTEM_ADDED_PLACEABLE, self.updateHusbandries, self)
  v1:subscribe(MessageType.HUSBANDRY_SYSTEM_REMOVED_PLACEABLE, self.updateHusbandries, self)
  self:updateHusbandries()
  self:updateMenuButtons()
  self:setSoundSuppressed(true)
  v1:setFocus(self.list)
  self:setSoundSuppressed(false)
end
function InGameMenuAnimalsFrame.onFrameClose(v0)
  v1:unsubscribe(MessageType.HUSBANDRY_ANIMALS_CHANGED, v0)
  v1:unsubscribe(MessageType.HUSBANDRY_SYSTEM_ADDED_PLACEABLE, v0)
  v1:unsubscribe(MessageType.HUSBANDRY_SYSTEM_REMOVED_PLACEABLE, v0)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
end
function InGameMenuAnimalsFrame:initialize()
  local v2 = v2:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.BUTTON_RENAME)
  self.renameButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
    self:onButtonRename()
  end, profile = "buttonRename"}
  v2 = v2:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.BUTTON_HOTSPOT)
  self.hotspotButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = function()
    self:onButtonHotspot()
  end, profile = "buttonHotspot"}
  v2 = v2:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.BUTTON_INFO)
  self.infoButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onButtonInfo()
  end, profile = "buttonInfo"}
end
function InGameMenuAnimalsFrame:onAnimalDataChanged()
  self:updateAnimalData()
end
function InGameMenuAnimalsFrame:setPlayerFarm(playerFarm)
  self.playerFarm = playerFarm
  self:updateAnimalData()
end
function InGameMenuAnimalsFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.selectedHusbandry ~= nil then
    self.animalDataUpdateTime = self.animalDataUpdateTime - dt
    if self.animalDataUpdateTime < 0 then
      self:updateAnimalData()
      self:displayCluster(self.selectedCluster, self.selectedHusbandry)
      self.animalDataUpdateTime = InGameMenuAnimalsFrame.UPDATE_INTERVAL
    end
  end
end
function InGameMenuAnimalsFrame:updateHusbandries()
  local v1 = v1:getPlaceablesByFarm(self.playerFarm.farmId)
  self.sortedHusbandries = v1
  table.sort(self.sortedHusbandries, u0)
  for v4, v5 in ipairs(self.sortedHusbandries) do
    local v8 = v5:getClusters()
    for v10, v11 in ipairs(...) do
      table.insert(v6, v11)
    end
    table.sort(v6, u1)
    v5.sortedClusters = v6
  end
  self:updateAnimalData()
end
function InGameMenuAnimalsFrame:updateAnimalData()
  if 0 >= #self.sortedHusbandries then
  end
  for v6, v7 in ipairs(self.sortedHusbandries) do
    local v8 = v7:getNumOfClusters()
    if not (0 < v8) then
      continue
    end
    break
  end
  v3:setVisible(v1)
  v3:setVisible(v2)
  v3:setVisible(not v1)
  if v1 then
  end
  v3:setVisible(v5)
  v3:reloadData()
end
function InGameMenuAnimalsFrame:getMainElementSize()
  return self.animalsContainer.size
end
function InGameMenuAnimalsFrame:getMainElementPosition()
  return self.animalsContainer.absPosition
end
function InGameMenuAnimalsFrame.setStatusBarValue(v0, v1, v2, v3, v4)
  if v3 then
  end
  if InGameMenuAnimalsFrame.STATUS_BAR_MEDIUM < v6 then
    -- if v6 > InGameMenuAnimalsFrame.STATUS_BAR_HIGH then goto L19 end
  elseif InGameMenuAnimalsFrame.STATUS_BAR_HIGH < v6 then
  end
  v1:applyProfile(v5)
  if v1.startSize ~= nil then
  end
  local v14 = math.min(1, v2)
  local v11 = math.max(v8, v7 * v14)
  v1:setSize(v11, nil)
  local v9 = Utils.getNoNil(v4, false)
  v1:setDisabled(v9)
end
function InGameMenuAnimalsFrame:updateConditionDisplay(husbandry)
  local infos = husbandry:getConditionInfos()
  for v6, v7 in ipairs(self.conditionRow) do
    if infos[v6] == nil then
    end
    v7:setVisible(true)
    if not (v8 ~= nil) then
      continue
    end
    if not v8.valueText then
      local v9 = v9:formatVolume(v8.value, 0, v8.customUnitText)
    end
    v10:setText(v8.title)
    v10:setText(v9)
    self:setStatusBarValue(self.conditionStatusBar[v6], v8.ratio, v8.invertedBar)
  end
end
function InGameMenuAnimalsFrame:updateFoodDisplay(husbandry)
  local infos = husbandry:getFoodInfos()
  for v8, v9 in ipairs(self.foodRow) do
    if infos[v8] == nil then
    end
    v9:setVisible(true)
    if not (v10 ~= nil) then
      continue
    end
    local v11 = v11:formatVolume(v10.value, 0)
    v12:setText(v10.title)
    v12:setText(v11)
    self:setStatusBarValue(self.foodStatusBar[v8], v10.ratio, v10.invertedBar)
  end
  v5 = v5:formatVolume(v4, 0)
  if 0 < v3 then
  end
  v7:setText(v5)
  self:setStatusBarValue(self.foodRowTotalStatusBar, v6, false)
  v11 = v11:getText("ui_silos_totalCapacity")
  local v12 = v12:getText("animals_foodMixEffectiveness")
  v9 = string.format(...)
  v7:setText(...)
end
function InGameMenuAnimalsFrame:displayCluster(cluster, husbandry)
  if not g_currentMission.isRunning and not Platform.isMobile then
    return
  end
  local subTypeIndex = cluster:getSubTypeIndex()
  local age = cluster:getAge()
  local v5 = v5:getVisualByAge(subTypeIndex, age)
  if v5 ~= nil then
    if cluster.getName ~= nil then
      local v7 = cluster:getName()
    end
    v7:setText(v6)
    v7:setImageFilename(v5.store.imageFilename)
    v7 = cluster:getSellPrice()
    local v8 = v8:formatMoney(v7, 0, true, true)
    v9:setText(v8)
    local v9 = v9:formatNumMonth(age)
    infos:setText(v9)
    local infos = husbandry:getAnimalInfos(cluster)
    for v14, v15 in ipairs(self.infoRow) do
      if infos[v14] == nil then
      end
      v15:setVisible(true)
      if not (v16 ~= nil) then
        continue
      end
      if not v16.valueText then
        local v17 = v17:formatVolume(v16.value, 0, v16.customUnitText)
      end
      v18:setText(v16.title)
      v18:setText(v17)
      self:setStatusBarValue(self.infoStatusBar[v14], v16.ratio, v16.invertedBar, v16.disabled)
    end
    v11 = husbandry:getAnimalDescription(cluster)
    v12:setText(v11)
  end
  self:updateConditionDisplay(husbandry)
  self:updateFoodDisplay(husbandry)
end
function InGameMenuAnimalsFrame:updateMenuButtons()
  self.menuButtonInfo = {{inputAction = InputAction.MENU_BACK}}
  if self.selectedHusbandry ~= nil then
    if self.selectedHusbandry.getHotspot ~= nil then
      local v2 = v2:getHotspot(1)
    end
    if v1 ~= nil then
      if v1 == g_currentMission.currentMapTargetHotspot then
        local v3 = v3:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.REMOVE_MARKER)
        self.hotspotButtonInfo.text = v3
      else
        v3 = v3:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.SET_MARKER)
        self.hotspotButtonInfo.text = v3
      end
      table.insert(self.menuButtonInfo, self.hotspotButtonInfo)
    end
    table.insert(self.menuButtonInfo, self.infoButtonInfo)
  end
  if self.selectedClusterIsHorse and Platform.gameplay.canRenameHorses then
    table.insert(self.menuButtonInfo, self.renameButtonInfo)
  end
  self:setMenuButtonInfoDirty()
end
function InGameMenuAnimalsFrame:renameCurrentHorse(newName, hasConfirmed)
  if hasConfirmed and self.selectedClusterIsHorse and Platform.gameplay.canRenameHorses then
    v3:renameAnimal(self.selectedCluster.id, newName)
  end
end
function InGameMenuAnimalsFrame.getFoodDescription(v0, v1)
  local v2 = v2:getAnimalFood(v1)
  if v2.consumptionType == AnimalFoodSystem.FOOD_CONSUME_TYPE_PARALLEL then
    return v5:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.FOOD_DESCRIPTION_PARALLEL)
  end
  v5 = v5:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.FOOD_DESCRIPTION_SERIAL)
  return v5
end
function InGameMenuAnimalsFrame:getNumberOfSections()
  return #self.sortedHusbandries
end
function InGameMenuAnimalsFrame:getTitleForSectionHeader(list, section)
  return self.sortedHusbandries[section]:getName()
end
function InGameMenuAnimalsFrame:getNumberOfItemsInSection(list, section)
  return #self.sortedHusbandries[section].sortedClusters
end
function InGameMenuAnimalsFrame:populateCellForItemInSection(list, section, index, cell)
  local v7 = self.sortedHusbandries[section].sortedClusters[index]:getSubTypeIndex()
  local v8 = self.sortedHusbandries[section].sortedClusters[index]:getAge()
  local v9 = v9:getVisualByAge(v7, v8)
  local v10 = v10:getSubTypeByIndex(v7)
  if v9 ~= nil then
    if self.sortedHusbandries[section].sortedClusters[index].getName ~= nil then
      local v12 = self.sortedHusbandries[section].sortedClusters[index]:getName()
    end
    v12 = v6:getSellPrice()
    local v13 = v13:formatMoney(v12, 0, true, true)
    local v14 = cell:getAttribute("priceValue")
    v14:setText(v13)
    v14 = cell:getAttribute("count")
    v14:setValue(v6.numAnimals)
    v14 = cell:getAttribute("count")
    if v10.typeIndex == AnimalType.HORSE then
    end
    v14:setVisible(true)
    v14 = cell:getAttribute("name")
    v14:setText(v11)
    v14 = cell:getAttribute("typeIcon")
    v14:setImageFilename(v9.store.imageFilename)
  end
end
function InGameMenuAnimalsFrame:onButtonRename()
  if not Platform.gameplay.canRenameHorses then
    return
  end
  local v1 = v1:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.PROMPT_RENAME)
  local v2 = v2:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.IME_PROMPT_RENAME)
  local v3 = v3:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.BUTTON_CONFIRM)
  local v7 = v7:getName()
  TextInputDialog.show(self.renameCurrentHorse, self, v7, v1, v2, InGameMenuAnimalsFrame.MAX_ANIMAL_NAME_LENGTH, v3)
end
function InGameMenuAnimalsFrame:onButtonHotspot()
  if self.selectedHusbandry.getHotspot ~= nil then
    local v3 = v3:getHotspot(1)
  end
  if v1 and v2 ~= nil then
    if v2 == g_currentMission.currentMapTargetHotspot then
      v3:setMapTargetHotspot()
    else
      v3:setMapTargetHotspot(v2)
    end
    self:updateMenuButtons()
  end
end
function InGameMenuAnimalsFrame:onButtonInfo()
  InfoDialog.show(self.detailDescriptionText.text)
end
function InGameMenuAnimalsFrame:onListSelectionChanged(list, section, index)
  local v8 = self.sortedHusbandries[section].sortedClusters[index]:getSubTypeIndex()
  local v6 = v6:getSubTypeByIndex(...)
  self.selectedHusbandry = self.sortedHusbandries[section]
  if v6.typeIndex ~= AnimalType.HORSE then
  end
  self.selectedClusterIsHorse = true
  self.selectedCluster = v5
  self:displayCluster(self.selectedCluster, v4)
  v8:invalidateLayout()
  self:updateMenuButtons()
end
InGameMenuAnimalsFrame.FILL_TYPE_SEPARATOR = " / "
InGameMenuAnimalsFrame.L10N_SYMBOL = {HORSE_FITNESS = "ui_horseFitness", CLEANLINESS = "statistic_cleanliness", WATER = "statistic_water", STRAW = "statistic_strawStorage", BUTTON_RENAME = "button_rename", BUTTON_CONFIRM = "button_confirm", BUTTON_HOTSPOT = "button_showOnMap", BUTTON_INFO = "button_detail", SET_MARKER = "action_tag", REMOVE_MARKER = "action_untag", PROMPT_RENAME = "ui_enterHorseName", IME_PROMPT_RENAME = "ui_horseName", FOOD_MIX_QUANITITY = "animals_foodMixQuantity", FOOD_DESCRIPTION_PARALLEL = "animals_foodMixDescriptionParallel", FOOD_DESCRIPTION_SERIAL = "animals_foodMixDescriptionSerial"}
InGameMenuAnimalsFrame.STATUS_BAR_HIGH = 0.66
InGameMenuAnimalsFrame.STATUS_BAR_MEDIUM = 0.33
