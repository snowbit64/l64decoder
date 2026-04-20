-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIParameterPosition = {}
local AIParameterPosition_mt = Class(AIParameterPosition, AIParameter)
function AIParameterPosition.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1["type"] = AIParameterType.POSITION
  v1.x = nil
  v1.z = nil
  return v1
end
function AIParameterPosition:saveToXMLFile(xmlFile, key, usedModNames)
  if self.x ~= nil then
    xmlFile:setFloat(key .. "#x", self.x)
    xmlFile:setFloat(key .. "#z", self.z)
  end
end
function AIParameterPosition:loadFromXMLFile(xmlFile, key)
  local v3 = xmlFile:getFloat(key .. "#x", self.x)
  self.x = v3
  v3 = xmlFile:getFloat(key .. "#z", self.z)
  self.z = v3
end
function AIParameterPosition:readStream(streamId, connection)
  local v3 = streamReadBool(streamId)
  if v3 then
    v3 = streamReadFloat32(streamId)
    local v4 = streamReadFloat32(streamId)
    self:setPosition(v3, v4)
  end
end
function AIParameterPosition:writeStream(streamId, connection)
  if self.x == nil then
  end
  local v3 = v3(v4, true)
  if v3 then
    streamWriteFloat32(streamId, self.x)
    streamWriteFloat32(streamId, self.z)
  end
end
function AIParameterPosition:setPosition(x, z)
  self.x = x
  self.z = z
end
function AIParameterPosition:getPosition()
  return self.x, self.z
end
function AIParameterPosition:getString()
  return string.format("< %.1f , %.1f >", self.x, self.z)
end
function AIParameterPosition:validate()
  if self.x ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L16
  end
  local v2 = v2:getText("ai_validationErrorNoPosition")
  return false
  local v1 = v1:getIsPositionReachable(self.x, 0, self.z)
  if not v1 then
    v2 = v2:getText("ai_validationErrorBlockedPosition")
    return false
  end
  return true, nil
end
