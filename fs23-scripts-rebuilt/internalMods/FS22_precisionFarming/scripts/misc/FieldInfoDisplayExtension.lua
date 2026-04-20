-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FieldInfoDisplayExtension = {MOD_NAME = g_currentModName}
local FieldInfoDisplayExtension_mt = Class(FieldInfoDisplayExtension)
function FieldInfoDisplayExtension.new(precisionFarming, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.precisionFarming = precisionFarming
  v2.fieldInfos = {}
  v2.texts = {}
  local v4 = v4:getText("ui_header")
  v2.texts.boxTitle = v4
  v4 = v4:getText("fieldInfo_expectedYield")
  v2.texts.expectedYield = v4
  v4 = v4:getText("fieldInfo_yieldPotential")
  v2.texts.yieldPotential = v4
  return v2
end
function FieldInfoDisplayExtension:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  v6:collectFieldInfos(self)
  return true
end
function FieldInfoDisplayExtension.delete(v0)
end
function FieldInfoDisplayExtension:addFieldInfo(text, object, updateFunc, prio, yieldChangeFunc)
  table.insert(self.fieldInfos, {text = text, object = object, updateFunc = updateFunc, yieldChangeFunc = yieldChangeFunc, value = nil, color = nil, additionalText = nil})
end
function FieldInfoDisplayExtension:infoBoxAddData(data, box)
  -- TODO: structure LOP_FORNPREP (pc 5, target 56)
  if self.fieldInfos[1].value ~= nil then
    if self.fieldInfos[1].additionalText ~= nil then
      local v9 = string.format(self.fieldInfos[1].text .. " (%s)", self.fieldInfos[1].additionalText)
      if self.fieldInfos[1].color == nil then
      end
      box:addLine(v9, v10, true, v6.color)
    else
      if self.fieldInfos[1].color == nil then
      end
      box:addLine(v9, v10, true, v6.color)
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 55, target 6)
end
function FieldInfoDisplayExtension:infoBoxAddYieldData(data, box)
  if data.fruitTypeMax == nil then
    return
  end
  local v5 = v5:getFruitTypeByIndex(v3)
  if 0 <= v5.minPreparingGrowthState then
    local v7 = math.min(v5.minHarvestingGrowthState - 1, v5.minPreparingGrowthState - 1)
  end
  if 0 < v4 then
    -- if v4 > v6 then goto L39 end
  elseif 0 <= v5.minPreparingGrowthState then
    -- if v5.minPreparingGrowthState > v4 then goto L54 end
    -- if v4 > v5.maxPreparingGrowthState then goto L54 end
  else
    if v5.minHarvestingGrowthState <= v4 and v4 <= v5.maxHarvestingGrowthState then
    end
  end
  if v7 then
    if not g_currentMission.missionInfo.plowingRequiredEnabled then
    end
    if not v12.weedsEnabled then
    end
    -- TODO: structure LOP_FORNPREP (pc 100, target 119)
    if self.fieldInfos[1].yieldChangeFunc ~= nil then
      local v20, v21, v22, v23 = self.fieldInfos[1].yieldChangeFunc(self.fieldInfos[1].object, self.fieldInfos[1])
    end
    -- TODO: structure LOP_FORNLOOP (pc 118, target 101)
    if 0 < v14 then
      local v16 = math.ceil(50 + v13 * 50)
      if v15 ~= 0 then
        v20 = string.format("%d %% | %.1f to/ha", v16 / 100 * v14 * 100, v16 / 100 * v15)
        box:addLine(...)
        v20 = string.format("%d %% | %.1f to/ha", v14 * 100, v15)
        box:addLine(...)
        return
      end
      v20 = string.format("%d %%", v16 * 100)
      box:addLine(...)
      v20 = string.format("%d %%", v14 * 100)
      box:addLine(...)
    end
  end
end
function FieldInfoDisplayExtension.overwriteGameFunctions(v0, data)
  data:overwriteGameFunction(PlayerHUDUpdater, "new", function(v0, ...)
    local data = v0(...)
    local box = box:createBox(KeyValueInfoHUDBox)
    data.precisionFarmingBox = box
    box:setTitle(u0.texts.boxTitle)
    return data
  end)
  data:overwriteGameFunction(PlayerHUDUpdater, "delete", function(v0, data, ...)
    box:destroyBox(data.precisionFarmingBox)
    return v0(...)
  end)
  data:overwriteGameFunction(PlayerHUDUpdater, "showFieldInfo", function(v0, data)
    if data.fieldInfoNeedsRebuild then
      data.precisionFarmingBox:clear()
      data.precisionFarmingBox:setTitle(u0.texts.boxTitle)
      v4:infoBoxAddData(data.fieldData, data.precisionFarmingBox)
      v4:infoBoxAddYieldData(data.fieldData, data.precisionFarmingBox)
    end
    v0(data)
    v3:showNextFrame()
  end)
  data:overwriteGameFunction(PlayerHUDUpdater, "fieldAddLime", function(v0, data, box, v3)
  end)
  data:overwriteGameFunction(PlayerHUDUpdater, "fieldAddFertilization", function(v0, data, box, v3)
  end)
  data:overwriteGameFunction(PlayerHUDUpdater, "updateFieldInfo", function(v0, data, box, v3, v4)
    if data.requestedFieldData then
      return
    end
    v0(data, box, v3, v4)
    local v5, v6 = MathUtil.getDirectionFromYRotation(v4)
    local v7, v8, v9 = MathUtil.crossProduct(v5, 0, v6, 0, 1, 0)
    local v17 = v17:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
    -- TODO: structure LOP_FORNPREP (pc 67, target 92)
    local v21, v22, v23 = u0.fieldInfos[1].updateFunc(u0.fieldInfos[1].object, u0.fieldInfos[1], box - v7 * 5 * 0.5 - v5 * 2, v3 - v9 * 5 * 0.5 - v6 * 2, box + v7 * 5 * 0.5 - v5 * 2, v3 + v9 * 5 * 0.5 - v6 * 2, box - v7 * 5 * 0.5 - v5 * 7, v3 - v9 * 5 * 0.5 - v6 * 7, v17 or false)
    u0.fieldInfos[1].value = v21
    u0.fieldInfos[1].color = v22
    u0.fieldInfos[1].additionalText = v23
    -- TODO: structure LOP_FORNLOOP (pc 91, target 68)
  end)
  data:overwriteGameFunction(PlayerHUDUpdater, "fieldAddFruit", function(v0, data, box, v3)
    if box.fruitTypeMax == nil then
      return
    end
    local v6 = v6:getFruitTypeByIndex(v4)
    local v9 = v9:getText("statistic_fillType")
    v3:addLine(v9, v6.fillType.title)
    if 0 <= v6.maxPreparingGrowthState then
    end
    if 0 <= v6.minPreparingGrowthState then
      v9 = math.min(v6.minHarvestingGrowthState - 1, v6.minPreparingGrowthState - 1)
    end
    if v5 == v6.cutState then
      local v10 = v10:getText("ui_growthMapCut")
    elseif v5 == v7 then
      v10 = v10:getText("ui_growthMapWithered")
    else
      if 0 < v5 then
        -- if v5 > v8 then goto L91 end
        v10 = v10:getText("ui_growthMapGrowing")
      elseif 0 <= v6.minPreparingGrowthState then
        -- if v6.minPreparingGrowthState > v5 then goto L112 end
        -- if v5 > v6.maxPreparingGrowthState then goto L112 end
        v10 = v10:getText("ui_growthMapReadyToPrepareForHarvest")
      else
        if v6.minHarvestingGrowthState <= v5 and v5 <= v6.maxHarvestingGrowthState then
          v10 = v10:getText("ui_growthMapReadyToHarvest")
        end
      end
    end
    if v9 ~= nil then
      local v12 = v12:getText("ui_mapOverviewGrowth")
      v3:addLine(v12, v9)
    end
  end)
end
