-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

if ControlBarDisplay ~= nil then
  g_currentMission.hud.controlBarDisplay:delete()
end
ControlBarDisplay = {MOVE_ANIMATION_DURATION = 500, STATE_TOUCH = 0, STATE_CONTROLLER = 1, STATE_AI_TOUCH = 2}
local ControlBarDisplay_mt = Class(ControlBarDisplay, HUDDisplayElement)
function ControlBarDisplay.new(v0, v1, v2)
  local backgroundOverlay = ControlBarDisplay.createBackground()
  local v5 = v5:superClass()
  local v4 = v5.new(backgroundOverlay, nil, u0)
  v4.hud = v0
  v4.uiScale = 1
  v4.hudAtlasPath = v1
  v4.controlHudAtlasPath = v2
  v4.vehicle = nil
  v4.lastChildVehicleHash = ""
  v4.sowingMachine = nil
  v4.player = nil
  v4.hudElements = {}
  v4.buttons = {}
  v4.controlButtons = {}
  v4.inputGlyphs = {}
  v4.lastInputHelpMode = GS_INPUT_HELP_MODE_KEYBOARD
  v4.lastAIState = false
  v4.lastGyroscopeSteeringState = false
  v4.fillLevelBuffer = {}
  v4.fillLevelBufferAddIndex = 0
  v4.fillLevelBufferNeedsSorting = false
  v4.fillLevelControls = {}
  v4.vehicleControls = {attach = {availableFunc = "getShowAttachControlBarAction", accessibleFunc = "getAttachControlBarActionAccessible", actionFunc = "detachAttachedImplement", triggerType = TouchHandler.TRIGGER_UP, fullTapNeeded = true, controlButton = nil, uvs = ControlBarDisplay.UV.DETACH, prio = 3, inputAction = InputAction.ATTACH, name = "attach"}, turnOn = {allowedFunc = "getAreControlledActionsAllowed", availableFunc = "getAreControlledActionsAvailable", accessibleFunc = "getAreControlledActionsAccessible", getIconsFunc = "getControlledActionIcons", actionFunc = "playControlledActions", triggerType = TouchHandler.TRIGGER_UP, fullTapNeeded = true, directionFunc = "getActionControllerDirection", controlButton = nil, uvs = ControlBarDisplay.UV.TURN_ON, iconColor_pos = ControlBarDisplay.COLOR.BUTTON, iconColor_neg = ControlBarDisplay.COLOR.BUTTON_ACTIVE, prio = 4, inputAction = InputAction.VEHICLE_ACTION_CONTROL, name = "turnOn"}, ai = {availableFunc = "getCanToggleAIVehicle", accessibleFunc = "getShowAIToggleActionEvent", actionFunc = "toggleAIVehicle", triggerType = TouchHandler.TRIGGER_UP, fullTapNeeded = true, directionFunc = "getIsAIActive", controlButton = nil, uvs = ControlBarDisplay.UV.AI, iconColor_pos = ControlBarDisplay.COLOR.BUTTON_ACTIVE, iconColor_neg = ControlBarDisplay.COLOR.BUTTON, prio = 5, inputAction = InputAction.TOGGLE_AI, name = "ai"}, leave = {availableFunc = "getCanLeaveVehicle", accessibleFunc = "getIsLeavingAllowed", actionFunc = "doLeaveVehicle", triggerType = TouchHandler.TRIGGER_UP, fullTapNeeded = true, controlButton = nil, uvs = ControlBarDisplay.UV.LEAVE_VEHICLE, iconColor_pos = ControlBarDisplay.COLOR.BUTTON_ACTIVE, iconColor_neg = ControlBarDisplay.COLOR.BUTTON, prio = 6, inputAction = InputAction.ENTER, name = "leave"}, unloadFork = {availableFunc = "getCanUnloadFork", accessibleFunc = "getIsForkUnloadingAllowed", actionFunc = "doUnloadFork", triggerType = TouchHandler.TRIGGER_UP, fullTapNeeded = true, controlButton = nil, uvs = ControlBarDisplay.UV.UNLOAD_FORK, iconColor_pos = ControlBarDisplay.COLOR.BUTTON_ACTIVE, iconColor_neg = ControlBarDisplay.COLOR.BUTTON, prio = 7, inputAction = InputAction.UNLOAD_FORK, name = "unloadFork"}, leave_horse = {availableFunc = "getCanLeaveRideable", accessibleFunc = "getIsLeavingAllowed", actionFunc = "doLeaveVehicle", triggerType = TouchHandler.TRIGGER_UP, fullTapNeeded = true, controlButton = nil, uvs = ControlBarDisplay.UV.LEAVE_HORSE, iconColor_pos = ControlBarDisplay.COLOR.BUTTON_ACTIVE, iconColor_neg = ControlBarDisplay.COLOR.BUTTON, prio = 6, inputAction = InputAction.ENTER, name = "leave_horse"}}
  v4.playerControls = {enter_vehicle = {availableFunc = "getCanEnterVehicle", actionFunc = "onInputEnter", triggerType = TouchHandler.TRIGGER_UP, fullTapNeeded = true, controlButton = nil, uvs = ControlBarDisplay.UV.ENTER_VEHICLE, iconColor_pos = ControlBarDisplay.COLOR.BUTTON_ACTIVE, iconColor_neg = ControlBarDisplay.COLOR.BUTTON, prio = 7, inputAction = InputAction.ENTER, name = "enter_vehicle"}, enter_horse = {availableFunc = "getCanEnterRideable", actionFunc = "onInputEnter", triggerType = TouchHandler.TRIGGER_UP, fullTapNeeded = true, controlButton = nil, uvs = ControlBarDisplay.UV.ENTER_HORSE, iconColor_pos = ControlBarDisplay.COLOR.BUTTON_ACTIVE, iconColor_neg = ControlBarDisplay.COLOR.BUTTON, prio = 8, inputAction = InputAction.ENTER, name = "ride_horse"}, ride = {availableFunc = "getIsRideStateAvailable", actionFunc = "activateRideState", triggerType = TouchHandler.TRIGGER_UP, fullTapNeeded = true, controlButton = nil, uvs = ControlBarDisplay.UV.ENTER_HORSE, iconColor_pos = ControlBarDisplay.COLOR.BUTTON_ACTIVE, iconColor_neg = ControlBarDisplay.COLOR.BUTTON, prio = 9, inputAction = InputAction.ENTER, name = "ride_horse"}}
  v4.customControls = {activateObject = {availableFunc = v4.getIsActivatableObjectAvailable, actionFunc = v4.triggerActivatableObject, triggerType = TouchHandler.TRIGGER_UP, fullTapNeeded = true, controlButton = nil, uvs = ControlBarDisplay.UV.ACTIVATABLE_OBJECT, iconColor_pos = ControlBarDisplay.COLOR.BUTTON_ACTIVE, iconColor_neg = ControlBarDisplay.COLOR.BUTTON, prio = 7, inputAction = InputAction.ACTIVATE_OBJECT, name = "activateObject"}}
  v4:createComponents()
  return v4
end
function ControlBarDisplay:createComponents()
  local v3 = unpack(ControlBarDisplay.POSITION.BUTTON_START)
  local v2 = getNormalizedScreenValues(...)
  self.buttonStartPos = {}
  v2 = unpack(ControlBarDisplay.POSITION.BUTTON_OFFSET)
  local v1 = getNormalizedScreenValues(...)
  self.buttonOffsetX = v1
  v2 = unpack(ControlBarDisplay.SIZE.FILL_LEVEL_ICON)
  v1, v2 = getNormalizedScreenValues(...)
  self.fillLevelIconSizeX = v1
  self.fillLevelIconSizeY = v2
  v2 = unpack(ControlBarDisplay.POSITION.FILL_LEVEL_ICON_OFFSET)
  v1, v2 = getNormalizedScreenValues(...)
  self.fillLevelIconOffsetX = v1
  self.fillLevelIconOffsetY = v2
  self.hudControls = {}
  v3 = self:addFillLevelControl()
  table.insert(...)
  v3 = self:addFillLevelControl()
  table.insert(...)
  v2 = unpack(ControlBarDisplay.SIZE.ICON)
  v1, v2 = getNormalizedScreenValues(...)
  for v6, v7 in pairs(self.vehicleControls) do
    local v8 = HUDButtonElement.new(self.hud, 0, 0)
    local v14 = GuiUtils.getUVs(v7.uvs)
    v8:setIcon(...)
    v8:setAction(v7.inputAction)
    v8.buttonCallback = function()
      local self = self:getIsSleeping()
      if self then
        return
      end
      if u0.vehicle ~= nil then
        if u0.allowedFunc ~= nil then
          local v1, v2 = u0.vehicle[u0.allowedFunc](u0.vehicle)
          if not v1 then
            v3:showBlinkingWarning(v2, 2500)
            return
          end
        end
        self[u0.actionFunc](self)
      end
    end
    v8:addTouchHandler(v8.buttonCallback, self)
    self:addChild(v8)
    v7.button = v8
    table.insert(self.hudControls, v7)
  end
  for v6, v7 in pairs(self.playerControls) do
    v8 = HUDButtonElement.new(self.hud, 0, 0)
    v14 = GuiUtils.getUVs(v7.uvs)
    v8:setIcon(...)
    v8:setAction(v7.inputAction)
    v8.buttonCallback = function()
      local self = self:getIsSleeping()
      if self then
        return
      end
      if u0.player ~= nil then
        u0.player[u1.actionFunc](u0.player)
      end
    end
    v8:addTouchHandler(v8.buttonCallback, self)
    self:addChild(v8)
    v7.button = v8
    table.insert(self.hudControls, v7)
  end
  for v6, v7 in pairs(self.customControls) do
    v8 = HUDButtonElement.new(self.hud, 0, 0)
    v14 = GuiUtils.getUVs(v7.uvs)
    v8:setIcon(...)
    v8:setAction(v7.inputAction)
    v8.buttonCallback = function()
      u0.actionFunc()
    end
    v8:addTouchHandler(v8.buttonCallback, self)
    v7.button = v8
    self:addChild(v8)
    table.insert(self.hudControls, v7)
  end
  self.buttons = {}
  self.controlButtons = {}
  self.hudElements = {}
  v3, v4 = self:getPosition()
  v6 = unpack(ControlBarDisplay.POSITION.GAMEPAD_OFFSET)
  v5, v6 = getNormalizedScreenValues(...)
  self.positionTouch = {v3 + v5, v4 + v6}
  self.positionGamepad = {v3, v4}
end
function ControlBarDisplay:setVehicle(vehicle)
  self.vehicle = vehicle
  self:updatePositionState()
  self:updateFillLevelBuffers(vehicle)
  self:updateButtons()
  if self.buttonToggleSeeds ~= nil then
    function self.buttonToggleSeeds.glyphElement.overlay.getIsVisible()
      if u0.visible and u1.sowingMachine ~= nil and 1 >= #u1.sowingMachine.spec_sowingMachine.seeds then
      end
      return self
    end
  end
end
function ControlBarDisplay:setPlayer(player)
  self.player = player
  self:updatePositionState()
end
function ControlBarDisplay:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self:updateButtons()
  self:updateButtonPositions()
end
function ControlBarDisplay:updateButtons()
  self.sowingMachine = nil
  if self.vehicle ~= nil then
    for v5, v6 in self.vehicle.childVehicles, nil, nil do
      if not (v6.spec_sowingMachine ~= nil) then
        continue
      end
      self.sowingMachine = v6
      break
    end
  end
  self:updateFillLevelBuffers(v1)
  for v5, v6 in pairs(self.vehicleControls) do
    if v1 ~= nil and v1[v6.availableFunc] ~= nil then
      local v11 = v1[v6.availableFunc](v1)
      if v11 then
      elseif v6.useAttachables and v1.getAttachedImplements ~= nil then
        local v12 = v1:getAttachedImplements()
        for v14, v15 in ipairs(...) do
          if not (v15.object[v6.availableFunc] ~= nil) then
            continue
          end
          local v16 = v15.object[v6.availableFunc](v15.object)
        end
      end
    end
    if v7 ~= nil then
      if v7[v6.accessibleFunc] ~= nil then
        v11 = v7[v6.accessibleFunc](v7)
      end
      if v6.getIconsFunc ~= nil and v7[v6.getIconsFunc] ~= nil then
        v13, v14, v15 = v7[v6.getIconsFunc](v7)
        if not v15 then
        end
        if v17 == v6.uvs_pos then
          -- if v16 == v6.uvs_neg then goto L148 end
        end
        v6.uvs_pos = v17
        v6.uvs_neg = v16
        if v19 == v6.iconColor_pos then
          -- if v18 == v6.iconColor_neg then goto L161 end
        end
        v6.iconColor_pos = v19
        v6.iconColor_neg = v18
      end
      if v6.directionFunc ~= nil and v7[v6.directionFunc] ~= nil then
        v13 = v7[v6.directionFunc](v7)
        v14 = type(v13)
        if v14 == "boolean" then
          if v13 then
          else
          end
        end
        if v13 == v6.lastDirection then
          -- if not v11 then goto L246 end
        end
        if v13 == 1 then
          -- if v6.uvs_pos then goto L199 end
        end
        if v6.uvs_neg ~= nil and v6.uvs_neg ~= v6.uvs then
          local v21 = GuiUtils.getUVs(v6.uvs_neg)
          v14:setIcon(nil, nil, nil, v21, nil, nil)
          v6.uvs = v6.uvs_neg
        end
        if v13 == 1 then
          -- if v6.iconColor_pos then goto L226 end
        end
        if v6.iconColor_neg ~= nil and v6.iconColor_neg ~= v6.color then
          v14:setIcon(nil, nil, nil, nil, nil, nil, v6.iconColor_neg)
          v6.color = v6.iconColor_neg
        end
        v6.lastDirection = v13
      end
    end
    v6.vehicle = v7
    v10:setVisible(v8)
    if not not v9 then
      v12 = v12:getIsGuiVisible()
    end
    v10:setDisabled(v12)
  end
  for v6, v7 in pairs(self.playerControls) do
    if v2 ~= nil and v2[v7.availableFunc] ~= nil then
      local v10 = v2[v7.availableFunc](v2)
    end
    v9:setVisible(v8)
    v11 = v11:getIsGuiVisible()
    v9:setDisabled(...)
  end
  for v6, v7 in pairs(self.customControls) do
    local v8 = v7.availableFunc(self)
    v9:setVisible(v8)
    v11 = v11:getIsGuiVisible()
    v9:setDisabled(...)
  end
end
function ControlBarDisplay:updateButtonPositions()
  local v1, v2 = self:getPosition()
  table.sort(self.hudControls, function(self, v1)
    if self.prio >= v1.prio then
    end
    return true
  end)
  for v7, v8 in ipairs(self.hudControls) do
    local v9 = v9:getVisible()
    if not v9 then
      continue
    end
    v9:setPosition(v1, v2)
    local v10 = v10:getWidth()
  end
end
function ControlBarDisplay:onInputHelpModeChange(inputHelpMode, force)
  self.lastInputHelpMode = inputHelpMode
  self:updatePositionState(force)
end
function ControlBarDisplay:onAIVehicleStateChanged(state, vehicle, force)
  self.lastAIState = state
  self:updatePositionState(force)
end
function ControlBarDisplay:onGyroscopeSteeringChanged(state)
  self.lastGyroscopeSteeringState = state
  self:updatePositionState()
end
function ControlBarDisplay.getIsActivatableObjectAvailable(v0)
  local v2 = v2:getActivatable()
  if v2 == nil then
  end
  return true
end
function ControlBarDisplay.triggerActivatableObject(v0)
  local v1 = v1:getActivatable()
  if v1 ~= nil then
    v1:run()
  end
end
function ControlBarDisplay:updatePositionState(force)
  if Platform.hasTouchSliders and self.player ~= nil and self.lastInputHelpMode ~= GS_INPUT_HELP_MODE_GAMEPAD then
    self:setPositionState(ControlBarDisplay.STATE_TOUCH, force)
    return
  end
  if not not Platform.hasTouchSliders and self.lastInputHelpMode ~= GS_INPUT_HELP_MODE_GAMEPAD then
  end
  if v2 then
    self:setPositionState(ControlBarDisplay.STATE_CONTROLLER, force)
    return
  end
  self:setPositionState(ControlBarDisplay.STATE_TOUCH, force)
end
function ControlBarDisplay:setPositionState(state, force)
  if not Platform.hasTouchSliders then
    return
  end
  if state ~= self.lastPositionState then
    local v3, v4 = self:getPosition()
    if state == ControlBarDisplay.STATE_TOUCH then
    end
    if force then
    end
    local sequence = TweenSequence.new(self)
    local v11 = MultiValueTween.new(self.setPosition, {v3, v4}, {v5, v6}, v7)
    sequence:insertTween(v11, 0)
    sequence:start()
    self.animation = sequence
    self.lastPositionState = state
  end
end
function ControlBarDisplay:addFillLevelControl()
  local v2 = HUDButtonElement.new(self.hud, 0, 0)
  v2:setIcon(nil, self.fillLevelIconSizeX, self.fillLevelIconSizeY, Overlay.DEFAULT_UVS, self.fillLevelIconOffsetX, self.fillLevelIconOffsetY)
  v2:setAction(InputAction.TOGGLE_SEEDS)
  v2:addTouchHandler(ControlBarDisplay.onChangeSeedCallback, {})
  self:addChild(v2)
  table.insert(self.fillLevelControls, {button = v2, prio = #self.fillLevelControls + 1})
  local v3 = GuiUtils.getUVs(ControlBarDisplay.UV.FILL_LEVEL_BAR)
  local v4, v5 = v2:getPosition()
  local v7 = unpack(ControlBarDisplay.POSITION.FILL_LEVEL_BAR_OFFSET)
  local v6, v7 = getNormalizedScreenValues(...)
  local v9 = unpack(ControlBarDisplay.SIZE.FILL_LEVEL_BAR)
  local v8, v9 = getNormalizedScreenValues(...)
  local v10 = Overlay.new(self.hudAtlasPath, v4 + v6, v5 + v7, v8, v9)
  local v13 = unpack(ControlBarDisplay.COLOR.FILL_LEVEL_BAR_BACKGROUND)
  v10:setColor(...)
  v10:setUVs(v3)
  local v11 = HUDElement.new(v10)
  v2:addChild(v11)
  local v12 = Overlay.new(self.hudAtlasPath, v4 + v6, v5 + v7, v8, v9)
  v13 = HUDElement.new(v12)
  v13:setUVs(v3)
  local v16 = unpack(ControlBarDisplay.COLOR.FILL_LEVEL_BAR)
  v13:setColor(...)
  v11:addChild(v13)
  local v14 = table.copy(v3)
  return {button = v2, prio = #self.fillLevelControls + 1, bar = v13, defaultUVs = v14}
end
function ControlBarDisplay:addFillLevel(v1, v2, v3, v4, v5)
  -- TODO: structure LOP_FORNPREP (pc 6, target 44)
  if self.fillLevelBuffer[1].fillType == v1 then
    self.fillLevelBuffer[1].fillLevel = self.fillLevelBuffer[1].fillLevel + v2
    self.fillLevelBuffer[1].capacity = self.fillLevelBuffer[1].capacity + v3
    self.fillLevelBuffer[1].precision = v4
    self.fillLevelBuffer[1].maxReached = v5
    if self.fillLevelBufferAddIndex ~= self.fillLevelBuffer[1].addIndex then
      self.fillLevelBuffer[1].addIndex = self.fillLevelBufferAddIndex
      self.fillLevelBufferNeedsSorting = true
    end
  else
    -- TODO: structure LOP_FORNLOOP (pc 43, target 7)
  end
  if not v6 then
    table.insert(self.fillLevelBuffer, {fillType = v1, fillLevel = v2, capacity = v3, precision = v4, addIndex = self.fillLevelBufferAddIndex, maxReached = v5})
    self.fillLevelBufferNeedsSorting = true
  end
  self.fillLevelBufferAddIndex = self.fillLevelBufferAddIndex + 1
end
function ControlBarDisplay:updateFillLevelBuffers(v1)
  -- TODO: structure LOP_FORNPREP (pc 5, target 22)
  self.fillLevelControls[1].fillLevelPct = 0
  v5:setVisible(false)
  -- TODO: structure LOP_FORNLOOP (pc 21, target 6)
  if v1 == nil then
    return
  end
  -- TODO: structure LOP_FORNPREP (pc 30, target 44)
  self.fillLevelBuffer[1].fillLevel = 0
  self.fillLevelBuffer[1].capacity = 0
  -- TODO: structure LOP_FORNLOOP (pc 43, target 31)
  self.fillLevelBufferAddIndex = 0
  self.fillLevelBufferNeedsSorting = false
  v1:getFillLevelInformation(self)
  if self.fillLevelBufferNeedsSorting then
    table.sort(self.fillLevelBuffer, ControlBarDisplay.sortFillLevelBuffers)
  end
  self.buttonToggleSeeds = nil
  self.buttonShowFillLevel = nil
  -- TODO: structure LOP_FORNPREP (pc 78, target 100)
  if self.fillLevelBuffer[1].capacity ~= 0 and self.fillLevelControls[0 + 1] ~= nil then
    self:updateFillLevelControl(self.fillLevelControls[0 + 1], self.fillLevelBuffer[1])
  end
  -- TODO: structure LOP_FORNLOOP (pc 99, target 79)
end
function ControlBarDisplay:sortFillLevelBuffers(v1)
  if self.addIndex >= v1.addIndex then
  end
  return true
end
function ControlBarDisplay:updateFillLevelControl(v1, v2)
  v1.fillLevelPct = v2.fillLevel / v2.capacity
  v1.bar.overlay.uvs[5] = (v1.defaultUVs[5] - v1.defaultUVs[1]) * v2.fillLevel / v2.capacity + v1.defaultUVs[1]
  v1.bar.overlay.uvs[7] = (v1.defaultUVs[7] - v1.defaultUVs[3]) * v2.fillLevel / v2.capacity + v1.defaultUVs[3]
  v1.bar.overlay:setUVs(v1.bar.overlay.uvs)
  v1.bar.overlay:setScale(v2.fillLevel / v2.capacity * self.uiScale, self.uiScale)
  local v5 = v5:getFillTypeByIndex(v2.fillType)
  if v5 ~= nil and v5.hudOverlayFilename ~= "" then
    v7:setIcon(v5.hudOverlayFilename)
  end
  v1.vehicle = nil
  if self.sowingMachine ~= nil then
    local v7 = v7:getSowingMachineSeedFillTypeIndex()
    if v7 == v2.fillType then
      v1.vehicle = self.sowingMachine
    end
    self.buttonToggleSeeds = v6
  else
    self.buttonShowFillLevel = v1.button
  end
  if v1.vehicle == nil then
  end
  v6:setIsActive(true)
  if 0 >= v2.fillLevel and v1.vehicle == nil then
  end
  v6:setVisible(v9)
  if self.sowingMachine ~= nil then
    local v8 = g_currentMission.guidedTour:getCanChangeSeeds(self.sowingMachine)
  end
  v6:setDisabled(not v8)
end
function ControlBarDisplay:onChangeSeedCallback(v1, v2)
  local v3 = v3:getIsSleeping()
  if v3 then
    return
  end
  if self.vehicle ~= nil then
    v3 = v3:getIsAIActive()
    if not v3 then
      v3:changeSeedIndex(1)
    end
  end
end
function ControlBarDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  local currentVisibility = self:getVisible()
  self:setVisible(true, false)
  self.uiScale = uiScale
  local v5 = self:getWidth()
  local v3, v4 = ControlBarDisplay.getBackgroundPosition(...)
  self:setPosition(v3, v4)
  local v6 = unpack(ControlBarDisplay.POSITION.GAMEPAD_OFFSET)
  v5, v6 = getNormalizedScreenValues(...)
  self.positionTouch = {v3 + v5 * uiScale, v4 + v6 * uiScale}
  self.positionGamepad = {v3, v4}
  self:storeOriginalPosition()
  self:setVisible(currentVisibility, false)
  if self.lastPositionState == ControlBarDisplay.STATE_TOUCH then
    self:setPosition(self.positionTouch[1], self.positionTouch[2])
  end
end
function ControlBarDisplay.getBackgroundPosition(scale, width)
  local v3 = unpack(ControlBarDisplay.POSITION.BACKGROUND)
  local v2, v3 = getNormalizedScreenValues(...)
  return v2 * scale, v3 * scale
end
function ControlBarDisplay.createBackground()
  local v1 = unpack(ControlBarDisplay.SIZE.BACKGROUND)
  local v0, v1 = getNormalizedScreenValues(...)
  local v2, v3 = ControlBarDisplay.getBackgroundPosition(1, v0)
  return Overlay.new(nil, v2, v3, v0, v1)
end
ControlBarDisplay.SIZE = {BACKGROUND = {736, 106}, ICON = {84, 84}, FILL_LEVEL_ICON = {75, 75}, FILL_LEVEL_BAR = {82, 21}, ENTER_CABIN_GLYPH = {80, 80}}
ControlBarDisplay.POSITION = {BACKGROUND = {320, 50}, BUTTON_START = {0, 0}, BUTTON_OFFSET = {20, 0}, FILL_LEVEL_ICON_OFFSET = {13, 25}, FILL_LEVEL_BAR_OFFSET = {11, 7}, GAMEPAD_OFFSET = {515, 0}}
ControlBarDisplay.COLOR = {FILL_LEVEL_BAR = {0.3763, 0.6038, 0.0782, 1}, FILL_LEVEL_BAR_BACKGROUND = {0.172549, 0.172549, 0.172549, 1}, BUTTON = {1, 1, 1, 1}, BUTTON_ACTIVE = {0.3763, 0.6038, 0.0782, 1}}
ControlBarDisplay.UV = {FILL_LEVEL_BAR = {480, 21, 82, 21}, DETACH = {480, 0, 96, 96}, TURN_ON = {384, 0, 96, 96}, AUTO_LOAD = {96, 0, 96, 96}, LOAD_LOG = {192, 0, 96, 96}, LOADER_LOWER = {192, 96, 96, 96}, LOADER_LIFT = {288, 96, 96, 96}, WOOD_SAW = {384, 96, 96, 96}, AI = {288, 0, 96, 96}, LEAVE_VEHICLE = {672, 0, 96, 96}, ENTER_VEHICLE = {576, 0, 96, 96}, ENTER_HORSE = {672, 96, 96, 96}, LEAVE_HORSE = {768, 96, 96, 96}, ACTIVATABLE_OBJECT = {0, 0, 96, 96}, UNLOAD_FORK = {96, 288, 96, 96}}
if v0 ~= nil then
  local v2 = ControlBarDisplay.new(v0.hud, v0.hudAtlasPath, v0.controlHudAtlasPath)
  v2:setScale(v0.uiScale)
  v2:setVehicle(v0.vehicle)
  v2:setPlayer(v0.player)
  for v6, v7 in ipairs(g_currentMission.hud.displayComponents) do
    if not (v7 == g_currentMission.hud.controlBarDisplay) then
      continue
    end
    g_currentMission.hud.displayComponents[v6] = v2
    break
  end
  g_currentMission.hud.controlBarDisplay = v2
  Logging.info("Reloaded")
end
