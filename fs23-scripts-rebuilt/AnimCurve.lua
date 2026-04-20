-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimCurve = {}
function linearInterpolator1(first, second, alpha)
  return second[1] + alpha * (self[1] - second[1])
end
function linearInterpolator2(first, second, alpha)
  return self[1] * alpha + second[1] * (1 - alpha), self[2] * alpha + second[2] * (1 - alpha)
end
function linearInterpolator3(first, second, alpha)
  return self[1] * alpha + second[1] * (1 - alpha), self[2] * alpha + second[2] * (1 - alpha), self[3] * alpha + second[3] * (1 - alpha)
end
function linearInterpolator4(first, second, alpha)
  return self[1] * alpha + second[1] * (1 - alpha), self[2] * alpha + second[2] * (1 - alpha), self[3] * alpha + second[3] * (1 - alpha), self[4] * alpha + second[4] * (1 - alpha)
end
function linearInterpolatorN(first, second, alpha)
  for v8, v9 in ipairs(first) do
    table.insert(v4, v9 * alpha + second[v8] * v3)
  end
  return v4
end
function linearInterpolatorTransRot(first, second, alpha)
  return self.x * alpha + second.x * (1 - alpha), self.y * alpha + second.y * (1 - alpha), self.z * alpha + second.z * (1 - alpha), self.rx * alpha + second.rx * (1 - alpha), self.ry * alpha + second.ry * (1 - alpha), self.rz * alpha + second.rz * (1 - alpha)
end
function linearInterpolatorTransRotScale(first, second, alpha)
  return self.x * alpha + second.x * (1 - alpha), self.y * alpha + second.y * (1 - alpha), self.z * alpha + second.z * (1 - alpha), self.rx * alpha + second.rx * (1 - alpha), self.ry * alpha + second.ry * (1 - alpha), self.rz * alpha + second.rz * (1 - alpha), self.sx * alpha + second.sx * (1 - alpha), self.sy * alpha + second.sy * (1 - alpha), self.sz * alpha + second.sz * (1 - alpha)
end
function catmullRomInterpolator1(p1, p2, p0, p3, t)
  if p0 == nil then
  else
  end
  if p3 == nil then
  else
  end
  return 0.5 * (2 * self.v + (-v7 + p2.v) * t + (2 * v7 - 5 * self.v + 4 * p2.v - v8) * v5 + (-v7 + 3 * self.v - 3 * p2.v + v8) * v6)
end
function catmullRomInterpolator3(p1, p2, p0, p3, t)
  if p0 == nil then
  else
  end
  if p3 == nil then
  else
  end
  return 0.5 * (2 * self.x + (-v7 + p2.x) * t + (2 * v7 - 5 * self.x + 4 * p2.x - v10) * v5 + (-v7 + 3 * self.x - 3 * p2.x + v10) * v6), 0.5 * (2 * self.y + (-v8 + p2.y) * t + (2 * v8 - 5 * self.y + 4 * p2.y - v11) * v5 + (-v8 + 3 * self.y - 3 * p2.y + v11) * v6), 0.5 * (2 * self.z + (-v9 + p2.z) * t + (2 * v9 - 5 * self.z + 4 * p2.z - v12) * v5 + (-v9 + 3 * self.z - 3 * p2.z + v12) * v6)
end
function quaternionInterpolator(p1, p2, t)
  return MathUtil.nlerpQuaternionShortestPath(p2.x, p2.y, p2.z, p2.w, self.x, self.y, self.z, self.w, t)
end
function quaternionInterpolator2(p1, p2, p0, p3, t)
  if p0 == nil then
  end
  if p3 == nil then
  end
  local v13, v14, v15, v16 = MathUtil.quaternionMadShortestPath(p0.x * v5, p0.y * v5, p0.z * v5, p0.w * v5, self.x, self.y, self.z, self.w, 1 - t + v6)
  v13, v14, v15, v16 = MathUtil.quaternionMadShortestPath(v13, v14, v15, v16, p2.x, p2.y, p2.z, p2.w, t + v5)
  v13, v14, v15, v16 = MathUtil.quaternionMadShortestPath(v13, v14, v15, v16, p3.x, p3.y, p3.z, p3.w, v6)
  v13 = MathUtil.quaternionNormalized(v13, v14, v15, v16)
  return v13
end
local AnimCurve_mt = Class(AnimCurve)
function AnimCurve.new(interpolator, interpolatorDegree)
  local v2 = setmetatable({}, u0)
  v2.keyframes = {}
  v2.interpolator = interpolator
  local v3 = Utils.getNoNil(interpolatorDegree, 2)
  v2.interpolatorDegree = v3
  v2.currentTime = 0
  v2.maxTime = 0
  v2.numKeyframes = 0
  return v2
end
function AnimCurve.delete(v0)
end
function AnimCurve:reset()
  table.clear(self.keyframes)
  self.numKeyframes = 0
  self.currentTime = 0
  self.maxTime = 0
end
function AnimCurve:addKeyframe(keyframe, xmlFile, key)
  if 0 < self.numKeyframes and keyframe.time < self.keyframes[self.numKeyframes].time then
    if xmlFile ~= nil then
      local v5 = type(xmlFile)
      if v5 == "number" then
        v5 = v5:getFileByHandle(xmlFile)
      end
      if xmlFile ~= nil then
        Logging.xmlError(xmlFile, "keyframes not strictly monotonic increasing at %s", key)
        -- goto L49  (LOP_JUMP +10)
      end
      Logging.error("keyframes not strictly monotonic increasing at %s", key)
    else
      print("Error: keyframes not strictly monotonic increasing")
    end
  end
  table.insert(self.keyframes, keyframe)
  self.maxTime = keyframe.time
  self.numKeyframes = v4 + 1
end
function AnimCurve:removeKeyframe(index)
  if index ~= nil then
    if index >= 1 then
      -- if #v0.keyframes >= v1 then goto L11 end
    end
    return
  end
  -- TODO: structure LOP_FORNPREP (pc 17, target 30)
  self.keyframes[#self.keyframes - 1 + 1].time = self.keyframes[#self.keyframes - 1].time
  -- TODO: structure LOP_FORNLOOP (pc 29, target 18)
  table.remove(self.keyframes, index)
  if self.keyframes[#self.keyframes] then
    -- if v0.keyframes[#v0.keyframes].time then goto L53 end
  end
  self.maxTime = 0
  self.numKeyframes = self.numKeyframes - 1
end
function AnimCurve:getMaximum()
  if #self.keyframes == 0 then
    return 0, 0
  end
  if v1 == 1 then
    local v2 = self:getFromKeyframes(self.keyframes[1], self.keyframes[1], 1, 1, 0)
    return v2, self.keyframes[1].time
  end
  local maxValue = self:getFromKeyframes(self.keyframes[1], self.keyframes[2], 1, 2, 0)
  -- TODO: structure LOP_FORNPREP (pc 49, target 73)
  local v7 = self:getFromKeyframes(self.keyframes[1], self.keyframes[1 + 1], 1, 1 + 1, 1)
  if maxValue < v7 then
  end
  -- TODO: structure LOP_FORNLOOP (pc 72, target 50)
  return v2, v3
end
function AnimCurve:get(time)
  if self.numKeyframes == 0 then
    return
  end
  if 2 <= v2 then
    -- if v0.keyframes[1].time > v1 then goto L50 end
    if time < self.maxTime then
      -- TODO: structure LOP_FORNPREP (pc 26, target 54)
      if time <= self.keyframes[2].time then
        -- goto L54  (LOP_JUMP +13)
      end
      -- TODO: structure LOP_FORNLOOP (pc 41, target 27)
      -- goto L54  (LOP_JUMP +11)
    end
  else
  end
  if v3.time < v4.time then
  else
  end
  if self.segmentTimes ~= nil and v5 < v2 then
    local v12, v13 = self:getInterval(time - v3.time, self.segmentTimes, (v5 - 1) * (self.numTimesPerKeyframe + 1) + 1, self.numTimesPerKeyframe + 1)
    if 0 < self.segmentTimes[v13 + (v5 - 1) * (self.numTimesPerKeyframe + 1) + 1] - self.segmentTimes[v12 + (v5 - 1) * (self.numTimesPerKeyframe + 1) + 1] then
    end
  end
  return self:getFromKeyframes(v3, v4, v5, v6, v9)
end
function AnimCurve:getFromKeyframes(first, second, firstI, secondI, alpha)
  if self.interpolatorDegree == 2 then
    return self.interpolator(first, second, alpha)
  end
  if self.interpolatorDegree == 3 then
    if 1 < firstI then
    end
    if secondI < #self.keyframes then
    end
    return self.interpolator(first, second, v6, v7, alpha)
  end
end
function AnimCurve.getInterval(v0, v1, v2, v3, v4)
  while true do
    if not (1 < v6 - v5) then
      break
    end
    v7 = math.floor((v6 + v5) / 2)
    if v1 < v2[v7 + v3] then
    else
    end
  end
  return v5, v6
end
function AnimCurve:loadCurveFromXML(xmlFile, baseKey, loadFunc)
  while true do
    v5 = string.format("%s.key(%d)", baseKey, v4)
    v6 = hasXMLProperty(xmlFile, v5)
    if not v6 then
      break
    end
    v6 = loadFunc(xmlFile, v5)
    if v6 ~= nil then
      self:addKeyframe(v6)
    end
  end
end
function loadInterpolator1Curve(xmlFile, key)
  local v2 = getXMLString(xmlFile, key .. "#time")
  local v3 = getXMLString(xmlFile, key .. "#value")
  if v3 ~= nil then
    local v5 = tonumber(v3)
    local v6 = tonumber(v2)
    return {v5, time = v6}
  end
  return nil
end
function loadInterpolator2Curve(xmlFile, key)
  local v2 = getXMLString(xmlFile, key .. "#time")
  local v4 = getXMLString(xmlFile, key .. "#values")
  local v3 = string.split(v4, " ")
  if v3 ~= nil then
    local v5 = tonumber(v3[1])
    local v6 = tonumber(v3[2])
    local v7 = tonumber(v2)
    return {v5, v6, time = v7}
  end
  return nil
end
function loadInterpolator3Curve(xmlFile, key)
  local v2 = getXMLString(xmlFile, key .. "#time")
  local v4 = getXMLString(xmlFile, key .. "#values")
  local v3 = string.split(v4, " ")
  if v3 ~= nil then
    local v5 = tonumber(v3[1])
    local v6 = tonumber(v3[2])
    local v7 = tonumber(v3[3])
    local v8 = tonumber(v2)
    return {v5, v6, v7, time = v8}
  end
  return nil
end
function loadInterpolator4Curve(xmlFile, key)
  local v2 = getXMLString(xmlFile, key .. "#time")
  local v4 = getXMLString(xmlFile, key .. "#values")
  local v3 = string.split(v4, " ")
  if v3 ~= nil then
    local v5 = tonumber(v3[1])
    local v6 = tonumber(v3[2])
    local v7 = tonumber(v3[3])
    local v8 = tonumber(v3[4])
    local v9 = tonumber(v2)
    return {v5, v6, v7, v8, time = v9}
  end
  return nil
end
function getLoadNamedInterpolatorCurve(names)
  return function(names, v1)
    local v2 = getXMLString(names, v1 .. "#time")
    for v7, v8 in ipairs(u0) do
      local v9 = getXMLString(names, v1 .. "#" .. v8)
      if v9 == nil then
        return nil
      end
      local v12 = tonumber(v9)
      table.insert(...)
    end
    v4 = tonumber(v2)
    v3.time = v4
    return v3
  end
end
