-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableDynamicallyLoadedParts = {}
function PlaceableDynamicallyLoadedParts.prerequisitesPresent(v0)
  return true
end
function PlaceableDynamicallyLoadedParts.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "onDynamicallyPartI3DLoaded", PlaceableDynamicallyLoadedParts.onDynamicallyPartI3DLoaded)
end
function PlaceableDynamicallyLoadedParts.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableDynamicallyLoadedParts)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableDynamicallyLoadedParts)
end
function PlaceableDynamicallyLoadedParts:registerXMLPaths(v1)
  self:setXMLSpecializationType("DynamicallyLoadedParts")
  self:register(XMLValueType.STRING, v1 .. ".dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#filename", "Filename to i3d file")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#node", "Node in external i3d file", "0")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#linkNode", "Link node", "0>")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. ".dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#position", "Position")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#rotationNode", "Rotation node", "node")
  self:register(XMLValueType.VECTOR_ROT, v1 .. ".dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#rotation", "Rotation node rotation")
  self:register(XMLValueType.STRING, v1 .. ".dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#shaderParameterName", "Shader parameter name")
  self:register(XMLValueType.VECTOR_4, v1 .. ".dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#shaderParameter", "Shader parameter to apply")
  ObjectChangeUtil.registerObjectChangeSingleXMLPaths(self, v1 .. ".dynamicallyLoadedParts.dynamicallyLoadedPart(?)")
  self:setXMLSpecializationType()
end
function PlaceableDynamicallyLoadedParts:onLoad(savegame)
  self.spec_dynamicallyLoadedParts.sharedLoadRequestIds = {}
  self.spec_dynamicallyLoadedParts.parts = {}
  v3:iterate("placeable.dynamicallyLoadedParts.dynamicallyLoadedPart", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#filename")
    if v2 ~= nil then
      local v3 = Utils.getFilename(v2, u0.baseDirectory)
      local v4 = v4:createLoadingTask(u1)
      v4 = v4:loadSharedI3DFileAsync(v3, false, false, u0.onDynamicallyPartI3DLoaded, u0, {xmlFile = u0.xmlFile, key = savegame, loadingTask = v4, filename = v3})
      table.insert(u1.sharedLoadRequestIds, v4)
      return
    end
    Logging.xmlWarning(u0.xmlFile, "Missing filename for dynamically loaded part '%s'", savegame)
  end)
end
function PlaceableDynamicallyLoadedParts:onDynamicallyPartI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    local v9 = args.xmlFile:getValue(args.key .. "#node", "0", i3dNode)
    if v9 == nil then
      Logging.xmlWarning(args.xmlFile, "Failed to load dynamicallyLoadedPart '%s'. Unable to find node in loaded i3d", args.key)
      return false
    end
    local v10 = v7:getValue(v8 .. "#linkNode", "0>", self.components, self.i3dMappings)
    if v10 == nil then
      Logging.xmlWarning(v7, "Failed to load dynamicallyLoadedPart '%s'. Unable to find linkNode", v8)
      return false
    end
    local v11, v12, v13 = v7:getValue(v8 .. "#position")
    if v11 ~= nil and v12 ~= nil and v13 ~= nil then
      setTranslation(v9, v11, v12, v13)
    end
    local v14 = v7:getValue(v8 .. "#rotationNode", v9, i3dNode)
    local v15, v16, v17 = v7:getValue(v8 .. "#rotation")
    if v15 ~= nil and v16 ~= nil and v17 ~= nil then
      setRotation(v14, v15, v16, v17)
    end
    local v18 = v7:getValue(v8 .. "#shaderParameterName")
    local v19, v20, v21, v22 = v7:getValue(v8 .. "#shaderParameter")
    if v18 ~= nil and v19 ~= nil and v20 ~= nil and v21 ~= nil and v22 ~= nil then
      setShaderParameter(v9, v18, v19, v20, v21, v22, false)
    end
    ObjectChangeUtil.loadObjectChangeFromXML(v7, v8, {}, i3dNode, nil)
    ObjectChangeUtil.setObjectChanges({}, true, nil)
    link(v10, v9)
    delete(i3dNode)
    table.insert(v4.parts, {filename = v6, node = v9})
  end
  self:finishLoadingTask(v5)
end
function PlaceableDynamicallyLoadedParts:onDelete()
  if self.spec_dynamicallyLoadedParts.sharedLoadRequestIds ~= nil then
    for v5, v6 in ipairs(self.spec_dynamicallyLoadedParts.sharedLoadRequestIds) do
      v7:releaseSharedI3DFile(v6)
    end
    v1.sharedLoadRequestIds = nil
  end
  if v1.parts ~= nil then
    for v5, v6 in pairs(v1.parts) do
      delete(v6.node)
    end
  end
end
