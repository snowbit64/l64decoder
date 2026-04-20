-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConveyorBelt = {}
function ConveyorBelt.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Dischargeable, v0)
end
function ConveyorBelt.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("ConveyorBelt")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.conveyorBelt.animationNodes")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.conveyorBelt.effects")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.conveyorBelt#dischargeNodeIndex", "Discharge node index", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.conveyorBelt#startPercentage", "Start unloading percentage", 0.9)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.conveyorBelt.offset(?)#movingToolNode", "Moving tool node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.conveyorBelt.offset(?).effect(?)#index", "Index of effect", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.conveyorBelt.offset(?).effect(?)#minOffset", "Min. offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.conveyorBelt.offset(?).effect(?)#maxOffset", "Max. offset", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.conveyorBelt.offset(?).effect(?)#inverted", "Is inverted", false)
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.conveyorBelt.sounds", "belt")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function ConveyorBelt.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getConveyorBeltFillLevel", ConveyorBelt.getConveyorBeltFillLevel)
  SpecializationUtil.registerFunction(vehicleType, "getConveyorBeltTargetObject", ConveyorBelt.getConveyorBeltTargetObject)
  SpecializationUtil.registerFunction(vehicleType, "getLoadTriggerMaxFillSpeed", ConveyorBelt.getLoadTriggerMaxFillSpeed)
end
function ConveyorBelt.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDischargeNodeEmptyFactor", ConveyorBelt.getDischargeNodeEmptyFactor)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischargeOnEmpty", ConveyorBelt.handleDischargeOnEmpty)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischarge", ConveyorBelt.handleDischarge)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsEnterable", ConveyorBelt.getIsEnterable)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitAllowsFillType", ConveyorBelt.getFillUnitAllowsFillType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitFreeCapacity", ConveyorBelt.getFillUnitFreeCapacity)
end
function ConveyorBelt.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", ConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", ConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", ConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", ConveyorBelt)
  SpecializationUtil.registerEventListener(vehicleType, "onMovingToolChanged", ConveyorBelt)
end
function ConveyorBelt:onLoad(savegame)
  if self.isClient then
    local v3 = v3:loadAnimations(self.xmlFile, "vehicle.conveyorBelt.animationNodes", self.components, self, self.i3dMappings)
    self.spec_conveyorBelt.animationNodes = v3
    self.spec_conveyorBelt.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.conveyorBelt.sounds", "belt", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_conveyorBelt.samples.belt = v4
  end
  v3 = v3:loadEffect(self.xmlFile, "vehicle.conveyorBelt.effects", self.components, self, self.i3dMappings)
  v2.effects = v3
  v2.currentDelay = 0
  table.sort(v2.effects, function(self, savegame)
    if self.startDelay >= savegame.startDelay then
    end
    return true
  end)
  for v6, v7 in pairs(v2.effects) do
    if v7.planeFadeTime ~= nil then
      v2.currentDelay = v2.currentDelay + v7.planeFadeTime
    end
    if not (v7.setScrollUpdate ~= nil) then
      continue
    end
    v7:setScrollUpdate(false)
  end
  v2.maxDelay = v2.currentDelay
  v2.morphStartPos = 0
  v2.morphEndPos = 0
  v2.isEffectDirty = true
  v2.emptyFactor = 1
  v2.scrollUpdateTime = 0
  v2.lastScrollUpdate = false
  v3 = v3:getValue("vehicle.conveyorBelt#dischargeNodeIndex", 1)
  v2.dischargeNodeIndex = v3
  self:setCurrentDischargeNodeIndex(v2.dischargeNodeIndex)
  v3 = self:getDischargeNodeByIndex(v2.dischargeNodeIndex)
  v4 = self:getFillUnitCapacity(v3.fillUnitIndex)
  v2.fillUnitIndex = v3.fillUnitIndex
  v6 = v6:getValue("vehicle.conveyorBelt#startPercentage", 0.9)
  v2.startFillLevel = v4 * v6
  while true do
    v6 = string.format("vehicle.conveyorBelt.offset(%d)", v5)
    v7 = v7:hasProperty(v6)
    if not v7 then
      break
    end
    v7 = v7:getValue(v6 .. "#movingToolNode", nil, self.components, self.i3dMappings)
    if v7 ~= nil then
      if v2.offsets == nil then
        v2.offsets = {}
      end
      while true do
        v10 = string.format(v6 .. ".effect(%d)", v9)
        v11 = v11:hasProperty(v10)
        if not v11 then
          break
        end
        v11 = v11:getValue(v10 .. "#index", 0)
        if v2.effects[v11] ~= nil then
          -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L286
          v15 = v15:getValue(v10 .. "#minOffset", 0)
          v15 = v15:getValue(v10 .. "#maxOffset", 1)
          v14 = v14:getValue(v10 .. "#inverted", false)
          table.insert(v8.effects, {effect = v2.effects[v11], minValue = v15 * 1000, maxValue = v15 * 1000, inverted = v14})
        else
          Logging.xmlWarning(self.xmlFile, "Effect index '%d' not found at '%s'!", v11, v10)
        end
      end
      table.insert(v2.offsets, v8)
    else
      Logging.xmlWarning(self.xmlFile, "Missing movingToolNode for conveyor offset '%s'!", v6)
    end
  end
end
function ConveyorBelt:onPostLoad(savegame)
  if self.spec_conveyorBelt.offsets ~= nil then
    if self.getMovingToolByNode ~= nil then
      self.spec_conveyorBelt.movingToolToOffset = {}
      -- TODO: structure LOP_FORNPREP (pc 19, target 64)
      local v7 = self:getMovingToolByNode(self.spec_conveyorBelt.offsets[#self.spec_conveyorBelt.offsets].movingToolNode)
      if v7 ~= nil then
        self.spec_conveyorBelt.offsets[#self.spec_conveyorBelt.offsets].movingTool = v7
        self.spec_conveyorBelt.movingToolToOffset[v7] = self.spec_conveyorBelt.offsets[#self.spec_conveyorBelt.offsets]
        ConveyorBelt.onMovingToolChanged(self, v7, 0, 0)
      else
        local v11 = getName(self.spec_conveyorBelt.offsets[#self.spec_conveyorBelt.offsets].movingToolNode)
        Logging.xmlWarning(self.xmlFile, "No movingTool node '%s' defined for conveyor offset '%d'!", v11, #self.spec_conveyorBelt.offsets)
        table.remove(self.spec_conveyorBelt.offsets, #self.spec_conveyorBelt.offsets)
      end
      -- TODO: structure LOP_FORNLOOP (pc 63, target 20)
      -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000012 -> L85
      v2.offsets = nil
      v2.movingToolToOffset = nil
      return
    end
    Logging.xmlError(self.xmlFile, "'Cylindered' specialization is required to use conveyorBelt offsets!")
    v2.offsets = nil
  end
end
function ConveyorBelt:onDelete()
  v2:deleteEffects(self.spec_conveyorBelt.effects)
  v2:deleteAnimations(self.spec_conveyorBelt.animationNodes)
  v2:deleteSamples(self.spec_conveyorBelt.samples)
end
function ConveyorBelt:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if 0 >= self.spec_conveyorBelt.scrollUpdateTime then
  end
  if true ~= v5.lastScrollUpdate then
    if self.isClient then
      if true then
        v7:startAnimations(v5.animationNodes)
        v7:playSample(v5.samples.belt)
      else
        v7:stopAnimations(v5.animationNodes)
        v7:stopSample(v5.samples.belt)
      end
      for v10, v11 in pairs(v5.effects) do
        if not (v11.setScrollUpdate ~= nil) then
          continue
        end
        v11:setScrollUpdate(v6)
      end
    end
    v5.lastScrollUpdate = v6
  end
  v7 = math.max(v5.scrollUpdateTime - dt, 0)
  v5.scrollUpdateTime = v7
  v8 = self:getDischargeState()
  if v8 == Dischargeable.DISCHARGE_STATE_OFF then
  end
  if true then
    v8 = self:getFillUnitFillLevel(v5.fillUnitIndex)
    if 0.0001 < v8 then
      v10 = MathUtil.clamp(v5.morphStartPos + dt / v5.currentDelay, 0, 1)
      v5.morphStartPos = v10
      v10 = MathUtil.clamp(v5.morphEndPos + dt / v5.currentDelay, 0, 1)
      v5.morphEndPos = v10
      v11 = self:getFillUnitCapacity(v5.fillUnitIndex)
      v5.emptyFactor = 1
      if v8 / v11 < v5.morphEndPos - v5.morphStartPos then
        local v12 = MathUtil.clamp(v8 / v11 / (v5.morphEndPos - v5.morphStartPos), 0, 1)
        v5.emptyFactor = v12
      else
        v5.offset = v8 / v11 - v5.morphEndPos - v5.morphStartPos
        local v13 = MathUtil.clamp(v5.morphStartPos - (v8 / v11 - v5.morphEndPos - v5.morphStartPos) / (1 - v5.morphStartPos) * v5.currentDelay * dt, 0, 1)
        v5.morphStartPos = v13
      end
      v5.isEffectDirty = true
      v5.scrollUpdateTime = dt * 3
    end
  end
  if v6 then
    self:raiseActive()
  end
  if self.isClient and v5.isEffectDirty then
    for v11, v12 in pairs(v5.effects) do
      if not (v12.setMorphPosition ~= nil) then
        continue
      end
      local v17 = MathUtil.clamp(v12.offset / v12.planeFadeTime + (v5.morphStartPos - v12.startDelay / v5.currentDelay) / ((v12.startDelay + v12.planeFadeTime - v12.offset) / v5.currentDelay - v12.startDelay / v5.currentDelay) * (1 - v12.offset / v12.planeFadeTime), v12.offset / v12.planeFadeTime, 1)
      local v19 = MathUtil.clamp(v12.offset / v12.planeFadeTime + (v5.morphEndPos - v12.startDelay / v5.currentDelay) / ((v12.startDelay + v12.planeFadeTime - v12.offset) / v5.currentDelay - v12.startDelay / v5.currentDelay) * (1 - v12.offset / v12.planeFadeTime), v12.offset / v12.planeFadeTime, 1)
      v12:setMorphPosition(v17, v19)
    end
    v5.isEffectDirty = false
  end
end
function ConveyorBelt:getConveyorBeltFillLevel()
  local v2 = self:getFillUnitFillLevel(self.spec_conveyorBelt.fillUnitIndex)
  if self.getCurrentDischargeNode ~= nil then
    local currentDischargeNode = self:getCurrentDischargeNode()
    if currentDischargeNode.dischargeHitObject ~= nil and currentDischargeNode.dischargeHitObject.getConveyorBeltFillLevel ~= nil then
      local v5 = currentDischargeNode.dischargeHitObject:getConveyorBeltFillLevel()
    end
  end
  return v2
end
function ConveyorBelt:getConveyorBeltTargetObject()
  if self.getCurrentDischargeNode ~= nil then
    local currentDischargeNode = self:getCurrentDischargeNode()
    if currentDischargeNode.dischargeHitObject ~= nil then
      if currentDischargeNode.dischargeHitObject.getConveyorBeltTargetObject ~= nil then
        return currentDischargeNode.dischargeHitObject:getConveyorBeltTargetObject()
      end
      return v2, v3
    end
  end
  return nil
end
function ConveyorBelt:getLoadTriggerMaxFillSpeed()
  if self.getCurrentDischargeNode ~= nil then
    local currentDischargeNode = self:getCurrentDischargeNode()
    if currentDischargeNode.dischargeHitObject ~= nil and currentDischargeNode.dischargeHitObject.getLoadTriggerMaxFillSpeed ~= nil then
      local v5 = currentDischargeNode.dischargeHitObject:getLoadTriggerMaxFillSpeed()
      local v4 = math.min(v5, currentDischargeNode.emptySpeed)
    end
  end
  return v1
end
function ConveyorBelt:getDischargeNodeEmptyFactor(superFunc, dischargeNode)
  local parentFactor = superFunc(self, dischargeNode)
  if self.spec_conveyorBelt.dischargeNodeIndex == dischargeNode.index then
    if self.spec_conveyorBelt.morphEndPos == 1 then
      return self.spec_conveyorBelt.emptyFactor
    end
    return 0
  end
  return parentFactor
end
function ConveyorBelt:handleDischargeOnEmpty(superFunc, dischargeNode)
  if dischargeNode.index ~= self.spec_conveyorBelt.dischargeNodeIndex then
    superFunc(self, dischargeNode)
  end
end
function ConveyorBelt:handleDischarge(superFunc, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
  if dischargeNode.index ~= self.spec_conveyorBelt.dischargeNodeIndex then
    superFunc(self, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
  end
end
function ConveyorBelt:getIsEnterable(superFunc)
  if self.getAttacherVehicle ~= nil then
    local v3 = self:getAttacherVehicle()
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L13
  end
  return superFunc(self)
end
function ConveyorBelt.getHasConveyorBeltLoop(rootVehicle, vehicle, fillUnitIndex)
  if vehicle.getCurrentDischargeNode ~= nil then
    local currentDischargeNode = vehicle:getCurrentDischargeNode()
    if currentDischargeNode.fillUnitIndex == fillUnitIndex and currentDischargeNode.dischargeHitObject ~= nil and currentDischargeNode.dischargeHitObject.spec_conveyorBelt ~= nil and currentDischargeNode.dischargeHitObjectUnitIndex ~= nil then
      if currentDischargeNode.dischargeHitObject == rootVehicle then
        return true
      end
      return ConveyorBelt.getHasConveyorBeltLoop(rootVehicle, v4, v5)
    end
  end
  return false
end
function ConveyorBelt:getFillUnitAllowsFillType(superFunc, fillUnitIndex, fillType)
  local v4 = superFunc(self, fillUnitIndex, fillType)
  if not v4 then
    return false
  end
  v4 = ConveyorBelt.getHasConveyorBeltLoop(self, self, fillUnitIndex)
  if not v4 and self.getCurrentDischargeNode ~= nil then
    v4 = self:getCurrentDischargeNode()
    if v4.fillUnitIndex == fillUnitIndex and v4.dischargeHitObject ~= nil and v4.dischargeHitObject.getFillUnitAllowsFillType ~= nil and v4.dischargeHitObjectUnitIndex ~= nil then
      if v4.fillTypeConverter ~= nil and v4.fillTypeConverter[fillType] ~= nil then
        local v8 = v4.dischargeHitObject:getFillUnitAllowsFillType(v4.dischargeHitObjectUnitIndex, v4.fillTypeConverter[fillType].targetFillTypeIndex)
        if v8 then
          return true
        end
      end
      return v5:getFillUnitAllowsFillType(v6, fillType)
    end
  end
  return true
end
function ConveyorBelt:getFillUnitFreeCapacity(superFunc, fillUnitIndex, fillTypeIndex, farmId)
  local freeCapacity = superFunc(self, fillUnitIndex, fillTypeIndex, farmId)
  local v6 = ConveyorBelt.getHasConveyorBeltLoop(self, self, fillUnitIndex)
  if not v6 and self.getCurrentDischargeNode ~= nil then
    v6 = self:getCurrentDischargeNode()
    if v6.fillUnitIndex == fillUnitIndex and v6.dischargeHitObject ~= nil and v6.dischargeHitObject.getFillUnitFreeCapacity ~= nil and v6.dischargeHitObjectUnitIndex ~= nil then
      local v10 = v6.dischargeHitObject:getFillUnitFreeCapacity(v6.dischargeHitObjectUnitIndex, fillTypeIndex, farmId)
      return freeCapacity + v10
    end
  end
  return freeCapacity
end
function ConveyorBelt:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillType, toolType, fillPositionData, appliedDelta)
  if self.spec_conveyorBelt.fillUnitIndex == fillUnitIndex then
    local fillLevel = self:getFillUnitFillLevel(fillUnitIndex)
    if 0 < fillLevelDelta then
      self.spec_conveyorBelt.morphStartPos = 0
      local v12 = self:getFillUnitCapacity(fillUnitIndex)
      local v9 = math.max(self.spec_conveyorBelt.morphEndPos, fillLevel / v12)
      self.spec_conveyorBelt.morphEndPos = v9
      self.spec_conveyorBelt.isEffectDirty = true
    end
    if fillLevelDelta ~= 0 then
      v7.scrollUpdateTime = 100
    end
    if fillLevel == 0 then
      v9:stopEffects(v7.effects)
      v7.morphStartPos = 0
      v7.morphEndPos = 0
      v7.isEffectDirty = true
      return
    end
    v9:setFillType(v7.effects, fillType)
    v9:startEffects(v7.effects)
  end
end
function ConveyorBelt:onMovingToolChanged(movingTool, speed, dt)
  if self.spec_conveyorBelt.offsets ~= nil and self.spec_conveyorBelt.movingToolToOffset[movingTool] ~= nil then
    local state = Cylindered.getMovingToolState(self, movingTool)
    if state ~= self.spec_conveyorBelt.movingToolToOffset[movingTool].lastState then
      for v11, v12 in pairs(self.spec_conveyorBelt.movingToolToOffset[movingTool].effects) do
        if v12.inverted then
        end
        local v16 = MathUtil.lerp(v12.minValue, v12.maxValue, v13)
        v14:setOffset(...)
        v4.isEffectDirty = true
      end
      if v7 then
        v4.currentDelay = 0
        for v11, v12 in pairs(v4.effects) do
          if not (v12.planeFadeTime ~= nil) then
            continue
          end
          v4.currentDelay = v4.currentDelay + v12.planeFadeTime - v12.offset
        end
      end
      v5.lastState = state
    end
  end
end
function ConveyorBelt:updateDebugValues(values)
  table.insert(values, {name = "offset", value = self.spec_conveyorBelt.offset})
  table.insert(values, {name = "morphStartPos", value = self.spec_conveyorBelt.morphStartPos})
  table.insert(values, {name = "morphEndPos", value = self.spec_conveyorBelt.morphEndPos})
end
