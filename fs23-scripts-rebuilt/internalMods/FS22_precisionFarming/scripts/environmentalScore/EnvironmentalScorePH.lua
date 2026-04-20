-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EnvironmentalScorePH = {COMPRESSION = 1000}
local EnvironmentalScorePH_mt = Class(EnvironmentalScorePH, EnvironmentalScoreValue)
function EnvironmentalScorePH.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.xmlKey = "ph"
  return v2
end
function EnvironmentalScorePH:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  local v7 = v7:superClass()
  local v6 = v7.loadFromXML(self, xmlFile, key, baseDirectory, configFileName, mapFilename)
  if not v6 then
    return false
  end
  v6 = AnimCurve.new(linearInterpolator1)
  self.scoreCurve = v6
  while true do
    v7 = string.format("%s.scoreMapping.scoreValue(%d)", key, v6)
    v8 = hasXMLProperty(xmlFile, v7)
    if not v8 then
      break
    end
    v9 = getXMLFloat(xmlFile, v7 .. "#phOffset")
    v10 = getXMLFloat(xmlFile, v7 .. "#score")
    if g_precisionFarming.pHMap ~= nil then
      v11 = g_precisionFarming.pHMap:getPhValueFromChangedStates(1)
    end
    v11:addKeyframe({v9, time = v8})
  end
  return true
end
function EnvironmentalScorePH.update(v0, v1)
end
function EnvironmentalScorePH:getScore(farmlandId)
  local farmlandData = self:getFarmlandData(farmlandId)
  if farmlandData.clientScore ~= nil then
    return farmlandData.clientScore
  end
  if 0 < farmlandData.harvestedArea then
    return v4:get(farmlandData.phOffsetSum / farmlandData.harvestedArea * EnvironmentalScorePH.COMPRESSION)
  end
  return 0.5
end
function EnvironmentalScorePH.initFarmlandData(v0)
  return {harvestedArea = 0, phOffsetSum = 0, pendingReset = false}
end
function EnvironmentalScorePH.loadFarmlandData(v0, v1, v2, v3)
  local v4 = v2:getFloat(v3 .. "#harvestedArea", v1.harvestedArea)
  v1.harvestedArea = v4
  v4 = v2:getFloat(v3 .. "#phOffsetSum", v1.phOffsetSum)
  v1.phOffsetSum = v4
  v4 = v2:getBool(v3 .. "#pendingReset", v1.pendingReset)
  v1.pendingReset = v4
end
function EnvironmentalScorePH.saveFarmlandData(v0, v1, v2, v3)
  v2:setFloat(v3 .. "#harvestedArea", v1.harvestedArea)
  v2:setFloat(v3 .. "#phOffsetSum", v1.phOffsetSum)
  v2:setBool(v3 .. "#pendingReset", v1.pendingReset)
end
function EnvironmentalScorePH.readFarmlandDataFromStream(v0, v1, v2, v3)
  local v6 = streamReadUIntN(v2, 8)
  local v4 = MathUtil.round(v6 / 255, 2)
  v1.clientScore = v4
end
function EnvironmentalScorePH:writeFarmlandDataToStream(data, streamId, connection)
  local score = self:getScore(data.farmlandId)
  streamWriteUIntN(streamId, score * 255, 8)
end
function EnvironmentalScorePH:onHarvestScoreReset(farmlandId)
  local farmlandData = self:getFarmlandData(farmlandId)
  farmlandData.pendingReset = true
end
function EnvironmentalScorePH:addWorkedArea(farmlandId, area, nOffset)
  local farmlandData = self:getFarmlandData(farmlandId)
  if farmlandData.pendingReset then
    farmlandData.harvestedArea = 0
    farmlandData.phOffsetSum = 0
    farmlandData.pendingReset = false
  end
  farmlandData.harvestedArea = farmlandData.harvestedArea + area
  farmlandData.phOffsetSum = farmlandData.phOffsetSum + area * nOffset
end
function EnvironmentalScorePH.overwriteGameFunctions(v0, v1)
  if g_server ~= nil then
    v1:overwriteGameFunction(HarvestExtension, "setLastScoringValues", function(v0, v1, v2, v3, v4, v5, v6, v7, v8)
      v0(v1, v2, v3, v4, v5, v6, v7, v8)
      if v6 ~= nil and v7 ~= nil and 0 < v2 and v3 ~= nil then
        v9:addWorkedArea(v3, v2, v6 - v7)
      end
    end)
  end
end
