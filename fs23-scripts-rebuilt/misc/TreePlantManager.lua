-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TreePlantManager = {MAX_NUM_OF_SPLITSHAPES = 7840, DECAY_INTERVAL = 60000, DECAY_DURATION = 7200000, DECAY_DURATION_INV = 1 / TreePlantManager.DECAY_DURATION}
local TreePlantManager_mt = Class(TreePlantManager, AbstractManager)
function TreePlantManager.new(customMt)
  if not customMt then
  end
  return v1(v2)
end
function TreePlantManager:initDataStructures()
  self.treeTypes = {}
  self.indexToTreeType = {}
  self.splitTypeToTreeType = {}
  self.nameToTreeType = {}
  self.treeFileCache = {}
  self.numTreesWithoutSplits = 0
  self.activeDecayingSplitShapes = {}
  self.updateDecayDtGame = 0
end
function TreePlantManager:initialize()
  local v1 = createTransformGroup("trees")
  local v3 = getRootNode()
  link(v3, v1)
  self.treesData = {rootNode = v1, growingTrees = {}, splitTrees = {}, clientTrees = {}, updateDtGame = 0, treeCutJoints = {}, numTreesWithoutSplits = 0}
end
function TreePlantManager:deleteTreesData()
  if self.treesData ~= nil then
    delete(self.treesData.rootNode)
    local v1 = math.max(self.numTreesWithoutSplits - self.treesData.numTreesWithoutSplits, 0)
    self.numTreesWithoutSplits = v1
    self:initDataStructures()
  end
end
function TreePlantManager:loadDefaultTypes(missionInfo, baseDirectory)
  local xmlFile = loadXMLFile("treeTypes", "data/maps/maps_treeTypes.xml")
  self:loadTreeTypes(xmlFile, missionInfo, baseDirectory, true)
  delete(xmlFile)
end
function TreePlantManager:loadMapData(xmlFile, missionInfo, baseDirectory)
  local v5 = v5:superClass()
  v5.loadMapData(self)
  addConsoleCommand("gsTreeCut", "Cut all trees and a given radius", "consoleCommandCutTrees", self)
  self:loadDefaultTypes(missionInfo, baseDirectory)
  return XMLUtil.loadDataFromMapXML(xmlFile, "treeTypes", baseDirectory, self, self.loadTreeTypes, missionInfo, baseDirectory)
end
function TreePlantManager:unloadMapData()
  for v4, v5 in pairs(self.treeFileCache) do
    v6:releaseSharedI3DFile(v5)
    self.treeFileCache[v4] = true
  end
  removeConsoleCommand("gsTreeCut")
  self:deleteTreesData()
  v2 = v2:superClass()
  v2.unloadMapData(self)
end
function TreePlantManager:loadTreeTypes(xmlFile, missionInfo, baseDirectory, isBaseType)
  while true do
    v6 = string.format("map.treeTypes.treeType(%d)", v5)
    v7 = hasXMLProperty(xmlFile, v6)
    if not v7 then
      break
    end
    v7 = getXMLString(xmlFile, v6 .. "#name")
    v8 = getXMLString(xmlFile, v6 .. "#nameI18N")
    v9 = getXMLFloat(xmlFile, v6 .. "#growthTimeHours")
    v10 = getXMLInt(xmlFile, v6 .. "#splitType")
    if v7 ~= nil and v8 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x80000000 -> L57
    end
    v16 = tostring(v6)
    print("Warning: A treetype needs valid values for 'name', 'nameI18N', 'growthTimeHours'. Problem found at '" .. v16 .. "'")
    while true do
      v13 = string.format("%s.stage(%d)", v6, v12)
      v14 = hasXMLProperty(xmlFile, v13)
      if not v14 then
        break
      end
      v14 = getXMLString(xmlFile, v13 .. "#filename")
      if v14 ~= nil then
        v15 = Utils.getFilename(v14, baseDirectory)
        table.insert(v11, v15)
      end
    end
    if #v11 == 0 then
      v18 = tostring(v6)
      print("Warning: A treetype needs valid 'stage#filename' entries. '" .. v18 .. "'")
    end
    self:registerTreeType(v7, v8, v11, v9, isBaseType, v10)
  end
  return true
end
function TreePlantManager:registerTreeType(v1, v2, v3, v4, v5, v6)
  local v7 = string.upper(v1)
  if v5 and self.nameToTreeType[v7] ~= nil then
    local v12 = tostring(v7)
    print("Warning: TreeType '" .. v12 .. "' already exists. Ignoring treeType!")
    return nil
  end
  if self.nameToTreeType[v1] == nil then
    table.insert(self.treeTypes, {name = v1, nameI18N = v2, index = #self.treeTypes + 1, splitType = v6})
    self.indexToTreeType[{name = v1, nameI18N = v2, index = #self.treeTypes + 1, splitType = v6}.index] = {name = v1, nameI18N = v2, index = #self.treeTypes + 1, splitType = v6}
    self.nameToTreeType[v1] = {name = v1, nameI18N = v2, index = #self.treeTypes + 1, splitType = v6}
    if {name = v1, nameI18N = v2, index = #self.treeTypes + 1, splitType = v6}.splitType ~= nil then
      self.splitTypeToTreeType[{name = v1, nameI18N = v2, index = #self.treeTypes + 1, splitType = v6}.splitType] = {name = v1, nameI18N = v2, index = #self.treeTypes + 1, splitType = v6}
    end
  end
  v7.treeFilenames = v3
  v7.growthTimeHours = v4
  return v7
end
function TreePlantManager.getTreeTypeFilename(v0, v1, v2)
  if v1 == nil then
    return nil
  end
  local v5 = math.min(v2, #v1.treeFilenames)
  return v1.treeFilenames[v5]
end
function TreePlantManager:canPlantTree()
  local v1, v2 = getNumOfSplitShapes()
  if v1 - v2 + self.numTreesWithoutSplits >= TreePlantManager.MAX_NUM_OF_SPLITSHAPES then
  end
  return true
end
function TreePlantManager:plantTree(treeType, x, y, z, rx, ry, rz, growthState, growthStateI, isGrowing, splitShapeFileId)
  if self.indexToTreeType[treeType] ~= nil then
    local v14 = MathUtil.clamp(growthState, 0, 1)
    if growthStateI == nil then
      local v17 = table.getn(self.indexToTreeType[treeType].treeFilenames)
      v14 = math.floor(v14 * (v17 - 1))
    end
    local v14, v15 = self:loadTreeNode(v13, x, y, z, rx, ry, rz, growthStateI, splitShapeFileId)
    v17 = Utils.getNoNil(isGrowing, true)
    v17 = table.getn(v13.treeFilenames)
    if v17 <= 1 then
    else
    end
    v16.x = x
    v16.y = y
    v16.z = z
    v16.rx = rx
    v16.ry = ry
    v16.rz = rz
    v16.treeType = treeType
    v16.splitShapeFileId = v15
    v17 = getFileIdHasSplitShapes(v15)
    v16.hasSplitShapes = v17
    if isGrowing then
      v17 = getChildAt(v14, 0)
      v16.origSplitShape = v17
      table.insert(v12.growingTrees, v16)
    else
      table.insert(v12.splitTrees, v16)
    end
    if not v16.hasSplitShapes then
      self.numTreesWithoutSplits = self.numTreesWithoutSplits + 1
      v12.numTreesWithoutSplits = v12.numTreesWithoutSplits + 1
    end
    local v19 = TreePlantEvent.new(treeType, x, y, z, rx, ry, rz, growthState, v15, isGrowing)
    v17:broadcastEvent(...)
    return v14
  end
end
function TreePlantManager:loadTreeNode(treeTypeDesc, x, y, z, rx, ry, rz, growthStateI, splitShapeLoadingFileId)
  local v13 = table.getn(treeTypeDesc.treeFilenames)
  local v11 = math.min(...)
  if self.treeFileCache[treeTypeDesc.treeFilenames[v11]] == nil then
    setSplitShapesLoadingFileId(-1)
    setSplitShapesNextFileId(true)
    local v12, v13 = v12:loadSharedI3DFile(treeTypeDesc.treeFilenames[v11], false, false)
    if v12 ~= 0 then
      delete(v12)
      self.treeFileCache[treeTypeDesc.treeFilenames[v11]] = v13
    end
  end
  v13 = Utils.getNoNil(splitShapeLoadingFileId, -1)
  setSplitShapesLoadingFileId(...)
  v12 = setSplitShapesNextFileId()
  local v13, v14 = v13:loadSharedI3DFile(v11, false, false)
  v15:releaseSharedI3DFile(v14)
  if v13 ~= 0 then
    link(v10.rootNode, v13)
    setTranslation(v13, x, y, z)
    setRotation(v13, rx, ry, rz)
    local v15 = getNumOfChildren(v13)
    -- TODO: structure LOP_FORNPREP (pc 100, target 128)
    local v19 = getChildAt(v13, 0)
    local v20 = getIsSplitShapeSplit(v19)
    if v20 then
      local v22 = getRotation(v19)
      setWorldRotation(...)
      v22 = getTranslation(v19)
      setWorldTranslation(...)
    end
    -- TODO: structure LOP_FORNLOOP (pc 127, target 101)
    addToPhysics(v13)
  end
  v15:setCollisionMapAreaDirty(x - 2, z - 2, x + 2, z + 2, true)
  v15:setAreaDirty(x - 2, x + 2, z - 2, z + 2)
  return v13, v12
end
function TreePlantManager:loadTreeTrunk(treeTypeDesc, x, y, z, dirX, dirY, dirZ, length, growthState, delimb)
  local v11, v12 = v11:loadTreeNode(treeTypeDesc, x, y, z, 0, 0, 0, growthState)
  if v11 ~= 0 then
    local v13 = getFileIdHasSplitShapes(v12)
    if v13 then
      local v14 = getFileIdHasSplitShapes(v12)
      table.insert(self.treesData.splitTrees, {node = v11, growthState = growthState, x = x, y = y, z = z, rx = 0, ry = 0, rz = 0, treeType = treeTypeDesc.index, splitShapeFileId = v12, hasSplitShapes = v14})
      self.loadTreeTrunkData = {framesLeft = 2, shape = v11 + 2, x = x, y = y, z = z, length = length, offset = 0.5, dirX = dirX, dirY = dirY, dirZ = dirZ, delimb = delimb}
      return
    end
    delete(v11)
  end
end
function TreePlantManager:cutTreeTrunkCallback(shape, isBelow, isAbove, minY, maxY, minZ, maxZ)
  self:addingSplitShape(shape, self.shapeBeingCut)
  table.insert(self.loadTreeTrunkData.parts, {shape = shape, isBelow = isBelow, isAbove = isAbove, minY = minY, maxY = maxY, minZ = minZ, maxZ = maxZ})
end
function TreePlantManager:updateTrees(dt, dtGame)
  self.treesData.updateDtGame = self.treesData.updateDtGame + dtGame
  if 3600000 < self.treesData.updateDtGame then
    self:cleanupDeletedTrees()
    self.treesData.updateDtGame = 0
    while 1 <= #self.treesData.growingTrees do
      local v9 = getChildAt(v3.growingTrees[v7].node, 0)
      if v9 ~= v3.growingTrees[v7].origSplitShape then
        table.remove(v3.growingTrees, v7)
        v3.growingTrees[v7].origSplitShape = nil
        table.insert(v3.splitTrees, v3.growingTrees[v7])
      else
        local v10 = table.getn(self.indexToTreeType[v3.growingTrees[v7].treeType].treeFilenames)
        local v13 = math.floor(v3.growingTrees[v7].growthState * (v10 - 1))
        v13 = math.min(v3.growingTrees[v7].growthState + v5 / self.indexToTreeType[v3.growingTrees[v7].treeType].growthTimeHours, 1)
        local v14 = math.floor(v13 * (v10 - 1))
        v3.growingTrees[v7].growthState = v13
        if v13 + 1 ~= v14 + 1 and self.indexToTreeType[v3.growingTrees[v7].treeType].treeFilenames[v13 + 1] ~= self.indexToTreeType[v3.growingTrees[v7].treeType].treeFilenames[v14 + 1] then
          delete(v3.growingTrees[v7].node)
          if not v3.growingTrees[v7].hasSplitShapes then
            v14 = math.max(self.numTreesWithoutSplits - 1, 0)
            self.numTreesWithoutSplits = v14
            v14 = math.max(v3.numTreesWithoutSplits - 1, 0)
            v3.numTreesWithoutSplits = v14
          end
          local v14, v15 = self:loadTreeNode(v9, v8.x, v8.y, v8.z, v8.rx, v8.ry, v8.rz, v13, -1)
          local v18 = TreeGrowEvent.new(v8.treeType, v8.x, v8.y, v8.z, v8.rx, v8.ry, v8.rz, v8.growthState, v15, v8.splitShapeFileId)
          v16:broadcastEvent(...)
          local v16 = getChildAt(v14, 0)
          v8.origSplitShape = v16
          v8.splitShapeFileId = v15
          v16 = getFileIdHasSplitShapes(v15)
          v8.hasSplitShapes = v16
          v8.node = v14
          local v16, v17, v18 = getWorldTranslation(v14)
          v19:setCollisionMapAreaDirty(v16 - 2.5, v18 - 2.5, v16 + 2.5, v18 + 2.5, true)
          v19:setAreaDirty(v16 - 2.5, v16 + 2.5, v18 - 2.5, v18 + 2.5)
          if not v8.hasSplitShapes then
            self.numTreesWithoutSplits = self.numTreesWithoutSplits + 1
            v3.numTreesWithoutSplits = v3.numTreesWithoutSplits + 1
          end
        end
        if v10 <= v13 then
          table.remove(v3.growingTrees, v7)
          v8.origSplitShape = nil
          table.insert(v3.splitTrees, v8)
        else
        end
      end
    end
  end
  for v8 in pairs(v3.treeCutJoints) do
    if v8.destroyTime > v4 then
      v10 = entityExists(v8.shape)
      -- if v10 then goto L290 end
    end
    removeJoint(v8.jointIndex)
    v3.treeCutJoints[v8] = nil
    continue
    local v10, v11, v12 = localDirectionToWorld(v8.shape, v8.lnx, v8.lny, v8.lnz)
    if not (v10 * v8.nx + v11 * v8.ny + v12 * v8.nz < v8.maxCosAngle) then
      continue
    end
    removeJoint(v8.jointIndex)
    v3.treeCutJoints[v8] = nil
  end
  if self.loadTreeTrunkData ~= nil then
    self.loadTreeTrunkData.framesLeft = self.loadTreeTrunkData.framesLeft - 1
    if self.loadTreeTrunkData.framesLeft == 1 then
      self.loadTreeTrunkData.parts = {}
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L578
      -- cmp-jump LOP_JUMPXEQKN R8 aux=0x24 -> L578
      self.shapeBeingCut = self.loadTreeTrunkData.shape
      splitShape(self.loadTreeTrunkData.shape, self.loadTreeTrunkData.x + 1, self.loadTreeTrunkData.y + self.loadTreeTrunkData.length + self.loadTreeTrunkData.offset, self.loadTreeTrunkData.z - 1, 0, 1, 0, -1, 0, 0, 4, 4, "cutTreeTrunkCallback", self)
      self:removingSplitShape(self.loadTreeTrunkData.shape)
      for v12, v13 in pairs(self.loadTreeTrunkData.parts) do
        if v13.isAbove then
          delete(v13.shape)
        else
          self.loadTreeTrunkData.shape = v13.shape
        end
      end
    elseif self.loadTreeTrunkData.framesLeft == 0 then
      self.loadTreeTrunkData.parts = {}
      if self.loadTreeTrunkData.shape ~= nil and self.loadTreeTrunkData.shape ~= 0 then
        splitShape(self.loadTreeTrunkData.shape, self.loadTreeTrunkData.x + 1, self.loadTreeTrunkData.y + self.loadTreeTrunkData.offset, self.loadTreeTrunkData.z - 1, 0, 1, 0, -1, 0, 0, 4, 4, "cutTreeTrunkCallback", self)
        for v13, v14 in pairs(self.loadTreeTrunkData.parts) do
          if v14.isBelow then
            delete(v14.shape)
          else
          end
        end
        if v9 ~= nil then
          if self.loadTreeTrunkData.delimb then
            removeSplitShapeAttachments(v9, v5, v6 + self.loadTreeTrunkData.offset, v7, 0, 1, 0, -1, 0, 0, self.loadTreeTrunkData.length, 4, 4)
          end
          removeFromPhysics(v9)
          setDirection(v9, 0, -1, 0, self.loadTreeTrunkData.dirX, self.loadTreeTrunkData.dirY, self.loadTreeTrunkData.dirZ)
          addToPhysics(v9)
        else
          Logging.error("Unable to cut tree trunk with length '%s'. Try using a different value", self.loadTreeTrunkData.length)
        end
      end
      self.loadTreeTrunkData = nil
    end
  end
  if self.commandCutTreeData ~= nil then
    if 0 < #self.commandCutTreeData.trees then
      v6, v7, v8 = getWorldTranslation(self.commandCutTreeData.trees[1])
      v9, v10, v11 = worldToLocal(self.commandCutTreeData.trees[1], v6, v7 + 0.5, v8)
      v12, v13, v14 = localToWorld(self.commandCutTreeData.trees[1], v9 - 2, v10, v11 - 2)
      v15, v16, v17 = localDirectionToWorld(self.commandCutTreeData.trees[1], 0, 1, 0)
      local v18, v19, v20 = localDirectionToWorld(self.commandCutTreeData.trees[1], 0, 0, 1)
      self.commandCutTreeData.shapeBeingCut = self.commandCutTreeData.trees[1]
      local v23 = getName(self.commandCutTreeData.trees[1])
      Logging.info("Cut tree '%s' (%d left)", v23, #self.commandCutTreeData.trees - 1)
      splitShape(self.commandCutTreeData.trees[1], v12, v13, v14, v15, v16, v17, v18, v19, v20, 4, 4, "onTreeCutCommandSplitCallback", self)
      table.remove(self.commandCutTreeData.trees, 1)
    else
      self.commandCutTreeData = nil
    end
  end
  self.updateDecayDtGame = self.updateDecayDtGame + dtGame
  if TreePlantManager.DECAY_INTERVAL < self.updateDecayDtGame then
    for v8, v9 in pairs(self.activeDecayingSplitShapes) do
      v10 = entityExists(v8)
      if not v10 then
        self.activeDecayingSplitShapes[v8] = nil
      else
        if not (0 < v9.state) then
          continue
        end
        v10 = math.max(v9.state - TreePlantManager.DECAY_DURATION_INV * self.updateDecayDtGame, 0)
        self:setSplitShapeLeafScaleAndVariation(v8, v10, v9.variation)
        self.activeDecayingSplitShapes[v8].state = v10
      end
    end
    self.updateDecayDtGame = 0
  end
end
function TreePlantManager:addTreeCutJoint(jointIndex, shape, nx, ny, nz, maxAngle, maxLifetime)
  local v9, v10, v11 = worldDirectionToLocal(shape, nx, ny, nz)
  local v13 = math.cos(maxAngle)
  self.treesData.treeCutJoints[{jointIndex = jointIndex, shape = shape, nx = nx, ny = ny, nz = nz, lnx = v9, lny = v10, lnz = v11, maxCosAngle = v13, destroyTime = g_currentMission.time + maxLifetime}] = {jointIndex = jointIndex, shape = shape, nx = nx, ny = ny, nz = nz, lnx = v9, lny = v10, lnz = v11, maxCosAngle = v13, destroyTime = g_currentMission.time + maxLifetime}
end
function TreePlantManager:cleanupDeletedTrees()
  while 1 <= #self.treesData.growingTrees do
    local v5 = getNumOfChildren(dt.growingTrees[v3].node)
    if v5 == 0 then
      table.remove(dt.growingTrees, v3)
      delete(dt.growingTrees[v3].node)
      if not not dt.growingTrees[v3].hasSplitShapes then
        continue
      end
      v5 = math.max(self.numTreesWithoutSplits - 1, 0)
      self.numTreesWithoutSplits = v5
      v5 = math.max(dt.numTreesWithoutSplits - 1, 0)
      dt.numTreesWithoutSplits = v5
    else
    end
  end
  while 1 <= #dt.splitTrees do
    local v7 = getNumOfChildren(dt.splitTrees[v5].node)
    if v7 == 0 then
      table.remove(dt.splitTrees, v5)
      delete(dt.splitTrees[v5].node)
      if not not dt.splitTrees[v5].hasSplitShapes then
        continue
      end
      v7 = math.max(self.numTreesWithoutSplits - 1, 0)
      self.numTreesWithoutSplits = v7
      v7 = math.max(dt.numTreesWithoutSplits - 1, 0)
      dt.numTreesWithoutSplits = v7
    else
    end
  end
end
function TreePlantManager:loadFromXMLFile(xmlFilename)
  if xmlFilename == nil then
    return false
  end
  local xmlFile = loadXMLFile("treePlantXML", xmlFilename)
  if xmlFile == 0 then
    return false
  end
  while true do
    v4 = string.format("treePlant.tree(%d)", v3)
    v5 = hasXMLProperty(xmlFile, v4)
    if not v5 then
      break
    end
    v6 = getXMLString(xmlFile, v4 .. "#position")
    v5, v6, v7 = string.getVector(...)
    v9 = getXMLString(xmlFile, v4 .. "#rotation")
    v8, v9, v10 = string.getVector(...)
    v11 = math.rad(v8)
    v11 = math.rad(v9)
    v11 = math.rad(v10)
    v11 = getXMLString(xmlFile, v4 .. "#treeType")
    if v5 ~= nil and v6 ~= nil and v7 ~= nil and v11 ~= nil and v11 ~= nil and v11 ~= nil and self.nameToTreeType[v11] ~= nil then
      v14 = getXMLFloat(xmlFile, v4 .. "#growthState")
      v13 = Utils.getNoNil(v14, 0)
      v15 = getXMLBool(xmlFile, v4 .. "#isGrowing")
      v14 = Utils.getNoNil(v15, true)
      v15 = getXMLInt(xmlFile, v4 .. "#growthStateI")
      v16 = getXMLInt(xmlFile, v4 .. "#splitShapeFileId")
      self:plantTree(self.nameToTreeType[v11].index, v5, v6, v7, v11, v11, v11, v13, v15, v14, v16)
    end
  end
  delete(xmlFile)
  return true
end
function TreePlantManager:saveToXMLFile(xmlFilename)
  local xmlFile = createXMLFile("treePlantXML", xmlFilename, "treePlant")
  if xmlFile ~= nil then
    self:cleanupDeletedTrees()
    for v7, v8 in pairs(self.treesData.growingTrees) do
      local v9 = self:getTreeTypeDescFromIndex(v8.treeType)
      local v12 = getChildAt(v8.node, 0)
      if v12 ~= v8.origSplitShape then
      end
      local v17 = table.getn(v9.treeFilenames)
      local v13 = math.floor(v8.growthState * (v17 - 1))
      v13 = Utils.getNoNil(v8.splitShapeFileId, -1)
      local v14 = string.format("treePlant.tree(%d)", v3)
      setXMLString(xmlFile, v14 .. "#treeType", v10)
      local v18 = string.format("%.4f %.4f %.4f", v8.x, v8.y, v8.z)
      setXMLString(...)
      local v20 = math.deg(v8.rx)
      local v21 = math.deg(v8.ry)
      local v22 = math.deg(v8.rz)
      v18 = string.format(...)
      setXMLString(...)
      setXMLFloat(xmlFile, v14 .. "#growthState", v8.growthState)
      setXMLInt(xmlFile, v14 .. "#growthStateI", v13 + 1)
      setXMLBool(xmlFile, v14 .. "#isGrowing", true)
      setXMLInt(xmlFile, v14 .. "#splitShapeFileId", v13)
    end
    for v7, v8 in pairs(self.treesData.splitTrees) do
      v9 = self:getTreeTypeDescFromIndex(v8.treeType)
      local v16 = table.getn(v9.treeFilenames)
      v12 = math.floor(v8.growthState * (v16 - 1))
      v12 = Utils.getNoNil(v8.splitShapeFileId, -1)
      v13 = string.format("treePlant.tree(%d)", v3)
      setXMLString(xmlFile, v13 .. "#treeType", v9.name)
      v17 = string.format("%.4f %.4f %.4f", v8.x, v8.y, v8.z)
      setXMLString(...)
      local v19 = math.deg(v8.rx)
      v20 = math.deg(v8.ry)
      v21 = math.deg(v8.rz)
      v17 = string.format(...)
      setXMLString(...)
      setXMLFloat(xmlFile, v13 .. "#growthState", v8.growthState)
      setXMLInt(xmlFile, v13 .. "#growthStateI", v12 + 1)
      setXMLBool(xmlFile, v13 .. "#isGrowing", false)
      setXMLInt(xmlFile, v13 .. "#splitShapeFileId", v12)
    end
    saveXMLFile(xmlFile)
    delete(xmlFile)
    return true
  end
  return false
end
function TreePlantManager:readFromServerStream(streamId)
  local v3 = streamReadInt32(streamId)
  -- TODO: structure LOP_FORNPREP (pc 9, target 72)
  local v7 = streamReadInt32(streamId)
  local v8 = streamReadFloat32(streamId)
  local v9 = streamReadFloat32(streamId)
  local v10 = streamReadFloat32(streamId)
  local v11 = streamReadFloat32(streamId)
  local v12 = streamReadFloat32(streamId)
  local v13 = streamReadFloat32(streamId)
  local growthStateI = streamReadInt8(streamId)
  local v15 = streamReadInt32(streamId)
  if self.indexToTreeType[v7] ~= nil then
    local v17, v18 = self:loadTreeNode(self.indexToTreeType[v7], v8, v9, v10, v11, v12, v13, growthStateI, -1)
    setSplitShapesFileIdMapping(v18, v15)
    self.treesData.clientTrees[v15] = v17
  end
  -- TODO: structure LOP_FORNLOOP (pc 71, target 10)
end
function TreePlantManager:writeToClientStream(streamId)
  self:cleanupDeletedTrees()
  streamWriteInt32(streamId, #self.treesData.growingTrees + #self.treesData.splitTrees)
  for v7, v8 in pairs(self.treesData.growingTrees) do
    streamWriteInt32(streamId, v8.treeType)
    streamWriteFloat32(streamId, v8.x)
    streamWriteFloat32(streamId, v8.y)
    streamWriteFloat32(streamId, v8.z)
    streamWriteFloat32(streamId, v8.rx)
    streamWriteFloat32(streamId, v8.ry)
    streamWriteFloat32(streamId, v8.rz)
    local v15 = table.getn(self.indexToTreeType[v8.treeType].treeFilenames)
    local v11 = math.floor(v8.growthState * (v15 - 1))
    streamWriteInt8(streamId, v11 + 1)
    streamWriteInt32(streamId, v8.splitShapeFileId)
  end
  for v7, v8 in pairs(dtGame.splitTrees) do
    streamWriteInt32(streamId, v8.treeType)
    streamWriteFloat32(streamId, v8.x)
    streamWriteFloat32(streamId, v8.y)
    streamWriteFloat32(streamId, v8.z)
    streamWriteFloat32(streamId, v8.rx)
    streamWriteFloat32(streamId, v8.ry)
    streamWriteFloat32(streamId, v8.rz)
    v15 = table.getn(self.indexToTreeType[v8.treeType].treeFilenames)
    v11 = math.floor(v8.growthState * (v15 - 1))
    streamWriteInt8(streamId, v11 + 1)
    streamWriteInt32(streamId, v8.splitShapeFileId)
  end
end
function TreePlantManager:getTreeTypeDescFromIndex(index)
  if self.treeTypes ~= nil then
    return self.treeTypes[index]
  end
  return nil
end
function TreePlantManager:getTreeTypeNameFromIndex(index)
  if self.treeTypes ~= nil and self.treeTypes[index] ~= nil then
    return self.treeTypes[index].name
  end
  return nil
end
function TreePlantManager:getTreeTypeDescFromName(name)
  if self.nameToTreeType ~= nil and name ~= nil then
    local dtGame = name:upper()
    return self.nameToTreeType[dtGame]
  end
  return nil
end
function TreePlantManager:getTreeTypeDescFromSplitType(dt)
  if self.splitTypeToTreeType ~= nil and dt ~= nil then
    return self.splitTypeToTreeType[dt]
  end
  return nil
end
function TreePlantManager:getTreeTypeIndexFromName(name)
  if self.nameToTreeType ~= nil and name ~= nil then
    local dtGame = name:upper()
    if self.nameToTreeType[dtGame] ~= nil then
      return self.nameToTreeType[dtGame].index
    end
  end
  return nil
end
function TreePlantManager:addClientTree(serverSplitShapeFileId, nodeId)
  if self.treesData ~= nil then
    self.treesData.clientTrees[serverSplitShapeFileId] = nodeId
  end
end
function TreePlantManager:removeClientTree(serverSplitShapeFileId)
  if self.treesData ~= nil then
    self.treesData.clientTrees[serverSplitShapeFileId] = nil
  end
end
function TreePlantManager:getClientTree(serverSplitShapeFileId)
  if self.treesData ~= nil then
    return self.treesData.clientTrees[serverSplitShapeFileId]
  end
end
function TreePlantManager:addingSplitShape(shape, oldShape, fromTree)
  if oldShape ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L20
  elseif fromTree then
    local v6, v7, v8 = getWorldTranslation(shape)
    local v10 = math.abs(v6)
    local v11 = math.abs(v7)
    v10 = math.abs(v8)
  else
  end
  if v4 ~= nil then
    v6 = getNumOfChildren(shape)
    if 0 < v6 then
      self.activeDecayingSplitShapes[shape] = {state = v4, variation = v5}
      self:setSplitShapeLeafScaleAndVariation(shape, v4, v5)
    end
  end
  v6:publish(MessageType.TREE_SHAPE_CUT, oldShape, shape)
end
function TreePlantManager:removingSplitShape(shape)
  self.activeDecayingSplitShapes[shape] = nil
end
function TreePlantManager.setSplitShapeLeafScaleAndVariation(v0, shape, oldShape, fromTree)
  I3DUtil.setShaderParameterRec(shape, "windSnowLeafScale", 0, 0, oldShape, fromTree)
end
function TreePlantManager:consoleCommandCutTrees(radius)
  local oldShape = tonumber(radius or "50")
  self.commandCutTreeData = {trees = {}}
  local fromTree = getCamera()
  local oldShape, fromTree, v4 = getWorldTranslation(...)
  overlapSphere(oldShape, fromTree, v4, oldShape, "onTreeCutCommandOverlapCallback", self, CollisionFlag.TREE, false, true, false, false)
  return string.format("Found %d trees to cut", #self.commandCutTreeData.trees)
end
function TreePlantManager:onTreeCutCommandOverlapCallback(objectId, ...)
  local oldShape = getHasClassId(objectId, ClassIds.SHAPE)
  if oldShape then
    oldShape = getSplitType(objectId)
    if oldShape ~= 0 then
      oldShape = getRigidBodyType(objectId)
      if oldShape == RigidBodyType.STATIC then
        oldShape = getIsSplitShapeSplit(objectId)
        if not oldShape then
          table.insert(self.commandCutTreeData.trees, objectId)
        end
      end
    end
  end
end
function TreePlantManager:onTreeCutCommandSplitCallback(shape, isBelow, isAbove, minY, maxY, minZ, maxZ)
  rotate(shape, 0.1, 0, 0)
  v8:addKnownSplitShape(shape)
  self:addingSplitShape(shape, self.commandCutTreeData.shapeBeingCut, true)
end
local shape = TreePlantManager.new()
g_treePlantManager = v1
