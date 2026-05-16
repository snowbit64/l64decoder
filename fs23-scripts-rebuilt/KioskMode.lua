-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

KioskMode = {GAMEPAD_NAME = "JoyWarrior Gamepad 32", BIT_TO_BUTTON_ID = {7, 6, 5, 4, 3, 2, 1, 0, nil, nil, nil, nil, nil, nil, 8, 9, 10}}
function KioskMode.EMPTY_FUNC()
end
local KioskMode_mt = Class(KioskMode)
function KioskMode.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  local v8 = getUserProfileAppPath()
  v1.configPaths = {"dataS/" .. "kioskMode/", "data/" .. "kioskMode/", v8 .. "kioskMode/"}
  v1.profileSelectorGamepadId = nil
  v1.currentProfile = nil
  v1.profiles = {}
  v1.maskToProfile = {}
  v1.settings = {}
  v1.nextLanguageRestartTimer = nil
  v1.nextLanguageIndex = nil
  v1.maps = {}
  return v1
end
function KioskMode.generateBitmasks(v0)
  function(v0, v1, v2)
    if v2 == v0 then
      u0(v1, v0)
      return
    end
    v1[v2] = 0
    u1(v0, v1, v2 + 1)
    v1[v2] = 1
    u1(v0, v1, v2 + 1)
  end(12, {0}, 2)
  {0}[1] = 1
  function(v0, v1, v2)
    if v2 == v0 then
      u0(v1, v0)
      return
    end
    v1[v2] = 0
    u1(v0, v1, v2 + 1)
    v1[v2] = 1
    u1(v0, v1, v2 + 1)
  end(12, {0}, 2)
  for v10, v11 in ipairs({}) do
    -- TODO: structure LOP_FORNPREP (pc 60, target 105)
    if (1 - 1) % 5 == 0 then
    end
    if v15 ~= 18 then
      if KioskMode.BIT_TO_BUTTON_ID[v15] ~= nil then
        local v18 = Utils.isBitSet(v11, v15)
        if v18 then
        else
        end
        -- goto L104  (LOP_JUMP +15)
      end
      v18 = math.random()
      if 0.5 < v18 then
      else
      end
    else
    end
    -- TODO: structure LOP_FORNLOOP (pc 104, target 61)
    local v14 = string.format("%s", v12)
    log(...)
  end
end
function KioskMode:delete()
  self:disposeVideo()
end
function KioskMode:load()
  for v5, v6 in ipairs(self.configPaths) do
    local v7 = self:loadFromPath(v6)
    if not v7 then
      continue
    end
  end
  if not v1 then
    return false
  end
  InGameMenu.makeIsAIEnabledPredicate = KioskMode.inj_inGameMenu_makeIsAIEnabledPredicate
  InGameMenu.makeIsPricesEnabledPredicate = KioskMode.inj_inGameMenu_makeIsPricesEnabledPredicate
  InGameMenu.makeIsAnimalsEnabledPredicate = KioskMode.inj_inGameMenu_makeIsAnimalsEnabledPredicate
  InGameMenu.makeIsContractsEnabledPredicate = KioskMode.inj_inGameMenu_makeIsContractsEnabledPredicate
  InGameMenu.makeIsGarageEnabledPredicate = KioskMode.inj_inGameMenu_makeIsGarageEnabledPredicate
  InGameMenu.makeIsControlsSettingsEnabledPredicate = KioskMode.inj_inGameMenu_makeIsControlsSettingsEnabledPredicate
  InGameMenu.makeIsHelpEnabledPredicate = KioskMode.inj_inGameMenu_makeIsHelpEnabledPredicate
  v3 = Utils.overwrittenFunction(InGameMenuGameSettingsFrame.initializeButtons, KioskMode.inj_inGameMenuGameSettingsFrame_initializeButtons)
  InGameMenuGameSettingsFrame.initializeButtons = v3
  v3 = Utils.overwrittenFunction(MapManager.addMapItem, KioskMode.inj_mapManager_addMapItem)
  MapManager.addMapItem = v3
  function loadMods()
    haveModsChanged()
  end
  return true
end
function KioskMode:loadFromPath(path)
  local v3 = fileExists(path .. "kioskMode.xml")
  if not v3 then
    return false
  end
  v3 = XMLFile.load("KioskMode", v2, nil)
  if v3 == nil then
    return false
  end
  local v5 = v3:getString("kioskMode.defaultProfile.configFile", "")
  local v4 = Utils.getFilename(v5, path)
  v5 = fileExists(v4)
  if not v5 then
    Logging.xmlWarning(v3, "KioskMode:loadFromPath - default config file '%s' not found", v4)
    return false
  end
  self.defaultConfigFile = v4
  v3:iterate("kioskMode.profiles.profile", function(self, path)
    local v2 = v2:getString(path .. "#name", "")
    local v4 = v4:getString(path .. ".configFile", "")
    local v3 = Utils.getFilename(v4, u1)
    v4 = fileExists(v3)
    if not v4 then
      Logging.xmlWarning(u0, "KioskMode:loadFromPath - config file '%s' for profile '%s' not found", v3, v2)
      return false
    end
    local v6 = v6:getString(path .. "#bits", "")
    local v7 = v6:len()
    if v7 ~= 23 then
      Logging.xmlWarning(u0, "KioskMode:loadFromPath - invalid bitsformat (##### ##### ##### #####) for profile '%s'", v2)
      return false
    end
    local v11 = v6:len()
    -- TODO: structure LOP_FORNPREP (pc 63, target 103)
    v11 = v6:sub(1, 1)
    if v11 ~= " " then
      local v12 = tonumber(v11)
      if v12 == 1 then
        if KioskMode.BIT_TO_BUTTON_ID[v5] ~= nil then
          v12 = Utils.setBit(v4, v5)
        elseif v5 == 18 then
          Logging.xmlWarning(u0, "KioskMode:loadFromPath - Bit %d cannot be used. Please replace it with 0 for profile '%s'", v5, v2)
        end
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 102, target 64)
    if u2.maskToProfile[v4] ~= nil then
      Logging.xmlWarning(u0, "KioskMode:loadFromPath - %s mask already used for profile '%s'", v2, u2.maskToProfile[v4].name)
      return false
    end
    u2.maskToProfile[v4] = {id = #u2.profiles + 1, name = v2, mask = v4, configFile = v3}
    table.insert(u2.profiles, {id = #u2.profiles + 1, name = v2, mask = v4, configFile = v3})
  end)
  v3:delete()
  if #self.profiles == 0 then
    return false
  end
  self.configFileName = v2
  table.insert(g_dlcsDirectories, {path = path .. "pdlc/", isLoaded = true})
  return true
end
function KioskMode:loadInputBindings()
  if self.configFileName ~= nil then
    local xmlFileObj = XMLFile.load("KioskMode Inputs", self.configFileName)
    local xmlFile = xmlFileObj:getHandle()
    v3:loadActionsFromXMLPath(xmlFile, "kioskMode.input.actions", g_i18n, nil)
    v3:loadActionBindingsFromXMLPath(xmlFile, "kioskMode.input.bindings", true, nil, true, true)
    xmlFileObj:delete()
  end
end
function KioskMode.initializedGUIClasses(v0)
  local v2 = Utils.appendedFunction(MainScreen.onOpen, KioskMode.inj_mainScreen_onOpen)
  MainScreen.onOpen = v2
  v2 = Utils.overwrittenFunction(MainScreen.update, KioskMode.inj_mainScreen_update)
  MainScreen.update = v2
  v2 = Utils.appendedFunction(MainScreen.onClose, KioskMode.inj_mainScreen_onClose)
  MainScreen.onClose = v2
  v2 = Utils.overwrittenFunction(MainScreen.inputEvent, KioskMode.inj_mainScreen_inputEvent)
  MainScreen.inputEvent = v2
  MainScreen.updateStoreButtons = KioskMode.EMPTY_FUNC
  MPLoadingScreen.openWardrobe = KioskMode.EMPTY_FUNC
  v2 = Utils.appendedFunction(InGameMenuMobileSettingsFrame.onFrameOpen, KioskMode.inj_inGameMenuMobileSettingsFrame_onFrameOpen)
  InGameMenuMobileSettingsFrame.onFrameOpen = v2
  InGameMenu.onButtonSaveGame = KioskMode.EMPTY_FUNC
  v2 = Utils.appendedFunction(CareerScreen.updateButtons, KioskMode.inj_careerScreen_updateButtons)
  CareerScreen.updateButtons = v2
  v2 = Utils.appendedFunction(CareerScreen.update, KioskMode.inj_careerScreen_update)
  CareerScreen.update = v2
  v2 = Utils.appendedFunction(ModSelectionScreen.update, KioskMode.inj_modSelectionScreenn_update)
  ModSelectionScreen.update = v2
  v2 = Utils.appendedFunction(DifficultyScreen.update, KioskMode.inj_difficultyScreen_update)
  DifficultyScreen.update = v2
  v2 = Utils.appendedFunction(MapSelectionScreen.update, KioskMode.inj_mapSelectionScreen_update)
  MapSelectionScreen.update = v2
  v2 = Utils.appendedFunction(InGameMenuMapFrame.updateInputGlyphs, KioskMode.inj_inGameMenuMapFrame_updateInputGlyphs)
  InGameMenuMapFrame.updateInputGlyphs = v2
end
function KioskMode:init()
  self:initProfileSelectorGamepad()
  local v2 = Utils.appendedFunction(HUD.createDisplayComponents, KioskMode.inj_hud_createDisplayComponents)
  HUD.createDisplayComponents = v2
  v2 = Utils.overwrittenFunction(Mission00.getIsTourSupported, KioskMode.inj_mission00_getIsTourSupported)
  Mission00.getIsTourSupported = v2
  v2 = Utils.appendedFunction(Mission00.onStartMission, KioskMode.inj_mission00_onStartMission)
  Mission00.onStartMission = v2
  v2 = Utils.appendedFunction(SpecializationManager.addSpecialization, KioskMode.inj_specializationManager_addSpecialization)
  SpecializationManager.addSpecialization = v2
  v2 = Utils.overwrittenFunction(FSBaseMission.onToggleMenu, KioskMode.inj_fsBaseMission_onToggleMenu)
  FSBaseMission.onToggleMenu = v2
  v2 = Utils.overwrittenFunction(FSBaseMission.onToggleStore, KioskMode.inj_fsBaseMission_onToggleStore)
  FSBaseMission.onToggleStore = v2
  v2 = Utils.overwrittenFunction(FSBaseMission.onToggleCharacterCreation, KioskMode.inj_fsBaseMission_onToggleCharacterCreation)
  FSBaseMission.onToggleCharacterCreation = v2
  v2 = Utils.overwrittenFunction(FSBaseMission.onToggleConstructionScreen, KioskMode.inj_fsBaseMission_onToggleConstructionScreen)
  FSBaseMission.onToggleConstructionScreen = v2
  v2 = Utils.appendedFunction(FSBaseMission.registerActionEvents, KioskMode.inj_fsBaseMission_registerActionEvents)
  FSBaseMission.registerActionEvents = v2
  v2 = Utils.appendedFunction(FSBaseMission.getIsAutoSaveSupported, KioskMode.inj_fsBaseMission_getIsAutoSaveSupported)
  FSBaseMission.getIsAutoSaveSupported = v2
  v2 = Utils.appendedFunction(FSBaseMission.update, KioskMode.inj_fsBaseMission_update)
  FSBaseMission.update = v2
  v2 = Utils.overwrittenFunction(AnimalLoadingTrigger.load, KioskMode.inj_animalLoadingTrigger_load)
  AnimalLoadingTrigger.load = v2
  v2 = Utils.overwrittenFunction(VehicleSellingPoint.load, KioskMode.inj_vehicleSellingPoint_load)
  VehicleSellingPoint.load = v2
  v2 = Utils.overwrittenFunction(ShopTrigger.new, KioskMode.inj_shopTrigger_new)
  ShopTrigger.new = v2
  v2 = Utils.overwrittenFunction(LoanTrigger.new, KioskMode.inj_loanTrigger_new)
  LoanTrigger.new = v2
  v2 = Utils.overwrittenFunction(Environment.load, KioskMode.inj_environment_load)
  Environment.load = v2
  v2 = Utils.overwrittenFunction(StoreManager.getDefaultStoreItemsFilename, KioskMode.inj_storeManager_getDefaultStoreItemsFilename)
  StoreManager.getDefaultStoreItemsFilename = v2
  v2 = Utils.overwrittenFunction(ProductionPointActivatable.run, KioskMode.inj_productionPointActivatable_run)
  ProductionPointActivatable.run = v2
  v2 = Utils.appendedFunction(Farm.setInitialEconomy, KioskMode.inj_Farm_setInitialEconomy)
  Farm.setInitialEconomy = v2
  MissionManager.update = function(self)
  end
  SavegameController.getCanDeleteGame = function()
    return false
  end
  function getNumOfNotifications()
    return 0
  end
  function areAchievementsAvailable()
    return false
  end
  self:loadProfileConfig(self.defaultConfigFile)
end
function KioskMode:initProfileSelectorGamepad()
  local numOfGamepads = getNumOfGamepads()
  -- TODO: structure LOP_FORNPREP (pc 6, target 25)
  local v5 = getGamepadName(0)
  if v5 == KioskMode.GAMEPAD_NAME then
    Logging.info("KioskMode:initProfileSelectorGamepad - Found Gaming Station with gamepad '%s'", v5)
    self.profileSelectorGamepadId = 0
  end
  -- TODO: structure LOP_FORNLOOP (pc 24, target 7)
  if self.profileSelectorGamepadId ~= nil then
    InputDevice.getIsDeviceSupported = function(self, numOfGamepads)
      local v2 = u0(self, numOfGamepads)
      if not v2 then
        return false
      end
      if numOfGamepads == KioskMode.GAMEPAD_NAME then
        return false
      end
      return true
    end
  end
  if self.profileSelectorGamepadId == nil then
  end
  return true
end
function KioskMode:loadProfileConfig(configFileName)
  Logging.info("KioskMode:loadProfileConfig - Loading profile config '%s'", configFileName)
  local xmlFile = XMLFile.load("KioskMode Profile", configFileName)
  local path = Utils.getDirectory(configFileName)
  local v5 = xmlFile:getBool("config.canSelectSavegame", false)
  self.settings.canSelectSavegame = v5
  v5 = xmlFile:getBool("config.canSelectMods", false)
  self.settings.canSelectMods = v5
  if not self.settings.canSelectSavegame then
    local savegamePath = xmlFile:getString("config.savegame")
    if savegamePath ~= nil then
      v5 = Utils.getFilename(savegamePath, path)
    end
    self:setSavegame(savegamePath)
    self.settings.savegame = savegamePath
  end
  savegamePath = xmlFile:getString("config.logo")
  if savegamePath ~= nil then
    local v6 = Utils.getFilename(savegamePath, path)
    self.settings.logoFilename = v6
    v6 = xmlFile:getInt("config.logo#width", 600)
    self.settings.logoWidth = v6
    v6 = xmlFile:getInt("config.logo#height", 150)
    self.settings.logoHeight = v6
  end
  if savegamePath == nil then
  end
  v5.logoEnabled = true
  v6 = xmlFile:getBool("config.tourEnabled", false)
  self.settings.tourEnabled = v6
  v6 = xmlFile:getBool("config.aiEnabled", true)
  self.settings.aiEnabled = v6
  v6 = xmlFile:getBool("config.mainMenuEnabled", false)
  self.settings.mainMenuEnabled = v6
  v6 = xmlFile:getBool("config.watermarkEnabled", false)
  self.settings.watermarkEnabled = v6
  v6 = xmlFile:getBool("config.ingameMenuEnabled", true)
  self.settings.ingameMenuEnabled = v6
  v6 = xmlFile:getBool("config.reloadEnabled", false)
  self.settings.reloadEnabled = v6
  v6 = xmlFile:getBool("config.shopsEnabled.animals", false)
  self.settings.animalShopEnabled = v6
  v6 = xmlFile:getBool("config.shopsEnabled.vehicles", false)
  self.settings.vehicleShopEnabled = v6
  v6 = xmlFile:getBool("config.shopsEnabled.farmlands", false)
  self.settings.farmlandShopEnabled = v6
  v6 = xmlFile:getBool("config.shopsEnabled.placeables", false)
  self.settings.placeableShopEnabled = v6
  v6 = xmlFile:getBool("config.shopsEnabled.wardrobe", false)
  self.settings.wardrobeShopEnabled = v6
  v6 = xmlFile:getBool("config.productionEnabled", true)
  self.settings.productionEnabled = v6
  v6 = xmlFile:getBool("config.helpLineTriggerEnabled", true)
  self.settings.helpLineTriggerEnabled = v6
  v6 = xmlFile:getBool("config.extendedDrivingHelp", false)
  self.settings.extendedDrivingHelp = v6
  v6 = xmlFile:getBool("config.alwaysDay", false)
  self.settings.alwaysDay = v6
  v6 = xmlFile:getInt("config.startMoney", 1000000)
  self.settings.startMoney = v6
  v6 = xmlFile:getBool("config.skipMainMenu", false)
  self.settings.skipMainMenu = v6
  v6 = xmlFile:getInt("config.startVehicleIndex", nil)
  self.settings.startVehicleIndex = v6
  if KioskMode.TIMESCALE_BACKUP == nil then
    KioskMode.TIMESCALE_BACKUP = Platform.gameplay.timeScaleSettings
    KioskMode.TIMESCALE_DEV_BACKUP = Platform.gameplay.timeScaleDevSettings
  end
  Platform.gameplay.timeScaleSettings = KioskMode.TIMESCALE_BACKUP
  Platform.gameplay.timeScaleDevSettings = KioskMode.TIMESCALE_DEV_BACKUP
  v5 = xmlFile:getString("config.timescales", nil)
  if v5 ~= nil then
    local v8 = string.getVector(v5)
    for v11, v12 in ipairs({}) do
      local v15 = tonumber(v12)
      table.insert(...)
    end
    if 0 < #v6 then
      Platform.gameplay.timeScaleSettings = v6
      Platform.gameplay.timeScaleDevSettings = {}
    end
  end
  v6 = xmlFile:getString("config.maps", "")
  local v7 = string.split(v6, " ")
  self.settings.maps = nil
  for v11, v12 in ipairs(v7) do
    if self.settings.maps == nil then
      self.settings.maps = {}
    end
    self.settings.maps[v12] = true
  end
  self:updateAvailableMaps()
  v8 = xmlFile:getString("config.storeItems", "")
  if v8 ~= "" then
    v9 = Utils.getFilename(v8, path)
  else
  end
  self.settings.storeItems = v8
  v11 = xmlFile:getString("config.videos", "")
  if v11 ~= "" then
    v12 = Utils.getFilename(v11, path)
    local v13 = Files.new(v12)
    for v16, v17 in ipairs(v13.files) do
      local v19 = fileExists(v11 .. "/" .. v17.filename)
      if not v19 then
        continue
      end
      if v9 == nil then
      end
      table.insert(v9, v11 .. "/" .. v17.filename)
    end
    v13 = xmlFile:getInt("config.videos#inactiveDurationSeconds", 180)
    if v9 ~= nil then
      -- cmp-jump LOP_JUMPXEQKN R13 aux=0x8000006d -> L474
    end
    Logging.warning("KioskMode: No videos found in '%s'", v11)
  end
  self.settings.videos = v9
  self.settings.videoTimer = v10
  v12 = xmlFile:getFloat("config.playtimeSeconds")
  if v12 ~= nil then
    self.settings.playtimeDuration = v12 * 1000
  end
  if v12 == nil then
  end
  v13.playtimeEnabled = true
  xmlFile:iterate("config.mods.mod", function(self, configFileName)
    local xmlFile = xmlFile:getString(configFileName)
    if xmlFile ~= nil then
      table.insert(u1, xmlFile)
    end
  end)
  self.settings.mods = {}
  self:openMainMenu()
  self:setupMainMenu()
  xmlFile:delete()
end
function KioskMode:update(dt)
  if self.profileSelectorGamepadId == nil then
    local v2 = StartParams.getIsSet("kioskProfileId")
    -- if not v2 then goto L29 end
  end
  if g_gui.currentGuiName == "MainScreen" and self.currentProfile == nil then
    v2 = self:getProfile()
    if v2 ~= nil then
      self:loadProfileConfig(v2.configFile)
      self.currentProfile = v2
    end
  end
  if GS_PLATFORM_PC and self.nextLanguageRestartTimer ~= nil and self.nextLanguageRestartTimer < g_time then
    doRestart(false, "")
  end
  if g_currentMission ~= nil and self.playtimeReloadTimer ~= nil then
    self.playtimeReloadTimer = self.playtimeReloadTimer - dt
    if self.playtimeReloadTimer <= 0 then
      self:onReloadSavegame()
    end
  end
  if self.currentVideoIndex == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L116
    self.videoStartTimer = self.videoStartTimer - dt
    -- if v0.videoStartTimer >= 0 then goto L116 end
    self:nextVideo()
    return
  end
  if self.videoOverlay ~= nil then
    v2 = isVideoOverlayPlaying(self.videoOverlay)
    if v2 then
      updateVideoOverlay(self.videoOverlay)
      return
    end
  end
  if self.videoOverlay ~= nil then
    self:disposeVideo()
    self:nextVideo()
  end
end
function KioskMode:draw()
  if self.nextLanguageIndex ~= nil then
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextBold(true)
    setTextColor(0, 0, 0, 1)
    local timeLeft = math.ceil((self.nextLanguageRestartTimer - g_time) / 1000)
    local langName = getLanguageName(self.nextLanguageIndex)
    local v7 = string.format("Changing Language.\nNew language after restart will be '%s'. \nRestarting in %d seconds...", langName, timeLeft)
    renderText(...)
    setTextColor(1, 1, 1, 1)
    v7 = string.format("Changing Language.\nNew language after restart will be '%s'. \nRestarting in %d seconds...", langName, timeLeft)
    renderText(...)
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextBold(false)
  end
  if g_gui.currentGuiName == "MainScreen" and self.currentProfile ~= nil then
    setTextAlignment(RenderText.ALIGN_LEFT)
    setTextColor(0, 0, 0, 0.75)
    renderText(0.01, 0.9585, 0.011, self.currentProfile.name)
    setTextColor(1, 1, 1, 1)
    renderText(0.01, 0.96, 0.011, self.currentProfile.name)
  end
  if g_currentMission ~= nil then
    langName = langName:getIsFading()
    langName = langName:getIsGuiVisible()
    local v3 = self:getSetting("logoEnabled")
    if v3 and not langName and not langName then
      v3:draw()
    end
    if self.playtimeReloadTimer ~= nil then
      v3 = string.format("%0.1d:", self.playtimeReloadTimer / 60000)
      local right = string.format("%0.2d", self.playtimeReloadTimer / 1000 % 60)
      setTextBold(true)
      setTextAlignment(RenderText.ALIGN_RIGHT)
      if langName then
      else
      end
      v5(v6, v7, 0.05, v3)
      setTextAlignment(RenderText.ALIGN_LEFT)
      if langName then
      else
      end
      v5(v6, v7, 0.05, right)
      setTextBold(false)
    end
  end
  timeLeft = self:getSetting("watermarkEnabled")
  if timeLeft then
    setTextAlignment(RenderText.ALIGN_CENTER)
    setTextBold(true)
    setTextColor(1, 1, 1, 0.5)
    right = getCorrectTextSize(0.075)
    renderText(0.5, 0.75, right, "INTERNAL USE ONLY")
    right = getCorrectTextSize(0.03)
    renderText(0.5, 0.73, right, "Copyright GIANTS Software GmbH")
    setTextColor(1, 1, 1, 1)
    setTextBold(false)
    setTextAlignment(RenderText.ALIGN_LEFT)
  end
  if self.videoOverlay ~= nil then
    timeLeft = isVideoOverlayPlaying(self.videoOverlay)
    if timeLeft then
      new2DLayer()
      renderOverlay(self.videoOverlay, 0, 0, 1, 1)
    end
  end
end
function KioskMode:getSetting(name)
  return self.settings[name]
end
function KioskMode:getProfile()
  local path = StartParams.getIsSet("kioskProfileId")
  if path then
    local v2 = StartParams.getValue("kioskProfileId")
    path = tonumber(...)
    if self.profiles[path] ~= nil then
      return self.profiles[path]
    end
    return nil
  end
  if self.profileSelectorGamepadId ~= nil then
    for v5, v6 in pairs(KioskMode.BIT_TO_BUTTON_ID) do
      local v7 = getInputButton(v6, self.profileSelectorGamepadId)
      if not (0 < v7) then
        continue
      end
      local v8 = Utils.setBit(path, v5)
    end
    if self.maskToProfile[path] ~= nil then
      return self.maskToProfile[path]
    end
  end
  return nil
end
function KioskMode.setSavegame(v0, path)
  if path ~= nil then
    if GS_IS_CONSOLE_VERSION then
      saveSetFixedSavegame(path)
      return
    end
    local v5 = getUserProfileAppPath()
    deleteFolder(v5 .. "savegame1")
    createFolder(v5 .. "savegame1")
    local v4 = Files.new(path)
    for v7, v8 in ipairs(v4.files) do
      copyFile(path .. "/" .. v8.filename, v2 .. "/" .. v8.filename, true)
    end
    v4 = fileExists(v2 .. "/careerSavegame.xml")
    -- if v4 then goto L78 end
    Logging.error("Failed to copy savegame from '%s' to '%s'!", path, v2)
    return
  end
  if not GS_IS_CONSOLE_VERSION then
    v5 = getUserProfileAppPath()
    deleteFolder(v5 .. "savegame1")
  end
end
function KioskMode.onReloadSavegame(v0)
  OnInGameMenuMenu()
end
function KioskMode:setupMainMenu()
  local path = self:getSetting("mainMenuEnabled")
  v3:setDisabled(not path)
  v3:setDisabled(not path)
  v3:setDisabled(not path)
  if not Platform.isConsole then
    v3:setDisabled(not path)
  else
    v3:setDisabled(true)
  end
  v3:setDisabled(v2)
  v3:setDisabled(v2)
  v3:invalidateLayout()
end
function KioskMode:addRegisteredMaps(map)
  table.addElement(self.maps, map)
end
function KioskMode:updateAvailableMaps()
  table.clear(g_mapManager.maps)
  for v5, v6 in ipairs(self.maps) do
    if path ~= nil and not (path[v6.id] == true) then
      continue
    end
    table.insert(g_mapManager.maps, v6)
    g_mapManager.idToMap[v6.id] = v6
  end
end
function KioskMode:resetVideoTimer()
  local path = self:getSetting("videos")
  if path ~= nil then
    if self.videoOverlay == nil then
    end
    local v2 = self:getSetting("videoTimer")
    self.videoStartTimer = v2
    self:disposeVideo()
    self.currentVideoIndex = nil
    return true
  end
  return false
end
function KioskMode:openMainMenu()
  self:resetVideoTimer()
end
function KioskMode:closeMainMenu()
  self.videoStartTimer = nil
end
function KioskMode:disposeVideo()
  if self.videoOverlay ~= nil then
    local path = isVideoOverlayPlaying(self.videoOverlay)
    if path then
      stopVideoOverlay(self.videoOverlay)
      delete(self.videoOverlay)
      self.videoOverlay = nil
    end
  end
end
function KioskMode:nextVideo()
  self:disposeVideo()
  if self.currentVideoIndex ~= nil then
    local v3 = self:getSetting("videos")
    -- if #v3 > v0.currentVideoIndex then goto L20 end
  end
  self.currentVideoIndex = 1
  -- goto L25  (LOP_JUMP +5)
  self.currentVideoIndex = self.currentVideoIndex + 1
  self.videoStartTimer = nil
  local path = createVideoOverlay(self.settings.videos[self.currentVideoIndex], false, 1)
  self.videoOverlay = path
  playVideoOverlay(self.videoOverlay)
end
function KioskMode:inj_mapManager_addMapItem(path, ...)
  local v2 = path(...)
  if v2 then
    local v3 = table.remove(self.maps, #self.maps)
    self.idToMap[v3.id] = nil
    v4:addRegisteredMaps(v3)
  end
  v3:updateAvailableMaps()
  return v2
end
function KioskMode:inj_Farm_setInitialEconomy(...)
  if not self.isSpectator then
    local path = path:getSetting("startMoney")
    self.money = path
    Logging.xmlInfo("Set Kiosk-Mode farm startmoney: %d", self.money)
  end
end
function KioskMode:inj_inGameMenuMapFrame_updateInputGlyphs(...)
  local path = path:getSetting("farmlandShopEnabled")
  v2:setDisabled(not path)
end
function KioskMode.inj_storeManager_getDefaultStoreItemsFilename(storeManager, superFunc, ...)
  local v2 = v2:getSetting("storeItems")
  if v2 ~= nil then
    return v2
  end
  return superFunc(...)
end
function KioskMode:inj_environment_load(path, ...)
  local v2 = path(...)
  local v3 = v3:getSetting("alwaysDay")
  if v3 then
    self.dayNightCycle = false
  end
  return v2
end
function KioskMode.inj_loanTrigger_new(id, superFunc, ...)
  local loanTrigger = superFunc(id)
  local v3 = v3:getSetting("vehicleShopEnabled")
  loanTrigger.isEnabled = v3
  return loanTrigger
end
function KioskMode.inj_shopTrigger_new(id, superFunc, ...)
  local shopTrigger = superFunc(id)
  local v3 = v3:getSetting("vehicleShopEnabled")
  shopTrigger.isEnabled = v3
  return shopTrigger
end
function KioskMode:inj_vehicleSellingPoint_load(path, ...)
  local v2 = path(...)
  local v3 = v3:getSetting("vehicleShopEnabled")
  self.isEnabled = v3
  return v2
end
function KioskMode:inj_animalLoadingTrigger_load(path, ...)
  local v2 = path(...)
  local v3 = v3:getSetting("animalShopEnabled")
  self.isEnabled = v3
  return v2
end
function KioskMode.inj_fsBaseMission_getIsAutoSaveSupported(mission)
  return false
end
function KioskMode.inj_fsBaseMission_registerActionEvents(mission)
  local path = path:getSetting("reloadEnabled")
  if path then
    local path, v2 = path:registerActionEvent(InputAction.KIOSK_MODE_RELOAD_GAME, g_kioskMode, g_kioskMode.onReloadSavegame, false, true, false, true)
    v3:setActionEventTextVisibility(v2, false)
  end
end
function KioskMode.inj_fsBaseMission_onToggleCharacterCreation(mission, superFunc)
  local v2 = v2:getSetting("wardrobeShopEnabled")
  if not v2 then
    return
  end
  superFunc(mission)
end
function KioskMode.inj_fsBaseMission_onToggleConstructionScreen(mission, superFunc)
  local v2 = v2:getSetting("placeableShopEnabled")
  if not v2 then
    return
  end
  superFunc(mission)
end
function KioskMode.inj_fsBaseMission_onToggleStore(mission, superFunc)
  local v2 = v2:getSetting("vehicleShopEnabled")
  if not v2 then
    return
  end
  superFunc(mission)
end
function KioskMode.inj_fsBaseMission_onToggleMenu(mission, superFunc)
  local v2 = v2:getSetting("ingameMenuEnabled")
  if not v2 then
    return
  end
  superFunc(mission)
end
function KioskMode:inj_fsBaseMission_update(path)
  if g_kioskMode.tryToEnterVehicle ~= nil then
    local v2 = v2:getStyle()
    if v2 ~= nil then
      v3:requestToEnterVehicle(g_kioskMode.tryToEnterVehicle)
      g_kioskMode.tryToEnterVehicle = nil
    end
  end
end
function KioskMode.inj_mission00_onStartMission()
  local v0 = v0:getSetting("playtimeEnabled")
  if v0 then
    local path = path:getSetting("playtimeDuration")
    g_kioskMode.playtimeReloadTimer = path
  end
  v0:playerOwnsAllFields()
  v0 = v0:getSetting("startVehicleIndex")
  if v0 ~= nil and g_currentMission.enterables[v0] ~= nil then
    g_kioskMode.tryToEnterVehicle = g_currentMission.enterables[v0]
  end
  path = path:getSetting("helpLineTriggerEnabled")
  if not path then
    path:setShowHelpTrigger(false)
  end
end
function KioskMode.inj_inGameMenu_makeIsAIEnabledPredicate(ingameMenu)
  return function()
    return ingameMenu:getSetting("aiEnabled")
  end
end
function KioskMode.inj_inGameMenu_makeIsPricesEnabledPredicate(ingameMenu)
  return function()
    return false
  end
end
function KioskMode.inj_inGameMenu_makeIsAnimalsEnabledPredicate(ingameMenu)
  return function()
    return false
  end
end
function KioskMode.inj_inGameMenu_makeIsContractsEnabledPredicate(ingameMenu)
  return function()
    return false
  end
end
function KioskMode.inj_inGameMenu_makeIsGarageEnabledPredicate(ingameMenu)
  return function()
    return false
  end
end
function KioskMode.inj_inGameMenu_makeIsControlsSettingsEnabledPredicate(ingameMenu)
  return function()
    return false
  end
end
function KioskMode.inj_inGameMenu_makeIsHelpEnabledPredicate(ingameMenu)
  return function()
    return false
  end
end
function KioskMode:inj_inGameMenuGameSettingsFrame_initializeButtons()
  self.saveButton = nil
end
function KioskMode.inj_productionPointActivatable_run(v0, path)
  local v2 = v2:getSetting("productionEnabled")
  if not v2 then
    local v5 = v5:getText("ui_featureDisabled")
    v2:showInfoDialog({text = v5})
    return
  end
  path(v0)
end
function KioskMode.inj_specializationManager_addSpecialization(specializationManager, name, className, ...)
  if specializationManager == g_specializationManager then
    if className == "AIJobVehicle" then
      local v3 = v3:getSetting("aiEnabled")
      -- if v3 then goto L56 end
      AIJobVehicle.onRegisterActionEvents = function()
      end
      return
    end
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x8000000a -> L56
    v3 = v3:getSetting("extendedDrivingHelp")
    -- if not v3 then goto L56 end
    Drivable.onRegisterActionEvents = function(self, name, className)
      u0(self, name, className)
      for v7, v8 in pairs(self.spec_drivable.actionEvents) do
        if g_inputBinding.events[v8.actionEventId].displayPriority == GS_PRIO_VERY_LOW then
          v11:setActionEventTextPriority(v8.actionEventId, GS_PRIO_VERY_HIGH)
        elseif g_inputBinding.events[v8.actionEventId].displayPriority == GS_PRIO_LOW then
          v11:setActionEventTextPriority(v8.actionEventId, GS_PRIO_HIGH)
        end
        if not not v10.displayIsVisible then
          continue
        end
        v11:setActionEventTextVisibility(v9, true)
      end
    end
    return
  end
  if specializationManager == g_placeableSpecializationManager and className == "PlaceableWardrobe" then
    v3 = v3:getSetting("wardrobeShopEnabled")
    if not v3 then
      PlaceableWardrobeActivatable.run = function()
        local v3 = v3:getText("ui_featureDisabled")
        specializationManager:showInfoDialog({text = v3})
      end
    end
  end
end
function KioskMode.inj_mission00_getIsTourSupported(mission, superFunc)
  local className = className:getSetting("tourEnabled")
  if not className then
    return false
  end
  className = superFunc(mission)
  return className
end
function KioskMode:inj_hud_createDisplayComponents(name)
  local className = className:getSetting("logoEnabled")
  if className then
    className:setIsVisible(false)
    className = className:getSetting("logoWidth")
    local v3 = v3:getSetting("logoHeight")
    local v4 = v4:getSetting("logoFilename")
    local v5, v6 = getNormalizedScreenValues(className, v3)
    v5 = Overlay.new(v4, g_safeFrameOffsetX, g_safeFrameOffsetY, v5, v6)
    v6 = HUDElement.new(v5)
    self.kioskModeLogoElement = v6
    table.insert(self.displayComponents, self.kioskModeLogoElement)
  end
end
function KioskMode:inj_inGameMenuMobileSettingsFrame_onFrameOpen()
  name:setDisabled(true)
  name:setDisabled(true)
  name:setDisabled(true)
end
function KioskMode:inj_careerScreen_updateButtons()
  if self.buttonDelete then
    name:setDisabled(true)
  end
end
function KioskMode:inj_modSelectionScreenn_update(name)
  local className = className:getSetting("canSelectMods")
  if className then
    return
  end
  for v5, v6 in pairs(self.selectedMods) do
    self:setItemState(v6, false)
  end
  v3 = v3:getSetting("mods")
  for v5, v6 in pairs(...) do
    local v7 = v7:getModByName(v6)
    if not (v7 ~= nil) then
      continue
    end
    local v8 = self:shouldShowModInList(v7)
    if v8 then
      self:setItemState(v7, true)
    else
      Logging.error("Mod '%s' is not available for current kiosk mode setup", v7.title)
    end
  end
  self:onClickOk()
end
function KioskMode:inj_difficultyScreen_update(name)
  if not self.startMissionInfo then
  end
  className.difficulty = 1
  self:onClickOk()
end
function KioskMode:inj_mapSelectionScreen_update(name)
  local className = className:getNumOfMaps()
  if className == 1 then
    if not self.startMissionInfo then
    end
    local v3 = v3:getMapDataByIndex(1)
    className.mapId = v3.id
    self:onClickOk()
  end
end
function KioskMode:inj_careerScreen_update(name)
  local className = className:getSetting("canSelectSavegame")
  if className then
    return
  end
  self.selectedIndex = 1
  if not self.savegameController then
  end
  local v3 = className:getSavegame(self.selectedIndex)
  self:startSavegame(v3)
end
function KioskMode.inj_mainScreen_inputEvent(screen, superFunc, action, value, eventUsed)
  if action == InputAction.KIOSK_MODE_START_VIDEOS then
  else
    local v5 = v5:resetVideoTimer()
    if v5 then
    end
  end
  v5 = superFunc(screen, action, value, eventUsed)
  return v5
end
function KioskMode:inj_mainScreen_onClose()
  if self.toggleLanguageEventId ~= nil then
    name:removeActionEvent(self.toggleLanguageEventId)
    self.toggleLanguageEventId = nil
  end
  if self.startVideosEventId ~= nil then
    name:removeActionEvent(self.startVideosEventId)
    self.startVideosEventId = nil
  end
  name:closeMainMenu()
end
function KioskMode:inj_mainScreen_update(name, className)
  local v3 = v3:getSetting("skipMainMenu")
  if v3 then
    self:onCareerClick()
    return
  end
  name(self, className)
end
function KioskMode:inj_mainScreen_onOpen()
  if self.toggleLanguageEventId ~= nil then
    name:removeActionEvent(self.toggleLanguageEventId)
    self.toggleLanguageEventId = nil
  end
  if self.startVideosEventId ~= nil then
    name:removeActionEvent(self.startVideosEventId)
    self.startVideosEventId = nil
  end
  if GS_PLATFORM_PC then
    local className, v3 = className:registerActionEvent(InputAction.KIOSK_MODE_TOGGLE_LANGUAGE, InputBinding.NO_EVENT_TARGET, function()
      if g_gui.currentGuiName == "MainScreen" then
        local self = getLanguage()
        for v5, v6 in ipairs(g_availableLanguagesTable) do
          if not (v6 == self) then
            continue
          end
        end
        if name ~= nil then
          -- if #g_availableLanguagesTable >= v1 then goto L27 end
        end
        g_kioskMode.nextLanguageIndex = g_availableLanguagesTable[1]
        g_kioskMode.nextLanguageRestartTimer = g_time + 5000
        setLanguage(g_availableLanguagesTable[1])
        className:resetVideoTimer()
      end
    end, false, true, false, true)
    self.toggleLanguageEventId = v3
    if className then
      v4:setActionEventTextVisibility(v3, false)
    end
  end
  className, v3 = className:registerActionEvent(InputAction.KIOSK_MODE_START_VIDEOS, InputBinding.NO_EVENT_TARGET, function()
    if g_gui.currentGuiName == "MainScreen" then
      self:nextVideo()
    end
  end, false, true, false, true)
  self.startVideosEventId = v3
  if className then
    v4:setActionEventTextVisibility(v3, false)
  end
  v4:openMainMenu()
end
