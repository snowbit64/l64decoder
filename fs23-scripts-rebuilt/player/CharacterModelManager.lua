-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CharacterModelManager = {SEND_NUM_BITS = 2}
local CharacterModelManager_mt = Class(CharacterModelManager)
function CharacterModelManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1:initDataStructures()
  return v1
end
function CharacterModelManager:initDataStructures()
  self.playerModels = {}
  self.nameToPlayerModel = {}
  self.nameToIndex = {}
end
function CharacterModelManager.load(v0, v1)
  local v2 = XMLFile.load("playerModels", v1)
  if v2 == nil then
    Logging.fatal("Could not load player model list at %s", v1)
  end
  v2:iterate("playerModels.playerModel", function(v0, v1)
    local v2 = v2:getString(v1 .. "#filename")
    local v3 = v3:getString(v1 .. "#name")
    local v5 = v5:getBool(v1 .. "#isMale")
    if v2 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L27
    end
    return
    v5:addPlayerModel(v3, v2, v4)
  end)
  v2:delete()
end
function CharacterModelManager.loadMapData(v0, v1)
  return true
end
function CharacterModelManager.unloadMapData(v0)
end
function CharacterModelManager:addPlayerModel(name, xmlFilename, isMale)
  local v4 = ClassUtil.getIsValidIndexName(name)
  if not v4 then
    local v6 = tostring(name)
    Logging.devWarning(...)
    return nil
  end
  if xmlFilename ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R2 aux=0x80000009 -> L29
  end
  v6 = tostring(name)
  Logging.devWarning(...)
  return nil
  v4 = name:upper()
  if self.nameToPlayerModel[v4] == nil then
    v6 = Utils.getFilename(xmlFilename, nil)
    table.insert(self.playerModels, {name = v4, index = #self.playerModels + 1, xmlFilename = v6, isMale = isMale})
    self.nameToPlayerModel[v4] = {name = v4, index = #self.playerModels + 1, xmlFilename = v6, isMale = isMale}
    self.nameToIndex[v4] = #self.playerModels + 1
    return {name = v4, index = #self.playerModels + 1, xmlFilename = v6, isMale = isMale}
  end
  v6 = tostring(name)
  Logging.devWarning(...)
  return nil
end
function CharacterModelManager:getPlayerModelByIndex(index)
  if index ~= nil then
    return self.playerModels[index]
  end
  return nil
end
function CharacterModelManager:getPlayerByName(name)
  if name ~= nil then
    local v2 = name:upper()
    return self.nameToPlayerModel[v2]
  end
  return nil
end
function CharacterModelManager:getNumOfPlayerModels()
  return #self.playerModels
end
function CharacterModelManager:getIsPlayerModelMaleForFilename(xmlFilename)
  for v5, v6 in ipairs(self.playerModels) do
    if not (v6.xmlFilename == xmlFilename) then
      continue
    end
    return v6.isMale
  end
  return true
end
local v1 = CharacterModelManager.new()
g_characterModelManager = v1
