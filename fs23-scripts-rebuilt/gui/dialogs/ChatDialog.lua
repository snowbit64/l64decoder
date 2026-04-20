-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChatDialog = {CONTROLS = {CHAT_INPUT_ELEMENT = "textElement"}, SCROLL_DELAY = 100}
local ChatDialog_mt = Class(ChatDialog, ScreenElement)
function ChatDialog.register()
  local v0 = ChatDialog.new()
  v1:loadGui("dataS/gui/dialogs/ChatDialog.xml", "ChatDialog", v0)
end
function ChatDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(ChatDialog.CONTROLS)
  v2.lastScrollTime = 0
  v2.returnScreenName = ""
  return v2
end
function ChatDialog:onOpen(element)
  local v3 = v3:superClass()
  v3.onOpen(self)
  g_currentMission.isPlayerFrozen = true
  v2:openIme()
  v2:setForcePressed(true)
  v2:setText("")
  v2:registerActionEvent(InputAction.MENU_AXIS_UP_DOWN, self, self.onMenuAxisUpDown, false, true, true, true)
end
function ChatDialog:onClose(element)
  local v3 = v3:superClass()
  v3.onClose(self)
  if g_currentMission ~= nil then
    v2:scrollChatMessages(-9999999)
    v2:toggleChat(false)
    g_currentMission.isPlayerFrozen = false
  end
  v2:abortIme()
  v2:setForcePressed(false)
end
function ChatDialog:onCreateTextInput(element)
  self.textElement = element
end
function ChatDialog:onSendClick()
  if self.textElement.text ~= "" then
    local v2 = v2:getFarmId()
    if GS_PLATFORM_TYPE == GS_PLATFORM_TYPE_GGP then
      local v4 = getAllowTextCommunication()
    end
    if v3 then
      if g_server ~= nil then
        local v6 = ChatEvent.new(self.textElement.text, v1, v2, g_currentMission.playerUserId)
        v4:broadcastEvent(...)
      else
        v4 = v4:getServerConnection()
        v6 = ChatEvent.new(self.textElement.text, v1, v2, g_currentMission.playerUserId)
        v4:sendEvent(...)
      end
      v4:addChatMessage(v1, self.textElement.text, v2, g_currentMission.playerUserId)
    end
    v4:setText("")
  end
  v1:showGui("")
end
function ChatDialog:onMenuAxisUpDown(actionName, inputValue)
  if 0 < inputValue then
  elseif inputValue < 0 then
  end
  if v3 ~= 0 and self.lastScrollTime + ChatDialog.SCROLL_DELAY <= g_time then
    v4:scrollChatMessages(v3)
    self.lastScrollTime = g_time
  end
end
function ChatDialog.update(v0, actionName)
  local v3 = v3:superClass()
  v3.update(v0, actionName)
end
function ChatDialog:onEnterPressed()
  self:onSendClick()
end
function ChatDialog:onEscPressed()
  actionName:setText("")
  actionName:showGui("")
end
