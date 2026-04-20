-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedSprayer = {MOD_NAME = g_currentModName}
source(g_currentModDirectory .. "scripts/hud/ExtendedSprayerHUDExtension.lua")
VehicleHUDExtension.registerHUDExtension(ExtendedSprayer, ExtendedSprayerHUDExtension)
function ExtendedSprayer.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(Sprayer, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, specializations)
  end
  return v1
end
function ExtendedSprayer.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setSprayAmountAutoMode", ExtendedSprayer.setSprayAmountAutoMode)
  SpecializationUtil.registerFunction(vehicleType, "setSprayAmountManualValue", ExtendedSprayer.setSprayAmountManualValue)
  SpecializationUtil.registerFunction(vehicleType, "setSprayAmountAutoFruitTypeIndex", ExtendedSprayer.setSprayAmountAutoFruitTypeIndex)
  SpecializationUtil.registerFunction(vehicleType, "setSprayAmountDefaultFruitRequirementIndex", ExtendedSprayer.setSprayAmountDefaultFruitRequirementIndex)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentSprayerMode", ExtendedSprayer.getCurrentSprayerMode)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentNitrogenLevelOffset", ExtendedSprayer.getCurrentNitrogenLevelOffset)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentNitrogenUsageLevelOffset", ExtendedSprayer.getCurrentNitrogenUsageLevelOffset)
  SpecializationUtil.registerFunction(vehicleType, "getIsUsingExactNitrogenAmount", ExtendedSprayer.getIsUsingExactNitrogenAmount)
  SpecializationUtil.registerFunction(vehicleType, "getIsPrecisionSprayingRequired", ExtendedSprayer.getIsPrecisionSprayingRequired)
  SpecializationUtil.registerFunction(vehicleType, "preProcessExtUnderRootFertilizerArea", ExtendedSprayer.preProcessExtUnderRootFertilizerArea)
  SpecializationUtil.registerFunction(vehicleType, "postProcessExtUnderRootFertilizerArea", ExtendedSprayer.postProcessExtUnderRootFertilizerArea)
end
function ExtendedSprayer.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getSprayerUsage", ExtendedSprayer.getSprayerUsage)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "processSprayerArea", ExtendedSprayer.processSprayerArea)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "changeSeedIndex", ExtendedSprayer.changeSeedIndex)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getSprayerDoubledAmountActive", ExtendedSprayer.getSprayerDoubledAmountActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "updateSprayerEffects", ExtendedSprayer.updateSprayerEffects)
end
function ExtendedSprayer.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onChangedFillType", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onVariableWorkWidthSectionChanged", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", ExtendedSprayer)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", ExtendedSprayer)
end
function ExtendedSprayer:onLoad(savegame)
  self.spec_extendedSprayer = self["spec_" .. ExtendedSprayer.MOD_NAME .. ".extendedSprayer"]
  if g_precisionFarming ~= nil then
    self.spec_extendedSprayer.soilMap = g_precisionFarming.soilMap
    self.spec_extendedSprayer.pHMap = g_precisionFarming.pHMap
    self.spec_extendedSprayer.nitrogenMap = g_precisionFarming.nitrogenMap
  end
  v3.texts = {}
  local v5 = v5:getText("action_toggleSprayAmountAutoModePos", self.customEnvironment)
  v3.texts.toggleSprayAmountAutoModePos = v5
  v5 = v5:getText("action_toggleSprayAmountAutoModeNeg", self.customEnvironment)
  v3.texts.toggleSprayAmountAutoModeNeg = v5
  v5 = v5:getText("action_toggleSprayAmountManual", self.customEnvironment)
  v3.texts.toggleSprayAmountAutoManual = v5
  v5 = v5:getText("action_toggleSprayDefaultFruitRequirement", self.customEnvironment)
  v3.texts.toggleSprayDefaultFruitRequirement = v5
  v3.lastLitersPerHectar = 0
  v3.lastNitrogenProportion = 0
  v3.lastRegularUsage = 0
  v3.lastTouchedSoilType = 0
  v3.lastTouchedSoilTypeReal = 0
  v3.lastTouchedSoilTypeSent = 0
  v3.lastTouchedSoilTypeTimer = 0
  v3.lastTouchedSoilTypeInterval = 2000
  v3.lastGroundUpdateDistance = math.huge
  v3.groundUpdateDistance = 4
  local v4 = UsageBuffer.new(2000, PHMap.NUM_BITS)
  v3.phChangeBuffer = v4
  v4 = UsageBuffer.new(1000, PHMap.NUM_BITS)
  v3.phActualBuffer = v4
  v4 = UsageBuffer.new(1000, PHMap.NUM_BITS)
  v3.phTargetBuffer = v4
  v4 = UsageBuffer.new(2000, NitrogenMap.NUM_BITS)
  v3.nChangeBuffer = v4
  v4 = UsageBuffer.new(1000, NitrogenMap.NUM_BITS)
  v3.nActualBuffer = v4
  v4 = UsageBuffer.new(1000, NitrogenMap.NUM_BITS)
  v3.nTargetBuffer = v4
  v3.sprayAmountAutoMode = true
  v3.sprayAmountAutoModeChangeAllowed = true
  v3.sprayAmountManual = 1
  v3.sprayAmountManualMin = 1
  v3.sprayAmountManualMax = 1
  v3.inputActionToggleAuto = InputAction.PRECISIONFARMING_SPRAY_AMOUNT_MODE
  v3.inputActionToggleSprayAmount = InputAction.PRECISIONFARMING_SPRAY_AMOUNT
  v3.isDoingMissionWork = false
  local v4, v5, v6 = v4:getMinMaxValue()
  v3.sprayAmountManualMax = v6
  v3.isLimingActive = false
  v3.attachStateChanged = false
  v3.nApplyAutoModeFruitType = FruitType.UNKNOWN
  v3.nApplyAutoModeFruitTypeSent = FruitType.UNKNOWN
  v3.nApplyAutoModeFruitRequirementDefaultIndex = 1
  v3.nApplyAutoModeFruitTypeRequiresDefaultMode = false
  v3.lastAreaChangeTime = -math.huge
  v3.lastSprayerEffectState = true
  local sprayerFillUnitIndex = self:getSprayerFillUnitIndex()
  local v8 = self:getFillUnitAllowsFillType(sprayerFillUnitIndex, FillType.LIQUIDMANURE)
  if not v8 then
    v8 = self:getFillUnitAllowsFillType(sprayerFillUnitIndex, FillType.DIGESTATE)
  end
  v3.isSlurryTanker = v8
  v8 = self:getFillUnitAllowsFillType(sprayerFillUnitIndex, FillType.MANURE)
  v3.isManureSpreader = v8
  v8 = self:getFillUnitAllowsFillType(sprayerFillUnitIndex, FillType.FERTILIZER)
  if not v8 then
    v8 = self:getFillUnitAllowsFillType(sprayerFillUnitIndex, FillType.LIME)
  end
  v3.isSolidFertilizerSprayer = v8
  v8 = self:getFillUnitAllowsFillType(sprayerFillUnitIndex, FillType.LIQUIDFERTILIZER)
  v3.isLiquidFertilizerSprayer = v8
  v8 = self:getNextDirtyFlag()
  v3.usageValuesDirtyFlag = v8
end
function ExtendedSprayer:onPostLoad(savegame)
  if savegame ~= nil and not savegame.resetVehicles then
    local v7 = v7:getBool(savegame.key .. "." .. ExtendedSprayer.MOD_NAME .. ".extendedSprayer" .. "#sprayAmountAutoMode")
    local v6 = Utils.getNoNil(v7, self.spec_extendedSprayer.sprayAmountAutoMode)
    self:setSprayAmountAutoMode(v6, true)
    v6 = v6:getInt(savegame.key .. "." .. ExtendedSprayer.MOD_NAME .. ".extendedSprayer" .. "#sprayAmountManual")
    if not v6 then
    end
    self:setSprayAmountManualValue(v6, true)
  end
end
function ExtendedSprayer:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setBool(key .. "#sprayAmountAutoMode", self.spec_extendedSprayer.sprayAmountAutoMode)
  xmlFile:setInt(key .. "#sprayAmountManual", self.spec_extendedSprayer.sprayAmountManual)
end
function ExtendedSprayer:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      v5:readStream(streamId, connection)
      v5:readStream(streamId, connection)
      v5:readStream(streamId, connection)
      v5:readStream(streamId, connection)
      v5:readStream(streamId, connection)
      v5:readStream(streamId, connection)
      v5 = streamReadUIntN(streamId, 3)
      self.spec_extendedSprayer.lastTouchedSoilType = v5
      v5 = streamReadBool(streamId)
      if v5 then
        local v7 = streamReadUIntN(streamId, FruitTypeManager.SEND_NUM_BITS)
        self:setSprayAmountAutoFruitTypeIndex(...)
        return
      end
      self:setSprayAmountAutoFruitTypeIndex(nil)
    end
  end
end
function ExtendedSprayer:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_extendedSprayer.usageValuesDirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      v5:writeStream(streamId, connection)
      v5:writeStream(streamId, connection)
      v5:writeStream(streamId, connection)
      v5:writeStream(streamId, connection)
      v5:writeStream(streamId, connection)
      v5:writeStream(streamId, connection)
      streamWriteUIntN(streamId, v4.lastTouchedSoilType, 3)
      if v4.nApplyAutoModeFruitType == nil then
      end
      v5 = v5(v6, true)
      if v5 then
        streamWriteUIntN(streamId, v4.nApplyAutoModeFruitType, FruitTypeManager.SEND_NUM_BITS)
      end
    end
  end
end
function ExtendedSprayer:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    if 500 < g_time - self.spec_extendedSprayer.lastAreaChangeTime then
      self.spec_extendedSprayer.lastGroundUpdateDistance = self.spec_extendedSprayer.lastGroundUpdateDistance + self.lastMovedDistance
      if self.spec_extendedSprayer.groundUpdateDistance < self.spec_extendedSprayer.lastGroundUpdateDistance then
        self.spec_extendedSprayer.lastGroundUpdateDistance = 0
        local workArea = self:getWorkAreaByIndex(1)
        -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L343
        local v10, v11, v12 = localToLocal(workArea.start, self.rootNode, 0, 0, 0)
        local v13 = math.abs(v10)
        if v13 < 0.5 then
          local v13, v14, v15 = getWorldTranslation(workArea.start)
        else
          v13, v14, v15 = getWorldTranslation(workArea.start)
          local v16, v17, v18 = getWorldTranslation(workArea.width)
        end
        v13, v14 = FSDensityMapUtil.getFieldDataAtWorldPosition(v7, 0, v9)
        if v13 then
          v15, v16 = ExtendedSprayer.getFillTypeSourceVehicle(self)
          v17 = v15:getFillUnitLastValidFillType(v16)
          if v17 == FillType.UNKNOWN then
            v18 = v15:getFillUnitFirstSupportedFillType(v16)
          end
          if v17 == FillType.LIME then
            v18 = v18:getLevelAtWorldPos(v7, v9)
            local v20 = v20:getTypeIndexAtWorldPos(v7, v9)
            if 0 < v20 then
              local v21 = v21:getOptimalPHValueForSoilTypeIndex(v20)
            end
            v21:add(0)
            v21:add(v18, true)
            v21:add(v19, true)
            v5.lastTouchedSoilTypeReal = v20
            -- cmp-jump LOP_JUMPXEQKN R21 aux=0x8000002b -> L343
            v5.lastTouchedSoilType = v20
            return
          end
          if self.spec_sowingMachine ~= nil then
          end
          local v19 = v19:getLevelAtWorldPos(v7, v9)
          local v20, v21, v22 = v20:getTargetLevelAtWorldPos(v7, v9, nil, v18, v17, v19, v5.nApplyAutoModeFruitRequirementDefaultIndex)
          v23:add(0)
          v23:add(v19, true, true)
          v23:add(v20, true, true)
          self:setSprayAmountAutoFruitTypeIndex(v22)
          v5.lastTouchedSoilTypeReal = v21
          -- cmp-jump LOP_JUMPXEQKN R23 aux=0x8000002b -> L343
          v5.lastTouchedSoilType = v21
          return
        end
        v15:reset()
        v15:reset()
        v15:reset()
        v15:reset()
        v15:reset()
        v15:reset()
        v5.lastTouchedSoilType = 0
        v5.lastTouchedSoilTypeReal = 0
        v5.lastLitersPerHectar = 0
        v5.lastNitrogenProportion = 0
        self:raiseDirtyFlags(v5.usageValuesDirtyFlag)
        return
      end
      workArea:add(nil, true)
      workArea:add(nil, true)
      workArea:add(nil, true)
      workArea:add(nil, true)
      return
    end
    workArea = self:getIsTurnedOn()
    if workArea then
      workArea:add()
      workArea:add()
      workArea:add()
      workArea:add()
      v5.lastGroundUpdateDistance = v5.groundUpdateDistance * 0.5
      return
    end
    v5.lastGroundUpdateDistance = v5.groundUpdateDistance * 0.5
  end
end
function ExtendedSprayer:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    v6:update(dt)
    v6:update(dt)
    v6:update(dt)
    v6:update(dt)
    v6:update(dt)
    v6:update(dt)
    local v6 = v6:getIsDirty()
    if not v6 then
      v6 = v6:getIsDirty()
      if not v6 then
        v6 = v6:getIsDirty()
        if not v6 then
          v6 = v6:getIsDirty()
          if not v6 then
            v6 = v6:getIsDirty()
            if not v6 then
              v6 = v6:getIsDirty()
              -- if not v6 then goto L112 end
            end
          end
        end
      end
    end
    v6:resetDirtyState()
    v6:resetDirtyState()
    v6:resetDirtyState()
    v6:resetDirtyState()
    v6:resetDirtyState()
    v6:resetDirtyState()
    self:raiseDirtyFlags(v5.usageValuesDirtyFlag)
    v5.lastTouchedSoilTypeTimer = v5.lastTouchedSoilTypeTimer + dt
    if v5.lastTouchedSoilTypeInterval < v5.lastTouchedSoilTypeTimer then
      v5.lastTouchedSoilType = v5.lastTouchedSoilTypeReal
      v5.lastTouchedSoilTypeTimer = 0
      if v5.lastTouchedSoilTypeSent ~= v5.lastTouchedSoilType then
        self:raiseDirtyFlags(v5.usageValuesDirtyFlag)
        v5.lastTouchedSoilTypeSent = v5.lastTouchedSoilType
      end
    end
    if v5.nApplyAutoModeFruitType ~= v5.nApplyAutoModeFruitTypeSent then
      self:raiseDirtyFlags(v5.usageValuesDirtyFlag)
      v5.nApplyAutoModeFruitTypeSent = v5.nApplyAutoModeFruitType
    end
  end
  if self.isClient then
    v6 = self:getIsTurnedOn()
    if v6 then
      ExtendedSprayer.updateSprayerEffectState(self)
    else
      v5.lastSprayerEffectState = true
    end
  end
  local v6, v7 = self:getCurrentSprayerMode()
  v5.isLiming = v6
  v5.isFertilizing = v7
  v6 = self:getIsActiveForInput(true, true)
  if v6 then
    ExtendedSprayer.updateMinimapActiveState(self)
    local v6, v7, v8, v9, v10 = self:getPFStatisticInfo()
    if v10 == nil and v5.sprayAmountAutoMode then
    end
    if v5.isDoingMissionWork ~= v11 then
      v5.isDoingMissionWork = v11
      ExtendedSprayer.updateMinimapActiveState(self)
    end
  end
end
function ExtendedSprayer:onChangedFillType(fillUnitIndex, fillTypeIndex, oldFillTypeIndex)
  if self.spec_extendedSprayer.isSolidFertilizerSprayer and fillTypeIndex == FillType.LIME then
    local v5, v6, v7 = v5:getMinMaxValue()
    self.spec_extendedSprayer.sprayAmountManualMax = v7 - 1
    self.spec_extendedSprayer.isLimingActive = true
    return
  end
  v5, v6, v7 = v5:getMinMaxValue()
  v4.sprayAmountManualMax = v7 - 1
  v4.isLimingActive = false
end
function ExtendedSprayer:onTurnedOn()
  if self.isClient then
    ExtendedSprayer.updateSprayerEffectState(self, true)
  end
end
function ExtendedSprayer:onTurnedOff()
  if self.isClient then
    ExtendedSprayer.updateSprayerEffectState(self, true)
  end
end
function ExtendedSprayer:onStateChange(state, data)
  if state ~= Vehicle.STATE_CHANGE_ATTACH then
    -- if v1 ~= Vehicle.STATE_CHANGE_DETACH then goto L13 end
  end
  v3.attachStateChanged = true
end
function ExtendedSprayer:onVariableWorkWidthSectionChanged()
  -- TODO: structure LOP_FORNPREP (pc 7, target 21)
  local v6 = SpecializationUtil.hasSpecialization(CropSensor, self.rootVehicle.childVehicles[1].specializations)
  if v6 then
    self.rootVehicle.childVehicles[1]:updateCropSensorWorkingWidth()
  end
  -- TODO: structure LOP_FORNLOOP (pc 20, target 8)
  if self.isClient then
    ExtendedSprayer.updateSprayerEffectState(self, true)
  end
end
function ExtendedSprayer:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_extendedSprayer.actionEvents)
    v4:setRequireMinimapDisplay(false, self)
    v4:setRequireMinimapDisplay(false, self)
    if isActiveForInputIgnoreSelection then
      local v4 = ExtendedSprayer.getValidSprayerToUse(self)
      if self == v4 then
        if self.spec_extendedSprayer.sprayAmountAutoModeChangeAllowed then
          local v4, v5 = self:addActionEvent(self.spec_extendedSprayer.actionEvents, self.spec_extendedSprayer.inputActionToggleAuto, self, ExtendedSprayer.actionEventToggleAuto, false, true, false, true, nil)
          v6:setActionEventTextPriority(v5, GS_PRIO_VERY_HIGH)
        end
        v4, v5 = self:addActionEvent(v3.actionEvents, v3.inputActionToggleSprayAmount, self, ExtendedSprayer.actionEventChangeSprayAmount, false, true, false, true, nil)
        v6:setActionEventTextPriority(v5, GS_PRIO_VERY_HIGH)
        v6:setActionEventText(v5, v3.texts.toggleSprayAmountAutoManual)
        if self.spec_sowingMachine == nil then
          local v6, v7 = self:addActionEvent(v3.actionEvents, InputAction.TOGGLE_SEEDS, self, ExtendedSprayer.actionEventChangeDefaultFruitRequirement, false, true, false, true, nil)
          v6:setActionEventTextPriority(v7, GS_PRIO_VERY_HIGH)
          v6:setActionEventText(v7, v3.texts.toggleSprayDefaultFruitRequirement)
        end
        ExtendedSprayer.updateActionEventState(self)
        ExtendedSprayer.updateActionEventAutoModeDefault(self)
        ExtendedSprayer.updateMinimapActiveState(self)
      end
    end
    v3.attachStateChanged = true
  end
end
function ExtendedSprayer:getValidSprayerToUse()
  -- TODO: structure LOP_FORNPREP (pc 7, target 18)
  local v6 = ExtendedSprayer.getIsVehicleValid(self.rootVehicle.childVehicles[1])
  if v6 then
    return self.rootVehicle.childVehicles[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 17, target 8)
  return nil
end
function ExtendedSprayer:getIsVehicleValid()
  local v1 = SpecializationUtil.hasSpecialization(ExtendedSprayer, self.specializations)
  if not v1 then
    return false
  end
  v1 = SpecializationUtil.hasSpecialization(WorkArea, self.specializations)
  if not v1 then
    return false
  end
  if #self.spec_workArea.workAreas == 0 then
    return false
  end
  v1 = SpecializationUtil.hasSpecialization(ManureBarrel, self.specializations)
  if v1 and self.spec_manureBarrel.attachedTool ~= nil then
    return false
  end
  return true
end
function ExtendedSprayer:actionEventToggleAuto(actionName, inputValue, callbackState, isAnalog)
  self:setSprayAmountAutoMode()
end
function ExtendedSprayer:actionEventChangeSprayAmount(actionName, inputValue, callbackState, isAnalog)
  local v10 = MathUtil.sign(inputValue)
  self:setSprayAmountManualValue(self.spec_extendedSprayer.sprayAmountManual + v10)
end
function ExtendedSprayer:actionEventChangeDefaultFruitRequirement(actionName, inputValue, callbackState, isAnalog)
  local v8 = v8:getNextFruitRequirementIndex(self.spec_extendedSprayer.nApplyAutoModeFruitRequirementDefaultIndex)
  self:setSprayAmountDefaultFruitRequirementIndex(...)
end
function ExtendedSprayer:updateActionEventState()
  if self.spec_extendedSprayer.actionEvents[self.spec_extendedSprayer.inputActionToggleAuto] ~= nil then
    if self.spec_extendedSprayer.sprayAmountAutoMode then
      -- if v0.spec_extendedSprayer.texts.toggleSprayAmountAutoModeNeg then goto L25 end
    end
    v3:setActionEventText(v5, v1.texts.toggleSprayAmountAutoModePos)
  end
  if v1.actionEvents[v1.inputActionToggleSprayAmount] ~= nil then
    v4:setActionEventActive(v1.actionEvents[v1.inputActionToggleSprayAmount].actionEventId, not v1.sprayAmountAutoMode)
  end
end
function ExtendedSprayer:updateActionEventAutoModeDefault()
  if self.spec_extendedSprayer.actionEvents[InputAction.TOGGLE_SEEDS] ~= nil then
    if self.spec_extendedSprayer.sprayAmountAutoMode and self.spec_extendedSprayer.nApplyAutoModeFruitType ~= nil and self.spec_extendedSprayer.nApplyAutoModeFruitType ~= FruitType.UNKNOWN then
    end
    v3:setActionEventActive(v5, v6)
  end
end
function ExtendedSprayer:getFillTypeSourceVehicle()
  local v1 = self:getSprayerFillUnitIndex()
  local v2 = self:getFillUnitFillLevel(v1)
  if v2 <= 0 then
    for v6, v7 in ipairs(self.spec_sprayer.supportedSprayTypes) do
      for v11, v12 in ipairs(v2.fillTypeSources[v7]) do
        local v14 = v12.vehicle:getFillUnitFillType(v12.fillUnitIndex)
        if not (v14 == v7) then
          continue
        end
        v14 = v12.vehicle:getFillUnitFillLevel(v12.fillUnitIndex)
        if not (0 < v14) then
          continue
        end
        return v12.vehicle, v12.fillUnitIndex
      end
    end
  end
  return self, v1
end
function ExtendedSprayer:getCurrentSprayerMode()
  local v1, v2 = ExtendedSprayer.getFillTypeSourceVehicle(self)
  local v3 = v1:getFillUnitLastValidFillType(v2)
  if v3 == FillType.LIME then
    return true, false
  end
  if v3 ~= FillType.FERTILIZER and v3 ~= FillType.LIQUIDFERTILIZER and v3 ~= FillType.MANURE and v3 ~= FillType.LIQUIDFERTILIZER and v3 ~= FillType.LIQUIDMANURE then
    -- if v3 ~= FillType.DIGESTATE then goto L44 end
  end
  return false, true
  if v3 == FillType.HERBICIDE then
    return false, false
  end
  local v4 = self:getIsAIActive()
  if v4 then
    return false, true
  end
  return false, false
end
function ExtendedSprayer.getCurrentNitrogenLevelOffset(v0, v1)
  return 0
end
function ExtendedSprayer.getCurrentNitrogenUsageLevelOffset(v0, v1)
  return 0
end
function ExtendedSprayer.getIsUsingExactNitrogenAmount(v0)
  return true
end
function ExtendedSprayer:updateMinimapActiveState()
  local v2, v3, v4, v5 = self:getPFStatisticInfo()
  if v5 then
    local v7, v8 = ExtendedSprayer.getFillTypeSourceVehicle(self)
    if v5 then
      local v10 = v7:getFillUnitFillLevel(v8)
      if 0 >= v10 then
        local v9 = self:getIsAIActive()
      end
    end
  end
  if v6 and not v1.isLiming then
  end
  if v1.isLiming then
    local v11 = self:getIsSelected()
    v7:setRequireMinimapDisplay(...)
    return
  end
  if v1.isFertilizing then
    v11 = self:getIsSelected()
    v7:setRequireMinimapDisplay(...)
    v7:setMinimapMissionState(v1.isDoingMissionWork)
  end
end
function ExtendedSprayer:getIsPrecisionSprayingRequired()
  if self.spec_extendedSprayer.isDoingMissionWork then
    return true
  end
  if v1.sprayAmountAutoMode then
    if v1.isLiming then
      local v3 = v3:getLastAdded()
      local v2 = math.floor(...)
      local v4 = v4:getLastAdded()
      v3 = math.floor(...)
      -- if v3 > v2 then goto L61 end
      return false
    elseif v1.isFertilizing then
      v3 = v3:getLastAdded()
      v2 = math.floor(...)
      v4 = v4:getLastAdded()
      v3 = math.floor(...)
      if v3 <= v2 then
        return false
      end
    end
  end
  return true
end
function ExtendedSprayer:updateSprayerEffectState(force)
  local v3 = self:getIsPrecisionSprayingRequired()
  if v3 then
    v3 = self:getAreEffectsVisible()
    if v3 then
      v3 = self:getIsTurnedOn()
    end
  end
  if v2.lastSprayerEffectState == v3 then
    -- if not v1 then goto L162 end
  end
  local sprayType = self:getActiveSprayType()
  if v3 then
    local v8 = self:getSprayerFillUnitIndex()
    local v6 = self:getFillUnitLastValidFillType(...)
    if v6 == FillType.UNKNOWN then
      local v9 = self:getSprayerFillUnitIndex()
      local v7 = self:getFillUnitFirstSupportedFillType(...)
    end
    v7:setFillType(v4.effects, v6)
    v7:startEffects(v4.effects)
    v7:playSample(v4.samples.spray)
    if sprayType ~= nil then
      v7:setFillType(sprayType.effects, v6)
      v7:startEffects(sprayType.effects)
      v7:startAnimations(sprayType.animationNodes)
      v7:playSample(sprayType.samples.spray)
    end
    v7:startAnimations(v4.animationNodes)
  else
    v6:stopEffects(self.spec_sprayer.effects)
    v6:stopSample(self.spec_sprayer.samples.spray)
    for v9, v10 in ipairs(self.spec_sprayer.sprayTypes) do
      v11:stopEffects(v10.effects)
      v11:stopAnimations(v10.animationNodes)
      v11:stopSample(v10.samples.spray)
    end
    v6:stopAnimations(v4.animationNodes)
  end
  v2.lastSprayerEffectState = v3
end
function ExtendedSprayer:getSprayerUsage(superFunc, fillType, dt)
  local usage = superFunc(self, fillType, dt)
  local v5 = self:getIsTurnedOn()
  if v5 then
    local activeSprayType = self:getActiveSprayType()
    if activeSprayType ~= nil then
    end
    if v6.workAreaIndex ~= nil then
      local v9 = self:getWorkAreaWidth(v6.workAreaIndex)
    else
    end
    local v10 = self:getLastSpeed()
    v9 = math.max(v10, 1)
    if self.spec_extendedSprayer.sprayAmountAutoMode then
    else
    end
    if v10.isLiming then
      -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L189
      local v13 = v13:get()
      local v12 = math.ceil(...)
      local v17 = math.max(v12, v11)
      local v13, v14, v15 = v13:getLimeUsage(v8, v9, v17, dt)
      v10.lastRegularUsage = v15
      v10.lastLitersPerHectar = v14
      v10.lastNitrogenProportion = 0
    elseif v10.isFertilizing and v10.nitrogenMap ~= nil then
      if not v10.isDoingMissionWork then
        if v5.workAreaParameters.sprayVehicle == nil then
          v13 = ExtendedSprayer.getFillTypeSourceVehicle(self)
        end
        v14 = v14:get()
        v13 = math.ceil(...)
        v14 = v14:get()
        if v12 ~= nil and v12.getCurrentNitrogenUsageLevelOffset ~= nil then
          v17 = v17:get()
          v15 = v12:getCurrentNitrogenUsageLevelOffset(...)
          -- if v15 then goto L144 end
        end
        local v20 = math.max(v13, v11)
        local v16, v17, v18, v19 = v16:getFertilizerUsage(v8, v9, v20, fillType, dt, v10.sprayAmountAutoMode, v10.nApplyAutoModeFruitType, v14, 0)
        v10.lastRegularUsage = v18
        v10.lastLitersPerHectar = v17
        v10.lastNitrogenProportion = v19
      else
        v10.lastRegularUsage = usage
        v10.lastLitersPerHectar = usage / dt * 10000 / v8 / self.speedLimit / 3600
        v10.lastNitrogenProportion = 0
      end
    end
    v12 = self:getIsAIActive()
    if v12 and usage == 0 then
    end
  end
  return usage
end
function ExtendedSprayer:processSprayerArea(superFunc, workArea, dt)
  if self.spec_sprayer.workAreaParameters.sprayFillLevel <= 0 then
    return superFunc(self, workArea, dt)
  end
  if not v5.isLiming and not v5.isFertilizing then
    v6 = superFunc(self, workArea, dt)
    return v6
  end
  local v6, activeSprayType, v8 = getWorldTranslation(workArea.start)
  local v9, v10, v11 = getWorldTranslation(workArea.width)
  local v12, v13, v14 = getWorldTranslation(workArea.height)
  if self.isServer then
    if v5.pHMap ~= nil then
      local v15, v16, v17, v18, v19, v20 = v15:updateSprayArea(v6, v8, v9, v11, v12, v14, usage.workAreaParameters.sprayType, v5.sprayAmountAutoMode, v5.sprayAmountManual)
      if 0 < v15 and 0 < v16 then
        if not v5.sprayAmountAutoMode then
          local v23 = v23:getTypeIndexAtWorldPos((v6 + v9 + v12) / 3, (v8 + v11 + v14) / 3)
          if 0 < v23 then
            v23 = v23:getOptimalPHValueForSoilTypeIndex(v23)
          end
        end
        v21:add(v16)
        v21:add(v17)
        v21:add(v18)
        v5.lastTouchedSoilTypeReal = v19
        if v5.lastTouchedSoilType == 0 then
          v5.lastTouchedSoilType = v19
        end
        v5.lastAreaChangeTime = g_time
      end
    end
    if v5.nitrogenMap ~= nil then
      if usage.workAreaParameters.sprayVehicle == nil then
        v16 = ExtendedSprayer.getFillTypeSourceVehicle(self)
      end
      if v15.getCurrentNitrogenLevelOffset ~= nil then
        v19 = v19:get()
        v17 = v15:getCurrentNitrogenLevelOffset(...)
      end
      local v18, v19, v20, v21, v22, v23, v24 = v18:updateSprayArea(v6, v8, v9, v11, v12, v14, usage.workAreaParameters.sprayType, usage.workAreaParameters.sprayType, v5.sprayAmountAutoMode, v5.sprayAmountManual, nil, v16, v5.nApplyAutoModeFruitRequirementDefaultIndex)
      if 0 < v18 then
        if not v5.sprayAmountAutoMode then
          if v19 ~= FruitType.UNKNOWN then
            -- cmp-jump LOP_JUMPXEQKN R20 aux=0x8000001b -> L226
          end
          local v27, v28, v29 = v27:getTargetLevelAtWorldPos(v25, v26, nil, nil, nil, nil, v5.nApplyAutoModeFruitRequirementDefaultIndex)
        end
        v25:add(v23)
        v25:add(v21)
        v25:add(v22)
        self:setSprayAmountAutoFruitTypeIndex(v19)
        if v20 ~= 0 then
          v5.lastTouchedSoilTypeReal = v20
          if v5.lastTouchedSoilType == 0 then
            v5.lastTouchedSoilType = v20
          end
        end
        v5.lastAreaChangeTime = g_time
      end
    end
    v17 = self:getIsPrecisionSprayingRequired()
    if v17 then
      v17, v18 = superFunc(self, workArea, dt)
      v17 = v17:getSprayTypeByIndex(usage.workAreaParameters.sprayType)
      if v17 ~= nil then
        FSDensityMapUtil.setGroundTypeLayerArea(v6, v8, v9, v11, v12, v14, v17.sprayGroundType)
      end
      if v5.isDoingMissionWork and 0 < v15 then
        v18:setMinimapRequiresUpdate(true)
      end
    end
    if v5.pHMap ~= nil then
      v17:postUpdateSprayArea(v6, v8, v9, v11, v12, v14, usage.workAreaParameters.sprayType, usage.workAreaParameters.sprayType, v5.sprayAmountAutoMode, v5.sprayAmountManual)
    end
    if v5.nitrogenMap ~= nil then
      v17:postUpdateSprayArea(v6, v8, v9, v11, v12, v14, usage.workAreaParameters.sprayType, usage.workAreaParameters.sprayType, v5.sprayAmountAutoMode, v5.sprayAmountManual)
    end
    return v15, v16
  end
  v17 = self:getIsPrecisionSprayingRequired()
  if v17 then
    v17, v18 = superFunc(self, workArea, dt)
    v17 = v17:getSprayTypeByIndex(usage.workAreaParameters.sprayType)
    if v17 ~= nil then
      FSDensityMapUtil.setGroundTypeLayerArea(v6, v8, v9, v11, v12, v14, v17.sprayGroundType)
    end
  end
  return v15, v16
end
function ExtendedSprayer:changeSeedIndex(superFunc, ...)
  superFunc(...)
  self.spec_extendedSprayer.lastGroundUpdateDistance = math.huge
end
function ExtendedSprayer.getSprayerDoubledAmountActive(v0, superFunc, fillType)
  return false, false
end
function ExtendedSprayer.updateSprayerEffects(v0, superFunc, fillType)
end
function ExtendedSprayer:preProcessExtUnderRootFertilizerArea(workArea, dt)
  if self.isServer then
    local v5, v6, activeSprayType = getWorldTranslation(workArea.start)
    local v8, v9, v10 = getWorldTranslation(workArea.width)
    local v11, v12, v13 = getWorldTranslation(workArea.height)
    if self.spec_extendedSprayer.nitrogenMap ~= nil then
      if self.spec_sprayer.workAreaParameters.sprayVehicle == nil then
        local v15 = ExtendedSprayer.getFillTypeSourceVehicle(self)
      end
      if self.spec_sowingMachine ~= nil then
      end
      if v14.getCurrentNitrogenLevelOffset ~= nil then
        local v19 = v19:get()
        local v17 = v14:getCurrentNitrogenLevelOffset(...)
      end
      local v17, v18, v19, v20, v21, v22 = v17:updateSprayArea(v5, activeSprayType, v8, v10, v11, v13, dt.workAreaParameters.sprayType, SprayType.FERTILIZER, usage.sprayAmountAutoMode, usage.sprayAmountManual, v15, v16)
      if 0 < v17 then
        if not usage.sprayAmountAutoMode then
          local v25, v26 = ExtendedSprayer.getFillTypeSourceVehicle(self)
          local v27 = v25:getFillUnitLastValidFillType(v26)
          if v27 == FillType.UNKNOWN then
            local v28 = v25:getFillUnitFirstSupportedFillType(v26)
          end
          local v28, v29, v30 = v28:getTargetLevelAtWorldPos(v23, v24, nil, v15, v27, v20, usage.nApplyAutoModeFruitRequirementDefaultIndex)
        end
        v23:add(v22)
        v23:add(v20)
        v23:add(v21)
        self:setSprayAmountAutoFruitTypeIndex(v15)
        if v19 ~= 0 then
          usage.lastTouchedSoilTypeReal = v19
          if usage.lastTouchedSoilType == 0 then
            usage.lastTouchedSoilType = v19
          end
        end
        usage.lastAreaChangeTime = g_time
      end
    end
  end
end
function ExtendedSprayer:postProcessExtUnderRootFertilizerArea(workArea, dt)
  if self.isServer then
    local v5, v6, activeSprayType = getWorldTranslation(workArea.start)
    local v8, v9, v10 = getWorldTranslation(workArea.width)
    local v11, v12, v13 = getWorldTranslation(workArea.height)
    local v14 = v14:getSprayTypeByIndex(SprayType.FERTILIZER)
    if v14 ~= nil then
      FSDensityMapUtil.setGroundTypeLayerArea(v5, activeSprayType, v8, v10, v11, v13, v14.sprayGroundType)
    end
    if usage.nitrogenMap ~= nil then
      v15:postUpdateSprayArea(v5, activeSprayType, v8, v10, v11, v13, dt.workAreaParameters.sprayType, SprayType.FERTILIZER, usage.sprayAmountAutoMode, usage.sprayAmountManual)
    end
  end
end
function ExtendedSprayer:onEndWorkAreaProcessing(dt, hasProcessed)
  if self.isServer and self.spec_sprayer.workAreaParameters.isActive then
    if self.spec_sprayer.workAreaParameters.sprayVehicle == nil then
      local v8 = self:getIsAIActive()
      -- if not v8 then goto L131 end
    end
    v8 = self:getIsTurnedOn()
    if v8 then
      local v9, v10, v11 = self:getPFStatisticInfo()
      if v9 ~= nil and v11 ~= nil then
        if activeSprayType == FillType.LIME then
          v9:updateStatistic(v11, "usedLime", v6)
          v9:updateStatistic(v11, "usedLimeRegular", dt.lastRegularUsage)
          return
        end
        if activeSprayType == FillType.FERTILIZER then
          v9:updateStatistic(v11, "usedMineralFertilizer", v6)
          v9:updateStatistic(v11, "usedMineralFertilizerRegular", v8)
          return
        end
        if activeSprayType == FillType.LIQUIDFERTILIZER then
          v9:updateStatistic(v11, "usedLiquidFertilizer", v6)
          v9:updateStatistic(v11, "usedLiquidFertilizerRegular", v8)
          return
        end
        if activeSprayType == FillType.MANURE then
          v9:updateStatistic(v11, "usedManure", v6)
          v9:updateStatistic(v11, "usedManureRegular", v8)
          return
        end
        if activeSprayType ~= FillType.LIQUIDMANURE then
          -- if v7 ~= FillType.DIGESTATE then goto L131 end
        end
        v9:updateStatistic(v11, "usedLiquidManure", v6)
        v9:updateStatistic(v11, "usedLiquidManureRegular", v8)
      end
    end
  end
end
function ExtendedSprayer:setSprayAmountAutoMode(state, noEventSend)
  if state == nil then
  end
  if not dt.sprayAmountAutoModeChangeAllowed then
  end
  dt.sprayAmountAutoMode = state
  ExtendedSprayer.updateActionEventState(self)
  ExtendedSprayer.updateActionEventAutoModeDefault(self)
  ExtendedSprayerAmountEvent.sendEvent(self, dt.sprayAmountAutoMode, dt.sprayAmountManual, noEventSend)
end
function ExtendedSprayer:setSprayAmountManualValue(value, noEventSend)
  local usage = MathUtil.clamp(value, self.spec_extendedSprayer.sprayAmountManualMin, self.spec_extendedSprayer.sprayAmountManualMax)
  self.spec_extendedSprayer.sprayAmountManual = usage
  ExtendedSprayer.updateActionEventState(self)
  ExtendedSprayerAmountEvent.sendEvent(self, self.spec_extendedSprayer.sprayAmountAutoMode, self.spec_extendedSprayer.sprayAmountManual, noEventSend)
end
function ExtendedSprayer:setSprayAmountAutoFruitTypeIndex(index)
  if index ~= self.spec_extendedSprayer.nApplyAutoModeFruitType then
    self.spec_extendedSprayer.nApplyAutoModeFruitType = index
    local dt = dt:getFruitTypeRequirementRequiresDefaultMode(index)
    self.spec_extendedSprayer.nApplyAutoModeFruitTypeRequiresDefaultMode = dt
    ExtendedSprayer.updateActionEventAutoModeDefault(self)
  end
end
function ExtendedSprayer:setSprayAmountDefaultFruitRequirementIndex(index, noEventSend)
  self.spec_extendedSprayer.nApplyAutoModeFruitRequirementDefaultIndex = index
  self.spec_extendedSprayer.lastGroundUpdateDistance = math.huge
  ExtendedSprayerDefaultFruitTypeEvent.sendEvent(self, index, noEventSend)
end
