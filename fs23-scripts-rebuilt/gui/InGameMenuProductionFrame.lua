-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuProductionFrame = {}
local InGameMenuProductionFrame_mt = Class(InGameMenuProductionFrame, TabbedMenuFrameElement)
InGameMenuProductionFrame.UPDATE_INTERVAL = 5000
InGameMenuProductionFrame.STATUS_BAR_LOW = 0.2
InGameMenuProductionFrame.STATUS_BAR_HIGH = 0.8
InGameMenuProductionFrame.CONTROLS = {"productionListBox", "productionList", "headerText", "storageListBox", "storageList", "detailsBox", "detailProductionStatus", "productionCyclesDesc", "detailCyclesPerMonth", "productionCostsDesc", "detailCostsPerMonth", "recipeFillIcon", "recipeText", "recipeArrow", "recipePlus", "detailRecipeInputLayout", "detailRecipeOutputLayout", "noPointsBox"}
function InGameMenuProductionFrame.register()
  local v0 = InGameMenuProductionFrame.new()
  v1:loadGui("dataS/gui/InGameMenuProductionFrame.xml", "ProductionFrame", v0, true)
end
function InGameMenuProductionFrame.new(messageCenter, i18n)
  if not i18n then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuProductionFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  v2.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  v2.menuButtonInfo = {v2.backButtonInfo}
  v2.timeSinceLastStateUpdate = 0
  v2.productionPoints = {}
  return v2
end
function InGameMenuProductionFrame:createFromExistingGui(v1)
  local v2 = InGameMenuProductionFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuProductionFrame:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function InGameMenuProductionFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDataSource(self)
end
function InGameMenuProductionFrame:initialize()
  v1:unlinkElement()
  v1:unlinkElement()
  v1:unlinkElement()
  local v2 = v2:getText(InGameMenuAnimalsFrame.L10N_SYMBOL.BUTTON_HOTSPOT)
  self.hotspotButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = function()
    self:onButtonHotspot()
  end, profile = "buttonHotspot"}
  v2 = v2:getText("action_visit")
  self.visitButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
    self:onButtonVisit()
  end, profile = "buttonVisitPlace"}
  v2 = v2:getText("button_activate")
  self.activateButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onButtonActivate()
  end, profile = "buttonOK"}
  v2 = v2:getText("ui_production_changeOutputMode")
  self.toggleStorageModeButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onButtonToggleOutputMode()
  end, profile = "buttonOK"}
  local v5 = v5:getText("ui_cycles")
  local v6 = v6:getText("ui_month")
  local v3 = string.format(...)
  v1:setText(...)
  v5 = v5:getText("finance_productionCosts")
  v6 = v6:getText("ui_month")
  v3 = string.format(...)
  v1:setText(...)
  if Platform.isMobile then
    v3 = v3:getText("ui_production")
    v1:setText(...)
  end
end
function InGameMenuProductionFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self.chainManager = g_currentMission.productionChainManager
  self:updateProductionList()
  self:updateFrameState()
  v1:setFocus(self.productionList)
end
function InGameMenuProductionFrame:onFrameClose()
  local v2 = v2:superClass()
  v2.onFrameClose(self)
  self.selectedProductionPoint = nil
end
function InGameMenuProductionFrame:setPlayerFarm(playerFarm)
  self.playerFarm = playerFarm
  if playerFarm ~= nil then
    self:updateFrameState()
  end
end
function InGameMenuProductionFrame:getProductionPoints()
  return self.productionPoints
end
function InGameMenuProductionFrame:updateFrameState()
  if self.chainManager then
    local v3 = self:getProductionPoints()
    if 0 >= #v3 then
    end
  end
  v2:setVisible(v1)
  v2:setVisible(v1)
  v2:setVisible(v1)
  v2:setVisible(not v1)
end
function InGameMenuProductionFrame:updateDetails()
  local production = self:getSelectedProduction()
  if Platform.isMobile then
  end
  if v2 == ProductionPoint.PROD_STATUS.MISSING_INPUTS then
  elseif v2 == ProductionPoint.PROD_STATUS.NO_OUTPUT_SPACE then
  end
  v5:applyProfile(v4)
  v5:setLocaKey(v3)
  local v7 = MathUtil.round(production.cyclesPerMonth, 2)
  v5:setText(...)
  v5:setValue(production.costsPerActiveMonth)
  function(self, production)
    -- TODO: structure LOP_FORNPREP (pc 5, target 13)
    v5:delete()
    -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
    for v5, v6 in ipairs(self) do
      if 1 < v5 then
        v7:clone(production)
      end
      if v6.amount ~= 1 then
        local v7 = v7:clone(production)
        local v10 = v10:formatNumber(v6.amount, 2)
        v7:setText(...)
      end
      v7 = v7:getFillTypeByIndex(v6["type"])
      local v8 = v8:clone(production)
      v8:setImageFilename(v7.hudOverlayFilename)
    end
    production:invalidateLayout()
  end(production.inputs, self.detailRecipeInputLayout)
  function(self, production)
    -- TODO: structure LOP_FORNPREP (pc 5, target 13)
    v5:delete()
    -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
    for v5, v6 in ipairs(self) do
      if 1 < v5 then
        v7:clone(production)
      end
      if v6.amount ~= 1 then
        local v7 = v7:clone(production)
        local v10 = v10:formatNumber(v6.amount, 2)
        v7:setText(...)
      end
      v7 = v7:getFillTypeByIndex(v6["type"])
      local v8 = v8:clone(production)
      v8:setImageFilename(v7.hudOverlayFilename)
    end
    production:invalidateLayout()
  end(production.outputs, self.detailRecipeOutputLayout)
  v6:reloadData()
end
function InGameMenuProductionFrame:setSelectedProductionPoint(productionPoint)
  local v3 = self:getProductionPoints()
  for v5, v6 in ipairs(...) do
    if not (v6 == productionPoint) then
      continue
    end
    v7:setSelectedItem(v5, 1)
    return
  end
end
function InGameMenuProductionFrame:updateMenuButtons()
  self.menuButtonInfo = {self.backButtonInfo}
  local v3 = v3:getFocusedElement()
  if self.productionList ~= v3 then
  end
  if true then
    local v2, v3 = self:getSelectedProduction()
    local v4 = v3:getIsProductionEnabled(v2.id)
    if v4 then
      local v6 = v6:getText("button_deactivate")
      -- if v6 then goto L44 end
    end
    v6 = v6:getText("button_activate")
    v5.text = v6
    table.insert(self.menuButtonInfo, self.activateButtonInfo)
    local v5 = v5:getHotspot()
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L130
    if v5 == g_currentMission.currentMapTargetHotspot then
      local v7 = v7:getText("action_untag")
      self.hotspotButtonInfo.text = v7
    else
      v7 = v7:getText("action_tag")
      self.hotspotButtonInfo.text = v7
    end
    table.insert(self.menuButtonInfo, self.hotspotButtonInfo)
    v6 = v5:getBeVisited()
    -- if not v6 then goto L130 end
    -- if not Platform.gameplay.canVisitPOI then goto L130 end
    table.insert(self.menuButtonInfo, self.visitButtonInfo)
  else
    v2, v3 = self:getSelectedStorageFillType()
    if not v3 and v2 ~= FillType.UNKNOWN then
      table.insert(self.menuButtonInfo, self.toggleStorageModeButtonInfo)
    end
  end
  self:setMenuButtonInfoDirty()
end
function InGameMenuProductionFrame:getSelectedProduction()
  local v2 = self:getProductionPoints()
  local v3 = v3:getSelectedSection()
  local v4 = v4:getSelectedIndexInSection()
  return v2[v3].sortedProductions[v4], v2[v3]
end
function InGameMenuProductionFrame:getSelectedStorageFillType()
  local v2 = v2:getFocusedElement()
  if self.productionList == v2 then
    return nil
  end
  local production = production:getSelectedIndexInSection()
  if production == 0 then
    return nil
  end
  v2 = v2:getSelectedSection()
  if v2 == 1 then
    return self.selectedProductionPoint.sortedInputFillTypes[production], true
  end
  return self.selectedProductionPoint.sortedOutputFillTypes[production], false
end
function InGameMenuProductionFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self.timeSinceLastStateUpdate = self.timeSinceLastStateUpdate + dt
  if InGameMenuProductionFrame.UPDATE_INTERVAL <= self.timeSinceLastStateUpdate then
    self.timeSinceLastStateUpdate = 0
    self:updateProductionList()
  end
end
function InGameMenuProductionFrame:getNumberOfSections(list, section)
  if list == self.productionList then
    local v4 = self:getProductionPoints()
    return #v4
  end
  return 2
end
function InGameMenuProductionFrame:getTitleForSectionHeader(list, section)
  if list == self.productionList then
    local v4 = self:getProductionPoints()
    v4 = v4[section]:getName()
    return v4
  end
  if section == 1 then
    return v3:getText("ui_productions_incomingMaterials")
  end
  v3 = v3:getText("ui_productions_outgoingProducts")
  return v3
end
function InGameMenuProductionFrame:getNumberOfItemsInSection(list, section)
  if list == self.productionList then
    local v4 = self:getProductionPoints()
    return #v4[section].sortedProductions
  end
  if self.selectedProductionPoint ~= nil then
    if section == 1 then
      return #self.selectedProductionPoint.sortedInputFillTypes
    end
    return #self.selectedProductionPoint.sortedOutputFillTypes
  end
  return 0
end
function InGameMenuProductionFrame:getCellTypeForItemInSection(list, section, index)
  if list == self.storageList then
    if section == 1 then
      return "inputCell"
    end
    return "outputCell"
  end
end
function InGameMenuProductionFrame:populateCellForItemInSection(list, section, index, cell)
  if list == self.productionList then
    local v6 = self:getProductionPoints()
    local v7 = v7:getFillTypeByIndex(v6[section].sortedProductions[index].primaryProductFillType)
    if v7 ~= nil then
      local v8 = cell:getAttribute("icon")
      v8:setImageFilename(v7.hudOverlayFilename)
    end
    v8 = cell:getAttribute("icon")
    if v7 == nil then
    end
    v8:setVisible(true)
    v8 = cell:getAttribute("name")
    if not v6.name then
    end
    v8:setText(v10)
    local activityElement = cell:getAttribute("activity")
    local v10 = cell:getAttribute("activityBg")
    if v6.status == ProductionPoint.PROD_STATUS.RUNNING then
      activityElement:applyProfile("ingameMenuProductionProductionActivityActive")
      -- if not Platform.isMobile then goto L235 end
      v10:applyProfile("ingameMenuProductionProductionActivityBgActive")
      return
    end
    if v8 ~= ProductionPoint.PROD_STATUS.MISSING_INPUTS then
      -- if v8 ~= ProductionPoint.PROD_STATUS.NO_OUTPUT_SPACE then goto L98 end
    end
    activityElement:applyProfile("ingameMenuProductionProductionActivityIssue")
    -- if not Platform.isMobile then goto L235 end
    v10:applyProfile("ingameMenuProductionProductionActivityBgIssue")
    return
    activityElement:applyProfile("ingameMenuProductionProductionActivity")
    -- if not Platform.isMobile then goto L235 end
    v10:applyProfile("ingameMenuProductionProductionActivityBg")
    return
  end
  local v5, v6 = self:getSelectedProduction()
  if section == 1 then
  else
  end
  if v7 ~= FillType.UNKNOWN then
    activityElement = activityElement:getFillLevel(v7)
    v10 = v10:getCapacity(v7)
    local v11 = v11:getFillTypeByIndex(v7)
    local v12 = cell:getAttribute("icon")
    v12:setImageFilename(v11.hudOverlayFilename)
    v12 = cell:getAttribute("fillType")
    v12:setText(v11.title)
    v12 = cell:getAttribute("fillLevel")
    local v14 = v14:formatVolume(activityElement, 0)
    v12:setText(...)
    if not v8 then
      v12 = v6:getOutputDistributionMode(v7)
      local v13 = v13:getText("ui_production_output_storing")
      if v12 == ProductionPoint.OUTPUT_MODE.DIRECT_SELL then
        v14 = v14:getText("ui_production_output_selling")
      elseif v12 == ProductionPoint.OUTPUT_MODE.AUTO_DELIVER then
        v14 = v14:getText("ui_production_output_distributing")
      end
      v14 = cell:getAttribute("outputMode")
      v14:setText(v13)
    end
    v14 = cell:getAttribute("bar")
    self:setStatusBarValue(v14, activityElement / v10, v8)
  end
end
function InGameMenuProductionFrame.setStatusBarValue(v0, list, section, index)
  if index then
    -- if v2 < InGameMenuProductionFrame.STATUS_BAR_LOW then goto L15 end
  end
  if not index and InGameMenuProductionFrame.STATUS_BAR_HIGH < section then
  end
  list:applyProfile(cell)
  if list.startSize ~= nil then
  end
  local v12 = math.min(1, section)
  local activityElement = math.max(v6, v5 * v12)
  list:setSize(activityElement, nil)
end
function InGameMenuProductionFrame:onListSelectionChanged(list, section, index)
  if list == self.productionList then
    local v5 = self:getProductionPoints()
    self.selectedProductionPoint = v5[section]
    if self.selectedProductionPoint == nil then
      return
    end
    self.selectedProduction = self.selectedProductionPoint.sortedProductions[index]
    self.selectedStorage = nil
    self:updateDetails()
  else
    if self.selectedProductionPoint == nil then
      return
    end
    self.selectedStorage = self.selectedProductionPoint.storage.sortedFillTypes[index]
  end
  self:updateMenuButtons()
end
function InGameMenuProductionFrame:onButtonActivate()
  local list = list:getHasPlayerPermission("manageProductions")
  if not list then
    local section = section:getText("shop_messageNoPermissionGeneral")
    InfoDialog.show(section, nil, nil, DialogElement.TYPE_WARNING)
    return
  end
  list, section = self:getSelectedProduction()
  if list ~= nil then
    local index = section:getIsProductionEnabled(list.id)
    section:setProductionState(list.id, not index)
    self:updateProductionList()
  end
end
function InGameMenuProductionFrame:onButtonToggleOutputMode()
  local list = list:getHasPlayerPermission("manageProductions")
  if not list then
    local section = section:getText("shop_messageNoPermissionGeneral")
    InfoDialog.show(section, nil, nil, DialogElement.TYPE_WARNING)
    return
  end
  list, section = self:getSelectedProduction()
  local fillType = self:getSelectedStorageFillType()
  if fillType ~= FillType.UNKNOWN then
    section:toggleOutputDistributionMode(fillType)
    cell:reloadData()
  end
end
function InGameMenuProductionFrame:onButtonHotspot()
  local list, section = self:getSelectedProduction()
  if section ~= nil then
    local index = index:getHotspot()
    if index ~= nil then
      if g_currentMission.currentMapTargetHotspot == index then
        cell:setMapTargetHotspot(nil)
      else
        cell:setMapTargetHotspot(index)
      end
      self:updateMenuButtons()
      return
    end
    cell:setMapTargetHotspot(nil)
  end
end
function InGameMenuProductionFrame:onButtonVisit()
  local list, section = self:getSelectedProduction()
  if section ~= nil then
    local index = index:getHotspot()
    if index ~= nil then
      local cell, v5, v6 = index:getTeleportWorldPosition()
      if cell ~= nil and v5 ~= nil and v6 ~= nil then
        if g_currentMission.controlledVehicle ~= nil then
          v7:onLeaveVehicle(cell, v5, v6, true, false)
        else
          v7:moveToAbsolute(cell, v5, v6, false, false)
        end
        v7:changeScreen(nil)
      end
    end
  end
end
function InGameMenuProductionFrame:updateProductionList()
  local list = list:getProductionPointsForFarmId(self.playerFarm.farmId)
  self.productionPoints = {}
  for v5, v6 in ipairs(list) do
    table.insert(self.productionPoints, v6)
    v6.sortedProductions = {}
    for v10, v11 in ipairs(v6.productions) do
      table.insert(v6.sortedProductions, v11)
    end
    table.sort(v6.sortedProductions, function(self, list)
      if self.name == nil then
        local index = index:getFillTypeTitleByIndex(self.primaryProductFillType)
      end
      if list.name == nil then
        local cell = cell:getFillTypeTitleByIndex(list.primaryProductFillType)
      end
      if section >= index then
      end
      return true
    end)
    v6.sortedInputFillTypes = {}
    v6.sortedOutputFillTypes = {}
    for v10, v11 in ipairs(v6.inputFillTypeIdsArray) do
      table.insert(v6.sortedInputFillTypes, v11)
    end
    table.sort(v6.sortedInputFillTypes, function(self, list)
      local section = section:getFillTypeTitleByIndex(self)
      local index = index:getFillTypeTitleByIndex(list)
      if section >= index then
      end
      return true
    end)
    for v10, v11 in ipairs(v6.outputFillTypeIdsArray) do
      table.insert(v6.sortedOutputFillTypes, v11)
    end
    table.sort(v6.sortedOutputFillTypes, function(self, list)
      local section = section:getFillTypeTitleByIndex(self)
      local index = index:getFillTypeTitleByIndex(list)
      if section >= index then
      end
      return true
    end)
  end
  table.sort(self.productionPoints, function(self, list)
    local index = self:getName()
    local cell = list:getName()
    if index >= cell then
    end
    return true
  end)
  section:reloadData()
end
