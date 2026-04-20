-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputGlyphElementUI = {}
local InputGlyphElementUI_mt = Class(InputGlyphElementUI, GuiElement)
function InputGlyphElementUI.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.color = {1, 1, 1, 1}
  v2.isLeftAligned = false
  v2.copyOverlays = false
  v2.actionNames = {}
  return v2
end
function InputGlyphElementUI:delete()
  if self.glyphElement ~= nil then
    v1:delete()
    self.glyphElement = nil
  end
  local v2 = v2:superClass()
  v2.delete(self)
end
function InputGlyphElementUI:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#glyphColor")
  local v3 = GuiUtils.getColorArray(v4, self.color)
  self.color = v3
  v4 = getXMLBool(xmlFile, key .. "#isLeftAligned")
  v3 = Utils.getNoNil(v4, self.isLeftAligned)
  self.isLeftAligned = v3
  v4 = getXMLBool(xmlFile, key .. "#copyOverlays")
  v3 = Utils.getNoNil(v4, self.copyOverlays)
  self.copyOverlays = v3
  self:buildGlyph()
  v4 = getXMLString(xmlFile, key .. "#inputAction")
  if v4 ~= nil and InputAction[v4] ~= nil then
    table.insert({}, v4)
    local v5 = getXMLString(xmlFile, key .. "#inputAction2")
    if v5 ~= nil and InputAction[v5] ~= nil then
      table.insert({}, v5)
    end
    local v6 = table.copy(v3)
    self.actionNames = v6
    self:setActions(v3, nil, nil, nil, self.copyOverlays)
  end
end
function InputGlyphElementUI:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  v4 = profile:getValue("glyphColor")
  local v3 = GuiUtils.getColorArray(v4, self.color)
  self.color = v3
  v4 = profile:getBool("isLeftAligned")
  v3 = Utils.getNoNil(v4, self.isLeftAligned)
  self.isLeftAligned = v3
  v4 = profile:getBool("copyOverlays")
  v3 = Utils.getNoNil(v4, self.copyOverlays)
  self.copyOverlays = v3
  self:buildGlyph()
  v4 = profile:getValue("inputAction", self.inputActionName)
  if v4 ~= nil and InputAction[v4] ~= nil then
    table.insert({}, v4)
    local v5 = profile:getValue("inputAction2", self.inputActionName)
    if v5 ~= nil and InputAction[v5] ~= nil then
      table.insert({}, v5)
    end
    local v6 = table.copy(v3)
    self.actionNames = v6
    self:setActions(v3, nil, nil, nil, self.copyOverlays)
  end
end
function InputGlyphElementUI:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  local v2 = table.copy(src.color)
  self.color = v2
  self.isLeftAligned = src.isLeftAligned
  self.copyOverlays = src.copyOverlays
  v2 = table.copy(src.actionNames)
  v3 = table.copy(v2)
  self.actionNames = v3
  if src.glyphElement ~= nil then
    self:buildGlyph()
    if 0 < #v2 then
      self:setActions(v2, nil, nil, nil, self.copyOverlays)
    end
  end
end
function InputGlyphElementUI:buildGlyph()
  if self.glyphElement == nil then
    if Platform.isMobile then
      local v1 = InputGlyphMobileElement.new(g_inputDisplayManager)
      self.glyphElement = v1
      v1:setIsLeftAligned(self.isLeftAligned)
    else
      v1 = InputGlyphElement.new(g_inputDisplayManager, self.absSize[1], self.absSize[2])
      self.glyphElement = v1
    end
    self.glyphElement.copyOverlays = self.copyOverlays
    v1:setButtonGlyphColor(self.color)
    v1:setKeyboardGlyphColor(self.color)
  end
end
function InputGlyphElementUI:updateAbsolutePosition()
  local v2 = v2:superClass()
  v2.updateAbsolutePosition(self)
  if self.glyphElement ~= nil then
    v1:setPosition(self.absPosition[1], self.absPosition[2])
    if not Platform.isMobile then
      if not self.originalWidth then
      end
      v1:setDimension(v3, self.absSize[2])
      if not self.originalWidth then
      end
      v1:setBaseSize(v3, self.absSize[2])
    end
    self.didSetAbsolutePosition = true
  end
end
function InputGlyphElementUI:draw(clipX1, clipY1, clipX2, clipY2)
  local v6 = v6:superClass()
  v6.draw(self, clipX1, clipY1, clipX2, clipY2)
  if self.glyphElement ~= nil then
    v5:draw(clipX1, clipY1, clipX2, clipY2)
  end
end
function InputGlyphElementUI:setActions(v1, v2, v3, v4, v5)
  if self.glyphElement ~= nil then
    v6:setActions(v1, v2, v3, v4, v5)
    if not self.didSetAbsolutePosition then
      self:updateAbsolutePosition()
    end
    if 0 < self.absSize[1] then
      if not self.originalWidth then
      end
      self.originalWidth = v6
    end
    local v7 = v7:getGlyphWidth()
    self.absSize[1] = v7
    self.size[1] = self.absSize[1]
    if self.parent ~= nil and self.parent.invalidateLayout ~= nil then
      v6:invalidateLayout()
    end
  end
end
