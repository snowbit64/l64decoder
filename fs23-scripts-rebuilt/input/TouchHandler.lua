-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TouchHandler = {}
local TouchHandler_mt = Class(TouchHandler)
TouchHandler.DRAW_DEBUG = false
TouchHandler.TRIGGER_DOWN = 1
TouchHandler.TRIGGER_ALWAYS = 2
TouchHandler.TRIGGER_UP = 3
TouchHandler.GESTURE_AXIS_X = 1
TouchHandler.GESTURE_AXIS_Y = 2
TouchHandler.GESTURE_DOUBLE_TAP = 3
TouchHandler.GESTURE_PINCH = 4
TouchHandler.DOUBLE_TAP_TIME = 250
TouchHandler.MOUSE_TOUCH_ID = -1
function TouchHandler.new()
  local v0 = setmetatable({}, u0)
  v0.areas = {}
  v0.gestureListener = {}
  v0.pinchGesture = {}
  v0.toTrigger = {}
  v0.lastDownTime = 0
  v0.lastUpTime = 0
  local v1, v2 = getNormalizedScreenValues(1.5, 1.5)
  v0.debugLineWidth = v1
  v0.debugLineHeight = v2
  v1, v2 = getNormalizedScreenValues(3, 3)
  v0.debugPointWidth = v1
  v0.debugPointHeight = v2
  v0.debugPoints = {}
  v0.contextName = nil
  v0.isActiveOnTopOfGUI = false
  return v0
end
function TouchHandler:onTouchEvent(posX, posY, isDown, isUp, touchId)
  if TouchHandler.DRAW_DEBUG and isDown then
    self:addDebugPoint(posX, posY)
  end
  -- TODO: structure LOP_FORNPREP (pc 19, target 152)
  if self.areas[1].lastTouchId ~= nil then
    -- if v0.areas[1].lastTouchId ~= v5 then goto L151 end
  end
  self:updateAreaPosition(v11)
  local v12, v13, v14, v15 = self:getAreaDimensions(v11)
  if v12 < posX and posX < v12 + v14 and v13 < posY and posY >= v13 + v15 then
  end
  if v16 then
    -- if not v11.visibility then goto L108 end
    -- if v11.contextName ~= v0.contextName then goto L108 end
    if not self.isActiveOnTopOfGUI then
      local v20 = v20:getIsGuiVisible()
      -- if v20 then goto L108 end
    end
    if isUp then
      -- if not v11.isPressed then goto L100 end
      v11.isPressed = false
      v11.lastTouchId = nil
    elseif isDown then
      v11.isPressed = true
      v11.lastTouchId = touchId
    else
      if v11.isPressed then
      end
    end
    v11.lastTouchPosition[1] = posX
    v11.lastTouchPosition[2] = posY
  elseif v11.isPressed then
    v11.isPressed = false
    v11.lastTouchId = nil
    v11.isCancel = true
  end
  if v17 then
    -- if v11.triggerType == TouchHandler.TRIGGER_DOWN then goto L148 end
  end
  if v18 then
    -- if v11.triggerType == TouchHandler.TRIGGER_ALWAYS then goto L148 end
  end
  if v19 and v11.triggerType == TouchHandler.TRIGGER_UP then
    v7[#v7 + 1] = v11
  end
  -- TODO: structure LOP_FORNLOOP (pc 151, target 20)
  -- TODO: structure LOP_FORNPREP (pc 155, target 169)
  self:raiseCallback(v7[1], posX, posY)
  v7[1].isCancel = false
  v7[1] = nil
  -- TODO: structure LOP_FORNLOOP (pc 168, target 156)
  if not v6 then
    if isDown then
      self.lastPositionX = posX
      self.lastPositionY = posY
      self.lastDownTime = g_time
    elseif isUp then
      self.lastPositionX = nil
      self.lastPositionY = nil
      if self.lastUpTime ~= nil and self.lastUpTime < self.lastDownTime and g_time - self.lastUpTime < TouchHandler.DOUBLE_TAP_TIME then
        self:raiseGestureEvent(TouchHandler.GESTURE_DOUBLE_TAP)
      end
      self.lastUpTime = g_time
      self.lastUpId = touchId
    end
    if isDown then
      self:onPinchDownEvent(touchId)
    elseif isUp then
      self:onPinchUpEvent(touchId)
    else
      local v9 = self:onPinchUpdateEvent(posX, posY, touchId)
    end
    if not v8 then
      if self.lastPositionX ~= nil then
        self:raiseGestureEvent(TouchHandler.GESTURE_AXIS_X, posX - self.lastPositionX)
        self.lastPositionX = posX
      end
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L288
      self:raiseGestureEvent(TouchHandler.GESTURE_AXIS_Y, posY - self.lastPositionY)
      self.lastPositionY = posY
      return
    end
    self.lastPositionX = nil
    self.lastPositionY = nil
    return
  end
  self:onPinchUpEvent(touchId)
end
function TouchHandler:onPinchDownEvent(touchId)
  if self.lastPositionId ~= nil and self.lastPositionId ~= touchId then
    self.pinchGesture[1] = {touchId = touchId}
    self.pinchGesture[2] = {touchId = self.lastPositionId}
  end
  self.lastPositionId = touchId
end
function TouchHandler:onPinchUpdateEvent(posX, posY, touchId)
  if self.pinchGesture[1] ~= nil and self.pinchGesture[2] ~= nil then
    if self.pinchGesture[1].touchId == touchId and self.pinchGesture[1].lastX ~= nil and self.pinchGesture[2].lastX ~= nil then
      local v6 = MathUtil.vector2Length(self.pinchGesture[1].lastX - self.pinchGesture[2].lastX, self.pinchGesture[1].lastY - self.pinchGesture[2].lastY)
      self:raiseGestureEvent(TouchHandler.GESTURE_PINCH, (self.pinchGesture[1].lastDistance or v6) - v6, self.pinchGesture[2].lastX + (self.pinchGesture[1].lastX - self.pinchGesture[2].lastX) * 0.5, self.pinchGesture[2].lastY + (self.pinchGesture[1].lastY - self.pinchGesture[2].lastY) * 0.5, v6)
      self.pinchGesture[1].lastDistance = v6
    end
    if isUp.touchId == touchId then
      -- if v4 then goto L77 end
    end
    touchId.lastX = posX
    touchId.lastY = posY
    return true
  end
  return false
end
function TouchHandler:onPinchUpEvent(touchId)
  -- TODO: structure LOP_FORNPREP (pc 3, target 47)
  if self.pinchGesture[1] ~= nil then
    -- if v0.pinchGesture[1].touchId ~= v1 then goto L46 end
    if 1 == 1 then
      self.lastPositionId = self.pinchGesture[2].touchId
    else
      self.lastPositionId = self.pinchGesture[1].touchId
    end
    self.pinchGesture[1] = nil
    self.pinchGesture[2] = nil
    return
  else
    self.lastPositionId = nil
  end
  -- TODO: structure LOP_FORNLOOP (pc 46, target 4)
end
function TouchHandler:registerGestureListener(gestureType, callback, callbackTarget)
  table.insert(self.gestureListener, {gestureType = gestureType, callback = callback, callbackTarget = callbackTarget, contextName = self.contextName})
  return {gestureType = gestureType, callback = callback, callbackTarget = callbackTarget, contextName = self.contextName}
end
function TouchHandler:removeGestureListener(listener)
  table.removeElement(self.gestureListener, listener)
end
function TouchHandler:raiseGestureEvent(gestureType, ...)
  for touchId, v6 in ipairs(self.gestureListener) do
    if not (v6.contextName == self.contextName) then
      continue
    end
    if not (v6.gestureType == gestureType) then
      continue
    end
    v6.callback(...)
  end
end
function TouchHandler:registerTouchArea(posX, posY, sizeX, sizeY, areaOffsetX, areaOffsetY, triggerType, callback, callbackTarget, extraArguments)
  local v12 = type(areaOffsetX)
  if v12 == "number" then
  end
  v11.areaOffsetY = areaOffsetY
  v12 = type(areaOffsetY)
  if v12 == "number" then
    v11.areaOffsetY = {areaOffsetY / 2, areaOffsetY / 2}
  end
  v11.isPressedSizeGain = 1
  v11.isPressedSizeGained = v11.isPressedSizeGain - 1
  v11.absoluteDimensions = {0, 0, 0, 0}
  v11.absoluteDimensionsPressed = {0, 0, 0, 0}
  self:updateDimensions(v11)
  v11.visibility = true
  v11.isPressed = false
  v11.lastTouchPosition = {posX + sizeX * 0.5, posY + sizeY * 0.5}
  v11.triggerType = triggerType
  v11.callback = callback
  v11.callbackTarget = callbackTarget
  if not extraArguments then
  end
  v11.extraArguments = v12
  v11.contextName = self.contextName
  table.insert(self.areas, v11)
  return v11
end
function TouchHandler:registerTouchAreaOverlay(overlay, areaOffsetX, areaOffsetY, triggerType, callback, callbackTarget, extraArguments)
  local area = self:registerTouchArea(overlay.x, overlay.y, overlay.width, overlay.height, areaOffsetX, areaOffsetY, triggerType, callback, callbackTarget, extraArguments)
  area.overlay = overlay
  return area
end
function TouchHandler:resetPendingTouchAreaInput(posX)
  if posX.triggerType == TouchHandler.TRIGGER_UP and posX.isPressed then
    self:raiseCallback(posX, posX.lastTouchPosition[1], posX.lastTouchPosition[2])
    posX.isPressed = false
    posX.lastTouchId = nil
  end
end
function TouchHandler:removeTouchArea(area)
  self:resetPendingTouchAreaInput(area)
  table.removeElement(self.areas, area)
end
function TouchHandler:setCustomContext(posX, posY)
  if posX ~= self.contextName then
    -- TODO: structure LOP_FORNPREP (pc 9, target 26)
    if self.areas[1].contextName == self.contextName then
      self:resetPendingTouchAreaInput(self.areas[1])
    end
    -- TODO: structure LOP_FORNLOOP (pc 25, target 10)
  end
  self.contextName = posX
  local isDown = Utils.getNoNil(posY, false)
  self.isActiveOnTopOfGUI = isDown
end
function TouchHandler:revertCustomContext()
  self:setCustomContext(nil, false)
end
function TouchHandler.getAreaDimensions(v0, posX, posY)
  if posY == nil then
  end
  if posY then
    return unpack(posX.absoluteDimensionsPressed)
  end
  isDown = unpack(posX.absoluteDimensions)
  return isDown
end
function TouchHandler:removeAllTouchAreas()
  self.areas = {}
end
function TouchHandler:setAreaPosition(area, posX, posY, sizeX, sizeY)
  area.posX = posX
  area.posY = posY
  area.sizeX = sizeX
  area.sizeY = sizeY
  self:updateDimensions(area)
end
function TouchHandler:setAreaPressedSizeGain(area, gain)
  area.isPressedSizeGain = gain
  area.isPressedSizeGained = gain - 1
  self:updateDimensions(area)
end
function TouchHandler.updateDimensions(v0, posX)
  posX.absoluteDimensions[1] = posX.posX - posX.areaOffsetX[1] * posX.sizeX
  posX.absoluteDimensions[2] = posX.posY - posX.areaOffsetY[1] * posX.sizeY
  posX.absoluteDimensions[3] = posX.sizeX + posX.sizeX * posX.areaOffsetX[1] + posX.sizeX * posX.areaOffsetX[2]
  posX.absoluteDimensions[4] = posX.sizeY + posX.sizeY * posX.areaOffsetY[1] + posX.sizeY * posX.areaOffsetY[2]
  local v6 = math.min((posX.sizeX + posX.sizeX * posX.areaOffsetX[1] + posX.sizeX * posX.areaOffsetX[2]) * posX.isPressedSizeGained * 0.5, (posX.sizeY + posX.sizeY * posX.areaOffsetY[1] + posX.sizeY * posX.areaOffsetY[2]) * posX.isPressedSizeGained * 0.5 * g_screenAspectRatio)
  local v7 = math.min((posX.sizeX + posX.sizeX * posX.areaOffsetX[1] + posX.sizeX * posX.areaOffsetX[2]) * posX.isPressedSizeGain - posX.sizeX + posX.sizeX * posX.areaOffsetX[1] + posX.sizeX * posX.areaOffsetX[2], ((posX.sizeY + posX.sizeY * posX.areaOffsetY[1] + posX.sizeY * posX.areaOffsetY[2]) * posX.isPressedSizeGain - posX.sizeY + posX.sizeY * posX.areaOffsetY[1] + posX.sizeY * posX.areaOffsetY[2]) * g_screenAspectRatio)
  posX.absoluteDimensionsPressed[1] = posX.posX - posX.areaOffsetX[1] * posX.sizeX - v6 / g_screenAspectRatio
  posX.absoluteDimensionsPressed[2] = posX.posY - posX.areaOffsetY[1] * posX.sizeY - v6
  posX.absoluteDimensionsPressed[3] = posX.sizeX + posX.sizeX * posX.areaOffsetX[1] + posX.sizeX * posX.areaOffsetX[2] + v7 / g_screenAspectRatio
  posX.absoluteDimensionsPressed[4] = posX.sizeY + posX.sizeY * posX.areaOffsetY[1] + posX.sizeY * posX.areaOffsetY[2] + v7
end
function TouchHandler:updateAreaPosition(area)
  if area.overlay ~= nil then
    self:setAreaPosition(area, area.overlay.x, area.overlay.y, area.overlay.width, area.overlay.height)
  end
end
function TouchHandler.setTouchAreaVisibility(v0, posX, posY)
  posX.visibility = posY
end
function TouchHandler.raiseCallback(v0, posX, posY, isDown)
  local v9 = unpack(posX.extraArguments)
  posX.callback(...)
end
function TouchHandler:update(dt)
  if TouchHandler.DRAW_DEBUG then
    for touchId, v6 in pairs(self.debugPoints) do
      v6.time = v6.time - dt
      if not (v6.time < 0) then
        continue
      end
      table.remove(self.debugPoints, touchId)
    end
  end
end
function TouchHandler:draw()
  if TouchHandler.DRAW_DEBUG then
    local posX = posX:getIsGuiVisible()
    if not posX then
      -- TODO: structure LOP_FORNPREP (pc 16, target 77)
      if self.areas[1].visibility and self.areas[1].contextName == self.contextName then
        local touchId, v6, v7, v8 = self:getAreaDimensions(self.areas[1], false)
        drawOutlineRect(touchId, v6, v7, v8, self.debugLineWidth, self.debugLineHeight, 1, 0, 0, 1)
        if self.areas[1].isPressed then
          local v9, v10, v11, v12 = self:getAreaDimensions(self.areas[1], true)
          drawOutlineRect(v9, v10, v11, v12, self.debugLineWidth, self.debugLineHeight, 0, 1, 0, 1)
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 76, target 17)
    end
    for isUp, touchId in pairs(self.debugPoints) do
      drawPoint(touchId.x, touchId.y, self.debugPointWidth, self.debugPointHeight, 0, 1, 0, 1)
    end
  end
end
function TouchHandler:addDebugPoint(x, y)
  table.insert(self.debugPoints, {time = 5000, x = x, y = y})
end
