-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FillLevelsDisplay = {}
local FillLevelsDisplay_mt = Class(FillLevelsDisplay, HUDDisplayElement)
function FillLevelsDisplay.new(hudAtlasPath)
  local backgroundOverlay = FillLevelsDisplay.createBackground()
  local v3 = v3:superClass()
  local v2 = v3.new(backgroundOverlay, nil, u0)
  v2.uiScale = 1
  v2.hudAtlasPath = hudAtlasPath
  v2.vehicle = nil
  v2.fillLevelBuffer = {}
  v2.fillLevelTextBuffer = {}
  v2.fillTypeTextBuffer = {}
  v2.fillTypeFrames = {}
  v2.fillTypeLevelBars = {}
  v2.weightFrames = {}
  v2.frameHeight = 0
  v2.fillLevelTextSize = 0
  v2.fillLevelTextOffsetX = 0
  v2.fillLevelTextOffsetY = 0
  return v2
end
function FillLevelsDisplay:setVehicle(vehicle)
  self.vehicle = vehicle
end
function FillLevelsDisplay:addFillLevel(fillType, fillLevel, capacity, precision, maxReached)
  -- TODO: structure LOP_FORNPREP (pc 6, target 44)
  if self.fillLevelBuffer[1].fillType == fillType then
    self.fillLevelBuffer[1].fillLevel = self.fillLevelBuffer[1].fillLevel + fillLevel
    self.fillLevelBuffer[1].capacity = self.fillLevelBuffer[1].capacity + capacity
    self.fillLevelBuffer[1].precision = precision
    self.fillLevelBuffer[1].maxReached = maxReached
    if self.addIndex ~= self.fillLevelBuffer[1].addIndex then
      self.fillLevelBuffer[1].addIndex = self.addIndex
      self.needsSorting = true
    end
  else
    -- TODO: structure LOP_FORNLOOP (pc 43, target 7)
  end
  if not v6 then
    table.insert(self.fillLevelBuffer, {fillType = fillType, fillLevel = fillLevel, capacity = capacity, precision = precision, addIndex = self.addIndex, maxReached = maxReached})
    self.needsSorting = true
  end
  self.addIndex = self.addIndex + 1
end
function FillLevelsDisplay:updateFillLevelBuffers()
  -- TODO: structure LOP_FORNPREP (pc 5, target 9)
  self.fillLevelTextBuffer[#self.fillLevelTextBuffer] = nil
  -- TODO: structure LOP_FORNLOOP (pc 8, target 6)
  -- TODO: structure LOP_FORNPREP (pc 14, target 18)
  self.fillTypeTextBuffer[#self.fillTypeTextBuffer] = nil
  -- TODO: structure LOP_FORNLOOP (pc 17, target 15)
  -- TODO: structure LOP_FORNPREP (pc 23, target 37)
  self.fillTypeFrames[self.fillLevelBuffer[1].fillType]:setVisible(false)
  -- TODO: structure LOP_FORNLOOP (pc 36, target 24)
  -- TODO: structure LOP_FORNPREP (pc 42, target 56)
  self.fillLevelBuffer[1].fillLevel = 0
  self.fillLevelBuffer[1].capacity = 0
  -- TODO: structure LOP_FORNLOOP (pc 55, target 43)
  self.addIndex = 0
  self.needsSorting = false
  v1:getFillLevelInformation(self)
  if self.needsSorting then
    table.sort(self.fillLevelBuffer, u0)
  end
end
function FillLevelsDisplay:updateFillLevelFrames()
  local v1, v2 = self:getPosition()
  -- TODO: structure LOP_FORNPREP (pc 9, target 176)
  if 0 >= self.fillLevelBuffer[1].capacity then
    -- if 0 >= v0.fillLevelBuffer[1].fillLevel then goto L175 end
  end
  if 0 < v7.capacity then
  end
  self.fillTypeFrames[v7.fillType]:setVisible(true)
  self.fillTypeLevelBars[v7.fillType]:setValue(v8)
  local baseX = self:getPosition()
  if v3 then
  end
  v9:setPosition(baseX, v2)
  if 0 < (v7.precision or 0) then
    local v14 = MathUtil.round(v7.fillLevel, v7.precision or 0)
    local v17 = math.floor(v14)
    local v21 = math.floor(v14)
    local v15 = string.format("%d%s%0" .. (v7.precision or 0) .. "d", v17, g_i18n.decimalSeparator, (v14 - v21) * 10 ^ (v7.precision or 0))
  else
    local v16 = MathUtil.round(v7.fillLevel)
    v14 = string.format(...)
  end
  v14:setVisible(v7.maxReached)
  if v7.fillType ~= FillType.UNKNOWN then
    v16 = v16:getFillTypeByIndex(v7.fillType)
  end
  local v20 = math.floor(100 * v8)
  v16 = string.format(...)
  self.fillLevelTextBuffer[#self.fillLevelTextBuffer + 1] = v16
  if v14 ~= nil then
    self.fillTypeTextBuffer[#self.fillLevelTextBuffer] = v14
  end
  -- TODO: structure LOP_FORNLOOP (pc 175, target 10)
end
function FillLevelsDisplay:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.vehicle ~= nil then
    self:updateFillLevelBuffers()
    if 0 < #self.fillLevelBuffer then
      local currentVisibility = self:getVisible()
      if not currentVisibility then
        currentVisibility = currentVisibility:getFinished()
        if currentVisibility then
          self:setVisible(true, true)
        end
      end
      self:updateFillLevelFrames()
      return
    end
    currentVisibility = self:getVisible()
    if currentVisibility then
      currentVisibility = currentVisibility:getFinished()
      if currentVisibility then
        self:setVisible(false, true)
      end
    end
  end
end
function FillLevelsDisplay:draw()
  local v2 = v2:superClass()
  v2.draw(self)
  local v1 = self:getVisible()
  if v1 then
    v1, v2 = self:getPosition()
    local width = self:getWidth()
    -- TODO: structure LOP_FORNPREP (pc 24, target 78)
    if 1 == 1 then
    end
    local v11 = unpack(FillLevelsDisplay.COLOR.FILL_LEVEL_TEXT)
    setTextColor(...)
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_RIGHT)
    renderText(v8, v9 + self.fillLevelTextOffsetY, self.fillLevelTextSize, v7)
    -- TODO: structure LOP_FORNLOOP (pc 77, target 25)
  end
end
function FillLevelsDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  local currentVisibility = self:getVisible()
  self:setVisible(true, false)
  self.uiScale = uiScale
  local v5 = self:getWidth()
  local v3, v4 = FillLevelsDisplay.getBackgroundPosition(...)
  self:setPosition(v3, v4)
  self:storeOriginalPosition()
  self:setVisible(currentVisibility, false)
  self:storeScaledValues()
end
function FillLevelsDisplay.getBackgroundPosition(scale, width)
  local v2, v3 = unpack(FillLevelsDisplay.POSITION.BACKGROUND)
  local v4, v5 = getNormalizedScreenValues(v2 - 80 + 80 / scale, v3)
  return 1 - g_safeFrameOffsetX - width - v4 * scale, g_safeFrameOffsetY + v5 * scale
end
function FillLevelsDisplay:storeScaledValues()
  local v1 = self:scalePixelToScreenHeight(HUDElement.TEXT_SIZE.DEFAULT_TEXT)
  self.fillLevelTextSize = v1
  local v1, v2 = self:scalePixelToScreenVector(FillLevelsDisplay.POSITION.FILL_LEVEL_TEXT)
  self.fillLevelTextOffsetX = v1
  self.fillLevelTextOffsetY = v2
  v1, v2 = self:scalePixelToScreenVector(FillLevelsDisplay.POSITION.FILL_TYPE_TEXT)
  self.fillTypeTextOffsetX = v1
  self.fillTypeTextOffsetY = v2
  local v2, v3 = self:scalePixelToScreenVector(FillLevelsDisplay.SIZE.FILL_TYPE_FRAME)
  self.frameHeight = v3
  v2, v3 = self:scalePixelToScreenVector(FillLevelsDisplay.POSITION.FILL_TYPE_FRAME_MARGIN)
  self.frameOffsetY = v3
  v2 = self:scalePixelToScreenVector(FillLevelsDisplay.POSITION.FIRST_FILL_TYPE_OFFSET)
  self.firstFillTypeOffset = v2
end
function FillLevelsDisplay.createBackground()
  local v1 = unpack(FillLevelsDisplay.SIZE.BACKGROUND)
  local v0, v1 = getNormalizedScreenValues(...)
  local v2, v3 = FillLevelsDisplay.getBackgroundPosition(1, v0)
  return Overlay.new(nil, v2, v3, v0, v1)
end
function FillLevelsDisplay:refreshFillTypes(fillTypeManager)
  for v5, v6 in pairs(self.fillTypeFrames) do
    v6:delete()
  end
  -- TODO: structure LOP_FORNPREP (pc 16, target 20)
  self.fillTypeFrames[#self.fillTypeFrames] = nil
  -- TODO: structure LOP_FORNLOOP (pc 19, target 17)
  -- TODO: structure LOP_FORNPREP (pc 25, target 29)
  self.fillTypeLevelBars[#self.fillTypeLevelBars] = nil
  -- TODO: structure LOP_FORNLOOP (pc 28, target 26)
  v2, v3 = self:getPosition()
  self:createFillTypeFrames(fillTypeManager, self.hudAtlasPath, v2, v3)
end
function FillLevelsDisplay:createFillTypeFrames(fillTypeManager, hudAtlasPath, baseX, baseY)
  local v6 = fillTypeManager:getFillTypes()
  for v8, v9 in ipairs(...) do
    local v10 = self:createFillTypeFrame(hudAtlasPath, baseX, baseY, v9)
    self.fillTypeFrames[v9.index] = v10
    v10:setScale(self.uiScale, self.uiScale)
    self:addChild(v10)
  end
end
function FillLevelsDisplay:createFillTypeFrame(hudAtlasPath, baseX, baseY, fillType)
  local v5, v6 = self:scalePixelToScreenVector(FillLevelsDisplay.SIZE.FILL_TYPE_FRAME)
  local v7, v8 = self:scalePixelToScreenVector(FillLevelsDisplay.POSITION.FILL_TYPE_FRAME)
  local v11 = Overlay.new(nil, baseX + v7, baseY + v8, v5, v6)
  local v12 = HUDElement.new(v11)
  v12:setVisible(false)
  self:createFillTypeIcon(v12, baseX + v7, baseY + v8, fillType)
  self:createFillTypeBar(hudAtlasPath, v12, baseX + v7, baseY + v8, fillType)
  local v14 = unpack(FillLevelsDisplay.SIZE.WEIGHT_LIMIT)
  local v13, v14 = getNormalizedScreenValues(...)
  local v16 = unpack(FillLevelsDisplay.POSITION.WEIGHT_LIMIT)
  local v15, v16 = getNormalizedScreenValues(...)
  local v17 = Overlay.new(hudAtlasPath, baseX + v7 + v15, baseY + v8 + v16, v13, v14)
  local v20 = GuiUtils.getUVs(FillLevelsDisplay.UV.WEIGHT_LIMIT)
  v17:setUVs(...)
  local v18 = HUDElement.new(v17)
  v12:addChild(v18)
  self.weightFrames[fillType.index] = v18
  return v12
end
function FillLevelsDisplay:createFillTypeIcon(frame, baseX, baseY, fillType)
  if fillType.hudOverlayFilename ~= "" then
    local baseWidth = self:getWidth()
    local v7 = unpack(FillLevelsDisplay.SIZE.FILL_TYPE_ICON)
    local v6, v7 = getNormalizedScreenValues(...)
    local v9 = unpack(FillLevelsDisplay.POSITION.FILL_TYPE_ICON)
    local v8, v9 = getNormalizedScreenValues(...)
    local v10 = Overlay.new(self.hudAtlasPath, baseX + v8, baseY + v9, v6, v7)
    local v13 = unpack(FillLevelsDisplay.COLOR.FILL_TYPE_BACKDROP)
    v10:setColor(...)
    v13 = GuiUtils.getUVs(FillLevelsDisplay.UV.FILL_ICON_BACKDROP)
    v10:setUVs(...)
    local v11 = HUDElement.new(v10)
    frame:addChild(v11)
    local v12 = Overlay.new(fillType.hudOverlayFilename, baseX + v8, baseY + v9, v6, v7)
    local v15 = unpack(FillLevelsDisplay.COLOR.FILL_TYPE_ICON)
    v12:setColor(...)
    v15 = HUDElement.new(v12)
    v11:addChild(...)
  end
end
function FillLevelsDisplay:createFillTypeBar(hudAtlasPath, frame, baseX, baseY, fillType)
  local v7 = unpack(FillLevelsDisplay.SIZE.BAR)
  local v6, v7 = getNormalizedScreenValues(...)
  local v9 = unpack(FillLevelsDisplay.POSITION.BAR)
  local v8, v9 = getNormalizedScreenValues(...)
  local v12 = HUDRoundedBarElement.new(hudAtlasPath, baseX + v8, baseY + v9, v6, v7, true)
  local v15 = unpack(FillLevelsDisplay.COLOR.BAR_FILLED)
  v12:setBarColor(...)
  frame:addChild(v12)
  self.fillTypeLevelBars[fillType.index] = v12
end
FillLevelsDisplay.SIZE = {BACKGROUND = {180, 35}, FILL_TYPE_FRAME = {180, 35}, BAR = {140, 12}, FILL_TYPE_ICON = {35, 35}, WEIGHT_LIMIT = {60, 21}}
FillLevelsDisplay.POSITION = {BACKGROUND = {350, 8}, FILL_TYPE_FRAME = {0, 0}, FILL_TYPE_FRAME_MARGIN = {0, 10}, BAR = {0, 2}, FIRST_FILL_TYPE_OFFSET = {20, 0}, FILL_TYPE_ICON = {145, 0}, FILL_LEVEL_TEXT = {-40, 18}, FILL_TYPE_TEXT = {-40, 0}, WEIGHT_LIMIT = {40, -2.5}}
FillLevelsDisplay.COLOR = {BAR_FILLED = {0.0003, 0.5647, 0.9822}, FILL_TYPE_ICON = {1, 1, 1, 1}, FILL_LEVEL_TEXT = {1, 1, 1, 1}, FILL_TYPE_BACKDROP = {0, 0, 0, 0.54}}
FillLevelsDisplay.UV = {FILL_ICON_BACKDROP = {431, 64, 48, 48}, WEIGHT_LIMIT = {192, 52, 60, 21}}
