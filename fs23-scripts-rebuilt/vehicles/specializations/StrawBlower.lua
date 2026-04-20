-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StrawBlower = {}
function StrawBlower.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Trailer, v0)
  end
  return v1
end
function StrawBlower.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("StrawBlower")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.strawBlower.baleTrigger#node", "Bale trigger node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.strawBlower#fillUnitIndex", "Fill unit index", 1)
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.strawBlower.animationNodes")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.strawBlower.sounds", "start")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.strawBlower.sounds", "stop")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.strawBlower.sounds", "work")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function StrawBlower.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "strawBlowerBaleTriggerCallback", StrawBlower.strawBlowerBaleTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "onDeleteStrawBlowerObject", StrawBlower.onDeleteStrawBlowerObject)
end
function StrawBlower.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDrawFirstFillText", StrawBlower.getDrawFirstFillText)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowDynamicMountFillLevelInfo", StrawBlower.getAllowDynamicMountFillLevelInfo)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addFillUnitFillLevel", StrawBlower.addFillUnitFillLevel)
end
function StrawBlower.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", StrawBlower)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", StrawBlower)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", StrawBlower)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", StrawBlower)
  SpecializationUtil.registerEventListener(vehicleType, "onDischargeStateChanged", StrawBlower)
end
function StrawBlower:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.strawBlower.baleTrigger#index", "vehicle.strawBlower.baleTrigger#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.strawBlower.doorAnimation#name", "vehicle.foldable.foldingParts.foldingPart.animationName")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.strawBlower.balePickupTrigger", "vehicle.autoLoaderBales.trigger")
  self.spec_strawBlower.triggeredBales = {}
  if self.isServer then
    local v3 = v3:getValue("vehicle.strawBlower.baleTrigger#node", nil, self.components, self.i3dMappings)
    self.spec_strawBlower.triggerId = v3
    if self.spec_strawBlower.triggerId ~= nil then
      addTrigger(self.spec_strawBlower.triggerId, "strawBlowerBaleTriggerCallback", self)
    end
  end
  if self.isClient then
    v3 = v3:loadAnimations(self.xmlFile, "vehicle.strawBlower.animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v3
    v2.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.strawBlower.sounds", "start", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.start = v4
    v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.strawBlower.sounds", "stop", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.stop = v4
    v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.strawBlower.sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.work = v4
  end
  v3 = v3:getValue("vehicle.strawBlower#fillUnitIndex", 1)
  v2.fillUnitIndex = v3
  v3 = self:getFillUnitByIndex(v2.fillUnitIndex)
  v3.synchronizeFullFillLevel = true
  v3.needsSaving = false
  if savegame ~= nil and not savegame.resetVehicles then
    local v6 = self:getOwnerFarmId()
    self:addFillUnitFillLevel(v6, v2.fillUnitIndex, -math.huge, FillType.UNKNOWN, ToolType.UNDEFINED)
  end
  if not self.isServer then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", StrawBlower)
  end
end
function StrawBlower:onDelete()
  if self.spec_strawBlower.triggerId ~= nil then
    removeTrigger(self.spec_strawBlower.triggerId)
  end
  if v1.triggeredBales ~= nil then
    for v5, v6 in pairs(v1.triggeredBales) do
      local v7 = entityExists(v5.nodeId)
      if not v7 then
        continue
      end
      I3DUtil.wakeUpObject(v5.nodeId)
      v5.allowPickup = true
    end
  end
  v2:deleteSamples(v1.samples)
  v2:deleteAnimations(v1.animationNodes)
end
function StrawBlower:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_strawBlower.currentBale == nil then
    local v6 = self:getFillUnitSupportsToolType(self.spec_strawBlower.fillUnitIndex, ToolType.BALE)
    if v6 then
      v6 = next(self.spec_strawBlower.triggeredBales)
      if v6 ~= nil then
        local v10 = v6:getFillLevel()
        self:setFillUnitCapacity(...)
        local v9 = self:getOwnerFarmId()
        self:addFillUnitFillLevel(v9, self.spec_strawBlower.fillUnitIndex, -math.huge, FillType.UNKNOWN, ToolType.UNDEFINED)
        v9 = self:getOwnerFarmId()
        local v11 = v6:getFillLevel()
        local v12 = v6:getFillType()
        self:addFillUnitFillLevel(v9, self.spec_strawBlower.fillUnitIndex, v11, v12, ToolType.BALE)
        self.spec_strawBlower.currentBale = v6
      end
    end
  end
end
function StrawBlower:addFillUnitFillLevel(superFunc, farmId, fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData)
  if fillUnitIndex == self.spec_strawBlower.fillUnitIndex then
    local v13 = self:getFillUnitCapacity(fillUnitIndex)
    local v15 = self:getFillUnitFillLevel(fillUnitIndex)
    local v12 = math.max(v13, v15 + fillLevelDelta)
    self:setFillUnitCapacity(...)
  end
  return superFunc(self, farmId, fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData)
end
function StrawBlower:strawBlowerBaleTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if onEnter then
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x1 -> L134
    local v8 = v8:getNodeObject(otherActorId)
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L134
    local v9 = v8:isa(Bale)
    -- if not v9 then goto L134 end
    local v11 = self:getActiveFarm()
    v9 = v9:canFarmAccess(v11, v8)
    -- if not v9 then goto L134 end
    v9 = v8:getAllowPickup()
    -- if not v9 then goto L134 end
    local v12 = v8:getFillType()
    v9 = self:getFillUnitSupportsFillType(...)
    -- if not v9 then goto L134 end
    v11 = Utils.getNoNil(self.spec_strawBlower.triggeredBales[v8], 0)
    self.spec_strawBlower.triggeredBales[v8] = v11 + 1
    v8.allowPickup = false
    -- cmp-jump LOP_JUMPXEQKN R9 aux=0x80000011 -> L134
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L134
    v8:addDeleteListener(self, "onDeleteStrawBlowerObject")
    return
  end
  if onLeave and otherActorId ~= 0 then
    v8 = v8:getNodeObject(otherActorId)
    if v8 ~= nil and v7.triggeredBales[v8] ~= nil then
      if v7.triggeredBales[v8] == 1 then
        v7.triggeredBales[v8] = nil
        v8.allowPickup = true
        if v8 == v7.currentBale then
          v7.currentBale = nil
          v12 = self:getOwnerFarmId()
          local v15 = self:getFillUnitFillType(v7.fillUnitIndex)
          self:addFillUnitFillLevel(v12, v7.fillUnitIndex, -math.huge, v15, ToolType.UNDEFINED)
        end
        -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L134
        v8:removeDeleteListener(self)
        return
      end
      v7.triggeredBales[v8] = v9 - 1
    end
  end
end
function StrawBlower:onDeleteStrawBlowerObject(object)
  if self.spec_strawBlower.triggeredBales[object] ~= nil then
    self.spec_strawBlower.triggeredBales[object] = nil
    if object == self.spec_strawBlower.currentBale then
      self.spec_strawBlower.currentBale = nil
      local v5 = self:getOwnerFarmId()
      local v8 = self:getFillUnitFillType(self.spec_strawBlower.fillUnitIndex)
      self:addFillUnitFillLevel(v5, self.spec_strawBlower.fillUnitIndex, -math.huge, v8, ToolType.UNDEFINED)
    end
  end
end
function StrawBlower:getDrawFirstFillText(superFunc)
  local v3 = superFunc(self)
  if not v3 then
    local v4 = self:getFillUnitFillLevel(self.spec_strawBlower.fillUnitIndex)
    if v4 > 0 then
    end
  end
  return v3
end
function StrawBlower.getAllowDynamicMountFillLevelInfo(v0, v1)
  return false
end
function StrawBlower:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData, appliedDelta)
  if fillUnitIndex == self.spec_strawBlower.fillUnitIndex then
    local v8 = self:getFillUnitFillLevel(self.spec_strawBlower.fillUnitIndex)
    if self.isServer then
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L86
      if v8 <= 0.01 then
        if self.removeDynamicMountedObject ~= nil then
          self:removeDynamicMountedObject(self.spec_strawBlower.currentBale)
        end
        local v10 = v9:getOwnerFarmId()
        v9:delete()
        v7.currentBale = nil
        v7.triggeredBales[v9] = nil
        self:setFillUnitCapacity(v7.fillUnitIndex, 1)
        self:addFillUnitFillLevel(v10, v7.fillUnitIndex, -math.huge, FillType.UNKNOWN, ToolType.UNDEFINED)
        return
      end
      v10 = v9:getFillLevel()
      -- if v8 >= v10 then goto L86 end
      v10 = v9:getFillType()
      -- if v3 ~= v10 then goto L86 end
      v9:setFillLevel(v8)
      return
    end
    if v8 <= 0 then
      self:setFillUnitCapacity(v7.fillUnitIndex, 1)
    end
  end
end
function StrawBlower:onDischargeStateChanged(state)
  if self.isClient then
    if state ~= Dischargeable.DISCHARGE_STATE_OFF then
      v4:stopSample(self.spec_strawBlower.samples.work)
      v4:stopSample(self.spec_strawBlower.samples.stop)
      v4:playSample(self.spec_strawBlower.samples.start)
      v4:playSample(self.spec_strawBlower.samples.work, 0, self.spec_strawBlower.samples.start)
      v4:startAnimations(self.spec_strawBlower.animationNodes)
      return
    end
    v4:stopSample(v3.start)
    v4:stopSample(v3.work)
    v4:playSample(v3.stop)
    v4:stopAnimations(v2.animationNodes)
  end
end
