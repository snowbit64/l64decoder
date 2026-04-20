-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIMessageErrorOutOfMoney = {}
local AIMessageErrorOutOfMoney_mt = Class(AIMessageErrorOutOfMoney, AIMessage)
function AIMessageErrorOutOfMoney.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function AIMessageErrorOutOfMoney.getMessage(v0)
  return v1:getText("ai_messageErrorOutOfMoney")
end
