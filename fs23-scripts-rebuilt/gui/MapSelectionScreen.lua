-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MapSelectionScreen = {CONTROLS = {MAP_SELECTOR = "mapSelector", MAP_LIST = "mapList", SELECTION_STATE_BOX = "selectionStateBox", SELECTOR_RIGHT = "selectorRight", SELECTOR_LEFT = "selectorLeft", SELECTOR_RIGHT_GP = "selectorRightGamepad", SELECTOR_LEFT_GP = "selectorLeftGamepad"}}
local MapSelectionScreen_mt = Class(MapSelectionScreen, ScreenElement)
function MapSelectionScreen.register()
  local v0 = MapSelectionScreen.new()
  v1:loadGui("dataS/gui/MapSelectionScreen.xml", "MapSelectionScreen", v0)
end
function MapSelectionScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(MapSelectionScreen.CONTROLS)
  v2.maps = {}
  return v2
end
function MapSelectionScreen:createFromExistingGui(v1)
  local v2 = MapSelectionScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2)
  return v2
end
function MapSelectionScreen:onCreate()
  v1:setDataSource(self)
end
function MapSelectionScreen:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  function self.mapList.touchEvent(self, v1, v2, v3, ...)
    local v4 = GuiUtils.checkOverlayOverlap(v1, v2, u0.selectorLeft.absPosition[1], u0.selectorLeft.absPosition[2], u0.selectorLeft.absSize[1], u0.selectorLeft.absSize[2])
    if v3 and v4 then
      return false
    end
    local v5 = GuiUtils.checkOverlayOverlap(v1, v2, u0.selectorRight.absPosition[1], u0.selectorRight.absPosition[2], u0.selectorRight.absSize[1], u0.selectorRight.absSize[2])
    if v3 and v5 then
      return false
    end
    return u1(...)
  end
end
function MapSelectionScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  local missionMapIndex = self:loadAvailableMaps()
  v2:reloadData()
  if missionMapIndex ~= nil then
    v2:setSelectedIndex(missionMapIndex)
  end
  if not Platform.hasMapSelection then
    self:onClickOk()
  end
  self:updateInsets()
  v2:subscribe(MessageType.INSETS_CHANGED, self.updateInsets, self)
end
function MapSelectionScreen:updateInsets()
  local v1, v2, v3, v4 = getSafeFrameInsets()
  if self.selectorLeft ~= nil then
    v5:setPosition(v1, nil)
  end
  if self.selectorLeftGamepad ~= nil then
    v5:setPosition(v1, nil)
  end
  if self.selectorRight ~= nil then
    v5:setPosition(-v2, nil)
  end
  if self.selectorRightGamepad ~= nil then
    v5:setPosition(-v2, nil)
  end
end
function MapSelectionScreen:onClose()
  self.maps = {}
  v1:unsubscribe(MessageType.INSETS_CHANGED, self)
  local v2 = v2:superClass()
  v2.onClose(self)
end
function MapSelectionScreen:loadAvailableMaps()
  self.maps = {}
  local v5 = v5:getNumOfMaps()
  -- TODO: structure LOP_FORNPREP (pc 13, target 45)
  v5 = v5:getMapDataByIndex(1)
  if v5.isModMap and g_startMissionInfo.isMultiplayer then
    -- if not v5.isMultiplayerSupported then goto L44 end
  end
  table.insert(self.maps, v5)
  if v5.id == g_startMissionInfo.mapId then
  end
  -- TODO: structure LOP_FORNLOOP (pc 44, target 14)
  return v1
end
function MapSelectionScreen:onClickMapSelection(state)
  v2:setSelectedIndex(state)
end
function MapSelectionScreen:onListSelectionChanged(list, section, index)
  if Platform.isMobile then
    local v6 = math.floor(index + 0.5)
    local v5 = MathUtil.clamp(v6, 1, list.sections[1].numItems)
  else
  end
  g_startMissionInfo.mapId = v4.id
  if self.mapSelector.visible then
    v5:setValue(index)
  end
  self:updateSelectors()
end
function MapSelectionScreen:onClickOk()
  local v1 = v1:getModNameFromMapId(g_startMissionInfo.mapId)
  if v1 ~= nil then
    local v2 = PlatformPrivilegeUtil.checkModUse(self.onClickOk, self)
    if not v2 then
      return
    end
  end
  g_startMissionInfo.canStart = true
  if self.isMultiplayer and not g_startMissionInfo.createGame then
    self:changeScreen(MultiplayerScreen)
    return
  end
  self:changeScreen(CareerScreen)
end
function MapSelectionScreen:onClickBack()
  self.mapList.usedTouchId = nil
  local v2 = v2:superClass()
  v2.onClickBack(self)
end
function MapSelectionScreen.selectMapByNameAndFile(v0, v1, v2)
  if v2 ~= "default" then
    local v5, v6 = Utils.getFilenameInfo(v2)
  end
  local v4 = v4:getMapDataByIndex(1)
  local v9 = v9:getNumOfMaps()
  -- TODO: structure LOP_FORNPREP (pc 29, target 53)
  v9 = v9:getMapDataByIndex(1)
  if v9.isModMap and g_startMissionInfo.isMultiplayer then
    -- if not v9.isMultiplayerSupported then goto L52 end
  end
  if v9.id == v3 then
  else
    -- TODO: structure LOP_FORNLOOP (pc 52, target 30)
  end
  if not v5 then
    Logging.devError("Unable to find map with mapId '%s'. Using default map '%s'", v3, v4.id)
  end
  g_startMissionInfo.mapId = v4.id
  return v4.id
end
function MapSelectionScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if g_dedicatedServer ~= nil then
    self:selectMapByNameAndFile(g_dedicatedServer.mapName, g_dedicatedServer.mapFileName)
    self:onClickOk()
    return
  end
  if g_startMissionInfo.isMultiplayer then
    Platform.verifyMultiplayerAvailabilityInMenu()
  end
  if Profiler.IS_INITIALIZED then
    self:selectMapByNameAndFile(Profiler.MAP, "default")
    self:onClickOk()
    return
  end
  if Platform.isMobile then
    local v2 = v2:getLastInputMode()
    if v2 == GS_INPUT_HELP_MODE_GAMEPAD then
      self.mapList.listSmoothingDisabled = true
      return
    end
    self.mapList.listSmoothingDisabled = false
  end
end
function MapSelectionScreen:inputEvent(action, value, eventUsed)
  local v5 = v5:superClass()
  local v4 = v5.inputEvent(self, action, value, eventUsed)
  if not v4 then
    if action ~= InputAction.MENU_PAGE_PREV then
      -- if v1 ~= InputAction.MENU_PAGE_NEXT then goto L53 end
    end
    if action == InputAction.MENU_PAGE_PREV then
      local v7 = math.max(self.mapList.selectedIndex - 1, 1)
      v5:setSelectedIndex(...)
    else
      v5:setSelectedIndex(self.mapList.selectedIndex + 1)
    end
    self:updateSelectors()
  end
  return eventUsed
end
function MapSelectionScreen:updateSelectors()
  if not Platform.isMobile and self.mapList.selectedIndex == 1 then
  end
  v1:setVisible(v3)
  if not Platform.isMobile and self.mapList.selectedIndex == #self.maps then
  end
  v1:setVisible(v3)
end
function MapSelectionScreen:getNumberOfItemsInSection(list, section)
  return #self.maps
end
function MapSelectionScreen:populateCellForItemInSection(list, section, index, cell)
  local v6 = cell:getAttribute("image")
  v6:setImageFilename(self.maps[index].iconFilename)
  v6 = cell:getAttribute("title")
  v6:setText(self.maps[index].title)
  v6 = cell:getAttribute("text")
  v6:setText(self.maps[index].description)
end
