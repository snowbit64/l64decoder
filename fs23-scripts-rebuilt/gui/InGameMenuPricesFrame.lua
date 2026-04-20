-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuPricesFrame = {}
local InGameMenuPricesFrame_mt = Class(InGameMenuPricesFrame, TabbedMenuFrameElement)
InGameMenuPricesFrame.CONTROLS = {"productList", "priceList", "noSellpointsText", "pricesColumn", "fluctuationsColumn", "fluctuationBars", "fluctuationCurrentPrice", "noFluctuationsText", "fluctuationsLayout", "fluctuationMonthHeader", "fluctuationHigh", "fluctuationLow"}
InGameMenuPricesFrame.MODE_PRICES = 1
InGameMenuPricesFrame.MODE_FLUCTUATIONS = 2
function InGameMenuPricesFrame.register()
  local v0 = InGameMenuPricesFrame.new()
  v1:loadGui("dataS/gui/InGameMenuPricesFrame.xml", "PricesFrame", v0, true)
end
function InGameMenuPricesFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuPricesFrame.CONTROLS)
  v2.fillTypes = {}
  v2.sellingStations = {}
  v2.buyingStations = {}
  v2.hasCustomMenuButtons = true
  v2.menuButtonInfo = {{inputAction = InputAction.MENU_BACK}}
  v2.mode = InGameMenuPricesFrame.MODE_PRICES
  return v2
end
function InGameMenuPricesFrame:createFromExistingGui(v1)
  local v2 = InGameMenuPricesFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuPricesFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDataSource(self)
end
function InGameMenuPricesFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:rebuildTable()
  self:setMode(self.mode)
  v1:subscribe(MessageType.HOUR_CHANGED, self.onHourChanged, self)
  self:setSoundSuppressed(true)
  v1:setFocus(self.productList)
  self:setSoundSuppressed(false)
end
function InGameMenuPricesFrame:onFrameClose()
  local v2 = v2:superClass()
  v2.onFrameClose(self)
  v1:unsubscribe(MessageType.HOUR_CHANGED, self)
  self.currentStations = {}
end
function InGameMenuPricesFrame:initialize()
  local v2 = v2:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.BUTTON_HOTSPOT)
  self.hotspotButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onButtonHotspot()
  end, profile = "buttonHotspot"}
  v2 = v2:getText("button_showFluctuations")
  self.toggleModeButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
    self:onButtonToggleMode()
  end, profile = "buttonActivate"}
end
function InGameMenuPricesFrame:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  self.arePricesInitialized = false
end
function InGameMenuPricesFrame:setMode(mode)
  self.mode = mode
  if mode ~= InGameMenuPricesFrame.MODE_PRICES then
  end
  v2:setVisible(true)
  if mode ~= InGameMenuPricesFrame.MODE_FLUCTUATIONS then
  end
  v2:setVisible(true)
  v2:setFocus(self.productList)
  self:updateMenuButtons()
end
function InGameMenuPricesFrame:initialSortStations(v1)
  if self.uiName >= v1.uiName then
  end
  return true
end
function InGameMenuPricesFrame:updateStations(stations)
  self.sellingStations = {}
  self.buyingStations = {}
  local v3 = v3:getUnloadingStations()
  for v5, v6 in pairs(...) do
    local v7 = v6:isa(SellingStation)
    if not v7 then
      continue
    end
    if not not v6.hideFromPricesMenu then
      continue
    end
    v7 = v6:getName()
    v6.uiName = v7
    table.insert(self.sellingStations, v6)
  end
  v3 = v3:getLoadingStations()
  for v5, v6 in pairs(...) do
    v7 = v6:isa(BuyingStation)
    if not v7 then
      continue
    end
    v7 = v6:getName()
    v6.uiName = v7
    table.insert(self.buyingStations, v6)
  end
  table.sort(self.sellingStations, InGameMenuPricesFrame.initialSortStations)
  table.sort(self.buyingStations, InGameMenuPricesFrame.initialSortStations)
end
function InGameMenuPricesFrame:updateMenuButtons()
  self.menuButtonInfo = {{inputAction = InputAction.MENU_BACK}}
  if self.mode == InGameMenuPricesFrame.MODE_FLUCTUATIONS then
    local v2 = v2:getText("button_showActualPrices")
    self.toggleModeButtonInfo.text = v2
  else
    v2 = v2:getText("button_showFluctuations")
    self.toggleModeButtonInfo.text = v2
  end
  table.insert(self.menuButtonInfo, self.toggleModeButtonInfo)
  local hotspot = self:getSelectedHotspot()
  if hotspot ~= nil then
    v2 = v2:getFocusedElement()
    if v2 == self.priceList then
      if hotspot == g_currentMission.currentMapTargetHotspot then
        local v3 = v3:getText(InGameMenuPricesFrame.L10N_SYMBOL.REMOVE_MARKER)
        self.hotspotButtonInfo.text = v3
      else
        v3 = v3:getText(InGameMenuPricesFrame.L10N_SYMBOL.SET_MARKER)
        self.hotspotButtonInfo.text = v3
      end
      table.insert(self.menuButtonInfo, self.hotspotButtonInfo)
    end
  end
  self:setMenuButtonInfoDirty()
end
function InGameMenuPricesFrame:updateFluctuations()
  for v9, v10 in ipairs(self.currentStations) do
    if not v10.uiIsSelling then
      continue
    end
    local v11 = v10:getEffectiveFillTypePrice(v1.index)
  end
  if 0 < v5 then
  end
  -- TODO: structure LOP_FORNPREP (pc 44, target 62)
  local v12 = math.min(math.huge, v1.economy.history[1])
  v12 = math.max(0, v1.economy.history[1])
  -- TODO: structure LOP_FORNLOOP (pc 61, target 45)
  v11 = EconomyManager.getPriceMultiplier()
  v12 = EconomyManager.getPriceMultiplier()
  v12 = math.max(v12 - (v12 - v12) * 0.2, 0)
  if v12 == v12 + (v12 - v12) * 0.2 then
  end
  v13:setVisible(not true)
  v13:setVisible(true)
  v13:setVisible(true)
  v13:setVisible(true)
  v13:setValue(v10)
  v13:setVisible(true)
  v13:setValue(v9)
  if not true then
    return
  end
  -- TODO: structure LOP_FORNPREP (pc 135, target 210)
  if 0 < (v6[1] - v7) / (v8 - v7) - (v6[(1 - 2) % 12 + 1] - v7) / (v8 - v7) then
    self.fluctuationBars[1]:applyProfile("ingameMenuPricesFluctuationBarBgUp")
    self.fluctuationBars[1].elements[1]:applyProfile("ingameMenuPricesFluctuationBarUp")
    self.fluctuationBars[1]:setPosition(nil, (v6[(1 - 2) % 12 + 1] - v7) / (v8 - v7) * self.fluctuationBars[1].parent.absSize[2])
  else
    self.fluctuationBars[1]:applyProfile("ingameMenuPricesFluctuationBarBgDown")
    self.fluctuationBars[1].elements[1]:applyProfile("ingameMenuPricesFluctuationBarDown")
    self.fluctuationBars[1]:setPosition(nil, (v6[1] - v7) / (v8 - v7) * self.fluctuationBars[1].parent.absSize[2])
  end
  local v25 = math.abs(v20)
  v16:setSize(nil, v25 * v16.parent.absSize[2])
  -- TODO: structure LOP_FORNLOOP (pc 209, target 136)
  if v2 == 0 then
  end
  local v15 = math.min((v13 - v7) / (v8 - v7), 1)
  local v14 = math.max(v15, 0)
  v15:setPosition(nil, v14 * (self.fluctuationCurrentPrice.parent.absSize[2] - self.fluctuationsColumn.elements[1].absSize[2]))
  -- TODO: structure LOP_FORNPREP (pc 255, target 270)
  local v20 = v20:formatPeriod(1, true)
  v18:setText(...)
  -- TODO: structure LOP_FORNLOOP (pc 269, target 256)
end
function InGameMenuPricesFrame:rebuildTable()
  self.fillTypes = {}
  local v2 = v2:getFillTypes()
  for v4, v5 in pairs(...) do
    if not v5.showOnPriceTable then
      continue
    end
    table.insert(self.fillTypes, v5)
  end
  v1:reloadData()
end
function InGameMenuPricesFrame:getSelectedHotspot()
  if self.priceList.selectedIndex < 1 then
    return nil
  end
  if self.currentStations[v1] ~= nil and self.currentStations[v1].owningPlaceable ~= nil then
    return v3:getHotspot(1)
  end
  return nil
end
function InGameMenuPricesFrame.getStorageFillLevel(v0, v1, v2, v3)
  local v6 = v6:getFarmId()
  local v8 = v8:getStorages()
  for v10, v11 in pairs(...) do
    if not (v3[v11] == nil) then
      continue
    end
    local v12 = v11:getOwnerFarmId()
    if not (v12 == v6) then
      continue
    end
    if not (v11.foreignSilo ~= v2) then
      continue
    end
    v12 = v11:getIsFillTypeSupported(v1.index)
    if not v12 then
      continue
    end
    v3[v11] = true
    v12 = v11:getFillLevel(v1.index)
    v12 = v11:getCapacity(v1.index)
  end
  if 0 < v4 then
    return v5, v4
  end
  return -1, -1
end
function InGameMenuPricesFrame:getNumberOfItemsInSection(list, section)
  if list == self.productList then
    return #self.fillTypes
  end
  return #self.currentStations
end
function InGameMenuPricesFrame:populateCellForItemInSection(list, section, index, cell)
  if list == self.productList then
    local v6 = cell:getAttribute("icon")
    v6:setImageFilename(self.fillTypes[index].hudOverlayFilename)
    v6 = cell:getAttribute("title")
    v6:setText(self.fillTypes[index].title)
    v6 = cell:getAttribute("greatDemand")
    if v6 ~= nil then
      local v7 = v7:getHasFillTypeGreatDemand(self.fillTypes[index].index)
      v6:setVisible(v7)
    end
    local v8 = self:getStorageFillLevel(v5, true, {})
    local v9 = self:getStorageFillLevel(v5, false, {})
    if v8 < 0 and v9 < 0 then
      local v10 = cell:getAttribute("storage")
      v10:setText("-")
      return
    end
    v10 = cell:getAttribute("storage")
    local v15 = math.max(v8, 0)
    local v16 = math.max(v9, 0)
    local v12 = v12:formatVolume(v15 + v16)
    v10:setText(...)
    return
  end
  if self.currentStations[index].owningPlaceable ~= nil then
    v8 = v8:getHotspot(1)
    if v8 == nil then
    end
  end
  v8 = cell:getAttribute("hotspot")
  v8:setVisible(v7)
  if v7 then
    if g_currentMission.currentMapTargetHotspot ~= nil then
      v9 = v9:getHotspot(1)
      if v9 ~= g_currentMission.currentMapTargetHotspot then
      end
    end
    v9 = cell:getAttribute("hotspot")
    if v8 then
    else
    end
    v9:applyProfile(v11)
  end
  v8 = cell:getAttribute("title")
  v8:setText(v5.uiName)
  v9 = v5:getEffectiveFillTypePrice(v6.index)
  v8 = tostring(...)
  v9 = cell:getAttribute("price")
  v9:setVisible(v5.uiIsSelling)
  v9 = cell:getAttribute("buyPrice")
  v9:setVisible(not v5.uiIsSelling)
  if v5.uiIsSelling then
    v9 = cell:getAttribute("price")
    v9:setValue(v8 * 1000)
    v9 = v5:getCurrentPricingTrend(v6.index)
    if v9 ~= nil then
      local v11 = Utils.isBitSet(v9, SellingStation.PRICE_GREAT_DEMAND)
      if v11 then
      else
        v11 = Utils.isBitSet(v9, SellingStation.PRICE_CLIMBING)
        if v11 then
        else
          v11 = Utils.isBitSet(v9, SellingStation.PRICE_FALLING)
          if v11 then
          end
        end
      end
    end
    v11 = cell:getAttribute("priceTrend")
    v11:applyProfile(v10)
    return
  end
  v9 = cell:getAttribute("buyPrice")
  v9:setValue(v8 * 1000)
  v9 = cell:getAttribute("priceTrend")
  v9:applyProfile("ingameMenuPricesArrow")
end
function InGameMenuPricesFrame:onListSelectionChanged(list, section, index)
  if list == self.productList then
    self.currentStations = {}
    for v8, v9 in ipairs(self.sellingStations) do
      local v10 = v9:getIsFillTypeAllowed(v4.index)
      if not v10 then
        continue
      end
      v9.uiIsSelling = true
      table.insert(self.currentStations, v9)
    end
    for v8, v9 in ipairs(self.buyingStations) do
      v10 = v9:getIsFillTypeSupported(v4.index)
      if not v10 then
        continue
      end
      v9.uiIsSelling = false
      table.insert(self.currentStations, v9)
    end
    if #self.currentStations ~= 0 then
    end
    v5:setVisible(true)
    v5:reloadData()
    v5:forceSelectionUpdate()
    self:updateFluctuations()
  end
  self:updateMenuButtons()
end
function InGameMenuPricesFrame:onButtonHotspot()
  local hotspot = self:getSelectedHotspot()
  if hotspot ~= nil then
    if g_currentMission.currentMapTargetHotspot == hotspot then
      v2:setMapTargetHotspot(nil)
    else
      v2:setMapTargetHotspot(hotspot)
    end
    self:updateMenuButtons()
  else
    v2:setMapTargetHotspot(nil)
  end
  v2:reloadData()
end
function InGameMenuPricesFrame:onButtonToggleMode()
  if self.mode == InGameMenuPricesFrame.MODE_PRICES then
    self:setMode(InGameMenuPricesFrame.MODE_FLUCTUATIONS)
    return
  end
  self:setMode(InGameMenuPricesFrame.MODE_PRICES)
end
function InGameMenuPricesFrame:onHourChanged()
  self:updateFluctuations()
end
InGameMenuPricesFrame.PROFILE = {SELLING_POINT_CELL_NEUTRAL = "ingameMenuPricesRowSellingPointCell", SELLING_POINT_CELL_TAGGED = "ingameMenuPricesRowSellingPointCellTagged", SELLING_POINT_CELL_NONE = "ingameMenuPricesRowSellingPointCellNone", PRICE_CELL_NEUTRAL = "ingameMenuPricesRowPriceCell", PRICE_CELL_TREND_UP = "ingameMenuPricesRowPriceCellTrendUp", PRICE_CELL_TREND_DOWN = "ingameMenuPricesRowPriceCellTrendDown", PRICE_CELL_GREAT_DEMAND = "ingameMenuPricesRowPriceCellGreatDemand", SILO_NAME = "ingameMenuPricesRowSiloNameCell", SILO_NAME_LAST_ROW = "ingameMenuPricesRowSiloNameCellLastRow", SILO_LITERS = "ingameMenuPricesRowSiloLiters", SILO_LITERS_LAST_ROW = "ingameMenuPricesRowSiloLitersLastRow", LITERS = "ingameMenuPricesRowLiters", LITERS_LAST_ROW = "ingameMenuPricesRowLitersLastRow", SILO_CAPACITY_LABEL = "ingameMenuPricesRowSiloCapacity", SILO_CAPACITY_VALUE = "ingameMenuPricesRowSiloCapacityValue"}
InGameMenuPricesFrame.L10N_SYMBOL = {SILO_CAPACITY = "ui_silos_totalCapacity", SET_MARKER = "action_tag", REMOVE_MARKER = "action_untag"}
