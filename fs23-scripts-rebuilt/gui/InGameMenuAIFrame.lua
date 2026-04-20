-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuAIFrame = {}
local InGameMenuAIFrame_mt = Class(InGameMenuAIFrame, TabbedMenuFrameElement)
InGameMenuAIFrame.CONTROLS = {"mapOverviewSelector", "ingameMap", "mapCursor", "mapControls", "actionMessage", "actionMessageBg", "errorMessage", "errorMessageBg", "statusMessage", "statusMessageBg", "mapZoomGlyph", "mapMoveGlyph", "mapBox", "mapMoveGlyphText", "mapZoomGlyphText", "buttonBox", "buttonGotoJob", "buttonCreateJob", "buttonCancel", "buttonStartJob", "buttonSkipTask", "buttonBack", "buttonCancelJob", "buttonConfirmAITarget", "limitReachedWarning", "limitReachedWarningMobile", "limitReachedWarningMobileBg", "contextBox", "contextImage", "contextText", "contextFarm", "contextBoxCorner", "hotspotDetailsBox", "hotspotName", "hotspotBrand", "hotspotImage", "activeWorkerList", "activeWorkerListEmpty", "jobOverview", "jobMenu", "jobTypeElement", "jobMenuLayout", "createMultiOptionTemplate", "createTextTemplate", "createTitleTemplate", "createPositionTemplate", "createPositionRotationTemplate", "fullscreenBg", "buttonSelectIngame"}
InGameMenuAIFrame.MODE_OVERVIEW = 1
InGameMenuAIFrame.MODE_CREATE = 2
InGameMenuAIFrame.INPUT_CONTEXT_NAME = "MENU_AI"
InGameMenuAIFrame.CLEAR_INPUT_ACTIONS = {InputAction.MENU_ACTIVATE, InputAction.MENU_CANCEL, InputAction.MENU_EXTRA_1, InputAction.MENU_EXTRA_2, InputAction.SWITCH_VEHICLE, InputAction.SWITCH_VEHICLE_BACK, InputAction.CAMERA_ZOOM_IN, InputAction.CAMERA_ZOOM_OUT}
InGameMenuAIFrame.CLEAR_CLOSE_INPUT_ACTIONS = {InputAction.SWITCH_VEHICLE, InputAction.SWITCH_VEHICLE_BACK, InputAction.CAMERA_ZOOM_IN, InputAction.CAMERA_ZOOM_OUT}
InGameMenuAIFrame.BUTTON_FRAME_SIDE = GuiElement.FRAME_RIGHT
function InGameMenuAIFrame.register()
  local v0 = InGameMenuAIFrame.new()
  v1:loadGui("dataS/gui/InGameMenuAIFrame.xml", "AIFrame", v0, true)
end
function InGameMenuAIFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuAIFrame.CONTROLS)
  v2.onClickBackCallback = u1
  v2.hasFullScreenMap = true
  v2.playerFarm = nil
  v2.jobTypeInstances = {}
  v2.statusMessages = {}
  v2.mode = InGameMenuAIFrame.MODE_OVERVIEW
  v2.mapOverlayGenerator = nil
  v2.hotspotFilterState = {}
  local v4 = v4:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  v2.isColorBlindMode = v4 or false
  v2.isMapOverviewInitialized = false
  v2.lastInputHelpMode = 0
  v2.isInputContextActive = false
  v2.hasPickedLocationTouch = false
  v2.hasPickedRotationTouch = false
  v2.currentHotspot = nil
  v2.ingameMapBase = nil
  v2.staticUIDeadzone = {0, 0, 0, 0}
  v2.needsSolidBackground = Platform.ingameMap.needsSolidBackground
  v2.lastMousePosX = 0
  v2.lastMousePosY = 0
  v2.goToMainOverview = false
  v2.updateTime = 0
  local v3 = AITargetHotspot.new()
  v2.aiTargetMapHotspot = v3
  v3 = AIPlaceableMarkerHotspot.new()
  v2.aiLoadingMarkerHotspot = v3
  v3:setColor(0.3763, 0.6038, 0.0782)
  v3 = AIPlaceableMarkerHotspot.new()
  v2.aiUnloadingMarkerHotspot = v3
  v3:setColor(0.2832, 0.0091, 0.0091)
  v2.showIntroductionHud = false
  v2.showIntroHudIfNotSaving = false
  return v2
end
function InGameMenuAIFrame:createFromExistingGui(v1)
  local v2 = InGameMenuAIFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuAIFrame:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  if not src.onClickBackCallback then
  end
  self.onClickBackCallback = v2
end
function InGameMenuAIFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  local v2, v3 = getNormalizedScreenValues(0, InGameMenuAIFrame.GLYPH_TEXT_SIZE)
  self.glyphTextSize = v3
  v2 = v2:getText(InGameMenuAIFrame.L10N_SYMBOL.INPUT_ZOOM_MAP)
  self.zoomText = v2
  v2 = v2:getText(InGameMenuAIFrame.L10N_SYMBOL.INPUT_MOVE_CURSOR)
  self.moveCursorText = v2
  v2 = v2:getText(InGameMenuAIFrame.L10N_SYMBOL.INPUT_PAN_MAP)
  self.panMapText = v2
end
function InGameMenuAIFrame:delete()
  v1:unsubscribeAll(self)
  v1:removeStateChangeListener(self)
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  if self.aiTargetMapHotspot ~= nil then
    v1:delete()
    self.aiTargetMapHotspot = nil
  end
  if self.aiLoadingMarkerHotspot ~= nil then
    v1:delete()
    self.aiLoadingMarkerHotspot = nil
  end
  if self.aiUnloadingMarkerHotspot ~= nil then
    v1:delete()
    self.aiUnloadingMarkerHotspot = nil
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function InGameMenuAIFrame:initialize(onClickBackCallback)
  self:updateInputGlyphs()
  if not onClickBackCallback then
  end
  self.onClickBackCallback = v2
  v2:unlinkElement()
  v2:removeElement(self.createMultiOptionTemplate)
  v2:unlinkElement()
  v2:removeElement(self.createTextTemplate)
  v2:unlinkElement()
  v2:removeElement(self.createTitleTemplate)
  v2:unlinkElement()
  v2:removeElement(self.createPositionTemplate)
  v2:unlinkElement()
  v2:removeElement(self.createPositionRotationTemplate)
end
function InGameMenuAIFrame.registerCustomSelectorItem(v0, v1)
  local v5 = v5:getText("ui_helpers")
  table.insert(v1, {title = v5, callback = function()
    v0:onAIPageSelected()
  end})
end
function InGameMenuAIFrame.onAIPageSelected(v0)
  local v2 = v2:getPageMappingIndexByElement(g_inGameMenu.pageAI)
  v3:setState(v2, true)
end
function InGameMenuAIFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self.isOpen = true
  self:toggleMapInput(true)
  v1:onOpen()
  v1:registerActionEvents()
  self:setJobMenuVisible(false)
  v1:applyCustomFilter(self.customFilter)
  self.mode = InGameMenuAIFrame.MODE_OVERVIEW
  if self.visible then
    -- if v0.isMapOverviewInitialized then goto L53 end
    self:setupMapOverview()
  else
    self:setMapSelectionItem(self.currentHotspot)
  end
  self:setMapSelectionItem(nil)
  self:showContextInput(false, false, false, false)
  self:generateJobTypes()
  v1:setFocus(self.mapOverviewSelector)
  self:updateInputGlyphs()
  v1:reloadData()
  v1:subscribe(MessageType.AI_VEHICLE_STATE_CHANGE, self.onAIVehicleStateChanged, self)
  v1:subscribe(MessageType.AI_JOB_STARTED, self.onAIJobStarted, self)
  v1:subscribe(MessageType.AI_JOB_STOPPED, self.onAIJobStopped, self)
  v1:subscribe(MessageType.AI_JOB_REMOVED, self.onAIJobRemoved, self)
  v1:subscribe(MessageType.AI_TASK_SKIPPED, self.onAITaskSkipped, self)
  v1:subscribe(MessageType.PAUSE, self.onPauseChanged, self)
  if g_currentMission.controlledVehicle ~= nil then
    v2 = g_currentMission.controlledVehicle:getMapHotspot()
    self:setMapSelectionItem(v2)
  end
end
function InGameMenuAIFrame:onFrameClose()
  self:setMapSelectionItem(nil)
  self:showContextInput(false, false, false, false)
  self.startJobPending = false
  local v1 = self:getIsPicking()
  if v1 then
    self:executePickingCallback(false)
    self:refreshContextInput()
  end
  v1:removeMapHotspot(self.aiTargetMapHotspot)
  v1:removeMapHotspot(self.aiLoadingMarkerHotspot)
  v1:removeMapHotspot(self.aiUnloadingMarkerHotspot)
  v1:unsubscribe(AIJobStartRequestEvent, self)
  v1:unsubscribe(MessageType.AI_VEHICLE_STATE_CHANGE, self)
  v1:unsubscribe(MessageType.AI_JOB_STARTED, self)
  v1:unsubscribe(MessageType.AI_JOB_STOPPED, self)
  v1:unsubscribe(MessageType.AI_JOB_REMOVED, self)
  v1:unsubscribe(MessageType.AI_TASK_SKIPPED, self)
  v1:unsubscribe(MessageType.PAUSE, self)
  v1:onClose()
  self:toggleMapInput(false)
  v1:restoreDefaultFilter()
  self.isOpen = false
  self:setJobMenuVisible(false)
  v1:setContextEventsActive(InGameMenuAIFrame.INPUT_CONTEXT_NAME, InputAction.MENU_AXIS_LEFT_RIGHT, true)
  self.statusMessages = {}
  self:updateStatusMessages()
  local v2 = v2:superClass()
  v2.onFrameClose(self)
end
function InGameMenuAIFrame:onLoadMapFinished()
  local v1 = MapOverlayGenerator.new(g_i18n, g_fruitTypeManager, g_fillTypeManager, g_farmlandManager, g_farmManager, g_currentMission.weedSystem)
  self.mapOverlayGenerator = v1
  v1:setColorBlindMode(self.isColorBlindMode)
  v1:setFieldColor(g_currentMission.mapFieldColor, g_currentMission.mapGrassFieldColor)
end
function InGameMenuAIFrame:toggleMapInput(isActive)
  if self.isInputContextActive ~= isActive then
    self.isInputContextActive = isActive
    self:toggleCustomInputContext(isActive, InGameMenuAIFrame.INPUT_CONTEXT_NAME)
    if isActive then
      self:registerInput()
      return
    end
    self:unregisterInput(true)
  end
end
function InGameMenuAIFrame:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  if self.mapOverlayGenerator ~= nil then
    v1:delete()
    self.mapOverlayGenerator = nil
  end
  self.isMapOverviewInitialized = false
  self.isInputContextActive = false
  self.currentHotspot = nil
  InGameMenuMapUtil.hideContextBox(self.contextBox)
end
function InGameMenuAIFrame:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  if self.isPickingRotation then
    local v7, v8 = v7:getLocalPosition(posX, posY)
    local v9, v10 = v9:localToWorldPos(v7, v8)
    local v11 = math.atan2(v9 - self.pickingRotationOrigin[1], v10 - self.pickingRotationOrigin[2])
    if 0 < self.pickingRotationSnapAngle then
      local v12 = MathUtil.round((v11 + math.pi) / self.pickingRotationSnapAngle, 0)
    end
    v12:setWorldRotation(v11)
  end
  self.lastMousePosX = posX
  self.lastMousePoxY = posY
  if self.isPickingLocation then
    v7, v8 = v7:getLocalPosition(self.lastMousePosX, self.lastMousePoxY)
    self:setTargetPointHotspotPosition(v7, v8)
  end
  v8 = v8:superClass()
  v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
  return v7
end
function InGameMenuAIFrame:touchEvent(v1, v2, v3, v4, v5, v6)
  if self.isPickingRotation and not self.hasPickedRotationTouch then
    local v7, v8 = v7:getLocalPosition(v1, v2)
    local v9, v10 = v9:localToWorldPos(v7, v8)
    local v11 = math.atan2(v9 - self.pickingRotationOrigin[1], v10 - self.pickingRotationOrigin[2])
    if 0 < self.pickingRotationSnapAngle then
      local v12 = MathUtil.round((v11 + math.pi) / self.pickingRotationSnapAngle, 0)
    end
    v12:setWorldRotation(v11)
  end
  if v4 then
    self.lastMousePosX = v1
    self.lastMousePoxY = v2
  end
  v8 = v8:superClass()
  v7 = v8.touchEvent(self, v1, v2, v3, v4, v5, v6)
  return v7
end
function InGameMenuAIFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:getLastInputMode()
  if v2 ~= self.lastInputHelpMode then
    self.lastInputHelpMode = v2
    if v2 == GS_INPUT_HELP_MODE_GAMEPAD then
    end
    v3:setShowMouseCursor(true)
    self:updateInputGlyphs()
  end
  self:updateContextInputBarVisibility()
  if v2 == GS_INPUT_HELP_MODE_GAMEPAD then
    local v3, v4 = v3:getLocalPointerTarget()
    if self.isPickingLocation then
      self:setTargetPointHotspotPosition(v3, v4)
    elseif self.isPickingRotation then
      local v5, v6 = v5:localToWorldPos(v3, v4)
      local v7 = math.atan2(v5 - self.pickingRotationOrigin[1], v6 - self.pickingRotationOrigin[2])
      if 0 < self.pickingRotationSnapAngle then
        local v8 = MathUtil.round((v7 + math.pi) / self.pickingRotationSnapAngle, 0)
      end
      v8:setWorldRotation(v7)
    end
  end
  v3:update(dt)
  if self.updateTime < g_time then
    v6 = v6:getItemCount()
    -- TODO: structure LOP_FORNPREP (pc 123, target 152)
    v6 = v6:getElementAtSectionIndex(1, 1)
    if v6 ~= nil then
      v7 = v7:getJobByIndex(1)
      if v7 ~= nil then
        v8 = v6:getAttribute("text")
        local v10 = v7:getDescription()
        v8:setText(...)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 151, target 124)
    self.updateTime = g_time + 1000
  end
  -- TODO: structure LOP_FORNPREP (pc 163, target 181)
  if self.statusMessages[1].removeTime < g_time then
    table.remove(self.statusMessages, 1)
  end
  -- TODO: structure LOP_FORNLOOP (pc 180, target 164)
  if v3 then
    self:updateStatusMessages()
  end
  if self.showIntroHudIfNotSaving then
    v4 = v4:getIsSaving()
    if v4 then
      self.showIntroductionHud = true
      self.showIntroHudIfNotSaving = false
    else
      v4 = v4:getIsActive()
      if v4 then
        v4:showHelp("helpZoomMap")
        v4:showHelp("helpPanMap")
      end
      self.showIntroHudIfNotSaving = false
    end
  end
  if self.showIntroductionHud then
    v4 = v4:getIsSaving()
    if not v4 then
      self.showIntroductionHud = false
      self.showIntroHudIfNotSaving = true
    end
  end
end
function InGameMenuAIFrame:setTargetPointHotspotPosition(localX, localY)
  local v3, v4 = v3:localToWorldPos(localX, localY)
  v5:setWorldPosition(v3, v4)
end
function InGameMenuAIFrame:getCanCancelJob()
  if self.mode == InGameMenuAIFrame.MODE_OVERVIEW then
    local v2 = self:getIsPicking()
    if not v2 and self.canCancel then
      local dt = dt:getHasPlayerPermission("hireAssistant")
      if dt then
        v2 = v2:getIsRunning()
      end
    end
  end
  return dt
end
function InGameMenuAIFrame:getCanCreateJob()
  if self.mode == InGameMenuAIFrame.MODE_OVERVIEW then
    local v2 = self:getIsPicking()
    if not v2 and self.canCreateJob then
      local dt = dt:getHasPlayerPermission("hireAssistant")
      if dt then
        v2 = v2:getIsRunning()
      end
    end
  end
  return dt
end
function InGameMenuAIFrame:getCanGoTo()
  if self.mode == InGameMenuAIFrame.MODE_OVERVIEW then
    local v2 = self:getIsPicking()
    if not v2 and self.canGoTo then
      local dt = dt:getHasPlayerPermission("hireAssistant")
      if dt then
        v2 = v2:getIsRunning()
      end
    end
  end
  return dt
end
function InGameMenuAIFrame:getCanStartJob()
  if self.mode == InGameMenuAIFrame.MODE_CREATE then
    local v2 = self:getIsPicking()
    if not v2 then
      local dt = dt:getHasPlayerPermission("hireAssistant")
      if dt then
        v2 = v2:getIsRunning()
      end
    end
  end
  return dt
end
function InGameMenuAIFrame:getCanSkipJobTask()
  if self.mode == InGameMenuAIFrame.MODE_OVERVIEW then
    local v2 = self:getIsPicking()
    if not v2 and self.canSkipTask then
      local dt = dt:getHasPlayerPermission("hireAssistant")
      if dt then
        v2 = v2:getIsRunning()
      end
    end
  end
  return dt
end
function InGameMenuAIFrame:getCanGoBack()
  if self.mode == InGameMenuAIFrame.MODE_OVERVIEW then
    local v2 = self:getIsPicking()
  end
  return dt
end
function InGameMenuAIFrame:showContextInput(canGoTo, canCreateJob, canCancel, canSkipTask)
  self.canGoTo = canGoTo
  self.canCreateJob = canCreateJob
  self.canCancel = canCancel
  self.canSkipTask = canSkipTask
end
function InGameMenuAIFrame:refreshContextInput()
  local v2 = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
  if v2 ~= nil then
    local v7 = v7:canPlayerAccess(v2)
    if v7 and v2.spec_aiJobVehicle ~= nil then
      v7 = v2:getIsAIActive()
      if not v7 then
        v7 = v7:getIsAvailableForVehicle(v2)
        for v10, v11 in pairs(self.jobTypeInstances) do
          local v12 = v11:getIsAvailableForVehicle(v2)
          if not v12 then
            continue
          end
          -- goto L65  (LOP_JUMP +13)
        end
      else
        v7 = v2:getJob()
        if v7 ~= nil then
          v8 = v7:getCanSkipTask()
          if v8 then
          end
        end
      end
    end
  end
  if not v4 then
    v7 = v7:getAILimitedReached()
  end
  v8:setVisible(v7)
  self:showContextInput(v3, v4, v5, v6)
end
function InGameMenuAIFrame:updateContextInputBarVisibility()
  local dt = dt:getInputHelpMode()
  if dt ~= GS_INPUT_HELP_MODE_GAMEPAD then
  end
  local isPicking = self:getIsPicking()
  if true and not isPicking and self.mode ~= InGameMenuAIFrame.MODE_OVERVIEW then
  end
  v4:setVisible(v6)
  local v7 = self:getCanCancelJob()
  v5:setVisible(...)
  v7 = self:getCanGoTo()
  v5:setVisible(...)
  v7 = self:getCanCreateJob()
  v5:setVisible(...)
  v7 = self:getCanStartJob()
  v5:setVisible(...)
  v7 = self:getCanGoBack()
  v5:setVisible(...)
  v7 = self:getCanSkipJobTask()
  v5:setVisible(...)
  if not isPicking and self.mode ~= InGameMenuAIFrame.MODE_CREATE then
  end
  v5:setVisible(v7)
  v6:setDisabled(g_currentMission.paused)
  v6:setDisabled(g_currentMission.paused)
  v6:setDisabled(g_currentMission.paused)
  v6:setDisabled(g_currentMission.paused)
  v6:setDisabled(g_currentMission.paused)
  v6:setDisabled(g_currentMission.paused)
  if self.buttonConfirmAITarget ~= nil then
    v6:setDisabled(g_currentMission.paused)
  end
  if self.buttonBack.visible ~= v4 then
    v6:invalidateLayout()
  end
end
function InGameMenuAIFrame:setInGameMap(ingameMap)
  self.ingameMapBase = ingameMap
  v2:setIngameMap(ingameMap)
  if ingameMap ~= nil then
    local v2 = ingameMap:createCustomFilter(false)
    self.customFilter = v2
    self.customFilter[MapHotspot.CATEGORY_FIELD] = true
    self.customFilter[MapHotspot.CATEGORY_UNLOADING] = true
    self.customFilter[MapHotspot.CATEGORY_LOADING] = true
    self.customFilter[MapHotspot.CATEGORY_PRODUCTION] = true
    self.customFilter[MapHotspot.CATEGORY_AI] = true
    self.customFilter[MapHotspot.CATEGORY_COMBINE] = true
    self.customFilter[MapHotspot.CATEGORY_STEERABLE] = true
    self.customFilter[MapHotspot.CATEGORY_PLAYER] = true
    self.customFilter[MapHotspot.CATEGORY_SHOP] = true
    self.customFilter[MapHotspot.CATEGORY_OTHER] = true
    self.customFilter[MapHotspot.CATEGORY_ANIMAL] = true
  end
end
function InGameMenuAIFrame:setTerrainSize(terrainSize)
  v2:setTerrainSize(terrainSize)
end
function InGameMenuAIFrame:setMissionFruitTypes(missionFruitTypes)
  self.missionFruitTypes = missionFruitTypes
end
function InGameMenuAIFrame:setClient(client)
  self.client = client
end
function InGameMenuAIFrame:setPlayerFarm(playerFarm)
  self.playerFarm = playerFarm
end
function InGameMenuAIFrame:resetUIDeadzones()
  dt:clearCursorDeadzones()
  local v3 = unpack(self.staticUIDeadzone)
  dt:addCursorDeadzone(...)
end
function InGameMenuAIFrame:setStaticUIDeadzone(screenX, screenY, width, height)
  self.staticUIDeadzone = {screenX, screenY, width, height}
end
function InGameMenuAIFrame:setupMapOverview()
  self.isMapOverviewInitialized = true
end
function InGameMenuAIFrame:setMapSelectionItem(hotspot)
  v2:setSelectedHotspot(hotspot)
  v8:removeMapHotspot(self.aiTargetMapHotspot)
  v8:removeMapHotspot(self.aiLoadingMarkerHotspot)
  v8:removeMapHotspot(self.aiUnloadingMarkerHotspot)
  if hotspot ~= nil then
    local v8 = InGameMenuMapUtil.getHotspotVehicle(hotspot)
    if v8 ~= nil then
      v8 = v8:getOwnerFarmId()
      v8 = v8:getName()
      v8 = v8:getImageFilename()
      self.currentHotspot = hotspot
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L218
      v8 = v8:getJob()
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L218
      if v8.getTarget ~= nil then
        local v9 = v8:getShowTarget()
        if v9 then
          local v9, v10, v11 = v8:getTarget()
          v12:setWorldPosition(v9, v10)
          if v11 ~= nil then
            v12:setWorldRotation(v11 + math.pi)
          end
          v12:addMapHotspot(self.aiTargetMapHotspot)
        end
      end
      if v8.unloadingStationParameter ~= nil then
        v9 = v9:getUnloadingStation()
        if v9 ~= nil and v9.owningPlaceable ~= nil and v9.owningPlaceable.getHotspot ~= nil then
          v11 = v9.owningPlaceable:getHotspot(1)
          local v12, v13 = v11:getWorldPosition()
          v14:setWorldPosition(v12, v13)
          v14:addMapHotspot(self.aiUnloadingMarkerHotspot)
        end
      end
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L218
      v9 = v9:getLoadingStation()
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L218
      -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L218
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L218
      v11 = v9.owningPlaceable:getHotspot(1)
      v12, v13 = v11:getWorldPosition()
      v14:setWorldPosition(v12, v13)
      v14:addMapHotspot(self.aiLoadingMarkerHotspot)
      -- goto L218  (LOP_JUMP +34)
    end
    v8 = hotspot:isa(PlaceableHotspot)
    -- if not v8 then goto L218 end
    v8 = hotspot:getName()
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L218
    v8 = hotspot:getPlaceable()
    if v8 ~= nil then
      v9 = v8:getOwnerFarmId()
      v9 = v8:getImageFilename()
    end
    self.currentHotspot = hotspot
  else
    self.currentHotspot = nil
  end
  if v7 then
    InGameMenuMapUtil.showContextBox(self.contextBox, hotspot, v2, v3, v4, v6)
  else
    InGameMenuMapUtil.hideContextBox(self.contextBox)
  end
  self:refreshContextInput()
end
function InGameMenuAIFrame:showActionMessage(text, locaKey)
  if text ~= nil then
    v4:setVisible(true)
    v4:setText(text)
  elseif locaKey ~= nil then
    v4:setVisible(true)
    v4:setLocaKey(locaKey)
  else
    v4:setVisible(false)
  end
  if v3 then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L92
    v4:setVisible(true)
    setTextBold(true)
    local v5 = getTextWidth(self.actionMessage.textSize, self.actionMessage.text)
    setTextBold(false)
    v5:setSize(v5 + 20 / g_screenWidth, nil)
    return
  end
  if self.actionMessageBg ~= nil then
    v4:setVisible(false)
  end
end
function InGameMenuAIFrame:generateJobTypes()
  for v4, v5 in pairs(AIJobType) do
    local v7 = v7:createJob(v5)
    self.jobTypeInstances[v5] = v7
  end
end
function InGameMenuAIFrame:startGoToJob(vehicle, destX, destZ, angle)
  v6:setVehicle(vehicle)
  v6:setPosition(destX, destZ)
  v6:setAngle(angle)
  self.jobTypeInstances[AIJobType.GOTO]:setValues()
  local v6, v7 = self.jobTypeInstances[AIJobType.GOTO]:validate(g_currentMission.player.farmId)
  if v6 then
    v9:setFocus(self.activeWorkerList)
    self:tryStartJob(self.jobTypeInstances[AIJobType.GOTO], g_currentMission.player.farmId, function(self)
      if self == AIJob.START_SUCCESS then
        local destZ = destZ:createJob(AIJobType.GOTO)
        u0.jobTypeInstances[AIJobType.GOTO] = destZ
      end
    end)
    return true
  end
  local v9 = tostring(v7)
  InfoDialog.show(v9, nil, nil, DialogElement.TYPE_ERROR)
  return false
end
function InGameMenuAIFrame:setActiveJobTypeSelection(jobTypeIndex)
  if self.currentJob ~= nil then
    -- if v1 == v0.currentJob.jobTypeIndex then goto L202 end
  end
  -- TODO: structure LOP_FORNPREP (pc 17, target 27)
  v5:delete()
  -- TODO: structure LOP_FORNLOOP (pc 26, target 18)
  local locaKey = locaKey:createJob(jobTypeIndex)
  self.currentJob = locaKey
  if g_currentMission.player ~= nil then
  end
  v3:applyCurrentState(self.currentJobVehicle, g_currentMission, locaKey, false)
  self.currentJobElements = {}
  local v4 = v4:getGroupedParameters()
  for v6, v7 in ipairs(...) do
    local v8 = v8:clone(self.jobMenuLayout)
    local v11 = v7:getTitle()
    v8:setText(...)
    local v10 = v7:getParameters()
    for v12, v13 in ipairs(...) do
      local v15 = v13:getType()
      if v15 == AIParameterType.TEXT then
        local v16 = v16:clone(self.jobMenuLayout)
      elseif v15 == AIParameterType.POSITION then
        v16 = v16:clone(self.jobMenuLayout)
      else
        if v15 == AIParameterType.POSITION_ANGLE then
          v16 = v16:clone(self.jobMenuLayout)
        else
          if v15 ~= AIParameterType.SELECTOR and v15 ~= AIParameterType.UNLOADING_STATION and v15 ~= AIParameterType.LOADING_STATION then
            -- if v15 ~= AIParameterType.FILLTYPE then goto L157 end
          end
          v16 = v16:clone(self.jobMenuLayout)
          v16:setDataSource(v13)
        end
      end
      v16:loadElementFromCustomValues(v14)
      v14.aiParameter = v13
      local v19 = v13:getCanBeChanged()
      v14:setDisabled(not v19)
      table.insert(self.currentJobElements, v14)
    end
  end
  self:updateParameterValueTexts()
  self:validateParameters()
  v3:invalidateLayout()
  v3:setFocus(self.jobTypeElement)
  self:refreshContextInput()
end
function InGameMenuAIFrame:onAIVehicleStateChanged(isActive, vehicle)
  if vehicle ~= nil and self.currentHotspot ~= nil then
    local selectedVehicle = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
    if selectedVehicle == vehicle then
      self:refreshContextInput()
    end
  end
end
function InGameMenuAIFrame:onAITaskSkipped()
  self:refreshContextInput()
end
function InGameMenuAIFrame:onDrawPostIngameMap(element, ingameMap)
  if self.hideContentOverlay then
    return
  end
end
function InGameMenuAIFrame:onDrawPostIngameMapHotspots()
  InGameMenuMapUtil.updateContextBoxPosition(self.contextBox, self.currentHotspot)
  if self.aiTargetMapHotspot ~= nil then
    locaKey:setAbsolutePosition(self.aiTargetMapHotspot.icon.x + self.aiTargetMapHotspot.icon.width * 0.5, self.aiTargetMapHotspot.icon.y + self.aiTargetMapHotspot.icon.height * 0.5)
  end
end
function InGameMenuAIFrame:onClickHotspot(element, hotspot)
  if self.isPickingLocation then
    self:executePickingCallback(true, hotspot.worldX, hotspot.worldZ)
  elseif self.isPickingRotation then
    local v5 = math.atan2(hotspot.worldX - self.pickingRotationOrigin[1], hotspot.worldZ - self.pickingRotationOrigin[2])
    self:executePickingCallback(true, v5)
  else
    if self.mode == InGameMenuAIFrame.MODE_OVERVIEW then
      v5 = hotspot:getCategory()
      if self.currentHotspot ~= hotspot and InGameMenuAIFrame.HOTSPOT_VALID_CATEGORIES[v5] and hotspot ~= self.anywhereHotspot then
        self:showContextInput(false, false, false, false)
        self:setMapSelectionItem(hotspot)
      end
    end
  end
  self:refreshContextInput()
end
function InGameMenuAIFrame:onClickMap(element, worldX, worldZ)
  if self.isPickingLocation then
    self:executePickingCallback(true, worldX, worldZ)
  elseif self.isPickingRotation then
    local angle = math.atan2(worldX - self.pickingRotationOrigin[1], worldZ - self.pickingRotationOrigin[2])
    self:executePickingCallback(true, angle)
  else
    if self.mode == InGameMenuAIFrame.MODE_OVERVIEW then
      self:setMapSelectionItem(nil)
      self:showContextInput(false, false, false, false)
    end
  end
  self:refreshContextInput()
end
function InGameMenuAIFrame:onVehiclesChanged(vehicle, wasAdded, isExitingGame)
  self:selectFirstHotspot()
end
function InGameMenuAIFrame:onPauseChanged(isActive)
  self:setMapSelectionItem(self.currentHotspot)
end
function InGameMenuAIFrame:selectFirstHotspot(allowedHotspots)
  if allowedHotspots == nil then
  end
  local worldX = worldX:cycleVisibleHotspot(nil, allowedHotspots, 1)
  self:setMapSelectionItem(worldX)
end
function InGameMenuAIFrame:updateInputGlyphs()
  if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
  else
  end
  worldZ:setActions(element, nil, nil, true, true)
  worldZ:setActions({InputAction.AXIS_MAP_ZOOM_IN, InputAction.AXIS_MAP_ZOOM_OUT}, nil, nil, false, true)
  worldZ:setText(worldX)
  worldZ:setText(self.zoomText)
end
function InGameMenuAIFrame:validateParameters()
  if self.currentJob ~= nil then
    worldZ:setValues()
    local worldZ, angle = worldZ:validate(g_currentMission.player.farmId)
    self:updateWarnings()
  end
  worldZ:setText(worldX)
  worldZ:setVisible(not element)
  if self.errorMessageBg ~= nil then
    worldZ:setVisible(not element)
  end
end
function InGameMenuAIFrame:updateWarnings()
  for angle, v5 in ipairs(self.currentJobElements) do
    local v7 = v5:getDescendantByName("invalid")
    if not (v7 ~= nil) then
      continue
    end
    local v11 = v5.aiParameter:getIsValid()
    v7:setVisible(not v11)
  end
end
function InGameMenuAIFrame:addStatusMessage(message)
  table.insert(self.statusMessages, {removeTime = g_time + 5000, text = message})
  self:updateStatusMessages()
end
function InGameMenuAIFrame:updateStatusMessages()
  for v5, v6 in ipairs(self.statusMessages) do
  end
  worldX:setText(element)
  if self.statusMessageBg ~= nil then
    v5 = getTextLength(self.statusMessage.textSize, element, 99999)
    if 0 >= v5 then
    end
    worldX:setVisible(true)
    setTextBold(true)
    angle = getTextWidth(self.statusMessage.textSize, self.statusMessage.text)
    v5 = getTextHeight(self.statusMessage.textSize, self.statusMessage.text)
    setTextBold(false)
    v5:setSize(angle + 20 / g_screenWidth, v5 + 14 / g_screenWidth)
    v5:setPosition(nil, self.statusMessage.absPosition[2] + self.statusMessage.textSize * 0.5 - (v5 + 14 / g_screenWidth) * 0.5)
  end
end
function InGameMenuAIFrame:registerInput()
  self:unregisterInput()
  element:registerActionEvent(InputAction.MENU_ACTIVATE, self, self.onStartCancelJob, false, true, false, true)
  element:registerActionEvent(InputAction.MENU_CANCEL, self, self.onMenuCancel, false, true, false, true)
  element:registerActionEvent(InputAction.MENU_ACCEPT, self, self.onCreateJob, false, true, false, true)
  local element, worldX = element:registerActionEvent(InputAction.SWITCH_VEHICLE, self, self.onSwitchVehicle, false, true, false, true, 1)
  self.eventIdSwitchVehicle = worldX
  local worldZ, angle = worldZ:registerActionEvent(InputAction.SWITCH_VEHICLE_BACK, self, self.onSwitchVehicle, false, true, false, true, -1)
  self.eventIdSwitchVehicleBack = angle
end
function InGameMenuAIFrame.unregisterInput(v0, element)
  if element then
    -- if InGameMenuAIFrame.CLEAR_CLOSE_INPUT_ACTIONS then goto L10 end
  end
  for v6, v7 in pairs(InGameMenuAIFrame.CLEAR_INPUT_ACTIONS) do
    v8:removeActionEventsByActionName(v7)
  end
end
function InGameMenuAIFrame:hasMouseOverlapInFrame()
  return GuiUtils.checkOverlayOverlap(g_lastMousePosX, g_lastMousePosY, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2])
end
function InGameMenuAIFrame:onZoomIn()
  local element = self:hasMouseOverlapInFrame()
  if element then
    element:zoom(1)
  end
end
function InGameMenuAIFrame:onZoomOut()
  local element = self:hasMouseOverlapInFrame()
  if element then
    element:zoom(-1)
  end
end
function InGameMenuAIFrame:onSwitchVehicle(_, _, direction)
  if g_currentMission.controlledVehicle == nil then
  end
  angle[v5] = true
  local v5 = v5:cycleVisibleHotspot(self.currentHotspot, angle, direction)
  self:setMapSelectionItem(v5)
end
function InGameMenuAIFrame:onClickBack()
  local element = self:getCanGoBack()
  if element then
    self:onClickBackCallback()
    return
  end
  element = self:getIsPicking()
  if element then
    self:executePickingCallback(false)
    self:refreshContextInput()
    self.ingameMap.isTouchPickingRotation = false
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L73
    local worldZ = worldZ:getText("button_confirmPosition")
    element:setText(...)
    return
  end
  if self.mode == InGameMenuAIFrame.MODE_CREATE then
    self.mode = InGameMenuAIFrame.MODE_OVERVIEW
    self:setJobMenuVisible(false)
    self.activeWorkerList.handleFocus = true
    element:setFocus(self.activeWorkerList)
    self:refreshContextInput()
  end
end
function InGameMenuAIFrame:onStartGoToJob()
  if not g_currentMission.paused then
    local element = self:getCanGoTo()
    if element then
      self:tryStartGoToJob()
    end
  end
end
function InGameMenuAIFrame:onStartCancelJob()
  if not g_currentMission.paused then
    local element = self:getCanCancelJob()
    if element then
      self:cancelJob()
      return
    end
    element = self:getCanStartJob()
    if element then
      self:startJob()
    end
  end
end
function InGameMenuAIFrame:onSkipJobTask()
  if not g_currentMission.paused then
    local element = self:getCanSkipJobTask()
    if element then
      self:skipCurrentTask()
    end
  end
end
function InGameMenuAIFrame:onMenuCancel()
  local element = self:getCanGoTo()
  if element then
    self:onStartGoToJob()
    return
  end
  self:onSkipJobTask()
end
function InGameMenuAIFrame:onConfirmAITarget()
  if not g_currentMission.paused then
    if self.isPickingLocation then
      local worldZ = worldZ:getIsPositionReachable(self.aiTargetMapHotspot.worldX, 0, self.aiTargetMapHotspot.worldZ)
      if worldZ then
        local v6 = v6:getText("button_confirmRotation")
        angle:setText(...)
        self.hasPickedLocationTouch = true
        self.ingameMap.isTouchPickingRotation = true
        self:executePickingCallback(true, self.aiTargetMapHotspot.worldX, self.aiTargetMapHotspot.worldZ)
        return
      end
      local v5 = v5:getText("ai_validationErrorBlockedPosition")
      InfoDialog.show(v5, nil, nil, DialogElement.TYPE_ERROR)
      return
    end
    if self.isPickingRotation then
      self.ingameMap.isTouchPickingRotation = false
      worldZ = worldZ:getText("button_confirmPosition")
      element:setText(...)
      self:executePickingCallback(true, self.aiTargetMapHotspot.worldRotation + math.pi)
    end
  end
end
function InGameMenuAIFrame:onCreateJob()
  local element = self:getCanCreateJob()
  if element and not g_currentMission.paused then
    self:createJob()
  end
end
function InGameMenuAIFrame:updateParameterValueTexts()
  element:removeMapHotspot(self.aiTargetMapHotspot)
  element:removeMapHotspot(self.aiLoadingMarkerHotspot)
  element:removeMapHotspot(self.aiUnloadingMarkerHotspot)
  for angle, v5 in ipairs(self.currentJobElements) do
    local v7 = v5.aiParameter:getType()
    if v7 == AIParameterType.TEXT then
      local v8 = v5:getDescendantByName("title")
      local v11 = v5.aiParameter:getString()
      v8:setText(...)
    else
      if v7 ~= AIParameterType.POSITION then
        -- if v7 ~= AIParameterType.POSITION_ANGLE then goto L95 end
      end
      local v10 = v6:getString()
      v5:setText(...)
      v8:addMapHotspot(self.aiTargetMapHotspot)
      local v8, v9 = v6:getPosition()
      v10:setWorldPosition(v8, v9)
      if not (v7 == AIParameterType.POSITION_ANGLE) then
        continue
      end
      v11 = v6:getAngle()
      v11:setWorldRotation(v11 + math.pi)
      continue
      v5:updateTitle()
      if v7 == AIParameterType.UNLOADING_STATION then
        v8 = v6:getUnloadingStation()
        if not (v8 ~= nil) then
          continue
        end
        if not (v8.owningPlaceable ~= nil) then
          continue
        end
        if not (v8.owningPlaceable.getHotspot ~= nil) then
          continue
        end
        v10 = v8.owningPlaceable:getHotspot(1)
        if not (v10 ~= nil) then
          continue
        end
        local v11, v12 = v10:getWorldPosition()
        v13:setWorldPosition(v11, v12)
        v13:addMapHotspot(self.aiUnloadingMarkerHotspot)
      else
        if not (v7 == AIParameterType.LOADING_STATION) then
          continue
        end
        v8 = v6:getLoadingStation()
        if not (v8 ~= nil) then
          continue
        end
        if not (v8.owningPlaceable ~= nil) then
          continue
        end
        if not (v8.owningPlaceable.getHotspot ~= nil) then
          continue
        end
        v10 = v8.owningPlaceable:getHotspot(1)
        if not (v10 ~= nil) then
          continue
        end
        v11, v12 = v10:getWorldPosition()
        v13:setWorldPosition(v11, v12)
        v13:addMapHotspot(self.aiLoadingMarkerHotspot)
      end
    end
  end
end
function InGameMenuAIFrame:onClickMultiTextOptionParameter(index, element)
  if self.currentJob ~= nil then
    angle:onParameterValueChanged(element.aiParameter)
    self:updateParameterValueTexts()
  end
  self:validateParameters()
end
function InGameMenuAIFrame:onClickPositionParameter(element)
  self:startPickPosition(element.aiParameter, function(self, element, worldX)
    if self then
      local v5 = v5:getString()
      worldZ:setText(...)
    end
  end)
end
function InGameMenuAIFrame:onClickPositionRotationParameter(element)
  self:startPickPositionAndRotation(element.aiParameter, function(self, element, worldX, worldZ)
    if self then
      local v6 = v6:getString()
      angle:setText(...)
    end
  end)
end
function InGameMenuAIFrame:getNumberOfItemsInSection(list, section)
  if not self.isOpen then
    return 0
  end
  if g_currentMission ~= nil then
    if g_currentMission.player ~= nil then
    end
    local v6 = v6:getActiveJobs()
    for v8, v9 in ipairs(...) do
      if not (v9.startedFarmId == worldZ) then
        continue
      end
    end
    return angle
  end
  return 0
end
function InGameMenuAIFrame.populateCellForItemInSection(v0, element, worldX, worldZ, angle)
  if g_currentMission.player ~= nil then
  end
  local v9 = v9:getActiveJobs()
  for v11, v12 in ipairs(...) do
    if not (v12.startedFarmId == v7) then
      continue
    end
    if not (v5 + 1 == worldZ) then
      continue
    end
    break
  end
  if v6 ~= nil then
    v8 = angle:getAttribute("text")
    v10 = v6:getDescription()
    v8:setText(...)
    v8 = angle:getAttribute("title")
    v10 = v6:getTitle()
    v8:setText(...)
    v8 = angle:getAttribute("helper")
    v10 = v6:getHelperName()
    v8:setText(...)
  end
end
function InGameMenuAIFrame:onListSelectionChanged(list, section, index)
  local angle = angle:getJobByIndex(index)
  if angle ~= nil and angle.vehicleParameter then
    local v5 = v5:getVehicle()
    if v5 ~= nil then
      local v6 = v5:getMapHotspot()
      self:setMapSelectionItem(v6)
    end
  end
end
function InGameMenuAIFrame:onJobTypeChanged(index)
  self:setActiveJobTypeSelection(self.currentJobTypes[index])
end
function InGameMenuAIFrame:onAIJobStarted(job, farmId)
  worldZ:reloadData()
end
function InGameMenuAIFrame:onAIJobRemoved(jobId)
  worldX:reloadData()
end
function InGameMenuAIFrame:onAIJobStopped(job, aiMessage)
  if aiMessage ~= nil and job ~= nil and g_currentMission.player ~= nil and job.startedFarmId == g_currentMission.player.farmId then
    local helperName = job:getHelperName()
    local text = aiMessage:getMessage()
    local v7 = string.format(text, helperName or "Unknown")
    self:addStatusMessage(...)
  end
end
function InGameMenuAIFrame:getIsPicking()
  if not self.isPickingRotation then
  end
  return element
end
function InGameMenuAIFrame:executePickingCallback(...)
  element:setHotspotSelectionActive(true)
  self.isPickingLocation = false
  self.isPickingRotation = false
  element:unlockMapMovement()
  self.pickingCallback = nil
  if self.pickingCallback ~= nil then
    self.pickingCallback(...)
  end
end
function InGameMenuAIFrame:startPickPosition(parameter, callback)
  worldZ:setHotspotSelectionActive(false)
  worldZ:setIsCursorAvailable(false)
  self.isPickingLocation = true
  self.hasPickedLocationTouch = false
  self:showActionMessage(nil, "ui_ai_pickTargetLocation")
  worldZ:removeMapHotspot(self.aiTargetMapHotspot)
  worldZ:addMapHotspot(self.aiTargetMapHotspot)
  self.pickingCallback = function(self, parameter, callback)
    worldZ:showActionMessage()
    worldZ:setIsCursorAvailable(true)
    u0.hasPickedRotationTouch = false
    if self then
      worldZ:setValue(parameter, callback)
      worldZ:setWorldPosition(parameter, callback)
    end
    u2(self, parameter, callback, u1)
    worldZ:validateParameters()
  end
end
function InGameMenuAIFrame:startPickPositionAndRotation(parameter, callback)
  self.isPickingLocation = true
  self.hasPickedLocationTouch = false
  worldZ:setHotspotSelectionActive(false)
  worldZ:setIsCursorAvailable(false)
  self:showActionMessage(nil, "ui_ai_pickTargetLocation")
  worldZ:removeMapHotspot(self.aiTargetMapHotspot)
  worldZ:addMapHotspot(self.aiTargetMapHotspot)
  self.pickingCallback = function(self, parameter, callback)
    worldZ:showActionMessage()
    worldZ:setIsCursorAvailable(true)
    u0.hasPickedRotationTouch = false
    if self then
      worldZ:setHotspotSelectionActive(false)
      worldZ:setIsCursorAvailable(false)
      worldZ:setWorldPosition(parameter, callback)
      u0.isPickingRotation = true
      worldZ:lockMapMovement()
      u0.pickingRotationOrigin = {parameter, callback}
      local angle = angle:getSnappingAngle()
      u0.pickingRotationSnapAngle = angle
      worldZ:showActionMessage(nil, "ui_ai_pickTargetRotation")
      u0.pickingCallback = function(self, parameter)
        callback:showActionMessage()
        callback:setIsCursorAvailable(true)
        if self then
          callback:setPosition(u2, u3)
          callback:setAngle(parameter)
          local callback = callback:getAngle()
          worldZ:setWorldRotation(callback + math.pi)
          u4(true, u2, u3, parameter)
        else
          u4(false, u2, u3, nil)
        end
        callback:validateParameters()
      end
    else
      u2(false, nil, nil, nil)
    end
    worldZ:validateParameters()
  end
end
function InGameMenuAIFrame:setJobMenuVisible(isVisible)
  worldX:setActionEventActive(self.eventIdSwitchVehicle, not isVisible)
  worldX:setActionEventActive(self.eventIdSwitchVehicleBack, not isVisible)
  worldX:setContextEventsActive(InGameMenuAIFrame.INPUT_CONTEXT_NAME, InputAction.MENU_AXIS_LEFT_RIGHT, isVisible)
  worldX:setText("")
  worldX:setText("")
  if self.errorMessageBg ~= nil then
    worldX:setVisible(false)
    worldX:setVisible(false)
  end
  worldX:setVisible(isVisible)
  worldX:setVisible(not isVisible)
  if not isVisible then
    self:setMapSelectionItem(self.currentHotspot)
  end
end
function InGameMenuAIFrame:createJob()
  local element = element:getVehicle()
  if element ~= nil then
    self.currentJobTypes = {}
    if element.getLastJob ~= nil then
      local v6 = element:getLastJob()
    end
    for v9, v10 in pairs(AIJobType) do
      local v11 = v11:getIsAvailableForVehicle(element)
      if not v11 then
        continue
      end
      table.insert(self.currentJobTypes, v10)
      local v14 = v14:getJobTypeByIndex(v10)
      table.insert(worldX, v14.title)
      if worldZ ~= nil then
        if not (v5 ~= nil) then
          continue
        end
        if not (v5.class == self.jobTypeInstances[v10].class) then
          continue
        end
      end
    end
    if #self.currentJobTypes == 0 then
      log("Error: vehicle has no support for any jobs, so button should not have been shown!")
      return
    end
    v6:setTexts(worldX)
    v6:setState(angle or 1)
    self.mode = InGameMenuAIFrame.MODE_CREATE
    self.currentJobVehicle = element
    self.currentJob = nil
    self:setJobMenuVisible(true)
    self.activeWorkerList.handleFocus = false
    v6:setFocus(self.jobTypeElement)
    self:setActiveJobTypeSelection(worldZ)
  end
end
function InGameMenuAIFrame:tryStartGoToJob()
  if self.currentHotspot ~= nil then
    local element = element:getVehicle()
    if element ~= nil then
      self:startPickPositionAndRotation(self.jobTypeInstances[AIJobType.GOTO].positionAngleParameter, function(self, element, worldX, worldZ)
        if self then
          angle:startGoToJob(u1, element, worldX, worldZ)
        end
        angle:refreshContextInput()
      end)
    end
  end
end
function InGameMenuAIFrame:startJob()
  if self.startJobPending then
    return
  end
  element:setValues()
  local element, worldX = element:validate(g_currentMission.player.farmId)
  if element then
    self:tryStartJob(self.currentJob, g_currentMission.player.farmId, function(self)
      if self == AIJob.START_SUCCESS then
        u0.mode = InGameMenuAIFrame.MODE_OVERVIEW
        u0.currentJob = nil
        element:setJobMenuVisible(false)
        u0.activeWorkerList.handleFocus = true
        element:setFocus(u0.activeWorkerList)
        element:refreshContextInput()
      end
    end)
    return
  end
  local angle = tostring(worldX)
  InfoDialog.show(angle, nil, nil, DialogElement.TYPE_ERROR)
  self:updateWarnings()
end
function InGameMenuAIFrame:cancelJob()
  local vehicle = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
  if vehicle ~= nil then
    local worldX = vehicle:getIsAIActive()
    if worldX then
      local angle = AIMessageSuccessStoppedByUser.new()
      vehicle:stopCurrentAIJob(...)
    end
  end
end
function InGameMenuAIFrame:tryStartJob(job, farmId, callback)
  self.startJobPending = true
  angle:subscribe(AIJobStartRequestEvent, self.onStartedJob, self, {callback})
  local angle = angle:getServerConnection()
  local v6 = AIJobStartRequestEvent.new(job, farmId)
  angle:sendEvent(...)
end
function InGameMenuAIFrame:onStartedJob(args, state, jobTypeIndex)
  self.startJobPending = false
  v5:unsubscribe(AIJobStartRequestEvent, self)
  if state ~= AIJob.START_SUCCESS then
    local v5 = v5:getJobTypeByIndex(jobTypeIndex)
    local v6 = v5.classObject.getIsStartErrorText(state)
    InfoDialog.show(v6, nil, nil, DialogElement.TYPE_INFO)
  end
  angle(state)
end
function InGameMenuAIFrame:skipCurrentTask()
  local vehicle = InGameMenuMapUtil.getHotspotVehicle(self.currentHotspot)
  if vehicle ~= nil then
    local worldX = vehicle:getIsAIActive()
    if worldX then
      worldX = vehicle:getJob()
      if worldX ~= nil then
        local worldZ = worldX:getCanSkipTask()
        if worldZ then
          vehicle:skipCurrentTask()
          return
        end
        self:refreshContextInput()
      end
    end
  end
end
{}[MapHotspot.CATEGORY_STEERABLE] = true
{}[MapHotspot.CATEGORY_COMBINE] = true
{}[MapHotspot.CATEGORY_TRAILER] = true
{}[MapHotspot.CATEGORY_TOOL] = true
{}[MapHotspot.CATEGORY_UNLOADING] = true
{}[MapHotspot.CATEGORY_LOADING] = true
{}[MapHotspot.CATEGORY_PRODUCTION] = true
{}[MapHotspot.CATEGORY_ANIMAL] = true
{}[MapHotspot.CATEGORY_OTHER] = false
{}[MapHotspot.CATEGORY_AI] = true
{}[MapHotspot.CATEGORY_SHOP] = true
{}[MapHotspot.CATEGORY_PLAYER] = true
InGameMenuAIFrame.HOTSPOT_VALID_CATEGORIES = {}
{}[MapHotspot.CATEGORY_STEERABLE] = true
{}[MapHotspot.CATEGORY_COMBINE] = true
{}[MapHotspot.CATEGORY_TRAILER] = true
{}[MapHotspot.CATEGORY_TOOL] = true
{}[MapHotspot.CATEGORY_OTHER] = false
{}[MapHotspot.CATEGORY_AI] = true
{}[MapHotspot.CATEGORY_PLAYER] = true
InGameMenuAIFrame.HOTSPOT_SWITCH_CATEGORIES = {}
InGameMenuAIFrame.GLYPH_SIZE = {36, 36}
InGameMenuAIFrame.GLYPH_TEXT_SIZE = 20
InGameMenuAIFrame.GLYPH_COLOR = {1, 1, 1, 1}
InGameMenuAIFrame.L10N_SYMBOL = {SET_MARKER = "action_tag", REMOVE_MARKER = "action_untag", VEHICLE_RESET = "button_reset", DIALOG_VEHICLE_RESET_DONE = "ui_vehicleResetDone", DIALOG_VEHICLE_RESET_FAILED = "ui_vehicleResetFailed", DIALOG_VEHICLE_IN_USE = "shop_messageReturnVehicleInUse", DIALOG_VEHICLE_NO_PERMISSION = "shop_messageNoPermissionGeneral", DIALOG_VEHICLE_RESET_CONFIRM = "ui_wantToResetVehicleText", DIALOG_BUY_FARMLAND = "shop_messageBuyFarmlandText", DIALOG_BUY_FARMLAND_TITLE = "shop_messageBuyFarmlandTitle", DIALOG_BUY_FARMLAND_NOT_ENOUGH_MONEY = "shop_messageNotEnoughMoneyToBuyFarmland", DIALOG_SELL_FARMLAND = "shop_messageSellFarmlandText", DIALOG_SELL_FARMLAND_TITLE = "shop_messageSellFarmlandTitle", DIALOG_CANNOT_SELL_WTIH_PLACEABLES = "shop_messageCannotSellFarmlandWithPlaceables", MAP_SELECTOR_FRUIT_TYPES = "ui_mapOverviewFruitTypes", MAP_SELECTOR_GROWTH_STATES = "ui_mapOverviewGrowth", MAP_SELECTOR_SOIL_STATES = "ui_mapOverviewSoil", SWITCH_FARMLANDS = "ui_ingameMenuMapFarmlands", SWITCH_OVERVIEW = "ui_ingameMenuMapOverview", INPUT_MOVE_CURSOR = "ui_ingameMenuMapMoveCursor", INPUT_PAN_MAP = "ui_ingameMenuMapPan", INPUT_ZOOM_MAP = "ui_ingameMenuMapZoom", MOBILE_BUY_FIELD_TEXT = "ui_mobile_buyFieldDialogText", MOBILE_BUY_FIELD_TEXT_COINS = "ui_mobile_buyFieldDialogText_buyCoins", BUY_FIELD_TITLE = "shop_messageBuyFieldTitle", MAP_PAGES = {"ui_map_crops", "ui_map_growth", "ui_map_soil"}}
InGameMenuAIFrame.PROFILE = {MONEY_VALUE_NEUTRAL = "ingameMenuMapMoneyValue", MONEY_VALUE_NEGATIVE = "ingameMenuMapMoneyValueNegative"}
