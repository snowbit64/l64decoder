-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIExtension = {MOD_NAME = g_currentModName}
local AIExtension_mt = Class(AIExtension)
function AIExtension.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.rtkStations = {}
  v1.preciseModeActive = false
  return v1
end
function AIExtension.loadFromXML(v0, v1, v2, v3, v4, v5)
  return true
end
function AIExtension:delete()
  self:setPreciseModeActive(false)
end
function AIExtension.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(AIDriveStrategyStraight, "getDriveStraightData", function(v0, v1, v2, v3, v4, v5, v6, v7)
    local v8, v9, v10, v11, v12 = v0(v1, v2, v3, v4, v5, v6, v7)
    if not u0.aiExtension.preciseModeActive then
      v1.randomLineOffset = v1.randomLineOffset or 0
      if v1.randomLineOffset ~= nil then
        v1.randomLineOffset = v1.randomLineOffset + v2
        local v17 = math.sin(v1.randomLineOffset / 2500)
        local v18 = math.sin((v1.randomLineOffset / 2500 + 2) * 0.3)
        v17 = math.cos(v1.randomLineOffset / 2500 * 5)
      end
    end
    return v8, v9, v10, v11, v12
  end)
  v1:overwriteGameFunction(Sprayer, "setSprayerAITerrainDetailProhibitedRange", function(v0, v1, v2)
    local v3 = v1:getUseSprayerAIRequirements()
    if v3 and v1.addAITerrainDetailProhibitedRange ~= nil then
      v1:clearAITerrainDetailProhibitedRange()
      v1:clearAIFruitRequirements()
      v1:clearAIFruitProhibitions()
      v3 = v3:getSprayTypeByFillTypeIndex(v2)
      if v3 ~= nil then
        if v3.isHerbicide then
          -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L100
          local v5, v6, v7 = g_currentMission.weedSystem:getDensityMapData()
          local v8 = g_currentMission.weedSystem:getHerbicideReplacements()
          -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L100
          for v14, v15 in pairs(v8.weed.replacements) do
            if v9 == -1 then
            elseif v14 ~= v10 + 1 then
              v1:addAIFruitRequirement(nil, v9, v10, v5, v6, v7)
            end
          end
          -- cmp-jump LOP_JUMPXEQKN R9 aux=0x12 -> L100
          v1:addAIFruitRequirement(nil, v9, v10, v5, v6, v7)
        else
          v5, v6, v7 = g_currentMission.fieldGroundSystem:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
          v1:addAITerrainDetailProhibitedRange(v3.sprayGroundType, v3.sprayGroundType, v6, v7)
        end
        if not v3.isHerbicide then
          -- if not v3.isFertilizer then goto L145 end
        end
        v5 = v5:getFruitTypes()
        for v7, v8 in pairs(...) do
          local v9 = v9:lower()
          if not (v9 ~= "grass") then
            continue
          end
          if not (v8.minHarvestingGrowthState ~= nil) then
            continue
          end
          if not (v8.maxHarvestingGrowthState ~= nil) then
            continue
          end
          if not (v8.weed == nil) then
            continue
          end
          v1:addAIFruitProhibitions(v8.index, v8.minHarvestingGrowthState, v8.maxHarvestingGrowthState)
        end
      end
    end
  end)
end
function AIExtension:setPreciseModeActive(state)
  self.preciseModeActive = state
  if state then
    AIVehicleUtil.AREA_OVERLAP = -0.175
    return
  end
  AIVehicleUtil.AREA_OVERLAP = 0.26
end
function AIExtension:registerRTKStation(station)
  self.rtkStations[station] = station
  self:setPreciseModeActive(true)
end
function AIExtension:unregisterRTKStation(station)
  self.rtkStations[station] = nil
  local v5 = next(self.rtkStations)
  if v5 == nil then
  end
  self:setPreciseModeActive(true)
end
