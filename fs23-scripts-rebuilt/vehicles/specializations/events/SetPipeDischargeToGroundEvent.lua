-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SetPipeDischargeToGroundEvent = {}
local SetPipeDischargeToGroundEvent_mt = Class(SetPipeDischargeToGroundEvent, Event)
InitStaticEventClass(SetPipeDischargeToGroundEvent, "SetPipeDischargeToGroundEvent", EventIds.EVENT_SET_PIPE_DISCHARGE_TO_GROUND)
function SetPipeDischargeToGroundEvent.emptyNew()
  return Event.new(u0)
end
function SetPipeDischargeToGroundEvent.new(object, dischargeState)
  local v2 = SetPipeDischargeToGroundEvent.emptyNew()
  v2.object = object
  v2.dischargeState = dischargeState
  return v2
end
function SetPipeDischargeToGroundEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.dischargeState = v3
  self:run(connection)
end
function SetPipeDischargeToGroundEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteBool(streamId, self.dischargeState)
end
function SetPipeDischargeToGroundEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:setPipeDischargeToGround(self.dischargeState, true)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    local v4 = SetPipeDischargeToGroundEvent.new(self.object, self.dischargeState)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
function SetPipeDischargeToGroundEvent.sendEvent(object, dischargeState, noEventSend)
  if noEventSend ~= nil then
    -- cmp-jump LOP_JUMPXEQKB R2 aux=0x80000000 -> L39
  end
  if g_server ~= nil then
    local v5 = SetPipeDischargeToGroundEvent.new(object, dischargeState)
    v3:broadcastEvent(v5, nil, nil, object)
    return
  end
  local v3 = v3:getServerConnection()
  v5 = SetPipeDischargeToGroundEvent.new(object, dischargeState)
  v3:sendEvent(...)
end
