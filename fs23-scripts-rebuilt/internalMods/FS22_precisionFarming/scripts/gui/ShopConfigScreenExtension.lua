-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShopConfigScreenExtension = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory, GUI_EXT_XML = g_currentModDirectory .. "gui/ShopConfigScreenExtension.xml", HEADER_SIZE = 0.05555555555555555}
local ShopConfigScreenExtension_mt = Class(ShopConfigScreenExtension)
function ShopConfigScreenExtension.new(customMt)
  if not customMt then
  end
  return v1(v2, v3)
end
function ShopConfigScreenExtension.unloadMapData(v0)
end
function ShopConfigScreenExtension.delete(v0)
end
function ShopConfigScreenExtension.update(v0, v1)
end
function ShopConfigScreenExtension.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(ShopConfigScreen, "loadMapData", function(v0, v1, ...)
    v0(...)
    local v2 = loadXMLFile("Temp", ShopConfigScreenExtension.GUI_EXT_XML)
    if v2 ~= nil and v2 ~= 0 then
      if 0 < #v1.elements then
        for v8, v9 in pairs({INFO_WINDOW = "precisionFarmingInfoWindow", INFO_HEADER = "precisionFarmingInfoHeader", INFO_TEXT = "precisionFarmingInfoText"}) do
          v1.controlIDs[v9] = nil
        end
        v1:registerControls(v4)
        v5:loadGuiRec(v2, "shopConfigScreenExtension", v3, v1)
        v1:exposeControlsAsFields("MapFrame")
        v1:onGuiSetupFinished()
        v1.precisionFarmingInfoContainer = v3.elements[#v3.elements]
        v5:applyScreenAlignment()
        v5:updateAbsolutePosition()
        v1.precisionFarmingTexts = {}
        v6 = v6:getText("shopInfo_cropSensorHeader", ShopConfigScreenExtension.MOD_NAME)
        v1.precisionFarmingTexts.cropSensorHeader = v6
        v6 = v6:getText("shopInfo_cropSensorText", ShopConfigScreenExtension.MOD_NAME)
        v1.precisionFarmingTexts.cropSensorText = v6
        v6 = v6:getText("shopInfo_manureSensorHeader", ShopConfigScreenExtension.MOD_NAME)
        v1.precisionFarmingTexts.manureSensorHeader = v6
        v6 = v6:getText("shopInfo_manureSensorText", ShopConfigScreenExtension.MOD_NAME)
        v1.precisionFarmingTexts.manureSensorText = v6
        v6 = v6:getText("shopInfo_weedSpotSprayHeader", ShopConfigScreenExtension.MOD_NAME)
        v1.precisionFarmingTexts.weedSpotSprayHeader = v6
        v6 = v6:getText("shopInfo_weedSpotSprayText", ShopConfigScreenExtension.MOD_NAME)
        v1.precisionFarmingTexts.weedSpotSprayText = v6
        v7 = v7:getText("shopInfo_cropSensorHeader", ShopConfigScreenExtension.MOD_NAME)
        v7 = v7:getText("shopInfo_cropSensorText", ShopConfigScreenExtension.MOD_NAME)
        v7 = v7:getText("shopInfo_manureSensorHeader", ShopConfigScreenExtension.MOD_NAME)
        v7 = v7:getText("shopInfo_manureSensorText", ShopConfigScreenExtension.MOD_NAME)
        v7 = v7:getText("shopInfo_weedSpotSprayHeader", ShopConfigScreenExtension.MOD_NAME)
        v7 = v7:getText("shopInfo_weedSpotSprayText", ShopConfigScreenExtension.MOD_NAME)
        v1.pfShopConfigurations = {cropSensor = {lastIndex = 1, lastChangeTime = 0, title = v7, text = v7}, manureSensor = {lastIndex = 1, lastChangeTime = 0, title = v7, text = v7}, weedSpotSpray = {lastIndex = 1, lastChangeTime = 0, title = v7, text = v7}}
      end
      delete(v2)
    end
  end)
  v1:overwriteGameFunction(ShopConfigScreen, "onOpen", function(v0, v1, ...)
    v0(...)
    v1.pfLastCropSensorConfigurationIndex = nil
    v1.pfLastManureSensorConfigurationIndex = nil
    v1.pfLastWeedSpotSpraySensorConfigurationIndex = nil
    if v1.pfShopConfigurations ~= nil then
      for v5, v6 in pairs(v1.pfShopConfigurations) do
        v6.lastIndex = 1
        v6.lastChangeTime = 0
      end
    end
  end)
  v1:overwriteGameFunction(ShopConfigScreen, "loadCurrentConfiguration", function(v0, v1, ...)
    v0(...)
    if v1.configurations ~= nil and v1.pfShopConfigurations ~= nil then
      for v5, v6 in pairs(v1.pfShopConfigurations) do
        if not (v1.configurations[v5] ~= nil) then
          continue
        end
        if not (v6.lastIndex ~= v1.configurations[v5]) then
          continue
        end
        v6.lastIndex = v1.configurations[v5]
        v6.lastChangeTime = g_time
      end
      for v7, v8 in pairs(v1.pfShopConfigurations) do
        if not (v1.configurations[v7] ~= nil) then
          continue
        end
        if not (1 < v1.configurations[v7]) then
          continue
        end
        if not (v3 < v8.lastChangeTime) then
          continue
        end
      end
      if v2 == nil then
        for v7, v8 in pairs(v1.pfShopConfigurations) do
          if not (v1.configurations[v7] ~= nil) then
            continue
          end
          if not (1 < v1.configurations[v7]) then
            continue
          end
          break
        end
      end
      if v2 == nil then
      end
      v4:setVisible(true)
      if v2 ~= nil then
        v4:setText(v2.title)
        v4:setText(v2.text)
        v5 = v5:getTextHeight(true)
        v5:setSize(nil, v5 + ShopConfigScreenExtension.HEADER_SIZE)
      end
    end
  end)
end
