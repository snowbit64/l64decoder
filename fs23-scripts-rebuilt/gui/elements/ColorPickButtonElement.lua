-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ColorPickButtonElement = {}
local ColorPickButtonElement_mt = Class(ColorPickButtonElement, ButtonElement)
function ColorPickButtonElement.new(target, custom_mt)
  local v3 = v3:superClass()
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.colors = {{1, 1, 1, 1}}
  v2.selectionFrameThickness = {0, 0}
  v2.selectionFrameColor = {1, 1, 1, 1}
  return v2
end
function ColorPickButtonElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#selectionFrameThickness")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.selectionFrameThickness)
  self.selectionFrameThickness = v3
  v4 = getXMLString(xmlFile, key .. "#selectionFrameColor")
  v3 = GuiUtils.getColorArray(v4, self.selectionFrameColor)
  self.selectionFrameColor = v3
end
function ColorPickButtonElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  v4 = profile:getValue("selectionFrameThickness")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.selectionFrameThickness)
  self.selectionFrameThickness = v3
  v4 = profile:getValue("selectionFrameColor")
  v3 = GuiUtils.getColorArray(v4, self.selectionFrameColor)
  self.selectionFrameColor = v3
  v4 = profile:getValue("metallicImageUVs")
  v3 = GuiUtils.getUVs(...)
  self.metallicImageUVs = v3
  v3 = table.copy(self.overlay.uvs)
  self.nonMetallicImageUVs = v3
end
function ColorPickButtonElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  local v2 = table.copy(src.selectionFrameThickness)
  self.selectionFrameThickness = v2
  v2 = table.copy(src.selectionFrameColor)
  self.selectionFrameColor = v2
  v2 = table.copy(src.metallicImageUVs)
  self.metallicImageUVs = v2
  v2 = table.copy(src.nonMetallicImageUVs)
  self.nonMetallicImageUVs = v2
end
function ColorPickButtonElement:draw(clipX1, clipY1, clipX2, clipY2)
  local v5 = self:getIsSelected()
  if v5 then
    local v11 = self:getOverlayState()
    GuiOverlay.renderOverlay(self.overlay, self.absPosition[1] + self.absSize[1] * 0.15, self.absPosition[2] + self.absSize[2] * 0.15, self.absSize[1] * 0.7, self.absSize[2] * 0.7, v11, clipX1, clipY1, clipX2, clipY2)
    local v5, v6, v7, v8 = unpack(self.selectionFrameColor)
    drawFilledRect(self.absPosition[1], self.absPosition[2], self.absSize[1], self.selectionFrameThickness[2], v5, v6, v7, v8)
    drawFilledRect(self.absPosition[1], self.absPosition[2] + self.absSize[2] - self.selectionFrameThickness[2], self.absSize[1], self.selectionFrameThickness[2], v5, v6, v7, v8)
    drawFilledRect(self.absPosition[1], self.absPosition[2], self.selectionFrameThickness[1], self.absSize[2], v5, v6, v7, v8)
    drawFilledRect(self.absPosition[1] + self.absSize[1] - self.selectionFrameThickness[1], self.absPosition[2], self.selectionFrameThickness[1], self.absSize[2], v5, v6, v7, v8)
  else
    v11 = self:getOverlayState()
    GuiOverlay.renderOverlay(self.overlay, self.absPosition[1], self.absPosition[2], self.absSize[1], self.absSize[2], v11, clipX1, clipY1, clipX2, clipY2)
  end
  if not self.debugEnabled then
    -- if not g_uiDebugEnabled then goto L244 end
  end
  drawFilledRect(self.absPosition[1], self.absPosition[2], self.absPosition[1] + self.size[1] - 1 / g_screenWidth - self.absPosition[1], 1 / g_screenHeight, 0, 1, 0, 0.7)
  drawFilledRect(self.absPosition[1], self.absPosition[2] + self.size[2] - 1 / g_screenHeight, self.absPosition[1] + self.size[1] - 1 / g_screenWidth - self.absPosition[1], 1 / g_screenHeight, 0, 1, 0, 0.7)
  drawFilledRect(self.absPosition[1], self.absPosition[2], 1 / g_screenWidth, self.absPosition[2] + self.size[2] - 1 / g_screenHeight - self.absPosition[2], 0, 1, 0, 0.7)
  drawFilledRect(self.absPosition[1] + self.absPosition[1] + self.size[1] - 1 / g_screenWidth - self.absPosition[1], self.absPosition[2], 1 / g_screenWidth, self.absPosition[2] + self.size[2] - 1 / g_screenHeight - self.absPosition[2], 0, 1, 0, 0.7)
end
function ColorPickButtonElement:setColor(r, g, b)
  local color = GuiOverlay.getOverlayColor(self.overlay, GuiOverlay.STATE_NORMAL)
  color[1] = r
  color[2] = g
  color[3] = b
  color[4] = 1
  local v5 = GuiOverlay.getOverlayColor(self.overlay, GuiOverlay.STATE_HIGHLIGHTED)
  v5[1] = r
  v5[2] = g
  v5[3] = b
  v5[4] = 0.5
  v5 = GuiOverlay.getOverlayColor(self.overlay, GuiOverlay.STATE_SELECTED)
  v5[1] = r
  v5[2] = g
  v5[3] = b
  v5[4] = 1
  v5 = GuiOverlay.getOverlayColor(self.overlay, GuiOverlay.STATE_FOCUSED)
  v5[1] = r
  v5[2] = g
  v5[3] = b
  v5[4] = 1
end
function ColorPickButtonElement:setMaterial(materialId)
  local isMetallic = ConfigurationUtil.isColorMetallic(materialId)
  local uvs = GuiOverlay.getOverlayUVs(self.overlay, GuiOverlay.STATE_NORMAL)
  -- TODO: structure LOP_FORNPREP (pc 14, target 26)
  if isMetallic then
    uvs[1] = self.metallicImageUVs[1]
  else
    uvs[1] = self.nonMetallicImageUVs[1]
  end
  -- TODO: structure LOP_FORNLOOP (pc 25, target 15)
end
function ColorPickButtonElement.setColors(v0, v1, v2, v3, v4, v5, v6)
  log("SET COLORS", v1, v2, v3, v4, v5, v6)
end
