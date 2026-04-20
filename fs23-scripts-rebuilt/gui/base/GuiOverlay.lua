-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GuiOverlay = {STATE_NORMAL = 1, STATE_DISABLED = 2, STATE_FOCUSED = 3, STATE_PRESSED = 4, STATE_SELECTED = 5, STATE_HIGHLIGHTED = 6}
function GuiOverlay.loadOverlay(v0, v1, v2, v3, v4, v5, v6)
  if v1.uvs == nil then
    v1.uvs = Overlay.DEFAULT_UVS
  end
  if v1.color == nil then
    v1.color = {1, 1, 1, 1}
  end
  if v5 ~= nil then
    local v10 = getXMLString(v5, v6 .. "#" .. v2 .. "Filename")
    v10 = getXMLString(v5, v6 .. "#" .. v2 .. "PreviewFilename")
    v10 = getXMLString(v5, v6 .. "#" .. v2 .. "MaskFilename")
    GuiOverlay.loadXMLUVs(v5, v6, v1, v2, v3)
    GuiOverlay.loadXMLColors(v5, v6, v1, v2)
    local v11 = getXMLInt(v5, v6 .. "#" .. v2 .. "SdfWidth")
    v10 = Utils.getNoNil(v11, v1.sdfWidth)
    v1.sdfWidth = v10
  elseif v4 ~= nil then
    v10 = v4:getValue(v2 .. "Filename")
    v10 = v4:getValue(v2 .. "PreviewFilename")
    v10 = v4:getValue(v2 .. "MaskFilename")
    GuiOverlay.loadProfileUVs(v4, v1, v2, v3)
    GuiOverlay.loadProfileColors(v4, v1, v2)
    v10 = v4:getNumber(v2 .. "SdfWidth", v1.sdfWidth)
    v1.sdfWidth = v10
  end
  if v7 == nil then
    return nil
  end
  if v8 == nil then
  end
  if v7 == "g_baseUIFilename" then
  elseif v7 == "g_baseHUDFilename" then
  else
    if v7 == "g_iconsUIFilename" then
    end
  end
  v10 = string.gsub(v7, "$l10nSuffix", g_languageSuffix)
  v1.filename = v10
  v1.previewFilename = v8
  v1.maskFilename = v9
  return v1
end
function GuiOverlay.loadXMLUVs(xmlFile, key, overlay, overlayName, imageSize)
  local v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "UVs")
  if v6 ~= nil then
    local v10 = getXMLInt(xmlFile, key .. "#" .. overlayName .. "UVRotation")
    v6 = GuiUtils.getUVs(...)
    overlay.uvs = v6
  end
  v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "FocusedUVs")
  if v6 ~= nil then
    v10 = getXMLInt(xmlFile, key .. "#" .. overlayName .. "FocusedUVRotation")
    v6 = GuiUtils.getUVs(...)
    overlay.uvsFocused = v6
  end
  v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "PressedUVs")
  if v6 ~= nil then
    v10 = getXMLInt(xmlFile, key .. "#" .. overlayName .. "PressedUVRotation")
    v6 = GuiUtils.getUVs(...)
    overlay.uvsPressed = v6
  end
  v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "SelectedUVs")
  if v6 ~= nil then
    v10 = getXMLInt(xmlFile, key .. "#" .. overlayName .. "SelectedUVRotation")
    v6 = GuiUtils.getUVs(...)
    overlay.uvsSelected = v6
  end
  v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "DisabledUVs")
  if v6 ~= nil then
    v10 = getXMLInt(xmlFile, key .. "#" .. overlayName .. "DisabledUVRotation")
    v6 = GuiUtils.getUVs(...)
    overlay.uvsDisabled = v6
  end
  v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "HighlightedUVs")
  if v6 ~= nil then
    v10 = getXMLInt(xmlFile, key .. "#" .. overlayName .. "HighlightedUVRotation")
    v6 = GuiUtils.getUVs(...)
    overlay.uvsHighlighted = v6
  end
end
function GuiOverlay:loadProfileUVs(v1, v2, v3)
  local v5 = self:getValue(v2 .. "UVs")
  if v5 ~= nil then
    local v9 = self:getNumber(v2 .. "UVRotation")
    v5 = GuiUtils.getUVs(...)
    v1.uvs = v5
  end
  v5 = self:getValue(v2 .. "FocusedUVs")
  if v5 ~= nil then
    v9 = self:getNumber(v2 .. "FocusedUVRotation")
    v5 = GuiUtils.getUVs(...)
    v1.uvsFocused = v5
  end
  v5 = self:getValue(v2 .. "PressedUVs")
  if v5 ~= nil then
    v9 = self:getNumber(v2 .. "UVRotation")
    v5 = GuiUtils.getUVs(...)
    v1.uvsPressed = v5
  end
  v5 = self:getValue(v2 .. "SelectedUVs")
  if v5 ~= nil then
    v9 = self:getNumber(v2 .. "SelectedUVRotation")
    v5 = GuiUtils.getUVs(...)
    v1.uvsSelected = v5
  end
  v5 = self:getValue(v2 .. "DisabledUVs")
  if v5 ~= nil then
    v9 = self:getNumber(v2 .. "DisabledUVRotation")
    v5 = GuiUtils.getUVs(...)
    v1.uvsDisabled = v5
  end
  v5 = self:getValue(v2 .. "HighlightedUVs")
  if v5 ~= nil then
    v9 = self:getNumber(v2 .. "HighlightedUVRotation")
    v5 = GuiUtils.getUVs(...)
    v1.uvsHighlighted = v5
  end
end
function GuiOverlay.loadXMLColors(xmlFile, key, overlay, overlayName)
  local v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "Color")
  local v5 = GuiUtils.getColorArray(...)
  if v5 ~= nil then
    overlay.color = v5
  end
  v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "FocusedColor")
  v5 = GuiUtils.getColorArray(...)
  if v5 ~= nil then
    overlay.colorFocused = v5
  end
  v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "PressedColor")
  v5 = GuiUtils.getColorArray(...)
  if v5 ~= nil then
    overlay.colorPressed = v5
  end
  v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "SelectedColor")
  v5 = GuiUtils.getColorArray(...)
  if v5 ~= nil then
    overlay.colorSelected = v5
  end
  v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "DisabledColor")
  v5 = GuiUtils.getColorArray(...)
  if v5 ~= nil then
    overlay.colorDisabled = v5
  end
  v6 = getXMLString(xmlFile, key .. "#" .. overlayName .. "HighlightedColor")
  v5 = GuiUtils.getColorArray(...)
  if v5 ~= nil then
    overlay.colorHighlighted = v5
  end
  v5 = getXMLFloat(xmlFile, key .. "#" .. overlayName .. "Rotation")
  if v5 ~= nil then
    v6 = math.rad(v5)
    overlay.rotation = v6
  end
  v6 = getXMLBool(xmlFile, key .. "#" .. overlayName .. "IsWebOverlay")
  if v6 ~= nil then
    overlay.isWebOverlay = v6
  end
end
function GuiOverlay:loadProfileColors(v1, v2)
  local v5 = self:getValue(v2 .. "Color")
  local v4 = GuiUtils.getColorGradientArray(...)
  if v4 ~= nil then
    v1.color = v4
  end
  v5 = self:getValue(v2 .. "FocusedColor")
  v4 = GuiUtils.getColorGradientArray(...)
  if v4 ~= nil then
    v1.colorFocused = v4
  end
  v5 = self:getValue(v2 .. "PressedColor")
  v4 = GuiUtils.getColorGradientArray(...)
  if v4 ~= nil then
    v1.colorPressed = v4
  end
  v5 = self:getValue(v2 .. "SelectedColor")
  v4 = GuiUtils.getColorGradientArray(...)
  if v4 ~= nil then
    v1.colorSelected = v4
  end
  v5 = self:getValue(v2 .. "DisabledColor")
  v4 = GuiUtils.getColorGradientArray(...)
  if v4 ~= nil then
    v1.colorDisabled = v4
  end
  v5 = self:getValue(v2 .. "HighlightedColor")
  v4 = GuiUtils.getColorGradientArray(...)
  if v4 ~= nil then
    v1.colorHighlighted = v4
  end
  v4 = self:getValue(v2 .. "Rotation")
  if v4 ~= nil then
    local v6 = tonumber(v4)
    v5 = math.rad(...)
    v1.rotation = v5
  end
  v5 = self:getBool(v2 .. "IsWebOverlay")
  if v5 ~= nil then
    v1.isWebOverlay = v5
  end
end
function GuiOverlay:createOverlay(v1)
  if v1 ~= nil then
    local v2 = string.gsub(v1, "$l10nSuffix", g_languageSuffix)
  end
  if self.overlay ~= nil then
    if self.filename ~= v1 then
      -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L21
    end
    return self
  end
  GuiOverlay.deleteOverlay(self)
  if v1 ~= nil then
    self.filename = v1
  end
  if self.filename ~= nil then
    if self.isWebOverlay ~= nil and self.isWebOverlay then
      -- if not v0.isWebOverlay then goto L60 end
      local v3 = v3:startsWith("http")
      -- if v3 then goto L60 end
    end
    v3 = createImageOverlay(self.filename)
    -- goto L68  (LOP_JUMP +8)
    v3 = createWebImageOverlay(self.filename, self.previewFilename)
    if v3 ~= 0 then
      self.overlay = v3
      if self.maskFilename ~= nil then
        v3 = createOverlayTextureFromFile(self.maskFilename)
        self.overlayMask = v3
      end
      if self.sdfWidth ~= nil then
        setOverlaySignedDistanceFieldWidth(v2, self.sdfWidth)
      end
    end
  end
  v2 = Utils.getNoNil(self.rotation, 0)
  self.rotation = v2
  v2 = Utils.getNoNil(self.alpha, 1)
  self.alpha = v2
  return self
end
function GuiOverlay:copyOverlay(v1, v2)
  if not v2 then
  end
  self.filename = v3
  self.uvs = {v1.uvs[1], v1.uvs[2], v1.uvs[3], v1.uvs[4], v1.uvs[5], v1.uvs[6], v1.uvs[7], v1.uvs[8]}
  local v3 = table.copyIndex(v1.color)
  self.color = v3
  self.rotation = v1.rotation
  self.alpha = v1.alpha
  self.isWebOverlay = v1.isWebOverlay
  self.previewFilename = v1.previewFilename
  self.maskFilename = v1.maskFilename
  self.sdfWidth = v1.sdfWidth
  if v1.uvsFocused ~= nil then
    self.uvsFocused = {v1.uvsFocused[1], v1.uvsFocused[2], v1.uvsFocused[3], v1.uvsFocused[4], v1.uvsFocused[5], v1.uvsFocused[6], v1.uvsFocused[7], v1.uvsFocused[8]}
  end
  if v1.colorFocused ~= nil then
    v3 = table.copyIndex(v1.colorFocused)
    self.colorFocused = v3
  end
  if v1.uvsPressed ~= nil then
    self.uvsPressed = {v1.uvsPressed[1], v1.uvsPressed[2], v1.uvsPressed[3], v1.uvsPressed[4], v1.uvsPressed[5], v1.uvsPressed[6], v1.uvsPressed[7], v1.uvsPressed[8]}
  end
  if v1.colorPressed ~= nil then
    v3 = table.copyIndex(v1.colorPressed)
    self.colorPressed = v3
  end
  if v1.uvsSelected ~= nil then
    self.uvsSelected = {v1.uvsSelected[1], v1.uvsSelected[2], v1.uvsSelected[3], v1.uvsSelected[4], v1.uvsSelected[5], v1.uvsSelected[6], v1.uvsSelected[7], v1.uvsSelected[8]}
  end
  if v1.colorSelected ~= nil then
    v3 = table.copyIndex(v1.colorSelected)
    self.colorSelected = v3
  end
  if v1.uvsDisabled ~= nil then
    self.uvsDisabled = {v1.uvsDisabled[1], v1.uvsDisabled[2], v1.uvsDisabled[3], v1.uvsDisabled[4], v1.uvsDisabled[5], v1.uvsDisabled[6], v1.uvsDisabled[7], v1.uvsDisabled[8]}
  end
  if v1.colorDisabled ~= nil then
    v3 = table.copyIndex(v1.colorDisabled)
    self.colorDisabled = v3
  end
  if v1.uvsHighlighted ~= nil then
    self.uvsHighlighted = {v1.uvsHighlighted[1], v1.uvsHighlighted[2], v1.uvsHighlighted[3], v1.uvsHighlighted[4], v1.uvsHighlighted[5], v1.uvsHighlighted[6], v1.uvsHighlighted[7], v1.uvsHighlighted[8]}
  end
  if v1.colorHighlighted ~= nil then
    v3 = table.copyIndex(v1.colorHighlighted)
    self.colorHighlighted = v3
  end
  v3 = GuiOverlay.createOverlay(self)
  return v3
end
function GuiOverlay:deleteOverlay()
  if self ~= nil then
    if self.overlay ~= nil then
      delete(self.overlay)
      self.overlay = nil
    end
    if self.overlayMask ~= nil then
      delete(self.overlayMask)
      self.overlayMask = nil
    end
  end
end
function GuiOverlay:getOverlayColor(v1)
  if v1 == GuiOverlay.STATE_NORMAL then
  elseif v1 == GuiOverlay.STATE_DISABLED then
  else
    if v1 == GuiOverlay.STATE_FOCUSED then
    elseif v1 == GuiOverlay.STATE_SELECTED then
    else
      if v1 == GuiOverlay.STATE_HIGHLIGHTED then
      elseif v1 == GuiOverlay.STATE_PRESSED and self.colorPressed == nil then
      end
    end
  end
  if v2 == nil then
  end
  return v2
end
function GuiOverlay:getOverlayUVs(v1)
  if v1 == GuiOverlay.STATE_DISABLED then
  elseif v1 == GuiOverlay.STATE_FOCUSED then
  else
    if v1 == GuiOverlay.STATE_SELECTED then
    elseif v1 == GuiOverlay.STATE_HIGHLIGHTED then
    else
      if v1 == GuiOverlay.STATE_PRESSED and self.uvsPressed == nil then
      end
    end
  end
  if v2 == nil then
  end
  return v2
end
function GuiOverlay:renderOverlay(v1, v2, v3, v4, v5, v6, v7, v8, v9)
  if self.overlay ~= nil then
    local v10 = GuiOverlay.getOverlayColor(self, v5)
    if v10[4] == 0 then
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L287
      if v10[8] == 0 and v10[12] == 0 then
        -- cmp-jump LOP_JUMPXEQKN R11 aux=0x3 -> L287
      end
    end
    if not self.hasCustomRotation then
      if self.customPivot ~= nil then
      end
      setOverlayRotation(self.overlay, self.rotation, v11, v12)
    end
    local v12 = GuiOverlay.getOverlayUVs(self, v5)
    local v11, v12, v13, v14, v15, v16, v17, v18 = unpack(...)
    if v6 ~= nil then
      local v25 = math.max(v1, v6)
      v25 = math.max(v2, v7)
      local v27 = math.min(v1 + v3, v8)
      v25 = math.max(v27 - v25, 0)
      v27 = math.min(v2 + v4, v9)
      v25 = math.max(v27 - v25, 0)
      if v25 ~= 0 then
        -- cmp-jump LOP_JUMPXEQKN R4 aux=0x80000003 -> L120
      end
      return
    end
    setOverlayUVs(self.overlay, v11, v12, v13, v14, v15, v16, v17, v18)
    if self.overlayMask ~= nil then
      set2DMaskFromTexture(self.overlayMask, true, v1, v2, v3, v4)
    end
    if v10[5] ~= nil then
      setOverlayCornerColor(self.overlay, 0, v10[1], v10[2], v10[3], v10[4] * self.alpha)
      setOverlayCornerColor(self.overlay, 1, v10[5], v10[6], v10[7], v10[8] * self.alpha)
      setOverlayCornerColor(self.overlay, 2, v10[9], v10[10], v10[11], v10[12] * self.alpha)
      setOverlayCornerColor(self.overlay, 3, v10[13], v10[14], v10[15], v10[16] * self.alpha)
    else
      local v19, v20, v21, v22 = unpack(v10)
      setOverlayColor(self.overlay, v19, v20, v21, v22 * self.alpha)
    end
    renderOverlay(self.overlay, v1, v2, v3, v4)
    if self.overlayMask ~= nil then
      set2DMaskFromTexture(0, true, 0, 0, 0, 0)
    end
  end
end
function GuiOverlay:copyColors(v1)
  self.color = v1.color
  self.colorDisabled = v1.colorDisabled
  self.colorFocused = v1.colorFocused
  self.colorSelected = v1.colorSelected
  self.colorHighlighted = v1.colorHighlighted
  self.colorPressed = v1.colorPressed
end
function GuiOverlay:setRotation(v1, v2, v3)
  setOverlayRotation(self.overlay, v1, v2, v3)
  self.hasCustomRotation = true
end
function GuiOverlay:setColor(v1, v2, v3, v4)
  self.color = {v1, v2, v3, v4}
end
function GuiOverlay:setSelectedColor(v1, v2, v3, v4)
  self.colorSelected = {v1, v2, v3, v4}
end
