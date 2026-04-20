-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LicensePlateDialog = {}
local LicensePlateDialog_mt = Class(LicensePlateDialog, InfoDialog)
LicensePlateDialog.CONTROLS = {"sceneRender", "backButton", "changeColorButton", "changeColorButtonImage", "okButton", "buttonCursorLeft", "buttonCursorRight", "keyboardButtonTemplate", "keyboardAlpha", "keyboardNumeric", "keyboardSpecial", "cursorElement", "placementOption", "typeOption"}
function LicensePlateDialog.register()
  local v0 = LicensePlateDialog.new()
  v1:loadGui("dataS/gui/dialogs/LicensePlateDialog.xml", "LicensePlateDialog", v0)
  LicensePlateDialog.INSTANCE = v0
end
function LicensePlateDialog.show(v0, v1, v2)
  if LicensePlateDialog.INSTANCE ~= nil then
    LicensePlateDialog.INSTANCE:setLicensePlateData(v0)
    LicensePlateDialog.INSTANCE:setCallback(v1, v2)
    v4:showDialog("LicensePlateDialog")
  end
end
function LicensePlateDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.currentVariation = 1
  v2.currentColorIndex = 1
  v2:registerControls(LicensePlateDialog.CONTROLS)
  return v2
end
function LicensePlateDialog:createFromExistingGui(v1)
  LicensePlateDialog.register()
  LicensePlateDialog.show(self.licensePlateData, self.callbackFunc, self.target)
end
function LicensePlateDialog:delete()
  if self.keyboardButtonTemplate ~= nil then
    v1:delete()
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function LicensePlateDialog:onCreate()
  local v2 = v2:superClass()
  v2.onCreate(self)
  v1:unlinkElement()
  v1:removeElement(self.keyboardButtonTemplate)
end
function LicensePlateDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self.needsFirstFocusUpdate = true
  local v1, v2 = v1:getAvailableColors()
  if 1 >= #v1 then
  end
  v3:setVisible(true)
  self.currentCursorPosition = 1
  self.cursorPositions = {}
  v3:createScene()
  self:createKeyboards()
end
function LicensePlateDialog:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  v1:destroyScene()
end
function LicensePlateDialog:setLicensePlateData(licensePlateData)
  if not licensePlateData.variation then
  end
  self.currentVariation = v2
  local v2 = table.copy(licensePlateData.characters, math.huge)
  self.currentCharacters = v2
  local v2, v3 = v2:getAvailableColors()
  if not licensePlateData.colorIndex and not v3 then
  end
  self.currentColorIndex = v4
  self:updateColorButton()
  if not licensePlateData.placementIndex and not licensePlateData.defaultPlacementIndex then
    local v4 = v4:getDefaultPlacementIndex()
  end
  self.currentPlacementIndex = v4
  if licensePlateData.hasFrontPlate ~= false then
    self:updatePlacementOptions()
  else
    self:updatePlacementOptions(LicensePlateManager.PLACEMENT_OPTION.BOTH)
    if self.currentPlacementIndex == LicensePlateManager.PLACEMENT_OPTION.BOTH then
      self.currentPlacementIndex = LicensePlateManager.PLACEMENT_OPTION.BACK_ONLY
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 74, target 89)
  if self.textToPlacementIndex[1] == self.currentPlacementIndex then
    v7:setState(1)
  end
  -- TODO: structure LOP_FORNLOOP (pc 88, target 75)
  self.licensePlateData = licensePlateData
end
function LicensePlateDialog:setCallback(callbackFunction, target, args)
  self.callbackFunction = callbackFunction
  self.target = target
  self.args = args
end
function LicensePlateDialog:sendCallback(variation, characters, colorIndex, placementIndex)
  if variation ~= nil and characters ~= nil and colorIndex ~= nil and placementIndex ~= nil then
  end
  if self.callbackFunction ~= nil then
    if self.target ~= nil then
      self.callbackFunction(self.target, v5, self.args)
      return
    end
    self.callbackFunction(v5, self.args)
  end
end
function LicensePlateDialog:createKeyboards()
  local v1 = v1:getFont()
  function(self, v1)
    -- TODO: structure LOP_FORNPREP (pc 5, target 13)
    v5:delete()
    -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
    -- TODO: structure LOP_FORNPREP (pc 20, target 48)
    local v6 = v6:clone(v1)
    v6.focusId = nil
    v7:loadElementFromCustomValues(v6)
    v6.keyboardValue = u0.charactersByType[self][1].value
    v6:setText(u0.charactersByType[self][1].value)
    -- TODO: structure LOP_FORNLOOP (pc 47, target 21)
    v1:invalidateLayout()
  end(MaterialManager.FONT_CHARACTER_TYPE.ALPHABETICAL, self.keyboardAlpha)
  function(self, v1)
    -- TODO: structure LOP_FORNPREP (pc 5, target 13)
    v5:delete()
    -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
    -- TODO: structure LOP_FORNPREP (pc 20, target 48)
    local v6 = v6:clone(v1)
    v6.focusId = nil
    v7:loadElementFromCustomValues(v6)
    v6.keyboardValue = u0.charactersByType[self][1].value
    v6:setText(u0.charactersByType[self][1].value)
    -- TODO: structure LOP_FORNLOOP (pc 47, target 21)
    v1:invalidateLayout()
  end(MaterialManager.FONT_CHARACTER_TYPE.NUMERICAL, self.keyboardNumeric)
  function(self, v1)
    -- TODO: structure LOP_FORNPREP (pc 5, target 13)
    v5:delete()
    -- TODO: structure LOP_FORNLOOP (pc 12, target 6)
    -- TODO: structure LOP_FORNPREP (pc 20, target 48)
    local v6 = v6:clone(v1)
    v6.focusId = nil
    v7:loadElementFromCustomValues(v6)
    v6.keyboardValue = u0.charactersByType[self][1].value
    v6:setText(u0.charactersByType[self][1].value)
    -- TODO: structure LOP_FORNLOOP (pc 47, target 21)
    v1:invalidateLayout()
  end(MaterialManager.FONT_CHARACTER_TYPE.SPECIAL, self.keyboardSpecial)
  local firstAvailableButton = self:updateFocusLinking(false, false, false)
  v4:setFocus(firstAvailableButton)
end
function LicensePlateDialog:updateFocusLinking(alphabetical, numerical, special)
  v6:linkElements(self.buttonCursorLeft, FocusManager.RIGHT, self.buttonCursorRight)
  v6:linkElements(self.buttonCursorLeft, FocusManager.LEFT, self.buttonCursorLeft)
  v6:linkElements(self.buttonCursorRight, FocusManager.RIGHT, self.buttonCursorRight)
  v6:linkElements(self.buttonCursorRight, FocusManager.LEFT, self.buttonCursorLeft)
  if alphabetical then
    if not nil then
    end
    local v9 = math.floor((#self.keyboardAlpha.elements - 1) / 10)
    -- TODO: structure LOP_FORNPREP (pc 80, target 207)
    v14:linkElements(self.keyboardAlpha.elements[1], FocusManager.LEFT, self.keyboardAlpha.elements[1 - 1] or self.keyboardAlpha.elements[1])
    v14:linkElements(self.keyboardAlpha.elements[1], FocusManager.RIGHT, self.keyboardAlpha.elements[1 + 1] or self.keyboardAlpha.elements[1])
    if self.keyboardAlpha.elements[1 - 10] ~= nil then
      v14:linkElements(self.keyboardAlpha.elements[1], FocusManager.TOP, self.keyboardAlpha.elements[1 - 10])
    elseif 1 <= 5 then
      v14:linkElements(self.keyboardAlpha.elements[1], FocusManager.TOP, self.buttonCursorLeft)
    else
      v14:linkElements(self.keyboardAlpha.elements[1], FocusManager.TOP, self.buttonCursorRight)
    end
    if v13 ~= nil then
      v14:linkElements(v9, FocusManager.BOTTOM, v13)
    else
      if numerical then
      elseif special then
      end
      v15:linkElements(v9, FocusManager.BOTTOM, v14)
    end
    -- TODO: structure LOP_FORNLOOP (pc 206, target 81)
  end
  if numerical then
    if not v4 then
    end
    -- TODO: structure LOP_FORNPREP (pc 228, target 352)
    if alphabetical then
      local v15 = math.floor((#self.keyboardAlpha.elements - 1) / 10)
      local v14 = math.min(v15 * 10 + 1, #self.keyboardAlpha.elements)
    end
    if special then
    end
    v14:linkElements(v9, FocusManager.LEFT, v10 or v9)
    v14:linkElements(v9, FocusManager.RIGHT, v11 or v9)
    if v12 ~= nil then
      v14:linkElements(v9, FocusManager.TOP, v12)
    elseif v8 <= 5 then
      v14:linkElements(v9, FocusManager.TOP, self.buttonCursorLeft)
    else
      v14:linkElements(v9, FocusManager.TOP, self.buttonCursorRight)
    end
    if v13 ~= nil then
      v14:linkElements(v9, FocusManager.BOTTOM, v13)
    end
    -- TODO: structure LOP_FORNLOOP (pc 351, target 229)
  end
  if special then
    if not v4 then
    end
    -- TODO: structure LOP_FORNPREP (pc 373, target 495)
    if numerical then
    elseif alphabetical then
      v15 = math.floor((#self.keyboardAlpha.elements - 1) / 10)
      v14 = math.min(v15 * 10 + 1, #self.keyboardAlpha.elements)
    end
    v13:linkElements(v9, FocusManager.LEFT, v10 or v9)
    v13:linkElements(v9, FocusManager.RIGHT, v11 or v9)
    if v12 ~= nil then
      v13:linkElements(v9, FocusManager.TOP, v12)
    elseif v8 <= 5 then
      v13:linkElements(v9, FocusManager.TOP, self.buttonCursorLeft)
    else
      v13:linkElements(v9, FocusManager.TOP, self.buttonCursorRight)
    end
    v13:linkElements(v9, FocusManager.BOTTOM, self.typeOption)
    -- TODO: structure LOP_FORNLOOP (pc 494, target 374)
  end
  if v4 ~= nil then
    v6:linkElements(self.typeOption, FocusManager.TOP, v5)
    v6:linkElements(self.buttonCursorLeft, FocusManager.BOTTOM, v4)
    v6:linkElements(self.buttonCursorRight, FocusManager.BOTTOM, v4)
    if not self.needsFirstFocusUpdate then
      local v6 = v6:getFocusedElement()
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L555
      v6 = v6:getFocusedElement()
      v6 = v6:getIsDisabled()
      -- if not v6 then goto L555 end
    end
    v6:setFocus(v4)
    self.needsFirstFocusUpdate = false
  end
end
function LicensePlateDialog:updateCursor()
  numerical:setSize(self.cursorPositions[self.currentCursorPosition].width, self.cursorPositions[self.currentCursorPosition].height)
  numerical:setAbsolutePosition(self.cursorPositions[self.currentCursorPosition].x, self.cursorPositions[self.currentCursorPosition].y)
  -- TODO: structure LOP_FORNPREP (pc 37, target 54)
  if not self.licensePlate.variations[self.currentVariation].values[1].isStatic and not self.licensePlate.variations[self.currentVariation].values[1].locked and 1 == self.currentCursorPosition then
    -- goto L54  (LOP_JUMP +2)
  end
  -- TODO: structure LOP_FORNLOOP (pc 53, target 38)
  for v8, v9 in ipairs(self.keyboardAlpha.elements) do
    if v9.overlayState ~= GuiOverlay.STATE_DISABLED then
    end
    if not (true ~= not special.alphabetical) then
      continue
    end
    v9:setDisabled(not special.alphabetical)
  end
  for v8, v9 in ipairs(self.keyboardNumeric.elements) do
    if v9.overlayState ~= GuiOverlay.STATE_DISABLED then
    end
    if not (true ~= not special.numerical) then
      continue
    end
    v9:setDisabled(not special.numerical)
  end
  for v8, v9 in ipairs(self.keyboardSpecial.elements) do
    if v9.overlayState ~= GuiOverlay.STATE_DISABLED then
    end
    if not (true ~= not special.special) then
      continue
    end
    v9:setDisabled(not special.special)
  end
  self:updateFocusLinking(special.alphabetical, special.numerical, special.special)
end
function LicensePlateDialog:updateVariations()
  local numerical = numerical:getText("ui_licensePlateTypeItem")
  -- TODO: structure LOP_FORNPREP (pc 15, target 27)
  local v8 = string.format(numerical, 1)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 26, target 16)
  special:setTexts({})
  special:setState(self.currentVariation)
end
function LicensePlateDialog:updateColorButton()
  if self.licensePlate ~= nil then
    local numerical = numerical:getColor(self.currentColorIndex)
    local alphabetical, numerical, special = unpack(...)
    v4:setImageColor(nil, alphabetical, numerical, special, 1)
  end
end
function LicensePlateDialog:updateLicensePlateGraphics()
  local v5 = table.concat(self.currentCharacters, "")
  alphabetical:updateData(...)
  alphabetical:setColorIndex(self.currentColorIndex)
  self:updateColorButton()
  alphabetical:setRenderDirty()
  local alphabetical = alphabetical:getLicensePlateValues(self.licensePlate, self.currentVariation)
  self.cursorPositions = {}
  local camera = I3DUtil.indexToObject(self.sceneRender.scene, self.sceneRender.cameraPath)
  local v5, v6, v7 = localToWorld(self.licensePlate.node, self.licensePlate.width * 0.5, self.licensePlate.height * 0.5, 0)
  local v8, v9, v10 = projectToCamera(camera, 3, v5, v6, v7)
  local v11, v12 = v11:getFontSize()
  if alphabetical ~= nil then
    for v17, v18 in ipairs(alphabetical) do
      if not not v18.isStatic then
        continue
      end
      if not not v18.locked then
        continue
      end
      local v21 = I3DUtil.indexToObject(self.licensePlate.node, v18.nodePath)
      local v20, v21, v22 = getWorldTranslation(...)
      local v23, v24, v25 = projectToCamera(camera, 3, v20, v21, v22)
      table.insert(self.cursorPositions, {x = v23 * self.sceneRender.size[1] + self.sceneRender.absPosition[1] - ((v8 - 0.5) * 2 * v18.maxWidthRatio * v12 / self.licensePlate.width * self.sceneRender.size[1] + special) * 0.5, y = v24 * self.sceneRender.size[2] + self.sceneRender.absPosition[2] - v13 * 0.5, width = (v8 - 0.5) * 2 * v18.maxWidthRatio * v12 / self.licensePlate.width * self.sceneRender.size[1] + special, height = v13, valueIndex = v18.index})
    end
  end
  v14 = math.min(self.currentCursorPosition, #self.cursorPositions)
  self.currentCursorPosition = v14
  self:updateCursor()
end
function LicensePlateDialog:onCreatePlacementOption(element)
  self.placementOption = element
  self:updatePlacementOptions()
end
function LicensePlateDialog:updatePlacementOptions(excluded)
  self.textToPlacementIndex = {}
  for v6, v7 in pairs(LicensePlateManager.PLACEMENT_OPTION_TEXT) do
    if not (v6 ~= excluded) then
      continue
    end
    local v10 = v10:getText(v7)
    table.insert(...)
    self.textToPlacementIndex[#numerical] = v6
  end
  special:setTexts(numerical)
  special:setState(1)
end
function LicensePlateDialog:onClickBack()
  self:sendCallback(nil)
  local numerical = numerical:superClass()
  numerical.onClickBack(self)
end
function LicensePlateDialog:onClickChangeColor()
  local alphabetical, numerical = alphabetical:getAvailableColors()
  local special = table.copy(alphabetical, math.huge)
  if 1 < #special then
    if not special[numerical] then
    end
    special(v4, v5, v6, v7, v8)
  end
  return true
end
function LicensePlateDialog:onPickedColor(colorIndex)
  if colorIndex ~= nil then
    self.currentColorIndex = colorIndex
    self:updateLicensePlateGraphics()
  end
end
function LicensePlateDialog:onClickOk()
  local alphabetical = alphabetical:validateLicensePlateCharacters(self.currentCharacters)
  self.currentCharacters = alphabetical
  self:sendCallback(self.currentVariation, self.currentCharacters, self.currentColorIndex, self.currentPlacementIndex)
  local numerical = numerical:superClass()
  numerical.onClickOk(self)
end
function LicensePlateDialog:onRenderLoad(scene, overlay)
  local special = special:getLicensePlate(LicensePlateManager.PLATE_TYPE.ELONGATED)
  if special ~= nil then
    setTranslation(scene, 0, -1, 0)
    local linkNode = I3DUtil.indexToObject(scene, "0|0")
    link(linkNode, special.node)
    setTranslation(special.node, 0, 0, 0)
    setRotation(special.node, 0, 0, 0)
    self.licensePlate = special
    if self.currentCharacters == nil then
      local v5 = v5:getRandomCharacters(self.currentVariation)
      self.currentCharacters = v5
    end
    v5 = I3DUtil.indexToObject(self.sceneRender.scene, self.sceneRender.cameraPath)
    if v5 ~= nil then
      local v6 = getFovY(v5)
      local v10 = math.tan(v6 / 2)
      v10 = math.tan(v6 / 2)
      local v9 = math.max((self.licensePlate.width / 2 + 0.005) / v10 / self.sceneRender.size[1] / self.sceneRender.size[2] * g_screenWidth / g_screenHeight, (self.licensePlate.height / 2 + 0.005) / v10)
      setTranslation(v5, 0, 0, v9)
    end
    self:updateLicensePlateGraphics()
    self:updateVariations()
  end
end
function LicensePlateDialog:onClickKeyboardButton(element)
  self.currentCharacters[self.cursorPositions[self.currentCursorPosition].valueIndex] = element.keyboardValue
  self:updateLicensePlateGraphics()
  self:onClickCursorRight()
end
function LicensePlateDialog:onClickCursorLeft()
  self.currentCursorPosition = self.currentCursorPosition - 1
  if self.currentCursorPosition < 1 then
    self.currentCursorPosition = #self.cursorPositions
  end
  self:updateCursor()
end
function LicensePlateDialog:onClickCursorRight()
  self.currentCursorPosition = self.currentCursorPosition + 1
  if #self.cursorPositions < self.currentCursorPosition then
    self.currentCursorPosition = 1
  end
  self:updateCursor()
end
function LicensePlateDialog:onClickPlacementOptionChanged(selection)
  self.currentPlacementIndex = self.textToPlacementIndex[selection]
end
function LicensePlateDialog:onClickTypeOptionChanged(selection)
  self.currentVariation = selection
  local numerical = numerical:getRandomCharacters(self.currentVariation)
  self.currentCharacters = numerical
  self:updateLicensePlateGraphics()
end
function LicensePlateDialog.setButtonTexts(v0, alphabetical)
end
function LicensePlateDialog.setButtonAction(v0, alphabetical)
end
function LicensePlateDialog:keyEvent(unicode, sym, modifier, isDown, eventUsed)
  local v7 = v7:superClass()
  local v6 = v7.keyEvent(self, unicode, sym, modifier, isDown, eventUsed)
  if v6 then
    return true
  end
  if isDown then
    if sym == Input.KEY_backspace then
      -- if 1 >= v0.currentCursorPosition then goto L70 end
      self:onClickCursorLeft()
      return true
    else
      v7 = self:getUnicodeToKeyboardValue(unicode, self.licensePlate.variations[self.currentVariation].values[self.currentCursorPosition])
      if v7 ~= nil then
        self.currentCharacters[self.cursorPositions[self.currentCursorPosition].valueIndex] = v7
        self:updateLicensePlateGraphics()
        self:onClickCursorRight()
      end
      return true
    end
  end
  return false
end
function LicensePlateDialog.getUnicodeToKeyboardValue(v0, alphabetical, numerical)
  local v4 = unicodeToUtf8(alphabetical)
  local special = utf8ToUpper(...)
  v4 = v4:getFont()
  if numerical.alphabetical then
    local v6 = function(v0)
      -- TODO: structure LOP_FORNPREP (pc 7, target 22)
      local v6 = utf8ToUpper(u0.charactersByType[v0][1].value)
      if u1 == v6 then
        return u0.charactersByType[v0][1].value
      end
      -- TODO: structure LOP_FORNLOOP (pc 21, target 8)
      return nil
    end(MaterialManager.FONT_CHARACTER_TYPE.ALPHABETICAL)
    if v6 ~= nil then
      return v6
    end
  end
  if numerical.numerical then
    v6 = v5(MaterialManager.FONT_CHARACTER_TYPE.NUMERICAL)
    if v6 ~= nil then
      return v6
    end
  end
  if numerical.special then
    v6 = v5(MaterialManager.FONT_CHARACTER_TYPE.SPECIAL)
    if v6 ~= nil then
      return v6
    end
  end
  return nil
end
