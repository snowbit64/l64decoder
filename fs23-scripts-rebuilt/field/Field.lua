-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Field = {}
local Field_mt = Class(Field)
function Field.new(customMt)
  if not customMt then
  end
  v2(v3, v4)
  v1.fieldId = 0
  v1.posX = 0
  v1.posZ = 0
  v1.rootNode = nil
  v1.name = nil
  v1.mapHotspot = nil
  v1.fieldMissionAllowed = true
  v1.fieldGrassMission = false
  v1.fieldAngle = 0
  v1.fieldDimensions = nil
  v1.fieldArea = 1
  v1.getFieldStatusPartitions = {}
  v1.setFieldStatusPartitions = {}
  v1.maxFieldStatusPartitions = {}
  v1.isAIActive = true
  v1.fruitType = nil
  v1.lastCheckedTime = nil
  v1.plannedFruit = 0
  v1.currentMission = nil
  return v1
end
function Field:load(id)
  self.rootNode = id
  local v2 = getUserAttribute(id, "name")
  if v2 ~= nil then
    local v3 = v3:convertText(v2, g_currentMission.loadingMapModName)
    self.name = v3
  end
  local v4 = getUserAttribute(id, "fieldMissionAllowed")
  v3 = Utils.getNoNil(v4, true)
  self.fieldMissionAllowed = v3
  v4 = getUserAttribute(id, "fieldGrassMission")
  v3 = Utils.getNoNil(v4, false)
  self.fieldGrassMission = v3
  local v5 = getUserAttribute(id, "fieldDimensionIndex")
  v3 = I3DUtil.indexToObject(...)
  if v3 == nil then
    local v9 = getName(id)
    print("Warning: No fieldDimensionIndex defined for Field '" .. v9 .. "'!")
    return false
  end
  local v7 = getUserAttribute(id, "fieldAngle")
  local v6 = tonumber(...)
  v5 = Utils.getNoNil(v6, 0)
  v4 = math.rad(...)
  v7 = v7:getGroundAngleMaxValue()
  v5 = FSDensityMapUtil.convertToDensityMapAngle(...)
  self.fieldAngle = v5
  self.fieldDimensions = v3
  FieldUtil.updateFieldPartitions(self, self.getFieldStatusPartitions, 900)
  FieldUtil.updateFieldPartitions(self, self.setFieldStatusPartitions, 400)
  FieldUtil.updateFieldPartitions(self, self.maxFieldStatusPartitions, 10000000)
  v5, v6 = FieldUtil.getCenterOfField(self)
  self.posX = v5
  self.posZ = v6
  v7 = getUserAttribute(id, "nameIndicatorIndex")
  v5 = I3DUtil.indexToObject(...)
  self.nameIndicator = v5
  if self.nameIndicator ~= nil then
    v5, v6, v7 = getWorldTranslation(self.nameIndicator)
    self.posX = v5
    self.posZ = v7
  end
  self.farmland = nil
  return true
end
function Field:delete()
  if self.mapHotspot ~= nil then
    v1:removeMapHotspot(self.mapHotspot)
    v1:delete()
    self.mapHotspot = nil
  end
end
function Field:getCenterOfFieldWorldPosition()
  return self.posX, self.posZ
end
function Field:setFarmland(farmland)
  self.farmland = farmland
end
function Field:updateOwnership()
  if self.farmland ~= nil then
    local v3 = v3:getFarmlandOwner(self.farmland.id)
    self:setFieldOwned(...)
  end
end
function Field:setFieldId(fieldId)
  self.fieldId = fieldId
end
function Field:getName()
  if not self.name then
    local v1 = tostring(self.fieldId)
  end
  return v1
end
function Field:addMapHotspot()
  if self.mapHotspot ~= nil then
    v1:removeMapHotspot(self.mapHotspot)
    v1:delete()
    self.mapHotspot = nil
  end
  local v1 = FieldHotspot.new()
  v1:setField(self)
  self.mapHotspot = v1
  v2:addMapHotspot(v1)
end
function Field:getMapHotspot()
  return self.mapHotspot
end
function Field:setMissionActive(isActive)
  if self.mapHotspot ~= nil then
    v2:setBlinking(isActive)
    v2:setPersistent(isActive)
  end
end
function Field:setFieldOwned(farmId)
  if self.mapHotspot ~= nil then
    v2:setOwnerFarmId(farmId)
  end
  if farmId ~= FarmlandManager.NO_OWNER_FARM_ID then
  end
  self.isAIActive = true
end
function Field:activate()
  self:setFieldOwned(FarmlandManager.NO_OWNER_FARM_ID)
end
function Field:deactivate()
  local v3 = v3:getFarmlandOwner(self.farmland.id)
  self:setFieldOwned(...)
  v1:cancelMissionOnField(self)
end
function Field:getIsAIActive()
  return self.isAIActive
end
