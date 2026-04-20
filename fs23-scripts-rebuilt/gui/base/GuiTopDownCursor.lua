-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GuiTopDownCursor = {}
local GuiTopDownCursor_mt = Class(GuiTopDownCursor)
GuiTopDownCursor.ROTATION_SPEED = 0.002
GuiTopDownCursor.SHAPES_FILENAME = "dataS/menu/construction/constructionCursorSimple.i3d"
GuiTopDownCursor.RAYCAST_DISTANCE = 150
GuiTopDownCursor.SNAP_STATE_INACTIVE = 0
GuiTopDownCursor.SNAP_STATE_POSITIVE = 1
GuiTopDownCursor.SNAP_STATE_NEGATIVE = 2
GuiTopDownCursor.SNAP_STATE_USED = 3
GuiTopDownCursor.SHAPES = {NONE = 0, CIRCLE = 1, SQUARE = 2}
GuiTopDownCursor.SHAPES_COLORS = {SUCCESS = 0, ERROR = 1, SCULPTING = 2, SELECT = 3, PAINTING = 4}
function GuiTopDownCursor.new(v0)
  if not v0 then
  end
  local v1 = v1(v2, v3)
  v1.isActive = false
  v1.ray = {}
  v1.cursorShapeHeights = {0, 0, 0, 0, 0, 0, 0, 0}
  v1.isVisible = true
  v1.rotationY = 0
  v1.targetRotation = 0
  v1.inputRotate = 0
  v1.lastActionFrame = 0
  v1.isCatchingCursor = false
  v1.rotationEnabled = false
  v1.lightEnabled = false
  v1.selectionMode = false
  v1.rayCollisionMask = CollisionMask.ALL - CollisionMask.TRIGGERS - CollisionFlag.FILLABLE - CollisionFlag.GROUND_TIP_BLOCKING
  v1:setTerrainOnly(false)
  v1.shapesLoaded = false
  v1.snapAngle = nil
  v1.snapUpdateState = GuiTopDownCursor.SNAP_STATE_INACTIVE
  return v1
end
function GuiTopDownCursor:delete()
  if self.isActive then
    self:deactivate()
  end
  if self.cursorOverlay ~= nil then
    v1:delete()
    self.cursorOverlay = nil
  end
  if self.rootNode ~= nil then
    delete(self.rootNode)
  end
end
function GuiTopDownCursor:loadShapes()
  local v1 = v1:loadI3DFile(GuiTopDownCursor.SHAPES_FILENAME, false, false)
  self.rootNode = v1
  local v2 = getRootNode()
  link(v2, self.rootNode)
  v1 = getChildAt(self.rootNode, 0)
  self.shapeNode = v1
  setVisibility(self.rootNode, false)
  setWorldRotation(self.rootNode, 0, self.rotationY, 0)
  self:setShape(GuiTopDownCursor.SHAPES.NONE)
  self:setShapeSize(1)
  self:setColorMode(GuiTopDownCursor.SHAPES_COLORS.SELECT)
  self:setCursorTerrainOffset(false)
  self.shapesLoaded = true
  v1 = v1:getValue("uiScale")
  local v2, v3 = getNormalizedScreenValues(20 * v1, 20 * v1)
  local v4 = Overlay.new(g_baseHUDFilename, 0.5, 0.5, v2, v3)
  self.cursorOverlay = v4
  v4:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_CENTER)
  local v6 = GuiUtils.getUVs({0, 48, 48, 48})
  v4:setUVs(...)
  v4:setColor(1, 1, 1, 0.3)
end
function GuiTopDownCursor:activate()
  self.isActive = true
  local v4 = v4:getLastInputMode()
  self:onInputModeChanged({})
  if not self.shapesLoaded then
    self:loadShapes()
  end
  setVisibility(self.rootNode, self.isVisible)
  self:registerActionEvents()
  v1:subscribe(MessageType.INPUT_MODE_CHANGED, self.onInputModeChanged, self)
end
function GuiTopDownCursor:deactivate()
  setVisibility(self.rootNode, false)
  v1:unsubscribeAll(self)
  self:removeActionEvents()
  self.isActive = false
end
function GuiTopDownCursor:setCameraRay(x, y, z, dx, dy, dz)
  self.ray.x = x
  self.ray.y = y
  self.ray.z = z
  self.ray.dx = dx
  self.ray.dy = dy
  self.ray.dz = dz
end
function GuiTopDownCursor:setShape(shape)
  self.shape = shape
  if shape == GuiTopDownCursor.SHAPES.NONE then
  end
  material(v3, true)
  local material = getMaterial(self.shapeNode, 0)
  if shape == GuiTopDownCursor.SHAPES.CIRCLE then
    setMaterialCustomShaderVariation(material, "circle", true)
    return
  end
  if shape == GuiTopDownCursor.SHAPES.SQUARE then
    setMaterialCustomShaderVariation(material, "square", true)
  end
end
function GuiTopDownCursor:setVisible(isVisible)
  self.isVisible = isVisible
  if self.rootNode ~= nil then
    setVisibility(self.rootNode, isVisible)
  end
end
function GuiTopDownCursor:setTerrainOnly(terrainOnly)
  self.hitTerrainOnly = terrainOnly
end
function GuiTopDownCursor:setSelectionMode(isSelection)
  self.selectionMode = isSelection
  if isSelection then
    self.rayCollisionMask = CollisionMask.ALL - CollisionMask.TRIGGERS - CollisionFlag.FILLABLE
    return
  end
  self.rayCollisionMask = CollisionMask.ALL - CollisionMask.TRIGGERS - CollisionFlag.FILLABLE - CollisionFlag.GROUND_TIP_BLOCKING
end
function GuiTopDownCursor:setRotationEnabled(isEnabled)
  if self.rotationEnabled ~= isEnabled then
    self.rotationEnabled = isEnabled
    if self.rotateEventId ~= nil then
      v2:setActionEventActive(self.rotateEventId, self.rotationEnabled)
    end
  end
end
function GuiTopDownCursor:setRotation(rotY)
  self.targetRotation = rotY
  self.rotationY = rotY
end
function GuiTopDownCursor:setLightEnabled(isEnabled)
  self.lightEnabled = isEnabled
end
function GuiTopDownCursor:setShapeSize(size)
  setScale(self.shapeNode, size, size, size)
  self.shapeScale = size
end
function GuiTopDownCursor:getMessagePosition()
  if self.isCatchingCursor then
    return self.lockedMousePosX, self.lockedMousePosY
  end
  return self.mousePosX, self.mousePosY
end
function GuiTopDownCursor:setErrorMessage(message)
  local v2, v3 = self:getMessagePosition()
  if v2 == nil then
    return
  end
  setTextAlignment(RenderText.ALIGN_LEFT)
  setTextBold(false)
  local textSize = getCorrectTextSize(0.016)
  setTextColor(0, 0, 0, 0.75)
  renderText(v2 + 0.01, v3 - 0.0015, textSize, message)
  setTextColor(1, 0.5, 0.5, 1)
  renderText(v2 + 0.01, v3, textSize, message)
  setTextColor(1, 1, 1, 1)
end
function GuiTopDownCursor:setMessage(message)
  local v2, v3 = self:getMessagePosition()
  if v2 == nil then
    return
  end
  setTextAlignment(RenderText.ALIGN_CENTER)
  setTextBold(false)
  local textSize = getCorrectTextSize(0.016)
  setTextColor(0, 0, 0, 0.75)
  renderText(v2, v3 + 0.01 - 0.0015, textSize, message)
  setTextColor(1, 1, 1, 1)
  renderText(v2, v3 + 0.01, textSize, message)
  setTextColor(1, 1, 1, 1)
end
function GuiTopDownCursor:setColor(r, g, b, a)
  setShaderParameter(self.shapeNode, "colorInside", r, g, b, a, true)
  setShaderParameter(self.shapeNode, "colorOutside", r, g, b, 1, true)
end
function GuiTopDownCursor:setGradientColor(ri, gi, bi, ro, go, bo, a)
  setShaderParameter(self.shapeNode, "colorInside", ri, gi, bi, a, true)
  setShaderParameter(self.shapeNode, "colorOutside", ro, go, bo, 1, true)
end
function GuiTopDownCursor:setColorMode(mode, alpha)
  if alpha == nil then
  end
  if mode == GuiTopDownCursor.SHAPES_COLORS.SUCCESS then
    self:setColor(0, 1, 0, alpha)
    return
  end
  if mode == GuiTopDownCursor.SHAPES_COLORS.ERROR then
    self:setColor(1, 0, 0, alpha)
    return
  end
  if mode == GuiTopDownCursor.SHAPES_COLORS.SCULPTING then
    self:setGradientColor(1, 0, 0, 0, 1, 0, alpha)
    return
  end
  if mode == GuiTopDownCursor.SHAPES_COLORS.SELECT then
    self:setColor(1, 1, 1, alpha)
    return
  end
  if mode == GuiTopDownCursor.SHAPES_COLORS.PAINTING then
    self:setColor(1, 1, 1, 0.25)
  end
end
function GuiTopDownCursor:setCursorTerrainOffset(isLarge)
  if isLarge then
    self.terrainBrushOffset = 0.5
    return
  end
  self.terrainBrushOffset = 0.05
end
function GuiTopDownCursor:setSnapAngle(angle)
  self.snapAngle = angle
  self.snapUpdateState = GuiTopDownCursor.SNAP_STATE_INACTIVE
end
function GuiTopDownCursor:getHitNode()
  if self.currentHitId ~= g_currentMission.terrainRootNode then
    return self.currentHitId
  end
end
function GuiTopDownCursor:getHitPlaceable()
  if self.currentHitId ~= nil then
    -- if v0.currentHitId ~= g_currentMission.terrainRootNode then goto L12 end
  end
  return nil
  local v1 = v1:getNodeObject(self.currentHitId)
  if v1 ~= nil then
    local v2 = v1:isa(Placeable)
    if v2 then
      return v1
    end
  end
end
function GuiTopDownCursor:getHitTerrainPosition()
  if self.currentHitId == g_currentMission.terrainRootNode then
    return self.currentHitX, self.currentHitY, self.currentHitZ
  end
end
function GuiTopDownCursor:getRotation()
  return self.rotationY % 2 * math.pi
end
function GuiTopDownCursor:getPosition()
  return self.currentHitX, self.currentHitY, self.currentHitZ
end
function GuiTopDownCursor:update(dt)
  if self.isActive then
    self:updateRaycast()
    self:updateRotation(dt)
  end
end
function GuiTopDownCursor:draw()
  if not self.isMouseMode and self.selectionMode then
    v1:render()
  end
end
function GuiTopDownCursor:updateRaycast()
  if self.ray.x == nil then
    self.currentHitId = nil
  else
    local v3, v4, v5, v6 = RaycastUtil.raycastClosest(self.ray.x, self.ray.y, self.ray.z, self.ray.dx, self.ray.dy, self.ray.dz, GuiTopDownCursor.RAYCAST_DISTANCE, self.rayCollisionMask)
    self.currentHitId = v3
    self.currentHitX = v4
    self.currentHitY = v5
    self.currentHitZ = v6
    if v3 ~= nil then
      setWorldTranslation(self.rootNode, v4, v5, v6)
      if not not self.hitTerrainOnly and g_currentMission.terrainRootNode ~= v3 then
      end
      if v7 then
        local v7 = getVisibility(self.shapeNode)
        if v7 then
          self:updateCursorHeights(v4, v5, v6, self.shapeScale)
        end
      end
    end
  end
  self:setVisible(v2)
end
function GuiTopDownCursor:updateRotation(dt)
  self.inputRotate = 0
  if self.snapAngle ~= nil then
    if self.snapUpdateState == GuiTopDownCursor.SNAP_STATE_USED then
      return
    end
    if self.snapUpdateState ~= GuiTopDownCursor.SNAP_STATE_POSITIVE then
      -- if v0.snapUpdateState ~= GuiTopDownCursor.SNAP_STATE_NEGATIVE then goto L83 end
    end
    if self.snapUpdateState == GuiTopDownCursor.SNAP_STATE_POSITIVE then
    else
    end
    local v6 = math.deg(self.rotationY + v3 * self.snapAngle)
    local v7 = math.deg(self.snapAngle)
    local v5 = MathUtil.snapValue(...)
    local v4 = math.rad(...)
    self:setRotation(v4 % 2 * math.pi)
    self.snapUpdateState = GuiTopDownCursor.SNAP_STATE_USED
    return
  end
  self.targetRotation = self.targetRotation - dt * v2 * GuiTopDownCursor.ROTATION_SPEED
  if (self.targetRotation - self.rotationY) / dt * 5 < 0.0001 then
    -- if -0.0001 >= (v0.targetRotation - v0.rotationY) / v1 * 5 then goto L112 end
    self.rotationY = self.targetRotation
  else
    self.rotationY = self.rotationY + (self.targetRotation - self.rotationY) / dt * 5
  end
  if self.snapAngle ~= nil then
    v6 = math.deg(self.rotationY)
    v7 = math.deg(self.snapAngle)
    v5 = MathUtil.snapValue(...)
    v4 = math.rad(...)
    self.rotationY = v4
  end
end
function GuiTopDownCursor:updateCursorHeights(x, y, z, scale)
  -- TODO: structure LOP_FORNPREP (pc 10, target 74)
  -- TODO: structure LOP_FORNPREP (pc 20, target 36)
  local v18 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, x + (0.14285714285714285 * (1 - 1) - 0.5) * scale, 0, z + (0.14285714285714285 * (1 - 1) - 0.5) * scale)
  self.cursorShapeHeights[1] = v18 + self.terrainBrushOffset - y
  -- TODO: structure LOP_FORNLOOP (pc 35, target 21)
  local v13 = math.ceil(1 / 2)
  setShaderParameter(self.shapeNode, "heights" .. v13 .. ((1 - 1) % 2 + 1) * 2 - 1, self.cursorShapeHeights[1], self.cursorShapeHeights[2], self.cursorShapeHeights[3], self.cursorShapeHeights[4], true)
  setShaderParameter(self.shapeNode, "heights" .. v13 .. ((1 - 1) % 2 + 1) * 2, self.cursorShapeHeights[5], self.cursorShapeHeights[6], self.cursorShapeHeights[7], self.cursorShapeHeights[8], true)
  -- TODO: structure LOP_FORNLOOP (pc 73, target 11)
end
function GuiTopDownCursor:registerActionEvents()
  local v1, v2 = v1:registerActionEvent(InputAction.AXIS_CONSTRUCTION_CURSOR_ROTATE, self, self.onRotate, false, false, true, false)
  self.rotateEventId = v2
  v3:setActionEventActive(self.rotateEventId, self.rotationEnabled)
  v3:setActionEventTextPriority(self.rotateEventId, GS_PRIO_NORMAL)
end
function GuiTopDownCursor:removeActionEvents()
  self.rotateEventId = nil
  v1:removeActionEventsByTarget(self)
end
function GuiTopDownCursor:mouseEvent(posX, posY, isDown, isUp, button)
  if self.mouseDisabled then
    return
  end
  if g_time <= self.lastActionFrame then
    return
  end
  if self.isCatchingCursor then
    self.isCatchingCursor = false
    v6:setShowMouseCursor(true, true)
    wrapMousePosition(self.lockedMousePosX, self.lockedMousePosY)
    g_inputBinding.mousePosXLast = self.lockedMousePosX
    g_inputBinding.mousePosYLast = self.lockedMousePosY
    self.mousePosX = self.lockedMousePosX
    self.mousePosY = self.lockedMousePosY
    return
  end
  if self.isMouseMode then
    self.mousePosX = posX
    self.mousePosY = posY
  end
end
function GuiTopDownCursor:onRotate(_, inputValue, _, isAnalog, isMouse, category, binding)
  if isMouse and self.mouseDisabled then
    return
  end
  if isMouse then
    self.lastActionFrame = g_time
    if not self.isCatchingCursor then
      self.lockedMousePosX = g_inputBinding.mousePosXLast or 0.5
      self.lockedMousePosY = g_inputBinding.mousePosYLast or 0.5
      v8:setShowMouseCursor(false, true)
      self.isCatchingCursor = true
    end
    if isAnalog then
    end
    self.snapUpdateState = GuiTopDownCursor.SNAP_STATE_INACTIVE
  elseif self.snapAngle ~= nil then
    if binding.isUp then
      self.snapUpdateState = GuiTopDownCursor.SNAP_STATE_INACTIVE
      return
    end
    if self.snapUpdateState == GuiTopDownCursor.SNAP_STATE_INACTIVE and binding.isDown then
      if 0 < inputValue then
        -- if GuiTopDownCursor.SNAP_STATE_POSITIVE then goto L79 end
      end
      self.snapUpdateState = GuiTopDownCursor.SNAP_STATE_NEGATIVE
    end
    return
  end
  self.inputRotate = inputValue
end
function GuiTopDownCursor:onInputModeChanged(inputMode)
  if inputMode[1] ~= GS_INPUT_HELP_MODE_KEYBOARD then
  end
  self.isMouseMode = true
  if not self.isMouseMode then
    self.mousePosX = 0.5
    self.mousePosY = 0.5
  end
end
