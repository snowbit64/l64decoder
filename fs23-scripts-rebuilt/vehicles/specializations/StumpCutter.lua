-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StumpCutter = {}
function StumpCutter.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
end
function StumpCutter.initSpecialization()
  v0:addWorkAreaType("stumpCutter", true)
  Vehicle.xmlSchema:setXMLSpecializationType("StumpCutter")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.stumpCutter.cutNode(?)#node", "Cut node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.stumpCutter.cutNode(?)#cutSizeY", "Cut size Y", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.stumpCutter.cutNode(?)#cutSizeZ", "Cut size X", 1)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.stumpCutter.cutNode(?)#maxCutTime", "Time until cut", 4)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.stumpCutter.cutNode(?)#maxResetCutTime", "Time between cuts", 4)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.stumpCutter.cutNode(?)#cutFullTreeThreshold", "If the tree length below the cut node is smaller than this value it gets removed", 0.4)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.stumpCutter.cutNode(?)#cutPartThreshold", "Cut part threshold", 0.2)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.stumpCutter.cutNode(?)#workAreaIndex", "Work area index")
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.stumpCutter.cutNode(?)#cutDuration", "Cut duration", 1)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.stumpCutter.cutNode(?).effects")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.stumpCutter.sounds", "start")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.stumpCutter.sounds", "stop")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.stumpCutter.sounds", "idle")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.stumpCutter.sounds", "work")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.stumpCutter.effects")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.stumpCutter.animationNodes")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function StumpCutter.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "crushSplitShape", StumpCutter.crushSplitShape)
  SpecializationUtil.registerFunction(vehicleType, "stumpCutterSplitShapeCallback", StumpCutter.stumpCutterSplitShapeCallback)
  SpecializationUtil.registerFunction(vehicleType, "processStumpCutterArea", StumpCutter.processStumpCutterArea)
end
function StumpCutter.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", StumpCutter.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", StumpCutter.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCultivatorLimitToField", StumpCutter.getCultivatorLimitToField)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getPlowLimitToField", StumpCutter.getPlowLimitToField)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getPlowForceLimitToField", StumpCutter.getPlowForceLimitToField)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getConsumingLoad", StumpCutter.getConsumingLoad)
end
function StumpCutter.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", StumpCutter)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", StumpCutter)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", StumpCutter)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", StumpCutter)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", StumpCutter)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", StumpCutter)
end
function StumpCutter:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode", "vehicle.stumpCutter.animationNodes.animationNode", "stumbCutter")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutterStartSound", "vehicle.stumpCutter.sounds.start")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutterIdleSound", "vehicle.stumpCutter.sounds.idle")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutterWorkSound", "vehicle.stumpCutter.sounds.work")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutterStopSound", "vehicle.stumpCutter.sounds.stop")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutter.emitterShape(0)", "vehicle.stumpCutter.effects.effectNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutter.particleSystem(0)", "vehicle.stumpCutter.effects.effectNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutter#cutNode", "vehicle.stumpCutter.cutNode#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutter#cutSizeY", "vehicle.stumpCutter.cutNode#cutSizeY")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutter#cutSizeZ", "vehicle.stumpCutter.cutNode#cutSizeZ")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutter#cutFullTreeThreshold", "vehicle.stumpCutter.cutNode#cutFullTreeThreshold")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.stumpCutter#cutPartThreshold", "vehicle.stumpCutter.cutNode#cutPartThreshold")
  self.spec_stumpCutter.cutNodes = {}
  self.spec_stumpCutter.currentCutNodeIndex = 1
  while true do
    v4 = string.format("%s.cutNode(%d)", "vehicle.stumpCutter", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v5 = v5:getValue(v4 .. "#node", nil, self.components, self.i3dMappings)
    if v5 == nil then
      Logging.xmlWarning(self.xmlFile, "Missing 'node' for '%s'!", v4)
      break
    end
    v7 = v7:getValue(v4 .. "#cutSizeY", 1)
    v7 = v7:getValue(v4 .. "#cutSizeZ", 1)
    v7 = v7:getValue(v4 .. "#maxCutTime", 4)
    v7 = v7:getValue(v4 .. "#maxResetCutTime", 1)
    v7 = v7:getValue(v4 .. "#cutFullTreeThreshold", 0.4)
    v7 = v7:getValue(v4 .. "#cutPartThreshold", 0.2)
    v7 = v7:getValue(v4 .. "#workAreaIndex")
    v7 = v7:getValue(v4 .. "#cutDuration", 1)
    if self.isClient then
      v7 = v7:loadEffect(self.xmlFile, v4 .. ".effects", self.components, self, self.i3dMappings)
    end
    table.insert(v2.cutNodes, v6)
  end
  if self.isClient then
    v2.samples = {}
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.stumpCutter" .. ".sounds", "start", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.start = v5
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.stumpCutter" .. ".sounds", "stop", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.stop = v5
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.stumpCutter" .. ".sounds", "idle", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.idle = v5
    v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.stumpCutter" .. ".sounds", "work", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.work = v5
    v2.maxWorkFadeTime = 1000
    v2.workFadeTime = 0
    v4 = v4:loadEffect(self.xmlFile, "vehicle.stumpCutter" .. ".effects", self.components, self, self.i3dMappings)
    v2.effects = v4
    v4 = v4:loadAnimations(self.xmlFile, "vehicle.stumpCutter" .. ".animationNodes", self.components, self, self.i3dMappings)
    v2.animationNodes = v4
  end
end
function StumpCutter:onDelete()
  v2:deleteSamples(self.spec_stumpCutter.samples)
  v2:deleteAnimations(self.spec_stumpCutter.animationNodes)
  v2:deleteEffects(self.spec_stumpCutter.effects)
  if self.spec_stumpCutter.cutNodes ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 32, target 44)
    v5:deleteEffects(self.spec_stumpCutter.cutNodes[1].effects)
    -- TODO: structure LOP_FORNLOOP (pc 43, target 33)
  end
end
function StumpCutter:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v5 = self:getIsTurnedOn()
  if v5 and 0 < #self.spec_stumpCutter.cutNodes then
    if #self.spec_stumpCutter.cutNodes < self.spec_stumpCutter.currentCutNodeIndex + 1 then
    end
    v5.currentCutNodeIndex = v7
    v5.cutNodes[v7].curLenAbove = 0
    v5.cutNodes[v7].curLenBelow = 0
    local v9, v10, v11 = getWorldTranslation(v5.cutNodes[v7].node)
    local v12, v13, v14 = localDirectionToWorld(v5.cutNodes[v7].node, 1, 0, 0)
    local v15, v16, v17 = localDirectionToWorld(v5.cutNodes[v7].node, 0, 1, 0)
    if v5.cutNodes[v7].curSplitShape ~= nil then
      local v18 = testSplitShape(v5.cutNodes[v7].curSplitShape, v9, v10, v11, v12, v13, v14, v15, v16, v17, v5.cutNodes[v7].cutSizeY, v5.cutNodes[v7].cutSizeZ)
      if v18 == nil then
        v5.cutNodes[v7].curSplitShape = nil
      end
    end
    if v8.curSplitShape == nil then
      local v18, v19, v20, v21, v22 = findSplitShape(v9, v10, v11, v12, v13, v14, v15, v16, v17, v8.cutSizeY, v8.cutSizeZ)
      if v18 ~= 0 then
        v8.curSplitShape = v18
      end
    end
    if VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES then
      v18, v19, v20 = localToWorld(v8.node, 0, 0, v8.cutSizeZ)
      local v21, v22, v23 = localToWorld(v8.node, 0, v8.cutSizeY, 0)
      DebugUtil.drawDebugAreaRectangle(v9, v10, v11, v18, v19, v20, v21, v22, v23, false, 0.5924, 0.1871, 0.3723)
    end
    if v8.curSplitShape ~= nil then
      v18, v19 = getSplitShapePlaneExtents(v8.curSplitShape, v9, v10, v11, v12, v13, v14)
      if v8.cutPartThreshold <= v19 then
        v8.lastWorkTime = g_time
      end
      v20 = math.min(v8.maxWorkFadeTime, v8.workFadeTime + dt * v6)
      v8.workFadeTime = v20
      -- if not v0.isServer then goto L318 end
      v8.resetCutTime = v8.maxResetCutTime
      -- if 0 >= v8.nextCutTime then goto L318 end
      v8.nextCutTime = v8.nextCutTime - dt
      -- if v8.nextCutTime > 0 then goto L318 end
      v20, v21, v22 = worldToLocal(v8.curSplitShape, v9, v10, v11)
      if v18 > v8.cutFullTreeThreshold then
        -- if v21 >= v8.cutPartThreshold + 0.01 then goto L228 end
      end
      if v19 < 1 then
        self:crushSplitShape(v8.curSplitShape)
        v8.curSplitShape = nil
        -- goto L318  (LOP_JUMP +90)
      end
      if v8.cutPartThreshold <= v19 and v8.cutPartThreshold <= v18 then
        v8.nextCutTime = v8.maxCutTime
        v8.curSplitShape = nil
        v8.curLenAbove = v19
        v8.curLenBelow = v18
        self.shapeBeingCut = v8.curSplitShape
        splitShape(v8.curSplitShape, v9, v10, v11, v12, v13, v14, v15, v16, v17, v8.cutSizeY, v8.cutSizeZ, "stumpCutterSplitShapeCallback", self)
        v24:removingSplitShape(v8.curSplitShape)
        -- goto L318  (LOP_JUMP +41)
      end
      v8.curSplitShape = nil
      v8.nextCutTime = v8.maxCutTime
    else
      v18 = math.max(0, v8.workFadeTime - dt)
      v8.workFadeTime = v18
      if self.isServer and 0 < v8.resetCutTime then
        v8.resetCutTime = v8.resetCutTime - dt
        if v8.resetCutTime <= 0 then
          v8.nextCutTime = v8.maxCutTime
        end
      end
    end
    if self.isClient then
      if g_time < v8.lastWorkTime + 500 then
        v18:setFillType(v8.effects, FillType.WOODCHIPS)
        v18:startEffects(v8.effects)
      else
        v18:stopEffects(v8.effects)
      end
      -- TODO: structure LOP_FORNPREP (pc 358, target 372)
      if g_time < v5.cutNodes[1].lastWorkTime + 500 then
      else
        -- TODO: structure LOP_FORNLOOP (pc 371, target 359)
      end
      if v18 then
        v19:setFillType(v5.effects, FillType.WOODCHIPS)
        v19:startEffects(v5.effects)
        v19 = v19:getIsSamplePlaying(v5.samples.work)
        -- if v19 then goto L435 end
        v19:playSample(v5.samples.work)
        return
      end
      v19:stopEffects(v5.effects)
      v19 = v19:getIsSamplePlaying(v5.samples.work)
      if v19 then
        v19:stopSample(v5.samples.work)
      end
    end
  end
end
function StumpCutter:onDeactivate()
  if self.isClient then
    v2:stopEffects(self.spec_stumpCutter.effects)
    -- TODO: structure LOP_FORNPREP (pc 17, target 29)
    v5:stopEffects(self.spec_stumpCutter.cutNodes[1].effects)
    -- TODO: structure LOP_FORNLOOP (pc 28, target 18)
  end
end
function StumpCutter:onTurnedOn()
  if self.isClient then
    v2:stopSamples(self.spec_stumpCutter.samples)
    v2:playSample(self.spec_stumpCutter.samples.start)
    v2:playSample(self.spec_stumpCutter.samples.idle, 0, self.spec_stumpCutter.samples.start)
    v2:startAnimations(self.spec_stumpCutter.animationNodes)
  end
end
function StumpCutter:onTurnedOff()
  if self.isClient then
    self.spec_stumpCutter.workFadeTime = 0
    v2:stopEffects(self.spec_stumpCutter.effects)
    -- TODO: structure LOP_FORNPREP (pc 20, target 32)
    v5:stopEffects(self.spec_stumpCutter.cutNodes[1].effects)
    -- TODO: structure LOP_FORNLOOP (pc 31, target 21)
    v2:stopSamples(self.spec_stumpCutter.samples)
    v2:playSample(self.spec_stumpCutter.samples.stop)
    v2:stopAnimations(self.spec_stumpCutter.animationNodes)
  end
end
function StumpCutter:crushSplitShape(shape)
  if self.isServer then
    local v2, v3, v4 = getWorldTranslation(shape)
    delete(shape)
    v5:setCollisionMapAreaDirty(v2 - 10, v4 - 10, v2 + 10, v4 + 10, true)
    v5:setAreaDirty(v2 - 10, v2 + 10, v4 - 10, v4 + 10)
  end
end
function StumpCutter:stumpCutterSplitShapeCallback(shape, isBelow, isAbove, minY, maxY, minZ, maxZ)
  if not isBelow then
    if self.spec_stumpCutter.cutNodes[self.spec_stumpCutter.currentCutNodeIndex].curLenAbove < 1 then
      self:crushSplitShape(shape)
      return
    end
    v10:addingSplitShape(shape, self.shapeBeingCut)
    return
  end
  local v12, v13, v14 = localToWorld(v9.node, -0.05, minY + (maxY - minY) / 2, minZ + (maxZ - minZ) / 2)
  local v17 = getWorldTranslation(v9.node)
  local v15 = getTerrainHeightAtWorldPos(...)
  if v13 < v15 then
    self:crushSplitShape(shape)
    return
  end
  v8.curSplitShape = shape
  v16:addingSplitShape(shape, self.shapeBeingCut)
end
function StumpCutter:processStumpCutterArea(workArea, dt)
  for v9, v10 in ipairs(self.spec_stumpCutter.cutNodes) do
    if not (v10.workAreaIndex == workArea.index) then
      continue
    end
    local v11, v12, v13 = getWorldTranslation(workArea.start)
    local v14, v15, v16 = getWorldTranslation(workArea.width)
    local v17, v18, v19 = getWorldTranslation(workArea.height)
    local v20, v21, v22 = FSDensityMapUtil.clearDecoArea(v11, v13, v14, v16, v17, v19)
    if 0 < v20 and v22 then
      v10.lastWorkTime = g_time
    end
  end
  return v4, v5
end
function StumpCutter:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_stumpCutter.curSplitShape ~= nil then
    local v4 = self:getWorkDirtMultiplier()
  end
  return multiplier
end
function StumpCutter:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if self.spec_stumpCutter.curSplitShape ~= nil then
    local v4 = self:getWorkWearMultiplier()
  end
  return multiplier
end
function StumpCutter.getCultivatorLimitToField(v0, v1)
  return false
end
function StumpCutter.getPlowLimitToField(v0)
  return false
end
function StumpCutter.getPlowForceLimitToField(v0)
  return true
end
function StumpCutter:getConsumingLoad(superFunc)
  local v2, v3 = superFunc(self)
  -- TODO: structure LOP_FORNPREP (pc 11, target 25)
  if g_time < self.spec_stumpCutter.cutNodes[1].lastWorkTime + 500 then
  else
    -- TODO: structure LOP_FORNLOOP (pc 24, target 12)
  end
  return v2 + v5, v3 + 1
end
