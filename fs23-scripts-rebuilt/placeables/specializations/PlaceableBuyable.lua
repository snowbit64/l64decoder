-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableBuyable = {}
function PlaceableBuyable.prerequisitesPresent(v0)
  return true
end
function PlaceableBuyable.registerFunctions(v0)
  SpecializationUtil.registerFunction(v0, "onBuyingTriggerCallback", PlaceableBuyable.onBuyingTriggerCallback)
  SpecializationUtil.registerFunction(v0, "setIsBuyingTriggerActive", PlaceableBuyable.setIsBuyingTriggerActive)
  SpecializationUtil.registerFunction(v0, "buyRequest", PlaceableBuyable.buyRequest)
  SpecializationUtil.registerFunction(v0, "getHasBuyingTrigger", PlaceableBuyable.getHasBuyingTrigger)
end
function PlaceableBuyable.registerOverwrittenFunctions(v0)
  SpecializationUtil.registerOverwrittenFunction(v0, "setOwnerFarmId", PlaceableBuyable.setOwnerFarmId)
  SpecializationUtil.registerOverwrittenFunction(v0, "getCanTriggerAnimatedObject", PlaceableBuyable.getCanTriggerAnimatedObject)
end
function PlaceableBuyable.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", PlaceableBuyable)
  SpecializationUtil.registerEventListener(v0, "onDelete", PlaceableBuyable)
end
function PlaceableBuyable:registerXMLPaths(v1)
  self:setXMLSpecializationType("Buyable")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".buyable.trigger#node", "Buying trigger", nil, false)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".buyable.marker#node", "Marker node", nil, false)
  self:setXMLSpecializationType()
end
function PlaceableBuyable:onLoad(v1)
  local v3 = PlaceableBuyActivatable.new(self)
  self.spec_buyable.activatable = v3
  v3 = v3:getValue("placeable.buyable.trigger#node", nil, self.components, self.i3dMappings)
  self.spec_buyable.triggerNode = v3
  if self.spec_buyable.triggerNode ~= nil then
    addTrigger(self.spec_buyable.triggerNode, "onBuyingTriggerCallback", self)
  end
  v3 = v3:getValue("placeable.buyable.marker#node", nil, self.components, self.i3dMappings)
  v2.markerNode = v3
  v2.isTriggerActive = true
end
function PlaceableBuyable:onDelete()
  v2:removeActivatable(self.spec_buyable.activatable)
  self.spec_buyable.activatable = nil
  if self.spec_buyable.markerNode ~= nil then
    v2:removeTriggerMarker(self.spec_buyable.markerNode)
  end
  if v1.triggerNode ~= nil then
    removeTrigger(v1.triggerNode)
  end
end
function PlaceableBuyable:getHasBuyingTrigger()
  if self.spec_buyable.triggerNode == nil then
  end
  return true
end
function PlaceableBuyable:setIsBuyingTriggerActive(v1)
  self.spec_buyable.isTriggerActive = v1
  if self.spec_buyable.markerNode ~= nil then
    setVisibility(self.spec_buyable.markerNode, v1)
    if v1 then
      v3:addTriggerMarker(self.spec_buyable.markerNode)
      return
    end
    v3:removeTriggerMarker(v2.markerNode)
  end
end
function PlaceableBuyable:onBuyingTriggerCallback(v1, v2, v3, v4, v5, v6)
  if not v3 then
    -- if not v4 then goto L45 end
  end
  if g_currentMission.player and g_currentMission.player.rootNode == v2 then
    if v3 and self.spec_buyable.isTriggerActive then
      if Platform.gameplay.autoActivateTrigger then
        local v8 = v8:getIsActivatable()
        if v8 then
          v8:run()
          return
        end
      end
      v8:addActivatable(v7.activatable)
    end
    if v4 then
      v8:removeActivatable(v7.activatable)
    end
  end
end
function PlaceableBuyable:buyRequest()
  local v1 = v1:getIsRunning()
  if v1 then
    local v4 = v4:getText("tour_text_feature_deactivated")
    v1:showInfoDialog({text = v4})
    return
  end
  v1 = v1:getFarmId()
  local v2 = self:getPrice()
  if self.buysFarmland and self.farmlandId ~= nil then
    local v3 = v3:getFarmlandById(self.farmlandId)
    if v3 ~= nil then
      v4 = v4:getFarmlandOwner(self.farmlandId)
      if v4 ~= v1 then
      end
    end
  end
  local v9 = v9:getText("dialog_buyBuildingFor")
  local v10 = self:getName()
  local v11 = v11:formatMoney(v2, 0, true)
  local v8 = string.format(...)
  YesNoDialog.show(...)
end
function PlaceableBuyable:setOwnerFarmId(v1, v2, v3)
  v1(self, v2, v3)
  if v2 ~= AccessHandler.EVERYONE then
  end
  self:setIsBuyingTriggerActive(true)
end
function PlaceableBuyable:getCanTriggerAnimatedObject(v1, v2)
  local v3 = self:getOwnerFarmId()
  if self.ownerFarmId ~= nil and v3 ~= AccessHandler.EVERYONE and v3 == AccessHandler.NOBODY then
  end
  if v4 then
    local v7 = v7:getFarmId()
    local v5 = v5:canFarmAccessOtherId(v7, v3)
    -- if v5 then goto L34 end
  end
  return false
  v5 = v1(self, v2)
  return v5
end
PlaceableBuyActivatable = {}
local v0 = Class(PlaceableBuyActivatable)
function PlaceableBuyActivatable.new(v0)
  local v1 = setmetatable({}, u0)
  v1.placeable = v0
  local v2 = v2:getText("action_buyBuilding")
  v1.activateText = v2
  return v1
end
function PlaceableBuyActivatable:getIsActivatable()
  local v3 = v3:getFarmId()
  return v1:canFarmAccess(v3, self.placeable)
end
function PlaceableBuyActivatable:run()
  local v1 = v1:getOwnerFarmId()
  if v1 == AccessHandler.EVERYONE then
    v2:buyRequest()
  end
end
function PlaceableBuyActivatable:getDistance(v1, v2, v3)
  if self.placeable.spec_buyable.triggerNode ~= nil then
    local v5, v6, v7 = getWorldTranslation(self.placeable.spec_buyable.triggerNode)
    return MathUtil.vector3Length(v1 - v5, v2 - v6, v3 - v7)
  end
  return math.huge
end
