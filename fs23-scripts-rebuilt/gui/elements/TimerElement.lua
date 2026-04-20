-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TimerElement = {}
local TimerElement_mt = Class(TimerElement, GuiElement)
function TimerElement.new(target, custom_mt)
  if custom_mt == nil then
  end
  local v2 = GuiElement.new(target, custom_mt)
  v2.value = 0
  v2.timerSize = {1, 1}
  v2.markerSize = {1, 1}
  v2.radius = 1
  v2.timerOffset = nil
  v2.overlayFront = {}
  v2.overlayBackground1 = {}
  v2.overlayBackground2 = {}
  v2.overlayValue1 = {}
  v2.overlayValue2 = {}
  v2.overlayMarker = {}
  return v2
end
function TimerElement:delete()
  GuiOverlay.deleteOverlay(self.overlayFront)
  GuiOverlay.deleteOverlay(self.overlayBackground1)
  GuiOverlay.deleteOverlay(self.overlayBackground2)
  GuiOverlay.deleteOverlay(self.overlayValue1)
  GuiOverlay.deleteOverlay(self.overlayValue2)
  GuiOverlay.deleteOverlay(self.overlayMarker)
  local v2 = v2:superClass()
  v2.delete(self)
end
function TimerElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.overlayFront, "image", self.imageSize, nil, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.overlayBackground1, "bgImage", self.imageSize, nil, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.overlayBackground2, "bgImage", self.imageSize, nil, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.overlayValue1, "valueImage", self.imageSize, nil, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.overlayValue2, "valueImage", self.imageSize, nil, xmlFile, key)
  GuiOverlay.loadOverlay(self, self.overlayMarker, "markerImage", self.imageSize, nil, xmlFile, key)
  v4 = getXMLString(xmlFile, key .. "#timerSize")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.timerSize)
  self.timerSize = v3
  v4 = getXMLString(xmlFile, key .. "#markerSize")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.markerSize)
  self.markerSize = v3
  v4 = getXMLFloat(xmlFile, key .. "#value")
  v3 = Utils.getNoNil(v4, self.value)
  self.value = v3
  v3 = getXMLString(xmlFile, key .. "#radius")
  if v3 ~= nil then
    v4 = GuiUtils.getNormalizedValues(v3 .. " " .. v3, self.outputSize)
    if v4 ~= nil then
      self.radius = v4
    end
  end
  GuiOverlay.createOverlay(self.overlayFront)
  GuiOverlay.createOverlay(self.overlayBackground1)
  GuiOverlay.createOverlay(self.overlayBackground2)
  GuiOverlay.createOverlay(self.overlayValue1)
  GuiOverlay.createOverlay(self.overlayValue2)
  GuiOverlay.createOverlay(self.overlayMarker)
  self:updateUVs(self.overlayValue2, 3.141592653589793)
  self:setValue(self.value)
end
function TimerElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  GuiOverlay.loadOverlay(self, self.overlayFront, "image", self.imageSize, profile, nil, nil)
  GuiOverlay.loadOverlay(self, self.overlayBackground1, "bgImage", self.imageSize, profile, nil, nil)
  GuiOverlay.loadOverlay(self, self.overlayBackground2, "bgImage", self.imageSize, profile, nil, nil)
  GuiOverlay.loadOverlay(self, self.overlayValue1, "valueImage", self.imageSize, profile, nil, nil)
  GuiOverlay.loadOverlay(self, self.overlayValue2, "valueImage", self.imageSize, profile, nil, nil)
  GuiOverlay.loadOverlay(self, self.overlayMarker, "markerImage", self.imageSize, profile, nil, nil)
  v4 = profile:getValue("timerSize")
  local v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.timerSize)
  self.timerSize = v3
  v4 = profile:getValue("markerSize")
  v3 = GuiUtils.getNormalizedValues(v4, self.outputSize, self.markerSize)
  self.markerSize = v3
  v3 = profile:getNumber("value", self.value)
  self.value = v3
  v3 = profile:getValue("radius")
  if v3 ~= nil then
    v4 = GuiUtils.getNormalizedValues(v3 .. " " .. v3, self.outputSize)
    if v4 ~= nil then
      self.radius = v4
    end
  end
end
function TimerElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.timerSize = {src.timerSize[1], src.timerSize[2]}
  self.markerSize = {src.markerSize[1], src.markerSize[2]}
  self.timerOffset = {src.timerOffset[1], src.timerOffset[2]}
  self.radius = {src.radius[1], src.radius[2]}
  self.value = src.value
  GuiOverlay.copyOverlay(self.overlayFront, src.overlayFront)
  GuiOverlay.copyOverlay(self.overlayBackground1, src.overlayBackground1)
  GuiOverlay.copyOverlay(self.overlayBackground2, src.overlayBackground2)
  GuiOverlay.copyOverlay(self.overlayValue1, src.overlayValue1)
  GuiOverlay.copyOverlay(self.overlayValue2, src.overlayValue2)
  GuiOverlay.copyOverlay(self.overlayMarker, src.overlayMarker)
end
function TimerElement:applyScreenAlignment()
  local v2 = v2:superClass()
  v2.applyScreenAlignment(self)
  local v1 = bitAND(self.screenAlign, GuiElement.SCREEN_ALIGN_XNONE)
  if v1 == 0 then
    self.timerSize[1] = self.timerSize[1] * g_aspectScaleX
    self.markerSize[1] = self.markerSize[1] * g_aspectScaleX
    self.radius[1] = self.radius[1] * g_aspectScaleX
  end
  v1 = bitAND(self.screenAlign, GuiElement.SCREEN_ALIGN_YNONE)
  if v1 == 0 then
    self.timerSize[2] = self.timerSize[2] * g_aspectScaleY
    self.markerSize[2] = self.markerSize[2] * g_aspectScaleY
    self.radius[2] = self.radius[2] * g_aspectScaleY
  end
  self.timerOffset = {(self.size[1] - self.timerSize[1]) / 2, (self.size[2] - self.timerSize[2]) / 2}
end
function TimerElement:setValue(newValue)
  local v2 = MathUtil.clamp(newValue, 0, 1)
  self.value = v2
  local v5 = math.rad((1 - self.value) * 360)
  self:updateUVs(...)
  v5 = math.rad(180 + -self.value * 360)
  self:updateUVs(...)
end
function TimerElement.updateUVs(v0, v1, v2)
  local v3 = GuiOverlay.getOverlayUVs(v1)
  local v8 = math.cos(-v2)
  local v9 = math.sin(-v2)
  v3[1] = -0.5 * v8 + 0.5 * v9 + 0.5
  v8 = math.sin(-v2)
  v9 = math.cos(-v2)
  v3[2] = -0.5 * v8 - 0.5 * v9 + 0.5
  v8 = math.cos(-v2)
  v9 = math.sin(-v2)
  v3[3] = -0.5 * v8 - 0.5 * v9 + 0.5
  v8 = math.sin(-v2)
  v9 = math.cos(-v2)
  v3[4] = -0.5 * v8 + 0.5 * v9 + 0.5
  v8 = math.cos(-v2)
  v9 = math.sin(-v2)
  v3[5] = 0.5 * v8 + 0.5 * v9 + 0.5
  v8 = math.sin(-v2)
  v9 = math.cos(-v2)
  v3[6] = 0.5 * v8 - 0.5 * v9 + 0.5
  v8 = math.cos(-v2)
  v9 = math.sin(-v2)
  v3[7] = 0.5 * v8 - 0.5 * v9 + 0.5
  v8 = math.sin(-v2)
  v9 = math.cos(-v2)
  v3[8] = 0.5 * v8 + 0.5 * v9 + 0.5
end
function TimerElement:draw(clipX1, clipY1, clipX2, clipY2)
  local v6 = v6:superClass()
  v6.draw(self, clipX1, clipY1, clipX2, clipY2)
  if self.disabled then
  end
  if 0.5 < self.value then
    GuiOverlay.renderOverlay(self.overlayBackground2, self.absPosition[1] + self.timerOffset[1], self.absPosition[2] + self.timerOffset[2], self.timerSize[1], self.timerSize[2], v5)
  end
  GuiOverlay.renderOverlay(self.overlayValue1, self.absPosition[1] + self.timerOffset[1], self.absPosition[2] + self.timerOffset[2], self.timerSize[1], self.timerSize[2], v5)
  if 0.5 < self.value then
    GuiOverlay.renderOverlay(self.overlayValue2, self.absPosition[1] + self.timerOffset[1], self.absPosition[2] + self.timerOffset[2], self.timerSize[1], self.timerSize[2], v5)
  else
    GuiOverlay.renderOverlay(self.overlayBackground2, self.absPosition[1] + self.timerOffset[1], self.absPosition[2] + self.timerOffset[2], self.timerSize[1], self.timerSize[2], v5)
    GuiOverlay.renderOverlay(self.overlayBackground1, self.absPosition[1] + self.timerOffset[1], self.absPosition[2] + self.timerOffset[2], self.timerSize[1], self.timerSize[2], v5)
  end
  GuiOverlay.renderOverlay(self.overlayFront, self.absPosition[1], self.absPosition[2], self.size[1], self.size[2], v5)
  local v8 = math.rad((1 - self.value) * 360 + 90)
  local v7 = math.cos(...)
  local v9 = math.rad((1 - self.value) * 360 + 90)
  v8 = math.sin(...)
  GuiOverlay.renderOverlay(self.overlayMarker, self.absPosition[1] + self.size[1] / 2 - self.markerSize[1] / 2 + v7 * self.radius[1], self.absPosition[2] + self.size[2] / 2 - self.markerSize[2] / 2 + v8 * self.radius[2], self.markerSize[1], self.markerSize[2], v5)
end
