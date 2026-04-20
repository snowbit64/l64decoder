-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FrontloaderAttacher = {}
function FrontloaderAttacher.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(AttacherJoints, v0)
end
function FrontloaderAttacher.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", FrontloaderAttacher)
  SpecializationUtil.registerEventListener(v0, "onPreDetachImplement", FrontloaderAttacher)
  SpecializationUtil.registerEventListener(v0, "onPreAttachImplement", FrontloaderAttacher)
end
function FrontloaderAttacher.initSpecialization()
  local v3 = v3:getText("configuration_frontloaderAttacher")
  v0:addConfigurationType("frontloader", v3, nil, nil, nil, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  Vehicle.xmlSchema:setXMLSpecializationType("FrontloaderAttacher")
  AttacherJoints.registerAttacherJointXMLPaths(Vehicle.xmlSchema, "vehicle.frontloaderConfigurations.frontloaderConfiguration(?)" .. ".attacherJoint")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.frontloaderConfigurations.frontloaderConfiguration(?)" .. ".attacherJoint#frontAxisLimitJoint", "Front axis joint will be limited while attached", true)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.frontloaderConfigurations.frontloaderConfiguration(?)" .. ".attacherJoint#frontAxisJoint", "Front axis joint index", 1)
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.frontloaderConfigurations.frontloaderConfiguration(?)")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function FrontloaderAttacher:onLoad(v1)
  if self.configurations.frontloader ~= nil then
    self.spec_frontloaderAttacher.attacherJoint = {}
    local v4 = string.format("vehicle.frontloaderConfigurations.frontloaderConfiguration(%d)", self.configurations.frontloader - 1)
    local v5 = v5:hasProperty(v4 .. ".attacherJoint")
    if v5 then
      v5 = self:loadAttacherJointFromXML(self.spec_frontloaderAttacher.attacherJoint, self.xmlFile, v4 .. ".attacherJoint", 0)
      if v5 then
        table.insert(self.spec_attacherJoints.attacherJoints, self.spec_frontloaderAttacher.attacherJoint)
        v5 = v5:getValue(v4 .. ".attacherJoint#frontAxisLimitJoint", true)
        if v5 then
          local v6 = v6:getValue(v4 .. ".attacherJoint#frontAxisJoint", 1)
          if self.componentJoints[v6] ~= nil then
            self.spec_frontloaderAttacher.frontAxisJoint = v6
          else
            local v14 = tostring(v6)
            print("Warning: Invalid front-axis joint '" .. v14 .. "' in '" .. self.configFileName .. "'")
          end
        end
        ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.frontloaderConfigurations.frontloaderConfiguration", self.configurations.frontloader, self.components, self)
        return
      end
    end
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.frontloaderConfigurations.frontloaderConfiguration", 1, self.components, self)
    v2.attacherJoint = nil
  end
end
function FrontloaderAttacher:onPreDetachImplement(v1)
  if self.spec_frontloaderAttacher.frontAxisJoint ~= nil then
    local v5 = self:getAttacherJoints()
    if v5 ~= nil then
    end
    if v3 ~= nil and v3.jointType == AttacherJoints.JOINTTYPE_ATTACHABLEFRONTLOADER and self.isServer then
      -- TODO: structure LOP_FORNPREP (pc 29, target 47)
      self:setComponentJointRotLimit(self.componentJoints[v2.frontAxisJoint], 1, -v2.rotLimit[1], v2.rotLimit[1])
      -- TODO: structure LOP_FORNLOOP (pc 46, target 30)
    end
  end
end
function FrontloaderAttacher:onPreAttachImplement(v1, v2, v3)
  if self.spec_frontloaderAttacher.frontAxisJoint ~= nil then
    local v6 = self:getAttacherJoints()
    if v6 ~= nil then
    end
    if v5 ~= nil and v5.jointType == AttacherJoints.JOINTTYPE_ATTACHABLEFRONTLOADER and self.isServer then
      local v8 = unpack(self.componentJoints[v4.frontAxisJoint].rotLimit)
      v4.rotLimit = {}
      -- TODO: structure LOP_FORNPREP (pc 44, target 57)
      self:setComponentJointRotLimit(self.componentJoints[v4.frontAxisJoint], 1, 0, 0)
      -- TODO: structure LOP_FORNLOOP (pc 56, target 45)
    end
  end
end
