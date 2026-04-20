-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIParameter = {}
local AIParameter_mt = Class(AIParameter)
function AIParameter.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1["type"] = AIParameterType.TEXT
  v1.isValid = true
  return v1
end
function AIParameter.readStream(v0, v1, v2)
end
function AIParameter.writeStream(v0, v1, v2)
end
function AIParameter:getType()
  return self["type"]
end
function AIParameter:getIsValid()
  return self.isValid
end
function AIParameter:setIsValid(isValid)
  self.isValid = isValid
end
function AIParameter.getCanBeChanged(v0)
  return true
end
function AIParameter.getString(v0)
  return ""
end
