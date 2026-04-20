-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IngameMapLayoutNone = {}
local IngameMapLayoutNone_mt = Class(IngameMapLayoutNone, IngameMapLayout)
function IngameMapLayoutNone.new()
  local v1 = v1:superClass()
  return v1.new(u0)
end
function IngameMapLayoutNone.getMapSize(v0)
  return 0, 0
end
function IngameMapLayoutNone.getShowsToggleAction(v0)
  return false
end
function IngameMapLayoutNone.getShowsToggleActionText(v0)
  return true
end
function IngameMapLayoutNone.getMapObjectPosition(v0, v1, v2, v3, v4, v5, v6)
  return 0, 0, 0, false
end
