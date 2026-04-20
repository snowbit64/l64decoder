-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GameSettings = {}
local GameSettings_mt = Class(GameSettings)
GameSettings.SETTING = {DEFAULT_SERVER_PORT = "defaultServerPort", MAX_NUM_MIRRORS = "maxNumMirrors", LIGHTS_PROFILE = "lightsProfile", REAL_BEACON_LIGHTS = "realBeaconLights", MP_LANGUAGE = "mpLanguage", CAMERA_BOBBING = "cameraBobbing", INPUT_HELP_MODE = "inputHelpMode", GAMEPAD_ENABLED_SET_BY_USER = "gamepadEnabledSetByUser", IS_GAMEPAD_ENABLED = "isGamepadEnabled", HEAD_TRACKING_ENABLED_SET_BY_USER = "headTrackingEnabledSetByUser", IS_HEAD_TRACKING_ENABLED = "isHeadTrackingEnabled", FORCE_FEEDBACK = "forceFeedback", IS_SOUND_PLAYER_STREAM_ACCESS_ALLOWED = "isSoundPlayerStreamAccessAllowed", MOTOR_STOP_TIMER_DURATION = "motorStopTimerDuration", HORSE_ABANDON_TIMER_DURATION = "horseAbandonTimerDuration", FOV_Y = "fovY", UI_SCALE = "uiScale", ONLINE_PRESENCE_NAME = "onlinePresenceName", LAST_PLAYER_STYLE_MALE = "lastPlayerStyleMale", IS_TRAIN_TABBABLE = "isTrainTabbable", RADIO_VEHICLE_ONLY = "radioVehicleOnly", RADIO_IS_ACTIVE = "radioIsActive", USE_COLORBLIND_MODE = "useColorblindMode", EASY_ARM_CONTROL = "easyArmControl", USE_MILES = "useMiles", USE_FAHRENHEIT = "useFahrenheit", USE_ACRE = "useAcre", SHOW_TRIGGER_MARKER = "showTriggerMarker", SHOW_HELP_TRIGGER = "showHelpTrigger", SHOW_FIELD_INFO = "showFieldInfo", RESET_CAMERA = "resetCamera", USE_WORLD_CAMERA = "useWorldCamera", ACTIVE_SUSPENSION_CAMERA = "activeSuspensionCamera", CAMERA_CHECK_COLLISION = "cameraCheckCollision", INVERT_Y_LOOK = "invertYLook", DIRECTION_CHANGE_MODE = "directionChangeMode", GEAR_SHIFT_MODE = "gearShiftMode", HUD_SPEED_GAUGE = "hudSpeedGauge", WOOD_HARVESTER_AUTO_CUT = "woodHarvesterAutoCut", SHOW_HELP_ICONS = "showHelpIcons", SHOW_HELP_MENU = "showHelpMenu", VOLUME_RADIO = "radioVolume", VOLUME_VEHICLE = "vehicleVolume", VOLUME_ENVIRONMENT = "environmentVolume", VOLUME_GUI = "volumeGUI", VOLUME_VOICE = "volumeVoice", VOLUME_VOICE_INPUT = "volumeVoiceInput", VOICE_MODE = "voiceMode", VOICE_INPUT_SENSITIVITY = "voiceInputThreshold", CAMERA_SENSITIVITY = "cameraSensitivity", VEHICLE_ARM_SENSITIVITY = "vehicleArmSensitivity", REAL_BEACON_LIGHT_BRIGHTNESS = "realBeaconLightBrightness", STEERING_BACK_SPEED = "steeringBackSpeed", STEERING_SENSITIVITY = "steeringSensitivity", INGAME_MAP_STATE = "ingameMapState", INGAME_MAP_FILTER = "ingameMapFilter", MONEY_UNIT = "moneyUnit", VOLUME_MASTER = "masterVolume", VOLUME_MUSIC = "musicVolume", JOYSTICK_VIBRATION_ENABLED = "joystickVibrationEnabled", GYROSCOPE_STEERING = "gyroscopeSteering", CAMERA_TILTING = "cameraTilting", HINTS = "hints", SHOW_ALL_MODS = "showAllMods", SHOWN_FREEMODE_WARNING = "shownFreemodeWarning", SHOW_MULTIPLAYER_NAMES = "showMultiplayerNames", INGAME_MAP_GROWTH_FILTER = "ingameMapGrowthFilter", INGAME_MAP_SOIL_FILTER = "ingameMapSoilFilter", INGAME_MAP_FRUIT_FILTER = "ingameMapFruitFilter", FRAME_LIMIT = "frameLimit", CLOUD_SYNC_ALLOW_METERED_CONNECTION = "cloudSyncAllowMeteredConnection"}
GameSettings.PERFORMANCE_CLASS_PRESETS = {{lightsProfile = GS_PROFILE_LOW, maxNumMirrors = 0, realBeaconLights = false}, {lightsProfile = GS_PROFILE_MEDIUM, maxNumMirrors = 0, realBeaconLights = false}, {lightsProfile = GS_PROFILE_HIGH, maxNumMirrors = 3, realBeaconLights = false}, {lightsProfile = GS_PROFILE_VERY_HIGH, maxNumMirrors = 4, realBeaconLights = false}}
function GameSettings.new(customMt, messageCenter)
  if customMt == nil then
  end
  setmetatable({}, customMt)
  if GS_IS_CONSOLE_VERSION then
    if GS_PLATFORM_PLAYSTATION then
      local v4 = getNeoMode()
      if v4 then
        -- goto L42  (LOP_JUMP +8)
      end
    elseif GS_PLATFORM_XBOX then
    else
    end
  end
  v2.frameLimitValues = Platform.frameLimits
  v2[GameSettings.SETTING.FRAME_LIMIT] = Platform.defaultFrameLimit
  v2[GameSettings.SETTING.DEFAULT_SERVER_PORT] = 10823
  v2[GameSettings.SETTING.MAX_NUM_MIRRORS] = v3
  v2[GameSettings.SETTING.LIGHTS_PROFILE] = GS_PROFILE_VERY_HIGH
  v2[GameSettings.SETTING.REAL_BEACON_LIGHTS] = false
  local v5 = getSystemLanguage()
  v2[GameSettings.SETTING.MP_LANGUAGE] = v5
  v2[GameSettings.SETTING.CAMERA_BOBBING] = true
  v2[GameSettings.SETTING.INPUT_HELP_MODE] = GS_INPUT_HELP_MODE_AUTO
  v2[GameSettings.SETTING.IS_SOUND_PLAYER_STREAM_ACCESS_ALLOWED] = false
  v2[GameSettings.SETTING.GAMEPAD_ENABLED_SET_BY_USER] = false
  v2[GameSettings.SETTING.IS_GAMEPAD_ENABLED] = true
  v2[GameSettings.SETTING.JOYSTICK_VIBRATION_ENABLED] = false
  v2[GameSettings.SETTING.GYROSCOPE_STEERING] = Platform.gameplay.defaultGyroscopeSteering
  v2[GameSettings.SETTING.HEAD_TRACKING_ENABLED_SET_BY_USER] = false
  v2[GameSettings.SETTING.IS_HEAD_TRACKING_ENABLED] = true
  v2[GameSettings.SETTING.FORCE_FEEDBACK] = 0.5
  v2[GameSettings.SETTING.MOTOR_STOP_TIMER_DURATION] = 30000
  v2[GameSettings.SETTING.HORSE_ABANDON_TIMER_DURATION] = 30000
  v2[GameSettings.SETTING.FOV_Y] = g_fovYDefault
  v2[GameSettings.SETTING.UI_SCALE] = 1
  v2[GameSettings.SETTING.HINTS] = true
  v2[GameSettings.SETTING.CAMERA_TILTING] = Platform.gameplay.defaultCameraTilt
  v2[GameSettings.SETTING.SHOW_ALL_MODS] = true
  v5 = getUserName()
  v5 = v5:trim()
  v2[GameSettings.SETTING.ONLINE_PRESENCE_NAME] = v5
  v2[GameSettings.SETTING.LAST_PLAYER_STYLE_MALE] = true
  v2[GameSettings.SETTING.INVERT_Y_LOOK] = false
  v2[GameSettings.SETTING.VOLUME_MASTER] = 1
  v2[GameSettings.SETTING.VOLUME_MUSIC] = 0.45
  v2[GameSettings.SETTING.VOLUME_VEHICLE] = 1
  v2[GameSettings.SETTING.VOLUME_ENVIRONMENT] = 0.7
  v2[GameSettings.SETTING.VOLUME_RADIO] = 0.6
  v2[GameSettings.SETTING.VOLUME_GUI] = 0.5
  v2[GameSettings.SETTING.VOLUME_VOICE] = 1
  v2[GameSettings.SETTING.VOLUME_VOICE_INPUT] = 1
  v2[GameSettings.SETTING.VOICE_MODE] = VoiceChatUtil.MODE.VOICE_ACTIVITY
  v2[GameSettings.SETTING.VOICE_INPUT_SENSITIVITY] = 1
  v2[GameSettings.SETTING.RADIO_IS_ACTIVE] = false
  v2[GameSettings.SETTING.RADIO_VEHICLE_ONLY] = true
  v2[GameSettings.SETTING.SHOW_HELP_ICONS] = true
  v2[GameSettings.SETTING.USE_COLORBLIND_MODE] = false
  v2[GameSettings.SETTING.EASY_ARM_CONTROL] = true
  v2[GameSettings.SETTING.MONEY_UNIT] = GS_MONEY_EURO
  if GS_IS_MOBILE_VERSION then
    v2[GameSettings.SETTING.MONEY_UNIT] = GS_MONEY_DOLLAR
  end
  if Platform.hasCloudSyncSetting then
    v2[GameSettings.SETTING.CLOUD_SYNC_ALLOW_METERED_CONNECTION] = false
  end
  v2[GameSettings.SETTING.USE_MILES] = false
  v2[GameSettings.SETTING.USE_FAHRENHEIT] = false
  v2[GameSettings.SETTING.USE_ACRE] = false
  v2[GameSettings.SETTING.SHOW_TRIGGER_MARKER] = true
  v2[GameSettings.SETTING.SHOW_HELP_TRIGGER] = true
  v2[GameSettings.SETTING.SHOW_FIELD_INFO] = true
  v2[GameSettings.SETTING.RESET_CAMERA] = false
  v2[GameSettings.SETTING.USE_WORLD_CAMERA] = true
  v2[GameSettings.SETTING.ACTIVE_SUSPENSION_CAMERA] = false
  v2[GameSettings.SETTING.CAMERA_CHECK_COLLISION] = true
  v2[GameSettings.SETTING.SHOW_HELP_MENU] = true
  v2[GameSettings.SETTING.IS_TRAIN_TABBABLE] = true
  v2[GameSettings.SETTING.CAMERA_SENSITIVITY] = 1
  v2[GameSettings.SETTING.VEHICLE_ARM_SENSITIVITY] = 1
  v2[GameSettings.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS] = 1
  v2[GameSettings.SETTING.STEERING_BACK_SPEED] = 5
  if GS_IS_MOBILE_VERSION then
  else
  end
  v2[v4] = v5
  v2[GameSettings.SETTING.DIRECTION_CHANGE_MODE] = VehicleMotor.DIRECTION_CHANGE_MODE_AUTOMATIC
  v2[GameSettings.SETTING.GEAR_SHIFT_MODE] = VehicleMotor.SHIFT_MODE_AUTOMATIC
  v2[GameSettings.SETTING.HUD_SPEED_GAUGE] = SpeedMeterDisplay.GAUGE_MODE_RPM
  v2[GameSettings.SETTING.WOOD_HARVESTER_AUTO_CUT] = true
  v2[GameSettings.SETTING.INGAME_MAP_FILTER] = 0
  v5 = bitNOT(0)
  v2[GameSettings.SETTING.INGAME_MAP_SOIL_FILTER] = v5
  v5 = bitNOT(0)
  v2[GameSettings.SETTING.INGAME_MAP_GROWTH_FILTER] = v5
  v2[GameSettings.SETTING.INGAME_MAP_FRUIT_FILTER] = ""
  if GS_IS_MOBILE_VERSION then
    -- if IngameMap.STATE_OFF then goto L647 end
  end
  v2[v4] = IngameMap.STATE_MINIMAP_ROUND
  v2[GameSettings.SETTING.SHOWN_FREEMODE_WARNING] = false
  v2[GameSettings.SETTING.SHOW_MULTIPLAYER_NAMES] = true
  if GS_IS_CONSOLE_VERSION then
    v2[GameSettings.SETTING.IS_GAMEPAD_ENABLED] = true
    v2[GameSettings.SETTING.IS_HEAD_TRACKING_ENABLED] = false
    v2[GameSettings.SETTING.INPUT_HELP_MODE] = GS_INPUT_HELP_MODE_GAMEPAD
  end
  if GS_PLATFORM_GGP then
    v2[GameSettings.SETTING.IS_GAMEPAD_ENABLED] = true
    v4 = getIsKeyboardAvailable()
    if not v4 then
      v2[GameSettings.SETTING.INPUT_HELP_MODE] = GS_INPUT_HELP_MODE_GAMEPAD
    end
  end
  {}[GameSettings.SETTING.VOLUME_MASTER] = "Setting 'Master Volume': %.3f"
  {}[GameSettings.SETTING.VOLUME_MUSIC] = "Setting 'Music Volume': %.3f"
  {}[GameSettings.SETTING.VOLUME_VEHICLE] = "Setting 'Vehicle Volume': %.3f"
  {}[GameSettings.SETTING.VOLUME_ENVIRONMENT] = "Setting 'Environment Volume': %.3f"
  {}[GameSettings.SETTING.VOLUME_RADIO] = "Setting 'Radio Volume': %.3f"
  {}[GameSettings.SETTING.VOLUME_GUI] = "Setting 'GUI Volume': %.3f"
  {}[GameSettings.SETTING.SHOW_TRIGGER_MARKER] = "Setting 'Show Trigger Marker': %s"
  {}[GameSettings.SETTING.SHOW_HELP_TRIGGER] = "Setting 'Show Help Trigger': %s"
  {}[GameSettings.SETTING.IS_TRAIN_TABBABLE] = "Setting 'Is Train Tabbable': %s"
  {}[GameSettings.SETTING.RADIO_IS_ACTIVE] = "Setting 'Radio Active': %s"
  {}[GameSettings.SETTING.RADIO_VEHICLE_ONLY] = "Setting 'Radio Vehicle Only': %s"
  {}[GameSettings.SETTING.SHOW_HELP_ICONS] = "Setting 'Show Help Icons': %s"
  {}[GameSettings.SETTING.USE_COLORBLIND_MODE] = "Setting 'Use Colorblind Mode': %s"
  {}[GameSettings.SETTING.EASY_ARM_CONTROL] = "Setting 'Easy Arm Control': %s"
  {}[GameSettings.SETTING.INVERT_Y_LOOK] = "Setting 'Invert Y-Look': %s"
  {}[GameSettings.SETTING.SHOW_FIELD_INFO] = "Setting 'Show Field-Info': %s"
  v2.printedSettingsChanges = {}
  return v2
end
function GameSettings:getTableValue(name, index)
  if name == nil then
    print("Error: GameSetting table name missing or nil!")
    return false
  end
  if index == nil then
    print("Error: GameSetting table index missing or nil!")
    return false
  end
  return self[name][index]
end
function GameSettings:setTableValue(name, index, value, doSave)
  if name == nil then
    print("Error: GameSetting table name missing or nil!")
    return false
  end
  if index == nil then
    print("Error: GameSetting table index missing or nil!")
    return false
  end
  if value == nil then
    print("Error: GameSetting table value missing or nil for index '" .. index .. "'!")
    return false
  end
  if self[name] == nil then
    print("Error: GameSetting table '" .. name .. "' not found!")
    return false
  end
  self[name][index] = value
  if doSave then
    self:saveToXMLFile(g_savegameXML)
  end
  return true
end
function GameSettings:getValue(name)
  if name == nil then
    Logging.error("GameSetting %s missing or nil!", name)
    printCallstack()
    return false
  end
  return self[name]
end
function GameSettings:setValue(name, value, doSave)
  if name == nil then
    Logging.error("GameSetting %s missing or nil!", name)
    printCallstack()
    return false
  end
  if value == nil then
    Logging.error("GameSetting value missing or nil for setting '%s'!", name)
    printCallstack()
    return false
  end
  if self[name] == nil then
    Logging.error("GameSetting '" .. name .. "' not found!")
    return false
  end
  self[name] = value
  if self.printedSettingsChanges[name] ~= nil then
    local v7 = string.format(self.printedSettingsChanges[name], value)
    print("  " .. v7)
  end
  if self.notifyOnChange then
    v5:publish(MessageType.SETTING_CHANGED[name], value)
  end
  if doSave then
    self:saveToXMLFile(g_savegameXML)
  end
  return true
end
function GameSettings:loadFromXML(xmlFile)
  if xmlFile ~= nil then
    if GS_PLATFORM_PC then
      local v7 = getXMLInt(xmlFile, "gameSettings.defaultMultiplayerPort")
      local v6 = Utils.getNoNil(v7, 10823)
      local v5 = MathUtil.clamp(v6, 0, 65535)
      self:setValue(...)
      local v4 = Utils.getPerformanceClassId()
      local v8 = getXMLInt(xmlFile, "gameSettings.maxNumMirrors")
      v7 = Utils.getNoNil(v8, GameSettings.PERFORMANCE_CLASS_PRESETS[v4].maxNumMirrors)
      v6 = MathUtil.clamp(v7, 0, 7)
      self:setValue(...)
      v8 = getXMLInt(xmlFile, "gameSettings.lightsProfile")
      v7 = Utils.getNoNil(v8, GameSettings.PERFORMANCE_CLASS_PRESETS[v4].lightsProfile)
      v6 = MathUtil.clamp(v7, GS_PROFILE_LOW, GS_PROFILE_VERY_HIGH)
      self:setValue(...)
      local v3 = getXMLBool(xmlFile, "gameSettings.isHeadTrackingEnabled")
      if v3 ~= nil then
        self:setValue(GameSettings.SETTING.HEAD_TRACKING_ENABLED_SET_BY_USER, true)
        self:setValue(GameSettings.SETTING.IS_HEAD_TRACKING_ENABLED, v3)
      end
      v8 = getXMLBool(xmlFile, "gameSettings.soundPlayer#allowStreams")
      v7 = Utils.getNoNil(v8, self[GameSettings.SETTING.IS_SOUND_PLAYER_STREAM_ACCESS_ALLOWED])
      self:setValue(...)
      v4 = getXMLInt(xmlFile, "gameSettings.motorStopTimerDuration")
      if v4 ~= nil then
        self:setValue(GameSettings.SETTING.MOTOR_STOP_TIMER_DURATION, v4 * 1000)
      end
      v5 = getXMLInt(xmlFile, "gameSettings.horseAbandonTimerDuration")
      if v5 ~= nil then
        self:setValue(GameSettings.SETTING.HORSE_ABANDON_TIMER_DURATION, v5 * 1000)
      end
      v6 = getXMLBool(xmlFile, "gameSettings.isGamepadEnabled")
      if v6 ~= nil then
        self:setValue(GameSettings.SETTING.GAMEPAD_ENABLED_SET_BY_USER, true)
        self:setValue(GameSettings.SETTING.IS_GAMEPAD_ENABLED, v6)
      end
    end
    v6 = getXMLBool(xmlFile, "gameSettings.realBeaconLights")
    v5 = Utils.getNoNil(v6, self[GameSettings.SETTING.REAL_BEACON_LIGHTS])
    self:setValue(...)
    if not GS_PLATFORM_PC then
      -- if not GS_PLATFORM_GGP then goto L307 end
    end
    local v2 = getXMLInt(xmlFile, "gameSettings.mpLanguage")
    if v2 ~= nil and 0 <= v2 then
      v4 = getNumOfLanguages()
      if v2 <= v4 - 1 then
        self:setValue(GameSettings.SETTING.MP_LANGUAGE, v2)
      end
    end
    v3 = getXMLInt(xmlFile, "gameSettings.inputHelpMode")
    if v3 ~= nil then
      if v3 ~= GS_INPUT_HELP_MODE_AUTO and v3 ~= GS_INPUT_HELP_MODE_GAMEPAD then
        -- if v3 ~= GS_INPUT_HELP_MODE_KEYBOARD then goto L303 end
      end
      self:setValue(GameSettings.SETTING.INPUT_HELP_MODE, v3)
      v4 = getGamepadEnabled()
      if not v4 and v3 == GS_INPUT_HELP_MODE_GAMEPAD then
        self:setValue(GameSettings.SETTING.INPUT_HELP_MODE, GS_INPUT_HELP_MODE_AUTO)
        -- goto L307  (LOP_JUMP +4)
        print("Warning: Invalid input help mode")
      end
    end
    v2 = getXMLFloat(xmlFile, "gameSettings.fovY")
    if v2 ~= nil then
      v7 = math.rad(v2)
      v6 = MathUtil.clamp(v7, g_fovYMin, g_fovYMax)
      self:setValue(...)
    end
    v3 = getXMLFloat(xmlFile, "gameSettings.uiScale")
    if v3 ~= nil then
      v7 = MathUtil.clamp(v3, 0.5, 1.5)
      self:setValue(...)
    end
    v4 = getXMLBool(xmlFile, "gameSettings.showAllMods")
    if v4 ~= nil then
      self:setValue(GameSettings.SETTING.SHOW_ALL_MODS, v4)
    end
    if not GS_IS_CONSOLE_VERSION and not GS_PLATFORM_GGP then
      v6 = getXMLString(xmlFile, "gameSettings.onlinePresenceName")
      v5 = Utils.getNoNil(v6, self[GameSettings.SETTING.ONLINE_PRESENCE_NAME])
      if v5 == "" then
        v6 = getUserName()
        v6 = v6:trim()
      end
      self:setValue(GameSettings.SETTING.ONLINE_PRESENCE_NAME, v5)
    end
    local v9 = getXMLBool(xmlFile, "gameSettings.player#lastPlayerStyleMale")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.LAST_PLAYER_STYLE_MALE])
    self:setValue(...)
    self:setTableValueFromXML("joinGame", "password", getXMLString, xmlFile, "gameSettings.joinGame#password")
    self:setTableValueFromXML("joinGame", "hasNoPassword", getXMLBool, xmlFile, "gameSettings.joinGame#hasNoPassword")
    self:setTableValueFromXML("joinGame", "isNotEmpty", getXMLBool, xmlFile, "gameSettings.joinGame#isNotEmpty")
    self:setTableValueFromXML("joinGame", "onlyWithAllModsAvailable", getXMLBool, xmlFile, "gameSettings.joinGame#onlyWithAllModsAvailable")
    self:setTableValueFromXML("joinGame", "serverName", getXMLString, xmlFile, "gameSettings.joinGame#serverName")
    self:setTableValueFromXML("joinGame", "mapId", getXMLString, xmlFile, "gameSettings.joinGame#mapId")
    self:setTableValueFromXML("joinGame", "language", getXMLInt, xmlFile, "gameSettings.joinGame#language")
    self:setTableValueFromXML("joinGame", "capacity", getXMLInt, xmlFile, "gameSettings.joinGame#capacity")
    self:setTableValueFromXML("joinGame", "allowCrossPlay", getXMLBool, xmlFile, "gameSettings.joinGame#allowCrossPlay")
    self:setTableValueFromXML("createGame", "password", getXMLString, xmlFile, "gameSettings.createGame#password")
    if not GS_IS_CONSOLE_VERSION then
      self:setTableValueFromXML("createGame", "serverName", getXMLString, xmlFile, "gameSettings.createGame#name")
    end
    self:setTableValueFromXML("createGame", "port", getXMLInt, xmlFile, "gameSettings.createGame#port")
    self:setTableValueFromXML("createGame", "useUpnp", getXMLBool, xmlFile, "gameSettings.createGame#useUpnp")
    self:setTableValueFromXML("createGame", "autoAccept", getXMLBool, xmlFile, "gameSettings.createGame#autoAccept")
    self:setTableValueFromXML("createGame", "autoSave", getXMLBool, xmlFile, "gameSettings.createGame#autoSave")
    self:setTableValueFromXML("createGame", "allowOnlyFriends", getXMLBool, xmlFile, "gameSettings.createGame#allowOnlyFriends")
    self:setTableValueFromXML("createGame", "allowCrossPlay", getXMLBool, xmlFile, "gameSettings.createGame#allowCrossPlay")
    self:setTableValueFromXML("createGame", "capacity", getXMLInt, xmlFile, "gameSettings.createGame#capacity")
    self:setTableValueFromXML("createGame", "bandwidth", getXMLInt, xmlFile, "gameSettings.createGame#bandwidth")
    self:setTableValueFromXML("createGame", "allowCrossPlay", getXMLBool, xmlFile, "gameSettings.createGame#allowCrossPlay")
    v9 = getXMLBool(xmlFile, "gameSettings.isTrainTabbable")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.IS_TRAIN_TABBABLE])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.radioVehicleOnly")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.RADIO_VEHICLE_ONLY])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.radioIsActive")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.RADIO_IS_ACTIVE])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.useColorblindMode")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.USE_COLORBLIND_MODE])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.easyArmControl")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.EASY_ARM_CONTROL])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.showTriggerMarker")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.SHOW_TRIGGER_MARKER])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.showHelpTrigger")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.SHOW_HELP_TRIGGER])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.showFieldInfo")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.SHOW_FIELD_INFO])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.resetCamera")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.RESET_CAMERA])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.activeSuspensionCamera")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.ACTIVE_SUSPENSION_CAMERA])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.cameraCheckCollision")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.CAMERA_CHECK_COLLISION])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.useWorldCamera")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.USE_WORLD_CAMERA])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.invertYLook")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.INVERT_Y_LOOK])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.showHelpIcons")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.SHOW_HELP_ICONS])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.showHelpMenu")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.SHOW_HELP_MENU])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.volume.radio")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.VOLUME_RADIO])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.volume.vehicle")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.VOLUME_VEHICLE])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.volume.environment")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.VOLUME_ENVIRONMENT])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.volume.gui")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.VOLUME_GUI])
    self:setValue(...)
    v8 = getMasterVolume()
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.volume.music")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.VOLUME_MUSIC])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.volume.voice")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.VOLUME_VOICE])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.volume.voiceInput")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.VOLUME_VOICE_INPUT])
    self:setValue(...)
    v9 = getXMLInt(xmlFile, "gameSettings.voice#mode")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.VOICE_MODE])
    self:setValue(...)
    v9 = getXMLInt(xmlFile, "gameSettings.voice#inputSensitivity")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.VOICE_INPUT_SENSITIVITY])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.forceFeedback")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.FORCE_FEEDBACK])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.shownFreemodeWarning")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.SHOWN_FREEMODE_WARNING])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.showMultiplayerNames")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.SHOW_MULTIPLAYER_NAMES])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.cameraSensitivity")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.CAMERA_SENSITIVITY])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.vehicleArmSensitivity")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.VEHICLE_ARM_SENSITIVITY])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.realBeaconLightBrightness")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.steeringBackSpeed")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.STEERING_BACK_SPEED])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.steeringSensitivity")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.STEERING_SENSITIVITY])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.directionChangeMode")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.DIRECTION_CHANGE_MODE])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.gearShiftMode")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.GEAR_SHIFT_MODE])
    self:setValue(...)
    v9 = getXMLFloat(xmlFile, "gameSettings.hudSpeedGauge")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.HUD_SPEED_GAUGE])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.woodHarvesterAutoCut")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.WOOD_HARVESTER_AUTO_CUT])
    self:setValue(...)
    v9 = getXMLInt(xmlFile, "gameSettings.ingameMapState")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.INGAME_MAP_STATE])
    self:setValue(...)
    v9 = getXMLInt(xmlFile, "gameSettings.ingameMapFilters")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.INGAME_MAP_FILTER])
    self:setValue(...)
    v9 = getXMLInt(xmlFile, "gameSettings.ingameMapGrowthFilter")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.INGAME_MAP_GROWTH_FILTER])
    self:setValue(...)
    v9 = getXMLInt(xmlFile, "gameSettings.ingameMapSoilFilter")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.INGAME_MAP_SOIL_FILTER])
    self:setValue(...)
    v9 = getXMLString(xmlFile, "gameSettings.ingameMapFruitFilter")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.INGAME_MAP_FRUIT_FILTER])
    self:setValue(...)
    v9 = getXMLInt(xmlFile, "gameSettings.units.money")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.MONEY_UNIT])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.units.miles")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.USE_MILES])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.units.fahrenheit")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.USE_FAHRENHEIT])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.units.acre")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.USE_ACRE])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.gyroscopeSteering")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.GYROSCOPE_STEERING])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.hints")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.HINTS])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.cameraTilting")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.CAMERA_TILTING])
    self:setValue(...)
    v9 = getXMLBool(xmlFile, "gameSettings.cameraBobbing")
    v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.CAMERA_BOBBING])
    self:setValue(...)
    if Platform.hasCloudSyncSetting then
      v9 = getXMLBool(xmlFile, "gameSettings.cloudSyncAllowMeteredConnection")
      v8 = Utils.getNoNil(v9, self[GameSettings.SETTING.CLOUD_SYNC_ALLOW_METERED_CONNECTION])
      self:setValue(...)
    end
    if Platform.hasAdjustableFrameLimit then
      v5 = getXMLInt(xmlFile, "gameSettings.frameLimit")
      if not v5 then
      end
      for v10, v11 in ipairs(self.frameLimitValues) do
        if not (v11 == v5) then
          continue
        end
        break
      end
      if not v6 then
      end
      self:setValue(GameSettings.SETTING.FRAME_LIMIT, v5)
    end
    v5 = XMLFile.wrap(xmlFile)
    v6 = g_licensePlateManager.loadLicensePlateDataFromXML(v5, "gameSettings.lastCreatedLicensePlate", true)
    self.lastCreatedLicensePlate = v6
    v6 = v5:hasProperty("gameSettings.lastPlayerStyle")
    if v6 then
      v6 = PlayerStyle.new()
      self.lastPlayerStyle = v6
      v6:loadFromXMLFile(v5, "gameSettings.lastPlayerStyle")
    end
    v5:delete()
    self.notifyOnChange = true
  end
end
function GameSettings:setTableValueFromXML(tableName, index, xmlFunc, xmlFile, xmlPath)
  local value = xmlFunc(xmlFile, xmlPath)
  if value ~= nil then
    self:setTableValue(tableName, index, value)
  end
end
function GameSettings:saveToXMLFile(xmlFile)
  if xmlFile ~= nil then
    setXMLBool(xmlFile, "gameSettings.invertYLook", self[GameSettings.SETTING.INVERT_Y_LOOK])
    setXMLBool(xmlFile, "gameSettings.isHeadTrackingEnabled", self[GameSettings.SETTING.IS_HEAD_TRACKING_ENABLED])
    setXMLFloat(xmlFile, "gameSettings.forceFeedback", self[GameSettings.SETTING.FORCE_FEEDBACK])
    setXMLBool(xmlFile, "gameSettings.isGamepadEnabled", self[GameSettings.SETTING.IS_GAMEPAD_ENABLED])
    setXMLFloat(xmlFile, "gameSettings.cameraSensitivity", self[GameSettings.SETTING.CAMERA_SENSITIVITY])
    setXMLFloat(xmlFile, "gameSettings.vehicleArmSensitivity", self[GameSettings.SETTING.VEHICLE_ARM_SENSITIVITY])
    setXMLFloat(xmlFile, "gameSettings.realBeaconLightBrightness", self[GameSettings.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS])
    setXMLFloat(xmlFile, "gameSettings.steeringBackSpeed", self[GameSettings.SETTING.STEERING_BACK_SPEED])
    setXMLFloat(xmlFile, "gameSettings.steeringSensitivity", self[GameSettings.SETTING.STEERING_SENSITIVITY])
    setXMLInt(xmlFile, "gameSettings.inputHelpMode", self[GameSettings.SETTING.INPUT_HELP_MODE])
    setXMLBool(xmlFile, "gameSettings.easyArmControl", self[GameSettings.SETTING.EASY_ARM_CONTROL])
    setXMLBool(xmlFile, "gameSettings.gyroscopeSteering", self[GameSettings.SETTING.GYROSCOPE_STEERING])
    setXMLBool(xmlFile, "gameSettings.hints", self[GameSettings.SETTING.HINTS])
    setXMLBool(xmlFile, "gameSettings.cameraTilting", self[GameSettings.SETTING.CAMERA_TILTING])
    if Platform.hasAdjustableFrameLimit then
      setXMLInt(xmlFile, "gameSettings.frameLimit", self[GameSettings.SETTING.FRAME_LIMIT])
    end
    if Platform.hasCloudSyncSetting then
      setXMLBool(xmlFile, "gameSettings.cloudSyncAllowMeteredConnection", self[GameSettings.SETTING.CLOUD_SYNC_ALLOW_METERED_CONNECTION])
    end
    setXMLBool(xmlFile, "gameSettings.showAllMods", self[GameSettings.SETTING.SHOW_ALL_MODS])
    setXMLString(xmlFile, "gameSettings.onlinePresenceName", self[GameSettings.SETTING.ONLINE_PRESENCE_NAME])
    setXMLBool(xmlFile, "gameSettings.player#lastPlayerStyleMale", self[GameSettings.SETTING.LAST_PLAYER_STYLE_MALE])
    setXMLInt(xmlFile, "gameSettings.mpLanguage", self[GameSettings.SETTING.MP_LANGUAGE])
    self:setXMLValue(xmlFile, setXMLString, "gameSettings.createGame#password", self.createGame.password)
    self:setXMLValue(xmlFile, setXMLString, "gameSettings.createGame#name", self.createGame.serverName)
    self:setXMLValue(xmlFile, setXMLInt, "gameSettings.createGame#port", self.createGame.port)
    self:setXMLValue(xmlFile, setXMLBool, "gameSettings.createGame#useUpnp", self.createGame.useUpnp)
    self:setXMLValue(xmlFile, setXMLBool, "gameSettings.createGame#autoAccept", self.createGame.autoAccept)
    self:setXMLValue(xmlFile, setXMLBool, "gameSettings.createGame#autoSave", self.createGame.autoSave)
    self:setXMLValue(xmlFile, setXMLBool, "gameSettings.createGame#allowOnlyFriends", self.createGame.allowOnlyFriends)
    self:setXMLValue(xmlFile, setXMLBool, "gameSettings.createGame#allowCrossPlay", self.createGame.allowCrossPlay)
    self:setXMLValue(xmlFile, setXMLInt, "gameSettings.createGame#capacity", self.createGame.capacity)
    self:setXMLValue(xmlFile, setXMLInt, "gameSettings.createGame#bandwidth", self.createGame.bandwidth)
    self:setXMLValue(xmlFile, setXMLBool, "gameSettings.createGame#allowCrossPlay", self.createGame.allowCrossPlay)
    self:setXMLValue(xmlFile, setXMLString, "gameSettings.joinGame#password", self.joinGame.password)
    self:setXMLValue(xmlFile, setXMLBool, "gameSettings.joinGame#hasNoPassword", self.joinGame.hasNoPassword)
    self:setXMLValue(xmlFile, setXMLBool, "gameSettings.joinGame#isNotEmpty", self.joinGame.isNotEmpty)
    self:setXMLValue(xmlFile, setXMLBool, "gameSettings.joinGame#onlyWithAllModsAvailable", self.joinGame.onlyWithAllModsAvailable)
    self:setXMLValue(xmlFile, setXMLString, "gameSettings.joinGame#serverName", self.joinGame.serverName)
    self:setXMLValue(xmlFile, setXMLString, "gameSettings.joinGame#mapId", self.joinGame.mapId)
    self:setXMLValue(xmlFile, setXMLInt, "gameSettings.joinGame#language", self.joinGame.language)
    self:setXMLValue(xmlFile, setXMLInt, "gameSettings.joinGame#capacity", self.joinGame.capacity)
    self:setXMLValue(xmlFile, setXMLBool, "gameSettings.joinGame#allowCrossPlay", self.joinGame.allowCrossPlay)
    setXMLFloat(xmlFile, "gameSettings.volume.music", self[GameSettings.SETTING.VOLUME_MUSIC])
    setXMLFloat(xmlFile, "gameSettings.volume.vehicle", self[GameSettings.SETTING.VOLUME_VEHICLE])
    setXMLFloat(xmlFile, "gameSettings.volume.environment", self[GameSettings.SETTING.VOLUME_ENVIRONMENT])
    setXMLFloat(xmlFile, "gameSettings.volume.radio", self[GameSettings.SETTING.VOLUME_RADIO])
    setXMLFloat(xmlFile, "gameSettings.volume.gui", self[GameSettings.SETTING.VOLUME_GUI])
    setXMLFloat(xmlFile, "gameSettings.volume.voice", self[GameSettings.SETTING.VOLUME_VOICE])
    setXMLFloat(xmlFile, "gameSettings.volume.voiceInput", self[GameSettings.SETTING.VOLUME_VOICE_INPUT])
    setXMLBool(xmlFile, "gameSettings.soundPlayer#allowStreams", self[GameSettings.SETTING.IS_SOUND_PLAYER_STREAM_ACCESS_ALLOWED])
    setXMLBool(xmlFile, "gameSettings.radioIsActive", self[GameSettings.SETTING.RADIO_IS_ACTIVE])
    setXMLBool(xmlFile, "gameSettings.radioVehicleOnly", self[GameSettings.SETTING.RADIO_VEHICLE_ONLY])
    setXMLInt(xmlFile, "gameSettings.voice#mode", self[GameSettings.SETTING.VOICE_MODE])
    setXMLInt(xmlFile, "gameSettings.voice#inputSensitivity", self[GameSettings.SETTING.VOICE_INPUT_SENSITIVITY])
    setXMLInt(xmlFile, "gameSettings.units.money", self[GameSettings.SETTING.MONEY_UNIT])
    setXMLBool(xmlFile, "gameSettings.units.miles", self[GameSettings.SETTING.USE_MILES])
    setXMLBool(xmlFile, "gameSettings.units.fahrenheit", self[GameSettings.SETTING.USE_FAHRENHEIT])
    setXMLBool(xmlFile, "gameSettings.units.acre", self[GameSettings.SETTING.USE_ACRE])
    setXMLBool(xmlFile, "gameSettings.isTrainTabbable", self[GameSettings.SETTING.IS_TRAIN_TABBABLE])
    setXMLBool(xmlFile, "gameSettings.showTriggerMarker", self[GameSettings.SETTING.SHOW_TRIGGER_MARKER])
    setXMLBool(xmlFile, "gameSettings.showHelpTrigger", self[GameSettings.SETTING.SHOW_HELP_TRIGGER])
    setXMLBool(xmlFile, "gameSettings.showFieldInfo", self[GameSettings.SETTING.SHOW_FIELD_INFO])
    setXMLBool(xmlFile, "gameSettings.showHelpIcons", self[GameSettings.SETTING.SHOW_HELP_ICONS])
    setXMLBool(xmlFile, "gameSettings.showHelpMenu", self[GameSettings.SETTING.SHOW_HELP_MENU])
    setXMLBool(xmlFile, "gameSettings.resetCamera", self[GameSettings.SETTING.RESET_CAMERA])
    setXMLBool(xmlFile, "gameSettings.activeSuspensionCamera", self[GameSettings.SETTING.ACTIVE_SUSPENSION_CAMERA])
    setXMLBool(xmlFile, "gameSettings.cameraCheckCollision", self[GameSettings.SETTING.CAMERA_CHECK_COLLISION])
    setXMLBool(xmlFile, "gameSettings.useWorldCamera", self[GameSettings.SETTING.USE_WORLD_CAMERA])
    setXMLInt(xmlFile, "gameSettings.ingameMapState", self[GameSettings.SETTING.INGAME_MAP_STATE])
    setXMLInt(xmlFile, "gameSettings.ingameMapFilters", self[GameSettings.SETTING.INGAME_MAP_FILTER])
    setXMLInt(xmlFile, "gameSettings.directionChangeMode", self[GameSettings.SETTING.DIRECTION_CHANGE_MODE])
    setXMLInt(xmlFile, "gameSettings.gearShiftMode", self[GameSettings.SETTING.GEAR_SHIFT_MODE])
    setXMLInt(xmlFile, "gameSettings.hudSpeedGauge", self[GameSettings.SETTING.HUD_SPEED_GAUGE])
    setXMLBool(xmlFile, "gameSettings.woodHarvesterAutoCut", self[GameSettings.SETTING.WOOD_HARVESTER_AUTO_CUT])
    setXMLBool(xmlFile, "gameSettings.shownFreemodeWarning", self[GameSettings.SETTING.SHOWN_FREEMODE_WARNING])
    setXMLBool(xmlFile, "gameSettings.showMultiplayerNames", self[GameSettings.SETTING.SHOW_MULTIPLAYER_NAMES])
    setXMLInt(xmlFile, "gameSettings.ingameMapGrowthFilter", self[GameSettings.SETTING.INGAME_MAP_GROWTH_FILTER])
    setXMLInt(xmlFile, "gameSettings.ingameMapSoilFilter", self[GameSettings.SETTING.INGAME_MAP_SOIL_FILTER])
    setXMLString(xmlFile, "gameSettings.ingameMapFruitFilter", self[GameSettings.SETTING.INGAME_MAP_FRUIT_FILTER])
    setXMLBool(xmlFile, "gameSettings.useColorblindMode", self[GameSettings.SETTING.USE_COLORBLIND_MODE])
    setXMLInt(xmlFile, "gameSettings.maxNumMirrors", self[GameSettings.SETTING.MAX_NUM_MIRRORS])
    setXMLInt(xmlFile, "gameSettings.lightsProfile", self[GameSettings.SETTING.LIGHTS_PROFILE])
    local v5 = math.deg(self[GameSettings.SETTING.FOV_Y])
    setXMLFloat(...)
    setXMLFloat(xmlFile, "gameSettings.uiScale", self[GameSettings.SETTING.UI_SCALE])
    setXMLBool(xmlFile, "gameSettings.realBeaconLights", self[GameSettings.SETTING.REAL_BEACON_LIGHTS])
    setXMLBool(xmlFile, "gameSettings.cameraBobbing", self[GameSettings.SETTING.CAMERA_BOBBING])
    local wrapped = XMLFile.wrap(xmlFile)
    g_licensePlateManager.saveLicensePlateDataToXML(wrapped, "gameSettings.lastCreatedLicensePlate", self.lastCreatedLicensePlate, true)
    if self.lastPlayerStyle ~= nil then
      v3:saveToXMLFile(wrapped, "gameSettings.lastPlayerStyle")
    end
    wrapped:delete()
    saveXMLFile(xmlFile)
    syncProfileFiles()
  end
end
function GameSettings.setXMLValue(customMt, messageCenter, v2, v3, v4)
  if v4 ~= nil then
    v2(messageCenter, v3, v4)
  end
end
function GameSettings:setLastPlayerStyle(playerStyle)
  if self.lastPlayerStyle == nil then
    local v2 = PlayerStyle.new()
    self.lastPlayerStyle = v2
  end
  v2:copyMinimalFrom(playerStyle)
end
