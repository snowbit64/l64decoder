-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ModManager = {}
local ModManager_mt = Class(ModManager, AbstractManager)
function ModManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function ModManager:initDataStructures()
  self.hashToMod = {}
  self.nameToMod = {}
  self.validMods = {}
  self.multiplayerMods = {}
  self.mods = {}
  self.numMods = 0
end
function ModManager:addMod(title, description, version, modDescVersion, author, iconFilename, modName, modDir, modFile, isMultiplayerSupported, fileHash, absBaseFilename, isDirectory, isDLC, hasScripts, dependencies, multiplayerOnly, isSelectable, uniqueType, isInternalScriptMod)
  if fileHash ~= nil and self.hashToMod[fileHash] ~= nil then
    print("Error: Adding mod with same file hash twice. Title is " .. title .. " filehash: " .. fileHash)
    return nil
  end
  self.numMods = self.numMods + 1
  table.insert(self.mods, {id = self.numMods, title = title, description = description, version = version, modDescVersion = modDescVersion, author = author, iconFilename = iconFilename, isDLC = isDLC, fileHash = fileHash, modName = modName, modDir = modDir, modFile = modFile, absBaseFilename = absBaseFilename, isDirectory = isDirectory, isMultiplayerSupported = isMultiplayerSupported, isSelectable = isSelectable, hasScripts = hasScripts, isInternalScriptMod = isInternalScriptMod, dependencies = dependencies, multiplayerOnly = multiplayerOnly, uniqueType = uniqueType})
  self.nameToMod[modName] = {id = self.numMods, title = title, description = description, version = version, modDescVersion = modDescVersion, author = author, iconFilename = iconFilename, isDLC = isDLC, fileHash = fileHash, modName = modName, modDir = modDir, modFile = modFile, absBaseFilename = absBaseFilename, isDirectory = isDirectory, isMultiplayerSupported = isMultiplayerSupported, isSelectable = isSelectable, hasScripts = hasScripts, isInternalScriptMod = isInternalScriptMod, dependencies = dependencies, multiplayerOnly = multiplayerOnly, uniqueType = uniqueType}
  if fileHash ~= nil then
    table.insert(self.validMods, {id = self.numMods, title = title, description = description, version = version, modDescVersion = modDescVersion, author = author, iconFilename = iconFilename, isDLC = isDLC, fileHash = fileHash, modName = modName, modDir = modDir, modFile = modFile, absBaseFilename = absBaseFilename, isDirectory = isDirectory, isMultiplayerSupported = isMultiplayerSupported, isSelectable = isSelectable, hasScripts = hasScripts, isInternalScriptMod = isInternalScriptMod, dependencies = dependencies, multiplayerOnly = multiplayerOnly, uniqueType = uniqueType})
    self.hashToMod[fileHash] = {id = self.numMods, title = title, description = description, version = version, modDescVersion = modDescVersion, author = author, iconFilename = iconFilename, isDLC = isDLC, fileHash = fileHash, modName = modName, modDir = modDir, modFile = modFile, absBaseFilename = absBaseFilename, isDirectory = isDirectory, isMultiplayerSupported = isMultiplayerSupported, isSelectable = isSelectable, hasScripts = hasScripts, isInternalScriptMod = isInternalScriptMod, dependencies = dependencies, multiplayerOnly = multiplayerOnly, uniqueType = uniqueType}
    if isMultiplayerSupported then
      table.insert(self.multiplayerMods, {id = self.numMods, title = title, description = description, version = version, modDescVersion = modDescVersion, author = author, iconFilename = iconFilename, isDLC = isDLC, fileHash = fileHash, modName = modName, modDir = modDir, modFile = modFile, absBaseFilename = absBaseFilename, isDirectory = isDirectory, isMultiplayerSupported = isMultiplayerSupported, isSelectable = isSelectable, hasScripts = hasScripts, isInternalScriptMod = isInternalScriptMod, dependencies = dependencies, multiplayerOnly = multiplayerOnly, uniqueType = uniqueType})
    end
  end
  return v21
end
function ModManager:removeMod(mod)
  if mod ~= nil then
    self.nameToMod[mod.modName] = nil
    if mod.fileHash ~= nil then
      self.hashToMod[mod.fileHash] = nil
    end
    for v5, v6 in ipairs(self.mods) do
      if not (v6 == mod) then
        continue
      end
      table.remove(self.mods, v5)
      break
    end
    for v5, v6 in ipairs(self.validMods) do
      if not (v6 == mod) then
        continue
      end
      table.remove(self.validMods, v5)
      break
    end
    for v5, v6 in ipairs(self.multiplayerMods) do
      if not (v6 == mod) then
        continue
      end
      table.remove(self.multiplayerMods, v5)
      break
    end
    return true
  end
  return false
end
function ModManager:getModByFileHash(fileHash)
  return self.hashToMod[fileHash]
end
function ModManager:getModByName(modName)
  return self.nameToMod[modName]
end
function ModManager:getModByIndex(index)
  return self.mods[index]
end
function ModManager:getMods()
  return self.mods
end
function ModManager:getMultiplayerMods()
  return self.multiplayerMods
end
function ModManager:getActiveMods()
  for v5, v6 in ipairs(self.mods) do
    if not g_modIsLoaded[v6.modName] then
      continue
    end
    table.insert(v1, v6)
  end
  return v1
end
function ModManager:getNumOfMods()
  return #self.mods
end
function ModManager:getNumOfValidMods()
  return #self.validMods
end
function ModManager:getAreAllModsAvailable(modHashes)
  for v5, v6 in pairs(modHashes) do
    local v7 = self:getIsModAvailable(v6)
    if not not v7 then
      continue
    end
    return false
  end
  return true
end
function ModManager:getIsModAvailable(modHash)
  if self.hashToMod[modHash] ~= nil then
    -- if v0.hashToMod[v1].isMultiplayerSupported then goto L10 end
  end
  return false
  return true
end
function ModManager.isModMap(v0, v1)
  for v5, v6 in pairs(g_mapManager.idToMap) do
    local v7 = v7:getModNameFromMapId(v5)
    if not (v7 == v1) then
      continue
    end
    return true
  end
  return false
end
local v1 = ModManager.new()
g_modManager = v1
