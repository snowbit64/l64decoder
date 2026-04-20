-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SystemConsoleCommands = {}
function SystemConsoleCommands.init()
  addConsoleCommand("gsGuiDrawHelper", "", "drawGuiHelper", SystemConsoleCommands)
  addConsoleCommand("gsI3DCacheClean", "Removes all cached i3d files to ensure the latest versions are loaded from disk", "cleanI3DCache", SystemConsoleCommands)
  addConsoleCommand("gsSetHighQuality", "Incease draw and LOD distances of foliage, terrain and objects", "setHighQuality", SystemConsoleCommands)
  addConsoleCommand("gsGuiSafeFrameShow", "", "showSafeFrame", SystemConsoleCommands)
  addConsoleCommand("gsGuiDebug", "", "toggleUiDebug", SystemConsoleCommands)
  addConsoleCommand("gsGuiFocusDebug", "", "toggleUiFocusDebug", SystemConsoleCommands)
  addConsoleCommand("gsRenderColorAndDepthScreenShot", "", "renderColorAndDepthScreenShot", SystemConsoleCommands)
  if g_addCheatCommands then
    addConsoleCommand("gsRenderingDebugMode", "", "setDebugRenderingMode", SystemConsoleCommands)
    addConsoleCommand("gsInputDrawRaw", "", "drawRawInput", SystemConsoleCommands)
    addConsoleCommand("gsTestForceFeedback", "", "testForceFeedback", SystemConsoleCommands)
    addConsoleCommand("gsTextureStreamingSetBudget", "", "setTextureStreamingBudget", SystemConsoleCommands)
  end
  if g_addTestCommands then
    addConsoleCommand("gsLanguageSet", "Set active language", "changeLanguage", SystemConsoleCommands)
    addConsoleCommand("gsGuiReloadCurrent", "", "reloadCurrentGui", SystemConsoleCommands)
    addConsoleCommand("gsGuiReloadCurrentDialog", "", "reloadCurrentDialog", SystemConsoleCommands)
    addConsoleCommand("gsHudResetHelpSystem", "", "resetHelpSystem", SystemConsoleCommands)
    addConsoleCommand("gsHudResetHelpSystemWithDraw", "", "resetHelpSystemWithDraw", SystemConsoleCommands)
    if not GS_IS_CONSOLE_VERSION and not GS_IS_MOBILE_VERSION then
      addConsoleCommand("gsSuspendApp", "", "suspendApp", SystemConsoleCommands)
    end
    addConsoleCommand("gsInputFuzz", "", "fuzzInput", SystemConsoleCommands)
    addConsoleCommand("gsUpdateDownloadFinished", "", "updateDownloadFinished", SystemConsoleCommands)
    addConsoleCommand("gsRenderingFidelityFxSRSet", "", "setFidelityFxSR", SystemConsoleCommands)
    addConsoleCommand("gsSoftRestart", "", "softRestart", SystemConsoleCommands)
  end
end
function SystemConsoleCommands.delete()
  removeConsoleCommand("gsGuiDrawHelper")
  removeConsoleCommand("gsI3DCacheClean")
  removeConsoleCommand("gsSetHighQuality")
  removeConsoleCommand("gsGuiSafeFrameShow")
  removeConsoleCommand("gsGuiDebug")
  removeConsoleCommand("gsGuiFocusDebug")
  removeConsoleCommand("gsRenderColorAndDepthScreenShot")
  removeConsoleCommand("gsRenderingDebugMode")
  removeConsoleCommand("gsInputDrawRaw")
  removeConsoleCommand("gsTestForceFeedback")
  removeConsoleCommand("gsTextureStreamingSetBudget")
  removeConsoleCommand("gsLanguageSet")
  removeConsoleCommand("gsGuiReloadCurrent")
  removeConsoleCommand("gsGuiReloadCurrentDialog")
  removeConsoleCommand("gsSuspendApp")
  removeConsoleCommand("gsInputFuzz")
  removeConsoleCommand("gsUpdateDownloadFinished")
  removeConsoleCommand("gsRenderingFidelityFxSRSet")
  removeConsoleCommand("gsSoftRestart")
end
function SystemConsoleCommands.drawGuiHelper(v0, v1)
  local v2 = tonumber(v1)
  if v2 ~= nil then
    v2 = math.max(v2, 0.001)
    g_guiHelperSteps = v2
    g_drawGuiHelper = true
  else
    g_guiHelperSteps = 0.1
    g_drawGuiHelper = false
  end
  if g_drawGuiHelper then
    return "DrawGuiHelper = true (step = " .. g_guiHelperSteps .. ")"
  end
  return "DrawGuiHelper = false"
end
function SystemConsoleCommands.showSafeFrame(v0)
  g_showSafeFrame = not g_showSafeFrame
  return string.format("showSafeFrame = %s", g_showSafeFrame)
end
function SystemConsoleCommands.drawRawInput(v0)
  g_showRawInput = not g_showRawInput
  return string.format("showRawInput = %s", g_showRawInput)
end
function SystemConsoleCommands.testForceFeedback(v0)
  local v1 = getHasGamepadAxisForceFeedback(0, 0)
  if v1 then
    v1 = coroutine.create(function()
      -- TODO: structure LOP_FORNPREP (pc 3, target 35)
      setGamepadAxisForceFeedback(0, 0, 0.8, 1)
      local v4 = string.format("TestForceFeedback %1.2f", 1)
      print(...)
      usleep(500000)
      setGamepadAxisForceFeedback(0, 0, 0.8, -1)
      usleep(500000)
      -- TODO: structure LOP_FORNLOOP (pc 34, target 4)
      setGamepadAxisForceFeedback(0, 0, 0, 0)
    end)
    co = v1
    coroutine.resume(co)
    return
  end
  print("Force feedback not available")
end
function SystemConsoleCommands.setTextureStreamingBudget(v0, v1)
  local v2 = tonumber(v1)
  if v2 == nil then
    setTextureStreamingMemoryBudget(0)
    return "Reset Texture Streaming Memory Budget to default"
  end
  setTextureStreamingMemoryBudget(v1)
  return "Set Texture Streaming Memory Budget to " .. v1 .. " MB"
end
function SystemConsoleCommands.cleanI3DCache(v0, v1)
  local v2 = Utils.stringToBoolean(v1)
  v2:clearEntireSharedI3DFileCache(v2)
  if not v2 then
  end
  return v2
end
function SystemConsoleCommands.setHighQuality(v0, v1)
  local v2 = string.format("Usage 'gsSetHighQuality <factor (default=%d)>'", 5)
  local v5 = tonumber(v1)
  local v3 = MathUtil.clamp(v5 or 5, 0.000001, 10)
  setViewDistanceCoeff(v3)
  setLODDistanceCoeff(v3)
  setTerrainLODDistanceCoeff(v3)
  v5 = math.max(1, v3 * 0.5)
  setFoliageViewDistanceCoeff(...)
  local v6 = MathUtil.round(v3, 8)
  if v1 == nil then
    -- if " " .. v2 then goto L52 end
  end
  return v4(v5, v6, "")
end
function SystemConsoleCommands.renderColorAndDepthScreenShot(v0, v1, v2)
  if v1 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L16
  end
  local v5 = getScreenMode()
  local v6, v7 = getScreenModeInfo(v5)
  -- goto L26  (LOP_JUMP +10)
  v5 = tonumber(v1)
  v5 = tonumber(v2)
  setDebugRenderingMode(DebugRendering.NONE)
  local v8 = getDate("%Y_%m_%d_%H_%M_%S")
  print("Saving color screenshot: " .. g_screenshotsDirectory .. "fsScreen_color_" .. v8 .. ".hdr")
  renderScreenshot(g_screenshotsDirectory .. "fsScreen_color_" .. v8 .. ".hdr", v5, v5, v5 / v5, "raw_hdr", 1, 0, 0, 0, 0, 0, 15, false, 4)
  setDebugRenderingMode(DebugRendering.DEPTH)
  print("Saving depth screenshot: " .. g_screenshotsDirectory .. "fsScreen_depth_" .. v8 .. ".hdr")
  renderScreenshot(g_screenshotsDirectory .. "fsScreen_depth_" .. v8 .. ".hdr", v5, v5, v5 / v5, "raw_hdr", 1, 0, 0, 0, 0, 0, 15, false, 0)
  setDebugRenderingMode(DebugRendering.NONE)
end
function SystemConsoleCommands.setDebugRenderingMode(v0, v1)
  if v1 ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R1 aux=0x80000000 -> L11
  end
  setDebugRenderingMode(DebugRendering.NONE)
  return "Possible modes: alpha, parallax, albedo, normals, smoothness, metalness, ambientOcclusion (ao), bakedAmbientOcclusion (bakedAO), screenSpaceAmbientOcclusion(ssao), specularOcclusion, diffuseLighting, specularLighting, indirectLighting, lightGrid, shadowSplits, depth, mipLevels, triangleDensity, terrainSlopes, motionVectors, vrs"
  local v2 = v1:lower()
  if {alpha = {DebugRendering.ALPHA, "alpha"}, parallax = {DebugRendering.PARALLAX, "parallax"}, albedo = {DebugRendering.ALBEDO, "albedo"}, normals = {DebugRendering.NORMALS, "normals"}, tangent_space_normals = {DebugRendering.TANGENT_SPACE_NORMALS, "tangentSpaceNormals"}, smoothness = {DebugRendering.SMOOTHNESS, "smoothness"}, metalness = {DebugRendering.METALNESS, "metalness"}, ambient_occlusion = {DebugRendering.AMBIENT_OCCLUSION, "ambientOcclusion"}, ambientocclusion = {DebugRendering.AMBIENT_OCCLUSION, "ambientOcclusion"}, ao = {DebugRendering.AMBIENT_OCCLUSION, "ambientOcclusion"}, baked_ambient_occlusion = {DebugRendering.BAKED_AMBIENT_OCCLUSION, "bakedAmbientOcclusion"}, bakedambientocclusion = {DebugRendering.BAKED_AMBIENT_OCCLUSION, "bakedAmbientOcclusion"}, bakedao = {DebugRendering.BAKED_AMBIENT_OCCLUSION, "bakedAmbientOcclusion"}, screenspaceambientocclusion = {DebugRendering.SCREEN_SPACE_AMBIENT_OCCLUSION, "screenSpaceAmbientOcclusion"}, screen_space_ambient_occlusion = {DebugRendering.SCREEN_SPACE_AMBIENT_OCCLUSION, "screenSpaceAmbientOcclusion"}, ssao = {DebugRendering.SCREEN_SPACE_AMBIENT_OCCLUSION, "screenSpaceAmbientOcclusion"}, specular_occlusion = {DebugRendering.SPECULAR_OCCLUSION, "specularOcclusion"}, specularocclusion = {DebugRendering.SPECULAR_OCCLUSION, "specularOcclusion"}, diffuse_lighting = {DebugRendering.DIFFUSE_LIGHTING, "diffuseLighting"}, diffuselighting = {DebugRendering.DIFFUSE_LIGHTING, "diffuseLighting"}, diffuse = {DebugRendering.DIFFUSE_LIGHTING, "diffuseLighting"}, specular_lighting = {DebugRendering.SPECULAR_LIGHTING, "specularLighting"}, specularlighting = {DebugRendering.SPECULAR_LIGHTING, "specularLighting"}, specular = {DebugRendering.SPECULAR_LIGHTING, "specularLighting"}, indirect_lighting = {DebugRendering.INDIRECT_LIGHTING, "indirectLighting"}, indirectlighting = {DebugRendering.INDIRECT_LIGHTING, "indirectLighting"}, indirect = {DebugRendering.INDIRECT_LIGHTING, "indirectLighting"}, light_grid = {DebugRendering.LIGHT_GRID, "lightGrid"}, lightgrid = {DebugRendering.LIGHT_GRID, "lightGrid"}, shadow_splits = {DebugRendering.SHADOW_SPLITS, "shadowSplits"}, shadowsplits = {DebugRendering.SHADOW_SPLITS, "shadowSplits"}, depth = {DebugRendering.DEPTH_SCALED, "depth"}, miplevels = {DebugRendering.MIP_LEVELS, "mipLevels"}, mips = {DebugRendering.MIP_LEVELS, "mipLevels"}, triangledensity = {DebugRendering.TRIANGLE_DENSITY, "triangleDensity"}, terrainslopes = {DebugRendering.TERRAIN_SLOPES, "terrainSlopes"}, motionvectors = {DebugRendering.MOTION_VECTORS, "motionVectors"}, vrs = {DebugRendering.SHADING_RATE, "vrs"}, custom1 = {DebugRendering.CUSTOM1, "custom1"}, custom2 = {DebugRendering.CUSTOM2, "custom2"}}[v2] ~= nil then
  end
  setDebugRenderingMode(v5)
  return "Changed debug rendering to " .. v4
end
function SystemConsoleCommands.changeLanguage(v0, v1)
  local v2 = getNumOfLanguages()
  if v1 == nil then
    local v5 = table.getn(g_availableLanguagesTable)
    if v5 <= g_settingsLanguageGUI + 1 then
    end
  else
    -- TODO: structure LOP_FORNPREP (pc 25, target 35)
    local v7 = getLanguageCode(0)
    if v7 == v1 then
    else
      -- TODO: structure LOP_FORNLOOP (pc 34, target 26)
    end
    if v3 < 0 then
      local v6 = tostring(v1)
      return "Invalid language parameter " .. v6
    end
  end
  local v4 = setLanguage(v3)
  if v4 then
    v4 = XMLFile.load("SettingsFile", "dataS/settings.xml")
    loadLanguageSettings(v4)
    v4:delete()
    v5:load()
    v7 = getLanguageCode(v3)
    v5 = string.format(...)
    return v5
  end
  v6 = tostring(v1)
  return "Invalid language parameter " .. v6
end
function SystemConsoleCommands.reloadCurrentGui(v0)
  if g_gui.currentGuiName ~= nil and g_gui.currentGuiName ~= "" then
    g_gui.currentlyReloading = true
    v3:showGui("")
    v3:delete()
    v3:load()
    local v3 = v3:loadProfiles("dataS/guiProfiles.xml")
    if not v3 then
      g_gui.currentlyReloading = false
      return "Failed to reload profiles"
    end
    local v4 = ClassUtil.getClassObject(v1)
    if v4 == nil then
      for v8, v9 in pairs(g_modIsLoaded) do
        for v13, v14 in pairs(_G[v8]) do
          if not (v13 == v1) then
            continue
          end
        end
      end
    end
    if v4 == nil then
      return "Given GUI class not found"
    end
    g_dummyGui = nil
    if v4.createFromExistingGui ~= nil then
      v5 = v4.createFromExistingGui(v2, v1)
      g_dummyGui = v5
    else
      v5 = v4.new()
      g_dummyGui = v5
      v5:delete()
      v5:delete()
      v5:loadGui(v2.xmlFilename, v1, g_dummyGui)
    end
    v5:showGui(v1)
    g_gui.currentlyReloading = false
    v7 = tostring(v1)
    return "Reloaded gui " .. v7
  end
  return "No GUI active!"
end
function SystemConsoleCommands.reloadCurrentDialog(v0)
  if g_gui.currentDialogName ~= nil and g_gui.currentDialogName ~= "" then
    g_gui.currentlyReloading = true
    v3:closeDialog(g_gui.currentListener)
    v3:delete()
    v3:load()
    local v3 = v3:loadProfiles("dataS/guiProfiles.xml")
    if not v3 then
      g_gui.currentlyReloading = false
      return "Failed to reload profiles"
    end
    local v4 = ClassUtil.getClassObject(v1)
    g_dummyGui = nil
    if v4.createFromExistingGui ~= nil then
      local v5 = v4.createFromExistingGui(v2, v1)
      g_dummyGui = v5
    else
      v5 = v4.new()
      g_dummyGui = v5
      v5:delete()
      v5:delete()
      v5:loadGui(v2.xmlFilename, v1, g_dummyGui)
    end
    g_gui.currentlyReloading = false
    local v7 = tostring(v1)
    return "Reloaded dialog " .. v7
  end
  return "No Dialog active!"
end
function SystemConsoleCommands.resetHelpSystem(v0)
  if g_currentMission ~= nil and g_currentMission.introductionHelpSystem ~= nil then
    v1:resetHelpSystem()
    return "Reset Introduction Help System"
  end
  return "Not currently in a mission"
end
function SystemConsoleCommands.resetHelpSystemWithDraw(v0)
  if g_currentMission ~= nil and g_currentMission.resetHelpSystemWithDraw ~= nil then
    v1:resetHelpSystemWithDraw()
    return "Reset Introduction Help System"
  end
  return "Not currently in a mission"
end
function SystemConsoleCommands.toggleUiDebug(v0)
  if g_uiDebugEnabled then
    g_uiDebugEnabled = false
    return "UI Debug disabled"
  end
  g_uiDebugEnabled = true
  return "UI Debug enabled"
end
function SystemConsoleCommands.toggleUiFocusDebug(v0)
  if g_uiFocusDebugEnabled then
    g_uiFocusDebugEnabled = false
    return "UI Focus Debug disabled"
  end
  g_uiFocusDebugEnabled = true
  return "UI Focus Debug enabled"
end
function SystemConsoleCommands.suspendApp(v0)
  if g_appIsSuspended then
    notifyAppResumed()
  else
    notifyAppSuspended()
  end
  local v3 = tostring(g_appIsSuspended)
  return "App Suspended: " .. v3
end
function SystemConsoleCommands.fuzzInput(v0)
  beginInputFuzzing()
end
function SystemConsoleCommands.softRestart(v0)
  if g_currentMission ~= nil then
    OnInGameMenuMenu()
    return
  end
  v1:setStartScreen(RestartManager.START_SCREEN_MAIN)
  doRestart(false, "")
end
function SystemConsoleCommands.updateDownloadFinished(v0)
  g_updateDownloadFinished = true
  log("g_updateDownloadFinished = true")
end
function SystemConsoleCommands.setFidelityFxSR(v0, v1)
  local v2 = tonumber(v1)
  v2 = getFidelityFxSRQuality()
  local v6 = getFidelityFxSRQualityName(v2)
  local v4 = string.format("current setting: %s (%d)", v6, v2)
  print(...)
  print("Available settings:")
  -- TODO: structure LOP_FORNPREP (pc 29, target 48)
  v6 = getFidelityFxSRQualityName(0)
  local v12 = getSupportsFidelityFxSRQuality(0)
  local v8 = string.format(...)
  print(...)
  -- TODO: structure LOP_FORNLOOP (pc 47, target 30)
  if v2 ~= nil then
    if 0 <= v2 then
      -- if v2 >= FidelityFxSRQuality.NUM then goto L67 end
      local v3 = getSupportsFidelityFxSRQuality(v2)
      -- if not v3 then goto L67 end
      setFidelityFxSRQuality(v2)
    else
      v3 = string.format("Error: Given quality '%d' not supported\n%s", v2, "Usage: gsRenderingFidelityFxSRSet <qualityNumber>")
      return v3
    end
    v3 = getFidelityFxSRQuality()
    v6 = getFidelityFxSRQualityName(v3)
    v4 = string.format("new setting: %s (%d)", v6, v3)
    return v4
  end
  return "Usage: gsRenderingFidelityFxSRSet <qualityNumber>"
end
