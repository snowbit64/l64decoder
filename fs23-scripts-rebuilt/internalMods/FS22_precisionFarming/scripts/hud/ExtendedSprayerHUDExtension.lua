-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtendedSprayerHUDExtension = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory, GUI_ELEMENTS = ExtendedSprayerHUDExtension.MOD_DIR .. "gui/ui_elements.png"}
local ExtendedSprayerHUDExtension_mt = Class(ExtendedSprayerHUDExtension, VehicleHUDExtension)
function ExtendedSprayerHUDExtension:new(v1, v2, v3)
  local v4 = VehicleHUDExtension.new(u0, self, v1, v2, v3)
  v4.extendedSprayer = self.spec_extendedSprayer
  local v5 = v4:getIsVehicleValid(self)
  v4.validVehicle = v5
  if v4.validVehicle then
    -- if v0 then goto L24 end
  end
  v4.realVehicle = nil
  v5 = GuiUtils.getUVs(ExtendedSprayerHUDExtension.UV.PH_GRADIENT)
  v4.pHGradientUVs = v5
  v5 = GuiUtils.getUVs(ExtendedSprayerHUDExtension.UV.PH_GRADIENT)
  v4.pHGradientUVsInactive = v5
  v5 = GuiUtils.getUVs(ExtendedSprayerHUDExtension.UV.N_GRADIENT)
  v4.nGradientUVs = v5
  v5 = GuiUtils.getUVs(ExtendedSprayerHUDExtension.UV.N_GRADIENT)
  v4.nGradientUVsInactive = v5
  v5 = GuiUtils.getUVs(ExtendedSprayerHUDExtension.UV.COLOR_BLIND_GRADIENT)
  v4.colorBlindGradientUVs = v5
  v5 = GuiUtils.getUVs(ExtendedSprayerHUDExtension.UV.COLOR_BLIND_GRADIENT)
  v4.colorBlindGradientUVsInactive = v5
  local v5, v6 = getNormalizedScreenValues(1 * v1, 1 * v1)
  v4.pixelSizeX = v5
  v4.pixelSizeY = v6
  v5, v6 = getNormalizedScreenValues(370 * v1, 8 * v1)
  local v7 = Overlay.new(ExtendedSprayerHUDExtension.GUI_ELEMENTS, 0, 0, v5, v6)
  v4.gradient = v7
  v7:setUVs(v4.pHGradientUVs)
  v7:setColor(1, 1, 1, 1)
  v4:addComponentForCleanup(v4.gradient)
  v7 = Overlay.new(ExtendedSprayerHUDExtension.GUI_ELEMENTS, 0, 0, v5, v6)
  v4.gradientInactive = v7
  v7:setUVs(v4.pHGradientUVs)
  v7:setColor(0.4, 0.4, 0.4, 1)
  v4:addComponentForCleanup(v4.gradientInactive)
  local v7, v8 = getNormalizedScreenValues(3 * v1, 20 * v1)
  v7 = Overlay.new(g_baseUIFilename, 0, 0, v7, v8)
  v4.actualBar = v7
  v7:setUVs(g_colorBgUVs)
  local v9 = unpack(ExtendedSprayerHUDExtension.COLOR.ACTUAL_BAR)
  v7:setColor(...)
  v4:addComponentForCleanup(v4.actualBar)
  v7, v8 = getNormalizedScreenValues(2.5 * v1, 5 * v1)
  v7 = Overlay.new(ExtendedSprayerHUDExtension.GUI_ELEMENTS, 0, 0, v7, v8)
  v4.targetBar = v7
  v9 = GuiUtils.getUVs(ExtendedSprayerHUDExtension.UV.TARGET_BAR)
  v7:setUVs(...)
  v4:addComponentForCleanup(v4.targetBar)
  v7, v8 = getNormalizedScreenValues(23 * v1, 29 * v1)
  v7 = Overlay.new(ExtendedSprayerHUDExtension.GUI_ELEMENTS, 0, 0, v7, v8)
  v4.targetFlag = v7
  v9 = GuiUtils.getUVs(ExtendedSprayerHUDExtension.UV.TARGET_FLAG)
  v7:setUVs(...)
  v4:addComponentForCleanup(v4.targetFlag)
  v7, v8 = getNormalizedScreenValues(3 * v1, 14 * v1)
  v7 = Overlay.new(g_baseUIFilename, 0, 0, v7, v8)
  v4.setValueBar = v7
  v7:setUVs(g_colorBgUVs)
  v9 = unpack(ExtendedSprayerHUDExtension.COLOR.SET_VALUE_BAR_GOOD)
  v7:setColor(...)
  v4:addComponentForCleanup(v4.setValueBar)
  v7, v8 = getNormalizedScreenValues(430 * v1, 1 * v1)
  v7 = Overlay.new(g_baseUIFilename, 0, 0, v7, v8)
  v4.footerSeparationBar = v7
  v7:setUVs(g_colorBgUVs)
  v9 = unpack(ExtendedSprayerHUDExtension.COLOR.SEPARATOR_BAR)
  v7:setColor(...)
  v4:addComponentForCleanup(v4.footerSeparationBar)
  v7, v8 = getNormalizedScreenValues(0, 130 * v1)
  v4.displayHeight = v8
  local v9, v10 = getNormalizedScreenValues(0, 30 * v1)
  v4.additionalTextHeightOffset = v10
  local v11, v12 = getNormalizedScreenValues(0, 60 * v1)
  v4.invalidHeightOffset = v12
  local v13, v14 = getNormalizedScreenValues(0, 20 * v1)
  v4.noSetBarHeightOffset = v14
  v4.additionalDisplayHeight = 0
  local v15, v16 = getNormalizedScreenValues(0, 20 * v1)
  v4.textHeightHeadline = v16
  v15, v16 = getNormalizedScreenValues(0, 15 * v1)
  v4.textHeight = v16
  v4.uiTextColor = v2
  v15, v16 = getNormalizedScreenValues(0, -75 * v1)
  v4.gradientPosX = v15
  v4.gradientPosY = v16
  v15, v16 = getNormalizedScreenValues(0, 9 * v1)
  v4.footerOffset = v16
  v4.actualPos = 0.34
  v4.targetPos = 0.8
  v4.actualValue = 0
  v4.actualValueStr = "%.3f"
  v4.setValue = 0
  v4.targetValue = 0
  v4.hasValidValues = false
  v4.soilMap = g_precisionFarming.soilMap
  v4.pHMap = g_precisionFarming.pHMap
  v4.nitrogenMap = g_precisionFarming.nitrogenMap
  v4.texts = {}
  v16 = v16:getText("hudExtensionSprayer_headline_ph_lime", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.headline_ph_lime = v16
  v16 = v16:getText("hudExtensionSprayer_headline_n_solidFertilizer", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.headline_n_solidFertilizer = v16
  v16 = v16:getText("hudExtensionSprayer_headline_n_liquidFertilizer", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.headline_n_liquidFertilizer = v16
  v16 = v16:getText("hudExtensionSprayer_headline_n_slurryTanker", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.headline_n_slurryTanker = v16
  v16 = v16:getText("hudExtensionSprayer_headline_n_manureSpreader", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.headline_n_manureSpreader = v16
  v16 = v16:getText("hudExtensionSprayer_actualValue", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.actualValue = v16
  v16 = v16:getText("hudExtensionSprayer_newValue", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.newValue = v16
  v16 = v16:getText("hudExtensionSprayer_targetReached", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.targetReached = v16
  v16 = v16:getText("hudExtensionSprayer_applicationRate", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.applicationRate = v16
  v16 = v16:getText("hudExtensionSprayer_soilType", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.soilType = v16
  v16 = v16:getText("hudExtensionSprayer_unknown", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.unknown = v16
  v16 = v16:getText("hudExtensionSprayer_automaticShort", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.automaticShort = v16
  v16 = v16:getText("hudExtensionSprayer_description_limeAuto", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.description_limeAuto = v16
  v16 = v16:getText("hudExtensionSprayer_description_limeManual", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.description_limeManual = v16
  v16 = v16:getText("hudExtensionSprayer_description_slurryAuto", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.description_slurryAuto = v16
  v16 = v16:getText("hudExtensionSprayer_description_manureAuto", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.description_manureAuto = v16
  v16 = v16:getText("hudExtensionSprayer_description_fertilizerAutoFruit", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.description_fertilizerAutoFruit = v16
  v16 = v16:getText("hudExtensionSprayer_description_fertilizerAutoNoFruit", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.description_fertilizerAutoNoFruit = v16
  v16 = v16:getText("hudExtensionSprayer_description_fertilizerAutoNoFruitDefault", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.description_fertilizerAutoNoFruitDefault = v16
  v16 = v16:getText("hudExtensionSprayer_description_fertilizerManualFruit", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.description_fertilizerManualFruit = v16
  v16 = v16:getText("hudExtensionSprayer_description_fertilizerManualNoFruit", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.description_fertilizerManualNoFruit = v16
  v16 = v16:getText("hudExtensionSprayer_description_noFertilizerRequired", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.description_noFertilizerRequired = v16
  v16 = v16:getText("hudExtensionSprayer_invalidValues", ExtendedSprayerHUDExtension.MOD_NAME)
  v4.texts.invalidValues = v16
  v4.actualValueStr = v4.texts.unknown
  v16 = v16:getValue(GameSettings.SETTING.USE_COLORBLIND_MODE)
  v4.isColorBlindMode = v16 or false
  v15:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_COLORBLIND_MODE], v4.setColorBlindMode, v4)
  return v4
end
function ExtendedSprayerHUDExtension.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
  v1:unsubscribeAll(v0)
end
function ExtendedSprayerHUDExtension:setColorBlindMode(isActive)
  if isActive ~= self.isColorBlindMode then
    self.isColorBlindMode = isActive
    v2:setMinimapRequiresUpdate(true)
    v2:setMinimapRequiresUpdate(true)
  end
end
function ExtendedSprayerHUDExtension.getPriority(v0)
  return 2
end
function ExtendedSprayerHUDExtension:canDraw()
  if self.vehicle.spec_extendedSprayer.attachStateChanged then
    self.vehicle.spec_extendedSprayer.attachStateChanged = false
    -- TODO: structure LOP_FORNPREP (pc 18, target 32)
    local v9 = self:getIsVehicleValid(self.vehicle.rootVehicle.childVehicles[1])
    if v9 then
      self.validVehicle = true
      self.realVehicle = self.vehicle.rootVehicle.childVehicles[1]
    end
    -- TODO: structure LOP_FORNLOOP (pc 31, target 19)
    if not v3 then
      self.validVehicle = false
      self.realVehicle = nil
    end
  end
  if self.validVehicle then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L48
  end
  return false
  local v3 = v3:getIsActiveForInput(true, true)
  if not v3 then
    return false
  end
  if self.validVehicle then
    if not v2.isSlurryTanker and not v2.isManureSpreader then
      local v3, v4 = self:getFillTypeSourceVehicle(self.vehicle)
      local v5 = v3:getFillUnitFillLevel(v4)
      if v5 <= 0 then
        return false
      end
      if not self.realVehicle.spec_extendedSprayer.isLiming and not self.realVehicle.spec_extendedSprayer.isFertilizing then
        return false
      end
    end
    if v1 ~= self.realVehicle then
      return false
    end
  end
  return true
end
function ExtendedSprayerHUDExtension.getFillTypeSourceVehicle(v0, v1)
  local v4 = v1:getSprayerFillUnitIndex()
  local v2 = v1:getFillUnitFillLevel(...)
  if v2 <= 0 then
    for v6, v7 in ipairs(v1.spec_sprayer.supportedSprayTypes) do
      for v11, v12 in ipairs(v2.fillTypeSources[v7]) do
        local v14 = v12.vehicle:getFillUnitFillType(v12.fillUnitIndex)
        if not (v14 == v7) then
          continue
        end
        v14 = v12.vehicle:getFillUnitFillLevel(v12.fillUnitIndex)
        if not (0 < v14) then
          continue
        end
        return v12.vehicle, v12.fillUnitIndex
      end
    end
  end
  v3 = v1:getSprayerFillUnitIndex()
  return v1
end
function ExtendedSprayerHUDExtension.getIsVehicleValid(v0, v1)
  local v2 = SpecializationUtil.hasSpecialization(ExtendedSprayer, v1.specializations)
  if not v2 then
    return false
  end
  v2 = SpecializationUtil.hasSpecialization(WorkArea, v1.specializations)
  if not v2 then
    return false
  end
  if #v1.spec_workArea.workAreas == 0 then
    return false
  end
  v2 = SpecializationUtil.hasSpecialization(ManureBarrel, v1.specializations)
  if v2 and v1.spec_manureBarrel.attachedTool ~= nil then
    return false
  end
  return true
end
function ExtendedSprayerHUDExtension:getDisplayHeight()
  local v1 = self:canDraw()
  if v1 then
  end
  return v1
end
function ExtendedSprayerHUDExtension.getHelpEntryCountReduction(v0)
  return 0
end
function ExtendedSprayerHUDExtension:draw(leftPosX, rightPosX, posY)
  local v4 = self:canDraw()
  if not v4 then
    return
  end
  self.hasValidValues = false
  if self.realVehicle.spec_extendedSprayer.lastTouchedSoilType ~= 0 and self.soilMap ~= nil then
    local v14 = v14:getSoilTypeByIndex(self.realVehicle.spec_extendedSprayer.lastTouchedSoilType)
    if v14 ~= nil then
    end
  end
  local v16, v17 = self:getFillTypeSourceVehicle(self.vehicle)
  local v18 = v16:getFillUnitFillType(v17)
  local v19 = v19:getFillTypeByIndex(v18)
  if v18 == FillType.LIME then
  end
  if v14 then
    if self.isColorBlindMode then
      -- if v0.colorBlindGradientUVsInactive then goto L91 end
    end
    v23:setUVs(self.pHGradientUVsInactive)
    if self.isColorBlindMode then
      -- if v0.colorBlindGradientUVs then goto L104 end
    end
    v23:setUVs(self.pHGradientUVs)
    if not v6.sprayAmountAutoMode then
      local v24 = v24:getLimeUsageByStateChange(v6.sprayAmountManual)
      local v25 = v25:getPhValueFromChangedStates(v6.sprayAmountManual)
      if 0 < v25 then
        local v27 = u0(v25)
        v25 = string.format(...)
      end
    end
    v24 = v24:get()
    v25 = v25:get()
    local v26 = v26:getPhValueFromInternalValue(v24)
    v27 = v27:getPhValueFromInternalValue(v25)
    if v24 ~= 0 and v25 ~= 0 then
      self.actualValue = v26
      self.setValue = v26 + v23
      self.targetValue = v27
      if v6.sprayAmountAutoMode then
        if 0 < self.targetValue - self.actualValue then
          local v30 = u0(self.targetValue - self.actualValue)
          local v28 = string.format(...)
        end
        self.setValue = self.targetValue
      end
      self.actualValueStr = "pH %.3f"
      if v13 ~= "" then
        if v6.sprayAmountAutoMode then
          local v31 = u0(v27)
          v28 = string.format(...)
        else
          v31 = u0(v27)
          v28 = string.format(...)
        end
      end
      self.hasValidValues = true
    end
    if self.pHMap ~= nil then
      local v28, v29 = v28:getMinMaxValue()
    end
    v28 = v28:getPhValueFromChangedStates(1)
  else
    if self.isColorBlindMode then
      -- if v0.colorBlindGradientUVsInactive then goto L262 end
    end
    v23:setUVs(self.nGradientUVsInactive)
    if self.isColorBlindMode then
      -- if v0.colorBlindGradientUVs then goto L275 end
    end
    v23:setUVs(self.nGradientUVs)
    if not v6.sprayAmountAutoMode then
      v25 = v25:getFertilizerUsageByStateChange(v6.sprayAmountManual, v18)
      v25 = v25:getNitrogenFromChangedStates(v6.sprayAmountManual)
      if 0 < v25 then
        v25 = string.format("+%dkg N/ha", v25)
      end
    end
    if v6.isSolidFertilizerSprayer then
    elseif v6.isLiquidFertilizerSprayer then
    else
      if v6.isSlurryTanker then
        -- if not v6.sprayAmountAutoMode then goto L378 end
        -- cmp-jump LOP_JUMPXEQKS R13 aux=0x9 -> L378
        v25 = string.format(self.texts.description_slurryAuto, v13)
      elseif v6.isManureSpreader and v6.sprayAmountAutoMode and v13 ~= "" then
        v25 = string.format(self.texts.description_manureAuto, v13)
      end
    end
    v25 = v25:get()
    v26 = v26:get()
    v27 = v27:getNitrogenValueFromInternalValue(v25)
    v28 = v28:getNitrogenValueFromInternalValue(v26)
    if 0 < v25 and 0 < v26 then
      self.actualValue = v27
      self.setValue = v27 + v24
      self.targetValue = v28
      if v6.sprayAmountAutoMode then
        if 0 < self.targetValue - self.actualValue then
          v29 = string.format("+%dkg N/ha", self.targetValue - self.actualValue)
        end
        self.setValue = self.targetValue
      end
      self.actualValueStr = "%dkg N/ha"
      if v5.spec_sowingMachine ~= nil then
      end
      if not v29 then
      end
      local v32 = v32:getFillTypeIndexByFruitTypeIndex(v34)
      v30 = v30:getFillTypeByIndex(...)
      if v30 ~= nil and v30 ~= FillType.UNKNOWN and v13 ~= "" then
        if 0 < v28 then
          if v6.sprayAmountAutoMode then
            v31 = string.format(self.texts.description_fertilizerAutoFruit, v30.title, v13)
            -- goto L505  (LOP_JUMP +17)
          end
          v31 = string.format(self.texts.description_fertilizerManualFruit, v30.title, v13)
        else
        end
      end
      if v20 == "" and v13 ~= "" then
        if v6.sprayAmountAutoMode then
          v31 = string.format(self.texts.description_fertilizerAutoNoFruit, v13)
          -- cmp-jump LOP_JUMPXEQKNIL R31 aux=0x0 -> L568
          v31 = v31:getFruitTypeIndexByFruitRequirementIndex(v6.nApplyAutoModeFruitRequirementDefaultIndex)
          -- cmp-jump LOP_JUMPXEQKNIL R31 aux=0x0 -> L568
          local v34 = v34:getFillTypeIndexByFruitTypeIndex(v31)
          v32 = v32:getFillTypeByIndex(...)
          -- cmp-jump LOP_JUMPXEQKNIL R32 aux=0x0 -> L568
          local v33 = string.format(self.texts.description_fertilizerAutoNoFruitDefault, v32.title, v13)
        else
          v31 = string.format(self.texts.description_fertilizerManualNoFruit, v13)
        end
      end
      self.hasValidValues = true
    end
    if self.nitrogenMap ~= nil then
      v29, v30 = v29:getMinMaxValue()
      if v6.lastNitrogenProportion == 0 then
        v30 = v30:getNitrogenAmountFromFillType(v18)
      end
      if v6.isSlurryTanker then
        v31 = v16:getIsUsingExactNitrogenAmount()
        if v31 then
        end
        v34 = MathUtil.round(v29 * 1000, 1)
        v32 = string.format(...)
      else
        v33 = MathUtil.round(v29 * 100, 1)
        v31 = string.format(...)
      end
      v30 = v30:getNitrogenFromChangedStates(1)
    end
  end
  if v6.sprayAmountAutoMode then
    v24 = string.format(" (%s)", self.texts.automaticShort)
  end
  local v23 = math.min((self.actualValue - v11) / (v12 - v11), 1)
  self.actualPos = v23
  v23 = math.min((self.setValue - v11) / (v12 - v11), 1)
  self.setValuePos = v23
  v23 = math.min((self.targetValue - v11) / (v12 - v11), 1)
  self.targetPos = v23
  v25 = unpack(self.uiTextColor)
  setTextColor(...)
  setTextBold(true)
  setTextAlignment(RenderText.ALIGN_CENTER)
  u1(leftPosX + (rightPosX - leftPosX) * 0.5, v4 - self.textHeightHeadline * 1.1, self.textHeightHeadline, v7)
  setTextBold(false)
  if not self.hasValidValues then
  end
  v26:setPosition(v24, v25)
  v26:render()
  if self.hasValidValues then
  end
  v27:setPosition(v24, v25)
  v27:setDimension(v26 * self.gradientInactive.width)
  self.gradient.uvs[5] = self.gradientInactive.uvs[1] + (self.gradientInactive.uvs[5] - self.gradientInactive.uvs[1]) * v26
  self.gradient.uvs[7] = self.gradientInactive.uvs[3] + (self.gradientInactive.uvs[7] - self.gradientInactive.uvs[3]) * v26
  v27:setUVs(self.gradient.uvs)
  v27:render()
  if v14 then
    v29 = string.format("pH\n%s", v11)
    v29 = string.format("pH\n%s", v12)
  else
    v29 = string.format("%s\nkg/ha", v11)
    v29 = string.format("%s\nkg/ha", v12)
  end
  u1(v24 - (rightPosX - leftPosX - self.gradientInactive.width) * 0.425, v25 + self.gradientInactive.height * 0.85, self.gradientInactive.height * 1.3, v27)
  u1(v24 + self.gradientInactive.width + (rightPosX - leftPosX - self.gradientInactive.width) * 0.425, v25 + self.gradientInactive.height * 0.85, self.gradientInactive.height * 1.3, v28)
  if self.hasValidValues then
    if self.targetPos == 0 then
    end
    if v34 then
      v35:setPosition(v24 + self.gradientInactive.width * self.targetPos - self.targetBar.width * 0.5, v25)
      v35:render()
      v35:setPosition(v24 + self.gradientInactive.width * self.targetPos - self.targetBar.width * 0.5, v25 + self.targetBar.height)
      v35:render()
    end
    if self.actualPos ~= self.targetPos then
      local v40 = string.format(self.actualValueStr, self.actualValue)
      local v38 = string.format(...)
    else
      if not v6.sprayAmountAutoMode then
        -- if v0.targetPos ~= v0.setValuePos then goto L1036 end
      end
      if self.targetPos ~= 0 then
        v40 = string.format(self.actualValueStr, self.actualValue)
        v38 = string.format(...)
      end
    end
    if v35 ~= nil then
      v40:setPosition(v24 + self.gradientInactive.width * self.actualPos - self.actualBar.width * 0.5, v25 + (self.gradientInactive.height - self.actualBar.height) * 0.5)
      v40:render()
      v40 = getTextWidth(self.textHeight * 0.7, v35)
      local v42 = math.min(v24 + self.gradientInactive.width * self.actualPos - self.actualBar.width * 0.5, rightPosX - v40 * 0.5)
      local v41 = math.max(v42, leftPosX + v40 * 0.5)
      if not v37 and v34 then
        if v32 < v41 + v40 * 0.5 and v41 + v40 * 0.5 < v32 + self.targetFlag.width * 0.5 then
        end
        if v32 < v38 - v40 * 0.5 then
          -- if v38 - v40 * 0.5 < v32 + v0.targetFlag.width * 0.5 then goto L1133 end
        end
        if v42 < v32 and v32 < v41 then
        end
      end
      u1(v38, v39 + v36, self.textHeight * 0.7, v35)
    end
    -- if v0.actualPos >= v0.setValuePos then goto L1317 end
    local v43 = math.abs(self.setValue - self.targetValue)
    v40 = math.min(v43 / v21 / 3, 1)
    v48:setPosition(v24 + self.gradientInactive.width * self.actualPos, v25 - self.gradientInactive.height - self.setValueBar.height)
    local v53 = math.min(self.setValuePos, 1)
    v48:setDimension(self.gradientInactive.width * (v53 - self.actualPos))
    v48:setColor(v40 * ExtendedSprayerHUDExtension.COLOR.SET_VALUE_BAR_BAD[1] + (1 - v40) * ExtendedSprayerHUDExtension.COLOR.SET_VALUE_BAR_GOOD[1], v40 * ExtendedSprayerHUDExtension.COLOR.SET_VALUE_BAR_BAD[2] + (1 - v40) * ExtendedSprayerHUDExtension.COLOR.SET_VALUE_BAR_GOOD[2], v40 * ExtendedSprayerHUDExtension.COLOR.SET_VALUE_BAR_BAD[3] + (1 - v40) * ExtendedSprayerHUDExtension.COLOR.SET_VALUE_BAR_GOOD[3], 1)
    v48:render()
    local v50 = getTextWidth(self.setValueBar.height * 0.9, v10)
    if self.setValueBar.width * 0.95 < v50 then
    end
    u1(v48, v49, self.setValueBar.height * 0.9, v10)
  else
  end
  if v20 ~= "" and self.additionalDisplayHeight ~= 0 then
    setTextAlignment(RenderText.ALIGN_CENTER)
    u1(v23, posY + self.footerOffset + self.additionalTextHeightOffset - self.textHeight * 0.2, self.textHeight * 0.85, v20, self.footerSeparationBar.width)
  end
  v32:setPosition(v23 - self.footerSeparationBar.width * 0.5, posY + self.footerOffset + self.textHeight * 1.2)
  v32:render()
  setTextAlignment(RenderText.ALIGN_LEFT)
  local v39 = string.format(v9, v8, 0)
  u1(leftPosX, posY + self.footerOffset, self.textHeight, self.texts.applicationRate .. " " .. v39)
  if v13 ~= "" then
    setTextAlignment(RenderText.ALIGN_RIGHT)
    local v36 = string.format(self.texts.soilType, v13)
    u1(...)
  end
  self.additionalDisplayHeight = v30
  if v20 ~= "" then
    self.additionalDisplayHeight = self.additionalDisplayHeight + self.additionalTextHeightOffset
  end
  if not self.hasValidValues then
    self.additionalDisplayHeight = self.additionalDisplayHeight - self.invalidHeightOffset
    return posY
  end
  if not v31 then
    self.additionalDisplayHeight = self.additionalDisplayHeight - self.noSetBarHeightOffset
  end
  return posY
end
ExtendedSprayerHUDExtension.COLOR = {TARGET_BAR = {1, 1, 1, 1}, ACTUAL_BAR = {0.601, 0.01, 0.01, 1}, SEPARATOR_BAR = {1, 1, 1, 0.3}, SET_VALUE_BAR_GOOD = {0.01, 0.41, 0.01, 1}, SET_VALUE_BAR_BAD = {0.61, 0.01, 0.01, 1}}
ExtendedSprayerHUDExtension.UV = {PH_GRADIENT = {194, 11, 252, 12}, N_GRADIENT = {194, 27, 252, 12}, COLOR_BLIND_GRADIENT = {194, 43, 252, 12}, TARGET_FLAG = {399, 68, 36, 52}, TARGET_BAR = {399, 96, 4, 2}}
