-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIMessageErrorOutOfFuel = {}
local AIMessageErrorOutOfFuel_mt = Class(AIMessageErrorOutOfFuel, AIMessage)
function AIMessageErrorOutOfFuel.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function AIMessageErrorOutOfFuel.getMessage(v0)
  return v1:getText("ai_messageErrorOutOfFuel")
end
