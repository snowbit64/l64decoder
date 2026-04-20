-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Shovel = {SHOVEL_NODE_XML_KEY = "vehicle.shovel.shovelNode(?)"}
function Shovel.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(FillVolume, v0)
    if v1 then
      v1 = SpecializationUtil.hasSpecialization(Dischargeable, v0)
      if v1 then
        v1 = SpecializationUtil.hasSpecialization(BunkerSiloInteractor, v0)
      end
    end
  end
  return v1
end
function Shovel.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Shovel")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.shovel#ignoreFillUnitFillType", "Ignore fill unit fill type", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.shovel#useSpeedLimit", "Use speed limit while shovel is turned on", false)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Shovel.SHOVEL_NODE_XML_KEY .. "#node", "Shovel node")
  Vehicle.xmlSchema:register(XMLValueType.INT, Shovel.SHOVEL_NODE_XML_KEY .. "#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, Shovel.SHOVEL_NODE_XML_KEY .. "#loadInfoIndex", "Load info index", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Shovel.SHOVEL_NODE_XML_KEY .. "#width", "Shovel node width", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Shovel.SHOVEL_NODE_XML_KEY .. "#length", "Shovel node length", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Shovel.SHOVEL_NODE_XML_KEY .. "#yOffset", "Shovel node y offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Shovel.SHOVEL_NODE_XML_KEY .. "#zOffset", "Shovel node z offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Shovel.SHOVEL_NODE_XML_KEY .. "#needsMovement", "Needs movement", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Shovel.SHOVEL_NODE_XML_KEY .. "#fillLitersPerSecond", "Fill liters per second", "inf.")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, Shovel.SHOVEL_NODE_XML_KEY .. "#maxPickupAngle", "Max. pickup angle")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Shovel.SHOVEL_NODE_XML_KEY .. "#needsAttacherVehicle", "Needs attacher vehicle connected", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Shovel.SHOVEL_NODE_XML_KEY .. "#resetFillLevel", "Reset fill level to zero while the shovel node is not active", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Shovel.SHOVEL_NODE_XML_KEY .. "#ignoreFillLevel", "Ignore fill level of the fill unit while filling", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Shovel.SHOVEL_NODE_XML_KEY .. "#ignoreFarmlandState", "Ignore farmland state for pickup", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Shovel.SHOVEL_NODE_XML_KEY .. ".smoothing#allowed", "Leveler smoothes while driving backward", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Shovel.SHOVEL_NODE_XML_KEY .. ".smoothing#radius", "Smooth ground radius", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Shovel.SHOVEL_NODE_XML_KEY .. ".smoothing#overlap", "Radius overlap", 1.7)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.shovel.dischargeInfo#dischargeNodeIndex", "Discharge node index", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.shovel.dischargeInfo#node", "Discharge info node")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.shovel.dischargeInfo#minSpeedAngle", "Discharge info min. speed angle")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.shovel.dischargeInfo#maxSpeedAngle", "Discharge info max. speed angle")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.shovel.fillEffect")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Shovel.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadShovelNode", Shovel.loadShovelNode)
  SpecializationUtil.registerFunction(vehicleType, "getShovelNodeIsActive", Shovel.getShovelNodeIsActive)
  SpecializationUtil.registerFunction(vehicleType, "getCanShovelAtPosition", Shovel.getCanShovelAtPosition)
  SpecializationUtil.registerFunction(vehicleType, "getShovelTipFactor", Shovel.getShovelTipFactor)
  SpecializationUtil.registerFunction(vehicleType, "getIsShovelEffectState", Shovel.getIsShovelEffectState)
end
function Shovel.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsDischargeNodeActive", Shovel.getIsDischargeNodeActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDischargeNodeEmptyFactor", Shovel.getDischargeNodeEmptyFactor)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischarge", Shovel.handleDischarge)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischargeOnEmpty", Shovel.handleDischargeOnEmpty)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischargeRaycast", Shovel.handleDischargeRaycast)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleDischargeToObject", Shovel.getCanToggleDischargeToObject)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanToggleDischargeToGround", Shovel.getCanToggleDischargeToGround)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", Shovel.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", Shovel.doCheckSpeedLimit)
end
function Shovel.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Shovel)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Shovel)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Shovel)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Shovel)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Shovel)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Shovel)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Shovel)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", Shovel)
end
function Shovel:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.shovel#pickUpNode", "vehicle.shovel.shovelNode#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.shovel#pickUpWidth", "vehicle.shovel.shovelNode#width")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.shovel#pickUpLength", "vehicle.shovel.shovelNode#length")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.shovel#pickUpYOffset")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.shovel#pickUpRequiresMovement", "vehicle.shovel.shovelNode#needsMovement")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.shovel#pickUpNeedsToBeTurnedOn", "vehicle.shovel.shovelNode#needsActivation")
  local v3 = v3:getValue("vehicle.shovel#ignoreFillUnitFillType", false)
  self.spec_shovel.ignoreFillUnitFillType = v3
  v3 = v3:getValue("vehicle.shovel#useSpeedLimit", false)
  self.spec_shovel.useSpeedLimit = v3
  self.spec_shovel.shovelNodes = {}
  while true do
    v4 = string.format("vehicle.shovel.shovelNode(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadShovelNode(self.xmlFile, v4, {})
    if v6 then
      table.insert(v2.shovelNodes, {})
    end
  end
  v2.shovelDischargeInfo = {}
  v5 = v5:getValue("vehicle.shovel.dischargeInfo#dischargeNodeIndex", 1)
  v2.shovelDischargeInfo.dischargeNodeIndex = v5
  v5 = v5:getValue("vehicle.shovel.dischargeInfo#node", nil, self.components, self.i3dMappings)
  v2.shovelDischargeInfo.node = v5
  if v2.shovelDischargeInfo.node ~= nil then
    v4 = v4:getValue("vehicle.shovel.dischargeInfo#minSpeedAngle")
    v5 = v5:getValue("vehicle.shovel.dischargeInfo#maxSpeedAngle")
    if v4 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x80000000 -> L158
    end
    Logging.xmlWarning(self.xmlFile, "Missing 'minSpeedAngle' or 'maxSpeedAngle' for dischargeNode 'vehicle.shovel.dischargeInfo'")
    return false
    v2.shovelDischargeInfo.minSpeedAngle = v4
    v2.shovelDischargeInfo.maxSpeedAngle = v5
  end
  if self.isClient then
    v4 = v4:loadEffect(self.xmlFile, "vehicle.shovel.fillEffect", self.components, self, self.i3dMappings)
    v2.fillEffects = v4
    v2.fillEffectTime = 0
  end
  v4 = self:getNextDirtyFlag()
  v2.effectDirtyFlag = v4
  v2.loadingFillType = FillType.UNKNOWN
  v2.lastValidFillType = FillType.UNKNOWN
  v2.smoothAccumulation = 0
  if #v2.shovelNodes == 0 then
    SpecializationUtil.removeEventListener(self, "onReadStream", Shovel)
    SpecializationUtil.removeEventListener(self, "onWriteStream", Shovel)
    SpecializationUtil.removeEventListener(self, "onReadUpdateStream", Shovel)
    SpecializationUtil.removeEventListener(self, "onWriteUpdateStream", Shovel)
    SpecializationUtil.removeEventListener(self, "onUpdateTick", Shovel)
    SpecializationUtil.removeEventListener(self, "onFillUnitFillLevelChanged", Shovel)
  end
end
function Shovel:onDelete()
  v2:deleteEffects(self.spec_shovel.fillEffects)
end
function Shovel:onReadStream(streamId, connection)
  local v4 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  self.spec_shovel.loadingFillType = v4
end
function Shovel:onWriteStream(streamId, connection)
  streamWriteUIntN(streamId, self.spec_shovel.loadingFillType, FillTypeManager.SEND_NUM_BITS)
end
function Shovel:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      v5 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
      self.spec_shovel.loadingFillType = v5
    end
  end
end
function Shovel:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_shovel.effectDirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      streamWriteUIntN(streamId, v4.loadingFillType, FillTypeManager.SEND_NUM_BITS)
    end
  end
end
function Shovel:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isServer then
    for allowFillType, v11 in pairs(self.spec_shovel.shovelNodes) do
      local v12 = self:getShovelNodeIsActive(v11)
      if v12 then
        v12 = self:getFillUnitFillLevel(v11.fillUnitIndex)
        local v13 = self:getFillUnitCapacity(v11.fillUnitIndex)
        if not v11.ignoreFillLevel then
          local v15 = self:getFillUnitFreeCapacity(v11.fillUnitIndex)
        end
        v15 = math.min(v14, v11.fillLitersPerSecond * dt)
        -- if 0 >= v15 then goto L237 end
        v15 = self:getFillUnitFillType(v11.fillUnitIndex)
        local v17 = self:getFillTypeChangeThreshold()
        if v12 / v13 < v17 then
        end
        v17 = v17:getMinValidLiterValue(v15)
        local v17, v18, v19 = localToWorld(v11.node, -v11.width * 0.5, v11.yOffset, v11.zOffset)
        local v20, v21, v22 = localToWorld(v11.node, v11.width * 0.5, v11.yOffset, v11.zOffset)
        local v24 = self:getCanShovelAtPosition(v11)
        -- if not v24 then goto L237 end
        if v15 ~= FillType.UNKNOWN then
          -- if not v5.ignoreFillUnitFillType then goto L122 end
        end
        v24 = DensityMapHeightUtil.getFillTypeAtLine(v17, v18, v19, v20, v21, v22, v23)
        -- if v24 == FillType.UNKNOWN then goto L237 end
        v24 = self:getFillUnitSupportsFillType(v11.fillUnitIndex, v24)
        -- if not v24 then goto L237 end
        v24 = self:getFillUnitAllowsFillType(v11.fillUnitIndex, v24)
        -- if not v24 then goto L237 end
        local v24, v25 = DensityMapHeightUtil.tipToGroundAroundLine(self, -v14 - v16, v24, v17, v18, v19, v20, v21, v22, v23, nil, v11.lineOffset, true, nil)
        v11.lineOffset = v25
        if not v11.ignoreFillLevel and v14 < -v24 then
          self:setFillUnitCapacity(v11.fillUnitIndex, v12 - v24)
          v11.capacityChanged = true
        end
        -- if v24 >= 0 then goto L237 end
        local v26 = self:getFillVolumeLoadInfo(v11.loadInfoIndex)
        local v29 = self:getOwnerFarmId()
        self:addFillUnitFillLevel(v29, v11.fillUnitIndex, -v24, v15, ToolType.UNDEFINED, v26)
        self:notifiyBunkerSilo(v24, v15, (v17 + v20) * 0.5, (v18 + v21) * 0.5, (v19 + v22) * 0.5)
      elseif v11.resetFillLevel then
        v12 = self:getFillUnitFillLevel(v11.fillUnitIndex)
        if 0 < v12 then
          v15 = self:getOwnerFarmId()
          v18 = self:getFillUnitFillType(v11.fillUnitIndex)
          self:addFillUnitFillLevel(v15, v11.fillUnitIndex, -v12, v18, ToolType.UNDEFINED)
        end
      end
      if not v11.allowsSmoothing then
        continue
      end
      local v12, v13, v14 = localDirectionToWorld(v11.node, 0, 0, 1)
      v15 = math.acos(v13)
      if not (v11.maxPickupAngle < v15) then
        continue
      end
      if 0.0002 < self.lastSpeedReal then
        v18 = math.max(self.lastMovedDistance * 0.5, 0.0003 * dt)
        v17 = DensityMapHeightUtil.getRoundedHeightValue(v5.smoothAccumulation + v18)
        v5.smoothAccumulation = v5.smoothAccumulation + v18 - v17
      else
        v5.smoothAccumulation = 0
      end
      if not (0 < v16) then
        continue
      end
      DensityMapHeightUtil.smoothAroundLine(v11.node, v11.width, v11.smoothGroundRadius, v11.smoothOverlap, v16)
    end
    if v6 == FillType.UNKNOWN then
      v5.fillEffectTime = v5.fillEffectTime - dt
      -- if 0 >= v5.fillEffectTime then goto L324 end
    else
      v5.fillEffectTime = 500
    end
    if v5.loadingFillType ~= v6 then
      v5.loadingFillType = v6
      self:raiseDirtyFlags(v5.effectDirtyFlag)
    end
  end
  if self.isClient then
    if v5.loadingFillType ~= FillType.UNKNOWN then
      v6:setFillType(v5.fillEffects, v5.loadingFillType)
      v6:startEffects(v5.fillEffects)
      return
    end
    v6:stopEffects(v5.fillEffects)
  end
end
function Shovel:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData, appliedDelta)
  if self.isServer then
    for v11, v12 in pairs(self.spec_shovel.shovelNodes) do
      if not (v12.fillUnitIndex == fillUnitIndex) then
        continue
      end
      if not v12.capacityChanged then
        continue
      end
      local fillUnit = self:getFillUnitByIndex(fillUnitIndex)
      if not (fillUnit.fillLevel <= fillUnit.defaultCapacity) then
        continue
      end
      self:setFillUnitCapacity(fillUnitIndex, fillUnit.defaultCapacity)
      v12.capacityChanged = false
    end
  end
end
function Shovel:loadShovelNode(xmlFile, key, shovelNode)
  local isSelected = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  shovelNode.node = isSelected
  if shovelNode.node == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'node' for shovelNode '%s'!", key)
    return false
  end
  isSelected = xmlFile:getValue(key .. "#fillUnitIndex", 1)
  shovelNode.fillUnitIndex = isSelected
  isSelected = xmlFile:getValue(key .. "#loadInfoIndex", 1)
  shovelNode.loadInfoIndex = isSelected
  isSelected = xmlFile:getValue(key .. "#width", 1)
  shovelNode.width = isSelected
  isSelected = xmlFile:getValue(key .. "#length", 0.5)
  shovelNode.length = isSelected
  isSelected = xmlFile:getValue(key .. "#yOffset", 0)
  shovelNode.yOffset = isSelected
  isSelected = xmlFile:getValue(key .. "#zOffset", 0)
  shovelNode.zOffset = isSelected
  isSelected = xmlFile:getValue(key .. "#needsMovement", true)
  shovelNode.needsMovement = isSelected
  shovelNode.lastPosition = {0, 0, 0}
  local v5 = xmlFile:getValue(key .. "#fillLitersPerSecond", math.huge)
  shovelNode.fillLitersPerSecond = v5 / 1000
  isSelected = xmlFile:getValue(key .. "#maxPickupAngle")
  shovelNode.maxPickupAngle = isSelected
  isSelected = xmlFile:getValue(key .. "#needsAttacherVehicle", true)
  shovelNode.needsAttacherVehicle = isSelected
  isSelected = xmlFile:getValue(key .. "#resetFillLevel", false)
  shovelNode.resetFillLevel = isSelected
  isSelected = xmlFile:getValue(key .. "#ignoreFillLevel", false)
  shovelNode.ignoreFillLevel = isSelected
  isSelected = xmlFile:getValue(key .. "#ignoreFarmlandState", false)
  shovelNode.ignoreFarmlandState = isSelected
  isSelected = xmlFile:getValue(key .. ".smoothing#allowed", false)
  shovelNode.allowsSmoothing = isSelected
  isSelected = xmlFile:getValue(key .. ".smoothing#radius", 0.5)
  shovelNode.smoothGroundRadius = isSelected
  isSelected = xmlFile:getValue(key .. ".smoothing#overlap", 1.7)
  shovelNode.smoothOverlap = isSelected
  return true
end
function Shovel:getShovelNodeIsActive(shovelNode)
  if shovelNode.needsMovement then
    local isActiveForInputIgnoreSelection, isSelected, v5 = getWorldTranslation(shovelNode.node)
    local v6, v7, v8 = worldToLocal(shovelNode.node, shovelNode.lastPosition[1], shovelNode.lastPosition[2], shovelNode.lastPosition[3])
    if true and v8 >= 0 then
    end
    shovelNode.lastPosition[1] = isActiveForInputIgnoreSelection
    shovelNode.lastPosition[2] = isSelected
    shovelNode.lastPosition[3] = v5
  end
  if shovelNode.maxPickupAngle ~= nil then
    isActiveForInputIgnoreSelection, isSelected, v5 = localDirectionToWorld(shovelNode.node, 0, 0, 1)
    v6 = math.acos(isSelected)
    if shovelNode.maxPickupAngle < v6 then
      return false
    end
  end
  if shovelNode.needsAttacherVehicle and self.getAttacherVehicle ~= nil then
    isActiveForInputIgnoreSelection = self:getAttacherVehicle()
    if isActiveForInputIgnoreSelection == nil then
      return false
    end
  end
  return isActiveForInput
end
function Shovel:getIsDischargeNodeActive(superFunc, dischargeNode)
  if self.spec_shovel.shovelDischargeInfo.node ~= nil and self.spec_shovel.shovelDischargeInfo.dischargeNodeIndex == dischargeNode.index then
    local v5 = self:getShovelTipFactor()
    if v5 == 0 then
      return false
    end
  end
  v5 = superFunc(self, dischargeNode)
  return v5
end
function Shovel:getDischargeNodeEmptyFactor(superFunc, dischargeNode)
  local parentFactor = superFunc(self, dischargeNode)
  if self.spec_shovel.shovelDischargeInfo.node ~= nil and self.spec_shovel.shovelDischargeInfo.dischargeNodeIndex == dischargeNode.index then
    local v7 = self:getShovelTipFactor()
    return parentFactor * v7
  end
  return parentFactor
end
function Shovel:handleDischarge(superFunc, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
  if dischargeNode.index == self.spec_shovel.shovelDischargeInfo.dischargeNodeIndex then
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x80000000 -> L23
  end
  superFunc(self, dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
end
function Shovel:handleDischargeOnEmpty(superFunc, dischargedLiters, minDropReached, hasMinDropFillLevel)
  if self.spec_shovel.shovelDischargeInfo.node == nil then
    superFunc(self, dischargedLiters, minDropReached, hasMinDropFillLevel)
  end
end
function Shovel:handleDischargeRaycast(superFunc, dischargeNode, hitObject, hitShape, hitDistance, hitFillUnitIndex, hitTerrain)
  if self.spec_shovel.shovelDischargeInfo.node ~= nil and self.spec_shovel.shovelDischargeInfo.dischargeNodeIndex == dischargeNode.index then
    if hitObject ~= nil then
      local fillType = self:getDischargeFillType(dischargeNode)
      local allowFillType = hitObject:getFillUnitAllowsFillType(hitFillUnitIndex, fillType)
      if allowFillType then
        local v15 = self:getOwnerFarmId()
        local v11 = hitObject:getFillUnitFreeCapacity(...)
        if 0 < v11 then
          self:setDischargeState(Dischargeable.DISCHARGE_STATE_OBJECT, true)
          return
        end
      end
      v11 = self:getDischargeState()
      -- if v11 ~= Dischargeable.DISCHARGE_STATE_OBJECT then goto L136 end
      self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF, true)
      return
    end
    fillType = self:getFillUnitFillLevel(dischargeNode.fillUnitIndex)
    -- if 0 >= v9 then goto L136 end
    allowFillType = self:getShovelTipFactor()
    -- if 0 >= v10 then goto L136 end
    allowFillType = self:getCanDischargeToGround(dischargeNode)
    if allowFillType then
      self:setDischargeState(Dischargeable.DISCHARGE_STATE_GROUND, true)
      return
    end
    allowFillType = self:getIsActiveForInput(true)
    -- if not v10 then goto L136 end
    allowFillType = self:getCanDischargeToLand(dischargeNode)
    if not allowFillType then
      local v12 = v12:getText("warning_youDontHaveAccessToThisLand")
      allowFillType:showBlinkingWarning(v12, 5000)
      return
    end
    allowFillType = self:getCanDischargeAtPosition(dischargeNode)
    -- if v10 then goto L136 end
    v12 = v12:getText("warning_actionNotAllowedHere")
    allowFillType:showBlinkingWarning(v12, 5000)
    return
  end
  superFunc(self, dischargeNode, hitObject, hitShape, hitDistance, hitFillUnitIndex, hitTerrain)
end
function Shovel:getCanToggleDischargeToObject(superFunc)
  if self.spec_shovel.shovelDischargeInfo.node ~= nil then
    return false
  end
  return superFunc(self)
end
function Shovel:getCanToggleDischargeToGround(superFunc)
  if self.spec_shovel.shovelDischargeInfo.node ~= nil then
    return false
  end
  return superFunc(self)
end
function Shovel:getShovelTipFactor()
  if self.spec_shovel.shovelDischargeInfo.node ~= nil then
    local isActiveForInputIgnoreSelection, isSelected, v5 = localDirectionToWorld(self.spec_shovel.shovelDischargeInfo.node, 0, 0, 1)
    local v6 = math.acos(isSelected)
    if self.spec_shovel.shovelDischargeInfo.minSpeedAngle < v6 then
      local v9 = math.min(1, (v6 - self.spec_shovel.shovelDischargeInfo.minSpeedAngle) / (self.spec_shovel.shovelDischargeInfo.maxSpeedAngle - self.spec_shovel.shovelDischargeInfo.minSpeedAngle))
      return math.max(...)
    end
  end
  return 0
end
function Shovel:getIsShovelEffectState()
  if self.spec_shovel.loadingFillType == FillType.UNKNOWN then
  end
  return true, dt.loadingFillType
end
function Shovel:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_shovel.loadingFillType ~= FillType.UNKNOWN then
    local isSelected = self:getWorkWearMultiplier()
  end
  return multiplier
end
function Shovel:doCheckSpeedLimit(superFunc)
  local isActiveForInput = superFunc(self)
  if not isActiveForInput and self.spec_shovel.useSpeedLimit and self.getIsTurnedOn ~= nil then
    isActiveForInput = self:getIsTurnedOn()
  end
  return isActiveForInput
end
function Shovel:getCanShovelAtPosition(shovelNode)
  if shovelNode == nil then
    return false
  end
  if shovelNode.ignoreFarmlandState then
    return true
  end
  local isActiveForInput, isActiveForInputIgnoreSelection, isSelected = localToWorld(shovelNode.node, -shovelNode.width * 0.5, 0, 0)
  local activeFarm = self:getActiveFarm()
  local v6, v7, v8 = localToWorld(shovelNode.node, shovelNode.width * 0.5, 0, 0)
  local v9 = v9:canFarmAccessLand(activeFarm, isActiveForInput, isSelected)
  if not v9 then
    return false
  end
  return allowFillType:canFarmAccessLand(activeFarm, v6, v8)
end
function Shovel:updateDebugValues(values)
  if self.spec_shovel.shovelDischargeInfo.node ~= nil then
    local isSelected, v5, v6 = localDirectionToWorld(self.spec_shovel.shovelDischargeInfo.node, 0, 0, 1)
    local v7 = math.acos(v5)
    local v11 = math.deg(v7)
    table.insert(values, {name = "angle", value = v11})
    v11 = math.deg(self.spec_shovel.shovelDischargeInfo.minSpeedAngle)
    table.insert(values, {name = "minSpeedAngle", value = v11})
    v11 = math.deg(self.spec_shovel.shovelDischargeInfo.maxSpeedAngle)
    table.insert(values, {name = "maxSpeedAngle", value = v11})
    if self.spec_shovel.shovelDischargeInfo.minSpeedAngle < v7 then
      local allowFillType = math.min(1, (v7 - self.spec_shovel.shovelDischargeInfo.minSpeedAngle) / (self.spec_shovel.shovelDischargeInfo.maxSpeedAngle - self.spec_shovel.shovelDischargeInfo.minSpeedAngle))
      local v8 = math.max(...)
      table.insert(values, {name = "factor", value = v8})
      return
    end
    table.insert(values, {name = "factor", value = "Out of Range - 0"})
  end
end
