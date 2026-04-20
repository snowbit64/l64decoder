-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CameraPath = {}
local CameraPath_mt = Class(CameraPath)
function CameraPath.new(posAnimCurve, rotAnimCurve, speedAnimCurve, speedScale, camera, maxTime, finishedCallback)
  setmetatable({}, u0)
  return {posAnimCurve = posAnimCurve, rotAnimCurve = rotAnimCurve, speedAnimCurve = speedAnimCurve, speedScale = speedScale, time = 0, camera = camera, overriddenCamera = nil, maxTime = maxTime, finishedCallback = finishedCallback}
end
function CameraPath:delete()
  delete(self.camera)
end
function CameraPath.createFromI3D(filename, speedScale, camera)
  local v3 = v3:loadI3DFile(filename, false, false)
  local v4 = getChild(v3, "positions")
  if v4 == 0 then
    print("Error: failed to load camera path: " .. filename .. ". No positions found.")
    return nil
  end
  local posAnimCurve = AnimCurve.new(catmullRomInterpolator3, 3)
  local rotAnimCurve = AnimCurve.new(quaternionInterpolator2, 3)
  local speedAnimCurve = AnimCurve.new(catmullRomInterpolator1, 3)
  local v8 = getNumOfChildren(v4)
  -- TODO: structure LOP_FORNPREP (pc 53, target 125)
  local v16 = getChildAt(v4, 0)
  local v17, v18, v19 = getTranslation(v16)
  local v20, v21, v22 = getRotation(v16)
  local v23, v24, v25 = getScale(v16)
  if 0 < 0 then
    local v26 = MathUtil.vector3Length(v17 - nil, v18 - nil, v19 - nil)
  end
  posAnimCurve:addKeyframe({time = v9, x = v17, y = v18, z = v19})
  local v26, v27, v28, v29 = mathEulerToQuaternion(v20, v21, v22)
  rotAnimCurve:addKeyframe({time = v9, x = v26, y = v27, z = v28, w = v29})
  speedAnimCurve:addKeyframe({time = v9, v = v23})
  -- TODO: structure LOP_FORNLOOP (pc 124, target 54)
  v17 = table.getn(posAnimCurve.keyframes)
  -- TODO: structure LOP_FORNPREP (pc 136, target 205)
  v20, v21, v22 = posAnimCurve:getFromKeyframes(posAnimCurve.keyframes[1], posAnimCurve.keyframes[1 + 1], 1, 1 + 1, 1)
  {}[(1 - 1) * 33 + 1] = 0
  -- TODO: structure LOP_FORNPREP (pc 161, target 185)
  v27, v28, v29 = posAnimCurve:getFromKeyframes(posAnimCurve.keyframes[1], posAnimCurve.keyframes[1 + 1], 1, 1 + 1, 1 - 1 / 32)
  local v30 = MathUtil.vector3Length(v27 - v20, v28 - v21, v29 - v22)
  {}[(1 - 1) * 33 + 1 + 1] = 0 + v30
  -- TODO: structure LOP_FORNLOOP (pc 184, target 162)
  posAnimCurve.keyframes[1 + 1].time = 0 + 0 + v30
  rotAnimCurve.keyframes[1 + 1].time = 0 + 0 + v30
  speedAnimCurve.keyframes[1 + 1].time = 0 + 0 + v30
  -- TODO: structure LOP_FORNLOOP (pc 204, target 137)
  posAnimCurve.segmentTimes = {}
  posAnimCurve.numTimesPerKeyframe = 32
  rotAnimCurve.segmentTimes = {}
  rotAnimCurve.numTimesPerKeyframe = 32
  speedAnimCurve.segmentTimes = {}
  speedAnimCurve.numTimesPerKeyframe = 32
  posAnimCurve.maxTime = 0 + 0 + v30
  rotAnimCurve.maxTime = 0 + 0 + v30
  speedAnimCurve.maxTime = 0 + 0 + v30
  delete(v3)
  return CameraPath.new(posAnimCurve, rotAnimCurve, speedAnimCurve, speedScale, camera, 0 + 0 + v30)
end
function CameraPath:update(dt)
  if self.speedAnimCurve ~= nil then
    local v3 = v3:get(self.time)
  end
  self.time = self.time + dt * v2
  self:placeCamera()
  v3 = getCamera()
  if v3 ~= self.camera then
    self.overriddenCamera = v3
    setCamera(self.camera)
  end
  if self.finishedCallback ~= nil and self.maxTime < self.time then
    self.finishedCallback()
  end
end
function CameraPath:placeCamera()
  local v1, v2, v3 = v1:get(self.time)
  local v4, v5, v6, v7 = v4:get(self.time)
  setTranslation(self.camera, v1, v2, v3)
  setQuaternion(self.camera, v4, v5, v6, v7)
end
function CameraPath:activate()
  self:placeCamera()
  local v1 = getCamera()
  self.overriddenCamera = v1
  setCamera(self.camera)
end
function CameraPath:deactivate()
  self.time = 0
  if self.overriddenCamera ~= nil then
    setCamera(self.overriddenCamera)
  end
  v1:removeUpdateable(self)
end
