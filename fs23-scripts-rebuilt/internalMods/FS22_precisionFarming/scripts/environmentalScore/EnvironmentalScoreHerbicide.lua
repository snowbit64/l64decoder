-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EnvironmentalScoreHerbicide = {TYPE_SPOT_SPRAY = 1, TYPE_FULL_SPRAY = 2, TYPE_MECHANICAL = 3}
local EnvironmentalScoreHerbicide_mt = Class(EnvironmentalScoreHerbicide, EnvironmentalScoreValue)
function EnvironmentalScoreHerbicide.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.xmlKey = "herbicide"
  return v2
end
function EnvironmentalScoreHerbicide.loadFromXML(v0, v1, v2, v3, v4, v5)
  local v7 = v7:superClass()
  local v6 = v7.loadFromXML(v0, v1, v2, v3, v4, v5)
  if not v6 then
    return false
  end
  return true
end
function EnvironmentalScoreHerbicide.update(v0, v1)
end
function EnvironmentalScoreHerbicide:getScore(farmlandId)
  local farmlandData = self:getFarmlandData(farmlandId)
  if farmlandData.clientScore ~= nil then
    return farmlandData.clientScore
  end
  if 0 + farmlandData.areaByType[1] + farmlandData.areaByType[2] + farmlandData.areaByType[3] == 0 then
    return 0.5
  end
  return MathUtil.clamp(0 + farmlandData.areaByType[EnvironmentalScoreHerbicide.TYPE_SPOT_SPRAY] / v3 * 1 + farmlandData.areaByType[EnvironmentalScoreHerbicide.TYPE_FULL_SPRAY] / v3 * 0.6 + farmlandData.areaByType[EnvironmentalScoreHerbicide.TYPE_MECHANICAL] / v3 * 0.75, 0, 1)
end
function EnvironmentalScoreHerbicide.initFarmlandData(v0)
  {}[EnvironmentalScoreHerbicide.TYPE_SPOT_SPRAY] = 0
  {}[EnvironmentalScoreHerbicide.TYPE_FULL_SPRAY] = 0
  {}[EnvironmentalScoreHerbicide.TYPE_MECHANICAL] = 0
  return {areaByType = {}, pendingReset = false}
end
function EnvironmentalScoreHerbicide.loadFarmlandData(v0, v1, v2, v3)
  local v6 = v2:getFloat(v3 .. "#spotSpray", v1.areaByType[EnvironmentalScoreHerbicide.TYPE_SPOT_SPRAY])
  v1.areaByType[EnvironmentalScoreHerbicide.TYPE_SPOT_SPRAY] = v6
  v6 = v2:getFloat(v3 .. "#fullSpray", v1.areaByType[EnvironmentalScoreHerbicide.TYPE_FULL_SPRAY])
  v1.areaByType[EnvironmentalScoreHerbicide.TYPE_FULL_SPRAY] = v6
  v6 = v2:getFloat(v3 .. "#mechanical", v1.areaByType[EnvironmentalScoreHerbicide.TYPE_MECHANICAL])
  v1.areaByType[EnvironmentalScoreHerbicide.TYPE_MECHANICAL] = v6
  local v4 = v2:getBool(v3 .. "#pendingReset", v1.pendingReset)
  v1.pendingReset = v4
end
function EnvironmentalScoreHerbicide.saveFarmlandData(v0, v1, v2, v3)
  v2:setFloat(v3 .. "#spotSpray", v1.areaByType[EnvironmentalScoreHerbicide.TYPE_SPOT_SPRAY])
  v2:setFloat(v3 .. "#fullSpray", v1.areaByType[EnvironmentalScoreHerbicide.TYPE_FULL_SPRAY])
  v2:setFloat(v3 .. "#mechanical", v1.areaByType[EnvironmentalScoreHerbicide.TYPE_MECHANICAL])
  v2:setBool(v3 .. "#pendingReset", v1.pendingReset)
end
function EnvironmentalScoreHerbicide.readFarmlandDataFromStream(v0, v1, v2, v3)
  local v6 = streamReadUIntN(v2, 8)
  local v4 = MathUtil.round(v6 / 255, 2)
  v1.clientScore = v4
end
function EnvironmentalScoreHerbicide:writeFarmlandDataToStream(data, streamId, connection)
  local score = self:getScore(data.farmlandId)
  streamWriteUIntN(streamId, score * 255, 8)
end
function EnvironmentalScoreHerbicide:onHarvestScoreReset(farmlandId)
  local farmlandData = self:getFarmlandData(farmlandId)
  farmlandData.pendingReset = true
end
function EnvironmentalScoreHerbicide:addWorkedArea(farmlandId, area, type)
  local farmlandData = self:getFarmlandData(farmlandId)
  if farmlandData.pendingReset then
    farmlandData.areaByType[EnvironmentalScoreHerbicide.TYPE_SPOT_SPRAY] = 0
    farmlandData.areaByType[EnvironmentalScoreHerbicide.TYPE_FULL_SPRAY] = 0
    farmlandData.areaByType[EnvironmentalScoreHerbicide.TYPE_MECHANICAL] = 0
    farmlandData.pendingReset = false
  end
  farmlandData.areaByType[type] = farmlandData.areaByType[type] + area
end
function EnvironmentalScoreHerbicide.overwriteGameFunctions(v0, v1)
  if g_server ~= nil then
    v1:overwriteGameFunction(Sprayer, "processSprayerArea", function(v0, v1, v2, v3)
      local v4, v5 = v0(v1, v2, v3)
      if 0 < v4 and v1.spec_sprayer.workAreaParameters.sprayFillType == FillType.HERBICIDE then
        local v6, v7, v8 = getWorldTranslation(v1.rootNode)
        local v9 = v9:getFarmlandIdAtWorldPosition(v6, v8)
        if v9 ~= nil then
          if v1.spec_weedSpotSpray ~= nil and v1.spec_weedSpotSpray.isAvailable and v1.spec_weedSpotSpray.isEnabled then
            v11:addWorkedArea(v9, v4, EnvironmentalScoreHerbicide.TYPE_SPOT_SPRAY)
            return v4, v5
          end
          v11:addWorkedArea(v9, v4, EnvironmentalScoreHerbicide.TYPE_FULL_SPRAY)
        end
      end
      return v4, v5
    end)
    v1:overwriteGameFunction(Weeder, "processWeederArea", function(v0, v1, v2, v3)
      local v4, v5 = v0(v1, v2, v3)
      if 0 < v4 then
        local v6, v7, v8 = getWorldTranslation(v1.rootNode)
        local v9 = v9:getFarmlandIdAtWorldPosition(v6, v8)
        if v9 ~= nil then
          v10:addWorkedArea(v9, v4, EnvironmentalScoreHerbicide.TYPE_MECHANICAL)
        end
      end
      return v4, v5
    end)
  end
end
