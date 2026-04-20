-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ObjectChangeUtil = {}
function ObjectChangeUtil:loadObjectChangeFromXML(v1, v2, v3, v4)
  while true do
    v6 = string.format(v1 .. ".objectChange(%d)", v5)
    v7 = self:hasProperty(v6)
    if not v7 then
      break
    end
    if v4 ~= nil then
    end
    v8 = self:getValue(v6 .. "#node", nil, v3, v7)
    if v8 ~= nil then
      ObjectChangeUtil.loadValuesFromXML(self, v6, v8, {node = v8}, v4, v3, v7)
      table.insert(v2, {node = v8})
    end
  end
end
function ObjectChangeUtil.loadValueType(targetTable, xmlFile, key, name, getFunc, setFunc, interpolatable, ...)
  local v8 = xmlFile:getValue(...)
  v8 = xmlFile:getValue(...)
  if {active = v8, inactive = v8}.active == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x0 -> L89
  end
  v7.getFunc = getFunc
  v7.setFunc = setFunc
  if v7.active ~= nil then
    v8 = type(v7.active)
    if v8 ~= "table" then
      v7.active = {v7.active}
    end
  end
  if v7.inactive ~= nil then
    v8 = type(v7.inactive)
    if v8 ~= "table" then
      v7.inactive = {v7.inactive}
    end
  end
  v7.interpolatable = interpolatable
  v7.name = name
  table.insert(targetTable, v7)
  return v7
end
function ObjectChangeUtil:loadValuesFromXML(v1, v2, v3, v4, v5, v6)
  XMLUtil.checkDeprecatedXMLElements(self, "", v1 .. "#collisionActive", v1 .. "#compoundChildActive or #rigidBodyTypeActive")
  XMLUtil.checkDeprecatedXMLElements(self, "", v1 .. "#collisionInactive", v1 .. "#compoundChildInactive or #rigidBodyTypeInactive")
  v3.parent = v4
  local v7 = self:getValue(v1 .. "#interpolation", false)
  v3.interpolation = v7
  v7 = self:getValue(v1 .. "#interpolationTime", 1)
  v3.interpolationTime = v7
  v3.values = {}
  v7 = ObjectChangeUtil.loadValueType(v3.values, self, v1, "parentNode", nil, function(self)
    local v1, v2, v3 = getWorldTranslation(u0)
    local v4, v5, v6 = getWorldRotation(u0)
    link(self, u0)
    setWorldTranslation(u0, v1, v2, v3)
    setWorldRotation(u0, v4, v5, v6)
  end, false, nil, v5, v6)
  if v7 ~= nil then
    if v7.active == nil then
      local v9 = getParent(v3.node)
      v7.active = {}
    end
    if v7.inactive == nil then
      v9 = getParent(v3.node)
      v7.inactive = {}
    end
  end
  ObjectChangeUtil.loadValueType(v3.values, self, v1, "translation", function()
    return getTranslation(u0)
  end, function(self, v1, v2)
    setTranslation(u0, self, v1, v2)
  end, true, nil, true)
  ObjectChangeUtil.loadValueType(v3.values, self, v1, "rotation", function()
    return getRotation(u0)
  end, function(self, v1, v2)
    setRotation(u0, self, v1, v2)
  end, true, nil, true)
  ObjectChangeUtil.loadValueType(v3.values, self, v1, "scale", function()
    return getScale(u0)
  end, function(self, v1, v2)
    setScale(u0, self, v1, v2)
  end, true, nil, true)
  local v8 = self:getValue(v1 .. "#shaderParameter")
  if v8 ~= nil then
    v9 = getHasShaderParameter(v2, v8)
    if v9 then
      v9 = self:getValue(v1 .. "#sharedShaderParameter", false)
      ObjectChangeUtil.loadValueType(v3.values, self, v1, "shaderParameter", function()
        return getShaderParameter(u0, u1)
      end, function(self, v1, v2, v3)
        setShaderParameter(u0, u1, self, v1, v2, v3, u2)
      end, true, nil, true)
    else
      local v13 = getName(v2)
      Logging.xmlWarning(self, "Missing shader parameter '%s' on object '%s' in '%s'", v8, v13, v1)
    end
  end
  v9 = self:getString(v1 .. "#centerOfMassActive")
  local v10 = self:getString(v1 .. "#centerOfMassInactive")
  if v9 == nil then
    -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L268
  end
  local v11 = v11:split(" ")
  v11 = v11:split(" ")
  v3.centerOfMassMask = {1, 1, 1}
  v3.centerOfMassMaskActive = false
  -- TODO: structure LOP_FORNPREP (pc 242, target 268)
  if v11 ~= nil and v11[1] == "-" then
    v3.centerOfMassMask[1] = 0
    v3.centerOfMassMaskActive = true
  end
  if v10 ~= nil and v10[v13] == "-" then
    v3.centerOfMassMask[v13] = 0
    v3.centerOfMassMaskActive = true
  end
  -- TODO: structure LOP_FORNLOOP (pc 267, target 243)
  ObjectChangeUtil.loadValueType(v3.values, self, v1, "centerOfMass", function()
    return getCenterOfMass(u0)
  end, function(self, v1, v2)
    if u0.centerOfMassMaskActive ~= nil then
      local v3, v4, v5 = getCenterOfMass(u1)
      if u0.centerOfMassMask[1] == 0 then
      end
      if u0.centerOfMassMask[2] == 0 then
      end
      if u0.centerOfMassMask[3] == 0 then
      end
    end
    setCenterOfMass(u1, self, v1, v2)
  end, true, nil, true)
  ObjectChangeUtil.loadValueType(v3.values, self, v1, "mass", function()
    return getMass(u0)
  end, function(self)
    setMass(u0, self / 1000)
    if u1 ~= nil and u1.components ~= nil then
      for v4, v5 in ipairs(u1.components) do
        if not (v5.node == u2.node) then
          continue
        end
        v5.defaultMass = u2.massActive
        v6:setMassDirty()
      end
    end
  end, true)
  ObjectChangeUtil.loadValueType(v3.values, self, v1, "visibility", nil, function(self)
    setVisibility(u0, self)
  end, false)
  ObjectChangeUtil.loadValueType(v3.values, self, v1, "compoundChild", nil, function(self)
    setIsCompoundChild(u0, self)
  end, false)
  v11 = self:getValue(v1 .. "#rigidBodyTypeActive")
  if v11 ~= nil then
    local v14 = v11:upper()
    v3.rigidBodyTypeActive = RigidBodyType[v14]
    if v3.rigidBodyTypeActive ~= RigidBodyType.STATIC and v3.rigidBodyTypeActive ~= RigidBodyType.DYNAMIC and v3.rigidBodyTypeActive ~= RigidBodyType.KINEMATIC and v3.rigidBodyTypeActive ~= RigidBodyType.NONE then
      Logging.xmlWarning(self, "Invalid rigidBodyTypeActive '%s' for object change node '%s'. Use 'Static', 'Dynamic', 'Kinematic' or 'None'!", v11, v1)
      v3.rigidBodyTypeActive = nil
    end
  end
  local v12 = self:getValue(v1 .. "#rigidBodyTypeInactive")
  if v12 ~= nil then
    local v15 = v12:upper()
    v3.rigidBodyTypeInactive = RigidBodyType[v15]
    if v3.rigidBodyTypeInactive ~= RigidBodyType.STATIC and v3.rigidBodyTypeInactive ~= RigidBodyType.DYNAMIC and v3.rigidBodyTypeInactive ~= RigidBodyType.KINEMATIC and v3.rigidBodyTypeInactive ~= RigidBodyType.NONE then
      Logging.xmlWarning(self, "Invalid rigidBodyTypeInactive '%s' for object change node '%s'. Use 'Static', 'Dynamic', 'Kinematic' or 'None'!", v12, v1)
      v3.rigidBodyTypeInactive = nil
    end
  end
  if v4 ~= nil and v4.loadObjectChangeValuesFromXML ~= nil then
    v4:loadObjectChangeValuesFromXML(self, v1, v2, v3)
  end
end
function ObjectChangeUtil.setObjectChanges(objects, isActive, target, updateFunc, skipInterpolation)
  if objects ~= nil then
    for v8, v9 in pairs(objects) do
      ObjectChangeUtil.setObjectChange(v9, isActive, target, updateFunc, skipInterpolation)
    end
  end
end
function ObjectChangeUtil:setObjectChange(v1, v2, v3, v4)
  if v1 then
    -- TODO: structure LOP_FORNPREP (pc 6, target 73)
    if self.values[1].active ~= nil then
      if self.interpolation then
        -- if not v0.values[1].interpolatable then goto L54 end
        -- if v4 then goto L54 end
        local v9 = ValueInterpolator.new(self.node .. self.values[1].name, self.values[1].getFunc, self.values[1].setFunc, self.values[1].active, self.interpolationTime)
        -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L72
        v9:setUpdateFunc(v3, v2, self.node)
        if not v2 then
        end
        v9:setDeleteListenerObject(v12)
      else
        if v4 then
          ValueInterpolator.removeInterpolator(self.node .. self.values[1].name)
        end
        local v10 = unpack(v8.active)
        v8.setFunc(...)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 72, target 7)
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L168
    setRigidBodyType(self.node, self.rigidBodyTypeActive)
  else
    -- TODO: structure LOP_FORNPREP (pc 90, target 157)
    if self.values[1].inactive ~= nil then
      if self.interpolation then
        -- if not v0.values[1].interpolatable then goto L138 end
        -- if v4 then goto L138 end
        v9 = ValueInterpolator.new(self.node .. self.values[1].name, self.values[1].getFunc, self.values[1].setFunc, self.values[1].inactive, self.interpolationTime)
        -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L156
        v9:setUpdateFunc(v3, v2, self.node)
        if not v2 then
        end
        v9:setDeleteListenerObject(v12)
      else
        if v4 then
          ValueInterpolator.removeInterpolator(self.node .. self.values[1].name)
        end
        v10 = unpack(v8.inactive)
        v8.setFunc(...)
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 156, target 91)
    if self.rigidBodyTypeInactive ~= nil then
      setRigidBodyType(self.node, self.rigidBodyTypeInactive)
    end
  end
  if v2 ~= nil then
    if v2.setObjectChangeValues ~= nil then
      v2:setObjectChangeValues(self, v1)
    end
    if v3 ~= nil then
      v3(v2, self.node)
    end
  end
end
function ObjectChangeUtil:updateObjectChanges(v1, v2, v3, v4)
  while true do
    v7 = string.format(v1 .. "(%d)", v5)
    v8 = self:hasProperty(v7)
    if not v8 then
      break
    end
    if v5 ~= v6 then
      ObjectChangeUtil.loadObjectChangeFromXML(self, v7, {}, v3, v4)
      ObjectChangeUtil.setObjectChanges({}, false, v4)
    end
  end
  if v6 < v5 then
    v7 = string.format(v1 .. "(%d)", v6)
    ObjectChangeUtil.loadObjectChangeFromXML(self, v7, {}, v3, v4)
    ObjectChangeUtil.setObjectChanges({}, true, v4)
  end
end
function ObjectChangeUtil:registerObjectChangeXMLPaths(v1)
  self:setXMLSharedRegistration("ObjectChange_single", v1)
  ObjectChangeUtil.registerObjectChangeSingleXMLPaths(self, v1)
  self:setXMLSharedRegistration()
end
function ObjectChangeUtil:registerObjectChangesXMLPaths(v1)
  self:setXMLSharedRegistration("ObjectChange_multiple", v1)
  ObjectChangeUtil.registerObjectChangeSingleXMLPaths(self, v1 .. ".objectChanges")
  self:setXMLSharedRegistration()
end
function ObjectChangeUtil:registerObjectChangeSingleXMLPaths(v1)
  self:addDelayedRegistrationPath(v1 .. ".objectChange(?)", "ObjectChange")
  self:register(XMLValueType.NODE_INDEX, v1 .. ".objectChange(?)#node", "Object change node")
  self:register(XMLValueType.BOOL, v1 .. ".objectChange(?)#interpolation", "Value will be interpolated", false)
  self:register(XMLValueType.TIME, v1 .. ".objectChange(?)#interpolationTime", "Time for interpolation", 1)
  local v6 = string.format("%s if object change is active", "visibility")
  self:register(...)
  v6 = string.format("%s if object change is in active", "visibility")
  self:register(...)
  v6 = string.format("%s if object change is active", "translation")
  self:register(...)
  v6 = string.format("%s if object change is in active", "translation")
  self:register(...)
  v6 = string.format("%s if object change is active", "rotation")
  self:register(...)
  v6 = string.format("%s if object change is in active", "rotation")
  self:register(...)
  v6 = string.format("%s if object change is active", "scale")
  self:register(...)
  v6 = string.format("%s if object change is in active", "scale")
  self:register(...)
  self:register(XMLValueType.STRING, v1 .. ".objectChange(?)#shaderParameter", "Shader parameter name")
  v6 = string.format("%s if object change is active", "shaderParameter")
  self:register(...)
  v6 = string.format("%s if object change is in active", "shaderParameter")
  self:register(...)
  self:register(XMLValueType.BOOL, v1 .. ".objectChange(?)#sharedShaderParameter", "Shader parameter is applied on all objects with the same material", false)
  v6 = string.format("%s if object change is active", "mass")
  self:register(...)
  v6 = string.format("%s if object change is in active", "mass")
  self:register(...)
  v6 = string.format("%s if object change is active", "center of mass")
  self:register(...)
  v6 = string.format("%s if object change is in active", "center of mass")
  self:register(...)
  v6 = string.format("%s if object change is active", "compound child state")
  self:register(...)
  v6 = string.format("%s if object change is in active", "compound child state")
  self:register(...)
  v6 = string.format("%s if object change is active", "rigid body type")
  self:register(...)
  v6 = string.format("%s if object change is in active", "rigid body type")
  self:register(...)
  v6 = string.format("%s if object change is active", "parent node")
  self:register(...)
  v6 = string.format("%s if object change is in active", "parent node")
  self:register(...)
end
function ObjectChangeUtil:addAdditionalObjectChangeXMLPaths(v1)
  self:addDelayedRegistrationFunc("ObjectChange", v1)
end
