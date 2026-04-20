-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputGlyphElement = {}
local InputGlyphElement_mt = Class(InputGlyphElement, HUDElement)
InputGlyphElement.GLYPH_OFFSET_X = 2
InputGlyphElement.TEXT_OFFSET_X = 4
InputGlyphElement.DEFAULT_TEXT_SIZE = 12
function InputGlyphElement:new(v1, v2, v3)
  local v4 = Overlay.new(nil, 0, 0, v1, v2)
  local v6 = v6:superClass()
  if not v3 then
  end
  local v5 = v5(v6, v7, v8)
  v5.inputDisplayManager = self
  v6 = self:getPlusOverlay()
  v5.plusOverlay = v6
  v6 = self:getOrOverlay()
  v5.orOverlay = v6
  v6 = ButtonOverlay.new()
  v5.keyboardOverlay = v6
  v5.actionNames = {}
  v5.actionText = nil
  v5.displayText = nil
  v5.actionTextSize = InputGlyphElement.DEFAULT_TEXT_SIZE
  v5.inputHelpElement = nil
  v5.buttonOverlays = {}
  v5.hasButtonOverlays = false
  v5.separators = {}
  v5.keyNames = {}
  v5.hasKeyNames = false
  v5.color = {1, 1, 1, 1}
  v5.buttonColor = {1, 1, 1, 1}
  v5.overlayCopies = {}
  v5.baseWidth = v1
  v5.baseHeight = v2
  v5.glyphOffsetX = 0
  v5.textOffsetX = 0
  v5.iconSizeX = v1
  v5.iconSizeY = v2
  v5.plusIconSizeX = v1 * 0.5
  v5.plusIconSizeY = v2 * 0.5
  v5.orIconSizeX = v1 * 0.5
  v5.orIconSizeY = v2 * 0.5
  v5.alignX = 1
  v5.alignY = 1
  v5.alignmentOffsetX = 0
  v5.alignmentOffsetY = 0
  v5.lowerCase = false
  v5.upperCase = false
  v5.bold = false
  v6:subscribe(MessageType.INPUT_DEVICES_CHANGED, v5.onInputDevicesChanged, v5)
  return v5
end
function InputGlyphElement:delete()
  v1:delete()
  self:deleteOverlayCopies()
  v1:unsubscribeAll(self)
  local v2 = v2:superClass()
  v2.delete(self)
end
function InputGlyphElement:deleteOverlayCopies()
  for v4, v5 in pairs(self.overlayCopies) do
    v5:delete()
    self.overlayCopies[v4] = nil
  end
end
function InputGlyphElement:setScale(widthScale, heightScale)
  local v4 = v4:superClass()
  v4.setScale(self, widthScale, heightScale)
  local v3 = self:scalePixelToScreenWidth(InputGlyphElement.GLYPH_OFFSET_X)
  self.glyphOffsetX = v3
  v3 = self:scalePixelToScreenWidth(InputGlyphElement.TEXT_OFFSET_X)
  self.textOffsetX = v3
  self.iconSizeX = self.baseWidth * widthScale
  self.iconSizeY = self.baseHeight * heightScale
  self.plusIconSizeX = self.iconSizeX * 0.5
  self.plusIconSizeY = self.iconSizeY * 0.5
  self.orIconSizeX = self.iconSizeX * 0.5
  self.orIconSizeY = self.iconSizeY * 0.5
end
function InputGlyphElement:setUpperCase(enableUpperCase)
  self.upperCase = enableUpperCase
  if self.lowerCase then
  end
  self.lowerCase = v2
  self:updateDisplayText()
end
function InputGlyphElement:setLowerCase(enableLowerCase)
  self.lowerCase = enableLowerCase
  if self.upperCase then
  end
  self.upperCase = v2
  self:updateDisplayText()
end
function InputGlyphElement:setBold(isBold)
  self.bold = isBold
end
function InputGlyphElement:setKeyboardGlyphColor(color)
  self.color = color
  local v4 = unpack(color)
  v2:setColor(...)
end
function InputGlyphElement:setButtonGlyphColor(color)
  self.buttonColor = color
  for v5, v6 in ipairs(self.actionNames) do
    if not (self.buttonOverlays[v6] ~= nil) then
      continue
    end
    for v11, v12 in pairs(self.buttonOverlays[v6]) do
      local v15 = unpack(color)
      v12:setColor(...)
    end
  end
end
function InputGlyphElement:onInputDevicesChanged()
  self:setActions(self.actionNames, self.actionText, self.actionTextSize, self.noModifiers, self.copyOverlays)
end
function InputGlyphElement:setAction(actionName, actionText, actionTextSize, noModifiers, copyOverlays)
  for v10 in pairs(self.actionNames) do
    v6[v10] = nil
  end
  table.insert(self.actionNames, actionName)
  self:setActions(self.actionNames, actionText, actionTextSize, noModifiers, copyOverlays)
end
function InputGlyphElement:setActions(actionNames, actionText, actionTextSize, noModifiers, copyOverlays)
  self.actionNames = actionNames
  self.actionText = actionText
  if not actionTextSize then
  end
  self.actionTextSize = height
  self.noModifiers = noModifiers
  self.copyOverlays = copyOverlays
  self:updateDisplayText()
  local height = self:getHeight()
  self:deleteOverlayCopies()
  if #actionNames ~= 2 then
  end
  for v12, v13 in ipairs(actionNames) do
    if v8 then
    end
    local v15 = v15:getControllerSymbolOverlays(v13, v14, "", noModifiers)
    self.separators = v15.separators
    if copyOverlays then
      for v21, v22 in ipairs(v15.buttons) do
        local v23 = Overlay.new(v22.filename, v22.x, v22.y, v22.defaultWidth, v22.defaultHeight)
        v23:setUVs(v22.uvs)
        v23:setAlignment(v22.alignmentVertical, v22.alignmentHorizontal)
        table.insert(self.overlayCopies, v23)
        table.insert(v16, v23)
      end
    end
    if self.buttonOverlays[v13] == nil then
      self.buttonOverlays[v13] = {}
    else
      -- TODO: structure LOP_FORNPREP (pc 123, target 130)
      self.buttonOverlays[v13][1] = nil
      -- TODO: structure LOP_FORNLOOP (pc 129, target 124)
    end
    self.hasButtonOverlays = false
    if 0 < #v16 then
      for v20, v21 in ipairs(v16) do
        table.insert(self.buttonOverlays[v13], v21)
        self.hasButtonOverlays = true
      end
    end
    if self.keyNames[v13] == nil then
      self.keyNames[v13] = {}
    else
      -- TODO: structure LOP_FORNPREP (pc 173, target 180)
      self.keyNames[v13][1] = nil
      -- TODO: structure LOP_FORNLOOP (pc 179, target 174)
    end
    self.hasKeyNames = false
    if 0 < #v15.keys then
      for v20, v21 in ipairs(v15.keys) do
        table.insert(self.keyNames[v13], v21)
        self.hasKeyNames = true
      end
    end
    if not not v8 then
      break
    end
  end
  if self.hasButtonOverlays then
    for v12, v13 in pairs(self.buttonOverlays) do
      for v17, v18 in ipairs(v13) do
        if 1 < v17 then
        end
        if v17 < #v13 then
          -- if v0.glyphOffsetX then goto L245 end
        end
      end
    end
  elseif self.hasKeyNames then
    for v12, v13 in pairs(self.keyNames) do
      for v17, v18 in ipairs(v13) do
        v19 = v19:getButtonWidth(v18, height)
      end
    end
  end
  self:setDimension(v7, height)
end
function InputGlyphElement:updateDisplayText()
  if self.actionText ~= nil then
    self.displayText = self.actionText
    if self.upperCase then
      local actionNames = utf8ToUpper(self.actionText)
      self.displayText = actionNames
      return
    end
    if self.lowerCase then
      actionNames = utf8ToLower(self.actionText)
      self.displayText = actionNames
    end
  end
end
function InputGlyphElement:getGlyphWidth()
  if self.hasButtonOverlays then
    for copyOverlays, height in ipairs(self.actionNames) do
      if not (self.buttonOverlays[height] ~= nil) then
        continue
      end
      for v10, v11 in ipairs(self.buttonOverlays[height]) do
        if 1 < v10 then
          local v12 = self:getDrawSeparator()
          if v12 then
            if self.separators[v10 - 1] == InputHelpElement.SEPARATOR.COMBO_INPUT then
            elseif self.separators[v10 - 1] == InputHelpElement.SEPARATOR.ANY_INPUT then
            end
          end
        end
        if v10 < #self.buttonOverlays[height] then
          -- if v0.glyphOffsetX then goto L61 end
        end
      end
    end
    return actionNames
  end
  if self.hasKeyNames then
    for copyOverlays, height in ipairs(self.actionNames) do
      for v10, v11 in ipairs(self.keyNames[height]) do
        if v10 < #self.keyNames[height] then
          -- if v0.glyphOffsetX then goto L96 end
        end
        local v14 = v14:getButtonWidth(v11, self.iconSizeY)
      end
    end
  end
  return actionNames
end
function InputGlyphElement.getPositionOffset(v0)
  return 0, 0
end
function InputGlyphElement.getDrawSeparator(v0)
  return true
end
function InputGlyphElement:draw(clipX1, clipY1, clipX2, clipY2)
  if #self.actionNames ~= 0 then
    local copyOverlays = copyOverlays:getIsVisible()
    -- if v5 then goto L12 end
  end
  return
  local height = height:superClass()
  height.draw(self, clipX1, clipY1, clipX2, clipY2)
  copyOverlays, height = self:getPosition()
  local v7, v8 = self:getPositionOffset()
  if self.hasButtonOverlays then
    for v12, v13 in ipairs(self.actionNames) do
      if not (self.buttonOverlays[v13] ~= nil) then
        continue
      end
      local v14 = self:drawControllerButtons(self.buttonOverlays[v13], copyOverlays, height, clipX1, clipY1, clipX2, clipY2)
    end
  elseif self.hasKeyNames then
    for v12, v13 in ipairs(self.actionNames) do
      v14 = self:drawKeyboardKeys(self.keyNames[v13], copyOverlays, height, clipX1, clipY1, clipX2, clipY2)
    end
  end
  if self.actionText ~= nil then
    self:drawActionText(copyOverlays, height, clipX1, clipY1, clipX2, clipY2)
  end
end
function InputGlyphElement:drawControllerButtons(buttonOverlays, posX, posY, clipX1, clipY1, clipX2, clipY2)
  for v11, v12 in ipairs(buttonOverlays) do
    if 1 < v11 then
      local v13 = self:getDrawSeparator()
      if v13 then
        if self.separators[v11 - 1] == InputHelpElement.SEPARATOR.COMBO_INPUT then
        elseif self.separators[v11 - 1] == InputHelpElement.SEPARATOR.ANY_INPUT then
        end
        v14:setColor(self.buttonColor[1], self.buttonColor[2], self.buttonColor[3], self.buttonColor[4])
        v14:setPosition(posX, posY + v16)
        v14:setDimension(v15, v16)
        v14:render(clipX1, clipY1, clipX2, clipY2)
        v14:setColor(nil, nil, nil, 1)
        v14:resetDimensions()
      end
    end
    v12:setPosition(posX, posY + self.iconSizeY * 0.5)
    v12:setDimension(self.iconSizeX, self.iconSizeY)
    local v15 = unpack(self.buttonColor)
    v12:setColor(...)
    v12:render(clipX1, clipY1, clipX2, clipY2)
    v12:resetDimensions()
    if v11 < #buttonOverlays then
      -- if v0.glyphOffsetX then goto L126 end
    end
  end
  return posX
end
function InputGlyphElement:drawKeyboardKeys(keyNames, posX, posY, clipX1, clipY1, clipX2, clipY2)
  for v11, v12 in ipairs(keyNames) do
    if v11 < #keyNames then
      -- if v0.glyphOffsetX then goto L12 end
    end
    local v15 = v15:renderButton(v12, posX, posY, self.iconSizeY, nil, true, clipX1, clipY1, clipX2, clipY2)
  end
  return posX
end
function InputGlyphElement:drawActionText(posX, posY, clipX1, clipY1, clipX2, clipY2)
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextBold(self.bold)
  local v8 = unpack(self.color)
  setTextColor(...)
  if clipX1 ~= nil then
    setTextClipArea(clipX1, clipY1, clipX2, clipY2)
  end
  renderText(posX + self.textOffsetX, posY + self.actionTextSize * 0.5, self.actionTextSize, self.displayText)
  if clipX1 ~= nil then
    setTextClipArea(0, 0, 1, 1)
  end
end
function InputGlyphElement:setBaseSize(baseWidth, baseHeight)
  self.baseWidth = baseWidth
  self.baseHeight = baseHeight
  self.iconSizeX = baseWidth
  self.iconSizeY = baseHeight
  self.plusIconSizeX = baseWidth * 0.5
  self.plusIconSizeY = baseHeight * 0.5
  self.orIconSizeX = baseWidth * 0.5
  self.orIconSizeY = baseHeight * 0.5
end
