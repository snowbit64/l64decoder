-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Profiler = {IS_INITIALIZED = false, IS_READY = false, IS_GRID_INITIALIZED = false, IS_GRID_FINISHED = false, IS_FINISHED = false, MAP = "", OUTPUT_FILENAME = "", SAMPLING_GRID_SIZE = -1, SAMPLING_CUSTOM_NODE = "", MAP_ROOT_NODE = {}, PROFILING_ROOT_NODE = {}, CURRENT_NODE_ID = 0, NUM_NODES = 0, GRID_CURRENT_X = 0, GRID_CURRENT_Z = 0, GRID_CURRENT_ROTATION = 1, CAMERA = nil, FRAME_COUNT = 0, INITIAL_FRAMES_PAUSED = 0, STARTUP_FRAME_PAUSE = 500, FRAMES_BETWEEN_SAMPLES = 20, SAVEGAME_NUMBER = 3, MAP_SIZE = 0}
function Profiler.init()
  if Profiler.IS_INITIALIZED then
    return
  end
  local v0 = StartParams.getIsSet("profilerStatsMap")
  if not v0 then
    return
  end
  v0 = StartParams.getIsSet("profilerStatsOutputPath")
  if not v0 then
    return
  end
  v0 = StartParams.getIsSet("name")
  if not v0 then
    return
  end
  local v1 = StartParams.getValue("profilerStatsMap")
  Profiler.MAP = v1
  v1 = StartParams.getIsSet("profilerStatsSamplingGridSize")
  if v1 then
    local v2 = StartParams.getValue("profilerStatsSamplingGridSize")
    v1 = tonumber(...)
    if v1 ~= nil then
      -- if v1 > 0 then goto L55 end
    end
    Logging.error("Invalid 'profilerStatsSamplingGridSize' parameter")
    return
    -- TODO: structure LOP_FORNPREP (pc 62, target 81)
    local v8 = math.pow(2, 4)
    v8 = math.abs(v1 - v8)
    if v8 < math.huge then
    end
    -- TODO: structure LOP_FORNLOOP (pc 80, target 63)
    if v4 ~= 0 then
      Logging.warning("Grid size '%s' was not a power of 2, changed to '%s'!", v1, v3)
    end
    Profiler.SAMPLING_GRID_SIZE = v3
  end
  v1 = StartParams.getIsSet("profilerStatsSamplingCustomNode")
  if v1 then
    v2 = StartParams.getValue("profilerStatsSamplingCustomNode")
    Profiler.SAMPLING_CUSTOM_NODE = v2
  end
  if not v0 then
    Logging.error("Profiler needs 'profilerStatsSamplingGridSize' or 'profilerStatsSamplingCustomNode' parameter set")
    return
  end
  v2 = createCamera("cameraProfiler", 1.0471975511965976, 1, 10000)
  Profiler.CAMERA = v2
  v2 = getRootNode()
  link(v2, Profiler.CAMERA)
  Profiler.IS_INITIALIZED = true
end
function Profiler.delete()
  if Profiler.CAMERA ~= nil then
    delete(Profiler.CAMERA)
  end
end
function Profiler.startProfiler()
  if Profiler.IS_INITIALIZED then
    Logging.info("######################### Starting Profiler #########################")
    v0:setIsMultiplayer(false)
    v0:showGui("CareerScreen")
  end
end
function Profiler.setMapRootNode(v0)
  Profiler.MAP_ROOT_NODE = v0
  if Profiler.SAMPLING_CUSTOM_NODE ~= "" then
    local v2 = getChild(v0, Profiler.SAMPLING_CUSTOM_NODE)
    Profiler.PROFILING_ROOT_NODE = v2
    if Profiler.PROFILING_ROOT_NODE == 0 then
      Profiler.IS_INITIALIZED = false
      Logging.error("Profiler SamplingCustomNode '%s' not found", Profiler.SAMPLING_CUSTOM_NODE)
      return
    end
    v2 = getNumOfChildren(Profiler.PROFILING_ROOT_NODE)
    Profiler.NUM_NODES = v2
  end
  if Profiler.IS_INITIALIZED then
    local v1 = profilerStatsExportInit()
    if v1 then
      if g_currentMission ~= nil and g_currentMission.missionInfo ~= nil then
        v2 = tostring(g_currentMission.missionInfo.mapId)
      end
      profilerStatsExportAddMetadata("map", v1)
      local v4 = tostring(g_currentMission.mapWidth)
      profilerStatsExportAddMetadata(...)
      v4 = tostring(g_currentMission.mapHeight)
      profilerStatsExportAddMetadata(...)
      v4 = getDate("%Y-%m-%dT%H:%M:%SZ")
      profilerStatsExportAddMetadata(...)
      v4 = getEngineRevision()
      profilerStatsExportAddMetadata(...)
      profilerStatsExportAddMetadata("defaultNodeType", "grid")
      v4 = StartParams.getValue("name")
      profilerStatsExportAddMetadata(...)
      local v12 = StartParams.getValue("profilerStatsOutputPath")
      v12 = getDate("%Y-%m-%d_%H-%M-%S")
      v12 = StartParams.getValue("name")
      Profiler.OUTPUT_FILENAME = v12 .. "\\" .. v12 .. "_" .. v12 .. "_" .. v1 .. ".json"
      return
    end
    Profiler.IS_INITIALIZED = false
  end
end
function Profiler.setIsReady()
  Profiler.IS_READY = true
end
function Profiler.update()
  if Profiler.IS_READY then
    setFramerateLimiter(false, Platform.defaultFrameLimit)
    if Profiler.IS_GRID_INITIALIZED then
      if Profiler.STARTUP_FRAME_PAUSE < Profiler.INITIAL_FRAMES_PAUSED then
        if not Profiler.IS_GRID_FINISHED and Profiler.FRAMES_BETWEEN_SAMPLES < Profiler.FRAME_COUNT and 0 < Profiler.SAMPLING_GRID_SIZE then
          profilerStatsExportAddSampleBegin()
          local v2 = tostring(Profiler.GRID_CURRENT_ROTATION * 90)
          profilerStatsExportAddSampleData(...)
          profilerStatsExportAddSampleEnd()
          local v3 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, Profiler.GRID_CURRENT_X - Profiler.MAP_SIZE * 0.5, 0, Profiler.GRID_CURRENT_Z - Profiler.MAP_SIZE * 0.5)
          setTranslation(Profiler.CAMERA, Profiler.GRID_CURRENT_X - Profiler.MAP_SIZE * 0.5, v3 + 1.8, Profiler.GRID_CURRENT_Z - Profiler.MAP_SIZE * 0.5)
          setRotation(Profiler.CAMERA, 0, Profiler.GRID_CURRENT_ROTATION * math.pi * 0.5, 0)
          Profiler.GRID_CURRENT_ROTATION = Profiler.GRID_CURRENT_ROTATION + 1
          if Profiler.GRID_CURRENT_ROTATION == 4 then
            Profiler.GRID_CURRENT_ROTATION = 0
            Profiler.GRID_CURRENT_X = Profiler.GRID_CURRENT_X + Profiler.SAMPLING_GRID_SIZE
            if Profiler.MAP_SIZE < Profiler.GRID_CURRENT_X then
              Profiler.GRID_CURRENT_X = Profiler.SAMPLING_GRID_SIZE * 0.5
              Profiler.GRID_CURRENT_Z = Profiler.GRID_CURRENT_Z + Profiler.SAMPLING_GRID_SIZE
              if Profiler.MAP_SIZE < Profiler.GRID_CURRENT_Z then
                profilerStatsExportAddSampleBegin()
                local v6 = tostring(Profiler.GRID_CURRENT_ROTATION * 90)
                profilerStatsExportAddSampleData(...)
                profilerStatsExportAddSampleEnd()
                Profiler.IS_GRID_FINISHED = true
              end
            end
          end
          Profiler.FRAME_COUNT = 0
          return
        end
        if Profiler.FRAMES_BETWEEN_SAMPLES < Profiler.FRAME_COUNT and 0 < Profiler.NUM_NODES then
          if Profiler.CURRENT_NODE_ID == Profiler.NUM_NODES then
            Profiler.finish()
            return
          end
          if 0 < Profiler.CURRENT_NODE_ID then
            local v0, v1, v2 = getRotation(Profiler.CAMERA)
            profilerStatsExportAddSampleBegin()
            local v5 = tostring(v0 * 180 / math.pi)
            profilerStatsExportAddSampleData(...)
            v5 = tostring(v1 * 180 / math.pi)
            profilerStatsExportAddSampleData(...)
            v5 = tostring(v2 * 180 / math.pi)
            profilerStatsExportAddSampleData(...)
            profilerStatsExportAddSampleData("type", "custom")
            profilerStatsExportAddSampleEnd()
          end
          v0 = getChildAt(Profiler.PROFILING_ROOT_NODE, Profiler.CURRENT_NODE_ID)
          v1, v2, v3 = getWorldTranslation(v0)
          local v4, v5, v6 = getWorldRotation(v0)
          setTranslation(Profiler.CAMERA, v1, v2, v3)
          setRotation(Profiler.CAMERA, v4, v5, v6)
          Profiler.CURRENT_NODE_ID = Profiler.CURRENT_NODE_ID + 1
          Profiler.FRAME_COUNT = 0
          return
        end
        if Profiler.IS_GRID_FINISHED and Profiler.NUM_NODES == 0 then
          Profiler.finish()
          return
        end
        Profiler.FRAME_COUNT = Profiler.FRAME_COUNT + 1
        return
      end
      Profiler.INITIAL_FRAMES_PAUSED = Profiler.INITIAL_FRAMES_PAUSED + 1
      return
    end
    setCamera(Profiler.CAMERA)
    Profiler.MAP_SIZE = g_currentMission.mapHeight
    if 0 < Profiler.SAMPLING_GRID_SIZE then
      Profiler.GRID_CURRENT_X = Profiler.SAMPLING_GRID_SIZE * 0.5
      Profiler.GRID_CURRENT_Z = Profiler.SAMPLING_GRID_SIZE * 0.5
      v3 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, Profiler.GRID_CURRENT_X - Profiler.MAP_SIZE * 0.5, 0, Profiler.GRID_CURRENT_Z - Profiler.MAP_SIZE * 0.5)
      setTranslation(Profiler.CAMERA, Profiler.GRID_CURRENT_X - Profiler.MAP_SIZE * 0.5, v3 + 1.8, Profiler.GRID_CURRENT_Z - Profiler.MAP_SIZE * 0.5)
      setRotation(Profiler.CAMERA, 0, 0, 0)
      Profiler.IS_GRID_INITIALIZED = true
    end
    Profiler.IS_READY = true
  end
end
function Profiler.finish()
  Profiler.IS_FINISHED = true
  profilerStatsExportFinalize(Profiler.OUTPUT_FILENAME)
  Logging.info("######################### Profiler Finished #########################")
  OnInGameMenuMenu()
  doExit()
end
