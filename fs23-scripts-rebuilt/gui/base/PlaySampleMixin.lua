-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaySampleMixin = {}
local PlaySampleMixin_mt = Class(PlaySampleMixin, GuiMixin)
function PlaySampleMixin.new()
  return GuiMixin.new(u0, PlaySampleMixin)
end
function PlaySampleMixin.addTo(v0, v1)
  local v3 = v3:superClass()
  local v2 = v3.addTo(v0, v1)
  if v2 then
    v1.setPlaySampleCallback = PlaySampleMixin.setPlaySampleCallback
    v1.playSample = PlaySampleMixin.playSample
    v1.disablePlaySample = PlaySampleMixin.disablePlaySample
    v1[PlaySampleMixin].playSampleCallback = u0
    return true
  end
  return false
end
function PlaySampleMixin:setPlaySampleCallback(v1)
  self[PlaySampleMixin].playSampleCallback = v1
end
function PlaySampleMixin:playSample(v1)
  if not self.soundDisabled then
    self[PlaySampleMixin].playSampleCallback(v1)
  end
end
function PlaySampleMixin:disablePlaySample()
  self[PlaySampleMixin].playSampleCallback = u0
end
function PlaySampleMixin.clone(v0, v1, v2)
  v2[PlaySampleMixin].playSampleCallback = v1[PlaySampleMixin].playSampleCallback
end
