-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HelplineExtension = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory, GUI_EXT_XML = g_currentModDirectory .. "gui/HelpFrameSeedRateExtension.xml"}
local HelplineExtension_mt = Class(HelplineExtension)
function HelplineExtension.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.pfModule = pfModule
  return v2
end
function HelplineExtension:loadFromXML(xmlFile, key, baseDirectory, configFileName, mapFilename)
  local v7 = getXMLString(xmlFile, key .. "#filename")
  local v6 = Utils.getFilename(v7, HelplineExtension.MOD_DIR)
  self.additionalFilename = v6
  return true
end
function HelplineExtension:delete()
  if self.precisionFarmingSeedRateContainer ~= nil then
    v1:delete()
    self.precisionFarmingSeedRateContainer = nil
  end
end
function HelplineExtension.getAllowFirstTimeEvent(v0)
  local v2 = v2:isInGameMessageVisible()
  if not v2 then
    v2 = v2:getIsGuiVisible()
  end
  return v1
end
function HelplineExtension:onFirstTimeRun()
  local v4 = v4:getText("precisionFarming_firstStart", HelplineExtension.MOD_NAME)
  v1:showYesNoDialog({text = v4, callback = self.onFirstTimeRunDialog, target = self})
end
function HelplineExtension:onFirstTimeRunDialog(yes)
  if yes then
    self:openHelpMenu(1)
  end
end
function HelplineExtension.openHelpMenu(v0, v1)
  if g_gui.currentGuiName ~= "InGameMenu" then
    v2:showGui("InGameMenu")
  end
  if g_currentMission ~= nil then
    g_currentMission.inGameMenu:goToPage(g_currentMission.inGameMenu.pageHelpLine)
    local v6 = g_currentMission.inGameMenu.pageHelpLine:getNumberOfSections()
    g_currentMission.inGameMenu.pageHelpLine:openPage(v6, v1)
    v4:smoothScrollTo(math.huge)
  end
end
function HelplineExtension:fillSeedRateRows(contentBox, template)
  if self.pfModule.seedRateMap ~= nil then
    v3:createHelpMenuSeedRateTable(contentBox, template)
  end
end
function HelplineExtension.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(HelpLineManager, "loadMapData", function(v0, v1, v2, v3)
    local v4 = v0(v1, v2, v3)
    if not v4 then
      return false
    end
    if u0.helplineExtension.additionalFilename ~= nil and u0.helplineExtension.additionalFilename ~= "" then
      v1:loadFromXML(u0.helplineExtension.additionalFilename)
    end
  end)
  v1:overwriteGameFunction(InGameMenuHelpFrame, "updateContents", function(v0, v1, v2)
    v0(v1, v2)
    if 0 < #v2.paragraphs and v2.paragraphs[#v2.paragraphs].text == "$l10n_helpText_07_part03" and v2.paragraphs[#v2.paragraphs].customEnvironment == HelplineExtension.MOD_NAME then
      v4:fillSeedRateRows(v1.helpLineContentBox, v1.precisionFarmingSeedRateRowTemplate)
    end
  end)
  v1:overwriteGameFunction(InGameMenuHelpFrame, "onFrameOpen", function(v0, v1)
    if u0.precisionFarmingSeedRateContainer == nil then
      local v2 = loadXMLFile("Temp", HelplineExtension.GUI_EXT_XML)
      if v2 ~= nil and v2 ~= 0 then
        if 0 < #v1.elements then
          v4:loadGuiRec(v2, "helpFrameSeedRateExtension", v1.elements[1], v1)
          v1:exposeControlsAsFields("MapFrame")
          v1:onGuiSetupFinished()
          v1.precisionFarmingSeedRateContainer = v1.elements[1].elements[#v1.elements[1].elements]
          v4:applyScreenAlignment()
          v4:updateAbsolutePosition()
          v4:unlinkElement()
          v4:setVisible(false)
          u0.precisionFarmingSeedRateContainer = v1.precisionFarmingSeedRateContainer
          v1.precisionFarmingSeedRateRowTemplate = v1.precisionFarmingSeedRateContainer.elements[1]
        end
        delete(v2)
      end
    end
    v0(v1)
  end)
end
