-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InfoLayer = {}
local InfoLayer_mt = Class(InfoLayer)
function InfoLayer.new(name, baseDirectory, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.baseDirectory = baseDirectory
  local v4 = createBitVectorMap(name)
  v3.bitVector = v4
  v3.name = name
  v3.width = 0
  v3.height = 0
  v3.doDelete = true
  return v3
end
function InfoLayer:loadFromXML(xmlFile, key)
  local v4 = xmlFile:getString(key .. "#filename")
  local v3 = Utils.getFilename(v4, self.baseDirectory)
  v4 = xmlFile:getInt(key .. "#numChannels")
  return self:load(v3, v4)
end
function InfoLayer:load(filename, numChannels)
  local success = loadBitVectorMapFromFile(self.bitVector, filename, numChannels)
  if not success then
    local v11 = tostring(filename)
    print("Warning: Loading infolayer '" .. self.name .. "' file '" .. v11 .. "' failed!")
    return false
  end
  self.numChannels = numChannels
  local v4, v5 = getBitVectorMapSize(self.bitVector)
  self.width = v4
  self.height = v5
  return true
end
function InfoLayer:create(width, height, numChannels, initAll)
  loadBitVectorMapNew(self.bitVector, width, height, numChannels, initAll)
  self.numChannels = numChannels
  self.width = width
  self.height = height
  return true
end
function InfoLayer.loadFromMap(v0, v1, v2)
  return false
end
function InfoLayer:loadFromMemory(id)
  self.doDelete = false
  self.bitVector = id
  local v2 = getBitVectorMapNumChannels(id)
  self.numChannels = v2
  local v2, v3 = getBitVectorMapSize(id)
  self.width = v2
  self.height = v3
  return true
end
function InfoLayer:delete()
  if self.doDelete then
    delete(self.bitVector)
  end
end
function InfoLayer:writeStream(streamId, connection)
  writeBitVectorMapToStream(self.bitVector, streamId)
end
function InfoLayer:readStream(streamId, connection)
  readBitVectorMapFromStream(self.bitVector, streamId)
end
function InfoLayer:convertWorldToLocalPosition(worldPosX, worldPosZ)
  local v4 = math.floor(self.width * (worldPosX + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize)
  local v5 = math.floor(self.height * (worldPosZ + g_currentMission.terrainSize * 0.5) / g_currentMission.terrainSize)
  return v4
end
function InfoLayer:getValueAtWorldPos(worldX, worldZ, firstChannel, numChannels)
  local v5, v6 = self:convertWorldToLocalPosition(worldX, worldZ)
  if not numChannels then
  end
  return v7(v8, v9, v10, v11, v12)
end
function InfoLayer:getValueAtPos(x, y, firstChannel, numChannels)
  if not numChannels then
  end
  return v5(v6, v7, v8, v9, v10)
end
function InfoLayer:getValueAtParallelogram(x, y, widthX, widthY, heightX, heightY, firstChannel, numChannels)
  if not numChannels then
  end
  return v9(v10, v11, v12, v13, v14, v15, v16, v17, v18)
end
function InfoLayer:getValueAtWorldParallelogram(worldX, worldZ, worldWidthX, worldWidthZ, worldHeightX, worldHeightZ, firstChannel, numChannels)
  local v9, v10 = self:convertWorldToLocalPosition(worldX, worldZ)
  local v11, v12 = self:convertWorldToLocalPosition(worldWidthX, worldWidthZ)
  local v13, v14 = self:convertWorldToLocalPosition(worldHeightX, worldHeightZ)
  if not numChannels then
  end
  return v15(v16, v17, v18, v19, v20, v21, v22, v23, v24)
end
function InfoLayer:saveToFile(filename, asyncCallback, asyncTarget)
  if asyncCallback == nil then
    saveBitVectorMapToFile(self.bitVector, filename)
    return
  end
  prepareSaveBitVectorMapToFile(self.bitVector, filename)
  savePreparedBitVectorMapToFile(self.bitVector, asyncCallback, asyncTarget)
end
