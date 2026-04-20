-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChainsawCutEvent = {}
local ChainsawCutEvent_mt = Class(ChainsawCutEvent, Event)
InitStaticEventClass(ChainsawCutEvent, "ChainsawCutEvent", EventIds.EVENT_CHAINSAW_CUT)
function ChainsawCutEvent.emptyNew()
  return Event.new(u0)
end
function ChainsawCutEvent.new(splitShapeId, x, y, z, nx, ny, nz, yx, yy, yz, cutSizeY, cutSizeZ, farmId)
  local v13 = ChainsawCutEvent.emptyNew()
  v13.splitShapeId = splitShapeId
  v13.x = x
  v13.y = y
  v13.z = z
  v13.nx = nx
  v13.ny = ny
  v13.nz = nz
  v13.yx = yx
  v13.yy = yy
  v13.yz = yz
  v13.cutSizeY = cutSizeY
  v13.cutSizeZ = cutSizeZ
  v13.farmId = farmId
  return v13
end
function ChainsawCutEvent.readStream(v0, v1, v2)
  local v3 = v2:getIsServer()
  if not v3 then
    v3 = readSplitShapeIdFromStream(v1)
    local v4 = streamReadFloat32(v1)
    local v5 = streamReadFloat32(v1)
    local v6 = streamReadFloat32(v1)
    local v7 = streamReadFloat32(v1)
    local v8 = streamReadFloat32(v1)
    local v9 = streamReadFloat32(v1)
    local v10 = streamReadFloat32(v1)
    local v11 = streamReadFloat32(v1)
    local v12 = streamReadFloat32(v1)
    local v13 = streamReadFloat32(v1)
    local v14 = streamReadFloat32(v1)
    local v15 = streamReadUIntN(v1, FarmManager.FARM_ID_SEND_NUM_BITS)
    if v3 ~= 0 then
      ChainsawUtil.cutSplitShape(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
    end
  end
end
function ChainsawCutEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    writeSplitShapeIdToStream(streamId, self.splitShapeId)
    streamWriteFloat32(streamId, self.x)
    streamWriteFloat32(streamId, self.y)
    streamWriteFloat32(streamId, self.z)
    streamWriteFloat32(streamId, self.nx)
    streamWriteFloat32(streamId, self.ny)
    streamWriteFloat32(streamId, self.nz)
    streamWriteFloat32(streamId, self.yx)
    streamWriteFloat32(streamId, self.yy)
    streamWriteFloat32(streamId, self.yz)
    streamWriteFloat32(streamId, self.cutSizeY)
    streamWriteFloat32(streamId, self.cutSizeZ)
    streamWriteFloat32(streamId, self.farmId)
  end
end
function ChainsawCutEvent.run(v0, v1)
  print("Error: ChainsawCutEvent is not allowed to be executed on a local client")
end
