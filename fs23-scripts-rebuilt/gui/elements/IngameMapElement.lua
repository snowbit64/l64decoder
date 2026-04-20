-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IngameMapElement = {}
local IngameMapElement_mt = Class(IngameMapElement, GuiElement)
IngameMapElement.CURSOR_SPEED_FACTOR = 0.0006
IngameMapElement.BORDER_SCROLL_THRESHOLD = 0.03
if Platform.isMobile then
else
end
v1.MAP_ZOOM_SHOW_NAMES = v2
function IngameMapElement.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.ingameMap = nil
  v2.cursorId = nil
  v2.inputMode = GS_INPUT_HELP_MODE_GAMEPAD
  v2.terrainSize = 0
  v2.mapAlpha = 1
  v2.zoomMin = 1
  v2.zoomMax = 5
  v2.zoomDefault = Platform.ingameMap.zoomDefault
  v2.mapCenterX = 0.5
  v2.mapCenterY = 0.5
  v2.mapZoom = v2.zoomDefault
  v2.accumHorizontalInput = 0
  v2.accumVerticalInput = 0
  v2.accumZoomInput = 0
  v2.useMouse = false
  v2.resetMouseNextFrame = false
  v2.cursorDeadzones = {}
  v2.limitMapWidth = false
  v2.limitCursorMovement = false
  v2.mapMovementLocked = false
  v2.zoomSpeedFactor = Platform.ingameMap.zoomSpeedFactor
  v2.dragStartDistance = Platform.ingameMap.dragStartDistance
  v2.minDragDistanceX = v2.dragStartDistance / g_screenWidth
  v2.minDragDistanceY = v2.dragStartDistance / g_screenHeight
  v2.hasDragged = false
  local v3 = getNormalizedScreenValues(9, 1)
  v2.minimalHotspotSize = v3
  v2.isHotspotSelectionActive = true
  v2.isCursorAvailable = true
  v2.cursorOffsetX = 0
  v2.cursorOffsetY = 0
  v2.originalMapCenterX = 0.5
  v2.originalMapCenterY = 0.5
  v2.isPinching = false
  v2.isTouchPickingRotation = false
  v2.lastInputPosX = {}
  v2.lastInputPosY = {}
  v2.lastInputIndex = 0
  return v2
end
function IngameMapElement:delete()
  GuiOverlay.deleteOverlay(self.overlay)
  self.ingameMap = nil
  local v2 = v2:superClass()
  v2.delete(self)
end
function IngameMapElement:loadFromXML(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXML(self, xmlFile, key)
  local v3 = getXMLString(xmlFile, key .. "#cursorId")
  self.cursorId = v3
  v3 = getXMLFloat(xmlFile, key .. "#mapAlpha")
  if not v3 then
  end
  self.mapAlpha = v3
  v4 = getXMLBool(xmlFile, key .. "#limitMapWidth")
  v3 = Utils.getNoNil(v4, self.limitMapWidth)
  self.limitMapWidth = v3
  v4 = getXMLBool(xmlFile, key .. "#limitCursorMovement")
  v3 = Utils.getNoNil(v4, self.limitCursorMovement)
  self.limitCursorMovement = v3
  self:addCallback(xmlFile, key .. "#onDrawPreIngameMap", "onDrawPreIngameMapCallback")
  self:addCallback(xmlFile, key .. "#onDrawPostIngameMap", "onDrawPostIngameMapCallback")
  self:addCallback(xmlFile, key .. "#onDrawPostIngameMapHotspots", "onDrawPostIngameMapHotspotsCallback")
  self:addCallback(xmlFile, key .. "#onClickHotspot", "onClickHotspotCallback")
  self:addCallback(xmlFile, key .. "#onClickMap", "onClickMapCallback")
end
function IngameMapElement:loadProfile(profile, applyProfile)
  local v4 = v4:superClass()
  v4.loadProfile(self, profile, applyProfile)
  local v3 = profile:getNumber("mapAlpha", self.mapAlpha)
  self.mapAlpha = v3
  v3 = profile:getBool("limitMapWidth", self.limitMapWidth)
  self.limitMapWidth = v3
  v3 = profile:getBool("limitCursorMovement", self.limitCursorMovement)
  self.limitCursorMovement = v3
end
function IngameMapElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.mapZoom = src.mapZoom
  self.mapAlpha = src.mapAlpha
  self.cursorId = src.cursorId
  self.limitMapWidth = src.limitMapWidth
  self.limitCursorMovement = src.limitCursorMovement
  self.onDrawPreIngameMapCallback = src.onDrawPreIngameMapCallback
  self.onDrawPostIngameMapCallback = src.onDrawPostIngameMapCallback
  self.onDrawPostIngameMapHotspotsCallback = src.onDrawPostIngameMapHotspotsCallback
  self.onClickHotspotCallback = src.onClickHotspotCallback
  self.onClickMapCallback = src.onClickMapCallback
end
function IngameMapElement:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  if self.cursorId ~= nil then
    if self.target[self.cursorId] ~= nil then
      self.cursorElement = self.target[self.cursorId]
      return
    end
    print("Warning: CursorId '" .. self.cursorId .. "' not found for '" .. self.target.name .. "'!")
  end
end
function IngameMapElement:addCursorDeadzone(screenX, screenY, width, height)
  table.insert(self.cursorDeadzones, {screenX, screenY, width, height})
end
function IngameMapElement:clearCursorDeadzones()
  self.cursorDeadzones = {}
end
function IngameMapElement:isInputInDeadzones(v1, v2)
  for v6, v7 in pairs(self.cursorDeadzones) do
    local v8 = GuiUtils.checkOverlayOverlap(v1, v2, v7[1], v7[2], v7[3], v7[4])
    if not v8 then
      continue
    end
    return true
  end
  return false
end
function IngameMapElement:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    local v8 = v8:superClass()
    v7 = v8.mouseEvent(self, posX, posY, isDown, isUp, button, eventUsed)
    self.lastInputIndex = 0
    if not GS_IS_CONSOLE_VERSION then
      if not isDown and not isUp and posX == self.lastInputPosX[0] then
        -- if v2 == v0.lastInputPosY[0] then goto L55 end
      end
      self.useMouse = true
      if self.cursorElement then
        v7:setVisible(false)
      end
      self.isCursorActive = false
    end
    if Platform.isMobile and self.useMouse and isDown then
      self.lastInputPosX[0] = posX
      self.lastInputPosY[0] = posY
    end
    if not eventUsed and isDown and button == Input.MOUSE_BUTTON_LEFT then
      v7 = self:isInputInDeadzones(posX, posY)
      if not v7 and not self.inputDown then
        self.inputDown = true
      end
    end
    if self.inputDown and self.lastInputPosX[0] ~= nil then
      if self.isFixedHorizontal then
      end
      local v9 = math.abs(v7)
      if self.minDragDistanceX >= v9 then
        v9 = math.abs(v8)
        -- if v0.minDragDistanceY >= v9 then goto L139 end
      end
      self:moveCenter(-v7, v8)
      self.hasDragged = true
    end
    if isUp and button == Input.MOUSE_BUTTON_LEFT then
      if not eventUsed and self.inputDown and not self.hasDragged then
        v7, v8 = self:getLocalPosition(posX, posY)
        self:onClickMap(v7, v8)
        if self.isHotspotSelectionActive then
          self:selectHotspotAt(posX, posY)
        end
      end
      self.inputDown = false
      self.hasDragged = false
    end
    self.lastInputPosX[0] = posX
    self.lastInputPosY[0] = posY
  end
  return eventUsed
end
function IngameMapElement:touchEvent(v1, v2, v3, v4, v5, v6)
  local v7 = self:getIsActive()
  if v7 then
    local v8 = v8:superClass()
    v7 = v8.mouseEvent(self, v1, v2, v3, v4, v5, v6)
    self.lastInputIndex = v5
    if not v3 and not v4 and v1 == self.lastInputPosX[v5] then
      -- if v2 == v0.lastInputPosY[v5] then goto L46 end
    end
    if self.cursorElement then
      v7:setVisible(false)
    end
    self.isCursorActive = false
    if v3 then
      self.lastInputPosX[v5] = v1
      self.lastInputPosY[v5] = v2
    end
    if not v6 and v3 then
      v7 = self:isInputInDeadzones(v1, v2)
      if not v7 and not self.inputDown then
        self.inputDown = true
      end
    end
    if self.inputDown and self.lastInputPosX[v5] ~= nil then
      if self.isFixedHorizontal then
      end
      if self.isTouchPickingRotation then
        local v10 = GuiUtils.checkOverlayOverlap(v1, v2, self.target.buttonConfirmAITarget.absPosition[1], self.target.buttonConfirmAITarget.absPosition[2], self.target.buttonConfirmAITarget.size[1], self.target.buttonConfirmAITarget.size[2])
        -- if v10 then goto L151 end
        local v11, v12 = self:getLocalPosition(v1, v2)
        self:onClickMap(v11, v12)
      else
        local v9 = math.abs(v7)
        if self.minDragDistanceX >= v9 then
          v9 = math.abs(v8)
          -- if v0.minDragDistanceY >= v9 then goto L151 end
        end
        self:moveCenter(-v7, v8)
        self.hasDragged = true
      end
    end
    if v4 then
      if not v6 and self.inputDown and not self.hasDragged then
        v7, v8 = self:getLocalPosition(v1, v2)
        self:onClickMap(v7, v8)
        if self.isHotspotSelectionActive then
          self:selectHotspotAt(v1, v2)
        end
      end
      self.inputDown = false
      self.hasDragged = false
    end
    self.lastInputPosX[v5] = v1
    self.lastInputPosY[v5] = v2
  end
  return v6
end
function IngameMapElement:lockMapMovement()
  self.mapMovementLocked = true
end
function IngameMapElement:unlockMapMovement()
  self.mapMovementLocked = false
end
function IngameMapElement:moveCenter(x, y)
  local v3, v4 = v3:getMapSize()
  if Platform.isMobile then
    local v7 = MathUtil.clamp(self.mapCenterX + x, self.originalMapCenterX - (v3 - self.ingameMap.fullScreenLayout.width) * 0.5, self.originalMapCenterX + (v3 - self.ingameMap.fullScreenLayout.width) * 0.5)
    self.mapCenterX = v7
    v7 = MathUtil.clamp(self.mapCenterY + y, self.originalMapCenterY - (v4 - 1) * 0.5, self.originalMapCenterY + (v4 - 1) * 0.5)
    self.mapCenterY = v7
  else
    self.originalMapCenterX = self.cursorElement.absPosition[1] + self.cursorElement.absSize[1] * 0.5
    self.originalMapCenterY = self.cursorElement.absPosition[2] + self.cursorElement.absSize[2] * 0.5
    local v5 = MathUtil.clamp(self.mapCenterX + x, v3 * -0.25 + self.originalMapCenterX, v3 * 0.25 + self.originalMapCenterX)
    self.mapCenterX = v5
    if self.limitCursorMovement then
      v7 = MathUtil.clamp(self.mapCenterY + y, self.absPosition[2] + self.absSize[2] - v4 * 0.5, self.absPosition[2] + v4 * 0.5)
      self.mapCenterY = v7
    else
      v5 = MathUtil.clamp(self.mapCenterY + y, v4 * -0.25 + self.originalMapCenterY, v4 * 0.25 + self.originalMapCenterY)
      self.mapCenterY = v5
    end
  end
  v5:setMapCenter(self.mapCenterX, self.mapCenterY)
end
function IngameMapElement:panToHotspot(v1)
  if v1 ~= nil then
    local v4 = v1:getWorldPosition()
    local v2, v3 = self:worldToScreenPos(...)
    self.cursorOffsetX = -v2 + self.mapCenterX + self.originalMapCenterX - self.mapCenterX
    self.cursorOffsetY = -v3 + self.mapCenterY + self.originalMapCenterY - self.mapCenterY
  end
end
function IngameMapElement:copySettingsFromElement(element)
  self.mapZoom = element.mapZoom
  self.mapCenterX = element.mapCenterX
  self.mapCenterY = element.mapCenterY
  self.ingameMap.fullScreenLayout:setMapZoom(self.mapZoom)
  self.ingameMap.fullScreenLayout:setMapCenter(self.mapCenterX, self.mapCenterY)
end
function IngameMapElement:zoom(v1, v2)
  if not Platform.ingameMap.canZoom then
    return
  end
  local v5 = self:getLocalPointerTarget()
  local v3, v4 = self:localToWorldPos(...)
  local v5, v6 = v5:getMapSize()
  if v2 ~= nil then
    local v9 = MathUtil.clamp(v2, self.zoomMin, self.zoomMax)
    self.mapZoom = v9
  else
    v9 = MathUtil.clamp(self.mapZoom + self.zoomSpeedFactor * v1 * v5, self.zoomMin, self.zoomMax)
    self.mapZoom = v9
  end
  v9:setMapZoom(self.mapZoom)
  self:moveCenter(0, 0)
  if v7 ~= self.mapZoom then
    local v11 = self:getLocalPointerTarget()
    local v9, v10 = self:localToWorldPos(...)
    self.cursorOffsetX = self.cursorOffsetX + (v9 - v3) / self.terrainSize * 0.5 * v5
    self.cursorOffsetY = self.cursorOffsetY + -(v10 - v4) / self.terrainSize * 0.5 * v6
    self:moveCenter((v9 - v3) / self.terrainSize * 0.5 * v5, -(v10 - v4) / self.terrainSize * 0.5 * v6)
    if v1 < 0 then
      self.cursorOffsetX = self.cursorOffsetX - self.ingameMap.fullScreenLayout.mapCenterX + self.ingameMap.fullScreenLayout.mapCenterX + (v9 - v3) / self.terrainSize * 0.5 * v5
      self.cursorOffsetY = self.cursorOffsetY - self.ingameMap.fullScreenLayout.mapCenterY + self.ingameMap.fullScreenLayout.mapCenterY + -(v10 - v4) / self.terrainSize * 0.5 * v6
    end
  end
end
function IngameMapElement:setLockedToBorder(yOffset, height)
  self.yOffset = yOffset
  self.height = height
  self.lockedToBorder = true
end
function IngameMapElement:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:getLastInputMode()
  self.inputMode = v2
  v2 = v2:getIsDialogVisible()
  if not v2 and not self.alreadyClosed then
    if not self.isPinching then
      v3 = MathUtil.clamp(self.accumZoomInput, -1, 1)
    end
    if v2 ~= 0 then
      self:zoom(v2 * -0.015 * dt)
    end
    if self.cursorElement ~= nil then
      if self.inputMode ~= GS_INPUT_HELP_MODE_GAMEPAD then
      end
      self.isCursorActive = true
      if self.isCursorAvailable then
      end
      v3:setVisible(v5)
      self:updateCursor(self.accumHorizontalInput, -self.accumVerticalInput, dt)
      self.useMouse = false
    end
  end
  self:resetFrameInputState()
end
function IngameMapElement:resetFrameInputState()
  self.accumZoomInput = 0
  self.accumHorizontalInput = 0
  self.accumVerticalInput = 0
  if self.resetMouseNextFrame then
    self.useMouse = false
    self.resetMouseNextFrame = false
  end
  if Platform.isMobile and self.isPinching then
    self.cursorElement.absPosition[1] = self.originalMapCenterX + self.cursorOffsetX
    self.cursorElement.absPosition[2] = self.originalMapCenterY + self.cursorOffsetY
    self.isPinching = false
  end
end
function IngameMapElement:draw(clipX1, clipY1, clipX2, clipY2)
  self:raiseCallback("onDrawPreIngameMapCallback", self, self.ingameMap)
  v5:drawMapOnly()
  self:raiseCallback("onDrawPostIngameMapCallback", self, self.ingameMap)
  v5:drawHotspotsOnly()
  self:raiseCallback("onDrawPostIngameMapHotspotsCallback", self, self.ingameMap)
  local v6 = v6:superClass()
  v6.draw(self, clipX1, clipY1, clipX2, clipY2)
end
function IngameMapElement:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  if self.cursorElement ~= nil then
    v1:setVisible(false)
  end
  self.isCursorActive = false
  if self.largestSize == nil then
    self.largestSize = self.size
  end
  v1:setFullscreen(true)
  if Platform.ingameMap.resetZoomOnOpen then
    self:zoom(0)
  end
end
function IngameMapElement:onClose()
  local v2 = v2:superClass()
  v2.onClose(self)
  self:removeActionEvents()
  v1:setFullscreen(false)
end
function IngameMapElement:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  self.mapCenterX = 0.5
  self.mapCenterY = 0.5
  self.mapZoom = self.zoomDefault
end
function IngameMapElement:updateCursor(deltaX, deltaY, dt)
  if self.cursorElement ~= nil then
    if Platform.isMobile then
      if not self.mapMovementLocked then
        self:moveCenter(-(deltaX * IngameMapElement.CURSOR_SPEED_FACTOR * dt / g_screenAspectRatio - self.cursorOffsetX), -(deltaY * IngameMapElement.CURSOR_SPEED_FACTOR * dt - self.cursorOffsetY))
      end
      self.cursorOffsetX = v7 - self.mapCenterX - v5
      local v14 = math.min(self.cursorOffsetX, self.ingameMap.fullScreenLayout.width * 0.5 - self.cursorElement.absSize[1] * 0.5)
      local v13 = math.max(v14, -self.ingameMap.fullScreenLayout.width * 0.5 + self.cursorElement.absSize[1] * 0.5)
      self.cursorOffsetX = v13
      self.cursorOffsetY = v8 - self.mapCenterY - v6
      v14 = math.min(self.cursorOffsetY, 0.5 - self.cursorElement.absSize[2] * 0.5)
      v13 = math.max(v14, -0.5 + self.cursorElement.absSize[2] * 0.5)
      self.cursorOffsetY = v13
      self.cursorElement.absPosition[1] = self.originalMapCenterX - self.cursorOffsetX - self.cursorElement.absSize[1] * 0.5
      self.cursorElement.absPosition[2] = self.originalMapCenterY - self.cursorOffsetY - self.cursorElement.absSize[2] * 0.5
      return
    end
    self:moveCenter(-v5, -v6)
  end
end
function IngameMapElement:selectHotspotAt(posX, posY)
  if self.isHotspotSelectionActive then
    v3:updateHotspotSorting()
    if self.ingameMap.hotspotsSorted ~= nil then
      local v4 = self:getPlayerHotspot(self.ingameMap.hotspotsSorted[true])
      if not not Platform.isMobile then
        local v6 = v4:getVehicle()
        if v6 == nil then
        end
      end
      v6 = self:selectHotspotFrom(v3[v5], posX, posY)
      if not v6 and v5 then
        self:selectHotspotFrom(v3[false], posX, posY)
      end
      return
    end
    self:selectHotspotFrom(self.ingameMap.hotspots, posX, posY)
  end
end
function IngameMapElement:selectHotspotFrom(hotspots, posX, posY)
  -- TODO: structure LOP_FORNPREP (pc 6, target 38)
  local v12 = hotspots[#hotspots]:getCategory()
  if self.ingameMap.filter[v12] then
    local v10 = hotspots[#hotspots]:getIsVisible()
    if v10 then
      v10 = hotspots[#hotspots]:getCanBeAccessed()
      if v10 then
        local v10, v11 = hotspots[#hotspots]:hasMouseOverlap(posX, posY)
        if v10 and v11 ~= nil and v11 < math.huge then
        end
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 37, target 7)
  if v5 ~= nil then
    self:raiseCallback("onClickHotspotCallback", self, v5)
    return true
  end
  return false
end
function IngameMapElement:getLocalPosition(posX, posY)
  local v3, v4 = v3:getMapSize()
  local v5, v6 = v5:getMapPosition()
  if Platform.isMobile then
    return (posX - v5) / v3, (posY - v6) / v4
  end
  return ((posX - v5) / v3 - 0.25) * 2, ((posY - v6) / v4 - 0.25) * 2
end
function IngameMapElement:getLocalPointerTarget()
  if self.useMouse then
    return self:getLocalPosition(self.lastInputPosX[self.lastInputIndex], self.lastInputPosY[self.lastInputIndex])
  end
  if self.cursorElement then
    return self:getLocalPosition(self.cursorElement.absPosition[1] + self.cursorElement.size[1] * 0.5, self.cursorElement.absPosition[2] + self.cursorElement.size[2] * 0.5)
  end
  return 0, 0
end
function IngameMapElement.getPlayerHotspot(v0, v1)
  for v5, v6 in pairs(v1) do
    local v7 = v6:isa(PlayerHotspot)
    if not v7 then
      continue
    end
    return v6
  end
  return nil
end
function IngameMapElement:onClickMap(localPosX, localPosY)
  local v3, v4 = self:localToWorldPos(localPosX, localPosY)
  self:raiseCallback("onClickMapCallback", self, v3, v4)
end
function IngameMapElement:localToWorldPos(localPosX, localPosY)
  return localPosX * self.terrainSize - self.terrainSize * 0.5, -localPosY * self.terrainSize + self.terrainSize * 0.5
end
function IngameMapElement:worldToScreenPos(v1, v2)
  local v3, v4 = self:worldToLocalPos(v1, v2)
  local v6, v7 = self.ingameMap.fullScreenLayout:getMapPosition()
  local v8, v9 = self.ingameMap.fullScreenLayout:getMapSize()
  return v6 + v3 * v8, v7 + v9 - v4 * v9
end
function IngameMapElement:worldToLocalPos(worldPosX, worldPosZ)
  return (worldPosX + self.terrainSize * 0.5) / self.terrainSize, (worldPosZ + self.terrainSize * 0.5) / self.terrainSize
end
function IngameMapElement.isPointVisible(v0, v1, v2)
end
function IngameMapElement:setIngameMap(ingameMap)
  self.ingameMap = ingameMap
  if self.limitMapWidth and self.ingameMap ~= nil then
    v2:setMapWidth(self.absSize[1])
  end
end
function IngameMapElement:setTerrainSize(terrainSize)
  self.terrainSize = terrainSize
end
function IngameMapElement:setIsCursorAvailable(available)
  self.isCursorAvailable = available
end
function IngameMapElement:setCursorCenter(v1, v2)
  v3:setPosition(v1, v2)
  if self.cursorElement.absPosition[1] + self.cursorElement.absSize[1] * 0.5 == self.originalMapCenterX then
    -- if v0.cursorElement.absPosition[2] + v0.cursorElement.absSize[2] * 0.5 == v0.originalMapCenterY then goto L62 end
  end
  self.originalMapCenterX = v3
  self.originalMapCenterY = v4
  self.mapCenterX = self.originalMapCenterX
  self.mapCenterY = self.originalMapCenterY
  v5:setMapCenter(self.originalMapCenterX, self.originalMapCenterY)
end
function IngameMapElement:registerActionEvents()
  v1:registerActionEvent(InputAction.AXIS_MAP_SCROLL_LEFT_RIGHT, self, self.onHorizontalCursorInput, false, false, true, true)
  v1:registerActionEvent(InputAction.AXIS_MAP_SCROLL_UP_DOWN, self, self.onVerticalCursorInput, false, false, true, true)
  v1:registerActionEvent(InputAction.INGAMEMAP_ACCEPT, self, self.onAccept, false, true, false, true)
  v1:registerActionEvent(InputAction.AXIS_MAP_ZOOM_OUT, self, self.onZoomInput, false, false, true, true, -1)
  v1:registerActionEvent(InputAction.AXIS_MAP_ZOOM_IN, self, self.onZoomInput, false, false, true, true, 1)
  if g_touchHandler ~= nil then
    local v1 = v1:registerGestureListener(TouchHandler.GESTURE_PINCH, self.onPinchEvent, self)
    self.touchListenerPinch = v1
  end
end
function IngameMapElement:removeActionEvents()
  v1:removeActionEventsByTarget(self)
  if g_touchHandler ~= nil then
    v1:removeGestureListener(self.touchListenerPinch)
  end
end
function IngameMapElement:onHorizontalCursorInput(_, inputValue)
  local v3 = self:checkAndResetMouse()
  if not v3 and not self.isFixedHorizontal then
    self.accumHorizontalInput = self.accumHorizontalInput + inputValue
  end
end
function IngameMapElement:onVerticalCursorInput(_, inputValue)
  local v3 = self:checkAndResetMouse()
  if not v3 then
    self.accumVerticalInput = self.accumVerticalInput + inputValue
  end
end
function IngameMapElement:onAccept()
  if self.cursorElement then
    local v4, v5 = self:getLocalPointerTarget()
    self:onClickMap(v4, v5)
    if self.isHotspotSelectionActive then
      self:selectHotspotAt(self.cursorElement.absPosition[1] + self.cursorElement.size[1] * 0.5, self.cursorElement.absPosition[2] + self.cursorElement.size[2] * 0.5)
    end
  end
end
function IngameMapElement:onZoomInput(_, inputValue, direction)
  local v4 = self:hasMouseOverlapWithTabHeader()
  if v4 then
    -- if v0.useMouse then goto L13 end
  end
  self.accumZoomInput = self.accumZoomInput - direction * inputValue
end
function IngameMapElement:onPinchEvent(v1, v2, v3, v4)
  self.oldCursorX = self.cursorElement.absPosition[1]
  self.oldCursorY = self.cursorElement.absPosition[2]
  self.cursorElement.absPosition[1] = v2
  self.cursorElement.absPosition[2] = v3
  self.accumZoomInput = self.accumZoomInput + v1 * 100
  self.isPinching = true
end
function IngameMapElement:checkAndResetMouse()
  if self.useMouse then
    self.resetMouseNextFrame = true
  end
  return v1
end
function IngameMapElement:setHotspotSelectionActive(isActive)
  self.isHotspotSelectionActive = isActive
end
function IngameMapElement.hasMouseOverlapWithTabHeader(v0)
  if g_inGameMenu.header ~= nil then
    return GuiUtils.checkOverlayOverlap(g_lastMousePosX, g_lastMousePosY, g_inGameMenu.header.absPosition[1], g_inGameMenu.header.absPosition[2], g_inGameMenu.header.absSize[1], g_inGameMenu.header.absSize[2])
  end
  return false
end
