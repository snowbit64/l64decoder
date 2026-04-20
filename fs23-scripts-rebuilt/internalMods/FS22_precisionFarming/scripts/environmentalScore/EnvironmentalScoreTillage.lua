-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EnvironmentalScoreTillage = {TYPE_NONE = 0, TYPE_DEEP_CULTIVATION = 1, TYPE_FLAT_CULTIVATION = 2, TYPE_DIRECT_PLANTING = 3}
local EnvironmentalScoreTillage_mt = Class(EnvironmentalScoreTillage, EnvironmentalScoreValue)
function EnvironmentalScoreTillage.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.xmlKey = "tillage"
  {}[EnvironmentalScoreTillage.TYPE_NONE] = 0.5
  {}[EnvironmentalScoreTillage.TYPE_DEEP_CULTIVATION] = 0
  {}[EnvironmentalScoreTillage.TYPE_FLAT_CULTIVATION] = 0.5
  {}[EnvironmentalScoreTillage.TYPE_DIRECT_PLANTING] = 1
  v2.typeWeights = {}
  return v2
end
function EnvironmentalScoreTillage.loadFromXML(v0, v1, v2, v3, v4, v5)
  local v7 = v7:superClass()
  local v6 = v7.loadFromXML(v0, v1, v2, v3, v4, v5)
  if not v6 then
    return false
  end
  return true
end
function EnvironmentalScoreTillage.update(v0, v1)
end
function EnvironmentalScoreTillage:getScore(farmlandId)
  local farmlandData = self:getFarmlandData(farmlandId)
  if farmlandData.clientScore ~= nil then
    return farmlandData.clientScore
  end
  if 0 < farmlandData.totalFieldArea then
    -- TODO: structure LOP_FORNPREP (pc 22, target 49)
    local v8 = math.min(farmlandData.workedAreaByType[0] / farmlandData.totalFieldArea, 1)
    -- TODO: structure LOP_FORNLOOP (pc 40, target 23)
  else
  end
  return math.min(v3, 1)
end
function EnvironmentalScoreTillage.initFarmlandData(v0)
  {}[EnvironmentalScoreTillage.TYPE_NONE] = math.huge
  {}[EnvironmentalScoreTillage.TYPE_DEEP_CULTIVATION] = 0
  {}[EnvironmentalScoreTillage.TYPE_FLAT_CULTIVATION] = 0
  {}[EnvironmentalScoreTillage.TYPE_DIRECT_PLANTING] = 0
  return {totalFieldArea = 0, workedAreaByType = {}}
end
function EnvironmentalScoreTillage.loadFarmlandData(v0, v1, v2, v3)
  local v4 = v2:getFloat(v3 .. "#totalFieldArea", v1.totalFieldArea)
  v1.totalFieldArea = v4
  local v6 = v2:getFloat(v3 .. "#workedAreaNone", v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_NONE])
  v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_NONE] = v6
  v6 = v2:getFloat(v3 .. "#workedAreaDeep", v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_DEEP_CULTIVATION])
  v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_DEEP_CULTIVATION] = v6
  v6 = v2:getFloat(v3 .. "#workedAreaFlat", v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_FLAT_CULTIVATION])
  v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_FLAT_CULTIVATION] = v6
  v6 = v2:getFloat(v3 .. "#workedAreaDirect", v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_DIRECT_PLANTING])
  v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_DIRECT_PLANTING] = v6
end
function EnvironmentalScoreTillage.saveFarmlandData(v0, v1, v2, v3)
  if v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_NONE] ~= math.huge then
    v2:setFloat(v3 .. "#totalFieldArea", v1.totalFieldArea)
    v2:setFloat(v3 .. "#workedAreaNone", v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_NONE])
    v2:setFloat(v3 .. "#workedAreaDeep", v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_DEEP_CULTIVATION])
    v2:setFloat(v3 .. "#workedAreaFlat", v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_FLAT_CULTIVATION])
    v2:setFloat(v3 .. "#workedAreaDirect", v1.workedAreaByType[EnvironmentalScoreTillage.TYPE_DIRECT_PLANTING])
  end
end
function EnvironmentalScoreTillage.readFarmlandDataFromStream(v0, v1, v2, v3)
  local v6 = streamReadUIntN(v2, 8)
  local v4 = MathUtil.round(v6 / 255, 2)
  v1.clientScore = v4
end
function EnvironmentalScoreTillage:writeFarmlandDataToStream(data, streamId, connection)
  local score = self:getScore(data.farmlandId)
  streamWriteUIntN(streamId, score * 255, 8)
end
function EnvironmentalScoreTillage:addWorkedArea(farmlandId, area, type)
  local farmlandData = self:getFarmlandData(farmlandId)
  if farmlandData.workedAreaByType[EnvironmentalScoreTillage.TYPE_NONE] == math.huge then
    local v5 = v5:getFarmlandById(farmlandId)
    if v5 ~= nil and v5.totalFieldArea ~= nil then
      farmlandData.totalFieldArea = v5.totalFieldArea * 10000
      farmlandData.workedAreaByType[EnvironmentalScoreTillage.TYPE_NONE] = farmlandData.totalFieldArea
    end
  end
  local v8 = v8:getFruitPixelsToSqm()
  local v6 = MathUtil.areaToHa(...)
  while true do
    if not (0 < v6) then
      break
    end
    -- TODO: structure LOP_FORNPREP (pc 62, target 95)
    if 0 ~= type and 0 < farmlandData.workedAreaByType[0] and 0 < v6 then
      v13 = math.max(farmlandData.workedAreaByType[0] - v5 / (#farmlandData.workedAreaByType - 1), 0)
      farmlandData.workedAreaByType[0] = v13
    end
    -- TODO: structure LOP_FORNLOOP (pc 94, target 63)
    if not v7 then
      break
    end
  end
  if 0 < v6 then
    farmlandData.workedAreaByType[type] = farmlandData.workedAreaByType[type] - v6
  end
  farmlandData.workedAreaByType[type] = farmlandData.workedAreaByType[type] + v5
end
function EnvironmentalScoreTillage.overwriteGameFunctions(v0, v1)
  if g_server ~= nil then
    v1:overwriteGameFunction(Cultivator, "processCultivatorArea", function(v0, v1, ...)
      local v2, v3 = v0(...)
      if 0 < v2 and v1.getPFStatisticInfo ~= nil then
        local v4, v5, v6 = v1:getPFStatisticInfo()
        if v6 ~= nil then
          if v1.spec_cultivator.useDeepMode then
            -- if EnvironmentalScoreTillage.TYPE_DEEP_CULTIVATION then goto L34 end
          end
          v7:addWorkedArea(v9, v10, EnvironmentalScoreTillage.TYPE_FLAT_CULTIVATION)
        end
      end
      return v2, v3
    end)
    v1:overwriteGameFunction(SowingMachine, "processSowingMachineArea", function(v0, v1, ...)
      local v2, v3 = v0(...)
      if 0 < v2 and v1.getPFStatisticInfo ~= nil then
        local v4, v5, v6 = v1:getPFStatisticInfo()
        if v6 ~= nil and v1.spec_sowingMachine.useDirectPlanting then
          v7:addWorkedArea(v6, v2, EnvironmentalScoreTillage.TYPE_DIRECT_PLANTING)
        end
      end
      return v2, v3
    end)
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
end
