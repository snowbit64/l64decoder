-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionBrushDestruct = {}
local ConstructionBrushDestruct_mt = Class(ConstructionBrushDestruct, ConstructionBrush)
ConstructionBrushDestruct.OVERLAY_COLOR = {1, 0.1, 0.1}
ConstructionBrushDestruct.SELL_UNDO_TIMEOUT = 900000
function ConstructionBrushDestruct.new(subclass_mt, cursor)
  local v3 = v3:superClass()
  if not subclass_mt then
  end
  local v2 = v2(v3, cursor)
  v2.supportsPrimaryButton = true
  v2.supportsPrimaryDragging = true
  v2.requiredPermission = Farm.PERMISSION.SELL_PLACEABLE
  return v2
end
function ConstructionBrushDestruct.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function ConstructionBrushDestruct:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  v1:setRotationEnabled(false)
  v1:setShape(GuiTopDownCursor.SHAPES.NONE)
  v1:setSelectionMode(true)
  self.coloredNodes = {}
end
function ConstructionBrushDestruct:deactivate()
  v1:setSelectionMode(false)
  self:resetPlaceableSelection()
  v1:unsubscribeAll(self)
  local v2 = v2:superClass()
  v2.deactivate(self)
end
function ConstructionBrushDestruct:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self:visualizeMouseOver()
  local v2 = self:hasPlayerPermission()
  if not v2 then
    local v4 = v4:getText("shop_messageNoPermissionGeneral")
    v2:setErrorMessage(...)
  end
end
function ConstructionBrushDestruct:resetColoredNodes()
  -- TODO: structure LOP_FORNPREP (pc 5, target 29)
  local v5 = entityExists(self.coloredNodes[#self.coloredNodes])
  if v5 then
    setShaderParameter(self.coloredNodes[#self.coloredNodes], "placeableColorScale", 1, 1, 1, 0, false)
  end
  self.coloredNodes[v3] = nil
  -- TODO: structure LOP_FORNLOOP (pc 28, target 6)
end
function ConstructionBrushDestruct:visualizeMouseOver()
  local v1 = v1:getHitPlaceable()
  if v1 == self.lastPlaceable then
    -- if not v0.perNodeMode then goto L115 end
  end
  self:resetPlaceableSelection()
  if v1 ~= nil and g_currentMission.player.farmId == v1.ownerFarmId then
    self.lastPlaceable = v1
    v2:subscribe(SellPlaceableEvent, self.onPlaceableDestroyed, self)
    local v7 = v1:getDestructionMethod()
    if v7 == Placeable.DESTRUCTION.PER_NODE then
      self:resetColoredNodes()
      local v9 = v9:getHitNode()
      v7 = v1:previewNodeDestructionNodes(...)
      if v7 ~= nil then
        for v11, v12 in ipairs(v7) do
          local v13 = getHasClassId(v12, ClassIds.SHAPE)
          if not v13 then
            continue
          end
          v13 = getHasShaderParameter(v12, "placeableColorScale")
          if not v13 then
            continue
          end
          setShaderParameter(v12, "placeableColorScale", v3, v4, v5, 0.8, false)
          table.insert(self.coloredNodes, v12)
        end
      end
      self.perNodeMode = true
      return
    end
    v1:setOverlayColor(v3, v4, v5, 0.8)
    self.perNodeMode = false
  end
end
function ConstructionBrushDestruct:onButtonPrimary(isDown, isDrag, isUp)
  if isUp then
    self.lastDragPlaceable = nil
    return
  end
  local v4 = v4:getHitPlaceable()
  if v4 ~= nil and g_currentMission.player.farmId == v4.ownerFarmId then
    if self.lastDragPlaceable ~= nil then
      -- if v4 ~= v0.lastDragPlaceable then goto L133 end
    end
    local v5 = self:hasPlayerPermission()
    if not v5 then
      return
    end
    v5 = v4:getDestructionMethod()
    if v5 == Placeable.DESTRUCTION.PER_NODE then
      if isDown then
        self.lastDragPlaceable = v4
      end
      local v7 = v7:getHitNode()
      v5 = v4:performNodeDestruction(...)
      -- if not v5 then goto L133 end
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L133
      v4:playDestroySound(true)
      return
    end
    if isDown then
      local v5, v6 = v4:canBeSold()
      local v7, v8 = v4:getSellPrice()
      if v6 ~= nil then
        if v5 then
          local v15 = v15:getText("button_ok")
          local v16 = v16:getText("button_cancel")
          YesNoDialog.show(...)
          return
        end
        local v14 = v14:getText("button_back")
        InfoDialog.show(...)
        return
      end
      local v11 = v11:getText("ui_constructionSellConfirmation")
      local v12 = v4:getName()
      local v13 = v13:formatMoney(v7, 0, true, true)
      local v10 = string.format(...)
      YesNoDialog.show(v9, nil, v10)
    end
  end
end
function ConstructionBrushDestruct:resetPlaceableSelection()
  self:resetColoredNodes()
  if self.lastPlaceable ~= nil then
    if self.lastPlaceable.rootNode ~= nil and not self.perNodeMode then
      v1:setOverlayColor(1, 1, 1, 0)
    end
    self.lastPlaceable = nil
    v1:unsubscribeAll(self)
  end
end
function ConstructionBrushDestruct:onPlaceableDestroyed(state, sellPrice)
  if self.lastPlaceable ~= nil then
    v3:onPlaceableSellEvent(state, sellPrice)
    self:resetPlaceableSelection()
  end
end
function ConstructionBrushDestruct.getButtonPrimaryText(v0)
  return "$l10n_input_CONSTRUCTION_REMOVE"
end
