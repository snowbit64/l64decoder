-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/MixerWagonBaleNotAcceptedEvent.lua")
MixerWagon = {HUD_TRIGGER_I3D_FILENAME = "data/shared/mixerWagonHUDTrigger.i3d"}
source("dataS/scripts/gui/hud/MixerWagonHUDExtension.lua")
function MixerWagon.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(Trailer, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(TurnOnVehicle, specializations)
  end
  return v1
end
function MixerWagon.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("MixerWagon")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.mixerWagon.mixAnimationNodes")
  AnimationManager.registerAnimationNodesXMLPaths(Vehicle.xmlSchema, "vehicle.mixerWagon.pickupAnimationNodes")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.mixerWagon.baleTriggers.baleTrigger(?)#node", "Bale trigger node")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.mixerWagon.baleTriggers.baleTrigger(?)#pickupSpeed", "Bale pickup speed in liter per second", 500)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.mixerWagon.baleTriggers.baleTrigger(?)#needsSetIsTurnedOn", "Vehicle needs to be turned on to pickup bales with this trigger", false)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.mixerWagon.baleTriggers.baleTrigger(?)#useEffect", "Filling effect is played while picking up a bale", false)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.mixerWagon#mixingTime", "Mixing time after the fill level was changed", 5)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.mixerWagon#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.mixerWagon#recipe", "Recipe fill type name")
  EffectManager.registerEffectXMLPaths(Vehicle.xmlSchema, "vehicle.mixerWagon.fillEffect")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?).mixerWagon.fillType(?)#fillLevel", "Fill level", 0)
end
function MixerWagon.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "mixerWagonBaleTriggerCallback", MixerWagon.mixerWagonBaleTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "onHUDTriggerCallback", MixerWagon.onHUDTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "getIsPlayerInTrigger", MixerWagon.getIsPlayerInTrigger)
end
function MixerWagon.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "addFillUnitFillLevel", MixerWagon.addFillUnitFillLevel)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getFillUnitAllowsFillType", MixerWagon.getFillUnitAllowsFillType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDischargeFillType", MixerWagon.getDischargeFillType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsBaleAutoLoadable", MixerWagon.getIsBaleAutoLoadable)
end
function MixerWagon.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", MixerWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", MixerWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", MixerWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", MixerWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", MixerWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", MixerWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", MixerWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", MixerWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOn", MixerWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", MixerWagon)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", MixerWagon)
end
function MixerWagon:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mixerWagonBaleTrigger#index", "vehicle.mixerWagon.baleTrigger#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mixerWagon.baleTrigger#index", "vehicle.mixerWagon.baleTrigger#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mixerWagonPickupStartSound", "vehicle.turnOnVehicle.sounds.start")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mixerWagonPickupStopSound", "vehicle.turnOnVehicle.sounds.stop")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mixerWagonPickupSound", "vehicle.turnOnVehicle.sounds.work")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mixerWagonRotatingParts.mixerWagonRotatingPart#type", "vehicle.mixerWagon.mixAnimationNodes.animationNode", "mixerWagonMix")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mixerWagonRotatingParts.mixerWagonRotatingPart#type", "vehicle.mixerWagon.pickupAnimationNodes.animationNode", "mixerWagonPickup")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mixerWagonRotatingParts.mixerWagonScroller", "vehicle.mixerWagon.pickupAnimationNodes.pickupAnimationNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.mixerWagon.baleTrigger#node", "vehicle.mixerWagon.baleTriggers.baleTrigger#node")
  if self.isClient then
    local v3 = v3:loadAnimations(self.xmlFile, "vehicle.mixerWagon.mixAnimationNodes", self.components, self, self.i3dMappings)
    self.spec_mixerWagon.mixAnimationNodes = v3
    v3 = v3:loadAnimations(self.xmlFile, "vehicle.mixerWagon.pickupAnimationNodes", self.components, self, self.i3dMappings)
    self.spec_mixerWagon.pickupAnimationNodes = v3
    v3 = v3:loadEffect(self.xmlFile, "vehicle.mixerWagon.fillEffect", self.components, self, self.i3dMappings)
    self.spec_mixerWagon.fillEffects = v3
    self.spec_mixerWagon.fillEffectsFillType = FillType.UNKNOWN
    self.spec_mixerWagon.fillEffectsState = false
  end
  if self.isServer then
    v2.baleTriggers = {}
    v3:iterate("vehicle.mixerWagon.baleTriggers.baleTrigger", function(self, savegame)
      local v3 = v3:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      if {node = v3}.node ~= nil then
        addTrigger({node = v3}.node, "mixerWagonBaleTriggerCallback", u0)
        local v4 = v4:getValue(savegame .. "#pickupSpeed", 500)
        v3 = v3:getValue(savegame .. "#needsSetIsTurnedOn", false)
        v3 = v3:getValue(savegame .. "#useEffect", false)
        table.insert(u1.baleTriggers, {node = v3, pickupSpeed = v4 / 1000, needsSetIsTurnedOn = v3, useEffect = v3, balesInTrigger = {}})
      end
    end)
  end
  v3 = v3:getValue("vehicle.mixerWagon#mixingTime", 5)
  v2.activeTimerMax = v3
  v2.activeTimer = 0
  v3 = v3:getValue("vehicle.mixerWagon#fillUnitIndex", 1)
  v2.fillUnitIndex = v3
  v2.mixerWagonFillTypes = {}
  v2.fillTypeToMixerWagonFillType = {}
  v3 = v3:getValue("vehicle.mixerWagon#recipe")
  if v3 ~= nil then
    local v4 = v4:getFillTypeIndexByName(v3)
    if v4 == nil then
      Logging.xmlError(self.xmlFile, "MixerWagon recipe '%s' not defined!", v3)
    end
    local v5 = v5:getRecipeByFillTypeIndex(v4)
    if v5 == nil then
      Logging.xmlWarning(self.xmlFile, "MixerWagon recipe '%s' not defined!", v3)
    end
    if v5 ~= nil then
      for v9, v10 in ipairs(v5.ingredients) do
        for v15, v16 in ipairs(v10.fillTypes) do
          v11.fillTypes[v16] = true
          v2.fillTypeToMixerWagonFillType[v16] = v11
        end
        table.insert(v2.mixerWagonFillTypes, v11)
      end
    end
  end
  if 0 < #v2.mixerWagonFillTypes then
    v4 = self:getFillUnitByIndex(v2.fillUnitIndex)
    if v4 ~= nil then
      v4.needsSaving = false
      v4.synchronizeFillLevel = false
    end
  end
  if Platform.gameplay.hasTMRMixing then
    v4, v5 = v4:loadSharedI3DFile(MixerWagon.HUD_TRIGGER_I3D_FILENAME, false, false)
    if v4 ~= 0 then
      v6 = getChildAt(v4, 0)
      v2.hudTrigger = v6
      v2.hudTriggerSharedLoadRequestId = v5
      link(self.rootNode, v2.hudTrigger)
      addTrigger(v2.hudTrigger, "onHUDTriggerCallback", self)
      delete(v4)
      v2.vehicleToNodeCount = {}
    end
  end
  v4 = self:getNextDirtyFlag()
  v2.dirtyFlag = v4
  v4 = self:getNextDirtyFlag()
  v2.effectDirtyFlag = v4
end
function MixerWagon:onPostLoad(savegame)
  if savegame ~= nil then
    for v6, v7 in ipairs(self.spec_mixerWagon.mixerWagonFillTypes) do
      local v10 = string.format(".mixerWagon.fillType(%d)#fillLevel", v6 - 1)
      local v9 = v9:getValue(savegame.key .. v10, 0)
      if not (0 < v9) then
        continue
      end
      local v12 = self:getOwnerFarmId()
      local v15 = next(v7.fillTypes)
      self:addFillUnitFillLevel(v12, v2.fillUnitIndex, v9, v15, ToolType.UNDEFINED, nil)
    end
  end
end
function MixerWagon:onDelete()
  if self.spec_mixerWagon.baleTriggers ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 11, target 21)
    removeTrigger(self.spec_mixerWagon.baleTriggers[1].node)
    -- TODO: structure LOP_FORNLOOP (pc 20, target 12)
  end
  v2:deleteAnimations(v1.mixAnimationNodes)
  v2:deleteAnimations(v1.pickupAnimationNodes)
  v2:deleteEffects(v1.fillEffects)
  if v1.hudTrigger ~= nil then
    removeTrigger(v1.hudTrigger)
    v2:releaseSharedI3DFile(v1.hudTriggerSharedLoadRequestId)
  end
end
function MixerWagon:saveToXMLFile(xmlFile, key, usedModNames)
  for v8, v9 in ipairs(self.spec_mixerWagon.mixerWagonFillTypes) do
    local v10 = string.format("%s.fillType(%d)", key, v8 - 1)
    xmlFile:setValue(v10 .. "#fillLevel", v9.fillLevel)
  end
end
function MixerWagon:onReadStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_mixerWagon.mixerWagonFillTypes) do
    local fillLevel = streamReadFloat32(streamId)
    if not (0 < fillLevel) then
      continue
    end
    local v12 = self:getOwnerFarmId()
    local v15 = next(v8.fillTypes)
    self:addFillUnitFillLevel(v12, v3.fillUnitIndex, fillLevel, v15, ToolType.UNDEFINED, nil)
  end
  v4 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
  v3.fillEffectsFillType = v4
end
function MixerWagon:onWriteStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_mixerWagon.mixerWagonFillTypes) do
    streamWriteFloat32(streamId, v8.fillLevel)
  end
  streamWriteUIntN(streamId, v3.fillEffectsFillType, FillTypeManager.SEND_NUM_BITS)
end
function MixerWagon:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      for v8, v9 in ipairs(self.spec_mixerWagon.mixerWagonFillTypes) do
        local v10 = streamReadFloat32(streamId)
        if not (v10 - v9.fillLevel ~= 0) then
          continue
        end
        local v14 = self:getOwnerFarmId()
        local v17 = next(v9.fillTypes)
        self:addFillUnitFillLevel(v14, v4.fillUnitIndex, v10 - v9.fillLevel, v17, ToolType.UNDEFINED, nil)
      end
    end
    v5 = streamReadBool(streamId)
    if v5 then
      v5 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
      v4.fillEffectsFillType = v5
    end
  end
end
function MixerWagon:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_mixerWagon.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      for v8, v9 in ipairs(v4.mixerWagonFillTypes) do
        streamWriteFloat32(streamId, v9.fillLevel)
      end
    end
    v8 = bitAND(dirtyMask, v4.effectDirtyFlag)
    if v8 == 0 then
    end
    v5 = v5(v6, true)
    if v5 then
      streamWriteUIntN(streamId, v4.fillEffectsFillType, FillTypeManager.SEND_NUM_BITS)
    end
  end
end
function MixerWagon:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local tipState = self:getTipState()
  local v7 = self:getIsTurnedOn()
  if tipState ~= Trailer.TIPSTATE_OPENING and tipState ~= Trailer.TIPSTATE_OPEN then
  end
  local v9 = self:getIsPowered()
  if v9 then
    if 0 >= v5.activeTimer and not v7 then
      -- if not v8 then goto L43 end
    end
    v5.activeTimer = v5.activeTimer - dt
    v9:startAnimations(v5.mixAnimationNodes)
  else
    v9:stopAnimations(v5.mixAnimationNodes)
  end
  if self.isServer then
    local v10 = self:getFillUnitFreeCapacity(v5.fillUnitIndex)
    if 0 < v10 then
      -- TODO: structure LOP_FORNPREP (pc 68, target 136)
      if v5.baleTriggers[1].needsSetIsTurnedOn then
        local v14 = self:getIsTurnedOn()
        -- if not v14 then goto L135 end
      end
      for v17, v18 in pairs(v13.balesInTrigger) do
        local v19 = v17:getFillLevel()
        local v20 = math.min(v13.pickupSpeed * dt, v19)
        local v21 = v17:getFillType()
        local v24 = self:getOwnerFarmId()
        local v22 = self:addFillUnitFillLevel(v24, v5.fillUnitIndex, v20, v21, ToolType.BALE, nil)
        v17:setFillLevel(v19 - v22)
        if v19 - v22 < 0.01 then
          v17:delete()
          v13.balesInTrigger[v17] = nil
        end
        if not v13.useEffect then
          continue
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 135, target 69)
    end
    if v9 == FillType.UNKNOWN and self.getIsShovelEffectState ~= nil then
      local v10, v11 = self:getIsShovelEffectState()
      if v10 then
      end
    end
    if v5.fillEffectsFillType ~= v9 then
      v5.fillEffectsFillType = v9
      self:raiseDirtyFlags(v5.effectDirtyFlag)
    end
  end
  if self.isClient then
    if v5.fillEffectsFillType == FillType.UNKNOWN then
    end
    if true ~= v5.fillEffectsState then
      if true then
        v10:setFillType(v5.fillEffects, v5.fillEffectsFillType)
        v10:startEffects(v5.fillEffects)
      else
        v10:stopEffects(v5.fillEffects)
      end
      v5.fillEffectsState = v9
    end
  end
end
function MixerWagon:mixerWagonBaleTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if otherActorId ~= 0 then
    local v7 = v7:getNodeObject(otherActorId)
    if v7 ~= nil then
      local v8 = v7:isa(Bale)
      if v8 then
        local v12 = v7:getFillType()
        local v9 = self:getFillUnitSupportsFillType(...)
        if v9 then
          -- TODO: structure LOP_FORNPREP (pc 32, target 87)
          if self.spec_mixerWagon.baleTriggers[1].node == triggerId then
            if onEnter then
              self.spec_mixerWagon.baleTriggers[1].balesInTrigger[v7] = (self.spec_mixerWagon.baleTriggers[1].balesInTrigger[v7] or 0) + 1
            elseif onLeave then
              self.spec_mixerWagon.baleTriggers[1].balesInTrigger[v7] = (self.spec_mixerWagon.baleTriggers[1].balesInTrigger[v7] or 1) - 1
              if self.spec_mixerWagon.baleTriggers[1].balesInTrigger[v7] == 0 then
                self.spec_mixerWagon.baleTriggers[1].balesInTrigger[v7] = nil
              end
            end
          end
          -- TODO: structure LOP_FORNLOOP (pc 68, target 33)
          return
        end
        if onEnter and otherActorId == v7.nodeId then
          local v11 = MixerWagonBaleNotAcceptedEvent.new()
          v12 = self:getOwnerFarmId()
          v9:broadcastEventToFarm(v11, v12, true)
        end
      end
    end
  end
end
function MixerWagon:addFillUnitFillLevel(superFunc, farmId, fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData)
  if fillUnitIndex ~= self.spec_mixerWagon.fillUnitIndex then
    return superFunc(self, farmId, fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData)
  end
  if #v8.mixerWagonFillTypes == 0 then
    if fillLevelDelta ~= 0 then
      v9 = self:getIsSynchronized()
      if v9 then
        v8.activeTimer = v8.activeTimerMax
      end
    end
    v9 = superFunc(self, farmId, fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData)
    return v9
  end
  v9 = self:getFillUnitFillLevel(fillUnitIndex)
  if fillTypeIndex == FillType.FORAGE and 0 < fillLevelDelta then
    for v14, v15 in pairs(v8.mixerWagonFillTypes) do
      local v22 = next(v15.fillTypes)
      self:addFillUnitFillLevel(farmId, fillUnitIndex, fillLevelDelta * v15.ratio, v22, toolType, fillPositionData)
    end
    return fillLevelDelta
  end
  if v10 == nil then
    if fillLevelDelta < 0 and 0 < v9 then
      v11 = math.max(fillLevelDelta, -v9)
      for v15, v16 in pairs(v8.mixerWagonFillTypes) do
        local v18 = math.max(v16.fillLevel + fillLevelDelta * v16.fillLevel / v9, 0)
        v16.fillLevel = v18
      end
      if v11 < 0.1 then
        for v15, v16 in pairs(v8.mixerWagonFillTypes) do
          v16.fillLevel = 0
        end
      end
      self:raiseDirtyFlags(v8.dirtyFlag)
      v12 = superFunc(self, farmId, fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData)
      return v12
    end
    return 0
  end
  v11 = self:getFillUnitCapacity(fillUnitIndex)
  if 0 < fillLevelDelta then
    v15 = math.min(v11 - v9, fillLevelDelta)
    v10.fillLevel = v10.fillLevel + v15
  else
    v13 = math.max(0, v10.fillLevel + fillLevelDelta)
    v10.fillLevel = v13
  end
  for v17, v18 in pairs(v8.mixerWagonFillTypes) do
  end
  v17 = self:getFillUnitCapacity(fillUnitIndex)
  v14 = MathUtil.clamp(...)
  for v20, v21 in pairs(v8.mixerWagonFillTypes) do
    if not (v13 == v21.fillLevel) then
      continue
    end
    v22 = next(v10.fillTypes)
    break
  end
  if not v15 then
    for v20, v21 in pairs(v8.mixerWagonFillTypes) do
      if v21.fillLevel >= v21.minPercentage * v13 - 0.01 and not (v21.maxPercentage * v13 + 0.01 < v21.fillLevel) then
        continue
      end
      break
    end
  end
  if v16 then
  elseif not v15 then
  end
  self:raiseDirtyFlags(v8.dirtyFlag)
  self:setFillUnitFillType(fillUnitIndex, v14)
  v17 = superFunc(self, farmId, fillUnitIndex, v13 - v9, v14, toolType, fillPositionData)
  return v17
end
function MixerWagon:getFillUnitAllowsFillType(superFunc, fillUnitIndex, fillTypeIndex)
  if self.spec_mixerWagon.fillUnitIndex == fillUnitIndex and 0 < #self.spec_mixerWagon.mixerWagonFillTypes and self.spec_mixerWagon.fillTypeToMixerWagonFillType[fillTypeIndex] ~= nil then
    return true
  end
  return superFunc(self, fillUnitIndex, fillTypeIndex)
end
function MixerWagon:getDischargeFillType(superFunc, dischargeNode)
  if dischargeNode.fillUnitIndex == self.spec_mixerWagon.fillUnitIndex then
    local fillTypeIndex = self:getFillUnitFillType(dischargeNode.fillUnitIndex)
    local toolType = self:getFillUnitFillLevel(dischargeNode.fillUnitIndex)
    if fillTypeIndex == FillType.FORAGE_MIXING and 0 < toolType then
      for v10, v11 in pairs(self.spec_mixerWagon.mixerWagonFillTypes) do
        if not (0 < v11.fillLevel) then
          continue
        end
        local v12 = next(v11.fillTypes)
        break
      end
    end
    return fillTypeIndex, 1
  end
  fillTypeIndex = superFunc(self, dischargeNode)
  return fillTypeIndex
end
function MixerWagon:getIsBaleAutoLoadable(superFunc, farmId)
  local fillLevelDelta = self:getIsTurnedOn()
  if not fillLevelDelta then
    return false
  end
  -- TODO: structure LOP_FORNPREP (pc 13, target 27)
  local v8 = next(fillUnitIndex.baleTriggers[1].balesInTrigger)
  if v8 ~= nil then
    return false
  end
  -- TODO: structure LOP_FORNLOOP (pc 26, target 14)
  fillLevelDelta = self:getFillUnitFillType(fillUnitIndex.fillUnitIndex)
  if fillLevelDelta ~= FillType.UNKNOWN then
    local fillTypeIndex = farmId:getFillType()
    if fillTypeIndex ~= fillLevelDelta then
      return false
    end
  end
  fillTypeIndex = self:getFillUnitFreeCapacity(fillUnitIndex.fillUnitIndex)
  if fillTypeIndex <= 0 then
    return false
  end
  fillTypeIndex = superFunc(self, farmId)
  return fillTypeIndex
end
function MixerWagon:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillTypeIndex, toolType, fillPositionData, appliedDelta)
  if self.spec_mixerWagon.fillUnitIndex == fillUnitIndex then
    local v8 = self:getFillUnitFillLevel(fillUnitIndex)
    if v8 == 0 then
      for v12, v13 in pairs(self.spec_mixerWagon.mixerWagonFillTypes) do
        v13.fillLevel = 0
      end
    end
  end
end
function MixerWagon:onTurnedOn()
  if self.isClient then
    farmId:startAnimations(self.spec_mixerWagon.pickupAnimationNodes)
  end
end
function MixerWagon:onTurnedOff()
  if self.isClient then
    farmId:stopAnimations(self.spec_mixerWagon.pickupAnimationNodes)
  end
end
function MixerWagon:onHUDTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if g_currentMission.nodeToObject[otherActorId] ~= nil then
    local v8 = g_currentMission.nodeToObject[otherActorId]:isa(Vehicle)
    if v8 then
      v8 = SpecializationUtil.hasSpecialization(Enterable, g_currentMission.nodeToObject[otherActorId].specializations)
      if not v8 then
        return
      end
    end
  end
  if g_currentMission.player ~= nil and otherActorId == g_currentMission.player.rootNode then
  end
  if fillPositionData ~= nil and fillPositionData ~= self then
    if onEnter then
      local v9 = v9:canPlayerAccess(self)
      if not v9 then
        return
      end
      v8.vehicleToNodeCount[fillPositionData] = (v8.vehicleToNodeCount[fillPositionData] or 0) + 1
    elseif onLeave then
      self.spec_mixerWagon.vehicleToNodeCount[fillPositionData] = (self.spec_mixerWagon.vehicleToNodeCount[fillPositionData] or 0) - 1
    end
    if g_currentMission.hud.inputHelp ~= nil then
      if v8.vehicleToNodeCount[fillPositionData] == 1 then
        g_currentMission.hud.inputHelp:addExtraExtensionVehicleNodeId(self.rootNode)
        return
      end
      if v8.vehicleToNodeCount[fillPositionData] <= 0 then
        v9:removeExtraExtensionVehicleNodeId(self.rootNode)
        v8.vehicleToNodeCount[fillPositionData] = nil
      end
    end
  end
end
function MixerWagon:getIsPlayerInTrigger()
  if g_currentMission.controlPlayer and g_currentMission.player ~= nil then
    if self.spec_mixerWagon.vehicleToNodeCount[g_currentMission.player.rootNode] == nil then
    end
    return true
  end
  if g_currentMission.controlledVehicle ~= nil then
    if triggerId.vehicleToNodeCount[g_currentMission.controlledVehicle] == nil then
    end
    return true
  end
  return false
end
function MixerWagon:updateDebugValues(values)
  local v8 = self:getFillUnitFillType(self.spec_mixerWagon.fillUnitIndex)
  if v8 ~= FillType.FORAGE then
  end
  local otherShapeId = otherShapeId(true)
  onStay.value = otherShapeId
  table.insert(values, onStay)
  for otherShapeId, fillPositionData in ipairs(otherActorId.mixerWagonFillTypes) do
    for v12, v13 in pairs(fillPositionData.fillTypes) do
      local v17 = v17:getFillTypeNameByIndex(v12)
      local v16 = tostring(...)
    end
    table.insert(values, {name = v8, value = fillPositionData.fillLevel})
  end
end
