-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/SetDischargeStateEvent.lua")
Dischargeable = {DISCHARGE_STATE_OFF = 0, DISCHARGE_STATE_OBJECT = 1, DISCHARGE_STATE_GROUND = 2, SEND_NUM_BITS_DISCHARGE_STATE = 2, DISCHARGE_REASON_NO_FREE_CAPACITY = 1, DISCHARGE_REASON_FILLTYPE_NOT_SUPPORTED = 2, DISCHARGE_REASON_TOOLTYPE_NOT_SUPPORTED = 3, DISCHARGE_REASON_NO_ACCESS = 4, DISCHARGE_WARNINGS = {}}
Dischargeable.DISCHARGE_WARNINGS[Dischargeable.DISCHARGE_REASON_FILLTYPE_NOT_SUPPORTED] = "warning_notAcceptedHere"
Dischargeable.DISCHARGE_WARNINGS[Dischargeable.DISCHARGE_REASON_TOOLTYPE_NOT_SUPPORTED] = "warning_notAcceptedTool"
Dischargeable.DISCHARGE_WARNINGS[Dischargeable.DISCHARGE_REASON_NO_FREE_CAPACITY] = "warning_noMoreFreeCapacity"
Dischargeable.DISCHARGE_WARNINGS[Dischargeable.DISCHARGE_REASON_NO_ACCESS] = "warning_youDontHaveAccessToThis"
Dischargeable.DISCHARGE_NODE_XML_PATH = "vehicle.dischargeable.dischargeNode(?)"
Dischargeable.DISCHARGE_NODE_CONFIG_XML_PATH = "vehicle.dischargeable.dischargeableConfigurations.dischargeableConfiguration(?).dischargeNode(?)"
function Dischargeable.prerequisitesPresent(specializations)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, specializations)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(FillVolume, specializations)
  end
  return v1
end
function Dischargeable.initSpecialization()
  local v3 = v3:getText("configuration_dischargeable")
  v0:addConfigurationType("dischargeable", v3, "dischargeable", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("Dischargeable")
  Dischargeable.registerXMLPaths(Vehicle.xmlSchema, "vehicle.dischargeable")
  Dischargeable.registerXMLPaths(Vehicle.xmlSchema, "vehicle.dischargeable.dischargeableConfigurations.dischargeableConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.dischargeable.dischargeableConfigurations.dischargeableConfiguration(?)")
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.dischargeable.dashboards", "activeDischargeNode | dischargeState")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.dischargeable.dashboards.dashboard(?)#dischargeNodeIndex", "Index of discharge node")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Dischargeable:registerXMLPaths(v1)
  self:register(XMLValueType.BOOL, v1 .. "#requiresTipOcclusionArea", "Requires tip occlusion area", true)
  self:register(XMLValueType.BOOL, v1 .. "#stopDischargeOnDeactivate", "Stop discharge if the vehicle is deactivated", true)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dischargeNode(?)#node", "Discharge node")
  self:register(XMLValueType.INT, v1 .. ".dischargeNode(?)#fillUnitIndex", "Fill unit index")
  self:register(XMLValueType.INT, v1 .. ".dischargeNode(?)#unloadInfoIndex", "Unload info index", 1)
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?)#stopDischargeOnEmpty", "Stop discharge if fill unit empty", true)
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?)#canDischargeToGround", "Can discharge to ground", true)
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?)#canDischargeToObject", "Can discharge to object", true)
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?)#canStartDischargeAutomatically", "Can start discharge automatically", false)
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?)#canStartGroundDischargeAutomatically", "Can start discharge to ground automatically", false)
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?)#stopDischargeIfNotPossible", "Stop discharge if not possible", "default 'true' while having discharge trigger")
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?)#canDischargeToGroundAnywhere", "Can discharge to ground independent of land owned state", false)
  self:register(XMLValueType.FLOAT, v1 .. ".dischargeNode(?)#emptySpeed", "Empty speed in l/sec", "fill unit capacity")
  self:register(XMLValueType.TIME, v1 .. ".dischargeNode(?)#effectTurnOffThreshold", "After this time has passed and nothing has been harvested the effects are turned off", 0.25)
  self:register(XMLValueType.STRING, v1 .. ".dischargeNode(?)#toolType", "Tool type", "dischargable")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dischargeNode(?).info#node", "Discharge info node", "Discharge node")
  self:register(XMLValueType.FLOAT, v1 .. ".dischargeNode(?).info#width", "Discharge info width", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".dischargeNode(?).info#length", "Discharge info length", 1)
  self:register(XMLValueType.FLOAT, v1 .. ".dischargeNode(?).info#zOffset", "Discharge info Z axis offset", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".dischargeNode(?).info#yOffset", "Discharge info y axis offset", 2)
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?).info#limitToGround", "Discharge info is limited to ground", true)
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?).info#useRaycastHitPosition", "Discharge info uses raycast hit position", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dischargeNode(?).raycast#node", "Raycast node", "Discharge node")
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?).raycast#useWorldNegYDirection", "Use world negative Y Direction", false)
  self:register(XMLValueType.FLOAT, v1 .. ".dischargeNode(?).raycast#yOffset", "Y Offset", 0)
  self:register(XMLValueType.FLOAT, v1 .. ".dischargeNode(?).raycast#maxDistance", "Max. raycast distance", 10)
  self:register(XMLValueType.FLOAT, v1 .. ".dischargeNode(?)#maxDistance", "Max. raycast distance", 10)
  self:register(XMLValueType.STRING, v1 .. ".dischargeNode(?).fillType#converterName", "Converter to be used to convert the fill types")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dischargeNode(?).trigger#node", "Discharge trigger node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dischargeNode(?).activationTrigger#node", "Discharge activation trigger node")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1 .. ".dischargeNode(?).distanceObjectChanges")
  self:register(XMLValueType.FLOAT, v1 .. ".dischargeNode(?).distanceObjectChanges#threshold", "Defines at which raycast distance the object changes", 0.5)
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1 .. ".dischargeNode(?).stateObjectChanges")
  ObjectChangeUtil.registerObjectChangeXMLPaths(self, v1 .. ".dischargeNode(?).nodeActiveObjectChanges")
  EffectManager.registerEffectXMLPaths(self, v1 .. ".dischargeNode(?).effects")
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?)#playSound", "Play discharge sound", true)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dischargeNode(?)#soundNode", "Sound link node", "Discharge node")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".dischargeNode(?)", "dischargeSound")
  self:register(XMLValueType.BOOL, v1 .. ".dischargeNode(?).dischargeSound#overwriteSharedSound", "Overwrite shared discharge sound with sound defined in discharge node", false)
  SoundManager.registerSampleXMLPaths(self, v1 .. ".dischargeNode(?)", "dischargeStateSound(?)")
  AnimationManager.registerAnimationNodesXMLPaths(self, v1 .. ".dischargeNode(?).animationNodes")
end
function Dischargeable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "loadDischargeNode", Dischargeable.loadDischargeNode)
  SpecializationUtil.registerFunction(vehicleType, "setCurrentDischargeNodeIndex", Dischargeable.setCurrentDischargeNodeIndex)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentDischargeNode", Dischargeable.getCurrentDischargeNode)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentDischargeNodeIndex", Dischargeable.getCurrentDischargeNodeIndex)
  SpecializationUtil.registerFunction(vehicleType, "getDischargeTargetObject", Dischargeable.getDischargeTargetObject)
  SpecializationUtil.registerFunction(vehicleType, "getCurrentDischargeObject", Dischargeable.getCurrentDischargeObject)
  SpecializationUtil.registerFunction(vehicleType, "discharge", Dischargeable.discharge)
  SpecializationUtil.registerFunction(vehicleType, "dischargeToGround", Dischargeable.dischargeToGround)
  SpecializationUtil.registerFunction(vehicleType, "dischargeToObject", Dischargeable.dischargeToObject)
  SpecializationUtil.registerFunction(vehicleType, "setDischargeState", Dischargeable.setDischargeState)
  SpecializationUtil.registerFunction(vehicleType, "getDischargeState", Dischargeable.getDischargeState)
  SpecializationUtil.registerFunction(vehicleType, "getDischargeFillType", Dischargeable.getDischargeFillType)
  SpecializationUtil.registerFunction(vehicleType, "getCanDischargeToGround", Dischargeable.getCanDischargeToGround)
  SpecializationUtil.registerFunction(vehicleType, "getCanDischargeAtPosition", Dischargeable.getCanDischargeAtPosition)
  SpecializationUtil.registerFunction(vehicleType, "getCanDischargeToLand", Dischargeable.getCanDischargeToLand)
  SpecializationUtil.registerFunction(vehicleType, "getCanDischargeToObject", Dischargeable.getCanDischargeToObject)
  SpecializationUtil.registerFunction(vehicleType, "getDischargeNotAllowedWarning", Dischargeable.getDischargeNotAllowedWarning)
  SpecializationUtil.registerFunction(vehicleType, "getCanToggleDischargeToObject", Dischargeable.getCanToggleDischargeToObject)
  SpecializationUtil.registerFunction(vehicleType, "getCanToggleDischargeToGround", Dischargeable.getCanToggleDischargeToGround)
  SpecializationUtil.registerFunction(vehicleType, "getIsDischargeNodeActive", Dischargeable.getIsDischargeNodeActive)
  SpecializationUtil.registerFunction(vehicleType, "getDischargeNodeEmptyFactor", Dischargeable.getDischargeNodeEmptyFactor)
  SpecializationUtil.registerFunction(vehicleType, "getDischargeNodeAutomaticDischarge", Dischargeable.getDischargeNodeAutomaticDischarge)
  SpecializationUtil.registerFunction(vehicleType, "getDischargeNodeByNode", Dischargeable.getDischargeNodeByNode)
  SpecializationUtil.registerFunction(vehicleType, "updateRaycast", Dischargeable.updateRaycast)
  SpecializationUtil.registerFunction(vehicleType, "updateDischargeInfo", Dischargeable.updateDischargeInfo)
  SpecializationUtil.registerFunction(vehicleType, "raycastCallbackDischargeNode", Dischargeable.raycastCallbackDischargeNode)
  SpecializationUtil.registerFunction(vehicleType, "finishDischargeRaycast", Dischargeable.finishDischargeRaycast)
  SpecializationUtil.registerFunction(vehicleType, "getDischargeNodeByIndex", Dischargeable.getDischargeNodeByIndex)
  SpecializationUtil.registerFunction(vehicleType, "handleDischargeOnEmpty", Dischargeable.handleDischargeOnEmpty)
  SpecializationUtil.registerFunction(vehicleType, "handleDischargeNodeChanged", Dischargeable.handleDischargeNodeChanged)
  SpecializationUtil.registerFunction(vehicleType, "handleDischarge", Dischargeable.handleDischarge)
  SpecializationUtil.registerFunction(vehicleType, "handleDischargeRaycast", Dischargeable.handleDischargeRaycast)
  SpecializationUtil.registerFunction(vehicleType, "handleFoundDischargeObject", Dischargeable.handleFoundDischargeObject)
  SpecializationUtil.registerFunction(vehicleType, "setDischargeEffectDistance", Dischargeable.setDischargeEffectDistance)
  SpecializationUtil.registerFunction(vehicleType, "setDischargeEffectActive", Dischargeable.setDischargeEffectActive)
  SpecializationUtil.registerFunction(vehicleType, "updateDischargeSound", Dischargeable.updateDischargeSound)
  SpecializationUtil.registerFunction(vehicleType, "dischargeTriggerCallback", Dischargeable.dischargeTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "onDeleteDischargeTriggerObject", Dischargeable.onDeleteDischargeTriggerObject)
  SpecializationUtil.registerFunction(vehicleType, "dischargeActivationTriggerCallback", Dischargeable.dischargeActivationTriggerCallback)
  SpecializationUtil.registerFunction(vehicleType, "onDeleteActivationTriggerObject", Dischargeable.onDeleteActivationTriggerObject)
  SpecializationUtil.registerFunction(vehicleType, "setForcedFillTypeIndex", Dischargeable.setForcedFillTypeIndex)
end
function Dischargeable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getRequiresTipOcclusionArea", Dischargeable.getRequiresTipOcclusionArea)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", Dischargeable.getCanBeSelected)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDoConsumePtoPower", Dischargeable.getDoConsumePtoPower)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsPowerTakeOffActive", Dischargeable.getIsPowerTakeOffActive)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAllowLoadTriggerActivation", Dischargeable.getAllowLoadTriggerActivation)
end
function Dischargeable.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onDischargeStateChanged")
  SpecializationUtil.registerEvent(vehicleType, "onDischargeTargetObjectChanged")
end
function Dischargeable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onReadUpdateStream", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteUpdateStream", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onDeactivate", Dischargeable)
  SpecializationUtil.registerEventListener(vehicleType, "onStateChange", Dischargeable)
end
function Dischargeable:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.pipeEffect", "vehicle.dischargeable.dischargeNode.effects")
  local coverConfigurationId = Utils.getNoNil(self.configurations.dischargeable, 1)
  local configKey = string.format("vehicle.dischargeable.dischargeableConfigurations.dischargeableConfiguration(%d)", coverConfigurationId - 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.dischargeable.dischargeableConfigurations.dischargeableConfiguration", coverConfigurationId, self.components, self)
  local v5 = v5:hasProperty(configKey)
  if not v5 then
  end
  v2.dischargeNodes = {}
  v2.fillUnitDischargeNodeMapping = {}
  v2.dischargNodeMapping = {}
  v2.triggerToDischargeNode = {}
  v2.activationTriggerToDischargeNode = {}
  v5 = v5:getValue(configKey .. "#requiresTipOcclusionArea", true)
  v2.requiresTipOcclusionArea = v5
  v5 = v5:getValue(configKey .. "#stopDischargeOnDeactivate", true)
  v2.stopDischargeOnDeactivate = v5
  v2.dischargedLiters = 0
  v5:iterate(configKey .. ".dischargeNode", function(self, savegame)
    local coverConfigurationId = coverConfigurationId:loadDischargeNode(u0.xmlFile, savegame, {})
    if coverConfigurationId then
      if u1.dischargNodeMapping[{}.node] ~= nil then
        local v7 = getName({}.node)
        Logging.xmlWarning(...)
      end
      if v2.trigger.node ~= nil and u1.triggerToDischargeNode[v2.trigger.node] ~= nil then
        v7 = getName(v2.trigger.node)
        Logging.xmlWarning(...)
      end
      if v2.activationTrigger.node ~= nil and u1.activationTriggerToDischargeNode[v2.activationTrigger.node] ~= nil then
        v7 = getName(v2.activationTrigger.node)
        Logging.xmlWarning(...)
      end
      if u0.getFillUnitExists ~= nil then
        local configKey = configKey:getFillUnitExists(v2.fillUnitIndex)
        if not configKey then
          Logging.xmlWarning(u0.xmlFile, "FillUnit with index '%d' does not exist for discharge node '%s'. Ignoring discharge node!", v2.fillUnitIndex, savegame)
        end
      end
      if coverConfigurationId then
        table.insert(u1.dischargeNodes, v2)
        v2.index = #u1.dischargeNodes
        u1.fillUnitDischargeNodeMapping[v2.fillUnitIndex] = v2
        u1.dischargNodeMapping[v2.node] = v2
        if v2.trigger.node ~= nil then
          u1.triggerToDischargeNode[v2.trigger.node] = v2
        end
        if v2.activationTrigger.node ~= nil then
          u1.activationTriggerToDischargeNode[v2.activationTrigger.node] = v2
        end
      end
    end
  end)
  if v2.requiresTipOcclusionArea and 0 >= #v2.dischargeNodes then
  end
  v2.requiresTipOcclusionArea = v5
  v2.currentDischargeState = Dischargeable.DISCHARGE_STATE_OFF
  v2.currentRaycast = nil
  v2.forcedFillTypeIndex = nil
  v2.raycastCollisionMask = CollisionFlag.FILLABLE + CollisionFlag.VEHICLE + CollisionFlag.TERRAIN
  v2.isAsyncRaycastActive = false
  v2.currentRaycast = {}
  self:setCurrentDischargeNodeIndex(1)
  v5 = self:getNextDirtyFlag()
  v2.dirtyFlag = v5
  if self.loadDashboardsFromXML ~= nil then
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.dischargeable.dashboards", {valueTypeToLoad = "activeDischargeNode", valueObject = self, valueFunc = "getCurrentDischargeNodeIndex", additionalAttributesFunc = Dischargeable.dashboardDischargeAttributes, stateFunc = Dischargeable.dashboardCurrentDischargeNodeState})
    self:loadDashboardsFromXML(self.xmlFile, "vehicle.dischargeable.dashboards", {valueTypeToLoad = "dischargeState", valueObject = v2, valueFunc = "currentDischargeState", additionalAttributesFunc = Dischargeable.dashboardDischargeAttributes, stateFunc = Dischargeable.dashboardDischargeActiveState})
  end
  if #v2.dischargeNodes == 0 then
    SpecializationUtil.removeEventListener(self, "onReadStream", Dischargeable)
    SpecializationUtil.removeEventListener(self, "onWriteStream", Dischargeable)
    SpecializationUtil.removeEventListener(self, "onReadUpdateStream", Dischargeable)
    SpecializationUtil.removeEventListener(self, "onWriteUpdateStream", Dischargeable)
    SpecializationUtil.removeEventListener(self, "onUpdate", Dischargeable)
    SpecializationUtil.removeEventListener(self, "onUpdateTick", Dischargeable)
    SpecializationUtil.removeEventListener(self, "onRegisterActionEvents", Dischargeable)
    SpecializationUtil.removeEventListener(self, "onFillUnitFillLevelChanged", Dischargeable)
    SpecializationUtil.removeEventListener(self, "onDeactivate", Dischargeable)
  end
end
function Dischargeable:onDelete()
  if self.spec_dischargeable.dischargeNodes ~= nil then
    for v5, v6 in ipairs(self.spec_dischargeable.dischargeNodes) do
      v7:deleteEffects(v6.effects)
      v7:deleteSample(v6.sample)
      v7:deleteSample(v6.dischargeSample)
      v7:deleteSamples(v6.dischargeStateSamples)
      v7:deleteAnimations(v6.animationNodes)
      if v6.trigger.node ~= nil then
        removeTrigger(v6.trigger.node)
      end
      if not (v6.activationTrigger.node ~= nil) then
        continue
      end
      removeTrigger(v6.activationTrigger.node)
    end
  end
  v1.dischargeNodes = nil
end
function Dischargeable:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    for v7, v8 in ipairs(self.spec_dischargeable.dischargeNodes) do
      local v9 = streamReadBool(streamId)
      if v9 then
        local v11 = streamReadUIntN(streamId, 8)
        v8.dischargeDistance = v11 * v8.maxDistance / 255
        local fillTypeIndex = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
        self:setDischargeEffectActive(v8, true, false, fillTypeIndex)
        self:setDischargeEffectDistance(v8, v11 * v8.maxDistance / 255)
      else
        self:setDischargeEffectActive(v8, false)
      end
    end
    v6 = streamReadUIntN(streamId, Dischargeable.SEND_NUM_BITS_DISCHARGE_STATE)
    self:setDischargeState(v6, true)
  end
end
function Dischargeable:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    for v7, v8 in ipairs(self.spec_dischargeable.dischargeNodes) do
      local v9 = streamWriteBool(streamId, v8.isEffectActiveSent)
      if not v9 then
        continue
      end
      local v12 = math.floor(v8.dischargeDistanceSent / v8.maxDistance * 255)
      local v11 = MathUtil.clamp(v12, 1, 255)
      streamWriteUIntN(streamId, v11, 8)
      v11 = self:getDischargeFillType(v8)
      streamWriteUIntN(streamId, v11, FillTypeManager.SEND_NUM_BITS)
    end
    streamWriteUIntN(streamId, v3.currentDischargeState, Dischargeable.SEND_NUM_BITS_DISCHARGE_STATE)
  end
end
function Dischargeable:onReadUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    local v5 = streamReadBool(streamId)
    if v5 then
      for v8, v9 in ipairs(self.spec_dischargeable.dischargeNodes) do
        local v10 = streamReadBool(streamId)
        if v10 then
          local v12 = streamReadUIntN(streamId, 8)
          v9.dischargeDistance = v12 * v9.maxDistance / 255
          local fillTypeIndex = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
          self:setDischargeEffectActive(v9, true, false, fillTypeIndex)
          self:setDischargeEffectDistance(v9, v12 * v9.maxDistance / 255)
        else
          self:setDischargeEffectActive(v9, false)
        end
      end
    end
  end
end
function Dischargeable:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v8 = bitAND(dirtyMask, self.spec_dischargeable.dirtyFlag)
    if v8 == 0 then
    end
    local v5 = v5(v6, true)
    if v5 then
      for v8, v9 in ipairs(v4.dischargeNodes) do
        local v10 = streamWriteBool(streamId, v9.isEffectActiveSent)
        if not v10 then
          continue
        end
        local v13 = math.floor(v9.dischargeDistanceSent / v9.maxDistance * 255)
        local v12 = MathUtil.clamp(v13, 1, 255)
        streamWriteUIntN(streamId, v12, 8)
        v12 = self:getDischargeFillType(v9)
        streamWriteUIntN(streamId, v12, FillTypeManager.SEND_NUM_BITS)
      end
    end
  end
end
function Dischargeable:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_dischargeable.currentDischargeNode ~= nil then
    if 0 >= self.spec_dischargeable.currentDischargeNode.activationTrigger.numObjects then
      -- if v0.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_OFF then goto L24 end
    end
    self:raiseActive()
  end
end
function Dischargeable:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_dischargeable.currentDischargeNode ~= nil then
    if self.isClient then
      Dischargeable.updateActionEvents(self)
    end
    local v7 = self:getIsDischargeNodeActive(v6)
    if v7 then
      if 0 < v6.trigger.numObjects then
        v6.dischargeObject = nil
        v6.dischargeHitObject = nil
        v6.dischargeHitObjectUnitIndex = nil
        v6.dischargeHitTerrain = false
        v6.dischargeShape = nil
        v6.dischargeDistance = 0
        v6.dischargeFillUnitIndex = nil
        v6.dischargeHit = false
        for v13, v14 in pairs(v6.trigger.objects) do
          if v5.forcedFillTypeIndex == nil then
            local v16 = self:getDischargeFillType(v6)
          end
          local v19 = v13:getFillUnitSupportsFillType(v14.fillUnitIndex, v15)
          if v19 then
            v19 = v13:getFillUnitAllowsFillType(v14.fillUnitIndex, v15)
            local v20 = v13:getFillUnitSupportsToolType(v14.fillUnitIndex, ToolType.TRIGGER)
            local v26 = self:getActiveFarm()
            local v22 = v13:getFillUnitFreeCapacity(...)
            if 0 >= v22 then
            end
            local v24 = self:getActiveFarm()
            v22 = v13:getIsFillAllowedFromFarm(...)
            if v19 then
              -- if not v20 then goto L166 end
              -- if not true then goto L166 end
              local v23 = v13:getFillUnitExactFillRootNode(v14.fillUnitIndex)
              -- cmp-jump LOP_JUMPXEQKNIL R23 aux=0x0 -> L189
              v24 = entityExists(v23)
              -- if not v24 then goto L189 end
              v24 = calcDistanceFrom(v6.node, v23)
              -- if v24 >= v9 then goto L189 end
              v6.dischargeObject = v13
              v6.dischargeHitTerrain = false
              v6.dischargeShape = v14.shape
              v6.dischargeDistance = v24
              v6.dischargeFillUnitIndex = v14.fillUnitIndex
              -- if v13 == v8 then goto L189 end
              SpecializationUtil.raiseEvent(self, "onDischargeTargetObjectChanged", v13)
              v25:raiseActive()
            elseif not v19 then
            else
              if not v20 then
              elseif not v22 then
              else
                if not true then
                end
              end
            end
            v6.dischargeHitObject = v13
            v6.dischargeHitObjectUnitIndex = v14.fillUnitIndex
          elseif v15 ~= FillType.UNKNOWN then
          end
          if v16 ~= Dischargeable.DISCHARGE_REASON_FILLTYPE_NOT_SUPPORTED and v16 ~= Dischargeable.DISCHARGE_REASON_NO_FREE_CAPACITY then
            -- if v16 ~= Dischargeable.DISCHARGE_REASON_NO_ACCESS then goto L233 end
          end
          if v13.isa ~= nil then
            v19 = v13:isa(Vehicle)
            -- if v19 then goto L233 end
          end
          if v16 ~= nil and v16 ~= Dischargeable.DISCHARGE_REASON_FILLTYPE_NOT_SUPPORTED and v13.getCustomDischargeNotAllowedWarning ~= nil then
            v19 = v13:getCustomDischargeNotAllowedWarning()
          end
          if v6.dischargeObject == nil then
            -- cmp-jump LOP_JUMPXEQKNIL R16 aux=0x0 -> L270
            if v6.dischargeFailedReason ~= nil then
              -- if v16 >= v6.dischargeFailedReason then goto L279 end
            end
            v6.dischargeFailedReason = v16
            v6.dischargeFailedReasonShowAuto = v17
            v6.customNotAllowedWarning = v18
          else
            v6.dischargeFailedReason = nil
            v6.dischargeFailedReasonShowAuto = false
            v6.customNotAllowedWarning = nil
          end
          v6.dischargeHit = true
        end
        -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L365
        -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x80000000 -> L365
        SpecializationUtil.raiseEvent(self, "onDischargeTargetObjectChanged", nil)
        v10:raiseActive()
        -- goto L365  (LOP_JUMP +63)
      end
      -- if v5.isAsyncRaycastActive then goto L365 end
      self:updateRaycast(v6)
    else
      if v5.currentDischargeState ~= Dischargeable.DISCHARGE_STATE_OFF then
        self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF, true)
      end
      if v6.dischargeObject ~= nil then
        SpecializationUtil.raiseEvent(self, "onDischargeTargetObjectChanged", nil)
        v7:raiseActive()
      end
      v6.dischargeObject = nil
      v6.dischargeHitObject = nil
      v6.dischargeHitObjectUnitIndex = nil
      v6.dischargeHitTerrain = false
      v6.dischargeShape = nil
      v6.dischargeDistance = 0
      v6.dischargeFillUnitIndex = nil
      v6.dischargeHit = false
    end
    self:updateDischargeSound(v6, dt)
    if self.isServer then
      if v5.currentDischargeState == Dischargeable.DISCHARGE_STATE_OFF then
        -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L503
        self:handleFoundDischargeObject(v6)
      else
        v7 = self:getFillUnitFillLevel(v6.fillUnitIndex)
        local v8 = self:getDischargeNodeEmptyFactor(v6)
        local v9 = self:getCanDischargeToObject(v6)
        if v9 and v5.currentDischargeState ~= Dischargeable.DISCHARGE_STATE_OBJECT then
        end
        v10 = self:getCanDischargeToGround(v6)
        if v10 and v5.currentDischargeState ~= Dischargeable.DISCHARGE_STATE_GROUND then
        end
        if v6.dischargeObject == nil then
          v12 = self:getCanDischargeToLand(v6)
          if v12 then
            v12 = self:getCanDischargeAtPosition(v6)
          end
        end
        if 0 < v7 and 0 < v8 and v12 then
        end
        self:setDischargeEffectActive(v6, v13)
        self:setDischargeEffectDistance(v6, v6.dischargeDistance)
        if v6.lastEffect ~= nil then
          v14 = v14:getIsFullyVisible()
        end
        if v14 and v12 and v11 then
          local v15 = math.min(v7, v6.emptySpeed * v8 * dt)
          local v16, v17, v18 = self:discharge(v6, v15)
          v5.dischargedLiters = v16
          self:handleDischarge(v6, v16, v17, v18)
        end
      end
      if v6.isEffectActive == v6.isEffectActiveSent then
        v7 = math.abs(v6.dischargeDistanceSent - v6.dischargeDistance)
        -- if 0.05 >= v7 then goto L534 end
      end
      self:raiseDirtyFlags(v5.dirtyFlag)
      v6.dischargeDistanceSent = v6.dischargeDistance
      v6.isEffectActiveSent = v6.isEffectActive
    end
  end
  if v5.currentDischargeState == Dischargeable.DISCHARGE_STATE_OFF then
    v8 = self:getIsActiveForInput()
    if v8 then
      v8 = self:getCanDischargeToObject(v5.currentDischargeNode)
      if v8 then
        v8 = self:getCanToggleDischargeToObject()
        if v8 then
          v10 = self:getFillUnitFillType(v6.fillUnitIndex)
          v8:showTipContext(...)
        end
      end
    end
  end
  if isActiveForInputIgnoreSelection and v6 ~= nil and v6.canStartDischargeAutomatically and v6.dischargeHit and v6.dischargeFailedReasonShowAuto and v6.dischargeFailedReason ~= nil and 10000 < g_currentMission.time then
    v7 = self:getDischargeNotAllowedWarning(v6)
    v8:showBlinkingWarning(v7, 5000)
  end
  for v10, v11 in ipairs(v5.dischargeNodes) do
    if not (v11.stopEffectTime ~= nil) then
      continue
    end
    if v11.stopEffectTime < g_time then
      self:setDischargeEffectActive(v11, false, true)
      v11.stopEffectTime = nil
    else
      self:raiseActive()
    end
  end
end
function Dischargeable:loadDischargeNode(xmlFile, key, entry)
  local isSelected = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  entry.node = isSelected
  if entry.node == nil then
    Logging.xmlWarning(self.xmlFile, "Missing discharge 'node' for dischargeNode '%s'", key)
    return false
  end
  isSelected = xmlFile:getValue(key .. "#fillUnitIndex")
  entry.fillUnitIndex = isSelected
  if entry.fillUnitIndex == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'fillUnitIndex' for dischargeNode '%s'", key)
    return false
  end
  isSelected = xmlFile:getValue(key .. "#unloadInfoIndex", 1)
  entry.unloadInfoIndex = isSelected
  isSelected = xmlFile:getValue(key .. "#stopDischargeOnEmpty", true)
  entry.stopDischargeOnEmpty = isSelected
  isSelected = xmlFile:getValue(key .. "#canDischargeToGround", true)
  entry.canDischargeToGround = isSelected
  isSelected = xmlFile:getValue(key .. "#canDischargeToObject", true)
  entry.canDischargeToObject = isSelected
  isSelected = xmlFile:getValue(key .. "#canStartDischargeAutomatically", Platform.gameplay.automaticDischarge)
  entry.canStartDischargeAutomatically = isSelected
  isSelected = xmlFile:getValue(key .. "#canStartGroundDischargeAutomatically", false)
  entry.canStartGroundDischargeAutomatically = isSelected
  local v7 = xmlFile:hasProperty(key .. ".trigger#node")
  isSelected = xmlFile:getValue(...)
  entry.stopDischargeIfNotPossible = isSelected
  isSelected = xmlFile:getValue(key .. "#canDischargeToGroundAnywhere", false)
  entry.canDischargeToGroundAnywhere = isSelected
  local v9 = self:getFillUnitCapacity(entry.fillUnitIndex)
  local v6 = xmlFile:getValue(...)
  entry.emptySpeed = v6 / 1000 * Platform.gameplay.dischargeSpeedFactor
  isSelected = xmlFile:getValue(key .. "#effectTurnOffThreshold", 0.25)
  entry.effectTurnOffThreshold = isSelected
  entry.lineOffset = 0
  entry.litersToDrop = 0
  isSelected = xmlFile:getValue(key .. "#toolType", "dischargeable")
  local v5 = v5:getToolTypeIndexByName(isSelected)
  entry.toolType = v5
  entry.info = {}
  v6 = xmlFile:getValue(key .. ".info#node", entry.node, self.components, self.i3dMappings)
  entry.info.node = v6
  if entry.info.node == entry.node then
    v6 = createTransformGroup("dischargeInfoNode")
    entry.info.node = v6
    link(entry.node, entry.info.node)
  end
  v7 = xmlFile:getValue(key .. ".info#width", 1)
  entry.info.width = v7 / 2
  v7 = xmlFile:getValue(key .. ".info#length", 1)
  entry.info.length = v7 / 2
  v6 = xmlFile:getValue(key .. ".info#zOffset", 0)
  entry.info.zOffset = v6
  v6 = xmlFile:getValue(key .. ".info#yOffset", 2)
  entry.info.yOffset = v6
  v6 = xmlFile:getValue(key .. ".info#limitToGround", true)
  entry.info.limitToGround = v6
  v6 = xmlFile:getValue(key .. ".info#useRaycastHitPosition", false)
  entry.info.useRaycastHitPosition = v6
  entry.raycast = {}
  v6 = xmlFile:getValue(key .. ".raycast#node", entry.node, self.components, self.i3dMappings)
  entry.raycast.node = v6
  v6 = xmlFile:getValue(key .. ".raycast#useWorldNegYDirection", false)
  entry.raycast.useWorldNegYDirection = v6
  v6 = xmlFile:getValue(key .. ".raycast#yOffset", 0)
  entry.raycast.yOffset = v6
  v5 = xmlFile:getValue(key .. ".raycast#maxDistance")
  v7 = xmlFile:getValue(key .. "#maxDistance", v5)
  entry.maxDistance = v7 or 10
  entry.dischargeObject = nil
  entry.dischargeHitObject = nil
  entry.dischargeHitObjectUnitIndex = nil
  entry.dischargeHitTerrain = false
  entry.dischargeShape = nil
  entry.dischargeDistance = 0
  entry.dischargeDistanceSent = 0
  entry.dischargeFillUnitIndex = nil
  entry.dischargeHit = false
  entry.trigger = {}
  v7 = xmlFile:getValue(key .. ".trigger#node", nil, self.components, self.i3dMappings)
  entry.trigger.node = v7
  if entry.trigger.node ~= nil then
    addTrigger(entry.trigger.node, "dischargeTriggerCallback", self)
  end
  entry.trigger.objects = {}
  entry.trigger.numObjects = 0
  entry.activationTrigger = {}
  v7 = xmlFile:getValue(key .. ".activationTrigger#node", nil, self.components, self.i3dMappings)
  entry.activationTrigger.node = v7
  if entry.activationTrigger.node ~= nil then
    addTrigger(entry.activationTrigger.node, "dischargeActivationTriggerCallback", self)
  end
  entry.activationTrigger.objects = {}
  entry.activationTrigger.numObjects = 0
  v6 = xmlFile:getValue(key .. ".fillType#converterName")
  if v6 ~= nil then
    v7 = v7:getConverterDataByName(v6)
    entry.fillTypeConverter = v7
  end
  entry.distanceObjectChanges = {}
  ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, key .. ".distanceObjectChanges", entry.distanceObjectChanges, self.components, self)
  if #entry.distanceObjectChanges == 0 then
    entry.distanceObjectChanges = nil
  else
    v7 = xmlFile:getValue(key .. ".distanceObjectChanges#threshold", 0.5)
    entry.distanceObjectChangeThreshold = v7
    ObjectChangeUtil.setObjectChanges(entry.distanceObjectChanges, false, self, self.setMovingToolDirty)
  end
  entry.stateObjectChanges = {}
  ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, key .. ".stateObjectChanges", entry.stateObjectChanges, self.components, self)
  if #entry.stateObjectChanges == 0 then
    entry.stateObjectChanges = nil
  else
    ObjectChangeUtil.setObjectChanges(entry.stateObjectChanges, false, self, self.setMovingToolDirty)
  end
  entry.nodeActiveObjectChanges = {}
  ObjectChangeUtil.loadObjectChangeFromXML(xmlFile, key .. ".nodeActiveObjectChanges", entry.nodeActiveObjectChanges, self.components, self)
  if #entry.nodeActiveObjectChanges == 0 then
    entry.nodeActiveObjectChanges = nil
  else
    ObjectChangeUtil.setObjectChanges(entry.nodeActiveObjectChanges, false, self, self.setMovingToolDirty)
  end
  v7 = v7:loadEffect(xmlFile, key .. ".effects", self.components, self, self.i3dMappings)
  entry.effects = v7
  if self.isClient then
    v7 = xmlFile:getValue(key .. "#playSound", true)
    entry.playSound = v7
    v7 = xmlFile:getValue(key .. "#soundNode", nil, self.components, self.i3dMappings)
    entry.soundNode = v7
    if entry.playSound then
      v7 = v7:loadSampleFromXML(self.xmlFile, key, "dischargeSound", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
      entry.dischargeSample = v7
    end
    v7 = xmlFile:getValue(key .. ".dischargeSound#overwriteSharedSound", false)
    if v7 then
      entry.playSound = false
    end
    v7 = v7:loadSamplesFromXML(self.xmlFile, key, "dischargeStateSound", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    entry.dischargeStateSamples = v7
    v7 = v7:loadAnimations(self.xmlFile, key .. ".animationNodes", self.components, self, self.i3dMappings)
    entry.animationNodes = v7
  end
  entry.sentHitDistance = 0
  entry.isEffectActive = false
  entry.isEffectActiveSent = false
  entry.lastEffect = entry.effects[#entry.effects]
  return true
end
function Dischargeable:setCurrentDischargeNodeIndex(dischargeNodeIndex)
  if self.spec_dischargeable.currentDischargeNode ~= nil then
    self:setDischargeEffectActive(self.spec_dischargeable.currentDischargeNode, false, true)
    self:updateDischargeSound(self.spec_dischargeable.currentDischargeNode, 99999)
    if self.spec_dischargeable.dischargeNodes[dischargeNodeIndex] ~= self.spec_dischargeable.currentDischargeNode then
      isActiveForInputIgnoreSelection:stopAnimations(self.spec_dischargeable.currentDischargeNode.animationNodes)
    end
    isActiveForInputIgnoreSelection:stopSamples(isActiveForInput.currentDischargeNode.dischargeStateSamples)
  end
  isActiveForInput.currentDischargeNode = isActiveForInput.dischargeNodes[dischargeNodeIndex]
  -- TODO: structure LOP_FORNPREP (pc 54, target 75)
  if isActiveForInput.dischargeNodes[1].nodeActiveObjectChanges ~= nil then
    if 1 ~= dischargeNodeIndex then
    end
    v7(v8, true, self, self.setMovingToolDirty)
  end
  -- TODO: structure LOP_FORNLOOP (pc 74, target 55)
  if self.setDashboardsDirty ~= nil then
    self:setDashboardsDirty()
  end
  self:handleDischargeNodeChanged()
end
function Dischargeable:getCurrentDischargeNode()
  return self.spec_dischargeable.currentDischargeNode
end
function Dischargeable:getCurrentDischargeNodeIndex()
  if self.spec_dischargeable.currentDischargeNode ~= nil then
    return self.spec_dischargeable.currentDischargeNode.index
  end
  return 0
end
function Dischargeable.getDischargeTargetObject(v0, dt)
  return dt.dischargeObject, dt.dischargeFillUnitIndex
end
function Dischargeable.getCurrentDischargeObject(v0, dt)
  return dt.currentDischargeObject
end
function Dischargeable:getRequiresTipOcclusionArea()
  return self.spec_dischargeable.requiresTipOcclusionArea
end
function Dischargeable.getCanBeSelected(v0, dt)
  return true
end
function Dischargeable:getDoConsumePtoPower(superFunc)
  local isActiveForInputIgnoreSelection = self:getDischargeState()
  if isActiveForInputIgnoreSelection == Dischargeable.DISCHARGE_STATE_OFF then
    local isActiveForInput = superFunc(self)
  end
  return isActiveForInput
end
function Dischargeable:getIsPowerTakeOffActive(superFunc)
  local isActiveForInputIgnoreSelection = self:getDischargeState()
  if isActiveForInputIgnoreSelection == Dischargeable.DISCHARGE_STATE_OFF then
    local isActiveForInput = superFunc(self)
  end
  return isActiveForInput
end
function Dischargeable:getAllowLoadTriggerActivation(superFunc, rootVehicle)
  local isActiveForInputIgnoreSelection = superFunc(self, rootVehicle)
  if isActiveForInputIgnoreSelection then
    return true
  end
  if self.spec_dischargeable.currentDischargeNode ~= nil and self.spec_dischargeable.currentDischargeNode.dischargeHitObject ~= nil and self.spec_dischargeable.currentDischargeNode.dischargeHitObject.getAllowLoadTriggerActivation ~= nil then
    if self.spec_dischargeable.currentDischargeNode.dischargeHitObject == rootVehicle then
      return false
    end
    return isSelected:getAllowLoadTriggerActivation(rootVehicle)
  end
  return false
end
function Dischargeable:discharge(dischargeNode, emptyLiters)
  local v7, v8 = self:getDischargeTargetObject(dischargeNode)
  dischargeNode.currentDischargeObject = nil
  if v7 ~= nil then
    -- if v0.spec_dischargeable.currentDischargeState ~= Dischargeable.DISCHARGE_STATE_OBJECT then goto L50 end
    local v9 = self:dischargeToObject(dischargeNode, emptyLiters, v7, v8)
    return v9, true, true
  end
  if dischargeNode.dischargeHitTerrain and isActiveForInputIgnoreSelection.currentDischargeState == Dischargeable.DISCHARGE_STATE_GROUND then
    local v9, v10, v11 = self:dischargeToGround(dischargeNode, emptyLiters)
  end
  return isSelected, v5, v6
end
function Dischargeable:dischargeToGround(dischargeNode, emptyLiters)
  if emptyLiters == 0 then
    return 0, false, false
  end
  local isActiveForInputIgnoreSelection, isSelected = self:getDischargeFillType(dischargeNode)
  local fillLevel = self:getFillUnitFillLevel(dischargeNode.fillUnitIndex)
  local v6 = v6:getMinValidLiterValue(isActiveForInputIgnoreSelection)
  local v9 = math.max(dischargeNode.emptySpeed * 250, v6)
  local v7 = math.min(...)
  dischargeNode.litersToDrop = v7
  if v6 >= dischargeNode.litersToDrop then
  end
  if v6 >= fillLevel then
  end
  local v11, v12, v13 = localToWorld(dischargeNode.info.node, -dischargeNode.info.width, 0, dischargeNode.info.zOffset)
  local v14, v15, v16 = localToWorld(dischargeNode.info.node, dischargeNode.info.width, 0, dischargeNode.info.zOffset)
  if dischargeNode.info.limitToGround then
    local v19 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v11, 0, v13)
    local v17 = math.max(v19 + 0.1, v12 + dischargeNode.info.yOffset)
    v19 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v14, 0, v16)
    v17 = math.max(v19 + 0.1, v15 + dischargeNode.info.yOffset)
  end
  local v17, v18 = DensityMapHeightUtil.tipToGroundAroundLine(self, dischargeNode.litersToDrop * isSelected, isActiveForInputIgnoreSelection, v11, v12, v13, v14, v15, v16, v9.length, nil, dischargeNode.lineOffset, true, nil, true)
  dischargeNode.lineOffset = v18
  dischargeNode.litersToDrop = dischargeNode.litersToDrop - v17 / isSelected
  if 0 < v17 / isSelected then
    v19 = self:getFillVolumeUnloadInfo(dischargeNode.unloadInfoIndex)
    local v22 = self:getOwnerFarmId()
    local v25 = self:getFillUnitFillType(dischargeNode.fillUnitIndex)
    local v20 = self:addFillUnitFillLevel(v22, dischargeNode.fillUnitIndex, -(v17 / isSelected), v25, ToolType.UNDEFINED, v19)
  end
  v19 = self:getFillUnitFillLevel(dischargeNode.fillUnitIndex)
  if 0 < v19 and v19 <= v6 then
    dischargeNode.litersToDrop = v6
  end
  return v10, v7, v8
end
function Dischargeable:dischargeToObject(dischargeNode, emptyLiters, object, targetFillUnitIndex)
  local v5, v6 = self:getDischargeFillType(dischargeNode)
  local v7 = object:getFillUnitSupportsFillType(targetFillUnitIndex, v5)
  if v7 then
    local v9 = object:getFillUnitAllowsFillType(targetFillUnitIndex, v5)
    if v9 then
      dischargeNode.currentDischargeObject = object
      local v12 = self:getActiveFarm()
      local v10 = object:addFillUnitFillLevel(v12, targetFillUnitIndex, emptyLiters * v6, v5, dischargeNode.toolType, dischargeNode.info)
      local unloadInfo = self:getFillVolumeUnloadInfo(dischargeNode.unloadInfoIndex)
      local v14 = self:getOwnerFarmId()
      local v17 = self:getFillUnitFillType(dischargeNode.fillUnitIndex)
      v12 = self:addFillUnitFillLevel(v14, dischargeNode.fillUnitIndex, -(v10 / v6), v17, ToolType.UNDEFINED, unloadInfo)
    end
  end
  return v8
end
function Dischargeable:setDischargeState(state, noEventSend)
  if state ~= self.spec_dischargeable.currentDischargeState then
    SetDischargeStateEvent.sendEvent(self, state, noEventSend)
    self.spec_dischargeable.currentDischargeState = state
    if state == Dischargeable.DISCHARGE_STATE_OFF then
      self:setDischargeEffectActive(self.spec_dischargeable.currentDischargeNode, false)
      self.spec_dischargeable.currentDischargeNode.isEffectActiveSent = false
      v5:stopAnimations(self.spec_dischargeable.currentDischargeNode.animationNodes)
    else
      v5:startAnimations(self.spec_dischargeable.currentDischargeNode.animationNodes)
    end
    -- TODO: structure LOP_FORNPREP (pc 50, target 78)
    if isActiveForInputIgnoreSelection.dischargeNodes[1].stateObjectChanges ~= nil then
      if state ~= Dischargeable.DISCHARGE_STATE_OFF and isActiveForInputIgnoreSelection.dischargeNodes[1] ~= isSelected then
      end
      v9(v10, v11, self, self.setMovingToolDirty)
    end
    -- TODO: structure LOP_FORNLOOP (pc 77, target 51)
    if self.setDashboardsDirty ~= nil then
      self:setDashboardsDirty()
    end
    SpecializationUtil.raiseEvent(self, "onDischargeStateChanged", state)
  end
end
function Dischargeable:getDischargeState()
  return self.spec_dischargeable.currentDischargeState
end
function Dischargeable:getDischargeFillType(dischargeNode)
  local fillType = self:getFillUnitFillType(dischargeNode.fillUnitIndex)
  if dischargeNode.fillTypeConverter ~= nil and dischargeNode.fillTypeConverter[fillType] ~= nil then
  end
  return fillType, isActiveForInputIgnoreSelection
end
function Dischargeable:getCanDischargeToGround(dischargeNode)
  if dischargeNode == nil then
    return false
  end
  if not dischargeNode.dischargeHitTerrain then
    return false
  end
  local isActiveForInput = self:getFillUnitFillLevel(dischargeNode.fillUnitIndex)
  if 0 < isActiveForInput then
    isActiveForInput = self:getDischargeFillType(dischargeNode)
    local isActiveForInputIgnoreSelection = DensityMapHeightUtil.getCanTipToGround(isActiveForInput)
    if not isActiveForInputIgnoreSelection then
      return false
    end
  end
  isActiveForInput = self:getCanDischargeToLand(dischargeNode)
  if not isActiveForInput then
    return false
  end
  isActiveForInput = self:getCanDischargeAtPosition(dischargeNode)
  if not isActiveForInput then
    return false
  end
  return true
end
function Dischargeable:getCanDischargeToLand(dischargeNode)
  if dischargeNode == nil then
    return false
  end
  if dischargeNode.canDischargeToGroundAnywhere then
    return true
  end
  local isActiveForInputIgnoreSelection, isSelected, v5 = localToWorld(dischargeNode.info.node, -dischargeNode.info.width, 0, dischargeNode.info.zOffset)
  local v6, v7, v8 = localToWorld(dischargeNode.info.node, dischargeNode.info.width, 0, dischargeNode.info.zOffset)
  local activeFarm = self:getActiveFarm()
  local v10 = v10:canFarmAccessLand(activeFarm, isActiveForInputIgnoreSelection, v5)
  if not v10 then
    return false
  end
  v10 = v10:canFarmAccessLand(activeFarm, v6, v8)
  if not v10 then
    return false
  end
  return true
end
function Dischargeable:getCanDischargeAtPosition(dischargeNode)
  if dischargeNode == nil then
    return false
  end
  local isActiveForInput = self:getFillUnitFillLevel(dischargeNode.fillUnitIndex)
  if 0 < isActiveForInput then
    local isActiveForInputIgnoreSelection, isSelected, v5 = localToWorld(dischargeNode.info.node, -dischargeNode.info.width, 0, dischargeNode.info.zOffset)
    local v6, v7, v8 = localToWorld(dischargeNode.info.node, dischargeNode.info.width, 0, dischargeNode.info.zOffset)
    if self.spec_dischargeable.currentDischargeState ~= Dischargeable.DISCHARGE_STATE_OFF then
      -- if v0.spec_dischargeable.currentDischargeState ~= Dischargeable.DISCHARGE_STATE_GROUND then goto L127 end
    end
    if isActiveForInput.limitToGround then
      local v12 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, isActiveForInputIgnoreSelection, 0, v5)
      local v10 = math.max(v12 + 0.1, isSelected + isActiveForInput.yOffset)
      v12 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v6, 0, v8)
      v10 = math.max(v12 + 0.1, v7 + isActiveForInput.yOffset)
    end
    v10 = self:getDischargeFillType(dischargeNode)
    local v11 = v11:getMinValidLiterValue(v10)
    v12 = DensityMapHeightUtil.getCanTipToGroundAroundLine(self, v11, v10, isActiveForInputIgnoreSelection, isSelected, v5, v6, v7, v8, isActiveForInput.length, nil, dischargeNode.lineOffset, true, nil, true)
    if not v12 then
      return false
    end
  end
  return true
end
function Dischargeable:getCanDischargeToObject(dischargeNode)
  if dischargeNode == nil then
    return false
  end
  if dischargeNode.dischargeObject == nil then
    return false
  end
  local fillType = self:getDischargeFillType(dischargeNode)
  local isSelected = isActiveForInput:getFillUnitSupportsFillType(dischargeNode.dischargeFillUnitIndex, fillType)
  if not isSelected then
    return false
  end
  isSelected = isActiveForInput:getFillUnitAllowsFillType(dischargeNode.dischargeFillUnitIndex, fillType)
  if not isSelected then
    return false
  end
  if isActiveForInput.getFillUnitFreeCapacity ~= nil then
    local v9 = self:getActiveFarm()
    local v5 = isActiveForInput:getFillUnitFreeCapacity(...)
    if v5 <= 0 then
      return false
    end
  end
  if isActiveForInput.getIsFillAllowedFromFarm ~= nil then
    local v7 = self:getActiveFarm()
    v5 = isActiveForInput:getIsFillAllowedFromFarm(...)
    if not v5 then
      return false
    end
  end
  if self.getMountObject ~= nil then
    v5 = self:getDynamicMountObject()
    if not v5 then
      v5 = self:getMountObject()
    end
    if v5 ~= nil then
      local v8 = v5:getActiveFarm()
      local v6 = v6:canFarmAccess(v8, self, true)
      if not v6 then
        return false
      end
    end
  end
  return true
end
function Dischargeable:getDischargeNotAllowedWarning(dischargeNode)
  local isActiveForInput = isActiveForInput:getText(Dischargeable.DISCHARGE_WARNINGS[dischargeNode.dischargeFailedReason or 1] or "warning_notAcceptedHere")
  if dischargeNode.customNotAllowedWarning ~= nil then
  end
  local fillType = self:getDischargeFillType(dischargeNode)
  local isSelected = isSelected:getFillTypeByIndex(fillType)
  return string.format(isActiveForInput, isSelected.title)
end
function Dischargeable:getCanToggleDischargeToObject()
  if self.spec_dischargeable.currentDischargeNode ~= nil then
  end
  return isActiveForInputIgnoreSelection
end
function Dischargeable:getCanToggleDischargeToGround()
  if self.spec_dischargeable.currentDischargeNode ~= nil and self.spec_dischargeable.currentDischargeNode.canDischargeToGround then
  end
  return isActiveForInputIgnoreSelection
end
function Dischargeable.getIsDischargeNodeActive(v0, dt)
  return true
end
function Dischargeable.getDischargeNodeEmptyFactor(v0, dt)
  return 1
end
function Dischargeable.getDischargeNodeAutomaticDischarge(v0, dt)
  return dt.canStartDischargeAutomatically
end
function Dischargeable:getDischargeNodeByNode(node)
  return self.spec_dischargeable.dischargNodeMapping[node]
end
function Dischargeable:updateRaycast(dischargeNode)
  if dischargeNode.raycast.node == nil then
    return
  end
  dischargeNode.lastDischargeObject = dischargeNode.dischargeObject
  dischargeNode.dischargeObject = nil
  dischargeNode.dischargeHitObject = nil
  dischargeNode.dischargeHitObjectUnitIndex = nil
  dischargeNode.dischargeHitTerrain = false
  dischargeNode.dischargeShape = nil
  dischargeNode.dischargeDistance = math.huge
  dischargeNode.dischargeFillUnitIndex = nil
  dischargeNode.dischargeHit = false
  local isSelected, v5, v6 = getWorldTranslation(isActiveForInputIgnoreSelection.node)
  if not isActiveForInputIgnoreSelection.useWorldNegYDirection then
    local v10, v11, v12 = localDirectionToWorld(isActiveForInputIgnoreSelection.node, 0, -1, 0)
  end
  isActiveForInput.currentRaycastDischargeNode = dischargeNode
  isActiveForInput.currentRaycast = isActiveForInputIgnoreSelection
  isActiveForInput.isAsyncRaycastActive = true
  raycastAll(isSelected, v5, v6, v7, v8, v9, "raycastCallbackDischargeNode", dischargeNode.maxDistance, self, isActiveForInput.raycastCollisionMask, false, false)
  self:raycastCallbackDischargeNode(nil)
end
function Dischargeable.updateDischargeInfo(v0, dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if dt.info.useRaycastHitPosition then
    setWorldTranslation(dt.info.node, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  end
end
function Dischargeable:raycastCallbackDischargeNode(hitActorId, x, y, z, distance, nx, ny, nz, subShapeIndex, hitShapeId)
  if hitActorId ~= nil then
    local v13 = v13:getNodeObject(hitActorId)
    if VehicleDebug.state == VehicleDebug.DEBUG then
      local v26 = getName(hitActorId)
      local v27 = getName(hitShapeId)
      local v28 = tostring(v13)
      local v24 = string.format(...)
      DebugUtil.drawDebugGizmoAtWorldPos(...)
    end
    if v13 ~= nil and v13 == self then
    end
    if v14 and distance < 0 and v13.getFillUnitIndexFromNode ~= nil and v14 then
      local v16 = v13:getFillUnitIndexFromNode(hitShapeId)
      if v16 == nil then
      end
    end
    if v14 then
      -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x0 -> L321
      local v15 = v13:getFillUnitIndexFromNode(hitShapeId)
      if v15 ~= nil then
        if v11.forcedFillTypeIndex == nil then
          local v17 = self:getDischargeFillType(v12)
        end
        local v20 = v13:getFillUnitSupportsFillType(v15, v16)
        if v20 then
          v20 = v13:getFillUnitAllowsFillType(v15, v16)
          local v21 = v13:getFillUnitSupportsToolType(v15, v12.toolType)
          v27 = self:getActiveFarm()
          local v23 = v13:getFillUnitFreeCapacity(...)
          if 0 >= v23 then
          end
          local v25 = self:getActiveFarm()
          v23 = v13:getIsFillAllowedFromFarm(...)
          if v20 and v21 and true then
            v12.dischargeObject = v13
            v12.dischargeShape = hitShapeId
            v12.dischargeDistance = distance
            v12.dischargeFillUnitIndex = v15
            -- cmp-jump LOP_JUMPXEQKNIL R24 aux=0x0 -> L190
            v24 = v13:getFillUnitExtraDistanceFromNode(hitShapeId)
            v12.dischargeExtraDistance = v24
            -- goto L190  (LOP_JUMP +32)
          end
          if not v20 then
            -- goto L190  (LOP_JUMP +26)
          end
          if not v21 then
            -- goto L190  (LOP_JUMP +20)
          end
          if not v23 then
            -- goto L190  (LOP_JUMP +14)
          end
          -- if v22 then goto L190 end
        elseif v16 ~= FillType.UNKNOWN then
        end
        if v17 ~= Dischargeable.DISCHARGE_REASON_FILLTYPE_NOT_SUPPORTED and v17 ~= Dischargeable.DISCHARGE_REASON_NO_FREE_CAPACITY then
          -- if v17 ~= Dischargeable.DISCHARGE_REASON_NO_ACCESS then goto L219 end
        end
        if v13.isa ~= nil then
          v20 = v13:isa(Vehicle)
          -- if v20 then goto L219 end
        end
        if v17 ~= nil and v17 ~= Dischargeable.DISCHARGE_REASON_FILLTYPE_NOT_SUPPORTED and v13.getCustomDischargeNotAllowedWarning ~= nil then
          v20 = v13:getCustomDischargeNotAllowedWarning()
        end
        if v12.dischargeObject == nil then
          -- cmp-jump LOP_JUMPXEQKNIL R17 aux=0x0 -> L256
          if v12.dischargeFailedReason ~= nil then
            -- if v17 >= v12.dischargeFailedReason then goto L265 end
          end
          v12.dischargeFailedReason = v17
          v12.dischargeFailedReasonShowAuto = v18
          v12.customNotAllowedWarning = v19
        else
          v12.dischargeFailedReason = nil
          v12.dischargeFailedReasonShowAuto = false
          v12.customNotAllowedWarning = nil
        end
        v12.dischargeHit = true
        v12.dischargeHitObject = v13
        v12.dischargeHitObjectUnitIndex = v15
        -- goto L321  (LOP_JUMP +48)
      end
      -- if not v12.dischargeHit then goto L321 end
      v12.dischargeDistance = distance + (v12.dischargeExtraDistance or 0)
      v12.dischargeExtraDistance = nil
      self:updateDischargeInfo(v12, x, y, z)
      return false
    elseif hitActorId == g_currentMission.terrainRootNode then
      v15 = math.min(v12.dischargeDistance, distance)
      v12.dischargeDistance = v15
      v12.dischargeHitTerrain = true
      self:updateDischargeInfo(v12, x, y, z)
      return false
    end
    return true
  end
  self:finishDischargeRaycast()
end
function Dischargeable:finishDischargeRaycast()
  self:handleDischargeRaycast(self.spec_dischargeable.currentRaycastDischargeNode, self.spec_dischargeable.currentRaycastDischargeNode.dischargeObject, self.spec_dischargeable.currentRaycastDischargeNode.dischargeShape, self.spec_dischargeable.currentRaycastDischargeNode.dischargeDistance, self.spec_dischargeable.currentRaycastDischargeNode.dischargeFillUnitIndex, self.spec_dischargeable.currentRaycastDischargeNode.dischargeHitTerrain)
  self.spec_dischargeable.isAsyncRaycastActive = false
  if self.spec_dischargeable.currentRaycastDischargeNode.lastDischargeObject ~= self.spec_dischargeable.currentRaycastDischargeNode.dischargeObject then
    SpecializationUtil.raiseEvent(self, "onDischargeTargetObjectChanged", self.spec_dischargeable.currentRaycastDischargeNode.dischargeObject)
    y:raiseActive()
  end
end
function Dischargeable:getDischargeNodeByIndex(index)
  return self.spec_dischargeable.dischargeNodes[index]
end
function Dischargeable:handleDischargeOnEmpty(dischargeNode)
  if self.spec_dischargeable.currentDischargeNode.stopDischargeOnEmpty then
    self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF, true)
  end
end
function Dischargeable.handleDischargeNodeChanged(v0)
end
function Dischargeable:handleDischarge(dischargeNode, dischargedLiters, minDropReached, hasMinDropFillLevel)
  if self.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_GROUND then
    -- if not v1.stopDischargeIfNotPossible then goto L38 end
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000005 -> L38
    -- if not v3 and v4 then goto L38 end
    self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF)
    return
  end
  if dischargeNode.stopDischargeIfNotPossible and dischargedLiters == 0 then
    self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF)
  end
end
function Dischargeable:handleDischargeRaycast(dischargeNode, object, shape, distance, illUnitIndex, hitTerrain)
  if object == nil and self.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_OBJECT then
    self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF)
  end
  if object == nil and dischargeNode.canStartGroundDischargeAutomatically then
    local nz = self:getCanDischargeToGround(dischargeNode)
    if nz then
      self:setDischargeState(Dischargeable.DISCHARGE_STATE_GROUND)
    end
  end
  if ny.currentDischargeNode.distanceObjectChanges ~= nil then
    if ny.currentDischargeNode.distanceObjectChangeThreshold >= distance and ny.currentDischargeState == Dischargeable.DISCHARGE_STATE_OFF then
    end
    subShapeIndex(hitShapeId, v11, self, self.setMovingToolDirty)
  end
end
function Dischargeable:handleFoundDischargeObject(dischargeNode)
  local x = self:getDischargeNodeAutomaticDischarge(dischargeNode)
  if x then
    self:setDischargeState(Dischargeable.DISCHARGE_STATE_OBJECT)
  end
end
function Dischargeable.setDischargeEffectDistance(v0, hitActorId, x)
  if hitActorId.isEffectActive and hitActorId.effects ~= nil and x ~= math.huge then
    for nx, ny in pairs(hitActorId.effects) do
      if not (ny.setDistance ~= nil) then
        continue
      end
      ny:setDistance(x, g_currentMission.terrainRootNode)
    end
  end
end
function Dischargeable:setDischargeEffectActive(dischargeNode, isActive, force, fillTypeIndex)
  if isActive then
    if not dischargeNode.isEffectActive then
      if fillTypeIndex == nil then
        local fillType = self:getDischargeFillType(dischargeNode)
      end
      fillType:setFillType(dischargeNode.effects, fillTypeIndex)
      fillType:startEffects(dischargeNode.effects)
      dischargeNode.isEffectActive = true
    end
    dischargeNode.stopEffectTime = nil
    return
  end
  if force ~= nil then
    -- if v3 then goto L51 end
  end
  if dischargeNode.stopEffectTime == nil then
    dischargeNode.stopEffectTime = g_time + dischargeNode.effectTurnOffThreshold
    self:raiseActive()
    return
    if dischargeNode.isEffectActive then
      fillType:stopEffects(dischargeNode.effects)
      dischargeNode.isEffectActive = false
    end
  end
end
function Dischargeable:updateDischargeSound(dischargeNode, dt)
  if self.isClient then
    local y = self:getDischargeFillType(dischargeNode)
    if self.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_OFF then
    end
    if dischargeNode.isEffectActive and y == FillType.UNKNOWN then
    end
    if dischargeNode.lastEffect ~= nil then
      local nx = nx:getIsVisible()
    end
    if dischargeNode.lastEffect ~= nil then
      local ny = ny:getIsVisible()
    end
    if z then
      -- if v5 then goto L51 end
    end
    if ny then
      -- if not v6 then goto L144 end
      if dischargeNode.playSound and y ~= FillType.UNKNOWN then
        local nz = nz:getSampleByFillType(y)
        if nz ~= nil then
          if nz ~= dischargeNode.sharedSample then
            if dischargeNode.sample ~= nil then
              subShapeIndex:deleteSample(dischargeNode.sample)
            end
            if not dischargeNode.node then
            end
            local subShapeIndex = subShapeIndex:cloneSample(v11, v12, self)
            dischargeNode.sample = subShapeIndex
            dischargeNode.sharedSample = nz
            subShapeIndex:playSample(dischargeNode.sample)
          else
            subShapeIndex = subShapeIndex:getIsSamplePlaying(dischargeNode.sample)
            if not subShapeIndex then
              subShapeIndex:playSample(dischargeNode.sample)
            end
          end
        end
      end
      if dischargeNode.dischargeSample ~= nil then
        nz = nz:getIsSamplePlaying(dischargeNode.dischargeSample)
        if not nz then
          nz:playSample(dischargeNode.dischargeSample)
        end
      end
      dischargeNode.turnOffSoundTimer = 250
    elseif dischargeNode.turnOffSoundTimer ~= nil and 0 < dischargeNode.turnOffSoundTimer then
      dischargeNode.turnOffSoundTimer = dischargeNode.turnOffSoundTimer - dt
      if dischargeNode.turnOffSoundTimer <= 0 then
        if dischargeNode.playSound then
          nz = nz:getIsSamplePlaying(dischargeNode.sample)
          if nz then
            nz:stopSample(dischargeNode.sample)
          end
        end
        if dischargeNode.dischargeSample ~= nil then
          nz = nz:getIsSamplePlaying(dischargeNode.dischargeSample)
          if nz then
            nz:stopSample(dischargeNode.dischargeSample)
          end
        end
        dischargeNode.turnOffSoundTimer = 0
      end
    end
    if dischargeNode.dischargeStateSamples ~= nil and 0 < #dischargeNode.dischargeStateSamples then
      -- TODO: structure LOP_FORNPREP (pc 218, target 251)
      if z then
        local v12 = v12:getIsSamplePlaying(dischargeNode.dischargeStateSamples[1])
        -- if v12 then goto L250 end
        v12:playSample(dischargeNode.dischargeStateSamples[1])
      else
        v12 = v12:getIsSamplePlaying(dischargeNode.dischargeStateSamples[1])
        if v12 then
          v12:stopSample(dischargeNode.dischargeStateSamples[1])
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 250, target 219)
    end
  end
end
function Dischargeable:dischargeTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if not onEnter then
    -- if not v4 then goto L106 end
  end
  local nz = nz:getNodeObject(otherActorId)
  if nz ~= nil and nz ~= self and nz.getFillUnitIndexFromNode ~= nil then
    local subShapeIndex = nz:getFillUnitIndexFromNode(otherShapeId)
    if ny.triggerToDischargeNode[triggerId] ~= nil and subShapeIndex ~= nil then
      if onEnter then
        if ny.triggerToDischargeNode[triggerId].trigger.objects[nz] == nil then
          ny.triggerToDischargeNode[triggerId].trigger.objects[nz] = {count = 0, fillUnitIndex = subShapeIndex, shape = otherShapeId}
          ny.triggerToDischargeNode[triggerId].trigger.numObjects = ny.triggerToDischargeNode[triggerId].trigger.numObjects + 1
          nz:addDeleteListener(self, "onDeleteDischargeTriggerObject")
        end
        v11.objects[nz].count = v11.objects[nz].count + 1
        self:raiseActive()
        return
      end
      if onLeave then
        v11.objects[nz].count = v11.objects[nz].count - 1
        if v11.objects[nz].count == 0 then
          v11.objects[nz] = nil
          v11.numObjects = v11.numObjects - 1
          nz:removeDeleteListener(self, "onDeleteDischargeTriggerObject")
        end
      end
    end
  end
end
function Dischargeable:onDeleteDischargeTriggerObject(object)
  for nx, ny in pairs(self.spec_dischargeable.triggerToDischargeNode) do
    if not (ny.trigger.objects[object] ~= nil) then
      continue
    end
    ny.trigger.objects[object] = nil
    ny.trigger.numObjects = ny.trigger.numObjects - 1
  end
end
function Dischargeable:dischargeActivationTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if not onEnter then
    -- if not v4 then goto L106 end
  end
  local nz = nz:getNodeObject(otherActorId)
  if nz ~= nil and nz ~= self and nz.getFillUnitIndexFromNode ~= nil then
    local subShapeIndex = nz:getFillUnitIndexFromNode(otherShapeId)
    if ny.activationTriggerToDischargeNode[triggerId] ~= nil and subShapeIndex ~= nil then
      if onEnter then
        if ny.activationTriggerToDischargeNode[triggerId].activationTrigger.objects[nz] == nil then
          ny.activationTriggerToDischargeNode[triggerId].activationTrigger.objects[nz] = {count = 0, fillUnitIndex = subShapeIndex, shape = otherShapeId}
          ny.activationTriggerToDischargeNode[triggerId].activationTrigger.numObjects = ny.activationTriggerToDischargeNode[triggerId].activationTrigger.numObjects + 1
          nz:addDeleteListener(self, "onDeleteActivationTriggerObject")
        end
        v11.objects[nz].count = v11.objects[nz].count + 1
        self:raiseActive()
        return
      end
      if onLeave then
        v11.objects[nz].count = v11.objects[nz].count - 1
        if v11.objects[nz].count == 0 then
          v11.objects[nz] = nil
          v11.numObjects = v11.numObjects - 1
          nz:removeDeleteListener(self, "onDeleteActivationTriggerObject")
        end
      end
    end
  end
end
function Dischargeable:onDeleteActivationTriggerObject(object)
  for nx, ny in pairs(self.spec_dischargeable.activationTriggerToDischargeNode) do
    if not (ny.activationTrigger.objects[object] ~= nil) then
      continue
    end
    ny.activationTrigger.objects[object] = nil
    ny.activationTrigger.numObjects = ny.activationTrigger.numObjects - 1
  end
end
function Dischargeable:setForcedFillTypeIndex(fillTypeIndex)
  self.spec_dischargeable.forcedFillTypeIndex = fillTypeIndex
end
function Dischargeable:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_dischargeable.actionEvents)
    if isActiveForInputIgnoreSelection then
      local z = self:getCanToggleDischargeToGround()
      if z then
        local z, distance = self:addPoweredActionEvent(self.spec_dischargeable.actionEvents, InputAction.TOGGLE_TIPSTATE_GROUND, self, Dischargeable.actionEventToggleDischargeToGround, false, true, false, true, nil)
        nx:setActionEventTextPriority(distance, GS_PRIO_NORMAL)
      end
      z = self:getCanToggleDischargeToObject()
      if z then
        z, distance = self:addPoweredActionEvent(y.actionEvents, InputAction.TOGGLE_TIPSTATE, self, Dischargeable.actionEventToggleDischarging, false, true, false, true, nil)
        nx:setActionEventTextPriority(distance, GS_PRIO_VERY_HIGH)
      end
      Dischargeable.updateActionEvents(self)
    end
  end
end
function Dischargeable:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillType, toolType, fillPositionData, appliedDelta)
  if self.spec_dischargeable.fillUnitDischargeNodeMapping[fillUnitIndex] ~= nil then
    local fillLevel = self:getFillUnitFillLevel(fillUnitIndex)
    if fillLevel == 0 then
      self:handleDischargeOnEmpty(self.spec_dischargeable.fillUnitDischargeNodeMapping[fillUnitIndex])
    end
  end
end
function Dischargeable:onDeactivate()
  if self.spec_dischargeable.stopDischargeOnDeactivate and self.spec_dischargeable.currentDischargeState ~= Dischargeable.DISCHARGE_STATE_OFF then
    self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF, true)
  end
end
function Dischargeable:onStateChange(state, data)
  if state == Vehicle.STATE_CHANGE_MOTOR_TURN_OFF then
    local y = self:getIsPowered()
    if not y and self.spec_dischargeable.stopDischargeOnDeactivate and self.spec_dischargeable.currentDischargeState ~= Dischargeable.DISCHARGE_STATE_OFF then
      self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF, true)
    end
  end
end
function Dischargeable:updateDebugValues(values)
  if self.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_OBJECT then
  elseif self.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_GROUND then
  end
  table.insert(values, {name = "state", value = z})
  local subShapeIndex = self:getCanDischargeToObject(y)
  local nz = tostring(...)
  table.insert(values, {name = "getCanDischargeToObject", value = nz})
  subShapeIndex = self:getCanDischargeToGround(y)
  nz = tostring(...)
  table.insert(values, {name = "getCanDischargeToGround", value = nz})
  nz = tostring(dt.dischargedLiters)
  table.insert(values, {name = "dischargedLiters", value = nz})
  nz = tostring(y)
  table.insert(values, {name = "currentNode", value = nz})
  for nz, subShapeIndex in ipairs(dt.dischargeNodes) do
    local v13 = tostring(subShapeIndex)
    table.insert(values, {name = "--->", value = v13})
    if subShapeIndex.dischargeObject ~= nil then
      local v11 = tostring(subShapeIndex.dischargeObject.configFileName)
    end
    local v14 = tostring(hitShapeId)
    table.insert(values, {name = "object", value = v14})
    table.insert(values, {name = "distance", value = subShapeIndex.dischargeDistance})
    v14 = tostring(subShapeIndex.isEffectActive)
    table.insert(values, {name = "effect", value = v14})
    local v15 = self:getFillUnitFillLevel(subShapeIndex.fillUnitIndex)
    v14 = tostring(...)
    table.insert(values, {name = "fillLevel", value = v14})
    v14 = tostring(subShapeIndex.litersToDrop)
    table.insert(values, {name = "litersToDrop", value = v14})
    v15 = self:getDischargeNodeEmptyFactor(subShapeIndex)
    v14 = tostring(...)
    table.insert(values, {name = "emptyFactor", value = v14})
    v15 = self:getDischargeNodeEmptyFactor(subShapeIndex)
    v14 = tostring(...)
    table.insert(values, {name = "emptySpeed", value = v14})
    if subShapeIndex.lastEffect ~= nil then
      v15 = v15:getIsFullyVisible()
    end
    v14 = v14(v15)
    v13.value = v14
    table.insert(values, v13)
    v14 = tostring(subShapeIndex.trigger.numObjects)
    table.insert(values, {name = "objectsInTrigger", value = v14})
    v14 = tostring(subShapeIndex.activationTrigger.numObjects)
    table.insert(values, {name = "objectsInActivationTrigger", value = v14})
  end
end
function Dischargeable:actionEventToggleDischargeToGround(actionName, inputValue, callbackState, isAnalog)
  local distance = self:getCanToggleDischargeToGround()
  if distance then
    if self.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_OFF then
      local ny = self:getCanDischargeToGround(self.spec_dischargeable.currentDischargeNode)
      if ny then
        self:setDischargeState(Dischargeable.DISCHARGE_STATE_GROUND)
        return
      end
      ny = self:getCanDischargeToLand(nx)
      if not ny then
        local subShapeIndex = subShapeIndex:getText("warning_youDontHaveAccessToThisLand")
        ny:showBlinkingWarning(subShapeIndex, 5000)
        return
      end
      ny = self:getCanDischargeAtPosition(nx)
      -- if v7 then goto L72 end
      subShapeIndex = subShapeIndex:getText("warning_actionNotAllowedHere")
      ny:showBlinkingWarning(subShapeIndex, 5000)
      return
    end
    self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF)
  end
end
function Dischargeable:actionEventToggleDischarging(actionName, inputValue, callbackState, isAnalog)
  local distance = self:getCanToggleDischargeToObject()
  if distance then
    if self.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_OFF then
      local ny = self:getCanDischargeToObject(self.spec_dischargeable.currentDischargeNode)
      if ny then
        self:setDischargeState(Dischargeable.DISCHARGE_STATE_OBJECT)
        return
      end
      -- if not v6.dischargeHit then goto L59 end
      ny = self:getDischargeFillType(nx)
      -- if v7 == FillType.UNKNOWN then goto L59 end
      ny = self:getDischargeNotAllowedWarning(nx)
      nz:showBlinkingWarning(ny, 5000)
      return
    end
    self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF)
  end
end
function Dischargeable:updateActionEvents()
  if self.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_OFF then
    local ny = self:getIsDischargeNodeActive(self.spec_dischargeable.currentDischargeNode)
    -- if not v7 then goto L122 end
    ny = self:getCanDischargeToObject(self.spec_dischargeable.currentDischargeNode)
    if ny then
      ny = self:getCanToggleDischargeToObject()
      if ny then
        -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L122
        local hitShapeId = hitShapeId:getText("action_startOverloading")
        ny:setActionEventText(...)
        -- goto L122  (LOP_JUMP +67)
      end
    end
    ny = self:getCanDischargeToGround(nx)
    -- if not v7 then goto L122 end
    ny = self:getCanToggleDischargeToGround()
    -- if not v7 then goto L122 end
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L122
    hitShapeId = hitShapeId:getText("action_startTipToGround")
    ny:setActionEventText(...)
  elseif self.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_GROUND then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L122
    local subShapeIndex = subShapeIndex:getText("action_stopTipToGround")
    nx:setActionEventText(...)
  else
    if self.spec_dischargeable.actionEvents[InputAction.TOGGLE_TIPSTATE] ~= nil then
      subShapeIndex = subShapeIndex:getText("action_stopOverloading")
      nx:setActionEventText(...)
    end
  end
  if dt ~= nil then
    nx:setActionEventTextVisibility(dt.actionEventId, z)
  end
  if y ~= nil then
    nx:setActionEventTextVisibility(y.actionEventId, distance)
  end
end
function Dischargeable.dashboardDischargeAttributes(v0, values, dt, y, z)
  local distance = values:getValue(dt .. "#dischargeNodeIndex")
  y.dischargeNodeIndex = distance
  return true
end
function Dischargeable.dashboardCurrentDischargeNodeState(v0, values, dt, y, z, distance)
  if values.dischargeNodeIndex ~= nil then
    if dt ~= values.dischargeNodeIndex then
    end
    Dashboard.defaultDashboardStateFunc(v0, values, true, y, z, distance)
  end
end
function Dischargeable:dashboardDischargeActiveState(dashboard, newValue, minValue, maxValue, isActive)
  if self.spec_dischargeable.currentDischargeState == Dischargeable.DISCHARGE_STATE_OFF then
  end
  nx(ny, nz, true, minValue, maxValue, isActive)
end
