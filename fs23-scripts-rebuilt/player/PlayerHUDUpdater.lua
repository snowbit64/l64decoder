-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlayerHUDUpdater = {}
local PlayerHUDUpdater_mt = Class(PlayerHUDUpdater)
function PlayerHUDUpdater.new()
  local v0 = setmetatable({}, u0)
  v0.object = nil
  v0.isBale = false
  v0.isVehicle = false
  v0.isPallet = false
  v0.isSplitShape = false
  v0.isAnimal = false
  if Platform.isMobile then
    local v1 = v1:createBox(KeyValueInfoHUDBoxMobile)
    v0.fieldBox = v1
    v1 = v1:createBox(KeyValueInfoHUDBoxMobile)
    v0.objectBox = v1
    return v0
  end
  v1 = v1:createBox(KeyValueInfoHUDBox)
  v0.fieldBox = v1
  v1 = v1:createBox(KeyValueInfoHUDBox)
  v0.objectBox = v1
  return v0
end
function PlayerHUDUpdater:delete()
  v1:destroyBox(self.fieldBox)
  v1:destroyBox(self.objectBox)
end
function PlayerHUDUpdater:update(dt, x, y, z, rotY)
  self:updateFieldInfo(x, z, rotY)
  if self.fieldData ~= nil then
    self:showFieldInfo()
  end
  if Platform.playerInfo.showVehicleInfo then
    if self.isVehicle then
      self:showVehicleInfo(self.object)
      return
    end
    if self.isBale then
      self:showBaleInfo(self.object)
      return
    end
    if self.isPallet then
      self:showPalletInfo(self.object)
      return
    end
    if self.isSplitShape then
      self:showSplitShapeInfo(self.object)
      return
    end
    if self.isAnimal then
      self:showAnimalInfo(self.object)
    end
  end
end
function PlayerHUDUpdater:setCurrentRaycastTarget(node)
  if self.currentRaycastTarget ~= node then
    self.currentRaycastTarget = node
    self:updateRaycastObject()
  end
end
function PlayerHUDUpdater:updateRaycastObject()
  self.isBale = false
  self.isVehicle = false
  self.isPallet = false
  self.isSplitShape = false
  self.isAnimal = false
  self.object = nil
  if self.currentRaycastTarget == nil then
    return
  end
  local v1 = v1:getNodeObject(self.currentRaycastTarget)
  if v1 == nil then
    local v2 = getHasClassId(self.currentRaycastTarget, ClassIds.MESH_SPLIT_SHAPE)
    if v2 then
      self.isSplitShape = true
      self.object = self.currentRaycastTarget
      return
    end
    local v2, v3 = getAnimalFromCollisionNode(self.currentRaycastTarget)
    if v2 ~= nil and v2 ~= 0 then
      local v4 = v4:getClusterHusbandyById(v2)
      if v4 ~= nil then
        local v5 = v4:getClusterByAnimalId(v3)
        if v5 ~= nil then
          self.isAnimal = true
          self.object = v5
          return
        end
      end
    end
    return
  end
  self.object = v1
  v2 = v1:isa(Vehicle)
  if v2 then
    if v1.isPallet then
      self.isPallet = true
      return
    end
    self.isVehicle = true
    return
  end
  v2 = v1:isa(Bale)
  if v2 then
    self.isBale = true
  end
end
function PlayerHUDUpdater.convertFarmToName(v0, v1)
  if not g_currentMission.missionDynamicInfo.isMultiplayer then
    return v2:getText("fieldInfo_ownerYou")
  end
  return v1.name
end
function PlayerHUDUpdater:showVehicleInfo(vehicle)
  local name = vehicle:getFullName()
  local farmId = vehicle:getOwnerFarmId()
  if farmId ~= FarmManager.SPECTATOR_FARM_ID then
    local v4 = v4:getFarmById(farmId)
    self.objectBox:clear()
    self.objectBox:setTitle(name)
    local propertyState = vehicle:getPropertyState()
    if propertyState == Vehicle.PROPERTY_STATE_OWNED then
      local v9 = v9:getText("fieldInfo_ownedBy")
      local v10 = self:convertFarmToName(v4)
      self.objectBox:addLine(...)
    else
      v9 = v9:getText("infohud_rentedBy")
      v10 = self:convertFarmToName(v4)
      self.objectBox:addLine(...)
    end
    vehicle:showInfo(v5)
    v5:showNextFrame()
  end
end
function PlayerHUDUpdater:showBaleInfo(bale)
  local v4 = bale:getOwnerFarmId()
  local v2 = v2:getFarmById(...)
  self.objectBox:clear()
  local v6 = v6:getText("infohud_bale")
  self.objectBox:setTitle(...)
  if v2 ~= nil then
    v6 = v6:getText("fieldInfo_ownedBy")
    local v7 = self:convertFarmToName(v2)
    self.objectBox:addLine(...)
  end
  bale:showInfo(v3)
  v3:showNextFrame()
end
function PlayerHUDUpdater:showPalletInfo(pallet)
  local mass = pallet:getTotalMass()
  local v5 = pallet:getOwnerFarmId()
  local v3 = v3:getFarmById(...)
  self.objectBox:clear()
  if pallet.getInfoBoxTitle ~= nil then
    local v7 = pallet:getInfoBoxTitle()
    self.objectBox:setTitle(...)
  else
    v7 = v7:getText("infohud_pallet")
    self.objectBox:setTitle(...)
  end
  if v3 ~= nil then
    v7 = v7:getText("fieldInfo_ownedBy")
    local v8 = self:convertFarmToName(v3)
    v4:addLine(...)
  end
  v7 = v7:getText("infohud_mass")
  v8 = v8:formatMass(mass)
  v4:addLine(...)
  pallet:showInfo(v4)
  v4:showNextFrame()
end
function PlayerHUDUpdater:showSplitShapeInfo(splitShape)
  local v2 = entityExists(splitShape)
  if v2 then
    v2 = getHasClassId(splitShape, ClassIds.MESH_SPLIT_SHAPE)
    -- if v2 then goto L13 end
  end
  return
  v2 = getSplitType(splitShape)
  if v2 == 0 then
    return
  end
  local isSplit = getIsSplitShapeSplit(splitShape)
  local v5 = getRigidBodyType(splitShape)
  if v5 ~= RigidBodyType.STATIC then
  end
  if isSplit and true then
    return
  end
  local v5, v6, v7, v8, v9 = getSplitShapeStats(splitShape)
  local v10 = v10:getSplitTypeByIndex(v2)
  if v10 then
  end
  local v12 = math.max(v5, v6, v7)
  self.objectBox:clear()
  if isSplit then
    local v16 = v16:getText("infohud_wood")
    self.objectBox:setTitle(...)
  else
    v16 = v16:getText("infohud_tree")
    self.objectBox:setTitle(...)
  end
  if v11 ~= nil then
    v16 = v16:getText("infohud_type")
    v13:addLine(v16, v11)
  end
  v16 = v16:getText("infohud_length")
  local v20 = v20:formatNumber(v12, 1)
  v13:addLine(v16, v20 .. " m")
  local v14 = v14:getIsServer()
  if v14 and not v4 then
    v14 = getMass(splitShape)
    local v17 = v17:getText("infohud_mass")
    local v18 = v18:formatMass(v14)
    v13:addLine(...)
  end
  v13:showNextFrame()
end
function PlayerHUDUpdater:showAnimalInfo(cluster)
  self.objectBox:clear()
  local v5 = v5:getText("infohud_animal")
  self.objectBox:setTitle(...)
  cluster:showInfo(self.objectBox)
  self.objectBox:showNextFrame()
end
PlayerHUDUpdater.LIME_REQUIRED_THRESHOLD = 0.25
PlayerHUDUpdater.PLOWING_REQUIRED_THRESHOLD = 0.25
PlayerHUDUpdater.ROLLING_REQUIRED_THRESHOLD = 0.25
function PlayerHUDUpdater:updateFieldInfo(posX, posZ, rotY)
  if self.requestedFieldData then
    return
  end
  local v4, v5 = unpack(Platform.playerInfo.fieldInfoDistance)
  local v6, v7 = MathUtil.getDirectionFromYRotation(rotY)
  local v8, v9, v10 = MathUtil.crossProduct(v6, 0, v7, 0, 1, 0)
  self.requestedFieldData = true
  FSDensityMapUtil.getFieldStatusAsync(posX - v8 * v4 * 0.5 - v6 * 2, posZ - v10 * v4 * 0.5 - v7 * 2, posX + v8 * v4 * 0.5 - v6 * 2, posZ + v10 * v4 * 0.5 - v7 * 2, posX - v8 * v4 * 0.5 - v6 * (2 + v5), posZ - v10 * v4 * 0.5 - v7 * (2 + v5), self.onFieldDataUpdateFinished, self)
end
function PlayerHUDUpdater:onFieldDataUpdateFinished(data)
  if self.requestedFieldData then
    self.fieldData = data
    self.fieldInfoNeedsRebuild = true
  end
  self.requestedFieldData = false
end
function PlayerHUDUpdater:showFieldInfo()
  if self.fieldInfoNeedsRebuild then
    self.fieldBox:clear()
    local v5 = v5:getText("ui_fieldInfo")
    self.fieldBox:setTitle(...)
    self:fieldAddFarmland(self.fieldData, self.fieldBox)
    self:fieldAddFruit(self.fieldData, self.fieldBox)
    self:fieldAddFertilization(self.fieldData, self.fieldBox)
    self:fieldAddWeed(self.fieldData, self.fieldBox)
    self:fieldAddLime(self.fieldData, self.fieldBox)
    self:fieldAddPlowing(self.fieldData, self.fieldBox)
    self:fieldAddRolling(self.fieldData, self.fieldBox)
    self.fieldInfoNeedsRebuild = false
  end
  v2:showNextFrame()
end
function PlayerHUDUpdater.fieldAddFarmland(v0, v1, v2)
  local v6 = v6:getFarmId()
  if v1.ownerFarmId == v6 then
    -- if v1.ownerFarmId == FarmManager.SPECTATOR_FARM_ID then goto L24 end
    v6 = v6:getText("fieldInfo_ownerYou")
  else
    if v1.ownerFarmId ~= AccessHandler.EVERYONE then
      -- if v1.ownerFarmId ~= AccessHandler.NOBODY then goto L60 end
    end
    v6 = v6:getFarmlandById(v1.farmlandId)
    if v6 == nil then
      local v7 = v7:getText("fieldInfo_ownerNobody")
    else
      v7 = v6:getNPC()
      if v7 ~= nil then
        -- if v7.title then goto L58 end
      end
      -- goto L72  (LOP_JUMP +12)
      v6 = v6:getFarmById(v5)
      if v6 ~= nil then
      else
      end
    end
  end
  if Platform.playerInfo.showNPCNames then
    local v8 = v8:getText("fieldInfo_ownedBy")
    v2:addLine(v8, v3)
    return
  end
  if v4 then
    v8 = v8:getText("fieldInfo_owned")
    v2:addLine(...)
    return
  end
  v8 = v8:getText("fieldInfo_notOwned")
  v2:addLine(...)
end
function PlayerHUDUpdater.fieldAddLime(v0, v1, v2)
  if not Platform.gameplay.useLimeCounter then
    return
  end
  if PlayerHUDUpdater.LIME_REQUIRED_THRESHOLD >= v1.needsLimeFactor then
  end
  if true and g_currentMission.missionInfo.limeRequired then
    local v6 = v6:getText("ui_growthMapNeedsLime")
    v2:addLine(v6, nil, true)
  end
end
function PlayerHUDUpdater.fieldAddPlowing(v0, v1, v2)
  if v1.plowFactor >= PlayerHUDUpdater.PLOWING_REQUIRED_THRESHOLD then
  end
  if true and g_currentMission.missionInfo.plowingRequiredEnabled then
    local v6 = v6:getText("ui_growthMapNeedsPlowing")
    v2:addLine(v6, nil, true)
  end
end
function PlayerHUDUpdater.fieldAddRolling(v0, v1, v2)
  if not Platform.gameplay.useRolling then
    return
  end
  if PlayerHUDUpdater.ROLLING_REQUIRED_THRESHOLD >= v1.needsRollingFactor then
  end
  if true then
    local v6 = v6:getText("ui_growthMapNeedsRolling")
    v2:addLine(v6, nil, true)
  end
end
function PlayerHUDUpdater.fieldAddFertilization(v0, v1, v2)
  if 0 <= v1.fertilizerFactor then
    local v6 = v6:getText("ui_growthMapFertilized")
    local v7 = string.format("%d %%", v1.fertilizerFactor * 100)
    v2:addLine(...)
  end
end
function PlayerHUDUpdater.fieldAddWeed(v0, v1, v2)
  if g_currentMission.missionInfo.weedsEnabled then
    local v4 = g_currentMission.weedSystem:getFieldInfoStates()
    for v10, v11 in pairs(v1.weed) do
      if not (v6 < v11) then
        continue
      end
    end
    if v5 == nil then
      return
    end
    if v1.fruitTypeMax ~= nil then
      v11 = v11:getFruitTypeByIndex(v1.fruitTypeMax)
    end
    if Platform.gameplay.hasWeeder then
      if v8 ~= nil then
        -- if v9 >= v10.minHarvestingGrowthState then goto L71 end
        -- if v9 > v10.maxWeederState then goto L71 end
      end
      v11 = v3:getWeederReplacements(false)
      if v11.weed.replacements[v5] == 0 then
        local v14 = v14:getText("weed_destruction_weeder")
      end
      if v7 == nil then
        if v8 ~= nil then
          -- if v9 >= v10.minHarvestingGrowthState then goto L101 end
          -- if v9 > v10.maxWeederHoeState then goto L101 end
        end
        v11 = v3:getWeederReplacements(true)
        if v11.weed.replacements[v5] == 0 then
          v14 = v14:getText("weed_destruction_hoe")
        end
      end
    end
    if v7 == nil then
      if v8 ~= nil then
        -- if v9 >= v10.minHarvestingGrowthState then goto L116 end
      end
      v11 = v11:getText("weed_destruction_herbicide")
    end
    v2:addLine(v4[v5], v7 or "-", true)
  end
end
function PlayerHUDUpdater.fieldAddFruit(v0, v1, v2)
  if v1.fruitTypeMax == nil then
    return
  end
  local v5 = v5:getFruitTypeByIndex(v3)
  local v8 = v8:getText("statistic_fillType")
  v2:addLine(v8, v5.fillType.title)
  if 0 <= v5.maxPreparingGrowthState then
  end
  if 0 <= v5.minPreparingGrowthState then
    v8 = math.min(v5.minHarvestingGrowthState - 1, v5.minPreparingGrowthState - 1)
  end
  if v4 == v5.cutState then
    local v10 = v10:getText("ui_growthMapCut")
  elseif v4 == v6 then
    v10 = v10:getText("ui_growthMapWithered")
  else
    if 0 < v4 then
      -- if v4 > v7 then goto L93 end
      v10 = v10:getText("ui_growthMapGrowing")
    elseif 0 <= v5.minPreparingGrowthState then
      -- if v5.minPreparingGrowthState > v4 then goto L115 end
      -- if v4 > v5.maxPreparingGrowthState then goto L115 end
      v10 = v10:getText("ui_growthMapReadyToPrepareForHarvest")
    else
      if v5.minHarvestingGrowthState <= v4 and v4 <= v5.maxHarvestingGrowthState then
        v10 = v10:getText("ui_growthMapReadyToHarvest")
      end
    end
  end
  if v8 ~= nil then
    local v12 = v12:getText("ui_mapOverviewGrowth")
    v2:addLine(v12, v8)
    if v9 then
      if not g_currentMission.missionInfo.plowingRequiredEnabled then
      end
      if v16.limeRequired and Platform.gameplay.useLimeCounter then
      end
      if not v16.weedsEnabled then
      end
      if Platform.gameplay.useRolling then
      end
      if Platform.gameplay.useStubbleShred then
      end
      local v18 = v18:getHarvestScaleMultiplier(v3, v10, v11, v12, v13, v14, v15, 0)
      v18 = MathUtil.round((v18 - 1) * 100)
      local v20 = v20:getText("fieldInfo_yieldBonus")
      local v21 = string.format("+ %d %%", v18)
      v2:addLine(...)
    end
  end
end
