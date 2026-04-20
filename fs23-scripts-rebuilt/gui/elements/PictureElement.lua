-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PictureElement = {}
local PictureElement_mt = Class(PictureElement, BitmapElement)
PictureElement.CONTENT_MODE = {NO_SCALING = 0, SCALE_TO_FILL = 1, SCALE_ASPECT_FIT = 2}
function PictureElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.contentMode = PictureElement.CONTENT_MODE.SCALE_ASPECT_FIT
  v2.imageSize = {1, 1}
  v2.aspectRatio = 1
  return v2
end
function PictureElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#imageSize")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.imageSize)
  self.imageSize = v3
  self.aspectRatio = self.imageSize[1] / self.imageSize[2]
end
function PictureElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  v4 = profile:getValue("imageSize")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.imageSize)
  self.imageSize = v3
  self.aspectRatio = self.imageSize[1] / self.imageSize[2]
  v3 = profile:getValue("pictureContentMode")
  if v3 == "noScaling" then
    self.contentMode = PictureElement.CONTENT_MODE.NO_SCALING
    return
  end
  if v3 == "scaleToFill" then
    self.contentMode = PictureElement.CONTENT_MODE.SCALE_TO_FILL
    return
  end
  if v3 == "scaleAspectFit" then
    self.contentMode = PictureElement.CONTENT_MODE.SCALE_ASPECT_FIT
  end
end
function PictureElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.contentMode = src.contentMode
  self.aspectRatio = src.aspectRatio
  self.imageSize = src.imageSize
end
function PictureElement:setImageSize(width, height)
  local v4 = Utils.getNoNil(width, self.imageSize[1])
  self.imageSize[1] = v4
  v4 = Utils.getNoNil(height, self.imageSize[2])
  self.imageSize[2] = v4
  self.aspectRatio = self.imageSize[1] / self.imageSize[2]
end
function PictureElement:setAspectRatio(ratio)
  local v2, v3 = self:getAspectScale()
  self.aspectRatio = ratio * v2 / v3
end
function PictureElement:getAdjustedPosition()
  local v1, v2 = self:getOffset()
  if self.contentMode == PictureElement.CONTENT_MODE.SCALE_TO_FILL then
    if self.aspectRatio <= self.absSize[1] / g_aspectScaleX / self.absSize[2] * g_aspectScaleY then
      return v1, v2, self.absSize[1], self.absSize[2] * g_screenAspectRatio
    end
    return v3, v4, self.absSize[1], self.absSize[2]
  end
  if self.contentMode == PictureElement.CONTENT_MODE.SCALE_ASPECT_FIT and self.absSize[2] < self.absSize[1] / self.aspectRatio * g_referenceScreenWidth / g_referenceScreenHeight then
  end
  return v3, v4, v5, v6
end
function PictureElement:draw(clipX1, clipY1, clipX2, clipY2)
  local v5, v6, v7, v8 = self:getAdjustedPosition()
  local v15 = self:getOverlayState()
  GuiOverlay.renderOverlay(self.overlay, self.absPosition[1] + v5, self.absPosition[2] + v6, v7, v8, v15, clipX1, clipY1, clipX2, clipY2)
  if not self.debugEnabled then
    -- if not g_uiDebugEnabled then goto L117 end
  end
  drawFilledRect(self.absPosition[1] - 1 / g_screenWidth + v5, self.absPosition[2] - 1 / g_screenHeight + v6, v7 + 2 * 1 / g_screenWidth, 1 / g_screenHeight, 1, 1, 0, 1)
  drawFilledRect(self.absPosition[1] - 1 / g_screenWidth + v5, self.absPosition[2] + v8 + v6, v7 + 2 * 1 / g_screenWidth, 1 / g_screenHeight, 1, 1, 0, 1)
  drawFilledRect(self.absPosition[1] - 1 / g_screenWidth + v5, self.absPosition[2] + v6, 1 / g_screenWidth, v8, 1, 1, 0, 1)
  drawFilledRect(self.absPosition[1] + v7 + v5, self.absPosition[2] + v6, 1 / g_screenWidth, v8, 1, 1, 0, 1)
  local v10 = v10:superClass()
  v10 = v10:superClass()
  v10.draw(self, clipX1, clipY1, clipX2, clipY2)
end
