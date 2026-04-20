-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIMessageSuccessSiloEmpty = {}
local AIMessageSuccessSiloEmpty_mt = Class(AIMessageSuccessSiloEmpty, AIMessage)
function AIMessageSuccessSiloEmpty.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function AIMessageSuccessSiloEmpty.getMessage(v0)
  return v1:getText("ai_messageSuccessSiloEmpty")
end
function AIMessageSuccessSiloEmpty.getType(v0)
  return AIMessageType.OK
end
