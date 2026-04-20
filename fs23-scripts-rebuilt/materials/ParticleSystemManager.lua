-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ParticleSystemManager = {}
ParticleType = nil
local ParticleSystemManager_mt = Class(ParticleSystemManager, AbstractManager)
function ParticleSystemManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function ParticleSystemManager:initDataStructures()
  self.nameToIndex = {}
  self.particleTypes = {}
  self.particleSystems = {}
end
function ParticleSystemManager:loadMapData()
  local v2 = v2:superClass()
  v2.loadMapData(self)
  self:addParticleType("unloading")
  self:addParticleType("smoke")
  self:addParticleType("smoke_chimney")
  self:addParticleType("chopper")
  self:addParticleType("straw")
  self:addParticleType("cutter_chopper")
  self:addParticleType("soil")
  self:addParticleType("soil_smoke")
  self:addParticleType("soil_chunks")
  self:addParticleType("soil_big_chunks")
  self:addParticleType("soil_harvesting")
  self:addParticleType("spreader")
  self:addParticleType("spreader_smoke")
  self:addParticleType("windrower")
  self:addParticleType("tedder")
  self:addParticleType("weeder")
  self:addParticleType("crusher_wood")
  self:addParticleType("crusher_dust")
  self:addParticleType("prepare_fruit")
  self:addParticleType("cleaning_soil")
  self:addParticleType("cleaning_dust")
  self:addParticleType("washer_water")
  self:addParticleType("chainsaw_wood")
  self:addParticleType("chainsaw_dust")
  self:addParticleType("pickup")
  self:addParticleType("pickup_falling")
  self:addParticleType("sowing")
  self:addParticleType("loading")
  self:addParticleType("wheel_dust")
  self:addParticleType("wheel_dry")
  self:addParticleType("wheel_wet")
  self:addParticleType("wheel_snow")
  self:addParticleType("bees")
  self:addParticleType("horse_step_slow")
  self:addParticleType("horse_step_fast")
  ParticleType = self.nameToIndex
  return true
end
function ParticleSystemManager:unloadMapData()
  for v4, v5 in pairs(self.particleSystems) do
    ParticleUtil.deleteParticleSystem(v5)
  end
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function ParticleSystemManager:addParticleType(name)
  local v2 = ClassUtil.getIsValidIndexName(name)
  if not v2 then
    local v7 = tostring(name)
    print("Warning: '" .. v7 .. "' is not a valid name for a particleType. Ignoring it!")
    return nil
  end
  v2 = name:upper()
  if self.nameToIndex[v2] == nil then
    table.insert(self.particleTypes, v2)
    self.nameToIndex[v2] = #self.particleTypes
  end
end
function ParticleSystemManager:getParticleSystemTypeByName(name)
  if name ~= nil then
    local v2 = name:upper()
    if self.nameToIndex[v2] ~= nil then
      return v2
    end
  end
  return nil
end
function ParticleSystemManager:addParticleSystem(particleType, particleSystem)
  if self.particleSystems[particleType] ~= nil then
    ParticleUtil.deleteParticleSystem(self.particleSystems[particleType])
  end
  self.particleSystems[particleType] = particleSystem
end
function ParticleSystemManager:getParticleSystem(particleTypeName)
  local particleType = self:getParticleSystemTypeByName(particleTypeName)
  if particleType == nil then
    return nil
  end
  return self.particleSystems[particleType]
end
local v1 = ParticleSystemManager.new()
g_particleSystemManager = v1
