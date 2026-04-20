-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHusbandryWater = {}
function PlaceableHusbandryWater.prerequisitesPresent(v0)
  return true
end
function PlaceableHusbandryWater.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "updateWaterPlane", PlaceableHusbandryWater.updateWaterPlane)
end
function PlaceableHusbandryWater.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateFeeding", PlaceableHusbandryWater.updateFeeding)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getConditionInfos", PlaceableHusbandryWater.getConditionInfos)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableHusbandryWater.updateInfo)
end
function PlaceableHusbandryWater.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHusbandryWater)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHusbandryWater)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableHusbandryWater)
  SpecializationUtil.registerEventListener(placeableType, "onPostFinalizePlacement", PlaceableHusbandryWater)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryAnimalsUpdate", PlaceableHusbandryWater)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryAnimalsCreated", PlaceableHusbandryWater)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryFillLevelChanged", PlaceableHusbandryWater)
end
function PlaceableHusbandryWater:registerXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.BOOL, v1 .. ".husbandry.water" .. "#automaticWaterSupply", "If husbandry has a automatic water supply", false)
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.water" .. ".waterPlaces.waterPlace(?)#node", "Water place")
  FillPlane.registerXMLPaths(self, v1 .. ".husbandry.water" .. ".waterPlane")
  self:setXMLSpecializationType()
end
function PlaceableHusbandryWater:onLoad(savegame)
  self.spec_husbandryWater.husbandry = nil
  self.spec_husbandryWater.litersPerHour = 0
  self.spec_husbandryWater.automaticWaterSupply = false
  self.spec_husbandryWater.fillType = FillType.WATER
  self.spec_husbandryWater.waterPlaces = {}
  local v4 = v4:getText("fillType_water")
  self.spec_husbandryWater.info = {title = v4, text = ""}
  local v3 = v3:getValue("placeable.husbandry.water#automaticWaterSupply", self.spec_husbandryWater.automaticWaterSupply)
  self.spec_husbandryWater.automaticWaterSupply = v3
  v3 = FillPlane.new()
  self.spec_husbandryWater.waterPlane = v3
  v3 = v3:load(self.components, self.xmlFile, "placeable.husbandry.water.waterPlane", self.i3dMappings)
  if v3 then
    if self.spec_husbandryWater.automaticWaterSupply then
    else
    end
    v3:setState(v5)
  else
    v3:delete()
    self.spec_husbandryWater.waterPlane = nil
  end
  v3:iterate("placeable.husbandry.water.waterPlaces.waterPlace", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    table.insert(u1.waterPlaces, {node = v2, place = nil})
  end)
end
function PlaceableHusbandryWater:onPostFinalizePlacement()
  self:updateWaterPlane()
end
function PlaceableHusbandryWater:onDelete()
  if self.spec_husbandryWater.waterPlane ~= nil then
    v2:delete()
    self.spec_husbandryWater.waterPlane = nil
  end
end
function PlaceableHusbandryWater:onFinalizePlacement()
  if not self.spec_husbandryWater.automaticWaterSupply then
    local v2 = self:getHusbandryIsFillTypeSupported(self.spec_husbandryWater.fillType)
    if not v2 then
      Logging.warning("Missing filltype 'water' in husbandry storage! Changing to automatic water supply")
      self.spec_husbandryWater.automaticWaterSupply = true
    end
  end
end
function PlaceableHusbandryWater:updateWaterPlane()
  local v2 = self:getHusbandryFillLevel(self.spec_husbandryWater.fillType, nil)
  if self.spec_husbandryWater.waterPlane ~= nil then
    local v3 = self:getHusbandryCapacity(self.spec_husbandryWater.fillType, nil)
    if 0 < v3 then
    end
    v5:setState(v4)
  end
  if v1.husbandry ~= nil then
    for v6, v7 in pairs(v1.waterPlaces) do
      if not (v7.place ~= nil) then
        continue
      end
      updateFeedingPlace(v1.husbandry, v7.place, v2)
    end
  end
end
function PlaceableHusbandryWater:updateFeeding(superFunc)
  local factor = superFunc(self)
  if self.isServer and 0 < self.spec_husbandryWater.litersPerHour then
    if self.spec_husbandryWater.automaticWaterSupply then
      local v5 = v5:getFillTypeByIndex(self.spec_husbandryWater.fillType)
      local v10 = self:getOwnerFarmId()
      v7:addMoney(-(self.spec_husbandryWater.litersPerHour * g_currentMission.environment.timeAdjustment * v5.pricePerLiter), v10, MoneyType.PURCHASE_WATER, false, false)
      return factor
    end
    v5 = self:removeHusbandryFillLevel(nil, v4, v3.fillType)
    local v7 = MathUtil.clamp((v4 - v5) / v4, 0, 1)
  end
  return factor
end
function PlaceableHusbandryWater:onHusbandryAnimalsCreated(husbandry)
  if husbandry ~= nil then
    self.spec_husbandryWater.husbandry = husbandry
    for v6, v7 in ipairs(self.spec_husbandryWater.waterPlaces) do
      local v8 = addFeedingPlace(husbandry, v7.node, 0, AnimalHusbandryFeedingType.WATER)
      v7.place = v8
    end
  end
end
function PlaceableHusbandryWater:onHusbandryAnimalsUpdate(clusters)
  self.spec_husbandryWater.litersPerHour = 0
  for v6, v7 in ipairs(clusters) do
    local v8 = v8:getSubTypeByIndex(v7.subTypeIndex)
    if not (v8 ~= nil) then
      continue
    end
    if not (v8.input.water ~= nil) then
      continue
    end
    local v10 = v7:getAge()
    local v11 = v8.input.water:get(v10)
    local v13 = v7:getNumAnimals()
    v2.litersPerHour = v2.litersPerHour + v11 * v13 / 24
  end
end
function PlaceableHusbandryWater:onHusbandryFillLevelChanged(fillTypeIndex, delta)
  if fillTypeIndex == self.spec_husbandryWater.fillType then
    self:updateWaterPlane()
  end
end
function PlaceableHusbandryWater:getConditionInfos(superFunc)
  local infos = superFunc(self)
  if not self.spec_husbandryWater.automaticWaterSupply then
    local v5 = v5:getFillTypeByIndex(self.spec_husbandryWater.fillType)
    local v6 = self:getHusbandryFillLevel(self.spec_husbandryWater.fillType)
    v6 = self:getHusbandryCapacity(self.spec_husbandryWater.fillType)
    if 0 < v6 then
    end
    local v8 = MathUtil.clamp(v7, 0, 1)
    v4.ratio = v8
    v4.invertedBar = false
    table.insert(infos, v4)
  end
  return infos
end
function PlaceableHusbandryWater:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  if not self.spec_husbandryWater.automaticWaterSupply then
    local v4 = self:getHusbandryFillLevel(self.spec_husbandryWater.fillType)
    local v6 = string.format("%d l", v4)
    self.spec_husbandryWater.info.text = v6
    table.insert(infoTable, self.spec_husbandryWater.info)
  end
end
