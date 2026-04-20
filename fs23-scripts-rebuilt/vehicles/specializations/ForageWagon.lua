-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ForageWagon = {}
function ForageWagon.initSpecialization()
  v0:addWorkAreaType("forageWagon", false)
  Vehicle.xmlSchema:setXMLSpecializationType("ForageWagon")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.forageWagon#workAreaIndex", "Work area index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.forageWagon#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.forageWagon#loadInfoIndex", "Load info index", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.forageWagon#maxPickupLitersPerSecond", "Max. pickup liters per second", 500)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.forageWagon.additives#fillUnitIndex", "Additives fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.forageWagon.additives#usage", "Usage per picked up liter", 0.0000275)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.forageWagon.additives#fillTypes", "Fill types to apply additives", "GRASS_WINDROW")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.forageWagon.startFillEffect#fillStartDelay", "if defined the filling of the fill unit will be delayed until this time has passed", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.forageWagon.startFillEffect#fillStartFadeOff", "Fade out fill level for start fill effect (fillLevel 0: density 1 | fillLevel at fillStartFadeOff: density 0)", 0)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.forageWagon.fillVolume#loadScrollSpeed", "Scroll speed while loading", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.forageWagon.fillVolume#dischargeScrollSpeed", "Scroll speed while unloading", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, SpeedRotatingParts.SPEED_ROTATING_PART_XML_KEY .. "#rotateOnlyIfFillLevelIncreased", "Rotate only if fill level increased", false)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.forageWagon.fillEffect")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.forageWagon.startFillEffect")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function ForageWagon.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(Pickup, v0)
      if v1 then
        v1 = SpecializationUtil.hasSpecialization(WorkArea, v0)
      end
    end
  end
  return v1
end
function ForageWagon.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "processForageWagonArea", ForageWagon.processForageWagonArea)
  SpecializationUtil.registerFunction(vehicleType, "setFillEffectActive", ForageWagon.setFillEffectActive)
  SpecializationUtil.registerFunction(vehicleType, "fillForageWagon", ForageWagon.fillForageWagon)
end
function ForageWagon.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "loadSpeedRotatingPartFromXML", ForageWagon.loadSpeedRotatingPartFromXML)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", ForageWagon.getIsWorkAreaActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", ForageWagon.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getConsumingLoad", ForageWagon.getConsumingLoad)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsSpeedRotatingPartActive", ForageWagon.getIsSpeedRotatingPartActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillVolumeUVScrollSpeed", ForageWagon.getFillVolumeUVScrollSpeed)
end
function ForageWagon.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onStartWorkAreaProcessing", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", ForageWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", ForageWagon)
end
function ForageWagon:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.forageWagon#turnedOnTipScrollerSpeedFactor")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode#type", "vehicle.turnOnVehicle.rotationNodes.rotationNode", "forageWagon")
  self.spec_forageWagon.isFilling = false
  self.spec_forageWagon.isFillingSent = false
  self.spec_forageWagon.lastFillType = FillType.UNKNOWN
  self.spec_forageWagon.lastFillTypeSent = FillType.UNKNOWN
  self.spec_forageWagon.fillTimer = 0
  local v3 = v3:getValue("vehicle.forageWagon#workAreaIndex", 1)
  self.spec_forageWagon.workAreaIndex = v3
  v3 = v3:getValue("vehicle.forageWagon#fillUnitIndex", 1)
  self.spec_forageWagon.fillUnitIndex = v3
  v3 = v3:getValue("vehicle.forageWagon#loadInfoIndex", 1)
  self.spec_forageWagon.loadInfoIndex = v3
  self.spec_forageWagon.additives = {}
  local v4 = v4:getValue("vehicle.forageWagon.additives#fillUnitIndex")
  self.spec_forageWagon.additives.fillUnitIndex = v4
  local v5 = self:getFillUnitByIndex(self.spec_forageWagon.additives.fillUnitIndex)
  if v5 == nil then
  end
  v3.available = true
  v4 = v4:getValue("vehicle.forageWagon.additives#usage", 0.0000275)
  v2.additives.usage = v4
  v3 = v3:getValue("vehicle.forageWagon.additives#fillTypes", "GRASS_WINDROW")
  local v12 = v12:getFilename()
  v5 = v5:getFillTypesByNames(v3, "Warning: '" .. v12 .. "' has invalid fillType '%s'.")
  v2.additives.fillTypes = v5
  v4 = v4:getValue("vehicle.forageWagon.fillVolume#loadScrollSpeed", "0 0 0", true)
  v2.loadUVScrollSpeed = v4
  v4 = v4:getValue("vehicle.forageWagon.fillVolume#dischargeScrollSpeed", "0 0 0", true)
  v2.dischargeUVScrollSpeed = v4
  v4 = v4:getValue("vehicle.forageWagon#maxPickupLitersPerSecond", 500)
  v2.maxPickupLitersPerSecond = v4
  if self.isClient then
    v4 = v4:loadEffect(self.xmlFile, "vehicle.forageWagon.fillEffect", self.components, self, self.i3dMappings)
    v2.fillEffects = v4
    v4 = v4:loadEffect(self.xmlFile, "vehicle.forageWagon.startFillEffect", self.components, self, self.i3dMappings)
    v2.startFillEffect = v4
  end
  v5 = v5:getValue("vehicle.forageWagon.startFillEffect#fillStartDelay", 0)
  v2.fillStartEffectDelay = v5 * 0.001
  v2.fillStartEffectTimer = 0
  v4 = v4:getValue("vehicle.forageWagon.startFillEffect#fillStartFadeOff", 0)
  v2.fillStartEffectFadeOff = v4
  v2.workAreaParameters = {forcedFillType = FillType.UNKNOWN, lastPickupLiters = 0, litersToFill = 0}
  v4 = ValueBuffer.new(750)
  v2.pickUpLitersBuffer = v4
  if v2.startFillEffect ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R4 aux=0x80000047 -> L252
  end
  SpecializationUtil.removeEventListener(self, "onFillUnitFillLevelChanged", ForageWagon)
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
end
function ForageWagon:onDelete()
  v2:deleteEffects(self.spec_forageWagon.fillEffects)
  v2:deleteEffects(self.spec_forageWagon.startFillEffect)
end
function ForageWagon:onReadStream(streamId, connection)
  local v4 = streamReadBool(streamId)
  self.spec_forageWagon.isFilling = v4
  v4 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  self.spec_forageWagon.lastFillType = v4
  self:setFillEffectActive(self.spec_forageWagon.isFilling)
end
function ForageWagon:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_forageWagon.isFillingSent)
  streamWriteUIntN(streamId, self.spec_forageWagon.lastFillType, FillTypeManager.SEND_NUM_BITS)
end
function ForageWagon:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      local v5 = streamReadBool(streamId)
      self.spec_forageWagon.isFilling = v5
      v5 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
      self.spec_forageWagon.lastFillType = v5
      self:setFillEffectActive(self.spec_forageWagon.isFilling)
    end
  end
end
function ForageWagon:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_forageWagon.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      streamWriteBool(streamId, v4.isFillingSent)
      streamWriteUIntN(streamId, v4.lastFillType, FillTypeManager.SEND_NUM_BITS)
    end
  end
end
function ForageWagon:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    if 0 < self.spec_forageWagon.fillTimer then
      self.spec_forageWagon.fillTimer = self.spec_forageWagon.fillTimer - dt
    end
    v5.isFilling = v6
    if v5.isFilling ~= v5.isFillingSent then
      self:raiseDirtyFlags(v5.dirtyFlag)
      v5.isFillingSent = v5.isFilling
      self:setFillEffectActive(v5.isFilling)
    end
    v7:add(v5.workAreaParameters.lastPickupLiters)
  end
end
function ForageWagon:processForageWagonArea(workArea)
  local v3, v4, v5, v6, v7, v8 = DensityMapHeightUtil.getLineByArea(workArea.start, workArea.width, workArea.height)
  if self.spec_forageWagon.workAreaParameters.forcedFillType ~= FillType.UNKNOWN then
    local v10 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, self.spec_forageWagon.workAreaParameters.forcedFillType, v3, v4, v5, v6, v7, v8, 0.5, nil, nil, false, nil)
    if self.spec_forageWagon.workAreaParameters.forcedFillType == FillType.GRASS_WINDROW then
      v10 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, FillType.DRYGRASS_WINDROW, v3, v4, v5, v6, v7, v8, 0.5, nil, nil, false, nil)
      -- goto L146  (LOP_JUMP +73)
    end
    -- if v2.workAreaParameters.forcedFillType ~= FillType.DRYGRASS_WINDROW then goto L146 end
    v10 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, FillType.GRASS_WINDROW, v3, v4, v5, v6, v7, v8, 0.5, nil, nil, false, nil)
  else
    v10 = self:getFillUnitSupportedFillTypes(self.spec_forageWagon.fillUnitIndex)
    if v10 ~= nil then
      for v14, v15 in pairs(v10) do
        if not v15 then
          continue
        end
        local v16 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, v14, v3, v4, v5, v6, v7, v8, 0.5, nil, nil, false, nil)
        if not (0 < -v16) then
          continue
        end
        v2.workAreaParameters.forcedFillType = v14
        break
      end
    end
  end
  if self.isServer and v2.additives.available then
    -- TODO: structure LOP_FORNPREP (pc 162, target 177)
    if v2.workAreaParameters.forcedFillType == v2.additives.fillTypes[1] then
    else
      -- TODO: structure LOP_FORNLOOP (pc 176, target 163)
    end
    if v10 then
      v11 = self:getFillUnitFillLevel(v2.additives.fillUnitIndex)
      if 0 < v11 and 0 < v2.additives.usage * v9 then
        v13 = math.min(v11 / v2.additives.usage * v9, 1)
        v16 = self:getOwnerFarmId()
        local v19 = self:getFillUnitFillType(v2.additives.fillUnitIndex)
        self:addFillUnitFillLevel(v16, v2.additives.fillUnitIndex, -(v2.additives.usage * v9), v19, ToolType.UNDEFINED)
      end
    end
  end
  workArea.lastPickUpLiters = v9
  if 0 >= v9 then
  end
  workArea.pickupParticlesActive = true
  v2.workAreaParameters.lastPickupLiters = v2.workAreaParameters.lastPickupLiters + v9
  v2.workAreaParameters.litersToFill = v2.workAreaParameters.litersToFill + v9
  if v2.workAreaParameters.forcedFillType ~= FillType.UNKNOWN then
    v2.lastFillType = v2.workAreaParameters.forcedFillType
    if v2.lastFillType ~= v2.lastFillTypeSent then
      v2.lastFillTypeSent = v2.lastFillType
      self:raiseDirtyFlags(v2.dirtyFlag)
    end
  end
  if self.movingDirection == 1 then
    v12 = MathUtil.vector3Length(v3 - v6, v4 - v7, v5 - v8)
  end
  return v10, v11
end
function ForageWagon:setFillEffectActive(isActive)
  if isActive then
    v3:setFillType(self.spec_forageWagon.fillEffects, self.spec_forageWagon.lastFillType)
    v3:setFillType(self.spec_forageWagon.startFillEffect, self.spec_forageWagon.lastFillType)
    v3:startEffects(self.spec_forageWagon.fillEffects)
    v3:startEffects(self.spec_forageWagon.startFillEffect)
    return
  end
  v3:stopEffects(v2.fillEffects)
  v3:stopEffects(v2.startFillEffect)
end
function ForageWagon:fillForageWagon()
  local v2 = self:getFillVolumeLoadInfo(self.spec_forageWagon.loadInfoIndex)
  local v5 = self:getOwnerFarmId()
  local v3 = self:addFillUnitFillLevel(v5, self.spec_forageWagon.fillUnitIndex, self.spec_forageWagon.workAreaParameters.litersToFill, self.spec_forageWagon.lastFillType, ToolType.UNDEFINED, v2)
  if v3 + 0.01 < self.spec_forageWagon.workAreaParameters.litersToFill then
    self:setIsTurnedOn(false)
    self:setPickupState(false)
  end
  v1.workAreaParameters.litersToFill = v1.workAreaParameters.litersToFill - v3
  if v1.workAreaParameters.litersToFill < 0.01 then
    v1.workAreaParameters.litersToFill = 0
  end
end
function ForageWagon.loadSpeedRotatingPartFromXML(v0, v1, v2, v3, v4)
  local v5 = v1(v0, v2, v3, v4)
  if not v5 then
    return false
  end
  v5 = v3:getValue(v4 .. "#rotateOnlyIfFillLevelIncreased", false)
  v2.rotateOnlyIfFillLevelIncreased = v5
  return true
end
function ForageWagon:getIsSpeedRotatingPartActive(superFunc, speedRotatingPart)
  if speedRotatingPart.rotateOnlyIfFillLevelIncreased ~= nil and speedRotatingPart.rotateOnlyIfFillLevelIncreased and not self.spec_forageWagon.isFilling then
    return false
  end
  return superFunc(self, speedRotatingPart)
end
function ForageWagon:getFillVolumeUVScrollSpeed(superFunc, fillVolumeIndex)
  if self.spec_forageWagon.isFilling then
    return self.spec_forageWagon.loadUVScrollSpeed[1], self.spec_forageWagon.loadUVScrollSpeed[2], self.spec_forageWagon.loadUVScrollSpeed[3]
  end
  local v4 = self:getDischargeState()
  if v4 ~= Dischargeable.DISCHARGE_STATE_OFF then
    return v3.dischargeUVScrollSpeed[1], v3.dischargeUVScrollSpeed[2], v3.dischargeUVScrollSpeed[3]
  end
  v4 = superFunc(self, fillVolumeIndex)
  return v4
end
function ForageWagon:getIsWorkAreaActive(superFunc, workArea)
  if self.spec_workArea.workAreas[self.spec_forageWagon.workAreaIndex] ~= nil and workArea == self.spec_workArea.workAreas[self.spec_forageWagon.workAreaIndex] then
    local v5 = self:getIsTurnedOn()
    if v5 then
      v5 = self:allowPickingUp()
      -- if v5 then goto L23 end
    end
    return false
  end
  v5 = superFunc(self, workArea)
  return v5
end
function ForageWagon:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    v2 = self:getIsTurnedOn()
    if v2 then
      v2 = self:getIsLowered()
    end
  end
  return v2
end
function ForageWagon:getConsumingLoad(superFunc)
  local v2, v3 = superFunc(self)
  local v6 = v6:get(1000)
  return v2 + v6 / self.spec_forageWagon.maxPickupLitersPerSecond, v3 + 1
end
function ForageWagon:onStartWorkAreaProcessing(dt)
  self.spec_forageWagon.workAreaParameters.forcedFillType = FillType.UNKNOWN
  local v3 = self:getFillUnitFillLevel(self.spec_forageWagon.fillUnitIndex)
  local v4 = self:getFillTypeChangeThreshold(self.spec_forageWagon.fillUnitIndex)
  if v4 < v3 then
    local v5 = self:getFillUnitFillType(self.spec_forageWagon.fillUnitIndex)
    self.spec_forageWagon.workAreaParameters.forcedFillType = v5
  end
  if v3 == 0 and 0 < v2.fillStartEffectDelay and v2.fillStartEffectTimer <= 0 then
    v2.fillStartEffectTimer = v2.fillStartEffectDelay
  end
  v2.workAreaParameters.lastPickupLiters = 0
end
function ForageWagon:onEndWorkAreaProcessing(dt, hasProcessed)
  if self.isServer and 0 < self.spec_forageWagon.workAreaParameters.lastPickupLiters then
    if 0 < self.spec_forageWagon.fillStartEffectTimer then
      self.spec_forageWagon.fillStartEffectTimer = self.spec_forageWagon.fillStartEffectTimer - dt
      if 0 < self.spec_forageWagon.fillStartEffectTimer then
      end
    end
    if v4 then
      self:fillForageWagon()
    end
    v3.fillTimer = 500
  end
end
function ForageWagon:onTurnedOff()
  if self.isClient then
    self.spec_forageWagon.fillTimer = 0
    self:setFillEffectActive(false)
  end
end
function ForageWagon:onDeactivate()
  if self.isClient then
    self.spec_forageWagon.fillTimer = 0
    self:setFillEffectActive(false)
  end
end
function ForageWagon:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData, appliedDelta)
  if self.isClient then
    if 0 < self.spec_forageWagon.fillStartEffectFadeOff then
      local v12 = self:getFillUnitFillLevel(self.spec_forageWagon.fillUnitIndex)
      local v10 = math.min(v12 / self.spec_forageWagon.fillStartEffectFadeOff, 1)
    end
    v9:setDensity(v7.startFillEffect, v8)
  end
end
function ForageWagon.getDefaultSpeedLimit()
  return 20
end
