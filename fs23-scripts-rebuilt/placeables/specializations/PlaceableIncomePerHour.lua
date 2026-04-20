-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableIncomePerHour = {}
function PlaceableIncomePerHour.prerequisitesPresent(v0)
  return true
end
function PlaceableIncomePerHour.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "getIncomePerHourFactor", PlaceableIncomePerHour.getIncomePerHourFactor)
end
function PlaceableIncomePerHour.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getNeedHourChanged", PlaceableIncomePerHour.getNeedHourChanged)
end
function PlaceableIncomePerHour.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableIncomePerHour)
  SpecializationUtil.registerEventListener(placeableType, "onHourChanged", PlaceableIncomePerHour)
end
function PlaceableIncomePerHour:registerXMLPaths(v1)
  self:setXMLSpecializationType("IncomePerHour")
  self:register(XMLValueType.FLOAT, v1 .. ".incomePerHour", "Income per hour")
  self:setXMLSpecializationType()
end
function PlaceableIncomePerHour.initSpecialization()
  v0:addSpecType("incomePerHour", "shopListAttributeIconIncomePerHour", PlaceableIncomePerHour.loadSpecValueIncomePerHour, PlaceableIncomePerHour.getSpecValueIncomePerHour, "placeable")
end
function PlaceableIncomePerHour:onLoad(savegame)
  local v4 = self.xmlFile:getValue("placeable.incomePerHour", 0)
  self.spec_incomePerHour.incomePerHour = v4
  self.spec_incomePerHour.incomePerHourFactor = 1
end
function PlaceableIncomePerHour.getNeedHourChanged(v0, v1)
  return true
end
function PlaceableIncomePerHour:onHourChanged()
  if self.isServer then
    local ownerFarmId = self:getOwnerFarmId()
    if ownerFarmId ~= FarmlandManager.NO_OWNER_FARM_ID then
      local v6 = self:getIncomePerHourFactor()
      if self.spec_incomePerHour.incomePerHour * v6 * g_currentMission.environment.timeAdjustment ~= 0 then
        v4:addMoney(self.spec_incomePerHour.incomePerHour * v6 * g_currentMission.environment.timeAdjustment, ownerFarmId, MoneyType.PROPERTY_INCOME, true)
      end
    end
  end
end
function PlaceableIncomePerHour.getIncomePerHourFactor(v0)
  return 1
end
function PlaceableIncomePerHour:loadSpecValueIncomePerHour(v1, v2)
  local v3 = self:hasProperty("placeable.incomePerHour")
  if not v3 then
    return nil
  end
  v3 = self:getValue("placeable.incomePerHour", 0)
  return v3
end
function PlaceableIncomePerHour:getSpecValueIncomePerHour(v1)
  if self.specs.incomePerHour == nil then
    return nil
  end
  local v5 = v5:formatMoney(self.specs.incomePerHour * 24)
  local v6 = v6:getText("ui_month")
  return string.format(...)
end
