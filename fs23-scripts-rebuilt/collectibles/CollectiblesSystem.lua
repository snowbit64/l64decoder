-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CollectiblesSystem = {}
local CollectiblesSystem_mt = Class(CollectiblesSystem)
function CollectiblesSystem.new(isServer, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.isServer = isServer
  v2.isActive = false
  v2.isComplete = false
  v2.collectibles = {}
  v2.collected = {}
  v2.collectibleIndexToName = {}
  v2.groups = {}
  return v2
end
function CollectiblesSystem.delete(v0)
  removeConsoleCommand("gsCollectiblesShowAll")
end
function CollectiblesSystem:loadMapData(xmlFile, missionInfo, baseDirectory)
  local xmlFilename = getXMLString(xmlFile, "map.collectibles#filename")
  if xmlFilename ~= nil then
    local v5 = Utils.getFilename(xmlFilename, baseDirectory)
    v5 = XMLFile.load("collectibles", v5)
    if v5 == nil then
      Logging.error("Collectibles file '%s' does not exist", v5)
      return
    end
    local v6, v7 = Utils.getModNameAndBaseDirectory(xmlFilename)
    v5:iterate("collectibles.group", function(self, xmlFile)
      local missionInfo = missionInfo:getString(xmlFile .. "#name")
      local baseDirectory = baseDirectory:getString(xmlFile .. "#target")
      local xmlFilename = xmlFilename:getString(xmlFile .. "#dialogText")
      if xmlFilename ~= nil then
        local v5 = v5:convertText(xmlFilename, u1)
      end
      v5 = v5:getString(xmlFile .. "#dialogIntroText")
      if v5 ~= nil then
        local v6 = v6:convertText(v5, u1)
      end
      v6 = v6:getString(xmlFile .. "#dialogTitle")
      if v6 ~= nil then
        local v7 = v7:convertText(v6, u1)
      end
      v7 = v7:getString("collectibles.target.incompleteNode")
      local v8 = v8:getString("collectibles.target.completeNode")
      local v11 = v11:getInt(xmlFile .. "#moneyReward")
      u2.groups[missionInfo] = {targetName = baseDirectory, index = self, dialogText = xmlFilename, dialogIntroText = v5, dialogTitle = v6, moneyReward = v11, totalItems = 0, collectedItems = 0, incompleteNodeIndex = v7, completeNodeIndex = v8}
      u3 = u3 + 1
    end)
    v5:iterate("collectibles.collectible", function(self, xmlFile)
      if u0 == 255 then
        Logging.warning("No more than 255 collectibles are supported.")
        return
      end
      local missionInfo = missionInfo:getString(xmlFile .. "#name")
      local baseDirectory = baseDirectory:getString(xmlFile .. "#target")
      if missionInfo == nil then
        Logging.xmlError(u1, "Collectible has no name at %d", self)
        return
      end
      local xmlFilename = xmlFilename:getString(xmlFile .. "#dialogText")
      if xmlFilename ~= nil then
        local v5 = v5:convertText(xmlFilename, u2)
      end
      v5 = v5:getString(xmlFile .. "#dialogTitle")
      if v5 ~= nil then
        local v6 = v6:convertText(v5, u2)
      end
      v6 = v6:getString(xmlFile .. "#group")
      if v6 ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L94
        u3.groups[v6].totalItems = u3.groups[v6].totalItems + 1
      else
        Logging.xmlError(u1, "Collectible has no group at %d", self)
        return
      end
      local v9 = v9:getInt(xmlFile .. "#moneyReward")
      u3.collectibles[missionInfo] = {targetName = baseDirectory, index = self, dialogText = xmlFilename, dialogTitle = v5, moneyReward = v9, groupName = v6}
      u3.collectibleIndexToName[self] = missionInfo
      u3.collected[self] = false
      u0 = u0 + 1
    end)
    local v10 = v5:getString("collectibles#achievementName")
    self.achievementName = v10
    v10 = v5:getString("collectibles.target.incompleteNode")
    self.incompleteNodeIndex = v10
    v10 = v5:getString("collectibles.target.completeNode")
    self.completeNodeIndex = v10
    local v13 = math.floor(0 / 4)
    v10 = v5:getInt(...)
    self.hotspotThreshold = v10
    v5:delete()
    self.isActive = true
    if g_addCheatCommands then
      v10 = v10:getIsServer()
      if v10 then
        addConsoleCommand("gsCollectiblesShowAll", "Shows all collectibles on the map", "consoleCommandShowAll", self)
      end
    end
  end
end
function CollectiblesSystem:loadFromXMLFile(xmlFilename)
  local xmlFile = XMLFile.load("collectibles", xmlFilename)
  local v3 = xmlFile:getBool("collectibles#isComplete", false)
  self.isComplete = v3
  if not self.isComplete then
    xmlFile:iterate("collectibles.collectible", function(self, xmlFilename)
      local xmlFile = xmlFile:getInt(xmlFilename .. "#index")
      local v3 = v3:getBool(xmlFilename .. "#collected", false)
      if xmlFile ~= nil then
        u1.collected[xmlFile] = v3
        if v3 and u1.collectibles[u1.collectibleIndexToName[xmlFile]].groupName ~= nil then
          u1.groups[u1.collectibles[u1.collectibleIndexToName[xmlFile]].groupName].collectedItems = u1.groups[u1.collectibles[u1.collectibleIndexToName[xmlFile]].groupName].collectedItems + 1
        end
      end
    end)
  else
    for v6, v7 in pairs(self.collectibles) do
      self.collected[v7.index] = true
      if not (v7.groupName ~= nil) then
        continue
      end
      self.groups[v7.groupName].collectedItems = self.groups[v7.groupName].collectedItems + 1
    end
  end
  xmlFile:delete()
  self:updateCollectiblesState()
  self:updateTargetState()
  self:updateHotspotState()
end
function CollectiblesSystem:saveToXMLFile(xmlFilename)
  if not self.isActive then
    return
  end
  local xmlFile = XMLFile.create("collectibles", xmlFilename, "collectibles")
  xmlFile:setBool("collectibles#isComplete", self.isComplete)
  if not self.isComplete then
    xmlFile:setTable("collectibles.collectible", self.collectibles, function(self, xmlFilename, xmlFile)
      v3:setInt(self .. "#index", xmlFilename.index)
      v3:setBool(self .. "#collected", u1.collected[xmlFilename.index] or false)
    end)
  end
  xmlFile:save()
  xmlFile:delete()
end
function CollectiblesSystem:onClientJoined(connection)
  local v2 = next(self.collected)
  if v2 ~= nil then
    local v4 = CollectibleStateEvent.new(self.collected)
    connection:sendEvent(...)
  end
end
function CollectiblesSystem:onTriggerEvent(index, player)
  if self.collected[index] then
    return
  end
  self.collected[index] = true
  self.groups[self.collectibles[self.collectibleIndexToName[index]].groupName].collectedItems = self.groups[self.collectibles[self.collectibleIndexToName[index]].groupName].collectedItems + 1
  if self.collectibles[self.collectibleIndexToName[index]].moneyReward ~= nil then
    v4:addMoney(self.collectibles[self.collectibleIndexToName[index]].moneyReward, player.farmId, MoneyType.COLLECTIBLE, true, true)
  end
  if self.groups[v3.groupName].totalItems - self.groups[v3.groupName].collectedItems == 0 and self.groups[v3.groupName].moneyReward ~= nil then
    v6:addMoney(self.groups[v3.groupName].moneyReward, player.farmId, MoneyType.COLLECTIBLE, true, true)
  end
  local v6 = self:isCompleted()
  if v6 then
    self.isComplete = true
    if self.isServer and self.achievementName ~= nil then
      v6:tryUnlock(self.achievementName, 1)
    end
  end
  local v8 = CollectibleStateEvent.new(self.collected)
  v6:broadcastEvent(v8, true)
end
function CollectiblesSystem:onStateEvent(state)
  self.collected = state
  for v5, v6 in pairs(self.groups) do
    v6.collectedItems = 0
  end
  -- TODO: structure LOP_FORNPREP (pc 16, target 36)
  if state[1] then
    self.groups[self.collectibles[self.collectibleIndexToName[1]].groupName].collectedItems = self.groups[self.collectibles[self.collectibleIndexToName[1]].groupName].collectedItems + 1
  end
  -- TODO: structure LOP_FORNLOOP (pc 35, target 17)
  self:updateTargetState()
  self:updateCollectiblesState()
  self:updateHotspotState()
end
function CollectiblesSystem:updateTargetState()
  if self.target ~= nil then
    if self.isComplete then
      if self.incompleteNode ~= nil then
        setVisibility(self.incompleteNode, not self.isComplete)
      end
      if self.completeNode ~= nil then
        setVisibility(self.incompleteNode, self.isComplete)
      end
    end
    for v4, v5 in pairs(self.collectibles) do
      if not (v5.targetName ~= nil) then
        continue
      end
      if not (v5.target ~= nil) then
        continue
      end
      setVisibility(v5.target, self.collected[v5.index] or false)
    end
    for v4, v5 in pairs(self.groups) do
      if not (v5.targetName ~= nil) then
        continue
      end
      if v5.totalItems ~= v5.collectedItems then
      end
      if not (v5.target ~= nil) then
        continue
      end
      setVisibility(v5.target, true)
    end
  end
end
function CollectiblesSystem:updateCollectiblesState()
  for v4, v5 in pairs(self.collectibles) do
    if not (v5.object ~= nil) then
      continue
    end
    if self.collected[v5.index] then
      v7:deactivate()
    else
      v7:activate()
    end
  end
end
function CollectiblesSystem:isCompleted()
  for v4, v5 in pairs(self.collectibles) do
    if not (self.collected[v5.index] ~= true) then
      continue
    end
    return false
  end
  return true
end
function CollectiblesSystem:updateHotspotState()
  if self.hotspotThreshold ~= nil then
    local v2 = self:getTotalCollected()
    if self.hotspotThreshold > v2 then
    end
    for v5, v6 in pairs(self.collectibles) do
      if not (v6.object ~= nil) then
        continue
      end
      v7:setHotspotVisible(v1)
    end
  end
end
function CollectiblesSystem:addCollectible(collectible)
  if self.collectibles[collectible.name] == nil then
    Logging.error("Collectible with name '%s' is unknown.", collectible.name)
    return
  end
  v2.object = collectible
  collectible:activate()
end
function CollectiblesSystem:removeCollectible(collectible)
  if self.collectibles[collectible.name] == nil then
    Logging.error("Collectible with name '%s' is unknown.", collectible.name)
    return
  end
  v2.object = nil
end
function CollectiblesSystem:addCollectibleTarget(target)
  self.target = target
  for v5, v6 in pairs(self.collectibles) do
    if not (v6.targetName ~= nil) then
      continue
    end
    local v7 = getChild(target.node, v6.targetName)
    if not (v7 ~= 0) then
      continue
    end
    v6.target = v7
  end
  for v5, v6 in pairs(self.groups) do
    if not (v6.targetName ~= nil) then
      continue
    end
    v7 = getChild(target.node, v6.targetName)
    if not (v7 ~= 0) then
      continue
    end
    v6.target = v7
  end
  v2 = I3DUtil.indexToObject(target, self.incompleteNodeIndex)
  self.incompleteNode = v2
  v2 = I3DUtil.indexToObject(target, self.completeNodeIndex)
  self.completeNode = v2
  self:updateTargetState()
end
function CollectiblesSystem:removeCollectibleTarget(target)
  self.target = nil
  self.incompleteNodeIndex = nil
  self.completeNode = nil
end
function CollectiblesSystem:onTriggerCollectible(collectible)
  if self.collected[self.collectibles[collectible.name].index] then
    return
  end
  if self.groups[v2.groupName].collectedItems == 0 and self.groups[v2.groupName].dialogIntroText ~= nil then
  end
  if v2.moneyReward == nil then
    v7:playSample(GuiSoundPlayer.SOUND_SAMPLES.COLLECTIBLE)
  end
  if v5 == 0 then
    if not v4.dialogTitle then
      local v9 = v9:getText("ui_collectibleMessageTitle")
    end
    v7:showInGameMessage(v9, v6 .. v4.dialogText, -1)
  elseif v2.dialogText ~= nil then
    if not v2.dialogTitle then
      local v10 = v10:getText("ui_collectibleMessageTitle")
    end
    v9 = v9(v10, v5)
    local v12 = string.format(v2.dialogText, v5)
    v7:showInGameMessage(v9, v6 .. v12, -1)
  end
  local v7 = v7:getServerConnection()
  v9 = CollectibleTriggerEvent.new(v3, v2.index)
  v7:sendEvent(...)
end
function CollectiblesSystem:getIsActive()
  return self.isActive
end
function CollectiblesSystem:getTotalCollected()
  if self.isActive then
    -- TODO: structure LOP_FORNPREP (pc 9, target 16)
    if self.collected[1] then
    end
    -- TODO: structure LOP_FORNLOOP (pc 15, target 10)
    return collectible
  end
  return nil
end
function CollectiblesSystem:getTotalCollectable()
  if self.isActive then
    return #self.collectibleIndexToName
  end
  return nil
end
function CollectiblesSystem:consoleCommandShowAll()
  self.hotspotThreshold = 0
  self:updateHotspotState()
end
