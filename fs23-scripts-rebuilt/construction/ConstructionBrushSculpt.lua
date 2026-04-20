-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionBrushSculpt = {}
local ConstructionBrushSculpt_mt = Class(ConstructionBrushSculpt, ConstructionBrush)
ConstructionBrushSculpt.MODE = {SHIFT = 1, LEVEL = 2, SOFTEN = 3, SLOPE = 4}
ConstructionBrushSculpt.CURSOR_SIZES = {2, 4, 8, 16, 32}
ConstructionBrushSculpt.CURSOR_STRENGTHS = {0.25, 0.5, 1, 2, 4}
function ConstructionBrushSculpt.new(subclass_mt, cursor)
  local v3 = v3:superClass()
  if not subclass_mt then
  end
  local v2 = v2(v3, cursor)
  v2.supportsPrimaryButton = true
  v2.supportsPrimaryDragging = true
  v2.supportsSecondaryButton = true
  v2.supportsSecondaryDragging = true
  v2.supportsTertiaryButton = true
  v2.supportsPrimaryAxis = true
  v2.supportsSecondaryAxis = true
  v2.requiredPermission = Farm.PERMISSION.LANDSCAPING
  v2.maxBrushRadius = ConstructionBrushSculpt.CURSOR_SIZES[#ConstructionBrushSculpt.CURSOR_SIZES] / 2
  v2.maxBrushStrength = ConstructionBrushSculpt.CURSOR_STRENGTHS[#ConstructionBrushSculpt.CURSOR_STRENGTHS]
  return v2
end
function ConstructionBrushSculpt.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function ConstructionBrushSculpt:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  self.brushShape = Landscaping.BRUSH_SHAPE.CIRCLE
  v1:setRotationEnabled(false)
  v1:setShape(GuiTopDownCursor.SHAPES.CIRCLE)
  v1:setTerrainOnly(true)
  v1:setColorMode(GuiTopDownCursor.SHAPES_COLORS.SCULPTING)
  v1:setCursorTerrainOffset(true)
  self:setBrushSize(2)
  self:setBrushStrength(1)
end
function ConstructionBrushSculpt:deactivate()
  v1:setTerrainOnly(false)
  local v2 = v2:superClass()
  v2.deactivate(self)
end
function ConstructionBrushSculpt:copyState(from)
  self:setBrushSize(from.cursorSizeIndex)
  self:setBrushStrength(from.cursorStrengthIndex)
  self.brushShape = from.brushShape
  if self.brushShape == Landscaping.BRUSH_SHAPE.CIRCLE then
    v2:setShape(GuiTopDownCursor.SHAPES.CIRCLE)
    return
  end
  v2:setShape(GuiTopDownCursor.SHAPES.SQUARE)
end
function ConstructionBrushSculpt:setParameters(mode)
  self.mode = mode
end
function ConstructionBrushSculpt:setBrushSize(index)
  local v2 = MathUtil.clamp(index, 2, #ConstructionBrushSculpt.CURSOR_SIZES)
  self.cursorSizeIndex = v2
  self.brushRadius = ConstructionBrushSculpt.CURSOR_SIZES[self.cursorSizeIndex] / 2
  v3:setShapeSize(ConstructionBrushSculpt.CURSOR_SIZES[self.cursorSizeIndex])
end
function ConstructionBrushSculpt:setBrushStrength(index)
  local v2 = MathUtil.clamp(index, 1, #ConstructionBrushSculpt.CURSOR_STRENGTHS)
  self.cursorStrengthIndex = v2
  self.brushStrength = ConstructionBrushSculpt.CURSOR_STRENGTHS[self.cursorStrengthIndex]
  local v3 = math.sqrt(self.brushStrength / ConstructionBrushSculpt.CURSOR_STRENGTHS[#ConstructionBrushSculpt.CURSOR_STRENGTHS])
  v3:setColorMode(GuiTopDownCursor.SHAPES_COLORS.SCULPTING, v3 * 0.8)
end
function ConstructionBrushSculpt:toggleBrushShape()
  if self.brushShape == Landscaping.BRUSH_SHAPE.CIRCLE then
    self.brushShape = Landscaping.BRUSH_SHAPE.SQUARE
    v1:setShape(GuiTopDownCursor.SHAPES.SQUARE)
    return
  end
  self.brushShape = Landscaping.BRUSH_SHAPE.CIRCLE
  v1:setShape(GuiTopDownCursor.SHAPES.CIRCLE)
end
function ConstructionBrushSculpt:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.showNoTargetHeightError then
    local v4 = v4:getText("ui_construction_noTargetHeightSet")
    v2:setErrorMessage(...)
    return
  end
  if self.slopeAngle ~= nil then
    v4 = string.format("%d%%", self.slopeAngle * 100)
    v2:setMessage(...)
    return
  end
  local v2, v3, v4 = v2:getHitTerrainPosition()
  if v2 ~= nil then
    local v5 = self:verifyAccess(v2, v3, v4)
    if v5 ~= nil then
      local v6 = v6:getText(ConstructionBrush.ERROR_MESSAGES[v5])
      v7:setErrorMessage(v6)
    end
  end
end
function ConstructionBrushSculpt:shift(x, y, z, direction)
  if 0 < direction then
    -- if Landscaping.OPERATION.RAISE then goto L10 end
  end
  local v7 = LandscapingSculptEvent.new(false, Landscaping.OPERATION.LOWER, x, y, z, nil, nil, nil, nil, nil, nil, v5, self.brushStrength, self.brushShape, Landscaping.TERRAIN_UNIT)
  local v8 = v8:getServerConnection()
  v8:sendEvent(v7)
end
function ConstructionBrushSculpt:flatten(x, y, z)
  if self.flattenHeight == nil then
    self.flattenHeight = y
  end
  local v5 = LandscapingSculptEvent.new(false, v4, x, self.flattenHeight, z, nil, nil, nil, nil, nil, nil, self.brushRadius, self.brushStrength, self.brushShape, Landscaping.TERRAIN_UNIT)
  local v6 = v6:getServerConnection()
  v6:sendEvent(v5)
end
function ConstructionBrushSculpt:smooth(x, y, z)
  local v5 = LandscapingSculptEvent.new(false, Landscaping.OPERATION.SMOOTH, x, y, z, nil, nil, nil, nil, nil, nil, self.brushRadius, self.brushStrength * 2, self.brushShape, Landscaping.TERRAIN_UNIT)
  local v6 = v6:getServerConnection()
  v6:sendEvent(v5)
end
function ConstructionBrushSculpt:slope(x, y, z)
  if self.slopeTargetX == nil then
    self.showNoTargetHeightError = true
    return
  end
  self.showNoTargetHeightError = false
  if self.slopeSourceX == nil then
    self.slopeSourceX = x
    self.slopeSourceY = y
    self.slopeSourceZ = z
    local v10, v11, v12 = MathUtil.vector3Normalize(self.slopeTargetX - x, self.slopeTargetY - y, self.slopeTargetZ - z)
    local v17 = MathUtil.vector2Length(x - self.slopeTargetX, z - self.slopeTargetZ)
    local v16 = math.max(v17, 0.000001)
    local v13 = MathUtil.clamp((y - self.slopeTargetY) / v16, 0, 1)
    self.slopeAngle = v13
    local v13, v14, v15 = MathUtil.vector3Normalize(-v12, 0, v10)
    local v16, v17, v18 = MathUtil.crossProduct(v13, v14, v15, v10, v11, v12)
    self.slopeNX = v16
    self.slopeNY = v17
    self.slopeNZ = v18
    self.slopeD = -(v16 * x + v17 * y + v18 * z)
    local v19 = math.min(y, self.slopeTargetY)
    self.slopeMinY = v19
    v19 = math.max(y, self.slopeTargetY)
    self.slopeMaxY = v19
  end
  local v5 = LandscapingSculptEvent.new(false, Landscaping.OPERATION.SLOPE, x, y, z, self.slopeNX, self.slopeNY, self.slopeNZ, self.slopeD, self.slopeMinY, self.slopeMaxY, self.brushRadius, 5, self.brushShape, Landscaping.TERRAIN_UNIT)
  local v6 = v6:getServerConnection()
  v6:sendEvent(v5)
end
function ConstructionBrushSculpt:slopeSetTarget(x, y, z)
  self.slopeTargetX = x
  self.slopeTargetY = y
  self.slopeTargetZ = z
  self.slopeAngle = nil
  self.showNoTargetHeightError = false
end
function ConstructionBrushSculpt:onButtonPrimary(isDown, isDrag, isUp)
  self:setActiveSound(ConstructionSound.ID.NONE)
  if isUp then
    self.flattenHeight = nil
    self.slopeSourceX = nil
    self.slopeSourceY = nil
    self.slopeSourceZ = nil
    self.showNoTargetHeightError = false
    self.slopeAngle = nil
    return
  end
  local v4, v5, v6 = v4:getHitTerrainPosition()
  if v4 == nil then
    return
  end
  local v7 = self:verifyAccess(v4, v5, v6)
  if v7 ~= nil then
    return
  end
  if self.mode == ConstructionBrushSculpt.MODE.SHIFT then
    self:shift(v4, v5, v6, 1)
  elseif self.mode == ConstructionBrushSculpt.MODE.LEVEL then
    self:flatten(v4, v5, v6)
  else
    if self.mode == ConstructionBrushSculpt.MODE.SOFTEN then
      self:smooth(v4, v5, v6)
    elseif self.mode == ConstructionBrushSculpt.MODE.SLOPE then
      self:slope(v4, v5, v6)
    end
  end
  self:setActiveSound(ConstructionSound.ID.SCULPT, 1 - self.brushRadius / self.maxBrushRadius * 0.75 - self.brushStrength / self.maxBrushStrength * 0.25)
end
function ConstructionBrushSculpt:onButtonSecondary(isDown, isDrag, isUp)
  self:setActiveSound(ConstructionSound.ID.NONE)
  if isUp then
    return
  end
  local v4, v5, v6 = v4:getHitTerrainPosition()
  if v4 == nil then
    return
  end
  local v7 = self:verifyAccess(v4, v5, v6)
  if v7 ~= nil then
    return
  end
  if self.mode == ConstructionBrushSculpt.MODE.SHIFT then
    self:shift(v4, v5, v6, -1)
    self:setActiveSound(ConstructionSound.ID.SCULPT, 1 - self.brushRadius / self.maxBrushRadius * 0.75 - self.brushStrength / self.maxBrushStrength * 0.25)
    return
  end
  if self.mode == ConstructionBrushSculpt.MODE.SLOPE then
    self:slopeSetTarget(v4, v5, v6)
  end
end
function ConstructionBrushSculpt:onButtonTertiary()
  self:toggleBrushShape()
end
function ConstructionBrushSculpt:onAxisPrimary(inputValue)
  self:setBrushSize(self.cursorSizeIndex + inputValue)
end
function ConstructionBrushSculpt:onAxisSecondary(inputValue)
  self:setBrushStrength(self.cursorStrengthIndex + inputValue)
end
function ConstructionBrushSculpt:getButtonPrimaryText()
  if self.mode == ConstructionBrushSculpt.MODE.SHIFT then
    return "$l10n_input_CONSTRUCTION_SHIFT_UP"
  end
  if self.mode == ConstructionBrushSculpt.MODE.LEVEL then
    return "$l10n_input_CONSTRUCTION_LEVEL"
  end
  if self.mode == ConstructionBrushSculpt.MODE.SOFTEN then
    return "$l10n_input_CONSTRUCTION_SOFTEN"
  end
  if self.mode == ConstructionBrushSculpt.MODE.SLOPE then
    return "$l10n_input_CONSTRUCTION_SLOPE"
  end
  return nil
end
function ConstructionBrushSculpt:getButtonSecondaryText()
  if self.mode == ConstructionBrushSculpt.MODE.SHIFT then
    return "$l10n_input_CONSTRUCTION_SHIFT_DOWN"
  end
  if self.mode == ConstructionBrushSculpt.MODE.LEVEL then
    return nil
  end
  if self.mode == ConstructionBrushSculpt.MODE.SOFTEN then
    return nil
  end
  if self.mode == ConstructionBrushSculpt.MODE.SLOPE then
    return "$l10n_input_CONSTRUCTION_SLOPE_START"
  end
  return nil
end
function ConstructionBrushSculpt.getAxisPrimaryText(v0)
  return "$l10n_input_CONSTRUCTION_BRUSH_SIZE"
end
function ConstructionBrushSculpt.getAxisSecondaryText(v0)
  return "$l10n_input_CONSTRUCTION_BRUSH_STRENGTH"
end
function ConstructionBrushSculpt.getButtonTertiaryText(v0)
  return "$l10n_input_CONSTRUCTION_BRUSH_SHAPE"
end
