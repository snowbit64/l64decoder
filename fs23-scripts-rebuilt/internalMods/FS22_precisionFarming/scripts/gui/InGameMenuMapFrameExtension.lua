-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuMapFrameExtension = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory, GUI_EXT_XML = g_currentModDirectory .. "gui/InGameMenuMapFrameExtension.xml"}
local InGameMenuMapFrameExtension_mt = Class(InGameMenuMapFrameExtension)
function InGameMenuMapFrameExtension.new(customMt)
  if not customMt then
  end
  return v1(v2, v3)
end
function InGameMenuMapFrameExtension.unloadMapData(v0)
end
function InGameMenuMapFrameExtension.delete(v0)
end
function InGameMenuMapFrameExtension.update(v0, v1)
end
function InGameMenuMapFrameExtension.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(InGameMenuMapFrame, "onLoadMapFinished", function(v0, v1)
    v0(v1)
    u0.inGameMenuMapFrameExtension.inGameMenuMapFrame = v1
    local v2 = loadXMLFile("Temp", InGameMenuMapFrameExtension.GUI_EXT_XML)
    if v2 ~= nil and v2 ~= 0 then
      if 0 < #v1.elements and v1.elements[1] ~= nil and v1.elements[1].name == "ingameMenuMapOverview" then
        for v8, v9 in pairs({FIELD_BUY_WINDOW = "fieldBuyInfoWindow", FIELD_BUY_HEADER = "fieldBuyHeader", FIELD_BUY_SOIL_NAME_TXT = "soilNameText", FIELD_BUY_SOIL_PCT_TXT = "soilPercentageText", FIELD_BUY_SOIL_PCT_BAR = "soilPercentageBar", FIELD_BUY_YIELD_PCT_TXT = "yieldPercentageText", FIELD_BUY_YIELD_PCT_BAR_BASE = "yieldPercentageBarBase", FIELD_BUY_YIELD_PCT_BAR_POS = "yieldPercentageBarPos", FIELD_BUY_YIELD_PCT_BAR_NEG = "yieldPercentageBarNeg"}) do
          v1.controlIDs[v9] = nil
        end
        v1:registerControls(v4)
        v5:loadGuiRec(v2, "inGameMenuMapFrameExtension", v3, v1)
        v1:exposeControlsAsFields("MapFrame")
        v1:onGuiSetupFinished()
        if u0.additionalFieldBuyInfo ~= nil then
          v5:setMapFrame(v1)
        end
        v1.precisionFarmingFieldBuyContainer = v3.elements[#v3.elements]
        v5:applyScreenAlignment()
        v5:updateAbsolutePosition()
      end
      delete(v2)
    end
  end)
  v1:overwriteGameFunction(InGameMenuMapFrame, "onClickSwitchMapMode", function(v0, v1)
    if u0.additionalFieldBuyInfo ~= nil then
      v2:onFarmlandSelectionChanged()
      v1:resetUIDeadzones()
    end
    v0(v1)
  end)
  v1:overwriteGameFunction(InGameMenuMapFrame, "onFrameOpen", function(v0, v1)
    v0(v1)
    v1.ingameMap.onClickMapCallback = v1.ingameMap.target.onClickMap
  end)
  v1:overwriteGameFunction(InGameMenuMapFrame, "onFrameClose", function(v0, v1)
    v0(v1)
    if u0.additionalFieldBuyInfo ~= nil then
      v2:onFarmlandSelectionChanged()
      v1:resetUIDeadzones()
    end
  end)
  v1:overwriteGameFunction(InGameMenuMapFrame, "onClickMap", function(v0, v1, v2, v3, v4)
    function v1.farmlandValueText:setValue(v1)
      local v2 = v2:getFarmlandAtWorldPosition(u0, u1)
      if v2.totalFieldArea ~= nil then
        local v7 = v7:formatMoney(v1, 0, true, false)
        local v8 = v8:formatMoney(v1 / v2.totalFieldArea, 0, true, false)
        local v5 = string.format(...)
        self:setText(...)
      else
        v5 = v5:formatMoney(v1, 0, true, false)
        self:setText(...)
      end
      v3:setSize(1, nil)
    end
    v0(v1, v2, v3, v4)
    if v1.selectedFarmland ~= v1.selectedFarmland and u0.additionalFieldBuyInfo ~= nil then
      v6:onFarmlandSelectionChanged(v1.selectedFarmland)
      v1:resetUIDeadzones()
    end
  end)
  v1:overwriteGameFunction(InGameMenuMapFrame, "resetUIDeadzones", function(v0, v1)
    v0(v1)
    if v1.fieldBuyInfoWindow ~= nil then
      local v2 = v2:getIsVisible()
      if v2 then
        v2:addCursorDeadzone(v1.fieldBuyInfoWindow.absPosition[1], v1.fieldBuyInfoWindow.absPosition[2], v1.fieldBuyInfoWindow.size[1], v1.fieldBuyInfoWindow.size[2])
      end
    end
  end)
  v1:overwriteGameFunction(MapOverlayGenerator, "buildSoilStateMapOverlay", function(v0, v1, v2)
    v2[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_LIME] = false
    v2[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED] = false
    v0(v1, v2)
  end)
  v1:overwriteGameFunction(MapOverlayGenerator, "getDisplaySoilStates", function(v0, v1)
    local v2 = v0(v1)
    v2[MapOverlayGenerator.SOIL_STATE_INDEX.FERTILIZED].isActive = false
    v2[MapOverlayGenerator.SOIL_STATE_INDEX.NEEDS_LIME].isActive = false
    return v2
  end)
end
