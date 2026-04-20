-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FocusManager = {TOP = "top", BOTTOM = "bottom", LEFT = "left", RIGHT = "right", EPSILON = 0.00001, DELAY_TIME = 50, FIRST_LOCK = 250}
FocusManager.guiFocusData = {}
FocusManager.currentFocusData = {focusElement = nil, highlightElement = nil, initialFocusElement = nil}
FocusManager.isFocusLocked = false
FocusManager.lastInput = {}
FocusManager.lockUntil = {}
FocusManager.autoIDcount = 0
{}[FocusManager.TOP] = FocusManager.BOTTOM
{}[FocusManager.BOTTOM] = FocusManager.TOP
{}[FocusManager.LEFT] = FocusManager.RIGHT
{}[FocusManager.RIGHT] = FocusManager.LEFT
FocusManager.OPPOSING_DIRECTIONS = {}
{}[FocusManager.TOP] = {0, 1}
{}[FocusManager.BOTTOM] = {0, -1}
{}[FocusManager.LEFT] = {-1, 0}
{}[FocusManager.RIGHT] = {1, 0}
FocusManager.DIRECTION_VECTORS = {}
FocusManager.DEBUG = false
FocusManager.allElements = {}
setmetatable(FocusManager.allElements, {})
function FocusManager:setGui(gui)
  if self.currentFocusData and self.currentFocusData.focusElement then
    self:unsetFocus(self.currentFocusData.focusElement)
  end
  self.currentGui = gui
  self.currentFocusData = self.guiFocusData[gui]
  if not self.currentFocusData then
    self.guiFocusData[gui] = {idToElementMapping = {}}
    self.currentFocusData = self.guiFocusData[gui]
  else
    if not self.currentFocusData.initialFocusElement then
    end
    if v2 ~= nil then
      v2.soundDisabled = true
      self:setFocus(v2)
      v2.soundDisabled = v2.soundDisabled
    end
  end
  self:resetFocusInputLocks()
end
function FocusManager:setSoundPlayer(guiSoundPlayer)
  self.soundPlayer = guiSoundPlayer
end
function FocusManager:getElementById(id)
  return self.currentFocusData.idToElementMapping[id]
end
function FocusManager:getFocusedElement()
  return self.currentFocusData.focusElement
end
function FocusManager.serveAutoFocusId()
  local focusId = string.format("focusAuto_%d", FocusManager.autoIDcount)
  FocusManager.autoIDcount = FocusManager.autoIDcount + 1
  return focusId
end
function FocusManager:loadElementFromXML(xmlFile, xmlBaseNode, element)
  local v4 = getXMLString(xmlFile, xmlBaseNode .. "#focusId")
  if not v4 then
    local v5 = FocusManager.serveAutoFocusId()
  end
  element.focusId = v4
  element.focusChangeData = {}
  if not element.focusChangeData[FocusManager.TOP] then
    local v7 = getXMLString(xmlFile, xmlBaseNode .. "#focusChangeTop")
    element.focusChangeData[FocusManager.TOP] = v7
  end
  if not element.focusChangeData[FocusManager.BOTTOM] then
    v7 = getXMLString(xmlFile, xmlBaseNode .. "#focusChangeBottom")
    element.focusChangeData[FocusManager.BOTTOM] = v7
  end
  if not element.focusChangeData[FocusManager.LEFT] then
    v7 = getXMLString(xmlFile, xmlBaseNode .. "#focusChangeLeft")
    element.focusChangeData[FocusManager.LEFT] = v7
  end
  if not element.focusChangeData[FocusManager.RIGHT] then
    v7 = getXMLString(xmlFile, xmlBaseNode .. "#focusChangeRight")
    element.focusChangeData[FocusManager.RIGHT] = v7
  end
  local v6 = getXMLString(xmlFile, xmlBaseNode .. "#focusInit")
  if v6 == nil then
  end
  element.focusActive = true
  v6 = getXMLString(xmlFile, xmlBaseNode .. "#focusInit")
  if v6 ~= "onOpen" then
  end
  element.isAlwaysFocusedOnOpen = true
  v6 = getXMLString(xmlFile, xmlBaseNode .. "#focusChangeOverride")
  if v6 then
    if element.target then
      -- if not v3.target.focusChangeOverride then goto L156 end
      element.focusChangeOverride = element.target[v6]
    else
      v7 = ClassUtil.getFunction(v6)
      self.focusChangeOverride = v7
    end
  end
  if FocusManager.allElements[element] == nil then
    FocusManager.allElements[element] = {}
  end
  table.insert(FocusManager.allElements[element], self.currentGui)
  self.currentFocusData.idToElementMapping[v4] = element
  if v5 then
    self.currentFocusData.initialFocusElement = element
    element.soundDisabled = true
    self:setFocus(element)
    element.soundDisabled = element.soundDisabled
    return
  end
  if not self.currentFocusData.focusElement then
    self.currentFocusData.focusElement = element
  end
end
function FocusManager:loadElementFromCustomValues(element, focusId, focusChangeData, focusActive, isAlwaysFocusedOnOpen)
  if focusId and self.currentFocusData.idToElementMapping[focusId] then
    return false
  end
  if not element.focusId then
    if not focusId then
      local v6 = FocusManager.serveAutoFocusId()
    end
    element.focusId = focusId
  end
  if not element.focusChangeData and not focusChangeData then
  end
  element.focusChangeData = v6
  element.focusActive = focusActive
  element.isAlwaysFocusedOnOpen = isAlwaysFocusedOnOpen
  if FocusManager.allElements[element] == nil then
    FocusManager.allElements[element] = {}
  end
  table.insert(FocusManager.allElements[element], self.currentGui)
  self.currentFocusData.idToElementMapping[element.focusId] = element
  if isAlwaysFocusedOnOpen then
    self.currentFocusData.initialFocusElement = element
  end
  if focusActive then
    self:setFocus(element)
  end
  for v10, v11 in pairs(element.elements) do
    if v6 then
      local v12 = self:loadElementFromCustomValues(v11, v11.focusId, v11.focusChangeData, v11.focusActive, v11.isAlwaysFocusedOnOpen)
    end
  end
  return v6
end
function FocusManager:removeElement(element)
  if not element.focusId then
    return
  end
  for v5, v6 in pairs(element.elements) do
    self:removeElement(v6)
  end
  if element.focusActive then
    element:onFocusLeave()
    v2:unsetFocus(element)
  end
  if FocusManager.allElements[element] ~= nil then
    for v5, v6 in ipairs(FocusManager.allElements[element]) do
      self.guiFocusData[v6].idToElementMapping[element.focusId] = nil
      if not (self.guiFocusData[v6].focusElement == element) then
        continue
      end
      self.guiFocusData[v6].focusElement = nil
    end
    FocusManager.allElements[element] = nil
  end
  self.currentFocusData.idToElementMapping[element.focusId] = nil
  element.focusId = nil
  element.focusChangeData = {}
  if self.currentFocusData.focusElement == element then
    self.currentFocusData.focusElement = nil
  end
end
function FocusManager.linkElements(v0, v1, v2, v3)
  if v3 == nil then
    v1.focusChangeData[v2] = "nil"
    return
  end
  v1.focusChangeData[v2] = v3.focusId
end
function FocusManager:inputEvent(action, value, eventUsed)
  if action == InputAction.MENU_AXIS_UP_DOWN and g_analogStickVTolerance >= value then
  end
  if action == InputAction.MENU_AXIS_UP_DOWN and value >= -g_analogStickVTolerance then
  end
  if action == InputAction.MENU_AXIS_LEFT_RIGHT and value >= -g_analogStickHTolerance then
  end
  if action == InputAction.MENU_AXIS_LEFT_RIGHT and g_analogStickHTolerance >= value then
  end
  if action == InputAction.MENU_AXIS_UP_DOWN then
    self:updateFocus(v4, v6, FocusManager.TOP, eventUsed)
    self:updateFocus(v4, v7, FocusManager.BOTTOM, eventUsed)
  elseif action == InputAction.MENU_AXIS_LEFT_RIGHT then
    self:updateFocus(v4, v8, FocusManager.LEFT, eventUsed)
    self:updateFocus(v4, v9, FocusManager.RIGHT, eventUsed)
  end
  if not eventUsed and v4 ~= nil and not v4.needExternalClick then
    if action ~= InputAction.MENU_ACCEPT then
    end
    if true then
      local v10 = self:isFocusInputLocked(action)
      if not v10 and v4.focusActive then
        v10 = v4:getIsVisible()
        if v10 then
          self.focusSystemMadeChanges = true
          v4:onFocusActivate()
          self.focusSystemMadeChanges = false
        end
      end
    end
  end
  if not eventUsed and not v6 and not v7 and not v8 and not v9 then
  end
  return v10
end
function FocusManager.getDirectionForAxisValue(inputAction, value)
  if value == nil then
    return nil
  end
  if inputAction == InputAction.MENU_AXIS_UP_DOWN then
    if value < 0 then
      return FocusManager.BOTTOM
    end
    -- if 0 >= v1 then goto L44 end
    return FocusManager.TOP
  end
  if inputAction == InputAction.MENU_AXIS_LEFT_RIGHT then
    if value < 0 then
      return FocusManager.LEFT
    end
    if 0 < value then
    end
  end
  return value
end
function FocusManager:isFocusInputLocked(inputAxis, value)
  local key = FocusManager.getDirectionForAxisValue(inputAxis, value)
  if key == nil and inputAxis ~= InputAction.MENU_AXIS_UP_DOWN and inputAxis ~= InputAction.MENU_AXIS_LEFT_RIGHT then
  end
  if self.lastInput[key] and g_time < self.lockUntil[key] then
    return true
  end
  return false
end
function FocusManager:lockFocusInput(axisAction, delay, value)
  local key = FocusManager.getDirectionForAxisValue(axisAction, value)
  if not key and axisAction ~= InputAction.MENU_AXIS_UP_DOWN and axisAction ~= InputAction.MENU_AXIS_LEFT_RIGHT then
  end
  self.lastInput[key] = g_time
  self.lockUntil[key] = g_time + delay
end
function FocusManager:releaseMovementFocusInput(action)
  if action == InputAction.MENU_AXIS_LEFT_RIGHT then
    self.lastInput[FocusManager.LEFT] = nil
    self.lockUntil[FocusManager.LEFT] = nil
    self.lastInput[FocusManager.RIGHT] = nil
    self.lockUntil[FocusManager.RIGHT] = nil
    return
  end
  if action == InputAction.MENU_AXIS_UP_DOWN then
    self.lastInput[FocusManager.TOP] = nil
    self.lockUntil[FocusManager.TOP] = nil
    self.lastInput[FocusManager.BOTTOM] = nil
    self.lockUntil[FocusManager.BOTTOM] = nil
  end
end
function FocusManager:resetFocusInputLocks()
  for v4, v5 in pairs(self.lastInput) do
    self.lastInput[v4] = nil
  end
  for v4, v5 in pairs(self.lockUntil) do
    self.lockUntil[v4] = 0
  end
end
function FocusManager.getClosestPointOnBoundingBox(x, y, boxMinX, boxMinY, boxMaxX, boxMaxY)
  if x < boxMinX then
  elseif boxMaxX < x then
  end
  if y < boxMinY then
    return v6, boxMinY
  end
  if boxMaxY < y then
  end
  return v6, v7
end
function FocusManager:getShortestBoundingBoxVector(y, boxMinX)
  local boxMinY, boxMaxX = FocusManager.getClosestPointOnBoundingBox(boxMinX[1], boxMinX[2], self[1], self[2], self[3], self[4])
  local boxMaxY, v6 = FocusManager.getClosestPointOnBoundingBox(boxMinY, boxMaxX, y[1], y[2], y[3], y[4])
  return boxMaxY - boxMinY, v6 - boxMaxX
end
function FocusManager:checkElementDistance(y, boxMinX, boxMinY, boxMaxX, boxMaxY, v6)
  local v9 = self:getBorders()
  v9[2] = v9[2] + boxMaxX
  v9[4] = v9[4] + boxMaxX
  local v10 = self:getCenter()
  v10[2] = v10[2] + boxMaxX
  if y ~= self and not y.disabled then
    local v11 = y:getIsVisible()
    if v11 then
      v11 = y:canReceiveFocus()
      if v11 then
        v11 = y:isChildOf(self)
        if not v11 then
          v11 = self:isChildOf(y)
          if not v11 then
            v11 = y:getBorders()
            local v12 = y:getCenter()
            local v13, v14 = FocusManager.getShortestBoundingBoxVector(v9, v11, v12)
            local v15 = MathUtil.vector2LengthSq(v13, v14)
            local v16 = MathUtil.dotProduct(v13, v14, 0, boxMinX, boxMinY, 0)
            if v15 < FocusManager.EPSILON then
              local v17 = MathUtil.dotProduct(v12[1] - v10[1], v12[2] - v10[2], 0, boxMinX, boxMinY, 0)
            end
            if 0 < v16 then
              if boxMaxY then
                local v18 = math.abs(v6 - v15)
                -- if v18 >= FocusManager.EPSILON then goto L198 end
                v18 = boxMaxY:getBorders()
                local v19 = boxMaxY:getCenter()
                local v20, v21 = FocusManager.getShortestBoundingBoxVector(v9, v18, v19)
                local v22 = MathUtil.dotProduct(v20, v21, 0, boxMinX, boxMinY, 0)
                local v23 = math.abs(v22 - v16)
                if v23 < FocusManager.EPSILON then
                  if 0 < boxMinY then
                    if boxMaxY.absPosition[1] >= y.absPosition[1] then
                    end
                    -- goto L201  (LOP_JUMP +49)
                  end
                  if boxMinY < 0 then
                    if y.absPosition[1] >= boxMaxY.absPosition[1] then
                    end
                    -- goto L201  (LOP_JUMP +35)
                  end
                  if 0 < boxMinX then
                    if boxMaxY.absPosition[2] >= y.absPosition[2] then
                    end
                    -- goto L201  (LOP_JUMP +21)
                  end
                  -- if v2 >= 0 then goto L201 end
                  if y.absPosition[2] >= boxMaxY.absPosition[2] then
                  end
                  -- goto L201  (LOP_JUMP +7)
                end
                -- if v22 >= v16 then goto L201 end
              elseif v15 < v6 then
              end
              if v17 then
              end
            end
          end
        end
      end
    end
  end
  return v7, v8
end
function FocusManager:getNextFocusElement(element, direction)
  if element.focusChangeData[direction] then
    return self.currentFocusData.idToElementMapping[element.focusChangeData[direction]], direction
  end
  local boxMaxX, boxMaxY = unpack(FocusManager.DIRECTION_VECTORS[direction])
  for v11, v12 in pairs(self.currentFocusData.idToElementMapping) do
    local v13, v14 = FocusManager.checkElementDistance(element, v12, boxMaxX, boxMaxY, 0, v6, v7)
  end
  if v6 == nil then
    if direction == FocusManager.LEFT then
      v8, v9 = self:getNextFocusElement(element, FocusManager.TOP)
    elseif direction == FocusManager.RIGHT then
      v8, v9 = self:getNextFocusElement(element, FocusManager.BOTTOM)
    else
      if element.parent and element.parent.wrapAround then
      end
      if direction == FocusManager.TOP then
      elseif direction == FocusManager.BOTTOM then
      end
      for v13, v14 in pairs(v8) do
        local v15, v16 = FocusManager.checkElementDistance(element, v14, boxMaxX, boxMaxY, v9, v6, v7)
      end
    end
  end
  return v6, direction
end
function FocusManager.getNestedFocusTarget(element, direction)
  while element do
    if not (boxMinY ~= direction) then
      break
    end
    local boxMaxX = direction:getFocusTarget(FocusManager.OPPOSING_DIRECTIONS[direction], direction)
  end
  return direction
end
function FocusManager:updateFocus(element, isFocusMoving, direction, updateOnly)
  if element == nil then
    return
  end
  if isFocusMoving then
    if self.lastInput[direction] then
      if self.lockUntil[direction] <= g_time then
        self.lastInput[direction] = nil
        self.lockJustReleased = true
      end
      return
    end
    if updateOnly then
      return
    end
    self.lastInput[direction] = g_time
    if self.lockJustReleased then
      self.lockUntil[direction] = g_time + self.DELAY_TIME
    else
      self.lockUntil[direction] = g_time + self.FIRST_LOCK
    end
    self.lockJustReleased = false
    if self.currentFocusData.focusElement ~= element then
      return
    end
    local boxMaxY = element:shouldFocusChange(direction)
    if boxMaxY then
      if element.focusChangeOverride then
        if element.target then
          local v7, v8 = element.focusChangeOverride(element.target, direction)
        else
          v7, v8 = element:focusChangeOverride(direction)
        end
      end
      if not v6 then
        local v8, v9 = self:getNextFocusElement(element, direction)
      end
      if boxMaxY then
        v8 = boxMaxY:canReceiveFocus()
        if v8 then
          self:setFocus(boxMaxY, v7)
          return boxMaxY
        end
      end
      if element.focusChangeOverride then
        v9 = element:focusChangeOverride(direction)
        -- if v9 then goto L141 end
      end
      while true do
        if not (0 < v9) then
          break
        end
        if not (boxMaxY ~= nil) then
          break
        end
        v10, v11 = self:getNextFocusElement(boxMaxY, direction)
        if v10 ~= nil then
          v10 = v10:canReceiveFocus()
          if v10 then
            break
          end
        end
      end
      self:setFocus(v8, v7)
    end
  end
end
function FocusManager:setHighlight(element)
  if self.currentFocusData.highlightElement and self.currentFocusData.highlightElement == element then
    return
  end
  self:unsetHighlight(self.currentFocusData.highlightElement)
  if element.disallowFocusedHighlight and self.currentFocusData.focusElement then
    -- if v0.currentFocusData.focusElement == v1 then goto L70 end
  end
  self.currentFocusData.highlightElement = element
  element:storeOverlayState()
  element:setOverlayState(GuiOverlay.STATE_HIGHLIGHTED)
  element:onHighlight()
  local direction = element:getSoundSuppressed()
  if not direction then
    direction = element:getIsVisible()
    if direction and element.playHoverSoundOnFocus ~= false and not element.soundDisabled then
      direction:playSample(GuiSoundPlayer.SOUND_SAMPLES.HOVER)
    end
  end
end
function FocusManager:unsetHighlight(element)
  if self.currentFocusData.highlightElement and self.currentFocusData.highlightElement == element then
    local direction = direction:getOverlayState()
    if direction == GuiOverlay.STATE_HIGHLIGHTED then
      boxMinY:setOverlayState(GuiOverlay.STATE_NORMAL)
      boxMinY:restoreOverlayState()
    end
    boxMinY:onHighlightRemove()
    self.currentFocusData.highlightElement = nil
  end
end
function FocusManager:setFocus(element, direction, ...)
  if not FocusManager.isFocusLocked and element ~= nil then
    local boxMinY = element:canReceiveFocus()
    -- if v3 then goto L14 end
  end
  return false
  boxMinY = FocusManager.getNestedFocusTarget(element, direction)
  if boxMinY.targetName ~= self.currentGui then
    return false
  end
  if self.currentFocusData.focusElement and self.currentFocusData.focusElement == boxMinY and self.currentFocusData.focusElement.focusActive then
    return false
  end
  if self.currentFocusData.focusElement ~= nil then
    self:unsetFocus(self.currentFocusData.focusElement)
    self:unsetHighlight(self.currentFocusData.highlightElement)
  end
  boxMinY.focusActive = true
  self.currentFocusData.focusElement = boxMinY
  boxMinY:onFocusEnter(...)
  if FocusManager.DEBUG then
    log("focus changed to element", boxMinY, "; ID:", boxMinY.id, "; profile:", boxMinY.profile, "; type:", boxMinY.typeName)
  end
  self:setElementFocusOverlayState(boxMinY, true)
  local boxMaxX = element:getSoundSuppressed()
  if not boxMaxX then
    boxMaxX = element:getIsVisible()
    if boxMaxX and element.playHoverSoundOnFocus ~= false and not element.soundDisabled then
      if not boxMinY.customFocusSample then
      end
      boxMaxX:playSample(v6)
    end
  end
  return true
end
function FocusManager:unsetFocus(element, ...)
  if self.currentFocusData.focusElement == element then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L10
  end
  return
  if not element.focusActive then
    return
  end
  direction.focusActive = false
  self:setElementFocusOverlayState(direction, false)
  direction:onFocusLeave(...)
end
function FocusManager.setElementFocusOverlayState(x, element, direction, boxMinY)
  if boxMinY == nil then
  end
  if direction then
    if boxMinY then
      local boxMaxX = element:getOverlayState()
      if boxMaxX ~= GuiOverlay.STATE_NORMAL then
        element:storeOverlayState()
      end
    end
    element:setOverlayState(GuiOverlay.STATE_FOCUSED)
    return
  end
  if boxMinY then
    element:restoreOverlayState()
  end
  boxMaxX = element:getOverlayState()
  if boxMaxX == GuiOverlay.STATE_FOCUSED then
    element:setOverlayState(GuiOverlay.STATE_NORMAL)
  end
end
function FocusManager.requireLock(x)
  FocusManager.isFocusLocked = true
end
function FocusManager.releaseLock(x)
  FocusManager.isFocusLocked = false
end
function FocusManager.isLocked(x)
  return FocusManager.isFocusLocked
end
function FocusManager:isDirectionLocked(direction)
  if self.lastInput[direction] == nil then
  end
  return true
end
function FocusManager:hasFocus(element)
  if self.currentFocusData.focusElement == element then
  end
  return direction
end
function FocusManager.getFocusOverrideFunction(x, element, direction, boxMinY)
  if element ~= nil then
    -- if #v1 >= 1 then goto L8 end
  end
  return function(x, element)
    return false, nil
  end
  return function(x, element)
    for boxMaxY, v6 in pairs(u0) do
      if not (element == v6) then
        continue
      end
      if u1 then
        local v7 = v7:getNextFocusElement(u3, element)
        if not v7 then
          continue
        end
        return true, v7
      else
        return true, u3
      end
    end
    return false, nil
  end
end
function FocusManager:deleteGuiFocusData(element)
  self.guiFocusData[element] = nil
end
function FocusManager:drawDebug()
  if self.currentFocusData.focusElement ~= nil and self.currentFocusData.focusElement.focusActive then
    drawFilledRect(self.currentFocusData.focusElement.absPosition[1], self.currentFocusData.focusElement.absPosition[2], self.currentFocusData.focusElement.size[1], self.currentFocusData.focusElement.size[2], 1, 0, 0, 0.5, nil, nil, nil, nil)
  end
end
