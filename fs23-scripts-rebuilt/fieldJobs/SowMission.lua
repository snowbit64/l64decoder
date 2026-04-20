-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SowMission = {REWARD_PER_HA = 2000}
local SowMission_mt = Class(SowMission, AbstractFieldMission)
InitStaticObjectClass(SowMission, "SowMission", ObjectIds.MISSION_SOW)
function SowMission.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  {}[WorkAreaType.SOWINGMACHINE] = true
  {}[WorkAreaType.RIDGEMARKER] = true
  v3.workAreaTypes = {}
  v3.rewardPerHa = SowMission.REWARD_PER_HA
  return v3
end
function SowMission:saveToXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  v4.saveToXMLFile(self, xmlFile, key)
  local sowKey = string.format("%s.sow", key)
  v4 = v4:getFruitTypeNameByIndex(self.fruitType)
  setXMLString(xmlFile, sowKey .. "#fruitTypeName", v4)
end
function SowMission:loadFromXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  local v3 = v4.loadFromXMLFile(self, xmlFile, key)
  if not v3 then
    return false
  end
  v4 = getXMLString(xmlFile, key .. ".sow(0)" .. "#fruitTypeName")
  local v5 = v5:getFruitTypeByName(v4)
  self.fruitType = v5.index
  self:updateReimbursement()
  self:createModifier()
  return true
end
function SowMission:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  streamWriteUIntN(streamId, self.fruitType, FruitTypeManager.SEND_NUM_BITS)
end
function SowMission:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = streamReadUIntN(streamId, FruitTypeManager.SEND_NUM_BITS)
  self.fruitType = v3
  self:updateReimbursement()
end
function SowMission:init(field, ...)
  local v2 = self:decideFruitType(field)
  self.fruitType = v2
  if self.fruitType == nil then
    return false
  end
  self:updateReimbursement()
  local v3 = v3:superClass()
  v2 = v3.init(...)
  if not v2 then
    return false
  end
  return true
end
function SowMission:start(...)
  local v2 = v2:superClass()
  local v1 = v2.start(...)
  if not v1 then
    return false
  end
  self:createModifier()
  return true
end
function SowMission:createModifier()
  local v1 = v1:getFruitTypeByIndex(self.fruitType)
  if v1 ~= nil and v1.terrainDataPlaneId ~= nil then
    local v2 = DensityMapModifier.new(v1.terrainDataPlaneId, v1.startStateChannel, v1.numStateChannels, self.mission.terrainRootNode)
    self.completionModifier = v2
    v2 = DensityMapFilter.new(self.completionModifier)
    self.completionFilter = v2
    v2:setValueCompareParams(DensityValueCompareType.EQUAL, 1)
  end
end
function SowMission.decideFruitType(v0, v1)
  if v1.plannedFruit == 0 then
    return nil
  end
  local v2 = v2:canPlantNow(v1)
  if not v2 then
    return nil
  end
  return v1.plannedFruit
end
function SowMission:finish(success)
  self.field.fruitType = self.fruitType
  local v3 = v3:superClass()
  v3.finish(self, success)
end
function SowMission:completeField()
  local v4 = table.getn(self.field.maxFieldStatusPartitions)
  -- TODO: structure LOP_FORNPREP (pc 10, target 34)
  v4:setFieldPartitionStatus(self.field, self.field.maxFieldStatusPartitions, 1, self.fruitType, FieldManager.FIELDSTATE_GROWING, 1, 0, true, self.fieldPlowFactor, 1)
  -- TODO: structure LOP_FORNLOOP (pc 33, target 11)
end
function SowMission:updateReimbursement()
  if self.mission.economyManager == nil then
    printCallstack()
  end
  local v1 = v1:getFruitTypeByIndex(self.fruitType)
  local v4 = v4:getCostPerLiter(FillType.SEEDS)
  self.reimbursementPerHa = v1.seedUsagePerSqm * 10000 * v4
end
function SowMission:getVehicleVariant()
  if self.fruitType ~= FruitType.SUNFLOWER then
    -- if v0.fruitType ~= FruitType.MAIZE then goto L12 end
  end
  return "MAIZE"
  if v1 == FruitType.SUGARBEET then
    return "SUGARBEET"
  end
  if v1 == FruitType.POTATO then
    return "POTATO"
  end
  if v1 == FruitType.COTTON then
    return "COTTON"
  end
  if v1 == FruitType.SUGARCANE then
    return "SUGARCANE"
  end
  return "GRAIN"
end
function SowMission:canRunOnField(v1, v2, v3, v4, v5, v6, v7)
  local v9 = v9:getFruitTypeByIndex(self.fruitType)
  if v9 == nil then
    return true, FieldManager.FIELDSTATE_CULTIVATED
  end
  return false
end
function SowMission:getIsAvailable()
  local v1 = v1:canFruitBePlanted(self.fruitType)
  if not v1 then
    return false
  end
  local v2 = v2:superClass()
  v1 = v2.getIsAvailable(self)
  return v1
end
function SowMission:getData()
  local v3 = v3:getText("fieldJob_number")
  local v2 = string.format(v3, self.field.fieldId)
  v2 = v2:getText("fieldJob_jobType_sowing")
  v2 = v2:getText("fieldJob_desc_action_sowing")
  v3 = v3:getText("fieldJob_desc_sowing")
  local v6 = v6:getFillTypeByFruitTypeIndex(self.fruitType)
  v2 = string.format(v3, self.field.fieldId, v6.title)
  v3 = v3:getText("fieldJob_desc_fillTheUnit")
  local v5 = v5:getFillTypeByIndex(FillType.SEEDS)
  v2 = string.format(v3, v5.title)
  return {location = v2, jobType = v2, action = v2, description = v2, extraText = v2}
end
function SowMission:partitionCompletion(x, z, widthX, widthZ, heightX, heightZ)
  v7:setParallelogramWorldCoords(x, z, widthX, widthZ, heightX, heightZ, DensityCoordType.POINT_VECTOR_VECTOR)
  local v7, v8, v9 = v7:executeGet(self.completionFilter)
  return v8, v9
end
function SowMission.validate(v0, v1)
  if v1 == FieldManager.FIELDEVENT_SOWN then
  end
  return true
end
v1:registerMissionType(SowMission, "sow")
