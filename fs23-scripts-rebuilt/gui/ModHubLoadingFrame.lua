-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModHubLoadingFrame = {}
local ModHubLoadingFrame_mt = Class(ModHubLoadingFrame, TabbedMenuFrameElement)
ModHubLoadingFrame.CONTROLS = {}
function ModHubLoadingFrame.register()
  local v0 = ModHubLoadingFrame.new()
  v1:loadGui("dataS/gui/ModHubLoadingFrame.xml", "ModHubLoadingFrame", v0, true)
end
function ModHubLoadingFrame.new(v0, v1)
  local v3 = v3:superClass()
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ModHubLoadingFrame.CONTROLS)
  return v2
end
function ModHubLoadingFrame.onFrameOpen(v0)
  local v2 = v2:superClass()
  v2.onFrameOpen(v0)
  v1:setVisible(false)
end
function ModHubLoadingFrame.onFrameClose(v0)
  v1:setVisible(true)
  local v2 = v2:superClass()
  v2.onFrameClose(v0)
end
