-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WardrobeScreen = {}
local WardrobeScreen_mt = Class(WardrobeScreen, TabbedMenuWithDetails)
WardrobeScreen.CAMERA_FOV = 0.6981317007977318
WardrobeScreen.BACKGROUND_PATH = "data/store/ui/wardrobe.i3d"
WardrobeScreen.CONTROLS = {"background", "fadeElement", "header", "buttonsPanel", "brandIcon", "lookGlyph", "pageCharacter", "pageHair", "pageBeard", "pageMoustache", "pageHeadgear", "pageFootwear", "pageTop", "pageBottom", "pageGloves", "pageGlasses", "pageOutfit", "pageColors", "loadingAnimation"}
function WardrobeScreen.register()
  WardrobeItemsFrame.register()
  WardrobeColorsFrame.register()
  WardrobeOutfitsFrame.register()
  WardrobeCharactersFrame.register()
  local v0 = WardrobeScreen.new()
  v1:loadGui("dataS/gui/WardrobeScreen.xml", "WardrobeScreen", v0)
  return v0
end
function WardrobeScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(WardrobeScreen.CONTROLS)
  v2.scenePrepared = false
  return v2
end
function WardrobeScreen:createFromExistingGui(v1)
  WardrobeCharactersFrame.createFromExistingGui(g_gui.frames.wardrobeCharacters.target, "WardrobeCharactersFrame")
  WardrobeColorsFrame.createFromExistingGui(g_gui.frames.wardrobeColors.target, "WardrobeColorsFrame")
  WardrobeItemsFrame.createFromExistingGui(g_gui.frames.wardrobeItems.target, "WardrobeItemsFrame")
  WardrobeOutfitsFrame.createFromExistingGui(g_gui.frames.wardrobeOutfits.target, "WardrobeOutfitsFrame")
  local v2 = WardrobeScreen.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, false)
  return v2
end
function WardrobeScreen:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  if g_currentMission.controlPlayer then
    self.didControlPlayer = true
    local v2, v3, v4 = g_currentMission.player:getPositionData()
    self.lastPlayerX = v2
    self.lastPlayerY = v3
    self.lastPlayerZ = v4
    g_currentMission.player:onLeave()
  end
  local newStyle = PlayerStyle.new()
  self.currentPlayerStyle = newStyle
  newStyle = PlayerStyle.new()
  self.temporaryPlayerStyle = newStyle
  if g_currentMission.player.model.style == nil then
    v2 = v2:getPlayerStyle(g_currentMission.player.userId)
  end
  if self.isNewCharacter then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L74
    v2 = v2:isValid()
    -- if not v2 then goto L74 end
    v2:copyFrom(g_gameSettings.lastPlayerStyle)
  elseif newStyle ~= nil then
    v2 = newStyle:isValid()
    -- if not v2 then goto L87 end
    v2:copyFrom(newStyle)
  else
    v2 = PlayerStyle.new()
    v2:loadConfigurationXML(g_characterModelManager.playerModels[1].xmlFilename)
    v3:copyFrom(v2)
  end
  v2:loadConfigurationIfRequired()
  v2:copyFrom(self.currentPlayerStyle)
  self:updatePagePlayerStyle()
  v2:setCustomLighting(self.lighting)
  self:updateCharacter(true)
  self:updateTabIcons()
  self:updateBrandIcon()
  self.rotY = 0
  self.inputHorizontal = 0
  self.isDragging = false
  self.accumDraggingInput = 0
  self.lastInputMode = -1
  self.lastInputHelpMode = -1
  self.mouseDragActive = false
  self:updateInputGlyphs()
  self:registerActionEvents()
  v2 = getCamera()
  self.previousCamera = v2
  setCamera(self.camera)
  self:showContent(true)
end
function WardrobeScreen:onClose()
  self:removeActionEvents()
  self:showContent(false)
  newStyle:setCustomLighting(nil)
  setCamera(self.previousCamera)
  if self.playerModel ~= nil then
    newStyle:delete()
    self.playerModel = nil
  end
  if self.didControlPlayer then
    newStyle:onEnter(true)
    newStyle:moveTo(self.lastPlayerX, self.lastPlayerY, self.lastPlayerZ, true, true)
    self.didControlPlayer = false
  end
  self.isNewCharacter = false
  local v2 = v2:superClass()
  v2.onClose(self)
end
function WardrobeScreen:onDetailClosed(detailPage)
  if self.colorDetailCallback ~= nil and not self.isPoppingDetailSafely then
    self.colorDetailCallback(false)
    self.colorDetailCallback = nil
  end
end
function WardrobeScreen:updatePagePlayerStyle()
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
  v3:setPlayerStyle(self.temporaryPlayerStyle, self.currentPlayerStyle)
end
function WardrobeScreen:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  self:initializePages()
  self:setupMenuPages()
end
function WardrobeScreen:initializePages()
  newStyle:initialize("faceConfig", self, "character_option_body")
  newStyle:initialize("hairStyleConfig", self, "character_option_hairStyle")
  newStyle:initialize("beardConfig", self, "character_option_beardStyle")
  newStyle:initialize("mustacheConfig", self, "character_option_mustache")
  newStyle:initialize("headgearConfig", self, "character_option_headGear")
  newStyle:initialize("footwearConfig", self, "character_option_footwear")
  newStyle:initialize("topConfig", self, "character_option_top")
  newStyle:initialize("bottomConfig", self, "character_option_bottom")
  newStyle:initialize("glovesConfig", self, "character_option_gloves")
  newStyle:initialize("glassesConfig", self, "character_option_glasses")
  newStyle:initialize(self, "character_option_outfits")
  newStyle:initialize(self)
end
function WardrobeScreen:setupMenuPages()
  for v7, v8 in ipairs({{self.pageCharacter, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.CHARACTER}, {self.pageHair, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.HAIR}, {self.pageBeard, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.BEARD}, {self.pageMoustache, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.MOUSTACHE}, {self.pageOutfit, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.OUTFIT}, {self.pageTop, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.TOP}, {self.pageBottom, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.BOTTOM}, {self.pageFootwear, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.FOOTWEAR}, {self.pageHeadgear, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.HEADGEAR}, {self.pageGloves, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.GLOVES}, {self.pageGlasses, function()
    local newStyle = newStyle:getIsDetailMode()
    return not newStyle
  end, WardrobeScreen.TAB_UV.GLASSES}, {self.pageColors, function()
    return self:getIsDetailMode()
  end, WardrobeScreen.TAB_UV.HEADGEAR}}) do
    local v9, v10, v11 = unpack(v8)
    self:registerPage(v9, v7, v10)
    local v13 = GuiUtils.getUVs(v11)
    self:addPageTab(v9, g_iconsUIFilename, v13)
  end
end
function WardrobeScreen:setupMenuButtonInfo()
  local v2 = v2:superClass()
  v2.setupMenuButtonInfo(self)
  v2 = v2:getText(ShopMenu.L10N_SYMBOL.BUTTON_BACK)
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK, text = v2, callback = self.clickBackCallback}
  self.defaultMenuButtonInfoByActions[InputAction.MENU_BACK] = self.backButtonInfo
  self.defaultButtonActionCallbacks[InputAction.MENU_BACK] = self.clickBackCallback
end
function WardrobeScreen:updateTabIcons()
  for v4, v5 in pairs(self.pageTabs) do
    if not (v4.configName ~= nil) then
      continue
    end
    local v7 = self.currentPlayerStyle[v4.configName].listMappingGetter(self.currentPlayerStyle)
    if #v7 ~= 0 then
    end
    if true then
      v6.icon.color = {0.4, 0.4, 0.4, 0.8}
      v6.icon.colorFocused = {1, 1, 1, 0.5}
      v6.icon.colorSelected = {1, 1, 1, 0.5}
    else
      v6.icon.color = {0.0003, 0.5647, 0.9822, 1}
      v6.icon.colorFocused = {1, 1, 1, 1}
      v6.icon.colorSelected = {1, 1, 1, 1}
    end
  end
end
function WardrobeScreen:setNextOpenIsNewCharacter()
  self.isNewCharacter = true
end
function WardrobeScreen:onButtonBack()
  newStyle:setStyleAsync(self.currentPlayerStyle, function()
    self:setLastPlayerStyle(u0.currentPlayerStyle)
    self:saveToXMLFile(g_savegameXML)
    self:exitMenu()
  end)
end
function WardrobeScreen:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.updateAnimationCallback ~= nil then
    local v2 = self.updateAnimationCallback(dt)
    if not v2 then
      self.updateAnimationCallback = nil
      if self.updateAnimationFinishedCallback ~= nil then
        self.updateAnimationFinishedCallback = nil
        self.updateAnimationFinishedCallback()
      end
    end
  end
  if self.playerModel ~= nil then
    v2:updateAnimations(dt)
  end
  self:updateInput(dt)
  self:updateCamera(dt)
end
function WardrobeScreen:updateCamera(dt)
  if self.rotateNode ~= nil then
    setRotation(self.rotateNode, 0, self.rotY, 0)
  end
end
function WardrobeScreen:showContent(show)
  if show then
    v2:setVisible(true)
    v2:setVisible(true)
    v2:setVisible(true)
    v2:setVisible(true)
    setVisibility(self.sceneRootNode, true)
    -- if v0.hasBlurApplied then goto L104 end
    v2:pushArea(self.background.absPosition[1], self.background.absPosition[2], self.background.absSize[1], self.background.absSize[2])
    self.hasBlurApplied = true
    return
  end
  v2:setVisible(false)
  v2:setVisible(false)
  v2:setVisible(false)
  v2:setVisible(false)
  setVisibility(self.sceneRootNode, false)
  if self.hasBlurApplied then
    self.hasBlurApplied = false
    v2:popArea()
  end
end
function WardrobeScreen:showLoadingDialog(show)
  v2:setVisible(show)
end
function WardrobeScreen:runAnimation(duration, tick, finish)
  self.animationTime = duration
  self.updateAnimationCallback = function(self)
    u0.animationTime = u0.animationTime - self
    local tick = math.max(1 - u0.animationTime / u1, 0)
    local duration = math.min(tick, 1)
    u2(duration)
    if 0 >= u0.animationTime then
    end
    return true
  end
  self.updateAnimationFinishedCallback = finish
end
function WardrobeScreen:fadeOut(cb)
  self:runAnimation(150, function(self)
    local v7 = Tween.CURVE.EASE_IN(self)
    cb:setImageColor(...)
  end, cb)
end
function WardrobeScreen:fadeIn(cb)
  self:runAnimation(150, function(self)
    local v9 = Tween.CURVE.EASE_OUT(self)
    cb:setImageColor(nil, 0, 0, 0, 1 - v9)
  end, cb)
end
function WardrobeScreen:loadMapData(mapXMLFile, missionInfo, baseDirectory)
  local v4 = createTransformGroup("CharacterArea")
  self.sceneRootNode = v4
  local v5 = getRootNode()
  link(v5, self.sceneRootNode)
  setTranslation(self.sceneRootNode, 0, -100, 100)
  setVisibility(self.sceneRootNode, true)
  v4 = v4:loadSharedI3DFileAsync(WardrobeScreen.BACKGROUND_PATH, false, true, self.onLoadedWardrobeScene, self, nil)
  self.sharedLoadRequestId = v4
  v4:startLoadingTask()
  self.hasLoadingTask = true
end
function WardrobeScreen:onLoadedWardrobeScene(node, failedReason, args)
  removeFromPhysics(node)
  link(self.sceneRootNode, node)
  addToPhysics(node)
  local v4 = createTransformGroup("characterModelRoot")
  self.characterModelRoot = v4
  link(self.sceneRootNode, self.characterModelRoot)
  setWorldRotation(self.characterModelRoot, 0, 0.4363323129985824, 0)
  v4 = createTransformGroup("rotateNode")
  self.rotateNode = v4
  link(self.sceneRootNode, self.rotateNode)
  setWorldRotation(self.rotateNode, 0, 0.4363323129985824, 0)
  self.rotY = 0.4363323129985824
  v4 = createTransformGroup("finalCameraPosNode")
  link(self.rotateNode, v4)
  setTranslation(v4, -1.35, 0.8, 0)
  setRotation(v4, -0.13962634015954636, 0.9599310885968813, 0)
  local v5 = createCamera("camera_ccscreen", WardrobeScreen.CAMERA_FOV, 2, 10000)
  self.camera = v5
  link(v4, self.camera)
  setTranslation(self.camera, 0, 0, 4)
  v5 = LightingStatic.new()
  self.lighting = v5
  local v7 = Utils.getFilename("$data/store/ui/wardrobe.xml")
  v5 = loadXMLFile(...)
  v6:load(v5, "shop.lighting")
  delete(v5)
  v6:setEnvironment(g_currentMission)
  self.scenePrepared = true
  if self.hasLoadingTask then
    v6:finishLoadingTask()
    self.hasLoadingTask = nil
  end
end
function WardrobeScreen:unloadMapData()
  if self.sceneRootNode ~= nil then
    delete(self.sceneRootNode)
    self.sceneRootNode = nil
    self.rotateNode = nil
  end
  if self.sharedLoadRequestId ~= nil then
    newStyle:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  if self.lighting ~= nil then
    newStyle:delete()
    self.lighting = nil
  end
  if self.hasLoadingTask then
    newStyle:finishLoadingTask()
    self.hasLoadingTask = nil
  end
  self.scenePrepared = false
end
function WardrobeScreen:updateCharacter(isCreatingScene)
  if not self.scenePrepared then
    return
  end
  if self.playerModel ~= nil then
    -- if v0.playerModel.xmlFilename == v0.temporaryPlayerStyle.xmlFilename then goto L62 end
  end
  if self.playerModel ~= nil then
    v2:delete()
  end
  local v2 = PlayerModel.new()
  self.playerModel = v2
  self.isModelLoading = true
  v2:setVisible(true)
  v2:load(self.temporaryPlayerStyle.xmlFilename, false, false, true, self.loadCharacterFinished, self, {isCreatingScene})
  return
  if self.isModelLoading then
    return
  end
  v2:setVisible(true)
  v2:setStyle(self.temporaryPlayerStyle, true, function(self)
    if self then
      isCreatingScene:setVisible(false)
    end
  end)
  self:updateTabIcons()
  self:updateBrandIcon()
end
function WardrobeScreen:loadCharacterFinished(success, arguments)
  v3:setVisible(false)
  self.isModelLoading = false
  if not success then
    v3:delete()
    self.playerModel = nil
    return
  end
  local v6 = v6:getRootNode()
  link(...)
  local v5 = v5:getRootNode()
  setRotation(v5, 0, -0.2617993877991494, 0)
  v4:setAnimationParameters(true, false, false, false, 0, 0, 0)
  local v4 = v4:getStyle()
  if arguments[1] and v4 ~= nil and v4.xmlFilename == self.currentPlayerStyle.xmlFilename then
    v5:copyFrom(v4)
    v5:copyFrom(v4)
  end
  v5:setVisible(true)
  v5:setStyle(self.temporaryPlayerStyle, true, function(self)
    if self then
      success:setVisible(false)
    end
  end)
  self:updateTabIcons()
  self:updateBrandIcon()
end
function WardrobeScreen:updateBrandIcon()
  local v4 = v4:isa(WardrobeOutfitsFrame)
  if v4 then
  end
  if v2 ~= nil then
    if self.temporaryPlayerStyle[v2].items[self.temporaryPlayerStyle[v2].selection] ~= nil and self.temporaryPlayerStyle[v2].items[self.temporaryPlayerStyle[v2].selection].brandName ~= nil then
      local v6 = v6:getBrandByName(self.temporaryPlayerStyle[v2].items[self.temporaryPlayerStyle[v2].selection].brandName)
      self.temporaryPlayerStyle[v2].items[self.temporaryPlayerStyle[v2].selection].brand = v6
      if self.temporaryPlayerStyle[v2].items[self.temporaryPlayerStyle[v2].selection].brand ~= nil then
        self.temporaryPlayerStyle[v2].items[self.temporaryPlayerStyle[v2].selection].brandName = nil
      end
    end
    if v5 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L62
    elseif v3 ~= nil and self.temporaryPlayerStyle[v3].items[self.temporaryPlayerStyle[v3].selection] ~= nil and self.temporaryPlayerStyle[v3].items[self.temporaryPlayerStyle[v3].selection].brand ~= nil then
    end
  end
  if newStyle == nil then
  end
  v4:setVisible(true)
  if newStyle ~= nil then
    v4:setImageFilename(newStyle)
  end
end
function WardrobeScreen:onItemSelectionStart()
  if self.temporaryPlayerStyle == nil then
    return
  end
  newStyle:copyFrom(self.currentPlayerStyle)
  self:updateCharacter()
end
function WardrobeScreen:onItemSelectionChanged()
  self:updateCharacter()
end
function WardrobeScreen:onItemSelectionConfirmed()
  newStyle:copyFrom(self.temporaryPlayerStyle)
end
function WardrobeScreen:onItemSelectionCancelled()
  if self.temporaryPlayerStyle == nil then
    return
  end
  newStyle:copyFrom(self.currentPlayerStyle)
  self:updateCharacter()
end
function WardrobeScreen:onItemShowColors(configName, item, itemsCallback)
  self.colorDetailCallback = itemsCallback
  v4:setConfigAndItem(configName, item)
  self:pushDetail(self.pageColors)
end
function WardrobeScreen:onColorSelectionChanged()
  self:updateCharacter()
end
function WardrobeScreen:onColorSelectionConfirmed(keepOpen)
  if not keepOpen then
    self.isPoppingDetailSafely = true
    self:popDetail()
    self.isPoppingDetailSafely = false
  end
  self.colorDetailCallback(true, keepOpen)
  v2:copyFrom(self.temporaryPlayerStyle)
  if not keepOpen then
    self.colorDetailCallback = nil
  end
end
function WardrobeScreen:onColorSelectionCancelled(keepOpen)
  if not keepOpen then
    self.isPoppingDetailSafely = true
    self:popDetail()
    self.isPoppingDetailSafely = false
  end
  self.colorDetailCallback(false, keepOpen)
  if not keepOpen then
    self.colorDetailCallback = nil
  end
end
function WardrobeScreen:registerActionEvents()
  if self.eventIdLeftRightController ~= nil then
    newStyle:removeActionEvent(self.eventIdLeftRightController)
  end
  local v2, v3 = v2:registerActionEvent(InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE, self, self.onCameraLeftRight, false, false, true, true)
  self.eventIdLeftRightController = v3
  self.lastInputMode = -1
  self:updateInputContext()
end
function WardrobeScreen:removeActionEvents()
  newStyle:removeActionEvent(self.eventIdLeftRightController)
  self.eventIdLeftRightController = nil
end
function WardrobeScreen:onCameraLeftRight(actionName, inputValue, callbackState, isAnalog)
  self.inputHorizontal = inputValue * -2
end
function WardrobeScreen:mouseEvent(posX, posY, isDown, isUp, button, eventUsed)
  local v7 = self:getIsActive()
  if v7 then
    v7 = GuiUtils.checkOverlayOverlap(posX, posY, self.background.absPosition[1], self.background.absPosition[2], self.background.absSize[1], self.background.absSize[2])
    if v7 then
      self.mouseDragActive = false
      return
    end
    if isDown then
      self.mouseDragActive = true
      self.lastMousePosX = posX
    end
    if isUp then
      self.mouseDragActive = false
    end
    if self.mouseDragActive then
      self.lastMousePosX = posX
      self.inputHorizontal = self.inputHorizontal + (posX - self.lastMousePosX) * 200
    end
  end
end
function WardrobeScreen:updateInput(dt)
  self:updateInputContext()
  if self.inputHorizontal ~= 0 then
    self.inputHorizontal = 0
    self.rotY = self.rotY - 0.001 * dt * self.inputHorizontal
  end
  local v2 = v2:getInputHelpMode()
  if v2 ~= self.lastInputHelpMode then
    self.lastInputHelpMode = v2
    self:updateInputGlyphs()
  end
  self.inputDragging = false
end
function WardrobeScreen:updateInputContext()
  local newStyle = newStyle:getLastInputMode()
  if newStyle ~= self.lastInputMode then
    if newStyle ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
    v3:setActionEventActive(self.eventIdLeftRightController, true)
    self.lastInputMode = newStyle
    self.isDragging = false
  end
end
function WardrobeScreen:updateInputGlyphs()
  if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
  else
  end
  v2:setActions(newStyle)
end
WardrobeScreen.TAB_UV = {CHARACTER = {0, 130, 65, 65}, HAIR = {130, 130, 65, 65}, BEARD = {195, 130, 65, 65}, MOUSTACHE = {260, 130, 65, 65}, HEADGEAR = {325, 130, 65, 65}, FOOTWEAR = {455, 130, 65, 65}, TOP = {715, 130, 65, 65}, BOTTOM = {390, 130, 65, 65}, GLOVES = {520, 130, 65, 65}, GLASSES = {585, 130, 65, 65}, ONEPIECE = {650, 130, 65, 65}, OUTFIT = {65, 130, 65, 65}}
