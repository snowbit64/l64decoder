-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RailroadCaller = {}
function RailroadCaller:registerXMLPaths(v1)
  self:register(XMLValueType.NODE_INDEX, v1 .. "#triggerNode", "Trigger node")
end
local RailroadCaller_mt = Class(RailroadCaller)
function RailroadCaller.new(isServer, isClient, trainSystem, nodeId, customMt)
  if not customMt then
  end
  v6(v7, v8)
  v5.trainSystem = trainSystem
  v5.nodeId = nodeId
  v5.isServer = isServer
  v5.isClient = isClient
  local v6 = RailroadCallerActivatable.new(v5)
  v5.activatable = v6
  return v5
end
function RailroadCaller:loadFromXML(xmlFile, key, components, i3dMappings)
  local v5 = xmlFile:getValue(key .. "#triggerNode", nil, components, i3dMappings)
  self.triggerNode = v5
  self.rootNode = self.triggerNode
  if self.triggerNode == nil then
    Logging.xmlWarning(xmlFile, "Missing trigger 'triggerNode' for railroadCaller '%s'!", key)
    delete(xmlFile)
    return false
  end
  addTrigger(self.triggerNode, "railroadCallerTriggerCallback", self)
  return true
end
function RailroadCaller:delete()
  if self.triggerNode ~= nil then
    v1:removeActivatable(self.activatable)
    removeTrigger(self.triggerNode)
    self.triggerNode = nil
  end
end
function RailroadCaller:setSplineTimeByPosition(t, splineLength)
  local v3 = SplineUtil.getValidSplineTime(t)
  self.splinePositionTime = v3
end
function RailroadCaller:railroadCallerTriggerCallback(triggerId, otherActorId, onEnter, onLeave, onStay, otherShapeId)
  if self.trainSystem ~= nil then
    local v7 = v7:isa(FSCareerMissionInfo)
    if v7 then
      if not onEnter then
        -- if not v4 then goto L38 end
      end
      if g_currentMission.player ~= nil and otherActorId == g_currentMission.player.rootNode then
        if onEnter then
          v7:addActivatable(self.activatable)
          return
        end
        v7:removeActivatable(self.activatable)
      end
    end
  end
end
function RailroadCaller:callRailroad()
  if g_currentMission.player.farmId ~= FarmManager.SPECTATOR_FARM_ID then
    local v1 = v1:getHasPlayerPermission(Farm.PERMISSION.BUY_VEHICLE)
    if v1 then
      -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L38
      v1:toggleRent(g_currentMission.player.farmId, self.splinePositionTime)
      return
    end
  end
  local v2 = v2:getText(ShopController.L10N_SYMBOL.BUY_VEHICLE_NO_PERMISSION)
  InfoDialog.show(...)
end
RailroadCallerActivatable = {}
local RailroadCallerActivatable_mt = Class(RailroadCallerActivatable)
function RailroadCallerActivatable:new()
  local v1 = setmetatable({}, u0)
  v1.railroadCaller = self
  v1.trainSystem = self.trainSystem
  local v2 = v2:getText("action_rentTrain")
  v1.activateTextRent = v2
  v2 = v2:getText("action_waitForRentedTrain")
  v1.activateTextWait = v2
  v2 = v2:getText("action_returnRentedTrain")
  v1.activateTextGiveBack = v2
  v1.activateText = v1.activateTextRent
  return v1
end
function RailroadCallerActivatable:getIsActivatable()
  local v1 = v1:getCanBeRented(g_currentMission.player.farmId)
  if not v1 then
    return false
  end
  return g_currentMission.controlPlayer
end
function RailroadCallerActivatable:run()
  v1:callRailroad()
end
function RailroadCallerActivatable.activate(v0)
  v1:addDrawable(v0)
end
function RailroadCallerActivatable.deactivate(v0)
  v1:removeDrawable(v0)
end
function RailroadCallerActivatable:draw()
  if self.trainSystem.spec_trainSystem.isRented then
    self.activateText = self.activateTextGiveBack
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L66
    local v2 = v2:getDistanceToRequestedPosition()
    -- if 0 >= v2 then goto L66 end
    local v3 = string.format("%.1fkm", v2 / 1000)
    if v2 < 1000 then
      local v4 = string.format("%dm", v2)
    end
    local v6 = string.format(self.activateTextWait, v3)
    v4:addExtraPrintText(...)
    return
  end
  v4 = v4:formatMoney(v1.rentPricePerHour, 0, true, true)
  v2 = string.format(...)
  self.activateText = v2
end
function RailroadCallerActivatable:getDistance(x, y, z)
  if self.railroadCaller.triggerNode ~= nil then
    local v4, v5, v6 = getWorldTranslation(self.railroadCaller.triggerNode)
    return MathUtil.vector3Length(x - v4, y - v5, z - v6)
  end
  return math.huge
end
