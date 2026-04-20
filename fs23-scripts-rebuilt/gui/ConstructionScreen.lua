-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionScreen = {CONTROLS = {"itemList", "listBox", "menuBox", "menuBackgroundLarge", "menuBackgroundSmall", "categoriesBox", "tabsBox", "categoryButtonTemplate", "tabButtonTemplate", "buttonDestruct", "detailsTitle", "detailsDescription", "detailsAttributesLayout", "attrIcon", "attrValue", "attrIconsLayout", "detailsInfoIcon", "detailsInfo", "fruitIconTemplate"}, INPUT_CONTEXT = "CONSTRUCTION_MENU"}
local ConstructionScreen_mt = Class(ConstructionScreen, ScreenElement)
function ConstructionScreen.register()
  local v0 = ConstructionScreen.new()
  v1:loadGui("dataS/gui/ConstructionScreen.xml", "ConstructionScreen", v0)
end
function ConstructionScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ConstructionScreen.CONTROLS)
  v2.isMouseMode = true
  local v3 = GuiTopDownCamera.new()
  v2.camera = v3
  v3 = GuiTopDownCursor.new()
  v2.cursor = v3
  v3 = ConstructionSound.new()
  v2.sound = v3
  v2.brush = nil
  v2.items = {}
  v2.clonedElements = {}
  v2.menuEvents = {}
  v2.brushEvents = {}
  v2.marqueeBoxes = {}
  return v2
end
function ConstructionScreen:createFromExistingGui(v1)
  local v2 = ConstructionScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function ConstructionScreen:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  if self.selectorBrush ~= nil then
    v1:delete()
  end
  if self.destructBrush ~= nil then
    v1:delete()
  end
  v1:delete()
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function ConstructionScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  g_currentMission.lastConstructionScreenOpenTime = g_time
  v1:setContext(ConstructionScreen.INPUT_CONTEXT)
  v1:setTerrainRootNode(g_currentMission.terrainRootNode)
  v1:setControlledPlayer(g_currentMission.player)
  v1:setControlledVehicle(g_currentMission.controlledVehicle)
  v1:activate()
  v1:activate()
  v1:setTopDownCamera(self.camera)
  if self.selectorBrush == nil then
    local v1 = v1:getClassObjectByTypeName("select")
    v2 = v1.new(nil, self.cursor)
    self.selectorBrush = v2
  end
  self:setBrush(self.selectorBrush, true)
  if self.destructBrush == nil then
    v1 = v1:getClassObjectByTypeName("destruct")
    v2 = v1.new(nil, self.cursor)
    self.destructBrush = v2
  end
  self.destructMode = false
  if g_inputBinding.lastInputMode ~= GS_INPUT_HELP_MODE_KEYBOARD then
  end
  self.isMouseMode = true
  v1:subscribe(MessageType.INPUT_MODE_CHANGED, self.onInputModeChanged, self)
  v1:pushArea(self.menuBox.absPosition[1], self.menuBox.absPosition[2], self.menuBox.absSize[1], self.menuBox.absSize[2])
  self:rebuildData()
  self:resetMenuState()
  self:updateMenuState()
  v1:subscribe(MessageType.SLOT_USAGE_CHANGED, self.onSlotUsageChanged, self)
end
function ConstructionScreen:onClose(element)
  v2:unsubscribeAll(self)
  g_currentMission.lastConstructionScreenOpenTime = -1
  self:setBrush(nil)
  v2:deactivate()
  v2:deactivate()
  v2:setTopDownCamera(nil)
  v2:popArea()
  self:removeMenuActionEvents()
  v2:revertContext()
  local v3 = v3:superClass()
  v3.onClose(self)
end
function ConstructionScreen:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:unlinkElement()
  v1:removeElement(self.categoryButtonTemplate)
  v1:unlinkElement()
  v1:removeElement(self.tabButtonTemplate)
end
function ConstructionScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  v2:setCursorLocked(self.cursor.isCatchingCursor)
  v2:update(dt)
  if self.isMouseMode then
    -- if v0.isMouseInMenu then goto L42 end
  end
  local v4 = v4:getPickRay()
  v2:setCameraRay(...)
  -- goto L48  (LOP_JUMP +6)
  v2:setCameraRay(nil)
  v2:update(dt)
  v2:update(dt)
  if self.brush.inputTextDirty then
    self:updateBrushActionTexts()
    self.brush.inputTextDirty = false
  end
  local v2 = v2:setActiveSound(self.brush.activeSoundId, self.brush.activeSoundPitchModifier)
  if v2 then
    self.brush.activeSoundId = ConstructionSound.ID.NONE
  end
  self:updateMarqueeAnimation(dt)
  v2:showMoneyChange(MoneyType.SHOP_PROPERTY_BUY)
  v2:showMoneyChange(MoneyType.SHOP_PROPERTY_SELL)
end
function ConstructionScreen:setBrush(brush, skipMenuUpdate)
  if brush == self.brush then
    return
  end
  if self.brush ~= nil then
    v4:deactivate()
  end
  self:removeMenuActionEvents()
  self:removeBrushActionEvents()
  v4:removeActionEvents()
  v4:removeActionEvents()
  self.brush = brush
  v4:registerActionEvents()
  v4:registerActionEvents()
  if self.brush ~= nil then
    -- if v0.brush ~= v0.selectorBrush then goto L59 end
  end
  self:registerMenuActionEvents(true)
  -- goto L67  (LOP_JUMP +8)
  if self.brush ~= nil then
    self:registerMenuActionEvents(false)
  end
  if brush ~= nil then
    v4:activate()
    if v3 ~= nil then
      local v4 = v4:class()
      local v5 = v3:class()
      if v4 == v5 then
        v4:copyState(v3)
      end
    end
    self:registerBrushActionEvents()
  end
  if not skipMenuUpdate then
    self:updateMenuState(v3)
  end
  self:updateBrushActionTexts()
  self:updateMenuActionTexts()
  if self.brush ~= nil then
  end
  v4:setMovementDisabledForGamepad(true)
end
function ConstructionScreen:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.menuBox.absPosition[1], self.menuBox.absPosition[2], self.menuBox.absSize[1], self.menuBox.absSize[2])
  self.isMouseInMenu = v7
  if not self.isMouseInMenu then
    v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.categoriesBox.absPosition[1], self.categoriesBox.absPosition[2], self.categoriesBox.absSize[1], self.categoriesBox.absSize[2])
    self.isMouseInMenu = v7
  end
  if not self.isMouseInMenu then
    v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.buttonDestruct.absPosition[1], self.buttonDestruct.absPosition[2], self.buttonDestruct.absSize[1], self.buttonDestruct.absSize[2])
    self.isMouseInMenu = v7
  end
  self.camera.mouseDisabled = self.isMouseInMenu
  self.cursor.mouseDisabled = self.isMouseInMenu
  v7:mouseEvent(posX, posY, isDown, isUp, button)
  v7:mouseEvent(posX, posY, isDown, isUp, button)
end
function ConstructionScreen:draw()
  local v2 = v2:superClass()
  v2.draw(self)
  v1:drawBaseHUD()
  v1:drawInputHelp()
  v1:draw()
end
function ConstructionScreen:onInputModeChanged(inputMode)
  if inputMode[1] ~= GS_INPUT_HELP_MODE_KEYBOARD then
  end
  self.isMouseMode = true
  self:updateMenuState()
  self:updateMenuActionTexts()
end
function ConstructionScreen:registerMenuActionEvents(hasMenuButtons)
  self.menuEvents = {}
  local v4, v5 = v4:registerActionEvent(InputAction.MENU_ACCEPT, self, self.onButtonMenuAccept, false, true, false, true)
  v4:setActionEventTextPriority(v5, GS_PRIO_VERY_LOW)
  v4:setActionEventTextVisibility(v5, false)
  self.acceptButtonEvent = v5
  v4, v5 = v4:registerActionEvent(InputAction.MENU_BACK, self, self.onButtonMenuBack, false, true, false, true)
  v4:setActionEventTextPriority(v5, GS_PRIO_VERY_LOW)
  self.backButtonEvent = v5
  table.insert(self.menuEvents, v5)
  v4, v5 = v4:registerActionEvent(InputAction.PAUSE, g_currentMission, g_currentMission.onPause, false, true, false, true)
  v4:setActionEventTextVisibility(v5, false)
  v4, v5 = v4:registerActionEvent(InputAction.TOGGLE_HELP_TEXT, g_currentMission, g_currentMission.onToggleHelpText, false, true, false, true)
  v4:setActionEventTextVisibility(v5, false)
  if hasMenuButtons then
    v4, v5 = v4:registerActionEvent(InputAction.AXIS_CONSTRUCTION_MENU_UP_DOWN, self, self.onMenuUpDown, false, true, true, true)
    v4:setActionEventTextVisibility(v5, false)
    table.insert(self.menuEvents, v5)
    v4, v5 = v4:registerActionEvent(InputAction.AXIS_CONSTRUCTION_MENU_LEFT_RIGHT, self, self.onMenuLeftRight, false, true, true, true)
    v4:setActionEventTextVisibility(v5, false)
    table.insert(self.menuEvents, v5)
    v4, v5 = v4:registerActionEvent(InputAction.AXIS_CONSTRUCTION_MENU_UP_DOWN, self, self.onReleaseUpDown, true, false, false, true)
    v4:setActionEventTextVisibility(v5, false)
    table.insert(self.menuEvents, v5)
    v4, v5 = v4:registerActionEvent(InputAction.AXIS_CONSTRUCTION_MENU_LEFT_RIGHT, self, self.onReleaseLeftRight, true, false, false, true)
    v4:setActionEventTextVisibility(v5, false)
    table.insert(self.menuEvents, v5)
  end
  v4, v5 = v4:registerActionEvent(InputAction.CONSTRUCTION_DESTRUCT_TOGGLE, self, self.onClickDestruct, false, true, false, true)
  v4:setActionEventTextVisibility(v5, false)
  self:updateMenuActionTexts()
end
function ConstructionScreen.onMenuUpDown(v0, v1, v2)
  v3:onMenuInput(InputAction.MENU_AXIS_UP_DOWN, v2)
end
function ConstructionScreen.onMenuLeftRight(v0, v1, v2)
  v3:onMenuInput(InputAction.MENU_AXIS_LEFT_RIGHT, v2)
end
function ConstructionScreen.onReleaseUpDown(v0, v1)
  v2:onReleaseMovement(InputAction.MENU_AXIS_UP_DOWN)
end
function ConstructionScreen.onReleaseLeftRight(v0, v1)
  v2:onReleaseMovement(InputAction.MENU_AXIS_LEFT_RIGHT)
end
function ConstructionScreen:updateMenuActionTexts()
  v1:setActionEventTextVisibility(self.backButtonEvent, true)
  if self.brush == self.selectorBrush then
    local v4 = v4:getText("input_CONSTRUCTION_EXIT")
    v1:setActionEventText(...)
    return
  end
  v4 = v4:getText("input_CONSTRUCTION_CANCEL")
  v1:setActionEventText(...)
end
function ConstructionScreen:removeMenuActionEvents()
  for v4, v5 in ipairs(self.menuEvents) do
    v6:removeActionEvent(v5)
  end
end
function ConstructionScreen:onButtonMenuAccept()
  if not self.isMouseMode then
    -- if v0.brush ~= v0.selectorBrush then goto L19 end
  end
  self.dragIsLocked = true
  v1:notifyControls("MENU_ACCEPT")
  return
  self:onButtonPrimary()
end
function ConstructionScreen:onButtonMenuBack()
  local v1 = v1:canCancel()
  if v1 then
    v1:cancel()
    return
  end
  if self.brush == self.destructBrush then
    self.destructMode = false
    self:setBrush(self.previousBrush)
    return
  end
  if not self.brush.isSelector then
    self:setBrush(self.selectorBrush)
    return
  end
  self:changeScreen(nil)
end
function ConstructionScreen:registerBrushActionEvents()
  if self.brush == nil then
    return
  end
  self.brushEvents = {}
  if v3.supportsPrimaryButton then
    if v3.supportsPrimaryDragging then
      local v4, v5 = v4:registerActionEvent(InputAction.CONSTRUCTION_ACTION_PRIMARY, self, self.onButtonPrimaryDrag, true, true, true, true)
      table.insert(self.brushEvents, v5)
      self.primaryBrushEvent = v5
    else
      v4, v5 = v4:registerActionEvent(InputAction.CONSTRUCTION_ACTION_PRIMARY, self, self.onButtonPrimary, false, true, false, true)
      table.insert(self.brushEvents, v5)
      self.primaryBrushEvent = v5
    end
    v4:setActionEventTextPriority(v2, GS_PRIO_VERY_HIGH)
  end
  if v3.supportsSecondaryButton then
    if v3.supportsSecondaryDragging then
      v4, v5 = v4:registerActionEvent(InputAction.CONSTRUCTION_ACTION_SECONDARY, self, self.onButtonSecondaryDrag, true, true, true, true)
      table.insert(self.brushEvents, v5)
      self.secondaryBrushEvent = v5
    else
      v4, v5 = v4:registerActionEvent(InputAction.CONSTRUCTION_ACTION_SECONDARY, self, self.onButtonSecondary, false, true, false, true)
      table.insert(self.brushEvents, v5)
      self.secondaryBrushEvent = v5
    end
    v4:setActionEventTextPriority(v2, GS_PRIO_VERY_HIGH)
  end
  if v3.supportsTertiaryButton then
    v4, v5 = v4:registerActionEvent(InputAction.CONSTRUCTION_ACTION_TERTIARY, self, self.onButtonTertiary, false, true, false, true)
    self.tertiaryBrushEvent = v5
    v4:setActionEventTextPriority(self.tertiaryBrushEvent, GS_PRIO_HIGH)
    table.insert(self.brushEvents, self.tertiaryBrushEvent)
  end
  if v3.supportsFourthButton then
    v4, v5 = v4:registerActionEvent(InputAction.CONSTRUCTION_ACTION_FOURTH, self, self.onButtonFourth, false, true, false, true)
    self.fourthBrushEvent = v5
    v4:setActionEventTextPriority(self.fourthBrushEvent, GS_PRIO_HIGH)
    table.insert(self.brushEvents, self.fourthBrushEvent)
  end
  if v3.supportsPrimaryAxis then
    v4, v5 = v4:registerActionEvent(InputAction.AXIS_CONSTRUCTION_ACTION_PRIMARY, self, self.onAxisPrimary, false, not v3.primaryAxisIsContinuous, v3.primaryAxisIsContinuous, true)
    self.primaryBrushAxisEvent = v5
    v4:setActionEventTextPriority(self.primaryBrushAxisEvent, GS_PRIO_HIGH)
    table.insert(self.brushEvents, self.primaryBrushAxisEvent)
  end
  if v3.supportsSecondaryAxis then
    v4, v5 = v4:registerActionEvent(InputAction.AXIS_CONSTRUCTION_ACTION_SECONDARY, self, self.onAxisSecondary, false, not v3.secondaryAxisIsContinuous, v3.secondaryAxisIsContinuous, true)
    self.secondaryBrushAxisEvent = v5
    v4:setActionEventTextPriority(self.secondaryBrushAxisEvent, GS_PRIO_HIGH)
    table.insert(self.brushEvents, self.secondaryBrushAxisEvent)
  end
  if v3.supportsSnapping then
    v4, v5 = v4:registerActionEvent(InputAction.CONSTRUCTION_ACTION_SNAPPING, self, self.onButtonSnapping, false, true, false, true)
    self.snappingBrushEvent = v5
    v4:setActionEventTextPriority(self.snappingBrushEvent, GS_PRIO_HIGH)
    table.insert(self.brushEvents, self.snappingBrushEvent)
  end
end
function ConstructionScreen:updateBrushActionTexts()
  if self.primaryBrushEvent ~= nil then
    local v6 = v6:getButtonPrimaryText()
    local v4 = v4:convertText(...)
    v1:setActionEventText(...)
  end
  if self.secondaryBrushEvent ~= nil then
    local v1 = v1:getButtonSecondaryText()
    if v1 ~= nil then
      local v5 = v5:convertText(v1)
      v2:setActionEventText(...)
    end
    if v1 == nil then
    end
    v2:setActionEventTextVisibility(v4, true)
  end
  if self.tertiaryBrushEvent ~= nil then
    v1 = v1:getButtonTertiaryText()
    if v1 ~= nil then
      v5 = v5:convertText(v1)
      v2:setActionEventText(...)
    end
    if v1 == nil then
    end
    v2:setActionEventTextVisibility(v4, true)
  end
  if self.fourthBrushEvent ~= nil then
    v1 = v1:getButtonFourthText()
    if v1 ~= nil then
      v5 = v5:convertText(v1)
      v2:setActionEventText(...)
    end
    if v1 == nil then
    end
    v2:setActionEventTextVisibility(v4, true)
  end
  if self.primaryBrushAxisEvent ~= nil then
    v1 = v1:getAxisPrimaryText()
    if v1 ~= nil then
      v5 = v5:convertText(v1)
      v2:setActionEventText(...)
    end
    if v1 == nil then
    end
    v2:setActionEventTextVisibility(v4, true)
  end
  if self.secondaryBrushAxisEvent ~= nil then
    v1 = v1:getAxisSecondaryText()
    if v1 ~= nil then
      v5 = v5:convertText(v1)
      v2:setActionEventText(...)
    end
    if v1 == nil then
    end
    v2:setActionEventTextVisibility(v4, true)
  end
  if self.snappingBrushEvent ~= nil then
    v1 = v1:getButtonSnappingText()
    if v1 ~= nil then
      v5 = v5:convertText(v1)
      v2:setActionEventText(...)
    end
    if v1 == nil then
    end
    v2:setActionEventTextVisibility(v4, true)
  end
end
function ConstructionScreen:removeBrushActionEvents()
  for v4, v5 in ipairs(self.brushEvents) do
    v6:removeActionEvent(v5)
  end
  self.primaryBrushEvent = nil
  self.secondaryBrushEvent = nil
  self.tertiaryBrushEvent = nil
  self.fourthBrushEvent = nil
  self.primaryBrushAxisEvent = nil
  self.secondaryBrushAxisEvent = nil
  self.snappingBrushEvent = nil
end
function ConstructionScreen:onButtonPrimary(_, inputValue, _, isAnalog, isMouse)
  if not self.isMouseInMenu then
    v6:onButtonPrimary()
  end
end
function ConstructionScreen:onButtonPrimaryDrag(_, inputValue, _, isAnalog, isMouse)
  if not self.isMouseInMenu then
    if inputValue == 1 and self.previousPrimaryDragValue == 1 then
    end
    if inputValue == 1 and self.previousPrimaryDragValue ~= 1 then
    end
    if inputValue ~= 0 then
    end
    self.previousPrimaryDragValue = inputValue
    if self.dragIsLocked then
      -- if not true then goto L43 end
      self.dragIsLocked = false
      return
    end
    v9:onButtonPrimary(v6, v7, v8)
  end
end
function ConstructionScreen:onButtonSecondary(_, inputValue, _, isAnalog, isMouse)
  if not self.isMouseInMenu then
    v6:onButtonSecondary()
  end
end
function ConstructionScreen:onButtonSecondaryDrag(_, inputValue, _, isAnalog, isMouse)
  if not self.isMouseInMenu then
    if inputValue == 1 and self.previousSecondaryDragValue == 1 then
    end
    if inputValue == 1 and self.previousSecondaryDragValue ~= 1 then
    end
    if inputValue ~= 0 then
    end
    self.previousSecondaryDragValue = inputValue
    v9:onButtonSecondary(v6, v7, true)
  end
end
function ConstructionScreen:onButtonTertiary(_, inputValue, _, isAnalog, isMouse)
  v6:onButtonTertiary()
end
function ConstructionScreen:onButtonFourth(_, inputValue, _, isAnalog, isMouse)
  v6:onButtonFourth()
end
function ConstructionScreen:onButtonSnapping(_, inputValue, _, isAnalog, isMouse)
  v6:onButtonSnapping()
end
function ConstructionScreen:onAxisPrimary(_, inputValue, _, isAnalog, isMouse)
  v6:onAxisPrimary(inputValue)
end
function ConstructionScreen:onAxisSecondary(_, inputValue, _, isAnalog, isMouse)
  v6:onAxisSecondary(inputValue)
end
function ConstructionScreen:onClickDestruct()
  if self.destructMode then
    self.destructMode = false
    self:setBrush(self.previousBrush)
    return
  end
  self.destructMode = true
  self.previousBrush = self.brush
  self:setBrush(self.destructBrush)
end
function ConstructionScreen:getNumberOfItemsInSection(list, section)
  if self.currentCategory ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L10
  end
  return 0
  return #self.items[self.currentCategory][self.currentTab]
end
function ConstructionScreen:populateCellForItemInSection(list, section, index, cell)
  local v6 = cell:getAttribute("price")
  v6:setValue(self.items[self.currentCategory][self.currentTab][index].price)
  v6 = cell:getAttribute("modDlc")
  v6:setText(self.items[self.currentCategory][self.currentTab][index].modDlc)
  if self.items[self.currentCategory][self.currentTab][index].brandFilename ~= nil then
    v6 = cell:getAttribute("brand")
    v6:setImageFilename(self.items[self.currentCategory][self.currentTab][index].brandFilename)
    v6 = cell:getAttribute("brand")
    v6:setVisible(true)
  else
    v6 = cell:getAttribute("brand")
    v6:setVisible(false)
  end
  v6 = cell:getAttribute("icon")
  v6:setVisible(false)
  v6 = cell:getAttribute("terrainLayer")
  v6:setVisible(false)
  if v5.imageFilename ~= nil then
    v6 = cell:getAttribute("icon")
    if v5.brandFilename == nil then
    else
    end
    v6:applyProfile(v8)
    v6 = cell:getAttribute("icon")
    v6:setImageFilename(v5.imageFilename)
    v6 = cell:getAttribute("icon")
    v6:setVisible(true)
  elseif v5.terrainOverlayLayer ~= nil then
    v6 = cell:getAttribute("terrainLayer")
    v6:setTerrainLayer(g_currentMission.terrainRootNode, v5.terrainOverlayLayer)
    v6 = cell:getAttribute("terrainLayer")
    v6:setVisible(true)
  end
  v6 = cell:getAttribute("bg")
  if self.brush ~= nil then
    -- if v5.uniqueIndex ~= v0.brush.uniqueIndex then goto L150 end
  else
  end
  v6:applyProfile(v8)
end
function ConstructionScreen:onListSelectionChanged(list, section, index)
  v5:setText(self.items[self.currentCategory][self.currentTab][index].name)
  if self.items[self.currentCategory][self.currentTab][index].storeItem ~= nil then
    for v10, v11 in pairs(self.items[self.currentCategory][self.currentTab][index].storeItem.functions) do
    end
    v7:setText(v6)
    v7:setVisible(true)
    v7:setVisible(true)
  else
    v6:setVisible(false)
    v6:setVisible(false)
  end
  self:setDetailAttributes(v5, cell.displayItem)
end
function ConstructionScreen:onClickItem()
  local section = self.items[self.currentCategory][self.currentTab][self.itemList.selectedIndex].brushClass.new(nil, self.cursor)
  if self.items[self.currentCategory][self.currentTab][self.itemList.selectedIndex].brushParameters ~= nil then
    section:setStoreItem(self.items[self.currentCategory][self.currentTab][self.itemList.selectedIndex].storeItem)
    local v5 = unpack(self.items[self.currentCategory][self.currentTab][self.itemList.selectedIndex].brushParameters)
    section:setParameters(...)
    section.uniqueIndex = self.items[self.currentCategory][self.currentTab][self.itemList.selectedIndex].uniqueIndex
  end
  self.destructMode = false
  self:setBrush(section)
  index:reloadData()
end
function ConstructionScreen:refreshDetails()
  self:onListSelectionChanged(self.itemList, 1, self.itemList.selectedIndex)
end
function ConstructionScreen:assignItemFillTypesData(baseIconProfile, iconFilenames, attributeIndex)
  if #self.attrValue >= attributeIndex then
    -- cmp-jump LOP_JUMPXEQKN R5 aux=0x80000002 -> L18
  end
  v5:setVisible(false)
  return attributeIndex
  v7:applyProfile(baseIconProfile)
  v7:setVisible(true)
  v7:setVisible(true)
  v7:setVisible(false)
  -- TODO: structure LOP_FORNPREP (pc 55, target 95)
  local v10 = v10:clone(cell)
  v10:setVisible(true)
  table.insert(self.clonedElements, v10)
  v10:applyProfile("constructionListAttributeFruitIcon")
  v10:setImageFilename(iconFilenames[1])
  -- TODO: structure LOP_FORNLOOP (pc 94, target 56)
  local v7 = math.min(self.detailsAttributesLayout.absSize[1] * 0.75, 0 + v10.absSize[1] + v10.margin[1] + v10.margin[3])
  v8:setSize(v7, nil)
  cell:setPosition(0)
  cell:setSize(0 + v10.absSize[1] + v10.margin[1] + v10.margin[3], nil)
  cell:invalidateLayout()
  if v7 < 0 + v10.absSize[1] + v10.margin[1] + v10.margin[3] then
    self.marqueeBoxes[cell] = 0
  else
    self.marqueeBoxes[cell] = nil
  end
  return attributeIndex + 1
end
function ConstructionScreen:assignItemTextData(storeItem, displayItem)
  -- TODO: structure LOP_FORNPREP (pc 6, target 107)
  if displayItem ~= nil and 1 <= #displayItem.attributeValues then
    local v8 = tostring(displayItem.attributeValues[1])
    if displayItem.attributeIconProfiles[1] ~= nil and displayItem.attributeIconProfiles[1] ~= "" then
      local slotCount = string.format("(%0d / %0d)", g_currentMission.slotSystem.slotUsage, g_currentMission.slotSystem.slotLimit)
      local v11 = v8:gsub("%$SLOTS%$", slotCount)
      v11:setText(v11)
      v11:updateAbsolutePosition()
      v11 = displayItem.attributeIconProfiles[1]:startsWith("shopListAttributeIcon")
      if v11 then
        local v12 = displayItem.attributeIconProfiles[1]:sub(22)
      end
      v11:applyProfile(v9)
      if v8 ~= nil and v8 == "" then
      end
    end
  end
  v8:setVisible(v7)
  v8:setVisible(v7)
  v8:setVisible(false)
  if v7 then
  end
  -- TODO: structure LOP_FORNLOOP (pc 106, target 7)
  return index
end
function ConstructionScreen:setDetailAttributes(storeItem, displayItem)
  for v6, v7 in pairs(self.clonedElements) do
    v7:delete()
    self.clonedElements[v6] = nil
  end
  for v6, v7 in pairs(self.marqueeBoxes) do
    self.marqueeBoxes[v6] = nil
  end
  index = self:assignItemTextData(storeItem, displayItem)
  if displayItem ~= nil then
    cell = self:assignItemFillTypesData("constructionListAttributeIconFillTypes", displayItem.fillTypeIconFilenames, index + 1)
    v5 = self:assignItemFillTypesData("constructionListAttributeIconFillTypes", displayItem.foodFillTypeIconFilenames, cell)
    v5 = self:assignItemFillTypesData("constructionListAttributeIconInput", displayItem.prodPointInputFillTypeIconFilenames, v5)
    v5 = self:assignItemFillTypesData("constructionListAttributeIconOutput", displayItem.prodPointOutputFillTypeIconFilenames, v5)
    v5 = self:assignItemFillTypesData("constructionListAttributeIconInput", displayItem.sellingStationFillTypesIconFilenames, v5)
    self:assignItemFillTypesData("constructionListAttributeIconInput", displayItem.buyingStationFillTypesIconFilenames, v5)
  end
  cell:invalidateLayout()
end
function ConstructionScreen:updateMarqueeAnimation(dt)
  for v5, v6 in pairs(self.marqueeBoxes) do
    if 9000 * (v5.absSize[1] - v5.parent.absSize[1]) / v5.parent.absSize[1] <= v6 + dt then
    end
    local v16 = math.abs(v6)
    local v12 = MathUtil.smoothstep(0.2, 0.8, v16 / v11)
    v5:setPosition(-(v9 * v12))
    self.marqueeBoxes[v5] = v6
  end
end
function ConstructionScreen:onSlotUsageChanged()
  self:refreshDetails()
end
function ConstructionScreen:rebuildData()
  local list = list:getConstructionCategories()
  self.categories = list
  self.items = {}
  for v6, v7 in ipairs(self.categories) do
    self.items[v6] = {}
    -- TODO: structure LOP_FORNPREP (pc 29, target 37)
    self.items[v6][1] = {}
    -- TODO: structure LOP_FORNLOOP (pc 36, target 30)
    local v8 = math.max(section, #v7.tabs)
  end
  cell = cell:getItems()
  for v6, v7 in ipairs(...) do
    if not (v7.brush ~= nil) then
      continue
    end
    v8 = v8:getClassObjectByTypeName(v7.brush["type"])
    if v7.brush.parameters ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R10 aux=0x80000012 -> L87
    end
    if not (v8 ~= nil) then
      continue
    end
    local v10 = v10:getBrandByIndex(v7.brandIndex)
    if v10 ~= nil and v10.name ~= "NONE" then
    end
    if v7.isMod then
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x80000000 -> L115
    elseif v7.isMod then
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L127
    else
      if v7.dlcTitle ~= nil then
      end
    end
    local v16 = v16:makeDisplayItem(v7)
    table.insert(self.items[v7.brush.category.index][v7.brush.tab.index], {name = v7.name, brushClass = v8, brushParameters = v9, price = v7.price, imageFilename = v7.imageFilename, brandFilename = v11, modDlc = v12, storeItem = v7, displayItem = v16, uniqueIndex = list + 1})
  end
  index = self:buildTerrainPaintBrushes(list)
  index = self:buildTerrainSculptBrushes(index)
  -- TODO: structure LOP_FORNPREP (pc 208, target 218)
  v6:delete()
  -- TODO: structure LOP_FORNLOOP (pc 217, target 209)
  for v6, v7 in ipairs(self.categories) do
    v8 = v8:clone(self.categoriesBox)
    v9:loadElementFromCustomValues(v8)
    v8:setText(v7.title)
    v8.onClickCallback = function()
      self:setSelectedCategory(u1)
    end
  end
  index:invalidateLayout()
  index:linkElements(self.categoriesBox.elements[1], FocusManager.LEFT, self.buttonDestruct)
  index:linkElements(self.categoriesBox, FocusManager.RIGHT, self.buttonDestruct)
  -- TODO: structure LOP_FORNPREP (pc 286, target 296)
  v6:delete()
  -- TODO: structure LOP_FORNLOOP (pc 295, target 287)
  -- TODO: structure LOP_FORNPREP (pc 299, target 319)
  v6 = v6:clone(self.tabsBox)
  v7:loadElementFromCustomValues(v6)
  v6.onClickCallback = function()
    self:setSelectedTab(u1)
  end
  -- TODO: structure LOP_FORNLOOP (pc 318, target 300)
  index:invalidateLayout()
  index:setFocus(self.categoriesBox.elements[1])
end
function ConstructionScreen:buildTerrainPaintBrushes(numItems)
  local index = index:getConstructionCategoryByName("landscaping")
  local cell = cell:getConstructionTabByName("painting", "landscaping")
  for v9, v10 in pairs(g_groundTypeManager.groundTypeMappings) do
    table.insert(v5, v9)
  end
  table.sort(v5)
  for v10, v11 in ipairs(v5) do
    local v12 = v12:getTerrainLayerByType(v11)
    local v13 = v13:getTerrainTitleByType(v11)
    if not not v6[v12] then
      continue
    end
    local v17 = v17:convertText(v13)
    table.insert(cell, {name = v17, brushClass = ConstructionBrushPaint, brushParameters = {v11}, price = 2, imageFilename = nil, brandFilename = nil, modDlc = "", terrainOverlayLayer = v12, uniqueIndex = numItems + 1})
    v6[v12] = true
  end
  return numItems
end
function ConstructionScreen:buildTerrainSculptBrushes(numItems)
  local index = index:getConstructionCategoryByName("landscaping")
  local cell = cell:getConstructionTabByName("sculpting", "landscaping")
  local v8 = v8:getText("construction_item_shift")
  table.insert(self.items[index.index][cell.index], {name = v8, brushClass = ConstructionBrushSculpt, brushParameters = {ConstructionBrushSculpt.MODE.SHIFT}, price = 10, imageFilename = "dataS/menu/construction/icon_shift.png", uniqueIndex = numItems + 1})
  v8 = v8:getText("construction_item_level")
  table.insert(self.items[index.index][cell.index], {name = v8, brushClass = ConstructionBrushSculpt, brushParameters = {ConstructionBrushSculpt.MODE.LEVEL}, price = 10, imageFilename = "dataS/menu/construction/icon_level.png", uniqueIndex = numItems + 2})
  v8 = v8:getText("construction_item_soften")
  table.insert(self.items[index.index][cell.index], {name = v8, brushClass = ConstructionBrushSculpt, brushParameters = {ConstructionBrushSculpt.MODE.SOFTEN}, price = 10, imageFilename = "dataS/menu/construction/icon_soften.png", uniqueIndex = numItems + 3})
  v8 = v8:getText("construction_item_slope")
  table.insert(self.items[index.index][cell.index], {name = v8, brushClass = ConstructionBrushSculpt, brushParameters = {ConstructionBrushSculpt.MODE.SLOPE}, price = 10, imageFilename = "dataS/menu/construction/icon_slope.png", uniqueIndex = numItems + 4})
  return numItems + 4
end
function ConstructionScreen:setSelectedCategory(index)
  if self.currentCategory == index then
    return
  end
  self.currentCategory = index
  self.currentTab = 1
  self:setBrush(self.selectorBrush, true)
  self:updateMenuState()
end
function ConstructionScreen:setSelectedTab(index)
  if index == nil then
  end
  self.currentTab = index
  self:setBrush(self.selectorBrush, true)
  self:updateMenuState()
end
function ConstructionScreen:resetMenuState()
  self.currentCategory = 1
  self.currentTab = 1
  self:updateMenuState()
end
function ConstructionScreen:updateMenuState(brushChangedFrom)
  if self.currentCategory == nil then
    -- if not v0.listBox.visible then goto L46 end
    if self.previousCategory ~= nil then
      section:setFocus(self.categoriesBox.elements[self.previousCategory])
      -- goto L46  (LOP_JUMP +20)
    end
    section:setFocus(self.categoriesBox)
  elseif not self.listBox.visible then
    section:setFocus(self.itemList)
  end
  section:reloadData()
  for v5, v6 in ipairs(self.categoriesBox.elements) do
    if v5 == self.currentCategory then
      v6:applyProfile("constructionCategoryButtonSelected")
    else
      v6:applyProfile("constructionCategoryButton")
    end
    v6:setImageFilename(nil, self.categories[v5].iconFilename)
    v6:setImageUVs(nil, self.categories[v5].iconUVs)
  end
  if self.destructMode then
  else
  end
  section:applyProfile(cell)
  if self.currentCategory ~= nil then
  end
  for v6, v7 in ipairs(self.tabsBox.elements) do
    if v6 > section then
    end
    v7:setVisible(true)
    if not (v6 <= section) then
      continue
    end
    if v6 == self.currentTab then
      v7:applyProfile("constructionTabButtonSelected")
    else
      v7:applyProfile("constructionTabButton")
    end
    v7:setText(self.categories[self.currentCategory].tabs[v6].title)
    v7:setImageFilename(nil, self.categories[self.currentCategory].tabs[v6].iconFilename)
    v7:setImageUVs(nil, self.categories[self.currentCategory].tabs[v6].iconUVs)
  end
  self:updateMenuActionTexts()
end
