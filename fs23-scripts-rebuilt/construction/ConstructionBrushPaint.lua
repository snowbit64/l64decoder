-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionBrushPaint = {}
local ConstructionBrushPaint_mt = Class(ConstructionBrushPaint, ConstructionBrush)
ConstructionBrushPaint.CURSOR_SIZES = {0.5, 1, 2, 4, 8, 16}
function ConstructionBrushPaint.new(subclass_mt, cursor)
  local v3 = v3:superClass()
  if not subclass_mt then
  end
  local v2 = v2(v3, cursor)
  v2.supportsPrimaryButton = true
  v2.supportsPrimaryDragging = true
  v2.requiredPermission = Farm.PERMISSION.LANDSCAPING
  v2.supportsPrimaryAxis = true
  v2.primaryAxisIsContinuous = false
  v2.supportsTertiaryButton = true
  v2.maxBrushRadius = ConstructionBrushPaint.CURSOR_SIZES[#ConstructionBrushPaint.CURSOR_SIZES] / 2
  return v2
end
function ConstructionBrushPaint.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function ConstructionBrushPaint:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  self.brushShape = Landscaping.BRUSH_SHAPE.SQUARE
  v1:setRotationEnabled(false)
  v1:setShape(GuiTopDownCursor.SHAPES.SQUARE)
  v1:setColorMode(GuiTopDownCursor.SHAPES_COLORS.PAINTING)
  v1:setTerrainOnly(true)
  self:setBrushSize(1)
  v1:subscribe(LandscapingSculptEvent, self.onSculptingFinished, self)
end
function ConstructionBrushPaint:deactivate()
  v1:setTerrainOnly(false)
  v1:unsubscribeAll(self)
  local v2 = v2:superClass()
  v2.deactivate(self)
end
function ConstructionBrushPaint:copyState(from)
  self:setBrushSize(from.cursorSizeIndex)
  self.brushShape = from.brushShape
  if self.brushShape == Landscaping.BRUSH_SHAPE.CIRCLE then
    v2:setShape(GuiTopDownCursor.SHAPES.CIRCLE)
    return
  end
  v2:setShape(GuiTopDownCursor.SHAPES.SQUARE)
end
function ConstructionBrushPaint:setGroundType(groundTypeName)
  if not self.isActive then
    local v2 = v2:getTerrainLayerByType(groundTypeName)
    self.terrainLayer = v2
  end
end
function ConstructionBrushPaint:setParameters(groundTypeName)
  self:setGroundType(groundTypeName)
end
function ConstructionBrushPaint:setBrushSize(index)
  local v2 = MathUtil.clamp(index, 1, #ConstructionBrushPaint.CURSOR_SIZES)
  self.cursorSizeIndex = v2
  self.brushRadius = ConstructionBrushPaint.CURSOR_SIZES[self.cursorSizeIndex] / 2
  v3:setShapeSize(ConstructionBrushPaint.CURSOR_SIZES[self.cursorSizeIndex])
end
function ConstructionBrushPaint:toggleBrushShape()
  if self.brushShape == Landscaping.BRUSH_SHAPE.CIRCLE then
    self.brushShape = Landscaping.BRUSH_SHAPE.SQUARE
    v1:setShape(GuiTopDownCursor.SHAPES.SQUARE)
    return
  end
  self.brushShape = Landscaping.BRUSH_SHAPE.CIRCLE
  v1:setShape(GuiTopDownCursor.SHAPES.CIRCLE)
end
function ConstructionBrushPaint:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2, v3, v4 = v2:getHitTerrainPosition()
  if v2 == nil then
    return
  end
  local v5 = self:verifyAccess(v2, v3, v4)
  if v5 ~= nil then
    local v8 = v8:getText(ConstructionBrush.ERROR_MESSAGES[v5])
    v6:setErrorMessage(...)
    return
  end
  local v6 = v6:getMoney()
  if v6 < Landscaping.PAINT_BASE_COST_PER_M2 * 5 then
    v8 = v8:getText("ui_construction_notEnoughMoney")
    v6:setErrorMessage(...)
  end
end
function ConstructionBrushPaint.onSculptingFinished(v0, v1, v2, v3)
  if v2 ~= TerrainDeformation.STATE_SUCCESS then
  end
end
function ConstructionBrushPaint:onButtonPrimary(isDown, isDrag, isUp)
  self:setActiveSound(ConstructionSound.ID.NONE)
  if isUp then
    self.lastX = nil
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
  self:setActiveSound(ConstructionSound.ID.PAINT, 1 - self.brushRadius / self.maxBrushRadius)
  if self.lastX ~= nil then
    local v10 = math.sqrt((v4 - self.lastX) * (v4 - self.lastX) + (v6 - self.lastZ) * (v6 - self.lastZ))
    if v10 < 0.25 then
      return
    end
  end
  self.lastX = v4
  self.lastZ = v6
  local v8 = LandscapingSculptEvent.new(false, Landscaping.OPERATION.PAINT, v4, v5, v6, nil, nil, nil, nil, nil, nil, self.brushRadius, 1, self.brushShape, Landscaping.TERRAIN_UNIT, self.terrainLayer)
  local v9 = v9:getServerConnection()
  v9:sendEvent(v8)
end
function ConstructionBrushPaint:onAxisPrimary(inputValue)
  self:setBrushSize(self.cursorSizeIndex + inputValue)
end
function ConstructionBrushPaint:onButtonTertiary()
  self:toggleBrushShape()
end
function ConstructionBrushPaint.getButtonPrimaryText(v0)
  return "$l10n_input_CONSTRUCTION_PAINT"
end
function ConstructionBrushPaint.getAxisPrimaryText(v0)
  return "$l10n_input_CONSTRUCTION_BRUSH_SIZE"
end
function ConstructionBrushPaint.getButtonTertiaryText(v0)
  return "$l10n_input_CONSTRUCTION_BRUSH_SHAPE"
end
