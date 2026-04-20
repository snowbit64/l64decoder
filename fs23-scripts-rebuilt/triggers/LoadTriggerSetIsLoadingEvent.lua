-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LoadTriggerSetIsLoadingEvent = {}
local loadTriggerSetIsLoadingEvent_mt = Class(LoadTriggerSetIsLoadingEvent, Event)
InitStaticEventClass(LoadTriggerSetIsLoadingEvent, "LoadTriggerSetIsLoadingEvent", EventIds.EVENT_LOADTRIGGER_SET_IS_LOADING)
function LoadTriggerSetIsLoadingEvent.emptyNew()
  return Event.new(u0)
end
function LoadTriggerSetIsLoadingEvent.new(object, isLoading, targetObject, fillUnitIndex, fillType)
  local v5 = LoadTriggerSetIsLoadingEvent.emptyNew()
  v5.object = object
  v5.isLoading = isLoading
  v5.targetObject = targetObject
  v5.fillUnitIndex = fillUnitIndex
  v5.fillType = fillType
  return v5
end
function LoadTriggerSetIsLoadingEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadBool(streamId)
  self.isLoading = v3
  if self.isLoading then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.targetObject = v3
    v3 = streamReadUInt8(streamId)
    self.fillUnitIndex = v3
    v3 = streamReadUIntN(streamId, FillTypeManager.SEND_NUM_BITS)
    self.fillType = v3
  end
  self:run(connection)
end
function LoadTriggerSetIsLoadingEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  local v3 = streamWriteBool(streamId, self.isLoading)
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.targetObject)
    streamWriteUInt8(streamId, self.fillUnitIndex)
    streamWriteUIntN(streamId, self.fillType, FillTypeManager.SEND_NUM_BITS)
  end
end
function LoadTriggerSetIsLoadingEvent:run(connection)
  v2:setIsLoading(self.isLoading, self.targetObject, self.fillUnitIndex, self.fillType, true)
  local v2 = connection:getIsServer()
  if not v2 then
    local v4 = LoadTriggerSetIsLoadingEvent.new(self.object, self.isLoading, self.targetObject, self.fillUnitIndex, self.fillType)
    v2:broadcastEvent(v4, nil, connection, self.object)
  end
end
function LoadTriggerSetIsLoadingEvent:sendEvent(v1, v2, v3, v4, v5)
  if v1 ~= self.isLoading then
    if v5 ~= nil then
      -- cmp-jump LOP_JUMPXEQKB R5 aux=0x80000000 -> L49
    end
    if g_server ~= nil then
      local v8 = LoadTriggerSetIsLoadingEvent.new(self, v1, v2, v3, v4)
      v6:broadcastEvent(v8, nil, nil, self)
      return
    end
    local v6 = v6:getServerConnection()
    v8 = LoadTriggerSetIsLoadingEvent.new(self, v1, v2, v3, v4)
    v6:sendEvent(...)
  end
end
