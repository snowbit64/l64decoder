-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/ReceivingHopperSetCreateBoxesEvent.lua")
ReceivingHopper = {}
function ReceivingHopper.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(FillUnit, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(Dischargeable, v0)
  end
  return v1
end
function ReceivingHopper.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("ReceivingHopper")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.receivingHopper#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.receivingHopper.boxes#spawnPlaceNode", "Spawn place node")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.receivingHopper.boxes.box(?)#fillType", "Fill type name")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.receivingHopper.boxes.box(?)#filename", "Box filename")
  Vehicle.xmlSchema:setXMLSpecializationType()
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?).receivingHopper#createBoxes", "Create boxes")
end
function ReceivingHopper.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setCreateBoxes", ReceivingHopper.setCreateBoxes)
  SpecializationUtil.registerFunction(vehicleType, "getCanSpawnNextBox", ReceivingHopper.getCanSpawnNextBox)
  SpecializationUtil.registerFunction(vehicleType, "collisionTestCallback", ReceivingHopper.collisionTestCallback)
  SpecializationUtil.registerFunction(vehicleType, "createBox", ReceivingHopper.createBox)
  SpecializationUtil.registerFunction(vehicleType, "onCreateBoxFinished", ReceivingHopper.onCreateBoxFinished)
end
function ReceivingHopper.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "handleDischargeRaycast", ReceivingHopper.handleDischargeRaycast)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getCanBeSelected", ReceivingHopper.getCanBeSelected)
end
function ReceivingHopper.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ReceivingHopper)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", ReceivingHopper)
  SpecializationUtil.registerEventListener(vehicleType, "onRegisterActionEvents", ReceivingHopper)
  SpecializationUtil.registerEventListener(vehicleType, "onFillUnitFillLevelChanged", ReceivingHopper)
end
function ReceivingHopper:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper#unloadingDelay", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper#unloadInfoIndex", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper#dischargeInfoIndex", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper.tipTrigger#index", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper.boxTrigger#index", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper.fillScrollerNodes.fillScrollerNode", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper.fillEffect", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper.fillEffect", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper.boxTrigger#litersPerMinute", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper.raycastNode#index", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper.raycastNode#raycastLength", "Dischargeable functionalities")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper.boxTrigger#boxSpawnPlaceIndex", "vehicle.receivingHopper.boxes#spawnPlaceNode")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.receivingHopper.boxTrigger.box(0)", "vehicle.receivingHopper.boxes.box(0)")
  local v3 = v3:getValue("vehicle.receivingHopper#fillUnitIndex", 1)
  self.spec_receivingHopper.fillUnitIndex = v3
  v3 = v3:getValue("vehicle.receivingHopper.boxes#spawnPlaceNode", nil, self.components, self.i3dMappings)
  self.spec_receivingHopper.spawnPlace = v3
  self.spec_receivingHopper.boxes = {}
  while true do
    v4 = string.format("vehicle.receivingHopper.boxes.box(%d)", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v5 = v5:getValue(v4 .. "#fillType")
    v6 = v6:getValue(v4 .. "#filename")
    v7 = v7:getFillTypeIndexByName(v5)
    if v7 ~= nil then
      v2.boxes[v7] = v6
    else
      Logging.xmlWarning(self.xmlFile, "Invalid fillType '%s'", v5)
    end
  end
  v2.createBoxes = false
  v2.lastBox = nil
  v2.creatingBox = false
  if savegame ~= nil then
    v4 = v4:getValue(savegame.key .. ".receivingHopper#createBoxes", v2.createBoxes)
    v2.createBoxes = v4
  end
  if not self.isServer then
    SpecializationUtil.removeEventListener(self, "onUpdateTick", ReceivingHopper)
  end
end
function ReceivingHopper:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#createBoxes", self.spec_receivingHopper.createBoxes)
end
function ReceivingHopper:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_receivingHopper.createBoxes then
    local v6 = self:getDischargeState()
    if v6 == Dischargeable.DISCHARGE_STATE_OFF then
      v6 = self:getCanSpawnNextBox()
      if v6 then
        self:createBox()
      end
    end
  end
end
function ReceivingHopper:setCreateBoxes(state, noEventSend)
  if state ~= self.spec_receivingHopper.createBoxes then
    ReceivingHopperSetCreateBoxesEvent.sendEvent(self, state, noEventSend)
    self.spec_receivingHopper.createBoxes = state
    ReceivingHopper.updateActionEvents(self)
    self.spec_receivingHopper.lastBox = nil
  end
end
function ReceivingHopper:getCanSpawnNextBox()
  if self.spec_receivingHopper.creatingBox then
    return false
  end
  local v2 = self:getFillUnitFillType(v1.fillUnitIndex)
  if v1.boxes[v2] ~= nil then
    if v1.lastBox ~= nil then
      local v3 = v3:getFillUnitFreeCapacity(1)
      if 0 < v3 then
        return false
      end
    end
    v3 = Utils.getFilename(v1.boxes[v2], self.baseDirectory)
    local v4 = StoreItemUtil.getSizeValues(v3, "vehicle", 0)
    local v5, v6, v7 = getWorldTranslation(v1.spawnPlace)
    local v8, v9, v10 = getWorldRotation(v1.spawnPlace)
    v1.foundObjectAtSpawnPlace = false
    overlapBox(v5, v6, v7, v8, v9, v10, v4.width * 0.5, 2, v4.length * 0.5, "collisionTestCallback", self, 5468288)
    return not v1.foundObjectAtSpawnPlace
  end
  return false
end
function ReceivingHopper:collisionTestCallback(transformId)
  if g_currentMission.nodeToObject[transformId] == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L20
  end
  if g_currentMission.nodeToObject[transformId] ~= self then
    self.spec_receivingHopper.foundObjectAtSpawnPlace = true
  end
end
function ReceivingHopper:createBox()
  if self.isServer and self.spec_receivingHopper.createBoxes then
    local v2 = self:getFillUnitFillType(self.spec_receivingHopper.fillUnitIndex)
    if self.spec_receivingHopper.boxes[v2] ~= nil then
      local v3, v4, v5 = getWorldTranslation(self.spec_receivingHopper.spawnPlace)
      local v6, v7, v8 = localDirectionToWorld(self.spec_receivingHopper.spawnPlace, 0, 0, 1)
      local v9 = MathUtil.getYRotationFromDirection(v6, v8)
      local v10 = Utils.getFilename(self.spec_receivingHopper.boxes[v2], self.baseDirectory)
      self.spec_receivingHopper.creatingBox = true
      local v18 = self:getOwnerFarmId()
      VehicleLoadingUtil.loadVehicle(v10, {x = v3, z = v5, yRot = v9}, true, 0, Vehicle.PROPERTY_STATE_OWNED, v18, nil, nil, self.onCreateBoxFinished, self)
    end
  end
end
function ReceivingHopper:onCreateBoxFinished(vehicle, vehicleLoadState, arguments)
  self.spec_receivingHopper.creatingBox = false
  if vehicleLoadState == VehicleLoadingUtil.VEHICLE_LOAD_OK then
    self.spec_receivingHopper.lastBox = vehicle
  end
end
function ReceivingHopper:handleDischargeRaycast(superFunc, dischargeNode, hitObject, hitShape, hitDistance, hitFillUnitIndex, hitTerrain)
  if hitObject ~= nil then
    local fillType = self:getDischargeFillType(dischargeNode)
    local v10 = hitObject:getFillUnitAllowsFillType(hitFillUnitIndex, fillType)
    if v10 then
      local v11 = hitObject:getFillUnitFreeCapacity(hitFillUnitIndex)
      if 0 < v11 then
        self:setDischargeState(Dischargeable.DISCHARGE_STATE_OBJECT, true)
        -- goto L30  (LOP_JUMP +3)
      end
    end
  else
  end
  if v8 then
    fillType = self:getDischargeState()
    if fillType == Dischargeable.DISCHARGE_STATE_OBJECT then
      self:setDischargeState(Dischargeable.DISCHARGE_STATE_OFF, true)
    end
  end
end
function ReceivingHopper.getCanBeSelected(v0, v1)
  return true
end
function ReceivingHopper:onRegisterActionEvents(isActiveForInput, isActiveForInputIgnoreSelection)
  if self.isClient then
    self:clearActionEventsTable(self.spec_receivingHopper.actionEvents)
    if isActiveForInputIgnoreSelection then
      local v4, v5 = self:addActionEvent(self.spec_receivingHopper.actionEvents, InputAction.IMPLEMENT_EXTRA, self, ReceivingHopper.actionEventToggleBoxCreation, false, true, false, true, nil)
      v6:setActionEventTextPriority(v5, GS_PRIO_NORMAL)
      ReceivingHopper.updateActionEvents(self)
    end
  end
end
function ReceivingHopper:onFillUnitFillLevelChanged(fillUnitIndex, fillLevelDelta, fillType, toolType, fillPositionData, appliedDelta)
  local v7 = self:getFillUnitFillLevel(fillUnitIndex)
  if 0 < v7 then
    self:raiseActive()
  end
end
function ReceivingHopper:actionEventToggleBoxCreation(actionName, inputValue, callbackState, isAnalog)
  self:setCreateBoxes(not self.spec_receivingHopper.createBoxes)
end
function ReceivingHopper:updateActionEvents()
  if self.spec_receivingHopper.actionEvents[InputAction.IMPLEMENT_EXTRA] ~= nil then
    if self.spec_receivingHopper.createBoxes then
      local v6 = v6:getText("action_disablePalletSpawning")
      v3:setActionEventText(...)
      return
    end
    v6 = v6:getText("action_enablePalletSpawning")
    v3:setActionEventText(...)
  end
end
