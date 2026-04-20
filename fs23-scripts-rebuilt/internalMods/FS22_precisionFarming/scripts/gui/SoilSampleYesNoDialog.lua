-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SoilSampleYesNoDialog = {MOD_NAME = g_currentModName, CONTROLS = {"numSamples", "sampleCosts", "serviceCosts", "dialogHeader", "dialogTextElement"}}
local SoilSampleYesNoDialog_mt = Class(SoilSampleYesNoDialog, YesNoDialog)
function SoilSampleYesNoDialog.new(target, custom_mt)
  local v3 = v3:superClass()
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(SoilSampleYesNoDialog.CONTROLS)
  return v2
end
function SoilSampleYesNoDialog:setData(fieldNumber, fieldSize, numSamples, sampleCost, serviceCost)
  v6:setValue(numSamples)
  v6:setValue(sampleCost)
  v6:setValue(serviceCost)
  local v10 = v10:getText("ui_economicAnalysisHeaderField", SoilSampleYesNoDialog.MOD_NAME)
  local v9 = string.format(v10, fieldNumber, fieldSize)
  v7:setText(...)
  v10 = v10:getText("ui_soilSampleDialogQuestion", SoilSampleYesNoDialog.MOD_NAME)
  local v11 = v11:formatMoney(sampleCost + serviceCost, 0, true, true)
  v9 = string.format(...)
  v7:setText(...)
end
