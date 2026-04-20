-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SettingsModel = {}
local SettingsModel_mt = Class(SettingsModel)
SettingsModel.SETTING_CLASS = {SAVE_NONE = 0, SAVE_ENGINE_QUALITY_SETTINGS = 1, SAVE_GAMEPLAY_SETTINGS = 2, SAVE_ALL = 3}
SettingsModel.SETTING = {PERFORMANCE_CLASS = "performanceClass", HDR_PEAK_BRIGHTNESS = "hdrPeakBrightness", MSAA = "msaa", TEXTURE_FILTERING = "textureFiltering", TEXTURE_RESOLUTION = "textureResolution", SHADOW_QUALITY = "shadowQuality", SHADER_QUALITY = "shaderQuality", SHADOW_MAP_FILTERING = "shadowMapFiltering", MAX_LIGHTS = "maxLights", TERRAIN_QUALITY = "terrainQuality", OBJECT_DRAW_DISTANCE = "objectDrawDistance", FOLIAGE_DRAW_DISTANCE = "foliageDrawDistance", FOLIAGE_SHADOW = "foliageShadow", LOD_DISTANCE = "lodDistance", TERRAIN_LOD_DISTANCE = "terrainLODDistance", VOLUME_MESH_TESSELLATION = "volumeMeshTessellation", MAX_TIRE_TRACKS = "maxTireTracks", LIGHTS_PROFILE = GameSettings.SETTING.LIGHTS_PROFILE, REAL_BEACON_LIGHTS = GameSettings.SETTING.REAL_BEACON_LIGHTS, MAX_MIRRORS = GameSettings.SETTING.MAX_NUM_MIRRORS, POST_PROCESS_AA = "postProcessAntiAliasing", DLSS = "dlss", FIDELITYFX_SR = "fidelityFxSR", FIDELITYFX_SR_20 = "fidelityFxSR20", VALAR = "valar", XESS = "xess", SHARPNESS = "sharpness", SHADING_RATE_QUALITY = "shadingRateQuality", SHADOW_DISTANCE_QUALITY = "shadowDistanceQuality", SSAO_QUALITY = "ssaoQuality", CLOUD_QUALITY = "cloudQuality", FULLSCREEN_MODE = "fullscreenMode", INPUT_HELP_MODE = GameSettings.SETTING.INPUT_HELP_MODE, GAMEPAD_ENABLED = GameSettings.SETTING.IS_GAMEPAD_ENABLED, HEAD_TRACKING_ENABLED = GameSettings.SETTING.IS_HEAD_TRACKING_ENABLED, FORCE_FEEDBACK = GameSettings.SETTING.FORCE_FEEDBACK, LANGUAGE = "language", MP_LANGUAGE = "mpLanguage", VOLUME_MUSIC = GameSettings.SETTING.VOLUME_MUSIC, UI_SCALE = GameSettings.SETTING.UI_SCALE, RESOLUTION = "resolution", BRIGHTNESS = "brightness", V_SYNC = "vSync", FOV_Y = GameSettings.SETTING.FOV_Y, CAMERA_BOBBING = GameSettings.SETTING.CAMERA_BOBBING, FRAME_LIMIT = GameSettings.SETTING.FRAME_LIMIT, INVERT_Y_LOOK = GameSettings.SETTING.INVERT_Y_LOOK, VOLUME_MASTER = GameSettings.SETTING.VOLUME_MASTER, SHOW_HELP_MENU = GameSettings.SETTING.SHOW_HELP_MENU, EASY_ARM_CONTROL = GameSettings.SETTING.EASY_ARM_CONTROL, VOLUME_ENVIRONMENT = GameSettings.SETTING.VOLUME_ENVIRONMENT, VOLUME_VEHICLE = GameSettings.SETTING.VOLUME_VEHICLE, RADIO_VEHICLE_ONLY = GameSettings.SETTING.RADIO_VEHICLE_ONLY, RADIO_IS_ACTIVE = GameSettings.SETTING.RADIO_IS_ACTIVE, VOLUME_RADIO = GameSettings.SETTING.VOLUME_RADIO, VOLUME_GUI = GameSettings.SETTING.VOLUME_GUI, VOLUME_VOICE = GameSettings.SETTING.VOLUME_VOICE, VOLUME_VOICE_INPUT = GameSettings.SETTING.VOLUME_VOICE_INPUT, VOICE_MODE = GameSettings.SETTING.VOICE_MODE, VOICE_INPUT_SENSITIVITY = GameSettings.SETTING.VOICE_INPUT_SENSITIVITY, SHOW_HELP_ICONS = GameSettings.SETTING.SHOW_HELP_ICONS, USE_COLORBLIND_MODE = GameSettings.SETTING.USE_COLORBLIND_MODE, SHOW_TRIGGER_MARKER = GameSettings.SETTING.SHOW_TRIGGER_MARKER, SHOW_HELP_TRIGGER = GameSettings.SETTING.SHOW_HELP_TRIGGER, SHOW_FIELD_INFO = GameSettings.SETTING.SHOW_FIELD_INFO, USE_MILES = GameSettings.SETTING.USE_MILES, USE_FAHRENHEIT = GameSettings.SETTING.USE_FAHRENHEIT, USE_ACRE = GameSettings.SETTING.USE_ACRE, MONEY_UNIT = GameSettings.SETTING.MONEY_UNIT, RESET_CAMERA = GameSettings.SETTING.RESET_CAMERA, USE_WORLD_CAMERA = GameSettings.SETTING.USE_WORLD_CAMERA, ACTIVE_SUSPENSION_CAMERA = GameSettings.SETTING.ACTIVE_SUSPENSION_CAMERA, CAMERA_CHECK_COLLISION = GameSettings.SETTING.CAMERA_CHECK_COLLISION, IS_TRAIN_TABBABLE = GameSettings.SETTING.IS_TRAIN_TABBABLE, CAMERA_SENSITIVITY = GameSettings.SETTING.CAMERA_SENSITIVITY, VEHICLE_ARM_SENSITIVITY = GameSettings.SETTING.VEHICLE_ARM_SENSITIVITY, REAL_BEACON_LIGHT_BRIGHTNESS = GameSettings.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS, STEERING_BACK_SPEED = GameSettings.SETTING.STEERING_BACK_SPEED, STEERING_SENSITIVITY = GameSettings.SETTING.STEERING_SENSITIVITY, DIRECTION_CHANGE_MODE = GameSettings.SETTING.DIRECTION_CHANGE_MODE, GEAR_SHIFT_MODE = GameSettings.SETTING.GEAR_SHIFT_MODE, HUD_SPEED_GAUGE = GameSettings.SETTING.HUD_SPEED_GAUGE, WOOD_HARVESTER_AUTO_CUT = GameSettings.SETTING.WOOD_HARVESTER_AUTO_CUT, SHOW_MULTIPLAYER_NAMES = GameSettings.SETTING.SHOW_MULTIPLAYER_NAMES, GYROSCOPE_STEERING = GameSettings.SETTING.GYROSCOPE_STEERING, CAMERA_TILTING = GameSettings.SETTING.CAMERA_TILTING, HINTS = GameSettings.SETTING.HINTS, CLOUD_SYNC_ALLOW_METERED_CONNECTION = GameSettings.SETTING.CLOUD_SYNC_ALLOW_METERED_CONNECTION, CONSOLE_RESOLUTION = "consoleResolution", CONSOLE_RENDER_QUALITY = "consoleRenderQuality", RESOLUTION_SCALE = "resolutionScale", RESOLUTION_SCALE_3D = "resolutionScale3d"}
function SettingsModel.new()
  local v0 = setmetatable({}, u0)
  v0.settings = {}
  v0.sortedSettings = {}
  v0.settingReaders = {}
  v0.settingWriters = {}
  local v1 = v0:makeDefaultReaderFunction()
  v0.defaultReaderFunction = v1
  v1 = v0:makeDefaultWriterFunction()
  v0.defaultWriterFunction = v1
  v0.volumeTexts = {}
  v0.voiceInputThresholdTexts = {}
  v0.recordingVolumeTexts = {}
  v0.voiceModeTexts = {}
  v0.brightnessTexts = {}
  v0.fovYTexts = {}
  v0.indexToFovYMapping = {}
  v0.fovYToIndexMapping = {}
  v0.uiScaleValues = {}
  v0.uiScaleTexts = {}
  v0.cameraSensitivityValues = {}
  v0.cameraSensitivityStrings = {}
  v0.cameraSensitivityStep = 0.25
  v0.vehicleArmSensitivityValues = {}
  v0.vehicleArmSensitivityStrings = {}
  v0.vehicleArmSensitivityStep = 0.25
  v0.realBeaconLightBrightnessValues = {}
  v0.realBeaconLightBrightnessStrings = {}
  v0.realBeaconLightBrightnessStep = 0.1
  v0.steeringBackSpeedValues = {}
  v0.steeringBackSpeedStrings = {}
  v0.steeringBackSpeedStep = 1
  v0.steeringSensitivityValues = {}
  v0.steeringSensitivityStrings = {}
  v0.steeringSensitivityStep = 0.1
  v0.moneyUnitTexts = {}
  v0.distanceUnitTexts = {}
  v0.temperatureUnitTexts = {}
  v0.areaUnitTexts = {}
  v0.radioModeTexts = {}
  v0.resolutionScaleTexts = {}
  v0.resolutionScale3dTexts = {}
  v0.dlssTexts = {}
  v0.fidelityFxSRTexts = {}
  v0.fidelityFxSR20Texts = {}
  v0.xeSSTexts = {}
  v0.sharpnessTexts = {}
  v0.postProcessAntiAliasingTexts = {}
  v0.msaaTexts = {}
  v0.shadowQualityTexts = {}
  v0.shadowDistanceQualityTexts = {}
  v0.fourStateTexts = {}
  v0.lowHighTexts = {}
  v0.textureFilteringTexts = {}
  v0.shadowMapMaxLightsTexts = {}
  v0.hdrPeakBrightnessValues = {}
  v0.hdrPeakBrightnessTexts = {}
  v0.hdrPeakBrightnessStep = 0.05
  v0.percentValues = {}
  v0.perentageTexts = {}
  v0.percentStep = 0.05
  v0.tireTracksValues = {}
  v0.tireTracksTexts = {}
  v0.tireTracksStep = 0.5
  v0.maxMirrorsTexts = {}
  v0.foliageShadowTexts = {}
  v0.ssaoQualityTexts = {}
  v0.ssaoQualityValues = {}
  v0.ssaoSamplesToQualityIndex = {}
  v0.cloudQualityTexts = {}
  v0.resolutionTexts = {}
  v0.fullscreenModeTexts = {}
  v0.mpLanguageTexts = {}
  v0.inputHelpModeTexts = {}
  v0.directionChangeModeTexts = {}
  v0.gearShiftModeTexts = {}
  v0.hudSpeedGaugeTexts = {}
  v0.frameLimitTexts = {}
  v0.intialValues = {}
  v0.deviceSettings = {}
  v0.currentDevice = {}
  v0.minBrightness = 0.5
  v0.maxBrightness = 2
  v0.brightnessStep = 0.1
  v0.minSharpness = 0
  v0.maxSharpness = 2
  v0.sharpnessStep = 0.1
  v0.minFovY = Platform.minFovY
  v0.maxFovY = Platform.maxFovY
  v0:initialize()
  return v0
end
function SettingsModel:initialize()
  self:createControlDisplayValues()
  self:addManagedSettings()
end
function SettingsModel:addManagedSettings()
  self:addPerformanceClassSetting()
  self:addMSAASetting()
  self:addTextureFilteringSetting()
  self:addTextureResolutionSetting()
  self:addShadowQualitySetting()
  self:addShaderQualitySetting()
  self:addShadowMapFilteringSetting()
  self:addShadowMaxLightsSetting()
  self:addTerrainQualitySetting()
  self:addObjectDrawDistanceSetting()
  self:addFoliageDrawDistanceSetting()
  self:addFoliageShadowSetting()
  self:addLODDistanceSetting()
  self:addTerrainLODDistanceSetting()
  self:addVolumeMeshTessellationSetting()
  self:addMaxTireTracksSetting()
  self:addLightsProfileSetting()
  self:addRealBeaconLightsSetting()
  self:addMaxMirrorsSetting()
  self:addPostProcessAntiAliasingSetting()
  self:addDLSSSetting()
  self:addFidelityFxSRSetting()
  self:addFidelityFxSR20Setting()
  if not GS_IS_MOBILE_VERSION then
    self:addValarSetting()
  end
  self:addXeSSSetting()
  self:addSharpnessSetting()
  self:addShadingRateQualitySetting()
  self:addShadowDistanceQualitySetting()
  self:addSSAOQualitySetting()
  self:addCloudQualitySetting()
  self:addSetting(SettingsModel.SETTING.FULLSCREEN_MODE, getFullscreenMode, setFullscreenMode)
  self:addLanguageSetting()
  self:addMPLanguageSetting()
  self:addInputHelpModeSetting()
  self:addBrightnessSetting()
  self:addVSyncSetting()
  self:addFovYSetting()
  self:addUIScaleSetting()
  self:addMasterVolumeSetting()
  self:addMusicVolumeSetting()
  self:addEnvironmentVolumeSetting()
  self:addVehicleVolumeSetting()
  self:addRadioVolumeSetting()
  self:addVolumeGUISetting()
  self:addVoiceVolumeSetting()
  self:addVoiceInputVolumeSetting()
  self:addVoiceModeSetting()
  self:addVoiceInputSensitivitySetting()
  self:addSteeringBackSpeedSetting()
  self:addSteeringSensitivitySetting()
  self:addCameraSensitivitySetting()
  self:addVehicleArmSensitivitySetting()
  self:addRealBeaconLightBrightnessSetting()
  self:addActiveCameraSuspensionSetting()
  self:addCamerCheckCollisionSetting()
  self:addDirectionChangeModeSetting()
  self:addGearShiftModeSetting()
  self:addHudSpeedGaugeSetting()
  self:addWoodHarvesterAutoCutSetting()
  self:addForceFeedbackSetting()
  if Platform.hasAdjustableFrameLimit then
    self:addFrameLimitSetting()
  end
  if Platform.isMobile then
    self:addGyroscopeSteeringSetting()
    self:addHintsSetting()
    self:addCameraTiltingSetting()
  end
  if Platform.hasCloudSyncSetting then
    self:addCloudSyncMeteredConnectionSetting()
  end
  if Platform.isConsole then
    self:addConsoleResolutionSetting()
    self:addConsoleRenderQualitySetting()
  else
    self:addSetting(SettingsModel.SETTING.RESOLUTION, getScreenMode, setScreenMode)
    self:addResolutionScaleSetting()
    self:addResolutionScale3dSetting()
  end
  if Platform.isStadia then
    self:addHDRPeakBrightnessSetting()
  end
  self:addDirectSetting(SettingsModel.SETTING.USE_COLORBLIND_MODE)
  self:addDirectSetting(SettingsModel.SETTING.GAMEPAD_ENABLED)
  self:addDirectSetting(SettingsModel.SETTING.SHOW_FIELD_INFO)
  self:addDirectSetting(SettingsModel.SETTING.SHOW_HELP_MENU)
  self:addDirectSetting(SettingsModel.SETTING.RADIO_IS_ACTIVE)
  self:addDirectSetting(SettingsModel.SETTING.RESET_CAMERA)
  self:addDirectSetting(SettingsModel.SETTING.RADIO_VEHICLE_ONLY)
  self:addDirectSetting(SettingsModel.SETTING.IS_TRAIN_TABBABLE)
  self:addDirectSetting(SettingsModel.SETTING.HEAD_TRACKING_ENABLED)
  self:addDirectSetting(SettingsModel.SETTING.USE_FAHRENHEIT)
  self:addDirectSetting(SettingsModel.SETTING.USE_WORLD_CAMERA)
  self:addDirectSetting(SettingsModel.SETTING.MONEY_UNIT)
  self:addDirectSetting(SettingsModel.SETTING.USE_ACRE)
  self:addDirectSetting(SettingsModel.SETTING.EASY_ARM_CONTROL)
  self:addDirectSetting(SettingsModel.SETTING.INVERT_Y_LOOK)
  self:addDirectSetting(SettingsModel.SETTING.USE_MILES)
  self:addDirectSetting(SettingsModel.SETTING.SHOW_TRIGGER_MARKER)
  self:addDirectSetting(SettingsModel.SETTING.SHOW_MULTIPLAYER_NAMES)
  self:addDirectSetting(SettingsModel.SETTING.SHOW_HELP_TRIGGER)
  self:addDirectSetting(SettingsModel.SETTING.SHOW_HELP_ICONS)
  self:addDirectSetting(SettingsModel.SETTING.CAMERA_BOBBING, true)
end
function SettingsModel:addSetting(gameSettingsKey, readerFunction, writerFunction, noRestartRequired)
  local initialValue = readerFunction(gameSettingsKey)
  self.settings[gameSettingsKey] = {key = gameSettingsKey, initial = initialValue, saved = initialValue, changed = initialValue, noRestartRequired = noRestartRequired}
  self.settingReaders[gameSettingsKey] = readerFunction
  self.settingWriters[gameSettingsKey] = writerFunction
  table.insert(self.sortedSettings, self.settings[gameSettingsKey])
end
function SettingsModel:setValue(settingKey, value)
  self.settings[settingKey].changed = value
end
function SettingsModel:getValue(settingKey, trueValue)
  if trueValue then
    return self.settingReaders[settingKey](settingKey)
  end
  if self.settings[settingKey] == nil then
    return 0
  end
  return self.settings[settingKey].changed
end
function SettingsModel:refresh()
  for v4, v5 in pairs(self.settings) do
    local v6 = self.settingReaders[v4](v4)
    v5.initial = v6
    v5.changed = v5.initial
    v5.saved = v5.initial
  end
end
function SettingsModel:refreshChangedValue()
  for v4, v5 in pairs(self.settings) do
    local v6 = self.settingReaders[v4](v4)
    v5.changed = v6
    v5.saved = v5.changed
  end
end
function SettingsModel:reset()
  for v4, v5 in pairs(self.sortedSettings) do
    v5.changed = v5.initial
    v5.saved = v5.initial
    self.settingWriters[v5.key](v5.changed, v5.key)
  end
  self:resetDeviceChanges()
end
function SettingsModel:getHasValueChanged(v1)
  if self.settings[v1] == nil then
    local v5 = tostring(v1)
    Logging.devError(...)
    return false
  end
  if v2.initial == v2.changed and v2.initial == v2.saved then
  end
  return v3
end
function SettingsModel:hasChanges()
  for v4, v5 in pairs(self.settings) do
    if v5.initial == v5.changed and not (v5.initial ~= v5.saved) then
      continue
    end
    return true
  end
  v1 = self:hasDeviceChanges()
  return v1
end
function SettingsModel:needsRestartToApplyChanges()
  for v4, v5 in pairs(self.settings) do
    if v5.initial == v5.changed and not (v5.initial ~= v5.saved) then
      continue
    end
    if not not v5.noRestartRequired then
      continue
    end
    return true
  end
  v1 = self:hasDeviceChanges()
  return v1
end
function SettingsModel:applyChanges(settingClassesToSave)
  for v5, v6 in pairs(self.sortedSettings) do
    self:applyChange(v6.key)
  end
  if settingClassesToSave ~= 0 then
    self:saveChanges(settingClassesToSave)
  end
end
function SettingsModel:applyChange(v1)
  if self.settings[v1] ~= nil then
    if self.settings[v1].saved ~= self.settings[v1].changed then
      self.settingWriters[v1](self.settings[v1].changed, v1)
      self.settings[v1].saved = self.settings[v1].changed
    end
    v2.initial = v4
  end
end
function SettingsModel:saveChanges(settingClassesToSave)
  local v2 = bitAND(settingClassesToSave, SettingsModel.SETTING_CLASS.SAVE_GAMEPLAY_SETTINGS)
  if v2 ~= 0 then
    v2:saveToXMLFile(g_savegameXML)
  end
  self:saveDeviceChanges()
  v2 = bitAND(settingClassesToSave, SettingsModel.SETTING_CLASS.SAVE_ENGINE_QUALITY_SETTINGS)
  if v2 ~= 0 then
    saveHardwareScalability()
    if not GS_IS_CONSOLE_VERSION and not GS_PLATFORM_GGP then
      -- if not GS_IS_MOBILE_VERSION then goto L49 end
    end
    executeSettingsChange()
  end
end
function SettingsModel:applyHDRPeakBrightness(value)
  self.settingWriters[SettingsModel.SETTING.HDR_PEAK_BRIGHTNESS](value, SettingsModel.SETTING.HDR_PEAK_BRIGHTNESS)
  self.settings[SettingsModel.SETTING.HDR_PEAK_BRIGHTNESS].changed = value
  self.settings[SettingsModel.SETTING.HDR_PEAK_BRIGHTNESS].saved = value
  self:refreshChangedValue()
end
function SettingsModel:applyPerformanceClass(value)
  self.settingWriters[SettingsModel.SETTING.PERFORMANCE_CLASS](value, SettingsModel.SETTING.PERFORMANCE_CLASS)
  self.settings[SettingsModel.SETTING.PERFORMANCE_CLASS].changed = value
  self.settings[SettingsModel.SETTING.PERFORMANCE_CLASS].saved = value
  self:refreshChangedValue()
end
function SettingsModel:applyCustomSettings()
  for v4 in pairs(self.settings) do
    if not (v4 ~= SettingsModel.SETTING.PERFORMANCE_CLASS) then
      continue
    end
    if not (self.settings[v4].changed ~= self.settings[v4].saved) then
      continue
    end
    self.settingWriters[v4](self.settings[v4].changed, v4)
    self.settings[v4].saved = self.settings[v4].changed
  end
end
function SettingsModel:createControlDisplayValues()
  local v2 = v2:getText("ui_off")
  self.volumeTexts = {v2, "10%", "20%", "30%", "40%", "50%", "60%", "70%", "80%", "90%", "100%"}
  v2 = v2:getText("ui_auto")
  self.recordingVolumeTexts = {v2, "50%", "60%", "70%", "80%", "90%", "100%", "110%", "120%", "130%", "140%", "150%"}
  v2 = v2:getText("ui_off")
  local discreteSetting = discreteSetting:getText("ui_voiceActivity")
  self.voiceModeTexts = {}
  if Platform.supportsPushToTalk then
    discreteSetting = discreteSetting:getText("ui_pushToTalk")
    table.insert(...)
  end
  v2 = v2:getText("ui_auto")
  self.voiceInputThresholdTexts = {v2, "0%", "10%", "20%", "30%", "40%", "50%", "60%", "70%", "80%", "90%", "100%"}
  -- TODO: structure LOP_FORNPREP (pc 108, target 121)
  local v6 = string.format("%.1f", self.minBrightness)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 120, target 109)
  -- TODO: structure LOP_FORNPREP (pc 127, target 152)
  self.indexToFovYMapping[1] = self.minFovY
  self.fovYToIndexMapping[self.minFovY] = 1
  local v8 = v8:getText("setting_fovyDegree")
  local v7 = string.format(v8, self.minFovY)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 151, target 128)
  -- TODO: structure LOP_FORNPREP (pc 155, target 171)
  v7 = string.format("%d%%", 50 + (1 - 1) * 5)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 170, target 156)
  -- TODO: structure LOP_FORNPREP (pc 174, target 190)
  local v9 = MathUtil.round(0.5 * 100)
  v7 = string.format(...)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 189, target 175)
  -- TODO: structure LOP_FORNPREP (pc 193, target 209)
  v9 = MathUtil.round(0.5 * 100)
  v7 = string.format(...)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 208, target 194)
  -- TODO: structure LOP_FORNPREP (pc 213, target 234)
  v7 = string.format("%d%%", 0.5 * 100)
  table.insert(...)
  table.insert(self.cameraSensitivityValues, 0.5)
  -- TODO: structure LOP_FORNLOOP (pc 233, target 214)
  -- TODO: structure LOP_FORNPREP (pc 238, target 259)
  v7 = string.format("%d%%", 0.5 * 100)
  table.insert(...)
  table.insert(self.vehicleArmSensitivityValues, 0.5)
  -- TODO: structure LOP_FORNLOOP (pc 258, target 239)
  -- TODO: structure LOP_FORNPREP (pc 263, target 301)
  if 0 < 0 then
    v7 = string.format("%d%%", 0 * 100 + 0.5)
    table.insert(...)
  else
    v7 = v7:getText("setting_off")
    table.insert(...)
  end
  table.insert(self.realBeaconLightBrightnessValues, v4)
  -- TODO: structure LOP_FORNLOOP (pc 300, target 264)
  -- TODO: structure LOP_FORNPREP (pc 306, target 328)
  v8 = string.format("%d%%", Platform.gameplay.steeringBackSpeedSettings[1] * 10)
  table.insert(...)
  table.insert(self.steeringBackSpeedValues, Platform.gameplay.steeringBackSpeedSettings[1])
  -- TODO: structure LOP_FORNLOOP (pc 327, target 307)
  -- TODO: structure LOP_FORNPREP (pc 332, target 354)
  v8 = string.format("%d%%", 0.5 * 100 + 0.5)
  table.insert(...)
  table.insert(self.steeringSensitivityValues, 0.5)
  -- TODO: structure LOP_FORNLOOP (pc 353, target 333)
  local v4 = v4:getText("unit_euro")
  local v5 = v5:getText("unit_dollar")
  v6 = v6:getText("unit_pound")
  self.moneyUnitTexts = {}
  v4 = v4:getText("unit_km")
  v5 = v5:getText("unit_miles")
  self.distanceUnitTexts = {}
  v4 = v4:getText("unit_celsius")
  v5 = v5:getText("unit_fahrenheit")
  self.temperatureUnitTexts = {}
  v4 = v4:getText("unit_ha")
  v5 = v5:getText("unit_acre")
  self.areaUnitTexts = {}
  v4 = v4:getText("setting_radioAlways")
  v5 = v5:getText("setting_radioVehicleOnly")
  self.radioModeTexts = {}
  v4 = v4:getText("ui_off")
  self.msaaTexts = {v4, "2x", "4x", "8x"}
  v4 = v4:getText("setting_off")
  v5 = v5:getText("setting_medium")
  v6 = v6:getText("setting_high")
  v7 = v7:getText("setting_veryHigh")
  self.shadowQualityTexts = {}
  v4 = v4:getText("setting_low")
  v5 = v5:getText("setting_medium")
  v6 = v6:getText("setting_high")
  self.shadowDistanceQualityTexts = {}
  v4 = v4:getText("setting_low")
  v5 = v5:getText("setting_medium")
  v6 = v6:getText("setting_high")
  v7 = v7:getText("setting_veryHigh")
  self.fourStateTexts = {}
  v4 = v4:getText("setting_low")
  v5 = v5:getText("setting_high")
  self.lowHighTexts = {}
  self.textureFilteringTexts = {"Bilinear", "Trilinear", "Aniso 1x", "Aniso 2x", "Aniso 4x", "Aniso 8x", "Aniso 16x"}
  v4 = v4:getText("ui_off")
  v5 = v5:getText("ui_on")
  self.foliageShadowTexts = {}
  v4 = v4:getText("setting_low")
  v5 = v5:getText("setting_medium")
  v6 = v6:getText("setting_high")
  v7 = v7:getText("setting_veryHigh")
  self.ssaoQualityTexts = {}
  v4 = v4:getText("setting_low")
  v5 = v5:getText("setting_medium")
  v6 = v6:getText("setting_high")
  v7 = v7:getText("setting_veryHigh")
  self.cloudQualityTexts = {}
  self.dlssTexts = {}
  self.dlssMapping = {}
  self.dlssMappingReverse = {}
  -- TODO: structure LOP_FORNPREP (pc 675, target 720)
  if 0 ~= DLSSQuality.OFF then
    v6 = getSupportsDLSSQuality(0)
    -- if not v6 then goto L719 end
  end
  if v5 == DLSSQuality.OFF then
    v8 = v8:getText("ui_off")
    -- if v8 then goto L702 end
  end
  v8 = getDLSSQualityName(v5)
  table.insert(v7, v8)
  self.dlssMapping[v5] = #self.dlssTexts
  self.dlssMappingReverse[#self.dlssTexts] = v5
  -- TODO: structure LOP_FORNLOOP (pc 719, target 676)
  -- TODO: structure LOP_FORNPREP (pc 723, target 743)
  v6 = getDefaultSSAOQuality(0)
  table.insert(self.ssaoQualityValues, v6)
  self.ssaoSamplesToQualityIndex[v6] = #self.ssaoQualityValues
  -- TODO: structure LOP_FORNLOOP (pc 742, target 724)
  self.fidelityFxSRTexts = {}
  self.fidelityFxSRMapping = {}
  self.fidelityFxSRMappingReverse = {}
  -- TODO: structure LOP_FORNPREP (pc 760, target 805)
  if 0 ~= FidelityFxSRQuality.OFF then
    v6 = getSupportsFidelityFxSRQuality(0)
    -- if not v6 then goto L804 end
  end
  if v5 == FidelityFxSRQuality.OFF then
    v8 = v8:getText("ui_off")
    -- if v8 then goto L787 end
  end
  v8 = getFidelityFxSRQualityName(v5)
  table.insert(v7, v8)
  self.fidelityFxSRMapping[v5] = #self.fidelityFxSRTexts
  self.fidelityFxSRMappingReverse[#self.fidelityFxSRTexts] = v5
  -- TODO: structure LOP_FORNLOOP (pc 804, target 761)
  self.fidelityFxSR20Texts = {}
  self.fidelityFxSR20Mapping = {}
  self.fidelityFxSR20MappingReverse = {}
  -- TODO: structure LOP_FORNPREP (pc 822, target 867)
  if 0 ~= FidelityFxSR20Quality.OFF then
    v6 = getSupportsFidelityFxSR20Quality(0)
    -- if not v6 then goto L866 end
  end
  if v5 == FidelityFxSR20Quality.OFF then
    v8 = v8:getText("ui_off")
    -- if v8 then goto L849 end
  end
  v8 = getFidelityFxSR20QualityName(v5)
  table.insert(v7, v8)
  self.fidelityFxSR20Mapping[v5] = #self.fidelityFxSR20Texts
  self.fidelityFxSR20MappingReverse[#self.fidelityFxSR20Texts] = v5
  -- TODO: structure LOP_FORNLOOP (pc 866, target 823)
  if not GS_IS_MOBILE_VERSION then
    self.valarTexts = {}
    self.valarMapping = {}
    self.valarMappingReverse = {}
    -- TODO: structure LOP_FORNPREP (pc 887, target 932)
    if 0 ~= ValarQuality.OFF then
      v6 = getSupportsValarQuality(0)
      -- if not v6 then goto L931 end
    end
    if v5 == ValarQuality.OFF then
      v8 = v8:getText("ui_off")
      -- if v8 then goto L914 end
    end
    v8 = getValarQualityName(v5)
    table.insert(v7, v8)
    self.valarMapping[v5] = #self.valarTexts
    self.valarMappingReverse[#self.valarTexts] = v5
    -- TODO: structure LOP_FORNLOOP (pc 931, target 888)
  end
  self.xeSSTexts = {}
  self.xeSSMapping = {}
  self.xeSSMappingReverse = {}
  -- TODO: structure LOP_FORNPREP (pc 949, target 994)
  if 0 ~= XeSSQuality.OFF then
    v6 = getSupportsXeSSQuality(0)
    -- if not v6 then goto L993 end
  end
  if v5 == XeSSQuality.OFF then
    v8 = v8:getText("ui_off")
    -- if v8 then goto L976 end
  end
  v8 = getXeSSQualityName(v5)
  table.insert(v7, v8)
  self.xeSSMapping[v5] = #self.xeSSTexts
  self.xeSSMappingReverse[#self.xeSSTexts] = v5
  -- TODO: structure LOP_FORNLOOP (pc 993, target 950)
  -- TODO: structure LOP_FORNPREP (pc 1001, target 1014)
  v8 = string.format("%.1f", self.minSharpness)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 1013, target 1002)
  self.postProcessAntiAliasingTexts = {}
  self.postProcessAntiAliasingMapping = {}
  self.postProcessAntiAliasingMappingReverse = {}
  discreteSetting = discreteSetting:getText("toolTip_ppaa")
  self.postProcessAntiAliasingToolTip = discreteSetting
  -- TODO: structure LOP_FORNPREP (pc 1039, target 1117)
  if 0 ~= PostProcessAntiAliasing.OFF then
    v6 = getSupportsPostProcessAntiAliasing(0)
    -- if not v6 then goto L1116 end
  end
  if v5 == PostProcessAntiAliasing.OFF then
    v8 = v8:getText("ui_off")
    -- if v8 then goto L1066 end
  end
  v8 = getPostProcessAntiAliasingName(v5)
  table.insert(v7, v8)
  self.postProcessAntiAliasingMapping[v5] = #self.postProcessAntiAliasingTexts
  self.postProcessAntiAliasingMappingReverse[#self.postProcessAntiAliasingTexts] = v5
  if v5 == PostProcessAntiAliasing.TAA then
    v9 = v9:getText("toolTip_ppaa_taa")
    self.postProcessAntiAliasingToolTip = self.postProcessAntiAliasingToolTip .. "\n" .. v9
  elseif v5 == PostProcessAntiAliasing.DLAA then
    v9 = v9:getText("toolTip_ppaa_dlaa")
    self.postProcessAntiAliasingToolTip = self.postProcessAntiAliasingToolTip .. "\n" .. v9
  end
  -- TODO: structure LOP_FORNLOOP (pc 1116, target 1040)
  self.hdrPeakBrightnessValues = {}
  self.hdrPeakBrightnessTexts = {}
  self.hdrPeakBrightnessStep = 10
  -- TODO: structure LOP_FORNPREP (pc 1131, target 1157)
  v9 = string.format("%d", 100 + 0 * self.hdrPeakBrightnessStep)
  table.insert(...)
  table.insert(self.hdrPeakBrightnessValues, 100 + 0 * self.hdrPeakBrightnessStep)
  -- TODO: structure LOP_FORNLOOP (pc 1156, target 1132)
  self.shadowMapMaxLightsTexts = {}
  -- TODO: structure LOP_FORNPREP (pc 1164, target 1177)
  v8 = string.format("%d", 1)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 1176, target 1165)
  self.percentValues = {}
  self.perentageTexts = {}
  self.percentStep = 0.05
  -- TODO: structure LOP_FORNPREP (pc 1191, target 1221)
  v8 = string.format("%.f%%", (0.5 + 0 * self.percentStep) * 100)
  table.insert(...)
  table.insert(self.percentValues, 0.5 + 0 * self.percentStep)
  -- TODO: structure LOP_FORNLOOP (pc 1220, target 1192)
  self.tireTracksValues = {}
  self.tireTracksTexts = {}
  self.tireTracksStep = 0.5
  -- TODO: structure LOP_FORNPREP (pc 1236, target 1257)
  v8 = string.format("%d%%", 0 * 100)
  table.insert(...)
  table.insert(self.tireTracksValues, 0)
  -- TODO: structure LOP_FORNLOOP (pc 1256, target 1237)
  self.maxMirrorsTexts = {}
  -- TODO: structure LOP_FORNPREP (pc 1264, target 1277)
  v8 = string.format("%d", 0)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 1276, target 1265)
  self.resolutionTexts = {}
  discreteSetting = getNumOfScreenModes()
  -- TODO: structure LOP_FORNPREP (pc 1287, target 1342)
  v7, v8 = getScreenModeInfo(0)
  if v7 / v8 == 1.25 then
  elseif 1.3 < v7 / v8 then
    -- if v7 / v8 >= 1.4 then goto L1306 end
  else
    if 1.7 < v7 / v8 then
      -- if v7 / v8 >= 1.8 then goto L1314 end
    elseif 2.3 < v7 / v8 then
      -- if v7 / v8 >= 2.4 then goto L1322 end
    else
      local v11 = string.format("(%1.0f:10)", v7 / v8 * 10)
    end
  end
  local v13 = string.format("%dx%d %s", v7, v8, v10)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 1341, target 1288)
  self.fullscreenModeTexts = {}
  -- TODO: structure LOP_FORNPREP (pc 1351, target 1399)
  if 0 == FullscreenMode.WINDOWED then
    v9 = v9:getText("ui_windowed")
    table.insert(...)
  elseif 0 == FullscreenMode.WINDOWED_FULLSCREEN then
    v9 = v9:getText("ui_windowed_fullscreen")
    table.insert(...)
  else
    v9 = v9:getText("ui_exclusive_fullscreen")
    table.insert(...)
  end
  -- TODO: structure LOP_FORNLOOP (pc 1398, target 1352)
  self.mpLanguageTexts = {}
  v4 = getNumOfLanguages()
  -- TODO: structure LOP_FORNPREP (pc 1409, target 1421)
  local v10 = getLanguageName(0)
  table.insert(...)
  -- TODO: structure LOP_FORNLOOP (pc 1420, target 1410)
  self.frameLimitMapping = {}
  self.frameLimitMappingReverse = {}
  self.frameLimitTexts = {}
  for v8, v9 in ipairs(g_gameSettings.frameLimitValues) do
    local v12 = tostring(v9)
    table.insert(...)
    self.frameLimitMapping[v9] = #self.frameLimitTexts
    self.frameLimitMappingReverse[#self.frameLimitTexts] = v9
  end
  v6 = v6:getText("ui_auto")
  v7 = v7:getText("ui_keyboard")
  v8 = v8:getText("ui_gamepad")
  self.inputHelpModeTexts = {}
  v7 = v7:getText("ui_directionChangeModeAutomatic")
  {}[VehicleMotor.DIRECTION_CHANGE_MODE_AUTOMATIC] = v7
  v7 = v7:getText("ui_directionChangeModeManual")
  {}[VehicleMotor.DIRECTION_CHANGE_MODE_MANUAL] = v7
  self.directionChangeModeTexts = {}
  v7 = v7:getText("ui_gearShiftModeAutomatic")
  {}[VehicleMotor.SHIFT_MODE_AUTOMATIC] = v7
  v7 = v7:getText("ui_gearShiftModeManual")
  {}[VehicleMotor.SHIFT_MODE_MANUAL] = v7
  self.gearShiftModeTexts = {}
  if not Platform.isConsole then
    v7 = v7:getText("ui_gearShiftModeManualClutch")
    self.gearShiftModeTexts[VehicleMotor.SHIFT_MODE_MANUAL_CLUTCH] = v7
  end
  v7 = v7:getText("ui_hudSpeedGaugeRPM")
  {}[SpeedMeterDisplay.GAUGE_MODE_RPM] = v7
  v7 = v7:getText("ui_hudSpeedGaugeSpeed")
  {}[SpeedMeterDisplay.GAUGE_MODE_SPEED] = v7
  self.hudSpeedGaugeTexts = {}
  v6 = v6:getText("ui_fullhd_desc")
  v7 = v7:getText("ui_quadhd_desc")
  self.consoleResolutionTexts = {}
  v6 = v6:getText("button_normal")
  v7 = v7:getText("button_enhanced")
  self.consoleRenderQualityTexts = {}
  self.deadzoneValues = {}
  self.deadzoneTexts = {}
  self.deadzoneStep = 0.01
  -- TODO: structure LOP_FORNPREP (pc 1618, target 1645)
  v12 = math.floor(0 * 100 + 0.001)
  v10 = string.format(...)
  table.insert(...)
  table.insert(self.deadzoneValues, 0)
  -- TODO: structure LOP_FORNLOOP (pc 1644, target 1619)
  self.sensitivityValues = {}
  self.sensitivityTexts = {}
  self.sensitivityStep = 0.25
  -- TODO: structure LOP_FORNPREP (pc 1660, target 1681)
  v10 = string.format("%d%%", 0.5 * 100)
  table.insert(...)
  table.insert(self.sensitivityValues, 0.5)
  -- TODO: structure LOP_FORNLOOP (pc 1680, target 1661)
  self.headTrackingSensitivityValues = {}
  self.headTrackingSensitivityTexts = {}
  self.headTrackingSensitivityStep = 0.05
  -- TODO: structure LOP_FORNPREP (pc 1696, target 1719)
  v10 = string.format("%d%%", 0 * 100 + 0.001)
  table.insert(...)
  table.insert(self.headTrackingSensitivityValues, 0)
  -- TODO: structure LOP_FORNLOOP (pc 1718, target 1697)
end
function SettingsModel:getDeadzoneTexts()
  return self.deadzoneTexts
end
function SettingsModel:getSensitivityTexts()
  return self.sensitivityTexts
end
function SettingsModel:getHeadTrackingSensitivityTexts()
  return self.headTrackingSensitivityTexts
end
function SettingsModel:getDeviceHasAxisDeadzone(axisIndex)
  if self.deviceSettings[self.currentDevice] ~= nil and self.deviceSettings[self.currentDevice].deadzones[axisIndex] == nil then
  end
  return discreteSetting
end
function SettingsModel:getDeviceHasAxisSensitivity(axisIndex)
  if self.deviceSettings[self.currentDevice] ~= nil and self.deviceSettings[self.currentDevice].sensitivities[axisIndex] == nil then
  end
  return discreteSetting
end
function SettingsModel:getNumDevices()
  return #self.deviceSettings
end
function SettingsModel:nextDevice()
  self.currentDevice = self.currentDevice + 1
  if #self.deviceSettings < self.currentDevice then
    self.currentDevice = 1
  end
end
function SettingsModel:getCurrentDeviceName()
  if self.deviceSettings[self.currentDevice] ~= nil then
    return self.deviceSettings[self.currentDevice].device.deviceName
  end
  return ""
end
function SettingsModel:initDeviceSettings()
  self.deviceSettings = {}
  self.currentDevice = 0
  for v4, v5 in pairs(g_inputBinding.devicesByInternalId) do
    table.insert(self.deviceSettings, {device = v5, deadzones = {}, sensitivities = {}, mouseSensitivity = {}, headTrackingSensitivity = {}})
    -- TODO: structure LOP_FORNPREP (pc 44, target 85)
    local v13 = getHasGamepadAxis(0, v5.internalId)
    if v13 then
      v13 = v5:getDeadzone(0)
      local v14 = Utils.getValueIndex(v13, self.deadzoneValues)
      {}[0] = {current = v14, saved = v14}
      local v15 = v5:getSensitivity(0)
      local v16 = Utils.getValueIndex(v15, self.sensitivityValues)
      {}[0] = {current = v16, saved = v16}
    end
    -- TODO: structure LOP_FORNLOOP (pc 84, target 45)
    if v5.category == InputDevice.CATEGORY.KEYBOARD_MOUSE then
      local v10, v11 = v10:getMouseMotionScale()
      local v12 = Utils.getValueIndex(v10, self.sensitivityValues)
      v8.current = v12
      v8.saved = v12
    end
    v11 = getCameraTrackingSensitivity()
    v10 = Utils.getValueIndex(v11, self.headTrackingSensitivityValues)
    v9.current = v10
    v9.saved = v10
    self.currentDevice = 1
  end
end
function SettingsModel:hasDeviceChanges()
  for v4, v5 in ipairs(self.deviceSettings) do
    for v9, v10 in pairs(v5.deadzones) do
      if v5.deadzones[v9].current ~= v5.deadzones[v9].saved then
        return true
      end
      if not (v5.sensitivities[v9].current ~= v5.sensitivities[v9].saved) then
        continue
      end
      return true
    end
    if v5.device.category == InputDevice.CATEGORY.KEYBOARD_MOUSE and v5.mouseSensitivity.current ~= v5.mouseSensitivity.saved then
      return true
    end
    if not (v5.headTrackingSensitivity.current ~= v5.headTrackingSensitivity.saved) then
      continue
    end
    return true
  end
  return false
end
function SettingsModel:saveDeviceChanges()
  for v5, v6 in ipairs(self.deviceSettings) do
    for v11, v12 in pairs(v6.deadzones) do
      v6.deadzones[v11].saved = v6.deadzones[v11].current
      v7:setDeadzone(v11, self.deadzoneValues[v6.deadzones[v11].current])
      v6.sensitivities[v11].saved = v6.sensitivities[v11].current
      v7:setSensitivity(v11, self.sensitivityValues[v6.sensitivities[v11].current])
    end
    if not (v6.device.category == InputDevice.CATEGORY.KEYBOARD_MOUSE) then
      continue
    end
    if v6.mouseSensitivity.current ~= v6.mouseSensitivity.saved then
      v9:setMouseMotionScale(self.sensitivityValues[v6.mouseSensitivity.current])
      v6.mouseSensitivity.saved = v6.mouseSensitivity.current
    end
    if not (v6.headTrackingSensitivity.current ~= v6.headTrackingSensitivity.saved) then
      continue
    end
    setCameraTrackingSensitivity(self.headTrackingSensitivityValues[v6.headTrackingSensitivity.current])
    v6.headTrackingSensitivity.saved = v6.headTrackingSensitivity.current
  end
  if v1 then
    v2:applyGamepadDeadzones()
    v2:saveToXMLFile()
  end
end
function SettingsModel:resetDeviceChanges()
  for v4, v5 in ipairs(self.deviceSettings) do
    for v9, v10 in pairs(v5.deadzones) do
      v5.deadzones[v9].current = v5.deadzones[v9].saved
      v5.sensitivities[v9].current = v5.deadzones[v9].saved
    end
    v5.mouseSensitivity.current = v5.mouseSensitivity.saved
    v5.headTrackingSensitivity.current = v5.headTrackingSensitivity.saved
  end
end
function SettingsModel:setDeviceDeadzoneValue(axisIndex, value)
  if self.deviceSettings[self.currentDevice] ~= nil then
    self.deviceSettings[self.currentDevice].deadzones[axisIndex].current = value
  end
end
function SettingsModel:getCurrentDeviceDeadzoneValue(axisIndex)
  if self.deviceSettings[self.currentDevice] ~= nil then
    return self.deadzoneValues[self.deviceSettings[self.currentDevice].deadzones[axisIndex].current]
  end
end
function SettingsModel:setDeviceSensitivityValue(axisIndex, value)
  if self.deviceSettings[self.currentDevice] ~= nil then
    self.deviceSettings[self.currentDevice].sensitivities[axisIndex].current = value
  end
end
function SettingsModel:getCurrentDeviceSensitivityValue(axisIndex)
  if self.deviceSettings[self.currentDevice] ~= nil then
    return self.sensitivityValues[self.deviceSettings[self.currentDevice].sensitivities[axisIndex].current]
  end
end
function SettingsModel:setMouseSensitivity(value)
  if self.deviceSettings[self.currentDevice] ~= nil then
    self.deviceSettings[self.currentDevice].mouseSensitivity.current = value
  end
end
function SettingsModel:setHeadTrackingSensitivity(value)
  if self.deviceSettings[self.currentDevice] ~= nil then
    self.deviceSettings[self.currentDevice].headTrackingSensitivity.current = value
  end
end
function SettingsModel:getDeviceAxisDeadzoneValue(axisIndex)
  return self.deviceSettings[self.currentDevice].deadzones[axisIndex].current
end
function SettingsModel:getDeviceAxisSensitivityValue(axisIndex)
  return self.deviceSettings[self.currentDevice].sensitivities[axisIndex].current
end
function SettingsModel:getMouseSensitivityValue(axisIndex)
  return self.deviceSettings[self.currentDevice].mouseSensitivity.current
end
function SettingsModel:getHeadTrackingSensitivityValue(axisIndex)
  return self.deviceSettings[self.currentDevice].headTrackingSensitivity.current
end
function SettingsModel:getIsDeviceMouse()
  if self.deviceSettings[self.currentDevice] ~= nil and self.deviceSettings[self.currentDevice].device.category ~= InputDevice.CATEGORY.KEYBOARD_MOUSE then
  end
  return v2
end
function SettingsModel:setConsoleResolution(value)
  local displayResolution = self:getValue(SettingsModel.SETTING.CONSOLE_RESOLUTION)
  local discreteSetting = getNeoMode()
  if discreteSetting then
    -- if not v2 then goto L25 end
  end
  self:setValue(SettingsModel.SETTING.CONSOLE_RENDER_QUALITY, 1)
  -- goto L45  (LOP_JUMP +20)
  self:setValue(SettingsModel.SETTING.CONSOLE_RENDER_QUALITY, self.settings[SettingsModel.SETTING.CONSOLE_RENDER_QUALITY].saved)
  self:setValue(SettingsModel.SETTING.CONSOLE_RESOLUTION, value)
end
function SettingsModel:getConsoleIsRenderQualityDisabled()
  local displayResolution = self:getValue(SettingsModel.SETTING.CONSOLE_RESOLUTION)
  local discreteSetting = getNeoMode()
  if not not discreteSetting and displayResolution == 1 then
  end
  return v2
end
function SettingsModel.getConsoleIsResolutionVisible(v0)
  local v1 = getNeoMode()
  if v1 then
    v1 = get4kAvailable()
  end
  return v1
end
function SettingsModel.getConsoleIsRenderQualityVisible(v0)
  return getNeoMode()
end
function SettingsModel:getConsoleResolutionTexts()
  return self.consoleResolutionTexts
end
function SettingsModel:getConsoleRenderQualityTexts()
  return self.consoleRenderQualityTexts
end
function SettingsModel:getResolutionTexts()
  return self.resolutionTexts
end
function SettingsModel:getFullscreenModeTexts()
  return self.fullscreenModeTexts
end
function SettingsModel:getMPLanguageTexts()
  return self.mpLanguageTexts
end
function SettingsModel:getFrameLimitTexts()
  return self.frameLimitTexts
end
function SettingsModel:getInputHelpModeTexts()
  return self.inputHelpModeTexts
end
function SettingsModel:getDirectionChangeModeTexts()
  return self.directionChangeModeTexts
end
function SettingsModel:getGearShiftModeTexts()
  return self.gearShiftModeTexts
end
function SettingsModel:getHudSpeedGaugeTexts()
  return self.hudSpeedGaugeTexts
end
function SettingsModel.getLanguageTexts(v0)
  return g_availableLanguageNamesTable
end
function SettingsModel.getIsLanguageDisabled(v0)
  if #g_availableLanguagesTable > 1 and not GS_IS_STEAM_VERSION then
  end
  return v1
end
function SettingsModel.getPerformanceClassTexts(v0)
  local v1, v2 = getPerformanceClass()
  local v6 = v6:getText("setting_low")
  table.insert(...)
  v6 = v6:getText("setting_medium")
  table.insert(...)
  v6 = v6:getText("setting_high")
  table.insert(...)
  v6 = v6:getText("setting_veryHigh")
  table.insert(...)
  if not GS_IS_MOBILE_VERSION then
    v6 = Utils.getPerformanceClassId()
    if not v2 then
      local v7 = v7:getValue(SettingsModel.SETTING.LIGHTS_PROFILE)
      if GameSettings.PERFORMANCE_CLASS_PRESETS[v6][SettingsModel.SETTING.LIGHTS_PROFILE] == v7 then
      end
    end
    if not v5 then
      v7 = v7:getValue(SettingsModel.SETTING.MAX_MIRRORS)
      if v4[SettingsModel.SETTING.MAX_MIRRORS] == v7 then
      end
    end
    if not v5 then
      v7 = v7:getValue(SettingsModel.SETTING.REAL_BEACON_LIGHTS)
      if v4[SettingsModel.SETTING.REAL_BEACON_LIGHTS] == v7 then
      end
    end
    if v5 then
      local v5 = Utils.getPerformanceClassIndex(v1)
      discreteSetting[v5] = discreteSetting[v5] .. " (Custom)"
    end
  end
  return discreteSetting, v1, v2
end
function SettingsModel:getHDRPeakBrightnessTexts()
  return self.hdrPeakBrightnessTexts
end
function SettingsModel:getMSAATexts()
  return self.msaaTexts
end
function SettingsModel:getPostProcessAATexts()
  return self.postProcessAntiAliasingTexts
end
function SettingsModel:getPostProcessAAToolTip()
  return self.postProcessAntiAliasingToolTip
end
function SettingsModel:getDLSSTexts()
  return self.dlssTexts
end
function SettingsModel:getFidelityFxSRTexts()
  return self.fidelityFxSRTexts
end
function SettingsModel:getFidelityFxSR20Texts()
  return self.fidelityFxSR20Texts
end
function SettingsModel:getValarTexts()
  return self.valarTexts
end
function SettingsModel:getXeSSTexts()
  return self.xeSSTexts
end
function SettingsModel:getSharpnessTexts()
  return self.sharpnessTexts
end
function SettingsModel:getShadingRateQualityTexts()
  return self.fourStateTexts
end
function SettingsModel:getShadowQualityTexts()
  return self.shadowQualityTexts
end
function SettingsModel:getSSAOQualityTexts()
  return self.ssaoQualityTexts
end
function SettingsModel:getCloudQualityTexts()
  return self.cloudQualityTexts
end
function SettingsModel:getShadowDistanceQualityTexts()
  return self.shadowDistanceQualityTexts
end
function SettingsModel:getShaderQualityTexts()
  return self.fourStateTexts
end
function SettingsModel:getTextureResolutionTexts()
  return self.lowHighTexts
end
function SettingsModel:getTextureFilteringTexts()
  return self.textureFilteringTexts
end
function SettingsModel:getShadowMapFilteringTexts()
  return self.lowHighTexts
end
function SettingsModel:getTerraingQualityTexts()
  return self.fourStateTexts
end
function SettingsModel:getLightsProfileTexts()
  return self.fourStateTexts
end
function SettingsModel:getShadowMapLightsTexts()
  return self.shadowMapMaxLightsTexts
end
function SettingsModel:getObjectDrawDistanceTexts()
  return self.perentageTexts
end
function SettingsModel:getFoliageDrawDistanceTexts()
  return self.perentageTexts
end
function SettingsModel:getFoliageShadowTexts()
  return self.foliageShadowTexts
end
function SettingsModel:getLODDistanceTexts()
  return self.perentageTexts
end
function SettingsModel:getTerrainLODDistanceTexts()
  return self.perentageTexts
end
function SettingsModel:getVolumeMeshTessalationTexts()
  return self.perentageTexts
end
function SettingsModel:getMaxTireTracksTexts()
  return self.tireTracksTexts
end
function SettingsModel:getMaxMirrorsTexts()
  return self.maxMirrorsTexts
end
function SettingsModel:getBrightnessTexts()
  return self.brightnessTexts
end
function SettingsModel:getFovYTexts()
  return self.fovYTexts
end
function SettingsModel:getUiScaleTexts()
  return self.uiScaleTexts
end
function SettingsModel:getAudioVolumeTexts()
  return self.volumeTexts
end
function SettingsModel:getVoiceInputSensitivityTexts()
  return self.voiceInputThresholdTexts
end
function SettingsModel:getForceFeedbackTexts()
  return self.volumeTexts
end
function SettingsModel:getRecordingVolumeTexts()
  return self.recordingVolumeTexts
end
function SettingsModel:getVoiceModeTexts()
  return self.voiceModeTexts
end
function SettingsModel:getCameraSensitivityTexts()
  return self.cameraSensitivityStrings
end
function SettingsModel:getVehicleArmSensitivityTexts()
  return self.vehicleArmSensitivityStrings
end
function SettingsModel:getRealBeaconLightBrightnessTexts()
  return self.realBeaconLightBrightnessStrings
end
function SettingsModel:getSteeringBackSpeedTexts()
  return self.steeringBackSpeedStrings
end
function SettingsModel:getSteeringSensitivityTexts()
  return self.steeringSensitivityStrings
end
function SettingsModel:getMoneyUnitTexts()
  return self.moneyUnitTexts
end
function SettingsModel:getDistanceUnitTexts()
  return self.distanceUnitTexts
end
function SettingsModel:getTemperatureUnitTexts()
  return self.temperatureUnitTexts
end
function SettingsModel:getAreaUnitTexts()
  return self.areaUnitTexts
end
function SettingsModel:getRadioModeTexts()
  return self.radioModeTexts
end
function SettingsModel:getResolutionScaleTexts()
  return self.resolutionScaleTexts
end
function SettingsModel:getResolutionScale3dTexts()
  return self.resolutionScale3dTexts
end
function SettingsModel.makeDefaultReaderFunction(v0)
  return function(v0)
    return v1:getValue(v0)
  end
end
function SettingsModel.makeDefaultWriterFunction(v0)
  return function(v0, v1)
    v2:setValue(v1, v0)
  end
end
function SettingsModel:addDirectSetting(gameSettingsKey, noRestartRequired)
  self:addSetting(gameSettingsKey, self.defaultReaderFunction, self.defaultWriterFunction, noRestartRequired)
end
function SettingsModel:addConsoleResolutionSetting()
  self:addSetting(SettingsModel.SETTING.CONSOLE_RESOLUTION, function()
    local v1 = getDiscretePerformanceSetting()
    local self, v1 = SettingsModel.getConsoleResolutionStateFromMode(...)
    return self
  end, function(self)
    v1:setConsolePerformanceSetting()
    setScreenMode(self - 1)
  end)
end
function SettingsModel:addConsoleRenderQualitySetting()
  self:addSetting(SettingsModel.SETTING.CONSOLE_RENDER_QUALITY, function()
    local v1 = getDiscretePerformanceSetting()
    local self, v1 = SettingsModel.getConsoleResolutionStateFromMode(...)
    return v1
  end, function(self)
    v1:setConsolePerformanceSetting()
  end)
end
function SettingsModel:setConsolePerformanceSetting()
  local renderQuality = self:getValue(SettingsModel.SETTING.CONSOLE_RENDER_QUALITY)
  local resolution = self:getValue(SettingsModel.SETTING.CONSOLE_RESOLUTION)
  local discreteSetting = SettingsModel.getModeFromResolutionState(resolution, renderQuality)
  setDiscretePerformanceSetting(discreteSetting)
end
function SettingsModel:addPerformanceClassSetting()
  self:addSetting(SettingsModel.SETTING.PERFORMANCE_CLASS, function()
    local v1 = getPerformanceClass()
    return Utils.getPerformanceClassIndex(...)
  end, function(self)
    local v1 = Utils.getPerformanceClassFromIndex(self)
    setPerformanceClass(v1)
    if g_currentMission ~= nil and g_currentMission.terrainRootNode ~= nil then
      local foliageViewCoeff = getFoliageViewDistanceCoeff()
      local discreteSetting, v4 = getTerrainLodBlendDynamicDistances(g_currentMission.terrainRootNode)
      setTerrainLodBlendDynamicDistances(g_currentMission.terrainRootNode, discreteSetting * foliageViewCoeff, v4 * foliageViewCoeff)
    end
    v4 = Utils.getPerformanceClassId()
    discreteSetting:setValue(SettingsModel.SETTING.LIGHTS_PROFILE, GameSettings.PERFORMANCE_CLASS_PRESETS[v4][SettingsModel.SETTING.LIGHTS_PROFILE])
    discreteSetting:setValue(SettingsModel.SETTING.MAX_MIRRORS, GameSettings.PERFORMANCE_CLASS_PRESETS[v4][SettingsModel.SETTING.MAX_MIRRORS])
    discreteSetting:setValue(SettingsModel.SETTING.REAL_BEACON_LIGHTS, GameSettings.PERFORMANCE_CLASS_PRESETS[v4][SettingsModel.SETTING.REAL_BEACON_LIGHTS])
  end)
end
function SettingsModel:addHDRPeakBrightnessSetting()
  self:addSetting(SettingsModel.SETTING.HDR_PEAK_BRIGHTNESS, function()
    local v1 = getBrightnessNits()
    return Utils.getValueIndex(v1, u0.hdrPeakBrightnessValues)
  end, function(self)
    setBrightnessNits(u0.hdrPeakBrightnessValues[self])
  end, true)
end
function SettingsModel:addMSAASetting()
  self:addSetting(SettingsModel.SETTING.MSAA, function()
    local v1 = getMSAA()
    return SettingsModel.getMSAAIndex(...)
  end, function(self)
    local v2 = SettingsModel.getMSAAFromIndex(self)
    setMSAA(...)
  end)
end
function SettingsModel:addPostProcessAntiAliasingSetting()
  self:addSetting(SettingsModel.SETTING.POST_PROCESS_AA, function()
    local v2 = getPostProcessAntiAliasing()
    return u0.postProcessAntiAliasingMapping[v2]
  end, function(self)
    local v2 = getPostProcessAntiAliasing()
    if v2 ~= u0.postProcessAntiAliasingMappingReverse[self] then
      setPostProcessAntiAliasing(u0.postProcessAntiAliasingMappingReverse[self])
    end
  end, true)
end
function SettingsModel:addDLSSSetting()
  self:addSetting(SettingsModel.SETTING.DLSS, function()
    local v2 = getDLSSQuality()
    return u0.dlssMapping[v2]
  end, function(self)
    local v2 = getDLSSQuality()
    if v2 ~= u0.dlssMappingReverse[self] then
      setDLSSQuality(u0.dlssMappingReverse[self])
    end
  end, true)
end
function SettingsModel:addFidelityFxSRSetting()
  self:addSetting(SettingsModel.SETTING.FIDELITYFX_SR, function()
    local v2 = getFidelityFxSRQuality()
    return u0.fidelityFxSRMapping[v2]
  end, function(self)
    local v2 = getFidelityFxSRQuality()
    if v2 ~= u0.fidelityFxSRMappingReverse[self] then
      setFidelityFxSRQuality(u0.fidelityFxSRMappingReverse[self])
    end
  end, true)
end
function SettingsModel:addFidelityFxSR20Setting()
  self:addSetting(SettingsModel.SETTING.FIDELITYFX_SR_20, function()
    local v2 = getFidelityFxSR20Quality()
    return u0.fidelityFxSR20Mapping[v2]
  end, function(self)
    local v2 = getFidelityFxSR20Quality()
    if v2 ~= u0.fidelityFxSR20MappingReverse[self] then
      setFidelityFxSR20Quality(u0.fidelityFxSR20MappingReverse[self])
    end
  end, true)
end
function SettingsModel:addValarSetting()
  self:addSetting(SettingsModel.SETTING.VALAR, function()
    local v2 = getValarQuality()
    return u0.valarMapping[v2]
  end, function(self)
    local v2 = getValarQuality()
    if v2 ~= u0.valarMappingReverse[self] then
      setValarQuality(u0.valarMappingReverse[self])
    end
  end, true)
end
function SettingsModel:addXeSSSetting()
  self:addSetting(SettingsModel.SETTING.XESS, function()
    local v2 = getXeSSQuality()
    return u0.xeSSMapping[v2]
  end, function(self)
    local v2 = getXeSSQuality()
    if v2 ~= u0.xeSSMappingReverse[self] then
      setXeSSQuality(u0.xeSSMappingReverse[self])
    end
  end, true)
end
function SettingsModel:addSharpnessSetting()
  self:addSetting(SettingsModel.SETTING.SHARPNESS, function()
    local self = getSharpness()
    local v1 = MathUtil.clamp(self, u0.minSharpness, u0.maxSharpness)
    v1 = MathUtil.round((v1 - u0.minSharpness) / u0.sharpnessStep + 1)
    return v1
  end, function(self)
    setSharpness(u0.minSharpness + u0.sharpnessStep * (self - 1))
  end, true)
end
function SettingsModel:addShadingRateQualitySetting()
  self:addSetting(SettingsModel.SETTING.SHADING_RATE_QUALITY, function()
    local v1 = getShadingRateQuality()
    return v1 + 1
  end, function(self)
    local v2 = math.max(self - 1, 0)
    setShadingRateQuality(...)
  end, true)
end
function SettingsModel:addShadowDistanceQualitySetting()
  self:addSetting(SettingsModel.SETTING.SHADOW_DISTANCE_QUALITY, function()
    local v1 = getShadowDistanceQuality()
    return v1 + 1
  end, function(self)
    local v2 = math.max(self - 1, 0)
    setShadowDistanceQuality(...)
  end, true)
end
function SettingsModel:addSSAOQualitySetting()
  self:addSetting(SettingsModel.SETTING.SSAO_QUALITY, function()
    local self = getSSAOQuality()
    return u0.ssaoSamplesToQualityIndex[self] or 1
  end, function(self)
    setSSAOQuality(u0.ssaoQualityValues[self])
  end, true)
end
function SettingsModel:addCloudQualitySetting()
  self:addSetting(SettingsModel.SETTING.CLOUD_QUALITY, function()
    local v1 = getCloudQuality()
    return math.max(v1, 1)
  end, function(self)
    setCloudQuality(self)
  end, true)
end
function SettingsModel:addTextureFilteringSetting()
  self:addSetting(SettingsModel.SETTING.TEXTURE_FILTERING, function()
    local v1 = getFilterTrilinear()
    local v2 = getFilterAnisotropy()
    return SettingsModel.getTextureFilteringIndex(...)
  end, function(self)
    local v1, v2 = SettingsModel.getTextureFilteringByIndex(self)
    setFilterTrilinear(v1)
    setFilterAnisotropy(v2)
  end, false)
end
function SettingsModel:addTextureResolutionSetting()
  self:addSetting(SettingsModel.SETTING.TEXTURE_RESOLUTION, function()
    local v1 = getTextureResolution()
    return SettingsModel.getTextureResolutionIndex(...)
  end, function(self)
    local v2 = SettingsModel.getTextureResolutionByIndex(self)
    setTextureResolution(...)
  end, false)
end
function SettingsModel:addShadowQualitySetting()
  self:addSetting(SettingsModel.SETTING.SHADOW_QUALITY, function()
    local v1 = getShadowQuality()
    local v2 = getHasShadowFocusBox()
    return SettingsModel.getShadowQualityIndex(...)
  end, function(self)
    local v2 = SettingsModel.getShadowQualityByIndex(self)
    setShadowQuality(...)
    v2 = SettingsModel.getHasShadowFocusBoxByIndex(self)
    setHasShadowFocusBox(...)
  end, false)
end
function SettingsModel:addShaderQualitySetting()
  self:addSetting(SettingsModel.SETTING.SHADER_QUALITY, function()
    local v1 = getShaderQuality()
    return SettingsModel.getShaderQualityIndex(...)
  end, function(self)
    local v2 = SettingsModel.getShaderQualityByIndex(self)
    setShaderQuality(...)
  end, false)
end
function SettingsModel:addShadowMapFilteringSetting()
  self:addSetting(SettingsModel.SETTING.SHADOW_MAP_FILTERING, function()
    local v1 = getShadowMapFilterSize()
    return SettingsModel.getShadowMapFilterIndex(...)
  end, function(self)
    local v2 = SettingsModel.getShadowMapFilterByIndex(self)
    setShadowMapFilterSize(...)
  end, false)
end
function SettingsModel:addShadowMaxLightsSetting()
  self:addSetting(SettingsModel.SETTING.MAX_LIGHTS, function()
    return getMaxNumShadowLights()
  end, function(self)
    setMaxNumShadowLights(self)
  end, true)
end
function SettingsModel:addTerrainQualitySetting()
  self:addSetting(SettingsModel.SETTING.TERRAIN_QUALITY, function()
    local v1 = getTerrainQuality()
    return SettingsModel.getTerrainQualityIndex(...)
  end, function(self)
    local v2 = SettingsModel.getTerrainQualityByIndex(self)
    setTerrainQuality(...)
  end, false)
end
function SettingsModel:addObjectDrawDistanceSetting()
  self:addSetting(SettingsModel.SETTING.OBJECT_DRAW_DISTANCE, function()
    local v1 = getViewDistanceCoeff()
    return Utils.getValueIndex(v1, u0.percentValues)
  end, function(self)
    setViewDistanceCoeff(u0.percentValues[self])
  end, true)
end
function SettingsModel:addFoliageDrawDistanceSetting()
  self:addSetting(SettingsModel.SETTING.FOLIAGE_DRAW_DISTANCE, function()
    local v1 = getFoliageViewDistanceCoeff()
    return Utils.getValueIndex(v1, u0.percentValues)
  end, function(self)
    setFoliageViewDistanceCoeff(u0.percentValues[self])
  end, true)
end
function SettingsModel:addFoliageShadowSetting()
  self:addSetting(SettingsModel.SETTING.FOLIAGE_SHADOW, function()
    return getAllowFoliageShadows()
  end, function(self)
    setAllowFoliageShadows(self)
  end, false)
end
function SettingsModel:addLODDistanceSetting()
  self:addSetting(SettingsModel.SETTING.LOD_DISTANCE, function()
    local v1 = getLODDistanceCoeff()
    return Utils.getValueIndex(v1, u0.percentValues)
  end, function(self)
    setLODDistanceCoeff(u0.percentValues[self])
  end, true)
end
function SettingsModel:addTerrainLODDistanceSetting()
  self:addSetting(SettingsModel.SETTING.TERRAIN_LOD_DISTANCE, function()
    local v1 = getTerrainLODDistanceCoeff()
    return Utils.getValueIndex(v1, u0.percentValues)
  end, function(self)
    setTerrainLODDistanceCoeff(u0.percentValues[self])
  end, true)
end
function SettingsModel:addVolumeMeshTessellationSetting()
  self:addSetting(SettingsModel.SETTING.VOLUME_MESH_TESSELLATION, function()
    local v1 = SettingsModel.getVolumeMeshTessellationCoeff()
    return Utils.getValueIndex(v1, u0.percentValues)
  end, function(self)
    SettingsModel.setVolumeMeshTessellationCoeff(u0.percentValues[self])
  end, true)
end
function SettingsModel:addMaxTireTracksSetting()
  self:addSetting(SettingsModel.SETTING.MAX_TIRE_TRACKS, function()
    local v1 = getTyreTracksSegmentsCoeff()
    return Utils.getValueIndex(v1, u0.tireTracksValues)
  end, function(self)
    setTyreTracksSegementsCoeff(u0.tireTracksValues[self])
  end, true)
end
function SettingsModel:addLightsProfileSetting()
  self:addSetting(SettingsModel.SETTING.LIGHTS_PROFILE, function()
    return self:getValue(SettingsModel.SETTING.LIGHTS_PROFILE)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.LIGHTS_PROFILE, self)
  end, true)
end
function SettingsModel:addRealBeaconLightsSetting()
  self:addSetting(SettingsModel.SETTING.REAL_BEACON_LIGHTS, function()
    return self:getValue(SettingsModel.SETTING.REAL_BEACON_LIGHTS)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.REAL_BEACON_LIGHTS, self)
  end, true)
end
function SettingsModel:addMaxMirrorsSetting()
  self:addSetting(SettingsModel.SETTING.MAX_MIRRORS, function()
    local v1 = v1:getValue(SettingsModel.SETTING.MAX_MIRRORS)
    return SettingsModel.getNumOfReflectionMapsIndex(...)
  end, function(self)
    local v4 = SettingsModel.getNumOfReflectionMapsByIndex(self)
    v1:setValue(...)
  end, true)
end
function SettingsModel:addLanguageSetting()
  self:addSetting(SettingsModel.SETTING.LANGUAGE, function()
    return g_settingsLanguageGUI + 1
  end, function(self)
    g_settingsLanguageGUI = self - 1
    setLanguage(g_availableLanguagesTable[self])
  end)
end
function SettingsModel:addMPLanguageSetting()
  self:addSetting(SettingsModel.SETTING.MP_LANGUAGE, function()
    local v1 = v1:getValue(SettingsModel.SETTING.MP_LANGUAGE)
    return v1 + 1
  end, function(self)
    v1:setValue(SettingsModel.SETTING.MP_LANGUAGE, self - 1)
  end, true)
end
function SettingsModel:addInputHelpModeSetting()
  self:addSetting(SettingsModel.SETTING.INPUT_HELP_MODE, function()
    return self:getValue(SettingsModel.SETTING.INPUT_HELP_MODE)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.INPUT_HELP_MODE, self)
  end, true)
end
function SettingsModel:addFrameLimitSetting()
  self:addSetting(SettingsModel.SETTING.FRAME_LIMIT, function()
    local v2 = v2:getValue(SettingsModel.SETTING.FRAME_LIMIT)
    return u0.frameLimitMapping[v2]
  end, function(self)
    v1:setValue(SettingsModel.SETTING.FRAME_LIMIT, u0.frameLimitMappingReverse[self])
  end, true)
end
function SettingsModel:addBrightnessSetting()
  self:addSetting(SettingsModel.SETTING.BRIGHTNESS, function()
    local self = getBrightness()
    local v1 = MathUtil.clamp(self, u0.minBrightness, u0.maxBrightness)
    v1 = MathUtil.round((v1 - u0.minBrightness) / u0.brightnessStep + 1)
    return v1
  end, function(self)
    local discreteSetting = MathUtil.clamp(u0.minBrightness + u0.brightnessStep * (self - 1), u0.minBrightness, u0.maxBrightness)
    setBrightness(...)
  end, true)
end
function SettingsModel:addVSyncSetting()
  self:addSetting(SettingsModel.SETTING.V_SYNC, function()
    local v1 = getVsync()
    return SettingsModel.getVSyncIndex(...)
  end, function(self)
    local v2 = SettingsModel.getVSyncByIndex(self)
    setVsync(...)
  end)
end
function SettingsModel:addFovYSetting()
  self:addSetting(SettingsModel.SETTING.FOV_Y, function()
    local v1 = v1:getValue(SettingsModel.SETTING.FOV_Y)
    local self = math.deg(...)
    local v5 = math.floor(self + 0.5)
    local v4 = math.max(v5, u0.minFovY)
    local discreteSetting = math.min(v4, u0.maxFovY)
    return u0.fovYToIndexMapping[discreteSetting]
  end, function(self)
    local v4 = math.rad(u0.indexToFovYMapping[self])
    v1:setValue(...)
  end, true)
end
function SettingsModel:addUIScaleSetting()
  self:addSetting(SettingsModel.SETTING.UI_SCALE, function()
    local v1 = v1:getValue(SettingsModel.SETTING.UI_SCALE)
    return Utils.getUIScaleIndex(...)
  end, function(self)
    local v4 = Utils.getUIScaleFromIndex(self)
    v1:setValue(...)
  end, true)
end
function SettingsModel:addResolutionScaleSetting()
  self:addSetting(SettingsModel.SETTING.RESOLUTION_SCALE, function()
    local v1 = getResolutionScaling()
    return SettingsModel.getScalingStateFromResolutionScaling(...)
  end, function(self)
    local v2 = SettingsModel.getScalingFromResolutionScalingState(self)
    setResolutionScaling(...)
  end)
end
function SettingsModel:addResolutionScale3dSetting()
  self:addSetting(SettingsModel.SETTING.RESOLUTION_SCALE_3D, function()
    local v1 = get3dResolutionScaling()
    return SettingsModel.getScalingStateFromResolutionScaling(...)
  end, function(self)
    local v2 = SettingsModel.getScalingFromResolutionScalingState(self)
    set3dResolutionScaling(...)
  end)
end
function SettingsModel:addCameraSensitivitySetting()
  self:addSetting(SettingsModel.SETTING.CAMERA_SENSITIVITY, function()
    local discreteSetting = discreteSetting:getValue(SettingsModel.SETTING.CAMERA_SENSITIVITY)
    return Utils.getStateFromValues(...)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.CAMERA_SENSITIVITY, u0.cameraSensitivityValues[self])
  end, true)
end
function SettingsModel:addVehicleArmSensitivitySetting()
  self:addSetting(SettingsModel.SETTING.VEHICLE_ARM_SENSITIVITY, function()
    local discreteSetting = discreteSetting:getValue(SettingsModel.SETTING.VEHICLE_ARM_SENSITIVITY)
    return Utils.getStateFromValues(...)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.VEHICLE_ARM_SENSITIVITY, u0.vehicleArmSensitivityValues[self])
  end, true)
end
function SettingsModel:addRealBeaconLightBrightnessSetting()
  self:addSetting(SettingsModel.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS, function()
    local discreteSetting = discreteSetting:getValue(SettingsModel.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS)
    return Utils.getStateFromValues(...)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS, u0.realBeaconLightBrightnessValues[self])
  end, true)
end
function SettingsModel:addActiveCameraSuspensionSetting()
  self:addSetting(SettingsModel.SETTING.ACTIVE_SUSPENSION_CAMERA, self.defaultReaderFunction, function(self)
    v1:setValue(SettingsModel.SETTING.ACTIVE_SUSPENSION_CAMERA, self)
    v1:publish(MessageType.SETTING_CHANGED[GameSettings.SETTING.ACTIVE_SUSPENSION_CAMERA], self)
  end, true)
end
function SettingsModel:addCamerCheckCollisionSetting()
  self:addSetting(SettingsModel.SETTING.CAMERA_CHECK_COLLISION, self.defaultReaderFunction, function(self)
    v1:setValue(SettingsModel.SETTING.CAMERA_CHECK_COLLISION, self)
    v1:publish(MessageType.SETTING_CHANGED[GameSettings.SETTING.CAMERA_CHECK_COLLISION], self)
  end, true)
end
function SettingsModel:addDirectionChangeModeSetting()
  self:addSetting(SettingsModel.SETTING.DIRECTION_CHANGE_MODE, self.defaultReaderFunction, function(self)
    v1:setValue(SettingsModel.SETTING.DIRECTION_CHANGE_MODE, self)
    v1:publish(MessageType.SETTING_CHANGED[GameSettings.SETTING.DIRECTION_CHANGE_MODE], self)
  end, true)
end
function SettingsModel:addGearShiftModeSetting()
  self:addSetting(SettingsModel.SETTING.GEAR_SHIFT_MODE, self.defaultReaderFunction, function(self)
    v1:setValue(SettingsModel.SETTING.GEAR_SHIFT_MODE, self)
    v1:publish(MessageType.SETTING_CHANGED[GameSettings.SETTING.GEAR_SHIFT_MODE], self)
  end, true)
end
function SettingsModel:addHudSpeedGaugeSetting()
  self:addSetting(SettingsModel.SETTING.HUD_SPEED_GAUGE, self.defaultReaderFunction, function(self)
    v1:setValue(SettingsModel.SETTING.HUD_SPEED_GAUGE, self)
    v1:publish(MessageType.SETTING_CHANGED[GameSettings.SETTING.HUD_SPEED_GAUGE], self)
  end, true)
end
function SettingsModel:addWoodHarvesterAutoCutSetting()
  self:addSetting(SettingsModel.SETTING.WOOD_HARVESTER_AUTO_CUT, self.defaultReaderFunction, function(self)
    v1:setValue(SettingsModel.SETTING.WOOD_HARVESTER_AUTO_CUT, self)
    v1:publish(MessageType.SETTING_CHANGED[GameSettings.SETTING.WOOD_HARVESTER_AUTO_CUT], self)
  end, true)
end
function SettingsModel:addMasterVolumeSetting()
  self:addSetting(SettingsModel.SETTING.VOLUME_MASTER, function()
    local v1 = v1:getValue(SettingsModel.SETTING.VOLUME_MASTER)
    return Utils.getMasterVolumeIndex(...)
  end, function(self)
    local v1 = Utils.getMasterVolumeFromIndex(self)
    v2:setMasterVolume(v1)
    v2:setValue(SettingsModel.SETTING.VOLUME_MASTER, v1)
  end, true)
end
function SettingsModel:addMusicVolumeSetting()
  self:addSetting(SettingsModel.SETTING.VOLUME_MUSIC, function()
    local v1 = v1:getValue(SettingsModel.SETTING.VOLUME_MUSIC)
    return Utils.getMasterVolumeIndex(...)
  end, function(self)
    local v1 = Utils.getMasterVolumeFromIndex(self)
    v2:setAudioGroupVolumeFactor(AudioGroup.MENU_MUSIC, v1)
    v2:setValue(SettingsModel.SETTING.VOLUME_MUSIC, v1)
  end, true)
end
function SettingsModel:addEnvironmentVolumeSetting()
  self:addSetting(SettingsModel.SETTING.VOLUME_ENVIRONMENT, function()
    local v1 = v1:getValue(SettingsModel.SETTING.VOLUME_ENVIRONMENT)
    return Utils.getMasterVolumeIndex(...)
  end, function(self)
    local v1 = Utils.getMasterVolumeFromIndex(self)
    v2:setValue(SettingsModel.SETTING.VOLUME_ENVIRONMENT, v1)
    v2:setAudioGroupVolumeFactor(AudioGroup.ENVIRONMENT, v1)
  end, true)
end
function SettingsModel:addVehicleVolumeSetting()
  self:addSetting(SettingsModel.SETTING.VOLUME_VEHICLE, function()
    local v1 = v1:getValue(SettingsModel.SETTING.VOLUME_VEHICLE)
    return Utils.getMasterVolumeIndex(...)
  end, function(self)
    local v1 = Utils.getMasterVolumeFromIndex(self)
    v2:setValue(SettingsModel.SETTING.VOLUME_VEHICLE, v1)
    v2:setAudioGroupVolumeFactor(AudioGroup.VEHICLE, v1)
  end, true)
end
function SettingsModel:addRadioVolumeSetting()
  self:addSetting(SettingsModel.SETTING.VOLUME_RADIO, function()
    local v1 = v1:getValue(SettingsModel.SETTING.VOLUME_RADIO)
    return Utils.getMasterVolumeIndex(...)
  end, function(self)
    local v1 = Utils.getMasterVolumeFromIndex(self)
    v2:setValue(SettingsModel.SETTING.VOLUME_RADIO, v1)
    v2:setAudioGroupVolumeFactor(AudioGroup.RADIO, v1)
  end, true)
end
function SettingsModel:addVoiceVolumeSetting()
  self:addSetting(SettingsModel.SETTING.VOLUME_VOICE, function()
    local v1 = VoiceChatUtil.getOutputVolume()
    return Utils.getMasterVolumeIndex(...)
  end, function(self)
    local v1 = Utils.getMasterVolumeFromIndex(self)
    v2:setValue(SettingsModel.SETTING.VOLUME_VOICE, v1)
    VoiceChatUtil.setOutputVolume(v1)
  end, true)
end
function SettingsModel:addVoiceInputVolumeSetting()
  self:addSetting(SettingsModel.SETTING.VOLUME_VOICE_INPUT, function()
    local v1 = VoiceChatUtil.getInputVolume()
    return Utils.getRecordingVolumeIndex(...)
  end, function(self)
    local v1 = Utils.getRecordingVolumeFromIndex(self)
    v2:setValue(SettingsModel.SETTING.VOLUME_VOICE_INPUT, v1)
    VoiceChatUtil.setInputVolume(v1)
  end, true)
end
function SettingsModel:addVoiceModeSetting()
  self:addSetting(SettingsModel.SETTING.VOICE_MODE, function()
    return VoiceChatUtil.getInputMode()
  end, function(self)
    v1:setValue(SettingsModel.SETTING.VOICE_MODE, self)
    VoiceChatUtil.setInputMode(self)
  end, true)
end
function SettingsModel:addVoiceInputSensitivitySetting()
  self:addSetting(SettingsModel.SETTING.VOICE_INPUT_SENSITIVITY, function()
    return self:getValue(SettingsModel.SETTING.VOICE_INPUT_SENSITIVITY)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.VOICE_INPUT_SENSITIVITY, self)
    if 1 < self then
    end
    VoiceChatUtil.setInputSensitivity(v1)
  end, true)
end
function SettingsModel:addVolumeGUISetting()
  self:addSetting(SettingsModel.SETTING.VOLUME_GUI, function()
    local v1 = v1:getValue(SettingsModel.SETTING.VOLUME_GUI)
    return Utils.getMasterVolumeIndex(...)
  end, function(self)
    local v1 = Utils.getMasterVolumeFromIndex(self)
    v2:setValue(SettingsModel.SETTING.VOLUME_GUI, v1)
    v2:setAudioGroupVolumeFactor(AudioGroup.GUI, v1)
  end, true)
end
function SettingsModel:addSteeringBackSpeedSetting()
  self:addSetting(SettingsModel.SETTING.STEERING_BACK_SPEED, function()
    local discreteSetting = discreteSetting:getValue(SettingsModel.SETTING.STEERING_BACK_SPEED)
    return Utils.getStateFromValues(...)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.STEERING_BACK_SPEED, u0.steeringBackSpeedValues[self])
  end, true)
end
function SettingsModel:addSteeringSensitivitySetting()
  self:addSetting(SettingsModel.SETTING.STEERING_SENSITIVITY, function()
    local discreteSetting = discreteSetting:getValue(SettingsModel.SETTING.STEERING_SENSITIVITY)
    return Utils.getStateFromValues(...)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.STEERING_SENSITIVITY, u0.steeringSensitivityValues[self])
  end, true)
end
function SettingsModel:addGyroscopeSteeringSetting()
  self:addSetting(SettingsModel.SETTING.GYROSCOPE_STEERING, function()
    return self:getValue(SettingsModel.SETTING.GYROSCOPE_STEERING)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.GYROSCOPE_STEERING, self)
  end, true)
end
function SettingsModel:addHintsSetting()
  self:addSetting(SettingsModel.SETTING.HINTS, function()
    return self:getValue(SettingsModel.SETTING.HINTS)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.HINTS, self)
  end, true)
end
function SettingsModel:addCameraTiltingSetting()
  self:addSetting(SettingsModel.SETTING.CAMERA_TILTING, function()
    return self:getValue(SettingsModel.SETTING.CAMERA_TILTING)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.CAMERA_TILTING, self)
  end, true)
end
function SettingsModel:addForceFeedbackSetting()
  self:addSetting(SettingsModel.SETTING.FORCE_FEEDBACK, function()
    local v1 = v1:getValue(SettingsModel.SETTING.FORCE_FEEDBACK)
    return Utils.getMasterVolumeIndex(...)
  end, function(self)
    local v4 = Utils.getMasterVolumeFromIndex(self)
    v1:setValue(...)
  end, true)
end
function SettingsModel:addCloudSyncMeteredConnectionSetting()
  self:addSetting(SettingsModel.SETTING.CLOUD_SYNC_ALLOW_METERED_CONNECTION, function()
    return self:getValue(SettingsModel.SETTING.CLOUD_SYNC_ALLOW_METERED_CONNECTION)
  end, function(self)
    v1:setValue(SettingsModel.SETTING.CLOUD_SYNC_ALLOW_METERED_CONNECTION, self)
  end, true)
end
function SettingsModel.getVSyncByIndex(index)
  if index == 1 then
    return false
  end
  return true
end
function SettingsModel.getVSyncIndex(vSync)
  if not vSync then
    return 1
  end
  return 2
end
function SettingsModel.getShadowQualityIndex(shadowQuality, hasShadowFocusBox)
  if shadowQuality == 1 then
    return 2
  end
  if shadowQuality == 2 and hasShadowFocusBox == false then
    return 3
  end
  if shadowQuality == 2 and hasShadowFocusBox == true then
    return 4
  end
  return 1
end
function SettingsModel.getShadowQualityByIndex(shadowIndex)
  if shadowIndex == 2 then
    return 1
  end
  if shadowIndex == 3 then
    return 2
  end
  if shadowIndex == 4 then
    return 2
  end
  return 0
end
function SettingsModel.getHasShadowFocusBoxByIndex(shadowIndex)
  if shadowIndex == 2 then
    return false
  end
  if shadowIndex == 3 then
    return false
  end
  if shadowIndex == 4 then
    return true
  end
  return false
end
function SettingsModel.getShaderQualityIndex(shaderQuality)
  if shaderQuality == 1 then
    return 2
  end
  if shaderQuality == 2 then
    return 3
  end
  if shaderQuality == 3 then
    return 4
  end
  return 1
end
function SettingsModel.getShaderQualityByIndex(shaderIndex)
  if shaderIndex == 2 then
    return 1
  end
  if shaderIndex == 3 then
    return 2
  end
  if shaderIndex == 4 then
    return 3
  end
  return 0
end
function SettingsModel.getShadowMapFilterIndex(shadowFilter)
  if shadowFilter == 16 then
    return 2
  end
  return 1
end
function SettingsModel.getShadowMapFilterByIndex(shadowFilterIndex)
  if shadowFilterIndex == 2 then
    return 16
  end
  return 4
end
function SettingsModel.getTerrainQualityIndex(terrainQuality)
  local v2 = math.max(terrainQuality + 1, 1)
  return math.min(v2, 4)
end
function SettingsModel.getTerrainQualityByIndex(terrainQualityIndex)
  local v2 = math.max(terrainQualityIndex - 1, 0)
  return math.min(v2, 3)
end
function SettingsModel.getTextureFilteringIndex(isTrilinear, anisoValue)
  if isTrilinear and anisoValue == 0 then
  end
  if isTrilinear and anisoValue == 1 then
  end
  if isTrilinear and anisoValue == 2 then
  end
  if isTrilinear and anisoValue == 4 then
  end
  if isTrilinear and anisoValue == 8 then
  end
  if isTrilinear and anisoValue == 16 then
  end
  return v2
end
function SettingsModel.getTextureFilteringByIndex(filteringIndex)
  if filteringIndex == 2 then
    return true, 0
  end
  if filteringIndex == 3 then
    return true, 1
  end
  if filteringIndex == 4 then
    return true, 2
  end
  if filteringIndex == 5 then
    return true, 4
  end
  if filteringIndex == 6 then
    return true, 8
  end
  if filteringIndex == 7 then
    return true, 16
  end
  return false, 0
end
function SettingsModel.getTextureResolutionIndex(textureResolution)
  if textureResolution == 0 then
    return 2
  end
  return 1
end
function SettingsModel.getTextureResolutionByIndex(textureResolutionIndex)
  if textureResolutionIndex == 2 then
    return 0
  end
  return 1
end
function SettingsModel.getMSAAIndex(msaa)
  if msaa == 2 then
  end
  if msaa == 4 then
  end
  if msaa == 8 then
  end
  return v1
end
function SettingsModel.getMSAAFromIndex(msaaIndex)
  if msaaIndex == 2 then
  end
  if msaaIndex == 3 then
  end
  if msaaIndex == 4 then
  end
  return v1
end
function SettingsModel.getNumOfReflectionMapsByIndex(index)
  return MathUtil.clamp(index - 1, 0, 7)
end
function SettingsModel.getNumOfReflectionMapsIndex(numOfReflectionMaps)
  local v2 = MathUtil.clamp(numOfReflectionMaps, 0, 7)
  return v2 + 1
end
function SettingsModel.getVolumeMeshTessellationCoeff()
  local v4 = getVolumeMeshTessellationCoeff()
  return 0.5 + 2 - v4
end
function SettingsModel.setVolumeMeshTessellationCoeff(coeff)
  setVolumeMeshTessellationCoeff(2 + 0.5 - coeff)
end
function SettingsModel.getConsoleResolutionStateFromMode(mode)
  if mode == "1080p+" then
    return 1, 2
  end
  if mode == "1440p" then
    return 2, 1
  end
  if mode == "2160p" then
  end
  return v1, v2
end
function SettingsModel.getModeFromResolutionState(displayResolution, renderQuality)
  if displayResolution == 1 then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000001 -> L15
    return "1080p+"
  else
    if displayResolution == 2 then
      return "1440p"
    end
    if displayResolution == 3 then
      return "2160p"
    end
  end
  return "1080p"
end
function SettingsModel.getScalingFromResolutionScalingState(state)
  return 0.4 + 0.1 * state
end
function SettingsModel.getScalingStateFromResolutionScaling(scaling)
  return MathUtil.round((scaling - 0.4) * 10)
end
