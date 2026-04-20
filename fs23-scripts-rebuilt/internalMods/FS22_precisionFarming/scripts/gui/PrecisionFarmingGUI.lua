-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PrecisionFarmingGUI = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory, GUI_ELEMENTS = g_currentModDirectory .. "gui/ui_elements.png", GUI_ELEMENTS_SIZE = {1024, 1024}}
function PrecisionFarmingGUI:updateButtonOnInputHelpChange(v1, v2)
  if self ~= nil then
    local v4 = v4:getInputHelpMode()
    if v4 ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
    GuiOverlay.deleteOverlay(self.icon)
    self.hasLoadedInputGlyph = false
    self.inputActionName = nil
    self.keyDisplayText = nil
    if true then
      -- if v1 then goto L31 end
    end
    self:applyProfile(v2)
    if self.inputActionName ~= nil then
      self:loadInputGlyph(true)
    end
  end
end
function PrecisionFarmingGUI.initializeGui()
  v0:loadProfiles(PrecisionFarmingGUI.MOD_DIR .. "gui/guiProfiles.xml")
  for v3, v4 in pairs(g_gui.profiles) do
    for v8, v9 in pairs(v4.values) do
      if v8 ~= "imageFilename" and not (v8 == "iconFilename") then
        continue
      end
      if not (v9 == "g_pfUIElements") then
        continue
      end
      v4.values[v8] = PrecisionFarmingGUI.GUI_ELEMENTS
      v4.values.imageSize = PrecisionFarmingGUI.GUI_ELEMENTS_SIZE[1] .. " " .. PrecisionFarmingGUI.GUI_ELEMENTS_SIZE[2]
    end
  end
end
if g_gui ~= nil then
  PrecisionFarmingGUI.initializeGui()
end
