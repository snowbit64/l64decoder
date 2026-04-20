-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CheckpointAction = {}
local CheckpointAction_mt = Class(CheckpointAction)
function CheckpointAction.new(v0, v1, v2)
  if not v2 then
  end
  local v3 = v3(v4, v5)
  v3.checkpoint = v1
  v3.fulfilled = false
  return v3
end
function CheckpointAction.delete(v0)
end
function CheckpointAction.writeStream(v0, v1, v2)
end
function CheckpointAction.readStream(v0, v1, v2)
end
function CheckpointAction.writeUpdateStream(v0, v1, v2, v3)
end
function CheckpointAction.readUpdateStream(v0, v1, v2, v3)
end
function CheckpointAction:reset()
  self.fulfilled = false
end
function CheckpointAction.loadFromXML(v0, v1, v2, v3, v4)
  return true
end
function CheckpointAction:isFulfilled()
  return self.fulfilled
end
