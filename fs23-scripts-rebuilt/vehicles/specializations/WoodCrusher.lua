-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WoodCrusher = {DAMAGED_YIELD_DECREASE = 0.4}
function WoodCrusher.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(FillUnit, v0)
  end
  return v1
end
function WoodCrusher.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("WoodCrusher")
  WoodCrusher.registerWoodCrusherXMLPaths(Vehicle.xmlSchema, "vehicle.woodCrusher")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.woodCrusher#moveColDisableCollisionPairs", "Activate collision between move collisions and components", true)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.woodCrusher#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function WoodCrusher:registerWoodCrusherXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#cutNode", "Cut node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#mainDrumRefNode", "Main drum reference node")
  self:register(XMLValueType.FLOAT, v1 .. "#mainDrumRefNodeMaxY", "Max tree size the main drum can handle")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".moveTriggers.trigger(?)#node", "Move trigger")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".moveCollisions.collision(?)#node", "Move collision")
  self:register(XMLValueType.FLOAT, v1 .. "#moveVelocityZ", "Move velocity Z (m/s)", 0.8)
  self:register(XMLValueType.FLOAT, v1 .. "#moveMaxForce", "Move max. force (kN)", 7)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#shapeSizeDetectionNode", "At this node the tree shape size will be detected to set the #mainDrumRefNode")
  self:register(XMLValueType.FLOAT, v1 .. "#cutSizeY", "Cut size Y", 1)
  self:register(XMLValueType.FLOAT, v1 .. "#cutSizeZ", "Cut size Z", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".downForceNodes.downForceNode(?)#node", "Down force node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".downForceNodes.downForceNode(?)#trigger", "Additional trigger (If defined the tree needs to be present in the mover trigger and inside this trigger)")
  self:register(XMLValueType.FLOAT, v1 .. ".downForceNodes.downForceNode(?)#force", "Down force (kN)", 2)
  self:register(XMLValueType.FLOAT, v1 .. ".downForceNodes.downForceNode(?)#sizeY", "Size Y in which the down force node detects trees", "Cut size Y")
  self:register(XMLValueType.FLOAT, v1 .. ".downForceNodes.downForceNode(?)#sizeZ", "Size Z in which the down force node detects trees", "Cut size Z")
  self:register(XMLValueType.BOOL, v1 .. "#automaticallyTurnOn", "Automatically turned on", false)
  EffectManager.registerEffectXMLPaths(self, v1 .. ".crushEffects")
  AnimationManager.registerAnimationNodesXMLPaths(self, v1 .. ".animationNodes")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "start")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "stop")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "work")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".sounds", "idle")
end
function WoodCrusher.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "onCrushedSplitShape", WoodCrusher.onCrushedSplitShape)
end
function WoodCrusher.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDirtMultiplier", WoodCrusher.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getWearMultiplier", WoodCrusher.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeTurnedOn", WoodCrusher.getCanBeTurnedOn)
end
function WoodCrusher.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", WoodCrusher)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", WoodCrusher)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", WoodCrusher)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", WoodCrusher)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", WoodCrusher)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", WoodCrusher)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", WoodCrusher)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", WoodCrusher)
end
function WoodCrusher:onLoad(savegame)
  WoodCrusher.loadWoodCrusher(self, self.spec_woodCrusher, self.xmlFile, self.components, self.i3dMappings)
  local v3 = v3:getValue("vehicle.woodCrusher#moveColDisableCollisionPairs", true)
  if v3 then
    for v7, v8 in pairs(self.components) do
      for v12, v13 in pairs(v2.moveColNodes) do
        setPairCollision(v8.node, v13, false)
      end
    end
  end
  v4 = v4:getValue("vehicle.woodCrusher#fillUnitIndex", 1)
  v2.fillUnitIndex = v4
end
function WoodCrusher:onDelete()
  WoodCrusher.deleteWoodCrusher(self, self.spec_woodCrusher)
end
function WoodCrusher:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      self.spec_woodCrusher.crushingTime = 1000
      return
    end
    v4.crushingTime = 0
  end
end
function WoodCrusher:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    if 0 >= self.spec_woodCrusher.crushingTime then
    end
    v5(v6, true)
  end
end
function WoodCrusher:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v9 = self:getIsTurnedOn()
  WoodCrusher.updateWoodCrusher(...)
end
function WoodCrusher:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v9 = self:getIsTurnedOn()
  WoodCrusher.updateTickWoodCrusher(...)
  if self.isServer and g_currentMission.missionInfo.automaticMotorStartEnabled and self.spec_woodCrusher.turnOnAutomatically and self.setIsTurnedOn ~= nil then
    local v6 = next(self.spec_woodCrusher.moveTriggerNodes)
    if v6 ~= nil then
      if self.getIsMotorStarted ~= nil then
        v6 = self:getIsMotorStarted()
        -- if v6 then goto L67 end
        self:startMotor()
      elseif self.attacherVehicle ~= nil and self.attacherVehicle.getIsMotorStarted ~= nil then
        v6 = v6:getIsMotorStarted()
        if not v6 then
          v6:startMotor()
        end
      end
      if not self.isControlled then
        v6 = self:getIsTurnedOn()
        if not v6 then
          v6 = self:getCanBeTurnedOn()
          if v6 then
            self:setIsTurnedOn(true)
          end
        end
      end
      v5.turnOffTimer = 3000
      return
    end
    v6 = self:getIsTurnedOn()
    if v6 then
      if v5.turnOffTimer == nil then
        v5.turnOffTimer = 3000
      end
      v5.turnOffTimer = v5.turnOffTimer - dt
      if v5.turnOffTimer < 0 then
        v6 = self:getRootVehicle()
        if not v6.isControlled then
          if self.getIsMotorStarted ~= nil then
            local v7 = self:getIsMotorStarted()
            if v7 then
              self:stopMotor()
            end
          end
          self:setIsTurnedOn(false)
        end
      end
    end
  end
end
function WoodCrusher:onTurnedOn()
  WoodCrusher.turnOnWoodCrusher(self, self.spec_woodCrusher)
end
function WoodCrusher:onTurnedOff()
  WoodCrusher.turnOffWoodCrusher(self, self.spec_woodCrusher)
end
function WoodCrusher:getCanBeTurnedOn(superFunc)
  if self.spec_woodCrusher.turnOnAutomatically then
    return false
  end
  return superFunc(self)
end
function WoodCrusher:getDirtMultiplier(superFunc)
  local multiplier = superFunc(self)
  if 0 < self.spec_woodCrusher.crushingTime then
    local isSelected = self:getWorkDirtMultiplier()
  end
  return multiplier
end
function WoodCrusher:getWearMultiplier(superFunc)
  local multiplier = superFunc(self)
  if 0 < self.spec_woodCrusher.crushingTime then
    local isSelected = self:getWorkWearMultiplier()
  end
  return multiplier
end
function WoodCrusher:onCrushedSplitShape(splitType, volume)
  local damage = self:getVehicleDamage()
  if 0 < damage then
  end
  local v7 = self:getOwnerFarmId()
  self:addFillUnitFillLevel(v7, isActiveForInputIgnoreSelection.fillUnitIndex, volume * splitType.volumeToLiter * splitType.woodChipsPerLiter, FillType.WOODCHIPS, ToolType.UNDEFINED)
end
function WoodCrusher:loadWoodCrusher(woodCrusher, xmlFile, rootNode, i3dMappings)
  woodCrusher.vehicle = self
  woodCrusher.woodCrusherSplitShapeCallback = WoodCrusher.woodCrusherSplitShapeCallback
  woodCrusher.woodCrusherMoveTriggerCallback = WoodCrusher.woodCrusherMoveTriggerCallback
  woodCrusher.woodCrusherDownForceTriggerCallback = WoodCrusher.woodCrusherDownForceTriggerCallback
  local xmlRoot = xmlFile:getRootName()
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusher.moveTrigger(0)#index", xmlRoot .. ".woodCrusher.moveTriggers.trigger#node")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusher.moveCollision(0)#index", xmlRoot .. ".woodCrusher.moveCollisions.collision#node")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusher.emitterShape(0)", xmlRoot .. ".woodCrusher.crushEffects with effectClass 'ParticleEffect'")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusherStartSound", xmlRoot .. ".woodCrusher.sounds.start")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusherIdleSound", xmlRoot .. ".woodCrusher.sounds.idle")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusherWorkSound", xmlRoot .. ".woodCrusher.sounds.work")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusherStopSound", xmlRoot .. ".woodCrusher.sounds.stop")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".turnedOnRotationNodes.turnedOnRotationNode#type", xmlRoot .. ".woodCrusher.animationNodes.animationNode", "woodCrusher")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".turnedOnScrollers.turnedOnScroller", xmlRoot .. ".woodCrusher.animationNodes.animationNode")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusher" .. "#downForceNode", xmlRoot .. ".woodCrusher" .. ".downForceNodes.downForceNode#node")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusher" .. "#downForce", xmlRoot .. ".woodCrusher" .. ".downForceNodes.downForceNode#force")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusher" .. "#downForceSizeY", xmlRoot .. ".woodCrusher" .. ".downForceNodes.downForceNode#sizeY")
  XMLUtil.checkDeprecatedXMLElements(xmlFile, xmlRoot .. ".woodCrusher" .. "#downForceSizeZ", xmlRoot .. ".woodCrusher" .. ".downForceNodes.downForceNode#sizeZ")
  local v7 = xmlFile:getValue(xmlRoot .. ".woodCrusher" .. "#cutNode", nil, rootNode, i3dMappings)
  woodCrusher.cutNode = v7
  v7 = xmlFile:getValue(xmlRoot .. ".woodCrusher" .. "#mainDrumRefNode", nil, rootNode, i3dMappings)
  woodCrusher.mainDrumRefNode = v7
  v7 = xmlFile:getValue(xmlRoot .. ".woodCrusher" .. "#mainDrumRefNodeMaxY", math.huge)
  woodCrusher.mainDrumRefNodeMaxY = v7
  if woodCrusher.mainDrumRefNode ~= nil then
    v7 = createTransformGroup("mainDrumRefNodeParent")
    local v9 = getParent(woodCrusher.mainDrumRefNode)
    local v11 = getChildIndex(woodCrusher.mainDrumRefNode)
    link(...)
    local v10 = getTranslation(woodCrusher.mainDrumRefNode)
    setTranslation(...)
    v10 = getRotation(woodCrusher.mainDrumRefNode)
    setRotation(...)
    link(v7, woodCrusher.mainDrumRefNode)
    setTranslation(woodCrusher.mainDrumRefNode, 0, 0, 0)
    setRotation(woodCrusher.mainDrumRefNode, 0, 0, 0)
  end
  woodCrusher.moveTriggers = {}
  while true do
    v8 = string.format("%s.moveTriggers.trigger(%d)", v6, v7)
    v9 = xmlFile:hasProperty(v8)
    if not v9 then
      break
    end
    v9 = xmlFile:getValue(v8 .. "#node", nil, rootNode, i3dMappings)
    if v9 ~= nil then
      v10 = CollisionFlag.getHasFlagSet(v9, CollisionFlag.TREE)
      if not v10 then
        v13 = CollisionFlag.getBit(CollisionFlag.TREE)
        v14 = getName(v9)
        Logging.xmlWarning(self.xmlFile, "Missing collision mask bit '%d'. Please add this bit to move trigger node '%s' in '%s'", v13, v14, v8)
        break
      end
      table.insert(woodCrusher.moveTriggers, v9)
    end
  end
  woodCrusher.moveColNodes = {}
  while true do
    v8 = string.format("%s.moveCollisions.collision(%d)", v6, v7)
    v9 = xmlFile:hasProperty(v8)
    if not v9 then
      break
    end
    v10 = xmlFile:getValue(v8 .. "#node", nil, rootNode, i3dMappings)
    if {node = v10}.node ~= nil then
      v10, v11, v12 = getTranslation({node = v10}.node)
      table.insert(woodCrusher.moveColNodes, {node = v10, transX = v10, transY = v11, transZ = v12})
    end
  end
  v8 = xmlFile:getValue(v6 .. "#moveVelocityZ", 0.8)
  woodCrusher.moveVelocityZ = v8
  v8 = xmlFile:getValue(v6 .. "#moveMaxForce", 7)
  woodCrusher.moveMaxForce = v8
  v8 = xmlFile:getValue(v6 .. "#shapeSizeDetectionNode", nil, rootNode, i3dMappings)
  woodCrusher.shapeSizeDetectionNode = v8
  v8 = xmlFile:getValue(v6 .. "#cutSizeY", 1)
  woodCrusher.cutSizeY = v8
  v8 = xmlFile:getValue(v6 .. "#cutSizeZ", 1)
  woodCrusher.cutSizeZ = v8
  woodCrusher.downForceNodes = {}
  woodCrusher.downForceTriggers = {}
  xmlFile:iterate(v6 .. ".downForceNodes.downForceNode", function(self, woodCrusher)
    local rootNode = rootNode:getValue(woodCrusher .. "#node", nil, u1, u2)
    if {node = rootNode}.node ~= nil then
      rootNode = rootNode:getValue(woodCrusher .. "#force", 2)
      rootNode = rootNode:getValue(woodCrusher .. "#trigger", nil, u1, u2)
      rootNode = rootNode:getValue(woodCrusher .. "#sizeY", u3.cutSizeY)
      rootNode = rootNode:getValue(woodCrusher .. "#sizeZ", u3.cutSizeZ)
      if {node = rootNode, force = rootNode, trigger = rootNode, sizeY = rootNode, sizeZ = rootNode, woodCrusher = u3, triggerNodes = {}}.trigger ~= nil and u3.downForceTriggers[{node = rootNode, force = rootNode, trigger = rootNode, sizeY = rootNode, sizeZ = rootNode, woodCrusher = u3, triggerNodes = {}}.trigger] == nil and u4.isServer then
        u3.downForceTriggers[{node = rootNode, force = rootNode, trigger = rootNode, sizeY = rootNode, sizeZ = rootNode, woodCrusher = u3, triggerNodes = {}}.trigger] = true
        addTrigger({node = rootNode, force = rootNode, trigger = rootNode, sizeY = rootNode, sizeZ = rootNode, woodCrusher = u3, triggerNodes = {}}.trigger, "woodCrusherDownForceTriggerCallback", u3)
      end
      table.insert(u3.downForceNodes, xmlFile)
    end
  end)
  woodCrusher.moveTriggerNodes = {}
  if self.isServer and woodCrusher.moveTriggers ~= nil then
    for v11, v12 in pairs(woodCrusher.moveTriggers) do
      addTrigger(v12, "woodCrusherMoveTriggerCallback", woodCrusher)
    end
  end
  woodCrusher.crushNodes = {}
  woodCrusher.crushingTime = 0
  v8 = xmlFile:getValue(v6 .. "#automaticallyTurnOn", false)
  woodCrusher.turnOnAutomatically = v8
  if self.isClient then
    v8 = v8:loadEffect(xmlFile, v6 .. ".crushEffects", rootNode, self, i3dMappings)
    woodCrusher.crushEffects = v8
    v8 = v8:loadAnimations(xmlFile, v6 .. ".animationNodes", rootNode, self, i3dMappings)
    woodCrusher.animationNodes = v8
    woodCrusher.isWorkSamplePlaying = false
    woodCrusher.samples = {}
    v9 = v9:loadSampleFromXML(xmlFile, v6 .. ".sounds", "start", self.baseDirectory, rootNode, 1, AudioGroup.VEHICLE, i3dMappings, self)
    woodCrusher.samples.start = v9
    v9 = v9:loadSampleFromXML(xmlFile, v6 .. ".sounds", "stop", self.baseDirectory, rootNode, 1, AudioGroup.VEHICLE, i3dMappings, self)
    woodCrusher.samples.stop = v9
    v9 = v9:loadSampleFromXML(xmlFile, v6 .. ".sounds", "work", self.baseDirectory, rootNode, 0, AudioGroup.VEHICLE, i3dMappings, self)
    woodCrusher.samples.work = v9
    v9 = v9:loadSampleFromXML(xmlFile, v6 .. ".sounds", "idle", self.baseDirectory, rootNode, 0, AudioGroup.VEHICLE, i3dMappings, self)
    woodCrusher.samples.idle = v9
  end
end
function WoodCrusher.deleteWoodCrusher(v0, dt)
  if dt.moveTriggers ~= nil then
    for v5, v6 in pairs(dt.moveTriggers) do
      removeTrigger(v6)
    end
  end
  if dt.downForceTriggers ~= nil then
    for v5, v6 in pairs(dt.downForceTriggers) do
      removeTrigger(v5)
    end
  end
  isActiveForInput:deleteEffects(dt.crushEffects)
  isActiveForInput:deleteSamples(dt.samples)
  isActiveForInput:deleteAnimations(dt.animationNodes)
end
function WoodCrusher:updateWoodCrusher(woodCrusher, dt, isTurnedOn)
  if isTurnedOn and self.isServer then
    for v7 in pairs(woodCrusher.crushNodes) do
      WoodCrusher.crushSplitShape(self, woodCrusher, v7)
      woodCrusher.crushNodes[v7] = nil
      woodCrusher.moveTriggerNodes[v7] = nil
    end
    for v8 in pairs(woodCrusher.moveTriggerNodes) do
      local v10 = entityExists(v8)
      if not v10 then
        woodCrusher.moveTriggerNodes[v8] = nil
      else
        -- TODO: structure LOP_FORNPREP (pc 50, target 135)
        if woodCrusher.downForceNodes[1].triggerNodes[v8] == nil then
          -- cmp-jump LOP_JUMPXEQKNIL R14 aux=0x80000000 -> L134
        end
        local v14, v15, v16 = getWorldTranslation(v13.node)
        local v17, v18, v19 = localDirectionToWorld(v13.node, 1, 0, 0)
        local v20, v21, v22 = localDirectionToWorld(v13.node, 0, 1, 0)
        local v23, v24, v25, v26 = testSplitShape(v8, v14, v15, v16, v17, v18, v19, v20, v21, v22, v13.sizeY, v13.sizeZ)
        if v23 ~= nil then
          local v27, v28, v29 = localToWorld(v13.node, 0, (v23 + v24) * 0.5, (v25 + v26) * 0.5)
          local v30, v31, v32 = localDirectionToWorld(v13.node, 0, -v13.force, 0)
          addForce(v8, v30, v31, v32, v27, v28, v29, false)
        end
        -- TODO: structure LOP_FORNLOOP (pc 134, target 51)
        if not (woodCrusher.shapeSizeDetectionNode ~= nil) then
          continue
        end
        local v10, v11, v12 = getWorldTranslation(woodCrusher.shapeSizeDetectionNode)
        local v13, v14, v15 = localDirectionToWorld(woodCrusher.shapeSizeDetectionNode, 1, 0, 0)
        v16, v17, v18 = localDirectionToWorld(woodCrusher.shapeSizeDetectionNode, 0, 1, 0)
        v19, v20, v21, v22 = testSplitShape(v8, v10, v11, v12, v13, v14, v15, v16, v17, v18, woodCrusher.cutSizeY, woodCrusher.cutSizeZ)
        if not (v19 ~= nil) then
          continue
        end
        if not (woodCrusher.mainDrumRefNode ~= nil) then
          continue
        end
        v23 = math.max(isSelected, v20)
      end
    end
    if woodCrusher.mainDrumRefNode ~= nil then
      v5, v6, v7 = getTranslation(woodCrusher.mainDrumRefNode)
      v8 = math.min(isSelected, woodCrusher.mainDrumRefNodeMaxY)
      if v6 < v8 then
        local v9 = math.min(v6 + 0.0003 * dt, v8)
      else
        v9 = math.max(v6 - 0.0003 * dt, v8)
      end
      setTranslation(woodCrusher.mainDrumRefNode, v5, v6, v7)
    end
    v5 = next(woodCrusher.moveTriggerNodes)
    if v5 == nil then
      -- if 0 >= v1.crushingTime then goto L256 end
    end
    self:raiseActive()
  end
end
function WoodCrusher:updateTickWoodCrusher(woodCrusher, dt, isTurnedOn)
  if isTurnedOn and self.isServer then
    if woodCrusher.cutNode ~= nil then
      local isSelected = next(woodCrusher.moveTriggerNodes)
      if isSelected ~= nil then
        local isSelected, v5, v6 = getWorldTranslation(woodCrusher.cutNode)
        local v7, v8, v9 = localDirectionToWorld(woodCrusher.cutNode, 1, 0, 0)
        local v10, v11, v12 = localDirectionToWorld(woodCrusher.cutNode, 0, 1, 0)
        for v16 in pairs(woodCrusher.moveTriggerNodes) do
          local v18, v19 = getSplitShapePlaneExtents(v16, isSelected, v5, v6, v7, v8, v9)
          if not (v19 ~= nil) then
            continue
          end
          if not (v18 ~= nil) then
            continue
          end
          if v18 <= 0.4 then
            woodCrusher.moveTriggerNodes[v16] = nil
            WoodCrusher.crushSplitShape(self, woodCrusher, v16)
          else
            if not (0.2 <= v19) then
              continue
            end
            self.shapeBeingCut = v16
            local v20 = splitShape(v16, isSelected, v5, v6, v7, v8, v9, v10, v11, v12, woodCrusher.cutSizeY, woodCrusher.cutSizeZ, "woodCrusherSplitShapeCallback", woodCrusher)
            v21:removingSplitShape(v16)
            if not (v20 ~= nil) then
              continue
            end
            woodCrusher.moveTriggerNodes[v16] = nil
          end
        end
      end
    end
    if self.isServer and woodCrusher.moveColNodes ~= nil then
      for v7, v8 in pairs(woodCrusher.moveColNodes) do
        v15 = math.random()
        setTranslation(v8.node, v8.transX, v8.transY + v15 * 0.005, v8.transZ)
      end
    end
  end
  if 0 < woodCrusher.crushingTime then
    isSelected = math.max(woodCrusher.crushingTime - dt, 0)
    woodCrusher.crushingTime = isSelected
  end
  if 0 >= woodCrusher.crushingTime then
  end
  if self.isClient then
    if true then
      v5:setFillType(woodCrusher.crushEffects, FillType.WOODCHIPS)
      v5:startEffects(woodCrusher.crushEffects)
    else
      v5:stopEffects(woodCrusher.crushEffects)
    end
    if isTurnedOn and isSelected then
      -- if v1.isWorkSamplePlaying then goto L225 end
      v5:playSample(woodCrusher.samples.work)
      woodCrusher.isWorkSamplePlaying = true
      return
    end
    if woodCrusher.isWorkSamplePlaying then
      v5:stopSample(woodCrusher.samples.work)
      woodCrusher.isWorkSamplePlaying = false
    end
  end
end
function WoodCrusher:turnOnWoodCrusher(woodCrusher)
  if self.isServer and woodCrusher.moveColNodes ~= nil then
    for v5, v6 in pairs(woodCrusher.moveColNodes) do
      setFrictionVelocity(v6.node, woodCrusher.moveVelocityZ)
    end
  end
  if self.isClient then
    isActiveForInput:stopSamples(woodCrusher.samples)
    woodCrusher.isWorkSamplePlaying = false
    isActiveForInput:playSample(woodCrusher.samples.start)
    isActiveForInput:playSample(woodCrusher.samples.idle, 0, woodCrusher.samples.start)
    if self.isClient then
      isActiveForInput:startAnimations(woodCrusher.animationNodes)
    end
  end
end
function WoodCrusher:turnOffWoodCrusher(woodCrusher)
  if self.isServer then
    for v5 in pairs(woodCrusher.crushNodes) do
      WoodCrusher.crushSplitShape(self, woodCrusher, v5)
      woodCrusher.crushNodes[v5] = nil
    end
    if woodCrusher.moveColNodes ~= nil then
      for v5, v6 in pairs(woodCrusher.moveColNodes) do
        setFrictionVelocity(v6.node, 0)
      end
    end
  end
  if self.isClient then
    isActiveForInput:stopEffects(woodCrusher.crushEffects)
    isActiveForInput:stopSamples(woodCrusher.samples)
    isActiveForInput:playSample(woodCrusher.samples.stop)
    woodCrusher.isWorkSamplePlaying = false
    if self.isClient then
      isActiveForInput:stopAnimations(woodCrusher.animationNodes)
    end
  end
end
function WoodCrusher:crushSplitShape(woodCrusher, shape)
  local v5 = getSplitType(shape)
  local isActiveForInputIgnoreSelection = isActiveForInputIgnoreSelection:getSplitTypeByIndex(...)
  if isActiveForInputIgnoreSelection ~= nil and 0 < isActiveForInputIgnoreSelection.woodChipsPerLiter then
    local volume = getVolume(shape)
    delete(shape)
    woodCrusher.crushingTime = 1000
    self:onCrushedSplitShape(isActiveForInputIgnoreSelection, volume)
  end
end
function WoodCrusher:woodCrusherSplitShapeCallback(shape, isBelow, isAbove, minY, maxY, minZ, maxZ)
  if not isBelow then
    self.crushNodes[shape] = shape
    v8:addingSplitShape(shape, self.shapeBeingCut)
  end
end
function WoodCrusher:woodCrusherMoveTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if g_currentMission.nodeToObject[otherActorId] == nil then
    local v8 = getRigidBodyType(otherActorId)
    if v8 == RigidBodyType.DYNAMIC then
      local v10 = getSplitType(otherActorId)
      v8 = v8:getSplitTypeByIndex(...)
      if v8 ~= nil and 0 < v8.woodChipsPerLiter then
        if onEnter then
          local v11 = Utils.getNoNil(self.moveTriggerNodes[otherActorId], 0)
          self.moveTriggerNodes[otherActorId] = v11 + 1
          v9:raiseActive()
          return
        end
        if onLeave and self.moveTriggerNodes[otherActorId] ~= nil then
          if self.moveTriggerNodes[otherActorId] - 1 == 0 then
            self.moveTriggerNodes[otherActorId] = nil
            return
          end
          self.moveTriggerNodes[otherActorId] = v9
        end
      end
    end
  end
end
function WoodCrusher:woodCrusherDownForceTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if g_currentMission.nodeToObject[otherActorId] == nil then
    local v8 = getRigidBodyType(otherActorId)
    if v8 == RigidBodyType.DYNAMIC then
      local v10 = getSplitType(otherActorId)
      v8 = v8:getSplitTypeByIndex(...)
      if v8 ~= nil and 0 < v8.woodChipsPerLiter then
        -- TODO: structure LOP_FORNPREP (pc 34, target 78)
        if self.downForceNodes[1].trigger == triggerId then
          if onEnter then
            local v15 = Utils.getNoNil(self.downForceNodes[1].triggerNodes[otherActorId], 0)
            self.downForceNodes[1].triggerNodes[otherActorId] = v15 + 1
            v13:raiseActive()
          elseif onLeave and self.downForceNodes[1].triggerNodes[otherActorId] ~= nil then
            if self.downForceNodes[1].triggerNodes[otherActorId] - 1 == 0 then
              self.downForceNodes[1].triggerNodes[otherActorId] = nil
            else
              self.downForceNodes[1].triggerNodes[otherActorId] = self.downForceNodes[1].triggerNodes[otherActorId] - 1
            end
          end
        end
        -- TODO: structure LOP_FORNLOOP (pc 77, target 35)
      end
    end
  end
end
