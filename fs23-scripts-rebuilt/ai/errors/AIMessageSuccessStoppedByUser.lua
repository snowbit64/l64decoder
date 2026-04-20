-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIMessageSuccessStoppedByUser = {}
local AIMessageSuccessStoppedByUser_mt = Class(AIMessageSuccessStoppedByUser, AIMessage)
function AIMessageSuccessStoppedByUser.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function AIMessageSuccessStoppedByUser.getMessage(v0)
  return v1:getText("ai_messageSuccessStoppedByUser")
end
function AIMessageSuccessStoppedByUser.getType(v0)
  return AIMessageType.OK
end
