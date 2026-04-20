-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableCartridgePlayer = {}
function PlaceableCartridgePlayer.prerequisitesPresent(v0)
  return true
end
function PlaceableCartridgePlayer.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "cartridgePlayerTriggerCallback", PlaceableCartridgePlayer.cartridgePlayerTriggerCallback)
  SpecializationUtil.registerFunction(placeableType, "activatePlayer", PlaceableCartridgePlayer.activatePlayer)
end
function PlaceableCartridgePlayer.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableCartridgePlayer)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableCartridgePlayer)
end
function PlaceableCartridgePlayer:registerXMLPaths(v1)
  self:setXMLSpecializationType("CartridgePlayer")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".cartridgePlayer#itemsNode", "")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".cartridgePlayer#monitorNode", "")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".cartridgePlayer#monitorLightNode", "")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".cartridgePlayer#connectorNode", "")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".cartridgePlayer#triggerNode", "")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".cartridgePlayer.sounds", "play")
  self:setXMLSpecializationType()
end
function PlaceableCartridgePlayer:onLoad(savegame)
  local v3 = v3:getValue("placeable.cartridgePlayer" .. "#itemsNode", nil, self.components, self.i3dMappings)
  self.spec_cartridgePlayer.itemsNode = v3
  v3 = v3:getValue("placeable.cartridgePlayer" .. "#monitorNode", nil, self.components, self.i3dMappings)
  self.spec_cartridgePlayer.monitorNode = v3
  v3 = v3:getValue("placeable.cartridgePlayer" .. "#monitorLightNode", nil, self.components, self.i3dMappings)
  self.spec_cartridgePlayer.monitorLightNode = v3
  v3 = v3:getValue("placeable.cartridgePlayer" .. "#connectorNode", nil, self.components, self.i3dMappings)
  self.spec_cartridgePlayer.connectorNode = v3
  v3 = v3:getValue("placeable.cartridgePlayer" .. "#triggerNode", nil, self.components, self.i3dMappings)
  self.spec_cartridgePlayer.triggerNode = v3
  if self.spec_cartridgePlayer.triggerNode ~= nil then
    v3 = CollisionFlag.getHasFlagSet(self.spec_cartridgePlayer.triggerNode, CollisionFlag.TRIGGER_PLAYER)
    if not v3 then
      local v5 = CollisionFlag.getBit(CollisionFlag.TRIGGER_PLAYER)
      local v6 = I3DUtil.getNodePath(self.spec_cartridgePlayer.triggerNode)
      Logging.error(...)
      return nil
    end
    addTrigger(v2.triggerNode, "cartridgePlayerTriggerCallback", self)
    v3 = PlaceableCartridgePlayerActivatable.new(self)
    v2.activatable = v3
  end
  v2.currentItem = 0
  if self.isClient then
    v2.samples = {}
    local v4 = v4:loadSampleFromXML(self.xmlFile, "placeable.cartridgePlayer" .. ".sounds", "play", self.baseDirectory, self.components, 1, AudioGroup.ENVIRONMENT, self.i3dMappings, nil)
    v2.samples.play = v4
  end
  return self
end
function PlaceableCartridgePlayer:onDelete()
  v2:removeActivatable(self.spec_cartridgePlayer.activatable)
  if self.spec_cartridgePlayer.triggerNode ~= nil then
    removeTrigger(self.spec_cartridgePlayer.triggerNode)
  end
  if self.isClient then
    v2:deleteSamples(v1.samples)
  end
end
function PlaceableCartridgePlayer:cartridgePlayerTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if not onEnter then
    -- if not v4 then goto L28 end
  end
  if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
    if onEnter then
      v7:addActivatable(self.spec_cartridgePlayer.activatable)
      return
    end
    v7:removeActivatable(v6.activatable)
  end
end
function PlaceableCartridgePlayer:activatePlayer()
  if self.spec_cartridgePlayer.currentItem ~= 0 then
    local v3 = getChildAt(self.spec_cartridgePlayer.itemsNode, self.spec_cartridgePlayer.currentItem - 1)
    local v4 = getChildAt(self.spec_cartridgePlayer.connectorNode, 0)
    link(...)
    setVisibility(self.spec_cartridgePlayer.monitorLightNode, false)
    v3 = getChildAt(self.spec_cartridgePlayer.monitorNode, self.spec_cartridgePlayer.currentItem - 1)
    setVisibility(v3, false)
  end
  local v7 = getNumOfChildren(v1.itemsNode)
  -- TODO: structure LOP_FORNPREP (pc 51, target 73)
  local v8 = getChildAt(v1.itemsNode, 1 - 1)
  v7 = getVisibility(...)
  if v7 then
    if 0 == 0 then
    end
    if v3 == 0 and v1.currentItem < v6 then
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 72, target 52)
  if v3 ~= 0 then
    v1.currentItem = v3
  elseif v2 ~= 0 then
    v1.currentItem = v2
  else
    if v1.currentItem == 0 then
      v7 = v7:getText("ui_gameComputer")
      v8 = v8:getText("ui_gameComputerNoCartridges")
      v5:showInGameMessage(v7, v8, -1)
    else
      v1.currentItem = 0
    end
  end
  if v1.currentItem ~= 0 then
    v8 = getChildAt(v1.itemsNode, v1.currentItem - 1)
    v7 = getChildAt(v8, 0)
    link(...)
    setVisibility(v1.monitorLightNode, true)
    local v6 = getChildAt(v1.monitorNode, v1.currentItem - 1)
    setVisibility(v6, true)
  end
  if v4 ~= v1.currentItem and self.isClient then
    v5:playSample(v1.samples.play, 1)
  end
end
PlaceableCartridgePlayerActivatable = {}
local PlaceableCartridgePlayerActivatable_mt = Class(PlaceableCartridgePlayerActivatable)
function PlaceableCartridgePlayerActivatable.new(placeable)
  local v1 = setmetatable({}, u0)
  v1.placeable = placeable
  local v2 = v2:getText("action_gameComputerChangeCartridge")
  v1.activateText = v2
  return v1
end
function PlaceableCartridgePlayerActivatable:run()
  v1:activatePlayer()
end
