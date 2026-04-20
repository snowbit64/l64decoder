-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ThreePartBitmapElement = {}
local ThreePartBitmapElement_mt = Class(ThreePartBitmapElement, BitmapElement)
function ThreePartBitmapElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.startOverlay = {}
  v2.endOverlay = {}
  v2.startSize = {0, 0}
  v2.midSize = {0, 0}
  v2.endSize = {0, 0}
  v2.isHorizontal = true
  return v2
end
function ThreePartBitmapElement:delete()
  GuiOverlay.deleteOverlay(self.startOverlay)
  GuiOverlay.deleteOverlay(self.endOverlay)
  local v2 = v2:superClass()
  v2.delete(self)
end
function ThreePartBitmapElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.startOverlay, "startImage", self.imageSize, nil, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.endOverlay, "endImage", self.imageSize, nil, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#startImageSize")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.startSize)
  self.startSize = v3
  v4 = getXMLString(xmlFile, key .. "#midImageSize")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.midSize)
  self.midSize = v3
  v4 = getXMLString(xmlFile, key .. "#endImageSize")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.endSize)
  self.endSize = v3
  v4 = getXMLBool(xmlFile, key .. "#isHorizontal")
  v3 = Utils.getNoNil(v4, self.isHorizontal)
  self.isHorizontal = v3
  GuiOverlay.createOverlay(self.startOverlay)
  GuiOverlay.createOverlay(self.endOverlay)
end
function ThreePartBitmapElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  GuiOverlay.loadOverlay(self, self.startOverlay, "startImage", self.imageSize, profile, nil, nil)
  GuiOverlay.loadOverlay(self, self.endOverlay, "endImage", self.imageSize, profile, nil, nil)
  local v6 = profile:getValue("startImageSize")
  local v5 = GuiUtils.getNormalizedValues(v6, self.outputSize, self.startSize)
  self.startSize = v5
  v6 = profile:getValue("midImageSize")
  v5 = GuiUtils.getNormalizedValues(v6, self.outputSize, self.midSize)
  self.midSize = v5
  v6 = profile:getValue("endImageSize")
  v5 = GuiUtils.getNormalizedValues(v6, self.outputSize, self.endSize)
  self.endSize = v5
  v5 = profile:getBool("isHorizontal", self.isHorizontal)
  self.isHorizontal = v5
  if self.startOverlay.filename ~= self.startOverlay.filename then
    GuiOverlay.createOverlay(self.startOverlay)
  end
  if v4 ~= self.endOverlay.filename then
    GuiOverlay.createOverlay(self.endOverlay)
  end
end
function ThreePartBitmapElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  local v2 = table.copy(src.startSize)
  self.startSize = v2
  v2 = table.copy(src.midSize)
  self.midSize = v2
  v2 = table.copy(src.endSize)
  self.endSize = v2
  self.isHorizontal = src.isHorizontal
  GuiOverlay.copyOverlay(self.startOverlay, src.startOverlay)
  GuiOverlay.copyOverlay(self.endOverlay, src.endOverlay)
end
function ThreePartBitmapElement:applyBitmapAspectScale()
  local v1, v2 = self:getAspectScale()
  self.startSize[1] = self.startSize[1] * v1
  self.midSize[1] = self.midSize[1] * v1
  self.endSize[1] = self.endSize[1] * v1
  self.startSize[2] = self.startSize[2] * v2
  self.midSize[2] = self.midSize[2] * v2
  self.endSize[2] = self.endSize[2] * v2
end
function ThreePartBitmapElement:applyScreenAlignment()
  self:applyBitmapAspectScale()
  local v2 = v2:superClass()
  v2.applyScreenAlignment(self)
end
function ThreePartBitmapElement:draw(clipX1, clipY1, clipX2, clipY2)
  local v5, v6 = self:getOffset()
  local state = self:getOverlayState()
  if self.isHorizontal then
    GuiOverlay.renderOverlay(self.startOverlay, self.absPosition[1] + v5, self.absPosition[2] + v6, self.startSize[1], self.absSize[2], state, clipX1, clipY1, clipX2, clipY2)
    local v17 = math.ceil((self.absSize[1] - self.startSize[1] - self.endSize[1]) / 1 / g_screenWidth)
    GuiOverlay.renderOverlay(self.overlay, self.absPosition[1] + v5 + self.startSize[1], self.absPosition[2] + v6, v17 * 1 / g_screenWidth, self.absSize[2], state, clipX1, clipY1, clipX2, clipY2)
    local v15 = math.floor((self.absPosition[1] + v5 + self.absSize[1] - self.endSize[1]) / 1 / g_screenWidth)
    GuiOverlay.renderOverlay(self.endOverlay, v15 * 1 / g_screenWidth, self.absPosition[2] + v6, self.endSize[1], self.absSize[2], state, clipX1, clipY1, clipX2, clipY2)
  else
    GuiOverlay.renderOverlay(self.startOverlay, self.absPosition[1] + v5, self.absPosition[2] + v6 + self.absSize[2] - self.startSize[2], self.absSize[1], self.startSize[2], state, clipX1, clipY1, clipX2, clipY2)
    GuiOverlay.renderOverlay(self.overlay, self.absPosition[1] + v5, self.absPosition[2] + v6 + self.endSize[2], self.absSize[1], self.absSize[2] - self.startSize[2] - self.endSize[2], state, clipX1, clipY1, clipX2, clipY2)
    GuiOverlay.renderOverlay(self.endOverlay, self.absPosition[1] + v5, self.absPosition[2] + v6, self.absSize[1], self.endSize[2], state, clipX1, clipY1, clipX2, clipY2)
  end
  local v11 = v11:superClass()
  v11.draw(self, clipX1, clipY1, clipX2, clipY2)
end
