-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuVehiclesFrame = {}
local InGameMenuVehiclesFrame_mt = Class(InGameMenuVehiclesFrame, TabbedMenuFrameElement)
InGameMenuVehiclesFrame.COLUMN_NAME = 1
InGameMenuVehiclesFrame.COLUMN_AGE = 2
InGameMenuVehiclesFrame.COLUMN_HOURS = 3
InGameMenuVehiclesFrame.COLUMN_DAMAGE = 4
InGameMenuVehiclesFrame.COLUMN_LEASING = 5
InGameMenuVehiclesFrame.COLUMN_VALUE = 6
InGameMenuVehiclesFrame.SORT_ORDER_DESC = 1
InGameMenuVehiclesFrame.SORT_ORDER_ASC = 2
InGameMenuVehiclesFrame.CONTROLS = {"mainBox", "vehiclesList", "headerBox", "headerText"}
function InGameMenuVehiclesFrame.register()
  local v0 = InGameMenuVehiclesFrame.new()
  v1:loadGui("dataS/gui/InGameMenuVehiclesFrame.xml", "VehiclesFrame", v0, true)
end
function InGameMenuVehiclesFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuVehiclesFrame.CONTROLS)
  v2.vehicles = {}
  v2.hasCustomMenuButtons = true
  v2.sortByColumn = InGameMenuVehiclesFrame.COLUMN_NAME
  v2.sortOrder = InGameMenuVehiclesFrame.SORT_ORDER_ASC
  v2.sortIcons = {}
  return v2
end
function InGameMenuVehiclesFrame:createFromExistingGui(v1)
  local v2 = InGameMenuVehiclesFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuVehiclesFrame:initialize()
  if Platform.isMobile then
    local v2 = v2:getText("button_enterVehicle")
    self.enterVehicleButton = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
      self:onClickEnterVehicle()
    end, profile = "buttonEnterVehicle"}
    v2 = v2:getText("ui_inGameMenuVehicleViewOnMap")
    self.viewOnMapButton = {inputAction = InputAction.MENU_EXTRA_2, text = v2, callback = function()
      self:onVehicleViewOnMap()
    end, profile = "buttonViewVehicleOnMap"}
    v2 = v2:getText("button_sell")
    self.sellButton = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = function()
      self:onButtonSell()
    end, profile = "buttonSell"}
    local v3 = v3:getText("ui_vehicles")
    v1:setText(...)
  end
end
function InGameMenuVehiclesFrame:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  self.vehicles = {}
  v1:unsubscribeAll(self)
end
function InGameMenuVehiclesFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:updateVehicles()
  self:updateView()
  v1:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.MONEY_UNIT], self.updateVehicles, self)
  v1:subscribe(SellVehicleEvent, self.onVehicleSellEvent, self)
  v1:subscribe(BuyVehicleEvent, self.onVehicleBuyEvent, self)
  if 0 < #self.vehicles then
    if self.vehicles[self.vehiclesList.selectedIndex].vehicle.getIsEnterableFromMenu ~= nil then
      v2 = self.vehicles[self.vehiclesList.selectedIndex].vehicle:getIsEnterableFromMenu()
    end
    self:updateMenuButtons(v2)
  else
    self:updateMenuButtons(false)
  end
  if self.headerBox ~= nil then
    v1:linkElements(self.vehiclesList, FocusManager.TOP, nil)
    v1:linkElements(self.vehiclesList, FocusManager.BOTTOM, nil)
    v1:linkElements(self.vehiclesList, FocusManager.LEFT, self.headerBox)
    v1:linkElements(self.vehiclesList, FocusManager.RIGHT, self.headerBox)
    for v4, v5 in pairs(self.headerBox.elements) do
      v6:linkElements(v5, FocusManager.TOP, self.vehiclesList)
      v6:linkElements(v5, FocusManager.BOTTOM, self.vehiclesList)
    end
  end
  v1:setFocus(self.vehiclesList)
end
function InGameMenuVehiclesFrame:onFrameClose()
  local v2 = v2:superClass()
  v2.onFrameClose(self)
  self.vehicles = {}
  v1:unsubscribeAll(self)
end
function InGameMenuVehiclesFrame:updateVehicles()
  self.vehicles = {}
  if g_currentMission.player ~= nil then
    for v4, v5 in ipairs(g_currentMission.vehicles) do
      local v6 = v6:canPlayerAccess(v5)
      if not v6 then
        continue
      end
      v6 = v5:getShowInVehiclesOverview()
      if not v6 then
        continue
      end
      local v7 = v5:getName()
      local v10 = v5:getBrand()
      local v8 = v8:getBrandByIndex(...)
      if v8 ~= nil then
      end
      v6.columns[InGameMenuVehiclesFrame.COLUMN_NAME] = {text = v7, value = v7}
      local v9 = Vehicle.getSpecValueAge(nil, v5)
      v6.columns[InGameMenuVehiclesFrame.COLUMN_AGE] = {text = v9, value = v5.age}
      if v5.getOperatingTime ~= nil then
        local v13 = Vehicle.getSpecValueOperatingTime(nil, v5)
        v13 = v5:getOperatingTime()
      end
      v6.columns[InGameMenuVehiclesFrame.COLUMN_HOURS] = {text = v11, value = v12}
      local v15 = SpecializationUtil.hasSpecialization(Wearable, v5.specializations)
      if v15 then
        v15 = v5:getDamageAmount()
        local v19 = math.ceil((1 - v15) * 100)
        local v17 = v17:formatNumber(v19, 0)
      end
      v6.columns[InGameMenuVehiclesFrame.COLUMN_DAMAGE] = {text = v13, value = v14}
      if v5.propertyState == Vehicle.PROPERTY_STATE_LEASED then
        v17 = v17:formatMoney(v5.price * (EconomyManager.DEFAULT_RUNNING_LEASING_FACTOR + EconomyManager.PER_DAY_LEASING_FACTOR))
      end
      v6.columns[InGameMenuVehiclesFrame.COLUMN_LEASING] = {text = v15, value = v16}
      if v5.propertyState == Vehicle.PROPERTY_STATE_OWNED then
        v19 = v5:getSellPrice()
        v19 = v19:formatMoney(v19)
      end
      v6.columns[InGameMenuVehiclesFrame.COLUMN_VALUE] = {text = v17, value = v18}
      table.insert(self.vehicles, v6)
    end
  end
  self:updateView()
end
function InGameMenuVehiclesFrame:updateView()
  for v6, v7 in pairs(self.sortIcons) do
    if v6 ~= v1 then
    end
    if true and v2 ~= InGameMenuVehiclesFrame.SORT_ORDER_DESC then
    end
    v9:setVisible(v11)
    if v8 and v2 ~= InGameMenuVehiclesFrame.SORT_ORDER_ASC then
    end
    v9:setVisible(v11)
  end
  table.sort(self.vehicles, function(self, v1)
    if self.columns[u0].value == v1.columns[u0].value and self.columns[InGameMenuVehiclesFrame.COLUMN_NAME].value == v1.columns[InGameMenuVehiclesFrame.COLUMN_NAME].value then
    end
    if u1 == InGameMenuVehiclesFrame.SORT_ORDER_DESC then
      if v3 >= v2 then
      end
      return true
    end
    if v2 >= v3 then
    end
    return true
  end)
  v3:reloadData()
end
function InGameMenuVehiclesFrame:getMainElementSize()
  return self.mainBox.size
end
function InGameMenuVehiclesFrame:getMainElementPosition()
  return self.mainBox.absPosition
end
function InGameMenuVehiclesFrame:updateMenuButtons(v1)
  self.menuButtonInfo = {{inputAction = InputAction.MENU_BACK}}
  if Platform.isMobile and 0 < #self.vehicles then
    table.insert(self.menuButtonInfo, self.sellButton)
    table.insert(self.menuButtonInfo, self.viewOnMapButton)
    if v1 then
      table.insert(self.menuButtonInfo, self.enterVehicleButton)
    end
  end
  self:setMenuButtonInfoDirty()
end
function InGameMenuVehiclesFrame:applySorting(v1)
  if self.sortByColumn == v1 then
    -- if v0.sortOrder == InGameMenuVehiclesFrame.SORT_ORDER_ASC then goto L19 end
    self.sortOrder = InGameMenuVehiclesFrame.SORT_ORDER_ASC
  else
    self.sortOrder = InGameMenuVehiclesFrame.SORT_ORDER_DESC
  end
  self.sortByColumn = v1
  self:updateView()
end
function InGameMenuVehiclesFrame:onClickButtonSortByName()
  self:applySorting(InGameMenuVehiclesFrame.COLUMN_NAME)
end
function InGameMenuVehiclesFrame:onClickButtonSortByAge()
  self:applySorting(InGameMenuVehiclesFrame.COLUMN_AGE)
end
function InGameMenuVehiclesFrame:onClickButtonSortByHours()
  self:applySorting(InGameMenuVehiclesFrame.COLUMN_HOURS)
end
function InGameMenuVehiclesFrame:onClickButtonSortByDamage()
  self:applySorting(InGameMenuVehiclesFrame.COLUMN_DAMAGE)
end
function InGameMenuVehiclesFrame:onClickButtonSortByLeasing()
  self:applySorting(InGameMenuVehiclesFrame.COLUMN_LEASING)
end
function InGameMenuVehiclesFrame:onClickButtonSortByValue()
  self:applySorting(InGameMenuVehiclesFrame.COLUMN_VALUE)
end
function InGameMenuVehiclesFrame:onCreateButtonSortByName(v1)
  local v6 = v1:getDescendantByName("iconAscending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_ASC] = v6
  v6 = v1:getDescendantByName("iconDescending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_DESC] = v6
  self.sortIcons[InGameMenuVehiclesFrame.COLUMN_NAME] = {}
end
function InGameMenuVehiclesFrame:onCreateButtonSortByAge(v1)
  local v6 = v1:getDescendantByName("iconAscending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_ASC] = v6
  v6 = v1:getDescendantByName("iconDescending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_DESC] = v6
  self.sortIcons[InGameMenuVehiclesFrame.COLUMN_AGE] = {}
end
function InGameMenuVehiclesFrame:onCreateButtonSortByHours(v1)
  local v6 = v1:getDescendantByName("iconAscending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_ASC] = v6
  v6 = v1:getDescendantByName("iconDescending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_DESC] = v6
  self.sortIcons[InGameMenuVehiclesFrame.COLUMN_HOURS] = {}
end
function InGameMenuVehiclesFrame:onCreateButtonSortByDamage(v1)
  local v6 = v1:getDescendantByName("iconAscending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_ASC] = v6
  v6 = v1:getDescendantByName("iconDescending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_DESC] = v6
  self.sortIcons[InGameMenuVehiclesFrame.COLUMN_DAMAGE] = {}
end
function InGameMenuVehiclesFrame:onCreateButtonSortByLeasing(v1)
  local v6 = v1:getDescendantByName("iconAscending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_ASC] = v6
  v6 = v1:getDescendantByName("iconDescending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_DESC] = v6
  self.sortIcons[InGameMenuVehiclesFrame.COLUMN_LEASING] = {}
end
function InGameMenuVehiclesFrame:onCreateButtonSortByValue(v1)
  local v6 = v1:getDescendantByName("iconAscending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_ASC] = v6
  v6 = v1:getDescendantByName("iconDescending")
  {}[InGameMenuVehiclesFrame.SORT_ORDER_DESC] = v6
  self.sortIcons[InGameMenuVehiclesFrame.COLUMN_VALUE] = {}
end
function InGameMenuVehiclesFrame:getNumberOfItemsInSection(v1, v2)
  return #self.vehicles
end
function InGameMenuVehiclesFrame:populateCellForItemInSection(v1, v2, v3, v4)
  local v7 = v7:getItemByXMLFilename(self.vehicles[v3].vehicle.configFileName)
  if v7 ~= nil then
    local v8 = v4:getAttribute("name")
    v8:setText(self.vehicles[v3].columns[InGameMenuVehiclesFrame.COLUMN_NAME].text)
    local v12 = self:getActiveProfile(InGameMenuVehiclesFrame.PROFILE.ATTRIBUTE_CELL_NEUTRAL, self.vehicles[v3].vehicle)
    v8:applyProfile(v12, true)
    if v7.lifetime <= self.vehicles[v3].vehicle.age then
    end
    v12 = v4:getAttribute("age")
    v12:setText(v5.columns[InGameMenuVehiclesFrame.COLUMN_AGE].text)
    local v15 = self:getActiveProfile(v10, v6)
    v12:applyProfile(v15, true)
    local v13 = v4:getAttribute("operatingHours")
    v13:setText(v5.columns[InGameMenuVehiclesFrame.COLUMN_HOURS].text)
    local v16 = self:getActiveProfile(InGameMenuVehiclesFrame.PROFILE.ATTRIBUTE_CELL_NEUTRAL, v6)
    v13:applyProfile(v16, true)
    if InGameMenuVehiclesFrame.DAMAGE_NEGATIVE_THRESHOLD <= v5.columns[InGameMenuVehiclesFrame.COLUMN_DAMAGE].value then
    end
    v15 = v4:getAttribute("damage")
    v15:setText(v9.text)
    local v18 = self:getActiveProfile(v14, v6)
    v15:applyProfile(v18, true)
    v16 = v4:getAttribute("leasing")
    v16:setText(v5.columns[InGameMenuVehiclesFrame.COLUMN_LEASING].text)
    local v19 = self:getActiveProfile(InGameMenuVehiclesFrame.PROFILE.ATTRIBUTE_CELL_NEUTRAL, v6)
    v16:applyProfile(v19, true)
    if v6.propertyState == Vehicle.PROPERTY_STATE_OWNED and v5.columns[InGameMenuVehiclesFrame.COLUMN_VALUE].value < v6.price * InGameMenuVehiclesFrame.SELL_VALUE_NEGATIVE_FACTOR then
    end
    v18 = v4:getAttribute("value")
    v18:setText(v9.text)
    local v21 = self:getActiveProfile(v17, v6)
    v18:applyProfile(v21, true)
  end
end
function InGameMenuVehiclesFrame.getActiveProfile(v0, v1, v2)
  if g_currentMission.controlledVehicle ~= v2.rootVehicle then
  end
  if true then
    if v1 == InGameMenuVehiclesFrame.PROFILE.ATTRIBUTE_CELL_NEUTRAL then
      return InGameMenuVehiclesFrame.PROFILE.ATTRIBUTE_CELL_ACTIVE_NEUTRAL
    end
    return InGameMenuVehiclesFrame.PROFILE.ATTRIBUTE_CELL_ACTIVE_NEGATIVE
  end
  return v1
end
function InGameMenuVehiclesFrame:onButtonSell()
  if self.vehicles[self.vehiclesList.selectedIndex] ~= nil and self.vehicles[self.vehiclesList.selectedIndex].vehicle ~= nil then
    local v3 = v3:getItemByXMLFilename(self.vehicles[self.vehiclesList.selectedIndex].vehicle.configFileName)
    v4:sell(v3, self.vehicles[self.vehiclesList.selectedIndex].vehicle)
  end
end
function InGameMenuVehiclesFrame:onVehicleViewOnMap()
  local v1 = v1:getIngameMap()
  for v6, v7 in pairs(v1.hotspots) do
    local v8 = InGameMenuMapUtil.getHotspotVehicle(v7)
    if self.vehicles[self.vehiclesList.selectedIndex] ~= nil and self.vehicles[self.vehiclesList.selectedIndex].vehicle ~= nil then
    end
    if not (v10 ~= nil) then
      continue
    end
    if not (v10 == v8) then
      continue
    end
    g_inGameMenu:exitMenu()
    v12:onToggleMap()
    if Platform.isMobile then
    end
    v12:onClickHotspot(nil, v7)
  end
end
function InGameMenuVehiclesFrame:onClickEnterVehicle()
  if not g_currentMission.isPlayerFrozen and self.vehicles[self.vehiclesList.selectedIndex].vehicle ~= nil and self.vehicles[self.vehiclesList.selectedIndex].vehicle.getIsEnterableFromMenu ~= nil then
    local v2 = self.vehicles[self.vehiclesList.selectedIndex].vehicle:getIsEnterableFromMenu()
    if v2 then
      v2:changeScreen(nil)
      v2:requestToEnterVehicle(self.vehicles[self.vehiclesList.selectedIndex].vehicle)
    end
  end
end
function InGameMenuVehiclesFrame:onListSelectionChanged(v1, v2, v3)
  if self.vehicles[self.vehiclesList.selectedIndex] ~= nil then
    if self.vehicles[self.vehiclesList.selectedIndex].vehicle.getIsEnterableFromMenu ~= nil then
      local v6 = self.vehicles[self.vehiclesList.selectedIndex].vehicle:getIsEnterableFromMenu()
    end
    self:updateMenuButtons(v6)
  end
end
function InGameMenuVehiclesFrame:onVehicleSellEvent()
  self:updateVehicles()
end
function InGameMenuVehiclesFrame:onVehicleBuyEvent()
  self:updateVehicles()
end
InGameMenuVehiclesFrame.SELL_VALUE_NEGATIVE_FACTOR = 0.3
InGameMenuVehiclesFrame.DAMAGE_NEGATIVE_THRESHOLD = 0.8
InGameMenuVehiclesFrame.PROFILE = {ATTRIBUTE_CELL_NEUTRAL = "ingameMenuVehiclesListItemTextNeutral", ATTRIBUTE_CELL_NEGATIVE = "ingameMenuVehiclesListItemTextNegative", ATTRIBUTE_CELL_ACTIVE_NEUTRAL = "ingameMenuVehiclesListItemTextNeutralActive", ATTRIBUTE_CELL_ACTIVE_NEGATIVE = "ingameMenuVehiclesListItemTextNegativeActive"}
