-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIParameterGroup = {}
local AIParameterGroup_mt = Class(AIParameterGroup)
function AIParameterGroup.new(title, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.parameters = {}
  v2.title = title
  return v2
end
function AIParameterGroup:getTitle()
  return self.title
end
function AIParameterGroup:addParameter(parameter)
  table.insert(self.parameters, parameter)
end
function AIParameterGroup:getParameters()
  return self.parameters
end
