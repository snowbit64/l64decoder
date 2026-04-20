-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHighPressureWasher = {}
source("dataS/scripts/placeables/specializations/events/PlaceableHighPressureWasherStateEvent.lua")
function PlaceableHighPressureWasher.prerequisitesPresent(specializations)
  return true
end
function PlaceableHighPressureWasher.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "deactivateHighPressureWasher", PlaceableHighPressureWasher.deactivateHighPressureWasher)
  SpecializationUtil.registerFunction(placeableType, "onHighPressureWasherLanceDeleted", PlaceableHighPressureWasher.onHighPressureWasherLanceDeleted)
  SpecializationUtil.registerFunction(placeableType, "onHighPressureWasherLanceEquipped", PlaceableHighPressureWasher.onHighPressureWasherLanceEquipped)
  SpecializationUtil.registerFunction(placeableType, "onHighPressureWasherPlayerDeleted", PlaceableHighPressureWasher.onHighPressureWasherPlayerDeleted)
  SpecializationUtil.registerFunction(placeableType, "setIsHighPressureWasherTurnedOn", PlaceableHighPressureWasher.setIsHighPressureWasherTurnedOn)
  SpecializationUtil.registerFunction(placeableType, "getHighPressureWasherLoad", PlaceableHighPressureWasher.getHighPressureWasherLoad)
  SpecializationUtil.registerFunction(placeableType, "getHighPressureWasherIsPlayerInRange", PlaceableHighPressureWasher.getHighPressureWasherIsPlayerInRange)
end
function PlaceableHighPressureWasher.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "canBeSold", PlaceableHighPressureWasher.canBeSold)
end
function PlaceableHighPressureWasher.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHighPressureWasher)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHighPressureWasher)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableHighPressureWasher)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableHighPressureWasher)
  SpecializationUtil.registerEventListener(placeableType, "onUpdate", PlaceableHighPressureWasher)
  SpecializationUtil.registerEventListener(placeableType, "onUpdateTick", PlaceableHighPressureWasher)
  SpecializationUtil.registerEventListener(placeableType, "onInfoTriggerEnter", PlaceableHighPressureWasher)
  SpecializationUtil.registerEventListener(placeableType, "onInfoTriggerLeave", PlaceableHighPressureWasher)
end
function PlaceableHighPressureWasher:registerXMLPaths(v1)
  self:setXMLSpecializationType("highPressureWasher")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".highPressureWasher.lance#node", "Lance node")
  self:register(XMLValueType.STRING, v1 .. ".highPressureWasher.handtool#filename", "Hand tool xml filename")
  self:register(XMLValueType.FLOAT, v1 .. ".highPressureWasher.playerInRangeDistance", "Player in range distance", 3)
  self:register(XMLValueType.FLOAT, v1 .. ".highPressureWasher.actionRadius#distance", "Action radius distance", 15)
  SoundManager.registerSampleXMLPaths(self, v1 .. ".highPressureWasher.sounds", "compressor")
  SoundManager.registerSampleXMLPaths(self, v1 .. ".highPressureWasher.sounds", "switch")
  self:register(XMLValueType.STRING, v1 .. ".highPressureWasher.exhaust#filename", "Exhaust effect i3d filename")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".highPressureWasher.exhaust#index", "Exhaust effect link node")
  self:setXMLSpecializationType()
end
function PlaceableHighPressureWasher:onLoad(savegame)
  local v4 = self.xmlFile:getValue("placeable.highPressureWasher.lance#node", nil, self.components, self.i3dMappings)
  self.spec_highPressureWasher.lanceNode = v4
  local v5 = self.xmlFile:getValue("placeable.highPressureWasher.handtool#filename")
  v4 = Utils.getFilename(v5, self.baseDirectory)
  self.spec_highPressureWasher.handtoolXML = v4
  v4 = self.xmlFile:getValue("placeable.highPressureWasher.playerInRangeDistance", 3)
  self.spec_highPressureWasher.playerInRangeDistance = v4
  v4 = self.xmlFile:getValue("placeable.highPressureWasher.actionRadius#distance", 10)
  self.spec_highPressureWasher.actionRadius = v4
  if self.isClient then
    self.spec_highPressureWasher.samples = {}
    v5 = v5:loadSampleFromXML(self.xmlFile, "placeable.highPressureWasher.sounds", "compressor", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_highPressureWasher.samples.compressor = v5
    v5 = v5:loadSampleFromXML(self.xmlFile, "placeable.highPressureWasher.sounds", "switch", self.baseDirectory, self.components, 1, AudioGroup.VEHICLE, self.i3dMappings, self)
    self.spec_highPressureWasher.samples.switch = v5
  end
  v2.isTurnedOn = false
  v2.isTurningOff = false
  v2.turnOffTime = 0
  v2.turnOffDuration = 500
  v2.numPlayersInTrigger = 0
  v4 = HighPressureWasherActivatable.new(self)
  v2.activatable = v4
end
function PlaceableHighPressureWasher:onDelete()
  if self.spec_highPressureWasher.isTurnedOn then
    self:setIsHighPressureWasherTurnedOn(false, nil, false)
  end
  v2:deleteSamples(v1.samples)
  v2:removeActivatable(v1.activatable)
end
function PlaceableHighPressureWasher:onReadStream(streamId, connection)
  local isTurnedOn = streamReadBool(streamId)
  if isTurnedOn then
    local player = NetworkUtil.readNodeObject(streamId)
    if player ~= nil then
      self:setIsHighPressureWasherTurnedOn(isTurnedOn, player, true)
    end
  end
end
function PlaceableHighPressureWasher:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_highPressureWasher.isTurnedOn)
  if self.spec_highPressureWasher.isTurnedOn then
    NetworkUtil.writeNodeObject(streamId, self.spec_highPressureWasher.currentPlayer)
  end
end
function PlaceableHighPressureWasher:onUpdate(dt)
  if self.spec_highPressureWasher.currentPlayer ~= nil then
    local v3, v4, v5 = self:getHighPressureWasherIsPlayerInRange(self.spec_highPressureWasher.actionRadius, self.spec_highPressureWasher.currentPlayer)
    if not v3 then
      if 0 < self.spec_highPressureWasher.actionRadius + 5 - v5 then
        -- if v0.spec_highPressureWasher.currentPlayer ~= g_currentMission.player then goto L53 end
        local v11 = v11:getText("warning_hpwRangeRestriction")
        local v10 = string.format(v11, self.spec_highPressureWasher.actionRadius + 5 - v5)
        v8:showBlinkingWarning(v10, 100)
      elseif self.isServer then
        self:setIsHighPressureWasherTurnedOn(false, nil, false)
      end
    end
  end
  if self.isClient and v2.isTurningOff and v2.turnOffTime < g_currentMission.time then
    v2.isTurningOff = false
    v3:stopSample(v2.samples.compressor)
  end
  if v2.currentPlayer == nil and not v2.isTurningOff then
    -- if not v2.isPlayerInTrigger then goto L90 end
  end
  self:raiseActive()
end
function PlaceableHighPressureWasher:onUpdateTick(dt)
  local v3 = v3:canPlayerAccess(self, g_currentMission.player)
  if v3 then
    local v3, v4 = self:getHighPressureWasherIsPlayerInRange(self.spec_highPressureWasher.playerInRangeDistance, g_currentMission.player)
    if v3 then
      v5:addActivatable(self.spec_highPressureWasher.activatable)
      return
    end
    v5:removeActivatable(v2.activatable)
  end
end
function PlaceableHighPressureWasher:onInfoTriggerEnter()
  self.spec_highPressureWasher.isPlayerInTrigger = true
  self:raiseActive()
end
function PlaceableHighPressureWasher:onInfoTriggerLeave()
  self.spec_highPressureWasher.isPlayerInTrigger = false
end
function PlaceableHighPressureWasher:getHighPressureWasherLoad()
  if self.spec_highPressureWasher.isTurningOff then
    if g_currentMission.time < self.spec_highPressureWasher.turnOffTime then
      return MathUtil.clamp((self.spec_highPressureWasher.turnOffTime - g_currentMission.time) / self.spec_highPressureWasher.turnOffDuration, 0, 1)
    end
    return 0
  end
  return 1
end
HighPressureWasherActivatable_mt:registerModifierType("HIGH_PRESSURE_WASHER_LOAD", PlaceableHighPressureWasher.getHighPressureWasherLoad)
function PlaceableHighPressureWasher:setIsHighPressureWasherTurnedOn(isTurnedOn, player, noEventSend)
  if self.spec_highPressureWasher.isTurnedOn ~= isTurnedOn then
    if noEventSend ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R3 aux=0x80000000 -> L43
    end
    if g_server ~= nil then
      local v7 = PlaceableHighPressureWasherStateEvent.new(self, isTurnedOn, player)
      v5:broadcastEvent(v7, nil, nil, self)
    else
      local v5 = v5:getServerConnection()
      v7 = PlaceableHighPressureWasherStateEvent.new(self, isTurnedOn, player)
      v5:sendEvent(...)
    end
    if isTurnedOn then
      v4.isTurnedOn = isTurnedOn
      if player ~= nil then
        v4.currentPlayer = player
        v5:addDeleteListener(self, "onHighPressureWasherPlayerDeleted")
        if noEventSend ~= true then
          v5:equipHandtool(v4.handtoolXML, true, noEventSend, self.onHighPressureWasherLanceEquipped, self)
        end
      end
      -- if not v4.isClient then goto L108 end
      v5:playSample(v4.samples.switch)
      v5:playSample(v4.samples.compressor)
      if v4.isTurningOff then
        v4.isTurningOff = false
      end
      setVisibility(v4.lanceNode, false)
    else
      self:deactivateHighPressureWasher()
    end
    if v4.exhaustNode ~= nil then
      setVisibility(v4.exhaustNode, isTurnedOn)
    end
    self:raiseActive()
  end
end
function PlaceableHighPressureWasher.onHighPressureWasherLanceEquipped(HighPressureWasherActivatable_mt, dt)
  dt:addDeleteListener(HighPressureWasherActivatable_mt, "onHighPressureWasherLanceDeleted")
end
function PlaceableHighPressureWasher:onHighPressureWasherPlayerDeleted()
  self.spec_highPressureWasher.currentPlayer = nil
  self:setIsHighPressureWasherTurnedOn(false, nil, nil)
end
function PlaceableHighPressureWasher:onHighPressureWasherLanceDeleted()
  self.spec_highPressureWasher.currentPlayer = nil
  self:setIsHighPressureWasherTurnedOn(false, nil, nil)
end
function PlaceableHighPressureWasher:deactivateHighPressureWasher()
  if self.isClient then
    v2:playSample(self.spec_highPressureWasher.samples.switch)
    self.spec_highPressureWasher.isTurningOff = true
    self.spec_highPressureWasher.turnOffTime = g_currentMission.time + self.spec_highPressureWasher.turnOffDuration
  end
  dt.isTurnedOn = false
  if dt.lanceNode ~= nil then
    setVisibility(dt.lanceNode, true)
  end
  if dt.currentPlayer ~= nil then
    local v2 = v2:hasHandtoolEquipped()
    if v2 then
      v2:removeDeleteListener(self, "onHighPressureWasherLanceDeleted")
      v2:unequipHandtool()
    end
    v2:removeDeleteListener(self, "onHighPressureWasherPlayerDeleted")
    dt.currentPlayer = nil
  end
end
function PlaceableHighPressureWasher:canBeSold(superFunc)
  local v2, v3 = superFunc(self)
  if not v2 then
    return v2, v3
  end
  if self.spec_highPressureWasher.currentPlayer ~= nil then
    local v5 = v5:getText("shop_messageReturnVehicleInUse")
    return false, v5
  end
  return true, nil
end
function PlaceableHighPressureWasher:getHighPressureWasherIsPlayerInRange(actionRadius, player)
  if self.rootNode ~= nil then
    local distance = calcDistanceFrom(player.rootNode, self.rootNode)
    if distance >= actionRadius then
    end
    return true, player, distance
  end
  return false, nil, 0
end
HighPressureWasherActivatable = {}
local HighPressureWasherActivatable_mt = Class(HighPressureWasherActivatable)
function HighPressureWasherActivatable.new(placeable)
  local dt = setmetatable({}, u0)
  dt.placeable = placeable
  dt.activateText = "unknown"
  return dt
end
function HighPressureWasherActivatable:getIsActivatable()
  if self.placeable.spec_highPressureWasher.isTurnedOn and self.placeable.spec_highPressureWasher.currentPlayer ~= g_currentMission.player then
    return false
  end
  if self.currentPlayer ~= nil then
    local v2 = v2:hasHandtoolEquipped()
    if v2 then
    end
  end
  if not dt.isTurnedOn and v2 then
    return false
  end
  if self.placeable.isDeleted then
    return false
  end
  self:updateActivateText()
  return true
end
function HighPressureWasherActivatable:run()
  v2:setIsHighPressureWasherTurnedOn(not self.placeable.spec_highPressureWasher.isTurnedOn, g_currentMission.player)
  self:updateActivateText()
end
function HighPressureWasherActivatable:updateActivateText()
  if self.placeable.spec_highPressureWasher.isTurnedOn then
    local v3 = v3:getText("action_turnOffOBJECT")
    local v4 = v4:getText("typeDesc_highPressureWasher")
    local v2 = string.format(...)
    self.activateText = v2
    return
  end
  v3 = v3:getText("action_turnOnOBJECT")
  v4 = v4:getText("typeDesc_highPressureWasher")
  v2 = string.format(...)
  self.activateText = v2
end
function HighPressureWasherActivatable:getDistance(x, y, z)
  if self.placeable.rootNode ~= nil then
    local v4, v5, v6 = getWorldTranslation(self.placeable.rootNode)
    return MathUtil.vector3Length(x - v4, y - v5, z - v6)
  end
  return math.huge
end
