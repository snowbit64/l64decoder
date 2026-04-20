-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FSMStateEvent = {}
local FSMStateEvent_mt = Class(FSMStateEvent, Event)
InitEventClass(FSMStateEvent, "FSMStateEvent")
function FSMStateEvent.emptyNew()
  return Event.new(u0)
end
function FSMStateEvent.new(object, type, stateId, params)
  local v4 = FSMStateEvent.emptyNew()
  v4.object = object
  v4["type"] = type
  v4.stateId = stateId
  if not params then
  end
  v4.params = v5
  return v4
end
function FSMStateEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.object)
  streamWriteUIntN(streamId, self["type"], 2)
  if self["type"] ~= FSM.EVENT_UPDATE then
    streamWriteUInt8(streamId, self.stateId)
    streamWriteUInt8(streamId, #self.params)
    for v6, v7 in ipairs(self.params) do
      local v10 = type(v7)
      if v10 ~= "number" then
      end
      assert(true)
      streamWriteInt32(streamId, v7)
    end
  end
end
function FSMStateEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.object = v3
  v3 = streamReadUIntN(streamId, 2)
  self["type"] = v3
  if self["type"] ~= FSM.EVENT_UPDATE then
    v3 = streamReadUInt8(streamId)
    self.stateId = v3
    v3 = streamReadUInt8(streamId)
    if 0 < v3 then
      self.params = {}
      -- TODO: structure LOP_FORNPREP (pc 39, target 56)
      local v9 = streamReadInt32(streamId)
      table.insert(...)
      -- TODO: structure LOP_FORNLOOP (pc 50, target 40)
    else
      self.params = {}
    end
  end
  self:run(connection)
end
function FSMStateEvent:run(connection)
  v2:run(self["type"], self.stateId, self.params, true)
end
