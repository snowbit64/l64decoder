-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SpeedMeterDisplay = {}
local SpeedMeterDisplay_mt = Class(SpeedMeterDisplay, HUDDisplayElement)
function SpeedMeterDisplay.new(hudAtlasPath)
  local backgroundOverlay = SpeedMeterDisplay.createBackground(hudAtlasPath)
  local v3 = v3:superClass()
  local v2 = v3.new(backgroundOverlay, nil, u0)
  v2.uiScale = 1
  v2.vehicle = nil
  v2.isVehicleDrawSafe = false
  v2.speedIndicatorElement = nil
  v2.speedGaugeSegmentElements = nil
  v2.speedGaugeSegmentPartElements = nil
  v2.speedIndicatorRadiusX = 0
  v2.speedIndicatorRadiusY = 0
  v2.speedTextOffsetY = 0
  v2.speedUnitTextOffsetY = 0
  v2.speedTextSize = 0
  v2.speedUnitTextSize = 0
  v2.speedKmh = 0
  v3 = v3:getValue(GameSettings.SETTING.HUD_SPEED_GAUGE)
  v2.speedGaugeMode = v3
  v3 = v3:getValue(GameSettings.SETTING.USE_MILES)
  v2.speedGaugeUseMiles = v3
  v2.rpmUnitTextOffsetY = 0
  v2.rpmUnitTextSize = 0
  v3 = v3:getText("unit_rpmShort")
  v2.rpmUnitText = v3
  v2.lastGaugeValue = 0
  v2.speedGaugeElements = {}
  v2.damageGaugeBackgroundElement = nil
  v2.damageGaugeSegmentPartElements = nil
  v2.damageGaugeIconElement = nil
  v2.damageGaugeRadiusX = 0
  v2.damageGaugeRadiusY = 0
  v2.damageGaugeActive = false
  v2.fuelGaugeBackgroundElement = nil
  v2.fuelIndicatorElement = nil
  v2.fuelGaugeSegmentPartElements = nil
  v2.fuelGaugeIconElement = nil
  v2.fuelIndicatorRadiusX = 0
  v2.fuelIndicatorRadiusY = 0
  v2.fuelGaugeRadiusX = 0
  v2.fuelGaugeRadiusY = 0
  v2.fuelGaugeActive = false
  v3 = GuiUtils.getUVs(SpeedMeterDisplay.UV.FUEL_LEVEL_ICON)
  v2.fuelGaugeUVsDiesel = v3
  v3 = GuiUtils.getUVs(SpeedMeterDisplay.UV.FUEL_LEVEL_ICON_ELECTRIC)
  v2.fuelGaugeUVsElectric = v3
  v3 = GuiUtils.getUVs(SpeedMeterDisplay.UV.FUEL_LEVEL_ICON_METHANE)
  v2.fuelGaugeUVsMethane = v3
  v2.cruiseControlElement = nil
  v2.cruiseControlSpeed = 0
  v2.cruiseControlColor = nil
  v2.cruiseControlTextOffsetX = 0
  v2.cruiseControlTextOffsetY = 0
  v2.operatingTimeElement = nil
  v2.operatingTimeText = ""
  v2.operatingTimeTextSize = 1
  v2.operatingTimeTextOffsetX = 0
  v2.operatingTimeTextOffsetY = 0
  v2.operatingTimeTextDrawPositionX = 0
  v2.operatingTimeTextDrawPositionY = 0
  v2.gearTextPositionY = 0
  v2.gearGroupTextPositionY = 0
  v2.gearTextSize = 0
  v2.gearTexts = {"A", "B", "C"}
  v2.gearGroupText = ""
  v2.gearSelectedIndex = 1
  v2.gearHasGroup = false
  v2.gearIsChanging = false
  v2.gearWarningTime = 0
  v2.fadeFuelGaugeAnimation = TweenSequence.NO_SEQUENCE
  v2.fadeDamageGaugeAnimation = TweenSequence.NO_SEQUENCE
  v2.hudAtlasPath = hudAtlasPath
  v2:createComponents(hudAtlasPath)
  return v2
end
function SpeedMeterDisplay:getBasePosition()
  local v2 = unpack(SpeedMeterDisplay.POSITION.GAUGE_BACKGROUND)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3, v4 = self:getPosition()
  return v3 + v1, v4 + v2
end
function SpeedMeterDisplay:createComponents(hudAtlasPath)
  local v2, v3 = self:getBasePosition()
  self:storeScaledValues(v2, v3)
  local v4 = self:createGaugeBackground(hudAtlasPath, v2, v3)
  self.gaugeBackgroundElement = v4
  local v4, v5 = self:createGaugeIconElements(hudAtlasPath, v2, v3)
  self.damageGaugeIconElement = v4
  self.fuelGaugeIconElement = v5
  v4 = self:createDamageBar(hudAtlasPath, v2, v3)
  self.damageBarElement = v4
  v4 = self:createFuelBar(hudAtlasPath, v2, v3)
  self.fuelBarElement = v4
  self.fuelBarElementBlinkTimer = 0
  v4 = self:createGearIndicator(hudAtlasPath, v2, v3)
  self.gearElement = v4
  v4 = self:createSpeedGaugeIndicator(hudAtlasPath, v2, v3)
  self.speedIndicatorElement = v4
  v4 = self:createOperatingTimeElement(hudAtlasPath, v2, v3)
  self.operatingTimeElement = v4
  v4:setVisible(false)
  v4 = self:createCruiseControlElement(hudAtlasPath, v2, v3)
  self.cruiseControlElement = v4
end
function SpeedMeterDisplay:setVehicle(vehicle)
  if self.vehicle == nil then
  end
  self.vehicle = vehicle
  if vehicle == nil then
  end
  v4:setVisible(true)
  if true and vehicle.spec_motorized == nil then
  end
  if v3 and v4 then
    local v6, v7 = SpeedMeterDisplay.getVehicleFuelLevelAndCapacity(vehicle)
    if v7 == nil then
    end
    if true then
      local fuelType = SpeedMeterDisplay.getVehicleFuelType(vehicle)
      if fuelType == FillType.ELECTRICCHARGE then
      elseif fuelType == FillType.METHANE then
      end
      v10:setUVs(v9)
    end
    self:onHudSpeedGaugeModeChanged()
  end
  self.fuelGaugeActive = v5
  self:animateFuelGaugeToggle(v5)
  if v3 and vehicle.getDamageAmount ~= nil then
    v7 = vehicle:getDamageAmount()
    if v7 == nil then
    end
  end
  self.damageGaugeActive = v6
  self:animateDamageGaugeToggle(v6)
  if v3 and vehicle.operatingTime == nil then
  end
  fuelType:setVisible(v7)
  self.isVehicleDrawSafe = false
  if v3 and not v2 then
    fuelType:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.HUD_SPEED_GAUGE], self.onHudSpeedGaugeModeChanged, self)
    fuelType:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_MILES], self.onHudSpeedGaugeUseMilesChanged, self)
    return
  end
  fuelType:unsubscribeAll(self)
end
function SpeedMeterDisplay:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  local v2 = v2:getFinished()
  if not v2 then
    v2, v3 = v2:getPosition()
    self:storeScaledValues(v2, v3)
  end
  if self.vehicle ~= nil and self.vehicle.spec_motorized ~= nil then
    self:updateSpeedGauge(dt)
    self:updateDamageGauge(dt)
    self:updateFuelGauge(dt)
    self:updateCruiseControl(dt)
    self:updateOperatingTime(dt)
    self:updateGearDisplay(dt)
  end
  self.isVehicleDrawSafe = true
end
function SpeedMeterDisplay:updateGearDisplay(dt)
  local v2, v3, v4, v5, v6, v7, fuelType, v9, v10, v11 = v2:getGearInfoToDisplay()
  if v2 ~= nil then
    -- if v5 then goto L81 end
    if v3 == nil then
    end
    self.gearHasGroup = true
    self.gearGroupText = v3 or ""
    if v7 == nil and v6 == nil then
      self.gearTexts[1] = ""
      self.gearTexts[2] = v2
      self.gearTexts[3] = ""
      self.gearSelectedIndex = 2
      -- goto L119  (LOP_JUMP +83)
    end
    if v7 == nil then
      self.gearTexts[1] = fuelType or ""
      self.gearTexts[2] = v6
      self.gearTexts[3] = v2
      self.gearSelectedIndex = 3
      -- goto L119  (LOP_JUMP +67)
    end
    if v6 == nil then
      self.gearTexts[1] = v2
      self.gearTexts[2] = v7
      self.gearTexts[3] = v9 or ""
      self.gearSelectedIndex = 1
      -- goto L119  (LOP_JUMP +51)
    end
    self.gearTexts[1] = v6
    self.gearTexts[2] = v2
    self.gearTexts[3] = v7
    self.gearSelectedIndex = 2
  elseif v2 ~= nil and v5 then
    self.gearHasGroup = false
    self.gearGroupText = ""
    self.gearTexts[1] = "R"
    self.gearTexts[2] = "N"
    self.gearTexts[3] = "D"
    if v2 == "N" then
      self.gearSelectedIndex = 2
    elseif v2 == "D" then
      self.gearSelectedIndex = 3
    else
      if v2 == "R" then
        self.gearSelectedIndex = 1
      end
    end
  end
  self.gearIsChanging = v10
  if self.gearGroupText == "" then
  end
  self:setGearGroupVisible(true)
  v12:setPosition(nil, self.gearSelectorPositions[self.gearSelectedIndex])
  if v11 then
    self.gearWarningTime = self.gearWarningTime + dt
    return
  end
  self.gearWarningTime = 0
end
function SpeedMeterDisplay:updateOperatingTime(dt)
  local v2 = v2:getVisible()
  if v2 then
    local v3 = math.floor(self.vehicle.operatingTime / 60000 / 60)
    local v4 = math.floor((self.vehicle.operatingTime / 60000 - v3 * 60) / 6)
    local v5 = v5:getText("shop_operatingTime")
    v4 = string.format(v5, v3, v4)
    self.operatingTimeText = v4
    v4, v5 = v4:getPosition()
    local fuelType = fuelType:getWidth()
    self.operatingTimeTextDrawPositionX = v4 + fuelType + self.operatingTimeTextOffsetX
    self.operatingTimeTextDrawPositionY = v5 + self.operatingTimeTextOffsetY
    self.operatingTimeIsSafe = true
  end
end
function SpeedMeterDisplay:updateCruiseControl(dt)
  local v2, v3 = v2:getCruiseControlDisplayInfo()
  self.cruiseControlSpeed = v2
  if v3 then
    -- if SpeedMeterDisplay.COLOR.CRUISE_CONTROL_ON then goto L21 end
  end
  self.cruiseControlColor = SpeedMeterDisplay.COLOR.CRUISE_CONTROL_OFF
  local v6 = unpack(self.cruiseControlColor)
  v4:setColor(...)
end
function SpeedMeterDisplay:updateGaugeIndicator(indicatorElement, radiusX, radiusY, rotation)
  local v5, v6 = indicatorElement:getRotationPivot()
  local cosRot = math.cos(rotation)
  local sinRot = math.sin(rotation)
  indicatorElement:setPosition(self.gaugeCenterX + cosRot * radiusX - v5, self.gaugeCenterY + sinRot * radiusY - v6)
  indicatorElement:setRotation(rotation - u0)
end
function SpeedMeterDisplay:updateSpeedGauge(dt)
  local v2 = v2:getLastSpeed()
  local v3 = math.max(0, v2 * self.vehicle.spec_motorized.speedDisplayScale)
  if v3 < 0.5 then
  end
  self.speedKmh = v3
  if self.speedGaugeMode == SpeedMeterDisplay.GAUGE_MODE_RPM then
    local fuelType = fuelType:getMotorRpmReal()
    local v5 = MathUtil.clamp((fuelType - self.speedGaugeMinValue) / (self.speedGaugeMaxValue - self.speedGaugeMinValue), 0, 1)
  else
    if self.speedGaugeUseMiles then
    end
    local v6 = MathUtil.clamp((v2 * v5 - self.speedGaugeMinValue) / (self.speedGaugeMaxValue - self.speedGaugeMinValue), 0, 1)
  end
  self.lastGaugeValue = self.lastGaugeValue * 0.95 + v4 * 0.05
  v5 = MathUtil.lerp(SpeedMeterDisplay.ANGLE.SPEED_GAUGE_MIN, SpeedMeterDisplay.ANGLE.SPEED_GAUGE_MAX, self.lastGaugeValue)
  self:updateGaugeIndicator(self.speedIndicatorElement, self.speedIndicatorRadiusX, self.speedIndicatorRadiusY, v5)
end
function SpeedMeterDisplay:updateDamageGauge(dt)
  local v2 = v2:getFinished()
  if not v2 then
    v2:update(dt)
  end
  if self.damageGaugeActive then
    -- TODO: structure LOP_FORNPREP (pc 25, target 48)
    if self.vehicle.rootVehicle.childVehicles[1].getDamageShowOnHud ~= nil then
      local fuelType = self.vehicle.rootVehicle.childVehicles[1]:getDamageShowOnHud()
      if fuelType then
        local v12 = self.vehicle.rootVehicle.childVehicles[1]:getDamageAmount()
        fuelType = math.min(1, 1 - v12)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 47, target 26)
    v4:setValue(v2, "DAMAGE")
    if v2 < 0.2 then
    end
    v5:setBarColor(v4[1], v4[2], v4[3])
  end
end
function SpeedMeterDisplay:getVehicleFuelLevelAndCapacity()
  local v2 = self:getConsumerFillUnitIndex(FillType.DIESEL)
  if v2 == nil then
    local v3 = self:getConsumerFillUnitIndex(FillType.ELECTRICCHARGE)
    if v3 == nil then
      v3 = self:getConsumerFillUnitIndex(FillType.METHANE)
    end
  end
  v3 = self:getFillUnitFillLevel(v2)
  local v4 = self:getFillUnitCapacity(v2)
  return v3, v4, dt
end
function SpeedMeterDisplay:getVehicleFuelType()
  local dt = self:getConsumerFillUnitIndex(FillType.DIESEL)
  if dt ~= nil then
    return FillType.DIESEL
  end
  dt = self:getConsumerFillUnitIndex(FillType.ELECTRICCHARGE)
  if dt ~= nil then
    return FillType.ELECTRICCHARGE
  end
  dt = self:getConsumerFillUnitIndex(FillType.METHANE)
  if dt ~= nil then
    return FillType.METHANE
  end
  return FillType.DIESEL
end
function SpeedMeterDisplay:updateFuelGauge(dt)
  local v2 = v2:getFinished()
  if not v2 then
    v2:update(dt)
  end
  if self.fuelGaugeActive then
    local v2, v3 = SpeedMeterDisplay.getVehicleFuelLevelAndCapacity(self.vehicle)
    if 0 < v3 then
      if v2 / v3 < SpeedMeterDisplay.FUEL_LOW_PERCENTAGE then
        self.fuelBarElementBlinkTimer = self.fuelBarElementBlinkTimer + dt
        local fuelType = math.cos(self.fuelBarElementBlinkTimer / 300)
        local v7 = math.abs(...)
      else
        self.fuelBarElementBlinkTimer = 0
      end
      v7:setBarColor(v6[1], v6[2], v6[3])
      v7:setBarAlpha(v5)
      v7:setValue(v4, "FUEL")
      return
    end
    v4:setBarColor(SpeedMeterDisplay.COLOR.FUEL_GAUGE[1], SpeedMeterDisplay.COLOR.FUEL_GAUGE[2], SpeedMeterDisplay.COLOR.FUEL_GAUGE[3])
    v4:setBarAlpha(1)
    v4:setValue(1)
  end
end
function SpeedMeterDisplay:onAnimateVisibilityFinished(isVisible)
  local v3 = v3:superClass()
  v3.onAnimateVisibilityFinished(self, isVisible)
  local v2, v3 = v2:getPosition()
  self:storeScaledValues(v2, v3)
end
function SpeedMeterDisplay:draw()
  if self.overlay.visible then
    dt:render()
    for v4, v5 in ipairs(self.children) do
      if not (v5 ~= self.speedIndicatorElement) then
        continue
      end
      v5:draw()
    end
  end
  if self.isVehicleDrawSafe then
    dt = self:getVisible()
    if dt then
      self:drawSpeedText()
      self:drawGearText()
      self:drawOperatingTimeText()
      self:drawCruiseControlText()
    end
  end
  new2DLayer()
  dt:draw()
end
function SpeedMeterDisplay:drawGearText()
  setTextAlignment(RenderText.ALIGN_CENTER)
  setTextBold(true)
  local dt, v2 = dt:getPosition()
  local v4 = v4:getWidth()
  renderText(dt + v4 * 0.5, v2 + self.gearGroupTextPositionY, self.gearTextSize, self.gearGroupText)
  -- TODO: structure LOP_FORNPREP (pc 35, target 107)
  if 1 == 2 then
    local fuelType = math.cos(self.gearWarningTime / 200)
    local v7 = math.abs(...)
  end
  if self.gearSelectedIndex == v5 then
    -- if not v0.gearIsChanging then goto L76 end
    local v7, fuelType, v9, v10 = unpack(SpeedMeterDisplay.COLOR.GEAR_TEXT_CHANGE)
    setTextColor(v7, fuelType, v9, v10 * v6)
  else
    v7, fuelType, v9, v10 = unpack(SpeedMeterDisplay.COLOR.GEAR_TEXT)
    setTextColor(v7, fuelType, v9, v10 * v6)
  end
  renderText(dt, v2 + self.gearTextPositionY[v5], self.gearTextSize, self.gearTexts[v5])
  -- TODO: structure LOP_FORNLOOP (pc 106, target 36)
  setTextBold(false)
end
function SpeedMeterDisplay:drawOperatingTimeText()
  local dt = dt:getVisible()
  if dt then
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextBold(false)
    setTextColor(1, 1, 1, 1)
    renderText(self.operatingTimeTextDrawPositionX, self.operatingTimeTextDrawPositionY, self.operatingTimeTextSize, self.operatingTimeText)
  end
end
function SpeedMeterDisplay:drawCruiseControlText()
  local dt = dt:getVisible()
  if dt then
    setTextAlignment(RenderText.ALIGN_LEFT)
    local v2 = unpack(self.cruiseControlColor)
    setTextColor(...)
    setTextBold(true)
    v2 = v2:getText("ui_cruiseControlSpeed")
    local v3 = v3:getSpeed(self.cruiseControlSpeed)
    dt = string.format(...)
    v2, v3 = v2:getPosition()
    local v6 = v6:getWidth()
    renderText(v2 + v6 + self.cruiseControlTextOffsetX, v3 + self.cruiseControlTextOffsetY, self.cruiseControlTextSize, dt)
  end
end
function SpeedMeterDisplay:drawSpeedText()
  local dt = dt:getSpeed(self.speedKmh)
  local v2 = math.floor(dt)
  local v3 = math.abs(dt - v2)
  if 0.5 < v3 then
  end
  v3 = string.format("%1d", v2)
  local v5 = v5:getSpeedMeasuringUnit()
  local v4 = utf8ToUpper(...)
  local v5, v6 = v5:getPosition()
  local v9 = v9:getWidth()
  v9 = unpack(SpeedMeterDisplay.COLOR.SPEED_TEXT)
  setTextColor(...)
  setTextBold(false)
  setTextAlignment(RenderText.ALIGN_CENTER)
  renderText(v5 + v9 * 0.5, v6 + self.speedTextOffsetY, self.speedTextSize, v3)
  v9 = unpack(SpeedMeterDisplay.COLOR.SPEED_UNIT)
  setTextColor(...)
  renderText(v5 + v9 * 0.5, v6 + self.speedUnitTextOffsetY, self.speedUnitTextSize, v4)
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_MIDDLE)
  setTextColor(0.7, 0.7, 0.7, 0.65)
  for v11, v12 in pairs(self.speedGaugeElements) do
    if not (v12.text ~= nil) then
      continue
    end
    renderText(v5 + v12.textPosX, v6 + v12.textPosY, self.speedUnitTextSize, v12.text)
  end
  if self.speedGaugeMode == SpeedMeterDisplay.GAUGE_MODE_RPM then
    v11 = v11:getWidth()
    renderText(v7 - v11 * 0.25, v6 + self.rpmUnitTextOffsetY * 0.34, self.rpmUnitTextSize, self.rpmUnitText)
    v11 = v11:getWidth()
    renderText(v7 + v11 * 0.25, v6 + self.rpmUnitTextOffsetY * 0.34, self.rpmUnitTextSize, "x100")
  end
  setTextVerticalAlignment(RenderText.VERTICAL_ALIGN_BASELINE)
end
function SpeedMeterDisplay:fadeFuelGauge(alpha)
  v2:setAlpha(alpha)
  v2:setAlpha(alpha)
  if 0 >= alpha then
  end
  local v3 = v3:getVisible()
  if true ~= v3 then
    v3:setVisible(true)
    v3:setVisible(true)
  end
end
function SpeedMeterDisplay:animateFuelGaugeToggle(makeActive)
  local v2 = v2:getAlpha()
  if makeActive then
  else
  end
  local v4 = v4:getFinished()
  if v4 then
    v4 = TweenSequence.new(self)
    local v5 = Tween.new(self.fadeFuelGauge, v2, v3, HUDDisplayElement.MOVE_ANIMATION_DURATION)
    v4:addTween(v5)
    v4:start()
    self.fadeFuelGaugeAnimation = v4
    return
  end
  v4:stop()
  self:fadeFuelGauge(v3)
end
function SpeedMeterDisplay:fadeDamageGauge(alpha)
  v2:setAlpha(alpha)
  v2:setAlpha(alpha)
  if 0 >= alpha then
  end
  local v3 = v3:getVisible()
  if true ~= v3 then
    v3:setVisible(true)
  end
end
function SpeedMeterDisplay:animateDamageGaugeToggle(makeActive)
  local v2 = v2:getAlpha()
  if makeActive then
  else
  end
  local v4 = v4:getFinished()
  if v4 then
    v4 = TweenSequence.new(self)
    local v5 = Tween.new(self.fadeDamageGauge, v2, v3, HUDDisplayElement.MOVE_ANIMATION_DURATION)
    v4:addTween(v5)
    v4:start()
    self.fadeDamageGaugeAnimation = v4
    return
  end
  v4:stop()
  self:fadeDamageGauge(v3)
end
function SpeedMeterDisplay:setScale(uiScale)
  local v3 = v3:superClass()
  v3.setScale(self, uiScale, uiScale)
  self.uiScale = uiScale
  local currentVisibility = self:getVisible()
  self:setVisible(true, false)
  local v3, v4 = SpeedMeterDisplay.getBackgroundPosition(uiScale)
  self:setPosition(v3, v4)
  self:storeOriginalPosition()
  self:setVisible(currentVisibility, false)
  local v5, v6 = v5:getPosition()
  self:storeScaledValues(v5, v6)
end
function SpeedMeterDisplay:storeGaugeCenterPosition(baseX, baseY)
  local v4 = unpack(SpeedMeterDisplay.SIZE.GAUGE_BACKGROUND)
  local v3, v4 = getNormalizedScreenValues(...)
  self.gaugeCenterX = baseX + v3 * 0.5 * self.uiScale
  self.gaugeCenterY = baseY + v4 * 0.5 * self.uiScale
end
function SpeedMeterDisplay:storeScaledValues(baseX, baseY)
  self:storeGaugeCenterPosition(baseX, baseY)
  local v3 = self:scalePixelToScreenHeight(SpeedMeterDisplay.TEXT_SIZE.CRUISE_CONTROL)
  self.cruiseControlTextSize = v3
  local v3, v4 = self:scalePixelToScreenVector(SpeedMeterDisplay.POSITION.CRUISE_CONTROL_TEXT)
  self.cruiseControlTextOffsetX = v3
  self.cruiseControlTextOffsetY = v4
  v3 = self:scalePixelToScreenHeight(SpeedMeterDisplay.TEXT_SIZE.OPERATING_TIME)
  self.operatingTimeTextSize = v3
  v3, v4 = self:scalePixelToScreenVector(SpeedMeterDisplay.POSITION.OPERATING_TIME_TEXT)
  self.operatingTimeTextOffsetX = v3
  self.operatingTimeTextOffsetY = v4
  v3 = self:scalePixelToScreenHeight(SpeedMeterDisplay.POSITION.SPEED_TEXT[2])
  self.speedTextOffsetY = v3
  v3 = self:scalePixelToScreenHeight(SpeedMeterDisplay.POSITION.SPEED_UNIT[2])
  self.speedUnitTextOffsetY = v3
  v3 = self:scalePixelToScreenHeight(SpeedMeterDisplay.TEXT_SIZE.SPEED)
  self.speedTextSize = v3
  v3 = self:scalePixelToScreenHeight(SpeedMeterDisplay.TEXT_SIZE.SPEED_UNIT)
  self.speedUnitTextSize = v3
  v3 = self:scalePixelToScreenHeight(SpeedMeterDisplay.POSITION.SPEED_UNIT_TEXT[2])
  self.rpmUnitTextOffsetY = v3
  v3 = self:scalePixelToScreenHeight(SpeedMeterDisplay.TEXT_SIZE.RPM_UNIT)
  self.rpmUnitTextSize = v3
  v3, v4 = self:scalePixelToScreenVector(SpeedMeterDisplay.SIZE.GAUGE_INDICATOR_LARGE_RADIUS)
  self.speedIndicatorRadiusX = v3
  self.speedIndicatorRadiusY = v4
  self.gearTextPositionY = {}
  v4 = self:scalePixelToScreenHeight(SpeedMeterDisplay.POSITION.GEAR_TEXT_1[2])
  self.gearTextPositionY[1] = v4
  v4 = self:scalePixelToScreenHeight(SpeedMeterDisplay.POSITION.GEAR_TEXT_2[2])
  self.gearTextPositionY[2] = v4
  v4 = self:scalePixelToScreenHeight(SpeedMeterDisplay.POSITION.GEAR_TEXT_3[2])
  self.gearTextPositionY[3] = v4
  v3 = self:scalePixelToScreenHeight(SpeedMeterDisplay.POSITION.GEAR_GROUP_TEXT[2])
  self.gearGroupTextPositionY = v3
  v3 = self:scalePixelToScreenHeight(SpeedMeterDisplay.SIZE.GEAR_ICON_BG[2])
  v4 = self:scalePixelToScreenHeight(SpeedMeterDisplay.SIZE.GEAR_SELECTOR[2])
  local v5, v6 = self:getPosition()
  local fuelType = self:scalePixelToScreenHeight(SpeedMeterDisplay.POSITION.GEAR_INDICATOR[2])
  local v9 = self:scalePixelToScreenHeight(SpeedMeterDisplay.POSITION.GEAR_GROUP[2])
  self.gearGroupBgY = v6 + fuelType + v9
  v9 = self:scalePixelToScreenHeight(SpeedMeterDisplay.POSITION.GEAR_ICON_BG[2])
  self.gearIconBgY = v6 + fuelType + v9
  self.gearSelectorPositions = {v6 + fuelType + (v3 - v4) / 2, v6 + fuelType + (v3 - v4) / 2 + v4, v6 + fuelType + (v3 - v4) / 2 + v4 * 2}
  v9 = self:scalePixelToScreenHeight(SpeedMeterDisplay.TEXT_SIZE.GEAR)
  self.gearTextSize = v9
end
function SpeedMeterDisplay:onHudSpeedGaugeModeChanged()
  local dt = dt:getValue(GameSettings.SETTING.HUD_SPEED_GAUGE)
  self.speedGaugeMode = dt
  if self.vehicle ~= nil and self.vehicle.spec_motorized ~= nil then
    if self.vehicle.spec_motorized.forceSpeedHudDisplay then
      self.speedGaugeMode = SpeedMeterDisplay.GAUGE_MODE_SPEED
    elseif self.vehicle.spec_motorized.forceRpmHudDisplay then
      self.speedGaugeMode = SpeedMeterDisplay.GAUGE_MODE_RPM
    end
    if self.speedGaugeMode == SpeedMeterDisplay.GAUGE_MODE_RPM then
      local v6 = dt.motor:getMinRpm()
      local v7 = dt.motor:getMaxRpm()
      self:setupSpeedGauge(self.gaugeBackgroundElement, v6, v7, 200)
      return
    end
    if self.speedGaugeUseMiles then
    end
    local v9 = v2:getMaximumForwardSpeed()
    self:setupSpeedGauge(self.gaugeBackgroundElement, 0, v9 * 3.6, 5, true, v3)
  end
end
function SpeedMeterDisplay:onHudSpeedGaugeUseMilesChanged()
  local dt = dt:getValue(GameSettings.SETTING.USE_MILES)
  self.speedGaugeUseMiles = dt
  if self.speedGaugeMode == SpeedMeterDisplay.GAUGE_MODE_SPEED then
    self:onHudSpeedGaugeModeChanged()
  end
end
function SpeedMeterDisplay.getBackgroundPosition(scale)
  local v2 = unpack(SpeedMeterDisplay.SIZE.BACKGROUND)
  local dt = getNormalizedScreenValues(...)
  local v3 = unpack(SpeedMeterDisplay.POSITION.SELF)
  v2, v3 = getNormalizedScreenValues(...)
  return 1 - g_safeFrameOffsetX - dt * scale + v2, g_safeFrameOffsetY - v3
end
function SpeedMeterDisplay.createBackground(hudAtlasPath)
  local v2 = unpack(SpeedMeterDisplay.SIZE.BACKGROUND)
  local dt, v2 = getNormalizedScreenValues(...)
  local v3, v4 = SpeedMeterDisplay.getBackgroundPosition(1)
  return Overlay.new(nil, v3, v4, dt, v2)
end
function SpeedMeterDisplay:createGaugeBackground(hudAtlasPath, baseX, baseY)
  local v5 = unpack(SpeedMeterDisplay.SIZE.GAUGE_BACKGROUND)
  local v4, v5 = getNormalizedScreenValues(...)
  local v6 = Overlay.new("dataS/menu/hud/hud_speedometer.png", baseX, baseY, v4, v5)
  local v9 = GuiUtils.getUVs(SpeedMeterDisplay.UV.GAUGE_BACKGROUND)
  v6:setUVs(...)
  local v7 = HUDElement.new(v6)
  self:addChild(v7)
  return v7
end
function SpeedMeterDisplay:setupSpeedGauge(gaugeBackgroundElement, minSpeedGaugeValue, maxSpeedGaugeValue, speedGaugeRounding, fixedLowerLimit, valueScale)
  if self.speedGaugeSizeValues == nil then
    local v10 = unpack(SpeedMeterDisplay.SIZE.GAUGE_BAR)
    local v9, v10 = getNormalizedScreenValues(...)
    v10 = unpack(SpeedMeterDisplay.SIZE.GAUGE_BAR_SMALL)
    v9, v10 = getNormalizedScreenValues(...)
    v10 = unpack(SpeedMeterDisplay.POSITION.GAUGE_CENTER)
    v9, v10 = getNormalizedScreenValues(...)
    v9, v10 = getNormalizedScreenValues(1, 0)
    v9 = GuiUtils.getUVs(SpeedMeterDisplay.UV.GAUGE_STEP)
    v9 = GuiUtils.getUVs(SpeedMeterDisplay.UV.GAUGE_STEP_SMALL)
    self.speedGaugeSizeValues = {stepWidthOrig = v9, stepHeightOrig = v10, stepSmallWidthOrig = v9, stepSmallHeightOrig = v10, centerOffsetXOrig = v9, centerOffsetYOrig = v10, stepXOffsetOrig = v9, stepUVs = v9, stepSmallUVs = v9}
  end
  v7.stepWidth = v7.stepWidthOrig * self.uiScale
  v7.stepHeight = v7.stepHeightOrig * self.uiScale
  v7.stepSmallWidth = v7.stepSmallWidthOrig * self.uiScale
  v7.stepSmallHeight = v7.stepSmallHeightOrig * self.uiScale
  v7.centerOffsetX = v7.centerOffsetXOrig * self.uiScale
  v7.centerOffsetY = v7.centerOffsetYOrig * self.uiScale
  v7.stepXOffset = v7.stepXOffsetOrig * self.uiScale
  v10 = math.ceil((maxSpeedGaugeValue * (valueScale or 1) - minSpeedGaugeValue * (valueScale or 1)) / 8 / speedGaugeRounding)
  local v12 = math.floor(minSpeedGaugeValue * (valueScale or 1) / speedGaugeRounding)
  local v13 = math.floor(maxSpeedGaugeValue * (valueScale or 1) / speedGaugeRounding)
  if fixedLowerLimit then
  end
  self.speedGaugeMinValue = v10
  self.speedGaugeMaxValue = v11
  v12, v13 = gaugeBackgroundElement:getPosition()
  local baseWidth = gaugeBackgroundElement:getWidth()
  local baseHeight = gaugeBackgroundElement:getHeight()
  local v19 = math.floor((v11 - v10) / v9)
  -- TODO: structure LOP_FORNPREP (pc 200, target 419)
  if (1 - 1) % 5 ~= 0 then
  end
  if not true then
  else
  end
  if v27 then
    -- if SpeedMeterDisplay.COLOR.GAUGE_STEP_SMALL then goto L234 end
  end
  if self.speedGaugeMode == SpeedMeterDisplay.GAUGE_MODE_RPM and v20 - 5 <= v25 and v27 then
    -- if SpeedMeterDisplay.COLOR.GAUGE_STEP_WARN_SMALL then goto L259 end
  end
  if self.speedGaugeElements[v25] == nil then
    if v27 then
      -- if v7.stepSmallWidth then goto L283 end
    end
    if v27 then
      -- if v7.stepSmallHeight then goto L289 end
    end
    local v31 = v31(v32, v33, v34, v35, v7.stepHeight)
    v30.stepOverlay = v31
    if v27 then
      v31:setUVs(v7.stepSmallUVs)
    else
      v31:setUVs(v7.stepUVs)
    end
    v31:setColor(v29[1], v29[2], v29[3], v29[4])
    v31:setRotation(v26, baseWidth - v28, v7.stepHeight * 0.5)
    local v33 = HUDElement.new(v30.stepOverlay)
    self:addChild(...)
  else
    v31:setColor(v29[1], v29[2], v29[3], v29[4])
    v31:setRotation(v26, baseWidth - v28, v7.stepHeight * 0.5)
  end
  v31:setIsVisible(true)
  if not v27 then
    if self.speedGaugeMode == SpeedMeterDisplay.GAUGE_MODE_RPM then
      v31 = string.format("%d", v21 / 100)
      v30.text = v31
    else
      v31 = string.format("%d", v21)
      v30.text = v31
    end
    v31 = math.cos(v26 - math.pi)
    local v32 = math.sin(v26 - math.pi)
    v30.textPosX = v7.centerOffsetX + v31 * v16 * 0.315
    v30.textPosY = v7.centerOffsetY + v32 * baseHeight * 0.315
  end
  self.speedGaugeElements[v25] = v30
  -- TODO: structure LOP_FORNLOOP (pc 418, target 201)
  -- TODO: structure LOP_FORNPREP (pc 424, target 441)
  v26:setIsVisible(false)
  self.speedGaugeElements[v25 + 1].text = nil
  -- TODO: structure LOP_FORNLOOP (pc 440, target 425)
end
function SpeedMeterDisplay:createDamageBar(hudAtlasPath, baseX, baseY)
  local v5 = unpack(SpeedMeterDisplay.SIZE.DAMAGE_LEVEL_BAR)
  local v4, v5 = getNormalizedScreenValues(...)
  local v7 = unpack(SpeedMeterDisplay.POSITION.DAMAGE_LEVEL_BAR)
  local v6, v7 = getNormalizedScreenValues(...)
  local fuelType = HUDRoundedBarElement.new(hudAtlasPath, baseX + v6, baseY + v7, v4, v5, false)
  local v11 = unpack(SpeedMeterDisplay.COLOR.DAMAGE_GAUGE)
  fuelType:setBarColor(...)
  self:addChild(fuelType)
  return fuelType
end
function SpeedMeterDisplay:createFuelBar(hudAtlasPath, baseX, baseY)
  local v5 = unpack(SpeedMeterDisplay.SIZE.FUEL_LEVEL_BAR)
  local v4, v5 = getNormalizedScreenValues(...)
  local v7 = unpack(SpeedMeterDisplay.POSITION.FUEL_LEVEL_BAR)
  local v6, v7 = getNormalizedScreenValues(...)
  local fuelType = HUDRoundedBarElement.new(hudAtlasPath, baseX + v6, baseY + v7, v4, v5, false)
  local v11 = unpack(SpeedMeterDisplay.COLOR.FUEL_GAUGE)
  fuelType:setBarColor(...)
  self:addChild(fuelType)
  return fuelType
end
function SpeedMeterDisplay:createGaugeIconElements(hudAtlasPath, baseX, baseY)
  local v5 = unpack(SpeedMeterDisplay.POSITION.DAMAGE_LEVEL_ICON)
  local v4, v5 = getNormalizedScreenValues(...)
  local v7 = unpack(SpeedMeterDisplay.SIZE.DAMAGE_LEVEL_ICON)
  local v6, v7 = getNormalizedScreenValues(...)
  local fuelType = Overlay.new(hudAtlasPath, baseX + v4, baseY + v5, v6, v7)
  local v11 = GuiUtils.getUVs(SpeedMeterDisplay.UV.DAMAGE_LEVEL_ICON)
  fuelType:setUVs(...)
  local v9 = HUDElement.new(fuelType)
  self:addChild(v9)
  v11 = unpack(SpeedMeterDisplay.POSITION.FUEL_LEVEL_ICON)
  local v10, v11 = getNormalizedScreenValues(...)
  v11 = unpack(SpeedMeterDisplay.SIZE.FUEL_LEVEL_ICON)
  v10, v11 = getNormalizedScreenValues(...)
  v10 = Overlay.new(hudAtlasPath, baseX + v10, baseY + v11, v10, v11)
  local v12 = GuiUtils.getUVs(SpeedMeterDisplay.UV.FUEL_LEVEL_ICON)
  v10:setUVs(...)
  v10 = HUDElement.new(v10)
  self:addChild(v10)
  return v9, v10
end
function SpeedMeterDisplay:createCruiseControlElement(hudAtlasPath, baseX, baseY)
  local v5 = unpack(SpeedMeterDisplay.POSITION.CRUISE_CONTROL)
  local v4, v5 = getNormalizedScreenValues(...)
  local v7 = unpack(SpeedMeterDisplay.SIZE.CRUISE_CONTROL)
  local v6, v7 = getNormalizedScreenValues(...)
  local fuelType = Overlay.new(hudAtlasPath, baseX + v4, baseY + v5, v6, v7)
  local v11 = GuiUtils.getUVs(SpeedMeterDisplay.UV.CRUISE_CONTROL)
  fuelType:setUVs(...)
  local v9 = HUDElement.new(fuelType)
  self:addChild(v9)
  return v9
end
function SpeedMeterDisplay:createOperatingTimeElement(hudAtlasPath, baseX, baseY)
  local v5 = unpack(SpeedMeterDisplay.SIZE.OPERATING_TIME)
  local v4, v5 = getNormalizedScreenValues(...)
  local v7 = unpack(SpeedMeterDisplay.POSITION.OPERATING_TIME)
  local v6, v7 = getNormalizedScreenValues(...)
  local fuelType = Overlay.new(hudAtlasPath, baseX + v6, baseY + v7, v4, v5)
  local v11 = GuiUtils.getUVs(SpeedMeterDisplay.UV.OPERATING_TIME)
  fuelType:setUVs(...)
  local v9 = HUDElement.new(fuelType)
  self:addChild(v9)
  return v9
end
function SpeedMeterDisplay:createSpeedGaugeIndicator(hudAtlasPath, baseX, baseY)
  local v5 = unpack(SpeedMeterDisplay.SIZE.GAUGE_INDICATOR_LARGE)
  local v4, v5 = getNormalizedScreenValues(...)
  local v6 = Overlay.new(hudAtlasPath, 0, 0, v4, v5)
  local v9 = GuiUtils.getUVs(SpeedMeterDisplay.UV.GAUGE_INDICATOR_LARGE)
  v6:setUVs(...)
  v9 = unpack(SpeedMeterDisplay.COLOR.SPEED_GAUGE_INDICATOR)
  v6:setColor(...)
  local v7 = HUDElement.new(v6)
  local fuelType, v9 = self:normalizeUVPivot(SpeedMeterDisplay.PIVOT.GAUGE_INDICATOR_LARGE, SpeedMeterDisplay.SIZE.GAUGE_INDICATOR_LARGE, SpeedMeterDisplay.UV.GAUGE_INDICATOR_LARGE)
  v7:setRotationPivot(fuelType, v9)
  self:addChild(v7)
  return v7
end
function SpeedMeterDisplay:createGearIndicator(hudAtlasPath, baseX, baseY)
  local v5 = unpack(SpeedMeterDisplay.SIZE.GEAR_INDICATOR)
  local v4, v5 = getNormalizedScreenValues(...)
  local v7 = unpack(SpeedMeterDisplay.POSITION.GEAR_INDICATOR)
  local v6, v7 = getNormalizedScreenValues(...)
  local fuelType, v9 = self:getPosition()
  local v10 = Overlay.new(nil, fuelType + v6, v9 + v7, v4, v5)
  local v11 = HUDElement.new(v10)
  self:addChild(v11)
  local v13 = unpack(SpeedMeterDisplay.SIZE.GEAR_ICON_BG)
  local v12, v13 = getNormalizedScreenValues(...)
  local v15 = unpack(SpeedMeterDisplay.POSITION.GEAR_GROUP)
  local v14, v15 = getNormalizedScreenValues(...)
  local v17 = unpack(SpeedMeterDisplay.POSITION.GEAR_ICON_BG)
  local v16, v17 = getNormalizedScreenValues(...)
  local v19 = unpack(SpeedMeterDisplay.SIZE.GEAR_ICON)
  local v18, v19 = getNormalizedScreenValues(...)
  local v21 = unpack(SpeedMeterDisplay.POSITION.GEARS_BAR)
  local v20, v21 = getNormalizedScreenValues(...)
  local v23 = unpack(SpeedMeterDisplay.SIZE.GEARS_BAR)
  local v22, v23 = getNormalizedScreenValues(...)
  local v25 = unpack(SpeedMeterDisplay.SIZE.GEAR_SELECTOR)
  local v24, v25 = getNormalizedScreenValues(...)
  local v26 = Overlay.new(hudAtlasPath, fuelType + v6 + v14, v9 + v7 + v15, v12, v13)
  local v29 = GuiUtils.getUVs(SpeedMeterDisplay.UV.GEAR_CIRCLE)
  v26:setUVs(...)
  v29 = unpack(SpeedMeterDisplay.COLOR.GEARS_BG)
  v26:setColor(...)
  local v27 = HUDElement.new(v26)
  self.gearGroupBg = v27
  v11:addChild(self.gearGroupBg)
  v27 = Overlay.new(hudAtlasPath, fuelType + v6 + v16, v9 + v7 + v17, v12, v13)
  local v30 = GuiUtils.getUVs(SpeedMeterDisplay.UV.GEAR_CIRCLE)
  v27:setUVs(...)
  v30 = unpack(SpeedMeterDisplay.COLOR.GEARS_BG)
  v27:setColor(...)
  local v28 = HUDElement.new(v27)
  self.gearIconBg = v28
  v11:addChild(self.gearIconBg)
  v28 = Overlay.new(hudAtlasPath, fuelType + v6 + v16 + (v12 - v18) / 2, v9 + v7 + v17 + (v13 - v19) / 2, v18, v19)
  local v31 = GuiUtils.getUVs(SpeedMeterDisplay.UV.GEAR_ICON)
  v28:setUVs(...)
  v31 = unpack(SpeedMeterDisplay.COLOR.GEAR_ICON)
  v28:setColor(...)
  v29 = HUDElement.new(v28)
  self.gearIcon = v29
  v11:addChild(self.gearIcon)
  v29 = Overlay.new(hudAtlasPath, fuelType + v6 + v20, v9 + v7 + v21, v22, v23)
  local v32 = GuiUtils.getUVs(SpeedMeterDisplay.UV.GEARS_BAR)
  v29:setUVs(...)
  v32 = unpack(SpeedMeterDisplay.COLOR.GEARS_BG)
  v29:setColor(...)
  v30 = HUDElement.new(v29)
  self.gearBg = v30
  v11:addChild(self.gearBg)
  v30 = Overlay.new(hudAtlasPath, fuelType + v6 + (v12 - v24) / 2, v9 + v7 + (v13 - v25) / 2, v24, v25)
  local v33 = GuiUtils.getUVs(SpeedMeterDisplay.UV.GEAR_SELECTOR)
  v30:setUVs(...)
  v33 = unpack(SpeedMeterDisplay.COLOR.GEAR_SELECTOR)
  v30:setColor(...)
  v31 = HUDElement.new(v30)
  self.gearSelectorIcon = v31
  v11:addChild(self.gearSelectorIcon)
  return v11
end
function SpeedMeterDisplay:setGearGroupVisible(visible)
  v2:setVisible(visible)
  if visible then
    v2:setPosition(nil, self.gearGroupBgY)
    v2:setPosition(nil, self.gearIconBgY)
    v2:setPosition(nil, self.gearIconBgY + (self.gearIconBg.overlay.height - self.gearIcon.overlay.height) / 2)
    return
  end
  v2:setPosition(nil, self.gearGroupBgY)
  v2:setPosition(nil, self.gearGroupBgY + (self.gearIconBg.overlay.height - self.gearIcon.overlay.height) / 2)
end
SpeedMeterDisplay.UV = {FUEL_LEVEL_ICON = {192, 0, 48, 48}, FUEL_LEVEL_ICON_ELECTRIC = {480, 0, 48, 48}, FUEL_LEVEL_ICON_METHANE = {528, 0, 48, 48}, DAMAGE_LEVEL_ICON = {144, 0, 48, 48}, OPERATING_TIME = {16, 0, 32, 48}, CRUISE_CONTROL = {96, 146, 42, 42}, GAUGE_BACKGROUND = {0, 0, 1024, 1024}, GAUGE_INDICATOR_LARGE = {0, 288, 48, 96}, GAUGE_STEP = {194, 76, 27, 8}, GAUGE_STEP_SMALL = {195, 87, 18, 5}, GEAR_ICON = {337, 353, 32, 32}, GEAR_SELECTOR = {337, 387, 32, 32}, GEAR_CIRCLE = {472, 331, 44, 44}, GEARS_BAR = {417, 331, 44, 110}}
SpeedMeterDisplay.GAUGE_TEXTURE_SCALE = 0.6
SpeedMeterDisplay.SIZE = {BACKGROUND = {277, 256}, GAUGE_BACKGROUND = {256, 256}, FUEL_LEVEL_ICON = {28, 28}, DAMAGE_LEVEL_ICON = {28, 28}, FUEL_LEVEL_BAR = {12, 110}, DAMAGE_LEVEL_BAR = {12, 110}, CRUISE_CONTROL = {27, 27}, OPERATING_TIME = {17, 25}, GAUGE_INDICATOR_LARGE = {SpeedMeterDisplay.UV.GAUGE_INDICATOR_LARGE[3], SpeedMeterDisplay.UV.GAUGE_INDICATOR_LARGE[4]}, GAUGE_INDICATOR_LARGE_RADIUS = {110 * SpeedMeterDisplay.GAUGE_TEXTURE_SCALE, 110 * SpeedMeterDisplay.GAUGE_TEXTURE_SCALE}, GAUGE_BAR = {15, 3}, GAUGE_BAR_SMALL = {9, 2}, GEAR_INDICATOR = {44, 228}, GEAR_GROUP = {44, 44}, GEARS_BAR = {44, 110}, GEAR_ICON_BG = {44, 44}, GEAR_ICON = {32, 32}, GEAR_SELECTOR = {32, 32}}
SpeedMeterDisplay.POSITION = {SELF = {-64, 0}, GAUGE_BACKGROUND = {(SpeedMeterDisplay.SIZE.BACKGROUND[1] - SpeedMeterDisplay.SIZE.BACKGROUND[1]) * 0.5, (SpeedMeterDisplay.SIZE.BACKGROUND[2] - SpeedMeterDisplay.SIZE.BACKGROUND[2]) * 0.5}, GAUGE_CENTER = {128, 128}, FUEL_LEVEL_ICON = {230, 10}, DAMAGE_LEVEL_ICON = {230, 210}, FUEL_LEVEL_BAR = {262, 8}, DAMAGE_LEVEL_BAR = {262, 126}, CRUISE_CONTROL = {100, 75}, CRUISE_CONTROL_TEXT = {8, 5}, OPERATING_TIME = {90, 20}, OPERATING_TIME_TEXT = {5, 6}, SPEED_TEXT = {0, 133}, SPEED_UNIT = {0, 115}, SPEED_UNIT_TEXT = {0, 183}, GEAR_TEXT = {0, 155}, GEAR_INDICATOR = {290, 10}, GEARS_BAR = {0, 0}, GEAR_GROUP = {0, 125}, GEAR_ICON_BG = {0, 184}, GEAR_TEXT_1 = {0, 16}, GEAR_TEXT_2 = {0, 48}, GEAR_TEXT_3 = {0, 80}, GEAR_GROUP_TEXT = {0, 141}}
SpeedMeterDisplay.TEXT_SIZE = {CRUISE_CONTROL = 22, OPERATING_TIME = 18, SPEED = 50, SPEED_UNIT = 14, RPM_UNIT = 10, GEAR = 16}
SpeedMeterDisplay.COLOR = {SHADOW_BACKGROUND = {1, 1, 1, 1}, SPEED_TEXT = {0.0003, 0.5647, 0.9822, 1}, SPEED_UNIT = {0.0003, 0.5647, 0.9822, 1}, SPEED_GAUGE_INDICATOR = {1, 1, 1, 1}, GAUGE_STEP = {0.7, 0.7, 0.7, 0.6}, GAUGE_STEP_SMALL = {0.7, 0.7, 0.7, 0.3}, GAUGE_STEP_WARN = {0.7, 0.04, 0.04, 0.8}, GAUGE_STEP_WARN_SMALL = {0.7, 0.04, 0.04, 0.8}, DAMAGE_GAUGE = {1, 0.4233, 0}, DAMAGE_GAUGE_LOW = {1, 0.1233, 0}, FUEL_GAUGE = {0.4423, 0.6724, 0.0093}, FUEL_GAUGE_LOW = {1, 0.1233, 0}, CRUISE_CONTROL_OFF = {1, 1, 1, 0.5}, CRUISE_CONTROL_ON = {0.0003, 0.5647, 0.9822, 1}, GEAR_TEXT = {0.0003, 0.5647, 0.9822, 1}, GEAR_TEXT_CHANGE = {1, 1, 1, 0.5}, GEAR_ICON = {0.0003, 0.5647, 0.9822, 1}, GEAR_SELECTOR = {0.0003, 0.5647, 0.9822, 0.4}, GEARS_BG = {0, 0, 0, 0.54}, GEARS_BG_WARN = {1, 0, 0, 0.54}}
SpeedMeterDisplay.PIVOT = {GAUGE_INDICATOR_LARGE = {24, 23}}
SpeedMeterDisplay.SPEED_GAUGE_FULL_ANGLE = 249
local v4 = MathUtil.degToRad(90 + SpeedMeterDisplay.SPEED_GAUGE_FULL_ANGLE * 0.5)
v4 = MathUtil.degToRad(90 - SpeedMeterDisplay.SPEED_GAUGE_FULL_ANGLE * 0.5)
SpeedMeterDisplay.ANGLE = {SPEED_GAUGE_MIN = v4, SPEED_GAUGE_MAX = v4}
SpeedMeterDisplay.GAUGE_MODE_RPM = 1
SpeedMeterDisplay.GAUGE_MODE_SPEED = 2
SpeedMeterDisplay.FUEL_LOW_PERCENTAGE = 0.1
