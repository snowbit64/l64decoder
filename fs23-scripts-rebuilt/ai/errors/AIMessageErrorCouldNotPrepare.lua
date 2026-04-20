-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AIMessageErrorCouldNotPrepare = {}
local AIMessageErrorCouldNotPrepare_mt = Class(AIMessageErrorCouldNotPrepare, AIMessage)
function AIMessageErrorCouldNotPrepare.new(vehicle, customMt)
  if not customMt then
  end
  local v2 = v2(v3)
  v2.vehicle = vehicle
  return v2
end
function AIMessageErrorCouldNotPrepare.getMessage(v0)
  return v1:getText("ai_messageErrorCouldNotPrepare")
end
AIMessage.getMessageArguments = function(self)
  if self.vehicle ~= nil then
    return v1:getName()
  end
  return nil
end
function AIMessageErrorCouldNotPrepare:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
end
function AIMessageErrorCouldNotPrepare:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
end
