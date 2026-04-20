-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIParameterLooping = {}
local AIParameterLooping_mt = Class(AIParameterLooping, AIParameter)
function AIParameterLooping.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1["type"] = AIParameterType.SELECTOR
  v1.isLooping = false
  return v1
end
function AIParameterLooping:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setBool(key .. "#isLooping", self.isLooping)
end
function AIParameterLooping:loadFromXMLFile(xmlFile, key)
  local v3 = xmlFile:getBool(key .. "#isLooping", self.isLooping)
  self.isLooping = v3
end
function AIParameterLooping:readStream(streamId, connection)
  local v5 = streamReadBool(streamId)
  self:setIsLooping(...)
end
function AIParameterLooping:writeStream(streamId, connection)
  streamWriteBool(streamId, self.isLooping)
end
function AIParameterLooping:setIsLooping(isLooping)
  self.isLooping = isLooping
end
function AIParameterLooping:getIsLooping()
  return self.isLooping
end
function AIParameterLooping:getString()
  if self.isLooping then
    return v1:getText("ai_parameterValueLooping")
  end
  v1 = v1:getText("ai_parameterValueNoLooping")
  return v1
end
function AIParameterLooping:setNextItem()
  self.isLooping = not self.isLooping
end
function AIParameterLooping:setPreviousItem()
  self.isLooping = not self.isLooping
end
