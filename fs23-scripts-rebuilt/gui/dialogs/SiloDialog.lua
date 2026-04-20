-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SiloDialog = {CONTROLS = {SILO_TEXT = "siloText", SILO_ICON = "siloIcon", FILL_TYPES_ELEMENT = "fillTypesElement", MESSAGE_BACKGROUND = "messageBackground"}}
local SiloDialog_mt = Class(SiloDialog, YesNoDialog)
function SiloDialog.register()
  local v0 = SiloDialog.new()
  v1:loadGui("dataS/gui/dialogs/SiloDialog.xml", "SiloDialog", v0)
  SiloDialog.INSTANCE = v0
end
function SiloDialog.show(v0, v1, v2, v3, v4)
  if SiloDialog.INSTANCE ~= nil then
    SiloDialog.INSTANCE:setCallback(v0, v1)
    SiloDialog.INSTANCE:setTitle(v2)
    SiloDialog.INSTANCE:setText(nil)
    SiloDialog.INSTANCE:setFillLevels(v3, v4)
    v6:showDialog("SiloDialog")
  end
end
function SiloDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.selectedFillType = nil
  v2.areButtonsDisabled = false
  v2.lastSelectedFillType = nil
  v2:registerControls(SiloDialog.CONTROLS)
  return v2
end
function SiloDialog:createFromExistingGui(v1)
  SiloDialog.register()
  SiloDialog.show(self.callbackFunc, self.target, self.siloTitle, self.fillLevels, self.hasInfiniteCapacity)
end
function SiloDialog:onClickOk()
  if self.areButtonsDisabled then
    return true
  end
  self.lastSelectedFillType = self.selectedFillType
  self:sendCallback(self.selectedFillType)
  return false
end
function SiloDialog:onClickBack(forceBack, usedMenuButton)
  self:sendCallback(FillType.UNKNOWN)
  return false
end
function SiloDialog:onClickFillTypes(state)
  self:setButtonDisabled(false)
  self.selectedFillType = self.fillTypeMapping[state]
  if self.fillLevels ~= nil and self.fillLevels[self.selectedFillType] <= 0 then
    self:setButtonDisabled(true)
  end
  local v2 = v2:getTextWidth()
  v3:setPosition(self.siloText.position[1] - v2 * 0.5 - self.siloIcon.margin[3], nil)
  local v3 = v3:getFillTypeByIndex(self.selectedFillType)
  v4:setImageFilename(v3.hudOverlayFilename)
end
function SiloDialog:setTitle(v1)
  local v3 = v3:superClass()
  v3.setTitle(self, v1)
  self.siloTitle = v1
end
function SiloDialog:setFillLevels(fillLevels, hasInfiniteCapacity)
  self.fillLevels = fillLevels
  self.fillTypeMapping = {}
  for v9, v10 in pairs(fillLevels) do
    local v11 = v11:getFillTypeByIndex(v9)
    local v12 = Utils.getNoNil(fillLevels[v9], 0)
    if hasInfiniteCapacity then
      local v14 = string.format("%s", v11.title)
    else
      local v17 = v17:formatFluid(v12)
      v14 = string.format(...)
    end
    table.insert(v3, v13)
    table.insert(self.fillTypeMapping, v9)
    if v9 == self.lastSelectedFillType then
    end
  end
  v6:setTexts(v3)
  v6:setState(v4, true)
end
function SiloDialog:setButtonDisabled(disabled)
  v2:setVisible(disabled)
  self.areButtonsDisabled = disabled
  v2:setDisabled(disabled)
end
