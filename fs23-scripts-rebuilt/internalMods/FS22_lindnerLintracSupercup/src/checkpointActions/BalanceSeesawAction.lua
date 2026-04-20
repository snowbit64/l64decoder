-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BalanceSeesawAction = {}
local BalanceSeesawAction_mt = Class(BalanceSeesawAction, CheckpointAction)
function BalanceSeesawAction.new(v0, v1)
  local v2 = v2:new(v1, u0)
  v1.actionOnlyFulfillment = true
  local v3 = v3:new(v1.nodeId, v1.isServer, v1.isClient)
  v2.seesaw = v3
  v3 = v3:new(5000, function()
    u0.fulfilled = true
    v0:setBeaconLightVisibility(false)
  end)
  v2.seesawTimer = v3
  return v2
end
function BalanceSeesawAction:delete()
  local v2 = v2:superClass()
  v2.delete(self)
  v1:delete()
end
function BalanceSeesawAction:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v5 = NetworkUtil.getObjectId(self.seesaw)
  NetworkUtil.writeNodeObjectId(...)
  v3:writeStream(streamId, connection)
  v3:registerObjectInStream(connection, self.seesaw)
end
function BalanceSeesawAction:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local seesawId = NetworkUtil.readNodeObjectId(streamId)
  v4:readStream(streamId, connection)
  v4:finishRegisterObject(self.seesaw, seesawId)
end
function BalanceSeesawAction:writeUpdateStream(streamId, connection, dirtyMask)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
  v4:writeUpdateStream(streamId, connection, dirtyMask)
end
function BalanceSeesawAction:readUpdateStream(streamId, timestamp, connection)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
  v4:readUpdateStream(streamId, timestamp, connection)
end
function BalanceSeesawAction:reset()
  local v2 = v2:superClass()
  v2.reset(self)
  v1:reset()
end
function BalanceSeesawAction:loadFromXML(xmlFile, baseKey, components, i3dMappings)
  v5:loadFromXML(xmlFile, baseKey, components, i3dMappings)
  v5:register(true)
  return true
end
function BalanceSeesawAction:validate(params)
  if not self.fulfilled then
    local v2 = v2:isHorizontal()
    v3:setBeaconLightVisibility(v2)
    if v2 then
      local v3 = v3:isRunning()
      -- if v3 then goto L39 end
      v3:start()
      return
      return
    end
    v3 = v3:isRunning()
    if v3 then
      v3:clear()
    end
  end
end
