-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ExtraContentSystem = {PROFILE_FILENAME = "extraContent.xml", VALID_CHARS_STRING = "ABCDEFHJKLMNPQRSTWXYZ123456789", VALID_CHARS_PATTERN = "[" .. ExtraContentSystem.VALID_CHARS_STRING .. "]", VALID_CHARS_NOT_PATTERN = "[^" .. ExtraContentSystem.VALID_CHARS_STRING .. "]", VALID_CHARS = {}}
for v3 in v0:gmatch(".") do
  table.insert(ExtraContentSystem.VALID_CHARS, v3)
end
ExtraContentSystem.KEY_LENGTH = 8
ExtraContentSystem.NUM_ITEM_CHARACTERS = 3
ExtraContentSystem.ITEM_INDEX_1 = 1
ExtraContentSystem.ITEM_INDEX_2 = 4
ExtraContentSystem.ITEM_INDEX_3 = 6
ExtraContentSystem.UNLOCKED = 0
ExtraContentSystem.ERROR_KEY_INVALID = 1
ExtraContentSystem.ERROR_ALREADY_UNLOCKED = 2
ExtraContentSystem.ERROR_KEY_INVALID_FORMAT = 3
v0 = Class(ExtraContentSystem)
function ExtraContentSystem.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.items = {}
  v2.idToItem = {}
  if g_isDevelopmentVersion then
    addConsoleCommand("gsExtraContentSystemCreateKeys", "Create keys for a given item code", "consoleCommandCreateKeys", v2)
    addConsoleCommand("gsExtraContentSystemCreateKeysAll", "Create keys for all items", "consoleCommandCreateKeysAll", v2)
    addConsoleCommand("gsExtraContentSystemUnlockAll", "Unlocks all items", "consoleCommandUnlockAll", v2)
    return v2
  end
  ExtraContentSystem.consoleCommandCreateKeys = nil
  ExtraContentSystem.consoleCommandCreateKeysAll = nil
  ExtraContentSystem.consoleCommandUnlockAll = nil
  ExtraContentSystem.createKeyItem = nil
  v2.consoleCommandCreateKeys = nil
  v2.consoleCommandCreateKeysAll = nil
  v2.consoleCommandUnlockAll = nil
  v2.createKeyItem = nil
  return v2
end
function ExtraContentSystem:delete()
  self.items = {}
  self.idToItem = {}
  removeConsoleCommand("gsExtraContentSystemCreateKeys")
  removeConsoleCommand("gsExtraContentSystemCreateKeysAll")
  removeConsoleCommand("gsExtraContentSystemUnlockAll")
end
function ExtraContentSystem.loadFromXML(v0, v1)
  local v2 = XMLFile.load("extraContentSystem", v1, nil)
  if v2 ~= nil then
    v2:iterate("extraContent.item", function(v0, v1)
      local v2 = v2:getString(v1 .. "#id")
      local v3 = v3:getString(v1 .. "#code")
      local v4 = v4:getString(v1 .. ".title")
      local v5 = v5:getString(v1 .. ".description")
      local v6 = v6:getString(v1 .. ".imageFilename")
      local v7 = v7:getBool(v1 .. "#isAutoUnlocked", false)
      if v2 == nil then
        Logging.xmlWarning(u0, "Extra content item id is missing for '%s'", v1)
        return
      end
      if v3 == nil then
        Logging.xmlWarning(u0, "Extra content item code is missing for '%s'", v1)
        return
      end
      local v8 = v3:upper()
      local v8, v9 = v8:getStringHasValidCharacters(v8)
      if not v8 then
        Logging.xmlWarning(u0, "Extra content item code contains invalid charater '%s' for '%s'!", v9, v1)
        return
      end
      local v10 = v3:toList(ExtraContentSystem.VALID_CHARS_PATTERN)
      if #v10 ~= ExtraContentSystem.NUM_ITEM_CHARACTERS then
        Logging.xmlWarning(u0, "Extra content item code needs to have %d characters for '%s'", ExtraContentSystem.NUM_ITEM_CHARACTERS, v1)
        return
      end
      if v6 == nil then
        Logging.xmlWarning(u0, "Extra content item imageFilename is missing for '%s'", v1)
        return
      end
      if v4 == nil then
        Logging.xmlWarning(u0, "Extra content item title is missing for '%s'", v1)
        return
      end
      if v5 == nil then
        Logging.xmlWarning(u0, "Extra content item description is missing for '%s'", v1)
        return
      end
      local v11 = v11:convertText(v4)
      v11 = v11:convertText(v5)
      v11:addItem(v2, v11, v11, v6, v10, v7)
    end)
    v2:delete()
  end
end
function ExtraContentSystem:addItem(id, title, description, imageFilename, charList, isAutoUnlocked)
  if self.idToItem[id] ~= nil then
    Logging.warning("Extra content item with id '%s' already exists!", id)
    return
  end
  table.sort(charList, function(self, id)
    if self >= id then
    end
    return true
  end)
  local v7 = table.concat(charList, "")
  for v12, v13 in ipairs(self.items) do
    for v17, v18 in ipairs(v13.charList) do
      if not (v18 ~= charList[v17]) then
        continue
      end
      break
    end
  end
  if 0 < #self.items and v8 then
    Logging.warning("Extra content code for '%s' is already used!", id)
    return
  end
  if id == "STADIA" and GS_PLATFORM_GGP then
  end
  table.insert(self.items, {id = id, title = title, description = description, imageFilename = imageFilename, charList = charList, code = v7, isAutoUnlocked = isAutoUnlocked, isUnlocked = false, unlockedByDLC = false})
  self.idToItem[id] = {id = id, title = title, description = description, imageFilename = imageFilename, charList = charList, code = v7, isAutoUnlocked = isAutoUnlocked, isUnlocked = false, unlockedByDLC = false}
end
function ExtraContentSystem:loadFromProfile()
  local v4 = getUserProfileAppPath()
  local v2 = fileExists(v4 .. ExtraContentSystem.PROFILE_FILENAME)
  if v2 then
    local v3 = XMLFile.load("extraContentProfile", v4 .. ExtraContentSystem.PROFILE_FILENAME, nil)
    if v3 ~= nil then
      v3:iterate("extraContent.usedKey", function(self, v1)
        local v2 = v2:getString(v1)
        local v3 = v3:getBool(v1 .. "#unlockedByDLC")
        if v3 == nil then
          u1 = true
        end
        if v2 ~= nil and v3 == false then
          local v4, v5 = v4:unlockItem(v2, v3)
          if v4 ~= nil then
            print("Extra Content: Unlocked '" .. v4.id .. "'")
          end
        end
      end)
      v3:delete()
    end
    if v2 then
      self:saveToProfile()
    end
  end
end
function ExtraContentSystem:saveToProfile()
  local v4 = getUserProfileAppPath()
  local v2 = XMLFile.create("extraContentProfile", v4 .. ExtraContentSystem.PROFILE_FILENAME, "extraContent", nil)
  for v7, v8 in ipairs(self.items) do
    if not v8.isUnlocked then
      continue
    end
    if not (v8.usedKey ~= nil) then
      continue
    end
    local v11 = string.format("extraContent.usedKey(%d)", v3)
    v2:setString(v11, v8.usedKey)
    v11 = string.format("extraContent.usedKey(%d)#unlockedByDLC", v3)
    local v12 = Utils.getNoNil(v8.unlockedByDLC, false)
    v2:setBool(...)
  end
  v2:save()
  v2:delete()
  syncProfileFiles()
end
function ExtraContentSystem:reset()
  for v4, v5 in ipairs(self.items) do
    v5.isUnlocked = false
    v5.unlockedByDLC = false
    v5.usedKey = nil
  end
end
function ExtraContentSystem:getItemByKey(key)
  if key ~= nil then
    local v2 = key:len()
    -- if v2 == ExtraContentSystem.KEY_LENGTH then goto L17 end
  end
  return nil, ExtraContentSystem.ERROR_KEY_INVALID_FORMAT
  v2 = key:toList(ExtraContentSystem.VALID_CHARS_PATTERN)
  if #v2 ~= ExtraContentSystem.KEY_LENGTH then
    return nil, ExtraContentSystem.ERROR_KEY_INVALID_FORMAT
  end
  table.sort({v2[ExtraContentSystem.ITEM_INDEX_1], v2[ExtraContentSystem.ITEM_INDEX_2], v2[ExtraContentSystem.ITEM_INDEX_3]}, function(self, key)
    if self >= key then
    end
    return true
  end)
  local v4 = self:getItemByCode({v2[ExtraContentSystem.ITEM_INDEX_1], v2[ExtraContentSystem.ITEM_INDEX_2], v2[ExtraContentSystem.ITEM_INDEX_3]})
  if v4 == nil then
    return nil, ExtraContentSystem.ERROR_KEY_INVALID
  end
  local v6 = self:getChecksumChar(v2)
  if v2[ExtraContentSystem.KEY_LENGTH] ~= v6 then
    return nil, ExtraContentSystem.ERROR_KEY_INVALID
  end
  return v4
end
function ExtraContentSystem:getItemByCode(charList)
  for v6, v7 in ipairs(self.items) do
    for v12, v13 in ipairs(v7.charList) do
      if not (v13 ~= charList[v12]) then
        continue
      end
      break
    end
    if not v8 then
      continue
    end
    return v7
  end
  return v2
end
function ExtraContentSystem:unlockItem(key, unlockedByDLC)
  local v3, v4 = self:getItemByKey(key)
  if v3 == nil then
    return nil, v4
  end
  if v3.isUnlocked then
    return v3, ExtraContentSystem.ERROR_ALREADY_UNLOCKED
  end
  v3.isUnlocked = true
  v3.usedKey = key
  v3.unlockedByDLC = unlockedByDLC
  self:saveToProfile()
  return v3, ExtraContentSystem.UNLOCKED
end
function ExtraContentSystem:getIsItemIdUnlocked(id)
  if self.idToItem[id] == nil then
    local v5 = tostring(id)
    Logging.warning(...)
    return false
  end
  return self:getIsItemUnlocked(v2)
end
function ExtraContentSystem.getIsItemUnlocked(v0, v1)
  if v1 == nil then
    return false
  end
  if v1.isAutoUnlocked then
    return true
  end
  return v1.isUnlocked
end
function ExtraContentSystem:getUnlockedItems()
  for v5, v6 in ipairs(self.items) do
    local v7 = self:getIsItemUnlocked(v6)
    if not v7 then
      continue
    end
    table.insert(v1, v6)
  end
  return v1
end
function ExtraContentSystem:getHasLockedItems()
  for v4, v5 in ipairs(self.items) do
    local v6 = self:getIsItemUnlocked(v5)
    if not not v6 then
      continue
    end
    return true
  end
  return false
end
function ExtraContentSystem.getStringHasValidCharacters(v0, v1)
  local v2 = v1:match(ExtraContentSystem.VALID_CHARS_NOT_PATTERN)
  if v2 ~= nil then
  end
  return true, v2
end
function ExtraContentSystem.getChecksumChar(v0, v1)
  -- TODO: structure LOP_FORNPREP (pc 8, target 17)
  local v7 = string.byte(v1[1])
  -- TODO: structure LOP_FORNLOOP (pc 16, target 9)
  return ExtraContentSystem.VALID_CHARS[(0 + v7) % #ExtraContentSystem.VALID_CHARS + 1]
end
function ExtraContentSystem:consoleCommandUnlockAll()
  for v4, v5 in ipairs(self.items) do
    local v6 = table.copyIndex(v5.charList)
    local v7 = self:createItemKey(v5, v6)
    self:unlockItem(v7)
  end
end
function ExtraContentSystem:consoleCommandCreateKeysAll(numKeys)
  local v2 = tonumber(numKeys)
  setFileLogPrefixTimestamp(false)
  for v5, v6 in ipairs(self.items) do
    local v10 = v10:convertText(v6.title)
    local v8 = string.format(...)
    print(...)
    local v7 = table.copyIndex(v6.charList)
    while true do
      if not (0 < v9) then
        break
      end
      v10 = self:createItemKey(v6, v7)
      if v10 == nil then
        return
      end
      if not (v8[v10] == nil) then
        continue
      end
      print("    " .. v10)
      v8[v10] = true
    end
  end
  setFileLogPrefixTimestamp(g_logFilePrefixTimestamp)
  return "Finished"
end
function ExtraContentSystem:consoleCommandCreateKeys(itemCode, numKeys, file)
  local v4 = tonumber(numKeys)
  if itemCode == nil then
    return "Invalid item code"
  end
  if file ~= nil then
    local xmlFile = XMLFile.load("keys", file)
    if xmlFile ~= nil then
      xmlFile:iterate("keys.key", function(self, itemCode)
        local numKeys = numKeys:getString(itemCode)
        if numKeys ~= nil then
          local v4 = string.trim(numKeys)
          u1[v4] = true
          u2 = u2 + 1
        end
      end)
      local v8 = string.format("Loaded %d existing keys from file...", 0)
      print(...)
    else
      return "Could not load given existing key file"
    end
  end
  xmlFile = itemCode:upper()
  xmlFile = xmlFile:toList(ExtraContentSystem.VALID_CHARS_PATTERN)
  if #xmlFile ~= ExtraContentSystem.NUM_ITEM_CHARACTERS then
    return "Invalid item code"
  end
  table.sort(xmlFile, function(self, itemCode)
    if self >= itemCode then
    end
    return true
  end)
  local v6 = self:getItemByCode(xmlFile)
  if v6 == nil then
    return "Item not found in extra content system"
  end
  setFileLogPrefixTimestamp(false)
  local v10 = v10:convertText(v6.title)
  v8 = string.format(...)
  print(...)
  while true do
    if not (0 < numKeys) then
      break
    end
    v7 = self:createItemKey(v6, xmlFile)
    if v7 == nil then
      return
    end
    if not (v4[v7] == nil) then
      continue
    end
    print("    " .. v7)
    v4[v7] = true
  end
  setFileLogPrefixTimestamp(g_logFilePrefixTimestamp)
  return "Finished"
end
function ExtraContentSystem:createItemKey(item, itemChars)
  -- TODO: structure LOP_FORNPREP (pc 19, target 38)
  local v8 = math.random(1, #ExtraContentSystem.VALID_CHARS)
  table.insert({}, ExtraContentSystem.VALID_CHARS[v8])
  -- TODO: structure LOP_FORNLOOP (pc 37, target 20)
  local v5 = Utils.shuffle(itemChars)
  table.insert({}, ExtraContentSystem.ITEM_INDEX_1, v5[1])
  table.insert({}, ExtraContentSystem.ITEM_INDEX_2, v5[2])
  table.insert({}, ExtraContentSystem.ITEM_INDEX_3, v5[3])
  v5 = self:getChecksumChar({})
  table.insert({}, v5)
  local v6 = table.concat({}, "")
  local v7, v8 = self:getItemByKey(v6)
  if v7 ~= nil and item == v7 then
    return v6
  end
  local v11 = tostring(v8)
  Logging.error("Created invalid product key (error code: %s) - %s", v11, v6)
  return nil
end
