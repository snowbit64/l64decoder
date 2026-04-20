-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DynamicallyLoadedParts = {}
function DynamicallyLoadedParts.prerequisitesPresent(v0)
  return true
end
function DynamicallyLoadedParts.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("DynamicallyLoadedParts")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#filename", "Filename to i3d file")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#node", "Node in external i3d file", "0|0")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#linkNode", "Link node", "0>")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#position", "Position")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#rotationNode", "Rotation node", "node")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_ROT, "vehicle.dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#rotation", "Rotation node rotation")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#shaderParameterName", "Shader parameter name")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_4, "vehicle.dynamicallyLoadedParts.dynamicallyLoadedPart(?)" .. "#shaderParameter", "Shader parameter to apply")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function DynamicallyLoadedParts.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "onDynamicallyPartI3DLoaded", DynamicallyLoadedParts.onDynamicallyPartI3DLoaded)
end
function DynamicallyLoadedParts.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", DynamicallyLoadedParts)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", DynamicallyLoadedParts)
end
function DynamicallyLoadedParts:onLoad(savegame)
  self.spec_dynamicallyLoadedParts.sharedLoadRequestIds = {}
  self.spec_dynamicallyLoadedParts.parts = {}
  v3:iterate("vehicle.dynamicallyLoadedParts.dynamicallyLoadedPart", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#filename")
    if v2 ~= nil then
      local v4 = Utils.getFilename(v2, u0.baseDirectory)
      local v5 = v5:loadSubSharedI3DFile({filename = v4}.filename, false, false, u0.onDynamicallyPartI3DLoaded, u0, {xmlFile = u0.xmlFile, partKey = savegame, dynamicallyLoadedPart = {filename = v4}})
      table.insert(u1.sharedLoadRequestIds, v5)
      return
    end
    Logging.xmlWarning(u0.xmlFile, "Missing filename for dynamically loaded part '%s'", savegame)
  end)
end
function DynamicallyLoadedParts:onDelete()
  if self.spec_dynamicallyLoadedParts.sharedLoadRequestIds ~= nil then
    for v5, v6 in ipairs(self.spec_dynamicallyLoadedParts.sharedLoadRequestIds) do
      v7:releaseSharedI3DFile(v6)
    end
    v1.sharedLoadRequestIds = nil
  end
end
function DynamicallyLoadedParts:onDynamicallyPartI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    local v8 = args.xmlFile:getValue(args.partKey .. "#node", "0|0", i3dNode)
    if v8 == nil then
      Logging.xmlWarning(args.xmlFile, "Failed to load dynamicallyLoadedPart '%s'. Unable to find node in loaded i3d", args.partKey)
      return false
    end
    local v9 = v5:getValue(v6 .. "#linkNode", "0>", self.components, self.i3dMappings)
    if v9 == nil then
      Logging.xmlWarning(v5, "Failed to load dynamicallyLoadedPart '%s'. Unable to find linkNode", v6)
      return false
    end
    local v10, v11, v12 = v5:getValue(v6 .. "#position")
    if v10 ~= nil and v11 ~= nil and v12 ~= nil then
      setTranslation(v8, v10, v11, v12)
    end
    local v13 = v5:getValue(v6 .. "#rotationNode", v8, i3dNode)
    local v14, v15, v16 = v5:getValue(v6 .. "#rotation")
    if v14 ~= nil and v15 ~= nil and v16 ~= nil then
      setRotation(v13, v14, v15, v16)
    end
    local v17 = v5:getValue(v6 .. "#shaderParameterName")
    local v18, v19, v20, v21 = v5:getValue(v6 .. "#shaderParameter")
    if v17 ~= nil and v18 ~= nil and v19 ~= nil and v20 ~= nil and v21 ~= nil then
      setShaderParameter(v8, v17, v18, v19, v20, v21, false)
    end
    link(v9, v8)
    delete(i3dNode)
    table.insert(v4.parts, v7)
  end
end
