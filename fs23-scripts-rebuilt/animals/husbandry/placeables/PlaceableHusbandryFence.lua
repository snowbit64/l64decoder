-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

PlaceableHusbandryFence = {}
function PlaceableHusbandryFence.prerequisitesPresent(v0)
  return true
end
function PlaceableHusbandryFence.registerFunctions(placeableType)
  SpecializationUtil.registerFunction(placeableType, "updateHusbandryFence", PlaceableHusbandryFence.updateHusbandryFence)
  SpecializationUtil.registerFunction(placeableType, "createHusbandryFence", PlaceableHusbandryFence.createHusbandryFence)
  SpecializationUtil.registerFunction(placeableType, "onFenceI3DLoaded", PlaceableHusbandryFence.onFenceI3DLoaded)
  SpecializationUtil.registerFunction(placeableType, "onGateI3DLoaded", PlaceableHusbandryFence.onGateI3DLoaded)
end
function PlaceableHusbandryFence.registerEventListeners(placeableType)
  SpecializationUtil.registerEventListener(placeableType, "onLoad", PlaceableHusbandryFence)
  SpecializationUtil.registerEventListener(placeableType, "onDelete", PlaceableHusbandryFence)
  SpecializationUtil.registerEventListener(placeableType, "onPreFinalizePlacement", PlaceableHusbandryFence)
  SpecializationUtil.registerEventListener(placeableType, "onReadStream", PlaceableHusbandryFence)
  SpecializationUtil.registerEventListener(placeableType, "onWriteStream", PlaceableHusbandryFence)
end
function PlaceableHusbandryFence.registerOverwrittenFunctions(placeableType)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "setPreviewPosition", PlaceableHusbandryFence.setPreviewPosition)
  SpecializationUtil.registerOverwrittenFunction(placeableType, "getCanBePlacedAt", PlaceableHusbandryFence.getCanBePlacedAt)
end
function PlaceableHusbandryFence:registerXMLPaths(v1)
  self:setXMLSpecializationType("Husbandry")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.fences" .. ".fence(?)#filename", "Fence filename")
  self:register(XMLValueType.BOOL, v1 .. ".husbandry.fences" .. ".fence(?)#hasStartPole", "Has start pole")
  self:register(XMLValueType.BOOL, v1 .. ".husbandry.fences" .. ".fence(?)#hasEndPole", "Has end pole")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.fences" .. ".fence(?).node(?)#node", "Fence node")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".husbandry.fences" .. ".gate(?)#node", "Gate node")
  self:register(XMLValueType.STRING, v1 .. ".husbandry.fences" .. ".gate(?)#filename", "Gate filename")
  self:register(XMLValueType.INT, v1 .. ".husbandry.fences" .. ".gate(?)#gateIndex", "Gate index")
  self:setXMLSpecializationType()
end
function PlaceableHusbandryFence:onLoad(savegame)
  self.spec_husbandryFence.fences = {}
  self.spec_husbandryFence.canBePlaced = true
  v3:iterate("placeable.husbandry.fences.fence", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#filename")
    if v2 == nil then
      Logging.xmlWarning(u0.xmlFile, "Missing segment filename for '%s'", savegame)
      return
    end
    local v4 = Utils.getFilename(v2, u0.baseDirectory)
    v4 = createTransformGroup("fence")
    link(u0.rootNode, {filename = v4, nodes = {}, parts = {}, rootNode = v4}.rootNode)
    v4 = v4:getValue(savegame .. "#hasStartPole", true)
    v4 = v4:getValue(savegame .. "#hasEndPole", true)
    v4:iterate(savegame .. ".node", function(self, savegame)
      local v2 = v2:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
      if v2 == nil then
        Logging.xmlWarning(u0.xmlFile, "Missing fence node for '%s'", savegame)
        return false
      end
      table.insert(u1.nodes, v2)
      return true
    end)
    if 0 < #{filename = v4, nodes = {}, parts = {}, rootNode = v4, hasStartPole = v4, hasEndPole = v4}.nodes then
      v4 = XMLFile.load("fence", {filename = v4, nodes = {}, parts = {}, rootNode = v4, hasStartPole = v4, hasEndPole = v4}.filename)
      if v4 == nil then
        Logging.xmlWarning(u0.xmlFile, "Could not load fence xml file for '%s'", savegame)
        return
      end
      local v5 = v4:getString("placeable.base.filename")
      if v5 == nil then
        Logging.xmlWarning(v4, "Missing fence filename.")
        return
      end
      local v6 = Utils.getFilename(v5, u0.baseDirectory)
      v3.i3dFilename = v6
      v6 = v6:createLoadingTask()
      local v8 = v8:loadSharedI3DFileAsync(v3.i3dFilename, false, false, u0.onFenceI3DLoaded, u0, {fence = v3, fenceXmlFile = v4, loadingTask = v6})
      v3.sharedLoadRequestId = v8
    end
    table.insert(u1.fences, v3)
  end)
  self.spec_husbandryFence.gates = {}
  v3:iterate("placeable.husbandry.fences.gate", function(self, savegame)
    local v2 = v2:getValue(savegame .. "#filename")
    if v2 == nil then
      Logging.xmlWarning(u0.xmlFile, "Missing gate filename for '%s'", savegame)
      return
    end
    local v4 = Utils.getFilename(v2, u0.baseDirectory)
    v4 = v4:getValue(savegame .. "#node", nil, u0.components, u0.i3dMappings)
    if {filename = v4, node = v4}.node == nil then
      Logging.xmlWarning(u0.xmlFile, "No gate node defined for '%s'", savegame)
      return
    end
    local v5 = v5:getValue(savegame .. "#gateIndex")
    v3.gateIndex = v5 or 1
    v4 = XMLFile.load("gate", v3.filename, Placeable.xmlSchema)
    if v4 == nil then
      Logging.xmlWarning(u0.xmlFile, "Could not load gate xml file for '%s'", savegame)
      return
    end
    v5 = v4:getString("placeable.base.filename")
    if v5 == nil then
      Logging.xmlWarning(v4, "Missing gate filename.")
      return
    end
    local v6 = Utils.getFilename(v5, u0.baseDirectory)
    v3.i3dFilename = v6
    v6 = v6:createLoadingTask()
    local v8 = v8:loadSharedI3DFileAsync(v3.i3dFilename, false, false, u0.onGateI3DLoaded, u0, {gate = v3, gateXmlFile = v4, loadingTask = v6})
    v3.sharedLoadRequestId = v8
    table.insert(u1.gates, v3)
  end)
end
function PlaceableHusbandryFence:onFenceI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    I3DUtil.loadI3DComponents(i3dNode, {})
    I3DUtil.loadI3DMapping(args.fenceXmlFile, i3dNode, {}, {})
    local v11 = args.fenceXmlFile:getString("placeable.fence.poles#node")
    local v9 = I3DUtil.indexToObject({}, v11, {})
    local v12 = args.fenceXmlFile:getString("placeable.fence.panels#node")
    local v10 = I3DUtil.indexToObject({}, v12, {})
    v11 = args.fenceXmlFile:getFloat("placable.fence.panels#length", 2)
    local v13 = args.fenceXmlFile:getFloat("placeable.fence#maxVerticalAngle", 45)
    v12 = math.rad(...)
    args.fence.maxAngle = v12
    self:createHusbandryFence(args.fence, v9, v10, v11)
    delete(i3dNode)
  end
  v5:delete()
  self:finishLoadingTask(v6)
end
function PlaceableHusbandryFence:onGateI3DLoaded(i3dNode, failedReason, args)
  if i3dNode ~= 0 then
    I3DUtil.loadI3DComponents(i3dNode, {})
    I3DUtil.loadI3DMapping(args.gateXmlFile, i3dNode, {}, {})
    local v9 = string.format("placeable.fence.gate(%d)", args.gate.gateIndex - 1)
    local v12 = args.gateXmlFile:getString(v9 .. "#node")
    local v10 = I3DUtil.indexToObject({}, v12, {})
    if v10 ~= nil then
      local v11 = AnimatedObject.new(self.isServer, self.isClient)
      local v14 = self:getOwnerFarmId()
      v11:setOwnerFarmId(v14, false)
      v12 = v11:builder(args.gate.filename, "test")
      args.gateXmlFile:iterate(v9 .. ".door", function(self, i3dNode)
        local v4 = v4:getString(i3dNode .. "#node")
        local failedReason = I3DUtil.indexToObject(u0, v4, u2)
        if failedReason ~= nil then
          local args = args:getValue(i3dNode .. "#openRotation", nil, true)
          v4 = v4:getValue(i3dNode .. "#openTranslation", nil, true)
          v5:addSimplePart(failedReason, args, v4)
        end
      end)
      v14 = args.gateXmlFile:getValue(v9 .. "#openDuration")
      v12:setDuration(v14 * 1000)
      local v16 = args.gateXmlFile:getString(v9 .. "#triggerNode")
      v14 = I3DUtil.indexToObject(v10, v16, {})
      v12:setTrigger(v14)
      v12:setSounds(args.gateXmlFile.handle, v9 .. ".sounds", v10)
      local v15 = args.gateXmlFile:getString(v9 .. "#openText", "action_openGate")
      v16 = args.gateXmlFile:getString(v9 .. "#closeText", "action_closeGate")
      v12:setActions("ACTIVATE_HANDTOOL", v15, nil, v16)
      local v17 = v12:build()
      if v17 then
        v11:register(true)
        args.gate.animatedObject = v11
      else
        v11:delete()
      end
      link(v4.node, v10)
    end
    delete(i3dNode)
  end
  v5:delete()
  self:finishLoadingTask(v6)
end
function PlaceableHusbandryFence:onDelete()
  if self.spec_husbandryFence.fences ~= nil then
    for v5, v6 in ipairs(self.spec_husbandryFence.fences) do
      if v6.sharedLoadRequestId ~= nil then
        v7:releaseSharedI3DFile(v6.sharedLoadRequestId)
      end
      if not (v6.rootNode ~= nil) then
        continue
      end
      delete(v6.rootNode)
      v6.rootNode = nil
    end
  end
  if v1.gates ~= nil then
    for v5, v6 in ipairs(v1.gates) do
      if v6.sharedLoadRequestId ~= nil then
        v7:releaseSharedI3DFile(v6.sharedLoadRequestId)
      end
      if not (v6.animatedObject ~= nil) then
        continue
      end
      v7:delete()
      v6.animatedObject = nil
    end
  end
end
function PlaceableHusbandryFence:onPreFinalizePlacement()
  for v5, v6 in ipairs(self.spec_husbandryFence.fences) do
    self:updateHusbandryFence(v6, true)
  end
end
function PlaceableHusbandryFence:onReadStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_husbandryFence.gates) do
    if not (v8.animatedObject ~= nil) then
      continue
    end
    local animatedObjectId = NetworkUtil.readNodeObjectId(streamId)
    v10:readStream(streamId, connection)
    v10:finishRegisterObject(v8.animatedObject, animatedObjectId)
  end
end
function PlaceableHusbandryFence:onWriteStream(streamId, connection)
  for v7, v8 in ipairs(self.spec_husbandryFence.gates) do
    if not (v8.animatedObject ~= nil) then
      continue
    end
    local v11 = NetworkUtil.getObjectId(v8.animatedObject)
    NetworkUtil.writeNodeObjectId(...)
    v9:writeStream(streamId, connection)
    v9:registerObjectInStream(connection, v8.animatedObject)
  end
end
function PlaceableHusbandryFence:createHusbandryFence(fence, poleRoot, panelRoot, panelLength)
  if poleRoot ~= nil then
    local v6 = getNumOfChildren(poleRoot)
  end
  if panelRoot ~= nil then
    local v7 = getNumOfChildren(panelRoot)
  end
  for v10, v11 in ipairs(fence.nodes) do
    local v12, v13, v14 = localToLocal(v11, fence.rootNode, 0, 0, 0)
    if fence.nodes[v10 + 1] ~= nil then
      local v20, v21, v22 = localToLocal(fence.nodes[v10 + 1], fence.rootNode, 0, 0, 0)
      local v23 = MathUtil.vector2Length(v20 - v12, v22 - v14)
      local v24, v25 = MathUtil.vector2Normalize(v20 - v12, v22 - v14)
      local v26 = math.atan2(v24, v25)
      v26 = math.floor(v23 / panelLength)
      if panelLength * 0.5 < v23 % panelLength then
      end
      while true do
        -- if 0.001 >= v23 then goto L280 end
        if poleRoot ~= nil then
          if 0 >= #fence.parts then
            -- if not v1.hasStartPole then goto L115 end
          end
          v33 = math.random(0, v5 - 1)
          v31 = getChildAt(...)
          v30 = clone(v31, false, false, false)
        else
          v30 = createTransformGroup("startPole")
        end
        v28.pole = v29
        link(fence.rootNode, v29)
        setRotation(v29, 0, v18, 0)
        setTranslation(v29, v15, v16, v17)
        if panelRoot ~= nil then
          v33 = math.random(0, v6 - 1)
          v31 = getChildAt(...)
          v30 = clone(v31, false, false, false)
          link(fence.rootNode, v30)
          setTranslation(v30, v15, v16, v17)
          setDirection(v30, v24, 0, v25, 0, 1, 0)
          setScale(v30, 1, 1, v27 / panelLength)
          v31 = getChildAt(v30, 0)
          v28.collision = v31
          v31 = getChildAt(v30, 1)
          v28.visual = v31
          v28.panel = v30
        end
        v28.length = v27
        table.insert(fence.parts, v28)
      end
    else
      if poleRoot ~= nil then
        -- if not v1.hasEndPole then goto L245 end
        v24 = math.random(0, v5 - 1)
        v22 = getChildAt(...)
        v21 = clone(v22, false, false, false)
      else
        v21 = createTransformGroup("endPole")
      end
      link(fence.rootNode, v20)
      setRotation(v20, 0, v18, 0)
      setTranslation(v20, v15, v16, v17)
      table.insert(fence.parts, {pole = v20})
    end
  end
  self:updateHusbandryFence(fence, false)
end
function PlaceableHusbandryFence.updateHusbandryFence(v0, v1, v2)
  for v7, v8 in ipairs(v1.parts) do
    local v10, v11, v12 = getWorldTranslation(v8.pole)
    local v13 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v10, v11, v12)
    setWorldTranslation(v8.pole, v10, v13, v12)
    if v8.panel ~= nil then
      setWorldTranslation(v8.panel, v10, v13, v12)
    end
    if not (v1.parts[v7 - 1] ~= nil) then
      continue
    end
    if not (v1.parts[v7 - 1].panel ~= nil) then
      continue
    end
    local v15, v16, v17 = localToLocal(v9, v1.parts[v7 - 1].pole, 0, 0, 0)
    local v19 = math.abs(v16)
    local v20 = math.abs(v17)
    local v18 = math.atan2(...)
    if v1.maxAngle < v18 then
    end
    I3DUtil.setShaderParameterRec(v14.visual, "yOffset", v16, 0, 0, 0, false, nil)
    if not v2 then
      continue
    end
    local v19, v20, v21 = getTranslation(v14.collision)
    local v22 = MathUtil.vector3Length(0, v16, v14.length)
    local v23, v24, v25 = MathUtil.vector3Normalize(0, v16, v14.length)
    setDirection(v14.collision, v23, v24, v25, 0, 1, 0)
    setTranslation(v14.collision, v19 + v23 * (v22 - v14.length) * 0.5, v20 + v24 * (v22 - v14.length) * 0.5, v21 + v25 * (v22 - v14.length) * 0.5)
  end
  return v3
end
function PlaceableHusbandryFence:setPreviewPosition(superFunc, x, y, z, rotX, rotY, rotZ)
  superFunc(self, x, y, z, rotX, rotY, rotZ)
  self.spec_husbandryFence.canBePlaced = true
  for v12, v13 in ipairs(self.spec_husbandryFence.fences) do
    local v14 = self:updateHusbandryFence(v13, false)
    v8.canBePlaced = v8.canBePlaced and v14
  end
end
function PlaceableHusbandryFence:getCanBePlacedAt(superFunc, x, y, z, farmId)
  if not self.spec_husbandryFence.canBePlaced then
    local v7 = v7:getText("warning_canNotPlaceFence")
    return false
  end
  return superFunc(self, x, y, z, farmId)
end
