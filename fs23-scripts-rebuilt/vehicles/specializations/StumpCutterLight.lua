-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StumpCutterLight = {}
function StumpCutterLight.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(TurnOnVehicle, v0)
end
function StumpCutterLight.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("StumpCutterLight")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.stumpCutterLight#cutNode", "Cut nodes which is used as reference to detect the stumps")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.stumpCutterLight#cutRadius", "Stumps within this radius from the cut node will be removed", 1)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.stumpCutterLight#cutTime", "Time until the stump has been cut", 1)
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.stumpCutterLight.effects")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function StumpCutterLight.registerFunctions(v0)
  SpecializationUtil.registerFunction(v0, "removeTreeStump", StumpCutterLight.removeTreeStump)
  SpecializationUtil.registerFunction(v0, "stumpCutterLightOverlapCallback", StumpCutterLight.stumpCutterLightOverlapCallback)
end
function StumpCutterLight.registerOverwrittenFunctions(v0)
  SpecializationUtil.registerOverwrittenFunction(v0, "getAreControlledActionsAllowed", StumpCutterLight.getAreControlledActionsAllowed)
  SpecializationUtil.registerOverwrittenFunction(v0, "getDirtMultiplier", StumpCutterLight.getDirtMultiplier)
  SpecializationUtil.registerOverwrittenFunction(v0, "getWearMultiplier", StumpCutterLight.getWearMultiplier)
  SpecializationUtil.registerOverwrittenFunction(v0, "getConsumingLoad", StumpCutterLight.getConsumingLoad)
end
function StumpCutterLight.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", StumpCutterLight)
  SpecializationUtil.registerEventListener(v0, "onDelete", StumpCutterLight)
  SpecializationUtil.registerEventListener(v0, "onUpdate", StumpCutterLight)
  SpecializationUtil.registerEventListener(v0, "onDeactivate", StumpCutterLight)
  SpecializationUtil.registerEventListener(v0, "onTurnedOn", StumpCutterLight)
  SpecializationUtil.registerEventListener(v0, "onTurnedOff", StumpCutterLight)
end
function StumpCutterLight:onLoad(v1)
  local v3 = v3:getValue("vehicle.stumpCutterLight" .. "#cutNode", nil, self.components, self.i3dMappings)
  self.spec_stumpCutterLight.cutNode = v3
  v3 = v3:getValue("vehicle.stumpCutterLight" .. "#cutRadius", 1)
  self.spec_stumpCutterLight.cutRadius = v3
  v3 = v3:getValue("vehicle.stumpCutterLight" .. "#cutTime", 1)
  self.spec_stumpCutterLight.cutTime = v3
  self.spec_stumpCutterLight.cutTimer = 0
  self.spec_stumpCutterLight.foundStumps = {}
  self.spec_stumpCutterLight.numFoundStumps = 0
  self.spec_stumpCutterLight.overlapCheckActive = false
  if self.isClient then
    v3 = v3:loadEffect(self.xmlFile, "vehicle.stumpCutterLight" .. ".effects", self.components, self, self.i3dMappings)
    self.spec_stumpCutterLight.effects = v3
  end
  v2.texts = {}
  local v4 = v4:getText("warning_stumpCutterNoStumpInRange")
  v2.texts.warning_stumpCutterNoStumpInRange = v4
  if not self.isServer then
    SpecializationUtil.removeEventListener(self, "onUpdate", StumpCutterLight)
  end
  if not self.isClient then
    SpecializationUtil.removeEventListener(self, "onDelete", StumpCutterLight)
    SpecializationUtil.removeEventListener(self, "onDeactivate", StumpCutterLight)
    SpecializationUtil.removeEventListener(self, "onTurnedOn", StumpCutterLight)
    SpecializationUtil.removeEventListener(self, "onTurnedOff", StumpCutterLight)
  end
end
function StumpCutterLight:onDelete()
  v2:deleteEffects(self.spec_stumpCutterLight.effects)
end
function StumpCutterLight:onUpdate(v1, v2, v3, v4)
  local v6 = self:getIsTurnedOn()
  if v6 then
    if 0 < self.spec_stumpCutterLight.numFoundStumps then
      self.spec_stumpCutterLight.cutTimer = self.spec_stumpCutterLight.cutTimer + v1
      -- if v0.spec_stumpCutterLight.cutTime >= v0.spec_stumpCutterLight.cutTimer then goto L45 end
      -- if v0.spec_stumpCutterLight.overlapCheckActive then goto L45 end
      -- TODO: structure LOP_FORNPREP (pc 31, target 39)
      self:removeTreeStump(self.spec_stumpCutterLight.foundStumps[1])
      -- TODO: structure LOP_FORNLOOP (pc 38, target 32)
      self.spec_stumpCutterLight.cutTimer = 0
    else
    end
    if v6 then
      if Platform.gameplay.automaticVehicleControl then
        v7:playControlledActions()
      else
        self:setIsTurnedOn(false, true)
      end
    end
  end
  if not v5.overlapCheckActive then
    v5.numFoundStumps = #v5.foundStumps
    -- TODO: structure LOP_FORNPREP (pc 73, target 79)
    v5.foundStumps[#v5.foundStumps] = nil
    -- TODO: structure LOP_FORNLOOP (pc 78, target 74)
    v5.overlapCheckActive = true
    local v6, v7, v8 = getWorldTranslation(v5.cutNode)
    overlapSphere(v6, v7, v8, v5.cutRadius, "stumpCutterLightOverlapCallback", self, CollisionFlag.TREE, false, true, false, true)
  end
end
function StumpCutterLight:onDeactivate()
  v2:stopEffects(self.spec_stumpCutterLight.effects)
end
function StumpCutterLight:onTurnedOn()
  v2:setFillType(self.spec_stumpCutterLight.effects, FillType.WOODCHIPS)
  v2:startEffects(self.spec_stumpCutterLight.effects)
end
function StumpCutterLight:onTurnedOff()
  v2:stopEffects(self.spec_stumpCutterLight.effects)
end
function StumpCutterLight:removeTreeStump(v1)
  if self.isServer then
    local v2 = getSplitType(v1)
    local v3 = v3:getTreeTypeDescFromSplitType(v2)
    local v4, v5, v6 = getWorldTranslation(v1)
    local v7 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v4, 0, v6)
    local v10 = math.random()
    v9:plantTree(v3.index, v4, v7, v6, 0, v10 * 2 * math.pi, 0, 0)
    local v11 = self:getActiveFarm()
    v9:updateFarmStats(v11, "plantedTreeCount", 1)
    delete(v1)
  end
end
function StumpCutterLight:stumpCutterLightOverlapCallback(v1, ...)
  if not self.isDeleted and v1 ~= 0 and v1 ~= 0 then
    local v3 = getHasClassId(v1, ClassIds.MESH_SPLIT_SHAPE)
    if v3 then
      v3 = getUserAttribute(v1, "isTreeStump")
      if v3 then
        table.insert(self.spec_stumpCutterLight.foundStumps, v1)
      end
    end
  end
  v2.overlapCheckActive = false
end
function StumpCutterLight:getAreControlledActionsAllowed(v1)
  if self.spec_stumpCutterLight.numFoundStumps == 0 then
    return false, self.spec_stumpCutterLight.texts.warning_stumpCutterNoStumpInRange
  end
  return v1(self)
end
function StumpCutterLight:getDirtMultiplier(v1)
  local v2 = v1(self)
  local v3 = self:getIsTurnedOn()
  if v3 then
    v3 = self:getWorkDirtMultiplier()
  end
  return v2
end
function StumpCutterLight:getWearMultiplier(v1)
  local v2 = v1(self)
  local v3 = self:getIsTurnedOn()
  if v3 then
    v3 = self:getWorkWearMultiplier()
  end
  return v2
end
function StumpCutterLight:getConsumingLoad(v1)
  local v2, v3 = v1(self)
  local v5 = self:getIsTurnedOn()
  if v5 then
  end
  return v2 + v4, v3 + 1
end
