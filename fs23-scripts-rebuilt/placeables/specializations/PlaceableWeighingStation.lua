-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableWeighingStation = {}
function PlaceableWeighingStation.prerequisitesPresent(v0)
  return true
end
function PlaceableWeighingStation.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "onWeighingTriggerCallback", PlaceableWeighingStation.onWeighingTriggerCallback)
  SpecializationUtil.registerFunction(placeableType, "updateWeightDisplay", PlaceableWeighingStation.updateWeightDisplay)
  SpecializationUtil.registerFunction(placeableType, "setWeightDisplay", PlaceableWeighingStation.setWeightDisplay)
end
function PlaceableWeighingStation.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableWeighingStation)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableWeighingStation)
end
function PlaceableWeighingStation:registerXMLPaths(v1)
  self:setXMLSpecializationType("WeighingStation")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".weighingStation#triggerNode", "Vehicle trigger")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".weighingStation.display(?)#node", "Display start node")
  self:register(XMLValueType.STRING, v1 .. ".weighingStation.display(?)#font", "Display font name")
  self:register(XMLValueType.STRING, v1 .. ".weighingStation.display(?)#alignment", "Display text alignment")
  self:register(XMLValueType.FLOAT, v1 .. ".weighingStation.display(?)#size", "Display text size")
  self:register(XMLValueType.FLOAT, v1 .. ".weighingStation.display(?)#scaleX", "Display text x scale")
  self:register(XMLValueType.FLOAT, v1 .. ".weighingStation.display(?)#scaleY", "Display text y scale")
  self:register(XMLValueType.STRING, v1 .. ".weighingStation.display(?)#mask", "Display text mask")
  self:register(XMLValueType.FLOAT, v1 .. ".weighingStation.display(?)#emissiveScale", "Display emissive scale")
  self:register(XMLValueType.COLOR, v1 .. ".weighingStation.display(?)#color", "Display text color")
  self:register(XMLValueType.COLOR, v1 .. ".weighingStation.display(?)#hiddenColor", "Display text hidden color")
  self:setXMLSpecializationType()
end
function PlaceableWeighingStation:onLoad(savegame)
  local v3 = v3:getValue("placeable.weighingStation" .. "#triggerNode", nil, self.components, self.i3dMappings)
  self.spec_weighingStation.trigger = v3
  if self.spec_weighingStation.trigger == nil then
    Logging.xmlError(self.xmlFile, "Missing vehicle triggerNode for weighing station")
    return
  end
  addTrigger(v2.trigger, "onWeighingTriggerCallback", self)
  v2.triggerVehicleNodes = {}
  v2.vehicles = {}
  v2.displays = {}
  v3:iterate("placeable.weighingStation" .. ".display", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    if v2 ~= nil then
      local v3 = v3:getValue(savegame .. "#font", "DIGIT")
      v3 = v3:upper()
      local v4 = v4:getFontMaterial(v3, u0.customEnvironment)
      if v4 ~= nil then
        local v6 = v6:getValue(savegame .. "#alignment", "RIGHT")
        local v11 = v6:upper()
        if not RenderText["ALIGN_" .. v11] then
        end
        local v8 = v8:getValue(savegame .. "#size", 0.03)
        local v9 = v9:getValue(savegame .. "#scaleX", 1)
        local v10 = v10:getValue(savegame .. "#scaleY", 1)
        v11 = v11:getValue(savegame .. "#mask", "00.0")
        local v12 = v12:getValue(savegame .. "#emissiveScale", 0.2)
        local v13 = v13:getValue(savegame .. "#color", {0.9, 0.9, 0.9, 1}, true)
        local v14 = v14:getValue(savegame .. "#hiddenColor", nil, true)
        v5.displayNode = v2
        local v15, v16 = string.maskToFormat(v11)
        v5.formatStr = v15
        v5.formatPrecision = v16
        v5.fontMaterial = v4
        local v18 = v11:len()
        v15 = v4:createCharacterLine(v5.displayNode, v18, v8, v13, v14, v12, v9, v10, v7)
        v5.characterLine = v15
        table.insert(u1.displays, v5)
      end
    end
  end)
  self:setWeightDisplay(0)
end
function PlaceableWeighingStation:onDelete()
  if self.spec_weighingStation.trigger ~= nil then
    removeTrigger(self.spec_weighingStation.trigger)
    self.spec_weighingStation.trigger = nil
  end
end
function PlaceableWeighingStation:updateWeightDisplay()
  for v5, v6 in pairs(self.spec_weighingStation.triggerVehicleNodes) do
    local v7 = entityExists(v5)
    if v7 then
      v7 = v7:getNodeObject(v5)
      if not (v7 ~= nil) then
        continue
      end
      if not (v7.getTotalMass ~= nil) then
        continue
      end
      v1.vehicles[v7] = true
    else
      v1.triggerVehicleNodes[v5] = nil
    end
  end
  for v6 in pairs(v1.vehicles) do
    local v8 = v6:getTotalMass(true)
  end
  table.clear(v1.vehicles)
  self:setWeightDisplay(v2 * 1000)
end
function PlaceableWeighingStation:setWeightDisplay(mass)
  for v6, v7 in ipairs(self.spec_weighingStation.displays) do
    local v8, v9 = math.modf(mass)
    local v14 = math.floor(v9 * 10 ^ v7.formatPrecision)
    local v13 = math.abs(...)
    local v10 = string.format(...)
    v11:updateCharacterLine(v7.characterLine, v10)
  end
end
function PlaceableWeighingStation:onWeighingTriggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if not onEnter then
    -- if not v4 then goto L17 end
  end
  if onEnter then
    self.spec_weighingStation.triggerVehicleNodes[otherId] = true
  else
    self.spec_weighingStation.triggerVehicleNodes[otherId] = nil
  end
  self:updateWeightDisplay()
end
