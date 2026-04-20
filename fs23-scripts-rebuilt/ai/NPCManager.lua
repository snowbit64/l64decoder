-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

NPCManager = {}
local NPCManager_mt = Class(NPCManager, AbstractManager)
function NPCManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function NPCManager:initDataStructures()
  self.numNpcs = 0
  self.npcs = {}
  self.nameToIndex = {}
  self.indexToNpc = {}
end
function NPCManager:loadDefaultTypes(missionInfo, baseDirectory)
  local xmlFile = loadXMLFile("npc", "data/maps/maps_npcs.xml")
  if xmlFile ~= 0 then
    self:loadNPCs(xmlFile, missionInfo, baseDirectory, true)
    delete(xmlFile)
  end
end
function NPCManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  self:loadDefaultTypes(missionInfo, baseDirectory)
  return XMLUtil.loadDataFromMapXML(xmlFile, "npcs", baseDirectory, self, self.loadNPCs, missionInfo, baseDirectory)
end
function NPCManager:loadNPCs(xmlFile, missionInfo, baseDirectory, isBaseType)
  while true do
    v6 = string.format("map.npcs.npc(%d)", v5)
    v7 = hasXMLProperty(xmlFile, v6)
    if not v7 then
      break
    end
    v7 = getXMLString(xmlFile, v6 .. "#name")
    v8 = getXMLString(xmlFile, v6 .. "#title")
    v9 = getXMLString(xmlFile, v6 .. "#imageFilename")
    self:addNPC(v7, v8, v9, baseDirectory, isBaseType)
  end
  return true
end
function NPCManager:saveToXMLFile(xmlFilename)
  local xmlFile = createXMLFile("npcsXML", xmlFilename, "npcs")
  if xmlFile ~= nil then
    for v6, v7 in ipairs(self.indexToNpc) do
      local v8 = string.format("npcs.npc(%d)", v6 - 1)
      setXMLString(xmlFile, v8 .. "#name", v7.name)
      setXMLInt(xmlFile, v8 .. "#finishedMissions", v7.finishedMissions)
    end
    saveXMLFile(xmlFile)
    delete(xmlFile)
    return true
  end
  return false
end
function NPCManager:loadFromXMLFile(xmlFilename)
  if xmlFilename == nil then
    return false
  end
  local xmlFile = loadXMLFile("npcXML", xmlFilename)
  if xmlFile == 0 then
    return false
  end
  while true do
    v4 = string.format("npcs.npc(%d)", v3)
    v5 = hasXMLProperty(xmlFile, v4)
    if not v5 then
      break
    end
    v5 = getXMLString(xmlFile, v4 .. "#name")
    v6 = self:getNPCByName(v5)
    if v6 ~= nil then
      v8 = getXMLInt(xmlFile, v4 .. "#finishedMissions")
      v7 = Utils.getNoNil(v8, 0)
      v6.finishedMissions = v7
    else
      v12 = tostring(v5)
      print("Warning: Npc '" .. v12 .. "' not found!")
    end
  end
  delete(xmlFile)
  return true
end
function NPCManager:addNPC(name, title, imageFilename, baseDir, isBaseType)
  local v6 = ClassUtil.getIsValidIndexName(name)
  if not v6 then
    local v11 = tostring(name)
    print("Warning: '" .. v11 .. "' is not a valid name for a npc. Ignoring npc!")
    return nil
  end
  v6 = name:upper()
  if isBaseType and self.nameToIndex[v6] ~= nil then
    v11 = tostring(v6)
    print("Warning: NPC '" .. v11 .. "' already exists. Ignoring npc!")
    return nil
  end
  if self.npcs[name] == nil then
    if title ~= nil then
      -- cmp-jump LOP_JUMPXEQKS R2 aux=0x8000000e -> L63
    end
    local v12 = tostring(title)
    print("Warning: '" .. v12 .. "' is not a valid title for a npc. Ignoring npc!")
    return nil
    if imageFilename ~= nil then
      -- cmp-jump LOP_JUMPXEQKS R3 aux=0x8000000e -> L80
    end
    v12 = tostring(name)
    print("Warning: Missing npc image file for npc '" .. v12 .. "'. Ignoring npc!")
    return nil
    self.numNpcs = self.numNpcs + 1
    local v7 = v7:convertText(title)
    v7 = Utils.getFilename(imageFilename, baseDir)
    self.npcs[name] = {name = name, title = v7, index = self.numNpcs, imageFilename = v7, finishedMissions = 0}
    self.nameToIndex[name] = self.numNpcs
    self.indexToNpc[self.numNpcs] = {name = name, title = v7, index = self.numNpcs, imageFilename = v7, finishedMissions = 0}
    return {name = name, title = v7, index = self.numNpcs, imageFilename = v7, finishedMissions = 0}
  end
  if title ~= nil and title ~= "" then
    v7 = v7:convertText(title)
    v6.title = v7
  end
  if imageFilename ~= nil and imageFilename ~= "" then
    v7 = Utils.getFilename(imageFilename, baseDir)
    v6.imageFilename = v7
  end
  return v6
end
function NPCManager:getRandomNPC()
  local v3 = self:getRandomIndex()
  return self.indexToNpc[v3]
end
function NPCManager:getRandomIndex()
  return math.random(1, self.numNpcs)
end
function NPCManager:getNPCByIndex(index)
  if index ~= nil then
    return self.indexToNpc[index]
  end
  return nil
end
function NPCManager:getNPCByName(name)
  if name ~= nil then
    local v2 = name:upper()
    return self.npcs[v2]
  end
  return nil
end
local v1 = NPCManager.new()
g_npcManager = v1
