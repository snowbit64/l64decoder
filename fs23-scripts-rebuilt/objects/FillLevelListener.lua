-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FillLevelListener = {}
local FillLevelListener_mt = Class(FillLevelListener, Object)
InitStaticObjectClass(FillLevelListener, "FillLevelListener", ObjectIds.OBJECT_FILLLEVEL_LISTENER)
function FillLevelListener.new(isServer, isClient, customMt)
  if customMt == nil then
  end
  return Object.new(isServer, isClient, customMt)
end
function FillLevelListener:load(id)
  self.node = id
  self.fillTypes = {}
  local v2 = getUserAttribute(id, "fillTypeCategories")
  local fillTypeNames = getUserAttribute(id, "fillTypes")
  if v2 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L30
    local v5 = v5:getFillTypesByCategoryNames(v2, "Warning: UnloadTrigger has invalid fillTypeCategory '%s'.")
  elseif v2 == nil and fillTypeNames ~= nil then
    v5 = v5:getFillTypesByNames(fillTypeNames, "Warning: UnloadTrigger has invalid fillType '%s'.")
  end
  if v4 ~= nil then
    for v8, v9 in pairs(v4) do
      self.fillTypes[v9] = true
    end
  else
    self.fillTypes = nil
  end
  if self.fillTypes ~= nil then
    v6 = getUserAttribute(id, "avoidFillTypes")
    if v6 ~= nil then
      v7 = v7:getFillTypesByNames(v6, "Warning: UnloadTrigger has invalid avoidFillType '%s'.")
    end
    if v5 ~= nil then
      for v10, v11 in pairs(v5) do
        if not (self.fillTypes[v11] ~= nil) then
          continue
        end
        self.fillTypes[v11] = nil
      end
    end
  end
  v5 = getUserAttribute(id, "fillLevelMaxY")
  self.fillLevelMaxY = v5
  v5 = getUserAttribute(id, "minMaxY")
  v6 = string.getVectorN(v5, 2)
  self.minMaxY = v6
  v7 = getTranslation(self.node)
  self.baseTranslation = {}
  self.currentY = self.baseTranslation[2]
  if self.fillTypes ~= nil and self.fillLevelMaxY ~= nil and self.minMaxY ~= nil then
    v6 = self:getNextDirtyFlag()
    self.dirtyFlag = v6
    return true
  end
  return false
end
function FillLevelListener.delete(v0)
end
function FillLevelListener:readStream(streamId, connection)
  local v4 = v4:superClass()
  v4.readStream(self, streamId, connection)
  local fillTypeNames = connection:getIsServer()
  if fillTypeNames then
    fillTypeNames = streamReadFloat32(streamId)
    setTranslation(self.node, self.baseTranslation[1], fillTypeNames, self.baseTranslation[3])
  end
end
function FillLevelListener:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local fillTypeNames = connection:getIsServer()
  if not fillTypeNames then
    streamWriteFloat32(streamId, self.currentY)
  end
end
function FillLevelListener:readUpdateStream(streamId, timestamp, connection)
  local v5 = v5:superClass()
  v5.readUpdateStream(self, streamId, timestamp, connection)
  local v4 = connection:getIsServer()
  if v4 then
    v4 = streamReadBool(streamId)
    if v4 then
      v4 = streamReadFloat32(streamId)
      setTranslation(self.node, self.baseTranslation[1], v4, self.baseTranslation[3])
    end
  end
end
function FillLevelListener:writeUpdateStream(streamId, connection, dirtyMask)
  local v5 = v5:superClass()
  v5.writeUpdateStream(self, streamId, connection, dirtyMask)
  local v4 = connection:getIsServer()
  if not v4 then
    local v7 = bitAND(dirtyMask, self.dirtyFlag)
    if v7 == 0 then
    end
    v4 = v4(v5, true)
    if v4 then
      streamWriteFloat32(streamId, self.currentY)
    end
  end
end
function FillLevelListener:setSource(source)
  if source.getFillLevel == nil then
  end
  assert(true)
  if source.getSupportedFillTypes == nil then
  end
  assert(true)
  self.source = source
  local v2 = v2:getSupportedFillTypes()
  for v6, v7 in pairs(self.fillTypes) do
    if not (v2[v6] ~= true) then
      continue
    end
    self.fillTypes[v6] = nil
  end
  self.fillLevels = {}
  for v6, v7 in pairs(self.fillTypes) do
    self.fillLevels[v6] = 0
  end
end
function FillLevelListener:fillLevelsChanged()
  for v5, v6 in pairs(self.fillLevels) do
  end
  v2 = math.min(1, id / self.fillLevelMaxY)
  if self.minMaxY[1] + v2 * (self.minMaxY[2] - self.minMaxY[1]) ~= self.currentY then
    self:raiseDirtyFlags(self.dirtyFlag)
  end
  self.currentY = fillTypeNames
  setTranslation(self.node, self.baseTranslation[1], fillTypeNames, self.baseTranslation[3])
end
