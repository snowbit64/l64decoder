-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TextElement = {}
local TextElement_mt = Class(TextElement, GuiElement)
TextElement.VERTICAL_ALIGNMENT = {TOP = "top", MIDDLE = "middle", BOTTOM = "bottom"}
TextElement.FORMAT = {NONE = 1, TEMPERATURE = 2, CURRENCY = 3, ACCOUNTING = 4, NUMBER = 5, PERCENTAGE = 6}
TextElement.LAYOUT_MODE = {TRUNCATE = 1, RESIZE = 2, OVERFLOW = 3, CLIP = 4}
function TextElement.new(target, custom_mt)
  if custom_mt == nil then
  end
  local v2 = GuiElement.new(target, custom_mt)
  v2.textColor = {1, 1, 1, 1}
  v2.textDisabledColor = {0.5, 0.5, 0.5, 1}
  v2.textSelectedColor = {1, 1, 1, 1}
  v2.textHighlightedColor = {1, 1, 1, 1}
  v2.textOffset = {0, 0}
  v2.textFocusedOffset = {0, 0}
  v2.textSize = 0.03
  v2.textBold = false
  v2.textSelectedBold = false
  v2.textHighlightedBold = false
  v2.text2Color = {1, 1, 1, 1}
  v2.text2DisabledColor = {1, 1, 1, 0}
  v2.text2SelectedColor = {0, 0, 0, 0.5}
  v2.text2HighlightedColor = {0, 0, 0, 0.5}
  v2.text2Offset = {0, 0}
  v2.text2FocusedOffset = {0, 0}
  v2.text2Size = 0
  v2.text2Bold = false
  v2.text2SelectedBold = false
  v2.text2HighlightedBold = false
  v2.textUpperCase = false
  v2.textLinesPerPage = 0
  v2.currentPage = 1
  v2.defaultTextSize = v2.textSize
  v2.defaultText2Size = v2.text2Size
  v2.textLineHeightScale = RenderText.DEFAULT_LINE_HEIGHT_SCALE
  v2.text = ""
  v2.textAlignment = RenderText.ALIGN_CENTER
  v2.textVerticalAlignment = TextElement.VERTICAL_ALIGNMENT.MIDDLE
  v2.ignoreDisabled = false
  v2.format = TextElement.FORMAT.NONE
  v2.locaKey = nil
  v2.value = nil
  v2.formatDecimalPlaces = 0
  v2.textMaxWidth = nil
  v2.textMinWidth = 0
  v2.textMaxNumLines = 1
  v2.textAutoWidth = false
  v2.textLayoutMode = TextElement.LAYOUT_MODE.TRUNCATE
  v2.textMinSize = 0.01
  v2.sourceText = ""
  return v2
end
function TextElement:loadFromXML(xmlFile, key)
  local xmlFilename = getXMLFilename(xmlFile)
  local v4, v5 = Utils.getModNameAndBaseDirectory(xmlFilename)
  if v4 ~= nil then
    self.customEnvironment = v4
  end
  local v7 = v7:superClass()
  v7.loadFromXML(self, xmlFile, key)
  v7 = getXMLString(xmlFile, key .. "#textColor")
  local v6 = GuiUtils.getColorArray(v7, self.textColor)
  self.textColor = v6
  v7 = getXMLString(xmlFile, key .. "#textSelectedColor")
  v6 = GuiUtils.getColorArray(v7, self.textSelectedColor)
  self.textSelectedColor = v6
  v7 = getXMLString(xmlFile, key .. "#text2SelectedColor")
  v6 = GuiUtils.getColorArray(v7, self.text2SelectedColor)
  self.text2SelectedColor = v6
  v7 = getXMLString(xmlFile, key .. "#textHighlightedColor")
  v6 = GuiUtils.getColorArray(v7, self.textHighlightedColor)
  self.textHighlightedColor = v6
  v7 = getXMLString(xmlFile, key .. "#text2HighlightedColor")
  v6 = GuiUtils.getColorArray(v7, self.text2HighlightedColor)
  self.text2HighlightedColor = v6
  v7 = getXMLString(xmlFile, key .. "#textDisabledColor")
  v6 = GuiUtils.getColorArray(v7, self.textDisabledColor)
  self.textDisabledColor = v6
  v7 = getXMLString(xmlFile, key .. "#text2DisabledColor")
  v6 = GuiUtils.getColorArray(v7, self.text2DisabledColor)
  self.text2DisabledColor = v6
  v7 = getXMLString(xmlFile, key .. "#text2Color")
  v6 = GuiUtils.getColorArray(v7, self.text2Color)
  self.text2Color = v6
  v7 = getXMLString(xmlFile, key .. "#textOffset")
  v6 = GuiUtils.getNormalizedValues(v7, self.outputSize, self.textOffset)
  self.textOffset = v6
  v7 = getXMLString(xmlFile, key .. "#textFocusedOffset")
  v6 = GuiUtils.getNormalizedValues(v7, self.outputSize, self.textFocusedOffset)
  self.textFocusedOffset = v6
  v7 = getXMLString(xmlFile, key .. "#text2Offset")
  v6 = GuiUtils.getNormalizedValues(v7, self.outputSize, self.text2Offset)
  self.text2Offset = v6
  v7 = getXMLString(xmlFile, key .. "#text2FocusedOffset")
  v6 = GuiUtils.getNormalizedValues(v7, self.outputSize, self.text2FocusedOffset)
  self.text2FocusedOffset = v6
  local v8 = getXMLString(xmlFile, key .. "#textSize")
  v7 = GuiUtils.getNormalizedValues(v8, {self.outputSize[2]}, {self.textSize})
  v6 = unpack(...)
  self.textSize = v6
  v8 = getXMLString(xmlFile, key .. "#text2Size")
  v7 = GuiUtils.getNormalizedValues(v8, {self.outputSize[2]}, {self.text2Size})
  v6 = unpack(...)
  self.text2Size = v6
  v7 = getXMLBool(xmlFile, key .. "#textBold")
  v6 = Utils.getNoNil(v7, self.textBold)
  self.textBold = v6
  v7 = getXMLBool(xmlFile, key .. "#textSelectedBold")
  v6 = Utils.getNoNil(v7, self.textSelectedBold)
  self.textSelectedBold = v6
  v7 = getXMLBool(xmlFile, key .. "#textHighlightedBold")
  v6 = Utils.getNoNil(v7, self.textHighlightedBold)
  self.textHighlightedBold = v6
  v7 = getXMLBool(xmlFile, key .. "#textUpperCase")
  v6 = Utils.getNoNil(v7, self.textUpperCase)
  self.textUpperCase = v6
  v7 = getXMLBool(xmlFile, key .. "#text2Bold")
  v6 = Utils.getNoNil(v7, self.text2Bold)
  self.text2Bold = v6
  v7 = getXMLBool(xmlFile, key .. "#text2SelectedBold")
  v6 = Utils.getNoNil(v7, self.text2SelectedBold)
  self.text2SelectedBold = v6
  v7 = getXMLBool(xmlFile, key .. "#text2HighlightedBold")
  v6 = Utils.getNoNil(v7, self.text2HighlightedBold)
  self.text2HighlightedBold = v6
  v7 = getXMLInt(xmlFile, key .. "#textLinesPerPage")
  v6 = Utils.getNoNil(v7, self.textLinesPerPage)
  self.textLinesPerPage = v6
  v7 = getXMLFloat(xmlFile, key .. "#textLineHeightScale")
  v6 = Utils.getNoNil(v7, self.textLineHeightScale)
  self.textLineHeightScale = v6
  self.defaultTextSize = self.textSize
  self.defaultText2Size = self.text2Size
  v8 = getXMLString(xmlFile, key .. "#textMaxWidth")
  v7 = GuiUtils.getNormalizedValues(v8, {self.outputSize[1]}, {self.textMaxWidth})
  v6 = unpack(...)
  self.textMaxWidth = v6
  v8 = getXMLString(xmlFile, key .. "#textMinWidth")
  v7 = GuiUtils.getNormalizedValues(v8, {self.outputSize[1]}, {self.textMinWidth})
  v6 = unpack(...)
  self.textMinWidth = v6
  v7 = getXMLInt(xmlFile, key .. "#textMaxNumLines")
  v6 = Utils.getNoNil(v7, self.textMaxNumLines)
  self.textMaxNumLines = v6
  v7 = getXMLBool(xmlFile, key .. "#textAutoWidth")
  v6 = Utils.getNoNil(v7, self.textAutoWidth)
  self.textAutoWidth = v6
  v8 = getXMLString(xmlFile, key .. "#textMinSize")
  v7 = GuiUtils.getNormalizedValues(v8, {self.outputSize[2]}, {self.textMinSize})
  v6 = unpack(...)
  self.textMinSize = v6
  v6 = getXMLString(xmlFile, key .. "#textLayoutMode")
  if v6 ~= nil then
    v7 = v6:lower()
    if v7 == "truncate" then
      self.textLayoutMode = TextElement.LAYOUT_MODE.TRUNCATE
    elseif v7 == "resize" then
      self.textLayoutMode = TextElement.LAYOUT_MODE.RESIZE
    else
      if v7 == "overflow" then
        self.textLayoutMode = TextElement.LAYOUT_MODE.OVERFLOW
      end
    end
  end
  v7 = getXMLString(xmlFile, key .. "#textAlignment")
  if v7 ~= nil then
    v8 = v7:lower()
    if v8 == "right" then
      self.textAlignment = RenderText.ALIGN_RIGHT
    elseif v8 == "center" then
      self.textAlignment = RenderText.ALIGN_CENTER
    else
      self.textAlignment = RenderText.ALIGN_LEFT
    end
  end
  local v9 = getXMLString(xmlFile, key .. "#textVerticalAlignment")
  v9 = string.upper(v9 or "")
  if not TextElement.VERTICAL_ALIGNMENT[v9] then
  end
  self.textVerticalAlignment = v10
  local v11 = getXMLBool(xmlFile, key .. "#ignoreDisabled")
  local v10 = Utils.getNoNil(v11, self.ignoreDisabled)
  self.ignoreDisabled = v10
  v10 = getXMLString(xmlFile, key .. "#text")
  if Platform.isConsole then
    v11 = getXMLString(xmlFile, key .. "#textConsole")
    if v11 ~= nil then
    end
  end
  if v10 ~= nil then
    local v12 = v10:len()
    local v13 = v10:sub(v12, v12 + 1)
    if v13 == ":" then
      v13 = v10:sub(1, v12 - 1)
    end
    v13 = v10:sub(1, 6)
    if v13 == "$l10n_" then
      local v15 = v10:sub(7)
      v13 = v13:getText(v15, self.customEnvironment)
    end
    if v11 and v10 ~= "" then
    end
    self.sourceText = v10
    if self.format == TextElement.FORMAT.NONE then
      self:setText(v10, false, true)
    end
  end
  v13 = getXMLInt(xmlFile, key .. "#formatDecimalPlaces")
  v12 = Utils.getNoNil(v13, self.formatDecimalPlaces)
  v11 = math.max(v12, 0)
  self.formatDecimalPlaces = v11
  v11 = getXMLString(xmlFile, key .. "#format")
  if v11 ~= nil then
    v12 = v11:lower()
    if v12 == "currency" then
    elseif v12 == "accounting" then
    else
      if v12 == "temperature" then
      elseif v12 == "number" then
      else
        if v12 == "percentage" then
        elseif v12 == "none" then
        end
      end
    end
    self:setFormat(v12)
  end
  self:addCallback(xmlFile, key .. "#onTextChanged", "onTextChangedCallback")
  self:updateSize()
end
function TextElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  v4 = profile:getValue("textColor")
  local xmlFilename = GuiUtils.getColorArray(v4, self.textColor)
  self.textColor = xmlFilename
  v4 = profile:getValue("textSelectedColor")
  xmlFilename = GuiUtils.getColorArray(v4, self.textSelectedColor)
  self.textSelectedColor = xmlFilename
  v4 = profile:getValue("textHighlightedColor")
  xmlFilename = GuiUtils.getColorArray(v4, self.textHighlightedColor)
  self.textHighlightedColor = xmlFilename
  v4 = profile:getValue("textDisabledColor")
  xmlFilename = GuiUtils.getColorArray(v4, self.textDisabledColor)
  self.textDisabledColor = xmlFilename
  v4 = profile:getValue("text2Color")
  xmlFilename = GuiUtils.getColorArray(v4, self.text2Color)
  self.text2Color = xmlFilename
  v4 = profile:getValue("text2SelectedColor")
  xmlFilename = GuiUtils.getColorArray(v4, self.text2SelectedColor)
  self.text2SelectedColor = xmlFilename
  v4 = profile:getValue("text2HighlightedColor")
  xmlFilename = GuiUtils.getColorArray(v4, self.text2HighlightedColor)
  self.text2HighlightedColor = xmlFilename
  v4 = profile:getValue("text2DisabledColor")
  xmlFilename = GuiUtils.getColorArray(v4, self.text2DisabledColor)
  self.text2DisabledColor = xmlFilename
  local v5 = profile:getValue("textSize")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[2]}, {self.textSize})
  xmlFilename = unpack(...)
  self.textSize = xmlFilename
  v4 = profile:getValue("textOffset")
  xmlFilename = GuiUtils.getNormalizedValues(v4, self.outputSize, self.textOffset)
  self.textOffset = xmlFilename
  v4 = profile:getValue("textFocusedOffset")
  xmlFilename = GuiUtils.getNormalizedValues(v4, self.outputSize, {self.textOffset[1], self.textOffset[2]})
  self.textFocusedOffset = xmlFilename
  v5 = profile:getValue("text2Size")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[2]}, {self.text2Size})
  xmlFilename = unpack(...)
  self.text2Size = xmlFilename
  v4 = profile:getValue("text2Offset")
  xmlFilename = GuiUtils.getNormalizedValues(v4, self.outputSize, self.text2Offset)
  self.text2Offset = xmlFilename
  v4 = profile:getValue("text2FocusedOffset")
  xmlFilename = GuiUtils.getNormalizedValues(v4, self.outputSize, {self.text2Offset[1], self.text2Offset[2]})
  self.text2FocusedOffset = xmlFilename
  xmlFilename = profile:getBool("textBold", self.textBold)
  self.textBold = xmlFilename
  xmlFilename = profile:getBool("textSelectedBold", self.textSelectedBold)
  self.textSelectedBold = xmlFilename
  xmlFilename = profile:getBool("textHighlightedBold", self.textHighlightedBold)
  self.textHighlightedBold = xmlFilename
  xmlFilename = profile:getBool("text2Bold", self.text2Bold)
  self.text2Bold = xmlFilename
  xmlFilename = profile:getBool("text2SelectedBold", self.text2SelectedBold)
  self.text2SelectedBold = xmlFilename
  xmlFilename = profile:getBool("text2HighlightedBold", self.text2HighlightedBold)
  self.text2HighlightedBold = xmlFilename
  xmlFilename = profile:getBool("textUpperCase", self.textUpperCase)
  self.textUpperCase = xmlFilename
  xmlFilename = profile:getNumber("textLinesPerPage", self.textLinesPerPage)
  self.textLinesPerPage = xmlFilename
  xmlFilename = profile:getNumber("textLineHeightScale", self.textLineHeightScale)
  self.textLineHeightScale = xmlFilename
  v5 = profile:getValue("textMaxWidth")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[1]}, {self.textMaxWidth})
  xmlFilename = unpack(...)
  self.textMaxWidth = xmlFilename
  v5 = profile:getValue("textMinWidth")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[1]}, {self.textMinWidth})
  xmlFilename = unpack(...)
  self.textMinWidth = xmlFilename
  xmlFilename = profile:getNumber("textMaxNumLines", self.textMaxNumLines)
  self.textMaxNumLines = xmlFilename
  xmlFilename = profile:getBool("textAutoWidth", self.textAutoWidth)
  self.textAutoWidth = xmlFilename
  v5 = profile:getValue("textMinSize")
  v4 = GuiUtils.getNormalizedValues(v5, {self.outputSize[2]}, {self.textMinSize})
  xmlFilename = unpack(...)
  self.textMinSize = xmlFilename
  self.defaultTextSize = self.textSize
  self.defaultText2Size = self.text2Size
  xmlFilename = profile:getValue("textLayoutMode")
  if xmlFilename ~= nil then
    v4 = xmlFilename:lower()
    if v4 == "truncate" then
      self.textLayoutMode = TextElement.LAYOUT_MODE.TRUNCATE
    elseif v4 == "resize" then
      self.textLayoutMode = TextElement.LAYOUT_MODE.RESIZE
    else
      if v4 == "overflow" then
        self.textLayoutMode = TextElement.LAYOUT_MODE.OVERFLOW
      end
    end
  end
  v4 = profile:getBool("ignoreDisabled", self.ignoreDisabled)
  self.ignoreDisabled = v4
  v4 = profile:getValue("textAlignment")
  if v4 ~= nil then
    v5 = v4:lower()
    if v5 == "right" then
      self.textAlignment = RenderText.ALIGN_RIGHT
    elseif v5 == "center" then
      self.textAlignment = RenderText.ALIGN_CENTER
    else
      self.textAlignment = RenderText.ALIGN_LEFT
    end
  end
  v5 = profile:getValue("textVerticalAlignment", "")
  local v6 = string.upper(v5)
  if not TextElement.VERTICAL_ALIGNMENT[v6] then
  end
  self.textVerticalAlignment = v7
  local v8 = profile:getNumber("formatDecimalPlaces", self.formatDecimalPlaces)
  local v7 = math.max(v8, 0)
  self.formatDecimalPlaces = v7
  v7 = profile:getValue("format")
  if v7 ~= nil then
    v8 = v7:lower()
    if v8 == "currency" then
    elseif v8 == "accounting" then
    else
      if v8 == "temperature" then
      elseif v8 == "number" then
      else
        if v8 == "percentage" then
        elseif v8 == "none" then
        end
      end
    end
    self:setFormat(v8)
  end
  if applyProfile then
    self:applyTextAspectScale()
    self:updateSize()
  end
end
function TextElement:copyAttributes(src)
  local xmlFilename = xmlFilename:superClass()
  xmlFilename.copyAttributes(self, src)
  self.text = src.text
  self.format = src.format
  self.locaKey = src.locaKey
  self.value = src.value
  self.formatDecimalPlaces = src.formatDecimalPlaces
  self.sourceText = src.sourceText
  local applyProfile = table.copy(src.textColor)
  self.textColor = applyProfile
  applyProfile = table.copy(src.textSelectedColor)
  self.textSelectedColor = applyProfile
  applyProfile = table.copy(src.textHighlightedColor)
  self.textHighlightedColor = applyProfile
  applyProfile = table.copy(src.textDisabledColor)
  self.textDisabledColor = applyProfile
  applyProfile = table.copy(src.text2Color)
  self.text2Color = applyProfile
  applyProfile = table.copy(src.text2SelectedColor)
  self.text2SelectedColor = applyProfile
  applyProfile = table.copy(src.text2HighlightedColor)
  self.text2HighlightedColor = applyProfile
  applyProfile = table.copy(src.text2DisabledColor)
  self.text2DisabledColor = applyProfile
  self.textSize = src.textSize
  applyProfile = table.copy(src.textOffset)
  self.textOffset = applyProfile
  applyProfile = table.copy(src.textFocusedOffset)
  self.textFocusedOffset = applyProfile
  self.text2Size = src.text2Size
  applyProfile = table.copy(src.text2Offset)
  self.text2Offset = applyProfile
  applyProfile = table.copy(src.text2FocusedOffset)
  self.text2FocusedOffset = applyProfile
  self.ignoreDisabled = src.ignoreDisabled
  self.textMaxWidth = src.textMaxWidth
  self.textMinWidth = src.textMinWidth
  self.textMaxNumLines = src.textMaxNumLines
  self.textAutoWidth = src.textAutoWidth
  self.textLayoutMode = src.textLayoutMode
  self.textMinSize = src.textMinSize
  self.textBold = src.textBold
  self.textSelectedBold = src.textSelectedBold
  self.textHighlightedBold = src.textHighlightedBold
  self.text2Bold = src.text2Bold
  self.text2SelectedBold = src.text2SelectedBold
  self.text2HighlightedBold = src.text2HighlightedBold
  self.textUpperCase = src.textUpperCase
  self.textLinesPerPage = src.textLinesPerPage
  self.textAlignment = src.textAlignment
  self.currentPage = src.currentPage
  self.defaultTextSize = src.defaultTextSize
  self.defaultText2Size = src.defaultText2Size
  self.textLineHeightScale = src.textLineHeightScale
  self.textVerticalAlignment = src.textVerticalAlignment
  self.onTextChangedCallback = src.onTextChangedCallback
end
function TextElement.delete(v0)
  profile:unsubscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_FAHRENHEIT], v0)
  profile:unsubscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.MONEY_UNIT], v0)
  local applyProfile = applyProfile:superClass()
  applyProfile.delete(v0)
end
function TextElement:setTextSize(size)
  self.textSize = size
  self:updateSize()
end
function TextElement:applyTextAspectScale()
  local profile, applyProfile = self:getAspectScale()
  self.textOffset[1] = self.textOffset[1] * profile
  self.textFocusedOffset[1] = self.textFocusedOffset[1] * profile
  self.text2Offset[1] = self.text2Offset[1] * profile
  self.text2FocusedOffset[1] = self.text2FocusedOffset[1] * profile
  if self.textMaxWidth ~= nil then
    self.textMaxWidth = self.textMaxWidth * profile
  end
  if self.textMinWidth ~= nil then
    self.textMinWidth = self.textMinWidth * profile
  end
  self.defaultTextSize = self.defaultTextSize * applyProfile
  self.defaultText2Size = self.defaultText2Size * applyProfile
  self.textSize = self.textSize * applyProfile
  self.textMinSize = self.textMinSize * applyProfile
  self.text2Size = self.text2Size * applyProfile
  self.textOffset[2] = self.textOffset[2] * applyProfile
  self.textFocusedOffset[2] = self.textFocusedOffset[2] * applyProfile
  self.text2Offset[2] = self.text2Offset[2] * applyProfile
  self.text2FocusedOffset[2] = self.text2FocusedOffset[2] * applyProfile
  self.didApplyAspectScaling = true
  self:updateScaledWidth(profile, applyProfile)
  self:setTextInternal(self.sourceText)
end
function TextElement:applyScreenAlignment()
  self:applyTextAspectScale()
  local applyProfile = applyProfile:superClass()
  applyProfile.applyScreenAlignment(self)
end
function TextElement:updateAbsolutePosition()
  local applyProfile = applyProfile:superClass()
  applyProfile.updateAbsolutePosition(self)
  if self.textMaxNumLines == 1 then
    -- if v0.textLayoutMode == TextElement.LAYOUT_MODE.OVERFLOW then goto L33 end
  end
  if not self.textAutoWidth then
    self:setTextInternal(self.sourceText, nil, true)
  end
end
function TextElement:setText(text, forceTextSize, isInitializing)
  self.locaKey = nil
  self.value = nil
  self.format = TextElement.FORMAT.NONE
  self:setTextInternal(text, forceTextSize, isInitializing)
end
function TextElement:setTextInternal(text, forceTextSize, skipCallback, doNotUpdateSize)
  if text == nil then
  end
  local v5 = tostring(text)
  if self.sourceText == v5 then
  end
  if self.textUpperCase then
    local v6 = utf8ToUpper(text)
  end
  self.sourceText = text
  self.textSize = self.defaultTextSize
  self.text2Size = self.defaultText2Size
  self:updateSize()
  if self.textMaxWidth ~= nil then
  elseif self.textAutoWidth then
  end
  setTextBold(self.textBold)
  if self.textLayoutMode == TextElement.LAYOUT_MODE.RESIZE then
    setTextWrapWidth(v6)
    local v9 = text:find("[ -]")
    if v9 == nil then
    end
    v9 = getTextLength(self.textSize, text, 99999)
    while true do
      v10 = getTextLength(self.textSize, text, v8)
      if not (v10 < v9) then
        break
      end
      self.textSize = self.textSize - self.defaultTextSize * 0.05
      self.text2Size = self.text2Size - self.defaultText2Size * 0.05
      if not (self.textSize <= self.textMinSize) then
        continue
      end
      self.textSize = self.textSize + self.defaultTextSize * 0.05
      self.text2Size = self.text2Size + self.defaultText2Size * 0.05
      if v8 == 1 then
        v10 = Utils.limitTextToWidth(text, self.textSize, v6, false, "...")
        break
      end
      break
    end
    setTextWrapWidth(0)
  elseif self.textLayoutMode == TextElement.LAYOUT_MODE.OVERFLOW then
  else
    if self.textLayoutMode == TextElement.LAYOUT_MODE.TRUNCATE then
      if self.textMaxNumLines == 1 then
        local v8 = Utils.limitTextToWidth(text, self.textSize, v6, false, "...")
      else
      end
    end
  end
  if v7 then
    setTextWrapWidth(v6)
    v8, v9 = getTextHeight(self.textSize, text)
    if self.textMaxNumLines < v9 then
      while true do
        v10, v11 = getTextHeight(self.textSize, text)
        if not (self.textMaxNumLines < v11) then
          break
        end
        v14 = utf8Strlen(text)
        v10 = utf8Substr(text, 0, v14 - 1)
        continue
        break
      end
      local v17 = utf8Strlen(text)
      local v15 = math.max(v17 - 3, 0)
      local v12 = utf8Substr(...)
    end
    setTextWrapWidth(0)
  end
  setTextBold(false)
  self.text = text
  if v5 and not skipCallback then
    self:raiseCallback("onTextChangedCallback", self, self.text)
    self:updateScaledWidth(1, 1)
  end
  self:updateSize(forceTextSize)
  return ""
end
function TextElement:getText()
  return self.sourceText
end
function TextElement:setValue(value)
  self.value = value
  self:updateFormattedText()
end
function TextElement:getValue()
  return self.value
end
function TextElement:setFormat(format)
  if format == nil then
  end
  if self.format ~= format then
    if self.format == TextElement.FORMAT.TEMPERATURE then
      forceTextSize:unsubscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_FAHRENHEIT], self)
    else
      if format ~= TextElement.FORMAT.CURRENCY then
        -- if v1 ~= TextElement.FORMAT.ACCOUNTING then goto L61 end
      end
      forceTextSize:unsubscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.MONEY_UNIT], self)
    end
    self.format = format
    self:updateFormattedText()
    if format == TextElement.FORMAT.TEMPERATURE then
      forceTextSize:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_FAHRENHEIT], self.onFormatUnitChanged, self)
      return
    end
    if format ~= TextElement.FORMAT.CURRENCY then
      -- if v1 ~= TextElement.FORMAT.ACCOUNTING then goto L117 end
    end
    forceTextSize:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.MONEY_UNIT], self.onFormatUnitChanged, self)
  end
end
function TextElement:setLocaKey(key)
  self.locaKey = key
  self.format = TextElement.FORMAT.NONE
  self.value = nil
  self:updateFormattedText()
end
function TextElement:updateFormattedText()
  if self.value ~= nil then
    if self.format == TextElement.FORMAT.NONE then
      local v5 = tostring(self.value)
      -- goto L160  (LOP_JUMP +137)
    end
    if skipCallback == TextElement.FORMAT.NUMBER then
      v5 = v5:formatNumber(forceTextSize, doNotUpdateSize)
      -- goto L160  (LOP_JUMP +120)
    end
    if skipCallback == TextElement.FORMAT.CURRENCY then
      v5 = v5:formatMoney(forceTextSize, doNotUpdateSize, true, true)
      -- goto L160  (LOP_JUMP +101)
    end
    if skipCallback == TextElement.FORMAT.ACCOUNTING then
      v5 = v5:formatMoney(forceTextSize, doNotUpdateSize, true, false)
      -- goto L160  (LOP_JUMP +82)
    end
    if skipCallback == TextElement.FORMAT.TEMPERATURE then
      v5 = v5:formatTemperature(forceTextSize, doNotUpdateSize)
      -- goto L160  (LOP_JUMP +65)
    end
    -- if v3 ~= TextElement.FORMAT.PERCENTAGE then goto L160 end
    local v7 = v7:formatNumber(forceTextSize * 100, doNotUpdateSize)
  elseif self.locaKey ~= nil then
    local skipCallback = skipCallback:len()
    local doNotUpdateSize = doNotUpdateSize:sub(skipCallback, skipCallback + 1)
    if doNotUpdateSize == ":" then
      local v8 = v8:sub(1, skipCallback - 1)
      local v6 = v6:getText(v8, self.customEnvironment)
    else
      doNotUpdateSize = doNotUpdateSize:getText(self.locaKey, self.customEnvironment)
    end
  end
  self:setTextInternal(text)
end
function TextElement:onFormatUnitChanged()
  self:updateFormattedText()
end
function TextElement:setTextColor(r, g, b, a)
  self.textColor = {r, g, b, a}
end
function TextElement:setTextSelectedColor(r, g, b, a)
  self.textSelectedColor = {r, g, b, a}
end
function TextElement:setTextHighlightedColor(r, g, b, a)
  self.textHighlightedColor = {r, g, b, a}
end
function TextElement:getTextColor()
  if self.disabled and not self.ignoreDisabled then
    return self.textDisabledColor
  end
  local text = self:getIsSelected()
  if text then
    return self.textSelectedColor
  end
  text = self:getIsHighlighted()
  if text then
    return self.textHighlightedColor
  end
  return self.textColor
end
function TextElement:setText2Color(r, g, b, a)
  self.text2Color = {r, g, b, a}
end
function TextElement:setText2SelectedColor(r, g, b, a)
  self.text2SelectedColor = {r, g, b, a}
end
function TextElement:setText2HighlightedColor(r, g, b, a)
  self.text2HighlightedColor = {r, g, b, a}
end
function TextElement:getText2Color()
  if self.disabled and not self.ignoreDisabled then
    return self.text2DisabledColor
  end
  local text = self:getIsSelected()
  if text then
    return self.text2SelectedColor
  end
  text = self:getIsHighlighted()
  if text then
    return self.text2HighlightedColor
  end
  return self.text2Color
end
function TextElement:getTextWidth()
  setTextBold(self.textBold)
  local width = getTextWidth(self.textSize, self.text)
  setTextBold(false)
  if self.textLayoutMode ~= TextElement.LAYOUT_MODE.OVERFLOW then
    local forceTextSize = math.min(width, self.absSize[1])
  end
  return width
end
function TextElement:getTextHeight(includeNegativeSpacing)
  if 1 < self.textMaxNumLines then
    setTextWrapWidth(self.absSize[1])
  end
  setTextBold(self.textBold)
  setTextLineHeightScale(self.textLineHeightScale)
  local forceTextSize, skipCallback = getTextHeight(self.textSize, self.text)
  if includeNegativeSpacing == true and 0 < skipCallback then
  end
  setTextLineHeightScale(RenderText.DEFAULT_LINE_HEIGHT_SCALE)
  setTextBold(false)
  setTextWrapWidth(0)
  return forceTextSize, skipCallback
end
function TextElement:getTextOffset()
  local state = self:getOverlayState()
  if state ~= GuiOverlay.STATE_FOCUSED and state ~= GuiOverlay.STATE_PRESSED and state ~= GuiOverlay.STATE_SELECTED then
    -- if v3 ~= GuiOverlay.STATE_HIGHLIGHTED then goto L31 end
  end
  return self.textFocusedOffset[1], self.textFocusedOffset[2]
end
function TextElement:getText2Offset()
  local state = self:getOverlayState()
  if state ~= GuiOverlay.STATE_FOCUSED and state ~= GuiOverlay.STATE_PRESSED and state ~= GuiOverlay.STATE_SELECTED then
    -- if v3 ~= GuiOverlay.STATE_HIGHLIGHTED then goto L31 end
  end
  return self.text2FocusedOffset[1], self.text2FocusedOffset[2]
end
function TextElement.getDoRenderText(v0)
  return true
end
function TextElement:getTextPositionX()
  if self.textAlignment == RenderText.ALIGN_CENTER then
    return self.absPosition[1] + self.absSize[1] * 0.5
  end
  if self.textAlignment == RenderText.ALIGN_RIGHT then
  end
  return text
end
function TextElement:getTextPositionY(lineHeight, totalHeight)
  if self.textVerticalAlignment == TextElement.VERTICAL_ALIGNMENT.TOP then
    return self.absPosition[2] + self.absSize[2] - lineHeight
  end
  if self.textVerticalAlignment == TextElement.VERTICAL_ALIGNMENT.MIDDLE then
    return skipCallback + (self.absSize[2] + totalHeight) * 0.5 - lineHeight
  end
  return skipCallback + totalHeight - lineHeight
end
function TextElement:getTextPosition(text)
  local v5 = string.sub(text, 1, 1)
  local doNotUpdateSize = utf8ToUpper(...)
  local forceTextSize = getTextHeight(...)
  local totalHeight = getTextHeight(self.textSize, text)
  doNotUpdateSize = self:getTextPositionX()
  v5 = self:getTextPositionY(forceTextSize, totalHeight)
  return doNotUpdateSize, v5
end
function TextElement:draw(clipX1, clipY1, clipX2, clipY2)
  local v5 = self:getDoRenderText()
  if v5 and self.text ~= nil and self.text ~= "" then
    if clipX1 ~= nil then
      setTextClipArea(clipX1, clipY1, clipX2, clipY2)
    end
    setTextAlignment(self.textAlignment)
    if self.textMaxWidth ~= nil then
    elseif self.textAutoWidth then
    end
    if 1 < self.textMaxNumLines then
      setTextWrapWidth(v5)
    end
    setTextLineBounds((self.currentPage - 1) * self.textLinesPerPage, self.textLinesPerPage)
    setTextLineHeightScale(self.textLineHeightScale)
    if not self.textBold then
      if self.textSelectedBold then
        local v7 = self:getIsSelected()
        -- if v7 then goto L83 end
      end
      if self.textHighlightedBold then
        v7 = self:getIsHighlighted()
      end
    end
    setTextBold(v7)
    local v8, v9 = self:getTextPosition(v6)
    if 0 < self.text2Size then
      local v11, v12 = self:getText2Offset()
      if not self.text2Bold then
        if self.text2SelectedBold then
          local v13 = self:getIsSelected()
          -- if v13 then goto L119 end
        end
        if self.text2HighlightedBold then
          v13 = self:getIsHighlighted()
        end
      end
      setTextBold(v13)
      local v14 = self:getText2Color()
      local v13, v14, v15, v16 = unpack(...)
      setTextColor(v13, v14, v15, v16 * self.alpha)
      renderText(v8 + v11, v9 + v12, self.text2Size, v6)
    end
    v12 = self:getTextColor()
    v11, v12, v13, v14 = unpack(...)
    setTextColor(v11, v12, v13, v14 * self.alpha)
    v15, v16 = self:getTextOffset()
    renderText(v8 + v15, v9 + v16, self.textSize, v6)
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextLineHeightScale(RenderText.DEFAULT_LINE_HEIGHT_SCALE)
    setTextColor(1, 1, 1, 1)
    setTextLineBounds(0, 0)
    setTextWrapWidth(0)
    if clipX1 ~= nil then
      setTextClipArea(0, 0, 1, 1)
    end
    if not self.debugEnabled then
      -- if not g_uiDebugEnabled then goto L358 end
    end
    setOverlayColor(GuiElement.debugOverlay, 0, 0, 0, 1)
    if self.textAlignment == RenderText.ALIGN_RIGHT then
    elseif self.textAlignment == RenderText.ALIGN_CENTER then
    end
    renderOverlay(GuiElement.debugOverlay, v18, v9 + v16, v5, v17 * 2)
    local v19 = self:getTextWidth()
    if self.textAlignment == RenderText.ALIGN_RIGHT then
    elseif self.textAlignment == RenderText.ALIGN_CENTER then
    end
    setOverlayColor(GuiElement.debugOverlay, 0, 1, 0, 1)
    renderOverlay(GuiElement.debugOverlay, v20, v9 + v16, v19, 1 / g_screenHeight)
    setOverlayColor(GuiElement.debugOverlay, 1, 0.5, 0, 1)
    local v27 = getTextHeight(self.textSize, v6)
    renderOverlay(GuiElement.debugOverlay, v20, v9 + v16 + v27 * 0.5, v19, 1 / g_screenHeight)
    setOverlayColor(GuiElement.debugOverlay, 0, 0, 1, 1)
    v27 = getTextHeight(self.textSize, v6)
    renderOverlay(GuiElement.debugOverlay, v20, v9 + v16 + v27 * 0.75, v19, 1 / g_screenHeight)
  end
  local v6 = v6:superClass()
  v6.draw(self, clipX1, clipY1, clipX2, clipY2)
end
function TextElement:updateScaledWidth(xScale)
  if self.text ~= nil and self.text ~= "" and self.absSize[1] == 0 and self.absSize[2] == 0 then
    local width = self:getTextWidth()
    self:setSize(width / xScale, self.textSize)
  end
end
function TextElement:updateSize(forceTextSize)
  if self.textAutoWidth then
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x2 -> L10
  end
  if forceTextSize ~= true then
    return
  end
  local offset = self:getTextOffset()
  local clipY2, v5 = self:getAspectScale()
  setTextBold(self.textBold)
  local v6 = getTextWidth(self.textSize, self.sourceText)
  setTextBold(false)
  if self.textMaxWidth ~= nil then
    local v7 = math.min(self.textMaxWidth, v6)
  end
  if self.textMinWidth ~= nil then
    v7 = math.max(self.textMinWidth, v6)
  end
  if offset + v6 ~= self.size[1] then
    if self.size[2] == 0 then
    end
    self:setSize(v7 / clipY2, v8)
    if self.parent ~= nil and self.parent.invalidateLayout ~= nil and self.parent.autoValidateLayout then
      v9:invalidateLayout()
    end
  end
end
