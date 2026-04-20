-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ObjectStorageDialog = {CONTROLS = {ITEM_TEXT = "itemText", ITEM_TEXTAMOUNT = "itemTextAmount", ITEMS_ELEMENT = "itemsElement", IAMOUNT_ELEMENT = "amountElement"}}
local ObjectStorageDialog_mt = Class(ObjectStorageDialog, YesNoDialog)
function ObjectStorageDialog.register()
  local objectStorageDialog = ObjectStorageDialog.new()
  v1:loadGui("dataS/gui/dialogs/ObjectStorageDialog.xml", "ObjectStorageDialog", objectStorageDialog)
  ObjectStorageDialog.INSTANCE = objectStorageDialog
end
function ObjectStorageDialog.show(callback, target, title, objectInfos, maxUnloadAmount)
  if ObjectStorageDialog.INSTANCE ~= nil then
    ObjectStorageDialog.INSTANCE:setCallback(callback, target)
    ObjectStorageDialog.INSTANCE:setTitle(title)
    ObjectStorageDialog.INSTANCE:setText(nil)
    ObjectStorageDialog.INSTANCE:setObjectInfos(objectInfos, maxUnloadAmount)
    v6:showDialog("ObjectStorageDialog")
  end
end
function ObjectStorageDialog.new(target, custom_mt)
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.selectedInfo = nil
  v2.selectedInfoIndex = 1
  v2.selectedAmount = 1
  v2.maxUnloadAmount = math.huge
  v2:registerControls(ObjectStorageDialog.CONTROLS)
  return v2
end
function ObjectStorageDialog:createFromExistingGui(v1)
  ObjectStorageDialog.register()
  ObjectStorageDialog.show(self.callbackFunc, self.target, self.dialogTitle, self.objectInfos)
end
function ObjectStorageDialog:onClickOk()
  self.callbackArgs = self.selectedAmount
  self:sendCallback(self.selectedInfoIndex)
  self.objectInfos = nil
end
function ObjectStorageDialog:onClickBack(forceBack, usedMenuButton)
  self:sendCallback(nil, nil)
  return false
end
function ObjectStorageDialog:onClickItems(state)
  self.selectedInfoIndex = state
  self.selectedInfo = self.objectInfos[state]
  if self.selectedInfo ~= nil then
    local v6 = math.min(self.maxUnloadAmount, self.selectedInfo.numObjects)
    -- TODO: structure LOP_FORNPREP (pc 27, target 43)
    local v8 = string.format("%d / %d", 1, self.selectedInfo.numObjects)
    table.insert(...)
    -- TODO: structure LOP_FORNLOOP (pc 42, target 28)
  end
  v3:setTexts(v2)
  self.selectedAmount = #v2
  v3:setState(self.selectedAmount, true)
end
function ObjectStorageDialog:onClickAmount(state)
  self.selectedAmount = state
end
function ObjectStorageDialog:setTitle(title)
  local v3 = v3:superClass()
  v3.setTitle(self, title)
  self.dialogTitle = title
end
function ObjectStorageDialog:setObjectInfos(objectInfos, maxUnloadAmount)
  self.objectInfos = objectInfos
  if not maxUnloadAmount then
  end
  self.maxUnloadAmount = v3
  for v7, v8 in pairs(objectInfos) do
    if not (v8.objects[1] ~= nil) then
      continue
    end
    local v11 = v11:getDialogText()
    table.insert(...)
  end
  v4:setTexts(v3)
  v4:setState(1, true)
end
