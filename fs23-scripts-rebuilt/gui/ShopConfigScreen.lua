-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ShopConfigScreen = {}
local ShopConfigScreen_mt = Class(ShopConfigScreen, ScreenElement)
ShopConfigScreen.CONTROLS = {"shopMoney", "shopConfigBrandIcon", "shopConfigItemName", "buttonsPanel", "configurationLayout", "configurationItemTemplate", "configurationItemTemplateLarge", "configurationsTitle", "configurationsBox", "configSliderBox", "configSlider", "basePriceText", "upgradesPriceText", "totalPriceText", "attributesLayout", "attributeItem", "loadingAnimation", "leaseButton", "buyButton", "configButton", "zoomGlyph", "lookGlyph", CONTENT = "shopConfigContent"}
ShopConfigScreen.INPUT_CONTEXT_NAME = "MENU_SHOP_CONFIG"
ShopConfigScreen.FADE_TEXTURE_PATH = "data/shared/graph_pixel.png"
ShopConfigScreen.WORKSHOP_PATH = "$data/maps/textures/shared/uiStore.i3d"
ShopConfigScreen.LICENSE_PLATE_PATH = "dataS/menu/licensePlate/creationBox.i3d"
ShopConfigScreen.NEAR_CLIP_DISTANCE = 0.2
ShopConfigScreen.MAX_CAMERA_HEIGHT = 10
ShopConfigScreen.MAX_CAMERA_DISTANCE = 17.5
ShopConfigScreen.CAMERA_MAX_DISTANCE_FACTOR = 3
ShopConfigScreen.DEFAULT_PREVIEW_SIZE = 5.2
ShopConfigScreen.CAMERA_MIN_DISTANCE_FACTOR = 0.8
ShopConfigScreen.CAMERA_MIN_DISTANCE_TO_X_OFFSET_FACTOR = 0.015
ShopConfigScreen.FAR_BLUR_END_DISTANCE = 100
ShopConfigScreen.INITIAL_CAMERA_ROTATION = {13.5, -135, 0}
ShopConfigScreen.MOUSE_SPEED_MULTIPLIER = 2
ShopConfigScreen.MIN_MOUSE_DRAG_INPUT = 0.02 * InputBinding.MOUSE_MOVE_BASE_FACTOR
ShopConfigScreen.NO_VEHICLE = {delete = function()
end}
ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG = "motor"
ShopConfigScreen.STORE_ITEM_FILL_UNIT_CONFIG = "fillUnit"
function ShopConfigScreen.register()
  local v0 = ShopConfigScreen.new()
  v1:loadGui("dataS/gui/ShopConfigScreen.xml", "ShopConfigScreen", v0)
  return v0
end
function ShopConfigScreen.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2.loadRequestIdWorkshop = nil
  v2.loadRequestIdLicensePlateBox = nil
  v2:registerControls(ShopConfigScreen.CONTROLS)
  local v3 = Overlay.new(ShopConfigScreen.FADE_TEXTURE_PATH, 0, 0, 1, 1)
  v2.fadeOverlay = v3
  v3:setColor(0, 0, 0, 0)
  v2.fadeInAnimation = TweenSequence.NO_SEQUENCE
  v2.fadeOutAnimation = TweenSequence.NO_SEQUENCE
  v2.rotateInputGlyph = nil
  v2.zoomInputGlyph = nil
  v2.lastInputHelpMode = nil
  v2:createInputGlyphs()
  v2.configBasePrice = 0
  v2.totalPrice = 0
  v2.initialLeasingCosts = 0
  v2.lastMoney = 0
  v2.displayableOptionCount = 0
  v2.displayableColorCount = 0
  v2.callbackFunc = nil
  v2.requestExitCallback = u1
  v2.workshopWorldPosition = {0, 0, 0}
  v2.workshopRootNode = nil
  v2.workshopNode = nil
  v2.limitRotXDelta = 0
  v2.cameraDistance = 10
  v2.cameraMaxDistance = 20
  v2.cameraMinDistance = 1
  v2.zoomTarget = v2.cameraDistance
  v2.rotX = 0
  v2.rotY = 0
  v2.rotZ = 0
  local v4 = MathUtil.degToRad(70)
  v2.rotMinX = 0
  v2.rotMaxX = v4
  v2.focusY = 0
  v2.rotateNode = nil
  v2.cameraNode = nil
  v2.previousCamera = nil
  v2:createCamera()
  v2:resetCamera()
  v2.isLoadingInitial = false
  v2.previewVehicleSize = 0
  v2.previewVehicles = {}
  v2.previousVehicles = {}
  v2.loadingCount = 0
  v2.loadedCount = 0
  v2.loadingDelayFrames = 0
  v2.loadingDelayTime = 0
  v2.configItemCache = {}
  v2.configItemCacheLarge = {}
  v2.inputHorizontal = 0
  v2.inputVertical = 0
  v2.inputZoom = 0
  v2.eventIdUpDownController = ""
  v2.eventIdLeftRightController = ""
  v2.eventIdUpDownMouse = ""
  v2.eventIdLeftRightMouse = ""
  v2.inputDragging = false
  v2.isDragging = false
  v2.accumDraggingInput = 0
  v3 = v3:getLastInputMode()
  v2.lastInputMode = v3
  v3 = v3:getInputHelpMode()
  v2.lastInputHelpMode = v3
  v2.currentConfigSet = 1
  v2:createFadeAnimations()
  v3:subscribe(BuyVehicleEvent, v2.onVehicleBought, v2)
  v3:subscribe(MessageType.STORE_ITEMS_RELOADED, v2.onStoreItemsReloaded, v2)
  v2.openCounter = 0
  addConsoleCommand("gsShopUIToggle", "Toggle shop config screen UI visiblity", "consoleCommandUIToggle", v2)
  return v2
end
function ShopConfigScreen:createFromExistingGui(v1)
  removeConsoleCommand("gsShopUIToggle")
  local v2 = ShopConfigScreen.new()
  local v9, v10, v11 = unpack(self.workshopWorldPosition)
  v2.workshopFilename = self.workshopFilename
  v12:delete()
  v12:delete()
  v12:loadGui(self.xmlFilename, v1, v2)
  g_shopConfigScreen = v2
  v2:createWorkshop(v2.workshopFilename, v9, v10, v11)
  v2.openCounter = 1
  v2:setReturnScreen(self.returnScreenName)
  v2:setStoreItem(self.storeItem, nil, self.saleItem, nil, self.configurations)
  v2.openCounter = 0
  v2:setCallbacks(self.callbackFunc, self.target)
  return v2
end
function ShopConfigScreen:createInputGlyphs()
  local v2 = unpack(ShopConfigScreen.SIZE.INPUT_GLYPH)
  local v1, v2 = getNormalizedScreenValues(...)
  local v3 = InputGlyphElement.new(g_inputDisplayManager, v1, v2)
  self.rotateInputGlyph = v3
  v3:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_RIGHT)
  v3 = InputGlyphElement.new(g_inputDisplayManager, v1, v2)
  self.zoomInputGlyph = v3
  v3:setAlignment(Overlay.ALIGN_VERTICAL_MIDDLE, Overlay.ALIGN_HORIZONTAL_RIGHT)
end
function ShopConfigScreen:createFadeAnimations()
  local v1 = TweenSequence.new(self)
  local fadeIn = Tween.new(self.fadeScreen, 1, 0, 300)
  v1:addTween(fadeIn)
  self.fadeInAnimation = v1
  local v3 = TweenSequence.new(self)
  local fadeOut = Tween.new(self.fadeScreen, 0, 1, 300)
  v3:addTween(fadeOut)
  self.fadeOutAnimation = v3
end
function ShopConfigScreen:fadeScreen(alpha)
  v2:setColor(nil, nil, nil, alpha)
end
function ShopConfigScreen:createWorkshop(assetPath, posX, posY, posZ)
  self.workshopWorldPosition = {posX, posY, posZ}
  local v5 = createTransformGroup("ShopConfigWorkshop")
  self.workshopRootNode = v5
  local v6 = getRootNode()
  link(v6, self.workshopRootNode)
  setTranslation(self.workshopRootNode, posX, posY, posZ)
  setVisibility(self.workshopRootNode, false)
  v5 = v5:loadI3DFileAsync(assetPath, false, true, self.onWorkshopLoaded, self, nil)
  self.loadRequestIdWorkshop = v5
  v5 = v5:loadSharedI3DFileAsync(ShopConfigScreen.LICENSE_PLATE_PATH, false, true, self.onLicensePlateBoxLoaded, self, nil)
  self.loadRequestIdLicensePlateBox = v5
end
function ShopConfigScreen:onWorkshopLoaded(node, failedReason, args)
  if node ~= 0 then
    self.loadRequestIdWorkshop = nil
    self.workshopNode = node
    removeFromPhysics(self.workshopNode)
    setTranslation(self.workshopNode, 0, 0, 0)
    link(self.workshopRootNode, self.workshopNode)
    addToPhysics(self.workshopNode)
    self.workshopColorNodes = {}
    I3DUtil.getNodesByShaderParam(node, "colorScale", self.workshopColorNodes, true)
    if 0 < #self.workshopColorNodes then
      local v5 = getShaderParameter(self.workshopColorNodes[1], "colorScale")
      self.workshopDefaultColor = {}
    end
  end
end
function ShopConfigScreen:onLicensePlateBoxLoaded(node, failedReason, args)
  if node ~= 0 then
    self.creationBox = node
    setVisibility(node, false)
  end
end
function ShopConfigScreen:createCamera()
  local v1 = createCamera("VehicleConfigCamera", 1.0471975511965976, ShopConfigScreen.NEAR_CLIP_DISTANCE, 100)
  self.cameraNode = v1
  setTranslation(self.cameraNode, 0, 0, -self.cameraDistance)
  setRotation(self.cameraNode, 0, 3.141592653589793, 0)
  v1 = createTransformGroup("VehicleConfigCameraTarget")
  self.rotateNode = v1
  local v2 = getRootNode()
  link(v2, self.rotateNode)
  setRotation(self.rotateNode, 0, 3.141592653589793, 0)
  setTranslation(self.rotateNode, 0, 0, 0)
  link(self.rotateNode, self.cameraNode)
end
function ShopConfigScreen:resetCamera()
  local v1, v2, v3 = unpack(ShopConfigScreen.INITIAL_CAMERA_ROTATION)
  local v4 = MathUtil.degToRad(v1)
  local v5 = MathUtil.degToRad(v2)
  local v6 = MathUtil.degToRad(v3)
  self.rotX = v4
  self.rotY = v5
  self.rotZ = v6
  self.cameraDistance = (self.cameraMinDistance + self.cameraMaxDistance) * 0.5
end
function ShopConfigScreen:delete()
  v1:unsubscribeAll(self)
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  v1:delete()
  self:deletePreviewVehicles()
  if self.workshopNode ~= nil then
    delete(self.workshopNode)
    self.workshopNode = nil
  end
  if self.creationBox ~= nil then
    delete(self.creationBox)
    self.creationBox = nil
  end
  if self.workshopRootNode ~= nil then
    delete(self.workshopRootNode)
    self.workshopRootNode = nil
  end
  if self.rotateNode ~= nil then
    delete(self.rotateNode)
  end
  if self.loadRequestIdWorkshop ~= nil then
    v1:cancelStreamI3DFile(self.loadRequestIdWorkshop)
  end
  if self.loadRequestIdLicensePlateBox ~= nil then
    v1:releaseSharedI3DFile(self.loadRequestIdLicensePlateBox)
    self.loadRequestIdLicensePlateBox = nil
  end
  for v4, v5 in ipairs(self.configItemCache) do
    v5:delete()
  end
  self.configItemCache = {}
  for v4, v5 in ipairs(self.configItemCacheLarge) do
    v5:delete()
  end
  self.configItemCacheLarge = {}
  removeConsoleCommand("gsShopUIToggle")
  v2 = v2:superClass()
  v2.delete(self)
end
function ShopConfigScreen:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:unlinkElement()
  v1:unlinkElement()
  v1:unlinkElement()
end
function ShopConfigScreen:updateBalanceText()
  local v1 = v1:getMoney()
  self.lastMoney = v1
  v2:setValue(v1)
  if 0 < v1 then
    v2:applyProfile(ShopConfigScreen.GUI_PROFILE.SHOP_MONEY)
    return
  end
  v2:applyProfile(ShopConfigScreen.GUI_PROFILE.SHOP_MONEY_NEGATIVE)
end
function ShopConfigScreen:processStoreItemUpkeep(storeItem, realItem, saleItem)
  if storeItem.dailyUpkeep ~= nil then
    for v8, v9 in pairs(self.configurations) do
      if not (storeItem.configurations[v8] ~= nil) then
        continue
      end
      if not (storeItem.configurations[v8][v9] ~= nil) then
        continue
      end
    end
  end
  return v4
end
function ShopConfigScreen:processStoreItemPowerOutput(storeItem, realItem, saleItem)
  if storeItem.specs ~= nil and storeItem.specs.power ~= nil and self.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG] ~= nil and storeItem.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG] ~= nil then
    local v6 = Utils.getNoNil(storeItem.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG][self.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG]].power, storeItem.specs.power)
  end
  return v4
end
function ShopConfigScreen:processStoreItemFuelCapacity(storeItem, realItem, saleItem, fuelFillType)
  if storeItem.specs ~= nil then
    if not storeItem.specs.fuel then
    end
    if v6 ~= nil then
      if self.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG] ~= nil and storeItem.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG] ~= nil then
        local v9 = Utils.getNoNil(storeItem.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG][self.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG]].consumerConfigurationIndex, 1)
      end
      if v6.consumers[v7] ~= nil then
        for v13, v14 in ipairs(v6.consumers[v7]) do
          local v15 = v15:getFillTypeIndexByName(v14.fillType)
          if not (v15 == fuelFillType) then
            continue
          end
          if not (v14.capacity ~= nil) then
            break
          end
          return v14.capacity
          break
        end
      end
      if self.configurations[ShopConfigScreen.STORE_ITEM_FILL_UNIT_CONFIG] ~= nil and storeItem.configurations[ShopConfigScreen.STORE_ITEM_FILL_UNIT_CONFIG] ~= nil then
      end
      if v6.fillUnits[v10] ~= nil and v6.fillUnits[v10][v8] ~= nil then
        v12 = math.max(v6.fillUnits[v10][v8].capacity, v5 or 0)
      end
    end
  end
  return v5
end
function ShopConfigScreen:processStoreItemMaxSpeed(storeItem, realItem, saleItem)
  if storeItem.specs ~= nil and storeItem.specs.maxSpeed ~= nil and self.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG] ~= nil and storeItem.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG] ~= nil then
    local v6 = Utils.getNoNil(storeItem.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG][self.configurations[ShopConfigScreen.STORE_ITEM_MOTOR_CONFIG]].maxSpeed, storeItem.specs.maxSpeed)
  end
  return v4
end
function ShopConfigScreen:processStoreItemCapacity(storeItem, realItem, saleItem)
  if storeItem.specs ~= nil and storeItem.specs.capacity ~= nil then
    return FillUnit.getSpecValueCapacity(storeItem, realItem, self.configurations, saleItem, true)
  end
  return 0, nil
end
function ShopConfigScreen.processStoreItemWeight(v0, v1, v2, v3)
  if v1.specs ~= nil and v1.specs.weight ~= nil then
    local v4 = Vehicle.getSpecValueWeight(v1, v2, nil, v3, true)
    if v1.specs.additionalWeight ~= nil then
      local v6 = Vehicle.getSpecValueAdditionalWeight(v1, v2, nil, v3, true)
    end
    return v4, v5
  end
  return 0, 0
end
function ShopConfigScreen:processStoreItemWorkingWidth(storeItem, realItem, saleItem)
  if storeItem.specs ~= nil then
    if storeItem.specs.workingWidth ~= nil then
      return storeItem.specs.workingWidth
    end
    if storeItem.specs.workingWidthConfig ~= nil then
      local v5 = Vehicle.getSpecValueWorkingWidthConfig(storeItem, realItem, self.configurations, saleItem, true)
      return v5 or 0
    end
  end
  return 0
end
function ShopConfigScreen.processStoreItemWorkingSpeed(v0, v1, v2, v3)
  if v1.specs ~= nil and v1.specs.speedLimit ~= nil then
    return v1.specs.speedLimit
  end
  return 0
end
function ShopConfigScreen:processStoreItemPowerNeeded(storeItem, realItem, saleItem)
  if storeItem.specs ~= nil and storeItem.specs.neededPower ~= nil then
    if not storeItem.specs.neededPower.config[self.configurations.powerConsumer] and not storeItem.specs.neededPower.base then
    end
    return v5
  end
  return 0
end
function ShopConfigScreen.processStoreItemBalerBaleSize(v0, v1)
  if v1.specs ~= nil then
    if not v1.specs.balerBaleSizeRound then
    end
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L48
    local v3 = Baler.getSpecValueBaleSize(v1, nil, nil, nil, false, false, v2.isRoundBaler)
    if v2.isRoundBaler then
      return v3, ShopConfigScreen.GUI_PROFILE.BALE_SIZE_ROUND
    end
    return v3, ShopConfigScreen.GUI_PROFILE.BALE_SIZE_SQUARE
    return
  end
  return ""
end
function ShopConfigScreen.processStoreItemBaleWrapperBaleSize(v0, v1)
  if v1.specs ~= nil then
    local v2 = BaleWrapper.getSpecValueBaleSizeRound(v1, nil, nil, nil, false, false)
    local v3 = BaleWrapper.getSpecValueBaleSizeSquare(v1, nil, nil, nil, false, false)
    if v2 == nil and v3 == nil then
      local v4 = InlineWrapper.getSpecValueBaleSizeRound(v1, nil, nil, nil, false, false)
      v4 = InlineWrapper.getSpecValueBaleSizeSquare(v1, nil, nil, nil, false, false)
    end
    return v2, v3
  end
end
function ShopConfigScreen.processStoreItemBaleLoaderBaleSize(v0, v1)
  if v1.specs ~= nil then
    local v2 = BaleLoader.getSpecValueBaleSizeRound(v1, nil, nil, nil, false, false)
    local v3 = BaleLoader.getSpecValueBaleSizeSquare(v1, nil, nil, nil, false, false)
    return v2, v3
  end
end
function ShopConfigScreen:processStoreItemWoodHarvesterMaxTreeSize(storeItem, realItem, saleItem)
  if storeItem.specs ~= nil and storeItem.specs.woodHarvesterMaxTreeSize ~= nil then
    return WoodHarvester.getSpecValueMaxTreeSize(storeItem, realItem, self.configurations, saleItem, false)
  end
  return nil
end
function ShopConfigScreen:processAttributeData(storeItem, vehicle, saleItem)
  if storeItem.bundleInfo == nil then
  else
    -- TODO: structure LOP_FORNPREP (pc 49, target 64)
    table.insert({}, storeItem.bundleInfo.bundleItems[1].item)
    -- TODO: structure LOP_FORNLOOP (pc 63, target 50)
  end
  for v31, v32 in ipairs(v27) do
    StoreItemUtil.loadSpecsFromXML(v32)
    local v34 = self:processStoreItemUpkeep(v32, self.previewVehicles[v31] or vehicle, saleItem)
    v34 = self:processStoreItemPowerOutput(v32, self.previewVehicles[v31] or vehicle, saleItem)
    if not v6 then
      v34 = Motorized.getSpecValueTransmission(storeItem, self.previewVehicles[v31] or vehicle, nil, saleItem)
    end
    v34 = self:processStoreItemFuelCapacity(v32, v33, saleItem, FillType.DIESEL)
    v34 = self:processStoreItemFuelCapacity(v32, v33, saleItem, FillType.ELECTRICCHARGE)
    v34 = self:processStoreItemFuelCapacity(v32, v33, saleItem, FillType.METHANE)
    v34 = self:processStoreItemFuelCapacity(v32, v33, saleItem, FillType.DEF)
    local v34, v35 = self:processStoreItemCapacity(v32, v33, saleItem)
    if v13 ~= nil and v35 ~= nil and v35 ~= v13 then
      local v39 = tostring(storeItem.xmlFilename)
      print("Warning: Bundled store items have different fill capacity units. Check " .. v39)
    end
    local v36, v37 = self:processStoreItemWeight(v32, v33, saleItem)
    local v40 = self:processStoreItemWorkingWidth(v32, v33, saleItem)
    local v38 = math.max(...)
    v40 = self:processStoreItemWorkingSpeed(v32, v33, saleItem)
    v38 = math.max(...)
    v40 = self:processStoreItemMaxSpeed(v32, v33, saleItem)
    v38 = math.max(...)
    v38 = self:processStoreItemPowerNeeded(v32, v33, saleItem)
    v38, v39 = self:processStoreItemBalerBaleSize(v32)
    if v20 == "" then
    end
    local v40, v41 = self:processStoreItemBaleWrapperBaleSize(v32)
    local v42, v43 = self:processStoreItemBaleLoaderBaleSize(v32)
    v42 = self:processStoreItemWoodHarvesterMaxTreeSize(v32)
  end
  if vehicle ~= nil then
    v29 = Wheels.getTireNames(vehicle)
    for v31, v32 in ipairs(...) do
      if v19 ~= "" then
      end
    end
  end
  if v4 ~= 0 then
    local v33 = v33:getText(ShopConfigScreen.L10N_SYMBOL.MAINTENANCE_COST)
    v34 = v34:formatMoney(v4, 2)
    v32 = string.format(...)
    table.insert({}, {profile = ShopConfigScreen.GUI_PROFILE.MAINTENANCE_COST, value = v32})
  end
  if v5 ~= 0 then
    v29, v30 = v29:getPower(v5)
    v35 = v35:getText(ShopConfigScreen.L10N_SYMBOL.POWER)
    v36 = MathUtil.round(v30)
    v37 = MathUtil.round(v29)
    v34 = string.format(...)
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.POWER, value = v34})
  end
  if v6 ~= nil then
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.TRANSMISSION, value = v6})
  end
  if v7 ~= 0 then
    if v10 == 0 then
      v33 = v33:getText(ShopConfigScreen.L10N_SYMBOL.FUEL)
      v35 = v35:getText(ShopConfigScreen.L10N_SYMBOL.UNIT_LITER)
      v32 = string.format(...)
      table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.FUEL, value = v32})
      -- goto L580  (LOP_JUMP +161)
    end
    -- if 0 >= v10 then goto L580 end
    v33 = v33:getText(ShopConfigScreen.L10N_SYMBOL.FUEL_DEF)
    v35 = v35:getText(ShopConfigScreen.L10N_SYMBOL.UNIT_LITER)
    v37 = v37:getText(ShopConfigScreen.L10N_SYMBOL.UNIT_LITER)
    v38 = v38:getText(ShopConfigScreen.L10N_SYMBOL.DEF_SHORT)
    v32 = string.format(...)
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.FUEL, value = v32})
  elseif v8 ~= 0 then
    v33 = v33:getText(ShopConfigScreen.L10N_SYMBOL.FUEL)
    v35 = v35:getText(ShopConfigScreen.L10N_SYMBOL.UNIT_KW)
    v32 = string.format(...)
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.ELECTRICCHARGE, value = v32})
  else
    if v9 ~= 0 then
      v33 = v33:getText(ShopConfigScreen.L10N_SYMBOL.FUEL)
      v35 = v35:getText(ShopConfigScreen.L10N_SYMBOL.UNIT_KG)
      v32 = string.format(...)
      table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.METHANE, value = v32})
    end
  end
  if v11 ~= 0 then
    v33 = v33:getText(ShopConfigScreen.L10N_SYMBOL.MAX_SPEED)
    v36 = v36:getSpeed(v11)
    v34 = string.format(...)
    v35 = v35:getSpeedMeasuringUnit()
    v32 = string.format(...)
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.MAX_SPEED, value = v32})
  end
  if v12 ~= 0 and v13 ~= nil then
    v29 = v13:sub(1, 6)
    if v29 == "$l10n_" then
      v29 = v13:sub(7)
    end
    v33 = v33:getText(ShopConfigScreen.L10N_SYMBOL.CAPACITY)
    v35 = v35:getText(v13)
    v32 = string.format(...)
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.CAPACITY, value = v32})
  end
  if v14 ~= 0 then
    v32 = v32:formatMass(v14)
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.WEIGHT, value = v32})
  end
  if v15 ~= 0 then
    v32 = v32:formatMass(v15)
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.ADDITIONAL_WEIGHT, value = v32})
  end
  if v18 ~= 0 then
    v29, v30 = v29:getPower(v18)
    v35 = v35:getText(ShopConfigScreen.L10N_SYMBOL.POWER_REQUIREMENT)
    v36 = MathUtil.round(v30)
    v37 = MathUtil.round(v29)
    v34 = string.format(...)
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.POWER_REQUIREMENT, value = v34})
  end
  if v16 ~= 0 then
    v33 = v33:getText(ShopConfigScreen.L10N_SYMBOL.WORKING_WIDTH)
    v34 = v34:formatNumber(v16, 1, true)
    v32 = string.format(...)
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.WORKING_WIDTH, value = v32})
  end
  if v17 ~= 0 then
    v33 = v33:getText(ShopConfigScreen.L10N_SYMBOL.WORKING_SPEED)
    v36 = v36:getSpeed(v17)
    v34 = string.format(...)
    v35 = v35:getSpeedMeasuringUnit()
    v32 = string.format(...)
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.WORKING_SPEED, value = v32})
  end
  if v19 ~= "" then
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.WHEELS, value = v19})
  end
  if v20 ~= nil and v20 ~= "" then
    table.insert(v28, {profile = v21, value = v20})
  end
  if v22 ~= nil then
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.BALEWRAPPER_SIZE_ROUND, value = v22})
  end
  if v23 ~= nil then
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.BALEWRAPPER_SIZE_SQUARE, value = v23})
  end
  if v24 ~= nil then
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.BALE_SIZE_ROUND, value = v24})
  end
  if v25 ~= nil then
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.BALE_SIZE_SQUARE, value = v25})
  end
  if v26 ~= nil then
    table.insert(v28, {profile = ShopConfigScreen.GUI_PROFILE.MAX_TREE_SIZE, value = v26})
  end
  self:registerCustomSpecValues(v28, v27, vehicle, saleItem)
  -- TODO: structure LOP_FORNPREP (pc 1011, target 1021)
  v32:delete()
  -- TODO: structure LOP_FORNLOOP (pc 1020, target 1012)
  for v32, v33 in ipairs(v28) do
    v34 = v34:clone(self.attributesLayout)
    v35 = v34:getDescendantByName("icon")
    v36 = v34:getDescendantByName("text")
    v34:reloadFocusHandling(true)
    v35:applyProfile(v33.profile)
    v36:setText(v33.value)
  end
  v29:invalidateLayout()
end
function ShopConfigScreen.registerCustomSpecValues(v0, storeItem, vehicle, saleItem, v4)
end
function ShopConfigScreen:getConfigurationCostsAndChanges(storeItem, vehicle, saleItem)
  if vehicle ~= nil then
    for v10, v11 in pairs(self.configurations) do
      if not (vehicle.configurations[v10] ~= v11) then
        continue
      end
      local v12 = ConfigurationUtil.hasBoughtConfiguration(self.vehicle, v10, v11)
      if not not v12 then
        continue
      end
    end
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L80
    v7 = v7:getLicensePlatesDataIsEqual(self.licensePlateData)
    -- if v7 then goto L80 end
    return v4, v5, true
  end
  if saleItem ~= nil then
    v7, v8 = v7:getBuyPrice(storeItem, self.configurations, saleItem)
    return v7 - v8, v8, true
  end
  if storeItem ~= nil then
    v7, v8 = v7:getBuyPrice(storeItem, self.configurations)
  end
  return v4, v5, v6
end
function ShopConfigScreen:updatePriceData(basePrice, upgradePrice)
  self.totalPrice = basePrice + upgradePrice
  self.initialLeasingCosts = 0
  local saleItem = saleItem:getInitialLeasingPrice(self.totalPrice)
  self.initialLeasingCosts = saleItem
  local v5 = v5:formatMoney(basePrice, 0, true, false)
  saleItem:setText(...)
  local v7 = v7:formatMoney(upgradePrice, 0, true, false)
  saleItem:setText("+ " .. v7)
  v5 = v5:formatMoney(self.totalPrice, 0, true, false)
  saleItem:setText(...)
end
function ShopConfigScreen:updateData(storeItem, vehicle, saleItem)
  local v4, v5, v6 = self:getConfigurationCostsAndChanges(storeItem, vehicle, saleItem)
  self:updatePriceData(v4, v5)
  v7:setDisabled(not v6)
  if storeItem.bundleInfo ~= nil then
    -- if #v1.bundleInfo.bundleItems then goto L28 end
  end
  self.loadingCount = 1
  self.loadedCount = 0
  self:loadCurrentConfiguration(storeItem)
end
function ShopConfigScreen.getDefaultConfigurationColorIndex(v0, storeItem, vehicle, saleItem)
  for v8, v9 in pairs(vehicle) do
    if not v9.isDefault then
      continue
    end
    break
  end
  if saleItem ~= nil then
  end
  if v4 == nil then
  end
  return v4
end
function ShopConfigScreen:updateButtons(storeItem, vehicle, saleItem)
  if vehicle == nil and storeItem.allowLeasing and saleItem ~= nil then
  end
  v4:setVisible(v6)
  local v4 = v4:getText(ShopConfigScreen.L10N_SYMBOL.BUTTON_BUY)
  if vehicle ~= nil then
    local v6 = v6:getText(ShopConfigScreen.L10N_SYMBOL.BUTTON_CONFIGURE)
  end
  v6:setText(v4)
  v6:applyProfile(v5)
  v6:invalidateLayout()
end
function ShopConfigScreen:loadCurrentConfiguration(storeItem, vehicleIndex, offsetVector, rotationOffsetVector, preSelectedConfigurations, isBundleItem, bundleRootItem)
  if not vehicleIndex then
  end
  if storeItem.bundleInfo ~= nil then
    for v11, v12 in ipairs(storeItem.bundleInfo.bundleItems) do
      self:loadCurrentConfiguration(v12.item, vehicleIndex, v12.offset, v12.rotationOffset, v12.preSelectedConfigurations, true, storeItem)
    end
    return
  end
  v9 = v9:getItemByXMLFilename(storeItem.xmlFilename)
  for v13, v14 in pairs(self.configurations) do
    if not (v9.configurations[v13] ~= nil) then
      continue
    end
    v8[v13] = v14
  end
  if preSelectedConfigurations ~= nil then
    for v13, v14 in pairs(preSelectedConfigurations) do
      if not not v14.allowChange then
        continue
      end
      v8[v13] = v14.configValue
      self.configurations[v13] = v14.configValue
    end
  end
  v11 = loadXMLFile("LoadConfigStoreItem", storeItem.xmlFilename)
  v12 = getXMLString(v11, "vehicle#type")
  delete(v11)
  if self.configurations ~= nil and self.configurations.vehicleType and storeItem.configurations.vehicleType ~= nil then
  end
  v13 = v13:getTypeByName(v12)
  local v14, v15 = Utils.getModNameAndBaseDirectory(v10)
  if v14 ~= nil then
    if g_modIsLoaded[v14] ~= nil then
      -- if g_modIsLoaded[v14] then goto L159 end
    end
    print("Error: Mod '" .. v14 .. "' of vehicle '" .. v10 .. "'")
    print("       is not loaded. This vehicle will not be loaded.")
    self:onVehicleLoaded(nil, VehicleLoadingUtil.VEHICLE_LOAD_ERROR, vehicleIndex)
    return
    if v13 == nil then
      local v16 = v16:getTypeByName(v14 .. "." .. v12)
    end
  end
  if v13 == nil then
    Logging.error("Error: Unable to find vehicle type name '%s' for '%s'", v12, v10)
    return
  end
  v16 = ClassUtil.getClassObject(v13.className)
  local v17 = v16.new(true, true)
  local v18, v19, v20 = unpack(self.workshopWorldPosition)
  if offsetVector ~= nil then
  end
  if rotationOffsetVector ~= nil then
  end
  if bundleRootItem ~= nil then
  end
  if v24 ~= nil then
  end
  if not storeItem.shopIgnoreLastComponentPositions then
    for v30, v31 in ipairs(self.previewVehicles) do
      if not (v31.configFileName == storeItem.xmlFilename) then
        continue
      end
      for v35, v36 in ipairs(v31.components) do
        local v39 = getWorldTranslation(v36.node)
        local v40 = getWorldRotation(v36.node)
        v26[v35] = {{}, {}}
      end
    end
  end
  if not isBundleItem then
    v27 = StoreItemUtil.getSizeValues(storeItem.xmlFilename, "vehicle", storeItem.rotation, v8)
  end
  if v25 ~= nil then
  end
  v30 = MathUtil.round(storeItem.shopFoldingState, 0)
  if v30 ~= 1 then
  end
  v28.foldableInvertFoldState = true
  v28.foldableFoldingTime = storeItem.shopFoldingTime
  v27.additionalLoadParameters = v28
  v27.configurations = v8
  v27.componentPositions = v26
  v28:setVisible(true)
  v17:load(v27, self.onVehicleLoaded, self, {vehicleIndex = vehicleIndex, openCounter = self.openCounter})
end
function ShopConfigScreen:onVehicleLoaded(vehicle, loadingState, asyncArguments)
  if loadingState == VehicleLoadingUtil.VEHICLE_LOAD_OK then
    if asyncArguments.openCounter ~= self.openCounter then
      vehicle:delete()
      return
    end
    if not self.isLoadingInitial then
      -- if not v0.isOpen then goto L48 end
    end
    if self.previewVehicles[asyncArguments.vehicleIndex] ~= nil then
      self.previewVehicles[asyncArguments.vehicleIndex]:removeFromPhysics()
      table.insert(self.previousVehicles, self.previewVehicles[asyncArguments.vehicleIndex])
    end
    self.previewVehicles[asyncArguments.vehicleIndex] = vehicle
    vehicle:setVisibility(false)
    -- goto L58  (LOP_JUMP +10)
    vehicle:delete()
    self.previewVehicles[asyncArguments.vehicleIndex] = nil
    return
    self:processAttributeData(self.storeItem, vehicle)
    if vehicle.setLicensePlatesData ~= nil and vehicle.getHasLicensePlates ~= nil then
      local v4 = vehicle:getHasLicensePlates()
      if v4 then
        local v4, v5 = vehicle:getLicensePlateDialogSettings()
        self.licensePlateData.defaultPlacementIndex = v4
        self.licensePlateData.hasFrontPlate = v5
        if not self.licensePlateData.customized and v4 ~= nil then
          self.licensePlateData.placementIndex = v4
        end
        vehicle:setLicensePlatesData(self.licensePlateData)
        self:updateLicensePlateGraphics()
      end
    end
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L162
    if vehicle.addDamageAmount ~= nil then
      vehicle:addDamageAmount(self.saleItem.damage, true)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L162
    vehicle:addWearAmount(self.saleItem.wear, true)
  else
    if vehicle ~= nil then
      vehicle:delete()
    end
    if g_currentMission ~= nil then
      local v6 = tostring(self.storeItem.xmlFilename)
      Logging.error(...)
      self.callbackFunc = nil
      self:onClickBack()
    end
    return
  end
  self.loadedCount = self.loadedCount + 1
  if self.loadedCount ~= self.loadingCount then
  end
  if true then
    if 1 < #self.previewVehicles and self.storeItem.bundleInfo ~= nil then
      for v8, v9 in pairs(self.storeItem.bundleInfo.attacherInfo) do
        self.previewVehicles[v9.bundleElement0]:attachImplement(self.previewVehicles[v9.bundleElement1], v9.inputAttacherJointIndex, v9.attacherJointIndex, true, nil, false, true)
      end
    end
    if self.isLoadingInitial then
    else
    end
    self.loadingDelayTime = v5
    self.loadingDelayFrames = 3
  end
end
function ShopConfigScreen:onFinishedLoading()
  -- TODO: structure LOP_FORNPREP (pc 5, target 17)
  v4:delete()
  self.previousVehicles[#self.previousVehicles] = nil
  -- TODO: structure LOP_FORNLOOP (pc 16, target 6)
  for v4, v5 in pairs(self.previewVehicles) do
    v5:setVisibility(true)
  end
  self.previewVehicleSize = 0
  for v4, v5 in pairs(self.previewVehicles) do
    local v6 = math.max(v5.size.width, v5.size.length, self.storeItem.shopHeight * 1.5)
    self.previewVehicleSize = self.previewVehicleSize + v6
  end
  if self.previewVehicleSize == 0 then
    self.previewVehicleSize = ShopConfigScreen.DEFAULT_PREVIEW_SIZE
  end
  storeItem = math.min(self.previewVehicleSize * ShopConfigScreen.CAMERA_MAX_DISTANCE_FACTOR, ShopConfigScreen.MAX_CAMERA_DISTANCE)
  self.cameraMaxDistance = storeItem
  self.cameraMinDistance = self.previewVehicleSize * ShopConfigScreen.CAMERA_MIN_DISTANCE_FACTOR + ShopConfigScreen.NEAR_CLIP_DISTANCE
  self.focusY = self.previewVehicleSize * 0.1
  if self.isLoadingInitial then
    storeItem = math.min(self.cameraMinDistance * 1.5, self.cameraMaxDistance)
    self.cameraDistance = storeItem
    self.zoomTarget = self.cameraDistance
    storeItem = math.asin(ShopConfigScreen.NEAR_CLIP_DISTANCE / self.cameraMinDistance)
    self.rotMinX = storeItem
  end
  if self.storeItem.shopDynamicTitle and self.previewVehicles[1] ~= nil then
    v4 = self.previewVehicles[1]:getBrand()
    if not v4 then
    end
    vehicle = vehicle:getBrandByIndex(v4)
    if not self.storeItem.customBrandIcon then
    end
    saleItem:setImageFilename(v5)
    if not self.storeItem.customBrandIconOffset then
    end
    saleItem:setPosition(v7 * self.shopConfigBrandIcon.size[1] * -1, nil)
    v5 = storeItem:getName()
    if not v5 then
    end
    saleItem:setText(v5)
  end
  self.isLoadingInitial = false
  storeItem:setVisible(false)
end
function ShopConfigScreen:updateDisplay(storeItem, vehicle, saleItem, doNotReload)
  if storeItem.shopDynamicTitle and vehicle ~= nil then
    local v7 = vehicle:getBrand()
    v7 = vehicle:getName()
  end
  v7 = v7:getBrandByIndex(v5)
  if self.shopConfigBrandIcon == nil then
    printCallstack()
  end
  if not storeItem.customBrandIcon then
  end
  v8:setImageFilename(v10)
  if not self.storeItem.customBrandIconOffset then
  end
  v8:setPosition(v12 * self.shopConfigBrandIcon.size[1] * -1, nil)
  v8:setText(v6)
  self:updateConfigOptionsDisplay(storeItem, vehicle, saleItem)
  self:updateButtons(storeItem, vehicle, saleItem)
  if not doNotReload then
    self:updateData(storeItem, vehicle, saleItem)
  end
end
function ShopConfigScreen:setCurrentMission(currentMission)
  if currentMission ~= nil and self.shopLighting ~= nil then
    vehicle:setEnvironment(currentMission.environment)
  end
end
function ShopConfigScreen:loadMapData(mapXMLFile, missionInfo, baseDirectory)
  if not GS_IS_MOBILE_VERSION then
    local v5 = getXMLString(mapXMLFile, "map.shop#filename")
    v5 = Utils.getFilename(v5 or "$data/store/ui/shop.xml", baseDirectory)
    v5 = loadXMLFile("shopXml", v5)
    local v7 = getXMLString(v5, "shop.filename")
    if not v7 then
    end
    local v6 = v6(v7, baseDirectory)
    self.workshopFilename = v6
    v7 = getXMLFloat(v5, "shop.position#xMapPos")
    local v8 = getXMLFloat(v5, "shop.position#yMapPos")
    local v9 = getXMLFloat(v5, "shop.position#zMapPos")
    local v10 = getXMLBool(v5, "shop.lighting#isStatic")
    if v10 or false then
      v10 = LightingStatic.new()
      self.shopLighting = v10
    else
      v10 = Lighting.new()
      self.shopLighting = v10
    end
    v10:load(v5, "shop.lighting")
    delete(v5)
    self:createWorkshop(self.workshopFilename, v6, v7, v8)
  end
end
function ShopConfigScreen:unloadMapData()
  if self.workshopNode ~= nil then
    delete(self.workshopNode)
  end
  if self.workshopRootNode ~= nil then
    delete(self.workshopRootNode)
  end
  if self.shopLighting ~= nil then
    storeItem:delete()
  end
  if self.creationBox ~= nil then
    delete(self.creationBox)
    self.creationBox = nil
  end
  if self.loadRequestIdWorkshop ~= nil then
    storeItem:cancelStreamI3DFile(self.loadRequestIdWorkshop)
    self.loadRequestIdWorkshop = nil
  end
  if self.loadRequestIdLicensePlateBox ~= nil then
    storeItem:releaseSharedI3DFile(self.loadRequestIdLicensePlateBox)
    self.loadRequestIdLicensePlateBox = nil
  end
  self.shopLighting = nil
  self.workshopNode = nil
  self.workshopRootNode = nil
end
function ShopConfigScreen:setWorkshopWorldPosition(posX, posY, posZ)
  self.workshopWorldPosition = {posX, posY, posZ}
end
function ShopConfigScreen:setCallbacks(callbackFunc, target)
  self.callbackFunc = callbackFunc
  self.target = target
end
function ShopConfigScreen:deletePreviewVehicles()
  for v4, v5 in pairs(self.previewVehicles) do
    v5:delete()
  end
  self.previewVehicles = {}
end
function ShopConfigScreen:setStoreItem(storeItem, vehicle, saleItem, configBasePrice, configurations)
  self:deletePreviewVehicles()
  self.storeItem = storeItem
  self.vehicle = vehicle
  self.saleItem = saleItem
  local v6 = Utils.getNoNil(configBasePrice, 0)
  self.configBasePrice = v6
  if configurations == nil then
    if storeItem.defaultConfigurationIds ~= nil then
      for v9, v10 in pairs(storeItem.defaultConfigurationIds) do
        configurations[v9] = v10
      end
    end
    if vehicle ~= nil and vehicle.configurations ~= nil then
      for v9, v10 in pairs(vehicle.configurations) do
        configurations[v9] = v10
      end
    end
    if saleItem ~= nil and saleItem.boughtConfigurations ~= nil then
      for v9, v10 in pairs(saleItem.boughtConfigurations) do
        for v14, v15 in pairs(v10) do
          if not v15 then
            continue
          end
          configurations[v9] = v14
        end
      end
    end
  end
  self.configurations = configurations
  self.subConfigurations = {}
  self.currentConfigSet = 1
  self.isLoadingInitial = true
  v6 = v6:getAreLicensePlatesAvailable()
  if v6 then
    if vehicle ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L174
      v6 = vehicle:getLicensePlatesData()
      if v6 ~= nil and v6.characters ~= nil then
        self.licensePlateData = {variation = v6.variation, colorIndex = v6.colorIndex, placementIndex = v6.placementIndex}
        v8 = table.copy(v6.characters)
        self.licensePlateData.characters = v8
        v7, v8 = vehicle:getLicensePlateDialogSettings()
        self.licensePlateData.defaultPlacementIndex = v7
        self.licensePlateData.hasFrontPlate = v8
        -- goto L174  (LOP_JUMP +27)
      end
      v7 = v7:getLastCreatedLicensePlate()
      if not v7 then
        v7 = v7:getRandomLicensePlateData()
      end
      self.licensePlateData = v7
    else
      v6 = v6:getLastCreatedLicensePlate()
      if not v6 then
        v6 = v6:getRandomLicensePlateData()
      end
      self.licensePlateData = v6
    end
  end
  self:processStoreItemConfigurations(storeItem, vehicle, saleItem)
  self:updateDisplay(storeItem, vehicle, saleItem)
  self:resetCamera()
end
function ShopConfigScreen:setRequestExitCallback(callback)
  if not callback then
  end
  self.requestExitCallback = vehicle
end
function ShopConfigScreen:setConfigPrice(configName, configIndex, priceTextElement, vehicle)
  if vehicle ~= nil then
    local v7 = ConfigurationUtil.hasBoughtConfiguration(vehicle, configName, configIndex)
    -- if not v7 then goto L32 end
  elseif self.saleItem ~= nil then
    v7 = ConfigurationUtil.hasBoughtConfiguration(self.saleItem, configName, configIndex)
    if v7 then
    end
  end
  local v13 = v13:formatMoney(v6)
  priceTextElement:setText("+" .. v13 .. "")
  priceTextElement:setVisible(true)
end
function ShopConfigScreen:onPickColor(colorIndex, args, noUpdate)
  if colorIndex ~= nil then
    self.configurations[args.configName] = colorIndex
    if not self.storeItem.configurations[args.configName][colorIndex].uiColor then
    end
    v8[4] = 1
    local v9 = ConfigurationUtil.isColorMetallic(v7.material)
    local v10 = v6:getDescendantByName("colorImage")
    local v13 = unpack(v8)
    v10:setImageColor(...)
    v10 = v6:getDescendantByName("colorImage")
    v10:setVisible(not v9)
    v10 = v6:getDescendantByName("colorImageMetallic")
    v13 = unpack(v8)
    v10:setImageColor(...)
    v10 = v6:getDescendantByName("colorImageMetallic")
    v10:setVisible(v9)
    v10 = v10:getDescendantByName("price")
    self:setConfigPrice(vehicle, colorIndex, v10, self.vehicle)
    if not noUpdate then
      self:updateData(self.storeItem, self.vehicle, self.saleItem)
      self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CONFIG_SPRAY)
    end
  end
end
function ShopConfigScreen:selectFirstConfig()
  if self.configurationLayout.elements[1] ~= nil then
    local configIndex = self.configurationLayout.elements[1]:getDescendantByName("option")
    local priceTextElement = configIndex:getIsVisible()
    if not priceTextElement then
      priceTextElement = self.configurationLayout.elements[1]:getDescendantByName("color")
    end
    priceTextElement = configIndex:getIsVisible()
    if not priceTextElement then
      priceTextElement = configName:getDescendantByName("button")
    end
    priceTextElement:unsetFocus(configIndex)
    priceTextElement:setFocus(configIndex)
    return
  end
  local vehicle = vehicle:getFocusedElement()
  configIndex:unsetFocus(...)
  FocusManager.currentFocusData.focusElement = nil
end
function ShopConfigScreen:processStoreItemConfigurationSet(storeItem, configSet, vehicle, saleItem)
  local v6 = v6:getSortedConfigurationTypes()
  for v10, v11 in ipairs(v6) do
    local v12 = v12:getConfigurationAttribute(v11, "selectorType")
    if not (v12 ~= ConfigurationUtil.SELECTOR_COLOR) then
      continue
    end
    if storeItem.subConfigurations[v11] ~= nil then
      -- if 1 >= #v1.subConfigurations[v11].subConfigValues then goto L52 end
      local v14 = self:processStoreItemSubConfigurationOption(storeItem, v11, vehicle, saleItem)
      table.insert(v5, v14)
    else
      if not (storeItem.configurations[v11] ~= nil) then
        continue
      end
      if not (1 < #storeItem.configurations[v11]) then
        continue
      end
      if not (configSet.configurations[v11] == nil) then
        continue
      end
      v14 = self:processStoreItemConfigurationOption(storeItem, v11, storeItem.configurations[v11], vehicle, nil, saleItem)
      table.insert(v5, v14)
    end
  end
  return v5
end
function ShopConfigScreen:processStoreItemSubConfigurationOption(storeItem, configName, vehicle, saleItem)
  local v11 = v11:getConfigurationDescByName(configName)
  if vehicle ~= nil then
    v11 = StoreItemUtil.getSubConfigurationIndex(storeItem, configName, vehicle.configurations[configName])
  end
  v9.selectedIndex = v10
  self.subConfigurations[configName] = v10
  for v14, v15 in pairs(v5.subConfigValues) do
    local v16 = type(v15)
    if v16 == "table" then
      table.insert(v9.texts, v15.title)
      table.insert(v7, v15.icon)
    else
      table.insert(v9.texts, v15)
    end
    v16 = StoreItemUtil.getSubConfigurationItems(storeItem, configName, v14)
    local v17 = self:processStoreItemConfigurationOption(storeItem, configName, v16, vehicle, true, saleItem)
    table.insert(v9.subConfigOptions, v17)
  end
  if 0 < #v7 then
    v9.icons = v7
  end
  return v9
end
function ShopConfigScreen.processStoreItemConfigurationOption(v0, configName, configIndex, priceTextElement, vehicle, v5)
  local v7 = v7:getConfigurationAttribute(configIndex, "title")
  for v14, v15 in ipairs(priceTextElement) do
    if v15.isDefault then
      v6.defaultIndex = v10
    end
    if configName.bundleInfo ~= nil then
      for v20, v21 in ipairs(configName.bundleInfo.bundleItems) do
        if not (v21.preSelectedConfigurations ~= nil) then
          continue
        end
        if not (v21.preSelectedConfigurations[configIndex] ~= nil) then
          continue
        end
        if v15.index == v21.preSelectedConfigurations[configIndex].configValue then
          v6.defaultIndex = v10
        end
        if not v22.allowChange then
          v6.isDisabled = true
        end
        if not v22.hideOption then
          continue
        end
        return
      end
    end
    if not v8 then
    end
    if not v16 then
      continue
    end
    table.insert(v6.texts, v15.name)
    table.insert(v6.options, v15)
    if v15.brandIndex ~= nil then
      v17 = v17:getBrandIconByIndex(v15.brandIndex)
      if v17 ~= nil then
        table.insert(v6.icons, v17)
      end
    end
    if #v6.icons ~= #v6.texts then
      table.insert(v6.icons, v15.name)
    end
  end
  if vehicle ~= nil then
    for v15, v16 in ipairs(priceTextElement) do
      if not (v16.index == v11) then
        continue
      end
      break
    end
  end
  v6.defaultIndex = v7
  if not v8 then
  end
  v6.title = v11
  if not v9 then
    v6.icons = nil
  end
  if #v6.options <= 1 and not v5 then
    return
  end
  return v6
end
function ShopConfigScreen:processStoreItemColorOption(storeItem, configName, colorItems, colorPickerIndex, vehicle, saleItem)
  for v11, v12 in ipairs(colorItems) do
    if not v7 then
    end
  end
  if not v7 then
    v11 = v11:getConfigurationAttribute(configName, "title")
  end
  v10.title = v11
  v10.configName = configName
  v10.colorItems = colorItems
  table.insert(v9, v10)
end
function ShopConfigScreen:processStoreItemConfigurations(storeItem, vehicle, saleItem)
  local v5 = v5:getText(ShopConfigScreen.L10N_SYMBOL.CONFIGURATION_LABEL)
  self.configSelection = {title = v5, texts = {}, prices = {}, options = {}}
  self.currentConfigSet = 1
  if #storeItem.configurationSets == 0 then
  end
  if storeItem.configurations ~= nil then
    for v8, v9 in ipairs(vehicle) do
      if v9.isDefault then
        self.currentConfigSet = v8
      end
      if v9.overwrittenTitle ~= nil then
        self.configSelection.title = v9.overwrittenTitle
      end
      for v14, v15 in pairs(v9.configurations) do
        if self.vehicle ~= nil then
          local v16 = ConfigurationUtil.hasBoughtConfiguration(self.vehicle, v14, v15)
        end
        if self.saleItem ~= nil then
          local v17 = ConfigurationUtil.hasBoughtConfiguration(self.saleItem, v14, v15)
        end
        if not not v16 then
          continue
        end
        if not not v17 then
          continue
        end
      end
      table.insert(self.configSelection.prices, v10)
      table.insert(self.configSelection.texts, v9.name)
      v11 = self:processStoreItemConfigurationSet(storeItem, v9, vehicle, saleItem)
      table.insert(self.configSelection.options, v11)
    end
    for v8, v9 in pairs(vehicle[self.currentConfigSet].configurations) do
      self.configurations[v8] = v9
    end
    self.colorPickers = {}
    v6 = v6:getSortedConfigurationTypes()
    -- TODO: structure LOP_FORNPREP (pc 188, target 227)
    if storeItem.configurations[v6[1]] ~= nil then
      v13 = v13:getConfigurationAttribute(v6[1], "selectorType")
      if v13 ~= ConfigurationUtil.SELECTOR_COLOR then
      end
      if 1 < #v11 and true then
        self:processStoreItemColorOption(storeItem, v10, v11, v5, vehicle, saleItem)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 226, target 189)
    self.displayableColorCount = v5 - 1
  else
    table.insert(self.configSelection.options, {})
    self.displayableColorCount = 0
  end
  if storeItem.bundleInfo ~= nil then
    for v8, v9 in ipairs(storeItem.bundleInfo.bundleItems) do
      if not (v9.preSelectedConfigurations ~= nil) then
        continue
      end
      for v13, v14 in pairs(v9.preSelectedConfigurations) do
        self.configurations[v13] = v14.configValue
      end
    end
  end
end
function ShopConfigScreen:getOrCreateConfigItem(type)
  if #self.configItemCache == 0 then
    local priceTextElement = priceTextElement:clone(self.configurationLayout)
  else
    self.configItemCache[#self.configItemCache] = nil
    priceTextElement:addElement(self.configItemCache[#self.configItemCache])
  end
  configIndex:setVisible(true)
  configIndex.focusId = nil
  priceTextElement:loadElementFromCustomValues(configIndex)
  if type == "plate" then
    local priceElement = configIndex:getDescendantByName("button")
  elseif type == "option" then
    priceElement = configIndex:getDescendantByName("option")
  else
    if type == "color" then
      priceElement = configIndex:getDescendantByName("color")
    end
  end
  priceElement = configIndex:getDescendantByName("option")
  priceElement:setVisible(priceTextElement)
  priceElement = configIndex:getDescendantByName("color")
  priceElement:setVisible(vehicle)
  priceElement = configIndex:getDescendantByName("button")
  priceElement:setVisible(v5)
  priceElement = configIndex:getDescendantByName("price")
  priceElement:setVisible(fovY)
  if v7 ~= nil then
    if self.focusableElementForScroll ~= nil then
    end
    v7.forceFocusScrollToTop = true
    self.focusableElementForScroll = v7
  end
  return configIndex
end
function ShopConfigScreen:getOrCreateLargeConfigItem(type)
  if #self.configItemCacheLarge == 0 then
    local priceTextElement = priceTextElement:clone(self.configurationLayout)
  else
    self.configItemCacheLarge[#self.configItemCacheLarge] = nil
    priceTextElement:addElement(self.configItemCacheLarge[#self.configItemCacheLarge])
  end
  configIndex:setVisible(true)
  configIndex.focusId = nil
  priceTextElement:loadElementFromCustomValues(configIndex)
  priceTextElement = configIndex:getDescendantByName("option")
  if self.focusableElementForScroll ~= nil then
  end
  priceTextElement.forceFocusScrollToTop = true
  self.focusableElementForScroll = priceTextElement
  return configIndex
end
function ShopConfigScreen:updateConfigSetOptionElement(configElementIndex, storeItem, vehicle, saleItem)
  local listElement = self:getOrCreateConfigItem("option")
  local fovY = listElement:getDescendantByName("option")
  fovY:setDisabled(false)
  fovY:setTexts(self.configSelection.texts)
  fovY:setState(self.currentConfigSet)
  fovY:reloadFocusHandling(true)
  fovY.onClickCallback = function(self, configElementIndex)
    for listElement, fovY in pairs(u0.configurationSets[u1.currentConfigSet].configurations) do
      u1.configurations[listElement] = 1
    end
    for listElement, fovY in pairs(u0.configurationSets[configElementIndex].configurations) do
      u1.configurations[listElement] = fovY
    end
    u1.currentConfigSet = configElementIndex
    storeItem:playSample(GuiSoundPlayer.SOUND_SAMPLES.CONFIG_WRENCH)
    storeItem:updateDisplay(u0, u2, u3)
    storeItem:selectFirstConfig()
  end
  local v7 = listElement:getDescendantByName("title")
  v7:setText(self.configSelection.title)
  local priceElement = listElement:getDescendantByName("price")
  local v12 = v12:formatMoney(self.configSelection.prices[self.currentConfigSet])
  priceElement:setText("+" .. v12)
end
function ShopConfigScreen:updateConfigOptionElement(configElementIndex, option, storeItem, vehicle, saleItem)
  if option.icons == nil then
  end
  if true then
    local priceElement = self:getOrCreateLargeConfigItem("option")
  else
    priceElement = self:getOrCreateConfigItem("option")
  end
  priceElement = v7:getDescendantByName("option")
  priceElement:setVisible(true)
  if #option.options > 1 then
  end
  priceElement:setDisabled(v11)
  if fovY then
    priceElement:setIcons(option.icons)
  else
    priceElement:setTexts(option.texts)
  end
  priceElement:reloadFocusHandling(true)
  local v9 = v7:getDescendantByName("price")
  for v15, v16 in pairs(option.options) do
    if not (v16.index == self.configurations[v10]) then
      continue
    end
    break
  end
  if v11 ~= 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x80000000 -> L88
  end
  priceElement:setState(option.defaultIndex)
  self.configurations[v10] = option.options[option.defaultIndex].index
  priceElement.onClickCallback = function(self, configElementIndex)
    storeItem:setConfigPrice(u2, u0.options[configElementIndex].index, u3, u4)
    u1.configurations[u2] = u0.options[configElementIndex].index
    storeItem:playSample(GuiSoundPlayer.SOUND_SAMPLES.CONFIG_WRENCH)
    storeItem:updateData(u5, u1.vehicle, u1.saleItem)
  end
  v12 = v7:getDescendantByName("title")
  v12:setText(option.title)
  self:setConfigPrice(v10, option.options[option.defaultIndex].index, v9, vehicle)
end
function ShopConfigScreen:updateSubConfigOptionElement(configElementIndex, option, storeItem, vehicle, saleItem)
  if option.icons == nil then
  end
  if true then
    local priceElement = self:getOrCreateLargeConfigItem("option")
  else
    priceElement = self:getOrCreateConfigItem("option")
  end
  priceElement = v7:getDescendantByName("option")
  priceElement:setVisible(true)
  priceElement:setDisabled(false)
  if fovY then
    priceElement:setIcons(option.icons)
  else
    priceElement:setTexts(option.texts)
  end
  priceElement:reloadFocusHandling(true)
  if not self.subConfigurations[option.name] then
  end
  self.subConfigurations[v9] = v10
  option.selectedIndex = v10
  priceElement:setState(v10)
  priceElement.onClickCallback = function(self, configElementIndex)
    u0.subConfigurations[u1] = configElementIndex
    u2.selectedIndex = configElementIndex
    u0.configurations[u1] = u2.subConfigOptions[configElementIndex].defaultIndex
    storeItem:playSample(GuiSoundPlayer.SOUND_SAMPLES.CONFIG_WRENCH)
    storeItem:updateConfigOptionsDisplay(u3, u4, u5)
    storeItem:updateData(u3, u0.vehicle, u5)
    storeItem:unsetFocus(u6)
    storeItem:setFocus(u6)
  end
  local v11 = v7:getDescendantByName("price")
  v11:setVisible(false)
  v11 = v7:getDescendantByName("title")
  v11:setText(option.title)
end
function ShopConfigScreen:updateConfigOptionsData(storeItem, vehicle, saleItem)
  if self.licensePlate ~= nil then
    vehicle:delete()
    self.licensePlate = nil
  end
  if self.licensePlateRender ~= nil then
    vehicle:destroyScene()
    self.licensePlateRender = nil
  end
  -- TODO: structure LOP_FORNPREP (pc 33, target 74)
  self.configurationLayout.elements[#self.configurationLayout.elements]:setVisible(false)
  v10:removeElement(self.configurationLayout.elements[#self.configurationLayout.elements])
  self.configurationLayout.elements[#self.configurationLayout.elements]:unlinkElement()
  if self.configurationLayout.elements[#self.configurationLayout.elements].profile == "shopConfigConfigurationItem" then
    table.insert(self.configItemCache, self.configurationLayout.elements[#self.configurationLayout.elements])
  else
    table.insert(self.configItemCacheLarge, self.configurationLayout.elements[#self.configurationLayout.elements])
  end
  -- TODO: structure LOP_FORNLOOP (pc 73, target 34)
  self.focusableElementForScroll = nil
  if 1 < #self.configSelection.options then
    self:updateConfigSetOptionElement(1, storeItem, vehicle, saleItem)
  end
  for v10, v11 in ipairs(self.configSelection.options[self.currentConfigSet]) do
    if v11.isSubConfiguration then
      self:updateSubConfigOptionElement(v5 + 1, v11, storeItem, vehicle, saleItem)
    else
      self:updateConfigOptionElement(v5 + 1, v11, storeItem, vehicle, saleItem)
    end
    if not v11.isSubConfiguration then
      continue
    end
    self:updateConfigOptionElement(v5 + 1, v11.subConfigOptions[v11.selectedIndex], storeItem, vehicle, saleItem)
  end
  self.colorElements = {}
  if 0 < self.displayableColorCount then
    for v12, v13 in ipairs(self.colorPickers) do
      if priceElement ~= nil and priceElement.configurations[v13.configName] ~= nil then
      end
      if storeItem.bundleInfo ~= nil then
        for v18, v19 in ipairs(storeItem.bundleInfo.bundleItems) do
          if not (v19.preSelectedConfigurations ~= nil) then
            continue
          end
          if not (v19.preSelectedConfigurations[v13.configName] ~= nil) then
            continue
          end
          if not v19.preSelectedConfigurations[v13.configName].hideOption then
            continue
          end
        end
      end
      -- TODO: structure LOP_FORNPREP (pc 219, target 229)
      if v13.colorItems[1].isSelectable ~= false then
      end
      -- TODO: structure LOP_FORNLOOP (pc 228, target 220)
      if v14 and 1 >= v15 then
      end
      if not v16 then
        continue
      end
      v16 = self:getOrCreateConfigItem("color")
      v17 = v16:getDescendantByName("color")
      v17:reloadFocusHandling(true)
      self.colorElements[v12] = v17
      v17.onClickCallback = function(self)
        vehicle:setShowMouseCursor(true)
        if not u0[u1.configurations[u2.configName]].uiColor then
        end
        vehicle(saleItem, vehicle, v5, fovY, v7, storeItem.material)
      end
      if not self.configurations[v13.configName] then
        v19 = self:getDefaultConfigurationColorIndex(v13.configName, v13.colorItems, vehicle)
      end
      self:onPickColor(v19, {configName = v13.configName, colorOptionIndex = v12}, true)
      local v20 = v16:getDescendantByName("title")
      v20:setText(v13.title)
    end
  end
  if storeItem.hasLicensePlates then
    v9 = v9:getAreLicensePlatesAvailable()
    if v9 then
      v9 = self:getOrCreateConfigItem("plate")
      v10 = v9:getDescendantByName("button")
      v10:setVisible(true)
      v10:reloadFocusHandling(true)
      v10.onClickCallback = function(self)
        storeItem:onClickLicensePlate()
      end
      v11 = v9:getDescendantByName("title")
      v13 = v13:getText("ui_licensePlate")
      v11:setText(...)
      v11 = v9:getDescendantByName("plate")
      self.licensePlateRender = v11
      v11:createScene()
    end
  end
  self.displayableOptionCount = vehicle
  return v5
end
function ShopConfigScreen:updateConfigOptionsDisplay(storeItem, vehicle, saleItem)
  num:setGui("ShopConfigScreen")
  local num = self:updateConfigOptionsData(storeItem, vehicle, saleItem)
  if 0 >= num then
  end
  fovY:setVisible(true)
  if 0 >= num then
  end
  fovY:setVisible(true)
  if 0 >= num then
  end
  fovY:setVisible(true)
  fovY:invalidateLayout()
  fovY:setGui(vehicle)
  if self.needsRefocus then
    self:selectFirstConfig()
    self.needsRefocus = false
  end
end
function ShopConfigScreen:update(dt)
  local priceTextElement = priceTextElement:superClass()
  priceTextElement.update(self, dt)
  if self.vehicle ~= nil and self.vehicle.isDeleted then
    self:onClickBack()
    self.vehicle = nil
    return
  end
  local configIndex = configIndex:getFinished()
  if not configIndex then
    configIndex:update(dt)
  end
  configIndex = configIndex:getFinished()
  if not configIndex then
    configIndex:update()
  end
  priceTextElement = priceTextElement:getMoney()
  if self.lastMoney ~= priceTextElement then
    self:updateBalanceText()
  end
  if 0 >= self.loadingDelayTime then
    -- if 0 >= v0.loadingDelayFrames then goto L106 end
  end
  configIndex = math.max(self.loadingDelayFrames - 1, 0)
  self.loadingDelayFrames = configIndex
  configIndex = math.max(self.loadingDelayTime - dt, 0)
  self.loadingDelayTime = configIndex
  if self.loadingDelayTime <= 0 and self.loadingDelayFrames <= 0 then
    self:onFinishedLoading()
  end
  for v5, fovY in pairs(self.previewVehicles) do
    fovY:update(dt)
    fovY:updateTick(dt)
  end
  configIndex:update(dt)
  self:updateInput(dt)
  self:updateCamera(dt)
  if VehicleDebug.state == VehicleDebug.DEBUG_ATTRIBUTES and 0 < #self.previewVehicles then
    -- TODO: structure LOP_FORNPREP (pc 153, target 207)
    if self.previewVehicles[1].components[1] ~= nil then
      local v7, priceElement, v9 = getWorldTranslation(self.previewVehicles[1].components[1].node)
      local v10, v11, v12 = getWorldRotation(self.previewVehicles[1].components[1].node)
      local v22 = math.deg(v10)
      local v23 = math.deg(v11)
      local v24 = math.deg(v12)
      local v25 = self.previewVehicles[1]:getName()
      local v17 = string.format(...)
      renderText(...)
    end
    -- TODO: structure LOP_FORNLOOP (pc 206, target 154)
  end
end
function ShopConfigScreen:updateCamera(dt)
  local fovY = math.cos(self.rotY)
  local v7 = math.sin(self.rotY)
  setTranslation(self.rotateNode, self.workshopWorldPosition[1] + fovY * self.previewVehicleSize * ShopConfigScreen.CAMERA_MIN_DISTANCE_TO_X_OFFSET_FACTOR * g_screenAspectRatio * self.cameraDistance / self.cameraMinDistance, self.workshopWorldPosition[2] + self.focusY, self.workshopWorldPosition[3] + -v7 * self.previewVehicleSize * ShopConfigScreen.CAMERA_MIN_DISTANCE_TO_X_OFFSET_FACTOR * g_screenAspectRatio * self.cameraDistance / self.cameraMinDistance)
  setRotation(self.rotateNode, self.rotX, self.rotY, 0)
  local fovY, v7, priceElement = getWorldTranslation(self.cameraNode)
  local v9, v10, v11 = getWorldTranslation(self.rotateNode)
  local v12, v13, v14 = MathUtil.vector3Normalize(v9 - fovY, v10 - v7, v11 - priceElement)
  local v18, v19, v20 = worldToLocal(self.rotateNode, v9 - v12 * self.cameraDistance, v10 - v13 * self.cameraDistance, v11 - v14 * self.cameraDistance)
  setTranslation(self.cameraNode, v18, v19, v20)
  self:updateDepthOfField()
end
function ShopConfigScreen:updateDepthOfField()
  local configIndex = math.max(ShopConfigScreen.NEAR_CLIP_DISTANCE, self.cameraDistance - self.previewVehicleSize * 0.6)
  v5:setManipulatedParams(nil, configIndex, self.cameraMinDistance * 1.5 / self.cameraDistance, self.cameraDistance + self.previewVehicleSize * 0.6 * 2, nil)
end
function ShopConfigScreen:draw()
  local configIndex = configIndex:superClass()
  configIndex.draw(self)
  if self.fadeOverlay.visible then
    type:render()
  end
end
function ShopConfigScreen:onRenderLoad(scene, overlay)
  local priceTextElement = priceTextElement:getLicensePlate(LicensePlateManager.PLATE_TYPE.ELONGATED)
  if priceTextElement ~= nil then
    local linkNode = I3DUtil.indexToObject(scene, "0|0")
    link(linkNode, priceTextElement.node)
    setTranslation(priceTextElement.node, 0, 0, 0)
    setRotation(priceTextElement.node, 0, 0, 0)
    if self.licensePlate ~= nil then
      cameraNode:delete()
    end
    self.licensePlate = priceTextElement
    self:updateLicensePlateGraphics()
    local cameraNode = I3DUtil.indexToObject(self.licensePlateRender.scene, self.licensePlateRender.cameraPath)
    if cameraNode ~= nil then
      local fovY = getFovY(cameraNode)
      local v10 = math.tan(fovY / 2)
      setTranslation(cameraNode, 0, 0, (self.licensePlate.width / 2 + 0.005) / v10 / self.licensePlateRender.absSize[1] * priceTextElement.width / priceTextElement.height / 5 / self.licensePlateRender.absSize[2] * g_screenWidth / g_screenHeight)
    end
  end
end
function ShopConfigScreen:updateLicensePlateGraphics()
  local currentCharacters = table.copy(self.licensePlateData.characters, math.huge)
  if self.licensePlate ~= nil then
    local priceElement = table.concat(currentCharacters, "")
    vehicle:updateData(...)
    vehicle:setColorIndex(self.licensePlateData.colorIndex or 1)
    vehicle:setRenderDirty()
  end
  if self.licensePlateData.placementIndex == LicensePlateManager.PLATE_POSITION.NONE then
    local fovY = fovY:getText("configuration_valueLicensePlateNone")
    vehicle:setText(...)
    vehicle:setVisible(false)
    return
  end
  vehicle:setText("")
  vehicle:setVisible(true)
end
function ShopConfigScreen:onOpen(element)
  local priceTextElement = priceTextElement:superClass()
  priceTextElement.onOpen(self)
  self.openCounter = self.openCounter + 1
  configIndex:reset()
  self:updateBalanceText()
  configIndex:setGameState(GameState.MENU_SHOP_CONFIG)
  configIndex:setCustomLighting(self.shopLighting)
  configIndex:setSunVisibility(false)
  setVisibility(self.workshopRootNode, true)
  local configIndex = getCamera()
  self.previousCamera = configIndex
  setCamera(self.cameraNode)
  self:updateInputGlyphs()
  self:toggleCustomInputContext(true, ShopConfigScreen.INPUT_CONTEXT_NAME)
  self:registerInputActions()
  self.needsRefocus = true
end
function ShopConfigScreen:onClose()
  self.isLoadingInitial = false
  local configIndex = configIndex:superClass()
  configIndex.onClose(self)
  type:setSunVisibility(true)
  type:setCustomLighting(nil)
  setCamera(self.previousCamera)
  setVisibility(self.workshopRootNode, false)
  self:deletePreviewVehicles()
  if self.licensePlate ~= nil then
    type:delete()
    self.licensePlate = nil
  end
  self.vehicle = nil
  self.loadingDelayFrames = 0
  self.loadingDelayTime = 0
  type:resetGameState()
  type:reset()
  type:reset()
  if self.licensePlateRender ~= nil then
    type:destroyScene()
    self.licensePlateRender = nil
  end
  self:toggleCustomInputContext(false)
end
function ShopConfigScreen:onClickBuy()
  local type, configIndex, priceTextElement = self:getConfigurationCostsAndChanges(self.storeItem, self.vehicle, self.saleItem)
  if not priceTextElement then
    return
  end
  if 0 < self.totalPrice then
    local v5 = v5:getMoney()
    if self.totalPrice > v5 then
    end
  end
  v5 = v5:hasEnoughSlots(self.storeItem)
  fovY:setShowMouseCursor(true)
  if not vehicle then
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.ERROR)
    local v7 = v7:getText(ShopConfigScreen.L10N_SYMBOL.NOT_ENOUGH_MONEY_BUY)
    InfoDialog.show(...)
    return
  end
  if not v5 then
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.ERROR)
    v7 = v7:getText(ShopConfigScreen.L10N_SYMBOL.TOO_FEW_SLOTS)
    InfoDialog.show(...)
    return
  end
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
  v7 = v7:getText(ShopConfigScreen.L10N_SYMBOL.CONFIRM_BUY)
  local priceElement = priceElement:formatMoney(self.totalPrice, 0, true, true)
  local fovY = string.format(...)
  YesNoDialog.show(self.onYesNoBuy, self, fovY)
end
function ShopConfigScreen:onClickConfigAction()
  if self.focusedColorElement ~= nil then
    type:onFocusActivate()
    return
  end
  if self.focusedButtonElement ~= nil then
    type:onFocusActivate()
  end
end
function ShopConfigScreen:onClickLicensePlate()
  LicensePlateDialog.show(self.licensePlateData, self.onChangeLicensePlate, self)
end
function ShopConfigScreen:onChangeLicensePlate(licensePlateData)
  if licensePlateData ~= nil then
    self.licensePlateData = licensePlateData
    self.licensePlateData.customized = true
    -- TODO: structure LOP_FORNPREP (pc 14, target 28)
    if self.previewVehicles[1].setLicensePlatesData ~= nil then
      self.previewVehicles[1]:setLicensePlatesData(self.licensePlateData)
    end
    -- TODO: structure LOP_FORNLOOP (pc 27, target 15)
    self:updateLicensePlateGraphics()
    self:updateData(self.storeItem, self.vehicle, self.saleItem)
  end
end
function ShopConfigScreen:onFocusConfigurationOption(element)
  self.focusedColorElement = nil
  self.focusedButtonElement = nil
  self.focusedOptionElement = nil
  if element.name == "button" then
    self.focusedButtonElement = element
  elseif element.name == "color" then
    self.focusedColorElement = element
  else
    if element.name == "option" then
      self.focusedOptionElement = element
    end
  end
  self:updateConfigurationButton()
end
function ShopConfigScreen:onLeaveConfigurationOption(element)
  self.focusedColorElement = nil
  self.focusedButtonElement = nil
  self.focusedOptionElement = nil
  self:updateConfigurationButton()
end
function ShopConfigScreen:updateConfigurationButton()
  if self.focusedButtonElement == nil and self.focusedColorElement == nil then
  end
  configIndex:setVisible(element)
  configIndex:invalidateLayout()
end
function ShopConfigScreen:onYesNoBuy(yes)
  if yes then
    self:onCallback(false, self.storeItem, self.configurations, self.totalPrice, self.licensePlateData, self.saleItem)
  end
end
function ShopConfigScreen:onVehicleBought()
  if not GS_IS_CONSOLE_VERSION then
    element:setFocus(self.buyButton)
    return
  end
  self:selectFirstConfig()
end
function ShopConfigScreen:onStoreItemsReloaded()
  if self.storeItem ~= nil and g_gui.currentGuiName == "ShopConfigScreen" then
    self.needsRefocus = true
    local element = element:getItemByXMLFilename(self.storeItem.xmlFilename)
    self.storeItem = element
    self:setStoreItem(self.storeItem, nil, nil, nil, self.configurations)
  end
end
function ShopConfigScreen:onClickLease()
  if self.vehicle ~= nil then
    return
  end
  if not self.storeItem.allowLeasing then
    return
  end
  local configIndex = configIndex:getMoney()
  if self.initialLeasingCosts > configIndex then
  end
  configIndex = configIndex:hasEnoughSlots(self.storeItem)
  priceTextElement:setShowMouseCursor(true)
  if not true then
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.ERROR)
    local vehicle = vehicle:getText(ShopConfigScreen.L10N_SYMBOL.NOT_ENOUGH_MONEY_LEASE)
    InfoDialog.show(...)
    return
  end
  if not configIndex then
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.ERROR)
    vehicle = vehicle:getText(ShopConfigScreen.L10N_SYMBOL.TOO_FEW_SLOTS)
    InfoDialog.show(...)
    return
  end
  self:playSample(GuiSoundPlayer.SOUND_SAMPLES.CLICK)
  LeaseYesNoDialog.show(self.onYesNoLease, self, self.totalPrice * EconomyManager.DEFAULT_LEASING_DEPOSIT_FACTOR, self.initialLeasingCosts, self.totalPrice * EconomyManager.DEFAULT_RUNNING_LEASING_FACTOR, self.totalPrice * EconomyManager.PER_DAY_LEASING_FACTOR)
end
function ShopConfigScreen:onYesNoLease(yes)
  if yes then
    self:onCallback(true, self.storeItem, self.configurations, nil, self.licensePlateData, self.saleItem)
  end
end
function ShopConfigScreen:onClickShop()
  local configIndex = configIndex:superClass()
  local element = configIndex.onClickShop(self)
  if element then
    self:requestExitCallback()
  end
  return element
end
function ShopConfigScreen:onCallback(leaseItem, storeItem, configurations, price, licensePlateData, saleItem)
  if self.callbackFunc ~= nil then
    if self.target ~= nil then
      self.callbackFunc(self.target, self.vehicle, leaseItem, storeItem, configurations, price, licensePlateData, saleItem)
    else
      self.callbackFunc(self.vehicle, leaseItem, storeItem, configurations, price, licensePlateData, saleItem)
    end
    local v7 = table.copy(self.configurations)
    self.configurations = v7
  end
end
function ShopConfigScreen:updateInputGlyphs()
  element:setActions({InputAction.AXIS_MAP_ZOOM_IN, InputAction.AXIS_MAP_ZOOM_OUT})
  if self.lastInputHelpMode == GS_INPUT_HELP_MODE_GAMEPAD then
  else
  end
  configIndex:setActions(element)
end
function ShopConfigScreen:toggleHUDVisible()
  local vehicle = vehicle:getIsVisible()
  element:setVisible(not vehicle)
end
function ShopConfigScreen:registerInputActions()
  local configIndex = configIndex:getLastInputMode()
  if configIndex ~= GS_INPUT_HELP_MODE_GAMEPAD then
  end
  local priceTextElement, vehicle = priceTextElement:registerActionEvent(InputAction.AXIS_LOOK_UPDOWN_VEHICLE, self, self.onCameraUpDown, false, false, true, true)
  self.eventIdUpDownController = vehicle
  priceTextElement, vehicle = priceTextElement:registerActionEvent(InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE, self, self.onCameraLeftRight, false, false, true, true)
  self.eventIdLeftRightController = vehicle
  priceTextElement:registerActionEvent(InputAction.AXIS_MAP_ZOOM_IN, self, self.onCameraZoom, false, false, true, true, -1)
  priceTextElement:registerActionEvent(InputAction.AXIS_MAP_ZOOM_OUT, self, self.onCameraZoom, false, false, true, true, 1)
  priceTextElement, vehicle = priceTextElement:registerActionEvent(InputAction.AXIS_LOOK_UPDOWN_DRAG, self, self.onCameraUpDown, false, false, true, not true)
  self.eventIdUpDownMouse = vehicle
  priceTextElement, vehicle = priceTextElement:registerActionEvent(InputAction.AXIS_LOOK_LEFTRIGHT_DRAG, self, self.onCameraLeftRight, false, false, true, not true)
  self.eventIdLeftRightMouse = vehicle
end
function ShopConfigScreen:onCameraLeftRight(actionName, inputValue, callbackState, isAnalog)
  if actionName == InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE then
    self.inputHorizontal = inputValue * -1
    return
  end
  if not self.configSlider.mouseDown then
    local priceElement = math.abs(inputValue * ShopConfigScreen.MOUSE_SPEED_MULTIPLIER * g_screenAspectRatio)
    self.accumDraggingInput = self.accumDraggingInput + priceElement
    if ShopConfigScreen.MIN_MOUSE_DRAG_INPUT <= self.accumDraggingInput then
      self.inputDragging = true
      self.inputHorizontal = inputValue * ShopConfigScreen.MOUSE_SPEED_MULTIPLIER
      return
    end
    self.inputHorizontal = 0
  end
end
function ShopConfigScreen:onCameraUpDown(actionName, inputValue, callbackState, isAnalog)
  if actionName == InputAction.AXIS_LOOK_UPDOWN_VEHICLE then
    self.inputVertical = inputValue
    return
  end
  if not self.configSlider.mouseDown then
    local priceElement = math.abs(inputValue * ShopConfigScreen.MOUSE_SPEED_MULTIPLIER)
    self.accumDraggingInput = self.accumDraggingInput + priceElement
    if ShopConfigScreen.MIN_MOUSE_DRAG_INPUT <= self.accumDraggingInput then
      self.inputDragging = true
      self.inputVertical = inputValue * ShopConfigScreen.MOUSE_SPEED_MULTIPLIER
      return
    end
    self.inputVertical = 0
  end
end
function ShopConfigScreen:onCameraZoom(actionName, inputValue, direction, isAnalog, isMouse)
  if isMouse then
    local fovY = fovY:getIsVisible()
    if fovY then
      local fovY, v7 = fovY:getMousePosition()
      local priceElement = GuiUtils.checkOverlayOverlap(fovY, v7, self.configSlider.absPosition[1], self.configSlider.absPosition[2], self.configSlider.size[1], self.configSlider.size[2])
      if priceElement then
        return
      end
      local v9 = GuiUtils.checkOverlayOverlap(fovY, v7, self.configurationLayout.absPosition[1], self.configurationLayout.absPosition[2], self.configurationLayout.size[1], self.configurationLayout.size[2])
      if v9 then
        return
      end
    end
  end
  if not isAnalog and isMouse then
  end
  self.inputZoom = self.inputZoom + inputValue * fovY
end
function ShopConfigScreen:updateInput(dt)
  self:updateInputContext()
  if self.inputVertical ~= 0 then
    self.inputVertical = 0
    if 0.001 < self.limitRotXDelta then
      local vehicle = math.min(self.rotX - 0.001 * dt * self.inputVertical, self.rotX)
      self.rotX = vehicle
    elseif self.limitRotXDelta < -0.001 then
      vehicle = math.max(self.rotX - 0.001 * dt * self.inputVertical, self.rotX)
      self.rotX = vehicle
    else
      self.rotX = self.rotX - 0.001 * dt * self.inputVertical
    end
  end
  if self.inputHorizontal ~= 0 then
    self.inputHorizontal = 0
    self.rotY = self.rotY - 0.001 * dt * self.inputHorizontal
  end
  if self.inputZoom ~= 0 then
    self.zoomTarget = self.zoomTarget + dt * self.inputZoom * 0.1
    local configIndex = MathUtil.clamp(self.zoomTarget, self.cameraMinDistance, self.cameraMaxDistance)
    self.zoomTarget = configIndex
    self.inputZoom = 0
  end
  local v5 = math.pow(0.99579, dt)
  self.cameraDistance = self.zoomTarget + v5 * (self.cameraDistance - self.zoomTarget)
  configIndex = self:limitXRotation(self.rotX)
  self.rotX = configIndex
  configIndex = configIndex:getInputHelpMode()
  if configIndex ~= self.lastInputHelpMode then
    self.lastInputHelpMode = configIndex
    self:updateInputGlyphs()
  end
  if not self.isDragging then
    -- if not v0.inputDragging then goto L158 end
    self.isDragging = true
    priceTextElement:setShowMouseCursor(false, true)
  elseif self.isDragging and not self.inputDragging then
    self.isDragging = false
    priceTextElement:setShowMouseCursor(true)
    self.accumDraggingInput = 0
  end
  self.inputDragging = false
end
function ShopConfigScreen:limitXRotation(currentXRotation)
  local v5 = math.sin(self.rotX)
  local priceTextElement = math.min(self.cameraDistance * v5 + self.focusY, ShopConfigScreen.MAX_CAMERA_HEIGHT - self.focusY)
  if priceTextElement <= self.cameraDistance then
    local v7 = math.asin(priceTextElement / self.cameraDistance)
    v5 = math.min(...)
  end
  v7 = math.min(vehicle, self.rotX)
  v5 = math.max(...)
  return v5
end
function ShopConfigScreen:updateInputContext()
  local dt = dt:getLastInputMode()
  if dt ~= self.lastInputMode then
    if dt ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
    priceTextElement:setActionEventActive(self.eventIdUpDownController, true)
    priceTextElement:setActionEventActive(self.eventIdLeftRightController, true)
    priceTextElement:setActionEventActive(self.eventIdUpDownMouse, not true)
    priceTextElement:setActionEventActive(self.eventIdLeftRightMouse, not true)
    self.lastInputMode = dt
    self.isDragging = false
    priceTextElement:setShowMouseCursor(true)
  end
end
function ShopConfigScreen:consoleCommandUIToggle()
  self:toggleHUDVisible()
  local vehicle = vehicle:getIsVisible()
  local priceTextElement = tostring(...)
  return "ShopConfigScreen hudVisible=" .. priceTextElement
end
function ShopConfigScreen:inputEvent(action, value, eventUsed)
  local v5 = v5:superClass()
  local vehicle = v5.inputEvent(self, action, value, eventUsed)
  if not vehicle and action == InputAction.TOGGLE_STORE then
    self:onClickBack()
  end
  return eventUsed
end
ShopConfigScreen.GUI_PROFILE = {MAINTENANCE_COST = "shopConfigAttributeIconMaintenanceCosts", POWER = "shopConfigAttributeIconPower", TRANSMISSION = "shopConfigAttributeIconTransmission", FUEL = "shopConfigAttributeIconFuel", ELECTRICCHARGE = "shopConfigAttributeIconElectricCharge", METHANE = "shopConfigAttributeIconMethane", MAX_SPEED = "shopConfigAttributeIconMaxSpeed", CAPACITY = "shopConfigAttributeIconCapacity", WEIGHT = "shopConfigAttributeIconWeight", ADDITIONAL_WEIGHT = "shopConfigAttributeIconAdditionalWeight", WORKING_WIDTH = "shopConfigAttributeIconWorkingWidth", WORKING_SPEED = "shopConfigAttributeIconWorkSpeed", POWER_REQUIREMENT = "shopConfigAttributeIconPowerReq", WHEELS = "shopConfigAttributeIconWheels", BALE_SIZE_ROUND = "shopConfigAttributeIconBaleSizeRound", BALE_SIZE_SQUARE = "shopConfigAttributeIconBaleSizeSquare", BALEWRAPPER_SIZE_ROUND = "shopConfigAttributeIconBaleWrapperBaleSizeRound", BALEWRAPPER_SIZE_SQUARE = "shopConfigAttributeIconBaleWrapperBaleSizeSquare", MAX_TREE_SIZE = "shopConfigAttributeIconMaxTreeSize", SHOP_MONEY = "shopMoney", SHOP_MONEY_NEGATIVE = "shopMoneyNeg", BUTTON_BUY = "buttonBuy", BUTTON_CONFIGURE = "buttonConfigurate"}
ShopConfigScreen.L10N_SYMBOL = {MAINTENANCE_COST = "shop_maintenanceValue", POWER = "shopConfig_maxPowerValue", FUEL = "shop_fuelValue", FUEL_DEF = "shopConfig_fuelDefValue", MAX_SPEED = "shop_maxSpeed", CAPACITY = "shop_capacityValue", WORKING_WIDTH = "shop_workingWidthValue", WORKING_SPEED = "shop_maxSpeed", POWER_REQUIREMENT = "shopConfig_neededPowerValue", BUTTON_BUY = "button_buy", BUTTON_CONFIGURE = "button_configurate", UNIT_LITER = "unit_literShort", UNIT_KW = "unit_kw", UNIT_KG = "unit_kg", DEF_SHORT = "fillType_def_short", NOT_ENOUGH_MONEY_BUY = "shop_messageNotEnoughMoneyToBuy", NOT_ENOUGH_MONEY_LEASE = "shop_messageNotEnoughMoneyToLease", TOO_FEW_SLOTS = "shop_messageNotEnoughSlotsToBuy", CONFIRM_BUY = "shop_doYouWantToBuy", CONFIRM_LEASE = "shop_doYouWantToLease", CONFIGURATION_LABEL = "shop_configuration"}
ShopConfigScreen.SIZE = {INPUT_GLYPH = {48, 48}}
