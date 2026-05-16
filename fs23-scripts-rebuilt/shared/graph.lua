-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Graph = {}
local Graph_mt = Class(Graph)
Graph.STYLE_BARS = 0
Graph.STYLE_LINES = 1
function Graph.new(numValues, left, bottom, width, height, minValue, maxValue, showLabels, textExtra, graphStyle, verticalStep, verticalLabel, textSize)
  setmetatable({}, u0)
  local v14 = createImageOverlay("data/shared/graph_pixel.png")
  if not textSize then
    v14 = getCorrectTextSize(0.011)
  end
  v13.textSize = v14
  if v13.graphStyle == nil then
    v13.graphStyle = Graph.STYLE_BARS
  end
  return v13
end
function Graph:delete()
  delete(self.overlayId)
  if self.overlayBg ~= nil then
    delete(self.overlayBg)
  end
  if self.overlayHLine ~= nil then
    delete(self.overlayHLine)
  end
  if self.overlayVLine ~= nil then
    delete(self.overlayVLine)
  end
end
function Graph:setColor(r, g, b, a)
  setOverlayColor(self.overlayId, r, g, b, a)
end
function Graph:setBackgroundColor(r, g, b, a)
  if r == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L34
    delete(self.overlayBg)
    self.overlayBg = nil
    return
  end
  if self.overlayBg == nil then
    local v5 = createImageOverlay("data/shared/graph_pixel.png")
    self.overlayBg = v5
  end
  setOverlayColor(self.overlayBg, r, g, b, a)
end
function Graph:setHorizontalLine(stepSize, showLabel, r, g, b, a)
  if stepSize ~= nil then
    -- if v1 > 0 then goto L18 end
  end
  if self.overlayHLine ~= nil then
    delete(self.overlayHLine)
    self.overlayHLine = nil
    return
    if self.overlayHLine == nil then
      local v7 = createImageOverlay("data/shared/graph_pixel.png")
      self.overlayHLine = v7
    end
    setOverlayColor(self.overlayHLine, r, g, b, a)
    self.hLineStepSize = stepSize
    self.hLineShowLabel = showLabel
  end
end
function Graph:setVerticalLine(stepSize, showLabel, r, g, b, a)
  if stepSize ~= nil then
    -- if v1 > 0 then goto L18 end
  end
  if self.overlayVLine ~= nil then
    delete(self.overlayVLine)
    self.overlayVLine = nil
    return
    if self.overlayVLine == nil then
      local v7 = createImageOverlay("data/shared/graph_pixel.png")
      self.overlayVLine = v7
    end
    setOverlayColor(self.overlayVLine, r, g, b, a)
    self.vLineStepSize = stepSize
    self.vLineShowLabel = showLabel
  end
end
function Graph:addValue(value, lowValue, fillFromRight)
  if fillFromRight then
    -- TODO: structure LOP_FORNPREP (pc 6, target 22)
    self.values[1] = self.values[1 + 1]
    self.lowValues[1] = self.lowValues[1 + 1]
    -- TODO: structure LOP_FORNLOOP (pc 21, target 7)
    self.values[self.numValues] = value
    self.lowValues[self.numValues] = lowValue
    return
  end
  self.values[self.nextIndex] = value
  self.lowValues[self.nextIndex] = lowValue
  self.nextIndex = self.nextIndex + 1
  if self.numValues < self.nextIndex then
    self.nextIndex = 1
  end
end
function Graph:setValue(index, value, lowValue)
  self.values[(index + self.nextIndex - 2) % self.numValues + 1] = value
  self.lowValues[(index + self.nextIndex - 2) % self.numValues + 1] = lowValue
end
function Graph:setXPosition(index, posX)
  if self.xPositions == nil then
    self.xPositions = {}
  end
  self.xPositions[index] = posX
end
function Graph:draw()
  if self.overlayBg ~= nil then
    renderOverlay(self.overlayBg, self.left, self.bottom, self.width, self.height)
  end
  if self.overlayHLine ~= nil then
    while true do
      if not (v1 <= self.maxValue) then
        break
      end
      renderOverlay(self.overlayHLine, self.left, self.bottom + v1 / self.maxValue * self.height, self.width, 1 / g_screenHeight)
      if self.hLineShowLabel then
        setTextAlignment(RenderText.ALIGN_RIGHT)
        v10 = string.format("%1.2f", self.minValue + v1)
        renderText(self.left - 0.005, self.bottom + v1 / self.maxValue * self.height, self.textSize, v10 .. self.textExtra)
        setTextAlignment(RenderText.ALIGN_LEFT)
      end
    end
  end
  if self.overlayVLine ~= nil then
    while 0 <= #self.values do
      renderOverlay(self.overlayHLine, self.left + v1 / v2 * self.width, self.bottom, 1 / g_screenWidth, self.height)
      if self.vLineShowLabel and v1 % self.vLineStepSize == 0 then
        setTextAlignment(RenderText.ALIGN_CENTER)
        local v8 = tostring(v1)
        renderText(...)
        setTextAlignment(RenderText.ALIGN_LEFT)
      end
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 161, target 240)
  if self.xPositions ~= nil then
  else
  end
  if self.values[v6] ~= nil then
    if self.graphStyle == Graph.STYLE_BARS then
      self:drawBar(v7, self.values[v6], self.lowValues[v6])
    elseif self.graphStyle == Graph.STYLE_LINES and v2 ~= nil then
      self:drawLine(v3, v7, v2, self.values[v6])
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 239, target 162)
  -- TODO: structure LOP_FORNPREP (pc 245, target 327)
  if self.xPositions ~= nil then
  else
  end
  if self.values[v6] ~= nil then
    if self.graphStyle == Graph.STYLE_BARS then
      self:drawBar(v7, self.values[v6], self.lowValues[v6])
    elseif self.graphStyle == Graph.STYLE_LINES and v2 ~= nil then
      self:drawLine(v3, v7, v2, self.values[v6])
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 326, target 246)
  if v1 and self.showLabels then
    setTextAlignment(RenderText.ALIGN_RIGHT)
    local v11 = string.format("%1.2f", self.minValue)
    renderText(self.left - 0.005, self.bottom, self.textSize, v11 .. self.textExtra)
    v11 = string.format("%1.2f", self.maxValue)
    renderText(self.left - 0.005, self.bottom + self.height, self.textSize, v11 .. self.textExtra)
    setTextAlignment(RenderText.ALIGN_LEFT)
  end
end
function Graph:drawBar(posX, value, lowValue)
  if lowValue ~= nil then
  end
  if 0 < v4 then
    renderOverlay(self.overlayId, posX, self.bottom + self.height / (self.maxValue - self.minValue) * (value - self.minValue) - v4, self.width / (self.numValues - 1), v4)
  end
end
function Graph:drawLine(posX1, posX2, value1, value2)
  local v9 = math.atan((self.bottom + self.height / (self.maxValue - self.minValue) * (value2 - self.minValue) - self.bottom + self.height / (self.maxValue - self.minValue) * (value1 - self.minValue)) / (posX2 - posX1) * g_screenAspectRatio)
  local v10 = math.sqrt((posX2 - posX1) * (posX2 - posX1) + (self.bottom + self.height / (self.maxValue - self.minValue) * (value2 - self.minValue) - self.bottom + self.height / (self.maxValue - self.minValue) * (value1 - self.minValue)) / g_screenAspectRatio * (self.bottom + self.height / (self.maxValue - self.minValue) * (value2 - self.minValue) - self.bottom + self.height / (self.maxValue - self.minValue) * (value1 - self.minValue)) / g_screenAspectRatio)
  setOverlayRotation(self.overlayId, v9, 0, 0)
  renderOverlay(self.overlayId, posX1, self.bottom + self.height / (self.maxValue - self.minValue) * (value1 - self.minValue), v10, 0.002)
end
