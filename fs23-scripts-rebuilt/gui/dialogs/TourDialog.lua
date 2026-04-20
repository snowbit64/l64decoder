-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TourDialog = {CONTROLS = {OK_BUTTON = "okButton", INPUT_BOX = "inputBox", INPUT_ITEMS = "inputItems", ICON1 = "icon1", ICON_SEPARATOR = "iconSeparator", ICON2 = "icon2", DESCRIPTION = "description"}}
local v0 = Class(TourDialog, MessageDialog)
function TourDialog.register()
  local v0 = TourDialog.new()
  v1:loadGui("dataS/gui/dialogs/TourDialog.xml", "TourDialog", v0)
  TourDialog.INSTANCE = v0
end
function TourDialog.show(v0, v1, v2, v3, v4)
  if TourDialog.INSTANCE ~= nil then
    if not v2 then
    end
    v5.controlGlyphs = v6
    v5:setTitle(v0)
    v5:setText(v1)
    v5:setCallback(v3, v4)
    v5:updateSize()
    v6:showDialog("TourDialog")
  end
end
function TourDialog.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(TourDialog.CONTROLS)
  v2.buttonAction = InputAction.MENU_ACCEPT
  v2.isBackAllowed = false
  v2.inputDelay = 250
  v2.defaultTitle = "Guided Tour"
  v2.controlGlyphs = {}
  v2.lastInputHelpMode = GS_INPUT_HELP_MODE_TOUCH
  return v2
end
function TourDialog:createFromExistingGui(v1)
  TourDialog.register()
  TourDialog.show(self.title, self.tourText, self.controlGlyphs, self.onOk, self.target)
end
function TourDialog:setTitle(v1)
  if self.dialogTitleElement ~= nil then
    local v4 = Utils.getNoNil(v1, self.defaultTitle)
    v2:setText(...)
  end
end
function TourDialog:setText(v1)
  local v3 = v3:superClass()
  v3.setText(self, v1)
  self.tourText = v1
end
function TourDialog:setCallback(v1, v2)
  self.onOk = v1
  self.target = v2
end
function TourDialog:updateSize()
  for v4, v5 in pairs(self.inputItems) do
    if self.controlGlyphs[v4] ~= nil then
      v7:setVisible(true)
      v7:setText(self.controlGlyphs[v4].textRight)
      if self.controlGlyphs[v4].buttons[2] == nil then
      end
      if v6.buttons[1] == nil then
      end
      v7:setVisible(true)
      if v6.buttons[1] ~= nil then
        v7:setImageFilename(v6.buttons[1].filename)
        local v12 = unpack(v6.buttons[1].uvs)
        v7:setImageUVs(...)
      end
      if v6.actionName ~= "AXIS_ACCELERATE_VEHICLE" and v6.actionName ~= "AXIS_BRAKE_VEHICLE" then
      end
      if v9 then
        v10:applyProfile("tourDialogItemIconSeparator")
      else
        v10:applyProfile("tourDialogItemIconPlus")
      end
      if v6.buttons[2] == nil then
      end
      v10:setVisible(true)
      if v6.buttons[2] == nil then
      end
      v8:setVisible(true)
      if not (v6.buttons[2] ~= nil) then
        continue
      end
      v8:setImageFilename(v6.buttons[2].filename)
      local v13 = unpack(v6.buttons[2].uvs)
      v8:setImageUVs(...)
    else
      v7:setVisible(false)
    end
  end
  v2 = self.dialogTextElement:getTextHeight()
  v3:setSize(nil, v2)
  if self.lastInputHelpMode ~= GS_INPUT_HELP_MODE_GAMEPAD then
  end
  if true and 0 < #self.controlGlyphs then
  end
  v7:setVisible(v5)
  v8:setSize(nil, v3 + v2 + v1.margin[2] + v1.margin[4])
  v8:updateAbsolutePosition()
  if v5 then
    v9:setPosition(nil, self.dialogTextElement.position[2] - v4 - v2)
    v9:setSize(nil, v6 * #self.controlGlyphs)
    v9:updateAbsolutePosition()
  end
end
function TourDialog:acceptDialog(v1, v2)
  if v1 ~= self.buttonAction then
    -- if not v2 then goto L37 end
  end
  if self.inputDelay < self.time then
    self:close()
    if self.onOk ~= nil then
      if self.target ~= nil then
        self.onOk(self.target, self.args)
      else
        self.onOk(self.args)
      end
    end
    return false
  end
  return true
end
function TourDialog:onClickOk()
  return self:acceptDialog(self.buttonAction, false)
end
function TourDialog:update(v1)
  local v3 = v3:superClass()
  v3.update(self, v1)
  local v2 = v2:getInputHelpMode()
  if v2 ~= self.lastInputHelpMode then
    self.lastInputHelpMode = v2
    self:updateSize()
  end
end
function TourDialog:inputEvent(v1, v2, v3)
  local v5 = v5:superClass()
  local v4 = v5.inputEvent(self, v1, v2, v3)
  if Platform.isAndroid and self.inputDisableTime <= 0 and v1 == InputAction.MENU_BACK then
    self:onClickOk()
  end
  return v3
end
