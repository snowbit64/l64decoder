-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PrecisionFarmingDebug = {MOD_NAME = g_currentModName}
local PrecisionFarmingDebug_mt = Class(PrecisionFarmingDebug)
function PrecisionFarmingDebug.new(precisionFarming, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.precisionFarming = precisionFarming
  addConsoleCommand("pfToggleGroundDebug", "Enables debug display of ground data", "toggleGroundDebug", v2)
  return v2
end
function PrecisionFarmingDebug:toggleGroundDebug()
  if self.groundDebugArea == nil then
    local v5 = DebugBitVectorMap.new(50, 2, 0.01, 0.1)
    self.groundDebugArea = v5
    v5:createWithCustomFunc(function(self, v1, v2, v3, v4, v5, v6)
      local v10 = v10:getIsUncoveredAtBitVectorPos((v1 + v3 + v5) / 3, (v2 + v4 + v6) / 3, true)
      u0.valid = v10
      if u0.valid then
        v10 = v10:getLevelAtWorldPos((v1 + v3 + v5) / 3, (v2 + v4 + v6) / 3)
        u0.nLevel = v10
        local v11, v12 = v11:getNOffsetDataAtWorldPos((v1 + v3 + v5) / 3, (v2 + v4 + v6) / 3)
        u0.nOffsetIsLocked = v11
        u0.nOffset = v12
        v10 = v10:getLevelAtWorldPos((v1 + v3 + v5) / 3, (v2 + v4 + v6) / 3)
        u0.phLevel = v10
      end
      return 1, 0
    end)
    v5:setAdditionalDrawInfoFunc(function(self, v1, v2, v3, v4)
      if u0.valid then
        local v6 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v1, 0, v2)
        v6 = v6:getNitrogenValueFromInternalValue(u0.nLevel)
        local v7 = v7:getPhValueFromInternalValue(u0.phLevel)
        if u0.nOffsetIsLocked then
        else
        end
        local v12 = v12(v13, v14, v15, v16, v7)
        local v13 = getCorrectTextSize(0.01)
        v8(v9, v10, v11, v12, v13, 0)
      end
    end)
    v5:addPermanentElement(self.groundDebugArea)
    return
  end
  v1:removePermanentElement(self.groundDebugArea)
  self.groundDebugArea = nil
end
