-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIMessageErrorNoVineFound = {}
local v0 = Class(AIMessageErrorNoVineFound, AIMessage)
function AIMessageErrorNoVineFound.new(v0)
  if not v0 then
  end
  return v1(v2)
end
function AIMessageErrorNoVineFound.getMessage(v0)
  return v1:getText("ai_messageErrorNoVineFound")
end
