-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ColorPickerDialog = {}
local ColorPickerDialog_mt = Class(ColorPickerDialog, MessageDialog)
ColorPickerDialog.MAX_COLUMNS = 8
ColorPickerDialog.CONTROLS = {"okButton", "backButton", BUTTON_TEMPLATE = "buttonTemplate", BUTTON_LAYOUT = "colorButtonLayout", COLOR_NAME = "colorName"}
function ColorPickerDialog.register()
  local v0 = ColorPickerDialog.new()
  v1:loadGui("dataS/gui/dialogs/ColorPickerDialog.xml", "ColorPickerDialog", v0)
  ColorPickerDialog.INSTANCE = v0
end
function ColorPickerDialog.show(v0, v1, v2, v3, v4, v5)
  if ColorPickerDialog.INSTANCE ~= nil then
    v7:showDialog("ColorPickerDialog")
    ColorPickerDialog.INSTANCE:setColors(v3, v4, v5)
    ColorPickerDialog.INSTANCE:setCallback(v0, v1, v2)
  end
end
function ColorPickerDialog.new(target, custom_mt)
  local v3 = v3:superClass()
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.currentColorItemList = {}
  v2.colorsToAdd = {}
  v2.selectedIndex = 1
  v2.colorElements = {}
  v2:registerControls(ColorPickerDialog.CONTROLS)
  return v2
end
function ColorPickerDialog:createFromExistingGui(v1)
  ColorPickerDialog.register()
  if not self.colors[self.defaultColorIndex] then
  end
  ColorPickerDialog.show(v2, v3, v4, v5, v6, self.defaultColorMaterial)
end
function ColorPickerDialog:delete()
  if self.buttonTemplate ~= nil then
    v1:delete()
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function ColorPickerDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self:setInitialFocus()
end
function ColorPickerDialog:setColors(colors, defaultColor, defaultColorMaterial)
  -- TODO: structure LOP_FORNPREP (pc 5, target 13)
  v7:delete()
  -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
  if #colors == 0 then
    return
  end
  local v4 = type(colors[1].color)
  if v4 ~= "table" then
    for v8, v9 in ipairs(colors) do
      v4[v8] = {color = v9}
      local v10 = table.equals(defaultColor, v9)
      if not v10 then
        continue
      end
    end
  end
  self.colors = colors
  self.colorElements = {}
  self.colorMapping = {}
  self.buttonMapping = {}
  for v7, v8 in ipairs(colors) do
    if v8.uiColor ~= nil then
      v9 = table.equals(defaultColor, v8.uiColor)
      if not v9 then
        continue
      end
      if defaultColorMaterial ~= nil and not (v8.material == defaultColorMaterial) then
        continue
      end
      self.defaultColor = v8
      break
    else
      v9 = table.equals(defaultColor, v8.color)
      if not v9 then
        continue
      end
      if defaultColorMaterial ~= nil and not (v8.material == defaultColorMaterial) then
        continue
      end
      self.defaultColor = v8
      break
    end
  end
  v5 = math.ceil(#colors * (self.buttonTemplate.size[1] + self.buttonTemplate.margin[1] + self.buttonTemplate.margin[3]) / self.colorButtonLayout.size[1])
  self.colorButtonLayout.numFlows = v5
  v8:setSize(nil, v5 * (self.buttonTemplate.size[2] + self.buttonTemplate.margin[2] + self.buttonTemplate.margin[4]))
  for v11, v12 in ipairs(colors) do
    if not (v12.isSelectable ~= false) then
      continue
    end
    local v13 = v13:clone(self.colorButtonLayout)
    v13:setVisible(true)
    v13.focusId = nil
    v14:loadElementFromCustomValues(v13)
    self.colorMapping[v13] = v11
    self.buttonMapping[v12] = v13
    table.insert(self.colorElements, v13)
    if v12.material ~= nil then
    end
    if v12.uiColor ~= nil then
    end
    v13:setMaterial(v15)
    v13:setColor(v14[1] or 1, v14[2] or 1, v14[3] or 1)
  end
  v8:invalidateLayout()
  self:resizeDialog(v7)
  v8 = math.floor(self.colorButtonLayout.size[1] / v4)
  self:focusLinkColorButtons(v8)
  self:setInitialFocus()
  self.defaultColorMaterial = defaultColorMaterial
end
function ColorPickerDialog:focusLinkColorButtons(numCols)
  -- TODO: structure LOP_FORNPREP (pc 7, target 122)
  if self.colorButtonLayout.elements[1 - 1] ~= nil then
    v10:linkElements(self.colorButtonLayout.elements[1], FocusManager.LEFT, self.colorButtonLayout.elements[1 - 1])
  else
    v10:linkElements(self.colorButtonLayout.elements[1], FocusManager.LEFT, self.colorButtonLayout.elements[1])
  end
  if v7 ~= nil then
    v10:linkElements(v5, FocusManager.RIGHT, v7)
  else
    v10:linkElements(v5, FocusManager.RIGHT, v5)
  end
  if v8 ~= nil then
    v10:linkElements(v5, FocusManager.TOP, v8)
  else
    v10:linkElements(v5, FocusManager.TOP, v5)
  end
  if v9 ~= nil then
    v10:linkElements(v5, FocusManager.BOTTOM, v9)
  else
    v10:linkElements(v5, FocusManager.BOTTOM, v5)
  end
  -- TODO: structure LOP_FORNLOOP (pc 121, target 8)
end
function ColorPickerDialog:setInitialFocus()
  if self.buttonMapping ~= nil then
  end
  if v1 == nil and 0 < #self.colorElements then
  end
  if v1 ~= nil then
    self.currentSelectedElement = v1
    v2:setFocus(v1)
  end
end
function ColorPickerDialog:setCallback(callbackFunction, target, args)
  self.callbackFunction = callbackFunction
  self.target = target
  self.args = args
end
function ColorPickerDialog:onCreate()
  local v2 = v2:superClass()
  v2.onCreate(self)
  self.defaultOkText = self.okButton.text
  self.defaultBackText = self.backButton.text
  v1:unlinkElement()
  v1:setVisible(false)
end
function ColorPickerDialog:onClickOk()
  if self.currentSelectedElement ~= nil then
    self:onClickColorButton(self.currentSelectedElement)
    return false
  end
  return true
end
function ColorPickerDialog:onClickColorButton(element)
  self:sendCallback(self.colorMapping[element])
end
function ColorPickerDialog:onClickBack(forceBack, usedMenuButton)
  self:sendCallback(nil)
  return false
end
function ColorPickerDialog:sendCallback(colorIndex)
  self:close()
  if self.callbackFunction ~= nil then
    if self.target ~= nil then
      self.callbackFunction(self.target, colorIndex, self.args)
      return
    end
    self.callbackFunction(colorIndex, self.args)
  end
end
function ColorPickerDialog:onFocusColorButton(element)
  self.currentSelectedElement = element
  if self.colorName ~= nil then
    local v6 = Utils.getNoNil(self.colors[self.colorMapping[element]].name, "")
    v4:setText(...)
  end
end
function ColorPickerDialog:onLeaveColorButton(element)
  if self.colorName ~= nil then
    if self.currentSelectedElement ~= nil then
      local v6 = Utils.getNoNil(self.colors[self.colorMapping[self.currentSelectedElement]].name, "")
      v4:setText(...)
      return
    end
    v2:setText("")
  end
end
function ColorPickerDialog:setButtonTexts(okText, backText)
  local v5 = Utils.getNoNil(okText, self.defaultOkText)
  v3:setText(...)
  v5 = Utils.getNoNil(backText, self.defaultBackText)
  v3:setText(...)
end
