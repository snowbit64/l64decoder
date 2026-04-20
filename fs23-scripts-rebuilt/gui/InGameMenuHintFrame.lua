-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuHintFrame = {}
local v0 = Class(InGameMenuHintFrame, TabbedMenuFrameElement)
InGameMenuHintFrame.CONTROLS = {"headerText", "contentItem", "controlItem", "layout"}
function InGameMenuHintFrame.register()
  local v0 = InGameMenuHintFrame.new()
  v1:loadGui("dataS/gui/InGameMenuHintFrame.xml", "HintFrame", v0, true)
end
function InGameMenuHintFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuHintFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  return v2
end
function InGameMenuHintFrame:createFromExistingGui(v1)
  local v2 = InGameMenuHintFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuHintFrame:delete()
  v1:delete()
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function InGameMenuHintFrame:initialize()
  v1:unlinkElement()
  v1:unlinkElement()
end
function InGameMenuHintFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:updateContents()
  v1:registerActionEvents()
  self.menuButtonInfo = {{inputAction = InputAction.MENU_BACK}}
end
function InGameMenuHintFrame:onFrameClose()
  v1:removeActionEvents()
  local v2 = v2:superClass()
  v2.onFrameClose(self)
end
function InGameMenuHintFrame:updateContents()
  v1:setLocaKey("ui_hint")
  -- TODO: structure LOP_FORNPREP (pc 13, target 23)
  v4:delete()
  -- TODO: structure LOP_FORNLOOP (pc 22, target 14)
  v1:invalidateLayout()
  local v1 = v1:getShownHints()
  local v2, v3 = getNormalizedScreenValues(0, 60)
  for v7, v8 in ipairs(v1) do
    local v9 = v9:clone(self.layout)
    local v10 = v9:getDescendantByName("text")
    if v7 == #v1 then
    elseif v7 % 2 == 1 then
    end
    v9:applyProfile(v11)
    v10:setText(v8)
    local v12 = v10:getTextHeight()
    v10:setSize(nil, v12)
    v9:setSize(nil, v12 + v3)
  end
  v4:invalidateLayout()
  v4:scrollToEnd()
end
