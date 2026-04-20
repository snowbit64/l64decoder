-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Object = {}
local Object_mt = Class(Object)
InitStaticObjectClass(Object, "Object", ObjectIds.OBJECT_OBJECT)
Object.nextObjectId = 1
Object.MAX_DIRTY_FLAG = 1073741824
function Object.resetObjectIds()
  if g_server ~= nil then
    local v2 = next(g_server.objects)
    if v2 ~= nil then
    end
  end
  assert(v1)
  Object.nextObjectId = 1
end
function Object.new(isServer, isClient, customMt)
  if not customMt then
  end
  v4(v5, v6)
  v3.id = Object.nextObjectId
  Object.nextObjectId = Object.nextObjectId + 1
  if g_isDevelopmentVersion and not isServer then
    local v4 = math.random(1, 99999999)
    v3.id = v4
  end
  v3.isRegistered = false
  v3.isServer = isServer
  v3.isClient = isClient
  v3.owner = nil
  v3.ownerFarmId = AccessHandler.EVERYONE
  v3.recieveUpdates = isServer
  v3.nextDirtyFlag = 1
  v3.dirtyMask = 0
  v3.deleteListeners = {}
  return v3
end
function Object:delete()
  for v4, v5 in ipairs(self.deleteListeners) do
    local v6 = type(v5.callbackFunc)
    if v6 == "string" then
      v5.object[v5.callbackFunc](v5.object, self)
    else
      v6 = type(v5.callbackFunc)
      if not (v6 == "function") then
        continue
      end
      v5.callbackFunc(v5.object, self)
    end
  end
  if self.isRegistered then
    self:unregister()
  end
end
function Object:register(alreadySent)
  if self.isServer then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L26
    v2:registerObject(self, alreadySent)
    return
  end
  if g_client ~= nil then
    v2:registerObject(self, alreadySent)
  end
end
function Object:unregister(alreadySent)
  if self.isServer then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x0 -> L26
    v2:unregisterObject(self, alreadySent)
    return
  end
  if g_client ~= nil then
    v2:unregisterObject(self, alreadySent)
  end
end
function Object:raiseActive()
  if self.isServer then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L24
    v1:addObjectToUpdateLoop(self)
    return
  end
  if g_client ~= nil then
    v1:addObjectToUpdateLoop(self)
  end
end
function Object:readStream(streamId, connection, objectId)
  local v6 = streamReadUIntN(streamId, FarmManager.FARM_ID_SEND_NUM_BITS)
  self:setOwnerFarmId(v6, true)
end
function Object:writeStream(streamId, connection)
  streamWriteUIntN(streamId, self.ownerFarmId, FarmManager.FARM_ID_SEND_NUM_BITS)
end
function Object.readUpdateStream(v0, v1, v2, v3)
end
function Object.writeUpdateStream(v0, v1, v2, v3)
end
function Object:getIsDelayedLoaded()
  if self.postWriteStream ~= nil and self.postReadStream == nil then
  end
  return v1
end
function Object.mouseEvent(v0, v1, v2, v3, v4, v5)
end
function Object.update(v0, v1)
end
function Object.updateTick(v0, v1)
end
function Object.updateEnd(v0, v1)
end
function Object.draw(v0)
end
function Object:setOwner(owner)
  if self.isServer then
    self.owner = owner
    return
  end
  print("Error: setOwner only allowed on Server")
end
function Object.testScope(v0, v1, v2, v3, v4, v5)
  return true
end
function Object.onGhostRemove(v0)
end
function Object.onGhostAdd(v0)
end
function Object.getUpdatePriority(v0, v1, v2, v3, v4, v5, v6, v7)
  return v1 * 0.5
end
function Object:getNextDirtyFlag()
  if Object.MAX_DIRTY_FLAG < self.nextDirtyFlag then
    self.nextDirtyFlag = Object.MAX_DIRTY_FLAG
    Logging.devWarning("Object:getNextDirtyFlag(), too many dirty flags")
    if g_isDevelopmentVersion then
      printCallstack()
    end
  end
  self.nextDirtyFlag = self.nextDirtyFlag * 2
  return self.nextDirtyFlag
end
function Object:raiseDirtyFlags(flag)
  local v2 = bitOR(self.dirtyMask, flag)
  self.dirtyMask = v2
end
function Object:clearDirtyFlags(flag)
  local v4 = bitNOT(flag)
  local v2 = bitAND(...)
  self.dirtyMask = v2
end
function Object.onMissionStarted(v0)
end
function Object:setOwnerFarmId(farmId, noEventSend)
  if self.ownerFarmId ~= farmId then
    self.ownerFarmId = farmId
    if self.isServer then
      if noEventSend ~= nil then
        -- if v2 then goto L25 end
      end
      local v5 = ObjectFarmChangeEvent.new(self, farmId)
      v3:broadcastEvent(v5, nil, nil, self)
    end
  end
end
function Object:getOwnerFarmId()
  return self.ownerFarmId
end
function Object:addDeleteListener(object, callbackFunc)
  if callbackFunc == nil then
  end
  for v6, v7 in ipairs(self.deleteListeners) do
    if not (v7.object == object) then
      continue
    end
    if not (v7.callbackFunc == callbackFunc) then
      continue
    end
    return
  end
  table.insert(self.deleteListeners, {object = object, callbackFunc = callbackFunc})
end
function Object:removeDeleteListener(object, callbackFunc)
  if callbackFunc == nil then
  end
  for v7, v8 in ipairs(self.deleteListeners) do
    if not (v8.object == object) then
      continue
    end
    if not (v8.callbackFunc == callbackFunc) then
      continue
    end
  end
  if 0 < v3 then
    table.remove(self.deleteListeners, v3)
  end
end
