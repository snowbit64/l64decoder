-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalDialog = {CONTROLS = {HUSBANDRY_TEXT = "husbandryText", HUSBANDRIES_ELEMENT = "husbandriesElement"}}
local AnimalDialog_mt = Class(AnimalDialog, YesNoDialog)
function AnimalDialog.register()
  local v0 = AnimalDialog.new()
  v1:loadGui("dataS/gui/dialogs/AnimalDialog.xml", "AnimalDialog", v0)
  AnimalDialog.INSTANCE = v0
end
function AnimalDialog.show(v0, v1, v2, v3)
  if AnimalDialog.INSTANCE ~= nil then
    AnimalDialog.INSTANCE:setCallback(v0, v1)
    AnimalDialog.INSTANCE:setTitle(v2)
    AnimalDialog.INSTANCE:setText(nil)
    AnimalDialog.INSTANCE:setHusbandries(v3)
    v5:showDialog("AnimalDialog")
  end
end
function AnimalDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.selectedHusbandry = nil
  v2:registerControls(AnimalDialog.CONTROLS)
  return v2
end
function AnimalDialog:createFromExistingGui(v1)
  AnimalDialog.register()
  AnimalDialog.show(self.callbackFunc, self.target, self.animalTitle, self.husbandries)
end
function AnimalDialog:onClickOk()
  self:sendCallback(self.selectedHusbandry)
  return false
end
function AnimalDialog:onClickBack(forceBack, usedMenuButton)
  self:sendCallback(nil)
  return false
end
function AnimalDialog:onClickHusbandry(state)
  self.selectedHusbandry = self.husbandries[state]
end
function AnimalDialog:setTitle(v1)
  local v3 = v3:superClass()
  v3.setTitle(self, v1)
  self.animalTitle = v1
end
function AnimalDialog:setHusbandries(husbandries)
  self.husbandries = husbandries
  for v6, v7 in ipairs(husbandries) do
    local v13 = v7:getName()
    local v10 = string.format(...)
    table.insert(...)
  end
  v3:setTexts(v2)
  v3:setState(1, true)
end
