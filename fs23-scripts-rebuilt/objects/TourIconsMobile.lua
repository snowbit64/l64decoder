-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TourIconsMobile = {}
local TourIconsMobile_mt = Class(TourIconsMobile)
function TourIconsMobile.onCreate(v0, v1)
  local v2 = TourIconsMobile.new(v1)
  v3:addUpdateable(v2)
  g_currentMission.tourIconsBase = v2
end
function TourIconsMobile.new(id)
  setmetatable({}, u0)
  local v2 = getNumOfChildren({me = id}.me)
  -- TODO: structure LOP_FORNPREP (pc 21, target 58)
  local v6 = getChildAt({me = id, tourIcons = {}}.me, 0)
  local v7 = getChildAt(v6, 0)
  addTrigger(v6, "triggerCallback", {me = id, tourIcons = {}})
  setVisibility(v7, false)
  table.insert({me = id, tourIcons = {}}.tourIcons, {tourIconTriggerId = v6, tourIconId = v7})
  -- TODO: structure LOP_FORNLOOP (pc 57, target 22)
  local v3 = v3:getMaxValue(FieldDensityMap.PLOW_LEVEL)
  local v4 = v4:getMaxValue(FieldDensityMap.LIME_LEVEL)
  local v5, v6 = getNormalizedScreenValues(0, 28)
  _ = v5
  return {me = id, tourIcons = {}, visible = false, mapHotspot = nil, currentTourIconNumber = 1, alpha = 0.25, alphaDirection = 1, startTourDialog = false, startTourDialogDelay = 0, permanentMessageDelay = 0, isPaused = false, pauseTime = 0, soldStuffAtGrainElevator = false, plowLevelMaxValue = v3, limeLevelMaxValue = v4, permanentTextSize = v6}
end
function TourIconsMobile:delete()
  v1:removeUpdateable(self)
  for v4, v5 in pairs(self.tourIcons) do
    removeTrigger(v5.tourIconTriggerId)
  end
  if self.me ~= 0 then
    delete(self.me)
    self.me = 0
  end
end
function TourIconsMobile:showTourDialog()
  local v4 = v4:getText("tour_text_start")
  YesNoDialog.show(self.reactToDialog, self, v4, "")
end
function TourIconsMobile:reactToDialog(yes)
  if yes then
    self.visible = true
    self:activateNextIcon()
    if g_currentMission.helpIconsBase ~= nil then
      v2:showHelpIcons(false, true)
    end
    v2:publish(MessageType.MISSION_TOUR_STARTED)
    return
  end
  self.visible = false
  local v3 = v3:getText("tour_mobile_abort")
  InfoDialog.show(...)
  self:delete()
end
function TourIconsMobile:update(dt)
  if not g_currentMission.missionInfo.isValid and g_server ~= nil and self.initDone == nil then
    local v2 = v2:getIsTourSupported()
    if v2 then
      self.initDone = true
      v2:fadeScreen(-1, 3000, function()
        u0.canStart = true
      end, self)
      v2 = v2:getFieldByIndex(2)
      local v3 = v3:getFruitTypeByIndex(FruitType.WHEAT)
      local v7 = table.getn(v2.maxFieldStatusPartitions)
      -- TODO: structure LOP_FORNPREP (pc 51, target 75)
      v7:setFieldPartitionStatus(v2, v2.maxFieldStatusPartitions, 1, v3.index, FieldManager.FIELDSTATE_GROWING, v3.maxHarvestingGrowthState, 3, true, self.plowLevelMaxValue, 0, self.limeLevelMaxValue)
      -- TODO: structure LOP_FORNLOOP (pc 74, target 52)
      local v4 = v4:getFieldByIndex(1)
      local v5 = v5:getFruitTypeByIndex(FruitType.CANOLA)
      local v9 = table.getn(v4.maxFieldStatusPartitions)
      -- TODO: structure LOP_FORNPREP (pc 96, target 119)
      v9:setFieldPartitionStatus(v4, v4.maxFieldStatusPartitions, 1, v5.index, FieldManager.FIELDSTATE_HARVESTED, 0, 0, false, self.plowLevelMaxValue, 0, self.limeLevelMaxValue)
      -- TODO: structure LOP_FORNLOOP (pc 118, target 97)
      local v6 = v6:getFieldByIndex(3)
      local v10 = table.getn(v6.maxFieldStatusPartitions)
      -- TODO: structure LOP_FORNPREP (pc 133, target 155)
      v10:setFieldPartitionStatus(v6, v6.maxFieldStatusPartitions, 1, nil, FieldManager.FIELDSTATE_CULTIVATED, 0, 0, false, self.plowLevelMaxValue, 0, self.limeLevelMaxValue)
      -- TODO: structure LOP_FORNLOOP (pc 154, target 134)
    end
  end
  if self.startTourDialog and self.canStart then
    self.startTourDialogDelay = self.startTourDialogDelay - dt
    if self.startTourDialogDelay < 0 then
      self.startTourDialog = false
      self:showTourDialog()
    end
  end
  v2 = v2:getIsGuiVisible()
  if v2 then
    return
  end
  if self.queuedMessage ~= nil then
    v2:toggleSize(IngameMapMobile.STATE_HIDDEN, true)
    InfoDialog.show(self.queuedMessage)
    self.queuedMessage = nil
    return
  end
  if self.isPaused then
    if 0 < self.pauseTime then
      self.pauseTime = self.pauseTime - dt
    else
      self.pauseTime = 0
      self.isPaused = false
      self:activateNextIcon()
    end
  end
  if self.visible and not self.isPaused then
    if self.currentTourIconNumber == 2 then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L556
      -- if g_currentMission.controlledVehicle ~= g_currentMission.tourVehicles.tourCombine then goto L556 end
      v2 = v2:getActionControllerDirection()
      -- if v2 >= 0 then goto L556 end
      self.pauseTime = 2000
      self.isPaused = true
      return
    end
    if self.currentTourIconNumber == 4 then
      v2 = v2:getIsTurnedOn()
      -- if not v2 then goto L556 end
      v2 = v2:getIsAIActive()
      -- if not v2 then goto L556 end
      self.pauseTime = 1000
      self.isPaused = true
      return
    end
    if self.currentTourIconNumber == 5 then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L556
      -- if g_currentMission.controlledVehicle ~= g_currentMission.tourVehicles.tourTractor1 then goto L556 end
      self.pauseTime = 1000
      self.isPaused = true
      return
    end
    if self.currentTourIconNumber == 6 then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L556
      -- if g_currentMission.controlledVehicle ~= g_currentMission.tourVehicles.tourTractor1 then goto L556 end
      v2 = v2:getActionControllerDirection()
      -- if v2 >= 0 then goto L556 end
      self.pauseTime = 1000
      self.isPaused = true
      return
    end
    if self.currentTourIconNumber == 8 then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L556
      -- if g_currentMission.controlledVehicle ~= g_currentMission.tourVehicles.tourTractor2 then goto L556 end
      self.pauseTime = 1000
      self.isPaused = true
      return
    end
    if self.currentTourIconNumber == 9 then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L556
      -- if g_currentMission.controlledVehicle ~= g_currentMission.tourVehicles.tourTractor2 then goto L556 end
      -- if g_currentMission.tourVehicles.tourSowingMachine.rootVehicle ~= g_currentMission.tourVehicles.tourTractor2 then goto L556 end
      self.pauseTime = 1000
      self.isPaused = true
      return
    end
    if self.currentTourIconNumber == 11 then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L556
      -- if g_currentMission.controlledVehicle ~= g_currentMission.tourVehicles.tourTractor1 then goto L556 end
      self.pauseTime = 1000
      self.isPaused = true
      return
    end
    if self.currentTourIconNumber == 13 then
      -- if g_currentMission.tourVehicles.tourCultivator.rootVehicle ~= g_currentMission.tourVehicles.tourCultivator then goto L556 end
      self.pauseTime = 1000
      self.isPaused = true
      return
    end
    if self.currentTourIconNumber == 14 then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L556
      -- if g_currentMission.controlledVehicle ~= g_currentMission.tourVehicles.tourTractor1 then goto L556 end
      -- if g_currentMission.tourVehicles.tourTrailer.rootVehicle ~= g_currentMission.tourVehicles.tourTractor1 then goto L556 end
      self.pauseTime = 1000
      self.isPaused = true
      return
    end
    if self.currentTourIconNumber == 15 then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L556
      -- if g_currentMission.controlledVehicle ~= g_currentMission.tourVehicles.tourTractor1 then goto L556 end
      v2 = v2:getFillUnitFillLevel(1)
      -- if 800 >= v2 then goto L556 end
      self.pauseTime = 1000
      self.isPaused = true
      return
    end
    if self.currentTourIconNumber == 17 and g_currentMission.controlledVehicle ~= nil and g_currentMission.controlledVehicle == g_currentMission.tourVehicles.tourTractor1 then
      v2 = v2:getFillUnitFillLevel(1)
      if v2 <= 2 then
        self.pauseTime = 1000
        self.isPaused = true
      end
    end
  end
end
function TourIconsMobile:makeIconVisible(tourIconId)
  setVisibility(tourIconId, true)
  local v2, v3, v4 = getWorldTranslation(tourIconId)
  if self.mapHotspot == nil then
    local v5 = TourHotspot.new()
    self.mapHotspot = v5
    v5:addMapHotspot(self.mapHotspot)
  end
  v5:setWorldPosition(v2, v4)
  v5 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v2, v3, v4)
  if v5 < v3 then
    v6:setMapTargetHotspot(self.mapHotspot)
    g_currentMission.disableMapTargetHotspotHiding = true
    return
  end
  v6:setMapTargetHotspot(nil)
  g_currentMission.disableMapTargetHotspotHiding = false
end
function TourIconsMobile:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  local v6 = v6:getNodeObject(otherId)
  if v6 ~= nil then
    local v7 = v6:isa(Vehicle)
    if v7 and onEnter and self.tourIcons[self.currentTourIconNumber] ~= nil and self.tourIcons[self.currentTourIconNumber].tourIconTriggerId == triggerId then
      v7 = getVisibility(self.tourIcons[self.currentTourIconNumber].tourIconId)
      if v7 then
        self:activateNextIcon()
      end
    end
  end
end
function TourIconsMobile:activateNextIcon()
  -- TODO: structure LOP_FORNPREP (pc 4, target 27)
  local v5 = getVisibility(self.tourIcons[1].tourIconId)
  if v5 then
    setVisibility(self.tourIcons[1].tourIconId, false)
    setCollisionMask(self.tourIcons[1].tourIconTriggerId, 0)
  end
  -- TODO: structure LOP_FORNLOOP (pc 26, target 5)
  if self.tourIcons[self.currentTourIconNumber + 1] ~= nil then
    self:makeIconVisible(self.tourIcons[self.currentTourIconNumber + 1].tourIconId)
  else
    if self.mapHotspot ~= nil then
      v1:removeMapHotspot(self.mapHotspot)
      v1:delete()
      self.mapHotspot = nil
    end
    local v1 = v1:getValue("showHelpIcons")
    if v1 and g_currentMission.helpIconsBase ~= nil then
      v1:showHelpIcons(true, true)
    end
    self.visible = false
    v1:publish(MessageType.MISSION_TOUR_FINISHED)
    self:delete()
  end
  v1 = v1:getText("ui_tour")
  if self.currentTourIconNumber == 1 then
    local v4 = v4:getText("tour_mobile_part01_activate")
  elseif self.currentTourIconNumber == 2 then
    v4 = v4:getText("tour_mobile_part01_drive")
  else
    if self.currentTourIconNumber == 3 then
      v4 = v4:getText("tour_mobile_part01_helper")
    elseif self.currentTourIconNumber == 4 then
      v4 = v4:getText("tour_mobile_part01_finished")
    else
      if self.currentTourIconNumber == 5 then
        v4 = v4:getText("tour_mobile_part02_activate")
      elseif self.currentTourIconNumber == 6 then
        v4 = v4:getText("tour_mobile_part02_drive")
      else
        if self.currentTourIconNumber == 7 then
          v4 = v4:getText("tour_mobile_part02_finished")
        elseif self.currentTourIconNumber == 8 then
          v4 = v4:getText("tour_mobile_part03_attach")
        else
          if self.currentTourIconNumber == 9 then
            v4 = v4:getText("tour_mobile_part03_activateDrive")
          elseif self.currentTourIconNumber == 10 then
            v4 = v4:getText("tour_mobile_part03_finished")
          else
            if self.currentTourIconNumber == 11 then
              v4 = v4:getText("tour_mobile_part04_driveToYard")
            elseif self.currentTourIconNumber == 12 then
              v4 = v4:getText("tour_mobile_part04_detach")
            else
              if self.currentTourIconNumber == 13 then
                v4 = v4:getText("tour_mobile_part04_attachTrailer")
              elseif self.currentTourIconNumber == 14 then
                v4 = v4:getText("tour_mobile_part04_driveToHarvester")
              else
                if self.currentTourIconNumber == 15 then
                  v4 = v4:getText("tour_mobile_part04_driveToSellpoint")
                elseif self.currentTourIconNumber == 16 then
                  v4 = v4:getText("tour_mobile_part04_Unload")
                else
                  if self.currentTourIconNumber == 17 then
                    v4 = v4:getText("tour_mobile_end")
                  end
                end
              end
            end
          end
        end
      end
    end
  end
  if g_currentMission.controlledVehicle ~= nil and g_currentMission.controlledVehicle.setCruiseControlState ~= nil then
    v4:setCruiseControlState(Drivable.CRUISECONTROL_STATE_OFF)
  end
  v4 = v4:getIsGuiVisible()
  if v4 then
    self.queuedMessage = {title = v1, text = v2}
  else
    v4:toggleSize(IngameMapMobile.STATE_HIDDEN, true)
    InfoDialog.show(v2)
  end
  self.currentTourIconNumber = self.currentTourIconNumber + 1
  self.permanentMessageDelay = 250
end
