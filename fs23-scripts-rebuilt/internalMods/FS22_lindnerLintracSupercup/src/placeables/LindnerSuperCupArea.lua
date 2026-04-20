-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LindnerSuperCupArea = {MOD_DIRECTORY = g_currentModDirectory, MOD_NAME = g_currentModName}
function LindnerSuperCupArea.prerequisitesPresent(v0)
  return true
end
function LindnerSuperCupArea.registerFunctions(v0)
end
function LindnerSuperCupArea:registerXMLPaths(v1)
  self:setXMLSpecializationType("LindnerSuperCupArea")
  SuperCup.registerXMLPaths(self, v1 .. ".superCupArea")
  self:setXMLSpecializationType()
end
function LindnerSuperCupArea.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", LindnerSuperCupArea)
  SpecializationUtil.registerEventListener(v0, "onDelete", LindnerSuperCupArea)
  SpecializationUtil.registerEventListener(v0, "onWriteStream", LindnerSuperCupArea)
  SpecializationUtil.registerEventListener(v0, "onReadStream", LindnerSuperCupArea)
  SpecializationUtil.registerEventListener(v0, "onReadUpdateStream", LindnerSuperCupArea)
  SpecializationUtil.registerEventListener(v0, "onWriteUpdateStream", LindnerSuperCupArea)
  SpecializationUtil.registerEventListener(v0, "onFinalizePlacement", LindnerSuperCupArea)
  SpecializationUtil.registerEventListener(v0, "onUpdate", LindnerSuperCupArea)
end
function LindnerSuperCupArea:onLoad(savegame)
  local v3 = v3:format(LindnerSuperCupArea.MOD_NAME)
  self.spec_superCup = self[v3]
  local v9 = self:getOwnerFarmId()
  local v4 = v4:new(g_currentMission, self.baseDirectory, self.customEnvironment, v9, self.rootNode, self)
  self.spec_superCup.superCup = v4
  v4:loadFromXML(self.xmlFile, "placeable.superCupArea", self.components, self.i3dMappings)
  v4 = self:getNextDirtyFlag()
  self.spec_superCup.dirtyFlag = v4
end
function LindnerSuperCupArea:onDelete()
  if self.spec_superCup ~= nil then
    v2:delete()
  end
end
function LindnerSuperCupArea:onReadStream(streamId, connection)
  local v4 = connection:getIsServer()
  if v4 and self.spec_superCup.superCup ~= nil then
    v4:readStream(streamId, connection)
  end
end
function LindnerSuperCupArea:onWriteStream(streamId, connection)
  local v4 = connection:getIsServer()
  if not v4 and self.spec_superCup.superCup ~= nil then
    v4:writeStream(streamId, connection)
  end
end
function LindnerSuperCupArea:onReadUpdateStream(streamId, timestamp, connection)
  local v5 = connection:getIsServer()
  if v5 and self.spec_superCup.superCup ~= nil then
    v5:readUpdateStream(streamId, timestamp, connection)
  end
end
function LindnerSuperCupArea:onWriteUpdateStream(streamId, connection, dirtyMask)
  local v5 = connection:getIsServer()
  if not v5 and self.spec_superCup.superCup ~= nil then
    v5:writeUpdateStream(streamId, connection, dirtyMask)
  end
end
function LindnerSuperCupArea:loadFromXMLFile(xmlFile, key)
end
function LindnerSuperCupArea:saveToXMLFile(xmlFile, key, usedModNames)
  v5:saveToXMLFile(xmlFile, key .. ".superCupArea", usedModNames)
end
function LindnerSuperCupArea:onFinalizePlacement()
  self:raiseActive()
end
function LindnerSuperCupArea:onUpdate(dt)
  self:raiseActive()
  v3:update(dt)
  v3:draw()
  if self.isServer and self.spec_superCup.superCup.started then
    self:raiseDirtyFlags(self.spec_superCup.dirtyFlag)
  end
end
