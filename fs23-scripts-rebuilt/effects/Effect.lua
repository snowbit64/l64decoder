-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Effect = {}
local Effect_mt = Class(Effect)
function Effect.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.deleteListeners = {}
  v1.startRestriction = {}
  return v1
end
function Effect:load(xmlFile, baseName, rootNodes, parent, i3dMapping)
  local v6 = xmlFile:hasProperty(baseName)
  if not v6 then
    return nil
  end
  self.parent = parent
  self.rootNodes = rootNodes
  v6 = Utils.getNoNil(parent.configFileName, parent.xmlFilename)
  self.configFileName = v6
  self.baseDirectory = parent.baseDirectory
  v6 = xmlFile:getValue(baseName .. "#filename")
  if v6 ~= nil then
    local v7 = Utils.getFilename(v6, self.baseDirectory)
    local v8 = v8:loadSharedI3DFileAsync(v7, false, false, self.effectI3DFileLoaded, self, {xmlFile = xmlFile, baseName = baseName, i3dMapping = i3dMapping, filename = v7, node = nil})
    self.sharedLoadRequestId = v8
    return self
  end
  v7 = self:loadEffectAttributes(xmlFile, baseName, nil, rootNodes, i3dMapping)
  if not v7 then
    Logging.xmlWarning(xmlFile, "Failed to load effect '%s' from node", baseName)
    return nil
  end
  self:transformEffectNode(xmlFile, baseName, nil)
  return self
end
function Effect:loadFromNode(node, parent)
  self.parent = parent
  self.baseDirectory = parent.baseDirectory
  local v3 = Utils.getNoNil(parent.configFileName, parent.xmlFilename)
  self.configFileName = v3
  v3 = getUserAttribute(node, "filename")
  if v3 ~= nil then
    local v4 = Utils.getFilename(v3, self.baseDirectory)
    local v5 = v5:loadSharedI3DFileAsync(v4, false, false, self.effectI3DFileLoaded, self, {xmlFile = nil, baseName = nil, i3dMapping = nil, filename = v4, node = node})
    self.sharedLoadRequestId = v5
    return self
  end
  v4 = self:loadEffectAttributes(nil, nil, node)
  if not v4 then
    local v7 = getName(node)
    Logging.xmlWarning(...)
    return nil
  end
  self:transformEffectNode(nil, nil, node)
  return self
end
function Effect:effectI3DFileLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    self.filename = args.filename
    local v8 = self:loadEffectAttributes(args.xmlFile, args.baseName, args.node, i3dNode, args.i3dMapping)
    if not v8 then
      Logging.xmlWarning(args.xmlFile, "Failed to load effect from file '%s'", args.baseName)
    end
    self:transformEffectNode(v4, v5, v7)
    delete(i3dNode)
  end
end
function Effect:loadEffectAttributes(xmlFile, key, node, i3dNode, i3dMapping)
  local v7 = Effect.getValue(xmlFile, key, node, "useSelfAsEffectNode")
  local v6 = Utils.getNoNil(v7, false)
  local v8 = Effect.getValue(xmlFile, key, node, "prio")
  v7 = Utils.getNoNil(v8, 0)
  self.prio = v7
  v8 = Utils.getNoNil(node, self.rootNodes)
  local v9 = Effect.getValue(xmlFile, key, node, "effectNode")
  v7 = I3DUtil.indexToObject(v8, v9, i3dMapping)
  if v7 == nil and v6 then
  end
  if v7 ~= nil then
    self.node = v7
  else
    v8 = Effect.getValue(xmlFile, key, node, "node", nil, i3dNode, i3dMapping)
    self.node = v8
    v9 = Utils.getNoNil(node, self.rootNodes)
    local v10 = Effect.getValue(xmlFile, key, node, "linkNode")
    v8 = I3DUtil.indexToObject(v9, v10, i3dMapping)
    self.linkNode = v8
    if self.linkNode == nil then
      if node == nil then
        Logging.xmlWarning(xmlFile, "LinkNode is nil in '%s'", key)
      else
        local v11 = getName(node)
        Logging.xmlWarning(...)
      end
      return false
    end
    if self.node == nil then
      if node == nil then
        Logging.xmlWarning(xmlFile, "Node is nil in '%s'", key)
      else
        v11 = getName(node)
        Logging.xmlWarning(...)
      end
      return false
    end
    if self.node ~= nil and self.linkNode ~= nil then
      link(self.linkNode, self.node)
    end
  end
  return true
end
function Effect:transformEffectNode(xmlFile, key, node)
  local v4, v5, v6 = Effect.getValue(xmlFile, key, node, "position")
  local v7, v8, v9 = Effect.getValue(xmlFile, key, node, "rotation")
  local v10, v11, v12 = Effect.getValue(xmlFile, key, node, "scale")
  if v4 ~= nil and v5 ~= nil and v6 ~= nil then
    setTranslation(self.node, v4, v5, v6)
  end
  if v7 ~= nil and v8 ~= nil and v9 ~= nil then
    setRotation(self.node, v7, v8, v9)
  end
  if v10 ~= nil and v11 ~= nil and v12 ~= nil then
    setScale(self.node, v10, v11, v12)
  end
  setVisibility(self.node, false)
end
function Effect:delete()
  if self.sharedLoadRequestId ~= nil then
    v1:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  -- TODO: structure LOP_FORNPREP (pc 19, target 37)
  local v6 = unpack(self.deleteListeners[#self.deleteListeners].args)
  self.deleteListeners[#self.deleteListeners].func(...)
  self.deleteListeners[#self.deleteListeners] = nil
  -- TODO: structure LOP_FORNLOOP (pc 36, target 20)
  self.parent = nil
end
function Effect.update(v0, v1)
end
function Effect.isRunning(v0)
  return false
end
function Effect:canStart()
  -- TODO: structure LOP_FORNPREP (pc 6, target 23)
  if true then
    local v7 = unpack(self.startRestriction[#self.startRestriction].args)
    local v6 = self.startRestriction[#self.startRestriction].func(...)
  end
  -- TODO: structure LOP_FORNLOOP (pc 22, target 7)
  return v6
end
function Effect.start(v0)
  return false
end
function Effect.stop(v0)
  return false
end
function Effect.reset(v0)
end
function Effect.getIsVisible(v0)
  return true
end
function Effect.getIsFullyVisible(v0)
  return true
end
function Effect:getValue(v1, v2, v3, ...)
  if v2 == nil then
    return self:getValue(...)
  end
  v4 = getUserAttribute(v2, v3)
  return v4
end
function Effect:addDeleteListener(func, ...)
  table.insert(self.deleteListeners, {func = func, args = {}})
end
function Effect:addStartRestriction(func, ...)
  table.insert(self.startRestriction, {func = func, args = {}})
end
function Effect:registerEffectXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#filename", "Effect from external i3d")
  self:register(XMLValueType.BOOL, v1 .. "#shared", "Load i3d file as shared file")
  self:register(XMLValueType.BOOL, v1 .. "#useSelfAsEffectNode", "Use root node as effect node", false)
  self:register(XMLValueType.INT, v1 .. "#prio", "Prio", 0)
  self:register(XMLValueType.STRING, v1 .. "#effectNode", "Effect node")
  self:register(XMLValueType.NODE_INDEX, v1 .. "#node", "Effect in i3d node")
  self:register(XMLValueType.STRING, v1 .. "#linkNode", "Link node")
  self:register(XMLValueType.VECTOR_TRANS, v1 .. "#position", "Translation")
  self:register(XMLValueType.VECTOR_ROT, v1 .. "#rotation", "Rotation")
  self:register(XMLValueType.VECTOR_SCALE, v1 .. "#scale", "Scale")
end
