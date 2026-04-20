-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputHelpDisplayExtension = {MOD_NAME = g_currentModName, MOD_DIR = g_currentModDirectory}
local InputHelpDisplayExtension_mt = Class(InputHelpDisplayExtension)
function InputHelpDisplayExtension.new(precisionFarming, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.isEnabled = true
  v2.isActive = false
  v2.stateInitialized = false
  v2.precisionFarming = precisionFarming
  local v3 = v3:getText("ui_header")
  v3 = v3:upper()
  v2.headline = v3
  local v6 = v6:getText("settingTitle_inputHelpDisplay")
  local v7 = v7:getText("settingDescription_inputHelpDisplay")
  v3:addSetting("inputHelpDisplay", v6, v7, v2.onInputHelpDisplaySettingChanged, v2, v2.isEnabled, true)
  v7 = v7:getValue("uiScale")
  local v4, v5 = getNormalizedScreenValues(InputHelpDisplay.SIZE.HEADER[1] * v7, 0)
  v2.inputHelpWidth = v4
  v2.highPrioActions = {"PRECISIONFARMING_SEED_RATE", "PRECISIONFARMING_SEED_RATE_MODE", "PRECISIONFARMING_SPRAY_AMOUNT", "PRECISIONFARMING_SPRAY_AMOUNT_MODE"}
  return v2
end
function InputHelpDisplayExtension:onInputHelpDisplaySettingChanged(state)
  self.isEnabled = state
end
function InputHelpDisplayExtension.unloadMapData(v0)
end
function InputHelpDisplayExtension.delete(v0)
end
function InputHelpDisplayExtension.update(v0, v1)
end
function InputHelpDisplayExtension:getInputHelpBasePosition()
  local v3 = v3:getFinished()
  if not v3 then
    v3 = math.min(g_currentMission.hud.vehicleSchema.animation.elapsedTime / g_currentMission.hud.vehicleSchema.animation.totalDuration, 1)
  elseif not g_currentMission.hud.vehicleSchema.isDocked then
  end
  local v4, v5 = InputHelpDisplay.getBackgroundPosition()
  return v4 - (1 - v1) * self.inputHelpWidth, v5
end
function InputHelpDisplayExtension:drawVehicleHUDExtensions(inputHelpDisplay)
  local extensionsHeight = inputHelpDisplay:getAvailableHeight()
  if 0 < extensionsHeight then
    local v3, v4 = self:getInputHelpBasePosition()
    local width = inputHelpDisplay:getWidth()
    for v10, v11 in pairs(inputHelpDisplay.vehicleHudExtensions) do
      local v12 = v11:isa(ExtendedSowingMachineHUDExtension)
      if not v12 then
        v12 = v11:isa(ExtendedSprayerHUDExtension)
        if not v12 then
          continue
        end
      end
      v12 = v11:getDisplayHeight()
      local v13 = v11:canDraw()
      if not v13 then
        continue
      end
      if not (v6 + v12 <= extensionsHeight) then
        continue
      end
      v13:setPosition(v3, v4 - v12 - inputHelpDisplay.entryOffsetY)
      v13:setDimension(width, v12)
      v13:render()
      v11:draw(v3 + inputHelpDisplay.extraTextOffsetX, v3 + width + inputHelpDisplay.helpTextOffsetX, v4 - v12 - inputHelpDisplay.entryOffsetY)
    end
    if v6 == 0 then
    end
    return true
  end
  return false
end
function InputHelpDisplayExtension:drawControlsLabel(inputHelpDisplay)
  setTextBold(true)
  local v3 = unpack(InputHelpDisplay.COLOR.CONTROLS_LABEL)
  setTextColor(...)
  setTextAlignment(RenderText.ALIGN_LEFT)
  local v2, v3 = self:getInputHelpBasePosition()
  renderText(v2 + inputHelpDisplay.frameOffsetX + inputHelpDisplay.controlsLabelOffsetX, v3 + inputHelpDisplay.frameOffsetY + inputHelpDisplay.controlsLabelOffsetY, inputHelpDisplay.controlsLabelTextSize, self.headline)
end
function InputHelpDisplayExtension.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(InputHelpDisplay, "draw", function(v0, v1)
    v0(v1)
    local v2 = v1:getVisible()
    if not v2 then
      u0.isActive = false
      if u0.isEnabled then
        v1:updateHUDExtensions()
        local v3 = v3:drawVehicleHUDExtensions(v1)
        if v3 then
          v3:drawControlsLabel(v1)
          u0.isActive = true
          if not g_currentMission.hud.vehicleSchema.isDocked then
            v3 = v3:getFinished()
            if v3 then
              g_currentMission.hud.vehicleSchema:setDocked(true, true)
            end
          end
        end
      end
      if not u0.isActive and v2.isDocked then
        v3 = v3:getFinished()
        if v3 then
          v2:setDocked(false, true)
        end
      end
    end
  end)
  v1:overwriteGameFunction(InputDisplayManager, "sortEventHelpElementsGamepad", function(v0, v1, v2)
    -- TODO: structure LOP_FORNPREP (pc 8, target 24)
    if v1.actionName == u0.highPrioActions[1] then
    end
    if v2.actionName == v8 then
    end
    -- TODO: structure LOP_FORNLOOP (pc 23, target 9)
    if v3 == 0 then
      -- cmp-jump LOP_JUMPXEQKN R4 aux=0x2 -> L33
    end
    if v4 >= v3 then
    end
    return true
    return v0(v1, v2)
  end)
end
