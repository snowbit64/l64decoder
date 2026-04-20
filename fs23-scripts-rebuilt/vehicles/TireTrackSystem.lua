-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TireTrackSystem = {}
local TireTrackSystem_mt = Class(TireTrackSystem)
TireTrackSystem.maxNumTracks = 512
TireTrackSystem.maxNumSegments = 4096
function TireTrackSystem.onCreateTireTrackSystem(_, id)
  if g_currentMission.tireTrackSystem ~= nil then
    return
  end
  local v2 = TireTrackSystem.new()
  local v3 = v2:load(id)
  if v3 then
    g_currentMission.tireTrackSystem = v2
    return
  end
  v2:delete()
end
function TireTrackSystem.new(mt)
  if not mt then
  end
  local v1 = v1(v2, v3)
  v1.systemId = 0
  return v1
end
function TireTrackSystem:load(id)
  local v3 = getRootNode(0)
  local v2 = createTyreTrackSystem(v3, id, TireTrackSystem.maxNumTracks, TireTrackSystem.maxNumSegments, g_currentMission.terrainRootNode)
  self.systemId = v2
  if g_addTestCommands then
    addConsoleCommand("gsTireTracksRemoveAll", "Remove all tire tracks from terrain", "TireTrackSystem.consoleCommandRemoveAllTireTracks", nil)
    addConsoleCommand("gsTireTracksDebug", "Toggle tire track debug mode with permanently active and colored tracks", "TireTrackSystem.consoleCommandTireTrackDebug", nil)
  end
  if self.systemId ~= 0 then
    return true
  end
  return false
end
function TireTrackSystem:delete()
  if self.systemId ~= 0 then
    delete(self.systemId)
  end
  removeConsoleCommand("gsTireTracksRemoveAll")
  removeConsoleCommand("gsTireTracksDebug")
end
function TireTrackSystem:createTrack(width, atlasIndex)
  return createTrack(self.systemId, width, atlasIndex)
end
function TireTrackSystem:destroyTrack(id)
  destroyTrack(self.systemId, id)
end
function TireTrackSystem:addTrackPoint(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
  addTrackPoint(self.systemId, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
end
function TireTrackSystem:cutTrack(id)
  cutTrack(self.systemId, id)
end
function TireTrackSystem:eraseParallelogram(x0, z0, dx1, dz1, dx2, dz2)
  eraseParallelogram(self.systemId, x0, z0, dx1, dz1, dx2, dz2)
end
function TireTrackSystem.consoleCommandRemoveAllTireTracks(v0)
  if g_currentMission.tireTrackSystem ~= nil then
    v2:eraseParallelogram(-(g_currentMission.terrainSize / 2 + 1), -(g_currentMission.terrainSize / 2 + 1), g_currentMission.terrainSize / 2 + 1, -(g_currentMission.terrainSize / 2 + 1), -(g_currentMission.terrainSize / 2 + 1), g_currentMission.terrainSize / 2 + 1)
    return "Removed all tiretracks!"
  end
  return "Error: no tireTrackSystem found!"
end
function TireTrackSystem:consoleCommandTireTrackDebug()
  if g_currentMission.tireTrackSystem ~= nil then
    if self.addTrackPointFuncBackup == nil then
      self.addTrackPointFuncBackup = addTrackPoint
      function addTrackPoint(self, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
        local v16 = DebugUtil.getDebugColor(v1)
        local v15, v16, v17 = unpack(...)
        v15 = u0.addTrackPointFuncBackup(self, v1, v2, v3, v4, v5, v6, v7, v15, v16, v17, 1, 1, v13, v14)
        return v15
      end
      return "Enabled TireTrack debug"
    end
    addTrackPoint = self.addTrackPointFuncBackup
    self.addTrackPointFuncBackup = nil
    return "Disabled TireTrack debug"
  end
  return "Error: no tireTrackSystem found!"
end
