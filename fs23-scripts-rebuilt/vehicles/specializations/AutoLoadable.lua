-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AutoLoadable = {}
function AutoLoadable.prerequisitesPresent(v0)
  return true
end
function AutoLoadable.registerFunctions(v0)
  SpecializationUtil.registerFunction(v0, "getAutoLoadIsSupported", AutoLoadable.getAutoLoadIsSupported)
  SpecializationUtil.registerFunction(v0, "getAutoLoadIsAllowed", AutoLoadable.getAutoLoadIsAllowed)
  SpecializationUtil.registerFunction(v0, "getAutoLoadBoundingBox", AutoLoadable.getAutoLoadBoundingBox)
  SpecializationUtil.registerFunction(v0, "getAutoLoadSize", AutoLoadable.getAutoLoadSize)
  SpecializationUtil.registerFunction(v0, "autoLoad", AutoLoadable.autoLoad)
end
function AutoLoadable.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", AutoLoadable)
end
function AutoLoadable:onLoad(v1)
  if self.isServer then
    self.spec_autoLoadable.isSupported = true
  end
end
function AutoLoadable:getAutoLoadIsSupported()
  return self.spec_autoLoadable.isSupported
end
function AutoLoadable.getAutoLoadIsAllowed(v0)
  return true
end
function AutoLoadable:getAutoLoadSize()
  return self.size.width, self.size.height, self.size.length
end
function AutoLoadable:getAutoLoadBoundingBox()
  local v2, v3, v4 = localToWorld(self.rootNode, self.size.widthOffset, self.size.heightOffset, self.size.lengthOffset)
  local v5, v6, v7 = localDirectionToWorld(self.rootNode, 0, 0, 1)
  local v8, v9, v10 = localDirectionToWorld(self.rootNode, 0, 1, 0)
  return v2, v3, v4, v5, v6, v7, v8, v9, v10, self.size.width * 0.5, self.size.height * 0.5, self.size.length * 0.5
end
function AutoLoadable:autoLoad(v1, v2, v3, v4, v5, v6)
  self:mountKinematic(v1, v2, v3 + self.size.widthOffset + self.size.width * 0.5, self.size.heightOffset, v4 + self.size.lengthOffset + self.size.height * 0.5, 0, 0, 0)
  return true
end
