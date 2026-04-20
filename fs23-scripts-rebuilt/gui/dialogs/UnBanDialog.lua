-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

UnBanDialog = {}
local UnBanDialog_mt = Class(UnBanDialog, DialogElement)
UnBanDialog.CONTROLS = {"dialogElement", "dialogTitleElement", "banList", "buttonLayout", "backButton", "unblockButton", "noBansText", "loadingText"}
function UnBanDialog.register()
  local v0 = UnBanDialog.new()
  v1:loadGui("dataS/gui/dialogs/UnBanDialog.xml", "UnBanDialog", v0)
  UnBanDialog.INSTANCE = v0
end
function UnBanDialog.show(v0, v1, v2)
  if UnBanDialog.INSTANCE ~= nil then
    UnBanDialog.INSTANCE:setCallback(v0, v1)
    UnBanDialog.INSTANCE:setUseLocalList(v2 or false)
    v4:showDialog("UnBanDialog")
  end
end
function UnBanDialog.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(UnBanDialog.CONTROLS)
  v2.blockedPlayers = {}
  v2.callbackFunc = u1
  v2.target = nil
  return v2
end
function UnBanDialog:createFromExistingGui(v1)
  UnBanDialog.register()
  UnBanDialog.show(self.callbackFunc, self.target, self.useLocal)
end
function UnBanDialog:updateButtons()
  if 0 >= #self.blockedPlayers then
  end
  v1:setVisible(true)
  v1:invalidateLayout()
end
function UnBanDialog:setUseLocalList(useLocal)
  self.useLocal = useLocal
  self:reloadData()
end
function UnBanDialog:setCallback(callbackFunc, target)
  if not callbackFunc then
  end
  self.callbackFunc = v3
  self.target = target
end
function UnBanDialog:closeAndCallback()
  if self.inputDelay < self.time then
    self:close()
    if self.callbackFunc ~= nil then
      if self.target ~= nil then
        self.callbackFunc(self.target)
        return
      end
      self.callbackFunc()
    end
  end
end
function UnBanDialog:onCreate()
  v1:setDataSource(self)
end
function UnBanDialog:onOpen()
  local v2 = v2:superClass()
  v2.onOpen(self)
  self.inputDelay = self.time + 250
  self:updateButtons()
end
function UnBanDialog.onClose(v0)
  local v2 = v2:superClass()
  v2.onClose(v0)
  v1:unsubscribeAll(v0)
end
function UnBanDialog:onClickBack(_, _)
  self:closeAndCallback()
  return false
end
function UnBanDialog:onClickUnblock()
  if 0 < #self.blockedPlayers then
    if self.blockedPlayers[self.banList.selectedIndex].isLocal then
      setIsUserBlocked(self.blockedPlayers[self.banList.selectedIndex].uniqueUserId, self.blockedPlayers[self.banList.selectedIndex].platformUserId, self.blockedPlayers[self.banList.selectedIndex].platformId, false, "")
      self:reloadData()
    else
      local v2 = v2:getServerConnection()
      local v4 = UnbanEvent.new(self.blockedPlayers[self.banList.selectedIndex].uniqueUserId)
      v2:sendEvent(...)
      v2 = v2:getServerConnection()
      v4 = GetBansEvent.new()
      v2:sendEvent(...)
      v2:setVisible(true)
    end
  end
  self:updateButtons()
end
function UnBanDialog:onServerBansUpdated(bans)
  self.blockedPlayers = bans
  v2:setVisible(false)
  if #self.blockedPlayers ~= 0 then
  end
  v2:setVisible(true)
  v2:reloadData()
  self:updateButtons()
end
function UnBanDialog:reloadData()
  self.blockedPlayers = {}
  if not self.useLocal then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x0 -> L75
    local v1 = v1:getIsServer()
    -- if not v1 then goto L75 end
  end
  local v4 = getNumOfBlockedUsers()
  -- TODO: structure LOP_FORNPREP (pc 23, target 48)
  local v4, v5, v6, v7 = getBlockedUser(0)
  table.insert(self.blockedPlayers, {uniqueUserId = v4, platformUserId = v5, platformId = v6, displayName = v7, isLocal = true})
  -- TODO: structure LOP_FORNLOOP (pc 47, target 24)
  if #self.blockedPlayers ~= 0 then
  end
  v1:setVisible(true)
  v1:setVisible(false)
  v1:reloadData()
  self:updateButtons()
  return
  v1:subscribe(GetBansEvent, self.onServerBansUpdated, self)
  v1 = v1:getServerConnection()
  local v3 = GetBansEvent.new()
  v1:sendEvent(...)
  v1:setVisible(true)
  v1:setVisible(false)
  self:updateButtons()
end
function UnBanDialog:getNumberOfItemsInSection(list, section)
  return #self.blockedPlayers
end
function UnBanDialog:populateCellForItemInSection(list, section, index, cell)
  local v6 = cell:getAttribute("name")
  v6:setText(self.blockedPlayers[index].displayName)
end
