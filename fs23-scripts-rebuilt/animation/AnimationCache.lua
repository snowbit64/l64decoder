-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimationCache = {CHARACTER = "CHARACTER", PEDESTRIAN = "PEDESTRIAN", VEHICLE_CHARACTER = "VEHICLE_CHARACTER"}
local AnimationCache_mt = Class(AnimationCache)
function AnimationCache.new()
  local v0 = setmetatable({}, u0)
  v0.pendingLoadRequestIds = {}
  v0.nameToFilename = {}
  v0.nameToAnimationNode = {}
  return v0
end
function AnimationCache:load(name, filename)
  if self.nameToFilename[name] ~= nil then
    Logging.error("'%s' already exists in animation cache", name)
    return false
  end
  for v6, v7 in pairs(self.nameToFilename) do
    if not (v7 == filename) then
      continue
    end
    self.nameToFilename[name] = filename
    for v11, v12 in pairs(self.nameToAnimationNode) do
      if not (v11 == v6) then
        continue
      end
      self.nameToAnimationNode[name] = v12
    end
    return true
  end
  self.nameToFilename[name] = filename
  v4 = v4:loadI3DFileAsync(filename, false, false, self.onAnimationFileLoaded, self, {name = name})
  self.pendingLoadRequestIds[v4] = true
  return true
end
function AnimationCache:onAnimationFileLoaded(node, failedReason, args)
  self.pendingLoadRequestIds[args.loadRequestId] = nil
  if self.nameToFilename[args.name] ~= nil then
    self.nameToAnimationNode[args.name] = node
    for v10, v11 in pairs(self.nameToFilename) do
      if not (v6 == v11) then
        continue
      end
      self.nameToAnimationNode[v10] = node
    end
    return
  end
  delete(node)
end
function AnimationCache:getNode(name)
  return self.nameToAnimationNode[name]
end
function AnimationCache:isLoaded(name)
  if self.nameToAnimationNode[name] == nil then
  end
  return true
end
function AnimationCache:delete()
  for v4, v5 in pairs(self.nameToFilename) do
    if not (self.nameToAnimationNode[v4] ~= nil) then
      continue
    end
    local v7 = entityExists(self.nameToAnimationNode[v4])
    if not v7 then
      continue
    end
    delete(self.nameToAnimationNode[v4])
  end
  self.nameToFilename = {}
  for v4, v5 in pairs(self.pendingLoadRequestIds) do
    v6:cancelStreamI3DFile(v4)
  end
end
