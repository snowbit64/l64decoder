-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionBrushFence = {}
local ConstructionBrushFence_mt = Class(ConstructionBrushFence, ConstructionBrush)
ConstructionBrushFence.ERROR = {MININUM_LENGTH = 100, MINIMUM_ANGLE = 101, MAXIMUM_ANGLE = 102, COLLISION = 103, NOT_ENOUGH_MONEY = 104, CANNOT_BE_PLACED_HERE = 105}
{}[ConstructionBrushFence.ERROR.MININUM_LENGTH] = "ui_construction_distanceTooShort"
{}[ConstructionBrushFence.ERROR.MINIMUM_ANGLE] = "ui_construction_cornerAngleTooLarge"
{}[ConstructionBrushFence.ERROR.MAXIMUM_ANGLE] = "ui_construction_terrainTooSteep"
{}[ConstructionBrushFence.ERROR.COLLISION] = "ui_construction_collidesWithItem"
{}[ConstructionBrushFence.ERROR.NOT_ENOUGH_MONEY] = "ui_construction_notEnoughMoney"
{}[ConstructionBrushFence.ERROR.CANNOT_BE_PLACED_HERE] = "ui_construction_cannotBePlacedHere"
ConstructionBrushFence.ERROR_MESSAGES = {}
ConstructionBrushFence.MINIMUM_LENGTH = 0.5
ConstructionBrushFence.MINIMUM_ANGLE = 0.5235987755982988
ConstructionBrushFence.SNAP_DISTANCE = 0.4
ConstructionBrushFence.LAST_SNAPPING_STATE = false
function ConstructionBrushFence.new(subclass_mt, cursor)
  local v3 = v3:superClass()
  if not subclass_mt then
  end
  local v2 = v2(v3, cursor)
  v2.supportsPrimaryButton = true
  v2.supportsSecondaryButton = true
  v2.supportsTertiaryButton = true
  v2.needsOverlayReset = {}
  v2.requiredPermission = Farm.PERMISSION.BUY_PLACEABLE
  v2.parallelSnappingEnabled = false
  v2.doFindPlaceable = false
  v2.supportsSnapping = true
  v2.snappingActive = ConstructionBrushFence.LAST_SNAPPING_STATE
  v2.snappingAngleDeg = 7.5
  v2.snappingSize = 0.25
  return v2
end
function ConstructionBrushFence:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  self.doFindPlaceable = false
end
function ConstructionBrushFence:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  v1:setRotationEnabled(false)
  v1:setShape(GuiTopDownCursor.SHAPES.NONE)
  v1:subscribe(PlaceableFenceAddSegmentEvent, self.onFenceSegmentCreated, self)
  self:acquirePlaceable()
end
function ConstructionBrushFence:deactivate()
  self:releasePlaceable()
  self.fence = nil
  self.doFindPlaceable = false
  v1:setColorMode(GuiTopDownCursor.SHAPES_COLORS.SELECT, nil)
  self:resetErrorOverlays()
  v1:unsubscribeAll(self)
  local v2 = v2:superClass()
  v2.deactivate(self)
end
function ConstructionBrushFence:setFilename(xmlFilename)
  if not self.isActive then
    self.xmlFilename = xmlFilename
  end
end
function ConstructionBrushFence:setIsGate(isGate, gateIndex)
  if isGate then
    self.gateIndex = gateIndex
    return
  end
  self.gateIndex = nil
end
function ConstructionBrushFence:setParameters(filename, isGate, gateIndex)
  if isGate == "true" then
    local v4 = tonumber(gateIndex)
    self:setIsGate(true, v4)
  else
    self:setIsGate(false)
  end
  self:setFilename(filename)
end
ConstructionBrush.setStoreItem = function(self, v1)
  if not self.isActive then
    self.storeItem = v1
  end
end
function ConstructionBrushFence:canCancel()
  if self.fence ~= nil then
    local v2 = v2:getPreviewSegment()
    if v2 == nil then
    end
  end
  return v1
end
function ConstructionBrushFence:acquirePlaceable()
  if self.xmlFilename == nil then
    Logging.warning("Fence brush has no placeable set")
    return
  end
  local v1 = self:findPlaceable()
  self.fence = v1
  self:setInputTextDirty()
  if self.fence == nil then
    v1:subscribe(BuyPlaceableEvent, self.onPlaceableCreated, self)
    v1 = v1:getServerConnection()
    local v12 = v12:getFarmId()
    local v3 = BuyPlaceableEvent.new(self.xmlFilename, 100, PlacementUtil.NETHER_HEIGHT - 1, 0, 0, 0, 0, 0, v12, false, 0, true)
    v1:sendEvent(...)
    return
  end
  v1 = v1:getHasParallelSnapping()
  if v1 then
    self.parallelSnappingEnabled = true
  end
end
function ConstructionBrushFence:findPlaceable()
  local v1 = v1:getFarmId()
  for v5, v6 in pairs(g_currentMission.placeableSystem.placeables) do
    if not (v6.configFileName == self.xmlFilename) then
      continue
    end
    if not (v6.ownerFarmId == v1) then
      continue
    end
    if not not v6.markedForDeletion then
      continue
    end
    return v6
  end
  return nil
end
function ConstructionBrushFence:onPlaceableCreated()
  v1:unsubscribe(BuyPlaceableEvent, self)
  self.doFindPlaceable = true
end
function ConstructionBrushFence:releasePlaceable()
  if self.fence ~= nil then
    local v1 = v1:getNumSequments()
    if v1 == 0 then
      g_shopController.ignoreSoldPlaceableEvent = true
      v1:subscribe(SellPlaceableEvent, self.onPlaceableDestroyed, self)
      v1 = v1:getServerConnection()
      local v3 = SellPlaceableEvent.new(self.fence, true)
      v1:sendEvent(...)
    else
      v1 = v1:getPreviewSegment()
      if v1 ~= nil then
        v1:setPreviewSegment(nil)
      end
    end
    if self.previewPole ~= nil then
      delete(self.previewPole)
      self.previewPole = nil
    end
    self.fence = nil
    self:setInputTextDirty()
  end
end
function ConstructionBrushFence.onPlaceableDestroyed(v0)
  v1:unsubscribe(SellPlaceableEvent, v0)
  g_shopController.ignoreSoldPlaceableEvent = false
end
function ConstructionBrushFence:getSnappedCursorPosition()
  local v1, v2, v3 = v1:getHitTerrainPosition()
  if v1 == nil then
    local v5 = v5:getHitNode()
    if v5 == nil then
      return nil
    end
    local v6, v7, v8, v9 = v6:getPolePosition(v5)
    if v6 == nil then
      return nil
    end
    local v10 = v10:getAllowExtendingOnly()
    if v10 then
      v10 = v4(v5)
      if v10 then
        return v6, v7, v8, true, v9
      end
      return v1, v2, v3, false
    end
    return v6, v7, v8, true, v9
  end
  if self.parallelSnappingEnabled then
    v5 = v5:getSnapCheckDistance()
    v6, v7, v8, v9, v10 = v6:getPoleNear(v1, v2, v3, v5)
    local v11 = v11:getPreviewSegment()
    v12:setColorMode(GuiTopDownCursor.SHAPES_COLORS.SELECT, nil)
    if v6 ~= nil and v11 == nil then
      if self.previewPoleCursor then
        v12:setColorMode(GuiTopDownCursor.SHAPES_COLORS.SUCCESS, nil)
      end
      local v12, v13 = MathUtil.vector2Normalize(v10.x2 - v10.x1, v10.z2 - v10.z1)
      local v14 = v14:getSnapDistance()
      local v19 = MathUtil.vector2Length(-v13 * v14 + v6 - v1, v12 * v14 + v8 - v3)
      local v20 = MathUtil.vector2Length(v13 * v14 + v6 - v1, -v12 * v14 + v8 - v3)
      local v21 = MathUtil.vector2Length(v6 - v1, v8 - v3)
      if v19 < v20 then
      else
      end
      self.parallelSnappingSegment = v10
      local v24 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v22, 0, v23)
      local v25 = v25:getMaxCornerAngle()
      if v25 == 0 and v21 < v14 * 0.4 then
        return v6, v7, v8, true, v10
      end
      return v22, v24, v23, true
    end
    if self.parallelSnappingSegment ~= nil and v11 ~= nil then
      v13, v14 = MathUtil.vector2Normalize(self.parallelSnappingSegment.x2 - self.parallelSnappingSegment.x1, self.parallelSnappingSegment.z2 - self.parallelSnappingSegment.z1)
      local v15, v16 = MathUtil.projectOnLine(v1, v3, v11.x1, v11.z1, v13, v14)
      local v17 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v15, 0, v16)
      return v15, v17, v16, true
    end
    self.parallelSnappingSegment = nil
  end
  v7 = v7:getPanelLength()
  v7 = v7:getSnapCheckDistance()
  v5 = math.max(...)
  v6, v7, v8, v9, v10 = v6:getPoleNear(v1, v2, v3, v5)
  if v6 ~= nil then
    v11 = v11:getMaxCornerAngle()
    if 0 < v11 then
      v11 = v11:getAllowExtendingOnly()
      if v11 then
        v11 = v4(v9)
        if v11 then
          return v6, v7, v8, true, v10
        end
        return v1, v2, v3, false
      end
      return v6, v7, v8, true, v10
    end
  end
  if self.snappingActive then
    v12 = math.floor(v1 * 1 / self.snappingSize)
    v12 = math.floor(v3 * 1 / self.snappingSize)
  end
  return v1, v2, v3, false
end
function ConstructionBrushFence:getLimitedSnappedCursorPosition()
  local v1, v2, v3, v4, v5 = self:getSnappedCursorPosition()
  local v6 = v6:getPreviewSegment()
  if v1 ~= nil and v6 ~= nil then
    local v9 = MathUtil.vector2Length(v1 - v6.x1, v3 - v6.z1)
    if v9 == 0 then
    else
      local v11, v12 = MathUtil.vector2Normalize(v1 - v6.x1, v3 - v6.z1)
    end
    if self.gateIndex ~= nil then
      v11 = v11:getGate(self.gateIndex)
    else
      v11 = v11:getIsPanelLengthFixed()
      if v11 then
        v11 = v11:getPanelLength()
        v12 = math.floor(v9 / v11)
      end
    end
    v12 = v12:getSnapAngle()
    if self.attachmentPointSegment ~= nil and v12 ~= nil then
      local v15, v16 = MathUtil.vector2Normalize(self.attachmentPointSegment.x2 - self.attachmentPointSegment.x1, self.attachmentPointSegment.z2 - self.attachmentPointSegment.z1)
      v15 = MathUtil.getYRotationFromDirection(v15, v16)
      v16 = MathUtil.getYRotationFromDirection(v7, v8)
      local v20 = math.deg(v15 - v16)
      local v19 = MathUtil.snapValue(v20, v12)
      local v18 = math.rad(...)
      v19, v20 = MathUtil.vector2Rotate(v15, v16, v18)
    end
    if v10 then
      local v13 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v6.x1 + v7 * v9, 0, v6.z1 + v8 * v9)
    end
  end
  return v1, v2, v3, v4, v5
end
function ConstructionBrushFence:getPreviewAngle()
  local v1 = v1:getPreviewSegment()
  if v1 == nil then
    return nil
  end
  v1 = v1:getPreviewSegment()
  if self.attachmentPointSegment == nil then
    return nil
  end
  if self.attachmentPointSegmentReversed then
    local v6 = MathUtil.getYRotationFromDirection(v2.x2 - v2.x1, v2.z2 - v2.z1)
  else
    v6 = MathUtil.getYRotationFromDirection(v2.x1 - v2.x2, v2.z1 - v2.z2)
  end
  v6 = MathUtil.getYRotationFromDirection(v1.x1 - v1.x2, v1.z1 - v1.z2)
  local v8 = MathUtil.getAngleDifference(v3, v6)
  v8 = math.abs(v8 - math.pi)
  if math.pi < v8 then
  end
  return math.pi - v7
end
function ConstructionBrushFence:getPrice(length)
  if self.gateIndex ~= nil then
    return self.storeItem.price
  end
  if length == nil then
    local v5 = v5:getPreviewSegment()
    local v3 = v3:getSegmentLength(...)
  end
  return length * self.storeItem.price
end
function ConstructionBrushFence:verifyPreview()
  local v1 = v1:getPreviewSegment()
  local v2 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v1.x2, 0, v1.z2)
  local v3 = self:verifyAccess(v1.x2, v2, v1.z2)
  if v3 ~= nil then
    return v3
  end
  local v9 = v9:getFarmId()
  local v4, v5 = v4:getCanBePlacedAt(...)
  if not v4 then
    return ConstructionBrushFence.ERROR.CANNOT_BE_PLACED_HERE, v5
  end
  local v6 = v6:getSegmentLength(v1)
  local v8 = v8:getPanelLength()
  if v6 < v8 * ConstructionBrushFence.MINIMUM_LENGTH then
    return ConstructionBrushFence.ERROR.MININUM_LENGTH
  end
  local v7, v8, v9 = v7:getMaxVerticalAngleAndYForPreview()
  local v10 = v10:getMaxVerticalAngle()
  if v10 >= v7 then
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L105
    v10 = v10:getMaxVerticalGateAngle()
    -- if v10 >= v7 then goto L105 end
  end
  return ConstructionBrushFence.ERROR.MAXIMUM_ANGLE
  v10 = self:getPrice(v6)
  local v13 = v13:getOwnerFarmId()
  local v11 = v11:getMoney(...)
  if v11 < v10 then
    return ConstructionBrushFence.ERROR.NOT_ENOUGH_MONEY
  end
  v11 = self:getPreviewAngle()
  if self.parallelSnappingSegment == nil and v11 ~= nil then
    local v12 = v12:getMaxCornerAngle()
    if v12 < v11 then
      return ConstructionBrushFence.ERROR.MINIMUM_ANGLE
    end
  end
  local v16 = math.atan2(v1.x2 - v1.x1, v1.z2 - v1.z1)
  local v19 = v19:getBoundingCheckWidth()
  v19 = math.abs(v8 - v9)
  v19 = v19:getBoundingCheckWidth()
  local v23 = bitOR(CollisionFlag.TERRAIN, CollisionMask.TRIGGERS)
  local v22 = bitOR(v23, CollisionFlag.GROUND_TIP_BLOCKING)
  local v21 = bitNOT(...)
  v19 = bitAND(...)
  self.hitAnyObjects = false
  overlapBox(v1.x1 / 2 + v1.x2 / 2, v8 / 2 + v9 / 2, v1.z1 / 2 + v1.z2 / 2, 0, v16 + 0.5 * math.pi, 0, v6 * 0.5 + v19 * 0.5, v19 * 0.5 + 2, v19 * 0.5, "boxOverlapCallback", self, v19, true, true, true)
  if self.hitAnyObjects then
    return ConstructionBrushFence.ERROR.COLLISION
  end
  return nil
end
function ConstructionBrushFence:boxOverlapCallback(hitObjectId, x, y, z, distance)
  if hitObjectId ~= 0 and hitObjectId ~= g_currentMission.terrainRootNode then
    local v6 = v6:getNodeObject(hitObjectId)
    if v6 ~= nil and v6.setOverlayColor ~= nil then
      if v6.findRaycastInfo ~= nil then
        local v7, v8, v9, v10, v11 = v6:findRaycastInfo(hitObjectId)
        -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L163
        local v12 = v12:getPreviewSegment()
        if v6 == self.fence then
          local v13 = MathUtil.equalEpsilon(v9.poles[v11], v12.x1, 0.01)
          if v13 then
            v13 = MathUtil.equalEpsilon(v9.poles[v11 + 1], v12.z1, 0.01)
            -- if v13 then goto L123 end
          end
          v13 = MathUtil.equalEpsilon(v9.poles[v11], v12.x2, 0.01)
          if v13 then
            v13 = MathUtil.equalEpsilon(v9.poles[v11 + 1], v12.z2, 0.01)
            -- if v13 then goto L123 end
          end
          v13 = MathUtil.equalEpsilon(v9.poles[v11 + 2], v12.x1, 0.01)
          if v13 then
            v13 = MathUtil.equalEpsilon(v9.poles[v11 + 3], v12.z1, 0.01)
            -- if v13 then goto L123 end
          end
          v13 = MathUtil.equalEpsilon(v9.poles[v11 + 2], v12.x2, 0.01)
          if v13 then
            v13 = MathUtil.equalEpsilon(v9.poles[v11 + 3], v12.z2, 0.01)
            if v13 then
              return
            end
          end
        end
        local v14 = getNumOfChildren(v10)
        if 1 < v14 then
          v14 = getChildAt(v10, 1)
          function(self)
            local hitObjectId = getHasClassId(self, ClassIds.SHAPE)
            if hitObjectId then
              setShaderParameter(self, "placeableColorScale", 1, 0, 0, 1, false)
              table.insert(u0.needsOverlayReset, self)
            end
            local z = getNumOfChildren(self)
            -- TODO: structure LOP_FORNPREP (pc 33, target 42)
            local distance = getChildAt(self, 0)
            u1(...)
            -- TODO: structure LOP_FORNLOOP (pc 41, target 34)
          end(v14)
        end
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L163
        v13(v8)
      else
        v6:setOverlayColor(1, 0, 0, 1)
        table.insert(self.needsOverlayReset, v6)
      end
    end
    self.hitAnyObjects = true
  end
end
function ConstructionBrushFence:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.doFindPlaceable then
    local v2 = self:findPlaceable()
    self.fence = v2
    self:setInputTextDirty()
    if self.fence ~= nil then
      v2 = v2:getHasParallelSnapping()
      if v2 then
        self.parallelSnappingEnabled = true
      end
      self.doFindPlaceable = false
    end
  end
  if self.fence == nil then
    v2 = self:hasPlayerPermission()
    if not v2 then
      local v4 = v4:getText(ConstructionBrush.ERROR_MESSAGES[ConstructionBrush.ERROR.NO_PERMISSION])
      v2:setErrorMessage(...)
    end
    return
  end
  local v2, v3, v4, v5, v6 = self:getLimitedSnappedCursorPosition()
  local v9 = v9:getPreviewSegment()
  if v2 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L122
    if v9.x2 == v2 then
      -- if v9.z2 == v4 then goto L93 end
    end
    v9.x2 = v2
    v9.z2 = v4
    v10:setPreviewSegment(v9)
    if self.previewPole ~= nil then
      setVisibility(self.previewPole, false)
    end
    if self.previewPoleCursor then
      v10:setShape(GuiTopDownCursor.SHAPES.NONE)
    end
    self:resetErrorOverlays()
    local v10, v11 = self:verifyPreview()
  else
    if self.previewPole == nil then
      v10 = v10:getPoleShapeForPreview()
      self.previewPole = v10
      if self.previewPole == nil then
        v10 = createTransformGroup("PreviewPole")
        self.previewPole = v10
        self.previewPoleCursor = true
      else
        self.previewPoleCursor = false
      end
      v11 = getRootNode()
      link(v11, self.previewPole)
    end
    if self.previewPoleCursor then
      v10:setShape(GuiTopDownCursor.SHAPES.CIRCLE)
      v10:setShapeSize(1)
    end
    if v2 ~= nil then
      setWorldTranslation(self.previewPole, v2, v3, v4)
      v10 = self:verifyAccess(v2, v3, v4)
    end
    setVisibility(self.previewPole, self.cursor.isVisible)
  end
  if v7 ~= nil then
    if not v8 then
      if not ConstructionBrushFence.ERROR_MESSAGES[v7] then
      end
      local v12 = v12:getText(price)
    end
    v10:setErrorMessage(v12)
    return
  end
  v10 = v10:getPreviewSegment()
  if v10 ~= nil then
    local price = self:getPrice()
    v12 = v12:formatMoney(price, 0, true, true)
    v10:setMessage(...)
  end
end
function ConstructionBrushFence:resetErrorOverlays()
  -- TODO: structure LOP_FORNPREP (pc 5, target 39)
  local v5 = type(self.needsOverlayReset[#self.needsOverlayReset])
  if v5 == "number" then
    setShaderParameter(self.needsOverlayReset[#self.needsOverlayReset], "placeableColorScale", 0, 0, 0, 0, false)
  else
    self.needsOverlayReset[#self.needsOverlayReset]:setOverlayColor(0, 0, 0, 0)
  end
  self.needsOverlayReset[v3] = nil
  -- TODO: structure LOP_FORNLOOP (pc 38, target 6)
end
function ConstructionBrushFence:onButtonPrimary()
  if self.fence == nil then
    return
  end
  local v1, v2, v3, v4, v5 = self:getLimitedSnappedCursorPosition()
  if v1 == nil then
    return
  end
  local v6 = v6:getPreviewSegment()
  if v6 == nil then
    v6 = self:verifyAccess(v1, v2, v3)
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L169
    if v4 and v5 == nil then
    end
    local v7 = v7:createSegment(v9, v10, v11, v12, not v14, self.gateIndex)
    if v4 and v5 ~= nil then
      self.attachmentPointSegment = v5
      if v5 ~= nil then
        local v8 = MathUtil.equalEpsilon(v5.x1, v1, 0.01)
        if v8 then
          v8 = MathUtil.equalEpsilon(v5.z1, v3, 0.01)
        end
        self.attachmentPointSegmentReversed = v8
      end
    end
    v8:setPreviewSegment(v7)
    return
  end
  v6 = self:verifyPreview()
  if v6 == nil then
    v7 = v7:getPreviewSegment()
    v8 = self:getPrice()
    if v4 and v5 == nil then
    end
    local v9 = v9(v10, v11, v12, v13, v14, v15, not v17, v7.gateIndex, v8)
    local v10 = v10:getServerConnection()
    v10:sendEvent(v9)
    if self.fence.playPlaceSound ~= nil then
      v10:playPlaceSound()
    end
    if self.parallelSnappingEnabled then
      v10:setPreviewSegment(nil)
      self.attachmentPointSegment = nil
      self.attachmentPointSegmentReversed = nil
      self:resetErrorOverlays()
      return
    end
    v7.x1 = v1
    v7.z1 = v3
    v7.renderFirst = false
    v7.renderLast = true
    v10:setPreviewSegment(v7)
    self.parallelSnappingSegment = nil
  end
end
function ConstructionBrushFence:onFenceSegmentCreated(fence, segment)
  if self.fence == fence then
    self.attachmentPointSegment = segment
    self.attachmentPointSegmentReversed = false
  end
end
function ConstructionBrushFence:onButtonSecondary()
  if self.fence == nil then
    return
  end
  local v1 = v1:getPreviewSegment()
  if v1 ~= nil then
    v1:setPreviewSegment(nil)
    self.attachmentPointSegment = nil
    self.attachmentPointSegmentReversed = nil
    self:resetErrorOverlays()
  end
end
function ConstructionBrushFence:onButtonTertiary()
  local v1 = v1:getSupportsParallelSnapping()
  if v1 then
    v1 = v1:getMaxCornerAngle()
    if 0 < v1 then
      self.parallelSnappingEnabled = not self.parallelSnappingEnabled
      self:setInputTextDirty()
    end
  end
end
function ConstructionBrushFence:onButtonSnapping()
  self.snappingActive = not self.snappingActive
  ConstructionBrushFence.LAST_SNAPPING_STATE = self.snappingActive
  self:setInputTextDirty()
end
function ConstructionBrushFence:cancel()
  self:onButtonSecondary()
end
function ConstructionBrushFence.getButtonPrimaryText(v0)
  return "$l10n_input_CONSTRUCTION_PLACE_POLE"
end
function ConstructionBrushFence.getButtonSecondaryText(v0)
  return "$l10n_input_CONSTRUCTION_FINISH"
end
function ConstructionBrushFence:getButtonTertiaryText()
  if self.fence ~= nil then
    local v1 = v1:getSupportsParallelSnapping()
    if v1 then
      v1 = v1:getMaxCornerAngle()
      if 0 < v1 then
        local v2 = v2:getText("input_CONSTRUCTION_SNAP")
        if self.parallelSnappingEnabled then
        else
        end
        local v3 = v3:getText(v5)
        v1 = v1(...)
        return v1
      end
    end
  end
  return nil
end
function ConstructionBrushFence:getButtonSnappingText()
  local v3 = v3:getText("input_CONSTRUCTION_ACTION_SNAPPING")
  if self.snappingActive then
  else
  end
  local v4 = v4:getText(v6)
  return v1(...)
end
