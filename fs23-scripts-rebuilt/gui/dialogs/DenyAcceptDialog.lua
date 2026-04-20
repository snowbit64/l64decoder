-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DenyAcceptDialog = {CONTROLS = {"platformIcon", "dialogWarning"}}
local DenyAcceptDialog_mt = Class(DenyAcceptDialog, YesNoDialog)
function DenyAcceptDialog.register()
  local v0 = DenyAcceptDialog.new()
  v1:loadGui("dataS/gui/dialogs/DenyAcceptDialog.xml", "DenyAcceptDialog", v0)
  DenyAcceptDialog.INSTANCE = v0
end
function DenyAcceptDialog.show(v0, v1, v2, v3, v4, v5)
  if DenyAcceptDialog.INSTANCE ~= nil then
    DenyAcceptDialog.INSTANCE:setCallback(v0, v1)
    DenyAcceptDialog.INSTANCE:setConnection(v2, v3, v4, v5)
    v7:showDialog("DenyAcceptDialog")
  end
end
function DenyAcceptDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(DenyAcceptDialog.CONTROLS)
  return v2
end
function DenyAcceptDialog:createFromExistingGui(v1)
  local v2 = DenyAcceptDialog.new(nil, nil)
  v3:loadGui(self.xmlFilename, v1, v2)
  DenyAcceptDialog.show(self.callbackFunc, self.target, self.connection, self.nickname, self.platformId, self.splitShapesWithinLimits)
  return v2
end
function DenyAcceptDialog:sendCallback(isDenied, isAlwaysDenied)
  if self.inputDelay < self.time then
    self:close()
    if self.callbackFunc ~= nil then
      if self.target ~= nil then
        self.callbackFunc(self.target, self.connection, isDenied, isAlwaysDenied)
        return
      end
      self.callbackFunc(self.connection, isDenied, isAlwaysDenied)
    end
  end
end
function DenyAcceptDialog:onClickAccept()
  self:sendCallback(false, false)
  return false
end
function DenyAcceptDialog:onClickBack(forceBack)
  self:onClickRefuse()
end
function DenyAcceptDialog:onClickRefuse(forceBack)
  self:sendCallback(true, false)
  return false
end
function DenyAcceptDialog:onClickDenyAlways()
  self:sendCallback(true, true)
  return false
end
function DenyAcceptDialog:setConnection(connection, nickname, platformId, splitShapesWithinLimits)
  if connection ~= nil then
    self.connection = connection
  end
  self:setTitle(nickname)
  v5:setPlatformId(platformId)
  v5:invalidateLayout()
  v5:setVisible(not splitShapesWithinLimits)
  self.nickname = nickname
  self.platformId = platformId
  self.splitShapesWithinLimits = splitShapesWithinLimits
end
