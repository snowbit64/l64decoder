-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputHelpDisplay = {}
local InputHelpDisplay_mt = Class(InputHelpDisplay, HUDDisplayElement)
InputHelpDisplay.ENTRY_COUNT_PC = 8
InputHelpDisplay.ENTRY_COUNT_CONSOLE = 8
InputHelpDisplay.ENTRY_COUNT_PRIO_PC = 16
InputHelpDisplay.ENTRY_COUNT_PRIO_CONSOLE = 16
InputHelpDisplay.L10N_CONTROLS_LABEL = "ui_controls"
function InputHelpDisplay.new(hudAtlasPath, messageCenter, inputManager, inputDisplayManager, ingameMap, communicationDisplay, ingameMessage, isConsoleVersion)
  local backgroundOverlay = InputHelpDisplay.createBackground()
  local v10 = v10:superClass()
  local v9 = v10.new(backgroundOverlay, nil, u0)
  v9.messageCenter = messageCenter
  v9.inputManager = inputManager
  v9.inputDisplayManager = inputDisplayManager
  v9.ingameMap = ingameMap
  v9.communicationDisplay = communicationDisplay
  v9.ingameMessage = ingameMessage
  v9.isConsoleVersion = isConsoleVersion
  v9.isOverlayMenuVisible = false
  local v11 = v11:getText(InputHelpDisplay.L10N_CONTROLS_LABEL)
  v10 = utf8ToUpper(...)
  v9.controlsLabelText = v10
  v9.vehicle = nil
  v9.vehicleHudExtensions = {}
  v9.extraHelpTexts = {}
  v9.extraExtensionVehicleNodeIds = {}
  v9.currentAvailableHeight = 0
  v9.comboInputGlyphs = {}
  v9.entries = {}
  v9.entryGlyphWidths = {}
  v9.inputGlyphs = {}
  v9.horizontalSeparators = {}
  v9.frame = nil
  v9.entriesFrame = nil
  v9.mouseComboHeader = nil
  v9.gamepadComboHeader = nil
  v9.customHelpElements = {}
  v9.headerHeight = 0
  v9.entryWidth = 0
  v9.entryHeight = 0
  v9.controlsLabelTextSize = 0
  v9.controlsLabelOffsetX = 0
  v9.controlsLabelOffsetY = 0
  v9.helpTextSize = 0
  v9.helpTextOffsetX = 0
  v9.helpTextOffsetY = 0
  v9.extraTextOffsetX = 0
  v9.extraTextOffsetY = 0
  v9.axisIconOffsetX = 0
  v9.axisIconWidth = 0
  v9.axisIconHeight = 0
  v9.frameOffsetX = 0
  v9.frameOffsetY = 0
  v9.frameBarOffsetY = 0
  v9.hasComboCommands = false
  v9.visibleHelpElements = {}
  v9.currentHelpElementCount = 0
  v9.requireHudExtensionsRefresh = false
  v9.numUsedEntries = 0
  v9.extensionsHeight = 0
  v9.extensionsStartY = 0
  v9.comboIterator = {}
  v9.animationAvailableHeight = math.huge
  v9.animationOffsetX = 0
  v9.animationOffsetY = 0
  v10 = Overlay.new(g_baseUIFilename, 0, 0, 1, 1)
  v9.extensionBg = v10
  v10:setUVs(g_colorBgUVs)
  v10:setColor(0, 0, 0, 0.56)
  v9:createComponents(hudAtlasPath)
  v9:subscribeMessages()
  return v9
end
function InputHelpDisplay:subscribeMessages()
  v1:subscribe(MessageType.INPUT_DEVICES_CHANGED, self.onInputDevicesChanged, self)
end
function InputHelpDisplay:delete()
  v1:unsubscribeAll(self)
  if self.frame ~= nil then
    v1:delete()
  end
  if self.extensionBg ~= nil then
    v1:delete()
  end
  for v4, v5 in pairs(self.vehicleHudExtensions) do
    v5:delete()
    self.vehicleHudExtensions[v4] = nil
  end
  v2 = v2:superClass()
  v2.delete(self)
end
function InputHelpDisplay:addHelpText(text)
  table.insert(self.extraHelpTexts, text)
end
function InputHelpDisplay:addExtraExtensionVehicleNodeId(vehicleNodeId)
  local v2 = table.addElement(self.extraExtensionVehicleNodeIds, vehicleNodeId)
  if v2 then
    self.requireHudExtensionsRefresh = true
  end
end
function InputHelpDisplay:removeExtraExtensionVehicleNodeId(vehicleNodeId)
  local v2 = table.removeElement(self.extraExtensionVehicleNodeIds, vehicleNodeId)
  if v2 then
    self.requireHudExtensionsRefresh = true
  end
end
function InputHelpDisplay.getHidingTranslation(v0)
  return -0.5, 0
end
function InputHelpDisplay:addCustomEntry(actionName1, actionName2, displayText, ignoreComboButtons)
  local v5 = v5:getControllerSymbolOverlays(actionName1, actionName2, displayText, ignoreComboButtons)
  local v6 = v6:getContextName()
  if self.customHelpElements[v6] == nil then
    self.customHelpElements[v6] = {}
  end
  table.insert(v7, v5)
end
function InputHelpDisplay:clearCustomEntries()
  local v3 = v3:getContextName()
  if self.customHelpElements[v3] ~= nil then
    for v5 in pairs(self.customHelpElements) do
      self.customHelpElements[v5] = nil
    end
  end
end
function InputHelpDisplay:setVehicle(vehicle)
  self.vehicle = vehicle
  self.lastVehicleSpecHash = nil
  self.requireHudExtensionsRefresh = true
end
function InputHelpDisplay:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = self:getVisible()
  if v2 then
    self:updateInputContext()
    self:updateHUDExtensions()
    if self.sizeAndPositionDirty then
      self:updateSizeAndPositions()
      self.sizeAndPositionDirty = false
    end
    for v6 in pairs(self.extraHelpTexts) do
      v2[v6] = nil
    end
  end
  v2 = v2:getFinished()
  if not v2 then
    self:storeScaledValues()
    self.sizeAndPositionDirty = true
  end
end
function InputHelpDisplay:updateSizeAndPositions()
  local v2, v3 = self:getTopLeftPosition()
  local v6 = v6:getHeight()
  if self.hasComboCommands then
  end
  self.extensionsStartY = v5 - v1 + self.numUsedEntries * self.entryHeight
  local v10 = self:getWidth()
  self:setDimension(v10, v1 + self.numUsedEntries * self.entryHeight + self.extensionsHeight)
  self:setPosition(v2, v3 - v1 + self.numUsedEntries * self.entryHeight + self.extensionsHeight)
  local v8 = self:getVisible()
  if v8 then
    v8 = v8:getFinished()
    if not v8 then
      self:storeOriginalPosition()
    end
  end
  v8:setPosition(v4, v5 - self.headerHeight)
  v8:setPosition(v4, v5 - self.headerHeight)
  v8:setPosition(v4, v7)
  v10 = self:getHeight()
  v9:setPosition(v4, v5 - v10 + self.frameOffsetY + self.frameBarOffsetY)
end
function InputHelpDisplay:refreshHUDExtensions()
  for v4, v5 in pairs(self.vehicleHudExtensions) do
    v5:delete()
    self.vehicleHudExtensions[v4] = nil
  end
  v1 = self:getScale()
  if self.vehicle ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 37, target 42)
    function(self, v1)
      if u0[self] ~= nil then
        return
      end
      -- TODO: structure LOP_FORNPREP (pc 10, target 63)
      if u1.vehicleHudExtensions[self.specializations[1]] == nil then
        local v7 = VehicleHUDExtension.hasHUDExtensionForSpecialization(self.specializations[1])
        if v7 then
          v7 = VehicleHUDExtension.createHUDExtensionForSpecialization(self.specializations[1], self, u2, InputHelpDisplay.COLOR.HELP_TEXT, u1.helpTextSize)
          if v1 then
            v7 = Utils.overwrittenFunction(v7.canDraw, function(self, v1)
              local v2 = v1(self)
              if v2 then
                v2 = v2:canPlayerAccess(u0.vehicle)
              end
              return v2
            end)
            v7.canDraw = v7
          end
          table.addElement(u1.vehicleHudExtensions, v6)
          u0[self] = true
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 62, target 11)
    end(self.vehicle.rootVehicle.childVehicles[1])
    -- TODO: structure LOP_FORNLOOP (pc 41, target 38)
  end
  -- TODO: structure LOP_FORNPREP (pc 47, target 83)
  if g_currentMission.nodeToObject[self.extraExtensionVehicleNodeIds[#self.extraExtensionVehicleNodeIds]] == nil then
    table.remove(self.extraExtensionVehicleNodeIds, #self.extraExtensionVehicleNodeIds)
  elseif self.vehicle ~= g_currentMission.nodeToObject[self.extraExtensionVehicleNodeIds[#self.extraExtensionVehicleNodeIds]] then
    if g_currentMission.nodeToObject[self.extraExtensionVehicleNodeIds[#self.extraExtensionVehicleNodeIds]].getIsPlayerInTrigger ~= nil then
      -- if not g_currentMission.nodeToObject[v0.extraExtensionVehicleNodeIds[#v0.extraExtensionVehicleNodeIds]].getIsPlayerInTrigger then goto L82 end
      local v9 = g_currentMission.nodeToObject[self.extraExtensionVehicleNodeIds[#self.extraExtensionVehicleNodeIds]]:getIsPlayerInTrigger()
      -- if not v9 then goto L82 end
    end
    v3(v8, true)
  end
  -- TODO: structure LOP_FORNLOOP (pc 82, target 48)
  table.sort(self.vehicleHudExtensions, VehicleHUDExtension.sortHUDExtensions)
end
function InputHelpDisplay:updateHUDExtensions()
  if self.vehicle ~= nil then
    local currentHash = self:getCurrentVehicleTypeHash(self.vehicle)
    -- if v1 == v0.lastVehicleSpecHash then goto L22 end
    self.requireHudExtensionsRefresh = true
    self.lastVehicleSpecHash = currentHash
  else
    self.lastVehicleSpecHash = nil
  end
  -- TODO: structure LOP_FORNPREP (pc 27, target 46)
  if g_currentMission.nodeToObject[self.extraExtensionVehicleNodeIds[#self.extraExtensionVehicleNodeIds]] == nil then
    table.remove(self.extraExtensionVehicleNodeIds, #self.extraExtensionVehicleNodeIds)
    self.requireHudExtensionsRefresh = true
  end
  -- TODO: structure LOP_FORNLOOP (pc 45, target 28)
  currentHash = table.size(self.extraExtensionVehicleNodeIds)
  if self.lastExtraExtensionVehiclesCount ~= currentHash then
    self.lastExtraExtensionVehiclesCount = currentHash
    self.requireHudExtensionsRefresh = true
  end
  if self.requireHudExtensionsRefresh then
    self:refreshHUDExtensions()
    self.requireHudExtensionsRefresh = false
  end
  for v6, v7 in pairs(self.vehicleHudExtensions) do
    local v8 = v7:getDisplayHeight()
    local v9 = v7:canDraw()
    if not v9 then
      continue
    end
    if not (v2 + v8 <= self.currentAvailableHeight) then
      continue
    end
  end
  if not self.sizeAndPositionDirty and self.extensionsHeight == v2 then
  end
  self.sizeAndPositionDirty = v3
  self.extensionsHeight = v2
end
function InputHelpDisplay.getCurrentVehicleTypeHash(v0, v1)
  -- TODO: structure LOP_FORNPREP (pc 8, target 14)
  -- TODO: structure LOP_FORNLOOP (pc 13, target 9)
  return "" .. v1.typeName
end
function InputHelpDisplay:getAvailableHeight()
  local v1 = v1:getRequiredHeight()
  local v3 = v3:getVisible()
  if v3 then
    local v3, v4 = v3:getPosition()
    local v5 = v5:getHeight()
  end
  v3 = math.max(v1, v2)
  return 1 - g_safeFrameOffsetY * 2 - v3 - self.minimumMapSpacingY
end
function InputHelpDisplay:updateInputContext()
  local availableHeight = self:getAvailableHeight()
  local v2 = v2:getFinished()
  if not v2 then
    v2 = math.min(availableHeight, self.animationAvailableHeight)
  end
  local v2, v3 = v2:getComboCommandPressedMask()
  if not self.isConsoleVersion then
    local v5 = v5:getInputHelpMode()
    if v5 ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
  end
  self:updateComboHeaders(v4, v3, v2)
  if self.hasComboCommands then
  end
  local v5, v6 = self:getInputHelpElements(availableHeight, v2, v3, v4)
  self.visibleHelpElements = v5
  for v10, v11 in pairs(self.extraHelpTexts) do
    if not (0 <= availableHeight - self.entryHeight) then
      break
    end
    local v12 = InputHelpElement.new(nil, nil, nil, nil, nil, v11)
    table.insert(v5, v12)
    continue
    break
  end
  self:updateEntries(v5)
  self.currentAvailableHeight = availableHeight
end
function InputHelpDisplay:updateEntries(helpElements)
  local v4 = math.min(#helpElements - 1, #self.entries - 1)
  if 0 < self.extensionsHeight then
    local v5 = v5:getIsLarge()
    if not v5 then
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 27, target 155)
  if 1 <= #helpElements then
    if 0 >= #helpElements[1].buttons and 0 >= #helpElements[1].keys then
    end
    if v9.textLeft == "" then
    end
    v8:setVisible(v10 or true)
    v12:setVisible(not true)
    v12:setVisible(not true)
    if v9.actionName ~= "" then
      if v9.actionName2 ~= "" then
        v12:setActions({v9.actionName, v9.actionName2}, nil, nil, v9.inlineModifierButtons)
      else
        v12:setAction(v9.actionName, nil, nil, v9.inlineModifierButtons)
      end
      local v13 = v13:getGlyphWidth()
      self.entryGlyphWidths[v7] = v13
      v12:setDimension(self.entryGlyphWidths[v7] + 2 * self.inputGlyphs[v7].spacing)
      -- goto L154  (LOP_JUMP +9)
    end
    self.entryGlyphWidths[v7] = 0
  else
    self.entries[1]:setVisible(false)
  end
  -- TODO: structure LOP_FORNLOOP (pc 154, target 28)
  -- TODO: structure LOP_FORNPREP (pc 160, target 172)
  if 1 > v4 then
  end
  v8:setVisible(true)
  -- TODO: structure LOP_FORNLOOP (pc 171, target 161)
  if not self.sizeAndPositionDirty and self.numUsedEntries == v2 then
  end
  self.sizeAndPositionDirty = v5
  self.numUsedEntries = v2
end
function InputHelpDisplay:updateComboHeaders(useGamepadButtons, pressedComboMaskMouse, pressedComboMaskGamepad)
  local v4 = v4:getComboHelpElements(useGamepadButtons)
  local v6 = next(v4)
  if v6 == nil then
  end
  if not self.sizeAndPositionDirty and self.hasComboCommands == true then
  end
  self.sizeAndPositionDirty = v6
  self.hasComboCommands = v5
  if self.hasComboCommands then
    self:updateComboInputGlyphs(v4, pressedComboMaskMouse, pressedComboMaskGamepad)
  end
  if self.hasComboCommands then
  end
  v6:setVisible(v8)
  v6:setVisible(self.hasComboCommands and useGamepadButtons)
end
function InputHelpDisplay:updateComboInputGlyphs(comboActionStatus, pressedComboMaskMouse, pressedComboMaskGamepad)
  self.comboIterator[InputBinding.MOUSE_COMBOS] = pressedComboMaskMouse
  self.comboIterator[InputBinding.GAMEPAD_COMBOS] = pressedComboMaskGamepad
  for v7, v8 in pairs(self.comboIterator) do
    for v12, v13 in pairs(v7) do
      if comboActionStatus[v12] then
        self.comboInputGlyphs[v12]:setVisible(true)
        local v16 = bitAND(v8, v13.mask)
        if v16 == 0 then
        end
        if true then
          v14:setButtonGlyphColor(InputHelpDisplay.COLOR.COMBO_GLYPH_PRESSED)
          continue
        end
        v14:setButtonGlyphColor(InputHelpDisplay.COLOR.COMBO_GLYPH)
      else
        self.comboInputGlyphs[v12]:setVisible(false)
      end
    end
  end
end
function InputHelpDisplay:getInputHelpElements(availableHeight, pressedComboMaskGamepad, pressedComboMaskMouse, useGamepadButtons)
  if useGamepadButtons then
    -- if v2 then goto L4 end
  end
  if pressedComboMaskMouse == 0 then
  end
  local v8 = v8:getEventHelpElements(v5, useGamepadButtons)
  if #v8 == 0 and not self.hasComboCommands and true then
    local v9 = v9:getEventHelpElements(0, useGamepadButtons)
  end
  self.currentHelpElementCount = #v8
  while true do
    if not (v10 + self.entryHeight <= availableHeight) then
      break
    end
    if not (v11 <= #v8) then
      break
    end
    v12 = self:getIsHelpElementAllowed(v9, v8[v11])
    if not v12 then
      break
    end
    table.insert(v9, v8[v11])
  end
  local v14 = v14:getContextName()
  if self.customHelpElements[v14] ~= nil then
    self.currentHelpElementCount = self.currentHelpElementCount + #self.customHelpElements[v14]
    while true do
      if not (v10 + self.entryHeight <= availableHeight) then
        break
      end
      if not (v11 <= #v12) then
        break
      end
      if v12[v11] ~= InputDisplayManager.NO_HELP_ELEMENT then
        v14 = v14:getActionByName(v12[v11].actionName)
        if v14 ~= nil then
          if v14.comboMaskGamepad == pressedComboMaskGamepad and v14.comboMaskMouse ~= pressedComboMaskMouse then
          end
          if v14.comboMaskGamepad == 0 and v14.comboMaskMouse == 0 then
          end
          if not v15 then
            -- if not v16 then goto L138 end
          end
          table.insert(v9, v13)
        end
      end
    end
  end
  return v9, v10
end
function InputHelpDisplay:setAnimationAvailableHeight(value)
  local v4 = self:getAvailableHeight()
  local v2 = math.min(...)
  self.animationAvailableHeight = v2
end
function InputHelpDisplay:setAnimationOffset(offX, offY)
  self.animationOffsetX = offX
  self.animationOffsetY = offY
end
function InputHelpDisplay:animateHide()
  local v1, v2 = self:getHidingTranslation()
  local sequence = TweenSequence.new(self)
  local v6 = self:getAvailableHeight()
  local v4 = Tween.new(self.setAnimationAvailableHeight, v6, 0, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  local v5 = MultiValueTween.new(self.setAnimationOffset, {0, 0}, {v1, v2}, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  sequence:addTween(v4)
  sequence:addTween(v5)
  sequence:addCallback(self.onAnimateVisibilityFinished, false)
  sequence:start()
  self.animation = sequence
end
function InputHelpDisplay:animateShow()
  local v2 = v2:superClass()
  v2.setVisible(self, true)
  local v1, v2 = self:getHidingTranslation()
  local sequence = TweenSequence.new(self)
  local v4 = MultiValueTween.new(self.setAnimationOffset, {v1, v2}, {0, 0}, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  local v8 = self:getAvailableHeight()
  local v5 = Tween.new(self.setAnimationAvailableHeight, 0, v8, HUDDisplayElement.MOVE_ANIMATION_DURATION)
  sequence:addTween(v4)
  sequence:addTween(v5)
  sequence:addCallback(self.onAnimateVisibilityFinished, true)
  sequence:start()
  self.animation = sequence
end
function InputHelpDisplay.onAnimateVisibilityFinished(v0, v1)
  local v3 = v3:superClass()
  v3.onAnimateVisibilityFinished(v0, v1)
end
function InputHelpDisplay:onInputDevicesChanged()
  for v4, v5 in pairs({InputBinding.ORDERED_MOUSE_COMBOS, InputBinding.ORDERED_GAMEPAD_COMBOS}) do
    for v9, v10 in ipairs(v5) do
      local v13 = self.comboInputGlyphs[v10.controls]:getGlyphWidth()
      self.comboInputGlyphs[v10.controls]:setAction(v10.controls, nil, nil, false, true)
      local v14 = self.comboInputGlyphs[v10.controls]:getGlyphWidth()
      if not (v13 ~= v14) then
        continue
      end
      if not (1 < v9) then
        continue
      end
      local v15, v16 = self.comboInputGlyphs[v10.controls]:getPosition()
      if v9 == #v5 then
      else
      end
      v12:setPosition(v15, v16)
    end
  end
end
function InputHelpDisplay:onMenuVisibilityChange(isMenuVisible, isOverlayMenu)
  self.isOverlayMenuVisible = isMenuVisible and isOverlayMenu
end
function InputHelpDisplay:draw()
  local v2 = self:getVisible()
  if v2 then
    -- if 0 < #v0.visibleHelpElements then goto L13 end
  end
  if not self.hasComboCommands then
    local v3 = v3:getFinished()
    if not v3 and 0 >= self.currentHelpElementCount then
    end
  end
  if v2 then
    local v4 = v4:superClass()
    v4.draw(self)
  end
  if v1 then
    self:drawHelpInfos()
    self:drawVehicleHUDExtensions()
    self:drawControlsLabel()
  end
end
function InputHelpDisplay:drawControlsLabel()
  setTextBold(true)
  local v2 = unpack(InputHelpDisplay.COLOR.CONTROLS_LABEL)
  setTextColor(...)
  setTextAlignment(RenderText.ALIGN_LEFT)
  local v1, v2 = self:getPosition()
  local v4 = self:getHeight()
  renderText(v1 + self.frameOffsetX + self.controlsLabelOffsetX, v2 + v4 + self.frameOffsetY + self.controlsLabelOffsetY, self.controlsLabelTextSize, self.controlsLabelText)
end
function InputHelpDisplay:drawHelpInfos()
  local v1, v2 = v1:getPosition()
  local v3 = v3:getHeight()
  for v7, v8 in ipairs(self.visibleHelpElements) do
    if v8.iconOverlay ~= nil then
      v12:setPosition(v1 + self.entryWidth - self.axisIconWidth + self.axisIconOffsetX, v2 + v3 - v7 * self.entryHeight + self.entryHeight * 0.5)
      v12:setDimension(self.axisIconWidth, self.axisIconHeight)
      v12:render()
    else
      setTextBold(false)
      local v11 = unpack(InputHelpDisplay.COLOR.HELP_TEXT)
      setTextColor(...)
      if v8.textRight ~= "" then
        setTextAlignment(RenderText.ALIGN_RIGHT)
        local v14 = getTextWidth(self.helpTextSize, v8.textRight)
      elseif v8.textLeft ~= "" then
        setTextAlignment(RenderText.ALIGN_LEFT)
      end
      if (self.entryGlyphWidths[v7] or 0) ~= 0 then
        local v15 = v15:getPosition()
        -- if v15 then goto L155 end
      end
      if 0 + v14 < v13 then
        renderText(v11, v12, self.helpTextSize, v10)
      else
        local v19 = math.abs(self.helpTextOffsetX)
        setTextWrapWidth(v11 - 0 + v14 - v19)
        setTextLineBounds(0, 2)
        renderText(v11, v9 + self.entryHeight * 0.5 + self.helpTextOffsetY, self.helpTextSize, v10)
        setTextWrapWidth(0)
        setTextLineBounds(0, 0)
      end
    end
  end
end
function InputHelpDisplay:drawVehicleHUDExtensions()
  if 0 < self.extensionsHeight then
    local leftPosX = self:getPosition()
    local width = self:getWidth()
    for v8, v9 in pairs(self.vehicleHudExtensions) do
      local v10 = v9:getDisplayHeight()
      local v11 = v9:canDraw()
      if not v11 then
        continue
      end
      if not (v4 + v10 <= self.extensionsHeight) then
        continue
      end
      v11:setPosition(leftPosX, v3 - v10 - self.entryOffsetY)
      v11:setDimension(width, v10)
      v11:render()
      v9:draw(leftPosX + self.extraTextOffsetX, leftPosX + width + self.helpTextOffsetX, v3 - v10 - self.entryOffsetY)
    end
  end
end
function InputHelpDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  self:storeScaledValues()
end
function InputHelpDisplay:storeScaledValues()
  local v1 = self:scalePixelToScreenHeight(InputHelpDisplay.SIZE.HEADER[2])
  self.headerHeight = v1
  local v1, v2 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.HELP_ENTRY)
  self.entryWidth = v1
  self.entryHeight = v2
  v1 = self:scalePixelToScreenHeight(HUDElement.TEXT_SIZE.DEFAULT_TITLE)
  self.controlsLabelTextSize = v1
  v1, v2 = self:scalePixelToScreenVector(InputHelpDisplay.POSITION.CONTROLS_LABEL)
  self.controlsLabelOffsetX = v1
  self.controlsLabelOffsetY = v2
  v1 = self:scalePixelToScreenHeight(HUDElement.TEXT_SIZE.DEFAULT_TEXT)
  self.helpTextSize = v1
  v1, v2 = self:scalePixelToScreenVector(InputHelpDisplay.POSITION.HELP_TEXT)
  self.helpTextOffsetX = v1
  self.helpTextOffsetY = v2
  v1, v2 = self:scalePixelToScreenVector(InputHelpDisplay.POSITION.EXTRA_TEXT)
  self.extraTextOffsetX = v1
  self.extraTextOffsetY = v2
  v1 = self:scalePixelToScreenWidth(InputHelpDisplay.POSITION.AXIS_ICON[1])
  self.axisIconOffsetX = v1
  v1, v2 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.AXIS_ICON)
  self.axisIconWidth = v1
  self.axisIconHeight = v2
  v1, v2 = self:scalePixelToScreenVector(InputHelpDisplay.POSITION.FRAME)
  self.frameOffsetX = v1
  self.frameOffsetY = v2
  v1 = self:scalePixelToScreenHeight(HUDFrameElement.THICKNESS.BAR)
  self.frameBarOffsetY = v1
  v1 = self:scalePixelToScreenHeight(InputHelpDisplay.MIN_MAP_SPACING)
  self.minimumMapSpacingY = v1
  v1, v2 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.HELP_ENTRY_OFFSET)
  self.entryOffsetX = v1
  self.entryOffsetY = v2
  for v4, v5 in ipairs(self.inputGlyphs) do
    local v6 = self:scalePixelToScreenWidth(InputHelpDisplay.POSITION.INPUT_GLYPH[1])
    v5.spacing = v6
  end
end
function InputHelpDisplay.getBackgroundPosition()
  return g_safeFrameOffsetX, 1 - g_safeFrameOffsetY
end
function InputHelpDisplay:getTopLeftPosition()
  local v1, v2 = InputHelpDisplay.getBackgroundPosition()
  local v3 = v3:getFinished()
  if not v3 then
  end
  return v1, v2
end
function InputHelpDisplay:getMaxEntryCount(prio, ignoreLive)
  local v3 = Utils.getNoNil(prio, false)
  if v3 then
    -- if InputHelpDisplay.ENTRY_COUNT_PC then goto L16 end
  end
  if self.isConsoleVersion and prio then
    -- if InputHelpDisplay.ENTRY_COUNT_CONSOLE then goto L29 end
  end
  if not ignoreLive and self.hasComboCommands then
  end
  for v7, v8 in pairs(self.vehicleHudExtensions) do
    if not (v8.getHelpEntryCountReduction ~= nil) then
      continue
    end
    local v9 = v8:getHelpEntryCountReduction()
  end
  return v3
end
function InputHelpDisplay:getIsHelpElementAllowed(helpElements, helpElement)
  local v4 = self:getMaxEntryCount(true)
  if v4 <= #helpElements then
    if GS_PRIO_NORMAL <= helpElement.priority and not self.isOverlayMenuVisible then
      return false
    end
    v4 = self:getMaxEntryCount(false)
    if v4 <= #helpElements then
      return false
    end
  end
  return true
end
function InputHelpDisplay:setDimension(width, height)
  local v4 = v4:superClass()
  v4.setDimension(self, width, height)
  v3:setDimension(width, height + self.frameOffsetY + self.frameBarOffsetY)
end
function InputHelpDisplay.createBackground()
  local v0, v1 = InputHelpDisplay.getBackgroundPosition()
  local v3 = unpack(InputHelpDisplay.SIZE.HELP_ENTRY)
  local v2, v3 = getNormalizedScreenValues(...)
  return Overlay.new(nil, v0, v1, v2, v3)
end
function InputHelpDisplay:createComponents(hudAtlasPath)
  local v3 = unpack(InputHelpDisplay.SIZE.HELP_ENTRY)
  local v2, v3 = getNormalizedScreenValues(...)
  local v4, v5 = self:getPosition()
  local v6 = self:createFrame(hudAtlasPath, v4, v5, v2, v3)
  local maxEntries = self:getMaxEntryCount(nil, true)
  local v8, v9 = v6:getPosition()
  self:createEntries(hudAtlasPath, v8, v9, maxEntries)
  self:createMouseComboHeader(hudAtlasPath, v8, v9)
  self:createControllerComboHeader(hudAtlasPath, v8, v9)
end
function InputHelpDisplay:createFrame(hudAtlasPath, baseX, baseY, width, height)
  local v6 = HUDFrameElement.new(hudAtlasPath, baseX, baseY, width, height)
  local v9 = unpack(HUD.COLOR.FRAME_BACKGROUND)
  v6:setColor(...)
  self.frame = v6
  return v6
end
function InputHelpDisplay:createVerticalSeparator(hudAtlasPath, leftPosX, centerPosY)
  local v4, v5 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.VERTICAL_SEPARATOR)
  local v6 = math.max(v4, 1 / g_screenWidth)
  v6 = Overlay.new(hudAtlasPath, leftPosX + v6 * 0.5, centerPosY - v5 * 0.5, v6, v5)
  local v9 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v6:setUVs(...)
  v9 = unpack(InputHelpDisplay.COLOR.SEPARATOR)
  v6:setColor(...)
  return HUDElement.new(v6)
end
function InputHelpDisplay:createHorizontalSeparator(hudAtlasPath, leftPosX, posY)
  local v4, v5 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.HORIZONTAL_SEPARATOR)
  local v6 = math.max(v5, 1 / g_screenHeight)
  v6 = Overlay.new(hudAtlasPath, leftPosX, posY - v6 * 0.5, v4, v6)
  local v9 = GuiUtils.getUVs(HUDElement.UV.FILL)
  v6:setUVs(...)
  v9 = unpack(InputHelpDisplay.COLOR.SEPARATOR)
  v6:setColor(...)
  return HUDElement.new(v6)
end
function InputHelpDisplay:createComboInputGlyph(posX, posY, width, height, actionName)
  local element = InputGlyphElement.new(self.inputDisplayManager, width, height)
  element:setPosition(posX, posY)
  element:setKeyboardGlyphColor(InputHelpDisplay.COLOR.COMBO_GLYPH)
  element:setButtonGlyphColor(InputHelpDisplay.COLOR.COMBO_GLYPH)
  element:setAction(actionName, nil, nil, false, true)
  return element
end
function InputHelpDisplay:createComboHeader(hudAtlasPath, frameX, frameY, combos, boxSize, separatorPositions)
  local v7, v8 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.HEADER)
  local v10 = Overlay.new(nil, frameX, frameY - v8, v7, v8)
  local v11 = HUDElement.new(v10)
  local v12, v13 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.HELP_ENTRY_OFFSET)
  local v15, v16 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.COMBO_GLYPH)
  local v17, v18 = self:scalePixelToScreenVector(boxSize)
  for v23, v24 in ipairs(combos) do
    local v25 = Overlay.new(g_baseUIFilename, frameX + v14 * (v23 - 1) + v12 * (v23 - 1), v9, v14, v8)
    v25:setUVs(g_colorBgUVs)
    v25:setColor(0, 0, 0, 0.56)
    local v28 = HUDElement.new(v25)
    v11:addChild(...)
    local v27 = self:createComboInputGlyph(0, 0, v15, v16, v24.controls)
    v28 = v27:getGlyphWidth()
    if v23 == 1 then
      local v31 = self:scalePixelToScreenWidth(InputHelpDisplay.POSITION.INPUT_GLYPH[1])
    elseif v23 == #combos then
      local v32 = self:scalePixelToScreenWidth(InputHelpDisplay.POSITION.AXIS_ICON[1])
    end
    v27:setPosition(v29, v30)
    v11:addChild(v27)
    self.comboInputGlyphs[v26] = v27
  end
  return v11
end
function InputHelpDisplay:createMouseComboHeader(hudAtlasPath, frameX, frameY)
  local header = self:createComboHeader(hudAtlasPath, frameX, frameY, InputBinding.ORDERED_MOUSE_COMBOS, InputHelpDisplay.SIZE.MOUSE_COMBO_BOX, InputHelpDisplay.POSITION.MOUSE_COMBO_SEPARATOR)
  self.mouseComboHeader = header
  self:addChild(header)
end
function InputHelpDisplay:createControllerComboHeader(hudAtlasPath, frameX, frameY)
  local header = self:createComboHeader(hudAtlasPath, frameX, frameY, InputBinding.ORDERED_GAMEPAD_COMBOS, InputHelpDisplay.SIZE.GAMEPAD_COMBO_BOX, InputHelpDisplay.POSITION.GAMEPAD_COMBO_SEPARATOR)
  self.gamepadComboHeader = header
  self:addChild(header)
end
function InputHelpDisplay:createEntry(hudAtlasPath, posX, posY, width, height)
  local overlay = Overlay.new(g_baseUIFilename, posX, posY, width, height)
  overlay:setUVs(g_colorBgUVs)
  overlay:setColor(0, 0, 0, 0.56)
  local v7 = HUDElement.new(overlay)
  local v8, v9 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.INPUT_GLYPH)
  local offX = self:scalePixelToScreenWidth(InputHelpDisplay.POSITION.INPUT_GLYPH[1])
  offX = Overlay.new(g_baseUIFilename, posX, posY, v8 + 2 * offX, height)
  offX:setUVs(g_colorBgUVs)
  offX:setColor(0, 0, 0, 0.6)
  offX = HUDElement.new(offX)
  v7:addChild(offX)
  local v13 = InputGlyphElement.new(self.inputDisplayManager, v8, v9)
  v13:setPosition(posX + offX, posY + (height - v9) * 0.5)
  v13:setKeyboardGlyphColor(InputHelpDisplay.COLOR.INPUT_GLYPH)
  v13.background = offX
  v13.spacing = offX
  v7:addChild(v13)
  table.insert(self.inputGlyphs, v13)
  return v7
end
function InputHelpDisplay:createEntries(hudAtlasPath, frameX, frameY, count)
  local v7, v8 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.HELP_ENTRY)
  local v9, v10 = self:scalePixelToScreenVector(InputHelpDisplay.SIZE.HELP_ENTRY_OFFSET)
  local v11 = Overlay.new(nil, frameX, frameY, v7, v8 * count)
  local v12 = HUDElement.new(v11)
  self.entriesFrame = v12
  self:addChild(v12)
  -- TODO: structure LOP_FORNPREP (pc 42, target 75)
  local v17 = self:createEntry(hudAtlasPath, frameX, frameY + count * v8 - v8 * 1, v7, v8 - v10)
  table.insert(self.entries, v17)
  table.insert(self.entryGlyphWidths, 0)
  v12:addChild(v17)
  -- TODO: structure LOP_FORNLOOP (pc 74, target 43)
end
InputHelpDisplay.WIDTH = 465
InputHelpDisplay.HEADER_HEIGHT = 72
InputHelpDisplay.MIN_MAP_SPACING = 40
InputHelpDisplay.SIZE = {HEADER = {InputHelpDisplay.WIDTH, InputHelpDisplay.HEADER_HEIGHT}, MOUSE_COMBO_BOX = {InputHelpDisplay.WIDTH / 4, InputHelpDisplay.HEADER_HEIGHT}, GAMEPAD_COMBO_BOX = {InputHelpDisplay.WIDTH / 3, InputHelpDisplay.HEADER_HEIGHT}, VERTICAL_SEPARATOR = {1, 36}, COMBO_GLYPH = {36, 36}, INPUT_GLYPH = {36, 36}, AXIS_ICON = {36, 36}, HORIZONTAL_SEPARATOR = {InputHelpDisplay.WIDTH, 1}, HELP_ENTRY = {InputHelpDisplay.WIDTH, 54}, HELP_ENTRY_OFFSET = {2, 2}}
InputHelpDisplay.POSITION = {FRAME = {0, -36}, VEHICE_SCHEMA = {0, 0}, MOUSE_COMBO_SEPARATOR = {{InputHelpDisplay.SIZE.MOUSE_COMBO_BOX[1], 0}, {InputHelpDisplay.SIZE.MOUSE_COMBO_BOX[1] * 2, 0}, {InputHelpDisplay.SIZE.MOUSE_COMBO_BOX[1] * 3, 0}}, GAMEPAD_COMBO_SEPARATOR = {{InputHelpDisplay.SIZE.GAMEPAD_COMBO_BOX[1], 0}, {InputHelpDisplay.SIZE.GAMEPAD_COMBO_BOX[1] * 2, 0}}, INPUT_GLYPH = {8, 0}, AXIS_ICON = {-16, 0}, HELP_TEXT = {-16, 3}, EXTRA_TEXT = {16, 0}, CONTROLS_LABEL = {0, 4}}
InputHelpDisplay.COLOR = {COMBO_GLYPH = {1, 1, 1, 0.4}, COMBO_GLYPH_PRESSED = {1, 1, 1, 1}, INPUT_GLYPH = {0.0003, 0.5647, 0.9822, 1}, CONTROLS_LABEL = {1, 1, 1, 1}, HELP_TEXT = {1, 1, 1, 1}, SEPARATOR = {1, 1, 1, 0.3}}
