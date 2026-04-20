-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableBeehive = {}
function PlaceableBeehive.prerequisitesPresent(v0)
  return true
end
function PlaceableBeehive.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "getBeehiveInfluenceFactor", PlaceableBeehive.getBeehiveInfluenceFactor)
  SpecializationUtil.registerFunction(placeableType, "updateBeehiveState", PlaceableBeehive.updateBeehiveState)
  SpecializationUtil.registerFunction(placeableType, "getHoneyAmountToSpawn", PlaceableBeehive.getHoneyAmountToSpawn)
end
function PlaceableBeehive.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableBeehive.updateInfo)
end
function PlaceableBeehive.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableBeehive)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableBeehive)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableBeehive)
end
function PlaceableBeehive:registerXMLPaths(v1)
  self:setXMLSpecializationType("Beehive")
  self:register(XMLValueType.FLOAT, v1 .. ".beehive#actionRadius", "Bees action radius")
  self:register(XMLValueType.FLOAT, v1 .. ".beehive#litersHoneyPerDay", "Beehive honey production per active day")
  EffectManager.registerEffectXMLPaths(self, v1 .. ".beehive.effects")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".beehive.sounds", "idle")
  self:setXMLSpecializationType()
end
function PlaceableBeehive:onLoad(savegame)
  self.spec_beehive.environment = g_currentMission.environment
  self.spec_beehive.isFxActive = false
  self.spec_beehive.isProductionActive = false
  local v4 = self.xmlFile:getFloat("placeable.beehive#actionRadius", 25)
  self.spec_beehive.actionRadius = v4
  local v5 = self.xmlFile:getFloat("placeable.beehive#litersHoneyPerDay", 10)
  self.spec_beehive.honeyPerHour = v5 / 24
  v5 = v5:getText("infohud_range")
  local v8 = v8:formatNumber(self.spec_beehive.actionRadius, 0)
  self.spec_beehive.infoTableRange = {title = v5, text = v8 .. "m"}
  v5 = v5:getText("infohud_beehive_noPalletLocationA")
  self.spec_beehive.infoTableNoSpawnerA = {title = v5, accentuate = true}
  v5 = v5:getText("infohud_beehive_noPalletLocationB")
  self.spec_beehive.infoTableNoSpawnerB = {title = v5, accentuate = true}
  v5 = v5:getText("infohud_beehive_honeyAtPalletLocation")
  self.spec_beehive.honeyAtPalletLocation = {title = "", text = v5}
  self.spec_beehive.actionRadiusSquared = self.spec_beehive.actionRadius ^ 2
  local v4, v5, v6 = getWorldTranslation(self.rootNode)
  self.spec_beehive.wx = v4
  self.spec_beehive.wz = v6
  if self.isClient then
    local v7 = v7:loadEffect(self.xmlFile, "placeable.beehive.effects", self.components, self, self.i3dMappings)
    self.spec_beehive.effects = v7
    v7:setFillType(self.spec_beehive.effects, FillType.UNKNOWN)
    self.spec_beehive.samples = {}
    v8 = v8:loadSampleFromXML(self.xmlFile, "placeable.beehive.sounds", "idle", self.baseDirectory, self.components, 1, AudioGroup.ENVIRONMENT, self.i3dMappings, nil)
    self.spec_beehive.samples.idle = v8
  end
  v2.lastDayTimeHoneySpawned = -1
end
function PlaceableBeehive:onDelete()
  v2:deleteEffects(self.spec_beehive.effects)
  v2:deleteSamples(self.spec_beehive.samples)
  v2:removeBeehive(self)
end
function PlaceableBeehive:onFinalizePlacement()
  self.spec_beehive.lastDayTimeHoneySpawned = self.spec_beehive.environment.dayTime
  v2:addBeehive(self)
  self:updateBeehiveState()
end
function PlaceableBeehive:getBeehiveInfluenceFactor(wx, wz)
  local v4 = MathUtil.getPointPointDistanceSquared(self.spec_beehive.wx, self.spec_beehive.wz, wx, wz)
  if v4 <= self.spec_beehive.actionRadiusSquared then
    return 1 - v4 * 0.85 / self.spec_beehive.actionRadiusSquared
  end
  return 0
end
function PlaceableBeehive:updateBeehiveState()
  self.spec_beehive.isProductionActive = g_currentMission.beehiveSystem.isProductionActive
  if self.spec_beehive.isFxActive ~= g_currentMission.beehiveSystem.isFxActive then
    self.spec_beehive.isFxActive = g_currentMission.beehiveSystem.isFxActive
    if self.isClient then
      if g_currentMission.beehiveSystem.isFxActive then
        v3:startEffects(self.spec_beehive.effects)
        v3:playSample(self.spec_beehive.samples.idle, 0)
        return
      end
      v3:stopEffects(v1.effects)
      v3:stopSample(v1.samples.idle)
    end
  end
end
function PlaceableBeehive:getHoneyAmountToSpawn()
  if self.spec_beehive.isProductionActive then
    local v3 = math.abs((self.spec_beehive.environment.dayTime - self.spec_beehive.lastDayTimeHoneySpawned) / 1000 / 60 / 60)
    local v2 = math.min(v3, 1)
    self.spec_beehive.lastDayTimeHoneySpawned = self.spec_beehive.environment.dayTime
    return self.spec_beehive.honeyPerHour * v2 * g_currentMission.environment.timeAdjustment
  end
  return 0
end
function PlaceableBeehive:updateInfo(superFunc, infoTable)
  table.insert(infoTable, self.spec_beehive.infoTableRange)
  local owner = self:getOwnerFarmId()
  local v5 = v5:getFarmId()
  if owner == v5 then
    v5 = v5:getFarmBeehivePalletSpawner(owner)
    if v5 == nil then
      table.insert(infoTable, self.spec_beehive.infoTableNoSpawnerA)
      table.insert(infoTable, self.spec_beehive.infoTableNoSpawnerB)
      return
    end
    table.insert(infoTable, v3.honeyAtPalletLocation)
  end
end
