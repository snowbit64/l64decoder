-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionSound = {}
local ConstructionSound_mt = Class(ConstructionSound)
ConstructionSound.ID = {NONE = 0, TREE = 1, SCULPT = 2, PAINT = 3, FOLIAGE = 4}
function ConstructionSound.new(subclass_mt)
  if not subclass_mt then
  end
  local v1 = v1(v2, v3)
  v1.currentActiveSoundId = ConstructionSound.ID.NONE
  local v2 = v1:loadSamples("dataS/constructionSoundSamples.xml")
  v1.samples = v2
  return v1
end
function ConstructionSound.loadSamples(v0, v1)
  local v3 = XMLFile.load("constructionSound", v1)
  if v3 == nil then
    return {}
  end
  for v7, v8 in pairs(ConstructionSound.ID) do
    if not (v8 ~= ConstructionSound.ID.NONE) then
      continue
    end
    local v9 = v3:getInt("constructionSoundSamples." .. v7 .. "#loops", 0)
    local v14 = v7:lower()
    local v10 = v10:loadSample2DFromXML(v3.handle, "constructionSoundSamples", v14, "", v9, AudioGroup.GUI)
    if v10 ~= nil then
      v2[v8] = v10
    else
      Logging.warning("Warning: Could not load construction sound sample [%s]", v7)
    end
  end
  v3:delete()
  return v2
end
function ConstructionSound:delete()
  for v4, v5 in pairs(self.samples) do
    v6:deleteSample(v5)
    self.samples[v4] = nil
  end
end
function ConstructionSound:setActiveSound(soundId, pitchModifier)
  if soundId ~= self.currentActiveSoundId then
    if soundId == ConstructionSound.ID.NONE and not self.silenceQueued then
      self.silenceQueued = true
      return
    end
    self.silenceQueued = false
    if self.samples[self.currentActiveSoundId] ~= nil and self.samples[self.currentActiveSoundId].loops ~= 1 then
    end
    if v5 ~= nil and v5.loops ~= 1 then
    end
    if not v6 then
      v8:stopSample(v4)
    end
    v8:playSample(v5)
    self.currentActiveSoundId = soundId
  end
  if self.samples[self.currentActiveSoundId] ~= nil then
    if pitchModifier ~= nil then
      local v6 = MathUtil.smoothstep(0, 1, pitchModifier)
    end
    v4.current.pitch = v5
  end
  return v3
end
