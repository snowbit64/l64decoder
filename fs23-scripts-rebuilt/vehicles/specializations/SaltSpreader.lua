-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SaltSpreader = {}
function SaltSpreader.initSpecialization()
  v0:addWorkAreaType("saltSpreader", false)
  Vehicle.xmlSchema:setXMLSpecializationType("SaltSpreader")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.saltSpreader#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.saltSpreader#unloadInfoIndex", "Unload info index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.saltSpreader#usageWorkArea", "Width of this work area is used as multiplier for usage")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.saltSpreader#usage", "Salt usage in liter per second", 1)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.saltSpreader.effects")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function SaltSpreader.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
  end
  return v1
end
function SaltSpreader.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processSaltSpreaderArea", SaltSpreader.processSaltSpreaderArea)
end
function SaltSpreader.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", SaltSpreader.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", SaltSpreader.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", SaltSpreader.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreControlledActionsAllowed", SaltSpreader.getAreControlledActionsAllowed)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOn", SaltSpreader.getCanBeTurnedOn)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getTurnedOnNotAllowedWarning", SaltSpreader.getTurnedOnNotAllowedWarning)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getVariableWorkWidthUsage", SaltSpreader.getVariableWorkWidthUsage)
end
function SaltSpreader.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", SaltSpreader)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", SaltSpreader)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", SaltSpreader)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", SaltSpreader)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", SaltSpreader)
end
function SaltSpreader:onLoad(savegame)
  local v3 = v3:getValue("vehicle.saltSpreader#fillUnitIndex", 1)
  self.spec_saltSpreader.fillUnitIndex = v3
  v3 = v3:getValue("vehicle.saltSpreader#unloadInfoIndex", 1)
  self.spec_saltSpreader.unloadInfoIndex = v3
  v3 = v3:getValue("vehicle.saltSpreader#usageWorkArea")
  self.spec_saltSpreader.usageWorkArea = v3
  local v4 = v4:getValue("vehicle.saltSpreader#usage", 1)
  self.spec_saltSpreader.usage = v4 / 1000
  if self.isClient then
    v3 = v3:loadEffect(self.xmlFile, "vehicle.saltSpreader.effects", self.components, self, self.i3dMappings)
    self.spec_saltSpreader.effects = v3
  end
  v3 = v3:getText("info_firstFillTheTool")
  v2.fillToolWarning = v3
  v2.snowSystem = g_currentMission.snowSystem
  if not self.isServer then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", SaltSpreader)
  end
end
function SaltSpreader:onDelete()
  v2:deleteEffects(self.spec_saltSpreader.effects)
end
function SaltSpreader:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v5 = self:getIsTurnedOn()
  if v5 then
    local v6 = self:getFillUnitFillLevel(self.spec_saltSpreader.fillUnitIndex)
    if 0 < v6 then
      if self.spec_saltSpreader.usageWorkArea ~= nil then
        local v8 = self:getWorkAreaWidth(self.spec_saltSpreader.usageWorkArea)
      end
      local v9 = self:getFillVolumeUnloadInfo(v5.unloadInfoIndex)
      local v12 = self:getOwnerFarmId()
      local v15 = self:getFillUnitFillType(v5.fillUnitIndex)
      self:addFillUnitFillLevel(v12, v5.fillUnitIndex, -(v5.usage * dt * v7), v15, ToolType.UNDEFINED, v9)
      return
    end
    self:setIsTurnedOn(false)
  end
end
function SaltSpreader:onTurnedOn()
  if self.isClient then
    local v2 = self:getFillUnitFillType(self.spec_saltSpreader.fillUnitIndex)
    if v2 ~= FillType.UNKNOWN then
      v3:setFillType(self.spec_saltSpreader.effects, v2)
      v3:startEffects(self.spec_saltSpreader.effects)
    end
  end
end
function SaltSpreader:onTurnedOff()
  if self.isClient then
    v2:stopEffects(self.spec_saltSpreader.effects)
  end
end
function SaltSpreader:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    v2 = self:getIsTurnedOn()
  end
  return v2
end
function SaltSpreader:getDirtMultiplier(superFunc)
  local v2 = self:getIsTurnedOn()
  if v2 then
    local v3 = superFunc(self)
    local v4 = self:getWorkDirtMultiplier()
    return v3 + v4
  end
  v2 = superFunc(self)
  return v2
end
function SaltSpreader:getWearMultiplier(superFunc)
  local v2 = self:getIsTurnedOn()
  if v2 then
    local v3 = superFunc(self)
    local v4 = self:getWorkWearMultiplier()
    return v3 + v4
  end
  v2 = superFunc(self)
  return v2
end
function SaltSpreader:getAreControlledActionsAllowed(superFunc)
  local v3 = self:getFillUnitFillLevel(self.spec_saltSpreader.fillUnitIndex)
  if v3 <= 0 then
    return false, self.spec_saltSpreader.fillToolWarning
  end
  v3 = superFunc(self)
  return v3
end
function SaltSpreader:getCanBeTurnedOn(superFunc)
  local v3 = self:getFillUnitFillLevel(self.spec_saltSpreader.fillUnitIndex)
  if v3 <= 0 then
    return false
  end
  v3 = superFunc(self)
  return v3
end
function SaltSpreader:getTurnedOnNotAllowedWarning(superFunc)
  local v3 = self:getFillUnitFillLevel(self.spec_saltSpreader.fillUnitIndex)
  if v3 <= 0 then
    return self.spec_saltSpreader.fillToolWarning
  end
  v3 = superFunc(self)
  return v3
end
function SaltSpreader:getVariableWorkWidthUsage(superFunc)
  local v2 = superFunc(self)
  if v2 == nil then
    local v3 = self:getIsTurnedOn()
    if v3 then
      if self.spec_saltSpreader.usageWorkArea ~= nil then
        local v5 = self:getWorkAreaWidth(self.spec_saltSpreader.usageWorkArea)
      end
      return v3.usage * v4 * 1000 * 60
    end
    return 0
  end
  return v2
end
function SaltSpreader.getDefaultSpeedLimit()
  return 20
end
function SaltSpreader:processSaltSpreaderArea(workArea)
  if self.isServer then
    local v2, v3, v4 = getWorldTranslation(workArea.start)
    local v5, v6, v7 = getWorldTranslation(workArea.width)
    local v8, v9, v10 = getWorldTranslation(workArea.height)
    return v11:saltArea(v2, v4, v5, v7, v8, v10)
  end
  return 0, 0
end
