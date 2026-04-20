-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

EditFarmDialog = {}
local EditFarmDialog_mt = Class(EditFarmDialog, ColorPickerDialog)
EditFarmDialog.MAX_COLUMNS = 8
EditFarmDialog.CONTROLS = {"titleText", "farmNameInput", "farmPasswordInput", "farmIconPreview", "buttonTemplate", "colorButtonLayout", "editButton", "dialogButtonLayout"}
function EditFarmDialog.register()
  local v0 = EditFarmDialog.new()
  v1:loadGui("dataS/gui/dialogs/EditFarmDialog.xml", "EditFarmDialog", v0)
  EditFarmDialog.INSTANCE = v0
end
function EditFarmDialog.show(v0)
  if EditFarmDialog.INSTANCE ~= nil then
    EditFarmDialog.INSTANCE:setExistingFarm(v0)
    v2:showDialog("EditFarmDialog")
  end
end
function EditFarmDialog.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2.farmId = nil
  v2.isCreatingNewFarm = true
  v2.availableColorIndexMap = {}
  v2.availableColors = {}
  v2.selectedColorIndex = 1
  v2:registerControls(EditFarmDialog.CONTROLS)
  return v2
end
function EditFarmDialog:createFromExistingGui(v1)
  EditFarmDialog.register()
  EditFarmDialog.show(self.farmId)
end
function EditFarmDialog:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  self.isCreatingNewFarm = true
end
function EditFarmDialog:setExistingFarm(farmId)
  self.farmId = farmId
  self:storeAvailableColors(farmId)
  if farmId ~= nil then
    -- if v1 == FarmManager.INVALID_FARM_ID then goto L82 end
    -- if v1 == FarmManager.SPECTATOR_FARM_ID then goto L82 end
    self.isCreatingNewFarm = false
    local v2 = v2:getFarmById(farmId)
    local v3 = v3:getText(EditFarmDialog.L10N_SYMBOL.TITLE_EDIT_FARM_TEMPLATE)
    local v4 = string.format(v3, v2.name)
    v5:setText(v4)
    v5:setText(v2.name)
    v5:setText(v2.password or "")
    self.selectedColorIndex = v2.color
    local v7 = v7:getText(EditFarmDialog.L10N_SYMBOL.BUTTON_CONFIRM)
    self:setButtonTexts(...)
  else
    v4 = v4:getText(EditFarmDialog.L10N_SYMBOL.TITLE_CREATE_FARM)
    v2:setText(...)
    v4 = v4:getText(EditFarmDialog.L10N_SYMBOL.DEFAULT_FARM_NAME)
    v2:setText(...)
    v2:setText("")
    self.selectedColorIndex = self.availableColorIndexMap[1]
    v4 = v4:getText(EditFarmDialog.L10N_SYMBOL.BUTTON_CREATE)
    self:setButtonTexts(...)
  end
  local v6 = GuiUtils.getUVs(Farm.ICON_UVS[self.selectedColorIndex])
  local v5 = unpack(...)
  v2:setImageUVs(...)
  self:setColors(self.availableColors, self.availableColors[1])
  v2:invalidateLayout()
end
function EditFarmDialog:storeAvailableColors(editingFarmId)
  self.availableColors = {}
  self.availableColorIndexMap = {}
  local v2 = v2:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  local v3 = v3:getFarms()
  for v7, v8 in ipairs(Farm.COLORS) do
    for v13, v14 in pairs(v3) do
      if not (v14.farmId ~= FarmManager.SPECTATOR_FARM_ID) then
        continue
      end
      if not (v14.farmId ~= editingFarmId) then
        continue
      end
      if not (v14.color == v7) then
        continue
      end
      break
    end
    if not not v9 then
      continue
    end
    table.insert(self.availableColors, v8)
    self.availableColorIndexMap[#self.availableColors] = v7
  end
end
function EditFarmDialog.resizeDialog(v0, v1)
end
function EditFarmDialog:focusLinkColorButtons(numCols)
  local v3 = v3:superClass()
  v3.focusLinkColorButtons(self, numCols)
  -- TODO: structure LOP_FORNPREP (pc 17, target 44)
  v6:linkElements(self.colorButtonLayout.elements[1], FocusManager.TOP, self.farmPasswordInput)
  v6:linkElements(self.colorButtonLayout.elements[1], FocusManager.BOTTOM, self.farmNameInput)
  -- TODO: structure LOP_FORNLOOP (pc 43, target 18)
end
function EditFarmDialog.setInitialFocus(v0)
end
function EditFarmDialog:onClickColorButton(element)
  self.selectedColorIndex = self.availableColorIndexMap[self.colorMapping[element]]
  local v7 = GuiUtils.getUVs(Farm.ICON_UVS[self.selectedColorIndex])
  local v6 = unpack(...)
  v3:setImageUVs(...)
end
function EditFarmDialog:onClickDone()
  if self.farmPasswordInput.text == "" then
  end
  local v3 = filterText(v1, true, true)
  if v1 ~= "" then
    if v1 ~= v3 then
      v4:setText(v3)
      Logging.info("Entered farm name contains profanity and has been adjusted.")
    else
      if self.isCreatingNewFarm then
        local v4 = v4:getServerConnection()
        local v6 = FarmCreateUpdateEvent.new(v1, self.selectedColorIndex, v2, false, nil)
        v4:sendEvent(...)
      else
        v4 = v4:getServerConnection()
        v6 = FarmCreateUpdateEvent.new(v1, self.selectedColorIndex, v2, true, self.farmId)
        v4:sendEvent(...)
      end
      self:close()
    end
  end
  return false
end
function EditFarmDialog:onClickEdit()
  local v1 = v1:getFocusedElement()
  if v1 == self.farmNameInput then
    v2:onFocusActivate()
    return
  end
  if v1 == self.farmPasswordInput then
    v2:onFocusActivate()
    return
  end
  for v5, v6 in ipairs(self.colorButtonLayout.elements) do
    if not (v6 == v1) then
      continue
    end
    v6:sendAction()
  end
end
EditFarmDialog.L10N_SYMBOL = {TITLE_CREATE_FARM = "ui_createNewFarm", TITLE_EDIT_FARM_TEMPLATE = "ui_editFarm", DEFAULT_FARM_NAME = "ui_defaultFarmName", BUTTON_CREATE = "button_mp_createFarm", BUTTON_CONFIRM = "button_confirm"}
