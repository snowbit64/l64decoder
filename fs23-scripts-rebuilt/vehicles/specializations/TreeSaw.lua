-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TreeSaw = {}
function TreeSaw.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
end
function TreeSaw.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("TreeSaw")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.treeSaw.sounds", "cut")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.treeSaw.sounds", "saw")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.treeSaw.animationNodes")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.treeSaw.effects")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.treeSaw.cutNode#node", "Cut node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.treeSaw.cutNode#sizeY", "Size Y", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.treeSaw.cutNode#sizeZ", "Size Z", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.treeSaw.cutNode#lengthAboveThreshold", "Min. tree length above cut node", 0.3)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.treeSaw.cutNode#lengthBelowThreshold", "Min. tree length below cut node", 0.3)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.treeSaw.cutNode#timer", "Cut delay (sec.)", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function TreeSaw.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", TreeSaw)
  SpecializationUtil.registerEventListener(v0, "onDelete", TreeSaw)
  SpecializationUtil.registerEventListener(v0, "onReadUpdateStream", TreeSaw)
  SpecializationUtil.registerEventListener(v0, "onWriteUpdateStream", TreeSaw)
  SpecializationUtil.registerEventListener(v0, "onUpdate", TreeSaw)
  SpecializationUtil.registerEventListener(v0, "onUpdateTick", TreeSaw)
  SpecializationUtil.registerEventListener(v0, "onDraw", TreeSaw)
  SpecializationUtil.registerEventListener(v0, "onDeactivate", TreeSaw)
  SpecializationUtil.registerEventListener(v0, "onTurnedOn", TreeSaw)
  SpecializationUtil.registerEventListener(v0, "onTurnedOff", TreeSaw)
end
function TreeSaw:onLoad(v1)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.turnedOnRotationNodes.turnedOnRotationNode", "vehicle.treeSaw.animationNodes.animationNode", "stumbCutter")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.treeSaw.cutParticleSystems.emitterShape(0)", "vehicle.treeSaw.effects.effectNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.treeSaw.sawSound", "vehicle.treeSaw.sounds.saw")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.treeSaw.cutSound", "vehicle.treeSaw.sounds.cut")
  if self.isClient then
    local v3 = v3:loadAnimations(self.xmlFile, "vehicle.treeSaw" .. ".animationNodes", self.components, self, self.i3dMappings)
    self.spec_treeSaw.animationNodes = v3
    v3 = v3:loadEffect(self.xmlFile, "vehicle.treeSaw" .. ".effects", self.components, self, self.i3dMappings)
    self.spec_treeSaw.effects = v3
    self.spec_treeSaw.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.treeSaw" .. ".sounds", "cut", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_treeSaw.samples.cut = v4
    v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.treeSaw" .. ".sounds", "saw", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_treeSaw.samples.saw = v4
  end
  v3 = v3:getValue("vehicle.treeSaw" .. ".cutNode#node", nil, self.components, self.i3dMappings)
  v2.cutNode = v3
  v3 = v3:getValue("vehicle.treeSaw" .. ".cutNode#sizeY", 1)
  v2.cutSizeY = v3
  v3 = v3:getValue("vehicle.treeSaw" .. ".cutNode#sizeZ", 1)
  v2.cutSizeZ = v3
  v3 = v3:getValue("vehicle.treeSaw" .. ".cutNode#lengthAboveThreshold", 0.3)
  v2.lengthAboveThreshold = v3
  v3 = v3:getValue("vehicle.treeSaw" .. ".cutNode#lengthBelowThreshold", 0.3)
  v2.lengthBelowThreshold = v3
  v4 = v4:getValue("vehicle.treeSaw" .. ".cutNode#timer", 1)
  v2.cutTimerDuration = v4 * 1000
  v2.curSplitShape = nil
  v2.cutTimer = -1
  v2.isCutting = false
  v2.warnTreeNotOwned = false
end
function TreeSaw:onDelete()
  v2:deleteEffects(self.spec_treeSaw.effects)
  v2:deleteSamples(self.spec_treeSaw.samples)
  v2:deleteAnimations(self.spec_treeSaw.animationNodes)
end
function TreeSaw:onReadUpdateStream(v1, v2, v3)
  local v4 = v3:getIsServer()
  if v4 then
    local v5 = streamReadBool(v1)
    self.spec_treeSaw.isCutting = v5
  end
end
function TreeSaw:onWriteUpdateStream(v1, v2, v3)
  local v4 = v2:getIsServer()
  if not v4 then
    streamWriteBool(v1, self.spec_treeSaw.isCutting)
  end
end
function TreeSaw:onUpdate(v1, v2, v3, v4)
  if self.isServer then
    if self.spec_treeSaw.curSplitShape ~= nil then
      local v6 = entityExists(self.spec_treeSaw.curSplitShape)
      if not v6 then
        self.spec_treeSaw.curSplitShape = nil
        if g_server ~= nil then
          self.spec_treeSaw.cutTimer = -1
        end
      end
    end
    if v5.curSplitShape == nil then
    end
    v5.isCutting = true
    if v5.curSplitShape ~= nil then
      if 0 < v5.cutTimer then
        v6 = math.max(v5.cutTimer - v1, 0)
        v5.cutTimer = v6
      end
      if v5.cutTimer == 0 then
        v5.cutTimer = -1
        local v6, v7, v8 = getWorldTranslation(v5.cutNode)
        local v9, v10, v11 = localDirectionToWorld(v5.cutNode, 1, 0, 0)
        local v12, v13, v14 = localDirectionToWorld(v5.cutNode, 0, 1, 0)
        local v28 = self:getActiveFarm()
        ChainsawUtil.cutSplitShape(...)
        v5.curSplitShape = nil
      end
    end
  end
  if self.isClient then
    if 0 < v5.cutTimer then
      v6:setFillType(v5.effects, FillType.WOODCHIPS)
      v6:startEffects(v5.effects)
      v6 = v6:getIsSamplePlaying(v5.samples.cut)
      -- if v6 then goto L175 end
      v6:playSample(v5.samples.cut)
      return
    end
    v6:stopEffects(v5.effects)
    v6 = v6:getIsSamplePlaying(v5.samples.cut)
    if v6 then
      v6:stopSample(v5.samples.cut)
    end
  end
end
function TreeSaw:onUpdateTick(v1, v2, v3, v4)
  self.spec_treeSaw.warnTreeNotOwned = false
  local v6 = self:getIsTurnedOn()
  if v6 and self.spec_treeSaw.cutNode ~= nil then
    local v6, v7, v8 = getWorldTranslation(self.spec_treeSaw.cutNode)
    local v9, v10, v11 = localDirectionToWorld(self.spec_treeSaw.cutNode, 1, 0, 0)
    local v12, v13, v14 = localDirectionToWorld(self.spec_treeSaw.cutNode, 0, 1, 0)
    if self.spec_treeSaw.curSplitShape == nil then
      local v15, v16, v17, v18, v19 = findSplitShape(v6, v7, v8, v9, v10, v11, v12, v13, v14, self.spec_treeSaw.cutSizeY, self.spec_treeSaw.cutSizeZ)
      if v15 ~= 0 then
        local v22 = self:getActiveFarm()
        local v20 = v20:canFarmAccessLand(v22, v6, v8)
        if v20 then
          self.spec_treeSaw.curSplitShape = v15
          self.spec_treeSaw.cutTimer = self.spec_treeSaw.cutTimerDuration
        else
          self.spec_treeSaw.warnTreeNotOwned = true
        end
      end
    end
    if v5.curSplitShape ~= nil then
      v15, v16, v17, v18 = testSplitShape(v5.curSplitShape, v6, v7, v8, v9, v10, v11, v12, v13, v14, v5.cutSizeY, v5.cutSizeZ)
      if v15 == nil then
        v5.curSplitShape = nil
      else
        local v20, v21, v22 = localToLocal(v5.cutNode, v5.curSplitShape, 0, v15, v17)
        if not false and v21 >= 0.01 then
        end
        local v23, v24, v25 = localToLocal(v5.cutNode, v5.curSplitShape, 0, v15, v18)
        if not v23 and v24 >= 0.01 then
        end
        v23, v24, v25 = localToLocal(v5.cutNode, v5.curSplitShape, 0, v16, v17)
        if not v23 and v24 >= 0.01 then
        end
        v23, v24, v25 = localToLocal(v5.cutNode, v5.curSplitShape, 0, v16, v18)
        if not v23 and v24 >= 0.01 then
        end
        if v23 then
          v5.curSplitShape = nil
        end
      end
    end
    if v5.curSplitShape ~= nil then
      v15, v16 = getSplitShapePlaneExtents(v5.curSplitShape, v6, v7, v8, v9, v10, v11)
      if v16 >= v5.lengthAboveThreshold then
        -- if v15 >= v5.lengthBelowThreshold then goto L217 end
      end
      v5.curSplitShape = nil
    end
    if v5.curSplitShape == nil and -1 < v5.cutTimer then
      v5.cutTimer = -1
    end
  end
end
function TreeSaw:onDraw(v1, v2, v3)
  if self.spec_treeSaw.isCutting then
    local v7 = v7:getText("info_cutting")
    v5:addExtraPrintText(...)
  end
  if v4.warnTreeNotOwned then
    v7 = v7:getText("warning_youDontHaveAccessToThisLand")
    v5:showBlinkingWarning(v7, 1000)
  end
end
function TreeSaw:onDeactivate()
  self.spec_treeSaw.curSplitShape = nil
  self.spec_treeSaw.cutTimer = -1
end
function TreeSaw:onTurnedOn()
  if self.isClient then
    v2:startAnimations(self.spec_treeSaw.animationNodes)
    v2:playSample(self.spec_treeSaw.samples.saw)
  end
end
function TreeSaw:onTurnedOff()
  self.spec_treeSaw.curSplitShape = nil
  self.spec_treeSaw.cutTimer = -1
  if self.isClient then
    v2:stopAnimations(self.spec_treeSaw.animationNodes)
    v2:stopEffects(self.spec_treeSaw.effects)
    v2:stopSamples(self.spec_treeSaw.samples)
  end
end
