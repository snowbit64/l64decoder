-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GameplayHintManager = {}
local GameplayHintManager_mt = Class(GameplayHintManager, AbstractManager)
function GameplayHintManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function GameplayHintManager:initDataStructures()
  self.gameplayHints = {}
  self.isLoaded = false
end
function GameplayHintManager:loadMapData(xmlFile, missionInfo)
  local v4 = v4:superClass()
  v4.loadMapData(self)
  local filenameStr = getXMLString(xmlFile, "map.gameplayHints#filename")
  if filenameStr == nil then
    Logging.xmlInfo(xmlFile, "No gameplay hints defined for map")
    return false
  end
  v4 = Utils.getFilename(filenameStr, g_currentMission.baseDirectory)
  if v4 ~= nil and v4 ~= "" then
    local v5 = fileExists(v4)
    -- if v5 then goto L52 end
  end
  local v11 = tostring(filenameStr)
  Logging.xmlError(xmlFile, "Could not load gameplayHint config file '" .. v11 .. "'!")
  return false
  local v5, v6 = Utils.getModNameAndBaseDirectory(v4)
  local v7 = loadXMLFile("gameplayHints", v4)
  if v7 ~= 0 then
    while true do
      v9 = string.format("gameplayHints.gameplayHint(%d)", v8)
      v10 = hasXMLProperty(v7, v9)
      if not v10 then
        break
      end
      v10 = getXMLString(v7, v9)
      v11 = v10:sub(1, 6)
      if v11 == "$l10n_" then
        v13 = v10:sub(7)
        v11 = v11:getText(v13, v5)
      end
      table.insert(self.gameplayHints, v10)
    end
    delete(v7)
  end
  self.isLoaded = true
  return true
end
function GameplayHintManager:getRandomGameplayHint(numberOfHints)
  if #self.gameplayHints <= numberOfHints then
    return self.gameplayHints
  end
  while true do
    if not (#v2 < numberOfHints) then
      break
    end
    v5 = math.random(1, v4)
    if not (v3[v5] == nil) then
      continue
    end
    table.insert(v2, self.gameplayHints[v5])
    v3[v5] = v5
  end
  return v2
end
function GameplayHintManager:getIsLoaded()
  return self.isLoaded
end
local v1 = GameplayHintManager.new()
g_gameplayHintManager = v1
