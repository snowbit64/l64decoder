-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DebugFlag = {}
local DebugFlag_mt = Class(DebugFlag)
function DebugFlag.new(r, g, b, customMt)
  if not customMt then
  end
  local v4 = v4(v5, v6)
  v4.x = 0
  v4.y = 0
  v4.z = 0
  v4.dirX = 0
  v4.dirZ = 1
  v4.r = r or 0
  v4.g = g or 0
  v4.b = b or 0
  v4.height = 4
  v4.flagHeight = 0.7
  v4.flagLength = 1
  v4.numSectionsY = 4
  v4.numSectionsZ = 6
  return v4
end
function DebugFlag.delete(v0)
end
function DebugFlag.update(v0, v1)
end
function DebugFlag:setColor(r, g, b)
  if not r then
  end
  self.r = v4
  if not g then
  end
  self.g = v4
  if not b then
  end
  self.b = v4
  return self
end
function DebugFlag:draw()
  drawDebugLine(self.x, self.y, self.z, self.r, self.g, self.b, self.x, self.y + self.height, self.z, self.r, self.g, self.b)
  -- TODO: structure LOP_FORNPREP (pc 54, target 85)
  drawDebugLine(self.x + self.dirX * self.flagLength * 1 / self.numSectionsZ, self.y + self.height - self.flagHeight, self.z + self.dirZ * self.flagLength * 1 / self.numSectionsZ, self.r, self.g, self.b, self.x + self.dirX * self.flagLength * 1 / self.numSectionsZ, self.y + self.height, self.z + self.dirZ * self.flagLength * 1 / self.numSectionsZ, self.r, self.g, self.b)
  -- TODO: structure LOP_FORNLOOP (pc 84, target 55)
  -- TODO: structure LOP_FORNPREP (pc 89, target 113)
  drawDebugLine(self.x, self.y + self.height - self.flagHeight + self.flagHeight * 0 / self.numSectionsY, self.z, self.r, self.g, self.b, self.x + self.dirX * self.flagLength, self.y + self.height - self.flagHeight + self.flagHeight * 0 / self.numSectionsY, self.z + self.dirZ * self.flagLength, self.r, self.g, self.b)
  -- TODO: structure LOP_FORNLOOP (pc 112, target 90)
end
function DebugFlag:create(x, y, z, dirX, dirZ)
  self.x = x
  self.y = y
  self.z = z
  self.dirX = dirX
  self.dirZ = dirZ
  return self
end
