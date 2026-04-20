-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugCameraClone = {MAX_CAMERAS = 16}
local DebugCameraClone_mt = Class(DebugCameraClone, Object)
InitStaticObjectClass(DebugCameraClone, "DebugCameraClone", ObjectIds.OBJECT_DEBUG_CAMERA_CLONE)
function DebugCameraClone.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  if isServer then
    v3.cameras = {}
    -- TODO: structure LOP_FORNPREP (pc 20, target 56)
    v3.cameras[0] = {x = 0, y = 0, z = 0, qx = 0, qy = 0, qz = 0, qw = 1, fovY = 1.0471975511965976, nearClip = 0.1, farClip = 5000}
    -- TODO: structure LOP_FORNLOOP (pc 55, target 21)
  end
  local v4 = InterpolatorPosition.new(0, 0, 0)
  v3.interpolatorPosition = v4
  v4 = InterpolatorQuaternion.new(0, 0, 0, 1)
  v3.interpolatorQuaternion = v4
  v4 = InterpolationTime.new(1.2)
  v3.interpolatorTime = v4
  v3.fovY = 1.0471975511965976
  v3.nearClip = 0.1
  v3.farClip = 5000
  v4 = v3:getNextDirtyFlag()
  v3.dirtyFlag = v4
  v4 = createCamera("DebugCameraClone", 1.0471975511965976, 1, 10000)
  v3.camera = v4
  local v5 = StartParams.getValue("debugCameraCloneIndex")
  v4 = tonumber(...)
  v3.cameraIndex = v4
  v3.connectionToCameraIndex = {}
  v4 = getCamera()
  v3.lastCamera = v4
  addConsoleCommand("gsDebugCameraCloneSetIndex", "Sets the camera clone index", "consoleCommandSetCameraCloneIndex", v3)
  return v3
end
function DebugCameraClone.delete(v0)
  removeConsoleCommand("gsDebugCameraCloneSetIndex")
end
function DebugCameraClone:readUpdateStream(streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    -- if not v4 then goto L172 end
    v4 = streamReadFloat32(streamId)
    local v5 = streamReadFloat32(streamId)
    local v6 = streamReadFloat32(streamId)
    local v7 = streamReadFloat32(streamId)
    local v8 = streamReadFloat32(streamId)
    local v9 = streamReadFloat32(streamId)
    local v10 = streamReadFloat32(streamId)
    local v11 = streamReadFloat32(streamId)
    local v12 = streamReadFloat32(streamId)
    local v13 = streamReadFloat32(streamId)
    v14:setTargetPosition(v4, v5, v6)
    v14:setTargetQuaternion(v7, v8, v9, v10)
    v14:startNewPhaseNetwork()
    self.fovY = v11
    self.nearClip = v12
    self.farClip = v13
    return
  end
  for v8, v9 in ipairs(g_server.clients) do
    if not (v9 == streamId) then
      continue
    end
    break
  end
  v5 = streamReadBool(streamId)
  if v5 then
    v6 = streamReadUIntN(streamId, 5)
    self.connectionToCameraIndex[connection] = v6
  else
    self.connectionToCameraIndex[connection] = nil
  end
  v6 = streamReadFloat32(streamId)
  self.cameras[v4].x = v6
  v6 = streamReadFloat32(streamId)
  self.cameras[v4].y = v6
  v6 = streamReadFloat32(streamId)
  self.cameras[v4].z = v6
  v6 = streamReadFloat32(streamId)
  self.cameras[v4].qx = v6
  v6 = streamReadFloat32(streamId)
  self.cameras[v4].qy = v6
  v6 = streamReadFloat32(streamId)
  self.cameras[v4].qz = v6
  v6 = streamReadFloat32(streamId)
  self.cameras[v4].qw = v6
  v6 = streamReadFloat32(streamId)
  self.cameras[v4].fovY = v6
  v6 = streamReadFloat32(streamId)
  self.cameras[v4].nearClip = v6
  v6 = streamReadFloat32(streamId)
  self.cameras[v4].farClip = v6
end
function DebugCameraClone:writeUpdateStream(streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    if self.cameras[self.connectionToCameraIndex[connection]] == nil then
    end
    local v6 = v6(v7, true)
    -- if not v6 then goto L171 end
    streamWriteFloat32(streamId, v5.x)
    streamWriteFloat32(streamId, v5.y)
    streamWriteFloat32(streamId, v5.z)
    streamWriteFloat32(streamId, v5.qx)
    streamWriteFloat32(streamId, v5.qy)
    streamWriteFloat32(streamId, v5.qz)
    streamWriteFloat32(streamId, v5.qw)
    streamWriteFloat32(streamId, v5.fovY)
    streamWriteFloat32(streamId, v5.nearClip)
    streamWriteFloat32(streamId, v5.farClip)
    return
  end
  v4 = getCamera()
  local v5, v6, v7 = getWorldTranslation(v4)
  local v8, v9, v10, v11 = getWorldQuaternion(v4)
  local v12 = getFovY(v4)
  local v13 = getNearClip(v4)
  local v14 = getFarClip(v4)
  if self.cameraIndex == nil then
  end
  local v15 = v15(v16, true)
  if v15 then
    streamWriteUIntN(streamId, self.cameraIndex, 5)
  end
  streamWriteFloat32(streamId, v5)
  streamWriteFloat32(streamId, v6)
  streamWriteFloat32(streamId, v7)
  streamWriteFloat32(streamId, v8)
  streamWriteFloat32(streamId, v9)
  streamWriteFloat32(streamId, v10)
  streamWriteFloat32(streamId, v11)
  streamWriteFloat32(streamId, v12)
  streamWriteFloat32(streamId, v13)
  streamWriteFloat32(streamId, v14)
end
function DebugCameraClone:update(dt)
  self:raiseDirtyFlags(self.dirtyFlag)
  self:raiseActive()
  if self.isServer then
    local v3 = getCamera()
    local v4, v5, v6 = getWorldTranslation(v3)
    self.cameras[0].x = v4
    self.cameras[0].y = v5
    self.cameras[0].z = v6
    local v4, v5, v6, v7 = getWorldQuaternion(v3)
    self.cameras[0].qx = v4
    self.cameras[0].qy = v5
    self.cameras[0].qz = v6
    self.cameras[0].qw = v7
    v4 = getFovY(v3)
    self.cameras[0].fovY = v4
    v4 = getNearClip(v3)
    self.cameras[0].nearClip = v4
    v4 = getFarClip(v3)
    self.cameras[0].farClip = v4
  end
  local v2 = getCamera()
  if v2 ~= self.camera then
    self.lastCamera = v2
  end
  if self.cameraIndex ~= nil then
    v3:update(dt)
    v3 = v3:getAlpha()
    v4, v5, v6 = v4:getInterpolatedValues(v3)
    local v7, v8, v9, v10 = v7:getInterpolatedValues(v3)
    setWorldTranslation(self.camera, v4, v5, v6)
    setWorldQuaternion(self.camera, v7, v8, v9, v10)
    setFovY(self.camera, self.fovY)
    setNearClip(self.camera, self.nearClip)
    setFarClip(self.camera, self.farClip)
    setCamera(self.camera)
  end
  v4 = getCamera()
  v3, v4, v5 = getWorldTranslation(...)
  for v9, v10 in pairs(g_currentMission.players) do
    if not (v10 ~= g_currentMission.player) then
      continue
    end
    local v11, v12, v13 = getWorldTranslation(v10.graphicsRootNode)
    local v14 = MathUtil.vector2Length(v3 - v11, v5 - v13)
    if self.cameraIndex ~= nil and v14 >= 1 then
    end
    setVisibility(v10.graphicsRootNode, not v15)
  end
end
function DebugCameraClone:consoleCommandSetCameraCloneIndex(index)
  local v2 = tonumber(index)
  if v2 ~= nil and v2 >= 0 then
    -- if DebugCameraClone.MAX_CAMERAS >= v2 then goto L17 end
  end
  self.cameraIndex = index
  if self.lastCamera ~= nil then
    v2 = entityExists(self.lastCamera)
    if v2 then
      setCamera(self.lastCamera)
    end
  end
end
