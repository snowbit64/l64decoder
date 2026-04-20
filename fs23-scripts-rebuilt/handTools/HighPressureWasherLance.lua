-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HighPressureWasherLance = {}
source("dataS/scripts/handTools/HPWLanceStateEvent.lua")
local HighPressureWasherLance_mt = Class(HighPressureWasherLance, HandTool)
InitStaticObjectClass(HighPressureWasherLance, "HighPressureWasherLance", ObjectIds.OBJECT_HIGHPRESSUREWASHERLANCE)
v1:addInitSchemaFunction(function()
  HandTool.xmlSchema:setXMLSpecializationType("HighPressureWasherLance")
  HandTool.xmlSchema:register(XMLValueType.NODE_INDEX, "handTool.highPressureWasherLance.lance#node", "Lance node")
  HandTool.xmlSchema:register(XMLValueType.NODE_INDEX, "handTool.highPressureWasherLance.lance#raycastNode", "Raycast node")
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.highPressureWasherLance.lance#washDistance", "Max. wash distance", 10)
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.highPressureWasherLance.lance#washMultiplier", "Wash multiplier", 1)
  HandTool.xmlSchema:register(XMLValueType.FLOAT, "handTool.highPressureWasherLance.lance#pricePerMinute", "Price per minute", 10)
  SoundManager.registerSampleXMLPaths(HandTool.xmlSchema, "handTool.highPressureWasherLance.sounds", "washing")
  EffectManager.registerEffectXMLPaths(HandTool.xmlSchema, "handTool.highPressureWasherLance.effects")
  HandTool.xmlSchema:setXMLSpecializationType()
end)
function HighPressureWasherLance.new(isServer, isClient, customMt)
  local v4 = v4:superClass()
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.foundVehicle = nil
  v3.doWashing = false
  v3.washDistance = 10
  v3.washMultiplier = 1
  v3.pricePerSecond = 10
  v3.isHPWLance = true
  return v3
end
function HighPressureWasherLance:postLoad(xmlFile)
  local v3 = v3:superClass()
  local v2 = v3.postLoad(self, xmlFile)
  if not v2 then
    return false
  end
  v2 = xmlFile:getValue("handTool.highPressureWasherLance.lance#node", nil, self.components, self.i3dMappings)
  self.lanceNode = v2
  v2 = xmlFile:getValue("handTool.highPressureWasherLance.lance#raycastNode", nil, self.components, self.i3dMappings)
  self.lanceRaycastNode = v2
  v2 = xmlFile:getValue("handTool.highPressureWasherLance.lance#washDistance", 10)
  self.washDistance = v2
  v2 = xmlFile:getValue("handTool.highPressureWasherLance.lance#washMultiplier", 1)
  self.washMultiplier = v2
  v3 = xmlFile:getValue("handTool.highPressureWasherLance.lance#pricePerMinute", 10)
  self.pricePerSecond = v3 / 1000
  v2 = v2:loadEffect(xmlFile, "handTool.highPressureWasherLance.effects", self.components, self, self.i3dMappings)
  self.effects = v2
  v2:setFillType(self.effects, FillType.WATER)
  v2 = v2:loadSampleFromXML(xmlFile, "handTool.highPressureWasherLance.sounds", "washing", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
  self.washingSample = v2
  return true
end
function HighPressureWasherLance:delete()
  v1:deleteEffects(self.effects)
  v1:deleteSample(self.washingSample)
  local v2 = v2:superClass()
  v2.delete(self)
end
function HighPressureWasherLance:onDeactivate()
  self:setIsWashing(false, true, true)
  local v2 = v2:superClass()
  v2.onDeactivate(self)
end
function HighPressureWasherLance:update(dt, allowInput)
  local v4 = v4:superClass()
  v4.update(self, dt)
  if allowInput then
    self:setIsWashing(self.activatePressed, false, false)
  end
  if self.isServer and self.doWashing then
    self.foundVehicle = nil
    self:cleanVehicle(self.player.cameraNode, dt)
    if self.lanceRaycastNode ~= nil then
      self:cleanVehicle(self.lanceRaycastNode, dt)
    end
    if self.foundVehicle ~= nil then
      local v3 = v3:getOwnerFarmId()
      v5:updateFarmStats(self.player.farmId, "expenses", self.pricePerSecond * dt / 1000)
      v5:addMoney(-(self.pricePerSecond * dt / 1000), v3, MoneyType.VEHICLE_RUNNING_COSTS)
    end
  end
  self.activatePressed = false
  self:raiseActive()
end
function HighPressureWasherLance:setIsWashing(doWashing, force, noEventSend)
  HPWLanceStateEvent.sendEvent(self.player, doWashing, noEventSend)
  if self.doWashing ~= doWashing then
    if doWashing then
      v4:setFillType(self.effects, FillType.WATER)
      v4:startEffects(self.effects)
      v4:playSample(self.washingSample)
    else
      if force then
        v4:resetEffects(self.effects)
      else
        v4:stopEffects(self.effects)
      end
      v4:stopSample(self.washingSample)
    end
    self.doWashing = doWashing
  end
end
function HighPressureWasherLance:cleanVehicle(node, dt)
  local v3, v4, v5 = getWorldTranslation(node)
  local v6, v7, v8 = localDirectionToWorld(node, 0, 0, -1)
  raycastAll(v3, v4, v5, v6, v7, v8, "washRaycastCallback", self.washDistance, self, 12770)
  if self.foundVehicle ~= nil and self.foundVehicle ~= self.foundVehicle then
    local v14 = v14:getWashDuration()
    v10:addDirtAmount(-self.washMultiplier * dt / v14)
  end
end
function HighPressureWasherLance:washRaycastCallback(hitActorId, x, y, z, distance, nx, ny, nz, subShapeIndex, hitShapeId)
  if hitActorId ~= hitShapeId then
    while hitShapeId ~= 0 do
      if g_currentMission.nodeToObject[v12] ~= nil then
        break
      end
      local v13 = getParent(v12)
    end
  end
  if v11 ~= nil and v11.getAllowsWashingByType ~= nil then
    local v12 = v11:getAllowsWashingByType(Washable.WASHTYPE_HIGH_PRESSURE_WASHER)
    if v12 then
      self.foundVehicle = v11
      return false
    end
  end
  return true
end
function HighPressureWasherLance:getIsActiveForInput()
  if self.player == g_currentMission.player then
    local v1 = v1:getIsGuiVisible()
    if not v1 then
      return true
    end
  end
  return false
end
function HighPressureWasherLance:isBeingUsed()
  return self.doWashing
end
