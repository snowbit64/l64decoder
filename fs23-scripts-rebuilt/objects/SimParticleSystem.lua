-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SimParticleSystem = {}
local SimParticleSystem_mt = Class(SimParticleSystem)
function SimParticleSystem.onCreate(v0, v1)
  local v4 = SimParticleSystem.new(v1)
  v2:addNonUpdateable(...)
end
function SimParticleSystem.new(name)
  setmetatable({}, u0)
  local v3 = getHasClassId({id = name}.id, ClassIds.SHAPE)
  if v3 then
    v3 = getGeometry({id = name}.id)
    if v3 ~= 0 then
      local v4 = getHasClassId(v3, ClassIds.PRECIPITATION)
      if v4 then
      end
    end
  end
  if v2 ~= nil then
    v3 = getParticleSystemLifespan(v2)
    addParticleSystemSimulationTime(v2, v3)
  end
  return v1
end
function SimParticleSystem.delete(v0)
end
