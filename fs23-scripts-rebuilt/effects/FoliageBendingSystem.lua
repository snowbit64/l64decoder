-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FoliageBendingSystem = {}
local FoliageBendingSystem_mt = Class(FoliageBendingSystem)
FoliageBendingSystem.maxNumObjects = 64
function FoliageBendingSystem.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  local v2 = createFoliageBendingSystem(FoliageBendingSystem.maxNumObjects, 32)
  v1.systemId = v2
  return v1
end
function FoliageBendingSystem:delete()
  if self.systemId ~= 0 then
    delete(self.systemId)
  end
end
function FoliageBendingSystem:setTerrainTransformGroup(terrainTransformGroup)
  setFoliageBendingSystem(terrainTransformGroup, self.systemId)
end
function FoliageBendingSystem:createRectangle(minX, maxX, minZ, maxZ, yOffset, parentTransformGroup)
  return createFoliageBendingRectangle(self.systemId, minX, maxX, minZ, maxZ, yOffset, parentTransformGroup)
end
function FoliageBendingSystem:destroyObject(id)
  destroyFoliageBendingObject(self.systemId, id)
end
