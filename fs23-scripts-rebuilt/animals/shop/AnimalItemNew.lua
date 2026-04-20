-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalItemNew = {}
local AnimalItemNew_mt = Class(AnimalItemNew)
function AnimalItemNew.new(subTypeIndex, age)
  local v2 = setmetatable({}, u0)
  v2.subTypeIndex = subTypeIndex
  v2.age = age
  local v3 = v3:getVisualByAge(subTypeIndex, age)
  v2.visual = v3
  v3 = v3:getSubTypeByIndex(subTypeIndex)
  local v6 = v6:getText("ui_age")
  v6 = v6:formatNumMonth(v2.visual.minAge)
  v2.infos = {{title = v6, value = v6}}
  if v3.supportsReproduction then
    local v7 = v7:getText("infohud_reproductionDuration")
    v7 = v7:formatNumMonth(v3.reproductionDurationMonth)
    table.insert(v2.infos, {title = v7, value = v7})
    v7 = v7:getText("infohud_reproductionMinAge")
    v7 = v7:formatNumMonth(v3.reproductionMinAgeMonth)
    table.insert(v2.infos, {title = v7, value = v7})
  end
  return v2
end
function AnimalItemNew:getName()
  return self.visual.store.name
end
function AnimalItemNew:getPrice()
  return v1:getAnimalBuyPrice(self.subTypeIndex, self.age)
end
function AnimalItemNew:getTranportationFee(numItems)
  local v3 = v3:getAnimalTransportFee(self.subTypeIndex, self.age)
  return v3 * numItems
end
function AnimalItemNew:getSubTypeIndex()
  return self.subTypeIndex
end
function AnimalItemNew:getAge()
  return self.age
end
function AnimalItemNew:getDescription()
  return self.visual.store.description
end
function AnimalItemNew:getFilename()
  return self.visual.store.imageFilename
end
function AnimalItemNew:getInfos()
  return self.infos
end
