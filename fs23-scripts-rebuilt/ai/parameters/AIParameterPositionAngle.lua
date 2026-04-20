-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIParameterPositionAngle = {}
local AIParameterPositionAngle_mt = Class(AIParameterPositionAngle, AIParameterPosition)
function AIParameterPositionAngle.new(snappingAngle, customMt)
  if not customMt then
  end
  local v2 = v2(v3)
  v2["type"] = AIParameterType.POSITION_ANGLE
  v2.angle = nil
  local v3 = math.abs(snappingAngle or 0.08726646259971647)
  v2.snappingAngle = v3
  return v2
end
function AIParameterPositionAngle:saveToXMLFile(xmlFile, key, usedModNames)
  local v5 = v5:superClass()
  v5.saveToXMLFile(self, xmlFile, key, usedModNames)
  if self.angle ~= nil then
    xmlFile:setFloat(key .. "#angle", self.angle)
  end
end
function AIParameterPositionAngle:loadFromXMLFile(xmlFile, key)
  local v4 = v4:superClass()
  v4.loadFromXMLFile(self, xmlFile, key)
  local v3 = xmlFile:getFloat(key .. "#angle", self.angle)
  self.angle = v3
end
function AIParameterPositionAngle:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadUIntN(streamId, 9)
    local v6 = math.rad(v3)
    self:setAngle(...)
  end
end
function AIParameterPositionAngle:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  if self.angle == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    v3 = math.deg(self.angle)
    streamWriteUIntN(streamId, v3, 9)
  end
end
function AIParameterPositionAngle:setAngle(angleRad)
  if angleRad % 2 * math.pi < 0 then
  end
  if 0 < self.snappingAngle then
    local numSteps = MathUtil.round(angleRad / self.snappingAngle, 0)
  end
  self.angle = angleRad
end
function AIParameterPositionAngle:getAngle()
  return self.angle
end
function AIParameterPositionAngle:getDirection()
  if self.angle == nil then
    return nil, nil
  end
  local v1, v2 = MathUtil.getDirectionFromYRotation(self.angle)
  return v1, v2
end
function AIParameterPositionAngle:setSnappingAngle(angle)
  local v2 = math.abs(angle)
  self.snappingAngle = v2
end
function AIParameterPositionAngle:getSnappingAngle()
  return self.snappingAngle
end
function AIParameterPositionAngle:getString()
  local v5 = math.deg(self.angle)
  return string.format(...)
end
function AIParameterPositionAngle:validate(fillTypeIndex, farmId)
  local v4 = v4:superClass()
  local v3, v4 = v4.validate(self, fillTypeIndex, farmId)
  if not v3 then
    return false, v4
  end
  if self.angle == nil then
    local v6 = v6:getText("ai_validationErrorNoAngle")
    return false
  end
  return true, nil
end
