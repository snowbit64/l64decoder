-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalItemStock = {}
local AnimalItemStock_mt = Class(AnimalItemStock)
function AnimalItemStock:new()
  local v1 = setmetatable({}, u0)
  v1.cluster = self
  local v5 = self:getAge()
  local v2 = v2:getVisualByAge(...)
  v1.visual = v2
  v2 = v2:getSubTypeByIndex(self.subTypeIndex)
  v5 = v5:getText("ui_age")
  local v7 = self:getAge()
  v5 = v5:formatNumMonth(...)
  local v6 = v6:getText("ui_horseHealth")
  local v9 = self:getHealthFactor()
  v6 = string.format("%.f%%", v9 * 100)
  v1.infos = {{title = v5, value = v5}, {title = v6, value = v6}}
  if v2.supportsReproduction then
    v6 = v6:getText("infohud_reproductionStatus")
    v9 = self:getReproductionFactor()
    v6 = string.format("%.f%%", v9 * 100)
    table.insert(v1.infos, {title = v6, value = v6})
  end
  if self.getFitnessFactor ~= nil then
    v6 = v6:getText("ui_horseFitness")
    v9 = self:getFitnessFactor()
    v6 = string.format("%.f%%", v9 * 100)
    table.insert(v1.infos, {title = v6, value = v6})
  end
  if self.getRidingFactor ~= nil then
    v6 = v6:getText("ui_horseDailyRiding")
    v9 = self:getRidingFactor()
    v6 = string.format("%.f%%", v9 * 100)
    table.insert(v1.infos, {title = v6, value = v6})
  end
  if Platform.gameplay.needHorseCleaning and self.getDirtFactor ~= nil then
    v6 = v6:getText("statistic_cleanliness")
    local v11 = self:getDirtFactor()
    v6 = string.format("%.f%%", (1 - v11) * 100)
    table.insert(v1.infos, {title = v6, value = v6})
  end
  return v1
end
function AnimalItemStock:getName()
  if self.cluster.getName ~= nil then
    return v1:getName()
  end
  return self.visual.store.name
end
function AnimalItemStock:getPrice()
  return v1:getSellPrice()
end
function AnimalItemStock:getTranportationFee(numItems)
  return v2:getTranportationFee(numItems)
end
function AnimalItemStock:getDescription()
  return self.visual.store.description
end
function AnimalItemStock:getFilename()
  return self.visual.store.imageFilename
end
function AnimalItemStock:getPrice()
  return v1:getSellPrice()
end
function AnimalItemStock:getSubTypeIndex()
  return v1:getSubTypeIndex()
end
function AnimalItemStock:getInfos()
  return self.infos
end
function AnimalItemStock:getNumAnimals()
  return v1:getNumAnimals()
end
function AnimalItemStock:getClusterId()
  return self.cluster.id
end
function AnimalItemStock:getCluster()
  return self.cluster
end
function AnimalItemStock:getCanBeSold()
  return v1:getCanBeSold()
end
