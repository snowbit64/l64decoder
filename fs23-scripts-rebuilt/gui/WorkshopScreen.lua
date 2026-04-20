-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WorkshopScreen = {CONTROLS = {"headerText", "vehicleImage", "vehicleName", "dialogText", "priceText", "dialogSeparator", "dialogInfo", "configButton", "repairButton", "repaintButton", "sellButton", "operatingHoursText", "ageText", "conditionBar", "paintConditionBar", "balanceElement", "list", "detailBox", "conditionBox", "paintConditionBox"}}
local WorkshopScreen_mt = Class(WorkshopScreen, ScreenElement)
function WorkshopScreen.register()
  local v0 = WorkshopScreen.new()
  v1:loadGui("dataS/gui/WorkshopScreen.xml", "WorkshopScreen", v0)
  return v0
end
function WorkshopScreen.new(v0, v1)
  local v3 = v3:superClass()
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(WorkshopScreen.CONTROLS)
  v2.vehicles = {}
  return v2
end
function WorkshopScreen:createFromExistingGui(v1)
  local v2 = WorkshopScreen.new()
  v4:delete()
  v4:delete()
  v4:deleteGuiFocusData("WorkshopScreen")
  v4:loadGui(self.xmlFilename, v1, v2)
  v2:setVehicles(self.vehicles)
  g_workshopScreen = v2
  return v2
end
function WorkshopScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  v1:subscribe(SellVehicleEvent, self.onVehicleSellEvent, self)
  v1:subscribe(MessageType.VEHICLE_REPAIRED, self.onVehicleRepairEvent, self)
  v1:subscribe(MessageType.VEHICLE_REPAINTED, self.onVehicleRepaintEvent, self)
  self.refreshTimer = 0
end
function WorkshopScreen:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  self.vehicle = nil
  v1:unsubscribeAll(self)
  v1:showMoneyChange(MoneyType.SHOP_VEHICLE_BUY)
  v1:showMoneyChange(MoneyType.SHOP_VEHICLE_SELL)
end
function WorkshopScreen:setSellingPoint(sellingPoint, isDealer, isOwnWorkshop, isMobileWorkshop)
  self.owner = sellingPoint
  self.isDealer = isDealer
  self.isOwnWorkshop = isOwnWorkshop
  self.isMobileWorkshop = isMobileWorkshop
end
function WorkshopScreen:setConfigurations(vehicle, buyItem, storeItem, configs, price, licensePlateData)
  self.vehicle = vehicle
  v7:onClickBack()
  if not buyItem and storeItem ~= nil and configs ~= nil then
    for v12, v13 in pairs(configs) do
      if not (self.vehicle.configurations[v12] ~= v13) then
        continue
      end
      v8[v12] = configs[v12]
    end
    if self.vehicle.getLicensePlatesDataIsEqual ~= nil then
      v9 = v9:getLicensePlatesDataIsEqual(licensePlateData)
      if not v9 then
      end
    end
    -- if not v7 then goto L99 end
    if not g_currentMission.controlPlayer and g_currentMission.controlledVehicle ~= nil and self.vehicle == g_currentMission.controlledVehicle then
      v9:onLeaveVehicle()
    end
    v9 = v9:getServerConnection()
    local v14 = v14:getFarmId()
    v11 = ChangeVehicleConfigEvent.new(self.vehicle, price, v14, v8, licensePlateData)
    v9:sendEvent(...)
    return
  end
  self:onClickBack()
  if self.owner ~= nil then
    v7:openMenu()
  end
end
function WorkshopScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self:updateBalanceText()
  if self.vehicle ~= nil then
    if self.vehicle.isDeleted then
      table.removeElement(self.vehicles, self.vehicle)
      self.vehicle = nil
      v2:reloadData()
      -- cmp-jump LOP_JUMPXEQKN R2 aux=0x8000000c -> L69
      self:setVehicle(nil)
      return
    end
    if g_server == nil then
      self.refreshTimer = self.refreshTimer + dt
      if 250 < self.refreshTimer then
        self.refreshTimer = 0
        self:setVehicle(self.vehicle)
      end
    end
  end
end
function WorkshopScreen:setVehicles(vehicles)
  self.vehicles = vehicles
  v2:reloadData()
  if #vehicles == 0 then
    self:setVehicle(nil)
  end
end
function WorkshopScreen:updateVehicles(sellingPoint, vehicles)
  if sellingPoint == self.owner then
    self:setVehicles(vehicles)
  end
end
function WorkshopScreen:setVehicle(vehicle)
  self.storeItem = nil
  self.canBeConfigured = false
  if self.isMobileWorkshop then
    local v8 = v8:getText("ui_mobileWorkshop")
    v6:setText(...)
  elseif self.isOwnWorkshop then
    v8 = v8:getText("ui_sellOrCustomizeVehicleTitle")
    v6:setText(...)
  else
    v8 = v8:getText("ui_dealer")
    v6:setText(...)
  end
  self.canBeSold = not self.mobileWorkshop
  if vehicle ~= nil then
    self.vehicle = vehicle
    local v6 = v6:getItemByXMLFilename(vehicle.configFileName)
    self.storeItem = v6
    if self.storeItem ~= nil then
      if self.storeItem.configurations ~= nil and vehicle.propertyState ~= Vehicle.PROPERTY_STATE_OWNED then
      end
      self.canBeConfigured = v6
      if self.storeItem.canBeSold then
      end
      self.canBeSold = v6
      v6 = vehicle:getImageFilename()
      v6 = v6:getFullName()
    end
    v6 = vehicle:getOperatingTime()
    v6:setDisabled(false)
    if vehicle.propertyState == Vehicle.PROPERTY_STATE_OWNED then
      -- if v0.canBeConfigured then goto L131 end
      v8 = v8:getText("button_sell")
      self:setButtonText(...)
      local v9 = vehicle:getSellPrice()
      local v7 = math.floor(v9 * EconomyManager.DIRECT_SELL_MULTIPLIER)
      v8 = vehicle:getPrice()
      v6 = math.min(...)
      v9 = v9:formatMoney(v6)
      v7:setText(...)
    elseif vehicle.propertyState == Vehicle.PROPERTY_STATE_LEASED then
      v8 = v8:getText("button_return")
      self:setButtonText(...)
      v6:setText("-")
    else
      if vehicle.propertyState == Vehicle.PROPERTY_STATE_MISSION then
        v6:setDisabled(true)
        v6:setText("-")
      end
    end
    if vehicle.getWearTotalAmount ~= nil then
      local v11 = vehicle:getWearTotalAmount()
      self:setStatusBarValue(self.paintConditionBar, 1 - v11)
    end
    if Platform.gameplay.hasVehicleDamage and vehicle.getWearTotalAmount == nil then
    end
    v6:setVisible(v8)
    if vehicle.getDamageAmount ~= nil then
      v11 = vehicle:getDamageAmount()
      self:setStatusBarValue(self.conditionBar, 1 - v11)
    end
    if Platform.gameplay.hasVehicleDamage and vehicle.getDamageAmount == nil then
    end
    v6:setVisible(v8)
    v6 = v6:getRepairPrice()
    if 1 <= v6 then
      v11 = v11:getText("button_repair")
      local v12 = v12:formatMoney(v6, 0, true, true)
      v9 = string.format(...)
      v7:setText(...)
    else
      v7:setLocaKey("button_repair")
    end
    if v6 >= 1 then
    end
    v7:setDisabled(true)
    v7 = v7:getRepaintPrice()
    if 1 <= v7 then
      v12 = v12:getText("button_repaint")
      local v13 = v13:formatMoney(v7, 0, true, true)
      local v10 = string.format(...)
      v8:setText(...)
    else
      v8:setLocaKey("button_repaint")
    end
    if v7 >= 1 and self.vehicle.propertyState ~= Vehicle.PROPERTY_STATE_MISSION then
    end
    v8:setDisabled(v10)
  else
    v6:setLocaKey("button_repair")
    v6:setDisabled(true)
    v6:setLocaKey("button_repaint")
    v6:setDisabled(true)
  end
  v6:setDisabled(not self.canBeConfigured)
  v6:setVisible(Platform.gameplay.hasVehicleConfigs)
  if vehicle ~= nil and not self.isOwnWorkshop and self.vehicle.propertyState ~= Vehicle.PROPERTY_STATE_MISSION then
  end
  v6:setDisabled(v8)
  if vehicle ~= nil and not self.isOwnWorkshop and self.vehicle.propertyState == Vehicle.PROPERTY_STATE_MISSION then
  end
  v6:setVisible(v8)
  if not self.isOwnWorkshop then
  end
  v6:setVisible(v8)
  v6:setVisible(Platform.gameplay.hasVehicleDamage)
  if vehicle ~= nil then
  end
  v6:setVisible(true)
  if vehicle == nil then
  end
  v6:setVisible(true)
  v6:setImageFilename(v2)
  v6:setText(v3)
  v7 = math.floor(v5 / 60000 / 60)
  v8 = math.floor((v5 / 60000 - v7 * 60) / 6)
  v11 = v11:getText("shop_operatingTime")
  v10 = string.format(v11, v7, v8 * 10)
  v8:setText(...)
  v11 = v11:getText("shop_age")
  v12 = string.format("%d", v4)
  v10 = string.format(...)
  v8:setText(...)
  v8:invalidateLayout()
end
function WorkshopScreen:setButtonText(text)
  v2:setText(text)
end
function WorkshopScreen.setStatusBarValue(v0, vehicle, v2)
  local v3 = math.abs((vehicle.lastStatusBarValue or -1) - v2)
  if 0.01 < v3 then
    if vehicle.startSize ~= nil then
    end
    if v2 <= 0.1 then
      vehicle:applyProfile("workshopStatusBarDanger")
    elseif v2 <= 0.4 then
      vehicle:applyProfile("workshopStatusBarWarning")
    else
      vehicle:applyProfile("workshopStatusBar")
    end
    local v10 = math.min(v2, 1)
    local v7 = math.max(v4, v3 * v10)
    vehicle:setSize(v7, nil)
    vehicle.lastStatusBarValue = v2
  end
end
function WorkshopScreen:updateBalanceText()
  if g_currentMission ~= nil then
    local vehicle = vehicle:getMoney()
    -- if v1 then goto L11 end
  end
  self.lastBalance = 0
  v2:setValue(0)
  if 0 < 0 then
    v2:applyProfile(AnimalScreen.PROFILE.POSITIVE_BALANCE)
    return
  end
  v2:applyProfile(AnimalScreen.PROFILE.NEGATIVE_BALANCE)
end
function WorkshopScreen:onClickBack(forceBack)
  local v3 = v3:superClass()
  v3.onClickBack(self)
  self.vehicle = nil
  self.vehicles = {}
  self:changeScreen(nil)
end
function WorkshopScreen:onClickRepair()
  if self.vehicle ~= nil then
    local vehicle = vehicle:getRepairPrice(true)
    if 1 <= vehicle then
      local v2 = v2:getText("ui_repairDialog")
      local v5 = v5:getRepairPrice(true)
      local v3 = v3:formatMoney(...)
      vehicle = string.format(...)
      YesNoDialog.show(self.onYesNoRepairDialog, self, vehicle, nil, nil, nil, nil, GuiSoundPlayer.SOUND_SAMPLES.CONFIG_WRENCH)
      return true
    end
  end
  return false
end
function WorkshopScreen:onClickRepaint()
  if self.vehicle ~= nil then
    local vehicle = vehicle:getRepaintPrice()
    if 1 <= vehicle then
      local v2 = v2:getText("ui_repaintDialog")
      local v5 = v5:getRepaintPrice()
      local v3 = v3:formatMoney(...)
      vehicle = string.format(...)
      YesNoDialog.show(self.onYesNoRepaintDialog, self, vehicle, nil, nil, nil, nil, GuiSoundPlayer.SOUND_SAMPLES.CONFIG_SPRAY)
      return true
    end
  end
  return false
end
function WorkshopScreen:onClickConfigure()
  if self.canBeConfigured then
    if self.isOwnWorkshop then
    end
    self:changeScreen(ShopConfigScreen, nil, WorkshopScreen)
    v4:setReturnScreen(self.name)
    v4:setStoreItem(self.storeItem, self.vehicle, nil, vehicle)
    v4:setCallbacks(self.setConfigurations, self)
    return false
  end
  return true
end
function WorkshopScreen:onClickSell()
  if self.vehicle ~= nil and not self.isOwnWorkshop and self.vehicle.propertyState ~= Vehicle.PROPERTY_STATE_MISSION and self.canBeSold then
    if self.vehicle.propertyState == Vehicle.PROPERTY_STATE_LEASED then
    end
    local v5 = v5:getText(vehicle)
    YesNoDialog.show(...)
    return false
  end
  return true
end
function WorkshopScreen:getNumberOfItemsInSection(list, section)
  return #self.vehicles
end
function WorkshopScreen:populateCellForItemInSection(list, section, index, cell)
  local v6 = cell:getAttribute("icon")
  local v8 = self.vehicles[index]:getImageFilename()
  v6:setImageFilename(...)
  v6 = cell:getAttribute("name")
  v8 = self.vehicles[index]:getName()
  v6:setText(...)
  v8 = self.vehicles[index]:getBrand()
  v6 = v6:getBrandByIndex(...)
  if v6 ~= nil then
    local v7 = cell:getAttribute("brand")
    v7:setText(v6.title)
    return
  end
  v7 = cell:getAttribute("brand")
  v7:setText("")
end
function WorkshopScreen:onListSelectionChanged(list, section, index)
  self:setVehicle(self.vehicles[index])
end
function WorkshopScreen.onInfoDialogCallback(v0)
end
function WorkshopScreen:onYesNoRepaintDialog(yes)
  if yes then
    local v2 = v2:getMoney()
    local v3 = v3:getRepaintPrice()
    if v2 < v3 then
      v3 = v3:getText("shop_messageNotEnoughMoneyToBuy")
      InfoDialog.show(...)
      return
    end
    v2 = v2:getServerConnection()
    local v4 = WearableRepaintEvent.new(self.vehicle, true)
    v2:sendEvent(...)
  end
end
function WorkshopScreen:onYesNoRepairDialog(yes)
  if yes then
    local v2 = v2:getMoney()
    local v3 = v3:getRepairPrice()
    if v2 < v3 then
      v3 = v3:getText("shop_messageNotEnoughMoneyToBuy")
      InfoDialog.show(...)
      return
    end
    v2 = v2:getServerConnection()
    local v4 = WearableRepairEvent.new(self.vehicle, true)
    v2:sendEvent(...)
  end
end
function WorkshopScreen:sellVehicleYesNo(yes)
  if yes then
    local v2 = v2:getServerConnection()
    local v4 = SellVehicleEvent.new(self.vehicle, EconomyManager.DIRECT_SELL_MULTIPLIER, true)
    v2:sendEvent(...)
    self.vehicle = nil
  end
end
function WorkshopScreen:onVehicleSold(sellPrice, isOwned, ownerFarmId)
  local v4 = v4:getText("shop_messageSoldVehicle")
  if not isOwned then
    local v5 = v5:getText("shop_messageReturnedVehicle")
  end
  InfoDialog.show(v4, self.onInfoDialogCallback, self, DialogElement.TYPE_INFO)
end
function WorkshopScreen.onVehicleSellFailed(v0, vehicle, v2)
  if vehicle then
    if v2 == SellVehicleEvent.SELL_NO_PERMISSION then
      local v4 = v4:getText("shop_messageNoPermissionToSellVehicleText")
      -- goto L65  (LOP_JUMP +51)
    end
    if v2 == SellVehicleEvent.SELL_VEHICLE_IN_USE then
      v4 = v4:getText("shop_messageSellVehicleInUse")
      -- goto L65  (LOP_JUMP +39)
    end
    v4 = v4:getText("shop_messageFailedToSellVehicle")
  elseif v2 == SellVehicleEvent.SELL_NO_PERMISSION then
    v4 = v4:getText("shop_messageNoPermissionToReturnVehicleText")
  else
    if v2 == SellVehicleEvent.SELL_VEHICLE_IN_USE then
      v4 = v4:getText("shop_messageReturnVehicleInUse")
    else
      v4 = v4:getText("shop_messageFailedToReturnVehicle")
    end
  end
  InfoDialog.show(v3)
end
function WorkshopScreen:onVehicleChanged(success)
  if self.owner ~= nil then
    v2:openMenu()
  end
  if success then
    local v3 = v3:getText("shop_messageConfigurationChanged")
    InfoDialog.show(v3, self.onInfoDialogCallback, self, DialogElement.TYPE_INFO)
    return
  end
  v3 = v3:getText("shop_messageConfigurationChangeFailed")
  InfoDialog.show(v3, self.onInfoDialogCallback, self)
end
function WorkshopScreen:onVehicleRepairEvent(vehicle, atSellingPoint)
  if vehicle == self.vehicle then
    self:setVehicle(vehicle)
  end
end
function WorkshopScreen:onVehicleRepaintEvent(vehicle, atSellingPoint)
  if vehicle == self.vehicle then
    self:setVehicle(vehicle)
  end
end
function WorkshopScreen:onVehicleSellEvent(isDirectSell, errorCode, sellPrice, isOwned, ownerFarmId)
  if not isDirectSell then
    return
  end
  if errorCode == SellVehicleEvent.SELL_SUCCESS then
    self:onVehicleSold(sellPrice, isOwned, ownerFarmId)
    return
  end
  self:onVehicleSellFailed(isOwned, errorCode)
end
