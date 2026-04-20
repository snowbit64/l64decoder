-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableUtil = {}
function PlaceableUtil.loadPlaceable(filename, position, rotation, ownerFarmId, savegameData, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  if asyncCallbackFunction == nil then
    Logging.error("PlaceableUtil.loadPlaceable can only be used async")
    printCallstack()
    return
  end
  if g_currentMission.cancelLoading then
    asyncCallbackFunction(asyncCallbackObject, nil, Placeable.LOADING_STATE_OK, asyncCallbackArguments)
    return
  end
  local v8 = v8:getItemByXMLFilename(filename)
  if v8 == nil then
    Logging.warning("PlaceableUtil.loadPlaceable can only load existing store items, no store item for xml filename '%s'", filename)
    asyncCallbackFunction(asyncCallbackObject, nil, Placeable.LOADING_STATE_ERROR, asyncCallbackArguments)
    return
  end
  v8 = XMLFile.load("placeableXml", filename, Placeable.xmlSchema)
  if v8 == nil then
    Logging.error("Unable to load placeable xml file '%s'", filename)
    asyncCallbackFunction(asyncCallbackObject, nil, Placeable.LOADING_STATE_ERROR, asyncCallbackArguments)
    return
  end
  local v9 = v8:getValue("placeable#type")
  v8:delete()
  if v9 == nil then
    Logging.error("No type defined for placeable '%s'", filename)
    asyncCallbackFunction(asyncCallbackObject, nil, Placeable.LOADING_STATE_ERROR, asyncCallbackArguments)
    return
  end
  local v10 = v10:getTypeByName(v9)
  local v11, v12 = Utils.getModNameAndBaseDirectory(filename)
  if v11 ~= nil then
    if g_modIsLoaded[v11] ~= nil then
      -- if g_modIsLoaded[v11] then goto L121 end
    end
    Logging.error("Mod '%s' of placeable '%s' is not loaded. This placeable will not be loaded", v11, filename)
    asyncCallbackFunction(asyncCallbackObject, nil, Placeable.LOADING_STATE_ERROR, asyncCallbackArguments)
    return
    if v10 == nil then
      local v13 = v13:getTypeByName(v11 .. "." .. v9)
    end
  end
  if v10 == nil then
    Logging.error("Unknown placeable type '%s' in '%s'", v9, filename)
    asyncCallbackFunction(asyncCallbackObject, nil, Placeable.LOADING_STATE_ERROR, asyncCallbackArguments)
    return
  end
  v13 = ClassUtil.getClassObject(v10.className)
  if v13 == nil then
    Logging.error("Unknown placeable class '%s' for placeable type '%s' in '%s'", v10.className, v9, filename)
    asyncCallbackFunction(asyncCallbackObject, nil, Placeable.LOADING_STATE_ERROR, asyncCallbackArguments)
    return
  end
  local v15 = v15:getIsServer()
  local v16 = v16:getIsClient()
  local v14 = v13.new(...)
  if savegameData ~= nil then
  end
  v14:load(v15, PlaceableUtil.loadPlaceableFinished, nil, {asyncCallbackFunction = asyncCallbackFunction, asyncCallbackObject = asyncCallbackObject, asyncCallbackArguments = asyncCallbackArguments})
  return v14
end
function PlaceableUtil.loadPlaceableFinished(_, placeable, loadingState, arguments)
  arguments.asyncCallbackFunction(arguments.asyncCallbackObject, placeable, loadingState, arguments.asyncCallbackArguments)
end
