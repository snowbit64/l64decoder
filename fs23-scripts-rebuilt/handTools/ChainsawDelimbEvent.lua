-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ChainsawDelimbEvent = {}
local ChainsawDelimbEvent_mt = Class(ChainsawDelimbEvent, Event)
InitStaticEventClass(ChainsawDelimbEvent, "ChainsawDelimbEvent", EventIds.EVENT_CHAINSAW_DELIMB)
function ChainsawDelimbEvent.emptyNew()
  return Event.new(u0)
end
function ChainsawDelimbEvent.new(player, x, y, z, nx, ny, nz, yx, yy, yz, onDelimb)
  local v11 = ChainsawDelimbEvent.emptyNew()
  v11.player = player
  v11.x = x
  v11.y = y
  v11.z = z
  v11.nx = nx
  v11.ny = ny
  v11.nz = nz
  v11.yx = yx
  v11.yy = yy
  v11.yz = yz
  v11.onDelimb = onDelimb
  return v11
end
function ChainsawDelimbEvent:readStream(streamId, connection)
  local v3 = connection:getIsServer()
  if not v3 then
    v3 = NetworkUtil.readNodeObject(streamId)
    self.player = v3
    v3 = streamReadFloat32(streamId)
    self.x = v3
    v3 = streamReadFloat32(streamId)
    self.y = v3
    v3 = streamReadFloat32(streamId)
    self.z = v3
    v3 = streamReadFloat32(streamId)
    self.nx = v3
    v3 = streamReadFloat32(streamId)
    self.ny = v3
    v3 = streamReadFloat32(streamId)
    self.nz = v3
    v3 = streamReadFloat32(streamId)
    self.yx = v3
    v3 = streamReadFloat32(streamId)
    self.yy = v3
    v3 = streamReadFloat32(streamId)
    self.yz = v3
    self.onDelimb = false
    if self.player ~= nil and self.player.baseInformation.currentHandtool ~= nil then
      local v4 = findAndRemoveSplitShapeAttachments(self.x, self.y, self.z, self.nx, self.ny, self.nz, self.yx, self.yy, self.yz, 0.7, self.player.baseInformation.currentHandtool.cutSizeY, self.player.baseInformation.currentHandtool.cutSizeZ)
      if v4 then
        self.onDelimb = true
        connection:sendEvent(self)
      end
    end
  end
end
function ChainsawDelimbEvent:writeStream(streamId, connection)
  local v3 = connection:getIsServer()
  if v3 then
    NetworkUtil.writeNodeObject(streamId, self.player)
    streamWriteFloat32(streamId, self.x)
    streamWriteFloat32(streamId, self.y)
    streamWriteFloat32(streamId, self.z)
    streamWriteFloat32(streamId, self.nx)
    streamWriteFloat32(streamId, self.ny)
    streamWriteFloat32(streamId, self.nz)
    streamWriteFloat32(streamId, self.yx)
    streamWriteFloat32(streamId, self.yy)
    streamWriteFloat32(streamId, self.yz)
    return
  end
  NetworkUtil.writeNodeObject(streamId, self.player)
  streamWriteBool(streamId, self.onDelimb)
end
function ChainsawDelimbEvent.run(v0, v1)
  print("Error: ChainsawDelimbEvent is not allowed to be executed on a local client")
end
