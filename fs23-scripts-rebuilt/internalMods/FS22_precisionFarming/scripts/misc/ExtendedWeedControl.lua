-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedWeedControl = {MOD_NAME = g_currentModName, SPRAYER_NOZZLE_EFFECT_FILENAME = g_currentModDirectory .. "shared/sprayerNozzleEffect.i3d"}
local ExtendedWeedControl_mt = Class(ExtendedWeedControl)
function ExtendedWeedControl.new(precisionFarming, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.precisionFarming = precisionFarming
  v2.lastUseSpotSpraying = false
  v2.minOctave1 = 8
  v2.numOctave1 = 1
  v2.persistence1 = 0.5
  v2.rangeMin1 = 3000
  v2.rangeMax1 = 10000
  v2.minOctave2 = 12
  v2.numOctave2 = 1
  v2.persistence2 = 0.5
  v2.rangeMin2 = 500
  v2.rangeMax2 = 10000
  addConsoleCommand("pfWeedSetNoiseParameters", "Sets current weed noise parameters", "setWeedNoiseParameters", v2)
  return v2
end
function ExtendedWeedControl.loadFromXML(v0, v1, v2, v3, v4, v5)
  v6:loadI3DFileAsync(ExtendedWeedControl.SPRAYER_NOZZLE_EFFECT_FILENAME, true, true, ExtendedWeedControl.onSprayerEffectLoaded, v0, {})
end
function ExtendedWeedControl:unloadMapData()
  if self.sprayerEffectNode ~= nil then
    delete(self.sprayerEffectNode)
    self.sprayerEffectNode = nil
  end
  self.perlinNoiseFilter1 = nil
  self.perlinNoiseFilter2 = nil
  self.filtersInitilized = false
  self.weedFilter = nil
  removeConsoleCommand("pfWeedSetNoiseParameters")
end
function ExtendedWeedControl:onSprayerEffectLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    local v4 = getChildAt(i3dNode, 0)
    self.sprayerEffectNode = v4
    unlink(self.sprayerEffectNode)
    delete(i3dNode)
  end
end
function ExtendedWeedControl:getClonedSprayerEffectNode()
  if self.sprayerEffectNode ~= nil then
    return clone(self.sprayerEffectNode, false, false, false)
  end
end
function ExtendedWeedControl:updateDensityMapFilter()
  local v2, v3, v4 = g_currentMission.weedSystem:getDensityMapData()
  if v2 ~= nil and not self.filtersInitilized then
    local v10 = math.random(0, 1000)
    local v5 = PerlinNoiseFilter.new(...)
    self.perlinNoiseFilter1 = v5
    v5:setValueCompareParams(DensityValueCompareType.BETWEEN, self.rangeMin1, self.rangeMax1)
    v10 = math.random(0, 1000)
    v5 = PerlinNoiseFilter.new(...)
    self.perlinNoiseFilter2 = v5
    v5:setValueCompareParams(DensityValueCompareType.BETWEEN, self.rangeMin2, self.rangeMax2)
    self.filtersInitilized = true
  end
end
function ExtendedWeedControl:setWeedNoiseParameters(minOctave1, numOctave1, persistence1, rangeMin1, rangeMax1, minOctave2, numOctave2, persistence2, rangeMin2, rangeMax2)
  local v11 = tonumber(minOctave1)
  v11 = tonumber(numOctave1)
  v11 = tonumber(persistence1)
  v11 = tonumber(rangeMin1)
  v11 = tonumber(rangeMax1)
  v11 = tonumber(minOctave2)
  v11 = tonumber(numOctave2)
  v11 = tonumber(persistence2)
  v11 = tonumber(rangeMin2)
  v11 = tonumber(rangeMax2)
  if not v11 then
  end
  if not numOctave1 then
  end
  if not persistence1 then
  end
  if not rangeMin1 then
  end
  if not rangeMax1 then
  end
  self.minOctave1 = v11
  self.numOctave1 = v12
  self.persistence1 = v13
  self.rangeMin1 = v14
  self.rangeMax1 = v15
  if not minOctave2 then
  end
  if not numOctave2 then
  end
  if not persistence2 then
  end
  if not rangeMin2 then
  end
  if not rangeMax2 then
  end
  self.minOctave2 = v11
  self.numOctave2 = v12
  self.persistence2 = v13
  self.rangeMin2 = v14
  self.rangeMax2 = v15
  log("Weed Noise Parameters:")
  local v12 = string.format("  minOctave1 %.2f, numOctave1 %.2f, persistence1 %.2f, rangeMin1 %d, rangeMax1 %d", self.minOctave1, self.numOctave1, self.persistence1, self.rangeMin1, self.rangeMax1)
  log(...)
  v12 = string.format("  minOctave2 %.2f, numOctave2 %.2f, persistence2 %.2f, rangeMin2 %d, rangeMax2 %d", self.minOctave2, self.numOctave2, self.persistence2, self.rangeMin2, self.rangeMax2)
  log(...)
  self.filtersInitilized = false
end
function ExtendedWeedControl:clearWeedArea(modifier, weedFilter)
  modifier:executeSet(0, self.perlinNoiseFilter1, self.perlinNoiseFilter2, weedFilter)
end
function ExtendedWeedControl.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(FSDensityMapUtil, "setSowingWeedArea", function(v0, v1, v2, v3, v4, v5, v6)
    v0(v1, v2, v3, v4, v5, v6)
    local v8 = g_currentMission.weedSystem:getMapHasWeed()
    if v8 and FSDensityMapUtil.functionCache.setSowingWeedArea ~= nil then
      v9:updateDensityMapFilter()
      if u0.filtersInitilized then
        if u0.weedFilterDense ~= nil then
          -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x80000000 -> L81
        end
        local v9, v10, v11 = v7:getDensityMapData()
        local v13 = DensityMapFilter.new(v9, v10, v11, g_currentMission.terrainRootNode)
        u0.weedFilterDense = v13
        v12:setValueCompareParams(DensityValueCompareType.EQUAL, v8.denseState)
        v13 = DensityMapFilter.new(v9, v10, v11, g_currentMission.terrainRootNode)
        u0.weedFilterSparse = v13
        v12:setValueCompareParams(DensityValueCompareType.EQUAL, v8.sparseState)
        v8.weedModifier:setParallelogramWorldCoords(v1, v2, v3, v4, v5, v6, DensityCoordType.POINT_POINT_POINT)
        v10:clearWeedArea(v8.weedModifier, u0.weedFilterDense)
        v10:clearWeedArea(v8.weedModifier, u0.weedFilterSparse)
      end
    end
  end)
  v1:overwriteGameFunction(FieldManager, "setFieldGround", function(v0, v1, v2, ...)
    local v3 = v0(...)
    if v2 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L14
    end
    return false
    v4:updateDensityMapFilter()
    if u0.filtersInitilized then
      local v4 = getNumOfChildren(v2.fieldDimensions)
      -- TODO: structure LOP_FORNPREP (pc 30, target 83)
      local v8 = getChildAt(v2.fieldDimensions, 1 - 1)
      local v9 = getChildAt(v8, 0)
      local v10 = getChildAt(v8, 1)
      local v11, v12, v13 = getWorldTranslation(v9)
      local v14, v15, v16 = getWorldTranslation(v8)
      local v17, v18, v19 = getWorldTranslation(v10)
      if v1.weedModifier ~= nil then
        v20:setParallelogramWorldCoords(v11, v13, v14, v16, v17, v19, DensityCoordType.POINT_POINT_POINT)
        v20:clearWeedArea(v1.weedModifier)
      end
      -- TODO: structure LOP_FORNLOOP (pc 82, target 31)
    end
    return v3
  end)
  v1:overwriteGameFunction(FieldManager, "consoleCommandSetFieldFruit", function(v0, v1, ...)
    u0.filtersInitilized = false
    return v0(...)
  end)
  v1:overwriteGameFunction(AIImplement, "getAILookAheadSize", function(v0, v1)
    local v2 = v0(v1)
    if v1.spec_weeder ~= nil then
      return math.max(v2, 6)
    end
    if v1.spec_sprayer ~= nil and v1.spec_sprayer.workAreaParameters.sprayFillType == FillType.HERBICIDE then
      v3 = math.max(v2, 4)
      return v3
    end
    return v2
  end)
  v1:overwriteGameFunction(Sprayer, "processSprayerArea", function(v0, v1, v2, v3)
    if v1.getIsSpotSprayEnabled ~= nil then
      local v5 = v1:getIsSpotSprayEnabled()
    end
    v4.lastUseSpotSpraying = v5
    return v0(v1, v2, v3)
  end)
  v1:overwriteGameFunction(FSDensityMapUtil, "updateHerbicideArea", function(v0, v1, v2, v3, v4, v5, v6, v7)
    local v8, v9 = v0(v1, v2, v3, v4, v5, v6, v7)
    local v11 = g_currentMission.weedSystem:getMapHasWeed()
    if v11 and FSDensityMapUtil.functionCache.updateHerbicideArea ~= nil and FSDensityMapUtil.functionCache.updateHerbicideArea.weedFilters ~= nil then
      if u0.lastUseSpotSpraying then
        v12:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
        v12:setValueCompareParams(DensityValueCompareType.EQUAL, 0)
        return v8, v9
      end
      v12:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
      v12:setValueCompareParams(DensityValueCompareType.EQUAL, 2)
    end
    return v8, v9
  end)
end
