-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHusbandryLiquidManure = {}
function PlaceableHusbandryLiquidManure.prerequisitesPresent(v0)
  return true
end
function PlaceableHusbandryLiquidManure.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateOutput", PlaceableHusbandryLiquidManure.updateOutput)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateProduction", PlaceableHusbandryLiquidManure.updateProduction)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "updateInfo", PlaceableHusbandryLiquidManure.updateInfo)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getConditionInfos", PlaceableHusbandryLiquidManure.getConditionInfos)
end
function PlaceableHusbandryLiquidManure.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHusbandryLiquidManure)
  SpecializationUtil.registerEventListener(placeableType, "onFinalizePlacement", PlaceableHusbandryLiquidManure)
  SpecializationUtil.registerEventListener(placeableType, "onHusbandryAnimalsUpdate", PlaceableHusbandryLiquidManure)
end
function PlaceableHusbandryLiquidManure:registerXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.FLOAT, v1 .. ".husbandry.liquidManure" .. ".manure#factor", "Factor to transform straw to manure", 1)
  self:register(XMLValueType.BOOL, v1 .. ".husbandry.liquidManure" .. ".manure#active", "Enable manure production", true)
  self:setXMLSpecializationType()
end
function PlaceableHusbandryLiquidManure:onLoad(savegame)
  self.spec_husbandryLiquidManure.litersPerHour = 0
  self.spec_husbandryLiquidManure.fillType = FillType.LIQUIDMANURE
  local v4 = v4:getText("fillType_liquidManure")
  self.spec_husbandryLiquidManure.info = {title = v4, text = ""}
end
function PlaceableHusbandryLiquidManure:onFinalizePlacement()
  local v2 = self:getHusbandryIsFillTypeSupported(self.spec_husbandryLiquidManure.fillType)
  if not v2 then
    Logging.warning("Missing filltype 'liquidManure' in husbandry storage!")
  end
end
function PlaceableHusbandryLiquidManure:updateOutput(superFunc, foodFactor, productionFactor, globalProductionFactor)
  if self.isServer and 0 < self.spec_husbandryLiquidManure.litersPerHour then
    local v9 = self:getOwnerFarmId()
    self:addHusbandryFillLevelFromTool(v9, foodFactor * self.spec_husbandryLiquidManure.litersPerHour * g_currentMission.environment.timeAdjustment, self.spec_husbandryLiquidManure.fillType, nil, nil, nil)
  end
  superFunc(self, foodFactor, productionFactor, globalProductionFactor)
end
function PlaceableHusbandryLiquidManure:updateProduction(superFunc, foodFactor)
  local factor = superFunc(self, foodFactor)
  if self.isServer then
    local v5 = self:getHusbandryFreeCapacity(self.spec_husbandryLiquidManure.fillType)
    if v5 <= 0 then
    end
  end
  return factor
end
function PlaceableHusbandryLiquidManure:onHusbandryAnimalsUpdate(clusters)
  self.spec_husbandryLiquidManure.litersPerHour = 0
  for v6, v7 in ipairs(clusters) do
    local v8 = v8:getSubTypeByIndex(v7.subTypeIndex)
    if not (v8 ~= nil) then
      continue
    end
    if not (v8.output.liquidManure ~= nil) then
      continue
    end
    local v10 = v7:getAge()
    local v11 = v8.output.liquidManure:get(v10)
    local v13 = v7:getNumAnimals()
    v2.litersPerHour = v2.litersPerHour + v11 * v13 / 24
  end
end
function PlaceableHusbandryLiquidManure:getConditionInfos(superFunc)
  local infos = superFunc(self)
  local v5 = v5:getFillTypeByIndex(self.spec_husbandryLiquidManure.fillType)
  local v6 = self:getHusbandryFillLevel(self.spec_husbandryLiquidManure.fillType)
  v6 = self:getHusbandryCapacity(self.spec_husbandryLiquidManure.fillType)
  if 0 < v6 then
  end
  local v8 = MathUtil.clamp(v7, 0, 1)
  v4.ratio = v8
  v4.invertedBar = true
  table.insert(infos, v4)
  return infos
end
function PlaceableHusbandryLiquidManure:updateInfo(superFunc, infoTable)
  superFunc(self, infoTable)
  local v4 = self:getHusbandryFillLevel(self.spec_husbandryLiquidManure.fillType)
  local v6 = string.format("%d l", v4)
  self.spec_husbandryLiquidManure.info.text = v6
  table.insert(infoTable, self.spec_husbandryLiquidManure.info)
end
