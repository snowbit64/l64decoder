-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ForestryLog = {}
local v0 = Class(ForestryLog, MountableObject)
InitStaticObjectClass(ForestryLog, "ForestryLog", ObjectIds.OBJECT_FORESTRY_LOG)
v1:addInitSchemaFunction(function()
  ForestryLog.registerSavegameXMLPaths(ItemSystem.xmlSchemaSavegame, "items.item(?)")
end)
function ForestryLog:registerSavegameXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#filename", "Path to log i3d file")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "#position", "log position")
  self:register(XMLValueType.VECTOR_ROT, v1 .. "#rotation", "log rotation")
  self:register(XMLValueType.INT, v1 .. "#farmId", "Id of owner farm")
end
function ForestryLog.new(v0, v1, v2)
  if not v2 then
  end
  local v3 = v3(v4, v5, v6)
  registerObjectClassName(v3, "ForestryLog")
  return v3
end
function ForestryLog:delete()
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  self:setForestryLogAIObstacle(false)
  unregisterObjectClassName(self)
  v1:removeItemToSave(self)
  local v2 = v2:superClass()
  v2.delete(self)
end
function ForestryLog:readStream(v1, v2)
  local v4 = streamReadString(v1)
  local v3 = NetworkUtil.convertFromNetworkFilename(...)
  if self.nodeId == 0 then
    self:loadFromFilename(v3)
  end
end
function ForestryLog:writeStream(v1, v2)
  local v5 = NetworkUtil.convertToNetworkFilename(self.i3dFilename)
  streamWriteString(...)
end
function ForestryLog:loadFromFilename(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
  if v1 == nil then
    return false
  end
  local v11 = NetworkUtil.convertFromNetworkFilename(v1)
  v11 = fileExists(v11)
  if not v11 then
    return false
  end
  self.i3dFilename = v1
  if self.i3dFilename ~= nil then
    local v11, v12 = Utils.getModNameAndBaseDirectory(self.i3dFilename)
    self.customEnvironment = v11
    self.baseDirectory = v12
    setSplitShapesLoadingFileId(-1)
    setSplitShapesNextFileId(true)
    v11 = v11:loadSharedI3DFileAsync(self.i3dFilename, false, true, self.onForestryLogLoaded, self, {v2, v3, v4, v5, v6, v7, v8, v9, v10})
    self.sharedLoadRequestId = v11
  else
    return false
  end
  return true
end
function ForestryLog:onForestryLogLoaded(v1, v2, v3)
  if v2 == LoadI3DFailedReason.NONE then
    local v13 = getNumOfChildren(v1)
    local v14 = math.random(0, v13 - 1)
    local v16 = getChildAt(v1, v14)
    local v15 = clone(v16, false, false, true)
    local v17 = getRootNode()
    link(v17, v15)
    if v3[1] ~= nil and v3[2] ~= nil and v3[3] ~= nil and v3[5] ~= nil and v3[5] ~= nil and v3[6] ~= nil then
      setTranslation(v15, v3[1], v3[2], v3[3])
      setRotation(v15, v3[4], v3[5], v3[6])
    end
    self:setNodeId(v15)
    self.tensionBeltMeshes = {}
    v16:addItemToSave(self)
    self:setForestryLogAIObstacle(true)
    delete(v1)
    if v10 ~= nil then
      v16 = v10(v11, self, true, v12)
      return v16
    end
  end
  if v10 ~= nil then
    v13 = v10(v11, self, false, v12)
    return v13
  end
end
function ForestryLog:loadAsyncFromXMLFile(v1, v2, v3, v4, v5, v6)
  local v7, v8, v9 = v1:getValue(v2 .. "#position")
  local v10, v11, v12 = v1:getValue(v2 .. "#rotation")
  if v7 ~= nil and v8 ~= nil and v9 ~= nil and v10 ~= nil and v11 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x80000000 -> L31
  end
  local v13 = v4(v5, self, false, v6)
  return v13
  v13 = v1:getValue(v2 .. "#filename")
  local v14 = self:loadFromFilename(v13, v7, v8, v9, v10, v11, v12, v4, v5, v6)
  if not v14 then
    v14 = v4(v5, self, false, v6)
    return v14
  end
end
function ForestryLog:saveToXMLFile(v1, v2)
  local v3, v4, v5 = getTranslation(self.nodeId)
  local v6, v7, v8 = getRotation(self.nodeId)
  local v13 = NetworkUtil.convertToNetworkFilename(self.i3dFilename)
  local v12 = HTMLUtil.encodeToHTML(...)
  v1:setValue(...)
  v1:setValue(v2 .. "#position", v3, v4, v5)
  v1:setValue(v2 .. "#rotation", v6, v7, v8)
  v12 = self:getOwnerFarmId()
  v1:setValue(...)
end
function ForestryLog:mount(v1, v2, v3, v4, v5, v6, v7, v8)
  local v10 = v10:superClass()
  v10.mount(self, v1, v2, v3, v4, v5, v6, v7, v8)
  v9:removeItemToSave(self)
  self:setForestryLogAIObstacle(false)
end
function ForestryLog:unmount()
  local v2 = v2:superClass()
  local v1 = v2.unmount(self)
  if v1 then
    v1:addItemToSave(self)
    self:setForestryLogAIObstacle(true)
    return true
  end
  return false
end
function ForestryLog:mountKinematic(v1, v2, v3, v4, v5, v6, v7, v8)
  local v10 = v10:superClass()
  v10.mountKinematic(self, v1, v2, v3, v4, v5, v6, v7, v8)
  v9:removeItemToSave(self)
  self:setForestryLogAIObstacle(false)
end
function ForestryLog:unmountKinematic()
  local v2 = v2:superClass()
  local v1 = v2.unmountKinematic(self)
  if v1 then
    v1:addItemToSave(self)
    self:setForestryLogAIObstacle(true)
    return true
  end
  return false
end
function ForestryLog:mountDynamic(v1, v2, v3, v4, v5)
  local v7 = v7:superClass()
  v7.mountDynamic(self, v1, v2, v3, v4, v5)
  self:setForestryLogAIObstacle(false)
end
function ForestryLog:unmountDynamic(v1)
  local v3 = v3:superClass()
  v3.unmountDynamic(self, v1)
  self:setForestryLogAIObstacle(true)
end
function ForestryLog:setForestryLogAIObstacle(v1)
  if v1 and self.obstacleNodeId == nil then
    v2:addObstacle(self.nodeId, nil, nil, nil, nil, nil, nil, nil)
    self.obstacleNodeId = self.nodeId
    return
  end
  if not v1 and self.obstacleNodeId ~= nil then
    v2:removeObstacle(self.obstacleNodeId)
    self.obstacleNodeId = nil
  end
end
function ForestryLog:getMeshNodes()
  return self.tensionBeltMeshes
end
function ForestryLog.getSupportsTensionBelts(v0)
  return true
end
function ForestryLog.getAllowPickup(v0)
  return false
end
function ForestryLog.getDefaultRigidBodyType(v0)
  return RigidBodyType.KINEMATIC
end
