-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableInfoTrigger = {}
function PlaceableInfoTrigger.prerequisitesPresent(v0)
  return true
end
function PlaceableInfoTrigger.registerEvents(v0)
  SpecializationUtil.registerEvent(v0, "onInfoTriggerEnter")
  SpecializationUtil.registerEvent(v0, "onInfoTriggerLeave")
end
function PlaceableInfoTrigger.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", PlaceableInfoTrigger)
  SpecializationUtil.registerEventListener(v0, "onDelete", PlaceableInfoTrigger)
  SpecializationUtil.registerEventListener(v0, "onFinalizePlacement", PlaceableInfoTrigger)
  SpecializationUtil.registerEventListener(v0, "onDraw", PlaceableInfoTrigger)
end
function PlaceableInfoTrigger.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "updateInfo", PlaceableInfoTrigger.updateInfo)
  SpecializationUtil.registerFunction(placeableType, "onInfoTriggerCallback", PlaceableInfoTrigger.onInfoTriggerCallback)
end
function PlaceableInfoTrigger:registerXMLPaths(v1)
  self:setXMLSpecializationType("InfoTrigger")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".infoTrigger#triggerNode", "Info trigger", nil, false)
  self:register(XMLValueType.BOOL, v1 .. ".infoTrigger#showAllPlayers", "Show info to all players", false, false)
  self:setXMLSpecializationType()
end
function PlaceableInfoTrigger:onLoad(savegame)
  self.spec_infoTrigger.info = {}
  self.spec_infoTrigger.showInfo = false
  local v3 = v3:getValue("placeable.infoTrigger#showAllPlayers", false)
  self.spec_infoTrigger.showAllPlayers = v3
  v3 = v3:getValue("placeable.infoTrigger#triggerNode", nil, self.components, self.i3dMappings)
  self.spec_infoTrigger.infoTrigger = v3
  if self.spec_infoTrigger.infoTrigger ~= nil then
    v3 = CollisionFlag.getHasFlagSet(self.spec_infoTrigger.infoTrigger, CollisionFlag.TRIGGER_PLAYER)
    if not v3 then
      local v6 = CollisionFlag.getBit(CollisionFlag.TRIGGER_PLAYER)
      Logging.xmlWarning(...)
    end
  end
  if Platform.playerInfo.showPlaceableInfo then
    v3 = v3:createBox(KeyValueInfoHUDBox)
    v2.hudBox = v3
  end
end
function PlaceableInfoTrigger:onDelete()
  if self.spec_infoTrigger.infoTrigger ~= nil then
    removeTrigger(self.spec_infoTrigger.infoTrigger)
    self.spec_infoTrigger.infoTrigger = nil
  end
  v1.showInfo = false
  v2:removeDrawable(self)
  if v1.hudBox ~= nil then
    v2:destroyBox(v1.hudBox)
  end
end
function PlaceableInfoTrigger:onFinalizePlacement()
  if self.spec_infoTrigger.infoTrigger ~= nil then
    addTrigger(self.spec_infoTrigger.infoTrigger, "onInfoTriggerCallback", self)
  end
end
function PlaceableInfoTrigger:onDraw()
  if self.spec_infoTrigger.showInfo then
    if not self.spec_infoTrigger.showAllPlayers then
      local v2 = self:getOwnerFarmId()
      local v3 = v3:getFarmId()
      -- if v2 ~= v3 then goto L68 end
    end
    self:updateInfo(v1.info)
    if 0 < #v1.info and v1.hudBox ~= nil then
      v1.hudBox:clear()
      local v5 = self:getName()
      v1.hudBox:setTitle(...)
      -- TODO: structure LOP_FORNPREP (pc 47, target 65)
      v1.hudBox:addLine(v1.info[1].title, v1.info[1].text, v1.info[1].accentuate)
      v1.info[1] = nil
      -- TODO: structure LOP_FORNLOOP (pc 64, target 48)
      v1.hudBox:showNextFrame()
    end
  end
end
function PlaceableInfoTrigger:onInfoTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
    if onEnter then
      self.spec_infoTrigger.showInfo = true
      v7:addDrawable(self)
      SpecializationUtil.raiseEvent(self, "onInfoTriggerEnter", otherId)
      return
    end
    v6.showInfo = false
    v7:removeDrawable(self)
    SpecializationUtil.raiseEvent(self, "onInfoTriggerLeave", otherId)
  end
end
function PlaceableInfoTrigger.updateInfo(v0, v1)
end
