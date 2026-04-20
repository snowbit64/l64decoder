-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionBrushPlaceable = {}
local ConstructionBrushPlaceable_mt = Class(ConstructionBrushPlaceable, ConstructionBrush)
ConstructionBrushPlaceable.ERROR = {NOT_ENOUGH_MONEY = 200, NOT_ENOUGH_SLOTS = 201, CANNOT_BE_BOUGHT = 202, CANNOT_BE_PLACED_HERE = 203, PLAYER_COLLISION = 204, OBJECT_OVERLAP = 205, DEFORM_FAILED = 206, BLOCKED = 207}
{}[ConstructionBrushPlaceable.ERROR.NOT_ENOUGH_MONEY] = "ui_construction_notEnoughMoney"
{}[ConstructionBrushPlaceable.ERROR.NOT_ENOUGH_SLOTS] = "ui_construction_notEnoughSlots"
{}[ConstructionBrushPlaceable.ERROR.CANNOT_BE_BOUGHT] = "ui_construction_cannotBeBought"
{}[ConstructionBrushPlaceable.ERROR.CANNOT_BE_PLACED_HERE] = "ui_construction_cannotBePlacedHere"
{}[ConstructionBrushPlaceable.ERROR.PLAYER_COLLISION] = "ui_construction_collidesWithPlayer"
{}[ConstructionBrushPlaceable.ERROR.OBJECT_OVERLAP] = "ui_construction_overlapsWithObject"
{}[ConstructionBrushPlaceable.ERROR.DEFORM_FAILED] = "ui_construction_deformationFailed"
{}[ConstructionBrushPlaceable.ERROR.BLOCKED] = "ui_construction_deformationBlocked"
ConstructionBrushPlaceable.ERROR_MESSAGES = {}
ConstructionBrushPlaceable.LAST_SNAPPING_STATE = false
ConstructionBrushPlaceable.DISPLACEMENT_COST_PER_M3 = 5
ConstructionBrushPlaceable.MAX_ACTIVE_VALIDATIONS = 2
function ConstructionBrushPlaceable.new(subclass_mt, cursor)
  local v3 = v3:superClass()
  if not subclass_mt then
  end
  local v2 = v2(v3, cursor)
  v2.supportsPrimaryButton = true
  v2.supportsPrimaryAxis = true
  v2.primaryAxisIsContinuous = false
  v2.supportsTertiaryButton = true
  v2.supportsSecondaryAxis = false
  v2.secondaryAxisIsContinuous = false
  v2.placeable = nil
  v2.isLoading = false
  v2.isPlacing = false
  v2.offsetY = 0
  v2.inputHeight = 0
  v2.displacementCosts = 0
  v2.colorIndex = 1
  v3 = v3:getText("ui_construction_placingItem")
  v2.placingText = v3
  v3 = v3:getText("ui_construction_loadingItem")
  v2.loadingText = v3
  v2.errorText = nil
  v2.errorEndTime = 0
  v2.freeMode = false
  v2.activeValidationCount = 0
  v2.supportsSnapping = true
  v2.snappingActive = ConstructionBrushPlaceable.LAST_SNAPPING_STATE
  v2.snappingAngleDeg = 7.5
  v2.snappingSize = 0.25
  v2.requiredPermission = Farm.PERMISSION.BUY_PLACEABLE
  return v2
end
function ConstructionBrushPlaceable.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function ConstructionBrushPlaceable:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  v1:setRotationEnabled(true)
  v1:setShape(GuiTopDownCursor.SHAPES.NONE)
  self.offsetY = 0
  self.coolDownTimer = 0
  self:loadPlaceable()
end
function ConstructionBrushPlaceable:deactivate()
  self:unloadPlaceable()
  self.coolDownTimer = 0
  local v2 = v2:superClass()
  v2.deactivate(self)
end
function ConstructionBrushPlaceable:setPlaceableFilename(xmlFilename)
  if not self.isActive then
    self.placeableXMLFilename = xmlFilename
    local v2 = v2:getItemByXMLFilename(xmlFilename)
    self.storeItem = v2
  end
end
function ConstructionBrushPlaceable:setParameters(filename)
  self:setPlaceableFilename(filename)
end
function ConstructionBrushPlaceable:copyState(from)
  self.freeMode = from.freeMode
end
function ConstructionBrushPlaceable:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self:updateHeightFromInput(dt)
  if self.errorText ~= nil and self.errorEndTime < g_time then
    self.errorText = nil
  end
  if 0 < self.coolDownTimer then
    self.coolDownTimer = self.coolDownTimer - dt
  end
  self:updatePlaceablePosition()
end
function ConstructionBrushPlaceable:updateHeightFromInput(dt)
  self.offsetY = self.offsetY + self.inputHeight * dt * 0.005
  self.inputHeight = 0
end
function ConstructionBrushPlaceable:getSnappedRotation(rotY)
  if self.snappingActive then
    local v3 = math.deg(rotY)
    local v2 = MathUtil.snapValue(v3, self.snappingAngleDeg)
    v3 = math.rad(v2)
  end
  if self.placeable ~= nil and self.placeable.getPlacementRotation ~= nil then
    local v3, v4, v5 = v3:getPlacementRotation(0, rotY, 0)
  end
  return rotY
end
function ConstructionBrushPlaceable:getSnappedPosition(x, y, z)
  if x == nil then
    return nil
  end
  if self.snappingActive then
    local v5 = math.floor(x * 1 / self.snappingSize)
    v5 = math.floor(z * 1 / self.snappingSize)
  end
  if self.placeable ~= nil and self.placeable.getPlacementPosition ~= nil then
    local v4, v5, v6 = v4:getPlacementPosition(x, y, z)
  end
  return x, y + self.offsetY, z
end
function ConstructionBrushPlaceable:getDisplacementCost()
  return self.displacementCosts
end
function ConstructionBrushPlaceable:getPrice()
  local v2 = v2:getBuyPrice(self.storeItem)
  local v3 = self:getDisplacementCost()
  return v2 + v3
end
function ConstructionBrushPlaceable:updatePlaceablePosition()
  if self.errorText ~= nil then
    v1:setErrorMessage(self.errorText)
    return
  end
  if self.isPlacing then
    v1:setMessage(self.placingText)
    return
  end
  if self.isLoading then
    v1:setMessage(self.loadingText)
    return
  end
  if self.placeable ~= nil then
    local v1, v2, v3 = v1:getPosition()
    local v4 = v4:getRotation()
    v5:startPlacementCheck(v1, v2, v3, v4)
    local v5, v6, v7 = self:getSnappedPosition(v1, v2, v3)
    v5 = self:getSnappedRotation(v4)
    if v5 ~= nil then
      v5:setPreviewPosition(v5, v6, v7, 0, v5, 0)
      v5, v6 = self:verifyPlacement(v5, v6, v7, v5)
      if v5 ~= nil then
        if v6 == nil then
          if not ConstructionBrushPlaceable.ERROR_MESSAGES[v5] then
          end
          v7 = v7:getText(v9)
        end
        v7:setErrorMessage(v6)
      elseif self.displacementError ~= nil then
        local v9 = v9:getText(ConstructionBrushPlaceable.ERROR_MESSAGES[self.displacementError])
        v7:setErrorMessage(...)
      else
        local v11 = self:getPrice()
        v9 = v9:formatMoney(v11, 0, true, true)
        v7:setMessage(...)
      end
    end
    setVisibility(self.placeable.rootNode, self.cursor.isVisible)
    return
  end
  v3 = v3:getText("ui_construction_couldNotLoadItem")
  v1:setErrorMessage(...)
end
function ConstructionBrushPlaceable:verifyPlacement(x, y, z, rotY)
  local err = self:verifyAccess(x, y, z)
  if err ~= nil then
    return err
  end
  local price = self:getPrice()
  local v8 = v8:getMoney()
  if price > v8 then
  end
  v8 = v8:hasEnoughSlots(self.storeItem)
  if not true then
    return ConstructionBrushPlaceable.ERROR.NOT_ENOUGH_MONEY
  end
  if not v8 then
    return ConstructionBrushPlaceable.ERROR.NOT_ENOUGH_SLOTS
  end
  local v9, v10 = v9:canBuy()
  if not v9 then
    return ConstructionBrushPlaceable.ERROR.CANNOT_BE_BOUGHT, v10
  end
  local v16 = v16:getFarmId()
  local v11, v12 = v11:getCanBePlacedAt(...)
  if not v11 then
    return ConstructionBrushPlaceable.ERROR.CANNOT_BE_PLACED_HERE, v12
  end
  if not self.freeMode and self.placeable.getHasOverlap ~= nil then
    local v13, v14 = v13:getHasOverlap(x, y, z, rotY)
    if v13 then
      if v14 ~= nil and g_currentMission.players[v14] == nil then
      end
      if v15 then
        return ConstructionBrushPlaceable.ERROR.PLAYER_COLLISION
      end
      return ConstructionBrushPlaceable.ERROR.OBJECT_OVERLAP
    end
  end
  if self.placeable.getHasOverlapWithZones ~= nil then
    v13 = v13:getHasOverlapWithZones(g_currentMission.restrictedZones, x, y, z, rotY)
    if v13 then
      return ConstructionBrush.ERROR.RESTRICTED_ZONE
    end
  end
  if self.placeable.getHasOverlapWithPlaces ~= nil then
    v13 = v13:getHasOverlapWithPlaces(g_currentMission.storeSpawnPlaces, x, y, z, rotY)
    if v13 then
      return ConstructionBrush.ERROR.STORE_PLACE
    end
    v13 = v13:getHasOverlapWithPlaces(g_currentMission.loadSpawnPlaces, x, y, z, rotY)
    if v13 then
      return ConstructionBrush.ERROR.SPAWN_PLACE
    end
  end
  if not self.freeMode and self.placeable.getRequiresLeveling ~= nil then
    v13 = v13:getRequiresLeveling()
    if v13 and self.activeValidationCount < ConstructionBrushPlaceable.MAX_ACTIVE_VALIDATIONS then
      self.terrainValidationPending = true
      self.activeValidationCount = self.activeValidationCount + 1
      v13:applyDeformation(true, function(...)
        self:onTerrainValidationFinished(...)
      end)
    end
  end
  if self.freeMode then
    self.displacementCosts = 0
  end
  return nil
end
function ConstructionBrushPlaceable:onTerrainValidationFinished(errorCode, displacedVolume, blockedObjectName)
  self.activeValidationCount = self.activeValidationCount - 1
  self.terrainValidationPending = false
  if errorCode == TerrainDeformation.STATE_STATE_CANCELLED then
    return
  end
  if errorCode == TerrainDeformation.STATE_SUCCESS then
    self.displacementCosts = displacedVolume * ConstructionBrushPlaceable.DISPLACEMENT_COST_PER_M3
    self.displacementError = nil
    return
  end
  self.displacementCosts = 0
  if errorCode == TerrainDeformation.STATE_FAILED_BLOCKED then
    self.displacementError = ConstructionBrushPlaceable.ERROR.BLOCKED
    return
  end
  if errorCode == TerrainDeformation.STATE_FAILED_COLLIDE_WITH_OBJECT then
    self.displacementError = ConstructionBrushPlaceable.ERROR.OBJECT_OVERLAP
    return
  end
  if errorCode == TerrainDeformation.STATE_FAILED_TO_DEFORM then
    self.displacementError = ConstructionBrushPlaceable.ERROR.DEFORM_FAILED
    return
  end
end
function ConstructionBrushPlaceable:loadPlaceable()
  if self.placeableXMLFilename == nil then
    Logging.warning("Placeable brush has no placeable set")
    return
  end
  self.isLoading = true
  local v3 = PlaceableUtil.loadPlaceable(self.placeableXMLFilename, {x = 0, y = -500, z = 0}, {x = 0, y = 0, z = 0}, nil, nil, ConstructionBrushPlaceable.loadedPlaceable, self, {})
  self.loadingPlaceable = v3
end
function ConstructionBrushPlaceable:loadedPlaceable(placeable, loadingState, args)
  self.isLoading = false
  self.loadingPlaceable = nil
  if loadingState == Placeable.LOADING_STATE_ERROR then
    Logging.warning("Failed to load placeable")
    if placeable ~= nil then
      placeable:delete()
    end
    return
  end
  if placeable == nil then
    Logging.warning("Failed to load placeable")
    return
  end
  if not self.isActive then
    placeable:delete()
    return
  end
  placeable:setPropertyState(Placeable.PROPERTY_STATE_CONSTRUCTION_PREVIEW)
  placeable:setOwnerFarmId(g_currentMission.player.farmId)
  if placeable.setColor ~= nil then
    placeable:setColor(self.colorIndex)
  end
  if self.cursor ~= nil and placeable.getRotationSnapAngle ~= nil then
    local snapAngle = placeable:getRotationSnapAngle()
    if snapAngle ~= 0 then
      v5:setSnapAngle(snapAngle)
    end
  end
  self:setInputTextDirty()
  self.placeable = placeable
end
function ConstructionBrushPlaceable:unloadPlaceable()
  if self.placeable ~= nil then
    v1:delete()
    self.placeable = nil
    self.isLoading = false
    self.isPlacing = false
  end
  if self.loadingPlaceable ~= nil then
    v1:delete()
  end
  if self.cursor ~= nil then
    v1:setSnapAngle(nil)
  end
end
function ConstructionBrushPlaceable:onButtonPrimary()
  if 0 < self.coolDownTimer then
    return
  end
  if self.placeable == nil then
    return
  end
  if not self.isLoading and not self.isPlacing then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L22
  end
  return
  local displacementCosts = self:getDisplacementCost()
  local v3, v4, v5 = v3:getPosition()
  local v6 = v6:getRotation()
  v7:startPlacementCheck(v3, v4, v5, v6)
  local v7, v8, v9 = self:getSnappedPosition(v3, v4, v5)
  v7 = self:getSnappedRotation(v6)
  v7 = self:verifyPlacement(v7, v8, v9, v7)
  if v7 ~= nil then
    return
  end
  self.isPlacing = true
  v8:subscribe(BuyPlaceableEvent, self.onPlaceableCreated, self)
  v8 = v8:getServerConnection()
  local v19 = v19:getFarmId()
  local v10 = BuyPlaceableEvent.new(self.placeableXMLFilename, v3, v4, v5, 0, v6, 0, displacementCosts, v19, v2, self.colorIndex)
  v8:sendEvent(...)
  if self.placeable.playPlaceSound ~= nil then
    v8:playPlaceSound()
  end
end
function ConstructionBrushPlaceable:onButtonTertiary()
  self.freeMode = not self.freeMode
  self:setInputTextDirty()
  if self.freeMode then
    local v1 = v1:getValue(GameSettings.SETTING.SHOWN_FREEMODE_WARNING)
    if not v1 then
      local v2 = v2:getText("ui_constructionFreeModeWarning")
      InfoDialog.show(...)
      v1:setValue(GameSettings.SETTING.SHOWN_FREEMODE_WARNING, true)
    end
  end
end
function ConstructionBrushPlaceable:onButtonSnapping()
  self.snappingActive = not self.snappingActive
  ConstructionBrushPlaceable.LAST_SNAPPING_STATE = self.snappingActive
  self:setInputTextDirty()
end
function ConstructionBrushPlaceable:onAxisPrimary(inputValue)
  if self.placeable == nil then
    return
  end
  if self.placeable.getAvailableColors == nil then
    return
  end
  local v2 = v2:getAvailableColors()
  if 0 < #v2 then
    self.colorIndex = self.colorIndex + inputValue
    if #v2 < self.colorIndex then
      self.colorIndex = 1
    elseif self.colorIndex < 1 then
      self.colorIndex = #v2
    end
    v3:setColor(self.colorIndex)
  end
end
function ConstructionBrushPlaceable:onAxisSecondary(inputValue)
  self.inputHeight = inputValue
end
function ConstructionBrushPlaceable:onPlaceableCreated(errorCode, price)
  self.isPlacing = false
  if errorCode == BuyPlaceableEvent.STATE_SUCCESS then
    self.coolDownTimer = 500
  elseif errorCode == BuyPlaceableEvent.STATE_FAILED_TO_LOAD then
    local v4 = v4:getText("ui_construction_couldNotLoadItem")
  else
    if errorCode == BuyPlaceableEvent.STATE_NO_SPACE then
      v4 = v4:getText("ui_construction_spaceAlreadyOccupied")
    elseif errorCode == BuyPlaceableEvent.STATE_NO_PERMISSION then
      v4 = v4:getText("ui_construction_noBuildPermission")
    else
      if errorCode == BuyPlaceableEvent.STATE_NOT_ENOUGH_MONEY then
        v4 = v4:getText("ui_construction_notEnoughMoney")
      elseif errorCode == BuyPlaceableEvent.STATE_TERRAIN_DEFORMATION_FAILED then
        v4 = v4:getText("ui_construction_deformationFailed")
      end
    end
  end
  if v3 ~= nil then
    self.errorText = v3
    self.errorEndTime = g_time + 3000
  end
  v4:unsubscribe(BuyPlaceableEvent, self)
end
function ConstructionBrushPlaceable.getButtonPrimaryText(v0)
  return "$l10n_input_CONSTRUCTION_PLACE"
end
function ConstructionBrushPlaceable:getButtonTertiaryText()
  local price = price:getText("input_CONSTRUCTION_FREEMODE")
  if self.freeMode then
  else
  end
  local v3 = v3:getText(v5)
  return errorCode(...)
end
function ConstructionBrushPlaceable:getAxisPrimaryText()
  if self.placeable ~= nil and self.placeable.getHasColors ~= nil then
    local errorCode = errorCode:getHasColors()
    if errorCode then
      return "$l10n_input_CONSTRUCTION_CHANGE_COLOR"
    end
  end
  return nil
end
function ConstructionBrushPlaceable.getAxisSecondaryText(v0)
  return "$l10n_input_CONSTRUCTION_HEIGHT"
end
function ConstructionBrushPlaceable:getButtonSnappingText()
  local v3 = v3:getText("input_CONSTRUCTION_ACTION_SNAPPING")
  if self.snappingActive then
  else
  end
  local v4 = v4:getText(v6)
  return errorCode(...)
end
