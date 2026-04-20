-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Leveler = {LEVELER_NODE_XML_KEY = "vehicle.leveler.levelerNode(?)", LEVEL_NUM_BITS = 8, LEVEL_MAX_VALUE = 2 ^ Leveler.LEVEL_NUM_BITS - 1}
function Leveler.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(BunkerSiloInteractor, specializations)
  end
  return v1
end
function Leveler.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Leveler")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Leveler.LEVELER_NODE_XML_KEY .. "#node", "Leveler node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#width", "Width")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#zOffset", "Z axis offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#yOffset", "Y axis offset", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#minDropWidth", "Min. drop width", "half of width")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#maxDropWidth", "Max. drop width", "width value")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#minDropDirOffset", "Min. drop direction offset", 0.7)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. "#maxDropDirOffset", "Max. drop direction offset", 0.7)
  Vehicle.xmlSchema:register(XMLValueType.INT, Leveler.LEVELER_NODE_XML_KEY .. "#numHeightLimitChecks", "Number of height limit checks", 6)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Leveler.LEVELER_NODE_XML_KEY .. "#alignToWorldY", "Defines if the leveler node is aligned to worlds Y axis", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, Leveler.LEVELER_NODE_XML_KEY .. ".smoothing#allowed", "Leveler smoothes while driving backward", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. ".smoothing#radius", "Smooth ground radius", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, Leveler.LEVELER_NODE_XML_KEY .. ".smoothing#overlap", "Radius overlap", 1.7)
  Vehicle.xmlSchema:register(XMLValueType.INT, Leveler.LEVELER_NODE_XML_KEY .. ".smoothing#direction", "Smooth direction (if set to '0' it smooths in both directions)", -1)
  Vehicle.xmlSchema:register(XMLValueType.INT, Leveler.LEVELER_NODE_XML_KEY .. "#fillUnitIndex", "Fill unit index", "Value of vehicle.leveler#fillUnitIndex")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Leveler.LEVELER_NODE_XML_KEY .. ".occlusionAreas.occlusionArea(?)#startNode", "Start node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Leveler.LEVELER_NODE_XML_KEY .. ".occlusionAreas.occlusionArea(?)#widthNode", "Width node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, Leveler.LEVELER_NODE_XML_KEY .. ".occlusionAreas.occlusionArea(?)#heightNode", "Height node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.leveler.pickUpDirection", "Pick up direction", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.leveler#fillUnitIndex", "Fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.leveler#maxFillLevelPerMS", "Max. fill level change rate as reference for effect and force", 20)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.leveler.force#node", "Force node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.leveler.force#directionNode", "Force direction node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.leveler.force#maxForce", "Max. force in kN", 0)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.leveler.force#direction", "Driving direction for appling force", 1)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.leveler#ignoreFarmlandState", "If set to true the farmland underneath the leveler does not need to be bought to actually work", false)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.leveler.effects")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Leveler.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getIsLevelerPickupNodeActive", Leveler.getIsLevelerPickupNodeActive)
  SpecializationUtil.registerFunction(vehicleType, "loadLevelerNodeFromXML", Leveler.loadLevelerNodeFromXML)
  SpecializationUtil.registerFunction(vehicleType, "onLevelerRaycastCallback", Leveler.onLevelerRaycastCallback)
end
function Leveler.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsAttacherJointControlDampingAllowed", Leveler.getIsAttacherJointControlDampingAllowed)
end
function Leveler.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Leveler)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Leveler)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Leveler)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Leveler)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Leveler)
end
function Leveler:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.leveler.levelerNode#index", "vehicle.leveler.levelerNode#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.levelerEffects", "vehicle.leveler.effects")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.leveler.levelerNode(0)#minDropHeight")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, self.configFileName, "vehicle.leveler.levelerNode(0)#maxDropHeight")
  local v3 = v3:getValue("vehicle.leveler.pickUpDirection", 1)
  self.spec_leveler.pickUpDirection = v3
  v3 = v3:getValue("vehicle.leveler#maxFillLevelPerMS", 35)
  self.spec_leveler.maxFillLevelPerMS = v3
  v3 = v3:getValue("vehicle.leveler#fillUnitIndex")
  self.spec_leveler.fillUnitIndex = v3
  self.spec_leveler.nodes = {}
  while true do
    v4 = string.format("vehicle.leveler.levelerNode(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadLevelerNodeFromXML({}, self.xmlFile, v4)
    if v6 then
      table.insert(v2.nodes, {vehicle = self, onLevelerRaycastCallback = self.onLevelerRaycastCallback})
    end
  end
  v2.litersToPickup = 0
  v2.smoothAccumulation = 0
  v2.lastFillLevelMoved = 0
  v2.lastFillLevelMovedPct = 0
  v2.lastFillLevelMovedTarget = 0
  v2.lastFillLevelMovedBuffer = 0
  v2.lastFillLevelMovedBufferTime = 300
  v2.lastFillLevelMovedBufferTimer = 0
  v4 = v4:getValue("vehicle.leveler.force#node", nil, self.components, self.i3dMappings)
  v2.forceNode = v4
  v4 = v4:getValue("vehicle.leveler.force#directionNode", v2.forceNode, self.components, self.i3dMappings)
  v2.forceDirNode = v4
  v4 = v4:getValue("vehicle.leveler.force#maxForce", 0)
  v2.maxForce = v4
  v2.lastForce = 0
  v4 = v4:getValue("vehicle.leveler.force#direction", 1)
  v2.forceDir = v4
  v4 = v4:getValue("vehicle.leveler#ignoreFarmlandState", false)
  v2.ignoreFarmlandState = v4
  if self.isClient then
    v4 = v4:loadEffect(self.xmlFile, "vehicle.leveler.effects", self.components, self, self.i3dMappings)
    v2.effects = v4
  end
  if #v2.nodes == 0 then
    SpecializationUtil.removeEventListener(self, "onUpdate", Leveler)
  end
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
end
function Leveler:onDelete()
  v2:deleteEffects(self.spec_leveler.effects)
end
function Leveler:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      local v6 = streamReadUIntN(streamId, Leveler.LEVEL_NUM_BITS)
      self.spec_leveler.lastFillLevelMovedPct = v6 / Leveler.LEVEL_MAX_VALUE
    end
  end
end
function Leveler:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_leveler.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      streamWriteUIntN(streamId, v4.lastFillLevelMovedPct * Leveler.LEVEL_MAX_VALUE, Leveler.LEVEL_NUM_BITS)
    end
  end
end
function Leveler:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    for v10, v11 in pairs(self.spec_leveler.nodes) do
      local v12 = self:getFillUnitLastValidFillType(v11.fillUnitIndex)
      if not (v12 == FillType.UNKNOWN) then
        break
      end
    end
    if v6 ~= FillType.UNKNOWN then
      -- if 0 >= v5.lastFillLevelMovedPct then goto L84 end
      v7:setFillType(v5.effects, v6)
      v7:startEffects(v5.effects)
      for v10, v11 in pairs(v5.effects) do
        v12 = v11:isa(LevelerEffect)
        if not v12 then
          v12 = v11:isa(SnowPlowMotionPathEffect)
          if not v12 then
            continue
          end
        end
        v11:setFillLevel(v5.lastFillLevelMovedPct)
        local v16 = self:getLastSpeed()
        v11:setLastVehicleSpeed(self.movingDirection * v16)
      end
    else
      v7:stopEffects(v5.effects)
    end
  end
  if self.isServer then
    for v9, v10 in pairs(v5.nodes) do
      local v11, v12, v13 = localToWorld(v10.node, -v10.halfWidth, v10.yOffset, v10.maxDropDirOffset)
      local v14, v15, v16 = localToWorld(v10.node, v10.halfWidth, v10.yOffset, v10.maxDropDirOffset)
      if not v5.ignoreFarmlandState then
        local v17 = self:getOwnerFarmId()
        local v18 = v18:getCanAccessLandAtWorldPosition(v17, v11, v13)
        if not v18 then
          break
        end
        v18 = v18:getCanAccessLandAtWorldPosition(v17, v14, v16)
        if not v18 then
          break
        end
      end
      v18 = self:getFillUnitFillType(v10.fillUnitIndex)
      local v19 = self:getFillUnitFillLevel(v10.fillUnitIndex)
      if v18 ~= FillType.UNKNOWN then
        local v21 = v21:getMinValidLiterValue(v18)
        -- if v19 >= v21 + 0.001 then goto L209 end
      end
      local v20 = DensityMapHeightUtil.getFillTypeAtLine(v11, v12, v13, v14, v15, v16, 0.5 * v10.maxDropDirOffset)
      if v20 ~= FillType.UNKNOWN and v20 ~= v18 then
        v21 = self:getFillUnitSupportsFillType(v10.fillUnitIndex, v20)
        if v21 then
          local v23 = self:getOwnerFarmId()
          self:addFillUnitFillLevel(v23, v10.fillUnitIndex, -math.huge)
        end
      end
      v20 = v20:getDensityMapHeightTypeByFillTypeIndex(v18)
      if v18 ~= FillType.UNKNOWN then
        -- cmp-jump LOP_JUMPXEQKNIL R20 aux=0x0 -> L685
        v21 = self:getFillUnitCapacity(v10.fillUnitIndex)
        if v10.alignToWorldY then
          local v25, v26, v27 = localDirectionToWorld(v10.referenceFrame, 0, 0, 1)
          local v28 = math.max(v26, 0)
          I3DUtil.setWorldDirection(v10.node, v25, v28, v27, 0, 1, 0)
        end
        v23 = self:getIsLevelerPickupNodeActive(v10)
        if v23 and v5.pickUpDirection == self.movingDirection and 0.0001 < self.lastSpeed then
          local v23, v24, v25 = localToWorld(v10.node, -v10.halfWidth, v10.yOffset, v10.zOffset)
          v26, v27, v28 = localToWorld(v10.node, v10.halfWidth, v10.yOffset, v10.zOffset)
          if 0 <= v22 then
            local v29, v30, v31 = localToWorld(v10.node, -v10.halfWidth, v10.yOffset, v10.zOffset + 0.5)
            local v32, v33, v34 = localToWorld(v10.node, v10.halfWidth, v10.yOffset, v10.zOffset + 0.5)
            local v35 = math.max(v24, v30)
            v35 = math.max(v27, v33)
          end
          v29 = self:getFillUnitFillLevel(v10.fillUnitIndex)
          if 0 < v10.numHeightLimitChecks then
            -- TODO: structure LOP_FORNPREP (pc 360, target 387)
            local v39 = DensityMapHeightUtil.getHeightAtWorldPos(v23 + (v26 - v23) * 0 / v10.numHeightLimitChecks, v24 + (v27 - v24) * 0 / v10.numHeightLimitChecks, v25 + (v28 - v25) * 0 / v10.numHeightLimitChecks)
            local v40 = math.max(0, v39 - 0.05 - v24 + (v27 - v24) * 0 / v10.numHeightLimitChecks)
            -- TODO: structure LOP_FORNLOOP (pc 386, target 361)
            if 0 < v40 then
            end
          end
          v31, v32 = DensityMapHeightUtil.tipToGroundAroundLine(self, v29, v18, v23, v24, v25, v26, v27, v28, 0.5, 2, v10.lineOffsetPickUp, true, nil)
          v10.lastPickUp = v31
          v10.lineOffsetPickUp = v32
          if v10.lastPickUp < 0 then
            if self.notifiyBunkerSilo ~= nil then
              self:notifiyBunkerSilo(v10.lastPickUp, v18, (v23 + v26) * 0.5, (v24 + v27) * 0.5, (v25 + v28) * 0.5)
            end
            v10.lastPickUp = v10.lastPickUp + v5.litersToPickup
            v5.litersToPickup = 0
            v33 = self:getOwnerFarmId()
            self:addFillUnitFillLevel(v33, v10.fillUnitIndex, -v10.lastPickUp, v18, ToolType.UNDEFINED, nil)
          end
        end
        v5.lastFillLevelMovedBuffer = v5.lastFillLevelMovedBuffer + -v17
        v5.lastFillLevelMovedBufferTimer = v5.lastFillLevelMovedBufferTimer + dt
        if v5.lastFillLevelMovedBufferTime < v5.lastFillLevelMovedBufferTimer then
          v5.lastFillLevelMovedTarget = v5.lastFillLevelMovedBuffer / v5.lastFillLevelMovedBufferTimer
          v5.lastFillLevelMovedBufferTimer = 0
          v5.lastFillLevelMovedBuffer = 0
        end
        if self.movingDirection < 0 and 0.5 < self.lastSpeed * 3600 then
          v5.lastFillLevelMovedBuffer = 0
        end
        v24 = self:getFillUnitFillLevel(v10.fillUnitIndex)
        if 0 < v24 then
          v25 = MathUtil.lerp(v10.halfMinDropWidth, v10.halfMaxDropWidth, v24 / v21)
          v26, v27, v28 = localToWorld(v10.node, -v25, v10.yOffset, v10.zOffset)
          v29, v30, v31 = localToWorld(v10.node, v25, v10.yOffset, v10.zOffset)
          v32, v33 = DensityMapHeightUtil.tipToGroundAroundLine(self, v24, v18, v26, v27 + -0.15, v28, v29, v30 + -0.15, v31, 0.5, 2, v10.lineOffsetDrop1, true, nil)
          v10.lastDrop1 = v32
          v10.lineOffsetDrop1 = v33
          if 0 < v10.lastDrop1 then
            v33 = v33:getMinValidLiterValue(v18)
            if v24 - v10.lastDrop1 <= v33 then
              v10.lastDrop1 = v24
              v5.litersToPickup = v5.litersToPickup + v24 - v10.lastDrop1
            end
            v35 = self:getOwnerFarmId()
            self:addFillUnitFillLevel(v35, v10.fillUnitIndex, -v10.lastDrop1, v18, ToolType.UNDEFINED, nil)
          end
        end
        v24 = self:getFillUnitFillLevel(v10.fillUnitIndex)
        -- if 0 >= v24 then goto L691 end
        v24 = MathUtil.lerp(v10.minDropDirOffset, v10.maxDropDirOffset, v5.lastFillLevelMovedPct)
        v25, v26, v27 = localToWorld(v10.node, 0, v10.yOffset, 0)
        v28, v29, v30 = localToWorld(v10.node, 0, v10.yOffset, v10.zOffset + v24)
        v10.raycastLastFillType = v18
        v10.raycastLastRadius = 2
        v10.raycastHitObject = false
        v34 = MathUtil.vector3Length(v28 - v25, v29 - v26, v30 - v27)
        local v35, v36, v37 = MathUtil.vector3Normalize(v28 - v25, v29 - v26, v30 - v27)
        raycastAll(v25, v26, v27, v35, v36, v37, "onLevelerRaycastCallback", v34, v10, CollisionFlag.STATIC_OBJECTS, false, true)
      else
        v5.lastFillLevelMovedBuffer = 0
        v5.lastFillLevelMovedTarget = 0
      end
      if v17 < 0 and v18 ~= FillType.UNKNOWN then
        self:notifiyBunkerSilo(v17, v18)
      end
      if not v10.allowsSmoothing then
        continue
      end
      if v10.smoothDirection ~= 0 and not (self.movingDirection == v10.smoothDirection) then
        continue
      end
      if 0.0002 < self.lastSpeedReal then
        v23 = math.max(self.lastMovedDistance * 0.5, 0.0003 * dt)
        local v22 = DensityMapHeightUtil.getRoundedHeightValue(v5.smoothAccumulation + v23)
        v5.smoothAccumulation = v5.smoothAccumulation + v23 - v22
      else
        v5.smoothAccumulation = 0
      end
      if not (0 < v21) then
        continue
      end
      DensityMapHeightUtil.smoothAroundLine(v10.node, v10.width, v10.smoothGroundRadius, v10.smoothOverlap, v21)
    end
    if v5.lastFillLevelMovedTarget == 0 then
    end
    v5.lastFillLevelMoved = v5.lastFillLevelMoved * (1 - v6) + v5.lastFillLevelMovedTarget * v6
    if v5.lastFillLevelMoved < 0.005 then
      v5.lastFillLevelMoved = 0
    end
    v9 = math.min(v5.lastFillLevelMoved / v5.maxFillLevelPerMS, 1)
    v8 = math.max(v9, 0)
    v5.lastFillLevelMovedPct = v8
    if v5.lastFillLevelMovedPct ~= v5.lastFillLevelMovedPct then
      self:raiseDirtyFlags(v5.dirtyFlag)
    end
    if v5.forceNode ~= nil and self.movingDirection == v5.forceDir and 0 < v5.lastFillLevelMoved then
      v5.lastForce = -v5.maxForce * v5.lastFillLevelMovedPct
      v8, v9, v10 = localDirectionToWorld(v5.forceDirNode, 0, 0, v5.lastForce)
      v11, v12, v13 = getCenterOfMass(v5.forceNode)
      addForce(v5.forceNode, v8, v9, v10, v11, v12, v13, true)
    end
  end
end
function Leveler:loadLevelerNodeFromXML(levelerNode, xmlFile, key)
  local v4 = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  levelerNode.node = v4
  if levelerNode.node ~= nil then
    v4 = createTransformGroup("referenceFrame")
    local v6 = getParent(levelerNode.node)
    link(v6, v4)
    local v7 = getTranslation(levelerNode.node)
    setTranslation(...)
    v7 = getRotation(levelerNode.node)
    setRotation(...)
    levelerNode.referenceFrame = v4
    local v5 = xmlFile:getValue(key .. "#zOffset", 0)
    levelerNode.zOffset = v5
    v5 = xmlFile:getValue(key .. "#yOffset", 0)
    levelerNode.yOffset = v5
    v5 = xmlFile:getValue(key .. "#width")
    levelerNode.width = v5
    levelerNode.halfWidth = levelerNode.width * 0.5
    v5 = xmlFile:getValue(key .. "#minDropWidth", levelerNode.width * 0.5)
    levelerNode.minDropWidth = v5
    levelerNode.halfMinDropWidth = levelerNode.minDropWidth * 0.5
    v5 = xmlFile:getValue(key .. "#maxDropWidth", levelerNode.width)
    levelerNode.maxDropWidth = v5
    levelerNode.halfMaxDropWidth = levelerNode.maxDropWidth * 0.5
    v5 = xmlFile:getValue(key .. "#minDropDirOffset", 0.7)
    levelerNode.minDropDirOffset = v5
    v5 = xmlFile:getValue(key .. "#maxDropDirOffset", 0.7)
    levelerNode.maxDropDirOffset = v5
    v5 = xmlFile:getValue(key .. "#numHeightLimitChecks", 6)
    levelerNode.numHeightLimitChecks = v5
    v5 = xmlFile:getValue(key .. "#alignToWorldY", true)
    levelerNode.alignToWorldY = v5
    levelerNode.occlusionAreas = {}
    while true do
      v6 = string.format("%s.occlusionAreas.occlusionArea(%d)", key, v5)
      v7 = xmlFile:hasProperty(v6)
      if not v7 then
        break
      end
      v8 = xmlFile:getValue(v6 .. "#startNode", nil, self.components, self.i3dMappings)
      v8 = xmlFile:getValue(v6 .. "#widthNode", nil, self.components, self.i3dMappings)
      v8 = xmlFile:getValue(v6 .. "#heightNode", nil, self.components, self.i3dMappings)
      if {startNode = v8, widthNode = v8, heightNode = v8}.startNode ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L226
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L226
        table.insert(levelerNode.occlusionAreas, {startNode = v8, widthNode = v8, heightNode = v8})
      else
        Logging.xmlWarning(xmlFile, "Failed to load occlustion area '%s'. One or more nodes missing.", v6)
      end
    end
    v6 = xmlFile:getValue(key .. ".smoothing#allowed", true)
    levelerNode.allowsSmoothing = v6
    v6 = xmlFile:getValue(key .. ".smoothing#radius", 0.5)
    levelerNode.smoothGroundRadius = v6
    v6 = xmlFile:getValue(key .. ".smoothing#overlap", 1.7)
    levelerNode.smoothOverlap = v6
    v6 = xmlFile:getValue(key .. ".smoothing#direction", -1)
    levelerNode.smoothDirection = v6
    levelerNode.lineOffsetPickUp = nil
    levelerNode.lineOffsetDrop = nil
    levelerNode.lastPickUp = 0
    levelerNode.lastDrop = 0
    v6 = xmlFile:getValue(key .. "#fillUnitIndex", self.spec_leveler.fillUnitIndex)
    levelerNode.fillUnitIndex = v6
    v6 = self:getFillUnitExists(levelerNode.fillUnitIndex)
    if not v6 then
      local v9 = tostring(levelerNode.fillUnitIndex)
      Logging.xmlWarning(...)
      return false
    end
    return true
  end
  return false
end
function Leveler:getIsLevelerPickupNodeActive(levelerNode)
  if self.getAttacherVehicle ~= nil then
    local v3 = self:getAttacherVehicle()
    if v3 == nil then
    end
  end
  return v2
end
function Leveler:getIsAttacherJointControlDampingAllowed(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  for v5, v6 in pairs(self.spec_leveler.nodes) do
    local v7, v8, v9 = getWorldTranslation(v6.node)
    local v10, v11 = DensityMapHeightUtil.getHeightAtWorldPos(v7, v8, v9)
    if not (v11 == 0) then
      continue
    end
    return false
  end
  return true
end
function Leveler:onLevelerRaycastCallback(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
  if v1 ~= 0 and v1 ~= g_currentMission.terrainRootNode then
    self.raycastHitObject = true
  end
  if v11 and not self.raycastHitObject then
    local v14 = v12:getFillUnitFillLevel(self.fillUnitIndex)
    if 0 < v14 then
      local v18 = MathUtil.lerp(self.halfMinDropWidth, self.halfMaxDropWidth, v13.lastFillLevelMovedPct)
      local v19 = MathUtil.lerp(self.minDropDirOffset, self.maxDropDirOffset, v13.lastFillLevelMovedPct)
      local v20 = v20:getTerrainDetailHeightUpdater()
      if v20 ~= nil then
        -- TODO: structure LOP_FORNPREP (pc 59, target 102)
        local v25, v26, v27 = getWorldTranslation(self.occlusionAreas[1].startNode)
        local v28, v29, v30 = getWorldTranslation(self.occlusionAreas[1].widthNode)
        local v31, v32, v33 = getWorldTranslation(self.occlusionAreas[1].heightNode)
        local v34, v35, v36, v37, v38, v39 = MathUtil.getXZWidthAndHeight(v25, v27, v28, v30, v31, v33)
        addDensityMapHeightOcclusionArea(v20, v34, v26, v35, v36, v26, v37, v38, v26, v39, true)
        -- TODO: structure LOP_FORNLOOP (pc 101, target 60)
      end
      local v21, v22, v23 = localToWorld(self.node, -v18, self.yOffset, self.zOffset + v19)
      local v24, v25, v26 = localToWorld(self.node, v18, self.yOffset, self.zOffset + v19)
      v27, v28 = DensityMapHeightUtil.tipToGroundAroundLine(v12, v14, v15, v21, v22, v23, v24, v25, v26, 0, v16, self.lineOffsetDrop2, false, nil)
      self.lastDrop2 = v27
      self.lineOffsetDrop2 = v28
      if 0 < self.lastDrop2 then
        v28 = v28:getMinValidLiterValue(v15)
        if v14 - self.lastDrop2 <= v28 then
          self.lastDrop2 = v14
          v13.litersToPickup = v13.litersToPickup + v14 - self.lastDrop2
        end
        v30 = v12:getOwnerFarmId()
        v12:addFillUnitFillLevel(v30, self.fillUnitIndex, -self.lastDrop2, v15, ToolType.UNDEFINED, nil)
      end
    end
  end
end
