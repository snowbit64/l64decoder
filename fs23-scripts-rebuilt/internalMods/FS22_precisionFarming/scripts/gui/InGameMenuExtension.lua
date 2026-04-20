-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuExtension = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory, GUI_ELEMENTS = g_currentModDirectory .. "gui/ui_elements.png", GUI_ELEMENTS_SIZE = {1024, 1024}, GUI_FRAME_REF_XML = g_currentModDirectory .. "gui/IngameMenuPFFrameReference.xml"}
local InGameMenuExtension_mt = Class(InGameMenuExtension)
function InGameMenuExtension.new(customMt)
  if not customMt then
  end
  return v1(v2, v3)
end
function InGameMenuExtension.unloadMapData(v0)
end
function InGameMenuExtension.delete(v0)
end
function InGameMenuExtension.update(v0, v1)
end
function InGameMenuExtension:updatePrecisionFarmingOverlays()
  if self.inGameMenuPFFrame ~= nil then
    v1:updateSoilStateMapOverlay()
  end
end
function InGameMenuExtension.sortPrecisionFarmingPage()
  if g_gui.screenControllers[InGameMenu].pageTour ~= nil then
  else
  end
  -- TODO: structure LOP_FORNPREP (pc 19, target 49)
  if v0.pagingElement.elements[1] == v0.pagePF then
    table.remove(v0.pagingElement.elements, 1)
    table.insert(v0.pagingElement.elements, v1, v0.pagingElement.elements[1])
  else
    -- TODO: structure LOP_FORNLOOP (pc 48, target 20)
  end
  -- TODO: structure LOP_FORNPREP (pc 56, target 88)
  if v0.pagingElement.pages[1].element == v0.pagePF then
    table.remove(v0.pagingElement.pages, 1)
    table.insert(v0.pagingElement.pages, v1, v0.pagingElement.pages[1])
    return
  end
  -- TODO: structure LOP_FORNLOOP (pc 87, target 57)
end
function InGameMenuExtension.sortPrecisionFarmingPageFrame()
  if g_gui.screenControllers[InGameMenu].pageTour ~= nil then
  else
  end
  -- TODO: structure LOP_FORNPREP (pc 17, target 41)
  if v0.pageFrames[1] == v0.pagePF then
    table.remove(v0.pageFrames, 1)
    table.insert(v0.pageFrames, v1, v0.pageFrames[1])
  else
    -- TODO: structure LOP_FORNLOOP (pc 40, target 18)
  end
  v0:rebuildTabList()
end
function InGameMenuExtension:overwriteGameFunctions(pfModule)
  local xmlFile = loadXMLFile("Temp", InGameMenuExtension.GUI_FRAME_REF_XML)
  if xmlFile ~= nil and xmlFile ~= 0 then
    for v7, v8 in pairs({"pagePF"}) do
      v2.controlIDs[v8] = nil
    end
    v2:registerControls({"pagePF"})
    v4:loadGuiRec(xmlFile, "inGameMenuPFFrameReference", v2.pagingElement, self)
    v2:exposeControlsAsFields("pagePF")
    InGameMenuExtension.sortPrecisionFarmingPage()
    v4:updateAbsolutePosition()
    v4:updatePageMapping()
    delete(xmlFile)
  end
  v4 = v4:resolveFrameReference(v2.pagePF)
  self.inGameMenuPFFrame = v4
  pfModule:overwriteGameFunction(InGameMenu, "setInGameMap", function(self, pfModule, v2)
    xmlFile:setInGameMap(v2)
    self(pfModule, v2)
  end)
  pfModule:overwriteGameFunction(InGameMenu, "setTerrainSize", function(self, pfModule, v2)
    xmlFile:setTerrainSize(v2)
    self(pfModule, v2)
  end)
  pfModule:overwriteGameFunction(InGameMenu, "onLoadMapFinished", function(self, pfModule)
    v2:onLoadMapFinished()
    InGameMenuExtension.sortPrecisionFarmingPage()
    InGameMenuExtension.sortPrecisionFarmingPageFrame()
    self(pfModule)
  end)
  pfModule:overwriteGameFunction(TabbedMenu, "onPageChange", function(self, pfModule, v2, xmlFile, v4, v5)
    if pfModule.pageMapOverview ~= nil and pfModule.pageAI ~= nil and pfModule.pagePF ~= nil then
      local v6 = v6:getPageElementByIndex(pfModule.currentPageId)
      if v6 == pfModule.pageMapOverview then
        v7:copySettingsFromElement(pfModule.pageMapOverview.ingameMap)
        v7:copySettingsFromElement(pfModule.pageMapOverview.ingameMap)
      elseif v6 == pfModule.pageAI then
        v7:copySettingsFromElement(pfModule.pageAI.ingameMap)
        v7:copySettingsFromElement(pfModule.pageAI.ingameMap)
      else
        if v6 == pfModule.pagePF then
          v7:copySettingsFromElement(pfModule.pagePF.ingameMap)
          v7:copySettingsFromElement(pfModule.pagePF.ingameMap)
        end
      end
    end
    self(pfModule, v2, xmlFile, v4, v5)
  end)
  v2:registerPage(v2.pagePF, 19, function()
    return true
  end)
  local v9 = GuiUtils.getUVs({129, 1, 62, 62})
  v2:addPageTab(...)
  v5:applyScreenAlignment()
  v5:updateAbsolutePosition()
  v5:onGuiSetupFinished()
  InGameMenuExtension.sortPrecisionFarmingPageFrame()
  v5:initialize(v2.clickBackCallback)
end
if g_gui ~= nil then
  local pfModule = InGameMenuPFFrame.new(nil, g_messageCenter, g_i18n, g_inputBinding, g_inputDisplayManager, g_farmlandManager, g_farmManager)
  v2:loadGui(InGameMenuExtension.MOD_DIR .. "gui/InGameMenuPFFrame.xml", "PFFrame", pfModule, true)
end
