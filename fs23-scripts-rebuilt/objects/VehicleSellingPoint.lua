-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleSellingPoint = {}
local VehicleSellingPoint_mt = Class(VehicleSellingPoint)
function VehicleSellingPoint:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#playerTriggerNode", "Player trigger node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#iconNode", "Icon node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#sellTriggerNode", "Sell trigger node")
  self:register(XMLValueType.BOOL, v1 .. "#ownWorkshop", "Owned by player", false)
  self:register(XMLValueType.BOOL, v1 .. "#mobileWorkshop", "Workshop is on vehicle", false)
end
function VehicleSellingPoint.new()
  local v0 = setmetatable({}, u0)
  v0.vehicleShapesInRange = {}
  v0.activateText = ""
  v0.isEnabled = true
  return v0
end
function VehicleSellingPoint:load(components, xmlFile, key, i3dMappings)
  local v5 = xmlFile:getValue(key .. "#playerTriggerNode", nil, components, i3dMappings)
  self.playerTrigger = v5
  v5 = xmlFile:getValue(key .. "#iconNode", nil, components, i3dMappings)
  self.sellIcon = v5
  v5 = xmlFile:getValue(key .. "#sellTriggerNode", nil, components, i3dMappings)
  self.sellTriggerNode = v5
  v5 = xmlFile:getValue(key .. "#ownWorkshop", false)
  self.ownWorkshop = v5
  v5 = xmlFile:getValue(key .. "#mobileWorkshop", false)
  self.mobileWorkshop = v5
  v5 = CollisionFlag.getHasFlagSet(self.playerTrigger, CollisionFlag.TRIGGER_PLAYER)
  if not v5 then
    local v8 = CollisionFlag.getBit(CollisionFlag.TRIGGER_PLAYER)
    local v9 = I3DUtil.getNodePath(self.playerTrigger)
    Logging.xmlWarning(...)
  end
  addTrigger(self.playerTrigger, "triggerCallback", self)
  v5 = CollisionFlag.getHasFlagSet(self.sellTriggerNode, CollisionFlag.TRIGGER_VEHICLE)
  if not v5 then
    v8 = CollisionFlag.getBit(CollisionFlag.TRIGGER_VEHICLE)
    v9 = I3DUtil.getNodePath(self.sellTriggerNode)
    Logging.xmlWarning(...)
  end
  addTrigger(self.sellTriggerNode, "sellAreaTriggerCallback", self)
  v5 = VehicleSellingPointActivatable.new(self, self.ownWorkshop)
  self.activatable = v5
  v5:subscribe(MessageType.PLAYER_FARM_CHANGED, self.playerFarmChanged, self)
  v5:subscribe(MessageType.PLAYER_CREATED, self.playerFarmChanged, self)
  self:updateIconVisibility()
end
function VehicleSellingPoint:delete()
  v1:unsubscribeAll(self)
  if self.playerTrigger ~= nil then
    removeTrigger(self.playerTrigger)
    self.playerTrigger = nil
  end
  if self.sellTriggerNode ~= nil then
    removeTrigger(self.sellTriggerNode)
    self.sellTriggerNode = nil
  end
  v1:removeActivatable(self.activatable)
  self.sellIcon = nil
end
function VehicleSellingPoint:openMenu()
  local vehicles = self:determineCurrentVehicles()
  v2:setSellingPoint(self, not self.ownWorkshop, self.ownWorkshop, self.mobileWorkshop)
  v2:setVehicles(vehicles)
  v2:showGui("WorkshopScreen")
end
function VehicleSellingPoint:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if self.isEnabled then
    local v6 = v6:isa(FSCareerMissionInfo)
    if v6 then
      if not onEnter then
        -- if not v4 then goto L40 end
      end
      if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
        if onEnter then
          v6:addActivatable(self.activatable)
          return
        end
        v6:removeActivatable(self.activatable)
        self:determineCurrentVehicles()
      end
    end
  end
end
function VehicleSellingPoint:sellAreaTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay, otherShapeId)
  if otherShapeId ~= nil then
    if not onEnter then
      -- if not v4 then goto L24 end
    end
    if onEnter then
      self.vehicleShapesInRange[otherShapeId] = true
    elseif onLeave then
      self.vehicleShapesInRange[otherShapeId] = nil
    end
    local v10 = self:determineCurrentVehicles()
    v7:updateVehicles(...)
  end
end
function VehicleSellingPoint:determineCurrentVehicles()
  local otherId = otherId:getFarmId()
  if otherId ~= FarmManager.SPECTATOR_FARM_ID then
    for otherShapeId, v7 in pairs(self.vehicleShapesInRange) do
      if v7 ~= nil then
        local v8 = entityExists(otherShapeId)
        -- if not v8 then goto L56 end
        if not (g_currentMission.nodeToObject[otherShapeId] ~= nil) then
          continue
        end
        local v9 = v9:getChildVehicles()
        for v13, v14 in ipairs(v9) do
          local v15 = v14:getShowInVehiclesOverview()
          if not v15 then
            continue
          end
          v15 = v14:getOwnerFarmId()
          if not (v15 == otherId) then
            continue
          end
          table.addElement(triggerId, v14)
        end
      else
        self.vehicleShapesInRange[otherShapeId] = nil
      end
    end
    table.sort(triggerId, function(self, triggerId)
      if self.rootNode >= triggerId.rootNode then
      end
      return true
    end)
  end
  return triggerId
end
function VehicleSellingPoint:updateIconVisibility()
  if self.sellIcon ~= nil then
    if self.isEnabled then
      local triggerId = triggerId:isa(FSCareerMissionInfo)
    end
    local otherId = otherId:getFarmId()
    if otherId ~= FarmManager.SPECTATOR_FARM_ID then
      local onLeave = self:getOwnerFarmId()
      if onLeave ~= AccessHandler.EVERYONE then
        onLeave = self:getOwnerFarmId()
        if otherId ~= onLeave then
        end
      end
    end
    setVisibility(self.sellIcon, triggerId and onEnter)
  end
end
function VehicleSellingPoint:playerFarmChanged(player)
  if player == g_currentMission.player then
    self:updateIconVisibility()
  end
end
function VehicleSellingPoint:setOwnerFarmId(ownerFarmId)
  self.ownerFarmId = ownerFarmId
  self:updateIconVisibility()
end
function VehicleSellingPoint:getOwnerFarmId()
  return self.ownerFarmId
end
VehicleSellingPointActivatable = {}
local triggerId = Class(VehicleSellingPointActivatable)
function VehicleSellingPointActivatable.new(sellingPoint, ownWorkshop)
  local otherId = setmetatable({}, u0)
  otherId.sellingPoint = sellingPoint
  if ownWorkshop then
    local onEnter = onEnter:getText("action_openWorkshopOptions")
    otherId.activateText = onEnter
    return otherId
  end
  onEnter = onEnter:getText("action_openDealerOptions")
  otherId.activateText = onEnter
  return otherId
end
function VehicleSellingPointActivatable:getIsActivatable()
  if not self.sellingPoint.isEnabled then
    return false
  end
  if not g_currentMission.controlPlayer then
    return false
  end
  local triggerId = triggerId:getFarmId()
  if triggerId ~= FarmManager.SPECTATOR_FARM_ID then
  end
  if true then
    return false
  end
  local onLeave = onLeave:getOwnerFarmId()
  if onLeave ~= AccessHandler.EVERYONE then
    onLeave = onLeave:getOwnerFarmId()
    if triggerId ~= onLeave then
    end
  end
  return onEnter
end
function VehicleSellingPointActivatable:run()
  local triggerId = triggerId:getIsRunning()
  if triggerId then
    local onLeave = onLeave:getText("tour_text_feature_deactivated")
    triggerId:showInfoDialog({text = onLeave})
    return
  end
  triggerId:openMenu()
end
function VehicleSellingPointActivatable:getDistance(x, y, z)
  local onLeave, onStay, otherShapeId = getWorldTranslation(self.sellingPoint.playerTrigger)
  return MathUtil.getPointPointDistance(onLeave, otherShapeId, x, z)
end
