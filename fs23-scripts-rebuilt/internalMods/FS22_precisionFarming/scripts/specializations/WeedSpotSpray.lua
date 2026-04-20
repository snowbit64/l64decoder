-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

WeedSpotSpray = {MOD_NAME = g_currentModName, SPEC_NAME = g_currentModName .. ".weedSpotSpray", NOZZLE_UPDATES_PER_FRAME = 10, EFFECT_DIRECTION_OFF = {0, 0}, EFFECT_DIRECTION_START = {1, 1}, EFFECT_DIRECTION_STOP = {1, -1}}
function WeedSpotSpray.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Sprayer, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(PrecisionFarmingStatistic, v0)
  end
  return v1
end
function WeedSpotSpray.initSpecialization()
  local v3 = v3:getText("configuration_weedSpotSpray")
  v0:addConfigurationType("weedSpotSpray", v3, "weedSpotSpray", nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("WeedSpotSpray")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.weedSpotSpray.weedSpotSprayConfigurations.weedSpotSprayConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.weedSpotSpray#effectFadeTime", "Time the effect needs to fade in an out", 0.25)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.weedSpotSpray.nozzles(?)#foldingConfigurationIndex", "Folding configuration index to use these nozzles", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.weedSpotSpray.nozzles(?).nozzle(?)#node", "Nozzle Node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.weedSpotSpray.nozzles(?).nozzle(?)#sectionIndex", "Index of corresponding section")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.weedSpotSpray.nozzles(?).nozzle(?)#zOffset", "Offset in Z direction for detection [m]", 0.5)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function WeedSpotSpray.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "getSpotSprayCoverage", WeedSpotSpray.getSpotSprayCoverage)
  SpecializationUtil.registerFunction(vehicleType, "getIsSpotSprayEnabled", WeedSpotSpray.getIsSpotSprayEnabled)
  SpecializationUtil.registerFunction(vehicleType, "updateNozzleEffects", WeedSpotSpray.updateNozzleEffects)
end
function WeedSpotSpray.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreEffectsVisible", WeedSpotSpray.getAreEffectsVisible)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getSprayerUsage", WeedSpotSpray.getSprayerUsage)
end
function WeedSpotSpray.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", WeedSpotSpray)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", WeedSpotSpray)
  SpecializationUtil.registerEventListener(vehicleType, "onTurnedOff", WeedSpotSpray)
  SpecializationUtil.registerEventListener(vehicleType, "onEndWorkAreaProcessing", WeedSpotSpray)
end
function WeedSpotSpray:onLoad(savegame)
  self.spec_weedSpotSpray = self["spec_" .. WeedSpotSpray.SPEC_NAME]
  local weedSpotSprayConfigurationId = Utils.getNoNil(self.configurations.weedSpotSpray, 1)
  ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.weedSpotSpray" .. ".weedSpotSprayConfigurations.weedSpotSprayConfiguration", weedSpotSprayConfigurationId, self.components, self)
  local v4 = v4:getValue("vehicle.weedSpotSpray" .. "#effectFadeTime", 0.25)
  self.spec_weedSpotSpray.effectFadeTime = v4
  self.spec_weedSpotSpray.nozzleNodes = {}
  self.spec_weedSpotSpray.nozzleNodesToDelete = {}
  v4:iterate("vehicle.weedSpotSpray" .. ".nozzles", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#foldingConfigurationIndex", 1)
    weedSpotSprayConfigurationId:iterate(savegame .. ".nozzle", function(self, savegame)
      local weedSpotSprayConfigurationId = weedSpotSprayConfigurationId:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      if {node = weedSpotSprayConfigurationId}.node ~= nil then
        if u1 ~= u0.configurations.folding then
          -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L208
          -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000008 -> L208
        end
        weedSpotSprayConfigurationId = weedSpotSprayConfigurationId:getValue(savegame .. "#sectionIndex")
        v2.sectionIndex = weedSpotSprayConfigurationId
        weedSpotSprayConfigurationId = weedSpotSprayConfigurationId:getValue(savegame .. "#zOffset", 0.5)
        v2.zOffset = weedSpotSprayConfigurationId
        v2.effect = {}
        if g_precisionFarming ~= nil then
          u2.extendedWeedControl = g_precisionFarming.extendedWeedControl
          weedSpotSprayConfigurationId = weedSpotSprayConfigurationId:getClonedSprayerEffectNode()
          if weedSpotSprayConfigurationId ~= nil then
            link(v2.node, weedSpotSprayConfigurationId)
            setTranslation(weedSpotSprayConfigurationId, 0, 0, 0)
            setRotation(weedSpotSprayConfigurationId, 0, 0, 0)
            local v4 = v4:getMaterial(FillType.LIQUIDFERTILIZER, "sprayer", 1)
            if v4 ~= nil then
              setMaterial(weedSpotSprayConfigurationId, v4, 0)
            end
            v2.effect.node = weedSpotSprayConfigurationId
            v2.effect.fadeCur = {-1, 1}
            v2.effect.fadeDir = WeedSpotSpray.EFFECT_DIRECTION_OFF
            v2.effect.state = ShaderPlaneEffect.STATE_OFF
            setShaderParameter(v2.effect.node, "fadeProgress", v2.effect.fadeCur[1], v2.effect.fadeCur[2], 0, 0, false)
            local v8 = math.random()
            local v9 = math.random()
            setShaderParameter(v2.effect.node, "offsetUV", v8, v9, 0, 0, false)
          end
        end
        v2.lastActiveTime = -10000
        v2.isActive = false
        v2.lastIsActive = false
        table.insert(u2.nozzleNodes, v2)
        return
        u2.nozzleNodesToDelete[v2.node] = true
      end
    end)
  end)
  -- TODO: structure LOP_FORNPREP (pc 66, target 77)
  self.spec_weedSpotSpray.nozzleNodesToDelete[self.spec_weedSpotSpray.nozzleNodes[1].node] = nil
  -- TODO: structure LOP_FORNLOOP (pc 76, target 67)
  -- TODO: structure LOP_FORNPREP (pc 82, target 97)
  local v7 = entityExists(self.spec_weedSpotSpray.nozzleNodesToDelete[1])
  if v7 then
    delete(self.spec_weedSpotSpray.nozzleNodesToDelete[1])
  end
  -- TODO: structure LOP_FORNLOOP (pc 96, target 83)
  v2.nozzleNodesToDelete = {}
  v4 = math.ceil(#v2.nozzleNodes / WeedSpotSpray.NOZZLE_UPDATES_PER_FRAME)
  v2.nozzleUpdateFrameDelay = v4
  if 0 >= #v2.nozzleNodes then
  end
  v2.isAvailable = true
  if 1 >= weedSpotSprayConfigurationId then
  end
  v2.isEnabled = true
  v2.currentUpdateIndex = 1
  v2.effectsDirty = false
  v2.lastRegularUsage = 0
  v2.weedDetectionStates = {}
  local v5 = g_currentMission.weedSystem:getHerbicideReplacements()
  if v5.weed ~= nil then
    for v9, v10 in pairs(v5.weed.replacements) do
      if not (v10 ~= 0) then
        continue
      end
      v2.weedDetectionStates[v9] = true
    end
  end
  v6, v7, v8 = v6:getDensityMapData()
  v2.weedMapId = v6
  v2.weedFirstChannel = v7
  v2.weedNumChannels = v8
  v6, v7, v8 = v6:getDensityMapData(FieldDensityMap.GROUND_TYPE)
  v2.groundTypeMapId = v6
  v2.groundTypeFirstChannel = v7
  v2.groundTypeNumChannels = v8
  v6, v7, v8 = v6:getDensityMapData(FieldDensityMap.SPRAY_TYPE)
  v2.sprayTypeMapId = v6
  v2.sprayTypeFirstChannel = v7
  v2.sprayTypeNumChannels = v8
end
function WeedSpotSpray:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_weedSpotSpray.isAvailable then
    if self.spec_weedSpotSpray.isEnabled then
      local v7 = self:getIsTurnedOn()
      if v7 then
        -- TODO: structure LOP_FORNPREP (pc 24, target 170)
        if self.spec_sprayer.workAreaParameters.sprayFillType == FillType.HERBICIDE then
          local v11, v12, v13 = localToWorld(self.spec_weedSpotSpray.nozzleNodes[self.spec_weedSpotSpray.currentUpdateIndex].node, 0, 0, self.spec_weedSpotSpray.nozzleNodes[self.spec_weedSpotSpray.currentUpdateIndex].zOffset)
          local v14 = getDensityAtWorldPos(self.spec_weedSpotSpray.weedMapId, v11, v12, v13)
          local v16 = bitShiftRight(v14, self.spec_weedSpotSpray.weedFirstChannel)
          local v15 = bitAND(v16, 2 ^ self.spec_weedSpotSpray.weedNumChannels - 1)
          -- if not v0.spec_weedSpotSpray.weedDetectionStates[v15] then goto L154 end
          self.spec_weedSpotSpray.nozzleNodes[self.spec_weedSpotSpray.currentUpdateIndex].lastActiveTime = g_time + self.spec_weedSpotSpray.nozzleUpdateFrameDelay * dt * 1.5
          self.spec_weedSpotSpray.effectsDirty = true
        else
          v11, v12, v13 = localToWorld(self.spec_weedSpotSpray.nozzleNodes[self.spec_weedSpotSpray.currentUpdateIndex].node, 0, 0, self.spec_weedSpotSpray.nozzleNodes[self.spec_weedSpotSpray.currentUpdateIndex].zOffset * 2)
          v14 = getDensityAtWorldPos(self.spec_weedSpotSpray.sprayTypeMapId, v11, v12, v13)
          v16 = bitShiftRight(v14, self.spec_weedSpotSpray.sprayTypeFirstChannel)
          v15 = bitAND(v16, 2 ^ self.spec_weedSpotSpray.sprayTypeNumChannels - 1)
          v16 = getDensityAtWorldPos(self.spec_weedSpotSpray.groundTypeMapId, v11, v12, v13)
          local v18 = bitShiftRight(v16, self.spec_weedSpotSpray.groundTypeFirstChannel)
          local v17 = bitAND(v18, 2 ^ self.spec_weedSpotSpray.groundTypeNumChannels - 1)
          if v17 ~= 0 and v15 ~= FieldSprayType.FERTILIZER then
            self.spec_weedSpotSpray.nozzleNodes[self.spec_weedSpotSpray.currentUpdateIndex].lastActiveTime = g_time + self.spec_weedSpotSpray.nozzleUpdateFrameDelay * dt * 1.5
            self.spec_weedSpotSpray.effectsDirty = true
          end
        end
        v5.currentUpdateIndex = v5.currentUpdateIndex + 1
        if #v5.nozzleNodes < v5.currentUpdateIndex then
          v5.currentUpdateIndex = 1
        end
        -- TODO: structure LOP_FORNLOOP (pc 169, target 25)
      end
      self:updateNozzleEffects(dt, false)
      return
    end
    if v6 ~= FillType.UNKNOWN then
    end
    self:updateNozzleEffects(v9, v10, true)
  end
end
function WeedSpotSpray:onTurnedOff()
  -- TODO: structure LOP_FORNPREP (pc 7, target 18)
  self.spec_weedSpotSpray.nozzleNodes[1].isActive = false
  self.spec_weedSpotSpray.nozzleNodes[1].lastActiveTime = -1000
  -- TODO: structure LOP_FORNLOOP (pc 17, target 8)
  self.spec_weedSpotSpray.effectsDirty = true
end
function WeedSpotSpray:onEndWorkAreaProcessing(dt)
  local v2 = self:getLastSpeed()
  if 0.5 < v2 and self.isServer and self.spec_sprayer.workAreaParameters.isActive and self.spec_sprayer.workAreaParameters.sprayFillType == FillType.HERBICIDE then
    if self.spec_sprayer.workAreaParameters.sprayVehicle == nil then
      local v6 = self:getIsAIActive()
      -- if not v6 then goto L60 end
    end
    local v6, v7, v8 = self:getPFStatisticInfo()
    if v6 ~= nil and v8 ~= nil then
      v6:updateStatistic(v8, "usedHerbicide", v5)
      v6:updateStatistic(v8, "usedHerbicideRegular", self.spec_weedSpotSpray.lastRegularUsage)
    end
  end
end
function WeedSpotSpray:getAreEffectsVisible(superFunc)
  if self.spec_weedSpotSpray.isAvailable then
    return false
  end
  return superFunc(self)
end
function WeedSpotSpray:getSprayerUsage(superFunc, fillType, dt)
  if self.spec_weedSpotSpray.isAvailable and self.spec_weedSpotSpray.isEnabled then
    local v5 = superFunc(self, fillType, dt)
    self.spec_weedSpotSpray.lastRegularUsage = v5
    local v7 = self:getSpotSprayCoverage()
    return v5 * v7
  end
  v5 = superFunc(self, fillType, dt)
  v4.lastRegularUsage = v5
  return v5
end
function WeedSpotSpray:getSpotSprayCoverage()
  if self.spec_weedSpotSpray.isAvailable and self.spec_weedSpotSpray.isEnabled then
    -- TODO: structure LOP_FORNPREP (pc 14, target 23)
    if self.spec_weedSpotSpray.nozzleNodes[1].isActive then
    end
    -- TODO: structure LOP_FORNLOOP (pc 22, target 15)
    return v2 / #v1.nozzleNodes
  end
  return 1
end
function WeedSpotSpray:getIsSpotSprayEnabled()
  if self.spec_weedSpotSpray.isAvailable then
  end
  return v2
end
function WeedSpotSpray:updateNozzleEffects(dt, useSectionState, forceTurnOff)
  if self.spec_variableWorkWidth ~= nil then
  end
  local speed = self:getLastSpeed()
  -- TODO: structure LOP_FORNPREP (pc 20, target 289)
  if not useSectionState then
    if g_time - v4.nozzleNodes[1].lastActiveTime < 0 and 0.5 >= speed then
    end
    v11.isActive = v13
  else
    if v5 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L62
      -- cmp-jump LOP_JUMPXEQKNIL R13 aux=0x0 -> L62
      v4.nozzleNodes[1].isActive = v5[v4.nozzleNodes[1].sectionIndex].isActive
    else
      v4.nozzleNodes[1].isActive = true
    end
    if v11.isActive then
      local v13 = Sprayer.getAreEffectsVisible(self)
    end
    v11.isActive = v13
  end
  if v11.isActive then
  end
  v11.isActive = v13
  if v11.lastIsActive ~= v11.isActive then
    v4.effectsDirty = true
  end
  if v4.effectsDirty and v11.effect.node ~= nil then
    if v11.lastIsActive ~= v11.isActive then
      if v11.isActive then
        -- if v11.effect.state == ShaderPlaneEffect.STATE_ON then goto L161 end
        -- if v11.effect.state == ShaderPlaneEffect.STATE_TURNING_ON then goto L161 end
        v11.effect.state = ShaderPlaneEffect.STATE_TURNING_ON
        v11.effect.fadeDir = WeedSpotSpray.EFFECT_DIRECTION_START
        v11.effect.fadeCur[1] = -1
        v11.effect.fadeCur[2] = 1
      elseif v11.effect.state ~= ShaderPlaneEffect.STATE_OFF and v11.effect.state ~= ShaderPlaneEffect.STATE_TURNING_OFF then
        v11.effect.state = ShaderPlaneEffect.STATE_TURNING_OFF
        v11.effect.fadeDir = WeedSpotSpray.EFFECT_DIRECTION_STOP
      end
    end
    if v13.state ~= ShaderPlaneEffect.STATE_TURNING_OFF then
      -- if v13.state ~= ShaderPlaneEffect.STATE_TURNING_ON then goto L284 end
    end
    local v16 = math.min(v13.fadeCur[1] + v13.fadeDir[1] * dt / v4.effectFadeTime * v12, 1)
    local v15 = math.max(v16, -1)
    v13.fadeCur[1] = v15
    v16 = math.min(v13.fadeCur[2] + v13.fadeDir[2] * dt / v4.effectFadeTime * v12, 1)
    v15 = math.max(v16, -1)
    v13.fadeCur[2] = v15
    setShaderParameter(v13.node, "fadeProgress", v13.fadeCur[1], v13.fadeCur[2], 0, 0, false)
    if v13.state == ShaderPlaneEffect.STATE_TURNING_OFF then
      -- cmp-jump LOP_JUMPXEQKN R14 aux=0x80000022 -> L283
      -- cmp-jump LOP_JUMPXEQKN R14 aux=0x80000026 -> L283
      v13.state = ShaderPlaneEffect.STATE_OFF
    elseif v13.state == ShaderPlaneEffect.STATE_TURNING_ON and v13.fadeCur[1] == 1 and v13.fadeCur[2] == 1 then
      v13.state = ShaderPlaneEffect.STATE_ON
    end
  end
  v11.lastIsActive = v11.isActive
  -- TODO: structure LOP_FORNLOOP (pc 288, target 21)
  if v4.effectsDirty and not v7 then
    v4.effectsDirty = false
  end
end
