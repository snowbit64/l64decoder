-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FarmlandStatistic = {}
local FarmlandStatistic_mt = Class(FarmlandStatistic)
function FarmlandStatistic.new(farmlandId, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.farmlandId = farmlandId
  v2.hasChanged = false
  local v3 = FarmlandStatisticCounter.new()
  v2.periodCounter = v3
  v3 = FarmlandStatisticCounter.new()
  v2.totalCounter = v3
  return v2
end
function FarmlandStatistic:loadFromItemsXML(xmlFile, key)
  local v3 = xmlFile:getInt(key .. "#farmlandId")
  if v3 == self.farmlandId then
    v3:loadFromItemsXML(xmlFile, key .. ".periodCounter")
    v3:loadFromItemsXML(xmlFile, key .. ".totalCounter")
    return
  end
  Logging.warning("Failed to load FarmlandStatistic from items xml (%s)", key)
end
function FarmlandStatistic:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setInt(key .. "#farmlandId", self.farmlandId)
  v4:saveToXMLFile(xmlFile, key .. ".periodCounter", usedModNames)
  v4:saveToXMLFile(xmlFile, key .. ".totalCounter", usedModNames)
end
function FarmlandStatistic:onReadStream(streamId, connection)
  v3:onReadStream(streamId, connection)
  v3:onReadStream(streamId, connection)
end
function FarmlandStatistic:onWriteStream(streamId, connection)
  v3:onWriteStream(streamId, connection)
  v3:onWriteStream(streamId, connection)
end
function FarmlandStatistic:reset(clearTotal)
  v2:reset()
  if clearTotal then
    v2:reset()
  end
end
function FarmlandStatistic:getValue(total, name)
  if total then
  end
  if v3[name] ~= nil then
    return v3[name]
  end
  return 0
end
function FarmlandStatistic:updateStatistic(name, value)
  if self.periodCounter[name] ~= nil then
    self.periodCounter[name] = self.periodCounter[name] + value
  end
  if self.totalCounter[name] ~= nil then
    self.totalCounter[name] = self.totalCounter[name] + value
  end
  self.hasChanged = true
end
