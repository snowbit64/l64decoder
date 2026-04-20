-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableLights = {}
source("dataS/scripts/placeables/specializations/events/PlaceableLightsStateEvent.lua")
PlaceableLights.MAX_NUM_BITS = 5
PlaceableLights.MAX_NUM_GROUPS = 2 ^ PlaceableLights.MAX_NUM_BITS
function PlaceableLights.prerequisitesPresent(specializations)
  return true
end
function PlaceableLights.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "lightSetupChanged", PlaceableLights.lightSetupChanged)
  SpecializationUtil.registerFunction(placeableType, "getUseHighProfile", PlaceableLights.getUseHighProfile)
  SpecializationUtil.registerFunction(placeableType, "setGroupIsActive", PlaceableLights.setGroupIsActive)
  SpecializationUtil.registerFunction(placeableType, "lightsTriggerCallback", PlaceableLights.lightsTriggerCallback)
  SpecializationUtil.registerFunction(placeableType, "sharedLightLoaded", PlaceableLights.sharedLightLoaded)
  SpecializationUtil.registerFunction(placeableType, "updateLightState", PlaceableLights.updateLightState)
end
function PlaceableLights.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableLights)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableLights)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableLights)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableLights)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableLights)
end
function PlaceableLights:registerXMLPaths(v1)
  self:setXMLSpecializationType("Lights")
  self:register(XMLValueType.STRING, v1 .. ".lights.sharedLight(?)#filename", "Path to shared light xml file")
  self:register(XMLValueType.INT, v1 .. ".lights.sharedLight(?)#groupIndex", "Parent group", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".lights.sharedLight(?)#linkNode", "Link node")
  self:register(XMLValueType.COLOR, v1 .. ".lights.sharedLight(?)#color", "Light color")
  self:register(XMLValueType.STRING, v1 .. ".lights.sharedLight(?).rotationNode(?)#name", "Rotation node name")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".lights.sharedLight(?).rotationNode(?)#rotation", "Rotation to set")
  self:register(XMLValueType.INT, v1 .. ".lights.lightShape(?)#groupIndex", "Parent group", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".lights.lightShape(?)#node", "Light shape / self-illum-mesh node. Always visible, only shader is set")
  self:register(XMLValueType.FLOAT, v1 .. ".lights.lightShape(?)#intensity", "Intensity for the shader if active", 25)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".lights.realLights.low.light(?)#node", "Real light node used on low performance profile. Visibility is toggled based on settings")
  self:register(XMLValueType.INT, v1 .. ".lights.realLights.low.light(?)#groupIndex", "Parent group", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".lights.realLights.high.light(?)#node", "Real light node used on high performance profile. Visibility is toggled based on settings")
  self:register(XMLValueType.INT, v1 .. ".lights.realLights.high.light(?)#groupIndex", "Parent group", 1)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".lights.group(?)#triggerNode", "Activation Trigger for manual control")
  self:register(XMLValueType.STRING, v1 .. ".lights.group(?)#inputAction", "Input Action name", "INTERACT")
  self:register(XMLValueType.L10N_STRING, v1 .. ".lights.group(?)#name", "Group name for display", "action_placeableLightShed")
  self:register(XMLValueType.L10N_STRING, v1 .. ".lights.group(?)#activateText", "Activate text to display in help menu", "action_placeableLightPos")
  self:register(XMLValueType.L10N_STRING, v1 .. ".lights.group(?)#deactivateText", "Deactivate text to display in help menu", "action_placeableLightNeg")
  self:register(XMLValueType.STRING, v1 .. ".lights.group(?)#activateTime", "If defined, light will be turned on at this time of day. Format hh:mm")
  self:register(XMLValueType.STRING, v1 .. ".lights.group(?)#deactivateTime", "If defined, light will be turned off at this time of day. Format hh:mm")
  self:register(XMLValueType.STRING, v1 .. ".lights.group(?)#weatherRequiredFlags", "Space separeted list of environment flag names to be used as required mask")
  self:register(XMLValueType.STRING, v1 .. ".lights.group(?)#weatherPreventFlags", "Space separeted list of environment flag names to be used as prevent mask")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".lights.group(?).sounds", "toggle")
  self:setXMLSpecializationType()
end
function PlaceableLights:onLoad(savegame)
  self.spec_lights.sharedLights = {}
  self.spec_lights.groups = {}
  self.spec_lights.triggerToGroup = {}
  local v5 = PlaceableLightsActivatable.new(self)
  self.spec_lights.activatable = v5
  v5:subscribe(MessageType.SETTING_CHANGED.lightsProfile, self.lightSetupChanged, self)
  self.xmlFile:iterate("placeable.lights.group", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#triggerNode", nil, u1.components, u1.i3dMappings)
    if {triggerNode = v3}.triggerNode ~= nil then
      addTrigger({triggerNode = v3}.triggerNode, "lightsTriggerCallback", u1)
      u2.triggerToGroup[{triggerNode = v3}.triggerNode] = {triggerNode = v3}
    end
    v3 = v3:getValue(savegame .. "#inputAction", "INTERACT")
    if not InputAction[v3] then
    end
    v2.inputAction = v4
    local v4 = v4:getValue(savegame .. "#name", "action_placeableLightShed", u1.customEnvironment)
    v2.name = v4
    v4 = v4:getValue(savegame .. "#activateText", "action_placeableLightPos", u1.customEnvironment)
    v2.activateText = v4
    v4 = v4:getValue(savegame .. "#deactivateText", "action_placeableLightNeg", u1.customEnvironment)
    v2.deactivateText = v4
    v4 = v4:getValue(savegame .. "#activateTime", nil)
    if v4 ~= nil then
      local v5 = Utils.getMinuteOfDayFromTime(v4)
      v2.activateMinute = v5
      if v2.activateMinute == nil then
        Logging.xmlWarning(u0, "Invalid activateTime string '%s' given for group '%s'. Use 'hh:mm' format", v4, savegame)
      else
        v5 = math.max(1, v2.activateMinute)
        v2.activateMinute = v5
      end
    end
    v5 = v5:getValue(savegame .. "#deactivateTime", nil)
    if v5 ~= nil then
      local v6 = Utils.getMinuteOfDayFromTime(v5)
      v2.deactivateMinute = v6
      if v2.deactivateMinute == nil then
        Logging.xmlWarning(u0, "Invalid deactivateTime string '%s' given for group '%s'. Use 'hh:mm' format", v5, savegame)
      else
        v6 = math.max(1, v2.deactivateMinute)
        v2.deactivateMinute = v6
      end
    end
    local v8 = v8:getValue(savegame .. "#weatherRequiredFlags", nil)
    v6 = v6:getWeatherMaskFromFlagNames(...)
    v2.weatherRequiredMask = v6
    v8 = v8:getValue(savegame .. "#weatherPreventFlags", nil)
    v6 = v6:getWeatherMaskFromFlagNames(...)
    v2.weatherPreventMask = v6
    if u1.isClient then
      v2.samples = {}
      local v7 = v7:loadSampleFromXML(u0, savegame .. ".sounds", "toggle", u1.baseDirectory, u1.components, 1, AudioGroup.ENVIRONMENT, u1.i3dMappings, nil)
      v2.samples.toggle = v7
    end
    if v2.activateMinute ~= nil then
    end
    if v6 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x80000000 -> L253
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L253
    end
    Logging.xmlWarning(u0, "Incomplete automatic toggle time in '%s'", savegame)
    return
    if v2.triggerNode == nil then
    end
    v2.hasManualLights = true
    v2.isActive = false
    v2.playerInRange = false
    if #u2.groups < PlaceableLights.MAX_NUM_GROUPS then
      table.insert(u2.groups, v2)
      v2.index = #u2.groups
      return
    end
    Logging.xmlWarning(u0, "Too many light groups registered. Max. %d are allowed", PlaceableLights.MAX_NUM_GROUPS)
  end)
  self.xmlFile:iterate("placeable.lights.sharedLight", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#filename")
    if v3 ~= nil then
      local v4 = Utils.getFilename(v3, u1.baseDirectory)
      v4 = v4:getValue(savegame .. "#groupIndex", 1)
      v4 = v4:getValue(savegame .. "#color", nil, true)
      v4 = v4:getValue(savegame .. "#linkNode", "0>", u1.components, u1.i3dMappings)
      if u2.groups[{xmlFilename = v4, groupIndex = v4, color = v4, linkNode = v4}.groupIndex] == nil then
        Logging.xmlError("Group index '%d' in '%s' does not exist", {xmlFilename = v4, groupIndex = v4, color = v4, linkNode = v4}.groupIndex, savegame)
        return
      end
      if v2.linkNode ~= nil then
        v2.rotations = {}
        v5:iterate(savegame .. ".rotationNode", function(self, savegame)
          local v2 = v2:getValue(savegame .. "#name")
          local v3 = v3:getValue(savegame .. "#rotation", nil, true)
          if v2 ~= nil then
            u1.rotations[v2] = v3
          end
        end)
        local v5 = XMLFile.load("sharedLight", v2.xmlFilename, Lights.sharedLightXMLSchema)
        if v5 ~= nil then
          local v6 = v5:getValue("light.filename")
          if v6 ~= nil then
            local v7 = v7:createLoadingTask(u2)
            local v8 = Utils.getFilename(v6, u1.baseDirectory)
            local v9 = v9:loadSharedI3DFileAsync(v8, false, false, u1.sharedLightLoaded, u1, {sharedLight = v2, lightXMLFile = v5, loadingTask = v7, group = v4, filename = v8})
            v2.sharedLoadRequestId = v9
            table.insert(u2.sharedLights, v2)
            return
          end
          Logging.xmlWarning(v5, "Missing light i3d filename!")
          v5:delete()
        end
      end
    end
  end)
  self.spec_lights.lightShapes = {}
  self.xmlFile:iterate("placeable.lights.lightShape", function(self, savegame)
    local v3 = v3:getValue(savegame .. "#groupIndex", 1)
    v3 = v3:getValue(savegame .. "#node", "0>", u1.components, u1.i3dMappings)
    if {groupIndex = v3, node = v3}.node ~= nil then
      local v8 = getHasShaderParameter({groupIndex = v3, node = v3}.node, "lightControl")
      if v8 then
        v8 = getShaderParameter({groupIndex = v3, node = v3}.node, "lightControl")
      else
      end
      v3 = v3:getValue(v5, v6)
      v2.intensity = v3
      if u2.groups[v2.groupIndex] == nil then
        Logging.xmlError(u0, "Group index '%d' in '%s' does not exist", v2.groupIndex, savegame)
      elseif not u2.groups[v2.groupIndex].hasManualLights then
        if u2.groups[v2.groupIndex].activateMinute ~= nil then
          setVisibilityConditionMinuteOfDay(v2.node, u2.groups[v2.groupIndex].activateMinute, u2.groups[v2.groupIndex].deactivateMinute)
        end
        if v3.weatherRequiredMask == nil then
          -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L109
        end
        setVisibilityConditionWeatherMask(v2.node, v3.weatherRequiredMask or 0, v3.weatherPreventMask or 0)
        setVisibilityConditionRenderInvisible(v2.node, true)
        setVisibilityConditionVisibleShaderParameter(v2.node, v2.intensity)
      end
      table.insert(u2.lightShapes, v2)
    end
  end)
  self.spec_lights.realLights = {low = {}, high = {}}
  self.xmlFile:iterate("placeable.lights.realLights.low.light", function(self, savegame)
    u0(savegame, u1.realLights.low)
  end)
  self.xmlFile:iterate("placeable.lights.realLights.high.light", function(self, savegame)
    u0(savegame, u1.realLights.high)
  end)
end
function PlaceableLights:onFinalizePlacement()
  self:lightSetupChanged()
end
function PlaceableLights:sharedLightLoaded(i3dNode, failedReason, args)
  if i3dNode ~= nil and i3dNode ~= 0 then
    if self.loadingState == Placeable.LOADING_STATE_OK then
      local v10 = args.lightXMLFile:getValue("light.rootNode#node", "0", i3dNode)
      args.sharedLight.node = v10
      args.sharedLight.i3dFilename = args.filename
      args.sharedLight.lightShapes = {}
      args.lightXMLFile:iterate("light.defaultLight", function(self, i3dNode)
        local args = args:getValue(i3dNode .. "#node", nil, u1)
        if {node = args}.node ~= nil then
          args = getHasShaderParameter({node = args}.node, "lightControl")
          if args then
            args = args:getValue(i3dNode .. "#intensity", 25)
            if u2.hasManualLights then
              setShaderParameter({node = args, intensity = args}.node, "lightControl", 0, 0, 0, 0, false)
            else
              if u2.activateMinute ~= nil then
                setVisibilityConditionMinuteOfDay({node = args, intensity = args}.node, u2.activateMinute, u2.deactivateMinute)
              end
              if u2.weatherRequiredMask == nil then
                -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L89
              end
              setVisibilityConditionWeatherMask(failedReason.node, u2.weatherRequiredMask or 0, u2.weatherPreventMask or 0)
              setVisibilityConditionRenderInvisible(failedReason.node, true)
              setVisibilityConditionVisibleShaderParameter(failedReason.node, failedReason.intensity)
            end
            table.insert(u3.lightShapes, failedReason)
          else
            local v6 = getName({node = args}.node)
            Logging.xmlWarning(...)
          end
          -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L161
          args = getHasShaderParameter(failedReason.node, "colorScale")
          -- if not v3 then goto L161 end
          setShaderParameter(failedReason.node, "colorScale", u3.color[1], u3.color[2], u3.color[3], 0, false)
          return
        end
        Logging.xmlWarning(u0, "Could not find node for '%s'!", i3dNode)
      end)
      args.lightXMLFile:iterate("light.rotationNode", function(self, i3dNode)
        local failedReason = failedReason:getValue(i3dNode .. "#name")
        if failedReason ~= nil then
          local args = args:getValue(i3dNode .. "#node", nil, u1)
          if u2.rotations[failedReason] ~= nil then
            local v6 = unpack(u2.rotations[failedReason])
            setRotation(...)
          end
        end
      end)
      args.sharedLight.rotations = nil
      link(args.sharedLight.linkNode, args.sharedLight.node)
    end
    delete(i3dNode)
  end
  v6:delete()
  self:finishLoadingTask(v7)
end
function PlaceableLights:onDelete()
  if self.spec_lights.sharedLights ~= nil then
    for v5, v6 in ipairs(self.spec_lights.sharedLights) do
      if not (v6.sharedLoadRequestId ~= nil) then
        continue
      end
      v7:releaseSharedI3DFile(v6.sharedLoadRequestId)
      v6.sharedLoadRequestId = nil
    end
    savegame.sharedLights = {}
  end
  v2:unsubscribeAll(self)
  v2:removeActivatable(savegame.activatable)
  if savegame.groups ~= nil then
    for v5, v6 in ipairs(savegame.groups) do
      if v6.triggerNode ~= nil then
        removeTrigger(v6.triggerNode)
      end
      v7:deleteSamples(v6.samples)
    end
    savegame.groups = {}
  end
end
function PlaceableLights:onReadStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_lights.groups) do
    if not v8.hasManualLights then
      continue
    end
    local v12 = streamReadBool(streamId)
    self:setGroupIsActive(v7, v12, true)
  end
end
function PlaceableLights:onWriteStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_lights.groups) do
    if not v8.hasManualLights then
      continue
    end
    streamWriteBool(streamId, v8.isActive)
  end
end
function PlaceableLights.getUseHighProfile(PlaceableLightsActivatable_mt)
  local savegame = savegame:getValue("lightsProfile")
  local v2 = Utils.getNoNil(Platform.gameplay.lightsProfile, savegame)
  if v2 ~= GS_PROFILE_VERY_HIGH and v2 ~= GS_PROFILE_HIGH then
  end
  return v2
end
function PlaceableLights:setGroupIsActive(groupIndex, isActive, noEventSend)
  if self.spec_lights.groups[groupIndex] ~= nil then
    local v6 = Utils.getNoNil(isActive, not self.spec_lights.groups[groupIndex].isActive)
    self.spec_lights.groups[groupIndex].isActive = v6
    self:updateLightState(groupIndex, self.spec_lights.groups[groupIndex].isActive)
    PlaceableLightsStateEvent.sendEvent(self, groupIndex, self.spec_lights.groups[groupIndex].isActive, noEventSend)
    if self.isClient then
      v6:playSample(self.spec_lights.groups[groupIndex].samples.toggle, 1)
    end
  end
end
function PlaceableLights:updateLightState(groupIndex, isActive)
  if self.spec_lights.groups[groupIndex].hasManualLights then
    for v8, v9 in ipairs(self.spec_lights.sharedLights) do
      if not (v9.groupIndex == groupIndex) then
        continue
      end
      -- TODO: structure LOP_FORNPREP (pc 23, target 43)
      if isActive then
        -- if v9.lightShapes[1].intensity then goto L37 end
      end
      v14(v15, v16, 0, 0, 0, 0, false)
      -- TODO: structure LOP_FORNLOOP (pc 42, target 24)
    end
    for v8, v9 in ipairs(v3.lightShapes) do
      if not (v9.groupIndex == groupIndex) then
        continue
      end
      if isActive then
        -- if v9.intensity then goto L65 end
      end
      v10(v11, v12, 0, 0, 0, 0, false)
    end
  end
  v7 = self:getUseHighProfile()
  if v7 then
  end
  for v10, v11 in ipairs(v5) do
    if not (v11.groupIndex == groupIndex) then
      continue
    end
    setVisibility(v11.node, not v4.hasManualLights or isActive)
  end
  for v10, v11 in ipairs(v6) do
    if not (v11.groupIndex == groupIndex) then
      continue
    end
    setVisibility(v11.node, false)
  end
end
function PlaceableLights:lightsTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if self.spec_lights.triggerToGroup[triggerId] ~= nil then
    if not onEnter then
      -- if not v4 then goto L61 end
    end
    if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
      if onEnter then
        v7.playerInRange = true
        v9:addActivatable(v6.activatable)
        v9:setGroupIndex(v7.index)
        return
      end
      v7.playerInRange = false
      for v13, v14 in ipairs(v6.groups) do
        if not v9 then
        end
      end
      if not v9 then
        v10:removeActivatable(v6.activatable)
      end
    end
  end
end
function PlaceableLights:lightSetupChanged()
  for v5, v6 in ipairs(self.spec_lights.groups) do
    self:updateLightState(v5, v6.isActive)
  end
end
PlaceableLightsActivatable = {}
local PlaceableLightsActivatable_mt = Class(PlaceableLightsActivatable)
function PlaceableLightsActivatable.new(placeable)
  local savegame = setmetatable({}, u0)
  savegame.placeable = placeable
  savegame.groupIndex = 1
  savegame.activateText = ""
  return savegame
end
function PlaceableLightsActivatable:setGroupIndex(groupIndex)
  self.groupIndex = groupIndex or 1
  self:updateActivateText()
end
function PlaceableLightsActivatable:run()
  savegame:setGroupIsActive(self.groupIndex)
  self:updateActivateText()
end
function PlaceableLightsActivatable:updateActivateText()
  if self.placeable.spec_lights.groups[self.groupIndex].triggerNode ~= nil then
    if self.placeable.spec_lights.groups[self.groupIndex].isActive then
      local v2 = string.format(self.placeable.spec_lights.groups[self.groupIndex].deactivateText, self.placeable.spec_lights.groups[self.groupIndex].name)
      self.activateText = v2
      return
    end
    v2 = string.format(savegame.activateText, savegame.name)
    self.activateText = v2
  end
end
function PlaceableLightsActivatable:getDistance(x, y, z)
  if self.placeable.spec_lights.groups[self.groupIndex].triggerNode ~= nil then
    local v5, v6, v7 = getWorldTranslation(self.placeable.spec_lights.groups[self.groupIndex].triggerNode)
    return MathUtil.vector3Length(x - v5, y - v6, z - v7)
  end
  return math.huge
end
