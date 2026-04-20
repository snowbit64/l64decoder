-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

IndoorMask = {NUM_CHANNELS = 1, FIRST_CHANNEL = 0, INDOOR = 1, OUTDOOR = 0}
local IndoorMask_mt = Class(IndoorMask)
function IndoorMask.new(mission, isServer, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.mission = mission
  v3.isServer = isServer
  v3.visualizeMask = false
  v3.handle = nil
  v3.layerName = "indoorMask"
  if g_addCheatCommands then
    addConsoleCommand("gsIndoorMaskToggle", "Toggle indoor mask visualization", "consoleCommandToggleMask", v3)
  end
  return v3
end
function IndoorMask.delete(v0)
  v1:unsubscribeAll(v0)
  if g_addCheatCommands then
    removeConsoleCommand("gsIndoorMaskToggle")
  end
end
function IndoorMask.loadMapData(v0, v1, v2, v3)
end
function IndoorMask:onTerrainLoad(terrainRootNode)
  local v2 = getInfoLayerFromTerrain(terrainRootNode, self.layerName)
  self.handle = v2
  if self.handle ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000004 -> L25
  end
  self.handle = 0
  Logging.error("Layer '%s' is missing for current map!", self.layerName)
  self.terrainSize = self.mission.terrainSize
  self.terrainSizeHalf = self.terrainSize / 2
  if self.handle ~= nil then
    v2 = getBitVectorMapSize(self.handle)
    self.maskSize = v2
    v2 = DensityMapModifier.new(self.handle, IndoorMask.FIRST_CHANNEL, IndoorMask.NUM_CHANNELS)
    self.modifierValue = v2
    v2 = DensityMapFilter.new(self.modifierValue)
    self.filter = v2
    self.worldToDensityMap = self.maskSize / self.terrainSize
    self.densityToWorldMap = self.terrainSize / self.maskSize
  end
end
function IndoorMask:draw()
  if self.visualizeMask then
    self:visualize()
  end
end
function IndoorMask:visualize()
  if self.handle ~= nil then
    local v5 = getCamera(0)
    local v4, v5, v6 = getWorldTranslation(...)
    if self.mission.controlledVehicle ~= nil then
      if self.mission.controlledVehicle.selectedImplement ~= nil then
      end
      local v8, v9, v10 = getWorldTranslation(v7.components[1].node)
    end
    local v7 = math.floor((v4 + v1) * v2)
    v8 = math.floor((v6 + v1) * v2)
    v9 = math.max(v7 - 20, 0)
    v10 = math.max(v8 - 20, 0)
    local v11 = math.min(v7 + 20, self.maskSize - 1)
    local v12 = math.min(v8 + 20, self.maskSize - 1)
    -- TODO: structure LOP_FORNPREP (pc 106, target 161)
    for v19 = v9, v11 do
      local v20 = getBitVectorMapPoint(self.handle, v19, v16, IndoorMask.FIRST_CHANNEL, IndoorMask.NUM_CHANNELS)
      if v20 == IndoorMask.INDOOR then
      end
      DebugUtil.drawDebugAreaRectangleFilled(v19 * v3 - v1, 0, v16 * v3 - v1, v19 * v3 - v1 + v13, 0, v16 * v3 - v1, v19 * v3 - v1, 0, v16 * v3 - v1 + v13, true, v21, v22, v23, 0.2)
      -- TODO: structure LOP_FORNLOOP (pc 159, target 111)
    end
  end
end
function IndoorMask:hasMask()
  if self.handle == nil then
  end
  return true
end
function IndoorMask:getFilter(indoorOutdoor)
  if self.handle ~= nil then
    v2:setValueCompareParams(DensityValueCompareType.EQUAL, indoorOutdoor)
    return self.filter
  end
  return nil
end
function IndoorMask:getValueAtPosition(wx, wz)
  if self.handle ~= nil then
    local x = math.floor((wx + self.terrainSizeHalf) * self.worldToDensityMap)
    local z = math.floor((wz + self.terrainSizeHalf) * self.worldToDensityMap)
    return getBitVectorMapPoint(self.handle, x, z, IndoorMask.FIRST_CHANNEL, IndoorMask.NUM_CHANNELS)
  end
end
function IndoorMask:setPlaceableAreaInSnowMask(area, indoor)
  if self.handle == nil then
    return
  end
  local v3, v4, v5 = getWorldTranslation(area.start)
  local v6, v7, v8 = getWorldTranslation(area.width)
  local v9, v10, v11 = getWorldTranslation(area.height)
  self:setParallelogramUVCoords(self.modifierValue, v3, v5, v6, v8, v9, v11)
  v12:executeSet(indoor)
end
function IndoorMask:setParallelogramUVCoords(modifier, startWorldX, startWorldZ, widthWorldX, widthWorldZ, heightWorldX, heightWorldZ)
  modifier:setParallelogramUVCoords(startWorldX / self.terrainSize + 0.5, startWorldZ / self.terrainSize + 0.5, widthWorldX / self.terrainSize + 0.5, widthWorldZ / self.terrainSize + 0.5, heightWorldX / self.terrainSize + 0.5, heightWorldZ / self.terrainSize + 0.5, DensityCoordType.POINT_POINT_POINT)
end
function IndoorMask:getDensityMapData()
  return self.handle, IndoorMask.FIRST_CHANNEL, IndoorMask.NUM_CHANNELS
end
function IndoorMask:consoleCommandToggleMask()
  self.visualizeMask = not self.visualizeMask
  return tostring(self.visualizeMask)
end
