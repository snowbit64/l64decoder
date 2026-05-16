-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

g_uniqueDlcNamePrefix = "pdlc_"
g_modEventListeners = {}
g_dlcsDirectories = {}
g_forceNeedsDlcsAndModsReload = false
g_lastCheckDlcPaths = {}
g_modIsLoaded = {}
g_globalMods = {}
g_modNameToDirectory = {}
g_dlcModNameHasPrefix = {}
g_internalModsDirectory = "internalMods/"
modOnCreate = {}
function loadDlcs()
  storeHaveDlcsChanged()
  local v4 = table.getn(g_dlcsDirectories)
  -- TODO: structure LOP_FORNPREP (pc 13, target 27)
  if g_dlcsDirectories[1].isLoaded then
    loadDlcsFromDirectory(g_dlcsDirectories[1].path, {})
  end
  -- TODO: structure LOP_FORNLOOP (pc 26, target 14)
end
function loadDlcsFromDirectory(dlcsDir, loadedDlcs)
  local appBasePath = getAppBasePath()
  local v3 = isAbsolutPath(dlcsDir)
  if v3 then
    v3 = appBasePath:len()
    if v3 ~= 0 then
      v3 = string.startsWith(dlcsDir, appBasePath)
      -- if v3 then goto L23 end
    end
    createFolder(dlcsDir)
  end
  v3 = Files.new(dlcsDir)
  for v7, v8 in pairs(v3.files) do
    if v8.isDirectory then
      if not g_isDevelopmentVersion then
        -- if GS_PLATFORM_PC then goto L135 end
      end
      if not GS_PLATFORM_PC then
        local v13 = getFileMD5(dlcsDir .. v8.filename, v8.filename)
      end
      -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x80000000 -> L135
      -- if not g_isDevelopmentVersion then goto L135 end
      v13 = getMD5("Dev_" .. v8.filename)
    else
      v13 = v13:len()
      if 4 < v13 then
        local v14 = v14:sub(v13 - 3)
        if v14 == ".dlc" then
          local v15 = v15:sub(1, v13 - 4)
          v15 = getFileMD5(dlcsDir .. v8.filename, v15)
        else
          if v14 ~= ".zip" then
            -- cmp-jump LOP_JUMPXEQKS R14 aux=0x80000022 -> L135
          end
          v15 = v15:sub(1, v13 - 4)
          v15 = getFileMD5(dlcsDir .. v8.filename, v15)
        end
      end
    end
    if not (v11 ~= nil) then
      continue
    end
    if not (v12 ~= nil) then
      continue
    end
    if not (g_dlcModNameHasPrefix[v11] == nil) then
      continue
    end
    g_dlcModNameHasPrefix[v11] = v9
    loadModDesc(v11, dlcsDir .. v11 .. "/", dlcsDir .. v11 .. "/" .. v12, v10, dlcsDir .. v8.filename, v8.isDirectory, v9, false)
  end
end
function loadMods()
  haveModsChanged()
  g_showIllegalActivityInfo = false
  local v2 = Files.new(g_modsDirectory)
  for v6, v7 in pairs(v2.files) do
    if v7.isDirectory then
      -- if not g_isDevelopmentVersion then goto L74 end
      local v10 = getMD5("DevMod_" .. v7.filename)
    else
      v10 = v10:len()
      if 4 < v10 then
        local v11 = v11:sub(v10 - 3)
        if v11 ~= ".zip" then
          -- cmp-jump LOP_JUMPXEQKS R11 aux=0x80000016 -> L74
        end
        local v12 = v12:sub(1, v10 - 4)
        v12 = getFileMD5(v1 .. v7.filename, v12)
      end
    end
    if not (v9 ~= nil) then
      continue
    end
    if not (v0[v1 .. v9 .. "/" .. "modDesc.xml"] == nil) then
      continue
    end
    loadModDesc(v9, v1 .. v9 .. "/", v1 .. v9 .. "/" .. "modDesc.xml", v8, v1 .. v7.filename, v7.isDirectory, false, false)
    v0[v1 .. v9 .. "/" .. "modDesc.xml"] = true
  end
  if g_showIllegalActivityInfo then
    print("Info: This game protects you from illegal activity")
  end
  g_showIllegalActivityInfo = nil
end
function loadInternalMods()
  haveModsChanged()
  for v3, v4 in pairs(u0) do
    local v10 = fileExists(g_internalModsDirectory .. v4.name .. ".gar")
    if v10 then
      v10 = getFileMD5(g_internalModsDirectory .. v4.name .. ".gar", v4.name)
    elseif g_isDevelopmentVersion then
      v10 = fileExists(g_internalModsDirectory .. v4.name .. "/" .. "modDesc.xml")
      if v10 then
        v10 = getFileMD5(g_internalModsDirectory .. v4.name .. "/" .. "modDesc.xml", v4.name)
      end
    end
    if not (v8 ~= nil) then
      continue
    end
    loadModDesc(v5, v6, v7, v8, g_internalModsDirectory .. v5, true, false, true)
  end
end
function postInitMods()
  for v3, v4 in pairs(g_modEventListeners) do
    if not (v4.onPostInit ~= nil) then
      continue
    end
    v4:onPostInit()
  end
end
function loadModDesc(modName, modDir, modFile, modFileHash, absBaseFilename, isDirectory, addDLCPrefix, isInternalMod)
  local v8 = u0(modName)
  if not v8 then
    print("Error: Invalid mod name '" .. modName .. "'! Characters allowed: (_, A-Z, a-z, 0-9). The first character must not be a digit")
    return
  end
  if addDLCPrefix then
  end
  if g_modNameToDirectory[modName] ~= nil then
    return
  end
  g_modNameToDirectory[modName] = modDir
  local v10 = string.endsWith(modFile, "dlcDesc.xml")
  if v10 then
    v10 = fileExists(modFile)
    if not v10 then
      if GS_IS_EPIC_VERSION then
        local v15 = getAppBasePath()
        v10 = string.startsWith(modDir, v15 .. "pdlc/")
        -- if not v10 then goto L64 end
        print("Info: No license for dlc " .. modName .. ".")
      else
        print("Error: No license for dlc " .. modName .. ". Please reinstall.")
      end
      return
    end
  end
  setModInstalled(absBaseFilename, addDLCPrefix)
  v10 = XMLFile.load("ModFile", modFile)
  if v10 == nil then
    return
  end
  local v11 = v10:getString("modDesc.version")
  if v11 ~= nil and v11 ~= "" then
  end
  if isInternalMod then
    local v13 = u1(modName)
    if v11 ~= v13.version then
      print("Error: Outdated mod version in mod " .. modName)
      v10:delete()
      return
    end
  end
  if modFileHash ~= nil then
  end
  if v9 then
    print("Available dlc: " .. v13 .. v12 .. " " .. modName)
  else
    print("Available mod: " .. v13 .. v12 .. " " .. modName)
  end
  local v14 = v10:getInt("modDesc#descVersion")
  if v14 == nil then
    print("Error: Missing descVersion attribute in mod " .. modName)
    v10:delete()
    return
  end
  if v14 >= g_minModDescVersion then
    -- if g_maxModDescVersion >= v14 then goto L182 end
  end
  print("Error: Unsupported mod description version in mod " .. modName)
  v10:delete()
  return
  if _G[modName] ~= nil and not u2 then
    print("Error: Invalid mod name '" .. modName .. "'")
    v10:delete()
    return
  end
  if u3[modName] ~= nil then
    local v16 = string.split(v11, ".")
    for v21, v22 in ipairs(v16) do
      if not (4 >= v21) then
        break
      end
      local v24 = tonumber(v22)
      if not ((v24 or 0) ~= nil) then
        continue
      end
      if not (v15[v21] ~= nil) then
        continue
      end
      if not (v15[v21] < (v24 or 0)) then
        continue
      end
      break
    end
    if v17 then
      print("Error: Mod '" .. modName .. "' in version '" .. v11 .. "' and lower is not supported anymore. Please update the mod!")
      v10:delete()
      return
    end
  end
  if v9 then
    v16 = v10:getString("modDesc.multiplayer#requiredModName")
    if v16 ~= nil and v16 ~= v8 then
      print("Error: Do not rename dlcs. Name: '" .. v8 .. "'. Expect: '" .. v16 .. "'")
      v10:delete()
      return
    end
  end
  v16 = v10:getBool("modDesc.isSelectable", true)
  if GS_IS_CONSOLE_VERSION then
    v18 = Utils.getNoNil(_G[modName], {})
  end
  g_globalsNameCheckDisabled = true
  _G[modName] = v17
  g_globalsNameCheckDisabled = false
  setmetatable(v17, {__index = _G})
  if not v9 and not isInternalMod then
    v17._G = v17
  end
  v17.getfenv = function(modName)
    local modDir = u0(modName)
    if modDir == u1 then
      return u2
    end
    return modDir
  end
  v21 = v21:addModI18N(modName)
  v17.g_i18n = v21
  v17.loadstring = function(modName, modDir)
    return loadstring("setfenv(1," .. u0 .. "); " .. modName, modDir)
  end
  v17.source = function(modName, modDir)
    local modFile = isAbsolutPath(modName)
    if not modFile then
      -- if not u0 then goto L19 end
    end
    modFile = u1(modName, u2, u3)
    source(modFile, u2)
    return
    source(modFile)
  end
  v17.InitEventClass = function(modName, modDir)
    InitEventClass(modName, u0 .. "." .. modDir)
  end
  v17.InitObjectClass = function(modName, modDir)
    InitObjectClass(modName, u0 .. "." .. modDir)
  end
  v17.registerObjectClassName = function(modName, modDir)
    registerObjectClassName(modName, u0 .. "." .. modDir)
  end
  v17.g_constructionBrushTypeManager = {}
  function v17.g_constructionBrushTypeManager.addBrushType(modName, modDir, modFile, modFileHash, absBaseFilename)
    local isDirectory = isAbsolutPath(modFileHash)
    if not isDirectory then
      -- if not u0 then goto L22 end
    end
    isDirectory = u1(modFileHash, u2, u3)
    isDirectory:addBrushType(u2 .. "." .. modDir, u2 .. "." .. modFile, isDirectory, u2)
  end
  function v17.g_constructionBrushTypeManager.getClassObjectByTypeName(modName, modDir)
    local modFile = modFile:getClassObjectByTypeName(modDir)
    if modFile == nil then
      local modFileHash = modFileHash:getClassObjectByTypeName(u0 .. "." .. modDir)
    end
    return modFile
  end
  setmetatable(v17.g_constructionBrushTypeManager, {__index = g_constructionBrushTypeManager})
  v17.g_specializationManager = {}
  function v17.g_specializationManager.addSpecialization(modName, modDir, modFile, modFileHash, absBaseFilename, ...)
    local isDirectory = type(modName)
    if isDirectory ~= "table" then
      Logging.error("Invalid self object given for SpecializationManager.addSpecialization. Usage: 'g_specializationManager:addSpecialization(name, className, filename, customEnvironment)'")
      printCallstack()
    end
    if absBaseFilename ~= nil then
      isDirectory = type(absBaseFilename)
      if isDirectory ~= "string" then
        Logging.error("Invalid customEnvironment given for SpecializationManager.addSpecialization. Should be a string or nil.")
        printCallstack()
      end
    end
    isDirectory = select(...)
    if 0 < isDirectory then
      Logging.error("Too many arguments for SpecializationManager.addSpecialization. (Arguments should be: name, className, filename, customEnvironment)")
      printCallstack()
    end
    isDirectory = isAbsolutPath(modFileHash)
    if not isDirectory then
      -- if not u0 then goto L69 end
    end
    isDirectory = u1(modFileHash, u2, u3)
    isDirectory:addSpecialization(u2 .. "." .. modDir, u2 .. "." .. modFile, isDirectory, u2)
  end
  function v17.g_specializationManager.getSpecializationByName(modName, modDir)
    local modFile = modFile:getSpecializationByName(modDir)
    if modFile == nil then
      local modFileHash = modFileHash:getSpecializationByName(u0 .. "." .. modDir)
    end
    return modFile
  end
  function v17.g_specializationManager.getSpecializationObjectByName(modName, modDir)
    local modFile = modFile:getSpecializationObjectByName(modDir)
    if modFile == nil then
      local modFileHash = modFileHash:getSpecializationObjectByName(u0 .. "." .. modDir)
    end
    return modFile
  end
  setmetatable(v17.g_specializationManager, {__index = g_specializationManager})
  v17.g_placeableSpecializationManager = {}
  function v17.g_placeableSpecializationManager.addSpecialization(modName, modDir, modFile, modFileHash, absBaseFilename, ...)
    local isDirectory = type(modName)
    if isDirectory ~= "table" then
      Logging.error("Invalid self object given for SpecializationManager.addSpecialization. Usage: 'g_specializationManager:addSpecialization(name, className, filename, customEnvironment)'")
      printCallstack()
    end
    if absBaseFilename ~= nil then
      isDirectory = type(absBaseFilename)
      if isDirectory ~= "string" then
        Logging.error("Invalid customEnvironment given for SpecializationManager.addSpecialization. Should be a string or nil.")
        printCallstack()
      end
    end
    isDirectory = select(...)
    if 0 < isDirectory then
      Logging.error("Too many arguments for SpecializationManager.addSpecialization. (Arguments should be: name, className, filename, customEnvironment)")
      printCallstack()
    end
    isDirectory = isAbsolutPath(modFileHash)
    if not isDirectory then
      -- if not u0 then goto L69 end
    end
    isDirectory = u1(modFileHash, u2, u3)
    isDirectory:addSpecialization(u2 .. "." .. modDir, u2 .. "." .. modFile, isDirectory, u2)
  end
  function v17.g_placeableSpecializationManager.getSpecializationByName(modName, modDir)
    local modFile = modFile:getSpecializationByName(modDir)
    if modFile == nil then
      local modFileHash = modFileHash:getSpecializationByName(u0 .. "." .. modDir)
    end
    return modFile
  end
  setmetatable(v17.g_placeableSpecializationManager, {__index = g_placeableSpecializationManager})
  v17.g_vehicleTypeManager = {}
  function v17.g_vehicleTypeManager.addType(modName, modDir, modFile, modFileHash, absBaseFilename)
    local isDirectory = isAbsolutPath(modFileHash)
    if not isDirectory then
      -- if not u0 then goto L22 end
    end
    isDirectory = u1(modFileHash, u2, u3)
    isDirectory:addType(u2 .. "." .. modDir, u2 .. "." .. modFile, isDirectory, u2)
  end
  function v17.g_vehicleTypeManager.addSpecialization(modName, modDir, modFile)
    local modFileHash = modFileHash:getSpecializationByName(modFile)
    if modFileHash == nil then
      local absBaseFilename = absBaseFilename:getSpecializationByName(u0 .. "." .. modFile)
      if absBaseFilename ~= nil then
      end
    end
    absBaseFilename:addSpecialization(modDir, modFile)
  end
  setmetatable(v17.g_vehicleTypeManager, {__index = g_vehicleTypeManager})
  v17.g_placeableTypeManager = {}
  function v17.g_placeableTypeManager.addType(modName, modDir, modFile, modFileHash, absBaseFilename)
    local isDirectory = isAbsolutPath(modFileHash)
    if not isDirectory then
      -- if not u0 then goto L22 end
    end
    isDirectory = u1(modFileHash, u2, u3)
    isDirectory:addType(u2 .. "." .. modDir, u2 .. "." .. modFile, isDirectory, u2)
  end
  function v17.g_placeableTypeManager.addSpecialization(modName, modDir, modFile)
    local modFileHash = modFileHash:getSpecializationByName(modFile)
    if modFileHash == nil then
      local absBaseFilename = absBaseFilename:getSpecializationByName(u0 .. "." .. modFile)
      if absBaseFilename ~= nil then
      end
    end
    absBaseFilename:addSpecialization(modDir, modFile)
  end
  function v17.g_placeableTypeManager.getClassObjectByTypeName(modName, modDir)
    local modFile = modFile:getClassObjectByTypeName(modDir)
    if modFile == nil then
      local modFileHash = modFileHash:getClassObjectByTypeName(u0 .. "." .. modDir)
    end
    return modFile
  end
  setmetatable(v17.g_placeableTypeManager, {__index = g_placeableTypeManager})
  v17.g_effectManager = {}
  function v17.g_effectManager.registerEffectClass(modName, modDir, modFile)
    local modFileHash = ClassUtil.getIsValidClassName(modDir)
    if not modFileHash then
      print("Error: Invalid effect class name: " .. modDir)
      return
    end
    modFileHash:registerEffectClass(u0 .. "." .. modDir, modFile)
  end
  function v17.g_effectManager.getEffectClass(modName, modDir)
    local modFile = modFile:getEffectClass(modDir)
    if modFile == nil then
      local modFileHash = modFileHash:getEffectClass(u0 .. "." .. modDir)
    end
    return modFile
  end
  setmetatable(v17.g_effectManager, {__index = _G.g_effectManager})
  v21 = getUserProfileAppPath()
  v17.g_adsSystem = {}
  v17.InitStaticEventClass = ""
  v17.InitStaticObjectClass = ""
  v17.loadMod = ""
  v17.loadModDesc = ""
  v17.loadDlcs = ""
  v17.loadDlcsFromDirectory = ""
  v17.loadMods = ""
  v17.reloadDlcsAndMods = ""
  v17.verifyDlcs = ""
  local v25 = function(modName)
    return function(modName)
      local isDirectory = u2(u0 .. "modSettings/" .. u1)
      local modFile = u3(...)
      if modFile == u0 .. "modSettings/" .. u1 then
        u4(modName)
        return
      end
      local modFileHash = string.format("Error: No access to folder '%s'", modName)
      print(...)
      modFileHash = string.format("Info: Mod has full access in '%s'", modDir)
      print(...)
      printCallstack()
    end
  end(deleteFile)
  v17.deleteFile = v25
  v25 = function(modName)
    return function(modName)
      local isDirectory = u2(u0 .. "modSettings/" .. u1)
      local modFile = u3(...)
      if modFile == u0 .. "modSettings/" .. u1 then
        u4(modName)
        return
      end
      local modFileHash = string.format("Error: No access to folder '%s'", modName)
      print(...)
      modFileHash = string.format("Info: Mod has full access in '%s'", modDir)
      print(...)
      printCallstack()
    end
  end(deleteFolder)
  v17.deleteFolder = v25
  v17.isAbsolutPath = isAbsolutPath
  v17.g_isDevelopmentVersion = g_isDevelopmentVersion
  v17.GS_IS_CONSOLE_VERSION = GS_IS_CONSOLE_VERSION
  if not v9 and not isInternalMod then
    v17.ClassUtil = {}
    function v17.ClassUtil.getClassModName(modName, modDir)
      local modFile = _G.ClassUtil.getClassModName(modDir)
      if modFile == nil then
        local modFileHash = _G.ClassUtil.getClassModName(u0 .. "." .. modDir)
      end
      return modFile
    end
  end
  v17.g_onCreateUtil = {onCreateFunctions = {}}
  v10:iterate("modDesc.l10n.text", function(modName, modDir)
    local modFile = modFile:getString(modDir .. "#name")
    local modFileHash = modFileHash:getString(modDir .. "." .. g_languageShort)
    if modFileHash == nil then
      local absBaseFilename = absBaseFilename:getString(modDir .. ".en")
      if absBaseFilename == nil then
        absBaseFilename = absBaseFilename:getString(modDir .. ".de")
      end
    end
    if modFileHash ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R2 aux=0x80000000 -> L50
    end
    print("Warning: No l10n text found for entry '" .. modFile .. "' in mod '" .. u1 .. "'")
    return
    absBaseFilename = absBaseFilename:hasModText(modFile)
    if absBaseFilename then
      print("Warning: Duplicate l10n entry '" .. modFile .. "' in mod '" .. u1 .. "'. Ignoring this definition.")
      return
    end
    absBaseFilename:setText(modFile, modFileHash)
  end)
  local v26 = v10:getString("modDesc.l10n#filenamePrefix")
  if v26 ~= nil then
    local v27 = Utils.getFilename(v26, modDir)
    for v34, v35 in ipairs({g_languageShort, "en", "de"}) do
      local v36 = fileExists(v27 .. "_" .. v35 .. ".xml")
      if not v36 then
        continue
      end
      v36 = loadXMLFile("modL10n", v27 .. "_" .. v35 .. ".xml")
      break
    end
    if v28 ~= nil then
      while true do
        v32 = string.format("l10n.texts.text(%d)", v31)
        v33 = hasXMLProperty(v28, v32)
        if not v33 then
          break
        end
        v33 = getXMLString(v28, v32 .. "#name")
        v34 = getXMLString(v28, v32 .. "#text")
        if v33 ~= nil and v34 ~= nil then
          v35 = v35:hasModText(v33)
          if v35 then
            print("Warning: Duplicate l10n entry '" .. v33 .. "' in '" .. v29 .. "'. Ignoring this definition.")
          else
            v38 = v34:gsub("\r\n", "\n")
            v35:setText(...)
          end
        end
      end
      while true do
        v32 = string.format("l10n.elements.e(%d)", v31)
        v33 = hasXMLProperty(v28, v32)
        if not v33 then
          break
        end
        v33 = getXMLString(v28, v32 .. "#k")
        v34 = getXMLString(v28, v32 .. "#v")
        if v33 ~= nil and v34 ~= nil then
          v35 = v35:hasModText(v33)
          if v35 then
            print("Warning: Duplicate l10n entry '" .. v33 .. "' in '" .. v29 .. "'. Ignoring this definition.")
          else
            v38 = v34:gsub("\r\n", "\n")
            v35:setText(...)
          end
        end
      end
      delete(v28)
    else
      print("Warning: No l10n file found for '" .. v26 .. "' in mod '" .. modName .. "'")
    end
  end
  v27 = v10:getI18NValue("modDesc.title", "", modName, true)
  local v28 = v10:getI18NValue("modDesc.description", "", modName, true)
  local v29 = v10:getI18NValue("modDesc.iconFilename", "", modName, true)
  if v27 == "" then
    print("Error: Missing title in mod " .. modName)
    v10:delete()
    return
  end
  if v28 == "" then
    print("Error: Missing description in mod " .. modName)
    v10:delete()
    return
  end
  local v30 = v10:getBool("modDesc.multiplayer#supported", false)
  v31 = v10:getBool("modDesc.multiplayer#only", false)
  if modFileHash == nil and v30 then
    print("Warning: Only zip mods are supported in multiplayer. You need to zip the mod " .. modName .. " to use it in multiplayer.")
  end
  if not v30 and v31 then
    print("Error: Both multiplayer and singleplayer are unsupported in mod " .. modName)
    v10:delete()
    return
  end
  if v30 and v29 == "" then
    print("Error: Missing icon filename in mod " .. modName)
    v10:delete()
    return
  end
  v10:iterate("modDesc.maps.map", function(modName, modDir)
    modFile:loadMapFromXML(u0, modDir, u1, u2, u3, u4, true, u5)
  end)
  v10:iterate("modDesc.scenarios.scenario", function(modName, modDir)
    modFile:loadScenarioFromXML(u0, modDir, u1, u2, u3)
  end)
  v32 = v10:getI18NValue("modDesc.author", "", modName, true)
  if v9 then
    v33 = v10:getString("modDesc.productId")
    if v33 ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x80000000 -> L967
    end
    print("Error: invalid product id or version in DLC " .. modName)
    -- goto L972  (LOP_JUMP +5)
    addNotificationFilter(v33, v11)
  end
  v33 = v10:hasProperty("modDesc.extraSourceFiles.sourceFile(0)")
  if not v33 then
    v33 = v10:hasProperty("modDesc.specializations.specialization(0)")
  end
  v35 = v10:hasProperty("modDesc.dependencies.dependency(0)")
  if v35 then
    v10:iterate("modDesc.dependencies.dependency", function(modName, modDir)
      local modFile = modFile:getString(modDir)
      if modFile ~= nil then
        local modFileHash = modFile:len()
        if 0 < modFileHash then
          u1[#u1 + 1] = modFile
        end
      end
    end)
  end
  v35 = v10:getString("modDesc.uniqueType")
  v10:iterate("modDesc.extraContent.key", function(modName, modDir)
    local modFile = modFile:getString(modDir)
    if modFile ~= nil then
      local modFileHash, absBaseFilename = modFileHash:unlockItem(modFile, true)
      if modFileHash ~= nil and absBaseFilename == ExtraContentSystem.UNLOCKED then
        print("ExtraContent: Unlocked '" .. modFileHash.id .. "'")
        isDirectory:saveToProfile()
      end
    end
  end)
  if isInternalMod then
    g_currentModDirectory = modDir
    g_currentModName = modName
    v10:iterate("modDesc.preLoadSourceFiles.sourceFile", function(modName, modDir)
      local modFile = modFile:getString(modDir .. "#filename")
      if modFile ~= nil then
        u1.source(u2 .. modFile, u3)
      end
    end)
  end
  v36 = Utils.getFilename(v29, modDir)
  local v57 = u5(modName)
  v36:addMod(...)
  v10:delete()
end
function resetModOnCreateFunctions()
  modOnCreate = {}
end
function loadMod(modName, modDir, modFile, modTitle)
  if g_modIsLoaded[modName] then
    return
  end
  g_modIsLoaded[modName] = true
  g_modNameToDirectory[modName] = modDir
  if _G[modName] == nil then
    return
  end
  local xmlFile = XMLFile.load("ModFile", modFile)
  local v7 = string.endsWith(modFile, "dlcDesc.xml")
  if v7 then
    -- goto L32  (LOP_JUMP +0)
  end
  if v6 then
    print("  Load dlc: " .. modName)
  else
    print("  Load mod: " .. modName)
  end
  if not not GS_IS_CONSOLE_VERSION and not v6 and not g_isDevelopmentConsoleScriptModTesting then
    v7 = u0(modName)
    if not v7 then
      v7 = u1(modName)
    end
  end
  g_currentModDirectory = modDir
  g_currentModName = modName
  if g_modSettingsDirectory ~= nil then
    g_currentModSettingsDirectory = g_modSettingsDirectory .. modName .. "/"
  end
  if v7 then
    xmlFile:iterate("modDesc.extraSourceFiles.sourceFile", function(modName, modDir)
      local modFile = modFile:getString(modDir .. "#filename")
      if modFile ~= nil then
        u1.source(u2 .. modFile, u3)
      end
    end)
  end
  xmlFile:iterate("modDesc.splitTypes.splitType", function(modName, modDir)
    local modFile = modFile:getString(modDir .. "#name")
    local modTitle = modTitle:getString(modDir .. "#l10nKey")
    local v4 = v4:getInt(modDir .. "#splitTypeIndex")
    local xmlFile = xmlFile:getFloat(modDir .. "#pricePerLiter")
    local v6 = v6:getFloat(modDir .. "#woodChipsPerLiter")
    local v7 = v7:getBool(modDir .. "#allowsWoodHarvester")
    local fillTypesFilename = fillTypesFilename:getInt(modDir .. "#volumeToLiter")
    densityMapHeightTypesFilename:addSplitType(modFile, modTitle, v4, xmlFile, v6, v7, u1, fillTypesFilename)
  end)
  xmlFile:iterate("modDesc.brands.brand", function(modName, modDir)
    local modFile = modFile:getString(modDir .. "#name")
    local modTitle = modTitle:getString(modDir .. "#title")
    local v4 = v4:getString(modDir .. "#image")
    local xmlFile = xmlFile:getFloat(modDir .. "#imageOffset")
    v6:addBrand(modFile, modTitle, v4, u1, true, nil, xmlFile)
  end)
  xmlFile:iterate("modDesc.helpLines.category", function(modName, modDir)
    modFile:addModCategory(u0, modDir, u1, u2)
  end)
  if v6 then
    xmlFile:iterate("modDesc.storeCategories.storeCategory", function(modName, modDir)
      modFile:loadCategoryFromXML(u0, modDir, u1, u2)
    end)
  end
  xmlFile:iterate("modDesc.specializations.specialization", function(modName, modDir)
    local modFile = modFile:getString(modDir .. "#name")
    local modTitle = modTitle:getString(modDir .. "#className")
    local v4 = v4:getString(modDir .. "#filename")
    if modFile ~= nil and modTitle ~= nil and v4 ~= nil then
      if u2 then
        xmlFile:addSpecialization(modFile, modTitle, u1 .. v4, u4)
        return
      end
      print("Error: Can't register specialization " .. modFile .. " with scripts on consoles.")
    end
  end)
  xmlFile:iterate("modDesc.vehicleTypes.type", function(modName, modDir)
    modFile:loadTypeFromXML(u0.handle, modDir, u1, u2, u3)
  end)
  xmlFile:iterate("modDesc.placeableSpecializations.specialization", function(modName, modDir)
    local modFile = modFile:getString(modDir .. "#name")
    local modTitle = modTitle:getString(modDir .. "#className")
    local v4 = v4:getString(modDir .. "#filename")
    if modFile ~= nil and modTitle ~= nil and v4 ~= nil then
      if u2 then
        xmlFile:addSpecialization(modFile, modTitle, u1 .. v4, u4)
        return
      end
      print("Error: Can't register placeable specialization " .. modFile .. " with scripts on consoles.")
    end
  end)
  xmlFile:iterate("modDesc.placeableTypes.type", function(modName, modDir)
    modFile:loadTypeFromXML(u0.handle, modDir, u1, u2, u3)
  end)
  xmlFile:iterate("modDesc.bales.bale", function(modName, modDir)
    modFile:loadModBaleFromXML(u0, modDir, u1, u2)
  end)
  xmlFile:iterate("modDesc.jointTypes.jointType", function(modName, modDir)
    local modFile = modFile:getString(modDir .. "#name")
    if modFile ~= nil then
      AttacherJoints.registerJointType(modFile)
    end
  end)
  xmlFile:iterate("modDesc.materialHolders.materialHolder", function(modName, modDir)
    local modFile = modFile:getString(modDir .. "#filename")
    if modFile ~= nil then
      local modTitle = Utils.getFilename(modFile, g_currentModDirectory)
      modTitle:addModMaterialHolder(modTitle)
    end
  end)
  xmlFile:iterate("modDesc.brandColors.color", function(modName, modDir)
    modFile:loadBrandColorFromXML(u0.handle, modDir)
  end)
  xmlFile:iterate("modDesc.connectionHoses.connectionHose", function(modName, modDir)
    local modFile = modFile:getString(modDir .. "#xmlFilename")
    if modFile ~= nil then
      local modTitle = Utils.getFilename(modFile, g_currentModDirectory)
      modTitle:addModConnectionHoses(modTitle, u1, g_currentModDirectory)
    end
  end)
  xmlFile:iterate("modDesc.storeItems.storeItem", function(modName, modDir)
    local modFile = modFile:getString(modDir .. "#xmlFilename")
    if modFile ~= nil then
      modTitle:addModStoreItem(modFile, u1, u2, not u3, false, u4)
    end
  end)
  xmlFile:iterate("modDesc.storePacks.storePack", function(modName, modDir)
    local modFile = modFile:getString(modDir .. "#name")
    local modTitle = modTitle:getString(modDir .. "#title")
    local v4 = v4:getString(modDir .. "#image")
    if modTitle ~= nil then
      local xmlFile = modTitle:sub(1, 6)
      if xmlFile == "$l10n_" then
        local v7 = modTitle:sub(7)
        xmlFile = xmlFile:getText(...)
      end
    end
    xmlFile:addModStorePack(modFile, modTitle, v4, u1)
  end)
  local fillTypesFilename = xmlFile:getString("modDesc.fillTypes#filename")
  if fillTypesFilename ~= nil then
    local v11 = Utils.getFilename(fillTypesFilename, g_currentModDirectory)
    densityMapHeightTypesFilename:addModWithFillTypes(v11, g_currentModDirectory, modName)
  end
  local densityMapHeightTypesFilename = xmlFile:getString("modDesc.densityMapHeightTypes#filename")
  if densityMapHeightTypesFilename ~= nil then
    local v12 = Utils.getFilename(densityMapHeightTypesFilename, g_currentModDirectory)
    missionVehiclesFilename:addModDensityMapHeightTypes(...)
  end
  if v6 then
    xmlFile:iterate("modDesc.foliageTypes.foliageType", function(modName, modDir)
      local modFile = modFile:getString(modDir .. "#name")
      local modTitle = modTitle:getString(modDir .. "#filename")
      if modFile ~= nil and modTitle ~= nil then
        local v4 = Utils.getFilename(modTitle, g_currentModDirectory)
        v4:addModFoliageType(modFile, v4)
      end
    end)
  end
  local missionVehiclesFilename = xmlFile:getString("modDesc.missionVehicles#filename")
  if missionVehiclesFilename ~= nil then
    v11 = Utils.getFilename(missionVehiclesFilename, g_currentModDirectory)
    v11:addPendingMissionVehiclesFile(v11, g_currentModDirectory)
  end
  xmlFile:delete()
  g_currentModDirectory = nil
  g_currentModName = nil
end
function reloadDlcsAndMods()
  if g_currentMission ~= nil then
    print("Dlc reloading is not supported during gameplay")
    return
  end
  local v2 = v2:getNumOfMaps()
  -- TODO: structure LOP_FORNPREP (pc 16, target 33)
  local v3 = v3:getMapDataByIndex(v2)
  if v3.isModMap then
    v4:removeMapItem(v2)
  end
  -- TODO: structure LOP_FORNLOOP (pc 32, target 17)
  while true do
    v0 = v0:getNumOfMods()
    if not (0 < v0) then
      break
    end
    v2 = v2:getModByIndex(1)
    v0:removeMod(...)
  end
  g_modIsLoaded = {}
  g_modNameToDirectory = {}
  g_dlcModNameHasPrefix = {}
  g_globalMods = {}
  u0 = true
  startUpdatePendingMods()
  loadDlcsDirectories()
  loadDlcs()
  v0 = isModUpdateRunning()
  if v0 then
    v0 = startFrameRepeatMode()
    while true do
      v1 = isModUpdateRunning()
      if not v1 then
        break
      end
      usleep(16000)
    end
    if v0 then
      endFrameRepeatMode()
    end
  end
  if Platform.supportsMods then
    loadInternalMods()
    loadMods()
  end
  v0:reloadModActions()
  u0 = false
end
function verifyDlcs()
  local v2 = v2:getMods()
  for v4, v5 in ipairs(...) do
    local v6 = fileExists(v5.modFile)
    if not not v6 then
      continue
    end
    table.insert(v0, v5)
  end
  v2 = table.getn(v0)
  if v2 ~= 0 then
  end
  return true, v0
end
function checkForNewDlcs()
  if Platform.isXbox then
    local numDlcPaths = getNumDlcPaths()
    -- TODO: structure LOP_FORNPREP (pc 12, target 28)
    local v6 = getDlcPath(0)
    if v6 ~= nil then
      {}[v6] = true
      if g_lastCheckDlcPaths[v6] == nil then
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 27, target 13)
    g_lastCheckDlcPaths = v1
    return v0
  end
  return true
end
checkForNewDlcs()
function loadDlcsDirectories()
  g_dlcsDirectories = {}
  local numDlcPaths = getNumDlcPaths()
  -- TODO: structure LOP_FORNPREP (pc 10, target 53)
  local v4 = getDlcPath(0)
  if v4 ~= nil then
    table.insert(g_dlcsDirectories, {path = v4, isLoaded = true})
    local v8 = getAppBasePath()
    if v4 == v8 .. "pdlc/" then
      table.insert(g_dlcsDirectories, {path = "pdlc/", isLoaded = false})
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 52, target 11)
end
loadDlcsDirectories()
function addModEventListener(listener)
  table.insert(g_modEventListeners, listener)
end
function removeModEventListener(listener)
  for v4, v5 in ipairs(g_modEventListeners) do
    if not (v5 == listener) then
      continue
    end
    table.remove(g_modEventListeners, v4)
    return
  end
end
