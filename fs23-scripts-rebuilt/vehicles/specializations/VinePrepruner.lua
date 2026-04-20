-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VinePrepruner = {PRUNER_NODE_XML_KEY = "vehicle.vinePrepruner.prunerNode(?)"}
function VinePrepruner.initSpecialization()
  AIFieldWorker.registerCustomDriveStrategy(function(self)
    local v1 = SpecializationUtil.hasSpecialization(VinePrepruner, self.specializations)
    return v1, false
  end, AIDriveStrategyVineyard)
  Vehicle.xmlSchema:setXMLSpecializationType("VinePrepruner")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.vinePrepruner#fruitType", "Fruit type")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, VinePrepruner.PRUNER_NODE_XML_KEY .. "#node", "Pruner node that adjusts translation depending on raycast distance")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, VinePrepruner.PRUNER_NODE_XML_KEY .. "#offset", "Offset from raycast node to center of pruning unit", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.INT, VinePrepruner.PRUNER_NODE_XML_KEY .. "#axis", "Move axis", 1)
  Vehicle.xmlSchema:register(XMLValueType.INT, VinePrepruner.PRUNER_NODE_XML_KEY .. "#direction", "Translation direction", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, VinePrepruner.PRUNER_NODE_XML_KEY .. "#transMin", "Min. translation", 0)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, VinePrepruner.PRUNER_NODE_XML_KEY .. "#transMax", "Max. translation", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, VinePrepruner.PRUNER_NODE_XML_KEY .. "#transSpeed", "Translation speed (m/sec)", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.INT, VinePrepruner.PRUNER_NODE_XML_KEY .. "#numBits", "Number of bits to sync state in multiplayer", 8)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.vinePrepruner.poleAnimation#name", "Name of pole animation (will be triggered as soon as pole has been detected)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.vinePrepruner.poleAnimation#speedScale", "Animation speed scale", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.vinePrepruner.poleAnimation#poleThreshold", "Defines when the pole is detected as percentage of segment length", 0.1)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.vinePrepruner.effect")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function VinePrepruner.prerequisitesPresent(specializations)
  return SpecializationUtil.hasSpecialization(VineDetector, specializations)
end
function VinePrepruner.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadPreprunerNodeFromXML", VinePrepruner.loadPreprunerNodeFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsPreprunerNodeActive", VinePrepruner.getIsPreprunerNodeActive)
end
function VinePrepruner.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "doCheckSpeedLimit", VinePrepruner.doCheckSpeedLimit)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanStartVineDetection", VinePrepruner.getCanStartVineDetection)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsValidVinePlaceable", VinePrepruner.getIsValidVinePlaceable)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleVinePlaceable", VinePrepruner.handleVinePlaceable)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAIImplementUseVineSegment", VinePrepruner.getAIImplementUseVineSegment)
end
function VinePrepruner.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", VinePrepruner)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", VinePrepruner)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", VinePrepruner)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", VinePrepruner)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", VinePrepruner)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", VinePrepruner)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", VinePrepruner)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", VinePrepruner)
  SpecializationUtil.registerEventListener(vehicleType, "onAnimationPartChanged", VinePrepruner)
end
function VinePrepruner:onLoad(savegame)
  local v3 = v3:getValue("vehicle.vinePrepruner#fruitType")
  local v4 = v4:getFruitTypeByName(v3)
  if v4 ~= nil then
    self.spec_vinePrepruner.fruitTypeIndex = v4.index
  else
    self.spec_vinePrepruner.fruitTypeIndex = FruitType.GRAPE
  end
  v2.prunerNodes = {}
  v5:iterate("vehicle.vinePrepruner.prunerNode", function(self, savegame)
    local v3 = v3:loadPreprunerNodeFromXML(u0.xmlFile, savegame, {})
    if v3 then
      table.insert(u1.prunerNodes, {})
    end
  end)
  v2.poleAnimation = {}
  local v6 = v6:getValue("vehicle.vinePrepruner.poleAnimation#name")
  v2.poleAnimation.name = v6
  v6 = v6:getValue("vehicle.vinePrepruner.poleAnimation#speedScale", 1)
  v2.poleAnimation.speedScale = v6
  local v8 = v8:getValue("vehicle.vinePrepruner.poleAnimation#poleThreshold", 0.1)
  v2.poleAnimation.poleThreshold = 1 - v8
  v2.lastWorkTime = -10000
  v2.effectState = false
  if self.isClient then
    local v5 = v5:loadEffect(self.xmlFile, "vehicle.vinePrepruner.effect", self.components, self, self.i3dMappings)
    v2.effects = v5
  end
  v5 = self:getNextDirtyFlag()
  v2.dirtyFlag = v5
end
function VinePrepruner:onDelete()
  v2:deleteEffects(self.spec_vinePrepruner.effects)
end
function VinePrepruner.onReadStream(v0, v1, v2)
  VinePrepruner.readPrePrunerFromStream(v0, v1, true)
end
function VinePrepruner.onWriteStream(v0, v1, v2)
  VinePrepruner.writePrePrunerToStream(v0, v1)
end
function VinePrepruner.onReadUpdateStream(v0, v1, v2, v3)
  local v4 = v3:getIsServer()
  if v4 then
    v4 = streamReadBool(v1)
    if v4 then
      VinePrepruner.readPrePrunerFromStream(v0, v1)
    end
  end
end
function VinePrepruner:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_vinePrepruner.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      VinePrepruner.writePrePrunerToStream(self, streamId)
    end
  end
end
function VinePrepruner:readPrePrunerFromStream(streamId, forceState)
  -- TODO: structure LOP_FORNPREP (pc 7, target 57)
  local v9 = streamReadUIntN(streamId, self.spec_vinePrepruner.prunerNodes[1].numBits)
  self.spec_vinePrepruner.prunerNodes[1].transTarget = v9 / (2 ^ self.spec_vinePrepruner.prunerNodes[1].numBits - 1) * (self.spec_vinePrepruner.prunerNodes[1].transMax - self.spec_vinePrepruner.prunerNodes[1].transMin) + self.spec_vinePrepruner.prunerNodes[1].transMin
  if forceState then
    self.spec_vinePrepruner.prunerNodes[1].curTrans[self.spec_vinePrepruner.prunerNodes[1].axis] = self.spec_vinePrepruner.prunerNodes[1].transTarget
    setTranslation(self.spec_vinePrepruner.prunerNodes[1].node, self.spec_vinePrepruner.prunerNodes[1].curTrans[1], self.spec_vinePrepruner.prunerNodes[1].curTrans[2], self.spec_vinePrepruner.prunerNodes[1].curTrans[3])
  end
  -- TODO: structure LOP_FORNLOOP (pc 56, target 8)
  local v4 = streamReadBool(streamId)
  if v4 ~= v3.effectState then
    v3.effectState = v4
    if v4 then
      v5:setFruitType(v3.effects, v3.fruitTypeIndex)
      v5:startEffects(v3.effects)
      return
    end
    v5:stopEffects(v3.effects)
  end
end
function VinePrepruner:writePrePrunerToStream(streamId)
  -- TODO: structure LOP_FORNPREP (pc 7, target 35)
  streamWriteUIntN(streamId, (self.spec_vinePrepruner.prunerNodes[1].transTarget - self.spec_vinePrepruner.prunerNodes[1].transMin) / (self.spec_vinePrepruner.prunerNodes[1].transMax - self.spec_vinePrepruner.prunerNodes[1].transMin) * (2 ^ self.spec_vinePrepruner.prunerNodes[1].numBits - 1), self.spec_vinePrepruner.prunerNodes[1].numBits)
  -- TODO: structure LOP_FORNLOOP (pc 34, target 8)
  streamWriteBool(streamId, self.spec_vinePrepruner.effectState)
end
function VinePrepruner:onUpdate(dt, isActive, isActiveForInput, isSelected)
  -- TODO: structure LOP_FORNPREP (pc 7, target 68)
  local v10 = self:getIsPreprunerNodeActive(self.spec_vinePrepruner.prunerNodes[1])
  if v10 and self.spec_vinePrepruner.prunerNodes[1].transTarget ~= self.spec_vinePrepruner.prunerNodes[1].curTrans[self.spec_vinePrepruner.prunerNodes[1].axis] then
    local v11 = MathUtil.sign(self.spec_vinePrepruner.prunerNodes[1].transTarget - self.spec_vinePrepruner.prunerNodes[1].curTrans[self.spec_vinePrepruner.prunerNodes[1].axis])
    if 0 <= v11 then
      -- if math.min then goto L39 end
    end
    local v15 = math.max(v10 + v9.transSpeed * dt * v11, v9.transTarget)
    v9.curTrans[v9.axis] = v15
    setTranslation(v9.node, v9.curTrans[1], v9.curTrans[2], v9.curTrans[3])
  end
  -- TODO: structure LOP_FORNLOOP (pc 67, target 8)
  if self.isServer then
    if g_time >= v5.lastWorkTime + 1000 then
    end
    if true ~= v5.effectState then
      v5.effectState = true
      if self.isClient then
        if true then
          v7:setFruitType(v5.effects, v5.fruitTypeIndex)
          v7:startEffects(v5.effects)
        else
          v7:stopEffects(v5.effects)
        end
      end
      self:raiseDirtyFlags(v5.dirtyFlag)
    end
  end
end
function VinePrepruner:onTurnedOff()
  self:cancelVineDetection()
end
function VinePrepruner:onAnimationPartChanged(node)
  -- TODO: structure LOP_FORNPREP (pc 7, target 30)
  if self.spec_vinePrepruner.prunerNodes[1].node == node then
    local v10, v11, v12 = getTranslation(self.spec_vinePrepruner.prunerNodes[1].node)
    self.spec_vinePrepruner.prunerNodes[1].curTrans[1] = v10
    self.spec_vinePrepruner.prunerNodes[1].curTrans[2] = v11
    self.spec_vinePrepruner.prunerNodes[1].curTrans[3] = v12
  end
  -- TODO: structure LOP_FORNLOOP (pc 29, target 8)
end
function VinePrepruner:loadPreprunerNodeFromXML(xmlFile, key, prunerNode)
  local v4 = v4:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  prunerNode.node = v4
  if prunerNode.node ~= nil then
    v4 = v4:getValue(key .. "#offset", 0.5)
    prunerNode.offset = v4
    v4 = v4:getValue(key .. "#axis", 1)
    prunerNode.axis = v4
    v4 = v4:getValue(key .. "#direction", 1)
    prunerNode.direction = v4
    v4 = v4:getValue(key .. "#transMin", 0)
    prunerNode.transMin = v4
    v4 = v4:getValue(key .. "#transMax", 1)
    prunerNode.transMax = v4
    local v5 = v5:getValue(key .. "#transSpeed", 0.5)
    prunerNode.transSpeed = v5 / 1000
    v5 = getTranslation(prunerNode.node)
    prunerNode.curTrans = {}
    prunerNode.transTarget = prunerNode.curTrans[prunerNode.axis]
    v4 = v4:getValue(key .. "#numBits", 8)
    prunerNode.numBits = v4
    return true
  end
  return false
end
function VinePrepruner.getIsPreprunerNodeActive(v0, v1)
  return true
end
function VinePrepruner:getCanStartVineDetection(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    return false
  end
  v2 = self:getIsTurnedOn()
  if not v2 then
    return false
  end
  if self.movingDirection == 0 then
    return false
  end
  return true
end
function VinePrepruner:getIsValidVinePlaceable(superFunc, placeable)
  local v3 = superFunc(self, placeable)
  if not v3 then
    return false
  end
  local v4 = placeable:getVineFruitType()
  if v4 ~= self.spec_vinePrepruner.fruitTypeIndex then
    return false
  end
  return true
end
function VinePrepruner:handleVinePlaceable(superFunc, node, placeable, x, y, z, distance)
  local v8 = superFunc(self, node, placeable, x, y, z, distance)
  if not v8 then
    return false
  end
  if placeable ~= nil then
    local v9, v10, v11 = self:getFirstVineHitPosition()
    local v12, v13, v14 = self:getCurrentVineHitPosition()
    local v15 = placeable:prepareVine(node, v9, v10, v11, v12, v13, v14)
    if 0 < v15 then
      self.spec_vinePrepruner.lastWorkTime = g_time
    end
    if v8.poleAnimation.name ~= nil then
      local v16, v17, v18 = worldToLocal(node, v9, v10, v11)
      local v19, v20, v21 = worldToLocal(node, v12, v13, v14)
      local v23 = MathUtil.sign(v21 - v18)
      if 0 <= v23 then
      else
      end
      local v24 = placeable:getPanelLength()
      if v22 < 0 then
      end
      v24 = self:getIsAnimationPlaying(v8.poleAnimation.name)
      if not v24 then
        if v8.poleAnimation.poleThreshold < v23 then
          v24 = self:getAnimationTime(v8.poleAnimation.name)
          -- if v24 >= 0.5 then goto L136 end
          self:playAnimation(v8.poleAnimation.name, v8.poleAnimation.speedScale)
        else
          v24 = self:getAnimationTime(v8.poleAnimation.name)
          if 0.5 < v24 then
            self:playAnimation(v8.poleAnimation.name, -v8.poleAnimation.speedScale)
          end
        end
      end
    end
    -- TODO: structure LOP_FORNPREP (pc 141, target 166)
    v20 = MathUtil.clamp((distance - v8.prunerNodes[1].offset) * v8.prunerNodes[1].direction, v8.prunerNodes[1].transMin, v8.prunerNodes[1].transMax)
    v8.prunerNodes[1].transTarget = v20
    self:raiseDirtyFlags(v8.dirtyFlag)
    -- TODO: structure LOP_FORNLOOP (pc 165, target 142)
    return true
  end
  return false
end
function VinePrepruner:getAIImplementUseVineSegment(v1, v2, v3, v4)
  if 0 <= v4 then
    return v2:getHasSegmentTargetGrowthState(v3, self.spec_vinePrepruner.fruitTypeIndex, false, true)
  end
  return false
end
function VinePrepruner:doCheckSpeedLimit(superFunc)
  local v2 = superFunc(self)
  if not v2 then
    v2 = self:getIsTurnedOn()
  end
  return v2
end
function VinePrepruner.getDefaultSpeedLimit()
  return 5
end
