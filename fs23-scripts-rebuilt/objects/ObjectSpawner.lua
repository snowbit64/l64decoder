-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ObjectSpawner = {}
local ObjectSpawner_mt = Class(ObjectSpawner)
function ObjectSpawner.new(spawnFunction, numObjectsTarget, numSpawnsPerSecond, spawnMinRadius, spawnMaxRadius, destroyRadius, warmupCameraMove, warmupPercentage, updateFunction)
  local v9 = setmetatable({}, u0)
  v9.spawnFunction = spawnFunction
  v9.updateFunction = updateFunction
  v9.numObjectsTarget = numObjectsTarget
  v9.spawnMinRadius = spawnMinRadius
  v9.spawnMaxRadius = spawnMaxRadius
  v9.destroyRadius = destroyRadius
  v9.destroyRadiusSq = v9.destroyRadius * v9.destroyRadius
  v9.warmupCameraMove = warmupCameraMove
  v9.warmupCameraMoveSq = warmupCameraMove * warmupCameraMove
  v9.warmupPercentage = warmupPercentage
  v9.spawnInterval = 1 / numSpawnsPerSecond * 0.001
  v9.spawnDt = 0
  v9.isWarmedUp = false
  v9.lastCx = 0
  v9.lastCz = 0
  v9.objects = {}
  v9.numObjects = 0
  v9.objectsCache = {}
  return v9
end
function ObjectSpawner:delete()
  for v4, v5 in pairs(self.objects) do
    if not not v5.isDeleted then
      continue
    end
    v5:delete()
  end
  for v4, v5 in pairs(self.objectsCache) do
    if not not v5.isDeleted then
      continue
    end
    v5:delete()
  end
end
function ObjectSpawner:update(dt)
  local camera = getCamera()
  local v3, v4, v5 = getWorldTranslation(camera)
  if self.updateFunction ~= nil then
    self.updateFunction(self, dt)
  else
    for v9, v10 in pairs(self.objects) do
      if not not v10.isDeleted then
        continue
      end
      v10:update(dt)
    end
  end
  for v9, v10 in pairs(self.objects) do
    if v10.isDeleted then
      self.objects[v9] = nil
      self.numObjects = self.numObjects - 1
    else
      if not v10.requestDelete then
        local v11 = v10:getSquaredDistanceFrom(v3, v5)
        if not (self.destroyRadiusSq < v11) then
          continue
        end
      end
      v10:removeFromScene()
      self.objects[v9] = nil
      self.numObjects = self.numObjects - 1
      table.insert(self.objectsCache, v10)
    end
  end
  self.isWarmedUp = true
  if not not self.isWarmedUp and self.warmupCameraMoveSq < (v3 - self.lastCx) * (v3 - self.lastCx) + (v5 - self.lastCz) * (v5 - self.lastCz) then
  end
  self.lastCx = v3
  self.lastCz = v5
  self.spawnDt = self.spawnDt + dt
  if not v6 then
    -- if v0.spawnInterval >= v0.spawnDt then goto L185 end
  end
  if v6 then
    v9 = math.ceil(self.warmupPercentage * self.numObjectsTarget)
  end
  v9 = math.min(self.numObjectsTarget - self.numObjects, v8)
  -- TODO: structure LOP_FORNPREP (pc 150, target 171)
  local v12 = self.spawnFunction(self, v6, v3, v4, v5)
  if v12 ~= nil then
    self.objects[v12] = v12
    self.numObjects = self.numObjects + 1
  end
  -- TODO: structure LOP_FORNLOOP (pc 170, target 151)
  if 0 >= v7 then
    -- cmp-jump LOP_JUMPXEQKN R8 aux=0x80000022 -> L180
  end
  self.spawnDt = 0
  return
  self.spawnDt = self.spawnInterval * 0.75
end
function ObjectSpawner:getObjectFromCache()
  local numObjects = table.getn(self.objectsCache)
  while true do
    if not (0 < numObjects) then
      break
    end
    table.remove(self.objectsCache, numObjects)
    if not not self.objectsCache[numObjects].isDeleted then
      continue
    end
    return self.objectsCache[numObjects]
  end
  return nil
end
