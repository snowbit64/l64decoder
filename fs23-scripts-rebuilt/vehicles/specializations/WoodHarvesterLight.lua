-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WoodHarvesterLight = {SPAWN_COLLISION_MASK = CollisionFlag.STATIC_WORLD + CollisionFlag.TREE + CollisionFlag.DYNAMIC_OBJECT + CollisionFlag.VEHICLE + CollisionFlag.PLAYER + CollisionFlag.ANIMAL}
function WoodHarvesterLight.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(AutomaticArmControlHarvester, v0)
  end
  return v1
end
function WoodHarvesterLight.initSpecialization()
  local v3 = v3:getText("shop_configuration")
  v0:addConfigurationType("woodHarvesterLight", v3, "woodHarvesterLight", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("WoodHarvesterLight")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.woodHarvesterLight.cutNode#node", "Cut node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvesterLight.cutNode#maxRadius", "Max. radius of the tree", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvesterLight.cutNode#sizeY", "Size in Y direction", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvesterLight.cutNode#sizeZ", "Size in Z direction", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.woodHarvesterLight.cutAnimation#name", "Cut animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvesterLight.cutAnimation#speedScale", "Cut animation speed scale")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.woodHarvesterLight.grabAnimation#name", "Grab animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvesterLight.grabAnimation#speedScale", "Grab animation speed scale")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.woodHarvesterLight.logSpawner#startNode", "Start reference node for spawning (end node is the tree)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvesterLight.logSpawner#offset", "Offset from tree", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvesterLight.logSpawner#maxSpawnWidth", "Max. spawning width to the left and right", 10)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.woodHarvesterLight.logSpawner#additionalLength", "Length of area behind the tree that can be used for the spawning", 4)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.woodHarvesterLight.cutEffects")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.woodHarvesterLight.sounds", "cut")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function WoodHarvesterLight.registerFunctions(v0)
  SpecializationUtil.registerFunction(v0, "updateLogSpawner", WoodHarvesterLight.updateLogSpawner)
  SpecializationUtil.registerFunction(v0, "onWoodHarversterLogSpawnerCallback", WoodHarvesterLight.onWoodHarversterLogSpawnerCallback)
  SpecializationUtil.registerFunction(v0, "spawnLogHeap", WoodHarvesterLight.spawnLogHeap)
  SpecializationUtil.registerFunction(v0, "spawnTreeStump", WoodHarvesterLight.spawnTreeStump)
end
function WoodHarvesterLight.registerOverwrittenFunctions(v0)
  SpecializationUtil.registerOverwrittenFunction(v0, "getSupportsAutoTreeAlignment", WoodHarvesterLight.getSupportsAutoTreeAlignment)
  SpecializationUtil.registerOverwrittenFunction(v0, "getAutoAlignHasValidTree", WoodHarvesterLight.getAutoAlignHasValidTree)
  SpecializationUtil.registerOverwrittenFunction(v0, "getAreControlledActionsAllowed", WoodHarvesterLight.getAreControlledActionsAllowed)
end
function WoodHarvesterLight.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", WoodHarvesterLight)
  SpecializationUtil.registerEventListener(v0, "onDelete", WoodHarvesterLight)
  SpecializationUtil.registerEventListener(v0, "onUpdate", WoodHarvesterLight)
  SpecializationUtil.registerEventListener(v0, "onTurnedOn", WoodHarvesterLight)
  SpecializationUtil.registerEventListener(v0, "onTurnedOff", WoodHarvesterLight)
end
function WoodHarvesterLight:onLoad(v1)
  self.spec_woodHarvesterLight.cutNode = {}
  local v4 = v4:getValue("vehicle.woodHarvesterLight.cutNode#node", nil, self.components, self.i3dMappings)
  self.spec_woodHarvesterLight.cutNode.node = v4
  v4 = v4:getValue("vehicle.woodHarvesterLight.cutNode#maxRadius", 1)
  self.spec_woodHarvesterLight.cutNode.maxRadius = v4
  v4 = v4:getValue("vehicle.woodHarvesterLight.cutNode#sizeY", 1)
  self.spec_woodHarvesterLight.cutNode.sizeY = v4
  v4 = v4:getValue("vehicle.woodHarvesterLight.cutNode#sizeZ", 1)
  self.spec_woodHarvesterLight.cutNode.sizeZ = v4
  self.spec_woodHarvesterLight.cutAnimation = {}
  v4 = v4:getValue("vehicle.woodHarvesterLight.cutAnimation#name")
  self.spec_woodHarvesterLight.cutAnimation.name = v4
  v4 = v4:getValue("vehicle.woodHarvesterLight.cutAnimation#speedScale", 1)
  self.spec_woodHarvesterLight.cutAnimation.speedScale = v4
  self.spec_woodHarvesterLight.grabAnimation = {}
  v4 = v4:getValue("vehicle.woodHarvesterLight.grabAnimation#name")
  self.spec_woodHarvesterLight.grabAnimation.name = v4
  v4 = v4:getValue("vehicle.woodHarvesterLight.grabAnimation#speedScale", 1)
  self.spec_woodHarvesterLight.grabAnimation.speedScale = v4
  self.spec_woodHarvesterLight.logSpawner = {}
  v4 = v4:getValue("vehicle.woodHarvesterLight.logSpawner#startNode", nil, self.components, self.i3dMappings)
  self.spec_woodHarvesterLight.logSpawner.startNode = v4
  v4 = v4:getValue("vehicle.woodHarvesterLight.logSpawner#offset", 1)
  self.spec_woodHarvesterLight.logSpawner.offset = v4
  v4 = v4:getValue("vehicle.woodHarvesterLight.logSpawner#maxSpawnWidth", 10)
  self.spec_woodHarvesterLight.logSpawner.maxSpawnWidth = v4
  v4 = v4:getValue("vehicle.woodHarvesterLight.logSpawner#additionalLength", 4)
  self.spec_woodHarvesterLight.logSpawner.additionalLength = v4
  self.spec_woodHarvesterLight.logSpawner.currentCheckIndex = 0
  self.spec_woodHarvesterLight.logSpawner.hasValidBox = false
  self.spec_woodHarvesterLight.logSpawner.validCheckBoxIndex = 0
  self.spec_woodHarvesterLight.logSpawner.lastValidBox = {0, 0, 0, 0}
  self.spec_woodHarvesterLight.logSpawner.lastBoxToCheck = {0, 0, 0, 0}
  self.spec_woodHarvesterLight.logSpawner.logFilename = "data/maps/trees/logs/pineLog.i3d"
  self.spec_woodHarvesterLight.logSpawner.logSize = {0.4, 5}
  self.spec_woodHarvesterLight.logSpawner.logVolume = 0.66
  self.spec_woodHarvesterLight.curSplitShape = nil
  if self.isClient then
    local v3 = v3:loadEffect(self.xmlFile, "vehicle.woodHarvesterLight.cutEffects", self.components, self, self.i3dMappings)
    self.spec_woodHarvesterLight.cutEffects = v3
    self.spec_woodHarvesterLight.samples = {}
    v4 = v4:loadSampleFromXML(self.xmlFile, "vehicle.woodHarvesterLight.sounds", "cut", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_woodHarvesterLight.samples.cut = v4
  end
  if v2.cutNode.node == nil then
    SpecializationUtil.removeEventListener(self, "onUpdate", WoodHarvesterLight)
    SpecializationUtil.removeEventListener(self, "onTurnedOn", WoodHarvesterLight)
    SpecializationUtil.removeEventListener(self, "onTurnedOff", WoodHarvesterLight)
  end
  v2.texts = {}
  v4 = v4:getText("warning_woodHarvesterNoTreeInRange")
  v2.texts.warning_woodHarvesterNoTreeInRange = v4
  v4 = v4:getText("warning_woodHarvesterNoSpawnPlace")
  v2.texts.warning_woodHarvesterNoSpawnPlace = v4
  v4 = v4:getText("warning_youAreNotAllowedToCutThisTree")
  v2.texts.warning_woodHarvesterTreeNotAllowed = v4
  v4 = v4:getText("warning_treeTypeNotSupported")
  v2.texts.warning_woodHarvesterTreeTypeNotSupported = v4
  v4 = v4:getText("warning_treeTooThick")
  v2.texts.warning_woodHarvesterTreeTooThick = v4
end
function WoodHarvesterLight:onDelete()
  if self.isClient then
    v2:deleteEffects(self.spec_woodHarvesterLight.cutEffects)
    v2:deleteSamples(self.spec_woodHarvesterLight.samples)
  end
end
function WoodHarvesterLight:onUpdate(v1, v2, v3, v4)
  self.spec_woodHarvesterLight.curSplitShape = nil
  local v6 = self:getIsTurnedOn()
  if v6 then
    local v6, v7, v8 = localToWorld(self.spec_woodHarvesterLight.cutNode.node, 0, 0, 0)
    local v9, v10, v11 = localDirectionToWorld(self.spec_woodHarvesterLight.cutNode.node, 1, 0, 0)
    local v12, v13, v14 = localDirectionToWorld(self.spec_woodHarvesterLight.cutNode.node, 0, 1, 0)
    local v15, v16, v17, v18, v19 = findSplitShape(v6, v7, v8, v9, v10, v11, v12, v13, v14, self.spec_woodHarvesterLight.cutNode.sizeY, self.spec_woodHarvesterLight.cutNode.sizeZ)
    if v15 ~= 0 then
      local v20 = getUserAttribute(v15, "isTreeStump")
      -- cmp-jump LOP_JUMPXEQKB R20 aux=0x1 -> L284
      self.spec_woodHarvesterLight.curSplitShape = v15
      v20 = self:getIsAutomaticAlignmentActive()
      -- if v20 then goto L308 end
      v20 = self:getIsAnimationPlaying(self.spec_woodHarvesterLight.cutAnimation.name)
      -- if v20 then goto L308 end
      v20 = self:getAnimationTime(self.spec_woodHarvesterLight.cutAnimation.name)
      if v20 < 0.5 then
        self:setAnimationTime(self.spec_woodHarvesterLight.cutAnimation.name, 0)
        local v25 = self:getAnimationTime(self.spec_woodHarvesterLight.cutAnimation.name)
        self:playAnimation(...)
        -- if not v0.isClient then goto L308 end
        v21:setFillType(self.spec_woodHarvesterLight.cutEffects, FillType.WOODCHIPS)
        v21:startEffects(self.spec_woodHarvesterLight.cutEffects)
        v21:playSample(self.spec_woodHarvesterLight.samples.cut)
        -- goto L308  (LOP_JUMP +161)
      end
      -- if 0.5 > v20 then goto L308 end
      self:setAnimationTime(v5.cutAnimation.name, 0)
      if self.isClient then
        v21:stopEffects(v5.cutEffects)
        v21:stopSample(v5.samples.cut)
      end
      v21:removeKnownSplitShape(v15)
      local v21 = getVolume(v15)
      if v21 ~= 0 then
        local v24 = getSplitType(v15)
        v25 = getVolume(v15)
        self:spawnLogHeap(...)
        local v22, v23, v24 = getWorldTranslation(v15)
        self:spawnTreeStump(v22, v23, v24)
      end
      v23 = getParent(v15)
      delete(...)
      v22:removingSplitShape(v15)
      v24 = self:getActiveFarm()
      v22, v23 = v22:updateFarmStats(v24, "cutTreeCount", 1)
      if v22 ~= nil then
        v24:tryUnlock("CutTreeFirst", v22)
        v24:tryUnlock("CutTree", v22)
        if v22 == 1 then
          v24:showHint("forestryFirstTree")
        elseif v22 == 20 then
          local v26 = self:getActiveFarm()
          v24, v25 = v24:getFarmStatValue(v26, "plantedTreeCount")
          if v25 == 0 then
            v26:showHint("forestryStumpCutter")
          end
        end
      end
      -- if not Platform.gameplay.automaticVehicleControl then goto L308 end
      self:playControlledActions()
    else
      v20 = self:getAnimationTime(self.spec_woodHarvesterLight.cutAnimation.name)
      if 0.99 < v20 then
        self:setAnimationTime(self.spec_woodHarvesterLight.cutAnimation.name, 0)
        if Platform.gameplay.automaticVehicleControl then
          self:playControlledActions()
        end
      end
    end
  end
  v6, v7, v8, v9 = self:getAutomaticAlignmentCurrentTarget()
  if v6 ~= nil then
    self:updateLogSpawner(v6, v7, v8, v9)
    return
  end
  v5.logSpawner.lastOverlapCheckIsBlocked = false
  v5.logSpawner.pendingOverlapCheck = false
  v5.logSpawner.currentCheckIndex = 0
  v5.logSpawner.validCheckBoxIndex = 0
  v5.logSpawner.hasValidBox = false
end
function WoodHarvesterLight:onTurnedOn()
  local v6 = self:getAnimationTime(self.spec_woodHarvesterLight.grabAnimation.name)
  self:playAnimation(self.spec_woodHarvesterLight.grabAnimation.name, self.spec_woodHarvesterLight.grabAnimation.speedScale, v6, true)
end
function WoodHarvesterLight:onTurnedOff()
  local v6 = self:getAnimationTime(self.spec_woodHarvesterLight.grabAnimation.name)
  self:playAnimation(self.spec_woodHarvesterLight.grabAnimation.name, -self.spec_woodHarvesterLight.grabAnimation.speedScale, v6, true)
  if self.isClient then
    v2:stopEffects(self.spec_woodHarvesterLight.cutEffects)
    v2:stopSamples(self.spec_woodHarvesterLight.samples)
  end
end
function WoodHarvesterLight.getSupportsAutoTreeAlignment(v0, v1)
  return true
end
function WoodHarvesterLight:getAutoAlignHasValidTree(v1, v2)
  if self.spec_woodHarvesterLight.curSplitShape == nil then
  end
  if v2 > v3.cutNode.maxRadius then
  end
  return v4, true
end
function WoodHarvesterLight:getAreControlledActionsAllowed(v1)
  local v2 = self:getActionControllerDirection()
  if v2 == 1 then
    local v3 = self:getAutomaticAlignmentInvalidTreeReason()
    if v3 == AutomaticArmControlHarvester.INVALID_REASON_NONE then
      local v4, v5, v6, v7 = self:getAutomaticAlignmentCurrentTarget()
      if v4 ~= nil then
        -- if v0.spec_woodHarvesterLight.logSpawner.hasValidBox then goto L68 end
        return false, self.spec_woodHarvesterLight.texts.warning_woodHarvesterNoSpawnPlace
        -- goto L68  (LOP_JUMP +37)
      end
      return false, v2.texts.warning_woodHarvesterNoTreeInRange
    else
      if v3 == AutomaticArmControlHarvester.INVALID_REASON_NO_ACCESS then
        return false, self.spec_woodHarvesterLight.texts.warning_woodHarvesterTreeNotAllowed
      end
      if v3 == AutomaticArmControlHarvester.INVALID_REASON_WRONG_TYPE then
        return false, v2.texts.warning_woodHarvesterTreeTypeNotSupported
      end
      if v3 == AutomaticArmControlHarvester.INVALID_REASON_TOO_THICK then
        return false, v2.texts.warning_woodHarvesterTreeTooThick
      end
    end
  end
  v2 = v1(self)
  return v2
end
function WoodHarvesterLight:updateLogSpawner(v1, v2, v3, v4)
  if not self.spec_woodHarvesterLight.logSpawner.pendingOverlapCheck then
    if not self.spec_woodHarvesterLight.logSpawner.lastOverlapCheckIsBlocked then
      self.spec_woodHarvesterLight.logSpawner.hasValidBox = true
      self.spec_woodHarvesterLight.logSpawner.lastValidBox[1] = self.spec_woodHarvesterLight.logSpawner.lastBoxToCheck[1]
      self.spec_woodHarvesterLight.logSpawner.lastValidBox[2] = self.spec_woodHarvesterLight.logSpawner.lastBoxToCheck[2]
      self.spec_woodHarvesterLight.logSpawner.lastValidBox[3] = self.spec_woodHarvesterLight.logSpawner.lastBoxToCheck[3]
      self.spec_woodHarvesterLight.logSpawner.lastValidBox[4] = self.spec_woodHarvesterLight.logSpawner.lastBoxToCheck[4]
      self.spec_woodHarvesterLight.logSpawner.validCheckBoxIndex = self.spec_woodHarvesterLight.logSpawner.currentCheckIndex
      self.spec_woodHarvesterLight.logSpawner.currentCheckIndex = 0
    elseif self.spec_woodHarvesterLight.logSpawner.validCheckBoxIndex < self.spec_woodHarvesterLight.logSpawner.currentCheckIndex then
      self.spec_woodHarvesterLight.logSpawner.hasValidBox = false
      self.spec_woodHarvesterLight.logSpawner.validCheckBoxIndex = 0
    end
  end
  local v12, v13, v14 = getWorldTranslation(v5.logSpawner.startNode)
  local v15, v16 = MathUtil.vector2Normalize(v1 - v12, v3 - v14)
  local v17 = MathUtil.getYRotationFromDirection(v15, v16)
  local v21 = math.floor(v5.logSpawner.currentCheckIndex / 5)
  if v5.logSpawner.currentCheckIndex % 5 == 0 then
  elseif v5.logSpawner.currentCheckIndex % 5 == 1 then
  else
    if v5.logSpawner.currentCheckIndex % 5 == 2 then
    elseif v5.logSpawner.currentCheckIndex % 5 == 3 then
    else
      if v5.logSpawner.currentCheckIndex % 5 == 4 then
      end
    end
  end
  if v5.logSpawner.maxSpawnWidth < v20 then
    v5.logSpawner.currentCheckIndex = 0
  end
  local v24 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v1 + v15 * v18 + v16 * v19, 0, v3 + v16 * v18 - v15 * v19)
  if not v5.logSpawner.pendingOverlapCheck then
    v5.logSpawner.lastOverlapCheckIsBlocked = false
    v5.logSpawner.pendingOverlapCheck = true
    v5.logSpawner.lastBoxToCheck[1] = v1 + v15 * v18 + v16 * v19
    v5.logSpawner.lastBoxToCheck[2] = v24
    v5.logSpawner.lastBoxToCheck[3] = v3 + v16 * v18 - v15 * v19
    v5.logSpawner.lastBoxToCheck[4] = v17
    overlapBox(v1 + v15 * v18 + v16 * v19, v24, v3 + v16 * v18 - v15 * v19, 0, v17, 0, v9, 2.5, v11, "onWoodHarversterLogSpawnerCallback", self, WoodHarvesterLight.SPAWN_COLLISION_MASK, true, true, true, true)
  end
end
function WoodHarvesterLight:onWoodHarversterLogSpawnerCallback(v1, ...)
  if v1 ~= 0 then
    local v3 = getHasClassId(v1, ClassIds.TERRAIN_TRANSFORM_GROUP)
    if not v3 and not self.spec_woodHarvesterLight.logSpawner.lastOverlapCheckIsBlocked then
      self.spec_woodHarvesterLight.logSpawner.lastOverlapCheckIsBlocked = true
      self.spec_woodHarvesterLight.logSpawner.currentCheckIndex = self.spec_woodHarvesterLight.logSpawner.currentCheckIndex + 1
    end
  end
  v2.logSpawner.pendingOverlapCheck = false
end
function WoodHarvesterLight:spawnLogHeap(v1, v2)
  if self.spec_woodHarvesterLight.logSpawner.hasValidBox then
    local v7 = math.floor(v2 / self.spec_woodHarvesterLight.logSpawner.logVolume)
    local v6 = math.max(v7, 1)
    local v13 = self:getOwnerFarmId()
    WoodHarvesterLight.spawnLogs(...)
  end
end
function WoodHarvesterLight.spawnLogs(v0, v1, v2, v3, v4, v5, v6, v7, v8)
  local v9, v10 = MathUtil.getDirectionFromYRotation(v5)
  if 2 < v1 then
    local v13 = math.floor((v1 - 1) / 2)
  end
  -- TODO: structure LOP_FORNPREP (pc 22, target 135)
  local v25 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v2 + v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6), v3, v4 + v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6))
  v25 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v2 - v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6), v3, v4 - v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6))
  local v28, v29, v30 = MathUtil.vector3Normalize(v2 + v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6) - v2 - v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6), v25 + v6 * 0.5 - v25 + v6 * 0.5, v4 + v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6) - v4 - v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6))
  local v31 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, (v2 + v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6) + v2 - v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6)) * 0.5, (v25 + v6 * 0.5 + v25 + v6 * 0.5) * 0.5, (v4 + v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6) + v4 - v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6)) * 0.5)
  table.insert(v11, {sx = (v2 + v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6) + v2 - v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6)) * 0.5 + v28 * v7 * 0.5, sy = v31 + v6 * 0.5 + v29 * v7 * 0.5, sz = (v4 + v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6) + v4 - v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6)) * 0.5 + v30 * v7 * 0.5, ex = (v2 + v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6) + v2 - v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6)) * 0.5 - v28 * v7 * 0.5, ey = v31 + v6 * 0.5 - v29 * v7 * 0.5, ez = (v4 + v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6) + v4 - v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6)) * 0.5 - v30 * v7 * 0.5, cx = (v2 + v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6) + v2 - v9 * v7 * 0.5 + v10 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6)) * 0.5, cy = v31 + v6 * 0.5, cz = (v4 + v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6) + v4 - v10 * v7 * 0.5 - v9 * (-(v1 - v12) * 0.5 * v6 + v6 * 0.5 + (1 - 1) * v6)) * 0.5, dx = v28, dy = v29, dz = v30})
  -- TODO: structure LOP_FORNLOOP (pc 134, target 23)
  -- TODO: structure LOP_FORNPREP (pc 138, target 247)
  if v11[1] ~= nil and v11[1 + 1] ~= nil then
    v28 = math.pow(v6, 2)
    v29 = math.pow(v6 * 0.5, 2)
    local v26 = math.sqrt(v28 - v29)
    local v30, v31, v32 = MathUtil.vector3Normalize((v11[1].sx + v11[1 + 1].sx) * 0.5 - (v11[1].ex + v11[1 + 1].ex) * 0.5, (v11[1].sy + v11[1 + 1].sy) * 0.5 + v26 - (v11[1].ey + v11[1 + 1].ey) * 0.5 + v26, (v11[1].sz + v11[1 + 1].sz) * 0.5 - (v11[1].ez + v11[1 + 1].ez) * 0.5)
    table.insert(v11, {sx = (v11[1].sx + v11[1 + 1].sx) * 0.5, sy = (v11[1].sy + v11[1 + 1].sy) * 0.5 + v26, sz = (v11[1].sz + v11[1 + 1].sz) * 0.5, ex = (v11[1].ex + v11[1 + 1].ex) * 0.5, ey = (v11[1].ey + v11[1 + 1].ey) * 0.5 + v26, ez = (v11[1].ez + v11[1 + 1].ez) * 0.5, cx = ((v11[1].sx + v11[1 + 1].sx) * 0.5 + (v11[1].ex + v11[1 + 1].ex) * 0.5) * 0.5, cy = ((v11[1].sy + v11[1 + 1].sy) * 0.5 + v26 + (v11[1].ey + v11[1 + 1].ey) * 0.5 + v26) * 0.5, cz = ((v11[1].sz + v11[1 + 1].sz) * 0.5 + (v11[1].ez + v11[1 + 1].ez) * 0.5) * 0.5, dx = v30, dy = v31, dz = v32})
  end
  -- TODO: structure LOP_FORNLOOP (pc 246, target 139)
  local v15 = createTransformGroup("tempHelperNode")
  local v17 = getRootNode()
  link(v17, v15)
  -- TODO: structure LOP_FORNPREP (pc 261, target 330)
  setTranslation(v15, v11[1].cx, v11[1].cy, v11[1].cz)
  setDirection(v15, v11[1].dx, v11[1].dy, v11[1].dz, 0, 1, 0)
  local v25, v26, v27 = getRotation(v15)
  v29 = v29:getIsServer()
  if g_client == nil then
  end
  v28 = v28(v29, true)
  v28:loadFromFilename(v0, v19, v20, v21, v25, v26, v27)
  v28:setOwnerFarmId(v8)
  -- TODO: structure LOP_FORNLOOP (pc 329, target 262)
  delete(v15)
end
function WoodHarvesterLight.spawnTreeStump(v0, v1, v2, v3)
  local v4 = v4:getTreeTypeDescFromName("pineStump")
  if v4 ~= nil then
    v5:plantTree(v4.index, v1, v2, v3, 0, 0, 0, 1, 1, false, nil)
  end
end
