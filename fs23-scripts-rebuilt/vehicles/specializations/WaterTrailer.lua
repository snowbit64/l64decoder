-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

source("dataS/scripts/vehicles/specializations/events/WaterTrailerSetIsFillingEvent.lua")
WaterTrailer = {}
function WaterTrailer.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(FillUnit, v0)
end
function WaterTrailer.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("WaterTrailer")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.waterTrailer#fillUnitIndex", "Fill unit index")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.waterTrailer#fillLitersPerSecond", "Fill liters per second", 500)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.waterTrailer#fillNode", "Fill node", "Root component")
  SoundManager.registerSampleXMLPaths(Vehicle.xmlSchema, "vehicle.waterTrailer.sounds", "refill")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function WaterTrailer.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setIsWaterTrailerFilling", WaterTrailer.setIsWaterTrailerFilling)
end
function WaterTrailer.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getDrawFirstFillText", WaterTrailer.getDrawFirstFillText)
end
function WaterTrailer.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", WaterTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", WaterTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onReadStream", WaterTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onWriteStream", WaterTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", WaterTrailer)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetach", WaterTrailer)
end
function WaterTrailer:onLoad(savegame)
  local v3 = v3:getValue("vehicle.waterTrailer#fillUnitIndex")
  if v3 ~= nil then
    self.spec_waterTrailer.fillUnitIndex = v3
    local v4 = v4:getValue("vehicle.waterTrailer#fillLitersPerSecond", 500)
    self.spec_waterTrailer.fillLitersPerSecond = v4
    v4 = v4:getValue("vehicle.waterTrailer#fillNode", self.components[1].node, self.components, self.i3dMappings)
    self.spec_waterTrailer.waterFillNode = v4
  end
  v2.isFilling = false
  v4 = WaterTrailerActivatable.new(self)
  v2.activatable = v4
  if self.isClient then
    v2.samples = {}
    local v5 = v5:loadSampleFromXML(self.xmlFile, "vehicle.waterTrailer.sounds", "refill", self.baseDirectory, self.components, 0, AudioGroup.VEHICLE, self.i3dMappings, self)
    v2.samples.refill = v5
  end
end
function WaterTrailer:onDelete()
  v2:removeActivatable(self.spec_waterTrailer.activatable)
  v2:deleteSamples(self.spec_waterTrailer.samples)
end
function WaterTrailer:onReadStream(streamId, connection)
  local isFilling = streamReadBool(streamId)
  self:setIsWaterTrailerFilling(isFilling, true)
end
function WaterTrailer:onWriteStream(streamId, connection)
  streamWriteBool(streamId, self.spec_waterTrailer.isFilling)
end
function WaterTrailer:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  local v6, v7, v8 = getWorldTranslation(self.spec_waterTrailer.waterFillNode)
  if v7 > self.waterY + 0.2 then
  end
  if true then
    v10:addActivatable(v5.activatable)
  else
    v10:removeActivatable(v5.activatable)
  end
  if self.isServer then
    if v5.isFilling and not v9 then
      self:setIsWaterTrailerFilling(false)
    end
    if v5.isFilling then
      local v10 = self:getFillUnitAllowsFillType(v5.fillUnitIndex, FillType.WATER)
      if v10 then
        local v12 = self:getOwnerFarmId()
        v10 = self:addFillUnitFillLevel(v12, v5.fillUnitIndex, v5.fillLitersPerSecond * dt * 0.001, FillType.WATER, ToolType.TRIGGER, nil)
        if v10 <= 0 then
          self:setIsWaterTrailerFilling(false)
        end
      end
    end
  end
end
function WaterTrailer:setIsWaterTrailerFilling(isFilling, noEventSend)
  if isFilling ~= self.spec_waterTrailer.isFilling then
    WaterTrailerSetIsFillingEvent.sendEvent(self, isFilling, noEventSend)
    self.spec_waterTrailer.isFilling = isFilling
    if self.isClient then
      if isFilling then
        v4:playSample(self.spec_waterTrailer.samples.refill)
        return
      end
      v4:stopSample(v3.samples.refill)
    end
  end
end
function WaterTrailer:getDrawFirstFillText(superFunc)
  if self.isClient then
    local v3 = self:getIsActiveForInput()
    if v3 then
      v3 = self:getIsSelected()
      if v3 then
        v3 = self:getFillUnitFillLevel(self.spec_waterTrailer.fillUnitIndex)
        if v3 <= 0 then
          v3 = self:getFillUnitCapacity(self.spec_waterTrailer.fillUnitIndex)
          if v3 ~= 0 then
            return true
          end
        end
      end
    end
  end
  v3 = superFunc(self)
  return v3
end
function WaterTrailer:onPreDetach(attacherVehicle, implement)
  v4:removeActivatable(self.spec_waterTrailer.activatable)
end
WaterTrailerActivatable = {}
local WaterTrailerActivatable_mt = Class(WaterTrailerActivatable)
function WaterTrailerActivatable.new(trailer)
  local v1 = setmetatable({}, u0)
  v1.trailer = trailer
  v1.activateText = "unknown"
  return v1
end
function WaterTrailerActivatable:getIsActivatable()
  local v2 = v2:getIsActiveForInput(true)
  if v2 then
    v2 = v2:getFillUnitFillLevel(self.trailer.spec_waterTrailer.fillUnitIndex)
    local v3 = v3:getFillUnitCapacity(self.trailer.spec_waterTrailer.fillUnitIndex)
    if v2 < v3 then
      v2 = v2:getFillUnitAllowsFillType(self.trailer.spec_waterTrailer.fillUnitIndex, FillType.WATER)
      if v2 then
        self:updateActivateText()
        return true
      end
    end
  end
  return false
end
function WaterTrailerActivatable:run()
  v1:setIsWaterTrailerFilling(not self.trailer.spec_waterTrailer.isFilling)
  self:updateActivateText()
end
function WaterTrailerActivatable:updateActivateText()
  if self.trailer.spec_waterTrailer.isFilling then
    local v2 = v2:getText("action_stopRefillingOBJECT")
    local v1 = string.format(v2, self.trailer.typeDesc)
    self.activateText = v1
    return
  end
  v2 = v2:getText("action_refillOBJECT")
  v1 = string.format(v2, self.trailer.typeDesc)
  self.activateText = v1
end
