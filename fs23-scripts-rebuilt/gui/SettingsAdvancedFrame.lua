-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SettingsAdvancedFrame = {}
local SettingsAdvancedFrame_mt = Class(SettingsAdvancedFrame, TabbedMenuFrameElement)
SettingsAdvancedFrame.CONTROLS = {"performanceClassElement", "msaaElement", "ppaaElement", "dlssElement", "fidelityFxSRElement", "fidelityFxSR20Element", "valarElement", "xeSSElement", "sharpnessElement", "shadingRateQualityElement", "textureFilteringElement", "textureResolutionElement", "shadowQualityElement", "shaderQualityElement", "shadowDistanceQualityElement", "shadowMapFilteringElement", "maxLightsElement", "terrainQualityElement", "objectDrawDistanceElement", "foliageDrawDistanceElement", "lodDistanceElement", "terrainLODDistanceElement", "volumeMeshTessellationElement", "maxTireTracksElement", "lightsProfileElement", "realBeaconLightsElement", "foliageShadowsElement", "maxMirrorsElement", "ssaoQualityElement", "cloudQualityElement", "resolutionScale3dElement", "resolutionScale3dElementBox", BOX_LAYOUT = "boxLayout", MAIN_CONTAINER = "settingsContainer"}
function SettingsAdvancedFrame.register()
  local v0 = SettingsAdvancedFrame.new()
  v1:loadGui("dataS/gui/SettingsAdvancedFrame.xml", "SettingsAdvancedFrame", v0, true)
end
function SettingsAdvancedFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(SettingsAdvancedFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  return v2
end
function SettingsAdvancedFrame:createFromExistingGui(v1)
  local v2 = SettingsAdvancedFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  v2.hasCustomMenuButtons = self.hasCustomMenuButtons
  return v2
end
function SettingsAdvancedFrame:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self.hasCustomMenuButtons = src.hasCustomMenuButtons
end
function SettingsAdvancedFrame:initialize()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText(SettingsAdvancedFrame.L10N_SYMBOL.BUTTON_APPLY)
  self.applyButtonInfo = {inputAction = InputAction.MENU_ACCEPT, text = v2, callback = function()
    self:onApplySettings()
  end}
end
function SettingsAdvancedFrame:onApplySettings()
  local v1 = v1:needsRestartToApplyChanges()
  if v1 then
  end
  v2:applyChanges(SettingsModel.SETTING_CLASS.SAVE_ALL)
  if v1 then
    v2:setStartScreen(RestartManager.START_SCREEN_SETTINGS_ADVANCED)
    doRestart(false, "")
    return
  end
  self:setMenuButtonInfoDirty()
end
function SettingsAdvancedFrame:getMenuButtonInfo()
  local v2 = v2:hasChanges()
  if v2 then
    table.insert({}, self.applyButtonInfo)
  end
  table.insert(v1, self.backButtonInfo)
  return v1
end
function SettingsAdvancedFrame:updateValues()
  self:updatePerformanceClass()
  local v3 = v3:getValue(SettingsModel.SETTING.PERFORMANCE_CLASS)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.MSAA)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.POST_PROCESS_AA)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.DLSS)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.FIDELITYFX_SR)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.FIDELITYFX_SR_20)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.XESS)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.SHARPNESS)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.SHADING_RATE_QUALITY)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.TEXTURE_FILTERING)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.TEXTURE_RESOLUTION)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.SHADOW_QUALITY)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.SHADOW_DISTANCE_QUALITY)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.SHADER_QUALITY)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.SHADOW_MAP_FILTERING)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.MAX_LIGHTS)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.TERRAIN_QUALITY)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.OBJECT_DRAW_DISTANCE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.FOLIAGE_DRAW_DISTANCE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.LOD_DISTANCE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.TERRAIN_LOD_DISTANCE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VOLUME_MESH_TESSELLATION)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.MAX_TIRE_TRACKS)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.LIGHTS_PROFILE)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.REAL_BEACON_LIGHTS)
  v1:setIsChecked(...)
  v3 = v3:getValue(SettingsModel.SETTING.MAX_MIRRORS)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.FOLIAGE_SHADOW)
  v1:setIsChecked(...)
  v3 = v3:getValue(SettingsModel.SETTING.SSAO_QUALITY)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.CLOUD_QUALITY)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.RESOLUTION_SCALE_3D)
  v1:setState(...)
  v3 = v3:getValue(SettingsModel.SETTING.VALAR)
  v1:setState(...)
  if self.resolutionScale3dElementBox ~= nil then
    v1:setVisible(not GS_PLATFORM_GGP)
  else
    v1:setVisible(not GS_PLATFORM_GGP)
  end
  local v2 = v2:getValue(SettingsModel.SETTING.FIDELITYFX_SR)
  if v2 == g_settingsModel.fidelityFxSRMapping[FidelityFxSRQuality.OFF] then
  end
  v3 = v3:getValue(SettingsModel.SETTING.FIDELITYFX_SR_20)
  if v3 == g_settingsModel.fidelityFxSR20Mapping[FidelityFxSR20Quality.OFF] then
  end
  local v4 = v4:getValue(SettingsModel.SETTING.DLSS)
  if v4 == g_settingsModel.dlssMapping[DLSSQuality.OFF] then
  end
  local v5 = v5:getValue(SettingsModel.SETTING.POST_PROCESS_AA)
  if v5 ~= g_settingsModel.postProcessAntiAliasingMapping[PostProcessAntiAliasing.DLAA] then
  end
  if not v1 and not v2 and not v3 then
  end
  local v7 = v7:getIsDisabled()
  if not v5 ~= v7 then
    v7:setDisabled(not v5)
  end
  self:setMenuButtonInfoDirty()
end
function SettingsAdvancedFrame:onFrameOpen()
  self:updateValues()
end
function SettingsAdvancedFrame:getMainElementSize()
  return self.settingsContainer.size
end
function SettingsAdvancedFrame:getMainElementPosition()
  return self.settingsContainer.absPosition
end
function SettingsAdvancedFrame:updatePerformanceClass()
  local v1, v2, v3 = v1:getPerformanceClassTexts()
  v4:setTexts(v1)
end
function SettingsAdvancedFrame.onCreatePerformanceClass(v0, v1)
  local v2, v3, v4 = v2:getPerformanceClassTexts()
  v1:setTexts(v2)
end
function SettingsAdvancedFrame.onCreateMSAA(v0, v1)
  local v4 = v4:getMSAATexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreatePPAA(v0, v1)
  local v4 = v4:getPostProcessAATexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreatePPAAToolTip(v0, v1)
  local v4 = v4:getPostProcessAAToolTip()
  v1:setText(...)
end
function SettingsAdvancedFrame:onCreateDLSS(element)
  local v2 = v2:getDLSSTexts()
  element:setTexts(v2)
  if self.resolutionScale3dElementBox ~= nil then
    if 1 >= #v2 then
    end
    v3:setVisible(true)
    return
  end
  if 1 >= #v2 then
  end
  element:setVisible(true)
end
function SettingsAdvancedFrame:onCreateFidelityFxSR(element)
  local v2 = v2:getFidelityFxSRTexts()
  element:setTexts(v2)
  if self.resolutionScale3dElementBox ~= nil then
    if 1 >= #v2 then
    end
    v3:setVisible(true)
    return
  end
  if 1 >= #v2 then
  end
  element:setVisible(true)
end
function SettingsAdvancedFrame:onCreateValar(element)
  local v2 = v2:getValarTexts()
  element:setTexts(v2)
  if self.resolutionScale3dElementBox ~= nil then
    if 1 >= #v2 then
    end
    v3:setVisible(true)
    return
  end
  if 1 >= #v2 then
  end
  element:setVisible(true)
end
function SettingsAdvancedFrame:onCreateXeSS(element)
  local v2 = v2:getXeSSTexts()
  element:setTexts(v2)
  if self.resolutionScale3dElementBox ~= nil then
    if 1 >= #v2 then
    end
    v3:setVisible(true)
    return
  end
  if 1 >= #v2 then
  end
  element:setVisible(true)
end
function SettingsAdvancedFrame:onCreateFidelityFxSR20(v1)
  local v2 = v2:getFidelityFxSR20Texts()
  v1:setTexts(v2)
  if self.resolutionScale3dElementBox ~= nil then
    if 1 >= #v2 then
    end
    v3:setVisible(true)
    return
  end
  if 1 >= #v2 then
  end
  v1:setVisible(true)
end
function SettingsAdvancedFrame:onCreateSharpness(element)
  local v2 = v2:getSharpnessTexts()
  element:setTexts(v2)
  if self.resolutionScale3dElementBox ~= nil then
    if 1 >= #v2 then
    end
    v3:setVisible(true)
    return
  end
  if 1 >= #v2 then
  end
  element:setVisible(true)
end
function SettingsAdvancedFrame.onCreateShadingRateQuality(v0, v1)
  local v4 = v4:getShadingRateQualityTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateShadowQuality(v0, v1)
  local v4 = v4:getShadowQualityTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateSSAOQuality(v0, v1)
  local v4 = v4:getSSAOQualityTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateShadowDistanceQuality(v0, v1)
  local v4 = v4:getShadowDistanceQualityTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateShaderQuality(v0, v1)
  local v4 = v4:getShaderQualityTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateTextureFiltering(v0, v1)
  local v4 = v4:getTextureFilteringTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateTextureResolution(v0, v1)
  local v4 = v4:getTextureResolutionTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateShadowMapFiltering(v0, v1)
  local v4 = v4:getShadowMapFilteringTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateLightsProfile(v0, v1)
  local v4 = v4:getLightsProfileTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateTerrainQuality(v0, v1)
  local v4 = v4:getTerraingQualityTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateShadowMaxLights(v0, v1)
  local v4 = v4:getShadowMapLightsTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateObjectDrawDistance(v0, v1)
  local v4 = v4:getObjectDrawDistanceTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateFoliageDrawDistance(v0, v1)
  local v4 = v4:getFoliageDrawDistanceTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateLODDistance(v0, v1)
  local v4 = v4:getLODDistanceTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateTerrainLODDistance(v0, v1)
  local v4 = v4:getTerrainLODDistanceTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateVolumeMeshTessellation(v0, v1)
  local v4 = v4:getVolumeMeshTessalationTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateMaxTireTracks(v0, v1)
  local v4 = v4:getMaxTireTracksTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateCloudQuality(v0, v1)
  local v4 = v4:getCloudQualityTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateMaxMirrors(v0, v1)
  local v4 = v4:getMaxMirrorsTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame.onCreateResolutionScale3d(v0, v1)
  local v4 = v4:getResolutionScale3dTexts()
  v1:setTexts(...)
end
function SettingsAdvancedFrame:onClickPerformanceClass(state)
  v2:applyPerformanceClass(state)
  self:updateValues()
end
function SettingsAdvancedFrame:onClickMSAA(state)
  if state ~= 1 then
    v2:setValue(SettingsModel.SETTING.DLSS, g_settingsModel.dlssMapping[DLSSQuality.OFF])
    v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR_20, g_settingsModel.fidelityFxSR20Mapping[FidelityFxSR20Quality.OFF])
    v2:setValue(SettingsModel.SETTING.XESS, g_settingsModel.xeSSMapping[XeSSQuality.OFF])
    v2:setValue(SettingsModel.SETTING.VALAR, g_settingsModel.valarMapping[ValarQuality.OFF])
    local v2 = v2:getValue(SettingsModel.SETTING.POST_PROCESS_AA)
    if v2 == PostProcessAntiAliasing.DLAA + 1 then
      v3:setValue(SettingsModel.SETTING.POST_PROCESS_AA, PostProcessAntiAliasing.OFF + 1)
    end
  end
  v2:setValue(SettingsModel.SETTING.MSAA, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickPPAA(state)
  if state ~= PostProcessAntiAliasing.OFF + 1 then
    v2:setValue(SettingsModel.SETTING.DLSS, g_settingsModel.dlssMapping[DLSSQuality.OFF])
    v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR_20, g_settingsModel.fidelityFxSR20Mapping[FidelityFxSR20Quality.OFF])
    v2:setValue(SettingsModel.SETTING.XESS, g_settingsModel.xeSSMapping[XeSSQuality.OFF])
    if state == PostProcessAntiAliasing.DLAA + 1 then
      v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR, g_settingsModel.fidelityFxSRMapping[FidelityFxSRQuality.OFF])
      v2:setValue(SettingsModel.SETTING.MSAA, 1)
    end
  end
  v2:setValue(SettingsModel.SETTING.POST_PROCESS_AA, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickDLSS(state)
  if state ~= g_settingsModel.dlssMapping[DLSSQuality.OFF] then
    v2:setValue(SettingsModel.SETTING.MSAA, 1)
    v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR, g_settingsModel.fidelityFxSRMapping[FidelityFxSRQuality.OFF])
    v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR_20, g_settingsModel.fidelityFxSR20Mapping[FidelityFxSR20Quality.OFF])
    v2:setValue(SettingsModel.SETTING.XESS, g_settingsModel.xeSSMapping[XeSSQuality.OFF])
    v2:setValue(SettingsModel.SETTING.POST_PROCESS_AA, PostProcessAntiAliasing.OFF + 1)
  end
  v2:setValue(SettingsModel.SETTING.DLSS, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickFidelityFxSR(state)
  if state ~= g_settingsModel.fidelityFxSRMapping[FidelityFxSRQuality.OFF] then
    v2:setValue(SettingsModel.SETTING.MSAA, 1)
    v2:setValue(SettingsModel.SETTING.POST_PROCESS_AA, PostProcessAntiAliasing.TAA + 1)
    v2:setValue(SettingsModel.SETTING.DLSS, g_settingsModel.dlssMapping[DLSSQuality.OFF])
    v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR_20, g_settingsModel.fidelityFxSR20Mapping[FidelityFxSR20Quality.OFF])
    v2:setValue(SettingsModel.SETTING.XESS, g_settingsModel.xeSSMapping[XeSSQuality.OFF])
  end
  v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickFidelityFxSR20(v1)
  if v1 ~= g_settingsModel.fidelityFxSR20Mapping[FidelityFxSR20Quality.OFF] then
    v2:setValue(SettingsModel.SETTING.MSAA, 1)
    v2:setValue(SettingsModel.SETTING.DLSS, g_settingsModel.dlssMapping[DLSSQuality.OFF])
    v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR, g_settingsModel.fidelityFxSRMapping[FidelityFxSRQuality.OFF])
    v2:setValue(SettingsModel.SETTING.XESS, g_settingsModel.xeSSMapping[XeSSQuality.OFF])
    v2:setValue(SettingsModel.SETTING.POST_PROCESS_AA, PostProcessAntiAliasing.OFF + 1)
  end
  v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR_20, v1)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickValar(state)
  if state ~= g_settingsModel.valarMapping[ValarQuality.OFF] then
    v2:setValue(SettingsModel.SETTING.MSAA, 1)
  end
  v2:setValue(SettingsModel.SETTING.VALAR, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickXeSS(state)
  if state ~= g_settingsModel.xeSSMapping[XeSSQuality.OFF] then
    v2:setValue(SettingsModel.SETTING.MSAA, 1)
    v2:setValue(SettingsModel.SETTING.DLSS, g_settingsModel.dlssMapping[DLSSQuality.OFF])
    v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR, g_settingsModel.fidelityFxSRMapping[FidelityFxSRQuality.OFF])
    v2:setValue(SettingsModel.SETTING.FIDELITYFX_SR_20, g_settingsModel.fidelityFxSR20Mapping[FidelityFxSR20Quality.OFF])
    v2:setValue(SettingsModel.SETTING.POST_PROCESS_AA, PostProcessAntiAliasing.OFF + 1)
  end
  v2:setValue(SettingsModel.SETTING.XESS, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickSharpness(state)
  v2:setValue(SettingsModel.SETTING.SHARPNESS, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickShadingRateQuality(state)
  v2:setValue(SettingsModel.SETTING.SHADING_RATE_QUALITY, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickTextureFiltering(state)
  v2:setValue(SettingsModel.SETTING.TEXTURE_FILTERING, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickTextureResolution(state)
  v2:setValue(SettingsModel.SETTING.TEXTURE_RESOLUTION, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickShadowQuality(state)
  v2:setValue(SettingsModel.SETTING.SHADOW_QUALITY, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickShadowDistanceQuality(state)
  v2:setValue(SettingsModel.SETTING.SHADOW_DISTANCE_QUALITY, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickShaderQuality(state)
  v2:setValue(SettingsModel.SETTING.SHADER_QUALITY, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickShadowMapFiltering(state)
  v2:setValue(SettingsModel.SETTING.SHADOW_MAP_FILTERING, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickShadowMaxLights(state)
  v2:setValue(SettingsModel.SETTING.MAX_LIGHTS, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickTerrainQuality(state)
  v2:setValue(SettingsModel.SETTING.TERRAIN_QUALITY, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickObjectDrawDistance(state)
  v2:setValue(SettingsModel.SETTING.OBJECT_DRAW_DISTANCE, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickFoliageDrawDistance(state)
  v2:setValue(SettingsModel.SETTING.FOLIAGE_DRAW_DISTANCE, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickLODDistance(state)
  v2:setValue(SettingsModel.SETTING.LOD_DISTANCE, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickTerrainLODDistance(state)
  v2:setValue(SettingsModel.SETTING.TERRAIN_LOD_DISTANCE, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickVolumeMeshTessellation(state)
  v2:setValue(SettingsModel.SETTING.VOLUME_MESH_TESSELLATION, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickMaxTireTracks(state)
  v2:setValue(SettingsModel.SETTING.MAX_TIRE_TRACKS, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickLightsProfile(state)
  v2:setValue(SettingsModel.SETTING.LIGHTS_PROFILE, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickRealBeaconLights(state)
  local v5 = v5:getIsChecked()
  v2:setValue(...)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickFoliageShadows(state)
  local v5 = v5:getIsChecked()
  v2:setValue(...)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickMaxMirrors(state)
  v2:setValue(SettingsModel.SETTING.MAX_MIRRORS, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickSSAOQuality(state)
  v2:setValue(SettingsModel.SETTING.SSAO_QUALITY, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickCloudQuality(state)
  v2:setValue(SettingsModel.SETTING.CLOUD_QUALITY, state)
  v2:applyCustomSettings()
  self:updateValues()
end
function SettingsAdvancedFrame:onClickResolutionScale3d(state)
  v2:setValue(SettingsModel.SETTING.RESOLUTION_SCALE_3D, state)
  v2:applyCustomSettings()
  self:updateValues()
end
SettingsAdvancedFrame.L10N_SYMBOL = {BUTTON_APPLY = "button_apply"}
