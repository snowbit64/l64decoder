-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CutterDensityHeightPickupFix = {}
function CutterDensityHeightPickupFix.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Cutter, v0)
end
function CutterDensityHeightPickupFix.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "processPickupCutterArea", CutterDensityHeightPickupFix.processPickupCutterArea)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowCutterAIFruitRequirements", CutterDensityHeightPickupFix.getAllowCutterAIFruitRequirements)
end
function CutterDensityHeightPickupFix.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", CutterDensityHeightPickupFix)
end
function CutterDensityHeightPickupFix:onLoad(savegame)
  if self.spec_cutter.fruitTypes ~= nil then
    for v6, v7 in ipairs(self.spec_cutter.fruitTypes) do
      local v8 = v8:getFillTypeIndexByFruitTypeIndex(v7)
      if not (v8 ~= nil) then
        continue
      end
      self:setAIDensityHeightTypeRequirements(v8)
    end
  end
end
function CutterDensityHeightPickupFix:processPickupCutterArea(superFunc, workArea, dt)
  if self.spec_cutter.workAreaParameters.combineVehicle ~= nil then
    local v5, v6, v7 = getWorldTranslation(workArea.start)
    local v8, v9, v10 = getWorldTranslation(workArea.width)
    local v11, v12, v13 = getWorldTranslation(workArea.height)
    local v14, v15, v16, v17, v18, v19, v20 = DensityMapHeightUtil.getLineByAreaDimensions(v5, v6, v7, v8, v9, v10, v11, v12, v13)
    for v24, v25 in ipairs(self.spec_cutter.workAreaParameters.fruitTypesToUse) do
      local v26 = v26:getFruitTypeByIndex(v25)
      local v27 = v27:getWindrowFillTypeIndexByFruitTypeIndex(v25)
      if v27 == nil then
        local v28 = v28:getFillTypeIndexByName(v26.name)
      end
      if not (v27 ~= nil) then
        continue
      end
      local v29 = DensityMapHeightUtil.tipToGroundAroundLine(self, -math.huge, v27, v14, v15, v16, v17, v18, v19, v20, v20, nil, false, nil)
      if not self.isServer then
        continue
      end
      if not (0 < -v29) then
        continue
      end
      local v32 = v32:getFruitPixelsToSqm()
      if v25 ~= v4.currentInputFruitType then
        v4.currentInputFruitType = v25
        local v31 = v31:getFillTypeIndexByFruitTypeIndex(v4.currentInputFruitType)
        v4.currentOutputFillType = v31
      end
      v4.useWindrow = true
      v4.currentInputFillType = v27
      v4.workAreaParameters.lastFruitType = v25
      v4.workAreaParameters.lastRealArea = v4.workAreaParameters.lastRealArea + v30
      v4.workAreaParameters.lastThreshedArea = v4.workAreaParameters.lastThreshedArea + v30
      v4.workAreaParameters.lastStatsArea = v4.workAreaParameters.lastStatsArea + v30
      v4.workAreaParameters.lastArea = v4.workAreaParameters.lastArea + v30
      v31 = FSDensityMapUtil.getStoneArea(v5, v7, v8, v10, v11, v13)
      v4.stoneLastState = v31
      v4.isWorking = true
      break
    end
  end
  return v4.workAreaParameters.lastRealArea, v4.workAreaParameters.lastArea
end
function CutterDensityHeightPickupFix.getAllowCutterAIFruitRequirements(v0, v1)
  return false
end
