-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuTourFrame = {}
local InGameMenuTourFrame_mt = Class(InGameMenuTourFrame, TabbedMenuFrameElement)
InGameMenuTourFrame.CONTROLS = {"headerText", "contentItem", "controlItem", "layout"}
function InGameMenuTourFrame.register()
  local v0 = InGameMenuTourFrame.new()
  v1:loadGui("dataS/gui/InGameMenuTourFrame.xml", "TourFrame", v0, true)
end
function InGameMenuTourFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuTourFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  return v2
end
function InGameMenuTourFrame:createFromExistingGui(v1)
  local v2 = InGameMenuTourFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuTourFrame:delete()
  v1:delete()
  v1:delete()
  local v2 = v2:superClass()
  v2.delete(self)
end
function InGameMenuTourFrame:initialize()
  v1:unlinkElement()
  v1:unlinkElement()
  local v2 = v2:getText("button_abortTour")
  self.abortButton = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = function()
    self:onButtonCancel()
  end, profile = "buttonCancel"}
end
function InGameMenuTourFrame:onFrameOpen()
  local v2 = v2:superClass()
  v2.onFrameOpen(self)
  self:updateContents()
  v1:registerActionEvents()
  self:updateMenuButtons()
end
function InGameMenuTourFrame:onFrameClose()
  v1:removeActionEvents()
  local v2 = v2:superClass()
  v2.onFrameClose(self)
end
function InGameMenuTourFrame:updateMenuButtons()
  self.menuButtonInfo = {{inputAction = InputAction.MENU_BACK}}
  if g_currentMission.guidedTour ~= nil then
    local v2 = g_currentMission.guidedTour:getIsRunning()
    if v2 then
      v2 = g_currentMission.guidedTour:getCanAbort()
      if v2 then
        table.insert(self.menuButtonInfo, self.abortButton)
      end
    end
  end
  self:setMenuButtonInfoDirty()
end
function InGameMenuTourFrame:onButtonCancel()
  if g_currentMission.guidedTour ~= nil then
    local v2 = g_currentMission.guidedTour:getIsRunning()
    if v2 then
      v2 = g_currentMission.guidedTour:getCanAbort()
      if v2 then
        local v5 = v5:getText("tour_abort_question")
        YesNoDialog.show(self.onAbortTourAnswer, self, v5, "")
      end
    end
  end
end
function InGameMenuTourFrame.onAbortTourAnswer(v0, v1)
  if v1 and g_currentMission.guidedTour ~= nil then
    local v3 = g_currentMission.guidedTour:getIsRunning()
    if v3 then
      v3 = g_currentMission.guidedTour:getCanAbort()
      if v3 then
        g_currentMission.guidedTour:abort()
        v3:changeScreen(nil)
      end
    end
  end
end
function InGameMenuTourFrame:updateContents()
  v1:setLocaKey("ui_tour")
  -- TODO: structure LOP_FORNPREP (pc 13, target 23)
  v4:delete()
  -- TODO: structure LOP_FORNLOOP (pc 22, target 14)
  v1:invalidateLayout()
  local v1 = v1:getPassedSteps()
  local v2, v3 = getNormalizedScreenValues(0, 60)
  local v4, v5 = getNormalizedScreenValues(0, 30)
  for v9, v10 in ipairs(v1) do
    local v11 = v11:clone(self.layout)
    local v12 = v11:getDescendantByName("text")
    local v13 = v11:getDescendantByName("controls")
    if v9 == #v1 then
    elseif v9 % 2 == 1 then
    end
    v11:applyProfile(v14)
    local v17 = v17:convertText(v10.text)
    v12:setText(...)
    local v15 = v12:getTextHeight()
    v12:setSize(nil, v15)
    v17 = v17:getInputHelpMode()
    if v17 ~= GS_INPUT_HELP_MODE_GAMEPAD then
    end
    if v10.inputs ~= nil then
      for v21, v22 in ipairs(v10.inputs) do
        if v22.action2 ~= nil then
          -- if InputAction[v22.action2] then goto L134 end
        end
        if v22.keyboardOnly and not not v16 then
          continue
        end
        if v22.gamepadOnly and not v16 then
          continue
        end
        local v25 = v25:clone(v13)
        if v17 + 1 == 1 then
          v25:applyProfile("tourMenuItemControlsItemFirst")
        end
        local v26 = v25:getDescendantByName("glyph")
        v26:applyProfile("tourMenuItemControlsGlyph")
        v26:setActions({v23, v24})
        local v27 = v25:getDescendantByName("text")
        local v30 = v30:convertText(v22.text)
        v27:setText(...)
      end
    end
    if 0 >= v17 then
    end
    v13:setVisible(true)
    if 0 < v17 then
      v13:setSize(nil, v17 * v13.elements[1].absSize[2])
      v13:invalidateLayout()
    end
    v11:setSize(nil, v15)
  end
  v6:invalidateLayout()
  v6:scrollToEnd()
end
