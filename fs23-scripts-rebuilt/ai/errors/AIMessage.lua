-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIMessage = {}
local AIMessage_mt = Class(AIMessage)
function AIMessage.new(customMt)
  if not customMt then
  end
  return v1(v2, v3)
end
function AIMessage.getMessage(v0)
  return ""
end
function AIMessage.getMessageArguments(v0)
end
function AIMessage.getType(v0)
  return AIMessageType.ERROR
end
function AIMessage.readStream(v0, v1, v2)
end
function AIMessage.writeStream(v0, v1, v2)
end
