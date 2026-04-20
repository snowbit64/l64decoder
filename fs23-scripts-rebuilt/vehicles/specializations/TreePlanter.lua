-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/TreePlanterLoadPalletEvent.lua")
source("dataS/scripts/vehicles/specializations/events/PlantLimitToFieldEvent.lua")
TreePlanter = {AI_REQUIRED_GROUND_TYPES = {FieldGroundType.STUBBLE_TILLAGE, FieldGroundType.CULTIVATED, FieldGroundType.SEEDBED, FieldGroundType.PLOWED, FieldGroundType.ROLLED_SEEDBED, FieldGroundType.SOWN, FieldGroundType.DIRECT_SOWN, FieldGroundType.PLANTED, FieldGroundType.RIDGE, FieldGroundType.ROLLER_LINES, FieldGroundType.HARVEST_READY, FieldGroundType.HARVEST_READY_OTHER, FieldGroundType.GRASS, FieldGroundType.GRASS_CUT}}
function TreePlanter.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(FillUnit, v0)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(GroundReference, v0)
    end
  end
  return v1
end
function TreePlanter.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("TreePlanter")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.treePlanter#node", "Node index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.treePlanter#minDistance", "Min. distance between trees", 20)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.treePlanter#palletTrigger", "Pallet trigger")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.treePlanter#refNodeIndex", "Ground reference node index", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.treePlanter#saplingPalletGrabNode", "Sapling pallet grab node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.treePlanter#saplingPalletMountNode", "Sapling pallet mount node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.treePlanter#fillUnitIndex", "Fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.treePlanter#palletMountingRange", "Min. distance from saplingPalletGrabNode to pallet to mount it", 6)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.treePlanter.sounds", "work")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.treePlanter.animationNodes")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.VECTOR_TRANS, "vehicles.vehicle(?).treePlanter#lastTreePos", "Position of last tree")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).treePlanter#palletHadBeenMounted", "Pallet is mounted")
end
function TreePlanter.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "removeMountedObject", TreePlanter.removeMountedObject)
  SpecializationUtil.registerFunction(vehicleType, "setPlantLimitToField", TreePlanter.setPlantLimitToField)
  SpecializationUtil.registerFunction(vehicleType, "createTree", TreePlanter.createTree)
  SpecializationUtil.registerFunction(vehicleType, "loadPallet", TreePlanter.loadPallet)
  SpecializationUtil.registerFunction(vehicleType, "palletTriggerCallback", TreePlanter.palletTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "onDeleteTreePlanterObject", TreePlanter.onDeleteTreePlanterObject)
  SpecializationUtil.registerFunction(vehicleType, "getCanPlantOutsideSeason", TreePlanter.getCanPlantOutsideSeason)
end
function TreePlanter.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", TreePlanter.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", TreePlanter.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSpeedRotatingPartActive", TreePlanter.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", TreePlanter.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", TreePlanter.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", TreePlanter.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsOnField", TreePlanter.getIsOnField)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addNodeObjectMapping", TreePlanter.addNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "removeNodeObjectMapping", TreePlanter.removeNodeObjectMapping)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addFillUnitFillLevel", TreePlanter.addFillUnitFillLevel)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitFillLevel", TreePlanter.getFillUnitFillLevel)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitFillLevelPercentage", TreePlanter.getFillUnitFillLevelPercentage)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitFillType", TreePlanter.getFillUnitFillType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitCapacity", TreePlanter.getFillUnitCapacity)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitAllowsFillType", TreePlanter.getFillUnitAllowsFillType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitFreeCapacity", TreePlanter.getFillUnitFreeCapacity)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillLevelInformation", TreePlanter.getFillLevelInformation)
end
function TreePlanter.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onDraw", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", TreePlanter)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", TreePlanter)
end
function TreePlanter:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.treePlanterSound", "vehicle.treePlanter.sounds.work")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode(0)", "vehicle.treePlanter.animationNodes.animationNode")
  if self.isClient then
    self.spec_treePlanter.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.treePlanter" .. ".sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_treePlanter.samples.work = v4
    self.spec_treePlanter.isWorkSamplePlaying = false
    local v3 = v3:loadAnimations(self.xmlFile, "vehicle.treePlanter" .. ".animationNodes", self.components, self, self.i3dMappings)
    self.spec_treePlanter.animationNodes = v3
  end
  v3 = v3:getValue("vehicle.treePlanter" .. "#node", nil, self.components, self.i3dMappings)
  v2.node = v3
  v3 = v3:getValue("vehicle.treePlanter" .. "#minDistance", 20)
  v2.minDistance = v3
  v3 = v3:getValue("vehicle.treePlanter" .. "#palletTrigger", nil, self.components, self.i3dMappings)
  v2.palletTrigger = v3
  if v2.palletTrigger ~= nil then
    addTrigger(v2.palletTrigger, "palletTriggerCallback", self)
  else
    Logging.xmlWarning(self.xmlFile, "TreePlanter requires a palletTrigger!")
  end
  v2.palletsInTrigger = {}
  v3 = v3:getValue("vehicle.treePlanter" .. "#refNodeIndex", 1)
  v4 = self:getGroundReferenceNodeFromIndex(v3)
  v2.groundReferenceNode = v4
  if v2.groundReferenceNode == nil then
    Logging.xmlWarning(self.xmlFile, "No groundReferenceNode specified or invalid groundReferenceNode index in '%s'", "vehicle.treePlanter" .. "#refNodeIndex")
  end
  v4 = TreePlanterActivatable.new(self)
  v2.activatable = v4
  v4 = v4:getValue("vehicle.treePlanter" .. "#saplingPalletGrabNode", self.rootNode, self.components, self.i3dMappings)
  v2.saplingPalletGrabNode = v4
  v4 = v4:getValue("vehicle.treePlanter" .. "#saplingPalletMountNode", self.rootNode, self.components, self.i3dMappings)
  v2.saplingPalletMountNode = v4
  v2.mountedSaplingPallet = nil
  v4 = v4:getValue("vehicle.treePlanter" .. "#fillUnitIndex", 1)
  v2.fillUnitIndex = v4
  v4 = v4:getValue("vehicle.treePlanter" .. "#palletMountingRange", 6)
  v2.nearestPalletDistance = v4
  v2.currentTree = 1
  v2.lastTreePos = nil
  v2.showFieldNotOwnedWarning = false
  v2.showRestrictedZoneWarning = false
  v2.showTooManyTreesWarning = false
  v2.hasGroundContact = false
  v2.showWrongPlantingTimeWarning = false
  v2.limitToField = true
  v2.forceLimitToField = false
  if self.addAIGroundTypeRequirements ~= nil then
    self:addAIGroundTypeRequirements(TreePlanter.AI_REQUIRED_GROUND_TYPES)
    if self.setAIFruitProhibitions ~= nil then
      self:setAIFruitProhibitions(FruitType.POPLAR, 1, 5)
    end
  end
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
  if savegame ~= nil and not savegame.resetVehicles then
    v4 = v4:getValue(savegame.key .. ".treePlanter#lastTreePos", nil, true)
    v2.lastTreePos = v4
    v4 = v4:getValue(savegame.key .. ".treePlanter#palletHadBeenMounted")
    v2.palletHadBeenMounted = v4
  end
end
function TreePlanter:onDelete()
  v2:deleteSamples(self.spec_treePlanter.samples)
  v2:deleteAnimations(self.spec_treePlanter.animationNodes)
  if self.spec_treePlanter.activatable ~= nil then
    v2:removeActivatable(self.spec_treePlanter.activatable)
  end
  if v1.mountedSaplingPallet ~= nil then
    v2:unmount()
    v1.mountedSaplingPallet = nil
  end
  if v1.palletTrigger ~= nil then
    removeTrigger(v1.palletTrigger)
  end
end
function TreePlanter:saveToXMLFile(xmlFile, key, usedModNames)
  if self.spec_treePlanter.lastTreePos ~= nil then
    local v8 = unpack(self.spec_treePlanter.lastTreePos)
    xmlFile:setValue(...)
  end
  if v4.mountedSaplingPallet ~= nil then
    xmlFile:setValue(key .. "#palletHadBeenMounted", true)
  end
end
function TreePlanter:removeMountedObject(object, isDeleting)
  if self.spec_treePlanter.mountedSaplingPallet == object then
    v4:unmount()
    self.spec_treePlanter.mountedSaplingPallet = nil
  end
end
function TreePlanter:onReadStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    local v4 = NetworkUtil.readNodeObjectId(streamId)
    self.spec_treePlanter.palletIdToMount = v4
  end
end
function TreePlanter:onWriteStream(streamId, connection)
  if self.spec_treePlanter.mountedSaplingPallet == nil then
  end
  v4(v5, true)
  if v3.mountedSaplingPallet ~= nil then
    local v4 = NetworkUtil.getObjectId(v3.mountedSaplingPallet)
    NetworkUtil.writeNodeObjectId(streamId, v4)
  end
end
function TreePlanter:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      v5 = streamReadBool(streamId)
      self.spec_treePlanter.hasGroundContact = v5
      v5 = streamReadBool(streamId)
      self.spec_treePlanter.showFieldNotOwnedWarning = v5
      v5 = streamReadBool(streamId)
      self.spec_treePlanter.showRestrictedZoneWarning = v5
    end
  end
end
function TreePlanter:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_treePlanter.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      streamWriteBool(streamId, v4.hasGroundContact)
      streamWriteBool(streamId, v4.showFieldNotOwnedWarning)
      streamWriteBool(streamId, v4.showRestrictedZoneWarning)
    end
  end
end
function TreePlanter:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.finishedFirstUpdate then
    if self.spec_treePlanter.palletIdToMount ~= nil then
      local v7 = NetworkUtil.getObject(self.spec_treePlanter.palletIdToMount)
    elseif self.spec_treePlanter.palletHadBeenMounted then
      self.spec_treePlanter.palletHadBeenMounted = nil
      v7 = TreePlanter.getSaplingPalletInRange(self, self.spec_treePlanter.saplingPalletMountNode, self.spec_treePlanter.palletsInTrigger)
    end
    if v6 ~= nil then
      v6:mount(self, v5.saplingPalletMountNode, 0, 0, 0, 0, 0, 0)
      v5.mountedSaplingPallet = v6
      v7:removeActivatable(v5.activatable)
      v5.palletIdToMount = nil
    end
  end
  if self.isClient then
    if v5.mountedSaplingPallet == nil then
      v7 = TreePlanter.getSaplingPalletInRange(self, v5.saplingPalletGrabNode, v5.palletsInTrigger)
    end
    if v5.nearestSaplingPallet ~= v6 then
      v5.nearestSaplingPallet = v6
      if v6 ~= nil then
        v7:addActivatable(v5.activatable)
      else
        v7:removeActivatable(v5.activatable)
      end
    end
  end
  if v5.mountedSaplingPallet ~= nil then
    if v5.mountedSaplingPallet.isDeleted then
      v5.palletsInTrigger[v5.mountedSaplingPallet] = nil
      v5.mountedSaplingPallet = nil
      return
    end
    v6:raiseActive()
  end
end
function TreePlanter:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  self.spec_treePlanter.showTooManyTreesWarning = false
  if self.isServer then
    if self.spec_treePlanter.groundReferenceNode ~= nil then
      local v9 = self:getIsGroundReferenceNodeActive(self.spec_treePlanter.groundReferenceNode)
    end
    if v5.hasGroundContact ~= v8 then
      self:raiseDirtyFlags(v5.dirtyFlag)
      v5.hasGroundContact = v8
    end
  end
  local v8 = self:getIsAIActive()
  if v8 and not g_currentMission.missionInfo.helperBuySeeds and v5.mountedSaplingPallet == nil then
    local v11 = AIMessageErrorOutOfFill.new()
    self.rootVehicle:stopCurrentAIJob(...)
  end
  v5.showWrongPlantingTimeWarning = false
  if v5.hasGroundContact then
    v8 = self:getIsTurnedOn()
    if v8 then
      v9 = self:getCanPlantOutsideSeason()
      if not v9 then
        v9 = self:getFillUnitFillType(v5.fillUnitIndex)
        local v10 = v10:getFruitTypeIndexByFillTypeIndex(v9)
        if v10 ~= nil then
          v11 = v11:canFruitBePlanted(v10)
        end
      end
      v5.showWrongPlantingTimeWarning = not v8
      if self.isServer and v8 then
        v9 = self:getFillUnitFillLevel(v5.fillUnitIndex)
        v10 = self:getFillUnitFillType(v5.fillUnitIndex)
        if g_currentMission.missionInfo.helperBuySeeds then
          v11 = self:getIsAIActive()
          if v11 then
            if v5.mountedSaplingPallet ~= nil then
              v11 = v11:getFillUnitFillType(1)
            else
            end
          end
        end
        if v9 == 0 then
          v11 = self:getIsAIActive()
          if v11 then
            -- if g_currentMission.missionInfo.helperBuySeeds then goto L136 end
          end
        end
        if v10 == FillType.TREESAPLINGS then
          v11 = self:getLastSpeed()
          -- if 1 >= v11 then goto L494 end
          local v11, v12, v13 = getWorldTranslation(v5.node)
          local v16 = self:getActiveFarm()
          local v14 = v14:canFarmAccessLand(v16, v11, v13)
          if v14 then
            v14 = PlacementUtil.isInsideRestrictedZone(g_currentMission.restrictedZones, v11, v12, v13, true)
            if not v14 then
              if v5.lastTreePos ~= nil then
                v14 = MathUtil.vector3Length(v11 - v5.lastTreePos[1], v12 - v5.lastTreePos[2], v13 - v5.lastTreePos[3])
                -- if v5.minDistance >= v14 then goto L494 end
                self:createTree()
                -- goto L494  (LOP_JUMP +295)
              end
              self:createTree()
              -- goto L494  (LOP_JUMP +291)
            end
            -- goto L494  (LOP_JUMP +289)
          end
        elseif v10 ~= FillType.UNKNOWN then
          v11, v12, v13 = getWorldTranslation(v5.node)
          v16 = self:getActiveFarm()
          v14 = v14:canFarmAccessLand(v16, v11, v13)
          if v14 then
            v16 = v16:getFruitPixelsToSqm()
            local v15 = math.sqrt(...)
            local v15, v16, v17 = localToWorld(v5.node, -(v15 * 0.5), 0, v15 * 0.5)
            local v18, v19, v20 = localToWorld(v5.node, v15 * 0.5, 0, v15 * 0.5)
            local v21, v22, v23 = localToWorld(v5.node, -(v15 * 0.5), 0, 3 * v15 * 0.5)
            local v24 = v24:getFruitTypeIndexByFillTypeIndex(v10)
            local v25 = v25:getFruitTypeByIndex(v24)
            local v26, v27, v28 = localDirectionToWorld(v5.node, 0, 0, 1)
            local v29 = MathUtil.getYRotationFromDirection(v26, v28)
            if v25 ~= nil and v25.directionSnapAngle ~= 0 then
              local v30 = math.floor(v29 / v25.directionSnapAngle + 0.5)
            end
            local v32 = v32:getGroundAngleMaxValue()
            v30 = FSDensityMapUtil.convertToDensityMapAngle(...)
            if not v5.limitToField then
            end
            if not v5.limitToField then
            end
            FSDensityMapUtil.updateCultivatorArea(v15, v17, v18, v20, v21, v23, not v31, v32, v30, nil)
            FSDensityMapUtil.eraseTireTrack(v15, v17, v18, v20, v21, v23)
            local v33, v34, v35 = localToWorld(v5.node, -v14, 0, -3 * v14)
            v33, v34, v35 = localToWorld(v5.node, v14, 0, -3 * v14)
            v33, v34, v35 = localToWorld(v5.node, -v14, 0, -v14)
            v33 = v33:getFieldGroundValue(FieldGroundType.SOWN)
            v34, v35 = FSDensityMapUtil.updateSowingArea(v24, v33, v35, v33, v35, v33, v35, v33, v30, 2)
            local v37 = self:getActiveFarm()
            local v38 = self:getIsAIActive()
            if v38 then
              -- if not g_currentMission.missionInfo.helperBuySeeds then goto L443 end
              local v40 = v40:getCostPerLiter(FillType.SEEDS, false)
              v39:updateFarmStats(v37, "expenses", v25.seedUsagePerSqm * v34 * v40 * 1.5)
              local v42 = self:getActiveFarm()
              v39:addMoney(-(v25.seedUsagePerSqm * v34 * v40 * 1.5), v42, MoneyType.PURCHASE_SEEDS)
            else
              v40 = self:getOwnerFarmId()
              self:addFillUnitFillLevel(v40, v5.fillUnitIndex, -(v25.seedUsagePerSqm * v34), v10, ToolType.UNDEFINED)
            end
            v40 = v40:getFruitPixelsToSqm()
            v38 = MathUtil.areaToHa(...)
            v39:updateFarmStats(v37, "seedUsage", v36)
            v39:updateFarmStats(v37, "sownHectares", v38)
            v39:updateFarmStats(v37, "sownTime", dt / 60000)
            self:updateLastWorkedArea(v34)
          else
          end
        end
      end
    end
  end
  if self.isServer then
    if v5.showFieldNotOwnedWarning == v6 then
      -- if v5.showRestrictedZoneWarning == v7 then goto L514 end
    end
    v5.showFieldNotOwnedWarning = v6
    v5.showRestrictedZoneWarning = v7
    self:raiseDirtyFlags(v5.dirtyFlag)
  end
  if self.isClient then
    v8 = self:getIsTurnedOn()
    if v8 then
      -- if not v5.hasGroundContact then goto L546 end
      v8 = self:getLastSpeed()
      -- if 1 >= v8 then goto L546 end
      -- if v5.isWorkSamplePlaying then goto L561 end
      v8:playSample(v5.samples.work)
      v5.isWorkSamplePlaying = true
    elseif v5.isWorkSamplePlaying then
      v8:stopSample(v5.samples.work)
      v5.isWorkSamplePlaying = false
    end
    if v5.actionEvents[InputAction.IMPLEMENT_EXTRA3] ~= nil then
      if isActiveForInputIgnoreSelection then
        v10 = self:getFillUnitFillType(v5.fillUnitIndex)
        if v10 ~= FillType.UNKNOWN and v10 ~= FillType.TREESAPLINGS then
          v14 = self:getOwner()
          v11 = v11:getHasPlayerPermission(...)
          if v11 and not v5.forceLimitToField then
          end
        end
        if v9 then
          if v5.limitToField then
            v14 = v14:getText("action_allowCreateFields")
            v11:setActionEventText(...)
          else
            v14 = v14:getText("action_limitToFields")
            v11:setActionEventText(...)
          end
        end
      end
      v10:setActionEventActive(v8.actionEventId, v9)
    end
  end
end
function TreePlanter:onDraw(isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if isActiveForInputIgnoreSelection then
    local v5 = self:getFillUnitFillLevel(self.spec_treePlanter.fillUnitIndex)
    if v5 <= 0 then
      local v7 = v7:getText("info_firstFillTheTool")
      v5:addExtraPrintText(...)
    end
  end
  if isSelected.showFieldNotOwnedWarning then
    v7 = v7:getText("warning_youDontHaveAccessToThisLand")
    v5:showBlinkingWarning(...)
  end
  if isSelected.showRestrictedZoneWarning then
    v7 = v7:getText("warning_actionNotAllowedHere")
    v5:showBlinkingWarning(...)
  end
  if isSelected.showTooManyTreesWarning then
    v7 = v7:getText("warning_tooManyTrees")
    v5:showBlinkingWarning(...)
  end
  if isSelected.showWrongPlantingTimeWarning then
    local v8 = v8:getText("warning_theSelectedFruitTypeCantBePlantedInThisPeriod")
    local v9 = v9:formatPeriod()
    v7 = string.format(...)
    v5:showBlinkingWarning(v7, 100)
  end
end
function TreePlanter:onTurnedOn()
  if self.isClient then
    isActiveForInput:startAnimations(self.spec_treePlanter.animationNodes)
  end
end
function TreePlanter:onTurnedOff()
  if self.isClient then
    isActiveForInput:stopAnimations(self.spec_treePlanter.animationNodes)
    isActiveForInput:stopSamples(self.spec_treePlanter.samples)
    self.spec_treePlanter.isWorkSamplePlaying = false
  end
end
function TreePlanter:addFillUnitFillLevel(superFunc, farmId, fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData)
  if fillUnitIndex == self.spec_treePlanter.fillUnitIndex and self.spec_treePlanter.mountedSaplingPallet ~= nil then
    local v10 = self.spec_treePlanter.mountedSaplingPallet:getFillUnits()
    for v14, v15 in pairs(v10) do
      local v16 = v9:getFillUnitFillType(fillUnitIndex)
      if not (v16 == fillTypeIndex) then
        continue
      end
      local v18 = self:getOwnerFarmId()
      v16 = v9:addFillUnitFillLevel(v18, v14, fillLevelDelta, fillTypeIndex, ToolType.UNDEFINED)
      return v16
    end
  end
  return superFunc(self, farmId, fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData)
end
function TreePlanter:getFillUnitFillLevel(superFunc, fillUnitIndex)
  if fillUnitIndex == self.spec_treePlanter.fillUnitIndex and self.spec_treePlanter.mountedSaplingPallet ~= nil then
    local v6 = self.spec_treePlanter.mountedSaplingPallet:getFillUnits()
    for v10, v11 in pairs(v6) do
      local v12 = isSelected:getFillUnitFillLevel(v10)
    end
    return v5
  end
  return superFunc(self, fillUnitIndex)
end
function TreePlanter:getFillUnitFillLevelPercentage(superFunc, fillUnitIndex)
  if fillUnitIndex == self.spec_treePlanter.fillUnitIndex and self.spec_treePlanter.mountedSaplingPallet ~= nil then
    local capacity = self:getFillUnitCapacity(fillUnitIndex)
    local fillLevel = self:getFillUnitFillLevel(fillUnitIndex)
    if 0 < capacity then
      return fillLevel / capacity
    end
  end
  return superFunc(self, fillUnitIndex)
end
function TreePlanter:getFillUnitFillType(superFunc, fillUnitIndex)
  if fillUnitIndex == self.spec_treePlanter.fillUnitIndex and self.spec_treePlanter.mountedSaplingPallet ~= nil then
    local v5 = self.spec_treePlanter.mountedSaplingPallet:getFillUnits()
    for v9, v10 in pairs(v5) do
      local v11 = isSelected:getFillUnitFillLevel(v9)
      if not (0 < v11) then
        continue
      end
      v11 = isSelected:getFillUnitFillType(v9)
      return v11
    end
  end
  return superFunc(self, fillUnitIndex)
end
function TreePlanter:getFillUnitCapacity(superFunc, fillUnitIndex)
  if fillUnitIndex == self.spec_treePlanter.fillUnitIndex and self.spec_treePlanter.mountedSaplingPallet ~= nil then
    local v6 = self.spec_treePlanter.mountedSaplingPallet:getFillUnits()
    for v10, v11 in pairs(v6) do
      local v12 = isSelected:getFillUnitCapacity(v10)
    end
    return v5
  end
  return superFunc(self, fillUnitIndex)
end
function TreePlanter:getFillUnitAllowsFillType(superFunc, fillUnitIndex, fillType)
  if fillUnitIndex == self.spec_treePlanter.fillUnitIndex and self.spec_treePlanter.mountedSaplingPallet ~= nil then
    return false
  end
  return superFunc(self, fillUnitIndex, fillType)
end
function TreePlanter:getFillUnitFreeCapacity(superFunc, fillUnitIndex, fillTypeIndex, farmId)
  if fillUnitIndex == self.spec_treePlanter.fillUnitIndex and self.spec_treePlanter.mountedSaplingPallet ~= nil then
    return 0
  end
  return superFunc(self, fillUnitIndex, fillTypeIndex, farmId)
end
function TreePlanter:getFillLevelInformation(superFunc, display)
  if self.spec_treePlanter.mountedSaplingPallet ~= nil then
    local v5 = self:getFillUnitCapacity(self.spec_treePlanter.fillUnitIndex)
    local v6 = self:getFillUnitFillLevel(self.spec_treePlanter.fillUnitIndex)
    local v7 = self:getFillUnitFillType(self.spec_treePlanter.fillUnitIndex)
    display:addFillLevel(v7, v6, v5)
  end
  superFunc(self, display)
end
function TreePlanter.getCanPlantOutsideSeason(v0)
  return false
end
function TreePlanter:setPlantLimitToField(plantLimitToField, noEventSend)
  if self.spec_treePlanter.limitToField ~= plantLimitToField then
    self.spec_treePlanter.limitToField = plantLimitToField
    PlantLimitToFieldEvent.sendEvent(self, plantLimitToField, noEventSend)
  end
end
function TreePlanter:createTree()
  local isActiveForInput = isActiveForInput:canPlantTree()
  if not isActiveForInput then
    self.spec_treePlanter.showTooManyTreesWarning = true
    return
  end
  if self.isServer and dt.mountedSaplingPallet ~= nil then
    local isActiveForInputIgnoreSelection, isSelected, v5 = getWorldTranslation(dt.node)
    local v8 = math.random()
    local v7 = dt.mountedSaplingPallet:getFillUnitFillType(1)
    if v7 == FillType.TREESAPLINGS then
      local v9 = dt.mountedSaplingPallet:getTreeType()
      if v9 ~= nil then
        local v10 = v10:getTreeTypeDescFromName(v9)
        if v10 ~= nil then
        end
      end
    end
    v9:plantTree(v8, isActiveForInputIgnoreSelection, isSelected, v5, 0, v6, 0, 0)
    dt.lastTreePos = {isActiveForInputIgnoreSelection, isSelected, v5}
    v9 = self:getActiveFarm()
    if g_currentMission.missionInfo.helperBuySeeds then
      v10 = self:getIsAIActive()
      -- if not v10 then goto L125 end
      v10 = v10:getItemByXMLFilename(isActiveForInput.configFileName)
      local v15 = isActiveForInput:getFillUnitCapacity(1)
      v12:updateFarmStats(v9, "expenses", 1.5 * v10.price / v15)
      v15 = self:getActiveFarm()
      v12:addMoney(-(1.5 * v10.price / v15), v15, MoneyType.PURCHASE_SEEDS)
    else
      local v11 = self:getFillUnitFillLevel(dt.fillUnitIndex)
      if v11 < 1.5 then
      end
      local v13 = self:getOwnerFarmId()
      local v16 = self:getFillUnitFillType(dt.fillUnitIndex)
      self:addFillUnitFillLevel(v13, dt.fillUnitIndex, v10, v16, ToolType.UNDEFINED)
    end
    v10:updateFarmStats(v9, "plantedTreeCount", 1)
  end
end
function TreePlanter:loadPallet(palletObjectId, noEventSend)
  TreePlanterLoadPalletEvent.sendEvent(self, palletObjectId, noEventSend)
  self.spec_treePlanter.palletIdToMount = palletObjectId
end
function TreePlanter:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_treePlanter.hasGroundContact then
    local v6 = self:getWorkDirtMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function TreePlanter:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_treePlanter.hasGroundContact then
    local v6 = self:getWorkWearMultiplier()
    local v7 = self:getLastSpeed()
  end
  return multiplier
end
function TreePlanter:getIsSpeedRotatingPartActive(superFunc, speedRotatingPart)
  if not self.spec_treePlanter.hasGroundContact then
    return false
  end
  return superFunc(self, speedRotatingPart)
end
function TreePlanter:getIsWorkAreaActive(superFunc, workArea)
  local isActive = superFunc(self, workArea)
  if workArea.groundReferenceNode == self.spec_treePlanter.groundReferenceNode then
    local v5 = self:getIsTurnedOn()
    if not v5 then
    end
  end
  return isActive
end
function TreePlanter:doCheckSpeedLimit(superFunc)
  local isActiveForInput = superFunc(self)
  if not isActiveForInput then
    isActiveForInput = self:getIsTurnedOn()
    if isActiveForInput then
      isActiveForInput = self:getIsImplementChainLowered()
    end
  end
  return isActiveForInput
end
function TreePlanter.getCanBeSelected(v0, dt)
  return true
end
function TreePlanter:onDeleteTreePlanterObject(object)
  if self.spec_treePlanter.mountedSaplingPallet == object then
    self.spec_treePlanter.mountedSaplingPallet = nil
  end
  isActiveForInput.palletsInTrigger[object] = nil
end
function TreePlanter:getIsOnField(superFunc)
  local isActiveForInput = superFunc(self)
  if isActiveForInput then
    return true
  end
  if self.spec_treePlanter.hasGroundContact then
    return true
  end
  return false
end
function TreePlanter:addNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_treePlanter.palletTrigger ~= nil then
    list[self.spec_treePlanter.palletTrigger] = self
  end
end
function TreePlanter:removeNodeObjectMapping(superFunc, list)
  superFunc(self, list)
  if self.spec_treePlanter.palletTrigger ~= nil then
    list[self.spec_treePlanter.palletTrigger] = nil
  end
end
function TreePlanter:palletTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if otherId ~= 0 then
    local v8 = v8:getNodeObject(otherId)
    if v8 ~= nil and v8.isa ~= nil then
      local v9 = v8:isa(Vehicle)
      if v9 and v8.isPallet then
        local v11 = self:getActiveFarm()
        v9 = v9:canFarmAccess(v11, v8)
        if v9 then
          v9 = Utils.getNoNil(self.spec_treePlanter.palletsInTrigger[v8], 0)
          if onEnter then
            self.spec_treePlanter.palletsInTrigger[v8] = v9 + 1
            -- cmp-jump LOP_JUMPXEQKN R9 aux=0x80000001 -> L70
            -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L70
            v8:addDeleteListener(self, "onDeleteTreePlanterObject")
          elseif onLeave then
            v11 = math.max(v9 - 1, 0)
            self.spec_treePlanter.palletsInTrigger[v8] = v11
          end
          if v7.palletsInTrigger[v8] == 0 then
            v7.palletsInTrigger[v8] = nil
          end
        end
      end
    end
  end
end
function TreePlanter:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_treePlanter.actionEvents)
    if isActiveForInputIgnoreSelection and not self.spec_treePlanter.forceLimitToField then
      local onLeave, onStay = self:addActionEvent(self.spec_treePlanter.actionEvents, InputAction.IMPLEMENT_EXTRA3, self, TreePlanter.actionEventToggleTreePlanterFieldLimitation, false, true, false, true, nil)
      otherShapeId:setActionEventTextPriority(onStay, GS_PRIO_NORMAL)
    end
  end
end
function TreePlanter:actionEventToggleTreePlanterFieldLimitation(actionName, inputValue, callbackState, isAnalog)
  self:setPlantLimitToField(not self.spec_treePlanter.limitToField)
end
function TreePlanter.getDefaultSpeedLimit()
  return 5
end
function TreePlanter:getSaplingPalletInRange(refNode, palletsInTrigger)
  for v9, v10 in pairs(palletsInTrigger) do
    if not (v10 ~= nil) then
      continue
    end
    if not (0 < v10) then
      continue
    end
    if not (v9 ~= onEnter.mountedSaplingPallet) then
      continue
    end
    local v11 = calcDistanceFrom(refNode, v9.rootNode)
    if not (v11 < onLeave) then
      continue
    end
    local v13 = v9:getFillUnits()
    for v17, v18 in pairs(v13) do
      local v19 = v9:getFillUnitFillType(v17)
      if not (v19 ~= FillType.UNKNOWN) then
        continue
      end
      local v20 = self:getFillUnitSupportsFillType(onEnter.fillUnitIndex, v19)
      if not v20 then
        continue
      end
      v20 = v9:getFillUnitFillLevel(v17)
      if not (0 < v20) then
        continue
      end
      break
    end
    if not v12 then
      continue
    end
  end
  return onStay
end
TreePlanterActivatable = {}
local TreePlanterActivatable_mt = Class(TreePlanterActivatable)
function TreePlanterActivatable.new(treePlanterVehicle)
  local triggerId = setmetatable({}, u0)
  triggerId.treePlanterVehicle = treePlanterVehicle
  local onEnter = onEnter:getText("action_refillOBJECT")
  local otherId = string.format(onEnter, triggerId.treePlanterVehicle.typeDesc)
  triggerId.activateText = otherId
  return triggerId
end
function TreePlanterActivatable:getIsActivatable()
  if self.treePlanterVehicle.rootVehicle ~= g_currentMission.controlledVehicle then
    return false
  end
  if self.treePlanterVehicle.spec_treePlanter.mountedSaplingPallet == nil and self.treePlanterVehicle.spec_treePlanter.nearestSaplingPallet ~= nil then
    return true
  end
  return false
end
function TreePlanterActivatable:run()
  local onEnter = NetworkUtil.getObjectId(self.treePlanterVehicle.spec_treePlanter.nearestSaplingPallet)
  triggerId:loadPallet(...)
end
