-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalClusterSystem = {}
local AnimalClusterSystem_mt = Class(AnimalClusterSystem)
function AnimalClusterSystem.registerSavegameXMLPaths(schema, basePath)
end
function AnimalClusterSystem.new(isServer, owner, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.isServer = isServer
  v3.owner = owner
  v3.clusters = {}
  v3.idToIndex = {}
  v3.clustersToAdd = {}
  v3.clustersToRemove = {}
  v3.needsUpdate = false
  return v3
end
function AnimalClusterSystem:delete()
  self.clusters = {}
end
function AnimalClusterSystem:readStream(streamId, connection)
  local numClusters = streamReadUInt16(streamId)
  -- TODO: structure LOP_FORNPREP (pc 9, target 51)
  local v8 = streamReadInt32(streamId)
  local subTypeIndex = streamReadUIntN(streamId, AnimalCluster.NUM_BITS_SUB_TYPE)
  {}[v8] = true
  if self.idToIndex[v8] == nil then
    local v12 = v12:createClusterFromSubTypeIndex(subTypeIndex)
    v12.id = v8
    self:addCluster(v12)
  else
  end
  v11:readStream(streamId, connection)
  -- TODO: structure LOP_FORNLOOP (pc 50, target 10)
  -- TODO: structure LOP_FORNPREP (pc 56, target 70)
  if v4[self.clusters[#self.clusters].id] == nil then
    self:removeCluster(#self.clusters)
  end
  -- TODO: structure LOP_FORNLOOP (pc 69, target 57)
  self:updateIdMapping()
  v5:publish(AnimalClusterUpdateEvent, self.owner, self.clusters)
end
function AnimalClusterSystem:writeStream(streamId, connection)
  streamWriteUInt16(streamId, #self.clusters)
  for v6, v7 in ipairs(self.clusters) do
    streamWriteInt32(streamId, v7.id)
    streamWriteUIntN(streamId, v7.subTypeIndex, AnimalCluster.NUM_BITS_SUB_TYPE)
    v7:writeStream(streamId, connection)
  end
end
function AnimalClusterSystem:saveToXMLFile(xmlFile, key, usedModNames)
  for v7, v8 in ipairs(self.clusters) do
    local v9 = string.format("%s.animal(%d)", key, v7 - 1)
    local v10 = v10:getSubTypeByIndex(v8.subTypeIndex)
    xmlFile:setString(v9 .. "#subType", v10.name)
    v8:saveToXMLFile(xmlFile, v9, usedModNames)
  end
end
function AnimalClusterSystem:loadFromXMLFile(xmlFile, key)
  while true do
    v4 = string.format("%s.animal(%d)", key, v3)
    v5 = xmlFile:hasProperty(v4)
    if not v5 then
      break
    end
    v5 = xmlFile:getString(v4 .. "#subType", "")
    v6 = v6:getSubTypeByName(v5)
    if v6 ~= nil then
      v7 = v7:createClusterFromSubTypeIndex(v6.subTypeIndex)
      v8 = v7:loadFromXMLFile(xmlFile, v4)
      -- if not v8 then goto L55 end
      self:addPendingAddCluster(v7)
    else
      v10 = tostring(v5)
      Logging.xmlWarning(xmlFile, "SubType '%s' not defined. Ignoring animal '%s'.", v10, v4)
    end
  end
  self:updateClusters()
  self.needsUpdate = false
end
function AnimalClusterSystem:update(dt)
  if self.isServer and self.needsUpdate then
    self:updateNow()
  end
end
function AnimalClusterSystem:updateNow()
  if self.needsUpdate then
    self:updateClusters()
    self.needsUpdate = false
  end
end
function AnimalClusterSystem:updateIdMapping()
  self.idToIndex = {}
  for v4, v5 in ipairs(self.clusters) do
    self.idToIndex[v5.id] = v4
  end
end
function AnimalClusterSystem:setDirty()
  self.needsUpdate = true
  v1:raiseActive()
end
function AnimalClusterSystem:addPendingAddCluster(cluster)
  assert(self.isServer, "AnimalClusterSystem:addPendingAddCluster is a server function")
  self.clustersToAdd[cluster] = true
  self.clustersToRemove[cluster] = nil
  self:setDirty()
end
function AnimalClusterSystem:addPendingRemoveCluster(cluster)
  assert(self.isServer, "AnimalClusterSystem:addPendingRemoveCluster is a server function")
  self.clustersToRemove[cluster] = true
  self.clustersToAdd[cluster] = nil
  self:setDirty()
end
function AnimalClusterSystem:addCluster(cluster)
  table.insert(self.clusters, cluster)
  cluster.clusterSystem = self
end
function AnimalClusterSystem:removeCluster(clusterIndex)
  table.remove(self.clusters, clusterIndex)
  self.clusters[clusterIndex].clusterSystem = nil
end
function AnimalClusterSystem:getClusters()
  return self.clusters
end
function AnimalClusterSystem:getCluster(index)
  return self.clusters[index]
end
function AnimalClusterSystem:getClusterById(clusterId)
  if self.idToIndex[clusterId] == nil then
    return nil
  end
  return self.clusters[v2]
end
function AnimalClusterSystem:updateClusters()
  assert(self.isServer, "AnimalClusterSystem:updateClusters is a server function")
  for v7, v8 in pairs(self.clustersToAdd) do
    self:addCluster(v7)
  end
  for v7, v8 in ipairs(self.clusters) do
    if v8.isDirty then
      v8.isDirty = false
    end
    if self.clustersToRemove[v8] == nil then
      local v9 = v8:getNumAnimals()
      -- cmp-jump LOP_JUMPXEQKN R9 aux=0x8000000e -> L57
    end
    table.insert(v3, v7)
    continue
    v9 = v8:getSupportsMerging()
    if not v9 then
      continue
    end
    v9 = v8:getHash()
    if v2[v9] ~= nil then
      self.clusters[v2[v9]]:merge(v8)
      table.insert(v3, v7)
    else
      v2[v9] = v7
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 88, target 96)
  self:removeCluster(v3[#v3])
  -- TODO: structure LOP_FORNLOOP (pc 95, target 89)
  if true then
    v6 = AnimalClusterUpdateEvent.new(self.owner, self.clusters)
    v4:broadcastEvent(v6, true)
    v4:publish(AnimalClusterUpdateEvent, self.owner, self.clusters)
  end
  self.clustersToAdd = {}
  self.clustersToRemove = {}
  self:updateIdMapping()
end
