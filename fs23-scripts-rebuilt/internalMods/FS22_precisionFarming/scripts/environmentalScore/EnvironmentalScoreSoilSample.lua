-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EnvironmentalScoreSoilSample = {TYPE_NONE = 1, TYPE_SAMPLED = 2}
local EnvironmentalScoreSoilSample_mt = Class(EnvironmentalScoreSoilSample, EnvironmentalScoreValue)
function EnvironmentalScoreSoilSample.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.xmlKey = "soilSample"
  {}[EnvironmentalScoreSoilSample.TYPE_NONE] = 0
  {}[EnvironmentalScoreSoilSample.TYPE_SAMPLED] = 1
  v2.typeWeights = {}
  return v2
end
function EnvironmentalScoreSoilSample.loadFromXML(v0, v1, v2, v3, v4, v5)
  local v7 = v7:superClass()
  local v6 = v7.loadFromXML(v0, v1, v2, v3, v4, v5)
  if not v6 then
    return false
  end
  return true
end
function EnvironmentalScoreSoilSample.update(v0, v1)
end
function EnvironmentalScoreSoilSample:getScore(farmlandId)
  local farmlandData = self:getFarmlandData(farmlandId)
  if farmlandData.clientScore ~= nil then
    return farmlandData.clientScore
  end
  if farmlandData.samplePercentage < 0 then
    return 0.5
  end
  return farmlandData.samplePercentage
end
function EnvironmentalScoreSoilSample.initFarmlandData(v0)
  return {samplePercentage = -1}
end
function EnvironmentalScoreSoilSample.loadFarmlandData(v0, v1, v2, v3)
  local v4 = v2:getFloat(v3 .. "#samplePercentage", v1.samplePercentage)
  v1.samplePercentage = v4
end
function EnvironmentalScoreSoilSample.saveFarmlandData(v0, v1, v2, v3)
  v2:setFloat(v3 .. "#samplePercentage", v1.samplePercentage)
end
function EnvironmentalScoreSoilSample.readFarmlandDataFromStream(v0, v1, v2, v3)
  local v6 = streamReadUIntN(v2, 8)
  local v4 = MathUtil.round(v6 / 255, 2)
  v1.clientScore = v4
end
function EnvironmentalScoreSoilSample:writeFarmlandDataToStream(data, streamId, connection)
  local score = self:getScore(data.farmlandId)
  streamWriteUIntN(streamId, score * 255, 8)
end
function EnvironmentalScoreSoilSample:onHarvestScoreReset(farmlandId)
  self:updateFarmlandSampleState(farmlandId)
end
function EnvironmentalScoreSoilSample:updateFarmlandSampleState(farmlandId)
  local farmlandData = self:getFarmlandData(farmlandId)
  local v3 = v3:getFarmlandSampleState(farmlandId)
  local v4 = MathUtil.clamp(v3, 0, 1)
  farmlandData.samplePercentage = v4
end
function EnvironmentalScoreSoilSample.overwriteGameFunctions(v0, v1)
  if g_server ~= nil then
    v1:overwriteGameFunction(SoilSampler, "processSoilSampling", function(v0, v1, ...)
      v0(...)
      if v1.spec_soilSampler.coverMap ~= nil then
        local v3, v4, v5 = getWorldTranslation(v1.spec_soilSampler.samplingNode)
        local v6 = v6:getFarmlandIdAtWorldPosition(v3, v5)
        v7:updateFarmlandSampleState(v6)
      end
    end)
    v1:overwriteGameFunction(CoverMap, "uncoverFarmlandArea", function(v0, v1, v2)
      v0(v1, v2)
      v3:updateFarmlandSampleState(v2)
    end)
    v1:overwriteGameFunction(CoverMap, "analyseArea", function(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
      v0(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
      if v10 ~= nil then
        v11:updateFarmlandSampleState(v10)
      end
    end)
  end
end
