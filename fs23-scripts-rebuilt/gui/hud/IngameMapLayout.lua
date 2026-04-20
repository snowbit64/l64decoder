-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IngameMapLayout = {}
local IngameMapLayout_mt = Class(IngameMapLayout)
function IngameMapLayout.new(customMt)
  if not customMt then
  end
  return v1(v2, v3)
end
function IngameMapLayout.delete(v0)
end
function IngameMapLayout.activate(v0)
end
function IngameMapLayout.deactivate(v0)
end
function IngameMapLayout.createComponents(v0, v1, v2)
end
function IngameMapLayout.storeScaledValues(v0, v1, v2)
end
function IngameMapLayout.drawBefore(v0)
end
function IngameMapLayout.drawAfter(v0)
end
function IngameMapLayout.drawCoordinates(v0, v1)
end
function IngameMapLayout.drawLatency(v0, v1, v2)
end
function IngameMapLayout.setPlayerPosition(v0, v1, v2, v3)
end
function IngameMapLayout.setPlayerVelocity(v0, v1)
end
function IngameMapLayout.setWorldSize(v0, v1, v2)
end
function IngameMapLayout.setHasUnreadMessages(v0, v1)
end
function IngameMapLayout.getMapPivot(v0)
  return 0, 0
end
function IngameMapLayout.getMapRotation(v0)
  return 0
end
function IngameMapLayout.getMapSize(v0)
  return 1, 1
end
function IngameMapLayout.getMapPosition(v0)
  return 0, 0
end
function IngameMapLayout.getMapAlpha(v0)
  return 1
end
function IngameMapLayout.getShowsToggleAction(v0)
  return true
end
function IngameMapLayout.getShowsToggleActionText(v0)
  return false
end
function IngameMapLayout.getIconZoom(v0)
  return 1
end
function IngameMapLayout.getShowSmallIconVariation(v0)
  return false
end
function IngameMapLayout.getBlinkPlayerArrow(v0)
  return false
end
function IngameMapLayout.getHeight(v0)
  return 0
end
function IngameMapLayout.getMapObjectPosition(v0, v1, v2, v3, v4, v5, v6)
  return 0, 0, 0, false
end
