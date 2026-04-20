-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

LandscapingSculptEvent = {}
local LandscapingSculptEvent_mt = Class(LandscapingSculptEvent, Event)
InitStaticEventClass(LandscapingSculptEvent, "LandscapingSculptEvent", EventIds.EVENT_LANDSCAPING_SCULPT)
function LandscapingSculptEvent.emptyNew()
  return Event.new(u0)
end
function LandscapingSculptEvent.new(validateOnly, operation, x, y, z, nx, ny, nz, d, minY, maxY, radius, strength, brushShape, smoothingDistance, terrainPaintingLayer, terrainFoliageLayer, terrainFoliageValue)
  local v18 = LandscapingSculptEvent.emptyNew()
  v18.runConnection = nil
  v18.validateOnly = validateOnly
  v18.operation = operation
  v18.x = x
  v18.y = y
  v18.z = z
  v18.nx = nx
  v18.ny = ny
  v18.nz = nz
  v18.d = d
  v18.minY = minY
  v18.maxY = maxY
  v18.radius = radius
  v18.strength = strength
  v18.smoothingDistance = smoothingDistance
  v18.brushShape = brushShape
  v18.terrainPaintingLayer = terrainPaintingLayer
  v18.terrainFoliageLayer = terrainFoliageLayer
  v18.terrainFoliageValue = terrainFoliageValue
  return v18
end
function LandscapingSculptEvent.newServerToClient(validateOnly, errorCode, displacedVolumeOrArea)
  local v3 = LandscapingSculptEvent.emptyNew()
  v3.validateOnly = validateOnly
  v3.errorCode = errorCode
  v3.displacedVolumeOrArea = displacedVolumeOrArea
  return v3
end
function LandscapingSculptEvent.delete(v0)
end
function LandscapingSculptEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    streamWriteFloat32(streamId, self.x)
    streamWriteFloat32(streamId, self.y)
    streamWriteFloat32(streamId, self.z)
    streamWriteFloat32(streamId, self.radius)
    streamWriteFloat32(streamId, self.strength)
    streamWriteFloat32(streamId, self.smoothingDistance)
    streamWriteUIntN(streamId, self.operation, Landscaping.OPERATION_NUM_SEND_BITS)
    streamWriteUIntN(streamId, self.brushShape, Landscaping.BRUSH_SHAPE_NUM_SEND_BITS)
    streamWriteBool(streamId, self.validateOnly)
    if self.operation == Landscaping.OPERATION.PAINT then
      streamWriteUIntN(streamId, self.terrainPaintingLayer, TerrainDeformation.LAYER_SEND_NUM_BITS)
    end
    if self.operation == Landscaping.OPERATION.FOLIAGE then
      streamWriteUIntN(streamId, self.terrainFoliageLayer, TerrainDeformation.LAYER_SEND_NUM_BITS)
      streamWriteUIntN(streamId, self.terrainFoliageValue, 5)
    end
    -- if v0.operation ~= Landscaping.OPERATION.SLOPE then goto L173 end
    streamWriteFloat32(streamId, self.nx)
    streamWriteFloat32(streamId, self.ny)
    streamWriteFloat32(streamId, self.nz)
    streamWriteFloat32(streamId, self.d)
    streamWriteFloat32(streamId, self.minY)
    streamWriteFloat32(streamId, self.maxY)
    return
  end
  streamWriteUIntN(streamId, self.errorCode, TerrainDeformation.STATE_SEND_NUM_BITS)
  streamWriteBool(streamId, self.validateOnly)
  if self.errorCode ~= TerrainDeformation.STATE_SUCCESS then
  end
  v3 = v3(v4, true)
  if v3 then
    streamWriteFloat32(streamId, self.displacedVolumeOrArea)
  end
end
function LandscapingSculptEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = streamReadFloat32(streamId)
    self.x = v3
    v3 = streamReadFloat32(streamId)
    self.y = v3
    v3 = streamReadFloat32(streamId)
    self.z = v3
    v3 = streamReadFloat32(streamId)
    self.radius = v3
    v3 = streamReadFloat32(streamId)
    self.strength = v3
    v3 = streamReadFloat32(streamId)
    self.smoothingDistance = v3
    v3 = streamReadUIntN(streamId, Landscaping.OPERATION_NUM_SEND_BITS)
    self.operation = v3
    v3 = streamReadUIntN(streamId, Landscaping.BRUSH_SHAPE_NUM_SEND_BITS)
    self.brushShape = v3
    v3 = streamReadBool(streamId)
    self.validateOnly = v3
    if self.operation == Landscaping.OPERATION.PAINT then
      v3 = streamReadUIntN(streamId, TerrainDeformation.LAYER_SEND_NUM_BITS)
      self.terrainPaintingLayer = v3
    end
    if self.operation == Landscaping.OPERATION.FOLIAGE then
      v3 = streamReadUIntN(streamId, TerrainDeformation.LAYER_SEND_NUM_BITS)
      self.terrainFoliageLayer = v3
      v3 = streamReadUIntN(streamId, 5)
      self.terrainFoliageValue = v3
    end
    -- if v0.operation ~= Landscaping.OPERATION.SLOPE then goto L169 end
    v3 = streamReadFloat32(streamId)
    self.nx = v3
    v3 = streamReadFloat32(streamId)
    self.ny = v3
    v3 = streamReadFloat32(streamId)
    self.nz = v3
    v3 = streamReadFloat32(streamId)
    self.d = v3
    v3 = streamReadFloat32(streamId)
    self.minY = v3
    v3 = streamReadFloat32(streamId)
    self.maxY = v3
  else
    v3 = streamReadUIntN(streamId, TerrainDeformation.STATE_SEND_NUM_BITS)
    self.errorCode = v3
    v3 = streamReadBool(streamId)
    self.validateOnly = v3
    v3 = streamReadBool(streamId)
    if v3 then
      v3 = streamReadFloat32(streamId)
      self.displacedVolumeOrArea = v3
    else
      self.displacedVolumeOrArea = 0
    end
  end
  self:run(connection)
end
function LandscapingSculptEvent:run(connection)
  local v2 = connection:getIsServer()
  if not v2 and g_currentMission ~= nil then
    self.runConnection = connection
    local v4 = g_currentMission.userManager:getUserIdByConnection(connection)
    local v5 = v5:getFarmByUserId(v4)
    local v6 = g_currentMission.userManager:getIsUserIdMasterUser(v4)
    local v7 = Landscaping.new(g_terrainDeformationQueue, g_farmlandManager, g_currentMission.terrainRootNode, g_densityMapHeightManager.placementCollisionMap, v5, v4, v6, self.validateOnly, self.onSculptingFinished, self)
    v7:sculpt(self.x, self.y, self.z, self.nx, self.ny, self.nz, self.d, self.minY, self.maxY, self.radius, self.strength, self.brushShape, self.operation, self.smoothingDistance, self.terrainPaintingLayer, self.terrainFoliageLayer, self.terrainFoliageValue)
    return
  end
  v2:publish(LandscapingSculptEvent, self.validateOnly, self.errorCode, self.displacedVolumeOrArea)
end
function LandscapingSculptEvent:onSculptingFinished(errorCode, displacedVolumeOrArea, _)
  if self.runConnection ~= nil and self.runConnection.isConnected then
    local response = LandscapingSculptEvent.newServerToClient(self.validateOnly, errorCode, displacedVolumeOrArea)
    v5:sendEvent(response)
  end
end
