-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AmbientSoundUtil = {}
function AmbientSoundUtil.onCreateSoundNode(v0, v1)
  Logging.warning("AmbientSoundUtil.onCreateSoundNode does not exist anymore. Use AudioSource and Visibility Conditions instead!")
end
function AmbientSoundUtil.onCreateMovingSound(v0, v1)
  v2:addMovingSound(v1)
end
