-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalCluster = {}
local AnimalCluster_mt = Class(AnimalCluster)
AnimalCluster.NUM_BITS_NUM_ANIMALS = 16
AnimalCluster.NUM_BITS_AGE = 6
AnimalCluster.NUM_BITS_HEALTH = 7
AnimalCluster.NUM_BITS_REPRODUCTION = 7
AnimalCluster.NUM_BITS_SUB_TYPE = 7
AnimalCluster.CLUSTER_ID = 1
function AnimalCluster.getNextClusterId()
  AnimalCluster.CLUSTER_ID = AnimalCluster.CLUSTER_ID + 1
  return AnimalCluster.CLUSTER_ID
end
function AnimalCluster.resetClusterIds()
  if g_server ~= nil then
    local v2 = next(g_server.objects)
    if v2 ~= nil then
    end
  end
  assert(v1)
  AnimalCluster.CLUSTER_ID = 1
end
function AnimalCluster.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  local v2 = AnimalCluster.getNextClusterId()
  v1.id = v2
  if g_isDevelopmentVersion then
    v2 = v2:getIsServer()
    if not v2 then
      v2 = math.random(1, 99999999)
      v1.id = v2
    end
  end
  v1.clusterSystem = nil
  v1.numAnimals = 0
  v1.maxNumAnimals = 2 ^ AnimalCluster.NUM_BITS_NUM_ANIMALS - 1
  v1.age = 0
  v1.health = 0
  v1.reproduction = 0
  v1.subTypeIndex = 1
  v1.isDirty = false
  v2 = v2:getText("statistic_reproduction")
  v1.infoReproduction = {title = v2, titleOrg = v2, text = ""}
  local v4 = v4:getText("infohud_reproductionMinAge")
  v1.infoReproductionMinAge = {title = v4, text = ""}
  v4 = v4:getText("ui_horseHealth")
  v1.infoHealth = {title = v4, text = ""}
  return v1
end
function AnimalCluster:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setInt(key .. "#numAnimals", self.numAnimals)
  xmlFile:setInt(key .. "#age", self.age)
  xmlFile:setInt(key .. "#health", self.health)
  xmlFile:setInt(key .. "#reproduction", self.reproduction)
end
function AnimalCluster:loadFromXMLFile(xmlFile, key)
  local v4 = xmlFile:getInt(key .. "#numAnimals", self.numAnimals)
  local v3 = MathUtil.clamp(v4, 0, self.maxNumAnimals)
  self.numAnimals = v3
  v4 = xmlFile:getInt(key .. "#age", self.age)
  v3 = MathUtil.clamp(v4, 0, 60)
  self.age = v3
  v4 = xmlFile:getInt(key .. "#health", self.health)
  v3 = MathUtil.clamp(v4, 0, 100)
  self.health = v3
  v4 = xmlFile:getInt(key .. "#reproduction", self.reproduction)
  v3 = MathUtil.clamp(v4, 0, 100)
  self.reproduction = v3
  return true
end
function AnimalCluster:readStream(streamId, connection)
  local v3 = streamReadUIntN(streamId, AnimalCluster.NUM_BITS_NUM_ANIMALS)
  self.numAnimals = v3
  v3 = streamReadUIntN(streamId, AnimalCluster.NUM_BITS_AGE)
  self.age = v3
  v3 = streamReadUIntN(streamId, AnimalCluster.NUM_BITS_HEALTH)
  self.health = v3
  v3 = streamReadUIntN(streamId, AnimalCluster.NUM_BITS_REPRODUCTION)
  self.reproduction = v3
end
function AnimalCluster:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.numAnimals, AnimalCluster.NUM_BITS_NUM_ANIMALS)
  local v5 = math.floor(self.age)
  streamWriteUIntN(streamId, v5, AnimalCluster.NUM_BITS_AGE)
  v5 = math.floor(self.health)
  streamWriteUIntN(streamId, v5, AnimalCluster.NUM_BITS_HEALTH)
  v5 = math.floor(self.reproduction)
  streamWriteUIntN(streamId, v5, AnimalCluster.NUM_BITS_REPRODUCTION)
end
function AnimalCluster.readUpdateStream(v0, v1, v2)
end
function AnimalCluster.writeUpdateStream(v0, v1, v2)
end
function AnimalCluster.onDayChanged(v0)
end
function AnimalCluster:onPeriodChanged()
  self:changeAge(1)
end
function AnimalCluster:clone()
  local ret = self.new()
  self.maxNumAnimals = 2 ^ AnimalCluster.NUM_BITS_NUM_ANIMALS - 1
  ret.age = self.age
  ret.health = self.health
  ret.reproduction = self.reproduction
  ret.subTypeIndex = self.subTypeIndex
  return ret
end
function AnimalCluster:setClusterSystem(clusterSystem)
  self.clusterSystem = clusterSystem
end
function AnimalCluster:getNumAnimals()
  return self.numAnimals
end
function AnimalCluster:changeNumAnimals(delta)
  local v4 = math.floor(self.numAnimals + delta)
  local v3 = MathUtil.clamp(v4, 0, self.maxNumAnimals)
  self.numAnimals = v3
  v3 = math.abs(self.numAnimals - self.numAnimals)
  if 0 < v3 then
    self:setDirty()
  end
  return delta - self.numAnimals - v2
end
function AnimalCluster:getSubTypeIndex()
  return self.subTypeIndex
end
function AnimalCluster:getAge()
  return self.age
end
function AnimalCluster:getAgeFactor()
  return MathUtil.clamp(self.age / 60, 0, 1)
end
function AnimalCluster:changeAge(delta)
  local v4 = math.floor(self.age + delta)
  local v3 = MathUtil.clamp(v4, 0, 60)
  self.age = v3
  v3 = math.abs(self.age - self.age)
  if 0 < v3 then
    self:setDirty()
  end
end
function AnimalCluster:updateHealth(foodFactor)
  local v4 = self:getSubTypeIndex()
  local v2 = v2:getSubTypeByIndex(...)
  local healthFactor = self:getHealthChangeFactor(foodFactor)
  if v2.healthThresholdFactor < healthFactor then
  else
  end
  if v6 * v5 ~= 0 then
    self:changeHealth(v6 * v5)
  end
end
function AnimalCluster.getHealthChangeFactor(v0, v1)
  return v1
end
function AnimalCluster:changeHealth(delta)
  local v4 = math.floor(self.health + delta)
  local v3 = MathUtil.clamp(v4, 0, 100)
  self.health = v3
  v3 = math.abs(self.health - self.health)
  if 0 < v3 then
    self:setDirty()
  end
end
function AnimalCluster:getHealthFactor()
  return self.health / 100
end
function AnimalCluster:changeReproduction(delta)
  local v4 = math.floor(self.reproduction + delta)
  local v3 = MathUtil.clamp(v4, 0, 100)
  self.reproduction = v3
  v3 = math.abs(self.reproduction - self.reproduction)
  if 0 < v3 then
    self:setDirty()
  end
end
function AnimalCluster:getReproductionFactor()
  return self.reproduction / 100
end
function AnimalCluster.getReproductionDelta(v0, v1)
  if 0 < v1 then
    return math.floor(100 / v1)
  end
  return 0
end
function AnimalCluster:updateReproduction()
  local v1 = self:getCanReproduce()
  if v1 then
    local v3 = self:getSubTypeIndex()
    v1 = v1:getSubTypeByIndex(...)
    local v2 = self:getReproductionDelta(v1.reproductionDurationMonth)
    if 0 < v2 then
      self:changeReproduction(v2)
      if 100 <= self.reproduction then
        self.reproduction = 0
        self:setDirty()
        return self.numAnimals
      end
    end
  end
  return 0
end
function AnimalCluster:getSupportsReproduction()
  local v3 = self:getSubTypeIndex()
  local v1 = v1:getSubTypeByIndex(...)
  return v1.supportsReproduction
end
function AnimalCluster:getCanReproduce()
  local v3 = self:getSubTypeIndex()
  local v1 = v1:getSubTypeByIndex(...)
  if v1.supportsReproduction then
    local healthFactor = self:getHealthFactor()
    if v1.reproductionMinHealth <= healthFactor and v1.reproductionMinAgeMonth > self.age then
    end
    return v3
  end
  return false
end
function AnimalCluster:setDirty()
  self.isDirty = true
  if self.clusterSystem ~= nil then
    v1:setDirty()
  end
end
function AnimalCluster:getSellPrice()
  local v3 = self:getSubTypeIndex()
  local v1 = v1:getSubTypeByIndex(...)
  local v2 = v2:get(self.age)
  v3 = self:getHealthFactor()
  return v2 * 0.4 + v2 * 0.6 * v3
end
function AnimalCluster.getCanBeSold(v0)
  return true
end
function AnimalCluster:getRidableFilename()
  local v1 = v1:getSubTypeByIndex(self.subTypeIndex)
  return v1.rideableFilename
end
function AnimalCluster:getTranportationFee(numItems)
  local v3 = v3:getAnimalTransportFee(self.subTypeIndex, self.age)
  return v3 * numItems
end
function AnimalCluster.getSupportsMerging(v0)
  return true
end
function AnimalCluster:merge(otherCluster)
  local v2 = math.abs(self.age - otherCluster.age)
  if 0.5 >= v2 then
    v2 = math.abs(self.health - otherCluster.health)
    if 0.5 >= v2 then
      v2 = math.abs(self.reproduction - otherCluster.reproduction)
      -- if 0.5 >= v2 then goto L52 end
    end
  end
  Logging.warning("Cluster-Collision detected: Merged (Age: %.4f, Health: %.4f, Reproduction: %.4f) with (Age: %.4f, Health: %.4f, Reproduction: %.4f)", self.health, self.age, self.reproduction, otherCluster.health, otherCluster.age, otherCluster.reproduction)
  v2 = MathUtil.clamp(self.numAnimals + otherCluster.numAnimals, 0, 65535)
  self.numAnimals = v2
  return true
end
function AnimalCluster:getHash()
  return 100 + self.age + 1000 * (100 + self.health) + 1000000 * (100 + self.reproduction) + 1000000000 * (100 + self.subTypeIndex)
end
function AnimalCluster.getMergeSupport(v0)
  return true
end
function AnimalCluster:showInfo(box)
  local v2 = v2:getVisualByAge(self.subTypeIndex, self.age)
  local v5 = v5:getText("infohud_type")
  box:addLine(v5, v2.store.name)
  v5 = v5:getText("infohud_age")
  local v6 = v6:formatNumMonth(self.age)
  box:addLine(...)
  if 1 < self.numAnimals then
    v5 = v5:getText("infohud_numAnimals")
    v6 = tostring(self.numAnimals)
    box:addLine(...)
  end
  v5 = v5:getText("infohud_health")
  v6 = string.format("%d %%", self.health)
  box:addLine(...)
  v5 = v5:getText("infohud_reproduction")
  v6 = string.format("%d %%", self.reproduction)
  box:addLine(...)
end
function AnimalCluster:addInfos(infos)
  local healthFactor = self:getHealthFactor()
  self.infoHealth.value = healthFactor
  self.infoHealth.ratio = healthFactor
  local v6 = v6:formatNumber(healthFactor * 100, 0)
  local v4 = string.format(...)
  self.infoHealth.valueText = v4
  table.insert(infos, self.infoHealth)
  local v3 = self:getSupportsReproduction()
  if v3 then
    local v5 = self:getSubTypeIndex()
    v3 = v3:getSubTypeByIndex(...)
    if self.age < v3.reproductionMinAgeMonth then
      v6 = self:getAge()
      v4 = MathUtil.clamp(v6 / v3.reproductionMinAgeMonth, 0, 1)
      self.infoReproductionMinAge.value = v4
      self.infoReproductionMinAge.ratio = v4
      local v8 = v8:formatNumber(v4 * 100, 0)
      v6 = string.format(...)
      self.infoReproductionMinAge.valueText = v6
      table.insert(infos, self.infoReproductionMinAge)
      return
    end
    v4 = self:getReproductionFactor()
    self.infoReproduction.value = v4
    self.infoReproduction.ratio = v4
    v8 = v8:formatNumber(v4 * 100, 0)
    v6 = string.format(...)
    self.infoReproduction.valueText = v6
    local v7 = self:getCanReproduce()
    self.infoReproduction.disabled = not v7
    table.insert(infos, self.infoReproduction)
  end
end
