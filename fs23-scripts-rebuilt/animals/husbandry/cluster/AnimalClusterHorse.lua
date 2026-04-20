-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalClusterHorse = {}
local AnimalClusterHorse_mt = Class(AnimalClusterHorse, AnimalCluster)
AnimalClusterHorse.NUM_BITS_FITNESS = 7
AnimalClusterHorse.NUM_BITS_RIDING = 7
AnimalClusterHorse.NUM_BITS_DIRT = 7
AnimalClusterHorse.DAILY_RIDING_TIME = 300000
AnimalClusterHorse.BRUSH_DELTA = -20
function AnimalClusterHorse.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1.fitness = 0
  v1.riding = 0
  v1.dirt = 0
  local v2 = v2:getRandomName()
  v1.name = v2
  local v3 = v3:getText("statistic_cleanliness")
  v1.infoCleanliness = {title = v3, text = ""}
  v3 = v3:getText("ui_horseFitness")
  v1.infoFitness = {title = v3, text = ""}
  v3 = v3:getText("ui_horseDailyRiding")
  v1.infoRiding = {title = v3, text = ""}
  return v1
end
function AnimalClusterHorse:saveToXMLFile(xmlFile, key, usedModNames)
  local v5 = v5:superClass()
  v5.saveToXMLFile(self, xmlFile, key, usedModNames)
  xmlFile:setString(key .. "#name", self.name)
  xmlFile:setInt(key .. "#fitness", self.fitness)
  xmlFile:setInt(key .. "#riding", self.riding)
  xmlFile:setInt(key .. "#dirt", self.dirt)
end
function AnimalClusterHorse:loadFromXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  local v3 = v4.loadFromXMLFile(self, xmlFile, key)
  if not v3 then
    return false
  end
  v4 = xmlFile:getInt(key .. "#fitness", self.fitness)
  v3 = MathUtil.clamp(v4, 0, 100)
  self.fitness = v3
  v3 = xmlFile:getString(key .. "#name", self.name)
  self.name = v3
  v4 = xmlFile:getInt(key .. "#riding", self.riding)
  v3 = MathUtil.clamp(v4, 0, 100)
  self.riding = v3
  v4 = xmlFile:getInt(key .. "#dirt", self.dirt)
  v3 = MathUtil.clamp(v4, 0, 100)
  self.dirt = v3
  return true
end
function AnimalClusterHorse:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = streamReadString(streamId)
  self.name = v3
  v3 = streamReadUIntN(streamId, AnimalClusterHorse.NUM_BITS_FITNESS)
  self.fitness = v3
  v3 = streamReadUIntN(streamId, AnimalClusterHorse.NUM_BITS_RIDING)
  self.riding = v3
  v3 = streamReadUIntN(streamId, AnimalClusterHorse.NUM_BITS_DIRT)
  self.dirt = v3
end
function AnimalClusterHorse:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  streamWriteString(streamId, self.name)
  local v5 = math.floor(self.fitness)
  streamWriteUIntN(streamId, v5, AnimalClusterHorse.NUM_BITS_FITNESS)
  v5 = math.floor(self.riding)
  streamWriteUIntN(streamId, v5, AnimalClusterHorse.NUM_BITS_RIDING)
  v5 = math.floor(self.dirt)
  streamWriteUIntN(streamId, v5, AnimalClusterHorse.NUM_BITS_DIRT)
end
function AnimalClusterHorse:readUpdateStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readUpdateStream(self, streamId, connection)
  local v3 = streamReadUIntN(streamId, AnimalClusterHorse.NUM_BITS_FITNESS)
  self.fitness = v3
  v3 = streamReadUIntN(streamId, AnimalClusterHorse.NUM_BITS_RIDING)
  self.riding = v3
  v3 = streamReadUIntN(streamId, AnimalClusterHorse.NUM_BITS_DIRT)
  self.dirt = v3
end
function AnimalClusterHorse:writeUpdateStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeUpdateStream(self, streamId, connection)
  local v5 = math.floor(self.fitness)
  streamWriteUIntN(streamId, v5, AnimalClusterHorse.NUM_BITS_FITNESS)
  v5 = math.floor(self.riding)
  streamWriteUIntN(streamId, v5, AnimalClusterHorse.NUM_BITS_RIDING)
  v5 = math.floor(self.dirt)
  streamWriteUIntN(streamId, v5, AnimalClusterHorse.NUM_BITS_DIRT)
end
function AnimalClusterHorse:clone()
  local v2 = v2:superClass()
  local v1 = v2.clone(self)
  v1.fitness = self.fitness
  v1.name = self.name
  v1.riding = self.riding
  v1.dirt = self.dirt
  return v1
end
function AnimalClusterHorse:onDayChanged()
  local v2 = v2:superClass()
  v2.onDayChanged(self)
  local ridingFactor = self:getRidingFactor()
  local v4 = self:getSubTypeIndex()
  v2 = v2:getSubTypeByIndex(...)
  if v2.ridingThresholdFactor < ridingFactor then
  else
  end
  self:changeFitness(v5 * v4 * g_currentMission.environment.timeAdjustment)
  self:resetRiding()
  self:changeDirt(10)
end
function AnimalClusterHorse:getName()
  return self.name
end
function AnimalClusterHorse:getHealthChangeFactor(foodFactor)
  local fitnessFactor = self:getFitnessFactor()
  if Platform.gameplay.needHorseCleaning then
    local v5 = self:getDirtFactor()
    return 0.5 * foodFactor + 0.4 * fitnessFactor + 0.1 * (1 - v5)
  end
  return 0.6 * foodFactor + 0.4 * fitnessFactor
end
function AnimalClusterHorse:setName(name)
  self.name = name
end
function AnimalClusterHorse:getFitnessFactor()
  return self.fitness / 100
end
function AnimalClusterHorse:changeFitness(delta)
  local v4 = math.floor(self.fitness + delta)
  local v3 = MathUtil.clamp(v4, 0, 100)
  self.fitness = v3
  v3 = math.abs(self.fitness - self.fitness)
  if 0 < v3 then
    self:setDirty()
  end
end
function AnimalClusterHorse:getRidingFactor()
  return self.riding / 100
end
function AnimalClusterHorse:setRiding(riding)
  self.riding = riding
end
function AnimalClusterHorse:resetRiding()
  self.riding = 0
  self:setDirty()
end
function AnimalClusterHorse:changeRiding(delta)
  local v4 = math.floor(self.riding + delta)
  local v3 = MathUtil.clamp(v4, 0, 100)
  self.riding = v3
  v3 = math.abs(self.riding - self.riding)
  if 0 < v3 then
    self:setDirty()
  end
end
function AnimalClusterHorse:getDirtFactor()
  return self.dirt / 100
end
function AnimalClusterHorse:changeDirt(delta)
  local v4 = math.floor(self.dirt + delta)
  local v3 = MathUtil.clamp(v4, 0, 100)
  self.dirt = v3
  v3 = math.abs(self.dirt - self.dirt)
  if 0 < v3 then
    self:setDirty()
  end
end
function AnimalClusterHorse:getSellPrice()
  local v3 = self:getSubTypeIndex()
  local v1 = v1:getSubTypeByIndex(...)
  local v2 = v2:get(self.age)
  v3 = self:getHealthFactor()
  local fitnessFactor = self:getFitnessFactor()
  return v2 * (0.3 + 0.5 * v3 + 0.2 * fitnessFactor)
end
function AnimalClusterHorse.getDailyRidingTime(v0)
  return AnimalClusterHorse.DAILY_RIDING_TIME
end
function AnimalClusterHorse.getSupportsMerging(v0)
  return false
end
function AnimalClusterHorse:getHash()
  local v2 = v2:superClass()
  local v1 = v2.getHash(self)
  return v1 + 1000000000000 * (100 + self.fitness) + 1000000000000000 * (100 + self.dirt) + 1000000000000000000 * (100 + self.riding)
end
function AnimalClusterHorse:showInfo(box)
  local v4 = v4:getText("infohud_name")
  box:addLine(v4, self.name)
  local v3 = v3:superClass()
  v3.showInfo(self, box)
  v4 = v4:getText("infohud_riding")
  local v5 = string.format("%d %%", self.riding)
  box:addLine(...)
  v4 = v4:getText("infohud_fitness")
  v5 = string.format("%d %%", self.fitness)
  box:addLine(...)
  if Platform.gameplay.needHorseCleaning then
    v4 = v4:getText("statistic_cleanliness")
    v5 = string.format("%d %%", 100 - self.dirt)
    box:addLine(...)
  end
end
function AnimalClusterHorse:addInfos(infos)
  local v3 = v3:superClass()
  v3.addInfos(self, infos)
  if Platform.gameplay.needHorseCleaning then
    local v4 = self:getDirtFactor()
    self.infoCleanliness.value = 1 - v4
    self.infoCleanliness.ratio = 1 - v4
    local v6 = v6:formatNumber((1 - v4) * 100, 0)
    v4 = string.format(...)
    self.infoCleanliness.valueText = v4
    table.insert(infos, self.infoCleanliness)
  end
  local fitnessFactor = self:getFitnessFactor()
  self.infoFitness.value = fitnessFactor
  self.infoFitness.ratio = fitnessFactor
  v6 = v6:formatNumber(fitnessFactor * 100, 0)
  v4 = string.format(...)
  self.infoFitness.valueText = v4
  table.insert(infos, self.infoFitness)
  v3 = self:getRidingFactor()
  self.infoRiding.value = v3
  self.infoRiding.ratio = v3
  local v7 = v7:formatNumber(v3 * 100, 0)
  local v5 = string.format(...)
  self.infoRiding.valueText = v5
  table.insert(infos, self.infoRiding)
end
