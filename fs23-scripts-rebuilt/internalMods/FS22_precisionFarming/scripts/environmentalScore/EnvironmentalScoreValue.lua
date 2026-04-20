-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EnvironmentalScoreValue = {}
local EnvironmentalScoreValue_mt = Class(EnvironmentalScoreValue)
function EnvironmentalScoreValue.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.pfModule = pfModule
  v2.xmlKey = "default"
  return v2
end
function EnvironmentalScoreValue.initFarmlandData(v0)
  return {}
end
function EnvironmentalScoreValue:getFarmlandData(farmlandId)
  if farmlandId ~= nil and self.farmlandDatas[farmlandId] == nil then
    local v3 = self:initFarmlandData()
    self.farmlandDatas[farmlandId] = v3
    self.farmlandDatas[farmlandId].farmlandId = farmlandId
  end
  return self.farmlandDatas[farmlandId]
end
function EnvironmentalScoreValue:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  self.farmlandDatas = {}
  return true
end
function EnvironmentalScoreValue:loadFromItemsXML(xmlFile, key)
  local v5 = string.format("%s.%s.farmland", key, self.xmlKey)
  xmlFile:iterate(v5, function(self, xmlFile)
    local key = key:getInt(xmlFile .. "#farmlandId")
    if key ~= nil then
      local v3 = v3:getFarmlandData(key)
      v4:loadFarmlandData(v3, u0, xmlFile)
    end
  end)
end
function EnvironmentalScoreValue:saveToXMLFile(xmlFile, key, usedModNames)
  for v8, v9 in pairs(self.farmlandDatas) do
    local v10 = string.format("%s.%s.farmland(%d)", key, self.xmlKey, v4)
    xmlFile:setInt(v10 .. "#farmlandId", v8)
    self:saveFarmlandData(v9, xmlFile, v10)
  end
end
function EnvironmentalScoreValue.loadFarmlandData(v0, v1, v2, v3)
end
function EnvironmentalScoreValue.saveFarmlandData(v0, v1, v2, v3)
end
function EnvironmentalScoreValue:readStream(streamId, connection, farmId)
  local v4 = streamReadUIntN(streamId, g_farmlandManager.numberOfBits)
  -- TODO: structure LOP_FORNPREP (pc 9, target 27)
  local v8 = streamReadUIntN(streamId, g_farmlandManager.numberOfBits)
  local v9 = self:getFarmlandData(v8)
  self:readFarmlandDataFromStream(v9, streamId, connection)
  -- TODO: structure LOP_FORNLOOP (pc 26, target 10)
end
function EnvironmentalScoreValue:writeStream(streamId, connection, farmId)
  for v8, v9 in pairs(self.farmlandDatas) do
    if not (g_farmlandManager.farmlandMapping[v8] == farmId) then
      continue
    end
  end
  streamWriteUIntN(streamId, v4, g_farmlandManager.numberOfBits)
  for v8, v9 in pairs(self.farmlandDatas) do
    if not (g_farmlandManager.farmlandMapping[v8] == farmId) then
      continue
    end
    streamWriteUIntN(streamId, v8, g_farmlandManager.numberOfBits)
    self:writeFarmlandDataToStream(v9, streamId, connection)
  end
end
function EnvironmentalScoreValue.readFarmlandDataFromStream(v0, v1, v2, v3)
end
function EnvironmentalScoreValue.writeFarmlandDataToStream(v0, v1, v2, v3)
end
function EnvironmentalScoreValue.update(v0, v1)
end
function EnvironmentalScoreValue.getScore(v0)
  return 0.5
end
function EnvironmentalScoreValue.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(FertilizingSowingMachine, "processSowingMachineArea", function(v0, v1, ...)
    local v2, v3 = v0(...)
    if 0 < v2 and v1.getPFStatisticInfo ~= nil then
      local v4, v5, v6 = v1:getPFStatisticInfo()
      if v6 ~= nil and v1.spec_sowingMachine.useDirectPlanting then
        v7:addWorkedArea(v6, v2, EnvironmentalScoreTillage.TYPE_DIRECT_PLANTING)
      end
    end
    return v2, v3
  end)
end
