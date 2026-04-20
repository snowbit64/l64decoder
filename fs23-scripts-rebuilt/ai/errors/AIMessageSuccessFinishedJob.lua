-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIMessageSuccessFinishedJob = {}
local AIMessageSuccessFinishedJob_mt = Class(AIMessageSuccessFinishedJob, AIMessage)
function AIMessageSuccessFinishedJob.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function AIMessageSuccessFinishedJob.getMessage(v0)
  return v1:getText("ai_messageSuccessFinishedJob")
end
function AIMessageSuccessFinishedJob.getType(v0)
  return AIMessageType.OK
end
