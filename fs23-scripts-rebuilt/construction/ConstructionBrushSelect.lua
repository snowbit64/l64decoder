-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionBrushSelect = {}
local ConstructionBrushSelect_mt = Class(ConstructionBrushSelect, ConstructionBrush)
ConstructionBrushSelect.OVERLAY_COLOR = {0.2, 0.4, 1}
function ConstructionBrushSelect.new(subclass_mt, cursor)
  local v3 = v3:superClass()
  if not subclass_mt then
  end
  local v2 = v2(v3, cursor)
  v2.isSelector = true
  v2.supportsFourthButton = true
  return v2
end
function ConstructionBrushSelect.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function ConstructionBrushSelect:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  v1:setRotationEnabled(false)
  v1:setShape(GuiTopDownCursor.SHAPES.NONE)
  v1:setSelectionMode(true)
  v1:subscribe(SellPlaceableEvent, self.onPlaceableDestroyed, self)
end
function ConstructionBrushSelect:deactivate()
  if self.lastPlaceable ~= nil then
    if self.lastPlaceable.rootNode ~= nil then
      local v1 = entityExists(self.lastPlaceable.rootNode)
      if v1 then
        v1:setOverlayColor(0.2, 0.4, 1, 0)
      end
    end
    self.lastPlaceable = nil
    self:setInputTextDirty()
  end
  self.pauseUpdates = false
  v1:setSelectionMode(false)
  v1:unsubscribeAll(self)
  local v2 = v2:superClass()
  v2.deactivate(self)
end
function ConstructionBrushSelect:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.lastPlaceable ~= nil and self.lastPlaceable.isDeleted then
    self.lastPlaceable = nil
    self.pauseUpdates = false
    self:setInputTextDirty()
  end
  if not self.pauseUpdates then
    self:visualizeMouseOver()
  end
end
function ConstructionBrushSelect:visualizeMouseOver()
  local v1 = v1:getHitPlaceable()
  if v1 ~= self.lastPlaceable then
    if self.lastPlaceable ~= nil then
      if self.lastPlaceable.rootNode ~= nil then
        v2:setOverlayColor(1, 1, 1, 0)
      end
      self.lastPlaceable = nil
      self:setInputTextDirty()
    end
    if v1 ~= nil then
      local v2 = v1:getDestructionMethod()
      if v2 ~= Placeable.DESTRUCTION.PER_NODE then
        v1:setOverlayColor(ConstructionBrushSelect.OVERLAY_COLOR[1], ConstructionBrushSelect.OVERLAY_COLOR[2], ConstructionBrushSelect.OVERLAY_COLOR[3], 0.8)
        self.lastPlaceable = v1
        self:setInputTextDirty()
      end
    end
  end
end
function ConstructionBrushSelect:onButtonFourth()
  if self.lastPlaceable ~= nil then
    -- if not v0.lastPlaceable.isDeleted then goto L19 end
  end
  self.lastPlaceable = nil
  self.pauseUpdates = false
  self:setInputTextDirty()
  return
  self.pauseUpdates = true
  PlaceableInfoDialog.show(function(self)
    if self then
      u0.lastPlaceable = nil
      v1:setInputTextDirty()
    end
    u0.pauseUpdates = false
  end, self.lastPlaceable)
end
function ConstructionBrushSelect:onPlaceableDestroyed(state, sellPrice)
  if self.lastPlaceable ~= nil then
    self.lastPlaceable = nil
    self.pauseUpdates = false
    v3:onPlaceableSellEvent(state, sellPrice)
    self:setInputTextDirty()
  end
end
function ConstructionBrushSelect:getButtonFourthText()
  if self.lastPlaceable ~= nil then
    return "$l10n_button_select"
  end
end
