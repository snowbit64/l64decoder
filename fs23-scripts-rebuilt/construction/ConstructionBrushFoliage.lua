-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionBrushFoliage = {}
local ConstructionBrushFoliage_mt = Class(ConstructionBrushFoliage, ConstructionBrush)
function ConstructionBrushFoliage.new(subclass_mt, cursor)
  local v3 = v3:superClass()
  if not subclass_mt then
  end
  local v2 = v2(v3, cursor)
  v2.supportsPrimaryButton = true
  v2.supportsPrimaryDragging = true
  v2.supportsSecondaryButton = true
  v2.supportsSecondaryDragging = true
  v2.requiredPermission = Farm.PERMISSION.LANDSCAPING
  v2.supportsPrimaryAxis = true
  v2.primaryAxisIsContinuous = false
  v2.supportsTertiaryButton = true
  v2.maxBrushRadius = ConstructionBrush.CURSOR_SIZES[#ConstructionBrush.CURSOR_SIZES] / 2
  return v2
end
function ConstructionBrushFoliage.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function ConstructionBrushFoliage:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  self.brushShape = Landscaping.BRUSH_SHAPE.SQUARE
  v1:setRotationEnabled(false)
  v1:setShape(GuiTopDownCursor.SHAPES.SQUARE)
  v1:setColorMode(GuiTopDownCursor.SHAPES_COLORS.SUCCESS)
  v1:setTerrainOnly(true)
  self:setBrushSize(1)
  v1:subscribe(LandscapingSculptEvent, self.onSculptingFinished, self)
end
function ConstructionBrushFoliage:deactivate()
  v1:setTerrainOnly(false)
  v1:unsubscribeAll(self)
  local v2 = v2:superClass()
  v2.deactivate(self)
end
function ConstructionBrushFoliage:copyState(from)
  self:setBrushSize(from.cursorSizeIndex)
  self.brushShape = from.brushShape
  if self.brushShape == Landscaping.BRUSH_SHAPE.CIRCLE then
    v2:setShape(GuiTopDownCursor.SHAPES.CIRCLE)
    return
  end
  v2:setShape(GuiTopDownCursor.SHAPES.SQUARE)
end
function ConstructionBrushFoliage:setFoliageType(foliageName, foliageState)
  if not self.isActive then
    local v3 = v3:getFoliagePaintByName(foliageName)
    self.foliagePaint = v3
    self.foliageState = foliageState
  end
end
function ConstructionBrushFoliage:setParameters(foliageName, foliageState)
  local v6 = tonumber(foliageState)
  self:setFoliageType(...)
end
function ConstructionBrushFoliage:setBrushSize(index)
  local v2 = MathUtil.clamp(index, 1, #ConstructionBrush.CURSOR_SIZES)
  self.cursorSizeIndex = v2
  self.brushRadius = ConstructionBrush.CURSOR_SIZES[self.cursorSizeIndex] / 2
  v3:setShapeSize(ConstructionBrush.CURSOR_SIZES[self.cursorSizeIndex])
end
function ConstructionBrushFoliage:toggleBrushShape()
  if self.brushShape == Landscaping.BRUSH_SHAPE.CIRCLE then
    self.brushShape = Landscaping.BRUSH_SHAPE.SQUARE
    v1:setShape(GuiTopDownCursor.SHAPES.SQUARE)
    return
  end
  self.brushShape = Landscaping.BRUSH_SHAPE.CIRCLE
  v1:setShape(GuiTopDownCursor.SHAPES.CIRCLE)
end
function ConstructionBrushFoliage:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.foliagePaint == nil then
    local v4 = v4:getText("ui_construction_plantNotSupported")
    v2:setErrorMessage(...)
    return
  end
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
  local v7 = self:getPrice()
  if v6 < v7 then
    v8 = v8:getText("ui_construction_notEnoughMoney")
    v6:setErrorMessage(...)
    return
  end
end
function ConstructionBrushFoliage.getPrice(v0)
  return Landscaping.FOLIAGE_BASE_COST_PER_M2 * 5
end
function ConstructionBrushFoliage.onSculptingFinished(v0, v1, v2, v3)
  if v2 ~= TerrainDeformation.STATE_SUCCESS then
  end
end
function ConstructionBrushFoliage:performBrush(isDown, isDrag, isUp, direction)
  self:setActiveSound(ConstructionSound.ID.NONE)
  if isUp then
    self.lastX = nil
    return
  end
  if self.foliagePaint == nil then
    return
  end
  local v5, v6, v7 = v5:getHitTerrainPosition()
  if v5 == nil then
    return
  end
  local v9 = self:verifyAccess(v5, v6, v7)
  if v9 ~= nil then
    return
  end
  self:setActiveSound(ConstructionSound.ID.FOLIAGE, 1 - self.brushRadius / self.maxBrushRadius)
  if self.lastX ~= nil then
    local v12 = math.sqrt((v5 - self.lastX) * (v5 - self.lastX) + (v7 - self.lastZ) * (v7 - self.lastZ))
    if v12 < 0.25 then
      return
    end
  end
  self.lastX = v5
  self.lastZ = v7
  if 0 < direction then
    local v11 = LandscapingSculptEvent.new(false, Landscaping.OPERATION.FOLIAGE, v5, v6, v7, nil, nil, nil, nil, nil, nil, v8, 1, self.brushShape, Landscaping.TERRAIN_UNIT, nil, self.foliagePaint.id, self.foliageState)
  else
    v11 = LandscapingSculptEvent.new(false, Landscaping.OPERATION.PAINT, v5, v6, v7, nil, nil, nil, nil, nil, nil, v8, 1, self.brushShape, Landscaping.TERRAIN_UNIT, TerrainDeformation.NO_TERRAIN_BRUSH)
  end
  v11 = v11:getServerConnection()
  v11:sendEvent(v10)
end
function ConstructionBrushFoliage:onButtonPrimary(isDown, isDrag, isUp)
  self:performBrush(isDown, isDrag, isUp, 1)
end
function ConstructionBrushFoliage:onButtonSecondary(isDown, isDrag, isUp)
  self:performBrush(isDown, isDrag, isUp, -1)
end
function ConstructionBrushFoliage:onAxisPrimary(inputValue)
  self:setBrushSize(self.cursorSizeIndex + inputValue)
end
function ConstructionBrushFoliage:onButtonTertiary()
  self:toggleBrushShape()
end
function ConstructionBrushFoliage.getButtonPrimaryText(v0)
  return "$l10n_input_CONSTRUCTION_PLACE"
end
function ConstructionBrushFoliage.getButtonSecondaryText(v0)
  return "$l10n_input_CONSTRUCTION_REMOVE"
end
function ConstructionBrushFoliage.getAxisPrimaryText(v0)
  return "$l10n_input_CONSTRUCTION_BRUSH_SIZE"
end
function ConstructionBrushFoliage.getButtonTertiaryText(v0)
  return "$l10n_input_CONSTRUCTION_BRUSH_SHAPE"
end
