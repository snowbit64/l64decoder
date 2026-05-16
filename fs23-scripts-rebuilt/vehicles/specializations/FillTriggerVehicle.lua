-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FillTriggerVehicle = {}
function FillTriggerVehicle.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(FillUnit, v0)
end
function FillTriggerVehicle.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("FillTriggerVehicle")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.fillTriggerVehicle#triggerNode", "Fill trigger node")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.fillTriggerVehicle#fillUnitIndex", "Fill unit index", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.fillTriggerVehicle#litersPerSecond", "Liter per second", 200)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function FillTriggerVehicle.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDrawFirstFillText", FillTriggerVehicle.getDrawFirstFillText)
end
function FillTriggerVehicle.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", FillTriggerVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", FillTriggerVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", FillTriggerVehicle)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", FillTriggerVehicle)
end
function FillTriggerVehicle:onLoad(savegame)
  local v3 = v3:getValue("vehicle.fillTriggerVehicle#triggerNode", nil, self.components, self.i3dMappings)
  if v3 ~= nil then
    local v4 = v4:getValue("vehicle.fillTriggerVehicle#fillUnitIndex", 1)
    self.spec_fillTriggerVehicle.fillUnitIndex = v4
    v4 = v4:getValue("vehicle.fillTriggerVehicle#litersPerSecond", 200)
    self.spec_fillTriggerVehicle.litersPerSecond = v4
    v4 = FillTrigger.new(v3, self, self.spec_fillTriggerVehicle.fillUnitIndex, self.spec_fillTriggerVehicle.litersPerSecond)
    self.spec_fillTriggerVehicle.fillTrigger = v4
    v4 = self:getPropertyState()
    if v4 ~= Vehicle.PROPERTY_STATE_SHOP_CONFIG and self.isServer then
      v4 = MoneyType.register("other", "finance_purchaseFuel")
      v5:setMoneyChangeType(v4)
    end
  end
end
function FillTriggerVehicle:onDelete()
  if self.spec_fillTriggerVehicle.fillTrigger ~= nil then
    v2:delete()
    self.spec_fillTriggerVehicle.fillTrigger = nil
  end
end
function FillTriggerVehicle:onReadStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 and self.spec_fillTriggerVehicle.fillTrigger ~= nil then
    local moneyTypeId = streamReadUInt16(streamId)
    local moneyChangeType = MoneyType.registerWithId(moneyTypeId, "other", "finance_purchaseFuel")
    v6:setMoneyChangeType(moneyChangeType)
  end
end
function FillTriggerVehicle:onWriteStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 and self.spec_fillTriggerVehicle.fillTrigger ~= nil then
    streamWriteUInt16(streamId, self.spec_fillTriggerVehicle.fillTrigger.moneyChangeType.id)
  end
end
function FillTriggerVehicle:getDrawFirstFillText(superFunc)
  if self.isClient and self.spec_fillTriggerVehicle.fillUnitIndex ~= nil then
    local v3 = self:getFillUnitFillLevel(self.spec_fillTriggerVehicle.fillUnitIndex)
    if v3 <= 0 then
      v3 = self:getFillUnitCapacity(self.spec_fillTriggerVehicle.fillUnitIndex)
      if v3 ~= 0 then
        return true
      end
    end
  end
  v3 = superFunc(self)
  return v3
end
