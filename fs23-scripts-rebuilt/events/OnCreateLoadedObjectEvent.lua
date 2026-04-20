-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

OnCreateLoadedObjectEvent = {}
local OnCreateLoadedObjectEvent_mt = Class(OnCreateLoadedObjectEvent, Event)
InitStaticEventClass(OnCreateLoadedObjectEvent, "OnCreateLoadedObjectEvent", EventIds.EVENT_ON_CREATE_LOADED_OBJECT)
function OnCreateLoadedObjectEvent.emptyNew()
  return Event.new(u0)
end
function OnCreateLoadedObjectEvent.new()
  return OnCreateLoadedObjectEvent.emptyNew()
end
function OnCreateLoadedObjectEvent.readStream(v0, v1, v2)
  local v3 = v2:getIsServer()
  if v3 then
    v3 = streamReadUInt16(v1)
    local v6 = v6:getNumObjects()
    if v3 ~= v6 then
    end
    assert(true)
    -- TODO: structure LOP_FORNPREP (pc 24, target 48)
    local v7 = NetworkUtil.readNodeObjectId(v1)
    local v8 = v8:get(1)
    v8:readStream(v1, v2)
    v9:finishRegisterObject(v8, v7)
    -- TODO: structure LOP_FORNLOOP (pc 47, target 25)
    v6 = OnCreateLoadedObjectEvent.new()
    v2:sendEvent(...)
    return
  end
  v3 = v3:getNumObjects()
  -- TODO: structure LOP_FORNPREP (pc 65, target 80)
  v7 = v7:get(1)
  v8:finishRegisterObject(v2, v7)
  -- TODO: structure LOP_FORNLOOP (pc 79, target 66)
end
function OnCreateLoadedObjectEvent.writeStream(v0, v1, v2)
  local v3 = v2:getIsServer()
  if not v3 then
    v3 = v3:getNumObjects()
    streamWriteUInt16(v1, v3)
    -- TODO: structure LOP_FORNPREP (pc 17, target 38)
    local v7 = v7:get(1)
    local v10 = NetworkUtil.getObjectId(v7)
    NetworkUtil.writeNodeObjectId(...)
    v7:writeStream(v1, v2)
    -- TODO: structure LOP_FORNLOOP (pc 37, target 18)
  end
end
function OnCreateLoadedObjectEvent.run(v0, v1)
end
