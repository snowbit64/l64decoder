-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InfoHUDBox = {}
local InfoHUDBox_mt = Class(InfoHUDBox)
function InfoHUDBox.new(classMt, uiScale)
  if not classMt then
  end
  local v2 = v2(v3, v4)
  v2.uiScale = uiScale
  v2:setScale(uiScale)
  return v2
end
function InfoHUDBox.delete(v0)
end
function InfoHUDBox.canDraw(v0)
  return true
end
function InfoHUDBox.getDisplayHeight(v0)
  return 0
end
function InfoHUDBox.draw(v0, v1, v2)
end
function InfoHUDBox.setScale(v0, v1)
end
function InfoHUDBox.storeScaledValues(v0)
end
